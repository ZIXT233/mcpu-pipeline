// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->rst)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(2U, ((vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                                      [0U] != vlSelf->__Vtrigprevexpr_ha3f5a80b__0) 
                                     | (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                                        [1U] != vlSelf->__Vtrigprevexpr_ha3f53da3__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
    vlSelf->__Vtrigprevexpr_ha3f5a80b__0 = vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
        [0U];
    vlSelf->__Vtrigprevexpr_ha3f53da3__0 = vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
        [1U];
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
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
    VlWide<3>/*95:0*/ __Vtemp_3;
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
    vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 0U;
    vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 0U;
    if ((1U & (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV))) {
        __Vdly__top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt 
            = vlSelf->top__DOT__u_BRIDGE__DOT__PrWD;
    } else if ((0U < vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt)) {
        __Vdly__top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt 
            = (vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt 
               - (IData)(1U));
    }
    if ((0x3000U > (0xffffU & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]))) {
        if ((0xfU == (IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea))) {
            vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hf01ede65__0 
                = vlSelf->top__DOT__PrWD;
            if ((0xbffU >= (0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                      >> 2U)))) {
                __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0 
                    = vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hf01ede65__0;
                __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0 = 1U;
                __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v0 
                    = (0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                 >> 2U));
            }
        } else if ((3U == (IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea))) {
            vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hc028c573__0 
                = (0xffffU & vlSelf->top__DOT__PrWD);
            if ((0xbffU >= (0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                      >> 2U)))) {
                __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1 
                    = vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hc028c573__0;
                __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1 = 1U;
                __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1 = 0U;
                __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v1 
                    = (0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                 >> 2U));
            }
        } else if ((0xcU == (IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea))) {
            vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hc029c120__0 
                = (vlSelf->top__DOT__PrWD >> 0x10U);
            if ((0xbffU >= (0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                      >> 2U)))) {
                __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2 
                    = vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hc029c120__0;
                __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2 = 1U;
                __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2 = 0x10U;
                __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v2 
                    = (0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                 >> 2U));
            }
        } else if ((1U == (IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea))) {
            vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd433fd__0 
                = (0xffU & vlSelf->top__DOT__PrWD);
            if ((0xbffU >= (0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                      >> 2U)))) {
                __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3 
                    = vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd433fd__0;
                __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3 = 1U;
                __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3 = 0U;
                __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v3 
                    = (0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                 >> 2U));
            }
        } else if ((2U == (IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea))) {
            vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd3b6e7__0 
                = (0xffU & (vlSelf->top__DOT__PrWD 
                            >> 8U));
            if ((0xbffU >= (0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                      >> 2U)))) {
                __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4 
                    = vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd3b6e7__0;
                __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4 = 1U;
                __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4 = 8U;
                __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v4 
                    = (0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                 >> 2U));
            }
        } else if ((4U == (IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea))) {
            vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd519e0__0 
                = (0xffU & (vlSelf->top__DOT__PrWD 
                            >> 0x10U));
            if ((0xbffU >= (0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                      >> 2U)))) {
                __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5 
                    = vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd519e0__0;
                __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5 = 1U;
                __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5 = 0x10U;
                __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v5 
                    = (0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                 >> 2U));
            }
        } else if ((8U == (IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea))) {
            vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd09d0e__0 
                = (vlSelf->top__DOT__PrWD >> 0x18U);
            if ((0xbffU >= (0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                      >> 2U)))) {
                __Vdlyvval__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6 
                    = vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd09d0e__0;
                __Vdlyvset__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6 = 1U;
                __Vdlyvlsb__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6 = 0x18U;
                __Vdlyvdim0__top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram__v6 
                    = (0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                 >> 2U));
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV))) {
        if ((0xfU == (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE))) {
            vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 
                = vlSelf->top__DOT__u_BRIDGE__DOT__PrWD;
            vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 = 1U;
            vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0 
                = (1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr);
        } else if ((3U == (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE))) {
            vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 
                = (0xffffU & vlSelf->top__DOT__u_BRIDGE__DOT__PrWD);
            vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 1U;
            vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 = 0U;
            vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1 
                = (1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr);
        } else if ((0xcU == (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE))) {
            vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 
                = (vlSelf->top__DOT__u_BRIDGE__DOT__PrWD 
                   >> 0x10U);
            vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 1U;
            vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 = 0x10U;
            vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2 
                = (1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr);
        } else if ((1U == (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE))) {
            vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 
                = (0xffU & vlSelf->top__DOT__u_BRIDGE__DOT__PrWD);
            vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 1U;
            vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 = 0U;
            vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3 
                = (1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr);
        } else if ((2U == (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE))) {
            vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 
                = (0xffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrWD 
                            >> 8U));
            vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 1U;
            vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 = 8U;
            vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4 
                = (1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr);
        } else if ((4U == (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE))) {
            vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 
                = (0xffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrWD 
                            >> 0x10U));
            vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 1U;
            vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 = 0x10U;
            vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5 
                = (1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr);
        } else if ((8U == (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE))) {
            vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 
                = (vlSelf->top__DOT__u_BRIDGE__DOT__PrWD 
                   >> 0x18U);
            vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 1U;
            vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 = 0x18U;
            vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6 
                = (1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr);
        }
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
    if (VL_UNLIKELY((2U & (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV)))) {
        VL_WRITEF("%11d\n",32,vlSelf->top__DOT__u_BRIDGE__DOT__PrWD);
        vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD = vlSelf->top__DOT__u_BRIDGE__DOT__PrWD;
    }
    vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL 
        = ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.MEM_FLUSH)
            ? 0U : (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL));
    vlSelf->top__DOT__u_BRIDGE__DOT__WeCPU = ((0x3000U 
                                               <= (0xffffU 
                                                   & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U])) 
                                              & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL));
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellout__u_dm_ram__douta 
        = ((0xbffU >= (0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                 >> 2U))) ? vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram
           [(0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                       >> 2U))] : 0U);
    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.MEM_FLUSH)))) {
        vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA 
            = (0x1fffffffffULL & (((QData)((IData)(
                                                   vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[2U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]))));
    }
    vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt 
        = __Vdly__top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt;
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
    vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr = (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                               >> 2U);
    vlSelf->seg7_seg1 = vlSelf->seg7_seg;
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSelect 
        = (0xffU & (0x80U >> (7U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                    >> 0x10U))));
    vlSelf->top__DOT__u_BRIDGE__DOT__PrWD = vlSelf->top__DOT__PrWD;
    vlSelf->led = (0xffU & vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD);
    vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL 
        = ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_FLUSH)
            ? 0U : (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL));
    vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL 
        = ((~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_FLUSH)) 
           & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.MEM_CTRL));
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
    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_FLUSH)))) {
        __Vtemp_3[0U] = (IData)((((QData)((IData)((
                                                   (0x1000U 
                                                    & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                                    ? 
                                                   (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC 
                                                    >> 0x1fU)
                                                    : 
                                                   ((0x800U 
                                                     & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                                     ? 
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                                                     << 2U)
                                                     : 
                                                    ((0x8000U 
                                                      & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                                      ? 
                                                     (1U 
                                                      & ((0xcU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
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
                                                            & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                               >> 0xbU)))
                                                           ? 
                                                          ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                                           << 0xaU)
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                                >> 0xbU)))
                                                            ? vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0
                                                            : 
                                                           ((0xfU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                                 >> 0xbU)))
                                                             ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                             : 0U)))))
                                                      : vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn))));
        __Vtemp_3[1U] = (IData)(((((QData)((IData)(
                                                   ((0x1000U 
                                                     & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                                     ? 
                                                    (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC 
                                                     >> 0x1fU)
                                                     : 
                                                    ((0x800U 
                                                      & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                                      ? 
                                                     (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                                                      << 2U)
                                                      : 
                                                     ((0x8000U 
                                                       & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                                       ? 
                                                      (1U 
                                                       & ((0xcU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
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
                                                             & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                                >> 0xbU)))
                                                            ? 
                                                           ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                                            << 0xaU)
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                                 >> 0xbU)))
                                                             ? vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0
                                                             : 
                                                            ((0xfU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                                  >> 0xbU)))
                                                              ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                              : 0U)))))
                                                       : vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC))))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn))) 
                                 >> 0x20U));
        vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[0U] 
            = __Vtemp_3[0U];
        vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
            = __Vtemp_3[1U];
        vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[2U] 
            = vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw;
    }
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.MEM_CTRL 
        = ((~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)) 
           & (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite));
    vlSelf->top__DOT__PrWD = (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[0U] 
                              << (0x18U & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                           << 3U)));
    vlSelf->top__DOT__PrBE = (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__isDMByte)
                                       ? ((IData)(1U) 
                                          << (3U & 
                                              vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]))
                                       : ((IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__isDMHalf)
                                           ? ((IData)(3U) 
                                              << (3U 
                                                  & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]))
                                           : 0xfU)));
    vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL) 
                                   >> 4U)))) << 0x25U) 
           | (((QData)((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U])) 
               << 5U) | (QData)((IData)((0x1fU & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[2U])))));
    if ((0x4000U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))) {
        if ((0xcU == (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
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
        if ((0xcU != (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                               >> 0xbU)))) {
            if ((0xeU == (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                   >> 0xbU)))) {
                vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0 
                    = (vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn 
                       >> 2U);
            }
        }
    }
    if (vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall) {
        vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL = 0U;
        vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL = 0U;
    } else {
        vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL 
            = ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                 | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                    | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                       | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB) 
                          | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC)))))) 
                << 4U) | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                           << 3U) | ((((0x20U == (0x3fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU)))) 
                                       | ((0x24U == 
                                           (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU)))) 
                                          | (0x28U 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))))) 
                                      << 2U) | ((((0x21U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                               >> 0x1aU)))) 
                                                  | ((0x25U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                  >> 0x1aU)))) 
                                                     | (0x29U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                    >> 0x1aU)))))) 
                                                 << 1U) 
                                                | ((0x20U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                >> 0x1aU)))) 
                                                   | (0x21U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                  >> 0x1aU)))))))));
        vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL 
            = vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_CTRL;
    }
    if (vlSelf->top__DOT__mips__DOT__u_Controller__DOT__IF_FLUSH) {
        vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL = 1U;
        vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0 
            = (0x3fffffffU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                      >> 0x20U)));
    } else if (vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC) {
        vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL = 0U;
    }
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea 
        = ((- (IData)(((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL) 
                       & (0x3000U > (0xffffU & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]))))) 
           & (IData)(vlSelf->top__DOT__PrBE));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN 
        = ((IData)((vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM 
                    >> 0x25U)) & (0U != (0x1fU & (IData)(vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM))));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL)))) {
        vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend 
            = vlSelf->top__DOT__HWInt;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)))) {
        vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[0U] 
            = ((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))
                ? (((- (IData)((1U & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                              >> 0xfU))))) 
                    << 0x10U) | (0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))
                : ((2U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))
                    ? ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA) 
                       << 0x10U) : (0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
        vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[1U] 
            = vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2;
        vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[2U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1))));
        vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
            = (IData)(((((QData)((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)) 
                         << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1))) 
                       >> 0x20U));
        vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
            = (0x3fffffffU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                      >> 0x20U)));
    }
    vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw 
        = ((IData)((0x800U == (0x2800U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))))
            ? 0x1fU : (0x1fU & ((0x2000U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                 ? ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                     << 0x15U) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                  >> 0xbU))
                                 : ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                     << 0x10U) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                  >> 0x10U)))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM)) 
              == (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                           >> 0x15U))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM)) 
              == (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                           >> 0x10U))));
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
        if ((1U & (IData)((vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB 
                           >> 0x25U)))) {
            __Vdlyvval__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 
                = (IData)((vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB 
                           >> 5U));
            __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 = 1U;
            __Vdlyvdim0__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v0 
                = (0x1fU & (IData)(vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB));
        }
    } else {
        __Vdlyvset__top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register__v1 = 1U;
    }
    if (vlSelf->rst) {
        if (VL_UNLIKELY((0xbffU == vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC))) {
            VL_WRITEF("start\n");
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)))) {
            vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC 
                = vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC;
        }
    } else {
        vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC = 0xbffU;
    }
    if (vlSelf->rst) {
        if (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__IF_FLUSH) 
             | (IData)(vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch))) {
            vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr = 0U;
        } else if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)))) {
            vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                = vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_instr;
        }
    } else {
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
    vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
        = (((QData)((IData)(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC)) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB 
        = (IData)((0x10ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB 
        = (IData)((0x12ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA 
        = ((0xdU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                      >> 0x1aU)))) 
           | ((0xfU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                         >> 0x1aU)))) 
              | ((8U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                          >> 0x1aU)))) 
                 | ((9U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                             >> 0x1aU)))) 
                    | ((0xaU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                  >> 0x1aU)))) 
                       | ((0xcU == (0x3fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x1aU)))) 
                          | (0xeU == (0x3fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x1aU))))))))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult 
        = (IData)((0x18ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div 
        = (IData)((0x1aULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC 
        = (IData)((0x42000018ULL == (0xfe00003fULL 
                                     & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite 
        = ((0x2bU == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                       >> 0x1aU)))) 
           | ((0x28U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                          >> 0x1aU)))) 
              | (0x29U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                            >> 0x1aU))))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg 
        = ((0x23U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                       >> 0x1aU)))) 
           | ((0x20U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                          >> 0x1aU)))) 
              | ((0x24U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                             >> 0x1aU)))) 
                 | ((0x21U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                >> 0x1aU)))) 
                    | (0x25U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                  >> 0x1aU))))))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt 
        = (IData)((0x2aULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll 
        = (IData)((0ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NOR 
        = (IData)((0x27ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srl 
        = (IData)((2ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sra 
        = (IData)((3ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sllv 
        = (IData)((4ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srlv 
        = (IData)((6ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srav 
        = (IData)((7ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu 
        = (IData)((0x23ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND 
        = (IData)((0x24ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR 
        = (IData)((0x25ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR 
        = (IData)((0x26ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp 
        = ((2U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) | 
           (3U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub 
        = (IData)((0x22ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add 
        = (IData)((0x20ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr 
        = (IData)((9ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz 
        = (IData)((0x4000000ULL == (0xfc1f0000ULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez 
        = (IData)((0x4010000ULL == (0xfc1f0000ULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
           | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e50702c__0 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
           | (IData)((0x21ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC 
        = ((3U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR 
        = ((IData)((8ULL == (0xfc00003fULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))) 
           | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType 
        = ((4U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) ? 1U
            : ((5U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                        >> 0x1aU))))
                ? 2U : ((7U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                 >> 0x1aU))))
                         ? 3U : ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz)
                                  ? 4U : ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez)
                                           ? 5U : (
                                                   (6U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                >> 0x1aU))))
                                                    ? 6U
                                                    : 0U))))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs 
        = ((7U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) | 
           ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz) 
            | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez) 
               | (6U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                          >> 0x1aU)))))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e50702c__0) 
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
    vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.ID_uncertainJump 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
           | (0U != (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch 
        = ((4U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) | 
           ((5U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                     >> 0x1aU)))) | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs)));
    vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_CTRL 
        = (((IData)((0x40000000ULL == (0xffe00000ULL 
                                       & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))) 
            << 0xfU) | (((IData)((0x40800000ULL == 
                                  (0xffe00000ULL & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))) 
                         << 0xeU) | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                       | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr) 
                                          | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                             | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB)))) 
                                      << 0xdU) | ((
                                                   ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                                    | (0xaU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                   >> 0x1aU))))) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC) 
                                                      << 0xbU) 
                                                     | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                                          | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0)) 
                                                         << 0xaU) 
                                                        | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll)
                                                              ? 0U
                                                              : 
                                                             (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                                                               | ((0xdU 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                               >> 0x1aU)))) 
                                                                  | (0xfU 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU))))))
                                                               ? 1U
                                                               : 
                                                              (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu) 
                                                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                                                      | ((0xaU 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))) 
                                                                         | ((4U 
                                                                             == 
                                                                             (0x3fU 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))) 
                                                                            | (5U 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))))))))
                                                                ? 2U
                                                                : 
                                                               (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e50702c__0) 
                                                                 | ((8U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))) 
                                                                    | ((9U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))) 
                                                                       | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0))))
                                                                 ? 3U
                                                                 : 
                                                                (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                                                                  | (0xcU 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))))
                                                                  ? 4U
                                                                  : 
                                                                 (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
                                                                   | (0xeU 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))))
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
                                                                           (0x11ULL 
                                                                            == 
                                                                            (0xfc00003fULL 
                                                                             & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))
                                                                    ? 1U
                                                                    : 
                                                                   ((IData)(
                                                                            (0x13ULL 
                                                                             == 
                                                                             (0xfc00003fULL 
                                                                              & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))
                                                                     ? 2U
                                                                     : 
                                                                    (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                                                      | (IData)(
                                                                                (0x19ULL 
                                                                                == 
                                                                                (0xfc00003fULL 
                                                                                & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))
                                                                      ? 3U
                                                                      : 
                                                                     (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div) 
                                                                       | (IData)(
                                                                                (0x1bULL 
                                                                                == 
                                                                                (0xfc00003fULL 
                                                                                & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))
                                                                       ? 4U
                                                                       : 0U)))) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB)))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1))) 
                & vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v1))));
    }
    if (vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2))) 
                & vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v2))));
    }
    if (vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3))) 
                & vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v3))));
    }
    if (vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4))) 
                & vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4) 
                                   << (IData)(vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v4))));
    }
    if (vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5))) 
                & vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5) 
                                   << (IData)(vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v5))));
    }
    if (vlSelf->__Vdlyvset__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6))) 
                & vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                [vlSelf->__Vdlyvdim0__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6) 
                                   << (IData)(vlSelf->__Vdlyvlsb__top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram__v6))));
    }
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSeg 
        = (0xffU & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                    [(1U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                            >> 0x12U))] >> (0x18U & 
                                            (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                             >> 0xdU))));
    vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout 
        = (1U & ((0x3000U > (0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA)))
                  ? vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellout__u_dm_ram__douta
                  : ((0x7fU == (0xffffffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                             >> 6U)))
                      ? vlSelf->top__DOT__u_BRIDGE__DOT__DEV0_RD
                      : ((0x80U == (0xffffffU & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                 >> 6U)))
                          ? vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD
                          : ((0x81U == (0xffffffU & 
                                        (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                         >> 6U))) ? 
                             vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                             [(1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)]
                              : 0U)))));
    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)))) {
        vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_instr 
            = vlSelf->top__DOT__mips__DOT__u_IF__DOT__IM__DOT__u_imrom__DOT__rom
            [(0x7ffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC 
                        - (IData)(0x400U)))];
    }
    vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout) 
           >> (0x18U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA) 
                        << 3U)));
    vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB = 
        (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                 >> 4U)))) << 0x25U) 
         | (((QData)((IData)(((8U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
                               ? ((4U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
                                   ? (((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                                      & (vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
                                                         >> 7U))))) 
                                       << 8U) | (0xffU 
                                                 & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0))
                                   : ((2U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                                          & (vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
                                                             >> 0xfU))))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0))
                                       : (IData)(vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout)))
                               : (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA)))) 
             << 5U) | (QData)((IData)((0x1fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA 
                                                        >> 0x20U)))))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN 
        = ((IData)((vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB 
                    >> 0x25U)) & (0U != (0x1fU & (IData)(vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
              & ((0x1fU & (IData)(vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB)) 
                 == (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                              >> 0x15U)))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
              & ((0x1fU & (IData)(vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB)) 
                 == (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                              >> 0x10U)))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 = 
        (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM))) 
          & (IData)((vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM 
                     >> 5U))) | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB))) 
                                  & (IData)((vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB 
                                             >> 5U))) 
                                 | ((- (IData)((1U 
                                                & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
                                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB)))))) 
                                    & vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[2U])));
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn = 
        (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM))) 
          & (IData)((vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM 
                     >> 5U))) | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB))) 
                                  & (IData)((vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB 
                                             >> 5U))) 
                                 | ((- (IData)((1U 
                                                & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
                                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB)))))) 
                                    & vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[1U])));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB = 
        ((0x400U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
          ? vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[0U]
          : vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC = 
        (((((((((0U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                >> 6U))) | (1U == (0xfU 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                      >> 6U)))) 
               | (2U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                 >> 6U)))) | (3U == 
                                              (0xfU 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                  >> 6U)))) 
             | (4U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                               >> 6U)))) | (5U == (0xfU 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                      >> 6U)))) 
           | (6U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                             >> 6U)))) | (7U == (0xfU 
                                                 & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                    >> 6U))))
          ? ((0U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                             >> 6U))) ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                         << (0x1fU 
                                             & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                >> 6U)))
              : ((1U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                 >> 6U))) ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                             | vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                  : ((2U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 6U))) ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                                 - vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                      : ((3U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                         >> 6U))) ? 
                         (vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                          + vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                          : ((4U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                             >> 6U)))
                              ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                 & vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                              : ((5U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                 >> 6U)))
                                  ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                     ^ vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB)
                                  : ((6U == (0xfU & 
                                             ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                              >> 6U)))
                                      ? (~ (vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                            | vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB))
                                      : (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                         >> (0x1fU 
                                             & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                >> 6U))))))))))
          : ((8U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                             >> 6U))) ? VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                           >> 6U)))
              : ((9U == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                 >> 6U))) ? ((0x1fU 
                                              >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                              ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                                 << vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                              : 0U)
                  : ((0xaU == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                       >> 6U))) ? (
                                                   (0x1fU 
                                                    >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                                    ? 
                                                   (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                                    >> vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                                    : 0U)
                      : ((0xbU == (0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                           >> 6U)))
                          ? ((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                              ? VL_SHIFTRS_III(32,32,32, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                              : (- (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                    >> 0x1fU))) : (
                                                   (0xcU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                        >> 6U)))
                                                    ? vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1
                                                    : 0U))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM)) 
              == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                   >> 0x10U)))));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM)) 
              == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                   >> 0x15U)))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__IF_FLUSH 
        = ((~ ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
               | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
                  | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch)))) 
           & ((IData)(vlSelf->top__DOT__HWInt) & ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                                  & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL)) 
                                                     & (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
              & ((0x1fU & (IData)(vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB)) 
                 == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                      >> 0x10U))))));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
              & ((0x1fU & (IData)(vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB)) 
                 == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                      >> 0x15U))))));
    vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL 
        = (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC) 
            << 8U) | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__IF_FLUSH) 
                       << 7U) | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                                  << 6U) | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
                                             << 5U) 
                                            | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
                                                    | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                                       | (0xfU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                      >> 0x1aU)))))) 
                                                   << 1U) 
                                                  | ((8U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                  >> 0x1aU)))) 
                                                     | ((9U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                     >> 0x1aU)))) 
                                                        | ((0xaU 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                        >> 0x1aU)))) 
                                                           | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                                              | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite) 
                                                                 | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch))))))))))));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2 = 
        (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM))) 
          & (IData)((vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM 
                     >> 5U))) | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB))) 
                                  & (IData)((vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB 
                                             >> 5U))) 
                                 | ((- (IData)((1U 
                                                & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
                                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB)))))) 
                                    & vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                                    [(0x1fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x10U)))])));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 = 
        (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM))) 
          & (IData)((vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM 
                     >> 5U))) | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB))) 
                                  & (IData)((vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB 
                                             >> 5U))) 
                                 | ((- (IData)((1U 
                                                & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
                                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB)))))) 
                                    & vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                                    [(0x1fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x15U)))])));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq 
        = (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
           == vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail 
        = ((IData)(((4U == (0x1cU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))) 
                    & (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq))) 
           | (((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq)) 
               & (8U == (0x1cU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL)))) 
              | ((IData)((((0xcU == (0x1cU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))) 
                           & (~ (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                 >> 0x1fU))) & (0U 
                                                != vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1))) 
                 | ((IData)(((0x10U == (0x1cU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))) 
                             & (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                >> 0x1fU))) | (((~ 
                                                 (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                                  >> 0x1fU)) 
                                                & (0x14U 
                                                   == 
                                                   (0x1cU 
                                                    & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL)))) 
                                               | (IData)(
                                                         ((0x18U 
                                                           == 
                                                           (0x1cU 
                                                            & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))) 
                                                          & ((vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                                              >> 0x1fU) 
                                                             | (0U 
                                                                == vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1)))))))));
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC = (0x3fffffffU 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0x1e0U 
                                                                 & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))) 
                                                               | (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail)))
                                                       ? 
                                                      (0x3fffffffU 
                                                       & ((0x1060U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                            >> 7U))))) 
                                                          | (((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                             >> 8U)))) 
                                                              & vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0) 
                                                             | (((- (IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                                >> 5U)))) 
                                                                 & (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                                                    >> 2U)) 
                                                                | ((0x3ffffffU 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                                                                >> 6U)))) 
                                                                       & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))) 
                                                                   | ((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail))) 
                                                                      & ((IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x20U)) 
                                                                         + 
                                                                         ((0x3fff0000U 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0xfU))))) 
                                                                              << 0x10U)) 
                                                                          | (0xffffU 
                                                                             & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))))))))
                                                       : 
                                                      ((IData)(1U) 
                                                       + vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC)));
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop_IStallDetect___nba_comb__TOP__top__DOT__mips__DOT__i_stallDetect__0(Vtop_IStallDetect* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vtop_IStallDetect___nba_comb__TOP__top__DOT__mips__DOT__i_stallDetect__0((&vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect));
    }
}
