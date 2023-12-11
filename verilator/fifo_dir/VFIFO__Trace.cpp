// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFIFO__Syms.h"


//======================

void VFIFO::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VFIFO* t = (VFIFO*)userthis;
    VFIFO__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VFIFO::traceChgThis(VFIFO__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VFIFO::traceChgThis__2(VFIFO__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->FIFO__DOT__wStat),4);
        vcdp->chgBus(c+9,(vlTOPp->FIFO__DOT__rStat),4);
        vcdp->chgBus(c+17,((7U & (IData)(vlTOPp->FIFO__DOT__wStat))),3);
        vcdp->chgBus(c+25,((7U & (IData)(vlTOPp->FIFO__DOT__rStat))),3);
    }
}

void VFIFO::traceChgThis__3(VFIFO__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+33,(vlTOPp->FIFO__DOT__ram[0]),32);
        vcdp->chgBus(c+34,(vlTOPp->FIFO__DOT__ram[1]),32);
        vcdp->chgBus(c+35,(vlTOPp->FIFO__DOT__ram[2]),32);
        vcdp->chgBus(c+36,(vlTOPp->FIFO__DOT__ram[3]),32);
        vcdp->chgBus(c+37,(vlTOPp->FIFO__DOT__ram[4]),32);
        vcdp->chgBus(c+38,(vlTOPp->FIFO__DOT__ram[5]),32);
        vcdp->chgBus(c+39,(vlTOPp->FIFO__DOT__ram[6]),32);
        vcdp->chgBus(c+40,(vlTOPp->FIFO__DOT__ram[7]),32);
    }
}

void VFIFO::traceChgThis__4(VFIFO__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+97,(vlTOPp->clk));
        vcdp->chgBit(c+105,(vlTOPp->rst));
        vcdp->chgBit(c+113,(vlTOPp->wen));
        vcdp->chgBus(c+121,(vlTOPp->wData),32);
        vcdp->chgBit(c+129,(vlTOPp->pop));
        vcdp->chgBus(c+137,(vlTOPp->rData),32);
        vcdp->chgBit(c+145,(vlTOPp->isFull));
        vcdp->chgBit(c+153,(vlTOPp->isEmpty));
    }
}
