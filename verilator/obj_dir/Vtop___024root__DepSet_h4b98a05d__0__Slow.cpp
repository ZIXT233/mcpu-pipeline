// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->led = (0xffU & vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD);
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
    vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
        = (((QData)((IData)(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC)) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0 
        = (((IData)(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX) 
            == (0x1fU & (IData)((vlSelf->top__DOT__mips__DOT__ID_DATA_from_IF 
                                 >> 0x15U)))) | ((IData)(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__mips__DOT__ID_DATA_from_IF 
                                                             >> 0x10U)))));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL)))) {
        vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend 
            = vlSelf->top__DOT__HWInt;
    }
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
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U]) 
              == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                   >> 0x10U)))));
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
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U]) 
              == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                   >> 0x15U)))));
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
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
              & ((0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U]) 
                 == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                      >> 0x10U))))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
           | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
              & ((0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U]) 
                 == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                      >> 0x15U))))));
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
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2 = 
        (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM))) 
          & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U]) 
         | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB))) 
             & vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd) 
            | ((- (IData)((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
                                 & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB)))))) 
               & vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
               [(0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                  >> 0x10U)))])));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 = 
        (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM))) 
          & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U]) 
         | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB))) 
             & vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd) 
            | ((- (IData)((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
                                 & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB)))))) 
               & vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
               [(0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                  >> 0x15U)))])));
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
    vlSelf->top__DOT__mips__DOT__ID_uncertainJump = 
        ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
         | (0U != (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType)));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch 
        = ((4U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) | 
           ((5U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                     >> 0x1aU)))) | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs)));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB = 
        ((0x400U & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
          ? vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[0U]
          : vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq 
        = (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
           == vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2);
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
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ID_FLUSH 
        = ((((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
             >> 3U) & (IData)(vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0)) 
           | ((IData)(vlSelf->top__DOT__mips__DOT__ID_uncertainJump) 
              & (((IData)((0U != (0x18U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID)))) 
                  & ((0U != (IData)(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX)) 
                     & (IData)(vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0))) 
                 | (((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                     >> 3U) & (((0x1fU & (IData)((vlSelf->top__DOT__mips__DOT__ID_DATA_from_IF 
                                                  >> 0x15U))) 
                                == (0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])) 
                               | ((0x1fU & (IData)(
                                                   (vlSelf->top__DOT__mips__DOT__ID_DATA_from_IF 
                                                    >> 0x10U))) 
                                  == (0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])))))));
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__IF_FLUSH 
        = ((~ ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
               | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
                  | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch)))) 
           & ((IData)(vlSelf->top__DOT__HWInt) & ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                                  & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL)) 
                                                     & (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))));
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
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea 
        = ((- (IData)(((IData)(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID) 
                       & (0x3000U > (0xffffU & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr))))) 
           & (IData)(vlSelf->top__DOT__PrBE));
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
