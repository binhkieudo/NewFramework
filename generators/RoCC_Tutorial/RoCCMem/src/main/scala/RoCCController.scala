package RoCCMem

import chisel3._
import chisel3.util.RegEnable
import org.chipsalliance.cde.config.Parameters
import chisel3.util.log2Ceil

class ControllerDecouplerIO (xLen: Int = 64)(implicit p: Parameters) extends Bundle {
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

class RoCCControllerIO (xLen: Int = 64)(implicit p: Parameters) extends Bundle{
  // Control signals
  val clock = Input(Clock())
  val reset = Input(Reset())
  val busy  = Output(Bool())

  // Controller-Decoupler interface
  val decoupler_io = new ControllerDecouplerIO(xLen)

  // Black box interface
  val bb_io = Flipped(new mybbIO(xLen))
}

class RoCCController (xLen: Int = 64)(implicit p: Parameters) extends Module {
  val io = IO(new RoCCControllerIO(xLen))

  // Process signals from Decoupler
  io.bb_io.clock := io.clock
  io.bb_io.reset := io.reset
  io.busy := io.bb_io.busy

  io.bb_io.req_rs1          := io.decoupler_io.req_rs1
  io.bb_io.req_rs2          := io.decoupler_io.req_rs2
  io.bb_io.req_rd           := io.decoupler_io.req_rd
  io.bb_io.req_cmd          := io.decoupler_io.req_cmd
  io.bb_io.req_funct7       := io.decoupler_io.req_funct7
  io.bb_io.req_valid        := io.decoupler_io.req_valid
  io.decoupler_io.req_ready := io.bb_io.req_ready

  io.decoupler_io.dmem_req_valid  := io.bb_io.dmem_req_valid
  io.bb_io.dmem_req_ready         := io.decoupler_io.dmem_req_ready
  io.decoupler_io.dmem_req_addr   := io.bb_io.dmem_req_addr
  io.decoupler_io.dmem_req_tag    := io.bb_io.dmem_req_tag
  io.decoupler_io.dmem_req_cmd    := io.bb_io.dmem_req_cmd
  io.decoupler_io.dmem_req_size   := io.bb_io.dmem_req_size
  io.decoupler_io.dmem_req_wdata  := io.bb_io.dmem_req_wdata
  io.decoupler_io.dmem_req_wmask  := io.bb_io.dmem_req_wmask

  io.bb_io.dmem_resp_valid  := io.decoupler_io.dmem_resp_valid
  io.bb_io.dmem_resp_tag    := io.decoupler_io.dmem_resp_tag
  io.bb_io.dmem_resp_rdata  := io.decoupler_io.dmem_resp_rdata
}
