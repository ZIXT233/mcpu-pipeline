// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_IIF_ID.h"
#include "Vtop__Syms.h"

void Vtop_IIF_ID___ctor_var_reset(Vtop_IIF_ID* vlSelf);

Vtop_IIF_ID::Vtop_IIF_ID(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_IIF_ID___ctor_var_reset(this);
}

void Vtop_IIF_ID::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_IIF_ID::~Vtop_IIF_ID() {
}
