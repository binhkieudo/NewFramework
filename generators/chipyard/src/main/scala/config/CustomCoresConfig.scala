package chipyard

import org.chipsalliance.cde.config.{Config}

class SmallRocketConfig extends Config(
  new freechips.rocketchip.subsystem.WithNSmallCores(1) ++         // single rocket-core
  new chipyard.config.AbstractConfig)

class SmallSha3RocketConfig extends Config(
  new sha3.WithSha3Accel ++                                // add SHA3 rocc accelerator
  new freechips.rocketchip.subsystem.WithNSmallCores(1) ++
  new chipyard.config.AbstractConfig)