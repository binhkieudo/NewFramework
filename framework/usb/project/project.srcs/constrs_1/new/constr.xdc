# ------------------------- Base Clocks --------------------
create_clock -name sys_clock -period 5.0 [get_ports {sys_clock_p}]
set_input_jitter sys_clock 0.5
create_clock -name JTCK -period 100.0 [get_ports {jtag_jtag_TCK}]
set_input_jitter JTCK 0.5
# ------------------------- Clock Groups -------------------
set_clock_groups -asynchronous \
  -group [list [get_clocks -of_objects [get_pins { \
      harnessSysPLL/clk_out1 \
    }]]] \
  -group [list [get_clocks { \
      JTCK \
    }]]
# ------------------------- False Paths --------------------
set_false_path -through [get_pins {fpga_power_on/power_on_reset}]
# ------------------------- IO Timings ---------------------

#-------------- MCS Generation ----------------------
set_property CFGBVS GND                               [current_design]
set_property CONFIG_VOLTAGE 1.8                       [current_design]

set_property EXTRACT_ENABLE YES                       [get_cells dut_/spi_0_1/mac/phy/txd_reg*]
set_property EXTRACT_ENABLE YES                       [get_cells dut_/spi_0_1/mac/phy/sck_reg]

set_property BOARD_PIN {clk_p} [get_ports {sys_clock_p}]
set_property BOARD_PIN {clk_n} [get_ports {sys_clock_n}]
set_property CLOCK_DEDICATED_ROUTE {FALSE} [get_nets [get_ports {jtag_jtag_TCK}]]
set_property PACKAGE_PIN {AR38} [get_ports {jtag_jtag_TCK}]
set_property IOSTANDARD {LVCMOS18} [get_ports {jtag_jtag_TCK}]
set_property PULLUP {TRUE} [get_ports {jtag_jtag_TCK}]
set_property PACKAGE_PIN {AR39} [get_ports {jtag_jtag_TMS}]
set_property IOSTANDARD {LVCMOS18} [get_ports {jtag_jtag_TMS}]
set_property PULLUP {TRUE} [get_ports {jtag_jtag_TMS}]
set_property PACKAGE_PIN {AT42} [get_ports {jtag_jtag_TDI}]
set_property IOSTANDARD {LVCMOS18} [get_ports {jtag_jtag_TDI}]
set_property PULLUP {TRUE} [get_ports {jtag_jtag_TDI}]
set_property PACKAGE_PIN {AR42} [get_ports {jtag_srst_n}]
set_property IOSTANDARD {LVCMOS18} [get_ports {jtag_srst_n}]
set_property PULLUP {TRUE} [get_ports {jtag_srst_n}]
set_property PACKAGE_PIN {AN40} [get_ports {jtag_jtag_TDO}]
set_property IOSTANDARD {LVCMOS18} [get_ports {jtag_jtag_TDO}]
set_property PULLUP {TRUE} [get_ports {jtag_jtag_TDO}]
set_property PACKAGE_PIN {AT32} [get_ports {uart_ctsn}]
set_property IOSTANDARD {LVCMOS18} [get_ports {uart_ctsn}]
set_property IOB {TRUE} [ get_cells -of_objects [ all_fanin -flat -startpoints_only [get_ports {uart_ctsn}]]]
set_property PACKAGE_PIN {AR34} [get_ports {uart_rtsn}]
set_property IOSTANDARD {LVCMOS18} [get_ports {uart_rtsn}]
set_property IOB {TRUE} [ get_cells -of_objects [ all_fanin -flat -startpoints_only [get_ports {uart_rtsn}]]]
set_property PACKAGE_PIN {AU33} [get_ports {uart_rxd}]
set_property IOSTANDARD {LVCMOS18} [get_ports {uart_rxd}]
set_property IOB {TRUE} [ get_cells -of_objects [ all_fanin -flat -startpoints_only [get_ports {uart_rxd}]]]
set_property PACKAGE_PIN {AU36} [get_ports {uart_txd}]
set_property IOSTANDARD {LVCMOS18} [get_ports {uart_txd}]
set_property IOB {TRUE} [ get_cells -of_objects [ all_fanin -flat -startpoints_only [get_ports {uart_txd}]]]
set_property PACKAGE_PIN {AN30} [get_ports {sdio_spi_clk}]
set_property IOSTANDARD {LVCMOS18} [get_ports {sdio_spi_clk}]
set_property IOB {TRUE} [ get_cells -of_objects [ all_fanin -flat -startpoints_only [get_ports {sdio_spi_clk}]]]
set_property PACKAGE_PIN {AP30} [get_ports {sdio_spi_cs}]
set_property IOSTANDARD {LVCMOS18} [get_ports {sdio_spi_cs}]
set_property IOB {TRUE} [ get_cells -of_objects [ all_fanin -flat -startpoints_only [get_ports {sdio_spi_cs}]]]
set_property PACKAGE_PIN {AR30} [get_ports {sdio_spi_dat_0}]
set_property IOSTANDARD {LVCMOS18} [get_ports {sdio_spi_dat_0}]
set_property IOB {TRUE} [ get_cells -of_objects [ all_fanin -flat -startpoints_only [get_ports {sdio_spi_dat_0}]]]
set_property PACKAGE_PIN {AU31} [get_ports {sdio_spi_dat_1}]
set_property IOSTANDARD {LVCMOS18} [get_ports {sdio_spi_dat_1}]
set_property IOB {TRUE} [ get_cells -of_objects [ all_fanin -flat -startpoints_only [get_ports {sdio_spi_dat_1}]]]
set_property PACKAGE_PIN {AV31} [get_ports {sdio_spi_dat_2}]
set_property IOSTANDARD {LVCMOS18} [get_ports {sdio_spi_dat_2}]
set_property IOB {TRUE} [ get_cells -of_objects [ all_fanin -flat -startpoints_only [get_ports {sdio_spi_dat_2}]]]
set_property PACKAGE_PIN {AT30} [get_ports {sdio_spi_dat_3}]
set_property IOSTANDARD {LVCMOS18} [get_ports {sdio_spi_dat_3}]
set_property IOB {TRUE} [ get_cells -of_objects [ all_fanin -flat -startpoints_only [get_ports {sdio_spi_dat_3}]]]
set_property PULLUP {TRUE} [get_ports {sdio_spi_cs}]
set_property PULLUP {TRUE} [get_ports {sdio_spi_dat_0}]
set_property PULLUP {TRUE} [get_ports {sdio_spi_dat_1}]
set_property PULLUP {TRUE} [get_ports {sdio_spi_dat_2}]
set_property PULLUP {TRUE} [get_ports {sdio_spi_dat_3}]
set_property BOARD_PIN {reset} [get_ports {reset}]
