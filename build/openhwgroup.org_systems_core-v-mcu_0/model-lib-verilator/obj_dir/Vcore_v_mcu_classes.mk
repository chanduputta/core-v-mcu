# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vcore_v_mcu.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vcore_v_mcu \
	Vcore_v_mcu__1 \
	Vcore_v_mcu__2 \
	Vcore_v_mcu__3 \
	Vcore_v_mcu__4 \
	Vcore_v_mcu__5 \
	Vcore_v_mcu__6 \
	Vcore_v_mcu__7 \
	Vcore_v_mcu__8 \
	Vcore_v_mcu__9 \
	Vcore_v_mcu__10 \
	Vcore_v_mcu__11 \
	Vcore_v_mcu__12 \
	Vcore_v_mcu__13 \
	Vcore_v_mcu__14 \
	Vcore_v_mcu__15 \
	Vcore_v_mcu__16 \
	Vcore_v_mcu__17 \
	Vcore_v_mcu__18 \
	Vcore_v_mcu__19 \
	Vcore_v_mcu__20 \
	Vcore_v_mcu__21 \
	Vcore_v_mcu__22 \
	Vcore_v_mcu__23 \
	Vcore_v_mcu__24 \
	Vcore_v_mcu__25 \
	Vcore_v_mcu__26 \
	Vcore_v_mcu__27 \
	Vcore_v_mcu__28 \
	Vcore_v_mcu__29 \
	Vcore_v_mcu___024unit \
	Vcore_v_mcu_FLL_BUS__F20 \
	Vcore_v_mcu_XBAR_TCDM_BUS \
	Vcore_v_mcu_APB_BUS \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vcore_v_mcu__Slow \
	Vcore_v_mcu__1__Slow \
	Vcore_v_mcu__2__Slow \
	Vcore_v_mcu__3__Slow \
	Vcore_v_mcu__4__Slow \
	Vcore_v_mcu__5__Slow \
	Vcore_v_mcu__6__Slow \
	Vcore_v_mcu__7__Slow \
	Vcore_v_mcu__8__Slow \
	Vcore_v_mcu__9__Slow \
	Vcore_v_mcu__10__Slow \
	Vcore_v_mcu__11__Slow \
	Vcore_v_mcu__12__Slow \
	Vcore_v_mcu__13__Slow \
	Vcore_v_mcu__14__Slow \
	Vcore_v_mcu__15__Slow \
	Vcore_v_mcu__16__Slow \
	Vcore_v_mcu__17__Slow \
	Vcore_v_mcu__18__Slow \
	Vcore_v_mcu__19__Slow \
	Vcore_v_mcu__20__Slow \
	Vcore_v_mcu__21__Slow \
	Vcore_v_mcu__22__Slow \
	Vcore_v_mcu___024unit__Slow \
	Vcore_v_mcu_FLL_BUS__F20__Slow \
	Vcore_v_mcu_XBAR_TCDM_BUS__Slow \
	Vcore_v_mcu_APB_BUS__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vcore_v_mcu__Trace \
	Vcore_v_mcu__Trace__1 \
	Vcore_v_mcu__Trace__2 \
	Vcore_v_mcu__Trace__3 \
	Vcore_v_mcu__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vcore_v_mcu__Syms \
	Vcore_v_mcu__Trace__Slow \
	Vcore_v_mcu__Trace__1__Slow \
	Vcore_v_mcu__Trace__2__Slow \
	Vcore_v_mcu__Trace__3__Slow \
	Vcore_v_mcu__Trace__4__Slow \
	Vcore_v_mcu__Trace__5__Slow \
	Vcore_v_mcu__Trace__6__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
