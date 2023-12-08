// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt = 0U;
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
    vlSelf->__Vtrigprevexpr_ha3f5a80b__0 = vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
        [0U];
    vlSelf->__Vtrigprevexpr_ha3f53da3__0 = vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
        [1U];
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr = 0U;
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch = 1U;
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC = 0xbffU;
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x736f7274U;
    __Vtemp_1[2U] = 0x65732f71U;
    __Vtemp_1[3U] = 0x5f636f64U;
    __Vtemp_1[4U] = 0x6d706c65U;
    __Vtemp_1[5U] = 0x2e2f7361U;
    __Vtemp_1[6U] = 0x2eU;
    VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_1)
                 ,  &(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IM__DOT__u_imrom__DOT__rom)
                 , 0, ~0ULL);
    vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[0U] = 0U;
    vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[1U] = 0U;
    vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[2U] = 0U;
    vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] = 0U;
    vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[4U] = 0U;
    vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID = 0U;
    vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID = 0U;
    vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID = 0U;
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
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i = 0x20U;
    vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[0U] = 0U;
    vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U] = 0U;
    vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U] = 0U;
    vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_EX = 0U;
    vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX = 0U;
    vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM = 0U;
    vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[0U] = 0U;
    vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U] = 0U;
    vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U] = 0U;
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM = 0U;
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend = 0U;
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID = 0xbbaaccffU;
    vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt = 0xffffffffU;
    vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD = 0U;
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[0U] = 0U;
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[1U] = 0U;
    vlSelf->seg7_select = 0U;
    vlSelf->seg7_seg = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 23, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->led = (0xffU & vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD);
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
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSelect 
        = (0xffU & (0x80U >> (7U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                    >> 0x10U))));
    vlSelf->seg7_seg1 = vlSelf->seg7_seg;
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
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSeg 
        = (0xffU & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                    [(1U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                            >> 0x12U))] >> (0x18U & 
                                            (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                             >> 0xdU))));
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
    vlSelf->top__DOT__HWInt = ((0x3eU & (IData)(vlSelf->top__DOT__HWInt)) 
                               | (0U == vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt));
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
    vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
        = (vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[0U] 
           >> (0x18U & (vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U] 
                        << 3U)));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN 
        = (((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
            >> 4U) & (0U != (0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U])));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN 
        = (((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
            >> 4U) & (0U != (0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1fabfdd5__0 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
           | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e7f6188__0 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
           | (IData)((0x21U == (0xfc00003fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))));
    vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0 
        = (((IData)(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX) 
            == (0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                         >> 0x15U))) | ((IData)(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                             >> 0x10U))));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL)))) {
        vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend 
            = vlSelf->top__DOT__HWInt;
    }
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
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U]) 
              == (0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                           >> 0x10U))));
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
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U]) 
              == (0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                           >> 0x15U))));
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
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
              & ((0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U]) 
                 == (0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                              >> 0x10U)))));
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
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
              & ((0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U]) 
                 == (0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                              >> 0x15U)))));
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
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB = 
        ((0x400U & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
          ? vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[0U]
          : vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq 
        = (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
           == vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2);
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
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea 
        = ((- (IData)(((IData)(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID) 
                       & (0x3000U > (0xffffU & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr))))) 
           & (IData)(vlSelf->top__DOT__PrBE));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] (top.u_BRIDGE.u_seg7.ram[1'h0]) or [changed] (top.u_BRIDGE.u_seg7.ram[1'h1]))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] (top.u_BRIDGE.u_seg7.ram[1'h0]) or [changed] (top.u_BRIDGE.u_seg7.ram[1'h1]))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->led = VL_RAND_RESET_I(8);
    vlSelf->seg7_seg = VL_RAND_RESET_I(8);
    vlSelf->seg7_seg1 = VL_RAND_RESET_I(8);
    vlSelf->seg7_select = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__PrWD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PrBE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__HWInt = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__mips__DOT__IF_CTRL = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__pipeline_stall = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID);
    vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_EX = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(69, vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX);
    vlSelf->top__DOT__mips__DOT__EX_rw_from_EX = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(69, vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM);
    vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0 = VL_RAND_RESET_I(30);
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__reg_index = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__EX_instr = VL_RAND_RESET_I(26);
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC = VL_RAND_RESET_I(30);
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_IF__DOT____VdfgTmp_h52d3c299__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->top__DOT__mips__DOT__u_IF__DOT__IM__DOT__u_imrom__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NOR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sllv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srlv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srav = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1fabfdd5__0 = 0;
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e7f6188__0 = 0;
    vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0 = 0;
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__o_uncertainJump = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__MDHI = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__MDLO = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__MEMout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__Dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 3072; ++__Vi0) {
        vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hf01ede65__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hc028c573__0 = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hc029c120__0 = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd433fd__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd3b6e7__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd519e0__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT__u_dm_ram__DOT____Vlvbound_hfcd09d0e__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 = 0;
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr = VL_RAND_RESET_I(30);
    vlSelf->top__DOT__u_BRIDGE__DOT__PrWD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_BRIDGE__DOT__PrBE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__u_BRIDGE__DOT__WeCPU = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_BRIDGE__DOT__DEV_Addr = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_BRIDGE__DOT__DEV0_RD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt = VL_RAND_RESET_I(19);
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSeg = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__newSelect = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__top__DOT__mips__DOT__u_IF__DOT__IF_PC = VL_RAND_RESET_I(30);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_ha3f5a80b__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr_ha3f53da3__0 = VL_RAND_RESET_I(32);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
