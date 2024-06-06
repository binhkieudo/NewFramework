// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver___024root.h"

extern const VlWide<32>/*1023:0*/ VTestDriver__ConstPool__CONST_h2ae7f32a_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a443f1_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h902eb634_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3468(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3468\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_hc1feb2c3__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc1feb2c3__1;
    VlWide<32>/*1023:0*/ __Vtemp_hb6c95d7c__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb6c95d7c__1;
    // Body
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hc1feb2c3__0, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_source));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hc1feb2c3__1, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_source));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[0U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[0U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[1U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[1U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[1U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[1U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[1U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[1U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[1U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[1U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[2U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[2U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[2U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[2U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[2U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[2U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[2U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[2U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[3U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[3U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[3U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[3U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[3U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[3U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[3U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[3U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[4U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[4U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[4U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[4U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[4U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[4U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[4U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[4U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[5U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[5U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[5U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[5U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[5U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[5U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[5U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[5U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[6U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[6U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[6U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[6U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[6U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[6U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[6U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[6U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[7U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[7U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[7U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[7U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[7U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[7U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[7U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[7U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[8U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[8U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[8U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[8U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[8U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[8U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[8U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[8U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[9U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[9U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[9U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[9U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[9U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[9U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[9U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[9U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xaU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xaU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xaU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xaU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[0xaU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[0xaU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xbU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xbU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xbU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xbU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[0xbU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[0xbU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xcU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xcU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xcU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xcU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[0xcU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[0xcU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xdU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xdU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xdU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xdU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[0xdU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[0xdU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xeU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xeU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xeU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xeU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[0xeU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[0xeU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xfU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xfU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xfU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xfU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[0xfU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[0xfU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0x10U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0x10U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0x10U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0x10U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[0x10U]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[0x10U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])))));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hb6c95d7c__0, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___gcd_auto_in_d_bits_source));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hb6c95d7c__1, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___gcd_auto_in_d_bits_source));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[0U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[0U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[1U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[1U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[1U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[1U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[1U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[1U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[1U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[1U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[2U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[2U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[2U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[2U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[2U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[2U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[2U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[2U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[3U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[3U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[3U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[3U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[3U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[3U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[3U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[3U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[4U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[4U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[4U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[4U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[4U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[4U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[4U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[4U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[5U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[5U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[5U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[5U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[5U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[5U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[5U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[5U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[6U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[6U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[6U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[6U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[6U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[6U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[6U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[6U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[7U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[7U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[7U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[7U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[7U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[7U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[7U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[7U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[8U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[8U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[8U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[8U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[8U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[8U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[8U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[8U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[9U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[9U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[9U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[9U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[9U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[9U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[9U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[9U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0xaU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xaU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xaU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0xaU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[0xaU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[0xaU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0xbU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xbU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xbU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0xbU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[0xbU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[0xbU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0xcU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xcU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xcU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0xcU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[0xcU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[0xcU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0xdU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xdU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xdU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0xdU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[0xdU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[0xdU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0xeU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xeU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xeU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0xeU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[0xeU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[0xeU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0xfU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xfU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xfU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0xfU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[0xfU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[0xfU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0x10U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0x10U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0x10U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight[0x10U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hb6c95d7c__0[0x10U]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hb6c95d7c__1[0x10U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])))));
}

extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42ac30fb_0;
extern const VlWide<66>/*2111:0*/ VTestDriver__ConstPool__CONST_h9636f37d_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_ha3e17051_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42b3b0f7_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3469(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3469\n"); );
    // Init
    VlWide<257>/*8223:0*/ __Vtemp_h100a8a62__0;
    VlWide<257>/*8223:0*/ __Vtemp_had8fca6a__0;
    VlWide<257>/*8223:0*/ __Vtemp_hfa82b8d4__0;
    VlWide<66>/*2111:0*/ __Vtemp_h9665e0bc__0;
    VlWide<66>/*2111:0*/ __Vtemp_hcc200470__0;
    VlWide<66>/*2111:0*/ __Vtemp_h82db4175__0;
    VlWide<257>/*8223:0*/ __Vtemp_h055d027f__0;
    VlWide<257>/*8223:0*/ __Vtemp_haa1293a7__0;
    VlWide<66>/*2111:0*/ __Vtemp_hc2f0cf7d__0;
    VlWide<66>/*2111:0*/ __Vtemp_hfe3d0270__0;
    VlWide<66>/*2111:0*/ __Vtemp_h34985055__0;
    VlWide<66>/*2111:0*/ __Vtemp_h9b2765bc__0;
    VlWide<66>/*2111:0*/ __Vtemp_hee60e96c__0;
    // Body
    VL_EXTEND_WI(8194,3, __Vtemp_h100a8a62__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8194,8194,12, __Vtemp_had8fca6a__0, __Vtemp_h100a8a62__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_hfa82b8d4__0, VTestDriver__ConstPool__CONST_h42ac30fb_0, __Vtemp_had8fca6a__0);
    VL_SEL_WWII(2112,8194, __Vtemp_h9665e0bc__0, __Vtemp_hfa82b8d4__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hcc200470__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7), __Vtemp_h9665e0bc__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_h82db4175__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes, __Vtemp_hcc200470__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h055d027f__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_haa1293a7__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h055d027f__0);
    VL_SEL_WWII(2112,8207, __Vtemp_hc2f0cf7d__0, __Vtemp_haa1293a7__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hfe3d0270__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7), __Vtemp_hc2f0cf7d__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h34985055__0, __Vtemp_hfe3d0270__0);
    VL_AND_W(66, __Vtemp_h9b2765bc__0, __Vtemp_h82db4175__0, __Vtemp_h34985055__0);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_2 = 0U;
        VL_ASSIGN_W(2112,__Vtemp_hee60e96c__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    } else {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_2 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_2) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_set)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__empty)
                      ? 0U : ((7U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink))
                               ? ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink))
                               : 0U))));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_2 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_2) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_set)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__empty)
                      ? 0U : ((7U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink))
                               ? ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink))
                               : 0U))));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_2 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_2) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_set)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__empty)
                      ? 0U : (0xffU & ((IData)(1U) 
                                       << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink))))));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_2 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__inflight_2) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_set)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__empty)
                      ? 0U : (0xffU & ((IData)(1U) 
                                       << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink))))));
        VL_ASSIGN_W(2112,__Vtemp_hee60e96c__0, __Vtemp_h9b2765bc__0);
    }
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes, __Vtemp_hee60e96c__0);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3470(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3470\n"); );
    // Init
    VlWide<257>/*8223:0*/ __Vtemp_hf7ff2068__0;
    VlWide<257>/*8223:0*/ __Vtemp_he4339dcd__0;
    VlWide<257>/*8223:0*/ __Vtemp_he5ff38eb__0;
    VlWide<66>/*2111:0*/ __Vtemp_hfa040d05__0;
    VlWide<66>/*2111:0*/ __Vtemp_he0afa091__0;
    VlWide<66>/*2111:0*/ __Vtemp_h694db7b6__0;
    VlWide<257>/*8223:0*/ __Vtemp_heabfac71__0;
    VlWide<257>/*8223:0*/ __Vtemp_h04fd0655__0;
    VlWide<66>/*2111:0*/ __Vtemp_hbfdc0357__0;
    VlWide<66>/*2111:0*/ __Vtemp_he6e00800__0;
    VlWide<66>/*2111:0*/ __Vtemp_he0732276__0;
    VlWide<66>/*2111:0*/ __Vtemp_h32044abe__0;
    VlWide<66>/*2111:0*/ __Vtemp_h4bca6515__0;
    // Body
    VL_EXTEND_WI(8194,3, __Vtemp_hf7ff2068__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___gcd_auto_in_d_bits_size) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8194,8194,12, __Vtemp_he4339dcd__0, __Vtemp_hf7ff2068__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___gcd_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_he5ff38eb__0, VTestDriver__ConstPool__CONST_h42ac30fb_0, __Vtemp_he4339dcd__0);
    VL_SEL_WWII(2112,8194, __Vtemp_hfa040d05__0, __Vtemp_he5ff38eb__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_he0afa091__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done), __Vtemp_hfa040d05__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_h694db7b6__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight_sizes, __Vtemp_he0afa091__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_heabfac71__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___gcd_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h04fd0655__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_heabfac71__0);
    VL_SEL_WWII(2112,8207, __Vtemp_hbfdc0357__0, __Vtemp_h04fd0655__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_he6e00800__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7), __Vtemp_hbfdc0357__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_he0732276__0, __Vtemp_he6e00800__0);
    VL_AND_W(66, __Vtemp_h32044abe__0, __Vtemp_h694db7b6__0, __Vtemp_he0732276__0);
    VL_COND_WIWW(2112, __Vtemp_h4bca6515__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_h32044abe__0);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight_sizes, __Vtemp_h4bca6515__0);
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
}

extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42ac30ff_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3471(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3471\n"); );
    // Init
    VlWide<257>/*8223:0*/ __Vtemp_hb7b045f3__0;
    VlWide<257>/*8223:0*/ __Vtemp_h163e8804__0;
    VlWide<257>/*8223:0*/ __Vtemp_h45afbbaf__0;
    VlWide<66>/*2111:0*/ __Vtemp_hb0651cf3__0;
    VlWide<66>/*2111:0*/ __Vtemp_hd8d576c6__0;
    VlWide<66>/*2111:0*/ __Vtemp_h97425816__0;
    VlWide<257>/*8223:0*/ __Vtemp_h055d027f__0;
    VlWide<257>/*8223:0*/ __Vtemp_haa1293a7__0;
    VlWide<66>/*2111:0*/ __Vtemp_hc2f0cf7d__0;
    VlWide<66>/*2111:0*/ __Vtemp_hfe3d0270__0;
    VlWide<66>/*2111:0*/ __Vtemp_h34985055__0;
    VlWide<66>/*2111:0*/ __Vtemp_he8a7a8a4__0;
    VlWide<66>/*2111:0*/ __Vtemp_hc59977f6__0;
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__ram_sink_ext__DOT__Memory__v0 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xbU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__ram_sink_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__ram_sink_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__enq_ptr_value;
    }
    VL_EXTEND_WI(8195,4, __Vtemp_hb7b045f3__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_h163e8804__0, __Vtemp_hb7b045f3__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h45afbbaf__0, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_h163e8804__0);
    VL_SEL_WWII(2112,8195, __Vtemp_hb0651cf3__0, __Vtemp_h45afbbaf__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hd8d576c6__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7), __Vtemp_hb0651cf3__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_h97425816__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_opcodes, __Vtemp_hd8d576c6__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h055d027f__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_haa1293a7__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h055d027f__0);
    VL_SEL_WWII(2112,8207, __Vtemp_hc2f0cf7d__0, __Vtemp_haa1293a7__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hfe3d0270__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7), __Vtemp_hc2f0cf7d__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h34985055__0, __Vtemp_hfe3d0270__0);
    VL_AND_W(66, __Vtemp_he8a7a8a4__0, __Vtemp_h97425816__0, __Vtemp_h34985055__0);
    VL_COND_WIWW(2112, __Vtemp_hc59977f6__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_he8a7a8a4__0);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_opcodes, __Vtemp_hc59977f6__0);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3472(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3472\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__acknum = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_875) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter) 
                             - (IData)(1U)) : ((4U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_opcode))
                                                ? (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_size)) 
                                                       >> 3U)))
                                                : 0U)));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dFirst)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_source)
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__acknum) 
                             - ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_opcode)) 
                                | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size))))));
        }
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_2 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_2) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_set)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__do_enq)
                      ? ((7U >= (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xbU))) ? 
                         ((IData)(1U) << (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xbU)))
                          : 0U) : 0U)));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_1_d_valid) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter 
                = (0x1ffU & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter))
                              ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)
                              : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter1)));
        }
    }
}

extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_hea2bd2fa_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a54009_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a4c3f1_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3473(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3473\n"); );
    // Init
    VlWide<257>/*8223:0*/ __Vtemp_h29cee772__0;
    VlWide<257>/*8223:0*/ __Vtemp_h607f1137__0;
    VlWide<257>/*8223:0*/ __Vtemp_h41f0db86__0;
    VlWide<66>/*2111:0*/ __Vtemp_h19942a65__0;
    VlWide<66>/*2111:0*/ __Vtemp_h3d567450__0;
    VlWide<66>/*2111:0*/ __Vtemp_he2bd3a04__0;
    VlWide<257>/*8223:0*/ __Vtemp_heabfac71__0;
    VlWide<257>/*8223:0*/ __Vtemp_h04fd0655__0;
    VlWide<66>/*2111:0*/ __Vtemp_hbfdc0357__0;
    VlWide<66>/*2111:0*/ __Vtemp_he6e00800__0;
    VlWide<66>/*2111:0*/ __Vtemp_he0732276__0;
    VlWide<66>/*2111:0*/ __Vtemp_h53d7cb6c__0;
    VlWide<66>/*2111:0*/ __Vtemp_h00b69073__0;
    VlWide<17>/*543:0*/ __Vtemp_he118c6b7__0;
    VlWide<17>/*543:0*/ __Vtemp_ha4430938__0;
    VlWide<17>/*543:0*/ __Vtemp_h88d1967f__0;
    VlWide<17>/*543:0*/ __Vtemp_hcdbd3818__0;
    VlWide<17>/*543:0*/ __Vtemp_h8863f8b3__0;
    VlWide<17>/*543:0*/ __Vtemp_h88d1967f__1;
    // Body
    VL_EXTEND_WI(8195,4, __Vtemp_h29cee772__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_pbus_auto_coupler_to_gcd_fragmenter_out_a_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_h607f1137__0, __Vtemp_h29cee772__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___gcd_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h41f0db86__0, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_h607f1137__0);
    VL_SEL_WWII(2112,8195, __Vtemp_h19942a65__0, __Vtemp_h41f0db86__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h3d567450__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__a_first_done), __Vtemp_h19942a65__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_he2bd3a04__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h3d567450__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_heabfac71__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___gcd_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h04fd0655__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_heabfac71__0);
    VL_SEL_WWII(2112,8207, __Vtemp_hbfdc0357__0, __Vtemp_h04fd0655__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_he6e00800__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___T_7), __Vtemp_hbfdc0357__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_he0732276__0, __Vtemp_he6e00800__0);
    VL_AND_W(66, __Vtemp_h53d7cb6c__0, __Vtemp_he2bd3a04__0, __Vtemp_he0732276__0);
    VL_COND_WIWW(2112, __Vtemp_h00b69073__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_h53d7cb6c__0);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h00b69073__0);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_858) {
        __Vtemp_he118c6b7__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 1U)));
        __Vtemp_hcdbd3818__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)));
    } else {
        __Vtemp_he118c6b7__0[0U] = 0U;
        __Vtemp_hcdbd3818__0[0U] = 0U;
    }
    __Vtemp_he118c6b7__0[1U] = 0U;
    __Vtemp_he118c6b7__0[2U] = 0U;
    __Vtemp_he118c6b7__0[3U] = 0U;
    __Vtemp_he118c6b7__0[4U] = 0U;
    __Vtemp_he118c6b7__0[5U] = 0U;
    __Vtemp_he118c6b7__0[6U] = 0U;
    __Vtemp_he118c6b7__0[7U] = 0U;
    __Vtemp_he118c6b7__0[8U] = 0U;
    __Vtemp_he118c6b7__0[9U] = 0U;
    __Vtemp_he118c6b7__0[0xaU] = 0U;
    __Vtemp_he118c6b7__0[0xbU] = 0U;
    __Vtemp_he118c6b7__0[0xcU] = 0U;
    __Vtemp_he118c6b7__0[0xdU] = 0U;
    __Vtemp_he118c6b7__0[0xeU] = 0U;
    __Vtemp_he118c6b7__0[0xfU] = 0U;
    __Vtemp_he118c6b7__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_ha4430938__0, __Vtemp_he118c6b7__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h88d1967f__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 2U));
    __Vtemp_hcdbd3818__0[1U] = 0U;
    __Vtemp_hcdbd3818__0[2U] = 0U;
    __Vtemp_hcdbd3818__0[3U] = 0U;
    __Vtemp_hcdbd3818__0[4U] = 0U;
    __Vtemp_hcdbd3818__0[5U] = 0U;
    __Vtemp_hcdbd3818__0[6U] = 0U;
    __Vtemp_hcdbd3818__0[7U] = 0U;
    __Vtemp_hcdbd3818__0[8U] = 0U;
    __Vtemp_hcdbd3818__0[9U] = 0U;
    __Vtemp_hcdbd3818__0[0xaU] = 0U;
    __Vtemp_hcdbd3818__0[0xbU] = 0U;
    __Vtemp_hcdbd3818__0[0xcU] = 0U;
    __Vtemp_hcdbd3818__0[0xdU] = 0U;
    __Vtemp_hcdbd3818__0[0xeU] = 0U;
    __Vtemp_hcdbd3818__0[0xfU] = 0U;
    __Vtemp_hcdbd3818__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h8863f8b3__0, __Vtemp_hcdbd3818__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h88d1967f__1, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[1U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[2U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[3U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[4U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[1U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[2U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[3U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[4U] = 0U;
    } else {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_858)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_ha4430938__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_873)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h88d1967f__0[0U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[1U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[1U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_858)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                       & __Vtemp_ha4430938__0[1U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_873)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                         & __Vtemp_h88d1967f__0[1U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[2U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[2U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_858)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                       & __Vtemp_ha4430938__0[2U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_873)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                         & __Vtemp_h88d1967f__0[2U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[3U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[3U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_858)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                       & __Vtemp_ha4430938__0[3U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_873)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                         & __Vtemp_h88d1967f__0[3U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[4U] 
            = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[4U] 
                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_858)
                            ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                               & __Vtemp_ha4430938__0[4U])
                            : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_873)
                                          ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                             & __Vtemp_h88d1967f__0[4U])
                                          : 0U))));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_858)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h8863f8b3__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_873)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h88d1967f__1[0U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[1U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[1U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_858)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                       & __Vtemp_h8863f8b3__0[1U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_873)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                         & __Vtemp_h88d1967f__1[1U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[2U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[2U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_858)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                       & __Vtemp_h8863f8b3__0[2U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_873)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                         & __Vtemp_h88d1967f__1[2U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[3U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[3U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_858)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                       & __Vtemp_h8863f8b3__0[3U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_873)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                         & __Vtemp_h88d1967f__1[3U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[4U] 
            = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[4U] 
                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_858)
                            ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                               & __Vtemp_h8863f8b3__0[4U])
                            : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_873)
                                          ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                             & __Vtemp_h88d1967f__1[4U])
                                          : 0U))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3474(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3474\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_hb54a0404__0;
    VlWide<17>/*543:0*/ __Vtemp_h2f29ed1e__0;
    VlWide<17>/*543:0*/ __Vtemp_ha465a689__0;
    VlWide<17>/*543:0*/ __Vtemp_h345fa95a__0;
    VlWide<17>/*543:0*/ __Vtemp_h88c15f41__0;
    VlWide<17>/*543:0*/ __Vtemp_ha465a689__1;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_738) {
        __Vtemp_hb54a0404__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)));
        __Vtemp_h345fa95a__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 1U)));
    } else {
        __Vtemp_hb54a0404__0[0U] = 0U;
        __Vtemp_h345fa95a__0[0U] = 0U;
    }
    __Vtemp_hb54a0404__0[1U] = 0U;
    __Vtemp_hb54a0404__0[2U] = 0U;
    __Vtemp_hb54a0404__0[3U] = 0U;
    __Vtemp_hb54a0404__0[4U] = 0U;
    __Vtemp_hb54a0404__0[5U] = 0U;
    __Vtemp_hb54a0404__0[6U] = 0U;
    __Vtemp_hb54a0404__0[7U] = 0U;
    __Vtemp_hb54a0404__0[8U] = 0U;
    __Vtemp_hb54a0404__0[9U] = 0U;
    __Vtemp_hb54a0404__0[0xaU] = 0U;
    __Vtemp_hb54a0404__0[0xbU] = 0U;
    __Vtemp_hb54a0404__0[0xcU] = 0U;
    __Vtemp_hb54a0404__0[0xdU] = 0U;
    __Vtemp_hb54a0404__0[0xeU] = 0U;
    __Vtemp_hb54a0404__0[0xfU] = 0U;
    __Vtemp_hb54a0404__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h2f29ed1e__0, __Vtemp_hb54a0404__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_ha465a689__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source) 
                   << 2U));
    __Vtemp_h345fa95a__0[1U] = 0U;
    __Vtemp_h345fa95a__0[2U] = 0U;
    __Vtemp_h345fa95a__0[3U] = 0U;
    __Vtemp_h345fa95a__0[4U] = 0U;
    __Vtemp_h345fa95a__0[5U] = 0U;
    __Vtemp_h345fa95a__0[6U] = 0U;
    __Vtemp_h345fa95a__0[7U] = 0U;
    __Vtemp_h345fa95a__0[8U] = 0U;
    __Vtemp_h345fa95a__0[9U] = 0U;
    __Vtemp_h345fa95a__0[0xaU] = 0U;
    __Vtemp_h345fa95a__0[0xbU] = 0U;
    __Vtemp_h345fa95a__0[0xcU] = 0U;
    __Vtemp_h345fa95a__0[0xdU] = 0U;
    __Vtemp_h345fa95a__0[0xeU] = 0U;
    __Vtemp_h345fa95a__0[0xfU] = 0U;
    __Vtemp_h345fa95a__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h88c15f41__0, __Vtemp_h345fa95a__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_ha465a689__1, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] = 0U;
    } else {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___T_738)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___T_753)
                                                    ? 
                                                   (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source))
                                                    : 0ULL))));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h2f29ed1e__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_ha465a689__0[0U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                       & __Vtemp_h2f29ed1e__0[1U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                         & __Vtemp_ha465a689__0[1U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                       & __Vtemp_h2f29ed1e__0[2U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                         & __Vtemp_ha465a689__0[2U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                       & __Vtemp_h2f29ed1e__0[3U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                         & __Vtemp_ha465a689__0[3U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
            = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_738)
                            ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                               & __Vtemp_h2f29ed1e__0[4U])
                            : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_753)
                                          ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                             & __Vtemp_ha465a689__0[4U])
                                          : 0U))));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h88c15f41__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_ha465a689__1[0U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                       & __Vtemp_h88c15f41__0[1U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                         & __Vtemp_ha465a689__1[1U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                       & __Vtemp_h88c15f41__0[2U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                         & __Vtemp_ha465a689__1[2U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                       & __Vtemp_h88c15f41__0[3U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                         & __Vtemp_ha465a689__1[3U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
            = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_738)
                            ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                               & __Vtemp_h88c15f41__0[4U])
                            : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_753)
                                          ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                             & __Vtemp_ha465a689__1[4U])
                                          : 0U))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3475(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3475\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h7d2d9555__0;
    VlWide<17>/*543:0*/ __Vtemp_h82426e16__0;
    VlWide<17>/*543:0*/ __Vtemp_h22ac656b__0;
    VlWide<17>/*543:0*/ __Vtemp_h1cd12436__0;
    VlWide<17>/*543:0*/ __Vtemp_h06a5341e__0;
    VlWide<17>/*543:0*/ __Vtemp_h22ac656b__1;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_738) {
        __Vtemp_h7d2d9555__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)));
        __Vtemp_h1cd12436__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 1U)));
    } else {
        __Vtemp_h7d2d9555__0[0U] = 0U;
        __Vtemp_h1cd12436__0[0U] = 0U;
    }
    __Vtemp_h7d2d9555__0[1U] = 0U;
    __Vtemp_h7d2d9555__0[2U] = 0U;
    __Vtemp_h7d2d9555__0[3U] = 0U;
    __Vtemp_h7d2d9555__0[4U] = 0U;
    __Vtemp_h7d2d9555__0[5U] = 0U;
    __Vtemp_h7d2d9555__0[6U] = 0U;
    __Vtemp_h7d2d9555__0[7U] = 0U;
    __Vtemp_h7d2d9555__0[8U] = 0U;
    __Vtemp_h7d2d9555__0[9U] = 0U;
    __Vtemp_h7d2d9555__0[0xaU] = 0U;
    __Vtemp_h7d2d9555__0[0xbU] = 0U;
    __Vtemp_h7d2d9555__0[0xcU] = 0U;
    __Vtemp_h7d2d9555__0[0xdU] = 0U;
    __Vtemp_h7d2d9555__0[0xeU] = 0U;
    __Vtemp_h7d2d9555__0[0xfU] = 0U;
    __Vtemp_h7d2d9555__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h82426e16__0, __Vtemp_h7d2d9555__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h22ac656b__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_gcd_auto_tl_in_d_bits_source) 
                   << 2U));
    __Vtemp_h1cd12436__0[1U] = 0U;
    __Vtemp_h1cd12436__0[2U] = 0U;
    __Vtemp_h1cd12436__0[3U] = 0U;
    __Vtemp_h1cd12436__0[4U] = 0U;
    __Vtemp_h1cd12436__0[5U] = 0U;
    __Vtemp_h1cd12436__0[6U] = 0U;
    __Vtemp_h1cd12436__0[7U] = 0U;
    __Vtemp_h1cd12436__0[8U] = 0U;
    __Vtemp_h1cd12436__0[9U] = 0U;
    __Vtemp_h1cd12436__0[0xaU] = 0U;
    __Vtemp_h1cd12436__0[0xbU] = 0U;
    __Vtemp_h1cd12436__0[0xcU] = 0U;
    __Vtemp_h1cd12436__0[0xdU] = 0U;
    __Vtemp_h1cd12436__0[0xeU] = 0U;
    __Vtemp_h1cd12436__0[0xfU] = 0U;
    __Vtemp_h1cd12436__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h06a5341e__0, __Vtemp_h1cd12436__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h22ac656b__1, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_gcd_auto_tl_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] = 0U;
    } else {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_738)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_753)
                                                    ? 
                                                   (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source))
                                                    : 0ULL))));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h82426e16__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h22ac656b__0[0U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                       & __Vtemp_h82426e16__0[1U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                         & __Vtemp_h22ac656b__0[1U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                       & __Vtemp_h82426e16__0[2U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                         & __Vtemp_h22ac656b__0[2U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                       & __Vtemp_h82426e16__0[3U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                         & __Vtemp_h22ac656b__0[3U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
            = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_738)
                            ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                               & __Vtemp_h82426e16__0[4U])
                            : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_753)
                                          ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                             & __Vtemp_h22ac656b__0[4U])
                                          : 0U))));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h06a5341e__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h22ac656b__1[0U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                       & __Vtemp_h06a5341e__0[1U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                         & __Vtemp_h22ac656b__1[1U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                       & __Vtemp_h06a5341e__0[2U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                         & __Vtemp_h22ac656b__1[2U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_738)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                       & __Vtemp_h06a5341e__0[3U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_753)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                         & __Vtemp_h22ac656b__1[3U])
                      : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
            = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_738)
                            ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                               & __Vtemp_h06a5341e__0[4U])
                            : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_753)
                                          ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                             & __Vtemp_h22ac656b__1[4U])
                                          : 0U))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3476(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3476\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__state = 0U;
    } else {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_738)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__monitor__DOT___T_753)
                                                    ? 
                                                   (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_gcd_auto_tl_in_d_bits_source))
                                                    : 0ULL))));
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT___impl_io_input_ready) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT____Vcellinp__impl__io_input_valid))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__state = 1U;
        } else if (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__state)) 
                    & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__tmp))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__state = 2U;
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT___impl_io_output_valid) 
                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT___out_wofireMux_T) 
                       & ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_pbus_auto_coupler_to_gcd_fragmenter_out_a_bits_opcode)) 
                          & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_pbus_auto_coupler_to_gcd_fragmenter_out_a_bits_address) 
                              >> 3U) & ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_pbus_auto_coupler_to_gcd_fragmenter_out_a_bits_address) 
                                                        >> 4U))))) 
                                        & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT___out_womask_T_3))))))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__state = 0U;
        }
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___gcd_auto_in_a_ready) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_pbus_auto_coupler_to_gcd_fragmenter_out_a_valid)) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__repeater__DOT___T_1) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__repeater__DOT__full))));
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT___impl_io_input_ready) 
         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT____Vcellinp__impl__io_input_valid))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__tmp 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                << 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                            >> 0x16U));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__gcd 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__x;
    } else {
        if ((1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT___T_9)) 
                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT___T_10))))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__tmp 
                = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__tmp 
                   - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__gcd);
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT___T_9) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT___T_10))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__gcd 
                = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__gcd 
                   - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__tmp);
        }
    }
}

extern const VlUnpacked<CData/*2:0*/, 32> VTestDriver__ConstPool__TABLE_h119b6ebe_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTestDriver__ConstPool__TABLE_hca1c778d_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTestDriver__ConstPool__TABLE_h6aadbd89_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3477(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3477\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___GEN_1) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dOrig 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dFirst_size;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_en) 
         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_MPORT_2_en)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_1__RW0_en) 
         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_MPORT_2_en)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    vlSelf->__Vtableidx3 = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__deq_ptr_value) 
                             << 4U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__empty) 
                                        << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__enq_ptr_value) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__do_enq) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)))));
    if ((1U & VTestDriver__ConstPool__TABLE_h119b6ebe_0
         [vlSelf->__Vtableidx3])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__enq_ptr_value 
            = VTestDriver__ConstPool__TABLE_hca1c778d_0
            [vlSelf->__Vtableidx3];
    }
    if ((2U & VTestDriver__ConstPool__TABLE_h119b6ebe_0
         [vlSelf->__Vtableidx3])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__deq_ptr_value 
            = VTestDriver__ConstPool__TABLE_h6aadbd89_0
            [vlSelf->__Vtableidx3];
    }
}

extern const VlUnpacked<CData/*0:0*/, 32> VTestDriver__ConstPool__TABLE_hecc585fc_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3478(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3478\n"); );
    // Body
    if ((4U & VTestDriver__ConstPool__TABLE_h119b6ebe_0
         [vlSelf->__Vtableidx3])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__maybe_full 
            = VTestDriver__ConstPool__TABLE_hecc585fc_0
            [vlSelf->__Vtableidx3];
    }
    if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__gennum))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__aToggle_r 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__dToggle;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                        >> 9U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0x7fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 0xfU));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                        >> 9U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
            = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                        >> 9U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0x1fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 0xfU));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
            = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 6U));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__tmp 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__tmp;
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__ram_sink_ext__DOT__Memory__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__ram_sink_ext__DOT__Memory[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__ram_sink_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__ram_sink_ext__DOT__Memory__v0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1;
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3479(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3479\n"); );
    // Body
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__gcd 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__gcd;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__acknum 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__acknum;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__state 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__state;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_mask 
            = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                        >> 0xeU));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__repeater__DOT__saved_mask 
            = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                        >> 0xeU));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3480(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3480\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dFirst 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__acknum));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter1 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter) 
                     - (IData)(1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT___impl_io_input_ready 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT___impl_io_output_valid 
        = (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT___T_9 
        = (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT___T_10 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__gcd 
           > vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__impl__DOT__tmp);
    if (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT___out_wofireMux_T_2) 
           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_pbus_auto_coupler_to_gcd_fragmenter_out_a_bits_address) 
                 >> 3U))) & (~ (IData)((0U != (0xffU 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_pbus_auto_coupler_to_gcd_fragmenter_out_a_bits_address) 
                                                  >> 4U)))))) 
         & (0xffffffffU == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT___out_womask_T_3))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__gcd__DOT__x 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                << 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                            >> 0x16U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3481(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3481\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__ptr_match 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__deq_ptr_value) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_e_q__DOT__enq_ptr_value));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__dToggle = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__gennum = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___GEN_1) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__dToggle 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___gcd_auto_in_d_bits_source) 
                         >> 3U));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___gcd_auto_in_a_ready) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_pbus_auto_coupler_to_gcd_fragmenter_out_a_valid))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__gennum 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__aFirst)
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                          >> 3U))) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___old_gennum1_T_2)));
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__aFirst 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__gennum));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT___old_gennum1_T_2 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_gcd__DOT__fragmenter__DOT__gennum) 
                 - (IData)(1U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3482(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3482\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[1U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[2U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[3U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[4U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[5U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[6U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[7U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[8U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[9U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xaU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xbU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xcU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xdU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xdU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xeU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xeU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xfU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xfU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0x10U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0x10U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[1U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[2U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[3U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[4U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[5U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[6U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[7U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[8U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[9U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xaU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xbU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xcU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xdU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xdU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xeU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xeU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xfU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xfU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0x10U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0x10U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[1U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[2U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[3U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[4U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[5U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[6U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[7U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[8U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[9U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xaU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xbU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xcU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xdU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xdU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xeU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xeU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xfU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xfU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0x10U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0x10U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[1U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[2U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[3U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[4U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[5U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[6U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[7U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[8U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[9U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xaU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xbU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xcU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xdU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xdU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xeU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xeU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xfU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xfU];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x10U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x10U];
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_sizes, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_sizes);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_sizes, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_sizes);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_opcodes, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_opcodes);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_opcodes, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_opcodes);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_sizes, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_sizes);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_opcodes, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_opcodes);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_sizes, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_sizes);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_opcodes, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_opcodes);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3487(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3487\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_hc1d8e509__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc1d8e509__1;
    VlWide<32>/*1023:0*/ __Vtemp_hc1d8e509__2;
    VlWide<32>/*1023:0*/ __Vtemp_hc1d8e509__3;
    VlWide<32>/*1023:0*/ __Vtemp_hc1d8e509__4;
    VlWide<32>/*1023:0*/ __Vtemp_hed49fe22__0;
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__a_first_counter;
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hc1d8e509__0, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hc1d8e509__1, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[0U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[0U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[1U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[1U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[1U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[1U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[1U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[1U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[1U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[1U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[2U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[2U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[2U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[2U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[2U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[2U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[2U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[2U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[3U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[3U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[3U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[3U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[3U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[3U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[3U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[3U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[4U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[4U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[4U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[4U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[4U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[4U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[4U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[4U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[5U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[5U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[5U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[5U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[5U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[5U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[5U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[5U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[6U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[6U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[6U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[6U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[6U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[6U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[6U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[6U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[7U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[7U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[7U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[7U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[7U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[7U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[7U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[7U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[8U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[8U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[8U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[8U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[8U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[8U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[8U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[8U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[9U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[9U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[9U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[9U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[9U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[9U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[9U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[9U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xaU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xaU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xaU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xaU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[0xaU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[0xaU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xbU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xbU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xbU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xbU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[0xbU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[0xbU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xcU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xcU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xcU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xcU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[0xcU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[0xcU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xdU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xdU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xdU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xdU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[0xdU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[0xdU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xeU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xeU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xeU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xeU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[0xeU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[0xeU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xfU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xfU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xfU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0xfU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[0xfU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[0xfU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0x10U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0x10U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0x10U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight[0x10U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__0[0x10U]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__1[0x10U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])))));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hc1d8e509__2, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hc1d8e509__3, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[0U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[0U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[1U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[1U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[1U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[1U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[1U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[1U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[1U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[1U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[2U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[2U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[2U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[2U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[2U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[2U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[2U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[2U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[3U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[3U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[3U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[3U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[3U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[3U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[3U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[3U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[4U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[4U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[4U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[4U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[4U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[4U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[4U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[4U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[5U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[5U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[5U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[5U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[5U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[5U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[5U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[5U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[6U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[6U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[6U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[6U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[6U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[6U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[6U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[6U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[7U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[7U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[7U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[7U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[7U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[7U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[7U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[7U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[8U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[8U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[8U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[8U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[8U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[8U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[8U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[8U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[9U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[9U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[9U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[9U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[9U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[9U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[9U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[9U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xaU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xaU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xaU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xaU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[0xaU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[0xaU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xbU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xbU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xbU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xbU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[0xbU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[0xbU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xcU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xcU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xcU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xcU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[0xcU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[0xcU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xdU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xdU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xdU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xdU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[0xdU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[0xdU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xeU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xeU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xeU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xeU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[0xeU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[0xeU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xfU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xfU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xfU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0xfU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[0xfU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[0xfU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0x10U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0x10U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0x10U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight[0x10U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                       ? __Vtemp_hc1d8e509__2[0x10U]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hc1d8e509__3[0x10U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])))));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hc1d8e509__4, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hed49fe22__0, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[0U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[1U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[1U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[1U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[1U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[1U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[1U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[1U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[1U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[2U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[2U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[2U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[2U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[2U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[2U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[2U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[2U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[3U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[3U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[3U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[3U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[3U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[3U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[3U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[3U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[4U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[4U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[4U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[4U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[4U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[4U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[4U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[4U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[5U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[5U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[5U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[5U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[5U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[5U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[5U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[5U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[6U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[6U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[6U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[6U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[6U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[6U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[6U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[6U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[7U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[7U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[7U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[7U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[7U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[7U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[7U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[7U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[8U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[8U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[8U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[8U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[8U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[8U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[8U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[8U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[9U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[9U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[9U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[9U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[9U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[9U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[9U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[9U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xaU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xaU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xaU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xaU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[0xaU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0xaU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xbU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xbU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xbU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xbU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[0xbU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0xbU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xcU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xcU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xcU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xcU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[0xcU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0xcU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xdU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xdU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xdU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xdU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[0xdU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0xdU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xeU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xeU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xeU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xeU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[0xeU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0xeU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xfU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xfU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xfU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xfU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[0xfU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0xfU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0x10U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0x10U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0x10U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0x10U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__4[0x10U]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0x10U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3488(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3488\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_hc1d8e509__0;
    VlWide<32>/*1023:0*/ __Vtemp_hed49fe22__0;
    VlWide<257>/*8223:0*/ __Vtemp_h8c27d5ed__0;
    VlWide<257>/*8223:0*/ __Vtemp_h5092ee18__0;
    VlWide<257>/*8223:0*/ __Vtemp_h821d9277__0;
    VlWide<66>/*2111:0*/ __Vtemp_h8a99a85a__0;
    VlWide<66>/*2111:0*/ __Vtemp_hb3708fe9__0;
    VlWide<66>/*2111:0*/ __Vtemp_hdb1f8446__0;
    VlWide<257>/*8223:0*/ __Vtemp_h0d08b5cc__0;
    VlWide<257>/*8223:0*/ __Vtemp_ha56b2eb6__0;
    VlWide<66>/*2111:0*/ __Vtemp_h2bc8c80a__0;
    VlWide<66>/*2111:0*/ __Vtemp_h3e691d18__0;
    VlWide<66>/*2111:0*/ __Vtemp_h3b81c762__0;
    VlWide<66>/*2111:0*/ __Vtemp_ha01416b3__0;
    VlWide<66>/*2111:0*/ __Vtemp_hceb7afbc__0;
    VlWide<257>/*8223:0*/ __Vtemp_h04f2a543__0;
    VlWide<257>/*8223:0*/ __Vtemp_h3fddb314__0;
    VlWide<257>/*8223:0*/ __Vtemp_h6efa866a__0;
    VlWide<66>/*2111:0*/ __Vtemp_h228e2956__0;
    VlWide<66>/*2111:0*/ __Vtemp_h267e6efd__0;
    VlWide<66>/*2111:0*/ __Vtemp_h535fc404__0;
    VlWide<257>/*8223:0*/ __Vtemp_h0d08b5cc__1;
    VlWide<257>/*8223:0*/ __Vtemp_h62caa49f__0;
    VlWide<66>/*2111:0*/ __Vtemp_ha102d6a7__0;
    VlWide<66>/*2111:0*/ __Vtemp_hb3bbf9b1__0;
    VlWide<66>/*2111:0*/ __Vtemp_h182dd830__0;
    VlWide<66>/*2111:0*/ __Vtemp_hceb84d97__0;
    VlWide<66>/*2111:0*/ __Vtemp_h7f02d90e__0;
    // Body
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hc1d8e509__0, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hed49fe22__0, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[0U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[1U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[1U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[1U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[1U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[1U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[1U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[1U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[1U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[2U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[2U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[2U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[2U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[2U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[2U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[2U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[2U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[3U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[3U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[3U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[3U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[3U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[3U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[3U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[3U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[4U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[4U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[4U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[4U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[4U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[4U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[4U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[4U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[5U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[5U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[5U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[5U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[5U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[5U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[5U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[5U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[6U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[6U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[6U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[6U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[6U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[6U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[6U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[6U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[7U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[7U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[7U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[7U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[7U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[7U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[7U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[7U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[8U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[8U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[8U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[8U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[8U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[8U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[8U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[8U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[9U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[9U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[9U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[9U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[9U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[9U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[9U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[9U])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xaU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xaU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xaU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xaU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[0xaU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0xaU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xbU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xbU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xbU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xbU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[0xbU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0xbU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xcU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xcU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xcU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xcU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[0xcU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0xcU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xdU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xdU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xdU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xdU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[0xdU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0xdU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xeU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xeU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xeU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xeU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[0xeU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0xeU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xfU] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xfU] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0xfU]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xfU] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[0xfU]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0xfU]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x10U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0x10U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0x10U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x10U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[0x10U]
                       : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0x10U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])))));
    VL_EXTEND_WI(8194,3, __Vtemp_h8c27d5ed__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                                                 ? 
                                                (1U 
                                                 | (6U 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag) 
                                                       << 1U)))
                                                 : 0U));
    VL_SHIFTL_WWI(8194,8194,12, __Vtemp_h5092ee18__0, __Vtemp_h8c27d5ed__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h821d9277__0, VTestDriver__ConstPool__CONST_h42ac30fb_0, __Vtemp_h5092ee18__0);
    VL_SEL_WWII(2112,8194, __Vtemp_h8a99a85a__0, __Vtemp_h821d9277__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hb3708fe9__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598), __Vtemp_h8a99a85a__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_hdb1f8446__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_sizes, __Vtemp_hb3708fe9__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h0d08b5cc__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_ha56b2eb6__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h0d08b5cc__0);
    VL_SEL_WWII(2112,8207, __Vtemp_h2bc8c80a__0, __Vtemp_ha56b2eb6__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h3e691d18__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613), __Vtemp_h2bc8c80a__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h3b81c762__0, __Vtemp_h3e691d18__0);
    VL_AND_W(66, __Vtemp_ha01416b3__0, __Vtemp_hdb1f8446__0, __Vtemp_h3b81c762__0);
    VL_COND_WIWW(2112, __Vtemp_hceb7afbc__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_ha01416b3__0);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_sizes, __Vtemp_hceb7afbc__0);
    VL_EXTEND_WI(8194,3, __Vtemp_h04f2a543__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                                                 ? 
                                                (1U 
                                                 | (6U 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag) 
                                                       << 1U)))
                                                 : 0U));
    VL_SHIFTL_WWI(8194,8194,12, __Vtemp_h3fddb314__0, __Vtemp_h04f2a543__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h6efa866a__0, VTestDriver__ConstPool__CONST_h42ac30fb_0, __Vtemp_h3fddb314__0);
    VL_SEL_WWII(2112,8194, __Vtemp_h228e2956__0, __Vtemp_h6efa866a__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h267e6efd__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598), __Vtemp_h228e2956__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_h535fc404__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_sizes, __Vtemp_h267e6efd__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h0d08b5cc__1, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h62caa49f__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h0d08b5cc__1);
    VL_SEL_WWII(2112,8207, __Vtemp_ha102d6a7__0, __Vtemp_h62caa49f__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hb3bbf9b1__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613), __Vtemp_ha102d6a7__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h182dd830__0, __Vtemp_hb3bbf9b1__0);
    VL_AND_W(66, __Vtemp_hceb84d97__0, __Vtemp_h535fc404__0, __Vtemp_h182dd830__0);
    VL_COND_WIWW(2112, __Vtemp_h7f02d90e__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_hceb84d97__0);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_sizes, __Vtemp_h7f02d90e__0);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3489(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3489\n"); );
    // Init
    VlWide<257>/*8223:0*/ __Vtemp_h9146fe42__0;
    VlWide<257>/*8223:0*/ __Vtemp_hbb1397fa__0;
    VlWide<257>/*8223:0*/ __Vtemp_h9fa404e0__0;
    VlWide<66>/*2111:0*/ __Vtemp_ha506467e__0;
    VlWide<66>/*2111:0*/ __Vtemp_h9a8320f2__0;
    VlWide<66>/*2111:0*/ __Vtemp_h24c7a4a0__0;
    VlWide<257>/*8223:0*/ __Vtemp_h0d08b5cc__0;
    VlWide<257>/*8223:0*/ __Vtemp_ha56b2eb6__0;
    VlWide<66>/*2111:0*/ __Vtemp_h2bc8c80a__0;
    VlWide<66>/*2111:0*/ __Vtemp_h3e691d18__0;
    VlWide<66>/*2111:0*/ __Vtemp_h3b81c762__0;
    VlWide<66>/*2111:0*/ __Vtemp_h837bfbac__0;
    VlWide<66>/*2111:0*/ __Vtemp_h4bb5af49__0;
    VlWide<257>/*8223:0*/ __Vtemp_h476e06e8__0;
    VlWide<257>/*8223:0*/ __Vtemp_h7aa0f04f__0;
    VlWide<257>/*8223:0*/ __Vtemp_h3415a312__0;
    VlWide<66>/*2111:0*/ __Vtemp_habebb589__0;
    VlWide<66>/*2111:0*/ __Vtemp_hae5716fe__0;
    VlWide<66>/*2111:0*/ __Vtemp_ha8c52aac__0;
    VlWide<257>/*8223:0*/ __Vtemp_h0d08b5cc__1;
    VlWide<257>/*8223:0*/ __Vtemp_h62caa49f__0;
    VlWide<66>/*2111:0*/ __Vtemp_ha102d6a7__0;
    VlWide<66>/*2111:0*/ __Vtemp_hb3bbf9b1__0;
    VlWide<66>/*2111:0*/ __Vtemp_h182dd830__0;
    VlWide<66>/*2111:0*/ __Vtemp_h0d5c2b5d__0;
    VlWide<66>/*2111:0*/ __Vtemp_hbfdd9435__0;
    VlWide<257>/*8223:0*/ __Vtemp_h8da429d0__0;
    VlWide<257>/*8223:0*/ __Vtemp_ha3b84cd2__0;
    VlWide<257>/*8223:0*/ __Vtemp_h3a55d04b__0;
    VlWide<66>/*2111:0*/ __Vtemp_h66d1e0a0__0;
    VlWide<66>/*2111:0*/ __Vtemp_hb5d149b8__0;
    VlWide<66>/*2111:0*/ __Vtemp_h0c1fb053__0;
    VlWide<257>/*8223:0*/ __Vtemp_h9c399a11__0;
    VlWide<257>/*8223:0*/ __Vtemp_h12c56bae__0;
    VlWide<66>/*2111:0*/ __Vtemp_hf06d43e8__0;
    VlWide<66>/*2111:0*/ __Vtemp_h270ca912__0;
    VlWide<66>/*2111:0*/ __Vtemp_h750792ed__0;
    VlWide<66>/*2111:0*/ __Vtemp_h6e8f293b__0;
    VlWide<66>/*2111:0*/ __Vtemp_h63f3ac62__0;
    // Body
    VL_EXTEND_WI(8195,4, __Vtemp_h9146fe42__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_hbb1397fa__0, __Vtemp_h9146fe42__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h9fa404e0__0, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_hbb1397fa__0);
    VL_SEL_WWII(2112,8195, __Vtemp_ha506467e__0, __Vtemp_h9fa404e0__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h9a8320f2__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598), __Vtemp_ha506467e__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_h24c7a4a0__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h9a8320f2__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h0d08b5cc__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_ha56b2eb6__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h0d08b5cc__0);
    VL_SEL_WWII(2112,8207, __Vtemp_h2bc8c80a__0, __Vtemp_ha56b2eb6__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h3e691d18__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613), __Vtemp_h2bc8c80a__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h3b81c762__0, __Vtemp_h3e691d18__0);
    VL_AND_W(66, __Vtemp_h837bfbac__0, __Vtemp_h24c7a4a0__0, __Vtemp_h3b81c762__0);
    VL_COND_WIWW(2112, __Vtemp_h4bb5af49__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_h837bfbac__0);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h4bb5af49__0);
    VL_EXTEND_WI(8195,4, __Vtemp_h476e06e8__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_h7aa0f04f__0, __Vtemp_h476e06e8__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h3415a312__0, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_h7aa0f04f__0);
    VL_SEL_WWII(2112,8195, __Vtemp_habebb589__0, __Vtemp_h3415a312__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hae5716fe__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598), __Vtemp_habebb589__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_ha8c52aac__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_hae5716fe__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h0d08b5cc__1, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h62caa49f__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h0d08b5cc__1);
    VL_SEL_WWII(2112,8207, __Vtemp_ha102d6a7__0, __Vtemp_h62caa49f__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hb3bbf9b1__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613), __Vtemp_ha102d6a7__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h182dd830__0, __Vtemp_hb3bbf9b1__0);
    VL_AND_W(66, __Vtemp_h0d5c2b5d__0, __Vtemp_ha8c52aac__0, __Vtemp_h182dd830__0);
    VL_COND_WIWW(2112, __Vtemp_hbfdd9435__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_h0d5c2b5d__0);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_hbfdd9435__0);
    VL_EXTEND_WI(8194,3, __Vtemp_h8da429d0__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | (6U 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag) 
                                                       << 1U)))
                                                 : 0U));
    VL_SHIFTL_WWI(8194,8194,12, __Vtemp_ha3b84cd2__0, __Vtemp_h8da429d0__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h3a55d04b__0, VTestDriver__ConstPool__CONST_h42ac30fb_0, __Vtemp_ha3b84cd2__0);
    VL_SEL_WWII(2112,8194, __Vtemp_h66d1e0a0__0, __Vtemp_h3a55d04b__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hb5d149b8__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done), __Vtemp_h66d1e0a0__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_h0c1fb053__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_sizes, __Vtemp_hb5d149b8__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h9c399a11__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h12c56bae__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h9c399a11__0);
    VL_SEL_WWII(2112,8207, __Vtemp_hf06d43e8__0, __Vtemp_h12c56bae__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h270ca912__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613), __Vtemp_hf06d43e8__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h750792ed__0, __Vtemp_h270ca912__0);
    VL_AND_W(66, __Vtemp_h6e8f293b__0, __Vtemp_h0c1fb053__0, __Vtemp_h750792ed__0);
    VL_COND_WIWW(2112, __Vtemp_h63f3ac62__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_h6e8f293b__0);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_sizes, __Vtemp_h63f3ac62__0);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3490(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3490\n"); );
    // Init
    VlWide<257>/*8223:0*/ __Vtemp_h18f773db__0;
    VlWide<257>/*8223:0*/ __Vtemp_ha17a95b4__0;
    VlWide<257>/*8223:0*/ __Vtemp_ha02fe103__0;
    VlWide<66>/*2111:0*/ __Vtemp_h38a79ace__0;
    VlWide<66>/*2111:0*/ __Vtemp_heb485ae7__0;
    VlWide<66>/*2111:0*/ __Vtemp_hcdc192e8__0;
    VlWide<257>/*8223:0*/ __Vtemp_h9c399a11__0;
    VlWide<257>/*8223:0*/ __Vtemp_h12c56bae__0;
    VlWide<66>/*2111:0*/ __Vtemp_hf06d43e8__0;
    VlWide<66>/*2111:0*/ __Vtemp_h270ca912__0;
    VlWide<66>/*2111:0*/ __Vtemp_h750792ed__0;
    VlWide<66>/*2111:0*/ __Vtemp_hfb14162f__0;
    VlWide<66>/*2111:0*/ __Vtemp_h203da6e5__0;
    VlWide<257>/*8223:0*/ __Vtemp_heb38e4f4__0;
    VlWide<257>/*8223:0*/ __Vtemp_hee4aee74__0;
    VlWide<257>/*8223:0*/ __Vtemp_h71c3b4e8__0;
    VlWide<66>/*2111:0*/ __Vtemp_h65005681__0;
    VlWide<66>/*2111:0*/ __Vtemp_hb0c0461a__0;
    VlWide<66>/*2111:0*/ __Vtemp_h8a847363__0;
    VlWide<257>/*8223:0*/ __Vtemp_h9c399a11__1;
    VlWide<257>/*8223:0*/ __Vtemp_h63dc44cb__0;
    VlWide<66>/*2111:0*/ __Vtemp_hb9d9dc8c__0;
    VlWide<66>/*2111:0*/ __Vtemp_h9c1070db__0;
    VlWide<66>/*2111:0*/ __Vtemp_h40e14ffe__0;
    VlWide<66>/*2111:0*/ __Vtemp_h515520b4__0;
    VlWide<66>/*2111:0*/ __Vtemp_h488053c9__0;
    VlWide<257>/*8223:0*/ __Vtemp_hee283227__0;
    VlWide<257>/*8223:0*/ __Vtemp_h506af15c__0;
    VlWide<257>/*8223:0*/ __Vtemp_h630c1a16__0;
    VlWide<66>/*2111:0*/ __Vtemp_hca8962a9__0;
    VlWide<66>/*2111:0*/ __Vtemp_h59a1d652__0;
    VlWide<66>/*2111:0*/ __Vtemp_hc4e42817__0;
    VlWide<257>/*8223:0*/ __Vtemp_h9c399a11__2;
    VlWide<257>/*8223:0*/ __Vtemp_hc6b683cb__0;
    VlWide<66>/*2111:0*/ __Vtemp_h4985a80e__0;
    VlWide<66>/*2111:0*/ __Vtemp_h30cf9972__0;
    VlWide<66>/*2111:0*/ __Vtemp_h1f1e3960__0;
    VlWide<66>/*2111:0*/ __Vtemp_h6f156b63__0;
    VlWide<66>/*2111:0*/ __Vtemp_h3b131439__0;
    // Body
    VL_EXTEND_WI(8195,4, __Vtemp_h18f773db__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_ha17a95b4__0, __Vtemp_h18f773db__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_ha02fe103__0, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_ha17a95b4__0);
    VL_SEL_WWII(2112,8195, __Vtemp_h38a79ace__0, __Vtemp_ha02fe103__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_heb485ae7__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done), __Vtemp_h38a79ace__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_hcdc192e8__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_opcodes, __Vtemp_heb485ae7__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h9c399a11__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h12c56bae__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h9c399a11__0);
    VL_SEL_WWII(2112,8207, __Vtemp_hf06d43e8__0, __Vtemp_h12c56bae__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h270ca912__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613), __Vtemp_hf06d43e8__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h750792ed__0, __Vtemp_h270ca912__0);
    VL_AND_W(66, __Vtemp_hfb14162f__0, __Vtemp_hcdc192e8__0, __Vtemp_h750792ed__0);
    VL_COND_WIWW(2112, __Vtemp_h203da6e5__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_hfb14162f__0);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h203da6e5__0);
    VL_EXTEND_WI(8194,3, __Vtemp_heb38e4f4__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | (6U 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag) 
                                                       << 1U)))
                                                 : 0U));
    VL_SHIFTL_WWI(8194,8194,12, __Vtemp_hee4aee74__0, __Vtemp_heb38e4f4__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h71c3b4e8__0, VTestDriver__ConstPool__CONST_h42ac30fb_0, __Vtemp_hee4aee74__0);
    VL_SEL_WWII(2112,8194, __Vtemp_h65005681__0, __Vtemp_h71c3b4e8__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hb0c0461a__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done), __Vtemp_h65005681__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_h8a847363__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_sizes, __Vtemp_hb0c0461a__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h9c399a11__1, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h63dc44cb__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h9c399a11__1);
    VL_SEL_WWII(2112,8207, __Vtemp_hb9d9dc8c__0, __Vtemp_h63dc44cb__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h9c1070db__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613), __Vtemp_hb9d9dc8c__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h40e14ffe__0, __Vtemp_h9c1070db__0);
    VL_AND_W(66, __Vtemp_h515520b4__0, __Vtemp_h8a847363__0, __Vtemp_h40e14ffe__0);
    VL_COND_WIWW(2112, __Vtemp_h488053c9__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_h515520b4__0);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_sizes, __Vtemp_h488053c9__0);
    VL_EXTEND_WI(8195,4, __Vtemp_hee283227__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_h506af15c__0, __Vtemp_hee283227__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h630c1a16__0, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_h506af15c__0);
    VL_SEL_WWII(2112,8195, __Vtemp_hca8962a9__0, __Vtemp_h630c1a16__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h59a1d652__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done), __Vtemp_hca8962a9__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_hc4e42817__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h59a1d652__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h9c399a11__2, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_hc6b683cb__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h9c399a11__2);
    VL_SEL_WWII(2112,8207, __Vtemp_h4985a80e__0, __Vtemp_hc6b683cb__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h30cf9972__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613), __Vtemp_h4985a80e__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h1f1e3960__0, __Vtemp_h30cf9972__0);
    VL_AND_W(66, __Vtemp_h6f156b63__0, __Vtemp_hc4e42817__0, __Vtemp_h1f1e3960__0);
    VL_COND_WIWW(2112, __Vtemp_h3b131439__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_h6f156b63__0);
    VL_ASSIGN_W(2112,vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h3b131439__0);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3491(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3491\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_219 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0xdbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0xdbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_219))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_218 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0xdaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0xdaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_218))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_217 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0xd9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0xd9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_217))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_216 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0xd8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0xd8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_216))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_215 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0xd7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0xd7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_215))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_214 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0xd6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0xd6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_214))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3492(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3492\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_213 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0xd5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0xd5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_213))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_212 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0xd4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0xd4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_212))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_187 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0xbbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0xbbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_187))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_186 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0xbaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0xbaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_186))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_185 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0xb9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0xb9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_185))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_184 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0xb8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0xb8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_184))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3493(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3493\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_162 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0xa2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0xa2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_162))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_161 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0xa1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0xa1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_161))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_160 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0xa0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0xa0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_160))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_159 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x9fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x9fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_159))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_137 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x89U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x89U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_137))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_136 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x88U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x88U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_136))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3494(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3494\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_135 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x87U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x87U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_135))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_134 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x86U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x86U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_134))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_44 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x2cU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x2cU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_44))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_43 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x2bU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x2bU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_43))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_42 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x2aU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x2aU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_42))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_41 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x29U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x29U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_41))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3495(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3495\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_8 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_8))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_62 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x3eU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x3eU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_62))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_63 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x3fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x3fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_63))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3496(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3496\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_64 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x40U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x40U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_64))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_65 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x41U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x41U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_65))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_87 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x57U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x57U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_87))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_88 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x58U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x58U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_88))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_89 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x59U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x59U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_89))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_90 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x5aU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x5aU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_90))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3497(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3497\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_112 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x70U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x70U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_112))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_113 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x71U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x71U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_113))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_114 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x72U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x72U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_114))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_115 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x73U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x73U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_115))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_265 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x109U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x109U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_265))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_266 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x10aU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x10aU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_266))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3498(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3498\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_267 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x10bU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x10bU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_267))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_268 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x10cU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x10cU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_268))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_269 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x10dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x10dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_269))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_270 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x10eU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x10eU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_270))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_271 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x10fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x10fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_271))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_272 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x110U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x110U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_272))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3499(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3499\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_273 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x111U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x111U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_273))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_274 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x112U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x112U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_274))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_275 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x113U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x113U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_275))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_276 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x114U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x114U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_276))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_290 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x122U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x122U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_290))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_291 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x123U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x123U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_291))));
}
