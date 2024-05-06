package chipyard

import org.chipsalliance.cde.config.{Config}
import freechips.rocketchip.subsystem._

// random, lru, plru
class WithL1DCacheReplacementPolicy(policy: String) extends Config((site, here, up) => {
  case TilesLocated(InSubsystem) => up(TilesLocated(InSubsystem), site) map {
    case tp: RocketTileAttachParams => tp.copy(tileParams = tp.tileParams.copy(
      dcache = tp.tileParams.dcache.map(_.copy(
        replacementPolicy = policy,
        nWays = 4
      ))))
    case t => t
  }
})

class SmallRocketConfig extends Config(
  new freechips.rocketchip.subsystem.WithNSmallCores(1) ++         // single rocket-core
  new chipyard.config.AbstractConfig)

class SmallRocketCacheConfig extends Config(
  new WithL1DCacheReplacementPolicy("lru") ++
  new freechips.rocketchip.subsystem.WithL1DCacheSets(4) ++
  new freechips.rocketchip.subsystem.WithNSmallCores(1) ++         // single rocket-core
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