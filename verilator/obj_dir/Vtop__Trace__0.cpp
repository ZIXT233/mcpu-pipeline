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
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC),30);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__ID_instr),32);
        bufp->chgBit(oldp+70,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__firstFetch));
        bufp->chgIData(oldp+71,((0x3fffffffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_PC 
                                                << 2U))),30);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+72,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                 >> 2U)),30);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__PrWD),32);
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__PrBE),4);
        bufp->chgWData(oldp+75,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID),158);
        bufp->chgSData(oldp+80,(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID),16);
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID),5);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX),5);
        bufp->chgWData(oldp+83,(vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX),69);
        bufp->chgCData(oldp+86,(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX),5);
        bufp->chgQData(oldp+87,((((QData)((IData)((1U 
                                                   & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                                      >> 0xeU)))) 
                                  << 0x25U) | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                                    >> 0xbU)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn))))),38);
        bufp->chgCData(oldp+89,(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM),5);
        bufp->chgWData(oldp+90,(vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM),69);
        bufp->chgQData(oldp+93,((((QData)((IData)((1U 
                                                   & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                                      >> 4U)))) 
                                  << 0x25U) | (((QData)((IData)(
                                                                vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U])) 
                                                << 5U) 
                                               | (QData)((IData)(
                                                                 (0x1fU 
                                                                  & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])))))),38);
        bufp->chgQData(oldp+95,((((QData)((IData)((1U 
                                                   & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                                      >> 4U)))) 
                                  << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd)) 
                                                << 5U) 
                                               | (QData)((IData)(
                                                                 (0x1fU 
                                                                  & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U])))))),38);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__mips__DOT__ID_EPC_from_CP0),30);
        bufp->chgIData(oldp+98,((1U & ((0xcU == (0x1fU 
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
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__DIn),32);
        bufp->chgCData(oldp+100,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                           >> 0xbU))),5);
        bufp->chgBit(oldp+101,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+102,((1U & ((0xcU == (0x1fU 
                                                & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                   >> 0xbU)))
                                       ? (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                           << 0xaU) 
                                          | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))
                                       : ((0xdU == 
                                           (0x1fU & 
                                            (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
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
        bufp->chgCData(oldp+103,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM),6);
        bufp->chgBit(oldp+104,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL));
        bufp->chgBit(oldp+105,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE));
        bufp->chgCData(oldp+106,(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend),6);
        bufp->chgIData(oldp+107,((((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IM) 
                                   << 0xaU) | (((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__EXL) 
                                                << 1U) 
                                               | (IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__IE)))),32);
        bufp->chgIData(oldp+108,(((IData)(vlSelf->top__DOT__mips__DOT__u_CP0__DOT__hwint_pend) 
                                  << 0xaU)),32);
        bufp->chgCData(oldp+109,((0xfU & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                          >> 6U))),4);
        bufp->chgCData(oldp+110,((7U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                        >> 2U))),3);
        bufp->chgBit(oldp+111,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+112,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+113,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+114,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+115,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+116,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                      >> 5U))));
        bufp->chgBit(oldp+117,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID) 
                                      >> 1U))));
        bufp->chgBit(oldp+118,((1U & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))));
        bufp->chgIData(oldp+119,((0x3fffffffU & vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[4U])),30);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U]),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[2U]),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[1U]),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[0U]),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC),32);
        bufp->chgIData(oldp+127,(((0x1000U & (IData)(vlSelf->top__DOT__mips__DOT__EX_CTRL_from_ID))
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
        bufp->chgBit(oldp+128,((0U == vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUC)));
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr),32);
        bufp->chgCData(oldp+130,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                           >> 6U))),5);
        bufp->chgIData(oldp+131,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                  << (0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                               >> 6U)))),32);
        bufp->chgIData(oldp+132,((vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                  >> (0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                               >> 6U)))),32);
        bufp->chgIData(oldp+133,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                                    >> 6U)))),32);
        bufp->chgIData(oldp+134,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                      << vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   : 0U)),32);
        bufp->chgIData(oldp+135,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   ? (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                      >> vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   : 0U)),32);
        bufp->chgIData(oldp+136,(((0x1fU >= vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   ? VL_SHIFTRS_III(32,32,32, vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB, vlSelf->top__DOT__mips__DOT__u_EX__DOT__f_rd1)
                                   : (- (vlSelf->top__DOT__mips__DOT__u_EX__DOT__ALUB 
                                         >> 0x1fU)))),32);
        bufp->chgCData(oldp+137,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                           >> 0x15U))),5);
        bufp->chgCData(oldp+138,((0x1fU & (vlSelf->top__DOT__mips__DOT__EX_DATA_from_ID[3U] 
                                           >> 0x10U))),5);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_Wd),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U]),32);
        bufp->chgCData(oldp+141,((0x1fU & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[2U])),5);
        bufp->chgCData(oldp+142,((0x1fU & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])),5);
        bufp->chgBit(oldp+143,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                      >> 4U))));
        bufp->chgBit(oldp+144,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                      >> 4U))));
        bufp->chgBit(oldp+145,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__MEM_EN));
        bufp->chgBit(oldp+146,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__WB_EN));
        bufp->chgBit(oldp+147,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM));
        bufp->chgBit(oldp+148,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB));
        bufp->chgBit(oldp+149,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__AFromWB))))));
        bufp->chgBit(oldp+150,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM));
        bufp->chgBit(oldp+151,(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB));
        bufp->chgBit(oldp+152,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_EX__DOT__u_EX_FORWARD__DOT__BFromWB))))));
        bufp->chgBit(oldp+153,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                      >> 3U))));
        bufp->chgBit(oldp+154,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                      >> 4U))));
        bufp->chgBit(oldp+155,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                      >> 3U))));
        bufp->chgBit(oldp+156,((((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                 >> 3U) & (IData)(vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0))));
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__IF_instr),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[0U]),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT__MEMout),32);
        bufp->chgBit(oldp+160,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                      >> 2U))));
        bufp->chgBit(oldp+161,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID) 
                                      >> 1U))));
        bufp->chgBit(oldp+162,((0x3000U > (0xffffU 
                                           & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr))));
        bufp->chgBit(oldp+163,((0x3000U > (0xffffU 
                                           & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[1U]))));
        bufp->chgCData(oldp+164,((3U & vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr)),2);
        bufp->chgSData(oldp+165,((0xfffU & (vlSelf->top__DOT__mips__DOT__u_EX__DOT__preMemAddr 
                                            >> 2U))),12);
        bufp->chgCData(oldp+166,(vlSelf->top__DOT__mips__DOT__u_MEM__DOT____Vcellinp__u_dm_ram__wea),4);
        bufp->chgBit(oldp+167,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                      >> 3U))));
        bufp->chgBit(oldp+168,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                      >> 2U))));
        bufp->chgBit(oldp+169,((1U & ((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM) 
                                      >> 1U))));
        bufp->chgBit(oldp+170,((1U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM))));
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U]),32);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[0U]),32);
        bufp->chgIData(oldp+173,(((4U & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_MEM))
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
        bufp->chgCData(oldp+174,((3U & vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U])),2);
        bufp->chgSData(oldp+175,((0xffffU & vlSelf->top__DOT__mips__DOT__u_WB__DOT__U_DREXT__DOT____VdfgTmp_h992ded47__0)),16);
        bufp->chgCData(oldp+176,((0x18U & (vlSelf->top__DOT__mips__DOT__WB_DATA_from_MEM[1U] 
                                           << 3U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+177,((0x3fffffffU & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x20U)))),30);
        bufp->chgIData(oldp+178,((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)),32);
        bufp->chgBit(oldp+179,(vlSelf->top__DOT__mips__DOT__ID_uncertainJump));
        bufp->chgBit(oldp+180,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC));
        bufp->chgCData(oldp+181,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll)
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
        bufp->chgCData(oldp+182,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__branchType),3);
        bufp->chgCData(oldp+183,(((IData)((0x11ULL 
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
        bufp->chgCData(oldp+184,((0x3fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                   >> 0x1aU)))),6);
        bufp->chgCData(oldp+185,((0x3fU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),6);
        bufp->chgCData(oldp+186,((0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                   >> 0x15U)))),5);
        bufp->chgCData(oldp+187,((0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                   >> 0x10U)))),5);
        bufp->chgBit(oldp+188,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp));
        bufp->chgBit(oldp+189,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR));
        bufp->chgBit(oldp+190,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
                                   | (0xfU == (0x3fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))))));
        bufp->chgBit(oldp+191,(((8U == (0x3fU & (IData)(
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
        bufp->chgBit(oldp+192,((IData)((0x40000000ULL 
                                        == (0xffe00000ULL 
                                            & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+193,((IData)((0x40800000ULL 
                                        == (0xffe00000ULL 
                                            & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+194,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                      | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB))))));
        bufp->chgBit(oldp+195,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt) 
                                | (0xaU == (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU)))))));
        bufp->chgBit(oldp+196,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC));
        bufp->chgBit(oldp+197,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0))));
        bufp->chgBit(oldp+198,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div))));
        bufp->chgBit(oldp+199,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB));
        bufp->chgBit(oldp+200,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB));
        bufp->chgBit(oldp+201,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memWrite));
        bufp->chgBit(oldp+202,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
                                | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR) 
                                   | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDHIWB) 
                                      | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__MDLOWB) 
                                         | ((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg) 
                                            | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__savePC))))))));
        bufp->chgBit(oldp+203,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__memToReg));
        bufp->chgBit(oldp+204,(((0x20U == (0x3fU & (IData)(
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
        bufp->chgBit(oldp+205,(((0x21U == (0x3fU & (IData)(
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
        bufp->chgBit(oldp+206,(((0x20U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                | (0x21U == (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU)))))));
        bufp->chgBit(oldp+207,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__add));
        bufp->chgBit(oldp+208,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub));
        bufp->chgBit(oldp+209,((0xdU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))));
        bufp->chgBit(oldp+210,((4U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+211,((0x2bU == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+212,((0x23U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+213,((0xfU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))));
        bufp->chgBit(oldp+214,((2U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+215,((3U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+216,((IData)((8ULL == (0xfc00003fULL 
                                                 & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+217,((8U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+218,((9U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+219,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__slt));
        bufp->chgBit(oldp+220,((0xaU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))));
        bufp->chgBit(oldp+221,((0x20U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+222,((0x24U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+223,((0x21U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+224,((0x25U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+225,((0x28U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+226,((0x29U == (0x3fU & (IData)(
                                                          (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+227,((IData)((0x21ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+228,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__subu));
        bufp->chgBit(oldp+229,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND));
        bufp->chgBit(oldp+230,((0xcU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))));
        bufp->chgBit(oldp+231,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR));
        bufp->chgBit(oldp+232,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR));
        bufp->chgBit(oldp+233,((0xeU == (0x3fU & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))));
        bufp->chgBit(oldp+234,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NOR));
        bufp->chgBit(oldp+235,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sll));
        bufp->chgBit(oldp+236,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sllv));
        bufp->chgBit(oldp+237,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srl));
        bufp->chgBit(oldp+238,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srlv));
        bufp->chgBit(oldp+239,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sra));
        bufp->chgBit(oldp+240,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__srav));
        bufp->chgBit(oldp+241,((5U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+242,((7U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+243,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bltz));
        bufp->chgBit(oldp+244,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__bgez));
        bufp->chgBit(oldp+245,((6U == (0x3fU & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU))))));
        bufp->chgBit(oldp+246,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jalr));
        bufp->chgBit(oldp+247,((IData)((0x11ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+248,((IData)((0x13ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+249,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult));
        bufp->chgBit(oldp+250,((IData)((0x19ULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+251,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div));
        bufp->chgBit(oldp+252,((IData)((0x1bULL == 
                                        (0xfc00003fULL 
                                         & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))));
        bufp->chgBit(oldp+253,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__Branch));
        bufp->chgBit(oldp+254,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeR));
        bufp->chgBit(oldp+255,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA));
        bufp->chgBit(oldp+256,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__jmp) 
                                | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromGPR))));
        bufp->chgBit(oldp+257,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h4e50702c__0) 
                                | ((8U == (0x3fU & (IData)(
                                                           (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                            >> 0x1aU)))) 
                                   | ((9U == (0x3fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                         >> 0x1aU)))) 
                                      | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT____VdfgTmp_h1faed734__0))))));
        bufp->chgBit(oldp+258,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__sub) 
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
        bufp->chgBit(oldp+259,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__OR) 
                                | ((0xdU == (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                        >> 0x1aU)))) 
                                   | (0xfU == (0x3fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                          >> 0x1aU))))))));
        bufp->chgBit(oldp+260,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__AND) 
                                | (0xcU == (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU)))))));
        bufp->chgBit(oldp+261,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__XOR) 
                                | (0xeU == (0x3fU & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0x1aU)))))));
        bufp->chgBit(oldp+262,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ALURs));
        bufp->chgBit(oldp+263,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__mult) 
                                | (IData)((0x19ULL 
                                           == (0xfc00003fULL 
                                               & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))));
        bufp->chgBit(oldp+264,(((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__div) 
                                | (IData)((0x1bULL 
                                           == (0xfc00003fULL 
                                               & vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))));
        bufp->chgSData(oldp+265,((0xffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),16);
        bufp->chgIData(oldp+266,((0x3ffffffU & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))),26);
        bufp->chgSData(oldp+267,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.EX_CTRL),16);
        bufp->chgCData(oldp+268,(((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__typeIA) 
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
        bufp->chgQData(oldp+269,(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA),62);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+271,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ID_FLUSH));
        bufp->chgBit(oldp+272,(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__IF_FLUSH));
        bufp->chgBit(oldp+273,((1U & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__ID_FLUSH)))));
        bufp->chgCData(oldp+274,((7U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                        >> 2U))),3);
        bufp->chgBit(oldp+275,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                      >> 8U))));
        bufp->chgBit(oldp+276,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                      >> 7U))));
        bufp->chgBit(oldp+277,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                      >> 6U))));
        bufp->chgBit(oldp+278,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                      >> 5U))));
        bufp->chgBit(oldp+279,((1U & ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL) 
                                      >> 1U))));
        bufp->chgBit(oldp+280,((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))));
        bufp->chgBit(oldp+281,((IData)((0U != (0x3cU 
                                               & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))))));
        bufp->chgIData(oldp+282,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1),32);
        bufp->chgIData(oldp+283,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd2),32);
        bufp->chgBit(oldp+284,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail));
        bufp->chgBit(oldp+285,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_BRANCH__DOT__eq));
        bufp->chgBit(oldp+286,((vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1 
                                >> 0x1fU)));
        bufp->chgBit(oldp+287,((0U == vlSelf->top__DOT__mips__DOT__u_ID__DOT__f_rd1)));
        bufp->chgBit(oldp+288,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM));
        bufp->chgBit(oldp+289,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB));
        bufp->chgBit(oldp+290,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__AFromWB))))));
        bufp->chgBit(oldp+291,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM));
        bufp->chgBit(oldp+292,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB));
        bufp->chgBit(oldp+293,((1U & ((~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromMEM)) 
                                      & (~ (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__u_ID_FORWARD__DOT__BFromWB))))));
        bufp->chgIData(oldp+294,(vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC),30);
        bufp->chgSData(oldp+295,((0x3fffU & vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC)),14);
        bufp->chgSData(oldp+296,((0x7ffU & (vlSelf->top__DOT__mips__DOT__u_IF__DOT__NPC 
                                            - (IData)(0x400U)))),11);
        bufp->chgSData(oldp+297,(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL),9);
        bufp->chgBit(oldp+298,((IData)(((0U != (0x1e0U 
                                                & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))) 
                                        | (IData)(vlSelf->top__DOT__mips__DOT__u_ID__DOT__branchAvail)))));
    }
    bufp->chgBit(oldp+299,(vlSelf->clk));
    bufp->chgBit(oldp+300,(vlSelf->rst));
    bufp->chgCData(oldp+301,(vlSelf->led),8);
    bufp->chgCData(oldp+302,(vlSelf->seg7_seg),8);
    bufp->chgCData(oldp+303,(vlSelf->seg7_seg1),8);
    bufp->chgCData(oldp+304,(vlSelf->seg7_select),8);
    bufp->chgCData(oldp+305,((((IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__IF_FLUSH) 
                               << 1U) | (IData)(vlSelf->top__DOT__mips__DOT__u_Controller__DOT__NPCFromEPC))),2);
    bufp->chgBit(oldp+306,(((IData)(vlSelf->top__DOT__mips__DOT__ID_uncertainJump) 
                            & ((IData)((0U != (0x18U 
                                               & (IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_ID)))) 
                               & ((0U != (IData)(vlSelf->top__DOT__mips__DOT__EX_rw_from_EX)) 
                                  & (IData)(vlSelf->top__DOT__mips__DOT__u_HazardDetect__DOT____VdfgTmp_h6c4ba390__0))))));
    bufp->chgBit(oldp+307,(((IData)(vlSelf->top__DOT__mips__DOT__ID_uncertainJump) 
                            & (((IData)(vlSelf->top__DOT__mips__DOT__WB_CTRL_from_EX) 
                                >> 3U) & (((0x1fU & (IData)(
                                                            (vlSelf->top__DOT__mips__DOT__ID_DATA_from_IF 
                                                             >> 0x15U))) 
                                           == (0x1fU 
                                               & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])) 
                                          | ((0x1fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__mips__DOT__ID_DATA_from_IF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & vlSelf->top__DOT__mips__DOT__MEM_DATA_from_EX[2U])))))));
    bufp->chgIData(oldp+308,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                             [(0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                >> 0x15U)))]),32);
    bufp->chgIData(oldp+309,(vlSelf->top__DOT__mips__DOT__u_ID__DOT__GPR__DOT__register
                             [(0x1fU & (IData)((vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                >> 0x10U)))]),32);
    bufp->chgIData(oldp+310,(((1U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))
                               ? (((- (IData)((1U & (IData)(
                                                            (vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA 
                                                             >> 0xfU))))) 
                                   << 0x10U) | (0xffffU 
                                                & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA)))
                               : ((2U & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_controller.ID_CTRL))
                                   ? ((IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA) 
                                      << 0x10U) : (0xffffU 
                                                   & (IData)(vlSymsp->TOP__top__DOT__mips__DOT__i_if_id.ID_DATA))))),32);
    bufp->chgIData(oldp+311,((0x3fffffffU & ((0x1060U 
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
