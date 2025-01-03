package RoCCMem

import chisel3._
import chisel3.util.HasBlackBoxResource
import freechips.rocketchip.tile.{LazyRoCC, LazyRoCCModuleImp, OpcodeSet}
import org.chipsalliance.cde.config.Parameters
import chisel3.util.log2Ceil

//case object myroccXLen extends Field[Int]

class mybbIO (xLen: Int = 64)(implicit p: Parameters) extends Bundle {
  val clock   = Input(Clock())
  val reset   = Input(Reset())
  val busy    = Output(Bool())

  // RoCC Request
  val req_rs1      = Input(UInt(xLen.W))
  val req_rs2      = Input(UInt(xLen.W))
  val req_rd       = Input(UInt(5.W))
  val req_cmd      = Input(UInt(7.W))
  val req_funct7   = Input(UInt(7.W))
  val req_valid    = Input(Bool())
  val req_ready    = Output(Bool())

  // DMEM request
  val dmem_req_valid    = Output(Bool())
  val dmem_req_ready    = Input(Bool())  
  val dmem_req_addr     = Output(UInt(xLen.W))
  val dmem_req_tag      = Output(UInt(7.W))
  val dmem_req_cmd      = Output(UInt(5.W))
  val dmem_req_size     = Output(UInt(log2Ceil(8).W))
  val dmem_req_wdata    = Output(UInt(xLen.W))
  val dmem_req_wmask    = Output(UInt((xLen/8).W))

  // DMEM response
  val dmem_resp_valid   = Input(Bool())
  val dmem_resp_tag     = Input(UInt(7.W))
  val dmem_resp_rdata   = Input(UInt(xLen.W))
}

class DMemTop (xLen: Int = 64)(implicit p: Parameters) extends BlackBox with HasBlackBoxResource {
  val io = IO(new mybbIO(xLen))

  addResource("/vsrc/DMemTop.v")
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

  val myroccBlackBox   = Module(new DMemTop(xLen))

  // Connect
  io <> myroccDecoupler.io.rocc_io
  myroccDecoupler.io.clock := clock

  myroccController.io.decoupler_io <> myroccDecoupler.io.controller_io
  myroccController.io.clock := clock
  myroccController.io.reset := reset
  io.busy := myroccController.io.busy

  myroccBlackBox.io <> myroccController.io.bb_io
}