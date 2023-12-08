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
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(((0x7fU == (0xffffffU 
                                           & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                              >> 6U)))
                                 ? vlSelf->top__DOT__u_BRIDGE__DOT__DEV0_RD
                                 : ((0x80U == (0xffffffU 
                                               & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                  >> 6U)))
                                     ? vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD
                                     : ((0x81U == (0xffffffU 
                                                   & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                                      >> 6U)))
                                         ? vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                                        [(1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)]
                                         : 0U)))),32);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__HWInt),6);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_EX));
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__Dout),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr),30);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__u_BRIDGE__DOT__PrWD),32);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__u_BRIDGE__DOT__PrBE),4);
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__u_BRIDGE__DOT__WeCPU));
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__u_BRIDGE__DOT__DEV1_RD),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                                [(1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)]),32);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV),4);
        bufp->chgBit(oldp+13,((0x7fU == (0xffffffU 
                                         & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                            >> 6U)))));
        bufp->chgBit(oldp+14,((0x80U == (0xffffffU 
                                         & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                            >> 6U)))));
        bufp->chgBit(oldp+15,((0x81U == (0xffffffU 
                                         & (vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr 
                                            >> 6U)))));
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV) 
                                     >> 1U))));
        bufp->chgBit(oldp+17,((1U & (IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV))));
        bufp->chgBit(oldp+18,((0U == vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt)));
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__u_BRIDGE__DOT__u_counter__DOT__cnt),32);
        bufp->chgBit(oldp+20,((1U & vlSelf->top__DOT__u_BRIDGE__DOT__PrAddr)));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->top__DOT__u_BRIDGE__DOT__WeDEV) 
                                     >> 2U))));
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[0]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram[1]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt),19);
        bufp->chgSData(oldp+25,(vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__pause),10);
        bufp->chgCData(oldp+26,((7U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                       >> 0x10U))),3);
        bufp->chgCData(oldp+27,((0xffU & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__ram
                                          [(1U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                                  >> 0x12U))] 
                                          >> (0x18U 
                                              & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                                 >> 0xdU))))),8);
        bufp->chgCData(oldp+28,((0xffU & (0x80U >> 
                                          (7U & (vlSelf->top__DOT__u_BRIDGE__DOT__u_seg7__DOT__cnt 
                                                 >> 0x10U))))),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+29,(((0x3000U <= (0xffffU 
                                            & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr)) 
                               & (IData)(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID))));
        __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn))));
        __Vtemp_2[1U] = (IData)(((((QData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn))) 
                                 >> 0x20U));
        __Vtemp_2[2U] = ((6U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID)) 
                         | (IData)(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID));
        bufp->chgWData(oldp+30,(__Vtemp_2),67);
        bufp->chgBit(oldp+33,(((IData)(vlSelf->top__DOT__HWInt) 
                               & ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                  & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL)) 
                                     & (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE))))));
        bufp->chgBit(oldp+34,(((IData)(vlSelf->top__DOT__mips__DOT__MEM_CTRL_from_ID) 
                               & (0x3000U > (0xffffU 
                                             & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[0]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[1]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[2]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[3]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[4]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[5]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[6]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[7]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[8]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[9]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[10]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[11]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[12]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[13]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[14]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[15]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[16]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[17]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[18]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[19]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[20]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[21]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[22]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[23]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[24]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[25]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[26]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[27]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[28]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[29]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[30]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register[31]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+68,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                 >> 2U)),30);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__PrWD),32);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT__PrBE),4);
        bufp->chgWData(oldp+71,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID),158);
        bufp->chgSData(oldp+76,(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID),16);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID),5);
        bufp->chgCData(oldp+78,(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX),5);
        bufp->chgWData(oldp+79,(vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX),69);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX),5);
        bufp->chgQData(oldp+83,((((QData)((IData)((1U 
                                                   & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                                      >> 0xeU)))) 
                                  << 0x25U) | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                                    >> 0xbU)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn))))),38);
        bufp->chgCData(oldp+85,(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM),5);
        bufp->chgWData(oldp+86,(vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM),69);
        bufp->chgQData(oldp+89,((((QData)((IData)((1U 
                                                   & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                                      >> 4U)))) 
                                  << 0x25U) | (((QData)((IData)(
                                                                vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U])) 
                                                << 5U) 
                                               | (QData)((IData)(
                                                                 (0x1fU 
                                                                  & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])))))),38);
        bufp->chgQData(oldp+91,((((QData)((IData)((1U 
                                                   & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                                      >> 4U)))) 
                                  << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd)) 
                                                << 5U) 
                                               | (QData)((IData)(
                                                                 (0x1fU 
                                                                  & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U])))))),38);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0),30);
        bufp->chgIData(oldp+94,((1U & ((0xcU == (0x1fU 
                                                 & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                    >> 0xbU)))
                                        ? (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                            << 0xaU) 
                                           | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))
                                        : ((0xdU == 
                                            (0x1fU 
                                             & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                >> 0xbU)))
                                            ? ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                               << 0xaU)
                                            : ((0xeU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                    >> 0xbU)))
                                                ? vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0
                                                : (
                                                   (0xfU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                        >> 0xbU)))
                                                    ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                    : 0U)))))),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn),32);
        bufp->chgCData(oldp+96,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                          >> 0xbU))),5);
        bufp->chgBit(oldp+97,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                     >> 0xeU))));
        bufp->chgBit(oldp+98,((1U & ((0xcU == (0x1fU 
                                               & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                  >> 0xbU)))
                                      ? (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                          << 0xaU) 
                                         | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                             << 1U) 
                                            | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))
                                      : ((0xdU == (0x1fU 
                                                   & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                      >> 0xbU)))
                                          ? ((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                             << 0xaU)
                                          : ((0xeU 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                     >> 0xbU)))
                                              ? vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0
                                              : ((0xfU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                      >> 0xbU)))
                                                  ? vlSelf->top__DOT__mips__DOT__u_CP0__DOT__PrID
                                                  : 0U)))))));
        bufp->chgCData(oldp+99,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM),6);
        bufp->chgBit(oldp+100,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL));
        bufp->chgBit(oldp+101,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE));
        bufp->chgCData(oldp+102,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend),6);
        bufp->chgIData(oldp+103,((((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                   << 0xaU) | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                                << 1U) 
                                               | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))),32);
        bufp->chgIData(oldp+104,(((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                  << 0xaU)),32);
        bufp->chgCData(oldp+105,((0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                          >> 6U))),4);
        bufp->chgCData(oldp+106,((7U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                        >> 2U))),3);
        bufp->chgBit(oldp+107,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+108,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+109,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+110,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+111,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+112,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                      >> 5U))));
        bufp->chgBit(oldp+113,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                      >> 1U))));
        bufp->chgBit(oldp+114,((1U & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))));
        bufp->chgIData(oldp+115,((0x3fffffffU & vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[4U])),30);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[2U]),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[1U]),32);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[0U]),32);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC),32);
        bufp->chgIData(oldp+123,(((0x1000U & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
                                   ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC 
                                      >> 0x1fU) : (
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
                                                     : vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC)))),32);
        bufp->chgBit(oldp+124,((0U == vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC)));
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr),32);
        bufp->chgCData(oldp+126,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                           >> 6U))),5);
        bufp->chgIData(oldp+127,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                  << (0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                               >> 6U)))),32);
        bufp->chgIData(oldp+128,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                  >> (0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                               >> 6U)))),32);
        bufp->chgIData(oldp+129,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                    >> 6U)))),32);
        bufp->chgIData(oldp+130,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                      << vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   : 0U)),32);
        bufp->chgIData(oldp+131,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                      >> vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   : 0U)),32);
        bufp->chgIData(oldp+132,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   ? VL_SHIFTRS_III(32,32,32, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   : (- (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                         >> 0x1fU)))),32);
        bufp->chgCData(oldp+133,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                           >> 0x15U))),5);
        bufp->chgCData(oldp+134,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                           >> 0x10U))),5);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U]),32);
        bufp->chgCData(oldp+137,((0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U])),5);
        bufp->chgCData(oldp+138,((0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])),5);
        bufp->chgBit(oldp+139,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                      >> 4U))));
        bufp->chgBit(oldp+140,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                      >> 4U))));
        bufp->chgBit(oldp+141,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN));
        bufp->chgBit(oldp+142,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN));
        bufp->chgBit(oldp+143,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM));
        bufp->chgBit(oldp+144,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB));
        bufp->chgBit(oldp+145,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB))))));
        bufp->chgBit(oldp+146,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM));
        bufp->chgBit(oldp+147,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB));
        bufp->chgBit(oldp+148,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB))))));
        bufp->chgBit(oldp+149,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                      >> 3U))));
        bufp->chgBit(oldp+150,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                      >> 4U))));
        bufp->chgBit(oldp+151,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                      >> 3U))));
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[0U]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__MEMout),32);
        bufp->chgBit(oldp+154,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                      >> 2U))));
        bufp->chgBit(oldp+155,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                      >> 1U))));
        bufp->chgBit(oldp+156,((0x3000U > (0xffffU 
                                           & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr))));
        bufp->chgBit(oldp+157,((0x3000U > (0xffffU 
                                           & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U]))));
        bufp->chgCData(oldp+158,((3U & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr)),2);
        bufp->chgSData(oldp+159,((0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                            >> 2U))),12);
        bufp->chgCData(oldp+160,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea),4);
        bufp->chgBit(oldp+161,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                      >> 3U))));
        bufp->chgBit(oldp+162,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                      >> 2U))));
        bufp->chgBit(oldp+163,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                      >> 1U))));
        bufp->chgBit(oldp+164,((1U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM))));
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U]),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[0U]),32);
        bufp->chgIData(oldp+167,(((4U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM))
                                   ? (((- (IData)((1U 
                                                   & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                                      & (vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
                                                         >> 7U))))) 
                                       << 8U) | (0xffU 
                                                 & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0))
                                   : ((2U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                                          & (vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0 
                                                             >> 0xfU))))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0))
                                       : vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[0U]))),32);
        bufp->chgCData(oldp+168,((3U & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U])),2);
        bufp->chgSData(oldp+169,((0xffffU & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0)),16);
        bufp->chgCData(oldp+170,((0x18U & (vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U] 
                                           << 3U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgQData(oldp+171,((((QData)((IData)(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))),62);
        bufp->chgSData(oldp+173,((((IData)((0x40000000U 
                                            == (0xffe00000U 
                                                & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))) 
                                   << 0xfU) | (((IData)(
                                                        (0x40800000U 
                                                         == 
                                                         (0xffe00000U 
                                                          & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))) 
                                                << 0xeU) 
                                               | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
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
                                                                       | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB)))))))))))),16);
        bufp->chgBit(oldp+174,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite));
        bufp->chgCData(oldp+175,(((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                    | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                       | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                          | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB) 
                                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC)))))) 
                                   << 4U) | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                              << 3U) 
                                             | ((((0x20U 
                                                   == 
                                                   (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                    >> 0x1aU)) 
                                                  | ((0x24U 
                                                      == 
                                                      (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                       >> 0x1aU)) 
                                                     | (0x28U 
                                                        == 
                                                        (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                         >> 0x1aU)))) 
                                                 << 2U) 
                                                | ((((0x21U 
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
                                                          >> 0x1aU)))))))),5);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC),30);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr),32);
        bufp->chgBit(oldp+178,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__o_uncertainJump));
        bufp->chgBit(oldp+179,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC));
        bufp->chgCData(oldp+180,((vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                  >> 0x1aU)),6);
        bufp->chgCData(oldp+181,((0x3fU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)),6);
        bufp->chgCData(oldp+182,((0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                           >> 0x15U))),5);
        bufp->chgCData(oldp+183,((0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                           >> 0x10U))),5);
        bufp->chgCData(oldp+184,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll)
                                   ? 0U : (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                                            | ((0xdU 
                                                == 
                                                (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                 >> 0x1aU)) 
                                               | (0xfU 
                                                  == 
                                                  (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                   >> 0x1aU))))
                                            ? 1U : 
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
                                             ? 2U : 
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
                                              ? 3U : 
                                             (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                                               | (0xcU 
                                                  == 
                                                  (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                   >> 0x1aU)))
                                               ? 4U
                                               : (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
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
                                                          : 0U)))))))))))))),4);
        bufp->chgCData(oldp+185,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType),3);
        bufp->chgCData(oldp+186,(((IData)((0x11U == 
                                           (0xfc00003fU 
                                            & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))
                                   ? 1U : ((IData)(
                                                   (0x13U 
                                                    == 
                                                    (0xfc00003fU 
                                                     & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))
                                            ? 2U : 
                                           (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                             | (IData)(
                                                       (0x19U 
                                                        == 
                                                        (0xfc00003fU 
                                                         & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))))
                                             ? 3U : 
                                            (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div) 
                                              | (IData)(
                                                        (0x1bU 
                                                         == 
                                                         (0xfc00003fU 
                                                          & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))))
                                              ? 4U : 0U))))),3);
        bufp->chgBit(oldp+187,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp));
        bufp->chgBit(oldp+188,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR));
        bufp->chgBit(oldp+189,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                   | (0xfU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                               >> 0x1aU))))));
        bufp->chgBit(oldp+190,(((8U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                        >> 0x1aU)) 
                                | ((9U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                           >> 0x1aU)) 
                                   | ((0xaU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                >> 0x1aU)) 
                                      | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                         | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite) 
                                            | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch))))))));
        bufp->chgBit(oldp+191,((IData)((0x40000000U 
                                        == (0xffe00000U 
                                            & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
        bufp->chgBit(oldp+192,((IData)((0x40800000U 
                                        == (0xffe00000U 
                                            & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
        bufp->chgBit(oldp+193,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                      | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB))))));
        bufp->chgBit(oldp+194,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                | (0xaU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                            >> 0x1aU)))));
        bufp->chgBit(oldp+195,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC));
        bufp->chgBit(oldp+196,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1fabfdd5__0))));
        bufp->chgBit(oldp+197,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div))));
        bufp->chgBit(oldp+198,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB));
        bufp->chgBit(oldp+199,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB));
        bufp->chgBit(oldp+200,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                      | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB) 
                                         | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                            | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC))))))));
        bufp->chgBit(oldp+201,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg));
        bufp->chgBit(oldp+202,(((0x20U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                           >> 0x1aU)) 
                                | ((0x24U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                              >> 0x1aU)) 
                                   | (0x28U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                >> 0x1aU))))));
        bufp->chgBit(oldp+203,(((0x21U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                           >> 0x1aU)) 
                                | ((0x25U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                              >> 0x1aU)) 
                                   | (0x29U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                >> 0x1aU))))));
        bufp->chgBit(oldp+204,(((0x20U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                           >> 0x1aU)) 
                                | (0x21U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                             >> 0x1aU)))));
        bufp->chgBit(oldp+205,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add));
        bufp->chgBit(oldp+206,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub));
        bufp->chgBit(oldp+207,((0xdU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                         >> 0x1aU))));
        bufp->chgBit(oldp+208,((4U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+209,((0x2bU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                          >> 0x1aU))));
        bufp->chgBit(oldp+210,((0x23U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                          >> 0x1aU))));
        bufp->chgBit(oldp+211,((0xfU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                         >> 0x1aU))));
        bufp->chgBit(oldp+212,((2U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+213,((3U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+214,((IData)((8U == (0xfc00003fU 
                                               & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
        bufp->chgBit(oldp+215,((8U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+216,((9U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+217,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt));
        bufp->chgBit(oldp+218,((0xaU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                         >> 0x1aU))));
        bufp->chgBit(oldp+219,((0x20U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                          >> 0x1aU))));
        bufp->chgBit(oldp+220,((0x24U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                          >> 0x1aU))));
        bufp->chgBit(oldp+221,((0x21U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                          >> 0x1aU))));
        bufp->chgBit(oldp+222,((0x25U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                          >> 0x1aU))));
        bufp->chgBit(oldp+223,((0x28U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                          >> 0x1aU))));
        bufp->chgBit(oldp+224,((0x29U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                          >> 0x1aU))));
        bufp->chgBit(oldp+225,((IData)((0x21U == (0xfc00003fU 
                                                  & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
        bufp->chgBit(oldp+226,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu));
        bufp->chgBit(oldp+227,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND));
        bufp->chgBit(oldp+228,((0xcU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                         >> 0x1aU))));
        bufp->chgBit(oldp+229,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR));
        bufp->chgBit(oldp+230,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR));
        bufp->chgBit(oldp+231,((0xeU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                         >> 0x1aU))));
        bufp->chgBit(oldp+232,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NOR));
        bufp->chgBit(oldp+233,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll));
        bufp->chgBit(oldp+234,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sllv));
        bufp->chgBit(oldp+235,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srl));
        bufp->chgBit(oldp+236,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srlv));
        bufp->chgBit(oldp+237,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sra));
        bufp->chgBit(oldp+238,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srav));
        bufp->chgBit(oldp+239,((5U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+240,((7U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+241,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz));
        bufp->chgBit(oldp+242,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez));
        bufp->chgBit(oldp+243,((6U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+244,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr));
        bufp->chgBit(oldp+245,((IData)((0x11U == (0xfc00003fU 
                                                  & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
        bufp->chgBit(oldp+246,((IData)((0x13U == (0xfc00003fU 
                                                  & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
        bufp->chgBit(oldp+247,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult));
        bufp->chgBit(oldp+248,((IData)((0x19U == (0xfc00003fU 
                                                  & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
        bufp->chgBit(oldp+249,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div));
        bufp->chgBit(oldp+250,((IData)((0x1bU == (0xfc00003fU 
                                                  & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))));
        bufp->chgBit(oldp+251,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch));
        bufp->chgBit(oldp+252,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR));
        bufp->chgBit(oldp+253,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA));
        bufp->chgBit(oldp+254,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR))));
        bufp->chgBit(oldp+255,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e7f6188__0) 
                                | ((8U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                           >> 0x1aU)) 
                                   | ((9U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                              >> 0x1aU)) 
                                      | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1fabfdd5__0))))));
        bufp->chgBit(oldp+256,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                      | ((0xaU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                   >> 0x1aU)) 
                                         | ((4U == 
                                             (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                              >> 0x1aU)) 
                                            | (5U == 
                                               (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                >> 0x1aU)))))))));
        bufp->chgBit(oldp+257,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                                | ((0xdU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                             >> 0x1aU)) 
                                   | (0xfU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                               >> 0x1aU))))));
        bufp->chgBit(oldp+258,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                                | (0xcU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                            >> 0x1aU)))));
        bufp->chgBit(oldp+259,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
                                | (0xeU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                            >> 0x1aU)))));
        bufp->chgBit(oldp+260,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs));
        bufp->chgBit(oldp+261,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                | (IData)((0x19U == 
                                           (0xfc00003fU 
                                            & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))))));
        bufp->chgBit(oldp+262,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div) 
                                | (IData)((0x1bU == 
                                           (0xfc00003fU 
                                            & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))))));
        bufp->chgIData(oldp+263,((((8U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                           >> 0x1aU)) 
                                   | ((9U == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                              >> 0x1aU)) 
                                      | ((0xaU == (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                   >> 0x1aU)) 
                                         | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                            | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite) 
                                               | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch))))))
                                   ? (((- (IData)((1U 
                                                   & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                      >> 0xfU)))) 
                                       << 0x10U) | 
                                      (0xffffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr))
                                   : (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
                                       | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                          | (0xfU == 
                                             (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                              >> 0x1aU))))
                                       ? (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                          << 0x10U)
                                       : (0xffffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))),32);
        bufp->chgSData(oldp+264,((0xffffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)),16);
        bufp->chgIData(oldp+265,((0x3ffffffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)),26);
        bufp->chgBit(oldp+266,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch));
        bufp->chgIData(oldp+267,((0x3fffffffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC 
                                                 << 2U))),30);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+268,(vlSelf->top__DOT__mips__DOT__pipeline_stall));
        bufp->chgBit(oldp+269,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet));
        bufp->chgIData(oldp+270,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1),32);
        bufp->chgIData(oldp+271,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2),32);
        bufp->chgBit(oldp+272,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail));
        bufp->chgBit(oldp+273,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq));
        bufp->chgBit(oldp+274,((vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                >> 0x1fU)));
        bufp->chgBit(oldp+275,((0U == vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1)));
        bufp->chgBit(oldp+276,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM));
        bufp->chgBit(oldp+277,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB));
        bufp->chgBit(oldp+278,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB))))));
        bufp->chgBit(oldp+279,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM));
        bufp->chgBit(oldp+280,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB));
        bufp->chgBit(oldp+281,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB))))));
        bufp->chgIData(oldp+282,((0x3fffffffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT____VdfgTmp_h52d3c299__0)),30);
        bufp->chgBit(oldp+283,((1U & (~ (IData)(vlSelf->top__DOT__mips__DOT__pipeline_stall)))));
        bufp->chgSData(oldp+284,((0x3fffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT____VdfgTmp_h52d3c299__0)),14);
        bufp->chgSData(oldp+285,((0x7ffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT____VdfgTmp_h52d3c299__0 
                                            - (IData)(0x400U)))),11);
    }
    bufp->chgBit(oldp+286,(vlSelf->clk));
    bufp->chgBit(oldp+287,(vlSelf->rst));
    bufp->chgCData(oldp+288,(vlSelf->led),8);
    bufp->chgCData(oldp+289,(vlSelf->seg7_seg),8);
    bufp->chgCData(oldp+290,(vlSelf->seg7_seg1),8);
    bufp->chgCData(oldp+291,(vlSelf->seg7_select),8);
    bufp->chgSData(oldp+292,((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC) 
                               << 8U) | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) 
                                          << 7U) | 
                                         (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
                                            << 5U) 
                                           | (((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType) 
                                               << 2U) 
                                              | ((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
                                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                                      | (0xfU 
                                                         == 
                                                         (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                          >> 0x1aU)))) 
                                                  << 1U) 
                                                 | ((8U 
                                                     == 
                                                     (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                      >> 0x1aU)) 
                                                    | ((9U 
                                                        == 
                                                        (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                         >> 0x1aU)) 
                                                       | ((0xaU 
                                                           == 
                                                           (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                            >> 0x1aU)) 
                                                          | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                                             | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite) 
                                                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch))))))))))))),9);
    bufp->chgCData(oldp+293,((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) 
                               << 1U) | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC))),2);
    bufp->chgIData(oldp+294,((0x3fffffffU & ((0x1060U 
                                              & (- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet)))) 
                                             | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC))) 
                                                 & vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0) 
                                                | (((- (IData)((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR))) 
                                                    & (vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                                       >> 2U)) 
                                                   | ((0x3ffffffU 
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
                                                                & vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr)))))))))),30);
    bufp->chgBit(oldp+295,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ExlSet) 
                            | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC) 
                               | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR) 
                                  | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                                     | (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail)))))));
    bufp->chgBit(oldp+296,((((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                             >> 3U) & (IData)(vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0))));
    bufp->chgBit(oldp+297,(((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__o_uncertainJump) 
                            & ((IData)((0U != (0x18U 
                                               & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID)))) 
                               & ((0U != (IData)(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX)) 
                                  & (IData)(vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0))))));
    bufp->chgBit(oldp+298,(((IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__o_uncertainJump) 
                            & (((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                >> 3U) & (((0x1fU & 
                                            (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                             >> 0x15U)) 
                                           == (0x1fU 
                                               & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])) 
                                          | ((0x1fU 
                                              & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])))))));
    bufp->chgIData(oldp+299,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                             [(0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                        >> 0x15U))]),32);
    bufp->chgIData(oldp+300,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                             [(0x1fU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr 
                                        >> 0x10U))]),32);
    bufp->chgIData(oldp+301,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_instr),32);
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
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
