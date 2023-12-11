// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFIFO__Syms.h"


//======================

void VFIFO::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VFIFO::traceInit, &VFIFO::traceFull, &VFIFO::traceChg, this);
}
void VFIFO::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VFIFO* t = (VFIFO*)userthis;
    VFIFO__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VFIFO::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VFIFO* t = (VFIFO*)userthis;
    VFIFO__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VFIFO::traceInitThis(VFIFO__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VFIFO::traceFullThis(VFIFO__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VFIFO::traceInitThis__1(VFIFO__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+97,"clk", false,-1);
        vcdp->declBit(c+105,"rst", false,-1);
        vcdp->declBit(c+113,"wen", false,-1);
        vcdp->declBus(c+121,"wData", false,-1, 31,0);
        vcdp->declBit(c+129,"pop", false,-1);
        vcdp->declBus(c+137,"rData", false,-1, 31,0);
        vcdp->declBit(c+145,"isFull", false,-1);
        vcdp->declBit(c+153,"isEmpty", false,-1);
        vcdp->declBus(c+161,"FIFO WIDTH", false,-1, 31,0);
        vcdp->declBus(c+169,"FIFO DEPTH", false,-1, 31,0);
        vcdp->declBus(c+177,"FIFO PTR_WIDTH", false,-1, 31,0);
        vcdp->declBit(c+97,"FIFO clk", false,-1);
        vcdp->declBit(c+105,"FIFO rst", false,-1);
        vcdp->declBit(c+113,"FIFO wen", false,-1);
        vcdp->declBus(c+121,"FIFO wData", false,-1, 31,0);
        vcdp->declBit(c+129,"FIFO pop", false,-1);
        vcdp->declBus(c+137,"FIFO rData", false,-1, 31,0);
        vcdp->declBit(c+145,"FIFO isFull", false,-1);
        vcdp->declBit(c+153,"FIFO isEmpty", false,-1);
        vcdp->declBus(c+1,"FIFO wStat", false,-1, 3,0);
        vcdp->declBus(c+9,"FIFO rStat", false,-1, 3,0);
        vcdp->declBus(c+17,"FIFO wPtr", false,-1, 2,0);
        vcdp->declBus(c+25,"FIFO rPtr", false,-1, 2,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+33+i*1,"FIFO ram", true,(i+0), 31,0);}}
    }
}

void VFIFO::traceFullThis__1(VFIFO__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->FIFO__DOT__wStat),4);
        vcdp->fullBus(c+9,(vlTOPp->FIFO__DOT__rStat),4);
        vcdp->fullBus(c+17,((7U & (IData)(vlTOPp->FIFO__DOT__wStat))),3);
        vcdp->fullBus(c+25,((7U & (IData)(vlTOPp->FIFO__DOT__rStat))),3);
        vcdp->fullBus(c+33,(vlTOPp->FIFO__DOT__ram[0]),32);
        vcdp->fullBus(c+34,(vlTOPp->FIFO__DOT__ram[1]),32);
        vcdp->fullBus(c+35,(vlTOPp->FIFO__DOT__ram[2]),32);
        vcdp->fullBus(c+36,(vlTOPp->FIFO__DOT__ram[3]),32);
        vcdp->fullBus(c+37,(vlTOPp->FIFO__DOT__ram[4]),32);
        vcdp->fullBus(c+38,(vlTOPp->FIFO__DOT__ram[5]),32);
        vcdp->fullBus(c+39,(vlTOPp->FIFO__DOT__ram[6]),32);
        vcdp->fullBus(c+40,(vlTOPp->FIFO__DOT__ram[7]),32);
        vcdp->fullBit(c+97,(vlTOPp->clk));
        vcdp->fullBit(c+105,(vlTOPp->rst));
        vcdp->fullBit(c+113,(vlTOPp->wen));
        vcdp->fullBus(c+121,(vlTOPp->wData),32);
        vcdp->fullBit(c+129,(vlTOPp->pop));
        vcdp->fullBus(c+137,(vlTOPp->rData),32);
        vcdp->fullBit(c+145,(vlTOPp->isFull));
        vcdp->fullBit(c+153,(vlTOPp->isEmpty));
        vcdp->fullBus(c+161,(0x20U),32);
        vcdp->fullBus(c+169,(8U),32);
        vcdp->fullBus(c+177,(3U),32);
    }
}
