package framework.fpga.vc707

import chipyard.ExtTLMem
import chipyard.harness.HasHarnessInstantiators
import chisel3._
import chisel3.util.log2Ceil
import freechips.rocketchip.diplomacy.{BundleBridgeSource, IdRange, LazyModule, LazyRawModuleImp}
import freechips.rocketchip.subsystem.SystemBusKey
import freechips.rocketchip.tilelink.{TLBlockDuringReset, TLClientNode, TLMasterParameters, TLMasterPortParameters}
import org.chipsalliance.cde.config.Parameters
import sifive.blocks.devices.spi.{PeripherySPIKey, SPIPortIO}
import sifive.blocks.devices.uart.{PeripheryUARTKey, UARTParams, UARTPortIO}
import sifive.fpgashells.clocks.{ClockGroup, ClockSinkNode, PLLFactoryKey, ResetWrangler}
import sifive.fpgashells.ip.xilinx.{IBUF, PowerOnResetFPGAOnly}
import sifive.fpgashells.shell.xilinx.{ChipLinkVC707PlacedOverlay, UARTVC707ShellPlacer, VC707Shell}
import sifive.fpgashells.shell.{ButtonDesignInput, ButtonOverlayKey, ClockInputDesignInput, ClockInputOverlayKey, DDRDesignInput, DDROverlayKey, JTAGDebugDesignInput, JTAGDebugOverlayKey, LEDDesignInput, LEDOverlayKey, SPIDesignInput, SPIOverlayKey, SwitchDesignInput, SwitchOverlayKey, UARTDesignInput, UARTOverlayKey, UARTShellInput}

class VC707FPGATestHarness(override implicit val p: Parameters) extends VC707Shell { outer =>

  def dp = designParameters

  // Order matters; ddr depends on sys_clock
  val uart = Overlay(UARTOverlayKey, new UARTVC707ShellPlacer(this, UARTShellInput()))

  // place all clocks in the shell
  require(dp(ClockInputOverlayKey).size >= 1)
  val sysClkNode = dp(ClockInputOverlayKey).head.place(ClockInputDesignInput()).overlayOutput.node

  /*** Connect/Generate clocks ***/

  // connect to the PLL that will generate multiple clocks
  val harnessSysPLL = dp(PLLFactoryKey)()
  harnessSysPLL := sysClkNode

  // create and connect to the dutClock
  val dutFreqMHz = (dp(SystemBusKey).dtsFrequency.get / (1000 * 1000)).toInt
  val dutClock = ClockSinkNode(freqMHz = dutFreqMHz)
  println(s"VC707 FPGA Base Clock Freq: ${dutFreqMHz} MHz")
  val dutWrangler = LazyModule(new ResetWrangler)
  val dutGroup = ClockGroup()
  dutClock := dutWrangler.node := dutGroup := harnessSysPLL

  /*** LED ***/
  val ledModule = dp(LEDOverlayKey).map(_.place(LEDDesignInput()).overlayOutput.led)

  /*** Switch ***/
  val switchModule = dp(SwitchOverlayKey).map(_.place(SwitchDesignInput()).overlayOutput.sw)

  /*** Button ***/
  val buttonModule = dp(ButtonOverlayKey).map(_.place(ButtonDesignInput()).overlayOutput.but)

  /*** JTAG ***/
  val jtagModule = dp(JTAGDebugOverlayKey).head.place(JTAGDebugDesignInput()).overlayOutput.jtag

  /*** UART ***/

  // 1st UART goes to the VC707 dedicated UART

  val io_uart_bb = BundleBridgeSource(() => (new UARTPortIO(dp(PeripheryUARTKey).head)))
  dp(UARTOverlayKey).head.place(UARTDesignInput(io_uart_bb))

  /*** SPI ***/

  // 1st SPI goes to the VC707 SDIO port

  val io_spi_bb = BundleBridgeSource(() => (new SPIPortIO(dp(PeripherySPIKey).head)))
  dp(SPIOverlayKey).head.place(SPIDesignInput(dp(PeripherySPIKey).head, io_spi_bb))

  /*** DDR ***/

  // Modify the last field of `DDRDesignInput` for 1GB RAM size
  val ddrNode = dp(DDROverlayKey).head.place(DDRDesignInput(dp(ExtTLMem).get.master.base, dutWrangler.node, harnessSysPLL, true)).overlayOutput.ddr
  val ddrClient = TLClientNode(Seq(TLMasterPortParameters.v1(Seq(TLMasterParameters.v1(
    name = "chip_ddr",
    sourceId = IdRange(0, 1 << dp(ExtTLMem).get.master.idBits)
  )))))

  ddrNode := ddrClient

  // module implementation
  override lazy val module = new VC707FPGATestHarnessImp(this)
}

class VC707FPGATestHarnessImp(_outer: VC707FPGATestHarness) extends LazyRawModuleImp(_outer) with HasHarnessInstantiators {
  val vc707Outer = _outer

  val reset = IO(Input(Bool()))
  _outer.xdc.addBoardPin(reset, "reset")

  val resetIBUF = Module(new IBUF)
  resetIBUF.io.I := reset

  val sysclk: Clock = _outer.sysClkNode.out.head._1.clock

  val powerOnReset: Bool = PowerOnResetFPGAOnly(sysclk)
  _outer.sdc.addAsyncPath(Seq(powerOnReset))

  val ereset: Bool = _outer.chiplink.get() match {
    case Some(x: ChipLinkVC707PlacedOverlay) => !x.ereset_n
    case _ => false.B
  }

  _outer.pllReset := (resetIBUF.io.O || powerOnReset || ereset)

  // reset setup
  val hReset = Wire(Reset())
  hReset := _outer.dutClock.in.head._1.reset

  def referenceClockFreqMHz = _outer.dutFreqMHz
  def referenceClock = _outer.dutClock.in.head._1.clock
  def referenceReset = hReset
  def success = { require(false, "Unused"); false.B }

  childClock := referenceClock
  childReset := referenceReset

  instantiateChipTops()
}

class VC707Harness(override implicit val p: Parameters) extends VC707CustomShell {

  def dp = designParameters

  // ========= Clock =================
  require(dp(ClockInputOverlayKey).size >= 1)
  val clockOverlay = dp(ClockInputOverlayKey).head.place(ClockInputDesignInput())
  val sysClkNode = clockOverlay.overlayOutput.node
  // connect to the PLL that will generate multiple clocks
  val harnessSysPLL = dp(PLLFactoryKey)
  val harnessSysPLLNode = harnessSysPLL()
  harnessSysPLLNode := sysClkNode
  // create and connect to the dutClock
  val dutFreqMHz = (dp(SystemBusKey).dtsFrequency.get / (1000 * 1000)).toInt
  val dutClock = ClockSinkNode(freqMHz = dutFreqMHz)
  println(s"VC707 FPGA Base Clock Freq: ${dutFreqMHz} MHz")
  val dutWrangler = LazyModule(new ResetWrangler)
  val dutGroup = ClockGroup()
  dutClock := dutWrangler.node := dutGroup := harnessSysPLLNode

  // ========= UART =================
  val io_uart_bb = BundleBridgeSource(() => new UARTPortIO(dp(PeripheryUARTKey).headOption.getOrElse(UARTParams(0))))
  val uartOverlay = dp(UARTOverlayKey).head.place(UARTDesignInput(io_uart_bb))

  // ========== DDR =================
  val ddrOverlay = dp(DDROverlayKey).head.place(DDRDesignInput(dp(ExtTLMem).get.master.base, dutWrangler.node, harnessSysPLLNode, true)).asInstanceOf[DDRVC707PlacedOverlay]
  val ddrClient = TLClientNode(Seq(TLMasterPortParameters.v1(Seq(TLMasterParameters.v1(
    name = "chip_ddr",
    sourceId = IdRange(0, 1 << dp(ExtTLMem).get.master.idBits)
  )))))
  val ddrBlockDuringReset = LazyModule(new TLBlockDuringReset(4))
  ddrOverlay.overlayOutput.ddr := ddrBlockDuringReset.node := ddrClient

  // ========= Status LED =================
  val ledStatusOverlays = dp(LEDOverlayKey).map(_.place(LEDDesignInput()))
  val status_leds = ledStatusOverlays.map(_.overlayOutput.led)

  // ========= JTAG =======================
  val jtagOverlay = dp(JTAGDebugOverlayKey).head.place(JTAGDebugDesignInput()).overlayOutput.jtag

  // ========= SDIO =======================
  val io_spi_bb = BundleBridgeSource(() => (new SPIPortIO(dp(PeripherySPIKey).head)))
  val sdioOverlay = dp(SPIOverlayKey).head.place(SPIDesignInput(dp(PeripherySPIKey).head, io_spi_bb))

  // ====== Module implementation =========
  override lazy val module = new HarnessLikeImpl
  class HarnessLikeImpl extends Impl with HasHarnessInstantiators
  {
    val clk_tick = clockOverlay.overlayOutput.node.out.head._1.clock

    // Blink the status LEDs for sanity
    withClockAndReset(clk_tick, dutClock.in.head._1.reset) {
      val period = (BigInt(100) << 20) / 2
      val counter = RegInit(0.U(log2Ceil(period).W))
      val on = RegInit(0.U(1.W))
      counter := Mux(counter === (period-1).U, 0.U, counter + 1.U)
      when (counter === 0.U) {
        on := !on
      }
      status_leds(2) := on
    }

    status_leds(0) := resetPin

    harnessSysPLL.plls.foreach(_._1.getReset.get := pllReset)

    def referenceClockFreqMHz = dutFreqMHz
    def referenceClock = dutClock.in.head._1.clock
    def referenceReset = dutClock.in.head._1.reset
    def success = { require(false, "Unused"); false.B }

    ddrOverlay.mig.module.clock := harnessBinderClock
    ddrOverlay.mig.module.reset := harnessBinderReset
    ddrBlockDuringReset.module.clock := harnessBinderClock
    ddrBlockDuringReset.module.reset := harnessBinderReset.asBool || !ddrOverlay.mig.module.io.port.init_calib_complete

    status_leds(1) := ddrOverlay.mig.module.io.port.init_calib_complete

    instantiateChipTops()
  }
}

class VC707woDDRHarness(override implicit val p: Parameters) extends VC707CustomShell {

  def dp = designParameters

  // ========= Clock =================
  require(dp(ClockInputOverlayKey).size >= 1)
  val clockOverlay = dp(ClockInputOverlayKey).head.place(ClockInputDesignInput())
  val sysClkNode = clockOverlay.overlayOutput.node
  // connect to the PLL that will generate multiple clocks
  val harnessSysPLL = dp(PLLFactoryKey)
  val harnessSysPLLNode = harnessSysPLL()
  harnessSysPLLNode := sysClkNode
  // create and connect to the dutClock
  val dutFreqMHz = (dp(SystemBusKey).dtsFrequency.get / (1000 * 1000)).toInt
  val dutClock = ClockSinkNode(freqMHz = dutFreqMHz)
  println(s"VC707 FPGA Base Clock Freq: ${dutFreqMHz} MHz")
  val dutWrangler = LazyModule(new ResetWrangler)
  val dutGroup = ClockGroup()
  dutClock := dutWrangler.node := dutGroup := harnessSysPLLNode

  // ========= UART =================
  val io_uart_bb = BundleBridgeSource(() => new UARTPortIO(dp(PeripheryUARTKey).headOption.getOrElse(UARTParams(0))))
  val uartOverlay = dp(UARTOverlayKey).head.place(UARTDesignInput(io_uart_bb))

  // ========= Status LED =================
  val ledStatusOverlays = dp(LEDOverlayKey).map(_.place(LEDDesignInput()))
  val status_leds = ledStatusOverlays.map(_.overlayOutput.led)

  // ========= JTAG =======================
  val jtagOverlay = dp(JTAGDebugOverlayKey).head.place(JTAGDebugDesignInput()).overlayOutput.jtag

  // ========= SDIO =======================
  val io_spi_bb = BundleBridgeSource(() => (new SPIPortIO(dp(PeripherySPIKey).head)))
  val sdcardOverlay = dp(SPIOverlayKey).head.place(SPIDesignInput(dp(PeripherySPIKey).head, io_spi_bb))

  // ====== Module implementation =========
  override lazy val module = new HarnessLikeImpl
  class HarnessLikeImpl extends Impl with HasHarnessInstantiators
  {
    val clk_tick = clockOverlay.overlayOutput.node.out.head._1.clock

    // Blink the status LEDs for sanity
    withClockAndReset(clk_tick, dutClock.in.head._1.reset) {
      val period = (BigInt(100) << 20) / 2
      val counter = RegInit(0.U(log2Ceil(period).W))
      val on = RegInit(0.U(1.W))
      counter := Mux(counter === (period-1).U, 0.U, counter + 1.U)
      when (counter === 0.U) {
        on := !on
      }
      status_leds(1) := !on
      status_leds(2) := on
    }

    status_leds(0) := resetPin

    harnessSysPLL.plls.foreach(_._1.getReset.get := pllReset)

    def referenceClockFreqMHz = dutFreqMHz
    def referenceClock = dutClock.in.head._1.clock
    def referenceReset = dutClock.in.head._1.reset
    def success = { require(false, "Unused"); false.B }

    instantiateChipTops()
  }
}