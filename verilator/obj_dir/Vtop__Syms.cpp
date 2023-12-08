// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop___024unit.h"
#include "Vtop_IController.h"
#include "Vtop_IIF_ID.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__top__DOT__mips__DOT__i_controller{this, Verilated::catName(namep, "top.mips.i_controller")}
    , TOP__top__DOT__mips__DOT__i_if_id{this, Verilated::catName(namep, "top.mips.i_if_id")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__top__DOT__mips__DOT__i_controller = &TOP__top__DOT__mips__DOT__i_controller;
    TOP.__PVT__top__DOT__mips__DOT__i_if_id = &TOP__top__DOT__mips__DOT__i_if_id;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__top__DOT__mips__DOT__i_controller.__Vconfigure(true);
    TOP__top__DOT__mips__DOT__i_if_id.__Vconfigure(true);
}
