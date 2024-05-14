package framework.fpga.vcu118

import chipyard.config.WithTLBackingMemory
import freechips.rocketchip.devices.debug.DebugModuleKey
import freechips.rocketchip.devices.tilelink.BootROMLocated
import freechips.rocketchip.diplomacy.{DTSTimebase, SimpleLazyModule}
import freechips.rocketchip.subsystem.{ExtMem, SystemBusKey, WithoutTLMonitors}
import freechips.rocketchip.tile.XLen
import org.chipsalliance.cde.config.{Config, Parameters}
import sifive.blocks.devices.spi.{PeripherySPIKey, SPIParams}
import sifive.blocks.devices.uart.{PeripheryUARTKey, UARTParams}
import sifive.fpgashells.shell.DesignKey
import testchipip.{SerialTLKey, WithNoCustomBootPin}

import scala.sys.process._

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
})

class WithDDR extends Config((site, here, up) => {
  case ExtMem => up(ExtMem, site).map(x => x.copy(master = x.master.copy(
    base = BigInt(0x80000000L),
    size = site(VCU118DDRSize)))) // set extmem
})

class WithVCU118Tweaks extends Config(
  // Clock configs
  new chipyard.harness.WithAllClocksFromHarnessClockInstantiator ++
    new chipyard.clocking.WithPassthroughClockGenerator ++
    new chipyard.config.WithMemoryBusFrequency(100.0) ++
    new chipyard.config.WithSystemBusFrequency(100.0) ++
    new chipyard.config.WithPeripheryBusFrequency(100.0) ++
    new chipyard.harness.WithHarnessBinderClockFreqMHz(100) ++
    new chipyard.config.WithPeripheryBusFrequency(100) ++
    new chipyard.config.WithMemoryBusFrequency(100) ++
    // Harness Binder
    new WithVCU118UARTHarnessBinder ++
    new WithVCU118SPISDCardHarnessBinder ++
    new WithVCU118JTAGHarnessBinder ++
    new WithVCU118DDRMemHarnessBinder ++
    // IO Binders
    new WithUARTIOPassthrough ++
    new WithSPIIOPassthrough ++
    new WithTLIOPassthrough ++
    // Other configurations
    new WithDefaultPeripherals ++
    new WithTLBackingMemory ++ // use TL backing memory
    new WithNoSerialTL ++
    new WithDDR ++
    new WithSystemModifications ++
    new WithNoCustomBootPin ++
    new WithoutTLMonitors
)

class WithVCU118SerialMemTweaks extends Config (
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
    new WithVCU118UARTHarnessBinder ++
    new WithVCU118SPISDCardHarnessBinder ++
    new WithVCU118JTAGHarnessBinder ++
    new WithTSITieoff ++
    // io binders
    new WithUARTIOPassthrough ++
    new WithSPIIOPassthrough ++
    // other configuration
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

class SmallRocketVCU118Config extends Config(
  new WithVCU118Tweaks ++
  new chipyard.config.WithBroadcastManager ++ // no l2
  new chipyard.SmallRocketConfig)

class SmallRocketSerialMemVCU118Config extends Config(
  new WithVCU118SerialMemTweaks ++
    new chipyard.SmallRocketConfig)