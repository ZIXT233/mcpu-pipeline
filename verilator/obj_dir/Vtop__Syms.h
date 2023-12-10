// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTOP__SYMS_H_
#define _VTOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vtop.h"
#include "Vtop___024unit.h"
#include "Vtop_IController.h"
#include "Vtop_IStallDetect.h"
#include "Vtop_IIF_ID.h"
#include "Vtop_IID_EX.h"
#include "Vtop_IEX_MEM.h"
#include "Vtop_IMEM_WB.h"
#include "Vtop_IBypass.h"
#include "Vtop_ICP0.h"

// SYMS CLASS
class Vtop__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vtop*                          TOPp;
    Vtop_IBypass                   TOP__top__DOT__mips__DOT__i_bypass;
    Vtop_IController               TOP__top__DOT__mips__DOT__i_controller;
    Vtop_ICP0                      TOP__top__DOT__mips__DOT__i_cp0;
    Vtop_IEX_MEM                   TOP__top__DOT__mips__DOT__i_ex_mem;
    Vtop_IID_EX                    TOP__top__DOT__mips__DOT__i_id_ex;
    Vtop_IIF_ID                    TOP__top__DOT__mips__DOT__i_if_id;
    Vtop_IMEM_WB                   TOP__top__DOT__mips__DOT__i_mem_wb;
    Vtop_IStallDetect              TOP__top__DOT__mips__DOT__i_stallDetect;
    
    // CREATORS
    Vtop__Syms(Vtop* topp, const char* namep);
    ~Vtop__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
