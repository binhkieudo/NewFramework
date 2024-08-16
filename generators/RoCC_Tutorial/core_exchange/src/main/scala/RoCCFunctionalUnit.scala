package tut_4

import chisel3._
import chisel3.util.HasBlackBoxResource
import freechips.rocketchip.tile.{LazyRoCC, LazyRoCCModuleImp, OpcodeSet}
import org.chipsalliance.cde.config.Parameters

//case object myroccXLen extends Field[Int]

class mymemIO (xLen: Int = 64)(implicit p: Parameters) extends Bundle {
  val iclk    = Input(Clock())
  val irstn   = Input(Bool())
  val iwren   = Input(Bool())
  val irden   = Input(Bool())
  val din     = Input(UInt(xLen.W))
  val dout    = Output(UInt(xLen.W))
  val empty   = Output(Bool())
  val full    = Output(Bool())
}

class fifo_bb (xLen: Int = 64)(implicit p: Parameters) extends BlackBox with HasBlackBoxResource {
  val io = IO(new mymemIO(xLen))

  addResource("/vsrc/fifo_bb.v")
}

class fifoff_bb (xLen: Int = 64)(implicit p: Parameters) extends BlackBox with HasBlackBoxResource {
  val io = IO(new mymemIO(xLen))

  addResource("/vsrc/fifoff_bb.v")
}

class MyRoccAccel (opcodes: OpcodeSet)(implicit p: Parameters) extends LazyRoCC (
  opcodes   = opcodes,
  nPTWPorts = 0,
  usesFPU   = false,
  roccCSRs  = Nil) {
  override lazy val module = new MyRoccAccelImp(this)
}

class MyRoccAccelImp(outer: MyRoccAccel)(implicit p: Parameters) extends LazyRoCCModuleImp(outer) {
  val xLen = 64

  // Instantiate the rocc modules
  val myroccDecoupler  = Module(new RoCCDecoupler(xLen))

  val myroccController = Module(new RoCCController(xLen))

  val myroccBlackBox   = Module(new fifo_bb(xLen))

  // Connect
  io <> myroccDecoupler.io.rocc_io
  myroccDecoupler.io.clock := clock
  myroccDecoupler.io.reset := reset.asUInt

  myroccController.io.decoupler_io <> myroccDecoupler.io.controller_io
  myroccController.io.clock := clock
  myroccController.io.reset := reset.asUInt

  myroccController.io.bb_io <> myroccBlackBox.io
}

class MyRoccAccelFF (opcodes: OpcodeSet)(implicit p: Parameters) extends LazyRoCC (
  opcodes   = opcodes,
  nPTWPorts = 0,
  usesFPU   = false,
  roccCSRs  = Nil) {
  override lazy val module = new MyRoccAccelFFImp(this)
}

class MyRoccAccelFFImp(outer: MyRoccAccelFF)(implicit p: Parameters) extends LazyRoCCModuleImp(outer) {
  val xLen = 64

  // Instantiate the rocc modules
  val myroccDecoupler  = Module(new RoCCDecoupler(xLen))

  val myroccController = Module(new RoCCController2(xLen))

  val myroccBlackBox   = Module(new fifoff_bb(xLen))

  // Connect
  io <> myroccDecoupler.io.rocc_io
  myroccDecoupler.io.clock := clock
  myroccDecoupler.io.reset := reset.asUInt

  myroccController.io.decoupler_io <> myroccDecoupler.io.controller_io
  myroccController.io.clock := clock
  myroccController.io.reset := reset.asUInt

  myroccController.io.bb_io <> myroccBlackBox.io
}