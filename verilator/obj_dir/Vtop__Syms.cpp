// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
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
    , TOP__top__DOT__mips__DOT__i_bypass{this, Verilated::catName(namep, "top.mips.i_bypass")}
    , TOP__top__DOT__mips__DOT__i_controller{this, Verilated::catName(namep, "top.mips.i_controller")}
    , TOP__top__DOT__mips__DOT__i_cp0{this, Verilated::catName(namep, "top.mips.i_cp0")}
    , TOP__top__DOT__mips__DOT__i_ex_mem{this, Verilated::catName(namep, "top.mips.i_ex_mem")}
    , TOP__top__DOT__mips__DOT__i_id_ex{this, Verilated::catName(namep, "top.mips.i_id_ex")}
    , TOP__top__DOT__mips__DOT__i_if_id{this, Verilated::catName(namep, "top.mips.i_if_id")}
    , TOP__top__DOT__mips__DOT__i_mem_wb{this, Verilated::catName(namep, "top.mips.i_mem_wb")}
    , TOP__top__DOT__mips__DOT__i_stallDetect{this, Verilated::catName(namep, "top.mips.i_stallDetect")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__top__DOT__mips__DOT__i_bypass = &TOP__top__DOT__mips__DOT__i_bypass;
    TOP.__PVT__top__DOT__mips__DOT__i_controller = &TOP__top__DOT__mips__DOT__i_controller;
    TOP.__PVT__top__DOT__mips__DOT__i_cp0 = &TOP__top__DOT__mips__DOT__i_cp0;
    TOP.__PVT__top__DOT__mips__DOT__i_ex_mem = &TOP__top__DOT__mips__DOT__i_ex_mem;
    TOP.__PVT__top__DOT__mips__DOT__i_id_ex = &TOP__top__DOT__mips__DOT__i_id_ex;
    TOP.__PVT__top__DOT__mips__DOT__i_if_id = &TOP__top__DOT__mips__DOT__i_if_id;
    TOP.__PVT__top__DOT__mips__DOT__i_mem_wb = &TOP__top__DOT__mips__DOT__i_mem_wb;
    TOP.__PVT__top__DOT__mips__DOT__i_stallDetect = &TOP__top__DOT__mips__DOT__i_stallDetect;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__top__DOT__mips__DOT__i_bypass.__Vconfigure(true);
    TOP__top__DOT__mips__DOT__i_controller.__Vconfigure(true);
    TOP__top__DOT__mips__DOT__i_cp0.__Vconfigure(true);
    TOP__top__DOT__mips__DOT__i_ex_mem.__Vconfigure(true);
    TOP__top__DOT__mips__DOT__i_id_ex.__Vconfigure(true);
    TOP__top__DOT__mips__DOT__i_if_id.__Vconfigure(true);
    TOP__top__DOT__mips__DOT__i_mem_wb.__Vconfigure(true);
    TOP__top__DOT__mips__DOT__i_stallDetect.__Vconfigure(true);
}
