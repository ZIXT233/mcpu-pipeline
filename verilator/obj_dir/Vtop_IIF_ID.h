// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_IIF_ID_H_
#define VERILATED_VTOP_IIF_ID_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_IIF_ID final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    QData/*61:0*/ ID_DATA;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_IIF_ID(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_IIF_ID();
    VL_UNCOPYABLE(Vtop_IIF_ID);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_IIF_ID* obj);

#endif  // guard
