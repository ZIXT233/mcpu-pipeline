// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,((vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                >> 2U)),30);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__PrWD),32);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__PrBE),4);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__HWInt),6);
        bufp->chgBit(oldp+5,(((0x3000U <= (0xffffU 
                                           & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U])) 
                              & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL))));
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM),6);
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE));
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend),6);
        bufp->chgIData(oldp+10,((((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                  << 0xaU) | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))),32);
        bufp->chgIData(oldp+11,(((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                 << 0xaU)),32);
        bufp->chgCData(oldp+12,((0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                         >> 6U))),4);
        bufp->chgCData(oldp+13,((7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                       >> 2U))),3);
        bufp->chgBit(oldp+14,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 0xfU))));
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 0xeU))));
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 0xdU))));
        bufp->chgBit(oldp+17,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 0xcU))));
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 0xbU))));
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 0xaU))));
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 5U))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 1U))));
        bufp->chgBit(oldp+22,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))));
        bufp->chgIData(oldp+23,((0x3fffffffU & vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U])),30);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U]),32);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[2U]),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[1U]),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[0U]),32);
        bufp->chgCData(oldp+28,((0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                          >> 6U))),5);
        bufp->chgQData(oldp+29,(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK),38);
        bufp->chgCData(oldp+31,((0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                          >> 0x15U))),5);
        bufp->chgCData(oldp+32,((0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                          >> 0x10U))),5);
        bufp->chgIData(oldp+33,((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                                         >> 5U))),32);
        bufp->chgCData(oldp+34,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK))),5);
        bufp->chgBit(oldp+35,((1U & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.MEM_BACK 
                                             >> 0x25U)))));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM));
        bufp->chgIData(oldp+39,(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EPC),30);
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__MEM_EN));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL));
        bufp->chgIData(oldp+42,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]),32);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[0U]),32);
        bufp->chgCData(oldp+44,((0x1fU & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[2U])),5);
        bufp->chgBit(oldp+45,((0x3000U > (0xffffU & 
                                          vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]))));
        bufp->chgBit(oldp+46,(((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL) 
                               & (0x3000U > (0xffffU 
                                             & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U])))));
        bufp->chgCData(oldp+47,((3U & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U])),2);
        bufp->chgSData(oldp+48,((0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                           >> 2U))),12);
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea),4);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellout__u_dm_ram__douta),32);
        bufp->chgBit(oldp+51,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                     >> 4U))));
        bufp->chgBit(oldp+52,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                     >> 3U))));
        bufp->chgBit(oldp+53,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                     >> 2U))));
        bufp->chgBit(oldp+54,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                     >> 1U))));
        bufp->chgBit(oldp+55,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))));
        bufp->chgBit(oldp+56,((0x3000U > (0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA)))));
        bufp->chgCData(oldp+57,((3U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA))),2);
        bufp->chgCData(oldp+58,((0x18U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA) 
                                          << 3U))),5);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr),30);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__u_BRIDGE__DOT__PrWD),32);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE),4);
        bufp->chgBit(oldp+62,(vlSelf->top__DOT__u_BRIDGE__DOT__WeCPU));
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD),32);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV),4);
        bufp->chgBit(oldp+65,((0x7fU == (0xffffffU 
                                         & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                            >> 6U)))));
        bufp->chgBit(oldp+66,((0x80U == (0xffffffU 
                                         & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                            >> 6U)))));
        bufp->chgBit(oldp+67,((0x81U == (0xffffffU 
                                         & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                            >> 6U)))));
        bufp->chgBit(oldp+68,((1U & ((IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV) 
                                     >> 1U))));
        bufp->chgBit(oldp+69,((1U & (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV))));
        bufp->chgBit(oldp+70,((0U == vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt)));
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt),32);
        bufp->chgBit(oldp+72,((1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)));
        bufp->chgBit(oldp+73,((1U & ((IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV) 
                                     >> 2U))));
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt),19);
        bufp->chgSData(oldp+75,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause),10);
        bufp->chgCData(oldp+76,((7U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                       >> 0x10U))),3);
        bufp->chgCData(oldp+77,((0xffU & (0x80U >> 
                                          (7U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                                 >> 0x10U))))),8);
        bufp->chgCData(oldp+78,(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw),5);
        bufp->chgBit(oldp+79,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL) 
                                     >> 4U))));
        bufp->chgBit(oldp+80,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL) 
                                     >> 3U))));
        bufp->chgBit(oldp+81,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL) 
                                     >> 3U))));
        bufp->chgSData(oldp+82,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL),16);
        bufp->chgBit(oldp+83,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.MEM_CTRL));
        bufp->chgCData(oldp+84,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL),5);
        bufp->chgWData(oldp+85,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA),158);
        bufp->chgCData(oldp+90,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL),5);
        bufp->chgWData(oldp+91,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA),69);
        bufp->chgCData(oldp+94,(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL),5);
        bufp->chgQData(oldp+95,(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA),37);
        bufp->chgBit(oldp+97,(((((IData)(vlSelf->top__DOT__HWInt) 
                                 & (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM)) 
                                & (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)) 
                               & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+98,(((0x7fU == (0xffffffU 
                                            & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                               >> 6U)))
                                  ? vlSelf->top__DOT__u_BRIDGE__DOT__DEV0_RD
                                  : ((0x80U == (0xffffffU 
                                                & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                   >> 6U)))
                                      ? vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD
                                      : ((0x81U == 
                                          (0xffffffU 
                                           & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                              >> 6U)))
                                          ? vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                                         [(1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)]
                                          : 0U)))),32);
        bufp->chgIData(oldp+99,(((0xcU == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                            >> 0x20U))))
                                  ? (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                      << 0xaU) | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))
                                  : ((0xdU == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                          >> 0x20U))))
                                      ? ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                         << 0xaU) : 
                                     ((0xeU == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                           >> 0x20U))))
                                       ? vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EPC
                                       : ((0xfU == 
                                           (0x1fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                             >> 0x20U))))
                                           ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                           : 0U))))),32);
        bufp->chgIData(oldp+100,(((0x1000U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                   ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC 
                                      >> 0x1fU) : (
                                                   (0x800U 
                                                    & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                                    ? 
                                                   (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U] 
                                                    << 2U)
                                                    : 
                                                   ((0x8000U 
                                                     & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
                                                     ? 
                                                    ((0xcU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                                  >> 0x20U))))
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
                                                        & (IData)(
                                                                  (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                                   >> 0x20U))))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                                       << 0xaU)
                                                       : 
                                                      ((0xeU 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                                    >> 0x20U))))
                                                        ? vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EPC
                                                        : 
                                                       ((0xfU 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                                     >> 0x20U))))
                                                         ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                         : 0U))))
                                                     : vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC)))),32);
        bufp->chgIData(oldp+101,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                  << (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                               >> 6U)))),32);
        bufp->chgIData(oldp+102,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                  >> (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                               >> 6U)))),32);
        bufp->chgIData(oldp+103,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                    >> 6U)))),32);
        bufp->chgBit(oldp+104,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB))))));
        bufp->chgBit(oldp+105,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB))))));
        bufp->chgIData(oldp+106,(((4U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
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
                                       : vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout))),32);
        bufp->chgIData(oldp+107,(((8U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
                                   ? ((4U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                                          & (vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
                                                             >> 7U))))) 
                                           << 8U) | 
                                          (0xffU & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0))
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
                                   : (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA))),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                                 [(1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)]),32);
        bufp->chgCData(oldp+109,((0xffU & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                                           [(1U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                                   >> 0x12U))] 
                                           >> (0x18U 
                                               & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                                  >> 0xdU))))),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+110,((0x3fffffffU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x20U)))),30);
        bufp->chgCData(oldp+111,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll)
                                   ? 0U : (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
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
                                            ? 1U : 
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
                                             ? 2U : 
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
                                              ? 3U : 
                                             (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                                               | (0xcU 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                              >> 0x1aU)))))
                                               ? 4U
                                               : (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
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
                                                          : 0U)))))))))))))),4);
        bufp->chgCData(oldp+112,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType),3);
        bufp->chgCData(oldp+113,(((IData)((0x11ULL 
                                           == (0xfc00003fULL 
                                               & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))
                                   ? 1U : ((IData)(
                                                   (0x13ULL 
                                                    == 
                                                    (0xfc00003fULL 
                                                     & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))
                                            ? 2U : 
                                           (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                             | (IData)(
                                                       (0x19ULL 
                                                        == 
                                                        (0xfc00003fULL 
                                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))
                                             ? 3U : 
                                            (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div) 
                                              | (IData)(
                                                        (0x1bULL 
                                                         == 
                                                         (0xfc00003fULL 
                                                          & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))
                                              ? 4U : 0U))))),3);
        bufp->chgCData(oldp+114,((0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                   >> 0x1aU)))),6);
        bufp->chgCData(oldp+115,((0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),6);
        bufp->chgCData(oldp+116,((0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                   >> 0x15U)))),5);
        bufp->chgCData(oldp+117,((0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                   >> 0x10U)))),5);
        bufp->chgBit(oldp+118,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC));
        bufp->chgBit(oldp+119,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp));
        bufp->chgBit(oldp+120,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR));
        bufp->chgBit(oldp+121,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                   | (0xfU == (0x3fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))))));
        bufp->chgBit(oldp+122,(((8U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                | ((9U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                   | ((0xaU == (0x3fU 
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
                                                  | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs))))))))));
        bufp->chgBit(oldp+123,((IData)((0x40000000ULL 
                                        == (0xffe00000ULL 
                                            & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+124,((IData)((0x40800000ULL 
                                        == (0xffe00000ULL 
                                            & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+125,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                      | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB))))));
        bufp->chgBit(oldp+126,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                | (0xaU == (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU)))))));
        bufp->chgBit(oldp+127,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC));
        bufp->chgBit(oldp+128,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0))));
        bufp->chgBit(oldp+129,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div))));
        bufp->chgBit(oldp+130,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB));
        bufp->chgBit(oldp+131,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB));
        bufp->chgBit(oldp+132,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite));
        bufp->chgBit(oldp+133,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                      | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB) 
                                         | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                            | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC))))))));
        bufp->chgBit(oldp+134,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg));
        bufp->chgBit(oldp+135,(((0x20U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                | ((0x24U == (0x3fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                   | (0x28U == (0x3fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))))));
        bufp->chgBit(oldp+136,(((0x21U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                | ((0x25U == (0x3fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                   | (0x29U == (0x3fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))))));
        bufp->chgBit(oldp+137,(((0x20U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                | (0x21U == (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU)))))));
        bufp->chgBit(oldp+138,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add));
        bufp->chgBit(oldp+139,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub));
        bufp->chgBit(oldp+140,((0xdU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))));
        bufp->chgBit(oldp+141,((4U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+142,((0x2bU == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+143,((0x23U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+144,((0xfU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))));
        bufp->chgBit(oldp+145,((2U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+146,((3U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+147,((IData)((8ULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+148,((8U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+149,((9U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+150,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt));
        bufp->chgBit(oldp+151,((0xaU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))));
        bufp->chgBit(oldp+152,((0x20U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+153,((0x24U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+154,((0x21U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+155,((0x25U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+156,((0x28U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+157,((0x29U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+158,((IData)((0x21ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+159,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu));
        bufp->chgBit(oldp+160,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND));
        bufp->chgBit(oldp+161,((0xcU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))));
        bufp->chgBit(oldp+162,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR));
        bufp->chgBit(oldp+163,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR));
        bufp->chgBit(oldp+164,((0xeU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))));
        bufp->chgBit(oldp+165,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NOR));
        bufp->chgBit(oldp+166,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll));
        bufp->chgBit(oldp+167,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sllv));
        bufp->chgBit(oldp+168,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srl));
        bufp->chgBit(oldp+169,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srlv));
        bufp->chgBit(oldp+170,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sra));
        bufp->chgBit(oldp+171,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srav));
        bufp->chgBit(oldp+172,((5U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+173,((7U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+174,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz));
        bufp->chgBit(oldp+175,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez));
        bufp->chgBit(oldp+176,((6U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+177,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr));
        bufp->chgBit(oldp+178,((IData)((0x11ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+179,((IData)((0x13ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+180,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult));
        bufp->chgBit(oldp+181,((IData)((0x19ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+182,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div));
        bufp->chgBit(oldp+183,((IData)((0x1bULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+184,(((4U == (0x3fU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                | ((5U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                   | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs)))));
        bufp->chgBit(oldp+185,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR));
        bufp->chgBit(oldp+186,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA));
        bufp->chgBit(oldp+187,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR))));
        bufp->chgBit(oldp+188,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e50702c__0) 
                                | ((8U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                   | ((9U == (0x3fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                      | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0))))));
        bufp->chgBit(oldp+189,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                      | ((0xaU == (0x3fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                              >> 0x1aU)))) 
                                         | ((4U == 
                                             (0x3fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                            | (5U == 
                                               (0x3fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU)))))))))));
        bufp->chgBit(oldp+190,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                                | ((0xdU == (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU)))) 
                                   | (0xfU == (0x3fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))))));
        bufp->chgBit(oldp+191,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                                | (0xcU == (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU)))))));
        bufp->chgBit(oldp+192,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
                                | (0xeU == (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU)))))));
        bufp->chgBit(oldp+193,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs));
        bufp->chgBit(oldp+194,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                | (IData)((0x19ULL 
                                           == (0xfc00003fULL 
                                               & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))));
        bufp->chgBit(oldp+195,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div) 
                                | (IData)((0x1bULL 
                                           == (0xfc00003fULL 
                                               & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))));
        bufp->chgIData(oldp+196,((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)),32);
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                                 [(0x1fU & (IData)(
                                                   (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                    >> 0x15U)))]),32);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                                 [(0x1fU & (IData)(
                                                   (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                    >> 0x10U)))]),32);
        bufp->chgSData(oldp+199,((0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),16);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0]),32);
        bufp->chgIData(oldp+201,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[1]),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[2]),32);
        bufp->chgIData(oldp+203,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[3]),32);
        bufp->chgIData(oldp+204,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[4]),32);
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[5]),32);
        bufp->chgIData(oldp+206,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[6]),32);
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[7]),32);
        bufp->chgIData(oldp+208,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[8]),32);
        bufp->chgIData(oldp+209,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[9]),32);
        bufp->chgIData(oldp+210,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[10]),32);
        bufp->chgIData(oldp+211,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[11]),32);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[12]),32);
        bufp->chgIData(oldp+213,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[13]),32);
        bufp->chgIData(oldp+214,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[14]),32);
        bufp->chgIData(oldp+215,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[15]),32);
        bufp->chgIData(oldp+216,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[16]),32);
        bufp->chgIData(oldp+217,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[17]),32);
        bufp->chgIData(oldp+218,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[18]),32);
        bufp->chgIData(oldp+219,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[19]),32);
        bufp->chgIData(oldp+220,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[20]),32);
        bufp->chgIData(oldp+221,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[21]),32);
        bufp->chgIData(oldp+222,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[22]),32);
        bufp->chgIData(oldp+223,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[23]),32);
        bufp->chgIData(oldp+224,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[24]),32);
        bufp->chgIData(oldp+225,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[25]),32);
        bufp->chgIData(oldp+226,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[26]),32);
        bufp->chgIData(oldp+227,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[27]),32);
        bufp->chgIData(oldp+228,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[28]),32);
        bufp->chgIData(oldp+229,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[29]),32);
        bufp->chgIData(oldp+230,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[30]),32);
        bufp->chgIData(oldp+231,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[31]),32);
        bufp->chgIData(oldp+232,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i),32);
        bufp->chgIData(oldp+233,((0x3ffffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),26);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC),30);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr),32);
        bufp->chgBit(oldp+236,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch));
        bufp->chgIData(oldp+237,((0x3fffffffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC 
                                                 << 2U))),30);
        bufp->chgSData(oldp+238,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_CTRL),16);
        bufp->chgCData(oldp+239,(((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                    | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                       | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                          | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB) 
                                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC)))))) 
                                   << 4U) | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                              << 3U) 
                                             | ((((0x20U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                               >> 0x1aU)))) 
                                                  | ((0x24U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                  >> 0x1aU)))) 
                                                     | (0x28U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                                    >> 0x1aU)))))) 
                                                 << 2U) 
                                                | ((((0x21U 
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
                                                                     >> 0x1aU)))))))))),5);
        bufp->chgBit(oldp+240,(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.ID_uncertainJump));
        bufp->chgQData(oldp+241,(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA),62);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgQData(oldp+243,(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0),38);
        bufp->chgIData(oldp+245,((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0)),32);
        bufp->chgCData(oldp+246,((0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                                   >> 0x20U)))),5);
        bufp->chgBit(oldp+247,((1U & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.EX_TO_CP0 
                                              >> 0x25U)))));
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1),32);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd2),32);
        bufp->chgIData(oldp+250,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB),32);
        bufp->chgIData(oldp+251,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC),32);
        bufp->chgBit(oldp+252,((0U == vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC)));
        bufp->chgIData(oldp+253,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1 
                                  + vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB)),32);
        bufp->chgIData(oldp+254,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                      << vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   : 0U)),32);
        bufp->chgIData(oldp+255,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                      >> vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   : 0U)),32);
        bufp->chgIData(oldp+256,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   ? VL_SHIFTRS_III(32,32,32, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   : (- (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                         >> 0x1fU)))),32);
        bufp->chgQData(oldp+257,(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK),38);
        bufp->chgIData(oldp+259,((IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                                          >> 5U))),32);
        bufp->chgCData(oldp+260,((0x1fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK))),5);
        bufp->chgBit(oldp+261,((1U & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_bypass.WB_BACK 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+262,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN));
        bufp->chgBit(oldp+263,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB));
        bufp->chgBit(oldp+264,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB));
        bufp->chgBit(oldp+265,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__WB_EN));
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_instr),32);
        bufp->chgIData(oldp+267,(vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout),32);
        bufp->chgSData(oldp+268,((0xffffU & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0)),16);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[0]),32);
        bufp->chgIData(oldp+270,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[1]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+271,(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.CP0_CTRL),2);
        bufp->chgBit(oldp+272,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.CP0_CTRL) 
                                      >> 1U))));
        bufp->chgBit(oldp+273,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_cp0.CP0_CTRL))));
        bufp->chgBit(oldp+274,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet));
        bufp->chgBit(oldp+275,((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)))));
        bufp->chgBit(oldp+276,(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall));
        bufp->chgCData(oldp+277,((7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                        >> 2U))),3);
        bufp->chgBit(oldp+278,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                      >> 8U))));
        bufp->chgBit(oldp+279,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                      >> 7U))));
        bufp->chgBit(oldp+280,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                      >> 6U))));
        bufp->chgBit(oldp+281,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                      >> 5U))));
        bufp->chgBit(oldp+282,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                      >> 1U))));
        bufp->chgBit(oldp+283,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))));
        bufp->chgIData(oldp+284,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1),32);
        bufp->chgIData(oldp+285,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2),32);
        bufp->chgBit(oldp+286,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail));
        bufp->chgBit(oldp+287,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq));
        bufp->chgBit(oldp+288,((vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                >> 0x1fU)));
        bufp->chgBit(oldp+289,((0U == vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1)));
        bufp->chgBit(oldp+290,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM));
        bufp->chgBit(oldp+291,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB));
        bufp->chgBit(oldp+292,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB))))));
        bufp->chgBit(oldp+293,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM));
        bufp->chgBit(oldp+294,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB));
        bufp->chgBit(oldp+295,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB))))));
        bufp->chgIData(oldp+296,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC),30);
        bufp->chgSData(oldp+297,((0x3fffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC)),14);
        bufp->chgSData(oldp+298,((0x7ffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC 
                                            - (IData)(0x400U)))),11);
        bufp->chgSData(oldp+299,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL),9);
        bufp->chgBit(oldp+300,((IData)(((0U != (0x1e0U 
                                                & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))) 
                                        | (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail)))));
    }
    bufp->chgBit(oldp+301,(vlSelf->clk));
    bufp->chgBit(oldp+302,(vlSelf->rst));
    bufp->chgCData(oldp+303,(vlSelf->led),8);
    bufp->chgCData(oldp+304,(vlSelf->seg7_seg),8);
    bufp->chgCData(oldp+305,(vlSelf->seg7_seg1),8);
    bufp->chgCData(oldp+306,(vlSelf->seg7_select),8);
    bufp->chgIData(oldp+307,(((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))
                               ? (((- (IData)((1U & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0xfU))))) 
                                   << 0x10U) | (0xffffU 
                                                & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))
                               : ((2U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))
                                   ? ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA) 
                                      << 0x10U) : (0xffffU 
                                                   & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))),32);
    bufp->chgIData(oldp+308,((0x3fffffffU & ((0x1060U 
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
                                                                & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))))))))),30);
    bufp->chgBit(oldp+309,((((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL) 
                             >> 3U) & (((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x15U)))) 
                                       | ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x10U))))))));
    bufp->chgBit(oldp+310,(((((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.ID_uncertainJump) 
                              & (IData)((0U != (0x18U 
                                                & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL))))) 
                             & (0U != (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw))) 
                            & (((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw) 
                                == (0x1fU & (IData)(
                                                    (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                     >> 0x15U)))) 
                               | ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw) 
                                  == (0x1fU & (IData)(
                                                      (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                       >> 0x10U))))))));
    bufp->chgBit(oldp+311,((((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.ID_uncertainJump) 
                             & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL) 
                                >> 3U)) & (((0x1fU 
                                             & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[2U]) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x15U)))) 
                                           | ((0x1fU 
                                               & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[2U]) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x10U))))))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
