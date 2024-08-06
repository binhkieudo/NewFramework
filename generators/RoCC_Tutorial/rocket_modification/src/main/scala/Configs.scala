package tut_3

import chisel3._
import freechips.rocketchip.diplomacy.LazyModule
import freechips.rocketchip.tile.{BuildRoCC, OpcodeSet}
import org.chipsalliance.cde.config.{Config, Parameters}

class WithTut03RoccAccel extends Config ((site, here, up) => {
  case BuildRoCC => up(BuildRoCC) ++ Seq(
    (p: Parameters) => {
      val myrocc = LazyModule.apply(new MyRoccAccel(OpcodeSet.custom1 | OpcodeSet.custom0)(p))
      myrocc
    }
  )
})