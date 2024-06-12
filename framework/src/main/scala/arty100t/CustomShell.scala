package framework.fpga.arty100t

import chisel3.{Bool, Clock, Input, Module, Wire}
import freechips.rocketchip.diplomacy.{InModuleBody, LazyModule, LazyRawModuleImp, ValName}
import org.chipsalliance.cde.config.Parameters
import sifive.fpgashells.ip.xilinx.{IBUF, PowerOnResetFPGAOnly}
import sifive.fpgashells.shell.xilinx.Series7Shell
import sifive.fpgashells.shell.{CTSResetOverlayKey, CTSResetShellInput, ClockInputDesignInput, ClockInputOverlayKey, ClockInputShellInput, DDROverlayKey, DDRShellInput, DesignKey, GPIOOverlayKey, GPIOShellInput, JTAGDebugOverlayKey, JTAGDebugShellInput, LEDOverlayKey, LEDShellInput, SPIFlashOverlayKey, SPIFlashShellInput, SPIOverlayKey, SPIShellInput, UARTOverlayKey, UARTShellInput}

abstract class Arty100TShellCustomOverlays()(implicit p: Parameters) extends Series7Shell {
  // System
  val pllReset = InModuleBody { Wire(Bool()) }
  val sys_clock = Overlay(ClockInputOverlayKey, new SysClockArtyShellPlacer(this, ClockInputShellInput()))

  // Peripheries
  val ddr   = Overlay(DDROverlayKey, new DDRArtyShellPlacer(this, DDRShellInput()))
  val jtag  = Overlay(JTAGDebugOverlayKey, new JTAGDebugArtyShellPlacer(this, JTAGDebugShellInput()))
  val uart  = Overlay(UARTOverlayKey, new UARTArtyShellPlacer(this, UARTShellInput()))
  val sdio  = Overlay(SPIOverlayKey, new SDIOArtyShellPlacer(this, SPIShellInput()))
  val spi_flash = Overlay(SPIFlashOverlayKey, new SPIFlashArtyShellPlacer(this, SPIFlashShellInput()))
  val gpio  = Seq.tabulate(24)(i => {Overlay(GPIOOverlayKey, new GPIOArtyShellPlacer(this, GPIOShellInput()))})
}

//class Arty100TCustomShell()(implicit p: Parameters) extends Arty100TShellCustomOverlays
//{
//  val resetPin = InModuleBody { Wire(Bool()) }
//  // PLL reset causes
//  val pllReset = InModuleBody { Wire(Bool()) }
//
//  val topDesign = LazyModule(p(DesignKey)(designParameters))
//
//  // Place the sys_clock at the Shell if the user didn't ask for it
//  p(ClockInputOverlayKey).foreach(_.place(ClockInputDesignInput()))
//
//  override lazy val module = new Impl
//  class Impl extends LazyRawModuleImp(this) {
//
//    val reset = IO(Input(Bool()))
//    xdc.addBoardPin(reset, "reset")
//
//    val reset_ibuf = Module(new IBUF)
//    reset_ibuf.io.I := reset
//
//    val sysclk: Clock = sys_clock.get() match {
//      case Some(x: SysClockArtyPlacedOverlay) => x.clock
//    }
//    val powerOnReset = PowerOnResetFPGAOnly(sysclk)
//    sdc.addAsyncPath(Seq(powerOnReset))
//
//    resetPin := reset_ibuf.io.O
//
//    pllReset :=
//      (!reset_ibuf.io.O) || powerOnReset //Arty100T is active low reset
//  }
//}