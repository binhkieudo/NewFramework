package framework.fpga.vc707

import chisel3.{Bool, Clock, Input, Module, Wire}
import freechips.rocketchip.diplomacy.{InModuleBody, LazyModule, LazyRawModuleImp, ValName}
import org.chipsalliance.cde.config.Parameters
import sifive.fpgashells.ip.xilinx.{IBUF, PowerOnResetFPGAOnly}
import sifive.fpgashells.shell.xilinx.Series7Shell
import sifive.fpgashells.shell.{ClockInputDesignInput, ClockInputOverlayKey, ClockInputShellInput, DDROverlayKey, DDRShellInput, DesignKey, JTAGDebugOverlayKey, JTAGDebugShellInput, LEDOverlayKey, LEDShellInput, SPIOverlayKey, SPIShellInput, UARTOverlayKey, UARTShellInput}

abstract class VC707ShellCustomOverlays()(implicit p: Parameters) extends Series7Shell
{
  // System
  val pllReset = InModuleBody { Wire(Bool()) }
  val sys_clock = Overlay(ClockInputOverlayKey, new SysClockVC707ShellPlacer(this, ClockInputShellInput()))

  // Peripheries
  val ddr       = Overlay(DDROverlayKey, new DDRVC707ShellPlacer(this, DDRShellInput()))
  val led       = Seq.tabulate(8)(i => Overlay(LEDOverlayKey, new LEDVC707ShellPlacer(this,
    LEDShellInput(color = "red", number = i))(valName = ValName(s"led_$i"))))
  val jtag      = Overlay(JTAGDebugOverlayKey, new JTAGDebugVC707ShellPlacer(this, JTAGDebugShellInput()))
  val uart      = Overlay(UARTOverlayKey, new UARTVC707ShellPlacer(this, UARTShellInput()))
  val sdio      = Overlay(SPIOverlayKey, new SDIOVC707ShellPlacer(this, SPIShellInput()))
}