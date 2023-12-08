// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_IController.h"
#include "Vtop__Syms.h"

void Vtop_IController___ctor_var_reset(Vtop_IController* vlSelf);

Vtop_IController::Vtop_IController(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_IController___ctor_var_reset(this);
}

void Vtop_IController::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_IController::~Vtop_IController() {
}
