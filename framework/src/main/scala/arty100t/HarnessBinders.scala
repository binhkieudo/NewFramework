package framework.fpga.arty100t

import chipyard._
import chipyard.harness._
import chipyard.iobinders.JTAGChipIO
import chisel3._
import chisel3.experimental.BaseModule
import freechips.rocketchip.devices.debug.HasPeripheryDebug
import freechips.rocketchip.diplomacy.LazyRawModuleImp
import freechips.rocketchip.subsystem.PeripheryBusKey
import freechips.rocketchip.tilelink.TLBundle
import freechips.rocketchip.util.HeterogeneousBag
import sifive.blocks.devices.gpio.{GPIOPortIO, HasPeripheryGPIOModuleImp}
import sifive.blocks.devices.spi.{HasPeripherySPI, HasPeripherySPIFlash, HasPeripherySPIFlashModuleImp, SPIPortIO}
import sifive.blocks.devices.uart.{HasPeripheryUARTModuleImp, UARTParams, UARTPortIO}
import testchipip._

class WithArty100TGPIO

//class WithArty100TUARTTSI(uartBaudRate: BigInt = 115200) extends OverrideHarnessBinder({
//  (system: CanHavePeripheryTLSerial, th: HasHarnessInstantiators, ports: Seq[ClockedIO[SerialIO]]) => {
//    implicit val p = chipyard.iobinders.GetSystemParameters(system)
//    ports.map({ port =>
//      val ath = th.asInstanceOf[LazyRawModuleImp].wrapper.asInstanceOf[Arty100THarness]
//      val freq = p(PeripheryBusKey).dtsFrequency.get
//      val bits = port.bits
//      port.clock := th.harnessBinderClock
//      val ram = TSIHarness.connectRAM(system.serdesser.get, bits, th.harnessBinderReset)
//      val uart_to_serial = Module(new UARTToSerial(
//        freq, UARTParams(0, initBaudRate=uartBaudRate)))
//      val serial_width_adapter = Module(new SerialWidthAdapter(
//        narrowW = 8, wideW = TSI.WIDTH))
//      serial_width_adapter.io.narrow.flipConnect(uart_to_serial.io.serial)
//
//      ram.module.io.tsi.flipConnect(serial_width_adapter.io.wide)
//
//      ath.io_uart_bb.bundle <> uart_to_serial.io.uart
//    })
//  }
//})
//
//class WithArty100TUART extends OverrideHarnessBinder ({
//  (system: HasPeripheryUARTModuleImp, th: HasHarnessInstantiators, ports: Seq[UARTPortIO]) => {
//    val ath = th.asInstanceOf[LazyRawModuleImp].wrapper.asInstanceOf[Arty100THarness]
//    ath.io_uart_bb.bundle <> ports.head
//  }
//})
//
//class WithArty100TDDRTL extends OverrideHarnessBinder({
//  (system: CanHaveMasterTLMemPort, th: HasHarnessInstantiators, ports: Seq[HeterogeneousBag[TLBundle]]) => {
//    require(ports.size == 1)
//    val artyTh = th.asInstanceOf[LazyRawModuleImp].wrapper.asInstanceOf[Arty100THarness]
//    val bundles = artyTh.ddrClient.out.map(_._1)
//    val ddrClientBundle = Wire(new HeterogeneousBag(bundles.map(_.cloneType)))
//    bundles.zip(ddrClientBundle).foreach { case (bundle, io) => bundle <> io }
//    ddrClientBundle <> ports.head
//  }
//})
//
//class WithArty100TJTAG extends OverrideHarnessBinder ({
//  (system: HasPeripheryDebug, th: HasHarnessInstantiators, ports: Seq[Data]) => {
//    val ath = th.asInstanceOf[LazyRawModuleImp].wrapper.asInstanceOf[Arty100THarness]
//    ports.map {
//      case jtagIO: JTAGChipIO =>
//        val jtagModule = ath.jtagOverlay
//        jtagModule.TDO.data := jtagIO.TDO
//        jtagModule.TDO.driven := true.B
//        jtagIO.TCK := jtagModule.TCK
//        jtagIO.TMS := jtagModule.TMS
//        jtagIO.TDI := jtagModule.TDI
//    }
//  }
//})
//
///*** Tie off TSI ***/
//class WithArty100TTSITieoff extends OverrideHarnessBinder ({
//  (system: CanHavePeripheryTLSerial, th: BaseModule, ports: Seq[ClockedIO[SerialIO]]) => {
//    th match {
//      case vc707th: Arty100TwoDDRHarness => {
//        ports.map({ port =>
//          val bits = port.bits
//          port.clock := vc707th.harnessBinderClock
//          val ram = TSIHarness.connectRAM(system.serdesser.get, bits, vc707th.harnessBinderReset)
//          TSIHarness.tieoff(ram.module.io.tsi)
//        })
//      }
//    }
//  }
//})

/*** UART ***/
class WithArty100TUARTHarnessBinder extends OverrideHarnessBinder({
  (system: HasPeripheryUARTModuleImp, th: BaseModule, ports: Seq[UARTPortIO]) => {
    th match {
//      case ath: VC707HarnessImp => vc707th.vc707Outer.io_uart_bb.bundle <> ports.head
      case ath: Arty100TwoDDRHarnessImp => ath.athOuter.io_uart_bb.bundle <> ports.head
    }
  }
})

/*** SPI ***/
class WithArty100TSPISDCardHarnessBinder extends OverrideHarnessBinder({
  (system: HasPeripherySPI, th: BaseModule, ports: Seq[SPIPortIO]) => {
    println("here spi")
    println(ports)
    th match {
//      case ath: VC707HarnessImp => vc707th.vc707Outer.io_spi_bb.bundle <> ports.head
      case ath: Arty100TwoDDRHarnessImp => ath.athOuter.io_spi_bb.bundle <> ports(0)
    }
  }
})

/*** Flash ***/
class WithArty100TFlashHarnessBinder extends OverrideHarnessBinder({
  (system: HasPeripherySPIFlash, th: BaseModule, ports: Seq[SPIPortIO]) => {
    println("here qspi")
    println(ports)
    th match {
      //      case ath: VC707HarnessImp => vc707th.vc707Outer.io_spi_bb.bundle <> ports.head
      case ath: Arty100TwoDDRHarnessImp => ath.athOuter.io_flash_bb.bundle <> ports(0)
    }
  }
})

/*** JTAG ***/
class WithArty100TJTAGHarnessBinder extends OverrideHarnessBinder({
  (system: HasPeripheryDebug, th: BaseModule, ports: Seq[Data]) => {
    ports.map {
      case jtagIO: JTAGChipIO =>
        th match {
//          case vc707th: VC707HarnessImp => {
//            val jtagModule = vc707th.vc707Outer.jtagModule
//            jtagModule.TDO.data := jtagIO.TDO
//            jtagModule.TDO.driven := true.B
//            jtagIO.TCK := jtagModule.TCK
//            jtagIO.TMS := jtagModule.TMS
//            jtagIO.TDI := jtagModule.TDI
//          }
          case ath: Arty100TwoDDRHarnessImp => {
            val jtagModule = ath.athOuter.jtagModule
            jtagModule.TDO.data := jtagIO.TDO
            jtagModule.TDO.driven := true.B
            jtagIO.TCK := jtagModule.TCK
            jtagIO.TMS := jtagModule.TMS
            jtagIO.TDI := jtagModule.TDI
          }
        }
    }
  }
})

/*** GPIO ***/
class WithArty100TGPIOHarnessBinder extends OverrideHarnessBinder({
  (system: HasPeripheryGPIOModuleImp, th: BaseModule, ports: Seq[GPIOPortIO]) => {
    th match {
      case th: Arty100TwoDDRHarnessImp => {
        (th.athOuter.io_gpio_bb zip ports).map{ case (gpio, port) =>
          gpio.bundle <> port
        }
      }
    }
  }
})

/*** Experimental DDR ***/
//class WithVC707DDRMemHarnessBinder extends OverrideHarnessBinder({
//  (system: CanHaveMasterTLMemPort, th: BaseModule, ports: Seq[HeterogeneousBag[TLBundle]]) => {
//    th match {
//      case vc707th: VC707HarnessImp => {
//        require(ports.size == 1)
//
//        val bundles = vc707th.vc707Outer.ddrClient.out.map(_._1)
//        val ddrClientBundle = Wire(new HeterogeneousBag(bundles.map(_.cloneType)))
//        bundles.zip(ddrClientBundle).foreach { case (bundle, io) => bundle <> io }
//        ddrClientBundle <> ports.head
//      }
//    }
//  }
//})

/*** Tie off TSI ***/
class WithArty100TTSITieoff extends OverrideHarnessBinder ({
  (system: CanHavePeripheryTLSerial, th: BaseModule, ports: Seq[ClockedIO[SerialIO]]) => {
    th match {
      case athOuter: Arty100TwoDDRHarnessImp => {
        ports.map({ port =>
          val bits = port.bits
          port.clock := athOuter.harnessBinderClock
          val ram = TSIHarness.connectRAM(system.serdesser.get, bits, athOuter.harnessBinderReset)
          TSIHarness.tieoff(ram.module.io.tsi)
        })
      }
    }
  }
})