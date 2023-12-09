// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

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
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[0U] = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[1U] = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[2U] = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.MEM_CTRL = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL = 0U;
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
    vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[0U] = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[2U] = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL = 0U;
    vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA = 0ULL;
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
    vlSelf->top__DOT__PrWD = (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[0U] 
                              << (0x18U & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                           << 3U)));
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
    vlSelf->top__DOT__PrBE = (0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__isDMByte)
                                       ? ((IData)(1U) 
                                          << (3U & 
                                              vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]))
                                       : ((IData)(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__isDMHalf)
                                           ? ((IData)(3U) 
                                              << (3U 
                                                  & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]))
                                           : 0xfU)));
    vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw 
        = ((IData)((0x800U == (0x2800U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))))
            ? 0x1fU : (0x1fU & ((0x2000U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                 ? ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                     << 0x15U) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                  >> 0xbU))
                                 : ((vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                     << 0x10U) | (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                  >> 0x10U)))));
    vlSelf->top__DOT__HWInt = ((0x3eU & (IData)(vlSelf->top__DOT__HWInt)) 
                               | (0U == vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt));
    vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL) 
                                   >> 4U)))) << 0x25U) 
           | (((QData)((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U])) 
               << 5U) | (QData)((IData)((0x1fU & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[2U])))));
    vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout 
        = ((0x3000U > (0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA)))
            ? vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellout__u_dm_ram__douta
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
    vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
        = (((QData)((IData)(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC)) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)));
    vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea 
        = ((- (IData)(((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL) 
                       & (0x3000U > (0xffffU & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]))))) 
           & (IData)(vlSelf->top__DOT__PrBE));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL)))) {
        vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend 
            = vlSelf->top__DOT__HWInt;
    }
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN 
        = ((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                    >> 0x25U)) & (0U != (0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK))));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__MEM_EN 
        = ((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                    >> 0x25U)) & (0U != (0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK))));
    vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
        = (vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout 
           >> (0x18U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA) 
                        << 3U)));
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
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK)) 
              == (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                           >> 0x15U))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK)) 
              == (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                           >> 0x10U))));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK)) 
              == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                   >> 0x10U)))));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__MEM_EN) 
           & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK)) 
              == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                   >> 0x15U)))));
    vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                   >> 4U)))) << 0x25U) 
           | (((QData)((IData)(((8U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
                                 ? ((4U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
                                     ? (((- (IData)(
                                                    (1U 
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
                                         : vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout))
                                 : (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA)))) 
               << 5U) | (QData)((IData)((0x1fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA 
                                                          >> 0x20U)))))));
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
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs 
        = ((7U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                    >> 0x1aU)))) | 
           ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz) 
            | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez) 
               | (6U == (0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                          >> 0x1aU)))))));
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
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN 
        = ((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                    >> 0x25U)) & (0U != (0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK))));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__WB_EN 
        = ((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                    >> 0x25U)) & (0U != (0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK))));
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
    vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet 
        = (((((IData)(vlSelf->top__DOT__HWInt) & (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM)) 
             & (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)) 
            & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL))) 
           & (~ (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                  | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR)) 
                 | (0U != (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType)))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
              & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK)) 
                 == (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                              >> 0x15U)))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
              & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK)) 
                 == (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                              >> 0x10U)))));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
              & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK)) 
                 == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                      >> 0x10U))))));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB 
        = ((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__WB_EN) 
           & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
              & ((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK)) 
                 == (0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                      >> 0x15U))))));
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
    vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.CP0_CTRL 
        = (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) 
            << 1U) | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC));
    vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL 
        = (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC) 
            << 8U) | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) 
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
                                                                 | ((4U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))) 
                                                                    | ((5U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                                >> 0x1aU)))) 
                                                                       | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs))))))))))))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 = 
        (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM))) 
          & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                     >> 5U))) | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB))) 
                                  & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                                             >> 5U))) 
                                 | ((- (IData)((1U 
                                                & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
                                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB)))))) 
                                    & vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[2U])));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd2 = 
        (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM))) 
          & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                     >> 5U))) | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB))) 
                                  & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                                             >> 5U))) 
                                 | ((- (IData)((1U 
                                                & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
                                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB)))))) 
                                    & vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[1U])));
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2 = 
        (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM))) 
          & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                     >> 5U))) | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB))) 
                                  & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
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
          & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                     >> 5U))) | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB))) 
                                  & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                                             >> 5U))) 
                                 | ((- (IData)((1U 
                                                & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
                                                   & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB)))))) 
                                    & vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                                    [(0x1fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x15U)))])));
    vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                   >> 0xeU)))) << 0x25U) 
           | (((QData)((IData)((0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                         >> 0xbU)))) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd2))));
    vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB = 
        ((0x400U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
          ? vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[0U]
          : vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd2);
    vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq 
        = (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
           == vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2);
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
                                                              & vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EPC) 
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

void Vtop_IStallDetect___nba_comb__TOP__top__DOT__mips__DOT__i_stallDetect__0(Vtop_IStallDetect* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vtop_IStallDetect___nba_comb__TOP__top__DOT__mips__DOT__i_stallDetect__0((&vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect));
    }
}
