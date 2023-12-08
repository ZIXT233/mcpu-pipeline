// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_IIF.h"
#include "Vtop__Syms.h"

void Vtop_IIF___ctor_var_reset(Vtop_IIF* vlSelf);

Vtop_IIF::Vtop_IIF(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_IIF___ctor_var_reset(this);
}

void Vtop_IIF::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_IIF::~Vtop_IIF() {
}
