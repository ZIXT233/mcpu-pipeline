// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop___024root;
class VerilatedVcdC;
class Vtop_IBypass;
class Vtop_ICP0;
class Vtop_IController;
class Vtop_IEX_MEM;
class Vtop_IID_EX;
class Vtop_IIF_ID;
class Vtop_IMEM_WB;
class Vtop_IStallDetect;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_OUT8(&led,7,0);
    VL_OUT8(&seg7_seg,7,0);
    VL_OUT8(&seg7_seg1,7,0);
    VL_OUT8(&seg7_select,7,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop_IController* const __PVT__top__DOT__mips__DOT__i_controller;
    Vtop_IIF_ID* const __PVT__top__DOT__mips__DOT__i_if_id;
    Vtop_IID_EX* const __PVT__top__DOT__mips__DOT__i_id_ex;
    Vtop_IEX_MEM* const __PVT__top__DOT__mips__DOT__i_ex_mem;
    Vtop_IMEM_WB* const __PVT__top__DOT__mips__DOT__i_mem_wb;
    Vtop_IBypass* const __PVT__top__DOT__mips__DOT__i_bypass;
    Vtop_ICP0* const __PVT__top__DOT__mips__DOT__i_cp0;
    Vtop_IStallDetect* const __PVT__top__DOT__mips__DOT__i_stallDetect;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
