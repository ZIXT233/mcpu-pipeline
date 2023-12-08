// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_IID_H_
#define VERILATED_VTOP_IID_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_IID final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    SData/*8:0*/ ID_CTRL;
    SData/*15:0*/ EX_CTRL;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_IID(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_IID();
    VL_UNCOPYABLE(Vtop_IID);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_IID* obj);

#endif  // guard
