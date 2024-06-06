// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__925(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__925\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                      & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:621: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 621, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:623: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 623, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                       & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:627: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 627, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:629: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 629, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__926(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__926\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                       & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0x14U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:633: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 633, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:635: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 635, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                      & (0x23U == (0x27U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:639: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 639, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:641: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 641, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__927(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__927\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                       & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xcU)) != ((0x80U 
                                                 & (((((2U 
                                                        < 
                                                        (7U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 6U))) 
                                                       | (IData)(
                                                                 ((0x80U 
                                                                   == 
                                                                   (0xc0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                  & (0x20000000U 
                                                                     | ((0x3ffc0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                            << 0x12U)) 
                                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 0xeU)))))) 
                                                      | (IData)(
                                                                ((0x40U 
                                                                  == 
                                                                  (0xc0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                 & ((0x20000000U 
                                                                     | ((0x3ffc0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                            << 0x12U)) 
                                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 0xeU))) 
                                                                    & (0x40000000U 
                                                                       | ((0x7ff80000U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                              << 0x13U)) 
                                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0xdU))))))) 
                                                     << 7U) 
                                                    | (0x7ffff80U 
                                                       & ((((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                             << 0x19U) 
                                                            | (0x1ffff80U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 7U))) 
                                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                               << 0x1aU) 
                                                              | (0x3ffff80U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 6U)))) 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 5U))))) 
                                                | ((0x40U 
                                                    & (((((2U 
                                                           < 
                                                           (7U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 6U))) 
                                                          | (IData)(
                                                                    ((0x80U 
                                                                      == 
                                                                      (0xc0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                     & (0x20000000U 
                                                                        | ((0x3ffc0000U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                               << 0x12U)) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                              >> 0xeU)))))) 
                                                         | (IData)(
                                                                   ((0x40U 
                                                                     == 
                                                                     (0xc0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                    & ((0x20000000U 
                                                                        | ((0x3ffc0000U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                               << 0x12U)) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                              >> 0xeU))) 
                                                                       & (0x40000000U 
                                                                          | ((0x7ff80000U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU))))))) 
                                                        << 6U) 
                                                       | (((~ 
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0xcU)) 
                                                           << 6U) 
                                                          & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                               << 0x18U) 
                                                              | (0xffffc0U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 8U))) 
                                                             & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                 << 0x19U) 
                                                                | (0x1ffffc0U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 7U))))))) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < 
                                                              (7U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 6U))) 
                                                             | (IData)(
                                                                       ((0x80U 
                                                                         == 
                                                                         (0xc0U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                        & (0x20000000U 
                                                                           | ((0x3ffc0000U 
                                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))))) 
                                                            | (IData)(
                                                                      ((0x40U 
                                                                        == 
                                                                        (0xc0U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                       & ((~ 
                                                                           (0x40000000U 
                                                                            | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU)))) 
                                                                          & (0x20000000U 
                                                                             | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU))))))) 
                                                           << 5U) 
                                                          | (0x1ffffe0U 
                                                             & ((((~ 
                                                                   (0x40000000U 
                                                                    | ((0x7ff80000U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                           << 0x13U)) 
                                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 0xdU)))) 
                                                                  << 5U) 
                                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                     << 0x17U) 
                                                                    | (0x7fffe0U 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 9U)))) 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 7U))))) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < 
                                                                 (7U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 6U))) 
                                                                | (IData)(
                                                                          ((0x80U 
                                                                            == 
                                                                            (0xc0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                           & (0x20000000U 
                                                                              | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))))) 
                                                               | (IData)(
                                                                         ((0x40U 
                                                                           == 
                                                                           (0xc0U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                          & ((~ 
                                                                              (0x40000000U 
                                                                               | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU)))) 
                                                                             & (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU))))))) 
                                                              << 4U) 
                                                             | (((~ 
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 0xcU)) 
                                                                 << 4U) 
                                                                & (((~ 
                                                                     (0x40000000U 
                                                                      | ((0x7ff80000U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                             << 0x13U)) 
                                                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xdU)))) 
                                                                    << 4U) 
                                                                   & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                       << 0x16U) 
                                                                      | (0x3ffff0U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xaU))))))) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < 
                                                                    (7U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 6U))) 
                                                                   | (IData)(
                                                                             ((0x80U 
                                                                               == 
                                                                               (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                              & (~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU))))))) 
                                                                  | (IData)(
                                                                            ((0x40U 
                                                                              == 
                                                                              (0xc0U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                             & ((~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                                & (0x40000000U 
                                                                                | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU))))))) 
                                                                 << 3U) 
                                                                | (0x7ffff8U 
                                                                   & ((((~ 
                                                                         (0x20000000U 
                                                                          | ((0x3ffc0000U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                        << 3U) 
                                                                       & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                           << 0x16U) 
                                                                          | (0x3ffff8U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xaU)))) 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 9U))))) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < 
                                                                       (7U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 6U))) 
                                                                      | (IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU))))))) 
                                                                     | (IData)(
                                                                               ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & ((~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                                & (0x40000000U 
                                                                                | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU))))))) 
                                                                    << 2U) 
                                                                   | (((~ 
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 0xcU)) 
                                                                       << 2U) 
                                                                      & (((~ 
                                                                           (0x20000000U 
                                                                            | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                          << 2U) 
                                                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                             << 0x15U) 
                                                                            | (0x1ffffcU 
                                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xbU))))))) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < 
                                                                          (7U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                              >> 6U))) 
                                                                         | (IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU))))))) 
                                                                        | (IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & ((~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                                & (~ 
                                                                                (0x40000000U 
                                                                                | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU)))))))) 
                                                                       << 1U) 
                                                                      | (0x1ffffeU 
                                                                         & ((((~ 
                                                                               (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                              & (~ 
                                                                                (0x40000000U 
                                                                                | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU))))) 
                                                                             << 1U) 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 0xbU))))) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < 
                                                                           (7U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 6U))) 
                                                                          | (IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU))))))) 
                                                                         | (IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & ((~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                                & (~ 
                                                                                (0x40000000U 
                                                                                | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU)))))))) 
                                                                        | ((~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0xcU)) 
                                                                           & ((~ 
                                                                               (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                              & (~ 
                                                                                (0x40000000U 
                                                                                | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:645: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 645, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:647: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 647, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__928(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__928\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                      & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:651: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 651, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:653: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 653, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:657: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel Hint carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 657, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:659: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 659, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__929(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__929\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0x14U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:663: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 663, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:665: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 665, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:669: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 669, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:671: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 671, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__930(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__930\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xcU)) != ((0x80U 
                                                 & (((((2U 
                                                        < 
                                                        (7U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 6U))) 
                                                       | (IData)(
                                                                 ((0x80U 
                                                                   == 
                                                                   (0xc0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                  & (0x20000000U 
                                                                     | ((0x3ffc0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                            << 0x12U)) 
                                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 0xeU)))))) 
                                                      | (IData)(
                                                                ((0x40U 
                                                                  == 
                                                                  (0xc0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                 & ((0x20000000U 
                                                                     | ((0x3ffc0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                            << 0x12U)) 
                                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 0xeU))) 
                                                                    & (0x40000000U 
                                                                       | ((0x7ff80000U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                              << 0x13U)) 
                                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0xdU))))))) 
                                                     << 7U) 
                                                    | (0x7ffff80U 
                                                       & ((((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                             << 0x19U) 
                                                            | (0x1ffff80U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 7U))) 
                                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                               << 0x1aU) 
                                                              | (0x3ffff80U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 6U)))) 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 5U))))) 
                                                | ((0x40U 
                                                    & (((((2U 
                                                           < 
                                                           (7U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 6U))) 
                                                          | (IData)(
                                                                    ((0x80U 
                                                                      == 
                                                                      (0xc0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                     & (0x20000000U 
                                                                        | ((0x3ffc0000U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                               << 0x12U)) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                              >> 0xeU)))))) 
                                                         | (IData)(
                                                                   ((0x40U 
                                                                     == 
                                                                     (0xc0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                    & ((0x20000000U 
                                                                        | ((0x3ffc0000U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                               << 0x12U)) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                              >> 0xeU))) 
                                                                       & (0x40000000U 
                                                                          | ((0x7ff80000U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU))))))) 
                                                        << 6U) 
                                                       | (((~ 
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0xcU)) 
                                                           << 6U) 
                                                          & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                               << 0x18U) 
                                                              | (0xffffc0U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 8U))) 
                                                             & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                 << 0x19U) 
                                                                | (0x1ffffc0U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 7U))))))) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < 
                                                              (7U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 6U))) 
                                                             | (IData)(
                                                                       ((0x80U 
                                                                         == 
                                                                         (0xc0U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                        & (0x20000000U 
                                                                           | ((0x3ffc0000U 
                                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))))) 
                                                            | (IData)(
                                                                      ((0x40U 
                                                                        == 
                                                                        (0xc0U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                       & ((~ 
                                                                           (0x40000000U 
                                                                            | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU)))) 
                                                                          & (0x20000000U 
                                                                             | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU))))))) 
                                                           << 5U) 
                                                          | (0x1ffffe0U 
                                                             & ((((~ 
                                                                   (0x40000000U 
                                                                    | ((0x7ff80000U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                           << 0x13U)) 
                                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 0xdU)))) 
                                                                  << 5U) 
                                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                     << 0x17U) 
                                                                    | (0x7fffe0U 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 9U)))) 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 7U))))) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < 
                                                                 (7U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 6U))) 
                                                                | (IData)(
                                                                          ((0x80U 
                                                                            == 
                                                                            (0xc0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                           & (0x20000000U 
                                                                              | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))))) 
                                                               | (IData)(
                                                                         ((0x40U 
                                                                           == 
                                                                           (0xc0U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                          & ((~ 
                                                                              (0x40000000U 
                                                                               | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU)))) 
                                                                             & (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU))))))) 
                                                              << 4U) 
                                                             | (((~ 
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 0xcU)) 
                                                                 << 4U) 
                                                                & (((~ 
                                                                     (0x40000000U 
                                                                      | ((0x7ff80000U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                             << 0x13U)) 
                                                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xdU)))) 
                                                                    << 4U) 
                                                                   & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                       << 0x16U) 
                                                                      | (0x3ffff0U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xaU))))))) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < 
                                                                    (7U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 6U))) 
                                                                   | (IData)(
                                                                             ((0x80U 
                                                                               == 
                                                                               (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                              & (~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU))))))) 
                                                                  | (IData)(
                                                                            ((0x40U 
                                                                              == 
                                                                              (0xc0U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                             & ((~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                                & (0x40000000U 
                                                                                | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU))))))) 
                                                                 << 3U) 
                                                                | (0x7ffff8U 
                                                                   & ((((~ 
                                                                         (0x20000000U 
                                                                          | ((0x3ffc0000U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                        << 3U) 
                                                                       & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                           << 0x16U) 
                                                                          | (0x3ffff8U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xaU)))) 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 9U))))) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < 
                                                                       (7U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 6U))) 
                                                                      | (IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU))))))) 
                                                                     | (IData)(
                                                                               ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & ((~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                                & (0x40000000U 
                                                                                | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU))))))) 
                                                                    << 2U) 
                                                                   | (((~ 
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 0xcU)) 
                                                                       << 2U) 
                                                                      & (((~ 
                                                                           (0x20000000U 
                                                                            | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                          << 2U) 
                                                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                             << 0x15U) 
                                                                            | (0x1ffffcU 
                                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xbU))))))) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < 
                                                                          (7U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                              >> 6U))) 
                                                                         | (IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU))))))) 
                                                                        | (IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & ((~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                                & (~ 
                                                                                (0x40000000U 
                                                                                | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU)))))))) 
                                                                       << 1U) 
                                                                      | (0x1ffffeU 
                                                                         & ((((~ 
                                                                               (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                              & (~ 
                                                                                (0x40000000U 
                                                                                | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU))))) 
                                                                             << 1U) 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 0xbU))))) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < 
                                                                           (7U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 6U))) 
                                                                          | (IData)(
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU))))))) 
                                                                         | (IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & ((~ 
                                                                                (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                                & (~ 
                                                                                (0x40000000U 
                                                                                | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU)))))))) 
                                                                        | ((~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0xcU)) 
                                                                           & ((~ 
                                                                               (0x20000000U 
                                                                                | ((0x3ffc0000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x12U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xeU)))) 
                                                                              & (~ 
                                                                                (0x40000000U 
                                                                                | ((0x7ff80000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                                                                << 0x13U)) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xdU))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:675: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 675, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:677: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 677, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__931(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__931\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x14U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:681: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 681, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:683: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 683, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:687: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel has invalid opcode (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 687, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:689: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 689, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__932(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__932\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:693: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 693, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:695: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 695, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:699: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 699, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:701: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 701, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__933(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__933\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:705: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 705, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:707: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 707, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                            & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp_reg)) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied)))) 
                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1) 
                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U] 
                               >> 0xfU)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2) 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U] 
                                               >> 0xfU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:711: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 711, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:713: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 713, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__934(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__934\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:717: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 717, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:719: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 719, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:723: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 723, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:725: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 725, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__935(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__935\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:729: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 729, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:731: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 731, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:735: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 735, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:737: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 737, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__936(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__936\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:741: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 741, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:743: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 743, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                            & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp_reg)) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied)))) 
                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1) 
                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U] 
                               >> 0xfU)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2) 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U] 
                                               >> 0xfU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:747: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 747, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:749: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 749, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__937(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__937\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:753: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 753, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:755: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 755, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:759: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 759, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:761: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 761, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__938(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__938\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:765: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 765, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:767: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 767, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:771: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 771, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:773: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 773, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__939(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__939\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_denied)) 
                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                  & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp_reg)) 
                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied)))) 
                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1) 
                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U] 
                                     >> 0xfU)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2) 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U] 
                                                     >> 0xfU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:777: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 777, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:779: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 779, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:783: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 783, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:785: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 785, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__940(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__940\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:789: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 789, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:791: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 791, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                            & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp_reg)) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied)))) 
                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1) 
                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U] 
                               >> 0xfU)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2) 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U] 
                                               >> 0xfU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:795: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 795, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:797: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 797, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__941(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__941\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:801: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 801, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:803: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 803, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:807: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 807, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:809: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 809, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__942(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__942\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_denied)) 
                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                  & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp_reg)) 
                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied)))) 
                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1) 
                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U] 
                                     >> 0xfU)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2) 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U] 
                                                     >> 0xfU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:813: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 813, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:815: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 815, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:819: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 819, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:821: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 821, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__943(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__943\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:825: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 825, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:827: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 827, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                            & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp_reg)) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied)))) 
                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1) 
                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U] 
                               >> 0xfU)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_2) 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U] 
                                               >> 0xfU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:831: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 831, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:833: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 833, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__944(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__944\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (8U != (0xfU & (8U | (0xfU & 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[1U] 
                                              >> 8U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:837: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 837, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:839: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 839, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                    >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:843: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 843, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:845: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 845, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__945(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__945\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                    >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:849: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 849, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:851: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 851, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                            << 0x14U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                              >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:855: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 855, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:857: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 857, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__946(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__946\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                      & (0x34U == (0x37U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:861: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 861, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:863: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 863, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[3U] 
                        >> 0xcU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:867: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel ProbeAck is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 867, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:869: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 869, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__947(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__947\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (8U != (0xfU & (8U | (0xfU & 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[1U] 
                                              >> 8U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:873: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 873, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:875: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 875, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                    >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:879: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 879, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:881: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 881, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__948(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__948\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                    >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:885: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 885, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:887: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 887, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                            << 0x14U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                              >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:891: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 891, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:893: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 893, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__949(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__949\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                      & (0x35U == (0x37U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:897: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 897, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:899: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 899, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((5U > (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                         >> 9U))) & 
                            (7U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                          >> 6U)))) 
                           & (8U == (0xfU & (8U | (0xfU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[1U] 
                                                      >> 8U)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:903: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel carries Release type unsupported by manager (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 903, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:905: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 905, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__950(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__950\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (IData)(((0x180U == (0x1c0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])) 
                                   & (8U == (0xfU & 
                                             (8U | 
                                              (0xfU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[1U] 
                                                  >> 8U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:909: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 909, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:911: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 911, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                    >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:915: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel Release carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 915, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:917: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 917, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__951(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__951\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                    >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:921: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel Release smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 921, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:923: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 923, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                            << 0x14U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                              >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:927: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel Release address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 927, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:929: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 929, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__952(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__952\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                      & (0x36U == (0x37U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:933: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel Release carries invalid report param (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 933, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:935: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 935, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[3U] 
                        >> 0xcU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:939: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel Release is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 939, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:941: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 941, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__953(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__953\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__winnerQual_0) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((5U > (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                         >> 9U))) & 
                            (7U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                          >> 6U)))) 
                           & (8U == (0xfU & (8U | (0xfU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[1U] 
                                                      >> 8U)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:945: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 945, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:947: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 947, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__winnerQual_0) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (IData)(((0x180U == (0x1c0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])) 
                                   & (8U == (0xfU & 
                                             (8U | 
                                              (0xfU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[1U] 
                                                  >> 8U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:951: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 951, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:953: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 953, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__954(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__954\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__winnerQual_0) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                    >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:957: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 957, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:959: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 959, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__winnerQual_0) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                    >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:963: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 963, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:965: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 965, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__955(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__955\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__winnerQual_0) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                            << 0x14U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                              >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:969: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 969, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:971: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 971, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__winnerQual_0) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x30U == (0x30U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:975: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 975, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:977: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 977, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__956(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__956\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (8U != (0xfU & (8U | (0xfU & 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[1U] 
                                              >> 8U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:981: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 981, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:983: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 983, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                    >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:987: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 987, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:989: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 989, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__957(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__957\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                            << 0x14U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                              >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:993: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel AccessAck address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 993, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:995: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 995, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:999: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel AccessAck carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 999, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1001: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1001, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__958(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__958\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[3U] 
                        >> 0xcU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1005: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel AccessAck is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1005, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1007: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1007, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (8U != (0xfU & (8U | (0xfU & 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[1U] 
                                              >> 8U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1011: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1011, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1013: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1013, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__959(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__959\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                    >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1017: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1017, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1019: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1019, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                            << 0x14U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                              >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1023: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1023, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1025: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1025, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__960(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__960\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1029: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel AccessAckData carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1029, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1031: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1031, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (8U != (0xfU & (8U | (0xfU & 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[1U] 
                                              >> 8U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1035: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel HintAck carries unmanaged address (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1035, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1037: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1037, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__961(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__961\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                    >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1041: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel HintAck carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1041, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1043: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1043, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                            << 0x14U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                              >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1047: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel HintAck address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1047, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1049: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1049, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__962(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__962\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1053: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel HintAck carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1053, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1055: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1055, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[3U] 
                        >> 0xcU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1059: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel HintAck is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1059, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1061: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1061, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__963(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__963\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1065: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1065, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1067: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1067, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1071: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1071, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1073: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1073, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__964(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__964\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1077: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1077, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1079: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1079, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 9U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1083: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1083, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1085: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1085, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__965(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__965\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0x80000000U | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U] 
                                         << 0x14U) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xcU))) 
                        != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1089: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1089, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1091: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1091, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1095: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1095, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1097: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1097, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__966(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__966\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_param) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1101: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1101, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1103: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1103, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1107: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1107, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1109: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1109, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__967(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__967\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1113: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1113, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1115: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1115, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_sink) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1119: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1119, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1121: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1121, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__968(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__968\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_denied) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1125: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1125, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1127: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1127, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__opcode_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1131: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel opcode changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1131, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1133: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1133, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__969(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__969\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__param_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1137: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel param changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1137, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1139: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1139, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__size_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1143: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel size changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1143, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1145: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1145, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__970(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__970\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                               >> 9U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__source_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1149: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel source changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1149, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1151: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1151, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0x80000000U | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[1U] 
                                         << 0x14U) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                           >> 0xcU))) 
                        != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__address_2)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1155: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel address changed with multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1155, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1157: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1157, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__971(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__971\n"); );
    // Body
    if (VL_UNLIKELY((0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___T_1135) 
                               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight) 
                                 >> (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1161: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' channel re-used a source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1161, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1163: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1163, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___T_1154) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight) 
                                     >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source))) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1167: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1167, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1169: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1169, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__972(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__972\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___T_1154) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U])))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1173: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1173, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1175: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1175, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__973(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__973\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___T_1154) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1179: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel contains improper response size (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1179, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1181: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1181, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___T_1154)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_opcodes 
                                                 >> 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source) 
                                                  << 2U)) 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_opcodes 
                                                      >> 
                                                      ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source) 
                                                       << 2U)) 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_opcodes 
                                                         >> 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source) 
                                                          << 2U)) 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_opcodes 
                                                               >> 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source) 
                                                                << 2U)) 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1185: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1185, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1187: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1187, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__974(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__974\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___T_1154)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_size) 
                        != (7U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_sizes 
                                   >> ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source) 
                                       << 2U)) >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1191: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel contains improper response size (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1191, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1193: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1193, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid)) 
                        & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 9U)) == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source))) 
                       & (6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_d_ready)) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__toD)
                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___q_1_io_enq_ready)
                               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_a_ready) 
                                  & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft))
                                      ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__winnerQual_0))
                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__state_1))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1197: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1197, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1199: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1199, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__975(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__975\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? (0x1fU & ((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))))
                                    : 0U) != ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode)))
                                               ? (0x1fU 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source)))
                                               : 0U)) 
                                 | (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___same_cycle_resp_T_1)
                                            ? (0x1fU 
                                               & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U))))
                                            : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1203: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1203, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1205: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1205, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1209: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: TileLink timeout expired (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1209, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1211: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1211, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__976(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__976\n"); );
    // Body
    if (VL_UNLIKELY((0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___T_1224) 
                               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_1) 
                                 >> (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                           >> 9U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1215: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' channel re-used a source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1215, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1217: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1217, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_1) 
                                     >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source))) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT____VdfgTmp_hb873743f__0) 
                              & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                        >> 9U)) == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1221: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1221, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1223: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1223, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__977(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__977\n"); );
    // Body
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2))) 
                        & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT____VdfgTmp_hb873743f__0) 
                          & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                    >> 9U)) == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source)))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_size) 
                        != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                  >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1227: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel contains improper response size (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1227, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1229: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1229, "");
        }
    }
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2))) 
                        & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT____VdfgTmp_hb873743f__0) 
                             & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                       >> 9U)) == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source))))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_size) 
                        != (7U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_sizes_1 
                                   >> ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source) 
                                       << 2U)) >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1233: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel contains improper response size (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1233, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1235: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1235, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__978(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__978\n"); );
    // Body
    if (VL_UNLIKELY((((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                            & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2))) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid)) 
                         & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                   >> 9U)) == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source))) 
                        & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode))) 
                       & (~ ((4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])) 
                             | (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_d_ready)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_c_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1239: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1239, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1241: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1241, "");
        }
    }
    if (VL_UNLIKELY((((0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT____VdfgTmp_hb873743f__0)
                               ? (0x1fU & ((IData)(1U) 
                                           << (7U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                                >> 9U))))
                               : 0U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT____VdfgTmp_hb873743f__0)
                          ? (0x1fU & ((IData)(1U) << 
                                      (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                                             >> 9U))))
                          : 0U) == ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_valid) 
                                      & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode)))
                                     ? (0x1fU & ((IData)(1U) 
                                                 << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_source)))
                                     : 0U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1245: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1245, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1247: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1247, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__979(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__979\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1251: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: TileLink timeout expired (connected at Configs.scala:117:34)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1251, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1253: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1253, "");
        }
    }
    if (VL_UNLIKELY((0xffU & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__do_enq) 
                                & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__d_first_counter_3)) 
                                   & (IData)((4U == 
                                              (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_opcode)))))) 
                               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_2) 
                                 >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_in_d_bits_sink)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1257: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor: Assertion failed: 'D' channel re-used a sink ID (connected at Configs.scala:117:34)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1257, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_38.sv:1259: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_38.sv", 1259, "");
        }
    }
}
