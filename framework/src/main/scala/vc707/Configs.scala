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
import testchipip.{SerialTLKey, WithNoCustomBootPin}

import chipyard.example._

import scala.sys.process._
import sifive.blocks.devices.gpio.PeripheryGPIOKey
import sifive.blocks.devices.gpio.GPIOParams

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
  case DesignKey => (p: Parameters) => new SimpleLazyModule()(p)
  case DebugModuleKey => up(DebugModuleKey).map{ debug =>
    debug.copy(clockGate = false)
  }
})

class WithNoSerialTL extends Config((site, here, up) => {
  case SerialTLKey => None // remove serialized tl port
})

class WithDefaultPeripherals extends Config((site, here, up) => {
  case PeripheryUARTKey => List(UARTParams(address = BigInt(0x64000000L)))
  case PeripherySPIKey => List(SPIParams(rAddress = BigInt(0x64001000L)))
  case PeripheryGPIOKey => List(GPIOParams(address = BigInt(0x64002000L), width = 16))
})

class WithAXIInterface extends Config((site, here, up) => {
  case ExtMem => up(ExtMem, site).map(x => x.copy(master = x.master.copy(
    base = BigInt(0x64000000L),
    size = BigInt(0x6000L)))) // set extmem
})

class WithAXIPeripherals extends Config((site, here, up) => {
  case GCDKey => List(GCDParams(
    address= BigInt(0x64002000L),
    useAXI4 = false))
})

class WithDDR extends Config((site, here, up) => {
  case ExtMem => up(ExtMem, site).map(x => x.copy(master = x.master.copy(
    base = BigInt(0x80000000L),
    size = site(VC7071GDDRSize)))) // set extmem
})

class WithVC707Tweaks extends Config (
  // Clock configs
  new chipyard.harness.WithAllClocksFromHarnessClockInstantiator ++
    new chipyard.clocking.WithPassthroughClockGenerator ++
    new chipyard.config.WithMemoryBusFrequency(50.0) ++
    new chipyard.config.WithSystemBusFrequency(50.0) ++
    new chipyard.config.WithPeripheryBusFrequency(50.0) ++
    new chipyard.harness.WithHarnessBinderClockFreqMHz(50) ++
    new chipyard.config.WithPeripheryBusFrequency(50) ++
    new chipyard.config.WithMemoryBusFrequency(50) ++
    // Harness Binder
    new WithVC707UARTHarnessBinder ++
    new WithVC707SPISDCardHarnessBinder ++
    new WithVC707JTAGHarnessBinder ++
    new WithVC707DDRMemHarnessBinder ++
    // IO Binders
    new WithUARTIOPassthrough ++
    new WithSPIIOPassthrough ++
    new WithTLIOPassthrough ++
    // Other configurations
    new WithDefaultPeripherals ++
    new chipyard.config.WithTLBackingMemory ++ // use TL backing memory
    new WithNoSerialTL ++
    new WithDDR ++
    new WithSystemModifications ++
    new WithNoCustomBootPin ++
    new freechips.rocketchip.subsystem.WithoutTLMonitors
)

class WithVC707SerialMemTweaks extends Config (
  // Clock configs
  new chipyard.harness.WithAllClocksFromHarnessClockInstantiator ++
    new chipyard.clocking.WithPassthroughClockGenerator ++
    new chipyard.config.WithMemoryBusFrequency(50.0) ++
    new chipyard.config.WithSystemBusFrequency(50.0) ++
    new chipyard.config.WithPeripheryBusFrequency(50.0) ++
    new chipyard.harness.WithHarnessBinderClockFreqMHz(50) ++
    new chipyard.config.WithPeripheryBusFrequency(50) ++
    new chipyard.config.WithMemoryBusFrequency(50) ++
    // Harness Binder
    new WithVC707UARTHarnessBinder ++
    new WithVC707SPISDCardHarnessBinder ++
    new WithVC707JTAGHarnessBinder ++
    new WithVC707GPIOHarnessBinder ++
    new WithTSITieoff ++
    // IO Binders
    new WithUARTIOPassthrough ++
    new WithSPIIOPassthrough ++
    new WithGPIOIOPassthrough ++
    // Other configurations
    new WithDefaultPeripherals ++
    new WithNoCustomBootPin ++
    new WithSystemModifications ++
    new testchipip.WithSerialTLWidth(8) ++
    new testchipip.WithSerialTLMem(
      base = BigInt(0x80000000L),
      size = BigInt((1 << 10) * 128L),
      isMainMemory=true) ++
    new testchipip.WithSerialTLBackingMemory ++
    new freechips.rocketchip.subsystem.WithoutTLMonitors
)

class WithVC707AXITweaks extends Config (
  // Clock configs
  new chipyard.harness.WithAllClocksFromHarnessClockInstantiator ++
  new chipyard.clocking.WithPassthroughClockGenerator ++
  new chipyard.config.WithMemoryBusFrequency(50.0) ++
  new chipyard.config.WithSystemBusFrequency(50.0) ++
  new chipyard.config.WithPeripheryBusFrequency(50.0) ++
  new chipyard.harness.WithHarnessBinderClockFreqMHz(50) ++
  new chipyard.config.WithPeripheryBusFrequency(50) ++
  new chipyard.config.WithMemoryBusFrequency(50) ++
  // Harness Binder
  new WithVC707UARTHarnessBinder ++
  new WithVC707SPISDCardHarnessBinder ++
  new WithVC707JTAGHarnessBinder ++
  new WithVC707GPIOHarnessBinder ++
  new WithTSITieoff ++
  // IO Binders
  new WithGPIOIOPassthrough ++
  new WithUARTIOPassthrough ++
  new WithSPIIOPassthrough ++
  // Other configurations
  // new WithAXIPeripherals ++
  new WithAXIInterface ++
  new WithDefaultPeripherals ++
  new WithNoCustomBootPin ++
  new WithSystemModifications ++
  new freechips.rocketchip.subsystem.WithoutTLMonitors
)

class SmallRocketVC707Config extends Config(
  new WithVC707Tweaks ++
  new chipyard.config.WithBroadcastManager ++ // no l2
  new chipyard.SmallRocketConfig)

class SmallRocketSerialMemVC707Config extends Config(
  new WithVC707SerialMemTweaks ++
  new chipyard.MultiRocketConfig)

class SmallRocketAXIVC707Config extends Config(
  new WithVC707AXITweaks ++
  new chipyard.config.WithBroadcastManager ++ // no l2
  new chipyard.SmallRocketAXIPortConfig)  

class SmallRocketAXITestVC707Config extends Config(
  new WithVC707AXITweaks ++
  new chipyard.config.WithBroadcastManager ++ // no l2
  new chipyard.SmallRocketAXITestConfig)  