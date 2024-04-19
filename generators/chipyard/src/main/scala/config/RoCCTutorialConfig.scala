package chipyard

import org.chipsalliance.cde.config.{Config}

class Tutorial1RocketConfig extends Config(
  new tut_1.WithTut01RoccAccel ++
  new freechips.rocketchip.subsystem.WithNSmallCores(1) ++         // single rocket-core
  new chipyard.config.AbstractConfig)

class Tutorial2RocketConfig extends Config(
  new tut_2.WithTut02RoccAccel ++
  new freechips.rocketchip.subsystem.WithL1DCacheWays (2) ++
  new freechips.rocketchip.subsystem.WithNSmallCores(1) ++         // single rocket-core
  new chipyard.config.AbstractConfig)
