// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestDriver___024root___dump_triggers__act(VTestDriver___024root* vlSelf);
#endif  // VL_DEBUG

void VTestDriver___024root___eval_triggers__act(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__source_1__DOT__clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__source_1__DOT__clk_i)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->TestDriver__DOT__clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__clock)));
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset))) 
                                      | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__source__DOT__clk_i) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__source__DOT__clk_i))));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__source__DOT__clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__source__DOT__clk_i)));
    vlSelf->__VactTriggered.at(4U) = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                                      | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__source_1__DOT__clk_i) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__source_1__DOT__clk_i))));
    vlSelf->__VactTriggered.at(5U) = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                                      | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__source__DOT__clk_i) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__source__DOT__clk_i))));
    vlSelf->__VactTriggered.at(6U) = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_in_async__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_in_async__DOT__sink__DOT____Vcellinp__sink_valid_0__reset))) 
                                      | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__source__DOT__clk_i) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__source__DOT__clk_i))));
    vlSelf->__VactTriggered.at(7U) = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_outer_reset_catcher_io_sync_reset) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_outer_reset_catcher_io_sync_reset))) 
                                      | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__source_1__DOT__clk_i) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__source_1__DOT__clk_i))));
    vlSelf->__VactTriggered.at(8U) = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_in_async__DOT__source__DOT____Vcellinp__sink_extend__reset) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_in_async__DOT__source__DOT____Vcellinp__sink_extend__reset))) 
                                      | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__source_1__DOT__clk_i) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__source_1__DOT__clk_i))));
    vlSelf->__VactTriggered.at(9U) = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___jtag_jtag_TCK) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT___jtag_jtag_TCK)));
    vlSelf->__VactTriggered.at(0xaU) = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___jtag_jtag_TCK) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT___jtag_jtag_TCK))) 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) 
                                           & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))));
    vlSelf->__VactTriggered.at(0xbU) = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___jtag_jtag_TCK) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT___jtag_jtag_TCK))) 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT____Vcellinp__sink_valid_0__reset) 
                                           & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT____Vcellinp__sink_valid_0__reset))));
    vlSelf->__VactTriggered.at(0xcU) = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___gated_clock_debug_clock_gate_out) 
                                        & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT___gated_clock_debug_clock_gate_out)));
    vlSelf->__VactTriggered.at(0xdU) = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___gated_clock_debug_clock_gate_out) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT___gated_clock_debug_clock_gate_out))) 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset) 
                                           & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset))));
    vlSelf->__VactTriggered.at(0xeU) = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___gated_clock_debug_clock_gate_out) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT___gated_clock_debug_clock_gate_out))) 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT____Vcellinp__sink_valid_0__reset) 
                                           & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT____Vcellinp__sink_valid_0__reset))));
    vlSelf->__VactTriggered.at(0xfU) = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__source__DOT__clk_i) 
                                           & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__source__DOT__clk_i))));
    vlSelf->__VactTriggered.at(0x10U) = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___jtag_jtag_TCK)) 
                                          & (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT___jtag_jtag_TCK)) 
                                         | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) 
                                            & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))));
    vlSelf->__VactTriggered.at(0x11U) = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT___jtag_jtag_TCK) 
                                          & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT___jtag_jtag_TCK))) 
                                         | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) 
                                            & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))));
    vlSelf->__VactTriggered.at(0x12U) = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) 
                                          & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                                         | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__source__DOT__clk_i) 
                                            & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__source__DOT__clk_i))));
    vlSelf->__VactTriggered.at(0x13U) = (((IData)(vlSelf->TestDriver__DOT__reset) 
                                          & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__reset))) 
                                         | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__source_1__DOT__clk_i) 
                                            & (~ (IData)(vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__source_1__DOT__clk_i))));
    vlSelf->__VactTriggered.at(0x14U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__source_1__DOT__clk_i 
        = vlSelf->TestDriver__DOT__testHarness__DOT__source_1__DOT__clk_i;
    vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__clock 
        = vlSelf->TestDriver__DOT__clock;
    vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset;
    vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__source__DOT__clk_i 
        = vlSelf->TestDriver__DOT__testHarness__DOT__source__DOT__clk_i;
    vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset;
    vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_in_async__DOT__sink__DOT____Vcellinp__sink_valid_0__reset 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_in_async__DOT__sink__DOT____Vcellinp__sink_valid_0__reset;
    vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_outer_reset_catcher_io_sync_reset 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_outer_reset_catcher_io_sync_reset;
    vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_in_async__DOT__source__DOT____Vcellinp__sink_extend__reset 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_in_async__DOT__source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT___jtag_jtag_TCK 
        = vlSelf->TestDriver__DOT__testHarness__DOT___jtag_jtag_TCK;
    vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset;
    vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT____Vcellinp__sink_valid_0__reset 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT____Vcellinp__sink_valid_0__reset;
    vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT___gated_clock_debug_clock_gate_out 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___gated_clock_debug_clock_gate_out;
    vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT____Vcellinp__sink_valid_0__reset 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT____Vcellinp__sink_valid_0__reset;
    vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset;
    vlSelf->__Vtrigrprev__TOP__TestDriver__DOT__reset 
        = vlSelf->TestDriver__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTestDriver___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VTestDriver___024unit____Vdpiimwrap_jtag_tick_TOP____024unit(CData/*0:0*/ &jtag_TCK, CData/*0:0*/ &jtag_TMS, CData/*0:0*/ &jtag_TDI, CData/*0:0*/ &jtag_TRSTn, CData/*0:0*/ jtag_TDO, IData/*31:0*/ &jtag_tick__Vfuncrtn);
VlCoroutine VTestDriver___024root____Vfork_h9e5f6deb__0__0(VTestDriver___024root* vlSelf, IData/*31:0*/ __Vintraval_h39212f08__0);
VlCoroutine VTestDriver___024root____Vfork_h17fd906d__0__0(VTestDriver___024root* vlSelf, CData/*0:0*/ __Vintraval_hc4343269__0);
VlCoroutine VTestDriver___024root____Vfork_h06b104b5__0__0(VTestDriver___024root* vlSelf, CData/*0:0*/ __Vintraval_h0e18bc76__0);

VL_INLINE_OPT void VTestDriver___024root___act_sequent__TOP__2(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___act_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vfunc_jtag_tick__0__Vfuncout;
    __Vfunc_jtag_tick__0__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TCK;
    __Vfunc_jtag_tick__0__jtag_TCK = 0;
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TMS;
    __Vfunc_jtag_tick__0__jtag_TMS = 0;
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TDI;
    __Vfunc_jtag_tick__0__jtag_TDI = 0;
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TRSTn;
    __Vfunc_jtag_tick__0__jtag_TRSTn = 0;
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset) 
         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__jtag__DOT__r_reset))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__jtag__DOT_____05Fexit = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__jtag__DOT_____05Fjtag_TCK 
            = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__jtag__DOT_____05Fjtag_TCK)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__jtag__DOT__tickCounterReg = 3U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__jtag__DOT__init_done_sticky = 0U;
    } else {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__jtag__DOT__init_done_sticky 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__jtag__DOT__init_done_sticky));
        if ((vlSelf->TestDriver__DOT__testHarness__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__jtag__DOT__init_done_sticky))) {
            if ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__jtag__DOT__tickCounterReg)) {
                VTestDriver___024unit____Vdpiimwrap_jtag_tick_TOP____024unit(__Vfunc_jtag_tick__0__jtag_TCK, __Vfunc_jtag_tick__0__jtag_TMS, __Vfunc_jtag_tick__0__jtag_TDI, __Vfunc_jtag_tick__0__jtag_TRSTn, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__jtag__DOT_____05Fjtag_TDO), __Vfunc_jtag_tick__0__Vfuncout);
                vlSelf->TestDriver__DOT__testHarness__DOT__jtag__DOT_____05Fjtag_TCK 
                    = __Vfunc_jtag_tick__0__jtag_TCK;
                vlSelf->TestDriver__DOT__testHarness__DOT__jtag__DOT_____05Fjtag_TMS 
                    = __Vfunc_jtag_tick__0__jtag_TMS;
                vlSelf->TestDriver__DOT__testHarness__DOT__jtag__DOT_____05Fjtag_TDI 
                    = __Vfunc_jtag_tick__0__jtag_TDI;
                vlSelf->TestDriver__DOT__testHarness__DOT__jtag__DOT_____05Fexit 
                    = __Vfunc_jtag_tick__0__Vfuncout;
            }
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__jtag__DOT__tickCounterReg 
                = vlSelf->TestDriver__DOT__testHarness__DOT__jtag__DOT__tickCounterNxt;
        }
    }
    VTestDriver___024root____Vfork_h9e5f6deb__0__0(vlSelf, vlSelf->__Vintraval_h39212f08__0);
    VTestDriver___024root____Vfork_h17fd906d__0__0(vlSelf, vlSelf->__Vintraval_hc4343269__0);
    VTestDriver___024root____Vfork_h06b104b5__0__0(vlSelf, vlSelf->__Vintraval_h0e18bc76__0);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__0(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__watchdog 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__watchdog;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__watchdog 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__watchdog;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__watchdog 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__watchdog;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__watchdog 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__watchdog;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_chainIn_capture) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_chainIn_update))) 
                                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_chainIn_capture) 
                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_chainIn_shift)))) 
                                 & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_chainIn_update) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_chainIn_shift))))))))) {
        VL_WRITEF("[%0t] %%Error: CaptureUpdateChain_1.sv:224: Assertion failed in %NTestDriver.testHarness.chiptop0.system.dtm.dmiAccessChain: Assertion failed\n    at JtagShifter.scala:183 assert(!(io.chainIn.capture && io.chainIn.update)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/CaptureUpdateChain_1.sv", 224, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: CaptureUpdateChain_1.sv:226: Assertion failed in %NTestDriver.testHarness.chiptop0.system.dtm.dmiAccessChain\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/CaptureUpdateChain_1.sv", 226, "");
        }
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_update))) 
                                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_capture) 
                                        & ((0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                                           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState)))))) 
                                 & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__dtmInfoChain__io_chainIn_update) 
                                       & ((0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                                          & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))))))))))) {
        VL_WRITEF("[%0t] %%Error: CaptureUpdateChain.sv:163: Assertion failed in %NTestDriver.testHarness.chiptop0.system.dtm.dtmInfoChain: Assertion failed\n    at JtagShifter.scala:183 assert(!(io.chainIn.capture && io.chainIn.update)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/CaptureUpdateChain.sv", 163, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: CaptureUpdateChain.sv:165: Assertion failed in %NTestDriver.testHarness.chiptop0.system.dtm.dtmInfoChain\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/CaptureUpdateChain.sv", 165, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__tapIO_idcodeChain__io_chainIn_capture) 
                                      & ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))))) 
                                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__tapIO_idcodeChain__io_chainIn_capture) 
                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__tapIO_idcodeChain__io_chainIn_shift)))) 
                                 & (~ (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                                        & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__tapIO_idcodeChain__io_chainIn_shift))))))))) {
        VL_WRITEF("[%0t] %%Error: CaptureChain.sv:187: Assertion failed in %NTestDriver.testHarness.chiptop0.system.dtm.tapIO_idcodeChain: Assertion failed\n    at JtagShifter.scala:117 assert(!(io.chainIn.capture && io.chainIn.update)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/CaptureChain.sv", 187, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: CaptureChain.sv:189: Assertion failed in %NTestDriver.testHarness.chiptop0.system.dtm.tapIO_idcodeChain\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/CaptureChain.sv", 189, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                      & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:129: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 129, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:131: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 131, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                      & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:135: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 135, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:137: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 137, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != ((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                ? (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                         << 2U)) : 0U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:141: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 141, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:143: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 143, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ ((0U == ((0xeU & (8U ^ (((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                                    ? 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                                    >> 2U)
                                                    : 4U) 
                                                  << 1U))) 
                                   | (IData)(vlSelf->__VdfgTmp_haa5b4e88__0))) 
                           | (0xaU == (0xfU & (((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                                 ? 
                                                (0x7fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                                    << 2U))
                                                 : 0x48U) 
                                               >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:171: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 171, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:173: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 173, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != ((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                ? (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                         << 2U)) : 0U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:177: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 177, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:179: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 179, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ ((0U == ((0xeU & (8U ^ (((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                                    ? 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                                    >> 2U)
                                                    : 4U) 
                                                  << 1U))) 
                                   | (IData)(vlSelf->__VdfgTmp_haa5b4e88__0))) 
                           | (0xaU == (0xfU & (((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                                 ? 
                                                (0x7fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                                    << 2U))
                                                 : 0x48U) 
                                               >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:183: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 183, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:185: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 185, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != ((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                ? (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                         << 2U)) : 0U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:189: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 189, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:191: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 191, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__5(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                      & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:195: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 195, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:197: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 197, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != ((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                ? (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                         << 2U)) : 0U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:201: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 201, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:203: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 203, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                      & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:207: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 207, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:209: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 209, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != ((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                ? (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                         << 2U)) : 0U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:213: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 213, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:215: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 215, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__7(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__7\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                      & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:219: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 219, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:221: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 221, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != ((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                ? (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                         << 2U)) : 0U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:225: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 225, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:227: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 227, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__8(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__8\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                      & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:231: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 231, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:233: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 233, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (0U != ((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                ? (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                         << 2U)) : 0U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:237: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 237, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:239: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 239, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__9(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__9\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_set) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:261: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'A' channel re-used a source ID (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 261, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:263: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 263, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:267: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Debug.scala:697:19)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 267, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:269: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 269, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__10(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__10\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
                     & (~ (((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode)) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode)))))
                                 : 0U)) | ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode)) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:273: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at Debug.scala:697:19)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 273, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:275: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 275, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__11(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__11\n"); );
    // Body
    if (VL_UNLIKELY((0xfffffffeU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmOuter_auto_dmi_in_d_valid) 
                                    & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:291: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 291, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:293: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 293, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)) 
                           & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:297: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor: Assertion failed: TileLink timeout expired (connected at Debug.scala:697:19)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 297, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:299: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tlDM.dmOuter.dmOuter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_46.sv", 299, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__113(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__113\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_sizes_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__inflight_sizes_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__c_first_counter_1;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0))) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_1))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:270: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 270, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:272: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 272, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((0U == (0xfU & (IData)(
                                                            (0x9876543210ULL 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                                                                 << 2U)))))) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_1)))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:276: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 276, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:278: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 278, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__114(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__114\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0))) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_2))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:282: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 282, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:284: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 284, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((1U == (0xfU & (IData)(
                                                            (0x9876543210ULL 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                                                                 << 2U)))))) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_2)))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:288: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 288, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:290: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 290, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__115(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__115\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0))) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_3))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:294: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 294, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:296: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 296, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((2U == (0xfU & (IData)(
                                                            (0x9876543210ULL 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                                                                 << 2U)))))) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_3)))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:300: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 300, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:302: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 302, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__116(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__116\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0))) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_4))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:306: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 306, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:308: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 308, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((3U == (0xfU & (IData)(
                                                            (0x9876543210ULL 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                                                                 << 2U)))))) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_4)))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:312: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 312, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:314: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 314, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__117(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__117\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0))) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_5))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:318: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 318, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:320: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 320, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((4U == (0xfU & (IData)(
                                                            (0x9876543210ULL 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                                                                 << 2U)))))) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_5)))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:324: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 324, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:326: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 326, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__118(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__118\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0))) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_6))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:330: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 330, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:332: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 332, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((5U == (0xfU & (IData)(
                                                            (0x9876543210ULL 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                                                                 << 2U)))))) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_6)))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:336: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 336, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:338: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 338, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__119(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__119\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0))) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_7))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:342: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 342, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:344: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 344, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((6U == (0xfU & (IData)(
                                                            (0x9876543210ULL 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                                                                 << 2U)))))) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_7)))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:348: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 348, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:350: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 350, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__120(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__120\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0))) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_8))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:354: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 354, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:356: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 356, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((7U == (0xfU & (IData)(
                                                            (0x9876543210ULL 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                                                                 << 2U)))))) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_8)))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:360: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 360, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:362: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 362, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__121(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__121\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0))) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_9))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:366: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 366, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:368: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 368, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((8U == (0xfU & (IData)(
                                                            (0x9876543210ULL 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                                                                 << 2U)))))) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_9)))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:372: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 372, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:374: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 374, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__122(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__122\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_hbb20db87__0))) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_10))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:378: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:265 assert (!dec || count =/= 0.U)        // underflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 378, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:380: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 380, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((9U == (0xfU & (IData)(
                                                            (0x9876543210ULL 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                                                                 << 2U)))))) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq))) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_10)))))))) {
        VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:384: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4: Assertion failed\n    at ToAXI4.scala:266 assert (!inc || count =/= maxCount.U) // overflow\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 384, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLToAXI4.sv:386: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLToAXI4.sv", 386, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__123(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__123\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                       & (~ (IData)(vlSelf->__VdfgTmp_hb703cfb5__0))) 
                      & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U] 
                            >> 0xeU))) & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[2U] 
                                          >> 0xfU)))) {
        VL_WRITEF("[%0t] %%Error: SinkD.sv:144: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.sinkD: Assertion failed: Data poisoning unsupported\n    at SinkD.scala:82 assert (!(d.valid && d.bits.corrupt && !d.bits.denied), \"Data poisoning unsupported\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/SinkD.sv", 144, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: SinkD.sv:146: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.sinkD\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/SinkD.sv", 146, "");
        }
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__124(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__124\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__deq_ptr_value;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_c_valid)) 
                                  | (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))) 
                                 | (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])))))))) {
        VL_WRITEF("[%0t] %%Error: TLCacheCork.sv:283: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork: Assertion failed\n    at CacheCork.scala:108 assert (!in.c.valid || in.c.bits.opcode === Release || in.c.bits.opcode === ReleaseData)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLCacheCork.sv", 283, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLCacheCork.sv:285: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLCacheCork.sv", 285, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__winnerQual_0)) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__earlyWinner_1)))))))) {
        VL_WRITEF("[%0t] %%Error: TLCacheCork.sv:289: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork: Assertion failed\n    at Arbiter.scala:106 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLCacheCork.sv", 289, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLCacheCork.sv:291: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLCacheCork.sv", 291, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__125(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__125\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__winnerQual_0) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_1_earlyValid))) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__winnerQual_0)) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__earlyWinner_1))))))) {
        VL_WRITEF("[%0t] %%Error: TLCacheCork.sv:295: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork: Assertion failed\n    at Arbiter.scala:108 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLCacheCork.sv", 295, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLCacheCork.sv:297: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLCacheCork.sv", 297, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_valid)) 
                                  | (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_valid)) 
                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___q_io_deq_valid)))) 
                                 & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_valid) 
                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___q_io_deq_valid))) 
                                    | (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___GEN_1)) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___q_1_io_deq_valid)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLCacheCork.sv:301: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork: Assertion failed\n    at Arbiter.scala:106 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLCacheCork.sv", 301, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLCacheCork.sv:303: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLCacheCork.sv", 303, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__126(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__126\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___GEN_1) 
                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___q_1_io_deq_valid))) 
                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_valid)) 
                                  | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_valid)) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___q_io_deq_valid))) 
                                 | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___GEN_1)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___q_1_io_deq_valid)))))))) {
        VL_WRITEF("[%0t] %%Error: TLCacheCork.sv:307: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork: Assertion failed\n    at Arbiter.scala:108 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLCacheCork.sv", 307, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLCacheCork.sv:309: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLCacheCork.sv", 309, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___GEN_1) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___q_1_io_deq_valid))) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___GEN_1)) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___q_1_io_deq_valid))))))) {
        VL_WRITEF("[%0t] %%Error: TLCacheCork.sv:313: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork: Assertion failed\n    at Arbiter.scala:109 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLCacheCork.sv", 313, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLCacheCork.sv:315: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLCacheCork.sv", 315, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__128(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__128\n"); );
    // Body
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__ram_ext__DOT__Memory__v0 = 0U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__empty) 
                                 | (~ (0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT____VdfgTmp_h2f1ba2e9__0) 
                                                >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_e_bits_sink)))))))))) {
        VL_WRITEF("[%0t] %%Error: IDPool.sv:123: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.pool: Assertion failed\n    at IDPool.scala:44 assert (!io.free.valid || !(bitmap & ~taken)(io.free.bits))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/IDPool.sv", 123, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: IDPool.sv:125: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.pool\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/IDPool.sv", 125, "");
        }
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__valid) 
                        != (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap)))))) {
        VL_WRITEF("[%0t] %%Error: IDPool.sv:129: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.pool: Assertion failed\n    at IDPool.scala:48 assert (valid === bitmap.orR)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/IDPool.sv", 129, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: IDPool.sv:131: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.pool\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/IDPool.sv", 131, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__129(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__129\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__valid) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__REG)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__select) 
                        != ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap))
                             ? 0U : ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap))
                                      ? 1U : ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap))
                                               ? 2U
                                               : ((8U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap))
                                                   ? 3U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap))
                                                     ? 5U
                                                     : 
                                                    (6U 
                                                     | (1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap) 
                                                            >> 6U)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: IDPool.sv:135: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.pool: Assertion failed\n    at IDPool.scala:52 assert (select === PriorityEncoder(bitmap))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/IDPool.sv", 135, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: IDPool.sv:137: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.cork.pool\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/IDPool.sv", 137, "");
        }
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__meta_valid;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__130(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__130\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__meta_valid;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__meta_valid;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid_reg)) 
                                 | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__maybe_full) 
                                      << 9U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__maybe_full) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__maybe_full) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__maybe_full) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__maybe_full) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__maybe_full) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__maybe_full) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__maybe_full)))))))))) 
                                    >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)))))))) {
        VL_WRITEF("[%0t] %%Error: AXI4UserYanker.sv:252: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.axi4yank: Assertion failed\n    at UserYanker.scala:66 assert (!out.r.valid || r_valid) // Q must be ready faster than the response\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/AXI4UserYanker.sv", 252, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: AXI4UserYanker.sv:254: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.axi4yank\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/AXI4UserYanker.sv", 254, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_valid_reg)) 
                                 | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__maybe_full) 
                                      << 9U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__maybe_full) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__maybe_full) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__maybe_full) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__maybe_full) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__maybe_full) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__maybe_full) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__maybe_full) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__maybe_full) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__maybe_full)))))))))) 
                                    >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg)))))))) {
        VL_WRITEF("[%0t] %%Error: AXI4UserYanker.sv:258: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.axi4yank: Assertion failed\n    at UserYanker.scala:87 assert (!out.b.valid || b_valid) // Q must be ready faster than the response\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/AXI4UserYanker.sv", 258, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: AXI4UserYanker.sv:260: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.axi4yank\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/AXI4UserYanker.sv", 260, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__131(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__131\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__request_valid;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__request_valid;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_valid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__request_valid;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x__DOT__maybe_full 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x__DOT__maybe_full;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x__DOT__ram_address_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT____Vcellinp__io_bs_adr_q__io_enq_bits_noop))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[3U] 
                        >> 0xeU)))) {
        VL_WRITEF("[%0t] %%Error: SinkC.sv:187: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.sinkC: Assertion failed: Data poisoning unavailable\n    at SinkC.scala:90 assert (!(c.valid && c.bits.corrupt), \"Data poisoning unavailable\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/SinkC.sv", 187, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: SinkC.sv:189: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.sinkC\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/SinkC.sv", 189, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__132(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__132\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__enq_ptr_value;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_0)) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_1)))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:374: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:106 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 374, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:376: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 376, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_earlyValid) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_earlyValid))) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_0)) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_1))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:380: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:108 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 380, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:382: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 382, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__133(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__133\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_1_0)) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_1_1)))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:386: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:106 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 386, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:388: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 388, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_earlyValid) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_earlyValid))) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_1_0)) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_1_1))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:392: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:108 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 392, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:394: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 394, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__134(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__134\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_2_0)) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_2_1)))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:398: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:106 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 398, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:400: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 400, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_10_earlyValid) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_11_earlyValid))) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_2_0)) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_2_1))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:404: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:108 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 404, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:406: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 406, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__135(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__135\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_3_0)) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_3_1)))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:410: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:106 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 410, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:412: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 412, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_15_earlyValid) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_16_earlyValid))) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_3_0)) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__earlyWinner_3_1))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:416: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:108 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 416, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:418: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLXbar.sv", 418, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__137(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__137\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_grantack 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_grantack;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_grantfirst 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_grantfirst;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grantfirst 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grantfirst;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_grantfirst 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_grantfirst;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_grantack 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_grantack;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_grantfirst 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_grantfirst;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_grantack 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_grantack;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_grantfirst 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_grantfirst;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_grantack 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__s_grantack;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_grantfirst 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_grantfirst;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_grantack 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_grantack;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_grantfirst 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_grantfirst;
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_valid) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__nestC) 
                          & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_valid)) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____VdfgTmp_h735f2197__0)))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_req_valid))))) {
        VL_WRITEF("[%0t] %%Error: InclusiveCacheBankScheduler.sv:744: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched: Assertion failed\n    at Scheduler.scala:299 assert (!request.bits.prio(0))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/InclusiveCacheBankScheduler.sv", 744, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: InclusiveCacheBankScheduler.sv:746: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/InclusiveCacheBankScheduler.sv", 746, "");
        }
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_execute 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_execute;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_pprobeack 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_pprobeack;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__138(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__138\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_grant 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_grant;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_execute 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_execute;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_pprobeack 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_pprobeack;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grant 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grant;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_execute 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_execute;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_pprobeack 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_pprobeack;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_grant 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_grant;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_flush 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_flush;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_flush 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_flush;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_flush 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_flush;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_execute 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_execute;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_pprobeack 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_pprobeack;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_grant 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_grant;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_flush 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_flush;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushOutValid 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushOutValid;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__fill 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__fill;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__ram_sink_ext__DOT__Memory__v0 = 0U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceX__DOT__io_x_q__DOT__maybe_full)) 
                                 | (8ULL == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInAddress 
                                             >> 0x1cU)))))))) {
        VL_WRITEF("[%0t] %%Error: InclusiveCache.sv:244: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2: Assertion failed\n    at InclusiveCache.scala:198 assert (!scheduler.io.resp.valid || flushSelect)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/InclusiveCache.sv", 244, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: InclusiveCache.sv:246: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/InclusiveCache.sv", 246, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__140(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__140\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_3 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_3;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_corrupt 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_corrupt;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_mask 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_mask;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_data 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_pdata_r_data;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_valid_pb 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_valid_pb;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes[0U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes[1U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes[2U];
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue_io_enq_valid_REG_1)) 
                                 | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__ptr_match) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__maybe_full))))))))) {
        VL_WRITEF("[%0t] %%Error: SourceD.sv:458: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.sourceD: Assertion failed\n    at SourceD.scala:123 assert (!queue.io.enq.valid || queue.io.enq.ready)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/SourceD.sv", 458, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: SourceD.sv:460: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.sourceD\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/SourceD.sv", 460, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_full)) 
                                  | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_need_r))) 
                                 | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue__DOT__empty)) 
                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__queue_io_enq_valid_REG_1)))))))) {
        VL_WRITEF("[%0t] %%Error: SourceD.sv:464: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.sourceD: Assertion failed\n    at SourceD.scala:232 assert (!s3_full || !s3_need_r || queue.io.deq.valid)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/SourceD.sv", 464, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: SourceD.sv:466: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.sourceD\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/SourceD.sv", 466, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__141(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__141\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_full)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_need_pb)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: SourceD.sv:470: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.sourceD: Assertion failed: Data poisoning unsupported\n    at SourceD.scala:277 assert (!(s4_full && s4_need_pb && s4_pdata.corrupt), \"Data poisoning unsupported\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/SourceD.sv", 470, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: SourceD.sv:472: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.sourceD\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/SourceD.sv", 472, "");
        }
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_opcodes[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_opcodes[0U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_opcodes[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_opcodes[1U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_opcodes[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_opcodes[2U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_acquire 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_acquire;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_acquire 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_acquire;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_acquire 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_acquire;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_acquire 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_acquire;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_pprobe 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_pprobe;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_pprobe 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__s_pprobe;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_pprobe 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__s_pprobe;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_rprobeackfirst 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_rprobeackfirst 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_rprobeackfirst 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_acquire 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__s_acquire;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_pprobe 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__s_pprobe;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_rprobeackfirst 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_release 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__s_release;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__143(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__143\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__room) 
                        != (2U > (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ptr_match)
                                           ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__maybe_full)
                                               ? 0xcU
                                               : 0U)
                                           : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__deq_ptr_value) 
                                               > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__enq_ptr_value))
                                               ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__enq_ptr_value) 
                                                   - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                                  - (IData)(4U))
                                               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__enq_ptr_value) 
                                                  - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)))))))))) {
        VL_WRITEF("[%0t] %%Error: SourceC.sv:194: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.sourceC: Assertion failed\n    at SourceC.scala:64 assert (room === queue.io.count <= 1.U)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/SourceC.sv", 194, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: SourceC.sv:196: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.sourceC\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/SourceC.sv", 196, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_valid)) 
                                 | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ptr_match) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__maybe_full))))))))) {
        VL_WRITEF("[%0t] %%Error: SourceC.sv:200: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.sourceC: Assertion failed\n    at SourceC.scala:116 assert(!c.valid || c.ready)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/SourceC.sv", 200, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: SourceC.sv:202: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.sourceC\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/SourceC.sv", 202, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__224(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__224\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                            & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                           & (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                     >> 0x1cU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:280: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 280, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:282: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 282, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                 ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:286: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 286, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:288: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 288, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__225(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__225\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (2U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:292: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 292, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:294: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 294, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != ((~ ((IData)(0xfffU) 
                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                               & ((0xff8U & ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                      >> 3U)) 
                                             << 3U)) 
                                  | (IData)(vlSelf->__VdfgTmp_h033f8b24__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:298: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 298, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:300: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 300, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__226(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__226\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0xffU != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:304: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 304, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:306: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 306, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (4U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0xdU <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:346: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 346, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:348: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 348, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__227(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__227\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (4U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                            & (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                      >> 0xcU))) | 
                           ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                            & (((((((((0U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                              >> 0xdU)) 
                                      | (4U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                >> 0xcU))) 
                                     | (1U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                               >> 0x10U))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 0x11U)) 
                                                   << 4U))) 
                                              | (0xfU 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 0xcU)))))) 
                                   | (0x200U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                 >> 0x10U))) 
                                  | (0x2010U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                 >> 0xcU))) 
                                 | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                           >> 0x1aU))) 
                                | (0x54000U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                >> 0xcU))) 
                               | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                         >> 0x1cU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:352: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 352, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:354: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 354, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__228(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__228\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (4U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != ((~ ((IData)(0xfffU) 
                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                               & ((0xff8U & ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                      >> 3U)) 
                                             << 3U)) 
                                  | (IData)(vlSelf->__VdfgTmp_h033f8b24__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:358: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 358, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:360: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 360, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (4U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                        != ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                     & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 1U)))))) 
                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                  & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                 & (3ULL == (3ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                             << 7U) | ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                           | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                          | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                                & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 1U)))))) 
                                         | ((~ ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                               & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                             >> 1U)))))) 
                                        << 6U) | ((
                                                   ((((2U 
                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                      | ((2U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                        >> 1U)))) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                    | (((~ 
                                                         ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U)))) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                   << 5U) 
                                                  | ((((((2U 
                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                         | ((2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                        | ((1U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                           & ((~ 
                                                               ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                           >> 1U)))) 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                       | ((~ 
                                                           ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                          & ((~ 
                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                          >> 1U)))) 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                      << 4U) 
                                                     | ((8U 
                                                         & (((((2U 
                                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                  & (2U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                              | ((1U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                             | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                 & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                                                & (3ULL 
                                                                   == 
                                                                   (3ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                            << 3U)) 
                                                        | ((4U 
                                                            & (((((2U 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                  | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                     & (2U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                 | ((1U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                                | ((~ 
                                                                    ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                   & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                               << 2U)) 
                                                           | ((2U 
                                                               & (((((2U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                     | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                        & (2U 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                    | ((1U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                   | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & (~ 
                                                                          ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                      | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                           & (~ 
                                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                    | ((~ 
                                                                        ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:364: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 364, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:366: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 366, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__229(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__229\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (0U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                           & (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                               & (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                         >> 0xcU))) 
                              | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                 & ((((((((0U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                  >> 0xdU)) 
                                          | (4U == 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                              >> 0xcU))) 
                                         | (0U == (
                                                   (0x7fff0U 
                                                    & (0x80U 
                                                       ^ 
                                                       ((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                 >> 0x11U)) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                 >> 0xcU)))))) 
                                        | (0x200U == 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                            >> 0x10U))) 
                                       | (0x2010U == 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                           >> 0xcU))) 
                                      | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                >> 0x1aU))) 
                                     | (0x54000U == 
                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                         >> 0xcU))) 
                                    | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                              >> 0x1cU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:370: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 370, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:372: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 372, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__230(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__230\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (0U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != ((~ ((IData)(0xfffU) 
                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                               & ((0xff8U & ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                      >> 3U)) 
                                             << 3U)) 
                                  | (IData)(vlSelf->__VdfgTmp_h033f8b24__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:376: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 376, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:378: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 378, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (0U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                        != ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                     & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 1U)))))) 
                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                  & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                 & (3ULL == (3ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                             << 7U) | ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                           | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                          | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                                & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 1U)))))) 
                                         | ((~ ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                               & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                             >> 1U)))))) 
                                        << 6U) | ((
                                                   ((((2U 
                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                      | ((2U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                        >> 1U)))) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                    | (((~ 
                                                         ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U)))) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                   << 5U) 
                                                  | ((((((2U 
                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                         | ((2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                        | ((1U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                           & ((~ 
                                                               ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                           >> 1U)))) 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                       | ((~ 
                                                           ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                          & ((~ 
                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                          >> 1U)))) 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                      << 4U) 
                                                     | ((8U 
                                                         & (((((2U 
                                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                  & (2U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                              | ((1U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                             | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                 & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                                                & (3ULL 
                                                                   == 
                                                                   (3ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                            << 3U)) 
                                                        | ((4U 
                                                            & (((((2U 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                  | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                     & (2U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                 | ((1U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                                | ((~ 
                                                                    ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                   & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                               << 2U)) 
                                                           | ((2U 
                                                               & (((((2U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                     | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                        & (2U 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                    | ((1U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                   | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & (~ 
                                                                          ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                      | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                           & (~ 
                                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                    | ((~ 
                                                                        ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:382: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 382, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:384: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 384, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__231(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__231\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (1U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                           & (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                               & (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                         >> 0xcU))) 
                              | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                 & ((((((((0U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                  >> 0xdU)) 
                                          | (4U == 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                              >> 0xcU))) 
                                         | (0U == (
                                                   (0x7fff0U 
                                                    & (0x80U 
                                                       ^ 
                                                       ((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                 >> 0x11U)) 
                                                        << 4U))) 
                                                   | (0xfU 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                 >> 0xcU)))))) 
                                        | (0x200U == 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                            >> 0x10U))) 
                                       | (0x2010U == 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                           >> 0xcU))) 
                                      | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                >> 0x1aU))) 
                                     | (0x54000U == 
                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                         >> 0xcU))) 
                                    | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                              >> 0x1cU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:388: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 388, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:390: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 390, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__232(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__232\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (1U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != ((~ ((IData)(0xfffU) 
                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                               & ((0xff8U & ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                      >> 3U)) 
                                             << 3U)) 
                                  | (IData)(vlSelf->__VdfgTmp_h033f8b24__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:394: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 394, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:396: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 396, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (1U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                               & (~ ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                         | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                        | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                              & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 1U)))))) 
                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                           & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                          & (3ULL == 
                                             (3ULL 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                      << 7U) | ((((
                                                   ((2U 
                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                                         & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                       >> 1U)))))) 
                                                  | ((~ 
                                                      ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                                        & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                      >> 1U)))))) 
                                                 << 6U) 
                                                | ((((((2U 
                                                        < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                       | ((2U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                         & ((~ 
                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                         >> 1U)))) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                     | (((~ 
                                                          ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                      >> 1U)))) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                        & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                    << 5U) 
                                                   | ((((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                          | ((2U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                         | ((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & ((~ 
                                                                ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                            >> 1U)))) 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                        | ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                           & ((~ 
                                                               ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                           >> 1U)))) 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                       << 4U) 
                                                      | ((8U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                   & (2U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                               | ((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                  & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                              | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                  & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                                                 & (3ULL 
                                                                    == 
                                                                    (3ULL 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                   | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                        & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                                 | ((~ 
                                                                     ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                                << 2U)) 
                                                            | ((2U 
                                                                & (((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                      | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                           & (~ 
                                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                    | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                        & (~ 
                                                                           ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & ((((2U 
                                                                        < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                       | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (2U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                      | ((1U 
                                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                         & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                            & (~ 
                                                                               ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                     | ((~ 
                                                                         ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                           & (~ 
                                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:400: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 400, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:402: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 402, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__233(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__233\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (2U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                            & (4U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                           & (((((((((0U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                             >> 0xdU)) 
                                     | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                               >> 0xcU))) 
                                    | (4U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                              >> 0xcU))) 
                                   | (0U == ((0x7fff0U 
                                              & (0x80U 
                                                 ^ 
                                                 ((IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 0x11U)) 
                                                  << 4U))) 
                                             | (0xfU 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 0xcU)))))) 
                                  | (0x200U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                >> 0x10U))) 
                                 | (0x2010U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                >> 0xcU))) 
                                | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                          >> 0x1aU))) 
                               | (0x54000U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                               >> 0xcU))) 
                              | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                        >> 0x1cU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:406: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 406, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:408: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 408, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__234(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__234\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (2U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != ((~ ((IData)(0xfffU) 
                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                               & ((0xff8U & ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                      >> 3U)) 
                                             << 3U)) 
                                  | (IData)(vlSelf->__VdfgTmp_h033f8b24__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:412: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 412, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:414: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 414, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (2U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                        != ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                     & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 1U)))))) 
                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                  & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                 & (3ULL == (3ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                             << 7U) | ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                           | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                          | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                                & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 1U)))))) 
                                         | ((~ ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                               & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                             >> 1U)))))) 
                                        << 6U) | ((
                                                   ((((2U 
                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                      | ((2U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                        >> 1U)))) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                    | (((~ 
                                                         ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U)))) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                   << 5U) 
                                                  | ((((((2U 
                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                         | ((2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                        | ((1U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                           & ((~ 
                                                               ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                           >> 1U)))) 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                       | ((~ 
                                                           ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                          & ((~ 
                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                          >> 1U)))) 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                      << 4U) 
                                                     | ((8U 
                                                         & (((((2U 
                                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                  & (2U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                              | ((1U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                             | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                 & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                                                & (3ULL 
                                                                   == 
                                                                   (3ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                            << 3U)) 
                                                        | ((4U 
                                                            & (((((2U 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                  | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                     & (2U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                 | ((1U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                                | ((~ 
                                                                    ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                   & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                               << 2U)) 
                                                           | ((2U 
                                                               & (((((2U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                     | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                        & (2U 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                    | ((1U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                   | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & (~ 
                                                                          ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                      | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                           & (~ 
                                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                    | ((~ 
                                                                        ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:418: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 418, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:420: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 420, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__235(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__235\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (3U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                            & (4U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                           & (((((((((0U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                             >> 0xdU)) 
                                     | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                               >> 0xcU))) 
                                    | (4U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                              >> 0xcU))) 
                                   | (0U == ((0x7fff0U 
                                              & (0x80U 
                                                 ^ 
                                                 ((IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 0x11U)) 
                                                  << 4U))) 
                                             | (0xfU 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 0xcU)))))) 
                                  | (0x200U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                >> 0x10U))) 
                                 | (0x2010U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                >> 0xcU))) 
                                | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                          >> 0x1aU))) 
                               | (0x54000U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                               >> 0xcU))) 
                              | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                        >> 0x1cU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:424: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 424, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:426: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 426, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__236(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__236\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (3U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & (0U != ((~ ((IData)(0xfffU) 
                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                               & ((0xff8U & ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                      >> 3U)) 
                                             << 3U)) 
                                  | (IData)(vlSelf->__VdfgTmp_h033f8b24__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:430: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 430, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:432: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 432, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                       & (3U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_clock_out_member_allClocks_uncore_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                        != ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                     & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                        & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                   >> 1U)))))) 
                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                  & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                 & (3ULL == (3ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                             << 7U) | ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                           | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                          | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                                & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 1U)))))) 
                                         | ((~ ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0) 
                                               & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                             >> 1U)))))) 
                                        << 6U) | ((
                                                   ((((2U 
                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                      | ((2U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                        >> 1U)))) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                    | (((~ 
                                                         ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U)))) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                   << 5U) 
                                                  | ((((((2U 
                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                         | ((2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0))) 
                                                        | ((1U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                           & ((~ 
                                                               ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                           >> 1U)))) 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                       | ((~ 
                                                           ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                          & ((~ 
                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                          >> 1U)))) 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)))) 
                                                      << 4U) 
                                                     | ((8U 
                                                         & (((((2U 
                                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                  & (2U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                              | ((1U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                             | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                 & (~ (IData)(vlSelf->__VdfgTmp_h455392e5__0))) 
                                                                & (3ULL 
                                                                   == 
                                                                   (3ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                            << 3U)) 
                                                        | ((4U 
                                                            & (((((2U 
                                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                  | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                     & (2U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                 | ((1U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                                | ((~ 
                                                                    ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                   & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                               << 2U)) 
                                                           | ((2U 
                                                               & (((((2U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                     | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                        & (2U 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                    | ((1U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                   | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                       & (~ 
                                                                          ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                      | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                           & (~ 
                                                                              ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                    | ((~ 
                                                                        ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcbdc61__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h455392e5__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:436: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at TSIHarness.scala:118:43)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 436, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_59.sv:438: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/verilator/generated-src/chipyard.harness.TestHarness.TutorialMMIOConfig/gen-collateral/TLMonitor_59.sv", 438, "");
        }
    }
}
