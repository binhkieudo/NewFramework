// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__290(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__290\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                      >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:598: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 598, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:600: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 600, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:604: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 604, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:606: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 606, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__291(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__291\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:610: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 610, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:612: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 612, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 1U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:616: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 616, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:618: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 618, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__292(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__292\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                        >> 0xbU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:622: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 622, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:624: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 624, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                      >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:628: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 628, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:630: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 630, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__293(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__293\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0x18000000U == (0x18000000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:634: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 634, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:636: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 636, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0x10000000U == (0x18000000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:640: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 640, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:642: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 642, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__294(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__294\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:646: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 646, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:648: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 648, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                        >> 0xbU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:652: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 652, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:654: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 654, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__295(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__295\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                      >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:658: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 658, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:660: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 660, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0x18000000U == (0x18000000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:664: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 664, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:666: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 666, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__296(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__296\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0x10000000U == (0x18000000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:670: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 670, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:672: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 672, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ (IData)((2U != (0x402U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:676: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 676, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:678: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 678, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__297(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__297\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                        >> 0xbU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:682: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 682, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:684: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 684, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:688: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 688, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:690: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 690, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__298(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__298\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:694: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 694, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:696: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 696, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                        >> 0xbU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:700: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 700, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:702: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 702, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__299(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__299\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:706: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 706, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:708: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 708, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ (IData)((2U != (0x402U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:712: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 712, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:714: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 714, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__300(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__300\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                        >> 0xbU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:718: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 718, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:720: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 720, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:724: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 724, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:726: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 726, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__301(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__301\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:730: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 730, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:732: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 732, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:736: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 736, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:738: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 738, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__302(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__302\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:742: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 742, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:744: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 744, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:748: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 748, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:750: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 750, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__303(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__303\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xaU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:754: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 754, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:756: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 756, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                          << 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xbU)) != vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:760: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 760, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:762: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 762, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__304(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__304\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:766: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 766, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:768: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 768, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                               >> 0x1bU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:772: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 772, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:774: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 774, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__305(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__305\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                 >> 0x13U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:778: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 778, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:780: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 780, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                               >> 0xbU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:784: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 784, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:786: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 786, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__306(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__306\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                               >> 2U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:790: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 790, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:792: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 792, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                               >> 1U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:796: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 796, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:798: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 798, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__307(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__307\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_1138) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight) 
                        >> (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:802: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' channel re-used a source ID (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 802, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:804: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 804, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_1157) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight) 
                            >> (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                      >> 0xbU))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:808: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 808, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:810: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 810, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__308(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__308\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_1157) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:814: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 814, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:816: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 816, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__309(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__309\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_1157) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 6U)) != (0xfU & 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                              >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:820: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel contains improper response size (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 820, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:822: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 822, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_1157)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes) 
                                                 >> 
                                                 (4U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                     >> 9U))) 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes) 
                                                      >> 
                                                      (4U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                          >> 9U))) 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 
                                                         (4U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                             >> 9U))) 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes) 
                                                               >> 
                                                               (4U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                   >> 9U))) 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:826: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 826, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:828: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 828, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__310(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__310\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_1157)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                 >> 0x13U)) != (0x7fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes) 
                                                    >> 
                                                    (8U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                        >> 8U))) 
                                                   >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:832: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel contains improper response size (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 832, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:834: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 834, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid)) 
                        & ((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0xaU)) == (1U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                   >> 0xbU)))) 
                       & (6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_d_ready)) 
                           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending)) 
                              & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:838: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 838, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:840: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 840, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__311(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__311\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset)) 
                           & (~ ((((~ (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xaU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___same_cycle_resp_T_1)) 
                                  != ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                                        & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                                       & (6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_bits_opcode))) 
                                      & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                            >> 0xbU)))) 
                                 | (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___same_cycle_resp_T_1))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:844: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency 6 (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 844, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:846: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 846, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset)) 
                           & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:850: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: TileLink timeout expired (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 850, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:852: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 852, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__312(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__312\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____VdfgTmp_h788cf909__0)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_1) 
                           >> (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0xbU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:856: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 856, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:858: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 858, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____VdfgTmp_h788cf909__0)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                 >> 0x13U)) != (0x7fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes_1) 
                                                    >> 
                                                    (8U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                        >> 8U))) 
                                                   >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:862: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: 'D' channel contains improper response size (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 862, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:864: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 864, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__313(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__313\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset)) 
                           & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:868: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor: Assertion failed: TileLink timeout expired (connected at TSIHarness.scala:118:29)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 868, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_58.sv:870: Assertion failed in %NTestDriver.testHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_58.sv", 870, "");
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_1105) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode 
            = ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                ? 1U : 4U);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__314(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__314\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                      & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:180: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 180, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:182: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 182, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                      & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:186: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 186, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:188: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 188, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__315(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__315\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                            [0U][0U] 
                                            >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:192: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 192, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:194: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 194, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (IData)((3U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                [0U][0U] 
                                                >> 6U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:198: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 198, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:200: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 200, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__316(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__316\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (3U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 6U)))) 
                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][0U] << 0xeU) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][0U] 
                                           >> 0x12U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:204: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 204, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:206: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 206, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                    [0U][0U] >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:210: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 210, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:212: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 212, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__317(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__317\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0xffU != (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][1U] 
                                           >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:216: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 216, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:218: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 218, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                        [0U][3U] >> 0x14U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:222: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 222, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:224: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 224, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__318(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__318\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                      & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:228: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 228, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:230: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 230, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                      & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:234: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 234, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:236: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 236, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__319(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__319\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                            [0U][0U] 
                                            >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:240: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 240, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:242: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 242, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (IData)((3U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                [0U][0U] 
                                                >> 6U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:246: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 246, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:248: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 248, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__320(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__320\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (3U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 6U)))) 
                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][0U] << 0xeU) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][0U] 
                                           >> 0x12U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:252: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 252, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:254: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 254, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                    [0U][0U] >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:258: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 258, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:260: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 260, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__321(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__321\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U == (0x38U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                               [0U][0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:264: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 264, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:266: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 266, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0xffU != (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][1U] 
                                           >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:270: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 270, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:272: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 272, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__322(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__322\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                        [0U][3U] >> 0x14U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:276: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 276, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:278: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 278, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                            [0U][0U] 
                                            >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:282: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 282, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:284: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 284, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__323(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__323\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x2010U != (0x3fffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                [0U][1U] 
                                                << 2U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                  [0U][0U] 
                                                  >> 0x1eU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:288: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 288, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:290: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 290, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                            [0U][0U] 
                                            >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:294: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel Get carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 294, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:296: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 296, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__324(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__324\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (3U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 6U)))) 
                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][0U] << 0xeU) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][0U] 
                                           >> 0x12U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:300: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel Get address not aligned to size (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 300, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:302: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 302, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                     [0U][0U] >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:306: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel Get carries invalid param (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 306, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:308: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 308, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__325(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__325\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                  [0U][1U] >> 0xcU)) 
                        != ((0x80U & (((((3U == (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                    [0U][0U] 
                                                    >> 6U))) 
                                         | (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0xc0U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U])) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0x14U)))) 
                                        | (IData)((
                                                   ((0x40U 
                                                     == 
                                                     (0xc0U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U])) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0x14U)) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0x13U)))) 
                                       << 7U) | (0x7ff80U 
                                                 & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0xdU) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0xcU)) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0xbU))))) 
                            | ((0x40U & (((((3U == 
                                             (3U & 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                               [0U][0U] 
                                               >> 6U))) 
                                            | (IData)(
                                                      ((0x80U 
                                                        == 
                                                        (0xc0U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U])) 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)))) 
                                           | (IData)(
                                                     (((0x40U 
                                                        == 
                                                        (0xc0U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U])) 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x13U)))) 
                                          << 6U) | 
                                         (0x3ffc0U 
                                          & (((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                  [0U][0U] 
                                                  >> 0x12U)) 
                                              << 6U) 
                                             & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                 [0U][0U] 
                                                 >> 0xeU) 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 0xdU)))))) 
                               | ((0x20U & (((((3U 
                                                == 
                                                (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                    [0U][0U] 
                                                    >> 6U))) 
                                               | (IData)(
                                                         ((0x80U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U])) 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                             [0U][0U] 
                                                             >> 0x14U)))) 
                                              | (IData)(
                                                        (((0x40U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U])) 
                                                          & (~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x13U))) 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U] 
                                                            >> 0x14U)))) 
                                             << 5U) 
                                            | (0x1ffe0U 
                                               & ((((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0x13U)) 
                                                    << 5U) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0xfU)) 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                     [0U][0U] 
                                                     >> 0xdU))))) 
                                  | ((0x10U & (((((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 6U))) 
                                                  | (IData)(
                                                            ((0x80U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U])) 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                [0U][0U] 
                                                                >> 0x14U)))) 
                                                 | (IData)(
                                                           (((0x40U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U])) 
                                                             & (~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U] 
                                                                 >> 0x13U))) 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U] 
                                                               >> 0x14U)))) 
                                                << 4U) 
                                               | (0xfff0U 
                                                  & (((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0x12U)) 
                                                      << 4U) 
                                                     & (((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x13U)) 
                                                         << 4U) 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x10U)))))) 
                                     | ((8U & (((((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 6U))) 
                                                  | ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0x14U)) 
                                                     & (0x80U 
                                                        == 
                                                        (0xc0U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U])))) 
                                                 | (IData)(
                                                           (((0x40U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U])) 
                                                             & (~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U] 
                                                                 >> 0x14U))) 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U] 
                                                               >> 0x13U)))) 
                                                << 3U) 
                                               | (0xfff8U 
                                                  & ((((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x14U)) 
                                                       << 3U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x10U)) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0xfU))))) 
                                        | ((4U & ((
                                                   (((3U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 6U))) 
                                                     | ((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)) 
                                                        & (0x80U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U])))) 
                                                    | (IData)(
                                                              (((0x40U 
                                                                 == 
                                                                 (0xc0U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U])) 
                                                                & (~ 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                    [0U][0U] 
                                                                    >> 0x14U))) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U] 
                                                                  >> 0x13U)))) 
                                                   << 2U) 
                                                  | (0x7ffcU 
                                                     & (((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x12U)) 
                                                         << 2U) 
                                                        & (((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x14U)) 
                                                            << 2U) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x11U)))))) 
                                           | ((2U & 
                                               (((((3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 6U))) 
                                                   | ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0x14U)) 
                                                      & (0x80U 
                                                         == 
                                                         (0xc0U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U])))) 
                                                  | (IData)(
                                                            (((0x40U 
                                                               == 
                                                               (0xc0U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                [0U][0U])) 
                                                              & (~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U] 
                                                                  >> 0x14U))) 
                                                             & (~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U] 
                                                                 >> 0x13U))))) 
                                                 << 1U) 
                                                | (0x7ffeU 
                                                   & ((((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)) 
                                                        & (~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U] 
                                                            >> 0x13U))) 
                                                       << 1U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x11U))))) 
                                              | (1U 
                                                 & ((((3U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 6U))) 
                                                      | ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x14U)) 
                                                         & (0x80U 
                                                            == 
                                                            (0xc0U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                             [0U][0U])))) 
                                                     | (IData)(
                                                               (((0x40U 
                                                                  == 
                                                                  (0xc0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                   [0U][0U])) 
                                                                 & (~ 
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                     [0U][0U] 
                                                                     >> 0x14U))) 
                                                                & (~ 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                    [0U][0U] 
                                                                    >> 0x13U))))) 
                                                    | ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x12U)) 
                                                       & ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U] 
                                                            >> 0x14U)) 
                                                          & (~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x13U))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:312: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel Get contains invalid mask (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 312, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:314: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 314, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__326(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__326\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                        [0U][3U] >> 0x14U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:318: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel Get is corrupt (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 318, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:320: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 320, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0x210U > (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                [0U][0U] 
                                                >> 8U))) 
                           & (0x2010U == (0x3fffU & 
                                          ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            << 2U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                              [0U][0U] 
                                              >> 0x1eU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:324: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 324, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:326: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 326, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__327(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__327\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                            [0U][0U] 
                                            >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:330: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 330, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:332: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 332, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (3U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 6U)))) 
                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][0U] << 0xeU) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][0U] 
                                           >> 0x12U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:336: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 336, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:338: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 338, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__328(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__328\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                     [0U][0U] >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:342: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel PutFull carries invalid param (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 342, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:344: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 344, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                  [0U][1U] >> 0xcU)) 
                        != ((0x80U & (((((3U == (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                    [0U][0U] 
                                                    >> 6U))) 
                                         | (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0xc0U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U])) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0x14U)))) 
                                        | (IData)((
                                                   ((0x40U 
                                                     == 
                                                     (0xc0U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U])) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0x14U)) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0x13U)))) 
                                       << 7U) | (0x7ff80U 
                                                 & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0xdU) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0xcU)) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0xbU))))) 
                            | ((0x40U & (((((3U == 
                                             (3U & 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                               [0U][0U] 
                                               >> 6U))) 
                                            | (IData)(
                                                      ((0x80U 
                                                        == 
                                                        (0xc0U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U])) 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)))) 
                                           | (IData)(
                                                     (((0x40U 
                                                        == 
                                                        (0xc0U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U])) 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x13U)))) 
                                          << 6U) | 
                                         (0x3ffc0U 
                                          & (((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                  [0U][0U] 
                                                  >> 0x12U)) 
                                              << 6U) 
                                             & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                 [0U][0U] 
                                                 >> 0xeU) 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 0xdU)))))) 
                               | ((0x20U & (((((3U 
                                                == 
                                                (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                    [0U][0U] 
                                                    >> 6U))) 
                                               | (IData)(
                                                         ((0x80U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U])) 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                             [0U][0U] 
                                                             >> 0x14U)))) 
                                              | (IData)(
                                                        (((0x40U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U])) 
                                                          & (~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x13U))) 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U] 
                                                            >> 0x14U)))) 
                                             << 5U) 
                                            | (0x1ffe0U 
                                               & ((((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0x13U)) 
                                                    << 5U) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0xfU)) 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                     [0U][0U] 
                                                     >> 0xdU))))) 
                                  | ((0x10U & (((((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 6U))) 
                                                  | (IData)(
                                                            ((0x80U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U])) 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                [0U][0U] 
                                                                >> 0x14U)))) 
                                                 | (IData)(
                                                           (((0x40U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U])) 
                                                             & (~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U] 
                                                                 >> 0x13U))) 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U] 
                                                               >> 0x14U)))) 
                                                << 4U) 
                                               | (0xfff0U 
                                                  & (((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0x12U)) 
                                                      << 4U) 
                                                     & (((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x13U)) 
                                                         << 4U) 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x10U)))))) 
                                     | ((8U & (((((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 6U))) 
                                                  | ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0x14U)) 
                                                     & (0x80U 
                                                        == 
                                                        (0xc0U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U])))) 
                                                 | (IData)(
                                                           (((0x40U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U])) 
                                                             & (~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U] 
                                                                 >> 0x14U))) 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U] 
                                                               >> 0x13U)))) 
                                                << 3U) 
                                               | (0xfff8U 
                                                  & ((((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x14U)) 
                                                       << 3U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x10U)) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0xfU))))) 
                                        | ((4U & ((
                                                   (((3U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 6U))) 
                                                     | ((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)) 
                                                        & (0x80U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U])))) 
                                                    | (IData)(
                                                              (((0x40U 
                                                                 == 
                                                                 (0xc0U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U])) 
                                                                & (~ 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                    [0U][0U] 
                                                                    >> 0x14U))) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U] 
                                                                  >> 0x13U)))) 
                                                   << 2U) 
                                                  | (0x7ffcU 
                                                     & (((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x12U)) 
                                                         << 2U) 
                                                        & (((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x14U)) 
                                                            << 2U) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x11U)))))) 
                                           | ((2U & 
                                               (((((3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 6U))) 
                                                   | ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0x14U)) 
                                                      & (0x80U 
                                                         == 
                                                         (0xc0U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U])))) 
                                                  | (IData)(
                                                            (((0x40U 
                                                               == 
                                                               (0xc0U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                [0U][0U])) 
                                                              & (~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U] 
                                                                  >> 0x14U))) 
                                                             & (~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U] 
                                                                 >> 0x13U))))) 
                                                 << 1U) 
                                                | (0x7ffeU 
                                                   & ((((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)) 
                                                        & (~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U] 
                                                            >> 0x13U))) 
                                                       << 1U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x11U))))) 
                                              | (1U 
                                                 & ((((3U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 6U))) 
                                                      | ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x14U)) 
                                                         & (0x80U 
                                                            == 
                                                            (0xc0U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                             [0U][0U])))) 
                                                     | (IData)(
                                                               (((0x40U 
                                                                  == 
                                                                  (0xc0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                   [0U][0U])) 
                                                                 & (~ 
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                     [0U][0U] 
                                                                     >> 0x14U))) 
                                                                & (~ 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                    [0U][0U] 
                                                                    >> 0x13U))))) 
                                                    | ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x12U)) 
                                                       & ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U] 
                                                            >> 0x14U)) 
                                                          & (~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x13U))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:348: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 348, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:350: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 350, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__329(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__329\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0x210U > (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                [0U][0U] 
                                                >> 8U))) 
                           & (0x2010U == (0x3fffU & 
                                          ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            << 2U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                              [0U][0U] 
                                              >> 0x1eU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:354: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 354, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:356: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 356, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                            [0U][0U] 
                                            >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:360: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 360, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:362: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 362, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__330(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__330\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (3U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 6U)))) 
                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][0U] << 0xeU) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][0U] 
                                           >> 0x12U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:366: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 366, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:368: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 368, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                     [0U][0U] >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:372: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel PutPartial carries invalid param (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 372, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:374: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 374, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__331(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__331\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xffU & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                          [0U][1U] 
                                          << 0x14U) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0xcU)) 
                                        & (~ ((0x80U 
                                               & (((((3U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 6U))) 
                                                     | (IData)(
                                                               ((0x80U 
                                                                 == 
                                                                 (0xc0U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U])) 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                   [0U][0U] 
                                                                   >> 0x14U)))) 
                                                    | (IData)(
                                                              (((0x40U 
                                                                 == 
                                                                 (0xc0U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U])) 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                   [0U][0U] 
                                                                   >> 0x14U)) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U] 
                                                                  >> 0x13U)))) 
                                                   << 7U) 
                                                  | (0x7ff80U 
                                                     & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0xdU) 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U] 
                                                            >> 0xcU)) 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0xbU))))) 
                                              | ((0x40U 
                                                  & (((((3U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                             [0U][0U] 
                                                             >> 6U))) 
                                                        | (IData)(
                                                                  ((0x80U 
                                                                    == 
                                                                    (0xc0U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                     [0U][0U])) 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                      [0U][0U] 
                                                                      >> 0x14U)))) 
                                                       | (IData)(
                                                                 (((0x40U 
                                                                    == 
                                                                    (0xc0U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                     [0U][0U])) 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                      [0U][0U] 
                                                                      >> 0x14U)) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                     [0U][0U] 
                                                                     >> 0x13U)))) 
                                                      << 6U) 
                                                     | (0x3ffc0U 
                                                        & (((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x12U)) 
                                                            << 6U) 
                                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U] 
                                                               >> 0xeU) 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U] 
                                                                 >> 0xdU)))))) 
                                                 | ((0x20U 
                                                     & (((((3U 
                                                            == 
                                                            (3U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                [0U][0U] 
                                                                >> 6U))) 
                                                           | (IData)(
                                                                     ((0x80U 
                                                                       == 
                                                                       (0xc0U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                        [0U][0U])) 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                         [0U][0U] 
                                                                         >> 0x14U)))) 
                                                          | (IData)(
                                                                    (((0x40U 
                                                                       == 
                                                                       (0xc0U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                        [0U][0U])) 
                                                                      & (~ 
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                          [0U][0U] 
                                                                          >> 0x13U))) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                        [0U][0U] 
                                                                        >> 0x14U)))) 
                                                         << 5U) 
                                                        | (0x1ffe0U 
                                                           & ((((~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U] 
                                                                  >> 0x13U)) 
                                                                << 5U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U] 
                                                                  >> 0xfU)) 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U] 
                                                                 >> 0xdU))))) 
                                                    | ((0x10U 
                                                        & (((((3U 
                                                               == 
                                                               (3U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                   [0U][0U] 
                                                                   >> 6U))) 
                                                              | (IData)(
                                                                        ((0x80U 
                                                                          == 
                                                                          (0xc0U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                           [0U][0U])) 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                            [0U][0U] 
                                                                            >> 0x14U)))) 
                                                             | (IData)(
                                                                       (((0x40U 
                                                                          == 
                                                                          (0xc0U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                           [0U][0U])) 
                                                                         & (~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                             [0U][0U] 
                                                                             >> 0x13U))) 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                           [0U][0U] 
                                                                           >> 0x14U)))) 
                                                            << 4U) 
                                                           | (0xfff0U 
                                                              & (((~ 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                    [0U][0U] 
                                                                    >> 0x12U)) 
                                                                  << 4U) 
                                                                 & (((~ 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                       [0U][0U] 
                                                                       >> 0x13U)) 
                                                                     << 4U) 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                       [0U][0U] 
                                                                       >> 0x10U)))))) 
                                                       | ((8U 
                                                           & (((((3U 
                                                                  == 
                                                                  (3U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                      [0U][0U] 
                                                                      >> 6U))) 
                                                                 | ((~ 
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                      [0U][0U] 
                                                                      >> 0x14U)) 
                                                                    & (0x80U 
                                                                       == 
                                                                       (0xc0U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                        [0U][0U])))) 
                                                                | (IData)(
                                                                          (((0x40U 
                                                                             == 
                                                                             (0xc0U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                              [0U][0U])) 
                                                                            & (~ 
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                                [0U][0U] 
                                                                                >> 0x14U))) 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                              [0U][0U] 
                                                                              >> 0x13U)))) 
                                                               << 3U) 
                                                              | (0xfff8U 
                                                                 & ((((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                        [0U][0U] 
                                                                        >> 0x14U)) 
                                                                      << 3U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                        [0U][0U] 
                                                                        >> 0x10U)) 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                       [0U][0U] 
                                                                       >> 0xfU))))) 
                                                          | ((4U 
                                                              & (((((3U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                         [0U][0U] 
                                                                         >> 6U))) 
                                                                    | ((~ 
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                         [0U][0U] 
                                                                         >> 0x14U)) 
                                                                       & (0x80U 
                                                                          == 
                                                                          (0xc0U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                           [0U][0U])))) 
                                                                   | (IData)(
                                                                             (((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                                [0U][0U])) 
                                                                               & (~ 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                                [0U][0U] 
                                                                                >> 0x14U))) 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                                [0U][0U] 
                                                                                >> 0x13U)))) 
                                                                  << 2U) 
                                                                 | (0x7ffcU 
                                                                    & (((~ 
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                          [0U][0U] 
                                                                          >> 0x12U)) 
                                                                        << 2U) 
                                                                       & (((~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                             [0U][0U] 
                                                                             >> 0x14U)) 
                                                                           << 2U) 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                             [0U][0U] 
                                                                             >> 0x11U)))))) 
                                                             | ((2U 
                                                                 & (((((3U 
                                                                        == 
                                                                        (3U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                            [0U][0U] 
                                                                            >> 6U))) 
                                                                       | ((~ 
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                            [0U][0U] 
                                                                            >> 0x14U)) 
                                                                          & (0x80U 
                                                                             == 
                                                                             (0xc0U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                              [0U][0U])))) 
                                                                      | (IData)(
                                                                                (((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                                [0U][0U])) 
                                                                                & (~ 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                                [0U][0U] 
                                                                                >> 0x14U))) 
                                                                                & (~ 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                                [0U][0U] 
                                                                                >> 0x13U))))) 
                                                                     << 1U) 
                                                                    | (0x7ffeU 
                                                                       & ((((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                              [0U][0U] 
                                                                              >> 0x14U)) 
                                                                            & (~ 
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                                [0U][0U] 
                                                                                >> 0x13U))) 
                                                                           << 1U) 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                             [0U][0U] 
                                                                             >> 0x11U))))) 
                                                                | (1U 
                                                                   & ((((3U 
                                                                         == 
                                                                         (3U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                             [0U][0U] 
                                                                             >> 6U))) 
                                                                        | ((~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                             [0U][0U] 
                                                                             >> 0x14U)) 
                                                                           & (0x80U 
                                                                              == 
                                                                              (0xc0U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                               [0U][0U])))) 
                                                                       | (IData)(
                                                                                (((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                                [0U][0U])) 
                                                                                & (~ 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                                [0U][0U] 
                                                                                >> 0x14U))) 
                                                                                & (~ 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                                [0U][0U] 
                                                                                >> 0x13U))))) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                           [0U][0U] 
                                                                           >> 0x12U)) 
                                                                         & ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                              [0U][0U] 
                                                                              >> 0x14U)) 
                                                                            & (~ 
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                                [0U][0U] 
                                                                                >> 0x13U)))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:378: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 378, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:380: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 380, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__332(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__332\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                      & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:384: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 384, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:386: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 386, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                            [0U][0U] 
                                            >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:390: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 390, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:392: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 392, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__333(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__333\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (3U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 6U)))) 
                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][0U] << 0xeU) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][0U] 
                                           >> 0x12U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:396: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 396, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:398: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 398, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                    [0U][0U] >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:402: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 402, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:404: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 404, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__334(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__334\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                  [0U][1U] >> 0xcU)) 
                        != ((0x80U & (((((3U == (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                    [0U][0U] 
                                                    >> 6U))) 
                                         | (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0xc0U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U])) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0x14U)))) 
                                        | (IData)((
                                                   ((0x40U 
                                                     == 
                                                     (0xc0U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U])) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0x14U)) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0x13U)))) 
                                       << 7U) | (0x7ff80U 
                                                 & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0xdU) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0xcU)) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0xbU))))) 
                            | ((0x40U & (((((3U == 
                                             (3U & 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                               [0U][0U] 
                                               >> 6U))) 
                                            | (IData)(
                                                      ((0x80U 
                                                        == 
                                                        (0xc0U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U])) 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)))) 
                                           | (IData)(
                                                     (((0x40U 
                                                        == 
                                                        (0xc0U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U])) 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x13U)))) 
                                          << 6U) | 
                                         (0x3ffc0U 
                                          & (((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                  [0U][0U] 
                                                  >> 0x12U)) 
                                              << 6U) 
                                             & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                 [0U][0U] 
                                                 >> 0xeU) 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 0xdU)))))) 
                               | ((0x20U & (((((3U 
                                                == 
                                                (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                    [0U][0U] 
                                                    >> 6U))) 
                                               | (IData)(
                                                         ((0x80U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U])) 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                             [0U][0U] 
                                                             >> 0x14U)))) 
                                              | (IData)(
                                                        (((0x40U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U])) 
                                                          & (~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x13U))) 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U] 
                                                            >> 0x14U)))) 
                                             << 5U) 
                                            | (0x1ffe0U 
                                               & ((((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0x13U)) 
                                                    << 5U) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0xfU)) 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                     [0U][0U] 
                                                     >> 0xdU))))) 
                                  | ((0x10U & (((((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 6U))) 
                                                  | (IData)(
                                                            ((0x80U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U])) 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                [0U][0U] 
                                                                >> 0x14U)))) 
                                                 | (IData)(
                                                           (((0x40U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U])) 
                                                             & (~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U] 
                                                                 >> 0x13U))) 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U] 
                                                               >> 0x14U)))) 
                                                << 4U) 
                                               | (0xfff0U 
                                                  & (((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0x12U)) 
                                                      << 4U) 
                                                     & (((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x13U)) 
                                                         << 4U) 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x10U)))))) 
                                     | ((8U & (((((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 6U))) 
                                                  | ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0x14U)) 
                                                     & (0x80U 
                                                        == 
                                                        (0xc0U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U])))) 
                                                 | (IData)(
                                                           (((0x40U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U])) 
                                                             & (~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U] 
                                                                 >> 0x14U))) 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U] 
                                                               >> 0x13U)))) 
                                                << 3U) 
                                               | (0xfff8U 
                                                  & ((((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x14U)) 
                                                       << 3U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x10U)) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0xfU))))) 
                                        | ((4U & ((
                                                   (((3U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 6U))) 
                                                     | ((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)) 
                                                        & (0x80U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U])))) 
                                                    | (IData)(
                                                              (((0x40U 
                                                                 == 
                                                                 (0xc0U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U])) 
                                                                & (~ 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                    [0U][0U] 
                                                                    >> 0x14U))) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U] 
                                                                  >> 0x13U)))) 
                                                   << 2U) 
                                                  | (0x7ffcU 
                                                     & (((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x12U)) 
                                                         << 2U) 
                                                        & (((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x14U)) 
                                                            << 2U) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x11U)))))) 
                                           | ((2U & 
                                               (((((3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 6U))) 
                                                   | ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0x14U)) 
                                                      & (0x80U 
                                                         == 
                                                         (0xc0U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U])))) 
                                                  | (IData)(
                                                            (((0x40U 
                                                               == 
                                                               (0xc0U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                [0U][0U])) 
                                                              & (~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U] 
                                                                  >> 0x14U))) 
                                                             & (~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U] 
                                                                 >> 0x13U))))) 
                                                 << 1U) 
                                                | (0x7ffeU 
                                                   & ((((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)) 
                                                        & (~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U] 
                                                            >> 0x13U))) 
                                                       << 1U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x11U))))) 
                                              | (1U 
                                                 & ((((3U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 6U))) 
                                                      | ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x14U)) 
                                                         & (0x80U 
                                                            == 
                                                            (0xc0U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                             [0U][0U])))) 
                                                     | (IData)(
                                                               (((0x40U 
                                                                  == 
                                                                  (0xc0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                   [0U][0U])) 
                                                                 & (~ 
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                     [0U][0U] 
                                                                     >> 0x14U))) 
                                                                & (~ 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                    [0U][0U] 
                                                                    >> 0x13U))))) 
                                                    | ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x12U)) 
                                                       & ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U] 
                                                            >> 0x14U)) 
                                                          & (~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x13U))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:408: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 408, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:410: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 410, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__335(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__335\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                      & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:414: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 414, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:416: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 416, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                            [0U][0U] 
                                            >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:420: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel Logical carries invalid source ID (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 420, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:422: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 422, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__336(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__336\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (3U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 6U)))) 
                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                         [0U][0U] << 0xeU) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                           [0U][0U] 
                                           >> 0x12U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:426: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel Logical address not aligned to size (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 426, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:428: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 428, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                        [0U][0U] >> 5U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:432: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 432, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:434: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 434, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__337(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__337\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
                       & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                  [0U][1U] >> 0xcU)) 
                        != ((0x80U & (((((3U == (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                    [0U][0U] 
                                                    >> 6U))) 
                                         | (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0xc0U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U])) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0x14U)))) 
                                        | (IData)((
                                                   ((0x40U 
                                                     == 
                                                     (0xc0U 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U])) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0x14U)) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0x13U)))) 
                                       << 7U) | (0x7ff80U 
                                                 & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0xdU) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0xcU)) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0xbU))))) 
                            | ((0x40U & (((((3U == 
                                             (3U & 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                               [0U][0U] 
                                               >> 6U))) 
                                            | (IData)(
                                                      ((0x80U 
                                                        == 
                                                        (0xc0U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U])) 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)))) 
                                           | (IData)(
                                                     (((0x40U 
                                                        == 
                                                        (0xc0U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U])) 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x13U)))) 
                                          << 6U) | 
                                         (0x3ffc0U 
                                          & (((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                  [0U][0U] 
                                                  >> 0x12U)) 
                                              << 6U) 
                                             & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                 [0U][0U] 
                                                 >> 0xeU) 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 0xdU)))))) 
                               | ((0x20U & (((((3U 
                                                == 
                                                (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                    [0U][0U] 
                                                    >> 6U))) 
                                               | (IData)(
                                                         ((0x80U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U])) 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                             [0U][0U] 
                                                             >> 0x14U)))) 
                                              | (IData)(
                                                        (((0x40U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U])) 
                                                          & (~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x13U))) 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U] 
                                                            >> 0x14U)))) 
                                             << 5U) 
                                            | (0x1ffe0U 
                                               & ((((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0x13U)) 
                                                    << 5U) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      >> 0xfU)) 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                     [0U][0U] 
                                                     >> 0xdU))))) 
                                  | ((0x10U & (((((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 6U))) 
                                                  | (IData)(
                                                            ((0x80U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U])) 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                [0U][0U] 
                                                                >> 0x14U)))) 
                                                 | (IData)(
                                                           (((0x40U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U])) 
                                                             & (~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U] 
                                                                 >> 0x13U))) 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U] 
                                                               >> 0x14U)))) 
                                                << 4U) 
                                               | (0xfff0U 
                                                  & (((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0x12U)) 
                                                      << 4U) 
                                                     & (((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x13U)) 
                                                         << 4U) 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x10U)))))) 
                                     | ((8U & (((((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 6U))) 
                                                  | ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                       [0U][0U] 
                                                       >> 0x14U)) 
                                                     & (0x80U 
                                                        == 
                                                        (0xc0U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U])))) 
                                                 | (IData)(
                                                           (((0x40U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U])) 
                                                             & (~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U] 
                                                                 >> 0x14U))) 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                               [0U][0U] 
                                                               >> 0x13U)))) 
                                                << 3U) 
                                               | (0xfff8U 
                                                  & ((((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x14U)) 
                                                       << 3U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x10U)) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0xfU))))) 
                                        | ((4U & ((
                                                   (((3U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 6U))) 
                                                     | ((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)) 
                                                        & (0x80U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U])))) 
                                                    | (IData)(
                                                              (((0x40U 
                                                                 == 
                                                                 (0xc0U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U])) 
                                                                & (~ 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                    [0U][0U] 
                                                                    >> 0x14U))) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U] 
                                                                  >> 0x13U)))) 
                                                   << 2U) 
                                                  | (0x7ffcU 
                                                     & (((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x12U)) 
                                                         << 2U) 
                                                        & (((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x14U)) 
                                                            << 2U) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x11U)))))) 
                                           | ((2U & 
                                               (((((3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 6U))) 
                                                   | ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0x14U)) 
                                                      & (0x80U 
                                                         == 
                                                         (0xc0U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U])))) 
                                                  | (IData)(
                                                            (((0x40U 
                                                               == 
                                                               (0xc0U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                [0U][0U])) 
                                                              & (~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                  [0U][0U] 
                                                                  >> 0x14U))) 
                                                             & (~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][0U] 
                                                                 >> 0x13U))))) 
                                                 << 1U) 
                                                | (0x7ffeU 
                                                   & ((((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 0x14U)) 
                                                        & (~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U] 
                                                            >> 0x13U))) 
                                                       << 1U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x11U))))) 
                                              | (1U 
                                                 & ((((3U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 6U))) 
                                                      | ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 0x14U)) 
                                                         & (0x80U 
                                                            == 
                                                            (0xc0U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                             [0U][0U])))) 
                                                     | (IData)(
                                                               (((0x40U 
                                                                  == 
                                                                  (0xc0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                   [0U][0U])) 
                                                                 & (~ 
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                     [0U][0U] 
                                                                     >> 0x14U))) 
                                                                & (~ 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                    [0U][0U] 
                                                                    >> 0x13U))))) 
                                                    | ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 0x12U)) 
                                                       & ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                            [0U][0U] 
                                                            >> 0x14U)) 
                                                          & (~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                              [0U][0U] 
                                                              >> 0x13U))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:438: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1: Assertion failed: 'A' channel Logical contains invalid mask (connected at Configs.scala:128:9)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 438, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:440: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_36.sv", 440, "");
        }
    }
}
