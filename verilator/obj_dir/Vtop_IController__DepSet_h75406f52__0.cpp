// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_IController.h"

std::string VL_TO_STRING(const Vtop_IController* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_IController::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
