// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_IID.h"
#include "Vtop__Syms.h"

void Vtop_IID___ctor_var_reset(Vtop_IID* vlSelf);

Vtop_IID::Vtop_IID(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_IID___ctor_var_reset(this);
}

void Vtop_IID::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_IID::~Vtop_IID() {
}
