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
    vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_EX = vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID;
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__Dout = 
        ((0xbffU >= (0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                               >> 2U))) ? vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram
         [(0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                     >> 2U))] : 0U);
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
        ((~ (IData)(vlSelf->top__DOT__mips__DOT__pipeline_stall)) 
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
    vlSelf->__Vdly__top__DOT__mips__DOT__u_IF__DOT__IF_PC 
        = vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC;
    __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i = 0x20U;
    }
    if (vlSelf->rst) {
        if (VL_UNLIKELY((0xbffU == vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC))) {
            VL_WRITEF("start\n");
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mips__DOT__pipeline_stall)))) {
            vlSelf->__Vdly__top__DOT__mips__DOT__u_IF__DOT__IF_PC 
                = (0x3fffffffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT____VdfgTmp_h52d3c299__0);
        }
    } else {
        vlSelf->__Vdly__top__DOT__mips__DOT__u_IF__DOT__IF_PC = 0xbffU;
    }
    if (vlSelf->rst) {
        if ((0x10U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM))) {
            __Vdlyvval__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 
                = vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd;
            __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 = 1U;
            __Vdlyvdim0__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 
                = (0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U]);
        }
    } else {
        __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v1 = 1U;
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
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM = vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX;
    vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[0U] 
        = (IData)((((QData)((IData)(vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__MEMout))));
    vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U] 
        = (IData)(((((QData)((IData)(vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__MEMout))) 
                   >> 0x20U));
    vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U] 
        = (0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U]);
    vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX = vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID;
    vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
        = (vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[0U] 
           >> (0x18U & (vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U] 
                        << 3U)));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN 
        = (((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
            >> 4U) & (0U != (0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U])));
    __Vtemp_2[0U] = (IData)((((QData)((IData)(((0x1000U 
                                                & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
                                                ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC 
                                                   >> 0x1fU)
                                                : (
                                                   (0x800U 
                                                    & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
                                                    ? 
                                                   (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[4U] 
                                                    << 2U)
                                                    : 
                                                   ((0x8000U 
                                                     & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
                                                     ? 
                                                    (1U 
                                                     & ((0xcU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                             >> 0xbU)))
                                                         ? 
                                                        (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))
                                                         : 
                                                        ((0xdU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                              >> 0xbU)))
                                                          ? 
                                                         ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                                          << 0xaU)
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                               >> 0xbU)))
                                                           ? vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                                >> 0xbU)))
                                                            ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                            : 0U)))))
                                                     : vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)(((0x1000U 
                                                 & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
                                                 ? 
                                                (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC 
                                                 >> 0x1fU)
                                                 : 
                                                ((0x800U 
                                                  & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
                                                  ? 
                                                 (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[4U] 
                                                  << 2U)
                                                  : 
                                                 ((0x8000U 
                                                   & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
                                                   ? 
                                                  (1U 
                                                   & ((0xcU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                           >> 0xbU)))
                                                       ? 
                                                      (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))
                                                       : 
                                                      ((0xdU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                            >> 0xbU)))
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                                        << 0xaU)
                                                        : 
                                                       ((0xeU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                             >> 0xbU)))
                                                         ? vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                              >> 0xbU)))
                                                          ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                          : 0U)))))
                                                   : vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn))) 
                             >> 0x20U));
    vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[0U] 
        = __Vtemp_2[0U];
    vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U] 
        = __Vtemp_2[1U];
    vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U] 
        = vlSelf->top__DOT__mips__DOT__EX_rw_from_EX;
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd 
        = ((8U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM))
            ? ((4U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM))
                ? (((- (IData)((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                      & (vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
                                         >> 7U))))) 
                    << 8U) | (0xffU & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0))
                : ((2U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM))
                    ? (((- (IData)((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                          & (vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
                                             >> 0xfU))))) 
                        << 0x10U) | (0xffffU & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0))
                    : vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[0U]))
            : vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U]);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__MEMout 
        = ((0x3000U > (0xffffU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U]))
            ? vlSelf->top__DOT__mips__DOT__u_MEM__DOT__Dout
            : ((0x7fU == (0xffffffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                       >> 6U))) ? vlSelf->top__DOT__u_BRIDGE__DOT__DEV0_RD
                : ((0x80U == (0xffffffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                           >> 6U)))
                    ? vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD
                    : ((0x81U == (0xffffffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                               >> 6U)))
                        ? vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                       [(1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)]
                        : 0U))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN 
        = (((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
            >> 4U) & (0U != (0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])));
    if ((0x4000U & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))) {
        if ((0xcU == (0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                               >> 0xbU)))) {
            vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM 
                = (0x3fU & (vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn 
                            >> 0xaU));
            vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE 
                = (1U & vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn);
            vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL 
                = (1U & (vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn 
                         >> 1U));
        }
        if ((0xcU != (0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                               >> 0xbU)))) {
            if ((0xeU == (0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                   >> 0xbU)))) {
                vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0 
                    = (vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn 
                       >> 2U);
            }
        }
    }
    if (vlSelf->top__DOT__mips__DOT__pipeline_stall) {
        vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID = 0U;
        vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID = 0U;
    } else {
        vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID 
            = ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                 | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                    | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                       | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB) 
                          | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC)))))) 
                << 4U) | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                           << 3U) | ((((0x20U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                  >> 0x1aU)) 
                                       | ((0x24U == 
                                           (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                            >> 0x1aU)) 
                                          | (0x28U 
                                             == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                 >> 0x1aU)))) 
                                      << 2U) | ((((0x21U 
                                                   == 
                                                   (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                    >> 0x1aU)) 
                                                  | ((0x25U 
                                                      == 
                                                      (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                       >> 0x1aU)) 
                                                     | (0x29U 
                                                        == 
                                                        (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                         >> 0x1aU)))) 
                                                 << 1U) 
                                                | ((0x20U 
                                                    == 
                                                    (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                     >> 0x1aU)) 
                                                   | (0x21U 
                                                      == 
                                                      (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                       >> 0x1aU)))))));
        vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID 
            = (((IData)((0x40000000U == (0xffe00000U 
                                         & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))) 
                << 0xfU) | (((IData)((0x40800000U == 
                                      (0xffe00000U 
                                       & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))) 
                             << 0xeU) | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                           | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr) 
                                              | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                                 | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB)))) 
                                          << 0xdU) 
                                         | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                              | (0xaU 
                                                 == 
                                                 (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                  >> 0x1aU))) 
                                             << 0xcU) 
                                            | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC) 
                                                << 0xbU) 
                                               | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                                    | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1fabfdd5__0)) 
                                                   << 0xaU) 
                                                  | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll)
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                                                         | ((0xdU 
                                                             == 
                                                             (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                              >> 0x1aU)) 
                                                            | (0xfU 
                                                               == 
                                                               (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                >> 0x1aU))))
                                                         ? 1U
                                                         : 
                                                        (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                                          | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu) 
                                                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                                                | ((0xaU 
                                                                    == 
                                                                    (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                     >> 0x1aU)) 
                                                                   | ((4U 
                                                                       == 
                                                                       (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                        >> 0x1aU)) 
                                                                      | (5U 
                                                                         == 
                                                                         (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                          >> 0x1aU)))))))
                                                          ? 2U
                                                          : 
                                                         (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e7f6188__0) 
                                                           | ((8U 
                                                               == 
                                                               (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                >> 0x1aU)) 
                                                              | ((9U 
                                                                  == 
                                                                  (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                   >> 0x1aU)) 
                                                                 | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1fabfdd5__0))))
                                                           ? 3U
                                                           : 
                                                          (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                                                            | (0xcU 
                                                               == 
                                                               (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                >> 0x1aU)))
                                                            ? 4U
                                                            : 
                                                           (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
                                                             | (0xeU 
                                                                == 
                                                                (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                 >> 0x1aU)))
                                                             ? 5U
                                                             : 
                                                            ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NOR)
                                                              ? 6U
                                                              : 
                                                             ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srl)
                                                               ? 7U
                                                               : 
                                                              ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sra)
                                                                ? 8U
                                                                : 
                                                               ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sllv)
                                                                 ? 9U
                                                                 : 
                                                                ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srlv)
                                                                  ? 0xaU
                                                                  : 
                                                                 ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srav)
                                                                   ? 0xbU
                                                                   : 
                                                                  ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs)
                                                                    ? 0xcU
                                                                    : 0U))))))))))))) 
                                                      << 6U) 
                                                     | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                                          | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div)) 
                                                         << 5U) 
                                                        | ((((IData)(
                                                                     (0x11U 
                                                                      == 
                                                                      (0xfc00003fU 
                                                                       & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))
                                                              ? 1U
                                                              : 
                                                             ((IData)(
                                                                      (0x13U 
                                                                       == 
                                                                       (0xfc00003fU 
                                                                        & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))
                                                               ? 2U
                                                               : 
                                                              (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                                                | (IData)(
                                                                          (0x19U 
                                                                           == 
                                                                           (0xfc00003fU 
                                                                            & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))))
                                                                ? 3U
                                                                : 
                                                               (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div) 
                                                                 | (IData)(
                                                                           (0x1bU 
                                                                            == 
                                                                            (0xfc00003fU 
                                                                             & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))))
                                                                 ? 4U
                                                                 : 0U)))) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB)))))))))));
    }
    if (vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) {
        vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0 
            = vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC;
        vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL = 1U;
    } else if (vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC) {
        vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL)))) {
        vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend 
            = vlSelf->top__DOT__HWInt;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mips__DOT__pipeline_stall)))) {
        vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[0U] 
            = (((8U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                        >> 0x1aU)) | ((9U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                              >> 0x1aU)) 
                                      | ((0xaU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                   >> 0x1aU)) 
                                         | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                            | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite) 
                                               | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch))))))
                ? (((- (IData)((1U & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))
                : (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
                    | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                       | (0xfU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                   >> 0x1aU)))) ? (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                   << 0x10U)
                    : (0xffffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
        vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[1U] 
            = vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2;
        vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[2U] 
            = (IData)((((QData)((IData)(vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1))));
        vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
            = (IData)(((((QData)((IData)(vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)) 
                         << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1))) 
                       >> 0x20U));
        vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[4U] 
            = vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC;
    }
    vlSelf->top__DOT__mips__DOT__EX_rw_from_EX = ((IData)(
                                                          (0x800U 
                                                           == 
                                                           (0x2800U 
                                                            & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))))
                                                   ? 0x1fU
                                                   : 
                                                  (0x1fU 
                                                   & ((0x2000U 
                                                       & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
                                                       ? 
                                                      ((vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                        << 0x15U) 
                                                       | (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                          >> 0xbU))
                                                       : 
                                                      ((vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                        << 0x10U) 
                                                       | (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                          >> 0x10U)))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U]) 
              == (0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                           >> 0x15U))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U]) 
              == (0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                           >> 0x10U))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
              & ((0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U]) 
                 == (0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                              >> 0x15U)))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
              & ((0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U]) 
                 == (0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                              >> 0x10U)))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 = 
        (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM))) 
          & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U]) 
         | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB))) 
             & vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd) 
            | ((- (IData)((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
                                 & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB)))))) 
               & vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[2U])));
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn = 
        (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM))) 
          & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U]) 
         | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB))) 
             & vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd) 
            | ((- (IData)((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
                                 & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB)))))) 
               & vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[1U])));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB = 
        ((0x400U & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
          ? vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[0U]
          : vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC = 
        (((((((((0U == (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                >> 6U))) | (1U == (0xfU 
                                                   & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                                      >> 6U)))) 
               | (2U == (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                 >> 6U)))) | (3U == 
                                              (0xfU 
                                               & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                                  >> 6U)))) 
             | (4U == (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                               >> 6U)))) | (5U == (0xfU 
                                                   & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                                      >> 6U)))) 
           | (6U == (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                             >> 6U)))) | (7U == (0xfU 
                                                 & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                                    >> 6U))))
          ? ((0U == (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                             >> 6U))) ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                         << (0x1fU 
                                             & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                >> 6U)))
              : ((1U == (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                 >> 6U))) ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                             | vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                  : ((2U == (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                     >> 6U))) ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                                 - vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                      : ((3U == (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                         >> 6U))) ? 
                         (vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                          + vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                          : ((4U == (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                             >> 6U)))
                              ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                 & vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                              : ((5U == (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                                 >> 6U)))
                                  ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                     ^ vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                                  : ((6U == (0xfU & 
                                             ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                              >> 6U)))
                                      ? (~ (vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                            | vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB))
                                      : (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                         >> (0x1fU 
                                             & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                >> 6U))))))))))
          : ((8U == (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                             >> 6U))) ? VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                           >> 6U)))
              : ((9U == (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                 >> 6U))) ? ((0x1fU 
                                              >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                              ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                                 << vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                              : 0U)
                  : ((0xaU == (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                       >> 6U))) ? (
                                                   (0x1fU 
                                                    >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                                    ? 
                                                   (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                                    >> vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                                    : 0U)
                      : ((0xbU == (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                           >> 6U)))
                          ? ((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                              ? VL_SHIFTRS_III(32,32,32, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                              : (- (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                    >> 0x1fU))) : (
                                                   (0xcU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                                        >> 6U)))
                                                    ? vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1
                                                    : 0U))))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
        = (vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
           + vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB);
    vlSelf->top__DOT__PrWD = (vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn 
                              << (0x18U & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                           << 3U)));
    vlSelf->top__DOT__PrBE = (0xfU & ((4U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID))
                                       ? ((IData)(1U) 
                                          << (3U & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr))
                                       : ((2U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID))
                                           ? ((IData)(3U) 
                                              << (3U 
                                                  & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr))
                                           : 0xfU)));
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea 
        = ((- (IData)(((IData)(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID) 
                       & (0x3000U > (0xffffU & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr))))) 
           & (IData)(vlSelf->top__DOT__PrBE));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC = vlSelf->__Vdly__top__DOT__mips__DOT__u_IF__DOT__IF_PC;
    if (vlSelf->rst) {
        if (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) 
             | (IData)(vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch))) {
            vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr = 0U;
        } else if ((1U & (~ (IData)(vlSelf->top__DOT__mips__DOT__pipeline_stall)))) {
            vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                = vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_instr;
        }
    } else {
        vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr = 0U;
    }
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch 
        = (1U & (~ (IData)(vlSelf->rst)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB 
        = (IData)((0x10U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB 
        = (IData)((0x12U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA 
        = ((0xdU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                     >> 0x1aU)) | ((0xfU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                             >> 0x1aU)) 
                                   | ((8U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                              >> 0x1aU)) 
                                      | ((9U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                 >> 0x1aU)) 
                                         | ((0xaU == 
                                             (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                              >> 0x1aU)) 
                                            | ((0xcU 
                                                == 
                                                (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                 >> 0x1aU)) 
                                               | (0xeU 
                                                  == 
                                                  (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                   >> 0x1aU))))))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult 
        = (IData)((0x18U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div 
        = (IData)((0x1aU == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg 
        = ((0x23U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                      >> 0x1aU)) | ((0x20U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                               >> 0x1aU)) 
                                    | ((0x24U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                  >> 0x1aU)) 
                                       | ((0x21U == 
                                           (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                            >> 0x1aU)) 
                                          | (0x25U 
                                             == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                 >> 0x1aU))))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite 
        = ((0x2bU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                      >> 0x1aU)) | ((0x28U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                               >> 0x1aU)) 
                                    | (0x29U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                 >> 0x1aU))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC 
        = (IData)((0x42000018U == (0xfe00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub 
        = (IData)((0x22U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt 
        = (IData)((0x2aU == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll 
        = (IData)((0U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NOR 
        = (IData)((0x27U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srl 
        = (IData)((2U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sra 
        = (IData)((3U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sllv 
        = (IData)((4U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srlv 
        = (IData)((6U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srav 
        = (IData)((7U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu 
        = (IData)((0x23U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND 
        = (IData)((0x24U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR 
        = (IData)((0x25U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR 
        = (IData)((0x26U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add 
        = (IData)((0x20U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp 
        = ((2U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                   >> 0x1aU)) | (3U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                        >> 0x1aU)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr 
        = (IData)((9U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz 
        = (IData)((0x4000000U == (0xfc1f0000U & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez 
        = (IData)((0x4010000U == (0xfc1f0000U & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1fabfdd5__0 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
           | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e7f6188__0 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
           | (IData)((0x21U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC 
        = ((3U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                   >> 0x1aU)) | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR 
        = ((IData)((8U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))) 
           | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs 
        = ((7U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                   >> 0x1aU)) | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz) 
                                 | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez) 
                                    | (6U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                              >> 0x1aU)))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType 
        = ((4U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                   >> 0x1aU)) ? 1U : ((5U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                              >> 0x1aU))
                                       ? 2U : ((7U 
                                                == 
                                                (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                 >> 0x1aU))
                                                ? 3U
                                                : ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez)
                                                     ? 5U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                       >> 0x1aU))
                                                      ? 6U
                                                      : 0U))))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e7f6188__0) 
           | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
              | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu) 
                 | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                    | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                       | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                          | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NOR) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srl) 
                                      | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sra) 
                                         | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sllv) 
                                            | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srlv) 
                                               | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srav))))))))))))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch 
        = ((4U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                   >> 0x1aU)) | ((5U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                         >> 0x1aU)) 
                                 | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs)));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__o_uncertainJump 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
           | (0U != (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->top__DOT__mips__DOT__pipeline_stall)))) {
        vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_instr 
            = vlSelf->top__DOT__mips__DOT__u_IF__DOT__IM__DOT__u_imrom__DOT__rom
            [(0x7ffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT____VdfgTmp_h52d3c299__0 
                        - (IData)(0x400U)))];
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0 
        = (((IData)(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX) 
            == (0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                         >> 0x15U))) | ((IData)(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                             >> 0x10U))));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U]) 
              == (0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                           >> 0x10U))));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U]) 
              == (0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                           >> 0x15U))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet 
        = ((~ ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
               | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
                  | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch)))) 
           & ((IData)(vlSelf->top__DOT__HWInt) & ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                                  & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL)) 
                                                     & (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))));
    vlSelf->top__DOT__mips__DOT__pipeline_stall = (
                                                   (((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                                     >> 3U) 
                                                    & (IData)(vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0)) 
                                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__o_uncertainJump) 
                                                      & (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x18U 
                                                                    & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID)))) 
                                                          & ((0U 
                                                              != (IData)(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX)) 
                                                             & (IData)(vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0))) 
                                                         | (((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                                             >> 3U) 
                                                            & (((0x1fU 
                                                                 & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                    >> 0x15U)) 
                                                                == 
                                                                (0x1fU 
                                                                 & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])) 
                                                               | ((0x1fU 
                                                                   & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                      >> 0x10U)) 
                                                                  == 
                                                                  (0x1fU 
                                                                   & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])))))));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
              & ((0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U]) 
                 == (0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                              >> 0x10U)))));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
              & ((0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U]) 
                 == (0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                              >> 0x15U)))));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2 = 
        (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM))) 
          & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U]) 
         | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB))) 
             & vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd) 
            | ((- (IData)((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
                                 & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB)))))) 
               & vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
               [(0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                          >> 0x10U))])));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 = 
        (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM))) 
          & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U]) 
         | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB))) 
             & vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd) 
            | ((- (IData)((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
                                 & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB)))))) 
               & vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
               [(0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                          >> 0x15U))])));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq 
        = (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
           == vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail 
        = (((1U == (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType)) 
            & (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq)) 
           | (((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq)) 
               & (2U == (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType))) 
              | (((3U == (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType)) 
                  & ((~ (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                         >> 0x1fU)) & (0U != vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1))) 
                 | (((4U == (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType)) 
                     & (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                        >> 0x1fU)) | (((~ (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                           >> 0x1fU)) 
                                       & (5U == (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType))) 
                                      | ((6U == (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType)) 
                                         & ((vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                             >> 0x1fU) 
                                            | (0U == vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1))))))));
    vlSelf->top__DOT__mips__DOT__u_IF__DOT____VdfgTmp_h52d3c299__0 
        = (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) 
            | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC) 
               | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
                  | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                     | (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail)))))
            ? (0x3fffffffU & ((0x1060U & (- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet)))) 
                              | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC))) 
                                  & vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0) 
                                 | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR))) 
                                     & (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                        >> 2U)) | (
                                                   (0x3ffffffU 
                                                    & ((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp))) 
                                                       & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)) 
                                                   | ((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail))) 
                                                      & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC 
                                                         + 
                                                         ((0x3fff0000U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                                             >> 0xfU)))) 
                                                              << 0x10U)) 
                                                          | (0xffffU 
                                                             & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))))))))
            : ((IData)(1U) + vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC));
}

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
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
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
