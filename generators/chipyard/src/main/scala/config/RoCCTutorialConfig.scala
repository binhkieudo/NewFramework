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

class Tutorial3RocketConfig extends Config(
  new tut_3.WithTut03RoccAccel ++
  new freechips.rocketchip.subsystem.WithL1DCacheWays (2) ++
  new freechips.rocketchip.subsystem.WithNBigCores(1) ++         // single rocket-core
  new chipyard.config.AbstractConfig)

class Tutorial4RocketConfig extends Config(
  new tut_4.WithTut04RoccAccel ++ // RoCC for all core
  new freechips.rocketchip.subsystem.WithL1DCacheWays (2) ++
  new freechips.rocketchip.subsystem.WithNSmallCores(4) ++         // single rocket-core
  new chipyard.config.AbstractConfig)

class Tutorial5RocketConfig extends Config(
  // new tut_4.WithMultiRoCCFromBuildRoCC(0) ++
  new tut_4.WithTut04RoccAccel ++ // RoCC for only core 0
  new freechips.rocketchip.subsystem.WithL1DCacheWays (2) ++
  new freechips.rocketchip.subsystem.WithNSmallCores(4) ++         // single rocket-core
  new chipyard.config.AbstractConfig)