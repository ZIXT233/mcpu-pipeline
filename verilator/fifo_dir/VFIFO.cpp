// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFIFO.h for the primary calling header

#include "VFIFO.h"
#include "VFIFO__Syms.h"

//==========

VL_CTOR_IMP(VFIFO) {
    VFIFO__Syms* __restrict vlSymsp = __VlSymsp = new VFIFO__Syms(this, name());
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VFIFO::__Vconfigure(VFIFO__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VFIFO::~VFIFO() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VFIFO::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFIFO::eval\n"); );
    VFIFO__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("FIFO.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VFIFO::_eval_initial_loop(VFIFO__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("FIFO.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VFIFO::_sequent__TOP__1(VFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO::_sequent__TOP__1\n"); );
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__FIFO__DOT__wStat;
    CData/*2:0*/ __Vdlyvdim0__FIFO__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__FIFO__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__FIFO__DOT__ram__v0;
    // Body
    __Vdly__FIFO__DOT__wStat = vlTOPp->FIFO__DOT__wStat;
    __Vdlyvset__FIFO__DOT__ram__v0 = 0U;
    if (vlTOPp->rst) {
        if (((IData)(vlTOPp->wen) & (~ (IData)(vlTOPp->isFull)))) {
            __Vdly__FIFO__DOT__wStat = (0xfU & ((IData)(1U) 
                                                + (IData)(vlTOPp->FIFO__DOT__wStat)));
        }
    } else {
        __Vdly__FIFO__DOT__wStat = 0U;
    }
    if (vlTOPp->rst) {
        if (((IData)(vlTOPp->wen) & (~ (IData)(vlTOPp->isFull)))) {
            __Vdlyvval__FIFO__DOT__ram__v0 = vlTOPp->wData;
            __Vdlyvset__FIFO__DOT__ram__v0 = 1U;
            __Vdlyvdim0__FIFO__DOT__ram__v0 = (7U & (IData)(vlTOPp->FIFO__DOT__wStat));
        }
    }
    if (vlTOPp->rst) {
        if (((IData)(vlTOPp->pop) & (~ (IData)(vlTOPp->isEmpty)))) {
            vlTOPp->FIFO__DOT__rStat = (0xfU & ((IData)(1U) 
                                                + (IData)(vlTOPp->FIFO__DOT__rStat)));
        }
    } else {
        vlTOPp->FIFO__DOT__rStat = 0U;
    }
    if (__Vdlyvset__FIFO__DOT__ram__v0) {
        vlTOPp->FIFO__DOT__ram[__Vdlyvdim0__FIFO__DOT__ram__v0] 
            = __Vdlyvval__FIFO__DOT__ram__v0;
    }
    vlTOPp->FIFO__DOT__wStat = __Vdly__FIFO__DOT__wStat;
    vlTOPp->rData = vlTOPp->FIFO__DOT__ram[(7U & (IData)(vlTOPp->FIFO__DOT__rStat))];
    vlTOPp->isFull = (((7U & (IData)(vlTOPp->FIFO__DOT__wStat)) 
                       == (7U & (IData)(vlTOPp->FIFO__DOT__rStat))) 
                      & (((IData)(vlTOPp->FIFO__DOT__wStat) 
                          ^ (IData)(vlTOPp->FIFO__DOT__rStat)) 
                         >> 3U));
    vlTOPp->isEmpty = ((IData)(vlTOPp->FIFO__DOT__wStat) 
                       == (IData)(vlTOPp->FIFO__DOT__rStat));
}

void VFIFO::_initial__TOP__2(VFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO::_initial__TOP__2\n"); );
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->FIFO__DOT__wStat = 0U;
    vlTOPp->FIFO__DOT__rStat = 0U;
}

void VFIFO::_settle__TOP__3(VFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO::_settle__TOP__3\n"); );
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rData = vlTOPp->FIFO__DOT__ram[(7U & (IData)(vlTOPp->FIFO__DOT__rStat))];
    vlTOPp->isFull = (((7U & (IData)(vlTOPp->FIFO__DOT__wStat)) 
                       == (7U & (IData)(vlTOPp->FIFO__DOT__rStat))) 
                      & (((IData)(vlTOPp->FIFO__DOT__wStat) 
                          ^ (IData)(vlTOPp->FIFO__DOT__rStat)) 
                         >> 3U));
    vlTOPp->isEmpty = ((IData)(vlTOPp->FIFO__DOT__wStat) 
                       == (IData)(vlTOPp->FIFO__DOT__rStat));
}

void VFIFO::_eval(VFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO::_eval\n"); );
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->rst)) & (IData)(vlTOPp->__Vclklast__TOP__rst)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void VFIFO::_eval_initial(VFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO::_eval_initial\n"); );
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
    vlTOPp->_initial__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VFIFO::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO::final\n"); );
    // Variables
    VFIFO__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFIFO::_eval_settle(VFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO::_eval_settle\n"); );
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

VL_INLINE_OPT QData VFIFO::_change_request(VFIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO::_change_request\n"); );
    VFIFO* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFIFO::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((wen & 0xfeU))) {
        Verilated::overWidthError("wen");}
    if (VL_UNLIKELY((pop & 0xfeU))) {
        Verilated::overWidthError("pop");}
}
#endif  // VL_DEBUG

void VFIFO::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFIFO::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    wen = VL_RAND_RESET_I(1);
    wData = VL_RAND_RESET_I(32);
    pop = VL_RAND_RESET_I(1);
    rData = VL_RAND_RESET_I(32);
    isFull = VL_RAND_RESET_I(1);
    isEmpty = VL_RAND_RESET_I(1);
    FIFO__DOT__wStat = VL_RAND_RESET_I(4);
    FIFO__DOT__rStat = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            FIFO__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vm_traceActivity = 0;
}
