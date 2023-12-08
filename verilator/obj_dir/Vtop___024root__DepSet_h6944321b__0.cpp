// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    VL_WRITEF("7seg:%x%x\n",32,vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
              [1U],32,vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
              [0U]);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*11:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0;
    __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0;
    __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0;
    __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1;
    __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1;
    __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1 = 0;
    SData/*15:0*/ __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1;
    __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1;
    __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1 = 0;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2;
    __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2;
    __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2 = 0;
    SData/*15:0*/ __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2;
    __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2;
    __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2 = 0;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3;
    __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3;
    __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3;
    __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3;
    __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3 = 0;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4;
    __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4;
    __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4;
    __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4;
    __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4 = 0;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5;
    __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5;
    __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5;
    __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5;
    __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5 = 0;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6;
    __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6;
    __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6;
    __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6;
    __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6 = 0;
    IData/*31:0*/ __Vdly__top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt;
    __Vdly__top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt = 0;
    CData/*7:0*/ __Vdly__seg7_select;
    __Vdly__seg7_select = 0;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0;
    __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0;
    __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1;
    __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1;
    __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 0;
    SData/*15:0*/ __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1;
    __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2;
    __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2;
    __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 0;
    SData/*15:0*/ __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2;
    __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 0;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3;
    __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3;
    __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3;
    __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 0;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4;
    __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4;
    __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4;
    __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 0;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5;
    __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5;
    __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5;
    __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 0;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6;
    __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6;
    __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6;
    __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 0;
    // Body
    __Vdly__seg7_select = vlSelf->seg7_select;
    __Vdly__top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt 
        = vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt;
    __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6 = 0U;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 0U;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 0U;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 0U;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 0U;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 0U;
    __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 0U;
    if ((1U & (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV))) {
        __Vdly__top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt 
            = vlSelf->top__DOT__u_BRIDGE__DOT__PrWD;
    } else if ((0U < vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt)) {
        __Vdly__top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt 
            = (vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt 
               - (IData)(1U));
    }
    if ((0x3000U > (0xffffU & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr))) {
        if ((0xfU == (IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea))) {
            vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hf01ede65__0 
                = vlSelf->top__DOT__PrWD;
            if ((0xbffU >= (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                      >> 2U)))) {
                __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0 
                    = vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hf01ede65__0;
                __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0 = 1U;
                __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0 
                    = (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                 >> 2U));
            }
        } else if ((3U == (IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea))) {
            vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hc028c573__0 
                = (0xffffU & vlSelf->top__DOT__PrWD);
            if ((0xbffU >= (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                      >> 2U)))) {
                __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1 
                    = vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hc028c573__0;
                __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1 = 1U;
                __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1 = 0U;
                __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1 
                    = (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                 >> 2U));
            }
        } else if ((0xcU == (IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea))) {
            vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hc029c120__0 
                = (vlSelf->top__DOT__PrWD >> 0x10U);
            if ((0xbffU >= (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                      >> 2U)))) {
                __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2 
                    = vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hc029c120__0;
                __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2 = 1U;
                __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2 = 0x10U;
                __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2 
                    = (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                 >> 2U));
            }
        } else if ((1U == (IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea))) {
            vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd433fd__0 
                = (0xffU & vlSelf->top__DOT__PrWD);
            if ((0xbffU >= (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                      >> 2U)))) {
                __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3 
                    = vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd433fd__0;
                __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3 = 1U;
                __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3 = 0U;
                __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3 
                    = (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                 >> 2U));
            }
        } else if ((2U == (IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea))) {
            vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd3b6e7__0 
                = (0xffU & (vlSelf->top__DOT__PrWD 
                            >> 8U));
            if ((0xbffU >= (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                      >> 2U)))) {
                __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4 
                    = vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd3b6e7__0;
                __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4 = 1U;
                __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4 = 8U;
                __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4 
                    = (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                 >> 2U));
            }
        } else if ((4U == (IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea))) {
            vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd519e0__0 
                = (0xffU & (vlSelf->top__DOT__PrWD 
                            >> 0x10U));
            if ((0xbffU >= (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                      >> 2U)))) {
                __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5 
                    = vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd519e0__0;
                __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5 = 1U;
                __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5 = 0x10U;
                __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5 
                    = (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                 >> 2U));
            }
        } else if ((8U == (IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea))) {
            vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd09d0e__0 
                = (vlSelf->top__DOT__PrWD >> 0x18U);
            if ((0xbffU >= (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                      >> 2U)))) {
                __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6 
                    = vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd09d0e__0;
                __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6 = 1U;
                __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6 = 0x18U;
                __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6 
                    = (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                 >> 2U));
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV))) {
        if ((0xfU == (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE))) {
            __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 
                = vlSelf->top__DOT__u_BRIDGE__DOT__PrWD;
            __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 = 1U;
            __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 
                = (1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr);
        } else if ((3U == (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE))) {
            __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 
                = (0xffffU & vlSelf->top__DOT__u_BRIDGE__DOT__PrWD);
            __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 1U;
            __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 0U;
            __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 
                = (1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr);
        } else if ((0xcU == (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE))) {
            __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 
                = (vlSelf->top__DOT__u_BRIDGE__DOT__PrWD 
                   >> 0x10U);
            __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 1U;
            __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 0x10U;
            __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 
                = (1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr);
        } else if ((1U == (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE))) {
            __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 
                = (0xffU & vlSelf->top__DOT__u_BRIDGE__DOT__PrWD);
            __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 1U;
            __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 0U;
            __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 
                = (1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr);
        } else if ((2U == (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE))) {
            __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 
                = (0xffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrWD 
                            >> 8U));
            __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 1U;
            __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 8U;
            __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 
                = (1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr);
        } else if ((4U == (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE))) {
            __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 
                = (0xffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrWD 
                            >> 0x10U));
            __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 1U;
            __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 0x10U;
            __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 
                = (1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr);
        } else if ((8U == (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE))) {
            __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 
                = (vlSelf->top__DOT__u_BRIDGE__DOT__PrWD 
                   >> 0x18U);
            __Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 1U;
            __Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 0x18U;
            __Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 
                = (1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr);
        }
    }
    if (VL_UNLIKELY((2U & (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV)))) {
        VL_WRITEF("%11d\n",32,vlSelf->top__DOT__u_BRIDGE__DOT__PrWD);
        vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD = vlSelf->top__DOT__u_BRIDGE__DOT__PrWD;
    }
    if ((0U != (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause))) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause)));
    } else {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
            = (0x7ffffU & ((IData)(1U) + vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt));
        if ((0U == (IData)(vlSelf->seg7_select))) {
            vlSelf->seg7_seg = vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSeg;
            __Vdly__seg7_select = vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSelect;
        } else if (((IData)(vlSelf->seg7_select) != (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSelect))) {
            __Vdly__seg7_select = 0U;
            vlSelf->seg7_seg = 0U;
            vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause = 1U;
        }
    }
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__Dout = 
        ((0xbffU >= (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                               >> 2U))) ? vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram
         [(0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                     >> 2U))] : 0U);
    vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_EX = vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID;
    vlSelf->top__DOT__u_BRIDGE__DOT__WeCPU = ((0x3000U 
                                               <= (0xffffU 
                                                   & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr)) 
                                              & (IData)(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID));
    vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt 
        = __Vdly__top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt;
    if (__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0] 
            = __Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0;
    }
    if (__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1))) 
                & vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1))));
    }
    if (__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2))) 
                & vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2))));
    }
    if (__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3))) 
                & vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3))));
    }
    if (__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4))) 
                & vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4) 
                                   << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4))));
    }
    if (__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5))) 
                & vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5) 
                                   << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5))));
    }
    if (__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6))) 
                & vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6) 
                                   << (IData)(__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6))));
    }
    vlSelf->seg7_select = __Vdly__seg7_select;
    if (__Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0) {
        vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram[__Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0] 
            = __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0;
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1) {
        vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram[__Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1))) 
                & vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram
                [__Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1))));
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2) {
        vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram[__Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2))) 
                & vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram
                [__Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2))));
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3) {
        vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram[__Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3))) 
                & vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram
                [__Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3))));
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4) {
        vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram[__Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4))) 
                & vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram
                [__Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4) 
                                   << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4))));
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5) {
        vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram[__Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5))) 
                & vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram
                [__Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5) 
                                   << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5))));
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6) {
        vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram[__Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6))) 
                & vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram
                [__Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6) 
                                   << (IData)(__Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6))));
    }
    vlSelf->top__DOT__HWInt = ((0x3eU & (IData)(vlSelf->top__DOT__HWInt)) 
                               | (0U == vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt));
    vlSelf->top__DOT__u_BRIDGE__DOT__PrBE = vlSelf->top__DOT__PrBE;
    vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr = (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                               >> 2U);
    vlSelf->led = (0xffU & vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD);
    vlSelf->top__DOT__u_BRIDGE__DOT__PrWD = vlSelf->top__DOT__PrWD;
    vlSelf->seg7_seg1 = vlSelf->seg7_seg;
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSelect 
        = (0xffU & (0x80U >> (7U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                    >> 0x10U))));
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSeg 
        = (0xffU & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                    [(1U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                            >> 0x12U))] >> (0x18U & 
                                            (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                             >> 0xdU))));
    vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID = 
        ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ID_FLUSH)) 
         & (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite));
    vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV = ((- (IData)((IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeCPU))) 
                                              & (((0x81U 
                                                   == 
                                                   (0xffffffU 
                                                    & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                       >> 6U))) 
                                                  << 2U) 
                                                 | (((0x80U 
                                                      == 
                                                      (0xffffffU 
                                                       & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                          >> 6U))) 
                                                     << 1U) 
                                                    | (0x7fU 
                                                       == 
                                                       (0xffffffU 
                                                        & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                           >> 6U))))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0;
    __Vdlyvdim0__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0;
    __Vdlyvval__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0;
    __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v1;
    __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v1 = 0;
    // Body
    __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i = 0x20U;
    }
    if (vlSelf->rst) {
        if (VL_UNLIKELY((0xbffU == vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC))) {
            VL_WRITEF("start\n");
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ID_FLUSH)))) {
            vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC 
                = vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC;
        }
    } else {
        vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC = 0xbffU;
    }
    if (vlSelf->rst) {
        if ((0x10U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM))) {
            __Vdlyvval__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 
                = vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd;
            __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 = 1U;
            __Vdlyvdim0__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 
                = (0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U]);
        }
        if (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__IF_FLUSH) 
             | (IData)(vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch))) {
            vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr = 0U;
        } else if ((1U & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ID_FLUSH)))) {
            vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                = vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_instr;
        }
    } else {
        __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v1 = 1U;
        vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr = 0U;
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0) {
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[__Vdlyvdim0__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0] 
            = __Vdlyvval__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0;
    }
    if (__Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v1) {
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[1U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[2U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[3U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[4U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[5U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[6U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[7U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[8U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[9U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xaU] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xbU] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xcU] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xdU] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xeU] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0xfU] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x10U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x11U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x12U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x13U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x14U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x15U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x16U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x17U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x18U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x19U] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1aU] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1bU] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1cU] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1dU] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1eU] = 0U;
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0x1fU] = 0U;
    }
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch 
        = (1U & (~ (IData)(vlSelf->rst)));
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("top.sv", 23, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 23, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
