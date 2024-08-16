package tut_4

import chisel3._
import chisel3.util.RegEnable
import org.chipsalliance.cde.config.Parameters

class ControllerDecouplerIO (xLen: Int = 64)(implicit p: Parameters) extends Bundle {
  // Request
  val rocc_req_wrdata   = Input(UInt(xLen.W))
  val rocc_req_rd       = Input(UInt(5.W))
  val rocc_req_cmd      = Input(UInt(7.W))
  val rocc_req_funct    = Input(UInt(7.W))
  val rocc_req_valid    = Input(Bool())
  val rocc_req_ready    = Output(Bool())

  // Response
  val rocc_resp_rd      = Output(UInt(5.W))
  val rocc_resp_data    = Output(UInt(xLen.W))
  val rocc_resp_valid   = Output(Bool())
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

// RoCC Write interface
class RoCCController (xLen: Int = 64)(implicit p: Parameters) extends Module {
  val io = IO(new RoCCControllerIO(xLen))

  val rd_addr   = Reg(UInt(5.W))
  val r_valid   = Reg(Bool())

  io.bb_io.iclk   := io.clock
  io.bb_io.irstn  := !io.reset

  rd_addr := io.decoupler_io.rocc_req_rd
  r_valid := io.decoupler_io.rocc_req_valid
  
  // Process signals from Decoupler
  io.bb_io.iwren    := io.decoupler_io.rocc_req_valid & (io.decoupler_io.rocc_req_funct === FUNCT.WRITE) &
          ((io.decoupler_io.rocc_req_cmd === ISA.CUSTOM1) | (io.decoupler_io.rocc_req_cmd === ISA.CUSTOM3))
  io.bb_io.irden    := io.decoupler_io.rocc_req_valid & (io.decoupler_io.rocc_req_funct=== FUNCT.READ) &
          ((io.decoupler_io.rocc_req_cmd === ISA.CUSTOM1) | (io.decoupler_io.rocc_req_cmd === ISA.CUSTOM3))
  io.bb_io.din      := io.decoupler_io.rocc_req_wrdata

  io.decoupler_io.rocc_req_ready := !io.bb_io.full

  io.decoupler_io.rocc_resp_rd    := rd_addr
  io.decoupler_io.rocc_resp_data  := io.bb_io.dout
  io.decoupler_io.rocc_resp_valid := r_valid
}

// RoCC Read interface
class RoCCController2 (xLen: Int = 64)(implicit p: Parameters) extends Module {
  val io = IO(new RoCCControllerIO(xLen))

  val rd_addr   = Reg(UInt(5.W))
  val r_valid   = Reg(Bool())

  io.bb_io.iclk   := io.clock
  io.bb_io.irstn  := !io.reset

  rd_addr := io.decoupler_io.rocc_req_rd
  r_valid := io.decoupler_io.rocc_req_valid

  // Process signals from Decoupler
  io.bb_io.iwren    := io.decoupler_io.rocc_req_valid & (io.decoupler_io.rocc_req_funct === FUNCT.WRITE) &
          ((io.decoupler_io.rocc_req_cmd === ISA.CUSTOM0) | (io.decoupler_io.rocc_req_cmd === ISA.CUSTOM2))
  io.bb_io.irden    := io.decoupler_io.rocc_req_valid & (io.decoupler_io.rocc_req_funct=== FUNCT.READ) &
          ((io.decoupler_io.rocc_req_cmd === ISA.CUSTOM0) | (io.decoupler_io.rocc_req_cmd === ISA.CUSTOM2))
  io.bb_io.din      := io.decoupler_io.rocc_req_wrdata

  io.decoupler_io.rocc_req_ready := !io.bb_io.empty

  io.decoupler_io.rocc_resp_rd    := rd_addr
  io.decoupler_io.rocc_resp_data  := io.bb_io.dout
  io.decoupler_io.rocc_resp_valid := r_valid
}
