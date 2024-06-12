// See LICENSE for license details.
package framework.fpga.arty100t

import freechips.rocketchip.devices.debug.DebugModuleKey
import freechips.rocketchip.devices.tilelink.BootROMLocated
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.subsystem._
import freechips.rocketchip.tile.XLen
import org.chipsalliance.cde.config._
import sifive.blocks.devices.gpio.{GPIOParams, PeripheryGPIOKey}
import sifive.blocks.devices.spi.{PeripherySPIFlashKey, PeripherySPIKey, SPIFlashParams, SPIParams}
import sifive.blocks.devices.uart.{PeripheryUARTKey, UARTParams}
import sifive.fpgashells.shell.DesignKey
import testchipip.{CustomBootPinKey, SerialTLKey}

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

class WithTinyBootROM extends Config((site, here, up) => {
  case BootROMLocated(x) => up(BootROMLocated(x), site).map{ p =>
    val freqMHz = (site(SystemBusKey).dtsFrequency.get / (1000 * 1000)).toLong
    // Make sure that the bootrom is always rebuilt
    val clean = s"make -C framework/src/main/resources/bootROM/tinyBoot clean"
    require (clean.! == 0, "Failed to clean")
    // Build the bootrom
    val make = s"make -C framework/src/main/resources/bootROM/tinyBoot XLEN=${site(XLen)} PBUS_CLK=${freqMHz}"
    require (make.! == 0, "Failed to build bootrom")
    p.copy(hang = 0x10000, contentFileName = s"./framework/src/main/resources/bootROM/basic/build/sdboot.bin")
  }
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

class WithDebug extends Config((site, here, up) => {
  case DebugModuleKey => up(DebugModuleKey).map{ debug =>
    debug.copy(clockGate = false)
  }
})

class WithDTS extends Config((site, here, up) => {
  case DTSTimebase => BigInt((1e6).toLong)
})

class WithDDR extends Config((site, here, up) => {
  case ExtMem => up(ExtMem, site).map(x => x.copy(master = x.master.copy(size = site(ArtyDDRSize)))) // set extmem
})

class WithDefaultPeripherals extends Config((site, here, up) => {
  case PeripheryUARTKey => List(UARTParams(address = BigInt(0x64000000L)))
  case PeripherySPIKey => List(SPIParams(rAddress = BigInt(0x64001000L)))
  case PeripherySPIFlashKey => List (SPIFlashParams(
    rAddress = BigInt(0x64002000L),
    fAddress = BigInt(0x90000000L),
    fSize = BigInt(0x2000000)))
  case PeripheryGPIOKey => List(GPIOParams(address = BigInt(0x64003000L), width = 24))
})

class WithSystemModifications extends Config((site, here, up) => {
  case DTSTimebase => BigInt{(1e6).toLong}
  case BootROMLocated(x) => up(BootROMLocated(x), site).map{ p =>
    val freqMHz = (site(SystemBusKey).dtsFrequency.get / (1000 * 1000)).toLong
    // Make sure that the bootrom is always rebuilt
    val clean = s"make -C framework/src/main/resources/bootROM/tinyBoot clean"
    require (clean.! == 0, "Failed to clean")
    // Build the bootromt
    val make = s"make -C framework/src/main/resources/bootROM/tinyBoot XLEN=${site(XLen)} PBUS_CLK=${freqMHz}"
    require (make.! == 0, "Failed to build bootrom")
    p.copy(hang = 0x10000, contentFileName = s"./framework/src/main/resources/bootROM/tinyBoot/build/sdboot.bin")
  }
  case DesignKey => (p: Parameters) => new SimpleLazyModule()(p)
  case DebugModuleKey => up(DebugModuleKey).map{ debug =>
    debug.copy(clockGate = false)
  }
  case CustomBootPinKey => None
  case SerialTLKey => None
})

//class WithArty100TTweaks extends Config(
//  // Clock configs
//  new chipyard.harness.WithAllClocksFromHarnessClockInstantiator ++
//  new chipyard.harness.WithHarnessBinderClockFreqMHz(50) ++
//  new chipyard.config.WithMemoryBusFrequency(50.0) ++
//  new chipyard.config.WithSystemBusFrequency(50.0) ++
//  new chipyard.config.WithPeripheryBusFrequency(50.0) ++
//  new chipyard.harness.WithAllClocksFromHarnessClockInstantiator ++
//  new chipyard.clocking.WithPassthroughClockGenerator ++
//  // Harness Binder
//  new WithArty100TUARTHarnessBinder ++
//  new WithArty100TDDRTL ++
//  new WithArty100TJTAG ++
//  // Peripheris
//  new WithUART ++
//  new WithDebug ++
//  new WithDTS ++
//  new WithDDR ++
//  // Other configurations
//  new WithNoDesignKey ++
//  new WithNoSerialTL ++
//  new WithSimpleBootROM ++
//  new chipyard.config.WithTLBackingMemory ++ // FPGA-shells converts the AXI to TL for us
//  new freechips.rocketchip.subsystem.WithoutTLMonitors)

class WithTinyArty100TTweaks extends Config(
  // Clock configs
  new chipyard.harness.WithAllClocksFromHarnessClockInstantiator ++
  new chipyard.harness.WithHarnessBinderClockFreqMHz(50) ++
  new chipyard.config.WithMemoryBusFrequency(50.0) ++
  new chipyard.config.WithSystemBusFrequency(50.0) ++
  new chipyard.config.WithPeripheryBusFrequency(50.0) ++
  new chipyard.harness.WithAllClocksFromHarnessClockInstantiator ++
  new chipyard.clocking.WithPassthroughClockGenerator ++
  // Harness Binder
  new WithArty100TUARTHarnessBinder ++
  new WithArty100TSPISDCardHarnessBinder ++
  new WithArty100TFlashHarnessBinder ++
  new WithArty100TJTAGHarnessBinder ++
  new WithArty100TGPIOHarnessBinder ++
  new WithArty100TTSITieoff ++
  // IO Binders
  new WithGPIOIOPassthrough ++
  new WithUARTIOPassthrough ++
  new WithSPIIOPassthrough ++
  new WithSPIFlashIOPassthrough ++
  new WithTLIOPassthrough ++
  // Other configurations
  new WithDefaultPeripherals ++
  new WithSystemModifications ++
  new freechips.rocketchip.subsystem.WithoutTLMonitors)

//class SmallRocketArty100TConfig extends Config(
//  new WithArty100TTweaks ++
//  new chipyard.config.WithBroadcastManager ++ // no l2
//  new chipyard.SmallRocketConfig)
//
//class SmallRocketGCArty100TConfig extends Config(
//  new WithArty100TTweaks ++
//  new chipyard.config.WithBroadcastManager ++ // no l2
//  new chipyard.RocketGCConfig)
//
//class SmallSha3RocketArty100TConfig extends Config(
//  new WithArty100TTweaks ++
//  new chipyard.config.WithBroadcastManager ++ // no l2
//  new chipyard.SmallSha3RocketConfig)

class Arty100TTinyRocketConfig extends Config(
  new WithTinyArty100TTweaks ++
  new chipyard.config.WithBroadcastManager ++
  new chipyard.TinyRocketConig
)