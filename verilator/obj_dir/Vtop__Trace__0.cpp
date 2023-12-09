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
        bufp->chgQData(oldp+6,(vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM),38);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0),30);
        bufp->chgIData(oldp+9,((1U & ((0xcU == (0x1fU 
                                                & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                   >> 0xbU)))
                                       ? (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                           << 0xaU) 
                                          | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))
                                       : ((0xdU == 
                                           (0x1fU & 
                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                             >> 0xbU)))
                                           ? ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                              << 0xaU)
                                           : ((0xeU 
                                               == (0x1fU 
                                                   & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                      >> 0xbU)))
                                               ? vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0
                                               : ((0xfU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                       >> 0xbU)))
                                                   ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                   : 0U)))))),32);
        bufp->chgBit(oldp+10,(((IData)(vlSelf->top__DOT__HWInt) 
                               & ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                  & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL)) 
                                     & (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE))))));
        bufp->chgCData(oldp+11,((0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                          >> 0xbU))),5);
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 0xeU))));
        bufp->chgBit(oldp+13,((1U & ((0xcU == (0x1fU 
                                               & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                  >> 0xbU)))
                                      ? (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                          << 0xaU) 
                                         | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                             << 1U) 
                                            | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))
                                      : ((0xdU == (0x1fU 
                                                   & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                      >> 0xbU)))
                                          ? ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                             << 0xaU)
                                          : ((0xeU 
                                              == (0x1fU 
                                                  & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                     >> 0xbU)))
                                              ? vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0
                                              : ((0xfU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                      >> 0xbU)))
                                                  ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                  : 0U)))))));
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM),6);
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE));
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend),6);
        bufp->chgIData(oldp+18,((((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                  << 0xaU) | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))),32);
        bufp->chgIData(oldp+19,(((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                 << 0xaU)),32);
        bufp->chgCData(oldp+20,((0xfU & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                         >> 6U))),4);
        bufp->chgCData(oldp+21,((7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                       >> 2U))),3);
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 0xfU))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 0xdU))));
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 0xcU))));
        bufp->chgBit(oldp+25,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 0xbU))));
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 0xaU))));
        bufp->chgBit(oldp+27,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 5U))));
        bufp->chgBit(oldp+28,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                     >> 1U))));
        bufp->chgBit(oldp+29,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))));
        bufp->chgIData(oldp+30,((0x3fffffffU & vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[4U])),30);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U]),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[2U]),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[1U]),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[0U]),32);
        bufp->chgCData(oldp+35,((0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                          >> 6U))),5);
        bufp->chgCData(oldp+36,((0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                          >> 0x15U))),5);
        bufp->chgCData(oldp+37,((0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                          >> 0x10U))),5);
        bufp->chgIData(oldp+38,((IData)((vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM 
                                         >> 5U))),32);
        bufp->chgCData(oldp+39,((0x1fU & (IData)(vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM))),5);
        bufp->chgBit(oldp+40,((1U & (IData)((vlSelf->top__DOT__mips__DOT__MEM_BACK_from_MEM 
                                             >> 0x25U)))));
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN));
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL));
        bufp->chgIData(oldp+45,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]),32);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[0U]),32);
        bufp->chgCData(oldp+47,((0x1fU & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[2U])),5);
        bufp->chgBit(oldp+48,((0x3000U > (0xffffU & 
                                          vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U]))));
        bufp->chgBit(oldp+49,(((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_CTRL) 
                               & (0x3000U > (0xffffU 
                                             & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U])))));
        bufp->chgCData(oldp+50,((3U & vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U])),2);
        bufp->chgSData(oldp+51,((0xfffU & (vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA[1U] 
                                           >> 2U))),12);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea),4);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellout__u_dm_ram__douta),32);
        bufp->chgBit(oldp+54,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                     >> 4U))));
        bufp->chgBit(oldp+55,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                     >> 3U))));
        bufp->chgBit(oldp+56,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                     >> 2U))));
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL) 
                                     >> 1U))));
        bufp->chgBit(oldp+58,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))));
        bufp->chgBit(oldp+59,((0x3000U > (0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA)))));
        bufp->chgCData(oldp+60,((3U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA))),2);
        bufp->chgCData(oldp+61,((0x18U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA) 
                                          << 3U))),5);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr),30);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__u_BRIDGE__DOT__PrWD),32);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE),4);
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__u_BRIDGE__DOT__WeCPU));
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD),32);
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV),4);
        bufp->chgBit(oldp+68,((0x7fU == (0xffffffU 
                                         & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                            >> 6U)))));
        bufp->chgBit(oldp+69,((0x80U == (0xffffffU 
                                         & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                            >> 6U)))));
        bufp->chgBit(oldp+70,((0x81U == (0xffffffU 
                                         & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                            >> 6U)))));
        bufp->chgBit(oldp+71,((1U & ((IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV) 
                                     >> 1U))));
        bufp->chgBit(oldp+72,((1U & (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV))));
        bufp->chgBit(oldp+73,((0U == vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt)));
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt),32);
        bufp->chgBit(oldp+75,((1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)));
        bufp->chgBit(oldp+76,((1U & ((IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV) 
                                     >> 2U))));
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt),19);
        bufp->chgSData(oldp+78,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause),10);
        bufp->chgCData(oldp+79,((7U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                       >> 0x10U))),3);
        bufp->chgCData(oldp+80,((0xffU & (0x80U >> 
                                          (7U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                                 >> 0x10U))))),8);
        bufp->chgCData(oldp+81,(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw),5);
        bufp->chgBit(oldp+82,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL) 
                                     >> 4U))));
        bufp->chgBit(oldp+83,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL) 
                                     >> 3U))));
        bufp->chgBit(oldp+84,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL) 
                                     >> 3U))));
        bufp->chgSData(oldp+85,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL),16);
        bufp->chgBit(oldp+86,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.MEM_CTRL));
        bufp->chgCData(oldp+87,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL),5);
        bufp->chgWData(oldp+88,(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA),158);
        bufp->chgCData(oldp+93,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.WB_CTRL),5);
        bufp->chgWData(oldp+94,(vlSymsp->TOP__top__DOT__mips__DOT__i_ex_mem.MEM_DATA),69);
        bufp->chgCData(oldp+97,(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL),5);
        bufp->chgQData(oldp+98,(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA),37);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+100,(((0x7fU == (0xffffffU 
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
        bufp->chgQData(oldp+101,((((QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL) 
                                                       >> 0xeU)))) 
                                   << 0x25U) | (((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                                     >> 0xbU)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn))))),38);
        bufp->chgIData(oldp+103,(((0x1000U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_CTRL))
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
                                                     : vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC)))),32);
        bufp->chgIData(oldp+104,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                  << (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                               >> 6U)))),32);
        bufp->chgIData(oldp+105,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                  >> (0x1fU & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                               >> 6U)))),32);
        bufp->chgIData(oldp+106,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.EX_DATA[3U] 
                                                    >> 6U)))),32);
        bufp->chgBit(oldp+107,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB))))));
        bufp->chgBit(oldp+108,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB))))));
        bufp->chgIData(oldp+109,(((4U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
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
                                       : (IData)(vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout)))),32);
        bufp->chgIData(oldp+110,(((8U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_CTRL))
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
                                           : (IData)(vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout)))
                                   : (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_mem_wb.WB_DATA))),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                                 [(1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)]),32);
        bufp->chgCData(oldp+112,((0xffU & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                                           [(1U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                                   >> 0x12U))] 
                                           >> (0x18U 
                                               & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                                  >> 0xdU))))),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+113,(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA),62);
        bufp->chgIData(oldp+115,((0x3fffffffU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x20U)))),30);
        bufp->chgIData(oldp+116,((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)),32);
        bufp->chgBit(oldp+117,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC));
        bufp->chgCData(oldp+118,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll)
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
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType),3);
        bufp->chgCData(oldp+120,(((IData)((0x11ULL 
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
        bufp->chgCData(oldp+121,((0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                   >> 0x1aU)))),6);
        bufp->chgCData(oldp+122,((0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),6);
        bufp->chgCData(oldp+123,((0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                   >> 0x15U)))),5);
        bufp->chgCData(oldp+124,((0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                   >> 0x10U)))),5);
        bufp->chgBit(oldp+125,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp));
        bufp->chgBit(oldp+126,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR));
        bufp->chgBit(oldp+127,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                   | (0xfU == (0x3fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))))));
        bufp->chgBit(oldp+128,(((8U == (0x3fU & (IData)(
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
                                            | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch))))))));
        bufp->chgBit(oldp+129,((IData)((0x40000000ULL 
                                        == (0xffe00000ULL 
                                            & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+130,((IData)((0x40800000ULL 
                                        == (0xffe00000ULL 
                                            & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+131,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                      | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB))))));
        bufp->chgBit(oldp+132,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                | (0xaU == (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU)))))));
        bufp->chgBit(oldp+133,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC));
        bufp->chgBit(oldp+134,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0))));
        bufp->chgBit(oldp+135,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div))));
        bufp->chgBit(oldp+136,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB));
        bufp->chgBit(oldp+137,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB));
        bufp->chgBit(oldp+138,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite));
        bufp->chgBit(oldp+139,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                      | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB) 
                                         | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                            | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC))))))));
        bufp->chgBit(oldp+140,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg));
        bufp->chgBit(oldp+141,(((0x20U == (0x3fU & (IData)(
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
        bufp->chgBit(oldp+142,(((0x21U == (0x3fU & (IData)(
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
        bufp->chgBit(oldp+143,(((0x20U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                | (0x21U == (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU)))))));
        bufp->chgBit(oldp+144,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add));
        bufp->chgBit(oldp+145,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub));
        bufp->chgBit(oldp+146,((0xdU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))));
        bufp->chgBit(oldp+147,((4U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+148,((0x2bU == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+149,((0x23U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+150,((0xfU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))));
        bufp->chgBit(oldp+151,((2U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+152,((3U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+153,((IData)((8ULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+154,((8U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+155,((9U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+156,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt));
        bufp->chgBit(oldp+157,((0xaU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))));
        bufp->chgBit(oldp+158,((0x20U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+159,((0x24U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+160,((0x21U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+161,((0x25U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+162,((0x28U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+163,((0x29U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+164,((IData)((0x21ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+165,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu));
        bufp->chgBit(oldp+166,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND));
        bufp->chgBit(oldp+167,((0xcU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))));
        bufp->chgBit(oldp+168,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR));
        bufp->chgBit(oldp+169,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR));
        bufp->chgBit(oldp+170,((0xeU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))));
        bufp->chgBit(oldp+171,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NOR));
        bufp->chgBit(oldp+172,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll));
        bufp->chgBit(oldp+173,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sllv));
        bufp->chgBit(oldp+174,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srl));
        bufp->chgBit(oldp+175,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srlv));
        bufp->chgBit(oldp+176,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sra));
        bufp->chgBit(oldp+177,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srav));
        bufp->chgBit(oldp+178,((5U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+179,((7U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+180,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz));
        bufp->chgBit(oldp+181,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez));
        bufp->chgBit(oldp+182,((6U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+183,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr));
        bufp->chgBit(oldp+184,((IData)((0x11ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+185,((IData)((0x13ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+186,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult));
        bufp->chgBit(oldp+187,((IData)((0x19ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+188,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div));
        bufp->chgBit(oldp+189,((IData)((0x1bULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+190,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch));
        bufp->chgBit(oldp+191,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR));
        bufp->chgBit(oldp+192,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA));
        bufp->chgBit(oldp+193,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR))));
        bufp->chgBit(oldp+194,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e50702c__0) 
                                | ((8U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                   | ((9U == (0x3fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                      | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0))))));
        bufp->chgBit(oldp+195,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
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
        bufp->chgBit(oldp+196,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                                | ((0xdU == (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU)))) 
                                   | (0xfU == (0x3fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))))));
        bufp->chgBit(oldp+197,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                                | (0xcU == (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU)))))));
        bufp->chgBit(oldp+198,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
                                | (0xeU == (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU)))))));
        bufp->chgBit(oldp+199,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs));
        bufp->chgBit(oldp+200,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                | (IData)((0x19ULL 
                                           == (0xfc00003fULL 
                                               & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))));
        bufp->chgBit(oldp+201,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div) 
                                | (IData)((0x1bULL 
                                           == (0xfc00003fULL 
                                               & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))));
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                                 [(0x1fU & (IData)(
                                                   (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                    >> 0x15U)))]),32);
        bufp->chgIData(oldp+203,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                                 [(0x1fU & (IData)(
                                                   (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                    >> 0x10U)))]),32);
        bufp->chgSData(oldp+204,((0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),16);
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0]),32);
        bufp->chgIData(oldp+206,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[1]),32);
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[2]),32);
        bufp->chgIData(oldp+208,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[3]),32);
        bufp->chgIData(oldp+209,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[4]),32);
        bufp->chgIData(oldp+210,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[5]),32);
        bufp->chgIData(oldp+211,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[6]),32);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[7]),32);
        bufp->chgIData(oldp+213,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[8]),32);
        bufp->chgIData(oldp+214,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[9]),32);
        bufp->chgIData(oldp+215,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[10]),32);
        bufp->chgIData(oldp+216,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[11]),32);
        bufp->chgIData(oldp+217,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[12]),32);
        bufp->chgIData(oldp+218,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[13]),32);
        bufp->chgIData(oldp+219,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[14]),32);
        bufp->chgIData(oldp+220,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[15]),32);
        bufp->chgIData(oldp+221,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[16]),32);
        bufp->chgIData(oldp+222,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[17]),32);
        bufp->chgIData(oldp+223,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[18]),32);
        bufp->chgIData(oldp+224,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[19]),32);
        bufp->chgIData(oldp+225,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[20]),32);
        bufp->chgIData(oldp+226,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[21]),32);
        bufp->chgIData(oldp+227,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[22]),32);
        bufp->chgIData(oldp+228,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[23]),32);
        bufp->chgIData(oldp+229,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[24]),32);
        bufp->chgIData(oldp+230,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[25]),32);
        bufp->chgIData(oldp+231,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[26]),32);
        bufp->chgIData(oldp+232,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[27]),32);
        bufp->chgIData(oldp+233,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[28]),32);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[29]),32);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[30]),32);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[31]),32);
        bufp->chgIData(oldp+237,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i),32);
        bufp->chgIData(oldp+238,((0x3ffffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),26);
        bufp->chgIData(oldp+239,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC),30);
        bufp->chgIData(oldp+240,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr),32);
        bufp->chgBit(oldp+241,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch));
        bufp->chgIData(oldp+242,((0x3fffffffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC 
                                                 << 2U))),30);
        bufp->chgSData(oldp+243,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_CTRL),16);
        bufp->chgCData(oldp+244,(((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
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
        bufp->chgBit(oldp+245,(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.ID_uncertainJump));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgQData(oldp+246,(vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB),38);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn),32);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1),32);
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
        bufp->chgIData(oldp+257,((IData)((vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB 
                                          >> 5U))),32);
        bufp->chgCData(oldp+258,((0x1fU & (IData)(vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB))),5);
        bufp->chgBit(oldp+259,((1U & (IData)((vlSelf->top__DOT__mips__DOT__WB_BACK_from_WB 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+260,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN));
        bufp->chgBit(oldp+261,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB));
        bufp->chgBit(oldp+262,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB));
        bufp->chgIData(oldp+263,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_instr),32);
        bufp->chgBit(oldp+264,(vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout));
        bufp->chgIData(oldp+265,(vlSelf->top__DOT__mips__DOT__u_WB__DOT__MEMout),32);
        bufp->chgSData(oldp+266,((0xffffU & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0)),16);
        bufp->chgIData(oldp+267,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[0]),32);
        bufp->chgIData(oldp+268,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[1]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+269,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__IF_FLUSH));
        bufp->chgBit(oldp+270,((1U & (~ (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall)))));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.stall));
        bufp->chgCData(oldp+272,((7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                        >> 2U))),3);
        bufp->chgBit(oldp+273,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                      >> 8U))));
        bufp->chgBit(oldp+274,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                      >> 7U))));
        bufp->chgBit(oldp+275,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                      >> 6U))));
        bufp->chgBit(oldp+276,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                      >> 5U))));
        bufp->chgBit(oldp+277,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                      >> 1U))));
        bufp->chgBit(oldp+278,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))));
        bufp->chgIData(oldp+279,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1),32);
        bufp->chgIData(oldp+280,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2),32);
        bufp->chgBit(oldp+281,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail));
        bufp->chgBit(oldp+282,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq));
        bufp->chgBit(oldp+283,((vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                >> 0x1fU)));
        bufp->chgBit(oldp+284,((0U == vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1)));
        bufp->chgBit(oldp+285,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM));
        bufp->chgBit(oldp+286,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB));
        bufp->chgBit(oldp+287,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB))))));
        bufp->chgBit(oldp+288,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM));
        bufp->chgBit(oldp+289,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB));
        bufp->chgBit(oldp+290,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB))))));
        bufp->chgIData(oldp+291,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC),30);
        bufp->chgSData(oldp+292,((0x3fffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC)),14);
        bufp->chgSData(oldp+293,((0x7ffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC 
                                            - (IData)(0x400U)))),11);
        bufp->chgSData(oldp+294,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL),9);
        bufp->chgBit(oldp+295,((IData)(((0U != (0x1e0U 
                                                & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))) 
                                        | (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail)))));
    }
    bufp->chgBit(oldp+296,(vlSelf->clk));
    bufp->chgBit(oldp+297,(vlSelf->rst));
    bufp->chgCData(oldp+298,(vlSelf->led),8);
    bufp->chgCData(oldp+299,(vlSelf->seg7_seg),8);
    bufp->chgCData(oldp+300,(vlSelf->seg7_seg1),8);
    bufp->chgCData(oldp+301,(vlSelf->seg7_select),8);
    bufp->chgCData(oldp+302,((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__IF_FLUSH) 
                               << 1U) | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC))),2);
    bufp->chgIData(oldp+303,(((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))
                               ? (((- (IData)((1U & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0xfU))))) 
                                   << 0x10U) | (0xffffU 
                                                & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))
                               : ((2U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))
                                   ? ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA) 
                                      << 0x10U) : (0xffffU 
                                                   & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))),32);
    bufp->chgIData(oldp+304,((0x3fffffffU & ((0x1060U 
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
                                                                & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))))))))),30);
    bufp->chgBit(oldp+305,((((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_id_ex.WB_CTRL) 
                             >> 3U) & (((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x15U)))) 
                                       | ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.EX_rw) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x10U))))))));
    bufp->chgBit(oldp+306,(((((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.ID_uncertainJump) 
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
    bufp->chgBit(oldp+307,((((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_stallDetect.ID_uncertainJump) 
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
