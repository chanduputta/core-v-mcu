// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_v_mcu.h for the primary calling header

#include "Vcore_v_mcu.h"
#include "Vcore_v_mcu__Syms.h"

#ifdef VL_DEBUG
void Vcore_v_mcu::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((jtag_tck_i & 0xfeU))) {
        Verilated::overWidthError("jtag_tck_i");}
    if (VL_UNLIKELY((jtag_tdi_i & 0xfeU))) {
        Verilated::overWidthError("jtag_tdi_i");}
    if (VL_UNLIKELY((jtag_tms_i & 0xfeU))) {
        Verilated::overWidthError("jtag_tms_i");}
    if (VL_UNLIKELY((jtag_trst_i & 0xfeU))) {
        Verilated::overWidthError("jtag_trst_i");}
    if (VL_UNLIKELY((ref_clk_i & 0xfeU))) {
        Verilated::overWidthError("ref_clk_i");}
    if (VL_UNLIKELY((rstn_i & 0xfeU))) {
        Verilated::overWidthError("rstn_i");}
    if (VL_UNLIKELY((bootsel_i & 0xfeU))) {
        Verilated::overWidthError("bootsel_i");}
    if (VL_UNLIKELY((stm_i & 0xfeU))) {
        Verilated::overWidthError("stm_i");}
    if (VL_UNLIKELY((io_in_i & 0ULL))) {
        Verilated::overWidthError("io_in_i");}
}
#endif  // VL_DEBUG
