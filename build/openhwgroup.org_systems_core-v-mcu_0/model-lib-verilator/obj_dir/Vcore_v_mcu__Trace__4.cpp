// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore_v_mcu__Syms.h"


void Vcore_v_mcu::traceChgSub4(void* userp, VerilatedVcd* tracep) {
    Vcore_v_mcu__Syms* __restrict vlSymsp = static_cast<Vcore_v_mcu__Syms*>(userp);
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 24211);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_enable_inout_efpga))
                                 ? (1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__s_lint_VALID))
                                 : 1U)));
    }
}

void Vcore_v_mcu::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vcore_v_mcu__Syms* __restrict vlSymsp = static_cast<Vcore_v_mcu__Syms*>(userp);
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
        vlTOPp->__Vm_traceActivity[6U] = 0U;
        vlTOPp->__Vm_traceActivity[7U] = 0U;
        vlTOPp->__Vm_traceActivity[8U] = 0U;
        vlTOPp->__Vm_traceActivity[9U] = 0U;
        vlTOPp->__Vm_traceActivity[0xaU] = 0U;
        vlTOPp->__Vm_traceActivity[0xbU] = 0U;
        vlTOPp->__Vm_traceActivity[0xcU] = 0U;
        vlTOPp->__Vm_traceActivity[0xdU] = 0U;
        vlTOPp->__Vm_traceActivity[0xeU] = 0U;
        vlTOPp->__Vm_traceActivity[0xfU] = 0U;
        vlTOPp->__Vm_traceActivity[0x10U] = 0U;
        vlTOPp->__Vm_traceActivity[0x11U] = 0U;
        vlTOPp->__Vm_traceActivity[0x12U] = 0U;
        vlTOPp->__Vm_traceActivity[0x13U] = 0U;
        vlTOPp->__Vm_traceActivity[0x14U] = 0U;
        vlTOPp->__Vm_traceActivity[0x15U] = 0U;
        vlTOPp->__Vm_traceActivity[0x16U] = 0U;
        vlTOPp->__Vm_traceActivity[0x17U] = 0U;
        vlTOPp->__Vm_traceActivity[0x18U] = 0U;
        vlTOPp->__Vm_traceActivity[0x19U] = 0U;
        vlTOPp->__Vm_traceActivity[0x1aU] = 0U;
        vlTOPp->__Vm_traceActivity[0x1bU] = 0U;
        vlTOPp->__Vm_traceActivity[0x1cU] = 0U;
        vlTOPp->__Vm_traceActivity[0x1dU] = 0U;
        vlTOPp->__Vm_traceActivity[0x1eU] = 0U;
        vlTOPp->__Vm_traceActivity[0x1fU] = 0U;
        vlTOPp->__Vm_traceActivity[0x20U] = 0U;
        vlTOPp->__Vm_traceActivity[0x21U] = 0U;
        vlTOPp->__Vm_traceActivity[0x22U] = 0U;
        vlTOPp->__Vm_traceActivity[0x23U] = 0U;
        vlTOPp->__Vm_traceActivity[0x24U] = 0U;
        vlTOPp->__Vm_traceActivity[0x25U] = 0U;
        vlTOPp->__Vm_traceActivity[0x26U] = 0U;
        vlTOPp->__Vm_traceActivity[0x27U] = 0U;
        vlTOPp->__Vm_traceActivity[0x28U] = 0U;
        vlTOPp->__Vm_traceActivity[0x29U] = 0U;
        vlTOPp->__Vm_traceActivity[0x2aU] = 0U;
        vlTOPp->__Vm_traceActivity[0x2bU] = 0U;
        vlTOPp->__Vm_traceActivity[0x2cU] = 0U;
        vlTOPp->__Vm_traceActivity[0x2dU] = 0U;
        vlTOPp->__Vm_traceActivity[0x2eU] = 0U;
        vlTOPp->__Vm_traceActivity[0x2fU] = 0U;
        vlTOPp->__Vm_traceActivity[0x30U] = 0U;
        vlTOPp->__Vm_traceActivity[0x31U] = 0U;
        vlTOPp->__Vm_traceActivity[0x32U] = 0U;
        vlTOPp->__Vm_traceActivity[0x33U] = 0U;
        vlTOPp->__Vm_traceActivity[0x34U] = 0U;
        vlTOPp->__Vm_traceActivity[0x35U] = 0U;
        vlTOPp->__Vm_traceActivity[0x36U] = 0U;
        vlTOPp->__Vm_traceActivity[0x37U] = 0U;
        vlTOPp->__Vm_traceActivity[0x38U] = 0U;
        vlTOPp->__Vm_traceActivity[0x39U] = 0U;
        vlTOPp->__Vm_traceActivity[0x3aU] = 0U;
        vlTOPp->__Vm_traceActivity[0x3bU] = 0U;
        vlTOPp->__Vm_traceActivity[0x3cU] = 0U;
        vlTOPp->__Vm_traceActivity[0x3dU] = 0U;
        vlTOPp->__Vm_traceActivity[0x3eU] = 0U;
        vlTOPp->__Vm_traceActivity[0x3fU] = 0U;
        vlTOPp->__Vm_traceActivity[0x40U] = 0U;
        vlTOPp->__Vm_traceActivity[0x41U] = 0U;
        vlTOPp->__Vm_traceActivity[0x42U] = 0U;
        vlTOPp->__Vm_traceActivity[0x43U] = 0U;
        vlTOPp->__Vm_traceActivity[0x44U] = 0U;
        vlTOPp->__Vm_traceActivity[0x45U] = 0U;
        vlTOPp->__Vm_traceActivity[0x46U] = 0U;
        vlTOPp->__Vm_traceActivity[0x47U] = 0U;
        vlTOPp->__Vm_traceActivity[0x48U] = 0U;
        vlTOPp->__Vm_traceActivity[0x49U] = 0U;
        vlTOPp->__Vm_traceActivity[0x4aU] = 0U;
        vlTOPp->__Vm_traceActivity[0x4bU] = 0U;
        vlTOPp->__Vm_traceActivity[0x4cU] = 0U;
        vlTOPp->__Vm_traceActivity[0x4dU] = 0U;
        vlTOPp->__Vm_traceActivity[0x4eU] = 0U;
        vlTOPp->__Vm_traceActivity[0x4fU] = 0U;
        vlTOPp->__Vm_traceActivity[0x50U] = 0U;
        vlTOPp->__Vm_traceActivity[0x51U] = 0U;
        vlTOPp->__Vm_traceActivity[0x52U] = 0U;
        vlTOPp->__Vm_traceActivity[0x53U] = 0U;
        vlTOPp->__Vm_traceActivity[0x54U] = 0U;
        vlTOPp->__Vm_traceActivity[0x55U] = 0U;
        vlTOPp->__Vm_traceActivity[0x56U] = 0U;
        vlTOPp->__Vm_traceActivity[0x57U] = 0U;
        vlTOPp->__Vm_traceActivity[0x58U] = 0U;
        vlTOPp->__Vm_traceActivity[0x59U] = 0U;
        vlTOPp->__Vm_traceActivity[0x5aU] = 0U;
        vlTOPp->__Vm_traceActivity[0x5bU] = 0U;
        vlTOPp->__Vm_traceActivity[0x5cU] = 0U;
        vlTOPp->__Vm_traceActivity[0x5dU] = 0U;
        vlTOPp->__Vm_traceActivity[0x5eU] = 0U;
        vlTOPp->__Vm_traceActivity[0x5fU] = 0U;
        vlTOPp->__Vm_traceActivity[0x60U] = 0U;
        vlTOPp->__Vm_traceActivity[0x61U] = 0U;
        vlTOPp->__Vm_traceActivity[0x62U] = 0U;
        vlTOPp->__Vm_traceActivity[0x63U] = 0U;
        vlTOPp->__Vm_traceActivity[0x64U] = 0U;
        vlTOPp->__Vm_traceActivity[0x65U] = 0U;
        vlTOPp->__Vm_traceActivity[0x66U] = 0U;
        vlTOPp->__Vm_traceActivity[0x67U] = 0U;
        vlTOPp->__Vm_traceActivity[0x68U] = 0U;
        vlTOPp->__Vm_traceActivity[0x69U] = 0U;
        vlTOPp->__Vm_traceActivity[0x6aU] = 0U;
        vlTOPp->__Vm_traceActivity[0x6bU] = 0U;
        vlTOPp->__Vm_traceActivity[0x6cU] = 0U;
        vlTOPp->__Vm_traceActivity[0x6dU] = 0U;
        vlTOPp->__Vm_traceActivity[0x6eU] = 0U;
        vlTOPp->__Vm_traceActivity[0x6fU] = 0U;
        vlTOPp->__Vm_traceActivity[0x70U] = 0U;
        vlTOPp->__Vm_traceActivity[0x71U] = 0U;
        vlTOPp->__Vm_traceActivity[0x72U] = 0U;
        vlTOPp->__Vm_traceActivity[0x73U] = 0U;
        vlTOPp->__Vm_traceActivity[0x74U] = 0U;
        vlTOPp->__Vm_traceActivity[0x75U] = 0U;
        vlTOPp->__Vm_traceActivity[0x76U] = 0U;
        vlTOPp->__Vm_traceActivity[0x77U] = 0U;
        vlTOPp->__Vm_traceActivity[0x78U] = 0U;
        vlTOPp->__Vm_traceActivity[0x79U] = 0U;
        vlTOPp->__Vm_traceActivity[0x7aU] = 0U;
        vlTOPp->__Vm_traceActivity[0x7bU] = 0U;
        vlTOPp->__Vm_traceActivity[0x7cU] = 0U;
        vlTOPp->__Vm_traceActivity[0x7dU] = 0U;
        vlTOPp->__Vm_traceActivity[0x7eU] = 0U;
        vlTOPp->__Vm_traceActivity[0x7fU] = 0U;
        vlTOPp->__Vm_traceActivity[0x80U] = 0U;
        vlTOPp->__Vm_traceActivity[0x81U] = 0U;
        vlTOPp->__Vm_traceActivity[0x82U] = 0U;
        vlTOPp->__Vm_traceActivity[0x83U] = 0U;
        vlTOPp->__Vm_traceActivity[0x84U] = 0U;
        vlTOPp->__Vm_traceActivity[0x85U] = 0U;
        vlTOPp->__Vm_traceActivity[0x86U] = 0U;
        vlTOPp->__Vm_traceActivity[0x87U] = 0U;
        vlTOPp->__Vm_traceActivity[0x88U] = 0U;
        vlTOPp->__Vm_traceActivity[0x89U] = 0U;
        vlTOPp->__Vm_traceActivity[0x8aU] = 0U;
        vlTOPp->__Vm_traceActivity[0x8bU] = 0U;
        vlTOPp->__Vm_traceActivity[0x8cU] = 0U;
        vlTOPp->__Vm_traceActivity[0x8dU] = 0U;
        vlTOPp->__Vm_traceActivity[0x8eU] = 0U;
        vlTOPp->__Vm_traceActivity[0x8fU] = 0U;
        vlTOPp->__Vm_traceActivity[0x90U] = 0U;
        vlTOPp->__Vm_traceActivity[0x91U] = 0U;
    }
}
