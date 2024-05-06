radix define MEM_CMD {
    5'b00000 "M_XRD",
    5'b00001 "M_XWR",
    5'b00010 "M_PFR",
    5'b00011 "M_PFW",
    5'b00100 "M_XA_SWAP",
    5'b00101 "M_FLUSH_ALL",
    5'b00110 "M_XLR",
    5'b00111 "M_XSC",
    5'b01000 "M_XA_ADD",
    5'b01001 "M_XA_XOR",
    5'b01010 "M_XA_OR",
    5'b01011 "M_XA_AND",
    5'b01100 "M_XA_MIN",
    5'b01101 "M_XA_MAX",
    5'b01110 "M_XA_MINU",
    5'b01111 "M_XA_MAXU",
    5'b10000 "M_FLUSH",
    5'b10001 "M_PWR",
    5'b10010 "M_PRODUCE",
    5'b10011 "M_CLEAN",
    5'b10100 "M_SFENCE",
    5'b10101 "M_HFENCEV",
    5'b10110 "M_HFENCEG",
    5'b10111 "M_WOK",
    -defaut hex
}

radix define TL_A {
    3'd0 "PutFull",
    3'd1 "PutPartial",
    3'd2 "AthData",
    3'd3 "LogData",
    3'd4 "Get",
    3'd5 "Intent",
    3'd6 "Acquire",
    -defaut hex
}

radix define TL_D {
    3'd0 "AccessAck",
    3'd1 "AccessAckData",
    3'd2 "HintAck",
    3'd4 "Grant",
    3'd5 "GrantData",
    3'd6 "ReleaseAck",
    -defaut hex
}

radix define TL_B {
    3'd0 "PutFullData",
    3'd1 "PutPartialData",
    3'd2 "ArithmeticData",
    3'd3 "LogicalData",
    3'd4 "Get",
    3'd5 "Intent",
    3'd6 "Probe",
    -defaut hex
}

radix define TL_C {
    3'd0 "AccessAck",
    3'd1 "AccessAckData",
    3'd2 "HintAck",
    3'd4 "ProbeAck",
    3'd5 "ProbeAckData",
    3'd6 "Release",
    3'd6 "ReleaseData",
    -defaut hex
}

######################## REPLACER ###############################################################
add wave -group Replacer -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/s1_victim_way_repl_array_ext/R0_clk
add wave -group Replacer -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/s1_victim_way_repl_array_ext/R0_en
add wave -group Replacer -radix hex -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/s1_victim_way_repl_array_ext/R0_addr
add wave -group Replacer -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/s1_victim_way_repl_array_ext/R0_data
add wave -group Replacer -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/s1_victim_way_repl_array_ext/W0_clk
add wave -group Replacer -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/s1_victim_way_repl_array_ext/W0_en
add wave -group Replacer -radix hex -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/s1_victim_way_repl_array_ext/W0_addr
add wave -group Replacer -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/s1_victim_way_repl_array_ext/W0_data
add wave -group Replacer -color black -radix bin cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/s1_victim_way_repl_array_ext/Memory

######################## Imem #############################################################
#add wave -group CoreIMem -color black -radix hex cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/core/io_imem_req_bits_pc
#add wave -group CoreIMem -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/core/io_imem_req_valid
add wave -group CoreIMem -color blue -radix hex cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/core/io_imem_resp_bits_pc
add wave -group CoreIMem -color blue -radix hex cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/core/io_imem_resp_bits_data
add wave -group CoreIMem -color blue cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/core/io_imem_resp_valid

######################## Dmem #############################################################
add wave -group CoreDMem -color black -radix hex cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/core/io_dmem_req_bits_addr
add wave -group CoreDMem -color black -radix MEM_CMD cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/core/io_dmem_req_bits_cmd
add wave -group CoreDMem -color black -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/core/io_dmem_req_bits_size
add wave -group CoreDMem -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/core/io_dmem_req_valid
add wave -group CoreDMem -color blue cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/core/io_dmem_resp_bits_data[63:32]
add wave -group CoreDMem -color blue cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/core/io_dmem_resp_bits_data[31:0]
add wave -group CoreDMem -color blue cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/core/io_dmem_resp_valid

######################## DATA ARRAY #############################################################
add wave -group CoreDMem -group DataArray -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_clk
add wave -group CoreDMem -group DataArray -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_en
add wave -group CoreDMem -group DataArray -color black -radix bin cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_addr
add wave -group CoreDMem -group DataArray -color red -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wdata[255:224]
add wave -group CoreDMem -group DataArray -color black -radix bin cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wmask[31:28]
add wave -group CoreDMem -group DataArray -color red -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wdata[223:192]
add wave -group CoreDMem -group DataArray -color black -radix bin cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wmask[27:24]
add wave -group CoreDMem -group DataArray -color red -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wdata[191:160]
add wave -group CoreDMem -group DataArray -color black -radix bin cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wmask[23:20]
add wave -group CoreDMem -group DataArray -color red -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wdata[159:128]
add wave -group CoreDMem -group DataArray -color black -radix bin cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wmask[19:16]
add wave -group CoreDMem -group DataArray -color red -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wdata[127:96]
add wave -group CoreDMem -group DataArray -color black -radix bin cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wmask[15:12]
add wave -group CoreDMem -group DataArray -color red -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wdata[95:64]
add wave -group CoreDMem -group DataArray -color black -radix bin cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wmask[11:8]
add wave -group CoreDMem -group DataArray -color red -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wdata[63:32]
add wave -group CoreDMem -group DataArray -color black -radix bin cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wmask[7:4]
add wave -group CoreDMem -group DataArray -color red -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wdata[31:0]
add wave -group CoreDMem -group DataArray -color black -radix bin cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wmask[3:0]
add wave -group CoreDMem -group DataArray -color black -radix bin cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_wmode
add wave -group CoreDMem -group DataArray -color blue -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_rdata[127:96]
add wave -group CoreDMem -group DataArray -color blue -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_rdata[95:64]
add wave -group CoreDMem -group DataArray -color blue -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_rdata[63:32]
add wave -group CoreDMem -group DataArray -color blue -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/dcache/data/data_arrays_0/RW0_rdata[31:0]

######################## Tilelink #############################################################
add wave -group TL -group A -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_a_bits_address 
add wave -group TL -group A -color black -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_a_bits_data[63:32]
add wave -group TL -group A -color black -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_a_bits_data[31:0]
add wave -group TL -group A -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_a_bits_mask 
add wave -group TL -group A -color black -radix TL_A cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_a_bits_opcode 
add wave -group TL -group A -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_a_bits_size
add wave -group TL -group A -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_a_valid

add wave -group TL -group D -color blue -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_d_bits_data[63:32]
add wave -group TL -group D -color blue -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_d_bits_data[31:0]
add wave -group TL -group D -color blue -radix TL_D cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_d_bits_opcode
add wave -group TL -group D -color blue cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_d_bits_size
add wave -group TL -group D -color blue cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_d_valid

add wave -group TL -group B -color blue cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_b_bits_address
add wave -group TL -group B -color blue -radix TL_B cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_b_bits_opcode
add wave -group TL -group B -color blue cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_b_bits_size
add wave -group TL -group B -color blue cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_b_valid

add wave -group TL -group C -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_c_bits_address 
add wave -group TL -group C -color black -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_c_bits_data[63:32]
add wave -group TL -group C -color black -radix unsigned cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_c_bits_data[31:0]
add wave -group TL -group C -color black -radix TL_C cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_c_bits_opcode
add wave -group TL -group C -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_c_bits_size
add wave -group TL -group C -color black cache:/TOP/TestDriver/testHarness/chiptop0/system/tile_prci_domain/tile_reset_domain_tile/auto_buffer_out_c_valid 

