# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop \
	Vtop___024root__DepSet_h4b98a05d__0 \
	Vtop___024root__DepSet_h6944321b__0 \
	Vtop_IController__DepSet_h75406f52__0 \
	Vtop_IStallDetect__DepSet_h8e101a14__0 \
	Vtop_IStallDetect__DepSet_h696745ae__0 \
	Vtop_IIF_ID__DepSet_h6c5358a9__0 \
	Vtop_IEX_MEM__DepSet_hc09b9494__0 \
	Vtop_IMEM_WB__DepSet_h410dca04__0 \
	Vtop_IBypass__DepSet_h330ddd6e__0 \
	Vtop_ICP0__DepSet_h8a365286__0 \
	Vtop_IFIFO__Wb4__DepSet_hf708002b__0 \
	Vtop_IBridge__DepSet_hf1d6d95c__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop___024root__Slow \
	Vtop___024root__DepSet_h4b98a05d__0__Slow \
	Vtop___024root__DepSet_h6944321b__0__Slow \
	Vtop___024unit__Slow \
	Vtop___024unit__DepSet_h1e8fffb9__0__Slow \
	Vtop_IController__Slow \
	Vtop_IController__DepSet_h75406f52__0__Slow \
	Vtop_IStallDetect__Slow \
	Vtop_IStallDetect__DepSet_h8e101a14__0__Slow \
	Vtop_IIF_ID__Slow \
	Vtop_IIF_ID__DepSet_h6c5358a9__0__Slow \
	Vtop_IEX_MEM__Slow \
	Vtop_IEX_MEM__DepSet_hc09b9494__0__Slow \
	Vtop_IMEM_WB__Slow \
	Vtop_IMEM_WB__DepSet_h410dca04__0__Slow \
	Vtop_IBypass__Slow \
	Vtop_IBypass__DepSet_h330ddd6e__0__Slow \
	Vtop_ICP0__Slow \
	Vtop_ICP0__DepSet_h8a365286__0__Slow \
	Vtop_IFIFO__Wb4__Slow \
	Vtop_IFIFO__Wb4__DepSet_hf708002b__0__Slow \
	Vtop_IBridge__Slow \
	Vtop_IBridge__DepSet_hf1d6d95c__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop__Syms \
	Vtop__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
