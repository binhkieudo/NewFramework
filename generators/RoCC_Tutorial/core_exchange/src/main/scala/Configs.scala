package tut_4

import chisel3._

import org.chipsalliance.cde.config.{Field, Parameters, Config}
import freechips.rocketchip.tile._

import freechips.rocketchip.diplomacy.LazyModule
import freechips.rocketchip.tile.{BuildRoCC, OpcodeSet}
import org.chipsalliance.cde.config.{Config, Parameters}

case object MultiRoCCKey extends Field[Map[Int, Seq[Parameters => LazyRoCC]]](Map.empty[Int, Seq[Parameters => LazyRoCC]])


class WithTut04RoccAccel extends Config ((site, here, up) => {
  case BuildRoCC => {
    val fifow0 = (p: Parameters) => {
      val myrocc = LazyModule.apply(new MyRoccAccel(OpcodeSet.custom1)(p))
      myrocc
    }
    val fifow1 = (p: Parameters) => {
      val myrocc = LazyModule.apply(new MyRoccAccel(OpcodeSet.custom3)(p))
      myrocc
    }
    val fifor0 = (p: Parameters) => {
      val myrocc = LazyModule.apply(new MyRoccAccelFF(OpcodeSet.custom0)(p))
      myrocc
    }
    val fifor1 = (p: Parameters) => {
      val myrocc = LazyModule.apply(new MyRoccAccelFF(OpcodeSet.custom2)(p))
      myrocc
    }
    up(BuildRoCC) ++ Seq(fifor0, fifow0, fifor1, fifow1)
  }

})

class WithMultiRoCCFromBuildRoCC(harts: Int*) extends Config((site, here, up) => {
  case BuildRoCC => Nil
  case MultiRoCCKey => up(MultiRoCCKey, site) ++ harts.distinct.map { i =>
    (i -> up(BuildRoCC, site))
  }
})