package chipyard

import org.chipsalliance.cde.config.{Config}

// This is a tutorial
class Tutorial1RocketConfig extends Config(
  new tut_1.WithTut01RoccAccel ++
  new freechips.rocketchip.subsystem.WithNSmallCores(1) ++         // single rocket-core
  new chipyard.config.AbstractConfig)

// This is a tutorial
class DMEMRocketConfig extends Config(
  new RoCCMem.WithRoccMemAccel ++
  new freechips.rocketchip.subsystem.WithNSmallCores(1) ++         // single rocket-core
  new chipyard.config.AbstractConfig)  