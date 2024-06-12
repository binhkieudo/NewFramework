package framework.fpga.arty100t

import chipyard._
import chipyard.harness._
import chisel3._
import chisel3.util._
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.subsystem.SystemBusKey
import freechips.rocketchip.tilelink._
import org.chipsalliance.cde.config.Parameters
import sifive.blocks.devices.gpio.{GPIOPortIO, PeripheryGPIOKey}
import sifive.blocks.devices.spi.{PeripherySPIFlashKey, PeripherySPIKey, SPIPortIO}
import sifive.blocks.devices.uart._
import sifive.fpgashells.clocks.{ClockGroup, ClockSinkNode, PLLFactoryKey, ResetWrangler}
import sifive.fpgashells.ip.xilinx.IBUF
import sifive.fpgashells.shell._

//class Arty100THarness(override implicit val p: Parameters) extends Arty100TCustomShell
//{
//  def dp = designParameters
//
//  // ========= Clock =================
//  val clockOverlay = dp(ClockInputOverlayKey).map(_.place(ClockInputDesignInput())).head
//  val harnessSysPLL = dp(PLLFactoryKey)
//  val harnessSysPLLNode = harnessSysPLL()
//  val dutFreqMHz = (dp(SystemBusKey).dtsFrequency.get / (1000 * 1000)).toInt
//  val dutClock = ClockSinkNode(freqMHz = dutFreqMHz)
//  println(s"Arty100T FPGA Base Clock Freq: ${dutFreqMHz} MHz")
//  val dutWrangler = LazyModule(new ResetWrangler())
//  val dutGroup = ClockGroup()
//  dutClock := dutWrangler.node := dutGroup := harnessSysPLLNode
//
//  harnessSysPLLNode := clockOverlay.overlayOutput.node
//
//  // ========= UART =================
//  val io_uart_bb = BundleBridgeSource(() => new UARTPortIO(dp(PeripheryUARTKey).headOption.getOrElse(UARTParams(0))))
//  val uartOverlay = dp(UARTOverlayKey).head.place(UARTDesignInput(io_uart_bb))
//
//  // ========= DDR =================
//  val ddrOverlay = dp(DDROverlayKey).head.place(DDRDesignInput(dp(ExtTLMem).get.master.base, dutWrangler.node, harnessSysPLLNode)).asInstanceOf[DDRArtyPlacedOverlay]
//  val ddrClient = TLClientNode(Seq(TLMasterPortParameters.v1(Seq(TLMasterParameters.v1(
//    name = "chip_ddr",
//    sourceId = IdRange(0, 1 << dp(ExtTLMem).get.master.idBits)
//  )))))
//  val ddrBlockDuringReset = LazyModule(new TLBlockDuringReset(4))
//  ddrOverlay.overlayOutput.ddr := ddrBlockDuringReset.node := ddrClient
//
//  // ========= Status LED =================
//  val ledStatusOverlays = dp(LEDOverlayKey).map(_.place(LEDDesignInput()))
//  val status_leds = ledStatusOverlays.map(_.overlayOutput.led)
//
//  // ========= JTAG =======================
//  val jtagOverlay = dp(JTAGDebugOverlayKey).head.place(JTAGDebugDesignInput()).overlayOutput.jtag
//
//  override lazy val module = new HarnessLikeImpl
//
//  class HarnessLikeImpl extends Impl with HasHarnessInstantiators {
//    clockOverlay.overlayOutput.node.out(0)._1.reset := ~resetPin
//
//    val clk_tick = clockOverlay.overlayOutput.node.out.head._1.clock
//
//    // Blink the status LEDs for sanity
//    withClockAndReset(clk_tick, dutClock.in.head._1.reset) {
//      val period = (BigInt(100) << 20) / 2
//      val counter = RegInit(0.U(log2Ceil(period).W))
//      val on = RegInit(0.U(1.W))
//      counter := Mux(counter === (period-1).U, 0.U, counter + 1.U)
//      when (counter === 0.U) {
//        on := !on
//      }
//      status_leds(2) := on
//    }
//
//    status_leds(0) := resetPin
//
//    harnessSysPLL.plls.foreach(_._1.getReset.get := pllReset)
//
//    def referenceClockFreqMHz = dutFreqMHz
//    def referenceClock = dutClock.in.head._1.clock
//    def referenceReset = dutClock.in.head._1.reset
//    def success = { require(false, "Unused"); false.B }
//
//    ddrOverlay.mig.module.clock := harnessBinderClock
//    ddrOverlay.mig.module.reset := harnessBinderReset
//    ddrBlockDuringReset.module.clock := harnessBinderClock
//    ddrBlockDuringReset.module.reset := harnessBinderReset.asBool || !ddrOverlay.mig.module.io.port.init_calib_complete
//
//    status_leds(1) := ddrOverlay.mig.module.io.port.init_calib_complete
//
//    instantiateChipTops()
//  }
//}

class Arty100TwoDDRHarness(override implicit val p: Parameters) extends Arty100TShellCustomOverlays
{
  def dp = designParameters

  val sysClkNode = dp(ClockInputOverlayKey).head.place(ClockInputDesignInput()).overlayOutput.node

  // ========= Clock =================
  val harnessSysPLL = dp(PLLFactoryKey)()
  harnessSysPLL := sysClkNode

  // create and connect to the dutClock
  val dutFreqMHz = (dp(SystemBusKey).dtsFrequency.get / (1000 * 1000)).toInt
  val dutClock = ClockSinkNode(freqMHz = dutFreqMHz)
  println(s"Arty100T FPGA Base Clock Freq: ${dutFreqMHz} MHz")
  val dutWrangler = LazyModule(new ResetWrangler())
  val dutGroup = ClockGroup()
  dutClock := dutWrangler.node := dutGroup := harnessSysPLL

  /*** JTAG ***/
  val jtagModule = dp(JTAGDebugOverlayKey).head.place(JTAGDebugDesignInput()).overlayOutput.jtag

  /*** UART ***/
  val io_uart_bb = BundleBridgeSource(() => new UARTPortIO(dp(PeripheryUARTKey).headOption.getOrElse(UARTParams(0))))
  val uartOverlay = dp(UARTOverlayKey).head.place(UARTDesignInput(io_uart_bb))

  /*** GPIO ***/
  val io_gpio_bb = dp(PeripheryGPIOKey).map(p => BundleBridgeSource(() => (new GPIOPortIO(p))))
  (dp(GPIOOverlayKey) zip dp(PeripheryGPIOKey)).zipWithIndex.map { case ((placer, params), i) =>
    placer.place(GPIODesignInput(params, io_gpio_bb(i)))
  }

  /*** SDIO ***/
  val io_spi_bb = BundleBridgeSource(() => (new SPIPortIO(dp(PeripherySPIKey).head)))
  dp(SPIOverlayKey).head.place(SPIDesignInput(dp(PeripherySPIKey).head, io_spi_bb))

  /*** Flash ***/
  val io_flash_bb = BundleBridgeSource(() => (new SPIPortIO(dp(PeripherySPIFlashKey).head)))
  dp(SPIFlashOverlayKey).head.place(SPIFlashDesignInput(io_flash_bb))

  // Module implementation
  override lazy val module = new Arty100TwoDDRHarnessImp(this)

}

class Arty100TwoDDRHarnessImp(_outer: Arty100TwoDDRHarness) extends LazyRawModuleImp(_outer)
  with HasHarnessInstantiators
{
  val athOuter = _outer

  val reset = IO(Input(Bool()))
  _outer.xdc.addBoardPin(reset, "reset")

//  // PLL reset causes
//  val pllReset = InModuleBody { Wire(Bool()) }

  val reset_ibuf = Module(new IBUF)
  reset_ibuf.io.I := reset

  val sysclk: Clock = _outer.sys_clock.get() match {
    case Some(x: SysClockArtyPlacedOverlay) => x.clock
  }

  _outer.pllReset := !reset_ibuf.io.O


  def referenceClockFreqMHz = _outer.dutFreqMHz
  def referenceClock = _outer.dutClock.in.head._1.clock
  def referenceReset = _outer.dutClock.in.head._1.reset
  def success = { require(false, "Unused"); false.B }

  instantiateChipTops()
}