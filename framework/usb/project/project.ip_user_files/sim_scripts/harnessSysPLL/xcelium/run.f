-makelib xcelium_lib/xpm -sv \
  "/home/binhkieudo/Software/Xilinx/Vivado/2022.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
  "/home/binhkieudo/Software/Xilinx/Vivado/2022.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \
-endlib
-makelib xcelium_lib/xpm \
  "/home/binhkieudo/Software/Xilinx/Vivado/2022.2/data/ip/xpm/xpm_VCOMP.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../../project.gen/sources_1/ip/harnessSysPLL/harnessSysPLL_clk_wiz.v" \
  "../../../../project.gen/sources_1/ip/harnessSysPLL/harnessSysPLL.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  glbl.v
-endlib

