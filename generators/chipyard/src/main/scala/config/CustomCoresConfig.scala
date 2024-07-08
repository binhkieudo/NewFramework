package chipyard

import org.chipsalliance.cde.config.{Config}
import freechips.rocketchip.subsystem._

import chipyard.example._
import freechips.rocketchip.devices.tilelink.PLICAttachParams

import freechips.rocketchip.devices.tilelink._
import chipyard.clocking.{ChipyardPRCIControlKey, ChipyardPRCIControlParams}
import freechips.rocketchip.devices.debug.{ExportDebug, DebugAttachParams}

// random, lru, plru
class WithL1DCacheReplacementPolicy(policy: String) extends Config((site, here, up) => {
  case TilesLocated(InSubsystem) => up(TilesLocated(InSubsystem), site) map {
    case tp: RocketTileAttachParams => tp.copy(tileParams = tp.tileParams.copy(
      dcache = tp.tileParams.dcache.map(_.copy(
        replacementPolicy = policy,
        nWays = 2
      ))))
    case t => t
  }
})

class WithRocketDCacheScratchpad extends Config((site, here, up) => {
  case TilesLocated(InSubsystem) => up(TilesLocated(InSubsystem), site) map {
    case tp: RocketTileAttachParams => tp.copy(tileParams = tp.tileParams.copy(
      dcache = tp.tileParams.dcache.map(_.copy(nSets = 64, nWays = 1, scratch = Some(0x40000000 + tp.tileParams.hartId * 0x1000)))
    )) // 4-KB/each
  }
})

class WithoutCBUS extends Config((site, here, up) => {
  case PLICAttachKey => up(PLICAttachKey, site).copy(slaveWhere = SBUS)
  case CLINTAttachKey => up(CLINTAttachKey, site).copy(slaveWhere = SBUS)
  case ChipyardPRCIControlKey => up(ChipyardPRCIControlKey, site).copy(slaveWhere = SBUS)
  case ExportDebug => up(ExportDebug, site).copy(slaveWhere = SBUS)
  case ControlBusKey => None
})

class SmallRocketConfig extends Config(
  new freechips.rocketchip.subsystem.WithNSmallCores(1) ++         // single rocket-core
  new chipyard.config.AbstractConfig)

class MultiRocketConfig extends Config(
  new WithRocketDCacheScratchpad ++ // 4-KB private memory
//  new freechips.rocketchip.subsystem.WithRV32 ++
  new freechips.rocketchip.subsystem.WithNSmallCores(4) ++         // four rocket-core
  new chipyard.config.AbstractConfig)

class WithAXI(address: BigInt, useAXI4: Boolean = false, useBlackBox: Boolean = false) extends Config((site, here, up) => {
  case GCDKey => Some(GCDParams(address = address, useAXI4 = useAXI4, useBlackBox = useBlackBox))
})

class SmallRocketAXIPortConfig extends Config(
  new WithAXI(address = 0x64002000L, useAXI4 = true) ++
  new freechips.rocketchip.subsystem.WithIncoherentBusTopology ++ // use incoherent bus topology
  new freechips.rocketchip.subsystem.WithNBanks(0) ++             // remove L2$
  new freechips.rocketchip.subsystem.WithNoMemPort ++             // remove backing memory
  new freechips.rocketchip.subsystem.With1TinyCore ++         // single rocket-core
  new chipyard.config.AbstractConfig)

class SmallRocketAXITestConfig extends Config(
  new freechips.rocketchip.subsystem.WithL1DCacheSets(256) ++ // 16Kb scratchpad
  new freechips.rocketchip.subsystem.WithL1DCacheWays(1) ++
  new freechips.rocketchip.subsystem.With1TinyCore ++         // single rocket-core
  new chipyard.config.AbstractConfig)

class SmallRocketCacheConfig extends Config(
  new WithL1DCacheReplacementPolicy("lru") ++
  new freechips.rocketchip.subsystem.WithL1DCacheSets(4) ++
  new freechips.rocketchip.subsystem.WithNSmallCores(1) ++         // single rocket-core
  new chipyard.config.AbstractConfig)

class TinyRocketConig extends Config(
  new freechips.rocketchip.subsystem.WithIncoherentBusTopology ++ // use incoherent bus topology
  new freechips.rocketchip.subsystem.WithNBanks(0) ++             // remove L2$
  new freechips.rocketchip.subsystem.WithNoMemPort ++             // remove backing memory
  new freechips.rocketchip.subsystem.WithNoSlavePort ++
  new WithoutCBUS ++
  new freechips.rocketchip.subsystem.WithoutMulDiv ++
  new freechips.rocketchip.subsystem.With1TinyCore ++
  new chipyard.config.AbstractConfig
)

class FourCoreRocketMemConfig extends Config(
  new freechips.rocketchip.subsystem.WithNBanks(0) ++             // remove L2$
  new freechips.rocketchip.subsystem.WithNoMemPort ++             // remove backing memory
  new freechips.rocketchip.subsystem.WithCoherentBusTopology ++
    new WithRocketDCacheScratchpad ++
    new testchipip.WithSbusScratchpad(
      base=0x80000000L,
      size = (1 << 10) * 32L,
      banks=1) ++
  new freechips.rocketchip.subsystem.WithRV32 ++
  new freechips.rocketchip.subsystem.WithNSmallCores(4) ++
  new chipyard.config.AbstractConfig)



class FourCoreRocketFastConfig extends Config(
  new freechips.rocketchip.subsystem.WithNBanks(0) ++             // remove L2$
  new freechips.rocketchip.subsystem.WithNoMemPort ++             // remove backing memory
  new freechips.rocketchip.subsystem.WithCoherentBusTopology ++
  new WithRocketDCacheScratchpad ++
  new testchipip.WithSbusScratchpad(
      base=0x80000000L,
      size = (1 << 10) * 64L,
      banks=1) ++
  new testchipip.WithCbusScratchpad (
      base=0x70000000L,
      size = (1 << 10) * 8L,
      banks=1
  ) ++
  new freechips.rocketchip.subsystem.WithFastMul(32) ++
  new freechips.rocketchip.subsystem.WithFastICores(4) ++
  new chipyard.config.AbstractConfig)

// These config is used for core evaluation
class SingleCoreRocketConfig extends Config(
  new freechips.rocketchip.subsystem.WithCoherentBusTopology ++
  new testchipip.WithSbusScratchpad(
      base=0x70000000L,
      size = (1 << 10) * 128L,
      banks=1) ++
  new freechips.rocketchip.subsystem.WithFastMul(32) ++
  new freechips.rocketchip.subsystem.WithFastICores(1) ++
  new chipyard.config.AbstractConfig)

class SingleCoreIbexConfig extends Config(
  new freechips.rocketchip.subsystem.WithCoherentBusTopology ++
  new testchipip.WithSbusScratchpad(
      base=0x70000000L,
      size = (1 << 10) * 128L,
      banks=1) ++
  new ibex.WithNIbexCores(1) ++
  new chipyard.config.AbstractConfig)

class SingleCVA6Config extends Config(
  new freechips.rocketchip.subsystem.WithCoherentBusTopology ++
  new testchipip.WithSbusScratchpad(
      base=0x70000000L,
      size = (1 << 10) * 128L,
      banks=1) ++
  new cva6.WithNCVA6Cores(1) ++
  new chipyard.config.AbstractConfig)

class RocketGCConfig extends Config(
  new freechips.rocketchip.subsystem.WithFPUWithoutDivSqrt++
  new freechips.rocketchip.subsystem.WithNSmallCores(1) ++         // single rocket-core
  new chipyard.config.AbstractConfig)

class SmallSha3RocketConfig extends Config(
  new sha3.WithSha3Accel ++                                // add SHA3 rocc accelerator
  new freechips.rocketchip.subsystem.WithL1DCacheWays(2) ++
  new freechips.rocketchip.subsystem.WithNSmallCores(1) ++
  new chipyard.config.AbstractConfig)

