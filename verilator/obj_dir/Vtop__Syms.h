// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop___024unit.h"
#include "Vtop_IController.h"
#include "Vtop_IStallDetect.h"
#include "Vtop_IIF_ID.h"
#include "Vtop_IID_EX.h"
#include "Vtop_IEX_MEM.h"
#include "Vtop_IMEM_WB.h"
#include "Vtop_IBypass.h"
#include "Vtop_ICP0.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_IBypass                   TOP__top__DOT__mips__DOT__i_bypass;
    Vtop_IController               TOP__top__DOT__mips__DOT__i_controller;
    Vtop_ICP0                      TOP__top__DOT__mips__DOT__i_cp0;
    Vtop_IEX_MEM                   TOP__top__DOT__mips__DOT__i_ex_mem;
    Vtop_IID_EX                    TOP__top__DOT__mips__DOT__i_id_ex;
    Vtop_IIF_ID                    TOP__top__DOT__mips__DOT__i_if_id;
    Vtop_IMEM_WB                   TOP__top__DOT__mips__DOT__i_mem_wb;
    Vtop_IStallDetect              TOP__top__DOT__mips__DOT__i_stallDetect;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
