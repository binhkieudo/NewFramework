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
import testchipip.{CustomBootPinKey, SerialTLKey, WithNoCustomBootPin}

import scala.sys.process._
import chipyard.ExtTLMem

class WithSystemDDRModifications extends Config((site, here, up) => {
  case DTSTimebase => BigInt{(1e6).toLong}
  case BootROMLocated(x) => up(BootROMLocated(x), site).map{ p =>
    val freqMHz = (site(SystemBusKey).dtsFrequency.get / (1000 * 1000)).toLong
    // Make sure that the bootrom is always rebuilt
    val clean = s"make -C framework/src/main/resources/bootROM/MTBoot clean"
    require (clean.! == 0, "Failed to clean")
    // Build the bootrom
    val make = s"make -C framework/src/main/resources/bootROM/MTBoot XLEN=${site(XLen)}"
    require (make.! == 0, "Failed to build bootrom")
    p.copy(hang = 0x10000, contentFileName = s"./framework/src/main/resources/bootROM/MTBoot/build/sdboot.bin")
  }
  case DesignKey => (p: Parameters) => new SimpleLazyModule()(p)
  case ExtTLMem => up(ExtTLMem, site).map(x => x.copy(master = x.master.copy(
    base = BigInt(0x80000000L),
    size = site(VCU118DDRSize)))) // set extmem
  case DebugModuleKey => up(DebugModuleKey).map{ debug =>
    debug.copy(clockGate = false)
  }
  case SerialTLKey => None // remove serialized tl port
  case CustomBootPinKey => None
})

class WithDefaultPeripherals extends Config((site, here, up) => {
  case PeripheryUARTKey => List(UARTParams(address = BigInt(0x64000000L)))
  case PeripherySPIKey => List(SPIParams(rAddress = BigInt(0x64001000L)))
})


class WithVCU118Tweaks(FreqMHz: Double = 100.0) extends Config(
  // Clock configs
  new chipyard.harness.WithAllClocksFromHarnessClockInstantiator ++
    new chipyard.clocking.WithPassthroughClockGenerator ++
    new chipyard.config.WithMemoryBusFrequency(FreqMHz) ++
    new chipyard.config.WithSystemBusFrequency(FreqMHz) ++
    new chipyard.config.WithPeripheryBusFrequency(FreqMHz) ++
    new chipyard.harness.WithHarnessBinderClockFreqMHz(FreqMHz) ++
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
    new WithSystemDDRModifications ++
    new WithTLBackingMemory ++ // use TL backing memory
    new WithoutTLMonitors
)


class SingleCoreConfig extends Config(
  new WithVCU118Tweaks ++
  new chipyard.SingleRocketConfig
)

// class SmallRocketVCU118Config extends Config(
//   new WithVCU118Tweaks ++
//   new chipyard.config.WithBroadcastManager ++ // no l2
//   new chipyard.SmallRocketConfig)

// class SmallRocketSerialMemVCU118Config extends Config(
//   new WithVCU118SerialMemTweaks ++
//     new chipyard.SmallRocketConfig)

// class FourCoreRocketDDRVCU118Config extends Config(
//   new WithVCU118Tweaks ++
//   new chipyard.FourCoreRocketFastConfig)

// class FourCoreRocketSerialVCU118Config extends Config(
//   new WithVCU118SerialMemTweaks ++
//   new chipyard.FourCoreRocketFastConfig)

// class FourCorePrivateChannelConfig extends Config(
//   new WithVCU118SerialMemTweaks ++
//   new chipyard.config.WithBroadcastManager ++ // no l2
//   new chipyard.FourCoreWithPNConfig)