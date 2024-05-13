package framework.fpga.vc707

import chipyard.CanHaveMasterTLMemPort
import chipyard.harness.{HasHarnessInstantiators, OverrideHarnessBinder}
import chipyard.iobinders.JTAGChipIO
import chisel3._
import chisel3.experimental.BaseModule
import freechips.rocketchip.devices.debug.HasPeripheryDebug
import freechips.rocketchip.diplomacy.LazyRawModuleImp
import freechips.rocketchip.tilelink.TLBundle
import freechips.rocketchip.util.HeterogeneousBag
import sifive.blocks.devices.spi.{HasPeripherySPI, SPIPortIO}
import sifive.blocks.devices.uart.{HasPeripheryUARTModuleImp, UARTPortIO}
import testchipip._


class WithVC707UART extends OverrideHarnessBinder ({
  (system: HasPeripheryUARTModuleImp, th: HasHarnessInstantiators, ports: Seq[UARTPortIO]) => {
    val ath = th.asInstanceOf[LazyRawModuleImp].wrapper.asInstanceOf[VC707Harness]
    ath.io_uart_bb.bundle <> ports.head
  }
})

class WithVC707UARTSerial extends OverrideHarnessBinder ({
  (system: HasPeripheryUARTModuleImp, th: HasHarnessInstantiators, ports: Seq[UARTPortIO]) => {
    val ath = th.asInstanceOf[LazyRawModuleImp].wrapper.asInstanceOf[VC707woDDRHarness]
    ath.io_uart_bb.bundle <> ports.head
  }
})

class WithVC707DDRTL extends OverrideHarnessBinder({
  (system: CanHaveMasterTLMemPort, th: HasHarnessInstantiators, ports: Seq[HeterogeneousBag[TLBundle]]) => {
    require(ports.size == 1)
    val artyTh = th.asInstanceOf[LazyRawModuleImp].wrapper.asInstanceOf[VC707Harness]
    val bundles = artyTh.ddrClient.out.map(_._1)
    val ddrClientBundle = Wire(new HeterogeneousBag(bundles.map(_.cloneType)))
    bundles.zip(ddrClientBundle).foreach { case (bundle, io) => bundle <> io }
    ddrClientBundle <> ports.head
  }
})

class WithTSITieoff extends OverrideHarnessBinder({
  (system: CanHavePeripheryTLSerial, th: HasHarnessInstantiators, ports: Seq[ClockedIO[SerialIO]]) => {
    ports.map({ port =>
      val bits = port.bits
      port.clock := th.harnessBinderClock
      val ram = TSIHarness.connectRAM(system.serdesser.get, bits, th.harnessBinderReset)
      TSIHarness.tieoff(ram.module.io.tsi)
    })
  }
})

class WithVC707JTAG extends OverrideHarnessBinder ({
  (system: HasPeripheryDebug, th: HasHarnessInstantiators, ports: Seq[Data]) => {
    val ath = th.asInstanceOf[LazyRawModuleImp].wrapper.asInstanceOf[VC707Harness]
    ports.map {
      case jtagIO: JTAGChipIO =>
        val jtagModule = ath.jtagOverlay
        jtagModule.TDO.data := jtagIO.TDO
        jtagModule.TDO.driven := true.B
        jtagIO.TCK := jtagModule.TCK
        jtagIO.TMS := jtagModule.TMS
        jtagIO.TDI := jtagModule.TDI
    }
  }
})

class WithVC707JTAGSerial extends OverrideHarnessBinder ({
  (system: HasPeripheryDebug, th: HasHarnessInstantiators, ports: Seq[Data]) => {
    val ath = th.asInstanceOf[LazyRawModuleImp].wrapper.asInstanceOf[VC707woDDRHarness]
    ports.map {
      case jtagIO: JTAGChipIO =>
        val jtagModule = ath.jtagOverlay
        jtagModule.TDO.data := jtagIO.TDO
        jtagModule.TDO.driven := true.B
        jtagIO.TCK := jtagModule.TCK
        jtagIO.TMS := jtagModule.TMS
        jtagIO.TDI := jtagModule.TDI
    }
  }
})

class WithVC707SPISDCard extends OverrideHarnessBinder ({
  (system: HasPeripherySPI, th: HasHarnessInstantiators, ports: Seq[SPIPortIO]) => {
    val ath = th.asInstanceOf[LazyRawModuleImp].wrapper.asInstanceOf[VC707Harness]
    ath.io_spi_bb.bundle <> ports.head
  }
})

class WithVC707SPISDCardSerial extends OverrideHarnessBinder ({
  (system: HasPeripherySPI, th: HasHarnessInstantiators, ports: Seq[SPIPortIO]) => {
    val ath = th.asInstanceOf[LazyRawModuleImp].wrapper.asInstanceOf[VC707woDDRHarness]
    ath.io_spi_bb.bundle <> ports.head
  }
})

/*** UART ***/
class WithVC707UARTHarnessBinder extends OverrideHarnessBinder({
  (system: HasPeripheryUARTModuleImp, th: BaseModule, ports: Seq[UARTPortIO]) => {
    th match { case vc707th: VC707FPGATestHarnessImp => {
      vc707th.vc707Outer.io_uart_bb.bundle <> ports.head
    }}
  }
})

/*** SPI ***/
class WithVC707SPISDCardHarnessBinder extends OverrideHarnessBinder({
  (system: HasPeripherySPI, th: BaseModule, ports: Seq[SPIPortIO]) => {
    th match { case vc707th: VC707FPGATestHarnessImp => {
      vc707th.vc707Outer.io_spi_bb.bundle <> ports.head
    }}
  }
})

/*** Experimental DDR ***/
class WithVC707DDRMemHarnessBinder extends OverrideHarnessBinder({
  (system: CanHaveMasterTLMemPort, th: BaseModule, ports: Seq[HeterogeneousBag[TLBundle]]) => {
    th match { case vc707th: VC707FPGATestHarnessImp => {
      require(ports.size == 1)

      val bundles = vc707th.vc707Outer.ddrClient.out.map(_._1)
      val ddrClientBundle = Wire(new HeterogeneousBag(bundles.map(_.cloneType)))
      bundles.zip(ddrClientBundle).foreach { case (bundle, io) => bundle <> io }
      ddrClientBundle <> ports.head
    }}
  }
})