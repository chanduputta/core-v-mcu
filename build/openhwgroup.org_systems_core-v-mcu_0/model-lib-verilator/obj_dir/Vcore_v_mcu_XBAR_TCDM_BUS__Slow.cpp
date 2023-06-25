// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_v_mcu.h for the primary calling header

#include "Vcore_v_mcu_XBAR_TCDM_BUS.h"
#include "Vcore_v_mcu__Syms.h"

//==========

VL_CTOR_IMP(Vcore_v_mcu_XBAR_TCDM_BUS) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcore_v_mcu_XBAR_TCDM_BUS::__Vconfigure(Vcore_v_mcu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vcore_v_mcu_XBAR_TCDM_BUS::~Vcore_v_mcu_XBAR_TCDM_BUS() {
}

void Vcore_v_mcu_XBAR_TCDM_BUS::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcore_v_mcu_XBAR_TCDM_BUS::_ctor_var_reset\n"); );
    // Body
    req = VL_RAND_RESET_I(1);
    add = VL_RAND_RESET_I(32);
    wen = VL_RAND_RESET_I(1);
    wdata = VL_RAND_RESET_I(32);
    be = VL_RAND_RESET_I(4);
    gnt = VL_RAND_RESET_I(1);
    r_opc = VL_RAND_RESET_I(1);
    r_rdata = VL_RAND_RESET_I(32);
    r_valid = VL_RAND_RESET_I(1);
}
