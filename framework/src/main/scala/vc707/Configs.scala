package framework.fpga.vc707

import freechips.rocketchip.devices.debug.DebugModuleKey
import freechips.rocketchip.devices.tilelink.BootROMLocated
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.subsystem._
import freechips.rocketchip.tile.XLen
import org.chipsalliance.cde.config._
import sifive.blocks.devices.spi.{PeripherySPIKey, SPIParams}
import sifive.blocks.devices.uart.{PeripheryUARTKey, UARTParams}
import sifive.fpgashells.shell.DesignKey
import sifive.fpgashells.shell.xilinx.VC7074GDDRSize
import testchipip.SerialTLKey

import scala.sys.process._

// BootROOM Configuration
class WithSimpleBootROM extends Config((site, here, up) => {
  case BootROMLocated(x) => up(BootROMLocated(x), site).map{ p =>
    val freqMHz = (site(SystemBusKey).dtsFrequency.get / (1000 * 1000)).toLong
    // Make sure that the bootrom is always rebuilt
    val clean = s"make -C framework/src/main/resources/bootROM/basic clean"
    require (clean.! == 0, "Failed to clean")
    // Build the bootrom
    val make = s"make -C framework/src/main/resources/bootROM/basic XLEN=${site(XLen)} PBUS_CLK=${freqMHz}"
    require (make.! == 0, "Failed to build bootrom")
    p.copy(hang = 0x10000, contentFileName = s"./framework/src/main/resources/bootROM/basic/build/sdboot.bin")
  }
})

class WithSystemModifications extends Config((site, here, up) => {
  case DTSTimebase => BigInt{(1e6).toLong}
  case BootROMLocated(x) => up(BootROMLocated(x), site).map{ p =>
    val freqMHz = (site(SystemBusKey).dtsFrequency.get / (1000 * 1000)).toLong
    // Make sure that the bootrom is always rebuilt
    val clean = s"make -C framework/src/main/resources/bootROM/basic clean"
    require (clean.! == 0, "Failed to clean")
    // Build the bootrom
    val make = s"make -C framework/src/main/resources/bootROM/basic XLEN=${site(XLen)} PBUS_CLK=${freqMHz}"
    require (make.! == 0, "Failed to build bootrom")
    p.copy(hang = 0x10000, contentFileName = s"./framework/src/main/resources/bootROM/basic/build/sdboot.bin")
  }
  case ExtMem => up(ExtMem, site).map(x => x.copy(master = x.master.copy(size = site(VC7074GDDRSize)))) // set extmem to DDR size (note the size)
  case SerialTLKey => None // remove serialized tl port
  case DesignKey => (p: Parameters) => new SimpleLazyModule()(p)
})

// don't use FPGAShell's DesignKey
class WithNoDesignKey extends Config((site, here, up) => {
  case DesignKey => (p: Parameters) => new SimpleLazyModule()(p)
})

class WithNoSerialTL extends Config((site, here, up) => {
  case SerialTLKey => None // remove serialized tl port
})

class WithUART extends Config((site, here, up) => {
  case PeripheryUARTKey => List(UARTParams(address = BigInt(0x64000000L)))
})

class WithSPISDCard extends Config((site, here, up) => {
  case PeripherySPIKey => List(SPIParams(rAddress = BigInt(0x64001000L)))
})

class WithDefaultPeripheral extends Config((site, here, up) => {
  case PeripheryUARTKey => List(UARTParams(address = BigInt(0x64000000L)))
  case PeripherySPIKey => List(SPIParams(rAddress = BigInt(0x64001000L)))
})

class WithDefaultPeripherals extends Config((site, here, up) => {
  case PeripheryUARTKey => List(UARTParams(address = BigInt(0x64000000L)))
  case PeripherySPIKey => List(SPIParams(rAddress = BigInt(0x64001000L)))
})

class WithDebug extends Config((site, here, up) => {
  case DebugModuleKey => up(DebugModuleKey).map{ debug =>
    debug.copy(clockGate = false)
  }
})

class WithDTS extends Config((site, here, up) => {
  case DTSTimebase => BigInt((1e6).toLong)
})

class WithDDR extends Config((site, here, up) => {
  case ExtMem => up(ExtMem, site).map(x => x.copy(master = x.master.copy(
    base = BigInt(0x80000000L),
    size = site(VC7071GDDRSize)))) // set extmem
})

//class WithVC707Tweaks extends Config(
//  // Clock configs
//  new chipyard.harness.WithAllClocksFromHarnessClockInstantiator ++
//  new chipyard.clocking.WithPassthroughClockGenerator ++
//  new chipyard.harness.WithHarnessBinderClockFreqMHz(100) ++
//  new chipyard.config.WithMemoryBusFrequency(100.0) ++
//  new chipyard.config.WithSystemBusFrequency(100.0) ++
//  new chipyard.config.WithPeripheryBusFrequency(100.0) ++
//  // Harness Binder
//  new WithVC707UART ++
//  new WithVC707SPISDCard ++
//  new WithVC707DDRTL ++
//  new WithVC707JTAG ++
//  // IO Binders
//  new WithUARTIOPassthrough ++
//  new WithSPIIOPassthrough ++
//  new WithTLIOPassthrough ++
//  // Peripheris
////  new WithUART ++
////  new WithSPISDCard ++
//  new WithDebug ++
////  new WithDDR ++
//  // Other configurations
//  new WithDefaultPeripheral ++
//  new chipyard.config.WithTLBackingMemory ++ // FPGA-shells converts the AXI to TL for us
//  new WithSystemModifications ++
//  new freechips.rocketchip.subsystem.WithoutTLMonitors)

class WithVC707Tweaks extends Config (
  // clocking
  new chipyard.harness.WithAllClocksFromHarnessClockInstantiator ++
    new chipyard.clocking.WithPassthroughClockGenerator ++
    new chipyard.config.WithMemoryBusFrequency(50.0) ++
    new chipyard.config.WithSystemBusFrequency(50.0) ++
    new chipyard.config.WithPeripheryBusFrequency(50.0) ++
    new chipyard.harness.WithHarnessBinderClockFreqMHz(50) ++
    new chipyard.config.WithPeripheryBusFrequency(50) ++
    new chipyard.config.WithMemoryBusFrequency(50) ++
    // harness binders
    new chipyard.harness.WithAllClocksFromHarnessClockInstantiator ++
    new WithVC707UARTHarnessBinder ++
    new WithVC707SPISDCardHarnessBinder ++
    new WithVC707DDRMemHarnessBinder ++
    // io binders
    new WithUARTIOPassthrough ++
    new WithSPIIOPassthrough ++
    new WithTLIOPassthrough ++
    // other configuration
    new WithDefaultPeripherals ++
    new chipyard.config.WithTLBackingMemory ++ // use TL backing memory
    new WithSystemModifications ++ // setup busses, use sdboot bootrom, setup ext. mem. size
    new chipyard.config.WithNoDebug ++ // remove debug module
    new freechips.rocketchip.subsystem.WithoutTLMonitors ++
    new freechips.rocketchip.subsystem.WithNMemoryChannels(1)
)

class WithVC707SerialMemTweaks extends Config(
  // Clock configs
  new chipyard.harness.WithAllClocksFromHarnessClockInstantiator ++
  new chipyard.harness.WithHarnessBinderClockFreqMHz(100) ++
  new chipyard.config.WithMemoryBusFrequency(100.0) ++
  new chipyard.config.WithSystemBusFrequency(100.0) ++
  new chipyard.config.WithPeripheryBusFrequency(100.0) ++
  new chipyard.harness.WithAllClocksFromHarnessClockInstantiator ++
  new chipyard.clocking.WithPassthroughClockGenerator ++
  // Harness Binder
  new WithVC707UARTSerial ++
  new WithVC707SPISDCardSerial ++
  new WithVC707JTAGSerial ++
  new WithTSITieoff ++
  // IO Binders
//  new WithSPIIOPassthrough ++
  // Peripheris
  new WithUART ++
  new WithSPISDCard ++
  new WithDebug ++
  new WithDTS ++
  // Other configurations
  new testchipip.WithNoCustomBootPin ++
  new WithNoDesignKey ++
  new WithSimpleBootROM ++
  new testchipip.WithSerialTLWidth(8) ++
  new testchipip.WithSerialTLMem(base = BigInt(0x80000000L), size = BigInt((1 << 10) * 8L), isMainMemory=true) ++
  new testchipip.WithSerialTLBackingMemory ++
    //  new freechips.rocketchip.subsystem.WithNoMemPort ++  // remove AXI-Mem port
  new freechips.rocketchip.subsystem.WithoutTLMonitors)

class SmallRocketVC707Config extends Config(
  new WithVC707Tweaks ++
  new chipyard.config.WithBroadcastManager ++ // no l2
  new chipyard.SmallRocketConfig)

class SmallRocketSerialMemVC707Config extends Config(
  new WithVC707SerialMemTweaks ++
  new chipyard.config.WithBroadcastManager ++ // no l2
  new chipyard.SmallRocketConfig)
