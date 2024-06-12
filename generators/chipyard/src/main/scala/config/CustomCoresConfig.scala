package chipyard

import org.chipsalliance.cde.config.{Config}
import freechips.rocketchip.subsystem._

import chipyard.example._

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

class SmallRocketConfig extends Config(
  new freechips.rocketchip.subsystem.WithNSmallCores(1) ++         // single rocket-core
  new chipyard.config.AbstractConfig)

class MultiRocketConfig extends Config(
  new WithRocketDCacheScratchpad ++ // 4-KB private memory
//  new freechips.rocketchip.subsystem.WithNBanks (4) ++ // 4xbanks L2
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
  new freechips.rocketchip.subsystem.With1TinyCore ++
  new chipyard.config.AbstractConfig
)

class FourCoreRocketMemConfig extends Config(
  new freechips.rocketchip.subsystem.WithCoherentBusTopology ++
    new WithRocketDCacheScratchpad ++
    new testchipip.WithSbusScratchpad(
      base=0x70000000L,
      size = (1 << 10) * 8L,
      banks=1) ++
    new freechips.rocketchip.subsystem.WithL1ICacheSets(sets=64) ++
    new freechips.rocketchip.subsystem.WithL1ICacheWays(ways=1) ++
    new freechips.rocketchip.subsystem.WithL1DCacheSets(sets=64) ++
    new freechips.rocketchip.subsystem.WithL1DCacheWays(ways=1) ++
    new freechips.rocketchip.subsystem.WithNSmallCores(4) ++
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

