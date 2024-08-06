package tut_3

import chisel3._
import org.chipsalliance.cde.config.Parameters

class ControllerDecouplerIO (xLen: Int = 64)(implicit p: Parameters) extends Bundle {
  // Command interface
  val rocc_req_cmd      = Input(UInt(7.W))
  val rocc_req_valid    = Input(Bool())

  // Cache interface
  val mem_req_wrdata   = Input(UInt(xLen.W))
  val mem_req_valid    = Input(Bool())
  val mem_req_datavld  = Input(Bool())

  val mem_resp_data    = Output(UInt(xLen.W))
  val mem_resp_valid   = Output(Bool())
}

class RoCCControllerIO (xLen: Int = 64)(implicit p: Parameters) extends Bundle{
  // Control signals
  val clock = Input(Clock())
  val reset = Input(UInt(1.W))

  // Controller-Decoupler interface
  val decoupler_io = new ControllerDecouplerIO(xLen)

  // Black box interface
  val bb_io = Flipped(new mymemIO(xLen))
}

class RoCCController (xLen: Int = 64)(implicit p: Parameters) extends Module {
  val io = IO(new RoCCControllerIO(xLen))

  io.bb_io.enable   := (io.decoupler_io.rocc_req_cmd === ISA.WRITE) && io.decoupler_io.rocc_req_valid

  // Process signals from Decoupler
  io.bb_io.clock    := io.clock
  io.bb_io.rqvalid  := io.decoupler_io.mem_req_valid
  io.bb_io.wrdata   := io.decoupler_io.mem_req_wrdata
  io.bb_io.wren     := io.decoupler_io.mem_req_datavld

  io.decoupler_io.mem_resp_data  := io.bb_io.rddata
  io.decoupler_io.mem_resp_valid := io.bb_io.rdvalid
}
