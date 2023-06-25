// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_v_mcu.h for the primary calling header

#include "Vcore_v_mcu_FLL_BUS__F20.h"
#include "Vcore_v_mcu__Syms.h"

//==========

VL_CTOR_IMP(Vcore_v_mcu_FLL_BUS__F20) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcore_v_mcu_FLL_BUS__F20::__Vconfigure(Vcore_v_mcu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vcore_v_mcu_FLL_BUS__F20::~Vcore_v_mcu_FLL_BUS__F20() {
}

void Vcore_v_mcu_FLL_BUS__F20::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_v_mcu_FLL_BUS__F20::_ctor_var_reset\n"); );
    // Body
    add = VL_RAND_RESET_I(32);
}
