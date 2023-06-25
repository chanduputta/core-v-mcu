// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_v_mcu.h for the primary calling header

#include "Vcore_v_mcu.h"
#include "Vcore_v_mcu__Syms.h"

VL_INLINE_OPT void Vcore_v_mcu::_sequent__TOP__47(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_sequent__TOP__47\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if ((0x10U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__psel) 
                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__penable)) 
                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pwrite)))) {
            if (((((((((2U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                         << 0x1eU) 
                                        | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                           >> 2U)))) 
                       | (0U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                           << 0x1eU) 
                                          | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                             >> 2U))))) 
                      | (1U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                          << 0x1eU) 
                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                            >> 2U))))) 
                     | (3U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                         << 0x1eU) 
                                        | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                           >> 2U))))) 
                    | (7U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                        << 0x1eU) | 
                                       (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                        >> 2U))))) 
                   | (4U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                       << 0x1eU) | 
                                      (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                       >> 2U))))) | 
                  (8U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                    << 0x1eU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                 >> 2U))))) 
                 | (5U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                     << 0x1eU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                  >> 2U)))))) {
                if ((2U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                      << 0x1eU) | (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                   >> 2U))))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer0_th 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[4U];
                }
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer0_th = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if ((0x10U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__psel) 
                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__penable)) 
                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pwrite)))) {
            if ((1U & (~ ((((((((2U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                    >> 2U)))) 
                                | (0U == (0xffU & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                      >> 2U))))) 
                               | (1U == (0xffU & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                     >> 2U))))) 
                              | (3U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                    >> 2U))))) 
                             | (7U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                   >> 2U))))) 
                            | (4U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                  >> 2U))))) 
                           | (8U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                               << 0x1eU) 
                                              | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                 >> 2U))))) 
                          | (5U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                >> 2U)))))))) {
                if ((1U & (~ ((((((((9U == (0xffU & 
                                            ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                >> 2U)))) 
                                    | (6U == (0xffU 
                                              & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                    >> 2U))))) 
                                   | (0xaU == (0xffU 
                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                     >> 2U))))) 
                                  | (0x12U == (0xffU 
                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                     >> 2U))))) 
                                 | (0x10U == (0xffU 
                                              & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                    >> 2U))))) 
                                | (0x11U == (0xffU 
                                             & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                   >> 2U))))) 
                               | (0x13U == (0xffU & 
                                            ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                >> 2U))))) 
                              | (0x17U == (0xffU & 
                                           ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                               >> 2U)))))))) {
                    if (((((((((0x14U == (0xffU & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                      >> 2U)))) 
                               | (0x18U == (0xffU & 
                                            ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                >> 2U))))) 
                              | (0x15U == (0xffU & 
                                           ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                               >> 2U))))) 
                             | (0x19U == (0xffU & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                      >> 2U))))) 
                            | (0x16U == (0xffU & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                     >> 2U))))) 
                           | (0x1aU == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                    >> 2U))))) 
                          | (0x22U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                   >> 2U))))) 
                         | (0x20U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                  >> 2U)))))) {
                        if ((0x14U != (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                   >> 2U))))) {
                            if ((0x18U != (0xffU & 
                                           ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                               >> 2U))))) {
                                if ((0x15U != (0xffU 
                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                     >> 2U))))) {
                                    if ((0x19U != (0xffU 
                                                   & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                         >> 2U))))) {
                                        if ((0x16U 
                                             != (0xffU 
                                                 & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                     << 0x1eU) 
                                                    | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                       >> 2U))))) {
                                            if ((0x1aU 
                                                 != 
                                                 (0xffU 
                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                        >> 2U))))) {
                                                if (
                                                    (0x22U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                          << 0x1eU) 
                                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                            >> 2U))))) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer2_th 
                                                        = 
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[4U];
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer2_th = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if ((0x10U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__psel) 
                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__penable)) 
                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pwrite)))) {
            if ((1U & (~ ((((((((2U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                    >> 2U)))) 
                                | (0U == (0xffU & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                      >> 2U))))) 
                               | (1U == (0xffU & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                     >> 2U))))) 
                              | (3U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                    >> 2U))))) 
                             | (7U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                   >> 2U))))) 
                            | (4U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                  >> 2U))))) 
                           | (8U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                               << 0x1eU) 
                                              | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                 >> 2U))))) 
                          | (5U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                >> 2U)))))))) {
                if (((((((((9U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                               >> 2U)))) 
                           | (6U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                               << 0x1eU) 
                                              | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                 >> 2U))))) 
                          | (0xaU == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                  >> 2U))))) 
                         | (0x12U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                  >> 2U))))) 
                        | (0x10U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                               << 0x1eU) 
                                              | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                 >> 2U))))) 
                       | (0x11U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                >> 2U))))) 
                      | (0x13U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                               >> 2U))))) 
                     | (0x17U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                            << 0x1eU) 
                                           | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                              >> 2U)))))) {
                    if ((9U != (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                          << 0x1eU) 
                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                            >> 2U))))) {
                        if ((6U != (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                >> 2U))))) {
                            if ((0xaU != (0xffU & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                      >> 2U))))) {
                                if ((0x12U == (0xffU 
                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                     >> 2U))))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer1_th 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[4U];
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer1_th = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if ((0x20U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__psel) 
                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__penable)) 
                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pwrite)))) {
            if ((1U & (~ ((((((((0U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    >> 2U)))) 
                                | (1U == (0x3fU & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      >> 2U))))) 
                               | (2U == (0x3fU & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                     >> 2U))))) 
                              | (3U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    >> 2U))))) 
                             | (4U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   >> 2U))))) 
                            | (5U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                << 0x1eU) 
                                               | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  >> 2U))))) 
                           | (6U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                               << 0x1eU) 
                                              | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                 >> 2U))))) 
                          | (7U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                >> 2U)))))))) {
                if ((1U & (~ ((((((((8U == (0x3fU & 
                                            ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                >> 2U)))) 
                                    | (9U == (0x3fU 
                                              & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    >> 2U))))) 
                                   | (0xaU == (0x3fU 
                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                     >> 2U))))) 
                                  | (0xbU == (0x3fU 
                                              & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    >> 2U))))) 
                                 | (0xcU == (0x3fU 
                                             & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   >> 2U))))) 
                                | (0xdU == (0x3fU & 
                                            ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                >> 2U))))) 
                               | (0xeU == (0x3fU & 
                                           ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                               >> 2U))))) 
                              | (0xfU == (0x3fU & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      >> 2U)))))))) {
                    if (((((((((0x10U == (0x3fU & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      >> 2U)))) 
                               | (0x11U == (0x3fU & 
                                            ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                >> 2U))))) 
                              | (0x12U == (0x3fU & 
                                           ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                               >> 2U))))) 
                             | (0x13U == (0x3fU & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      >> 2U))))) 
                            | (0x14U == (0x3fU & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                     >> 2U))))) 
                           | (0x15U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    >> 2U))))) 
                          | (0x16U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   >> 2U))))) 
                         | (0x17U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                << 0x1eU) 
                                               | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  >> 2U)))))) {
                        if ((0x10U != (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   >> 2U))))) {
                            if ((0x11U == (0x3fU & 
                                           ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                               >> 2U))))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[0U] 
                                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                            } else {
                                if ((0x12U == (0x3fU 
                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                     >> 2U))))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[1U] 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                                } else {
                                    if ((0x13U == (0x3fU 
                                                   & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                         >> 2U))))) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[2U] 
                                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                                    } else {
                                        if ((0x14U 
                                             == (0x3fU 
                                                 & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                     << 0x1eU) 
                                                    | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                       >> 2U))))) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[3U] 
                                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                                        } else {
                                            if ((0x15U 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                        >> 2U))))) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[4U] 
                                                    = 
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                                            } else {
                                                if (
                                                    (0x16U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                          << 0x1eU) 
                                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                            >> 2U))))) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[5U] 
                                                        = 
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                                                } else {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[6U] 
                                                        = 
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x18U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   >> 2U))))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[7U] 
                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[0U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[1U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[2U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[3U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[4U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[5U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[6U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_pr_mask[7U] = 0xffffffffU;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if ((0x20U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__psel) 
                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__penable)) 
                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pwrite)))) {
            if ((1U & (~ ((((((((0U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    >> 2U)))) 
                                | (1U == (0x3fU & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      >> 2U))))) 
                               | (2U == (0x3fU & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                     >> 2U))))) 
                              | (3U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    >> 2U))))) 
                             | (4U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   >> 2U))))) 
                            | (5U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                << 0x1eU) 
                                               | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  >> 2U))))) 
                           | (6U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                               << 0x1eU) 
                                              | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                 >> 2U))))) 
                          | (7U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                >> 2U)))))))) {
                if (((((((((8U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                               >> 2U)))) 
                           | (9U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                               << 0x1eU) 
                                              | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                 >> 2U))))) 
                          | (0xaU == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                << 0x1eU) 
                                               | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  >> 2U))))) 
                         | (0xbU == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                               << 0x1eU) 
                                              | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                 >> 2U))))) 
                        | (0xcU == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                >> 2U))))) 
                       | (0xdU == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                               >> 2U))))) 
                      | (0xeU == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                            << 0x1eU) 
                                           | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                              >> 2U))))) 
                     | (0xfU == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                           << 0x1eU) 
                                          | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                             >> 2U)))))) {
                    if ((8U != (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                          << 0x1eU) 
                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                            >> 2U))))) {
                        if ((9U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                >> 2U))))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[0U] 
                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                        } else {
                            if ((0xaU == (0x3fU & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      >> 2U))))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[1U] 
                                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                            } else {
                                if ((0xbU == (0x3fU 
                                              & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    >> 2U))))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[2U] 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                                } else {
                                    if ((0xcU == (0x3fU 
                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                        >> 2U))))) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[3U] 
                                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                                    } else {
                                        if ((0xdU == 
                                             (0x3fU 
                                              & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    >> 2U))))) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[4U] 
                                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                                        } else {
                                            if ((0xeU 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                        >> 2U))))) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[5U] 
                                                    = 
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                                            } else {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[6U] 
                                                    = 
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((0x10U == (0x3fU & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      >> 2U)))) 
                               | (0x11U == (0x3fU & 
                                            ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                >> 2U))))) 
                              | (0x12U == (0x3fU & 
                                           ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                               >> 2U))))) 
                             | (0x13U == (0x3fU & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      >> 2U))))) 
                            | (0x14U == (0x3fU & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                     >> 2U))))) 
                           | (0x15U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    >> 2U))))) 
                          | (0x16U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   >> 2U))))) 
                         | (0x17U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                << 0x1eU) 
                                               | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  >> 2U)))))) {
                        if ((0x10U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   >> 2U))))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[7U] 
                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[0U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[1U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[2U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[3U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[4U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[5U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[6U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_cl_mask[7U] = 0xffffffffU;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if ((0x20U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__psel) 
                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__penable)) 
                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pwrite)))) {
            if (((((((((0U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                         << 0x1eU) 
                                        | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                           >> 2U)))) 
                       | (1U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                           << 0x1eU) 
                                          | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                             >> 2U))))) 
                      | (2U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                          << 0x1eU) 
                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                            >> 2U))))) 
                     | (3U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                         << 0x1eU) 
                                        | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                           >> 2U))))) 
                    | (4U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                        << 0x1eU) | 
                                       (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                        >> 2U))))) 
                   | (5U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                       << 0x1eU) | 
                                      (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                       >> 2U))))) | 
                  (6U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                    << 0x1eU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                 >> 2U))))) 
                 | (7U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                     << 0x1eU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  >> 2U)))))) {
                if ((0U != (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                      << 0x1eU) | (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   >> 2U))))) {
                    if ((1U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                          << 0x1eU) 
                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                            >> 2U))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[0U] 
                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                    } else {
                        if ((2U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                >> 2U))))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[1U] 
                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                        } else {
                            if ((3U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    >> 2U))))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[2U] 
                                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                            } else {
                                if ((4U == (0x3fU & 
                                            ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                >> 2U))))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[3U] 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                                } else {
                                    if ((5U == (0x3fU 
                                                & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      >> 2U))))) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[4U] 
                                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                                    } else {
                                        if ((6U == 
                                             (0x3fU 
                                              & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    >> 2U))))) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[5U] 
                                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                                        } else {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[6U] 
                                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (((((((((8U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                               >> 2U)))) 
                           | (9U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                               << 0x1eU) 
                                              | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                 >> 2U))))) 
                          | (0xaU == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                                << 0x1eU) 
                                               | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  >> 2U))))) 
                         | (0xbU == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                               << 0x1eU) 
                                              | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                 >> 2U))))) 
                        | (0xcU == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                >> 2U))))) 
                       | (0xdU == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                               >> 2U))))) 
                      | (0xeU == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                            << 0x1eU) 
                                           | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                              >> 2U))))) 
                     | (0xfU == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                           << 0x1eU) 
                                          | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                             >> 2U)))))) {
                    if ((8U == (0x3fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U] 
                                          << 0x1eU) 
                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                            >> 2U))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[7U] 
                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[5U];
                    }
                }
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[0U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[1U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[2U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[3U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[4U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[5U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[6U] = 0xffffffffU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__r_fc_mask[7U] = 0xffffffffU;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
            = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
                | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
               | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int);
        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PREADY = 0U;
        if ((2U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__psel) 
                   & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__penable)))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pwrite))) {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PREADY)))) {
                    vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PREADY = 1U;
                    if (((((((((0x30U == (0xfffU & 
                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U])) 
                               | (0x38U == (0xfffU 
                                            & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) 
                              | (0x3cU == (0xfffU & 
                                           vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) 
                             | (0U == (0xfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) 
                            | (4U == (0xfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) 
                           | (8U == (0xfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) 
                          | (0x20U == (0xfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) 
                         | (0x40U == (0xfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U])))) {
                        if ((0x30U == (0xfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) {
                            vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select 
                                = (0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]);
                        } else {
                            if ((0x38U == (0xfffU & 
                                           vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT____Vlvbound1 
                                    = (3U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[2U] 
                                              << 8U) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U] 
                                                >> 0x18U)));
                                if ((0x41U >= (0x7eU 
                                               & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U] 
                                                  << 1U)))) {
                                    VL_ASSIGNSEL_WIII(2,
                                                      (0x7eU 
                                                       & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U] 
                                                          << 1U)), vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir, vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT____Vlvbound1);
                                }
                                vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select 
                                    = (0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]);
                            } else {
                                if ((0x3cU == (0xfffU 
                                               & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT____Vlvbound2 
                                        = (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[2U] 
                                                  << 0xfU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U] 
                                                    >> 0x11U)));
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT____Vlvbound3 
                                        = (1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U] 
                                                 >> 0x10U));
                                    if ((0x62U >= (0x7fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (0xffU 
                                                       & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]))))) {
                                        VL_ASSIGNSEL_WIII(3,
                                                          (0x7fU 
                                                           & ((IData)(3U) 
                                                              * 
                                                              (0xffU 
                                                               & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]))), vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype, vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT____Vlvbound2);
                                    }
                                    if ((0x20U >= (0x3fU 
                                                   & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]))) {
                                        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                            = (((~ 
                                                 (1ULL 
                                                  << 
                                                  (0x3fU 
                                                   & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]))) 
                                                & vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten) 
                                               | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT____Vlvbound3)) 
                                                  << 
                                                  (0x3fU 
                                                   & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U])));
                                    }
                                    vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select 
                                        = (0xffU & 
                                           vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]);
                                } else {
                                    if ((0U == (0xfffU 
                                                & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT____Vlvbound4 = 1U;
                                        if ((0x20U 
                                             >= (0x3fU 
                                                 & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]))) {
                                            vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                = (
                                                   ((~ 
                                                     (1ULL 
                                                      << 
                                                      (0x3fU 
                                                       & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]))) 
                                                    & vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out) 
                                                   | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT____Vlvbound4)) 
                                                      << 
                                                      (0x3fU 
                                                       & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U])));
                                        }
                                        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select 
                                            = (0xffU 
                                               & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]);
                                    } else {
                                        if ((4U == 
                                             (0xfffU 
                                              & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT____Vlvbound5 = 0U;
                                            if ((0x20U 
                                                 >= 
                                                 (0x3fU 
                                                  & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]))) {
                                                vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                    = 
                                                    (((~ 
                                                       (1ULL 
                                                        << 
                                                        (0x3fU 
                                                         & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]))) 
                                                      & vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out) 
                                                     | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT____Vlvbound5)) 
                                                        << 
                                                        (0x3fU 
                                                         & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U])));
                                            }
                                            vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select 
                                                = (0xffU 
                                                   & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]);
                                        } else {
                                            if ((8U 
                                                 == 
                                                 (0xfffU 
                                                  & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT____Vlvbound6 
                                                    = 
                                                    (1U 
                                                     & (~ 
                                                        ((0x20U 
                                                          >= 
                                                          (0x3fU 
                                                           & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U])) 
                                                         & (IData)(
                                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]))))));
                                                vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select 
                                                    = 
                                                    (0xffU 
                                                     & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]);
                                                if (
                                                    (0x20U 
                                                     >= 
                                                     (0x3fU 
                                                      & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]))) {
                                                    vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                        = 
                                                        (((~ 
                                                           (1ULL 
                                                            << 
                                                            (0x3fU 
                                                             & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]))) 
                                                          & vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out) 
                                                         | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT____Vlvbound6)) 
                                                            << 
                                                            (0x3fU 
                                                             & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U])));
                                                }
                                            } else {
                                                if (
                                                    (0x20U 
                                                     == 
                                                     (0xfffU 
                                                      & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) {
                                                    vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                        = 
                                                        ((0x100000000ULL 
                                                          & vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out) 
                                                         | (IData)((IData)(
                                                                           vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U])));
                                                } else {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                        = 
                                                        ((~ 
                                                          ((IData)(1U) 
                                                           << 
                                                           (0x1fU 
                                                            & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[1U]))) 
                                                         & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PREADY)))) {
                    vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PREADY = 1U;
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA = 0U;
                    if ((0x34U == (0xfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA 
                            = ((0xfcffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA) 
                               | (((0x41U >= (0x7fU 
                                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select) 
                                                 << 1U)))
                                    ? (3U & (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select) 
                                                   << 1U)))
                                               ? 0U
                                               : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select) 
                                                       >> 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select) 
                                                       << 1U))))) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[
                                                (3U 
                                                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select) 
                                                    >> 4U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select) 
                                                    << 1U)))))
                                    : 0U) << 0x18U));
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA 
                            = ((0xfff1ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA) 
                               | (((0x62U >= (0x7fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select))))
                                    ? (7U & (((0U == 
                                               (0x1fU 
                                                & ((IData)(3U) 
                                                   * (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select))))
                                               ? 0U
                                               : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (((IData)(3U) 
                                                        * (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select)) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select)))))) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[
                                                (3U 
                                                 & (((IData)(3U) 
                                                     * (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select))))))
                                    : 0U) << 0x11U));
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA 
                            = ((0xfffeffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA) 
                               | (((0x20U >= (0x3fU 
                                              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select))) 
                                   & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                              >> (0x3fU 
                                                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select))))) 
                                  << 0x10U));
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA 
                            = ((0xffffefffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA) 
                               | (((0x20U >= (0x3fU 
                                              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select))) 
                                   & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                                              >> (0x3fU 
                                                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select))))) 
                                  << 0xcU));
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA 
                            = ((0xfffffeffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA) 
                               | (((0x20U >= (0x3fU 
                                              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select))) 
                                   & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                              >> (0x3fU 
                                                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select))))) 
                                  << 8U));
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA 
                            = ((0xffffff00U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA) 
                               | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select));
                    } else {
                        if ((0x20U == (0xfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA 
                                = (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out);
                        } else {
                            if ((0x10U == (0xfffU & 
                                           vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U]))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA 
                                    = (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in);
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PREADY = 0U;
        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] = 0U;
        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] = 0U;
        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[2U] = 0U;
        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] = 0U;
        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] = 0U;
        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] = 0U;
        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] = 0U;
        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select = 0U;
        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten = 0ULL;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__apb_slave_interface_i0__DOT__apb_reg_wrenable 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) 
           & (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__psel) 
                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__penable)) 
                & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pwrite)) 
               >> 6U) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__apb_slave_interface_i0__DOT__pready_reg)));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_event_en))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__r_event_sync_1 
                = ((2U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__s_event_signals) 
                           >> (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_event_sel_1)) 
                          << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__r_event_sync_1) 
                                           >> 1U)));
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__r_event_sync_1 = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_event_en))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__r_event_sync_2 
                = ((2U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__s_event_signals) 
                           >> (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_event_sel_2)) 
                          << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__r_event_sync_2) 
                                           >> 1U)));
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__r_event_sync_2 = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_event_en))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__r_event_sync_0 
                = ((2U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__s_event_signals) 
                           >> (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_event_sel_0)) 
                          << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__r_event_sync_0) 
                                           >> 1U)));
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__r_event_sync_0 = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_event_en))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__r_event_sync_3 
                = ((2U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__s_event_signals) 
                           >> (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_event_sel_3)) 
                          << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__r_event_sync_3) 
                                           >> 1U)));
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__r_event_sync_3 = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__state))) {
            vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll1_valid = 0U;
            vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll2_valid = 0U;
            vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll3_valid = 0U;
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__write_ready = 0U;
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__read_ready = 0U;
            if ((1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__psel) 
                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__penable)))) {
                vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__state 
                    = ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pwrite))
                        ? 8U : 7U);
            }
        } else {
            if ((8U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__state))) {
                if ((0U == (0x7fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U] 
                                      << 0x1bU) | (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[0U] 
                                                   >> 5U))))) {
                    vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll1_valid = 1U;
                } else {
                    if ((1U == (0x7fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U] 
                                          << 0x1bU) 
                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[0U] 
                                            >> 5U))))) {
                        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll2_valid = 1U;
                    } else {
                        if ((2U == (0x7fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U] 
                                              << 0x1bU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[0U] 
                                                >> 5U))))) {
                            vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll3_valid = 1U;
                        }
                    }
                }
                if ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll1_ack_sync) 
                      | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll2_ack_sync)) 
                     | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll3_ack_sync))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__write_ready = 1U;
                    vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__state = 9U;
                }
            } else {
                if ((7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__state))) {
                    if ((0U == (0x7fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U] 
                                          << 0x1bU) 
                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[0U] 
                                            >> 5U))))) {
                        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll1_valid = 1U;
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__read_data 
                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT____Vcellout__i_clk_rst_gen__soc_fll_slave_r_data_o;
                    } else {
                        if ((1U == (0x7fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U] 
                                              << 0x1bU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[0U] 
                                                >> 5U))))) {
                            vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll2_valid = 1U;
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__read_data 
                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT____Vcellout__i_clk_rst_gen__per_fll_slave_r_data_o;
                        } else {
                            if ((2U == (0x7fU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[1U] 
                                                  << 0x1bU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[0U] 
                                                    >> 5U))))) {
                                vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll3_valid = 1U;
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__read_data 
                                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT____Vcellout__i_clk_rst_gen__cluster_fll_slave_r_data_o;
                            }
                        }
                    }
                    if ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll1_ack_sync) 
                          | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll2_ack_sync)) 
                         | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll3_ack_sync))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__read_ready = 1U;
                        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__state = 9U;
                    }
                } else {
                    if ((9U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__state))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__penable)))) {
                            vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__state = 0U;
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll1_valid = 0U;
        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll2_valid = 0U;
        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll3_valid = 0U;
        vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__state = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__write_ready = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__read_ready = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x20 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset)
            ? (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__i2c_reg_wrenable) 
                & (0x20U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__reg_addr)))
                ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__in_byte)
                : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x20))
            : 0U);
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__i2c_reg_wrenable) 
             & (0x10U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__reg_addr)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x10 
                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__in_byte;
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x10 = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__i2c_reg_wrenable) 
             & (0x43U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__reg_addr)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x43 
                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__in_byte;
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x43 = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__i2c_reg_wrenable) 
             & (0x42U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__reg_addr)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x42 
                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__in_byte;
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x42 = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__i2c_reg_wrenable) 
             & (0x41U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__reg_addr)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x41 
                = (7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__in_byte));
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x41 = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__apb_reg_write_enable) 
             & (0xc8U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__apb_slave_interface_i0__DOT__apb_reg_waddr)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x32 
                = (1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__apb_slave_interface_i0__DOT__apb_reg_wdata);
        } else {
            if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__i2c_reg_wrenable) 
                 & (0x32U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__reg_addr)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x32 
                    = (1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__in_byte));
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x32 = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__apb_reg_write_enable) 
             & (0x88U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__apb_slave_interface_i0__DOT__apb_reg_waddr)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x22 
                = (1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__apb_slave_interface_i0__DOT__apb_reg_wdata);
        } else {
            if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__i2c_reg_wrenable) 
                 & (0x22U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__reg_addr)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x22 
                    = (1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__in_byte));
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x22 = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__apb_reg_write_enable) 
             & (0x48U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__apb_slave_interface_i0__DOT__apb_reg_waddr)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x13 = 1U;
        } else {
            if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__i2c_rd_byte_complete) 
                 & (0x12U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__reg_addr)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x13 = 0U;
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x13 = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__i2c_reg_wrenable) 
             & (0x10U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_interface_i0__DOT__reg_addr)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x11 = 1U;
        } else {
            if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__apb_slave_interface_i0__DOT__apb_reg_rd_byte_complete) 
                 & (0x40U == (0xfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[6U])))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x11 = 0U;
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__reg_0x11 = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if ((0x10U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__psel) 
                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__penable)) 
                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pwrite)))) {
            if ((1U & (~ ((((((((2U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                    >> 2U)))) 
                                | (0U == (0xffU & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                      >> 2U))))) 
                               | (1U == (0xffU & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                     >> 2U))))) 
                              | (3U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                    >> 2U))))) 
                             | (7U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                   >> 2U))))) 
                            | (4U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                  >> 2U))))) 
                           | (8U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                               << 0x1eU) 
                                              | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                 >> 2U))))) 
                          | (5U == (0xffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                >> 2U)))))))) {
                if ((1U & (~ ((((((((9U == (0xffU & 
                                            ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                >> 2U)))) 
                                    | (6U == (0xffU 
                                              & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                    >> 2U))))) 
                                   | (0xaU == (0xffU 
                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                     >> 2U))))) 
                                  | (0x12U == (0xffU 
                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                     >> 2U))))) 
                                 | (0x10U == (0xffU 
                                              & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                    >> 2U))))) 
                                | (0x11U == (0xffU 
                                             & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                   >> 2U))))) 
                               | (0x13U == (0xffU & 
                                            ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                >> 2U))))) 
                              | (0x17U == (0xffU & 
                                           ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                               >> 2U)))))))) {
                    if ((1U & (~ ((((((((0x14U == (0xffU 
                                                   & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                         >> 2U)))) 
                                        | (0x18U == 
                                           (0xffU & 
                                            ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                >> 2U))))) 
                                       | (0x15U == 
                                          (0xffU & 
                                           ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                               >> 2U))))) 
                                      | (0x19U == (0xffU 
                                                   & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                         >> 2U))))) 
                                     | (0x16U == (0xffU 
                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                        >> 2U))))) 
                                    | (0x1aU == (0xffU 
                                                 & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                     << 0x1eU) 
                                                    | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                       >> 2U))))) 
                                   | (0x22U == (0xffU 
                                                & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                      >> 2U))))) 
                                  | (0x20U == (0xffU 
                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                     >> 2U)))))))) {
                        if ((1U & (~ ((((((((0x21U 
                                             == (0xffU 
                                                 & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                     << 0x1eU) 
                                                    | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                       >> 2U)))) 
                                            | (0x23U 
                                               == (0xffU 
                                                   & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                         >> 2U))))) 
                                           | (0x27U 
                                              == (0xffU 
                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                        >> 2U))))) 
                                          | (0x24U 
                                             == (0xffU 
                                                 & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                     << 0x1eU) 
                                                    | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                       >> 2U))))) 
                                         | (0x28U == 
                                            (0xffU 
                                             & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                   >> 2U))))) 
                                        | (0x25U == 
                                           (0xffU & 
                                            ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                >> 2U))))) 
                                       | (0x29U == 
                                          (0xffU & 
                                           ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                             << 0x1eU) 
                                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                               >> 2U))))) 
                                      | (0x26U == (0xffU 
                                                   & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                         >> 2U)))))))) {
                            if ((1U & (~ ((((((((0x2aU 
                                                 == 
                                                 (0xffU 
                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                        >> 2U)))) 
                                                | (0x32U 
                                                   == 
                                                   (0xffU 
                                                    & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                        << 0x1eU) 
                                                       | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                          >> 2U))))) 
                                               | (0x30U 
                                                  == 
                                                  (0xffU 
                                                   & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                         >> 2U))))) 
                                              | (0x31U 
                                                 == 
                                                 (0xffU 
                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                        >> 2U))))) 
                                             | (0x33U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                     << 0x1eU) 
                                                    | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                       >> 2U))))) 
                                            | (0x37U 
                                               == (0xffU 
                                                   & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                         >> 2U))))) 
                                           | (0x34U 
                                              == (0xffU 
                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                        >> 2U))))) 
                                          | (0x38U 
                                             == (0xffU 
                                                 & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                     << 0x1eU) 
                                                    | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                       >> 2U)))))))) {
                                if ((0x35U != (0xffU 
                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                     >> 2U))))) {
                                    if ((0x39U != (0xffU 
                                                   & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                       << 0x1eU) 
                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                         >> 2U))))) {
                                        if ((0x36U 
                                             != (0xffU 
                                                 & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                     << 0x1eU) 
                                                    | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                       >> 2U))))) {
                                            if ((0x3aU 
                                                 != 
                                                 (0xffU 
                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                        >> 2U))))) {
                                                if (
                                                    (0x40U 
                                                     != 
                                                     (0xffU 
                                                      & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                          << 0x1eU) 
                                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                            >> 2U))))) {
                                                    if (
                                                        (0x41U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[5U] 
                                                              << 0x1eU) 
                                                             | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__paddr_o[4U] 
                                                                >> 2U))))) {
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_clk_en 
                                                            = 
                                                            (0xfU 
                                                             & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[4U]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_clk_en = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__s_lint_VALID) 
             & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_empty)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow 
                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_empty;
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__s_lint_VALID) 
             & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_empty)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg 
                = (7U & ((3U & (((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                >> 1U)) ^ ((IData)(1U) 
                                           + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))));
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae 
        = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset)) 
                 | (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__s_lint_VALID) 
                     & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_empty)))
                     ? (2U > (7U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                    - ((IData)(1U) 
                                       + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))
                     : (2U > (7U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                    - (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_empty) 
             & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
                = (3U & ((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)));
        } else {
            if ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__s_lint_VALID) 
                  & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_empty))) 
                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr_next;
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__d_lint_GNT 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset)
            ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_contiguous_xbar__DOT__slave_ports_req))
                ? ((0x1eU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__d_lint_GNT) 
                             << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_contiguous_xbar__DOT__slave_ports_req) 
                                              >> 3U)))
                : 0U) : 0U);
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__8__KET__.gnt) 
             & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_empty)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow 
                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_empty;
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__7__KET__.gnt) 
             & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_empty)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow 
                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_empty;
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__6__KET__.gnt) 
             & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_empty)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow 
                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_empty;
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__5__KET__.gnt) 
             & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_empty)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow 
                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_empty;
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_empty) 
             & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
                = (3U & ((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)));
        } else {
            if ((((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__8__KET__.gnt) 
                  & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_empty))) 
                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr_next;
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae 
        = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset)) 
                 | (((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__8__KET__.gnt) 
                     & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_empty)))
                     ? (2U > (7U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                    - ((IData)(1U) 
                                       + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))
                     : (2U > (7U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                    - (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_empty) 
             & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
                = (3U & ((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)));
        } else {
            if ((((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__7__KET__.gnt) 
                  & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_empty))) 
                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr_next;
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae 
        = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset)) 
                 | (((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__7__KET__.gnt) 
                     & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_empty)))
                     ? (2U > (7U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                    - ((IData)(1U) 
                                       + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))
                     : (2U > (7U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                    - (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_empty) 
             & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
                = (3U & ((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)));
        } else {
            if ((((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__6__KET__.gnt) 
                  & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_empty))) 
                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr_next;
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae 
        = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset)) 
                 | (((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__6__KET__.gnt) 
                     & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_empty)))
                     ? (2U > (7U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                    - ((IData)(1U) 
                                       + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))
                     : (2U > (7U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                    - (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_empty) 
             & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
                = (3U & ((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)));
        } else {
            if ((((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__5__KET__.gnt) 
                  & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_empty))) 
                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr_next;
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae 
        = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset)) 
                 | (((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__5__KET__.gnt) 
                     & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_empty)))
                     ? (2U > (7U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                    - ((IData)(1U) 
                                       + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))
                     : (2U > (7U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                    - (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__wen_p0 
        = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset)) 
                 | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_empty)
                     ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__wen_p0)
                     : (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT____Vcellout__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__soc_req_data 
                                >> 0x38U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__wen_p1 
        = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset)) 
                 | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_empty)
                     ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__wen_p1)
                     : (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT____Vcellout__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__soc_req_data 
                                >> 0x38U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__wen_p2 
        = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset)) 
                 | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_empty)
                     ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__wen_p2)
                     : (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT____Vcellout__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__soc_req_data 
                                >> 0x38U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__wen_p3 
        = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset)) 
                 | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_empty)
                     ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__wen_p3)
                     : (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT____Vcellout__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__soc_req_data 
                                >> 0x38U)))));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__pushtopop2 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__pushtopop1;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__8__KET____DOT__i_clk_gate_per__DOT__r_reg 
            = ((2U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__8__KET____DOT__i_clk_gate_per__DOT__r_reg) 
                      << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_udma_ctrl__DOT__r_cg) 
                                       >> 8U)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__7__KET____DOT__i_clk_gate_per__DOT__r_reg 
            = ((2U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__7__KET____DOT__i_clk_gate_per__DOT__r_reg) 
                      << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_udma_ctrl__DOT__r_cg) 
                                       >> 7U)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__6__KET____DOT__i_clk_gate_per__DOT__r_reg 
            = ((2U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__6__KET____DOT__i_clk_gate_per__DOT__r_reg) 
                      << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_udma_ctrl__DOT__r_cg) 
                                       >> 6U)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__5__KET____DOT__i_clk_gate_per__DOT__r_reg 
            = ((2U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__5__KET____DOT__i_clk_gate_per__DOT__r_reg) 
                      << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_udma_ctrl__DOT__r_cg) 
                                       >> 5U)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__4__KET____DOT__i_clk_gate_per__DOT__r_reg 
            = ((2U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__4__KET____DOT__i_clk_gate_per__DOT__r_reg) 
                      << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_udma_ctrl__DOT__r_cg) 
                                       >> 4U)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__3__KET____DOT__i_clk_gate_per__DOT__r_reg 
            = ((2U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__3__KET____DOT__i_clk_gate_per__DOT__r_reg) 
                      << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_udma_ctrl__DOT__r_cg) 
                                       >> 3U)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__2__KET____DOT__i_clk_gate_per__DOT__r_reg 
            = ((2U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__2__KET____DOT__i_clk_gate_per__DOT__r_reg) 
                      << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_udma_ctrl__DOT__r_cg) 
                                       >> 2U)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__1__KET____DOT__i_clk_gate_per__DOT__r_reg 
            = ((2U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__1__KET____DOT__i_clk_gate_per__DOT__r_reg) 
                      << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_udma_ctrl__DOT__r_cg) 
                                       >> 1U)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__0__KET____DOT__i_clk_gate_per__DOT__r_reg 
            = ((2U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__0__KET____DOT__i_clk_gate_per__DOT__r_reg) 
                      << 1U)) | (1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_udma_ctrl__DOT__r_cg)));
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__resp_fifo__DOT__fifo_ctl__DOT__pushtopop2 = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__8__KET____DOT__i_clk_gate_per__DOT__r_reg = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__7__KET____DOT__i_clk_gate_per__DOT__r_reg = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__6__KET____DOT__i_clk_gate_per__DOT__r_reg = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__5__KET____DOT__i_clk_gate_per__DOT__r_reg = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__4__KET____DOT__i_clk_gate_per__DOT__r_reg = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__3__KET____DOT__i_clk_gate_per__DOT__r_reg = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__2__KET____DOT__i_clk_gate_per__DOT__r_reg = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__1__KET____DOT__i_clk_gate_per__DOT__r_reg = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__genblk1__BRA__0__KET____DOT__i_clk_gate_per__DOT__r_reg = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__chksum_c0 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__chksum_c0;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__chksum_c1 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__chksum_c1;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__ser_des__DOT__BG__DOT__count16 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__ser_des__DOT__BG__DOT__count16;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__ser_des__DOT__bit_count 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__ser_des__DOT__bit_count;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_select;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PREADY 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PREADY;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[2U] 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__state 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__state;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clear_vlp = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                    if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clear_vlp = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clear_pwr_gate = 0U;
    if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                    if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clear_pwr_gate = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__set_cfg_enb = 0U;
    if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__set_cfg_enb = 1U;
                        }
                    }
                }
            }
        }
    } else {
        if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__set_cfg_enb = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__set_lth_enb = 0U;
    if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__set_lth_enb = 1U;
                        }
                    }
                }
            }
        }
    } else {
        if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__set_lth_enb = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_kickoff = 0U;
    if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                      >> 4U)))) {
            if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                    if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_kickoff = 1U;
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_kickoff = 1U;
                        }
                    } else {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_kickoff = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_kickoff = 1U;
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_kickoff = 1U;
                        }
                    }
                }
            }
        }
    } else {
        if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
            if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_kickoff = 1U;
                        }
                    } else {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_kickoff = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_kickoff = 1U;
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_kickoff = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__ffsr_frfu_rfifo_rdata 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbfsr_INST__DOT__qf_sff_INST_0__DOT__qf_rfm_INST__DOT__memory_data
        [vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbfsr_INST__DOT__qf_sff_INST_0__DOT__fifo_rd_ptr_cs];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fssc_frfu_cwf_wr_en = 0U;
    if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__scc_stm_cs))) {
        if ((1U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__scc_stm_cs))) {
            if ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__scc_stm_cs))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fssc_frfu_cwf_wr_en = 1U;
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fssc_frfu_wr_en = 0U;
    if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__scc_stm_cs))) {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__scc_stm_cs))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fssc_frfu_wr_en = 1U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__fifo_rd_en = 0U;
    if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__scc_stm_cs))) {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__scc_stm_cs))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__fifo_rd_en = 1U;
        } else {
            if ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__scc_stm_cs))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__fifo_rd_en = 1U;
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__qf_aff2_INST__DOT__fifo_rd_ptr_ns 
        = ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__qf_aff2_INST__DOT__fifo_rd_ptr_cs))
            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__qf_aff2_INST__DOT__fifo_rd_ptr_cs))
                ? 2U : 0U) : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__qf_aff2_INST__DOT__fifo_rd_ptr_cs))
                               ? 3U : 1U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__frfu_ffsr_wfifo_wdata 
        = ((0xffffff00U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__frfu_ffsr_wfifo_wdata) 
           | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrfuwff_INST__DOT__qf_rfm_INST_0__DOT__memory_data
           [vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrfuwff_INST__DOT__fifo_rd_ptr_cs]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__frfu_ffsr_wfifo_wdata 
        = ((0xffff00ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__frfu_ffsr_wfifo_wdata) 
           | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrfuwff_INST__DOT__qf_rfm_INST_1__DOT__memory_data
              [vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrfuwff_INST__DOT__fifo_rd_ptr_cs] 
              << 8U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__frfu_ffsr_wfifo_wdata 
        = ((0xff00ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__frfu_ffsr_wfifo_wdata) 
           | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrfuwff_INST__DOT__qf_rfm_INST_2__DOT__memory_data
              [vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrfuwff_INST__DOT__fifo_rd_ptr_cs] 
              << 0x10U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__frfu_ffsr_wfifo_wdata 
        = ((0xffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__frfu_ffsr_wfifo_wdata) 
           | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrfuwff_INST__DOT__qf_rfm_INST_3__DOT__memory_data
              [vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrfuwff_INST__DOT__fifo_rd_ptr_cs] 
              << 0x18U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrfuwff_chksum_b1_en = 0U;
    if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrffwff_stm_cs))) {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrffwff_stm_cs))) {
            if ((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbfsr_INST__DOT__qf_sff_INST_1__DOT__fifo_cnt_cs))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrfuwff_chksum_b1_en = 1U;
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrffwff_rd_en = 0U;
    if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrffwff_stm_cs))) {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrffwff_stm_cs))) {
            if ((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbfsr_INST__DOT__qf_sff_INST_1__DOT__fifo_cnt_cs))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrffwff_rd_en = 1U;
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__set_pwr_gate = 0U;
    if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__set_pwr_gate = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__set_vlp = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__set_vlp = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clear_lth_enb = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
            if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                            if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clear_lth_enb = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clear_cfg_enb = 0U;
    if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                      >> 4U)))) {
            if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clear_cfg_enb = 1U;
                        }
                    }
                }
            }
        }
    } else {
        if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
            if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                            if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clear_cfg_enb = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fclp_frfu_clp_pw_sta_ns 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fclp_frfu_clp_pw_sta_cs;
    if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                      >> 4U)))) {
            if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                    if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                            if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fclp_frfu_clp_pw_sta_ns = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fclp_frfu_clp_pw_sta_ns = 2U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
            if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                            if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fclp_frfu_clp_pw_sta_ns = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fclp_frfu_clp_pw_sta_ns = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fcb_clp_set_por_ns 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fcb_clp_set_por_cs;
    if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                      >> 4U)))) {
            if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fcb_clp_set_por_ns = 0U;
                            }
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fcb_clp_set_por_ns = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrfuwff_chksum_b0_en = 0U;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrffwff_stm_cs))) {
        if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrfuwff_INST__DOT__fifo_cnt_cs))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrfuwff_chksum_b0_en = 1U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrffwff_stm_ns 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrffwff_stm_cs;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrffwff_stm_cs))) {
        if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrfuwff_INST__DOT__fifo_cnt_cs))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrffwff_stm_ns = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrffwff_stm_cs))) {
            if ((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbfsr_INST__DOT__qf_sff_INST_1__DOT__fifo_cnt_cs))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrffwff_stm_ns = 0U;
            }
        } else {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__fcbrffwff_stm_ns = 0U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_timeout 
        = ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_cs)) 
           | (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_cs)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_62_0__DOT__data_ns 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_61_0__DOT__data_cs)
            ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_60__DOT__data_cs)
            : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_62_0__DOT__data_cs));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_ns 
        = ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
            ? ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                ? 0U : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                         ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                             ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                     ? ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))
                                         ? 0x30U : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                     : 0x2fU) : ((1U 
                                                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                                  ? 0x2eU
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))
                                                   ? 0x2dU
                                                   : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))))
                             : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                     ? 0x2cU : 0x2bU)
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                     ? ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))
                                         ? 0x2aU : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                     : 0x29U))) : (
                                                   (4U 
                                                    & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                                      ? 0x28U
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))
                                                       ? 0x30U
                                                       : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                                      ? 0x24U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))
                                                       ? 0x23U
                                                       : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                                      ? 0x22U
                                                      : 0x21U)))))
            : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                    ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                        ? 0U : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                     ? ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))
                                         ? 0x30U : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                     : 0x1bU) : ((1U 
                                                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))
                                                   ? 0x1aU
                                                   : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                                  : 0x19U)))
                    : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                        ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                ? 0x18U : 0U) : ((1U 
                                                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))
                                                   ? 0x30U
                                                   : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))))
                        : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                ? 0x14U : ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))
                                            ? 0x13U
                                            : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))
                            : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                ? 0x12U : 0x11U))))
                : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                    ? 0U : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                             ? 0U : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                      ? 0U : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))
                                               ? 0U
                                               : (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2a_0__DOT__data_cs) 
                                                   & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2b_0__DOT__data_cs))
                                                   ? 0x30U
                                                   : 
                                                  (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2a_0__DOT__data_cs) 
                                                    | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2b_0__DOT__data_cs))
                                                    ? 
                                                   ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2b_0__DOT__data_cs)
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fclp_frfu_clp_pw_sta_cs))
                                                      ? 0x20U
                                                      : 0x30U)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fclp_frfu_clp_pw_sta_cs))
                                                      ? 0x27U
                                                      : 0x30U))
                                                    : 
                                                   (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_28_0__DOT__data_cs) 
                                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_29_0__DOT__data_cs))
                                                     ? 0x30U
                                                     : 
                                                    (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_28_0__DOT__data_cs) 
                                                      | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_29_0__DOT__data_cs))
                                                      ? 
                                                     ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_29_0__DOT__data_cs)
                                                       ? 
                                                      ((0U 
                                                        == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fclp_frfu_clp_pw_sta_cs))
                                                        ? 0x10U
                                                        : 0x30U)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fclp_frfu_clp_pw_sta_cs))
                                                        ? 0x17U
                                                        : 0x30U))
                                                      : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))))))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_pd_en = 0U;
    if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_pd_en = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2a_0__DOT__data_cs) 
                                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2b_0__DOT__data_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_pd_en = 1U;
                            } else {
                                if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2a_0__DOT__data_cs) 
                                     | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2b_0__DOT__data_cs))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2b_0__DOT__data_cs) {
                                        if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fclp_frfu_clp_pw_sta_cs))) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_pd_en = 1U;
                                        }
                                    }
                                } else {
                                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_28_0__DOT__data_cs) 
                                                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_29_0__DOT__data_cs))))) {
                                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_28_0__DOT__data_cs) 
                                             | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_29_0__DOT__data_cs))) {
                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_29_0__DOT__data_cs) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fclp_frfu_clp_pw_sta_cs))) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_pd_en = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_pd_wu_en = 0U;
    if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                      >> 4U)))) {
            if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                    if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                            if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_pd_wu_en = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2a_0__DOT__data_cs) 
                                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2b_0__DOT__data_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_pd_wu_en = 1U;
                            } else {
                                if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2a_0__DOT__data_cs) 
                                     | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2b_0__DOT__data_cs))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2b_0__DOT__data_cs)))) {
                                        if ((2U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fclp_frfu_clp_pw_sta_cs))) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_pd_wu_en = 1U;
                                        }
                                    }
                                } else {
                                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_28_0__DOT__data_cs) 
                                                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_29_0__DOT__data_cs))))) {
                                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_28_0__DOT__data_cs) 
                                             | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_29_0__DOT__data_cs))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_29_0__DOT__data_cs)))) {
                                                if (
                                                    (1U 
                                                     != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__fclp_frfu_clp_pw_sta_cs))) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_pd_wu_en = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_vlp_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_vlp_en = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2a_0__DOT__data_cs) 
                                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2b_0__DOT__data_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_vlp_en = 1U;
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2a_0__DOT__data_cs) 
                                              | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2b_0__DOT__data_cs))))) {
                                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_28_0__DOT__data_cs) 
                                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_29_0__DOT__data_cs))) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_vlp_en = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_vlp_wu_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
            if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs))) {
                            if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_timer_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_vlp_wu_en = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__clp_stm_cs)))) {
                            if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2a_0__DOT__data_cs) 
                                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2b_0__DOT__data_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_vlp_wu_en = 1U;
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2a_0__DOT__data_cs) 
                                              | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2b_0__DOT__data_cs))))) {
                                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_28_0__DOT__data_cs) 
                                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_29_0__DOT__data_cs))) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_vlp_wu_en = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbfsr_INST__DOT__frfu_ffsr_ram_cfg 
        = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_0c__DOT__data_cs) 
            << 8U) | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_0b__DOT__data_cs));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_4f_0__DOT__data_cs) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_50_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_40__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_51_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_41__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_52_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_42__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_53_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_43__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_56_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_46__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_57_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_47__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_58_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_48__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_59_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_49__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5a_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_4a__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5b_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_4b__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_0__DOT__data_ns 
            = (1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_4c__DOT__data_cs));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_1__DOT__data_ns 
            = (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_4c__DOT__data_cs) 
                     >> 1U));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_2__DOT__data_ns 
            = (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_4c__DOT__data_cs) 
                     >> 2U));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_3__DOT__data_ns 
            = (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_4c__DOT__data_cs) 
                     >> 3U));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_4__DOT__data_ns 
            = (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_4c__DOT__data_cs) 
                     >> 4U));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_5__DOT__data_ns 
            = (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_4c__DOT__data_cs) 
                     >> 5U));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_6__DOT__data_ns 
            = (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_4c__DOT__data_cs) 
                     >> 6U));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_7__DOT__data_ns 
            = (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_4c__DOT__data_cs) 
                     >> 7U));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5d__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_4d__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5e__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_4e__DOT__data_cs;
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_50_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_50_0__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_51_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_51_0__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_52_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_52_0__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_53_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_53_0__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_56_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_56_0__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_57_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_57_0__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_58_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_58_0__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_59_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_59_0__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5a_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5a_0__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5b_0__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5b_0__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_0__DOT__data_ns 
            = (1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_0__DOT__data_cs));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_1__DOT__data_ns 
            = (1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_1__DOT__data_cs));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_2__DOT__data_ns 
            = (1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_2__DOT__data_cs));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_3__DOT__data_ns 
            = (1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_3__DOT__data_cs));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_4__DOT__data_ns 
            = (1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_4__DOT__data_cs));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_5__DOT__data_ns 
            = (1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_5__DOT__data_cs));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_6__DOT__data_ns 
            = (1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_6__DOT__data_cs));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_7__DOT__data_ns 
            = (1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5c_7__DOT__data_cs));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5d__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5d__DOT__data_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5e__DOT__data_ns 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rhw_INST_5e__DOT__data_cs;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbmic_INST__DOT__fcb_spi_master_en_syncff1 = 0U;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_fmic_clr_spi_master_en) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbmic_INST__DOT__fsmc_fmic_clr_spi_master_en_latch = 1U;
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbmic_INST__DOT__fsmc_fmic_clr_spi_master_en_latch = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__cfg_set_fcb_prog_ifx = 0U;
    if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs))) {
        if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__cfg_set_fcb_prog_ifx = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__cfg_clr_fcb_prog_ifx = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs))) {
                if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__cfg_partial_mode_cs)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__cfg_clr_fcb_prog_ifx = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__cfg_set_fcb_prog = 0U;
    if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs))) {
                if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__cfg_set_fcb_prog 
                            = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__cfg_set_fcb_prog) 
                               | ((IData)(1U) << (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__cfg_prog_cnt_cs)));
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__cfg_set_fcb_iso_en = 0U;
    if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__cfg_set_fcb_iso_en = 0xffffU;
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__control_in_d1 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset)
            ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__control_in
            : 0U);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_clear_br_cnt = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_clear_br_cnt = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__rfu_path_en_ns 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__rfu_path_en_cs;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__rfu_path_en_ns = 1U;
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__rfu_path_en_ns = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__rfu_path_en_ns = 0U;
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__rfu_path_en_ns = 1U;
                                }
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__rfu_path_en_ns = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_cs;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns 
                                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)));
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns 
                                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)));
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns 
                                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)));
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns = 0U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns = 1U;
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns = 0U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns = 1U;
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns = 0U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns = 1U;
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns = 0U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns = 0U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns 
                                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)));
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns 
                                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)));
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_we_ns = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_cwf_wr_en = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__rfu_path_en_cs)))) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_cwf_wr_en = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_wr_en = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__rfu_path_en_cs) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_wr_en = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_cs;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns 
                                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)));
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns 
                                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)));
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns 
                                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)));
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns = 0U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns = 1U;
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns = 0U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns = 1U;
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns = 0U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns = 1U;
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns = 0U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns = 0U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns 
                                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)));
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns 
                                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)));
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_stb_ns = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_cs;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns 
                                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)));
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns 
                                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)));
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns 
                                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)));
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns = 0U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns = 1U;
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns = 0U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns = 1U;
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns = 0U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns = 1U;
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns = 0U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns = 0U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns 
                                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)));
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns 
                                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)));
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_cyc_ns = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_wr_data_ns 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_wr_data_cs;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_wr_data_ns = 0xb9U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_wr_data_ns = 3U;
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_wr_data_ns = 3U;
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_wr_data_ns = 3U;
                                }
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_wr_data_ns = 3U;
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_wr_data_ns = 3U;
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_wr_data_ns = 0xabU;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_cs;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns 
                                        = (0x100U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns));
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns 
                                        = (1U | (0x100U 
                                                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns)));
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns 
                                        = (0x100U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns));
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns 
                                        = (0x21U | 
                                           (0x100U 
                                            & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns)));
                                } else {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns 
                                        = (0x100U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns));
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns 
                                        = (0x5aU | 
                                           (0x100U 
                                            & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns)));
                                }
                            } else {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns 
                                        = (0x100U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns));
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns 
                                        = (0xa5U | 
                                           (0x100U 
                                            & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_exp_data_ns)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__fsmc_fmic_seq_done_ns 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__fsmc_fmic_seq_done_cs;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__fsmc_fmic_seq_done_ns = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_cwf_wr_data = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__rfu_path_en_cs)))) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_cwf_wr_data 
                                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__ser_des__DOT__SPI_Read_Data_latch;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_x_stm_ns 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_x_stm_cs;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_x_stm_ns 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_wr_addr = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__rfu_path_en_cs) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_wr_addr 
                                            = (0x7fU 
                                               & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_address_cs);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_wr_data = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__rfu_path_en_cs) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_wr_data 
                                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__ser_des__DOT__SPI_Read_Data_latch;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_ns 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_cs;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_ns 
                                    = ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))
                                        ? 0xb2U : 0xb1U);
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_ns = 0xa4U;
                                } else {
                                    if ((1U < vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_rd_cnt_cs)) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_ns = 0xa2U;
                                    }
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_ns 
                                    = ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))
                                        ? 0xa2U : 0xa1U);
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_ns = 0x25U;
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_ns = 0x21U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_ns = 0x1fU;
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_ns = 0x1aU;
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_ns = 0x18U;
                                }
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_ns = 0x13U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_ns 
                                    = ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))
                                        ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__error_flag_cs)
                                            ? ((5U 
                                                <= vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_rd_cnt_cs)
                                                ? 0xb0U
                                                : 9U)
                                            : 0x12U)
                                        : 0x11U);
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_ns 
                                = ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))
                                        ? 0x10U : 0xfU)
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))
                                        ? 0xeU : 0xdU));
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_ns = 9U;
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_return_stm_ns = 8U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_rd_cnt_ns 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_rd_cnt_cs;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    if ((1U < vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_rd_cnt_cs)) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_rd_cnt_ns 
                                            = (0xffffffU 
                                               & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_rd_cnt_cs 
                                                  - (IData)(1U)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_rd_cnt_ns 
                                        = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_0f__DOT__data_cs) 
                                            << 0x10U) 
                                           | (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_0e__DOT__data_cs) 
                                               << 8U) 
                                              | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_0d__DOT__data_cs)));
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_rd_cnt_ns = 0x19U;
                                }
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_rd_cnt_ns = 3U;
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_rd_cnt_ns 
                                        = (0xffffffU 
                                           & ((IData)(1U) 
                                              + vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_rd_cnt_cs));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_address_ns 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_address_cs;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_address_ns = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    if ((1U < vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_rd_cnt_cs)) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_address_ns 
                                            = (0xffffffU 
                                               & ((IData)(1U) 
                                                  + vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_address_cs));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_address_ns = 0x31U;
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_address_ns = 0x30U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_address_ns 
                                        = (0xffffffU 
                                           & ((IData)(0x20U) 
                                              + (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_0f__DOT__data_cs) 
                                                  << 0x10U) 
                                                 | (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_0e__DOT__data_cs) 
                                                     << 8U) 
                                                    | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_0d__DOT__data_cs)))));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_address_ns = 0x20U;
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_address_ns = 7U;
                                }
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_address_ns = 4U;
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_address_ns = 0U;
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_address_ns 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spif_address_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_timer_ini_value = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_timer_ini_value = 0x10U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_timer_ini_value = 0x7ffU;
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_timer_ini_value = 0x4c0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_timer_kickoff = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_timer_kickoff = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_timer_kickoff = 1U;
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_timer_kickoff = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_set_pd = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                  >> 7U)))) {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_set_pd = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_set_quad_pd = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_set_quad_pd = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_set_fb_cfg_done = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__smc_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fsmc_frfu_set_fb_cfg_done = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbfsr_INST__DOT__fsr_stm_cs 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset)
            ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbfsr_INST__DOT__fsr_stm_ns)
            : 0U);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__pre_cksum_en 
        = ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1e__DOT__data_cs)) 
           | (0x11U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1e__DOT__data_cs)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__post_cksum_en 
        = ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1e__DOT__data_cs)) 
           | (0x30U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1e__DOT__data_cs)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__full 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) 
           & ((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__8__KET__.r_valid)
               ? (((4U & ((~ (1U & (((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                    >> 2U))) << 2U)) 
                   | (3U & ((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))) 
                  == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp))
               : (((4U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                              >> 2U)) << 2U)) | (3U 
                                                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                  == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__full 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) 
           & ((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__7__KET__.r_valid)
               ? (((4U & ((~ (1U & (((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                    >> 2U))) << 2U)) 
                   | (3U & ((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))) 
                  == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp))
               : (((4U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                              >> 2U)) << 2U)) | (3U 
                                                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                  == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__full 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) 
           & ((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__6__KET__.r_valid)
               ? (((4U & ((~ (1U & (((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                    >> 2U))) << 2U)) 
                   | (3U & ((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))) 
                  == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp))
               : (((4U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                              >> 2U)) << 2U)) | (3U 
                                                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                  == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__full 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) 
           & ((IData)(vlSymsp->TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__5__KET__.r_valid)
               ? (((4U & ((~ (1U & (((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                    >> 2U))) << 2U)) 
                   | (3U & ((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))) 
                  == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp))
               : (((4U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                              >> 2U)) << 2U)) | (3U 
                                                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                  == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__req_full 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) 
           & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__req_push)
               ? (((4U & ((~ (1U & (((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                    >> 2U))) << 2U)) 
                   | (3U & ((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))) 
                  == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp))
               : (((4U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                              >> 2U)) << 2U)) | (3U 
                                                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                  == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbfsr_INST__DOT__fcb_wl_en_cs_dly2cyc 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) 
           & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbfsr_INST__DOT__fcb_wl_en_cs_dly1cyc));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__qf_aff2_INST__DOT__qf_dff_w2r_INST__DOT__dest_data_syncff1 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__qf_aff2_INST__DOT__fifo_wr_ptr_cs;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__pushtopop1 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__pushtopop1 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__pushtopop1 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__pushtopop1 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__ffsr_frfu_clr_fb_cfg_kickoff_dly2cyc 
            = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__ffsr_frfu_clr_fb_cfg_kickoff_dly1cyc) 
               & 1U);
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__poptopush1 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__poptopush1 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__poptopush1 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__poptopush1 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__req_fifo__DOT__fifo_ctl__DOT__poptopush1 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__req_fifo__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbssc_INST__DOT__qf_aff2_INST__DOT__qf_dff_w2r_INST__DOT__dest_data_syncff1 = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__pushtopop1 = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__pushtopop1 = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__pushtopop1 = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__req_fifo__DOT__fifo_ctl__DOT__pushtopop1 = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__ffsr_frfu_clr_fb_cfg_kickoff_dly2cyc = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__3__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__poptopush1 = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__2__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__poptopush1 = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__1__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__poptopush1 = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__DC_FIFO_TCDM_EFPGA__BRA__0__KET____DOT__efpga_tcdm__DOT__resp_fifo__DOT__fifo_ctl__DOT__poptopush1 = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_interface__DOT__req_fifo__DOT__fifo_ctl__DOT__poptopush1 = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbmic_INST__DOT__frfu_fmic_rc_clk_en_dly7 
        = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset)) 
                 | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbmic_INST__DOT__frfu_fmic_rc_clk_en_dly6)));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__wb_wacc) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_addr_cs) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_addr_cs))) {
                    if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_addr_cs))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__tx_reg 
                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_wr_data_cs;
                    }
                }
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__tx_reg = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1b__DOT__data_cs 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1b__DOT__data_ns;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1a__DOT__data_cs 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1a__DOT__data_ns;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1d__DOT__data_cs 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1d__DOT__data_ns;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1c__DOT__data_cs 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1c__DOT__data_ns;
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1b__DOT__data_cs = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1a__DOT__data_cs = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1d__DOT__data_cs = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_1c__DOT__data_cs = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__ser_des__DOT__BG__DOT__count16_ns 
        = (0x1ffffU & ((IData)(1U) + vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__ser_des__DOT__BG__DOT__count16));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__wb_wacc) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_addr_cs) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_addr_cs) 
                              >> 1U)))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__SPIBR 
                        = ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_addr_cs))
                            ? ((0xffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__SPIBR)) 
                               | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_wr_data_cs) 
                                  << 8U)) : ((0xff00U 
                                              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__SPIBR)) 
                                             | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_wr_data_cs)));
                }
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__SPIBR = 1U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__irq_wr2 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) 
           & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__irq_wr1));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbmic_INST__DOT__fcb_vlp_dly2 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) 
           & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rw_INST_04__DOT__data_cs) 
               >> 5U) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbmic_INST__DOT__fcb_vlp_dly1)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__irq_rd2 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) 
           & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__irq_rd1));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__wb_wacc) {
            if ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__SPICR1) 
                  >> 7U) & (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_addr_cs)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__cmd_reg7 
                    = (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_wr_data_cs) 
                             >> 7U));
            }
        } else {
            if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__INTR_write)) 
                       & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__INTR_read))))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__cmd_reg7 = 0U;
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__cmd_reg7 = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__wb_wacc) {
            if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_addr_cs))) {
                if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_addr_cs))) {
                    if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_addr_cs))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__spi_clk_cnt_reg 
                            = (0x87U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_wr_data_cs));
                    }
                }
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__spi_clk_cnt_reg = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__wb_wacc) {
            if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_addr_cs))) {
                if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_addr_cs))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_addr_cs)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__spi_ctrl_reg 
                            = (7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_wr_data_cs));
                    }
                }
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__spi_ctrl_reg = 7U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__wb_wacc) {
            if ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__SPICR1) 
                  >> 7U) & (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_addr_cs)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__cmd_reg32 
                    = (3U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__wbm_wbs_wr_data_cs) 
                             >> 2U));
            }
        } else {
            if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__irq_rd_pos_x) 
                 | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__irq_wr_pos_x))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__cmd_reg32 = 0U;
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbsmc_INST__DOT__spi_master_top_INST__DOT__spi_register__DOT__cmd_reg32 = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_return_stm_ns 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_return_stm_cs;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_return_stm_ns = 0xc1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_return_stm_ns = 0xa2U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_return_stm_ns = 0x9aU;
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_return_stm_ns = 0x92U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_return_stm_ns = 0x2bU;
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_return_stm_ns = 0x23U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_return_stm_ns = 0x1eU;
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_return_stm_ns = 0x12U;
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_return_stm_ns = 0xbU;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_set_por = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_set_por = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_pwr_gate = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_pwr_gate = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_set_por = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_set_por = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_pwr_gate = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_pwr_gate = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_vlp_pwrdis_ifx = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_vlp_pwrdis_ifx 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_level_vlp_en_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_vlp_clkdis_ifx = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_vlp_clkdis_ifx 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_level_vlp_en_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_vlp_clkdis = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_vlp_clkdis 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_pi_pwr = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_pi_pwr 
                                        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_pi_pwr) 
                                           | ((IData)(1U) 
                                              << (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_index_cnt_cs)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_vlp_pwrdis = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_vlp_pwrdis 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_vlp_pwrdis = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_vlp_pwrdis 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_pi_pwr = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_pi_pwr 
                                        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_pi_pwr) 
                                           | ((IData)(1U) 
                                              << (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_index_cnt_cs)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_vlp_srdis = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_vlp_srdis 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_vlp_srdis = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_vlp_srdis 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_vlp_srdis_ifx = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_vlp_srdis_ifx 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_level_vlp_en_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_vlp_clkdis = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_vlp_clkdis 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_vlp_clkdis_ifx = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_vlp_clkdis_ifx 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_level_vlp_en_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_vlp_srdis_ifx = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_vlp_srdis_ifx 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_level_vlp_en_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_vlp_pwrdis_ifx = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_vlp_pwrdis_ifx 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_level_vlp_en_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_prog_ifx = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_prog_ifx = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_vlp_chip_pw_sta = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_vlp_chip_pw_sta = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_pd_chip_pw_sta = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_pd_chip_pw_sta = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_idle_chip_pw_sta = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_idle_chip_pw_sta = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_idle_chip_pw_sta = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_prog = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_prog 
                                        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_prog) 
                                           | ((IData)(1U) 
                                              << (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_index_cnt_cs)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_fb_iso_enb = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_fb_iso_enb = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_fb_iso_enb = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_fb_iso_enb = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_fb_iso_enb = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            } else {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            } else {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            } else {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            } else {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_timer_kickoff = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_iso_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_iso_en 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_fcb_iso_en 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_iso_en = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_fcb_iso_en 
                                        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_clpd_ing_cs)
                                            ? 0U : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fpmu_frfu_clr_pmu_chip_cmd = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fpmu_frfu_clr_pmu_chip_cmd = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fpmu_frfu_clr_cfg_done = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fpmu_frfu_clr_cfg_done = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fpmu_frfu_clr_quads = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fpmu_frfu_clr_quads = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fpmu_pmu_busy 
        = (1U & (~ ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_cfg_stm_cs)) 
                    & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_quad_status_0 = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_quad_status_0 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_quad_status_1 = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__set_quad_status_1 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_quad_status_0 = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_clpd_ing_cs)))) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_quad_status_0 
                                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_quad_status_0 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_quad_status_0 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_quad_status_1 = 0U;
    if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_clpd_ing_cs)))) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_quad_status_1 
                                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
            if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_quad_status_1 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs))) {
                            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_cs)))) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__clr_quad_status_1 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__pmu_stm_quad_cs;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__kickoff_clvlpwu 
        = ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_pw_sta_cs)) 
           & ((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
              | (7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__kickoff_clpdwu 
        = ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_pw_sta_cs)) 
           & ((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
              | (7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__kickoff_clvlp 
        = ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_pw_sta_cs)) 
           & (5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__kickoff_clpd 
        = ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_pw_sta_cs)) 
           & (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0xfffeU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs)) 
                   & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (1U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0xfffdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 1U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 1U)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (2U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0xfffbU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 2U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 2U)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (4U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0xfff7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 3U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 3U)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (8U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0xffefU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 4U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 4U)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (0x10U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0xffdfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 5U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 5U)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (0x20U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0xffbfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 6U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 6U)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (0x40U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0xff7fU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 7U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 7U)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (0x80U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0xfeffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 8U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 8U)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (0x100U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0xfdffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 9U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 9U)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (0x200U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0xfbffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 0xaU)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                    >> 0xaU)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (0x400U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0xf7ffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 0xbU)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                    >> 0xbU)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (0x800U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0xefffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 0xcU)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                    >> 0xcU)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (0x1000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0xdfffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 0xdU)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                    >> 0xdU)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (0x2000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0xbfffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 0xeU)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                    >> 0xeU)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (0x4000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
        = (0x7fffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 0xfU)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                    >> 0xfU)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu 
                = (0x8000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0xfffeU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                   & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (1U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0xfffdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    >> 1U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                 >> 1U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (2U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0xfffbU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    >> 2U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                 >> 2U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (4U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0xfff7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    >> 3U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                 >> 3U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (8U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0xffefU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    >> 4U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                 >> 4U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (0x10U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0xffdfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    >> 5U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                 >> 5U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (0x20U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0xffbfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    >> 6U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                 >> 6U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (0x40U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0xff7fU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    >> 7U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                 >> 7U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (0x80U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0xfeffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    >> 8U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                 >> 8U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (0x100U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0xfdffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    >> 9U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                 >> 9U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (0x200U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0xfbffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    >> 0xaU) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                   >> 0xaU))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (0x400U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0xf7ffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    >> 0xbU) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                   >> 0xbU))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (0x800U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0xefffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    >> 0xcU) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                   >> 0xcU))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (0x1000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0xdfffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    >> 0xdU) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                   >> 0xdU))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (0x2000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0xbfffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    >> 0xeU) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                   >> 0xeU))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (0x4000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
        = (0x7fffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
    if (((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)) 
         | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs)))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    >> 0xfU) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                   >> 0xfU))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu 
                = (0x8000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_wu));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0xfffeU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                    & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs))) 
                   | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs)) 
                      & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (1U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0xfffdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                     >> 1U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 1U))) | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                                                  >> 1U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                                  >> 1U)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (2U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0xfffbU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                     >> 2U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 2U))) | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                                                  >> 2U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                                  >> 2U)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (4U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0xfff7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                     >> 3U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 3U))) | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                                                  >> 3U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                                  >> 3U)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (8U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0xffefU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                     >> 4U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 4U))) | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                                                  >> 4U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                                  >> 4U)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (0x10U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0xffdfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                     >> 5U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 5U))) | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                                  >> 5U)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (0x20U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0xffbfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                     >> 6U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 6U))) | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                                                  >> 6U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                                  >> 6U)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (0x40U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0xff7fU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                     >> 7U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 7U))) | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                                                  >> 7U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                                  >> 7U)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (0x80U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0xfeffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                     >> 8U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 8U))) | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                                                  >> 8U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                                  >> 8U)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (0x100U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0xfdffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                     >> 9U) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                  >> 9U))) | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                                                  >> 9U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                                  >> 9U)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (0x200U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0xfbffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                     >> 0xaU) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                    >> 0xaU))) | ((~ 
                                                   ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                                                    >> 0xaU)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                                      >> 0xaU)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (0x400U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0xf7ffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                     >> 0xbU) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                    >> 0xbU))) | ((~ 
                                                   ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                                                    >> 0xbU)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                                      >> 0xbU)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (0x800U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0xefffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                     >> 0xcU) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                    >> 0xcU))) | ((~ 
                                                   ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                                                    >> 0xcU)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                                      >> 0xcU)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (0x1000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0xdfffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                     >> 0xdU) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                    >> 0xdU))) | ((~ 
                                                   ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                                                    >> 0xdU)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                                      >> 0xdU)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (0x2000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0xbfffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                     >> 0xeU) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                    >> 0xeU))) | ((~ 
                                                   ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                                                    >> 0xeU)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                                      >> 0xeU)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (0x4000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
        = (0x7fffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
    if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                     >> 0xfU) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                    >> 0xfU))) | ((~ 
                                                   ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                                                    >> 0xfU)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                                      >> 0xfU)))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en 
                = (0x8000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_pd_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0xfffeU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs)) 
                   & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (1U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0xfffdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 1U)) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                     >> 1U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (2U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0xfffbU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 2U)) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                     >> 2U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (4U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0xfff7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 3U)) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                     >> 3U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (8U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0xffefU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 4U)) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                     >> 4U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (0x10U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0xffdfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 5U)) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                     >> 5U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (0x20U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0xffbfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 6U)) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                     >> 6U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (0x40U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0xff7fU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 7U)) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                     >> 7U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (0x80U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0xfeffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 8U)) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                     >> 8U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (0x100U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0xfdffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 9U)) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                     >> 9U))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (0x200U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0xfbffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 0xaU)) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                       >> 0xaU))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (0x400U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0xf7ffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 0xbU)) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                       >> 0xbU))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (0x800U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0xefffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 0xcU)) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                       >> 0xcU))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (0x1000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0xdfffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 0xdU)) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                       >> 0xdU))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (0x2000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0xbfffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 0xeU)) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                       >> 0xeU))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (0x4000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
        = (0x7fffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_2f_0__DOT__data_cs))) {
        if ((1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs) 
                       >> 0xfU)) & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs) 
                                       >> 0xfU))))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en 
                = (0x8000U | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__chip_quad_vlp_en));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quads_at_idle_state 
        = (0xffffU & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_1_cs)) 
                      & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_status_0_cs))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__prdata[6U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_i2cs__DOT__i2c_peripheral_registers_i0__DOT__apb_reg_rdata;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pready 
        = ((0x6ffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pready)) 
           | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbaps_INST__DOT__fcb_apbs_pready_cs) 
              << 8U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbpmu_INST__DOT__quad_cfg 
        = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_31_0__DOT__data_cs) 
            << 8U) | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrfu_INST__DOT__qf_rwhwsc_INST_30_0__DOT__data_cs));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__frfu_fclp_cfg_done_dly8 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) 
           & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbclp_INST__DOT__frfu_fclp_cfg_done_dly7) 
              & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fclp_frfu_clear_cfg_done))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__frwf_crf_rd_data 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrwf_INST__DOT__qf_sff_INST_1__DOT__qf_rfm_INST__DOT__memory_data
        [vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrwf_INST__DOT__qf_sff_INST_1__DOT__fifo_rd_ptr_cs];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__i_event_fifo1__DOT__Pop_Pointer_CS 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset)
            ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__i_event_fifo1__DOT__Pop_Pointer_NS)
            : 0U);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrwf_INST__DOT__frwf_frfu_cwf_wr_data_temp 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrwf_INST__DOT__qf_sff_INST_0__DOT__qf_rfm_INST__DOT__memory_data
        [vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrwf_INST__DOT__qf_sff_INST_0__DOT__fifo_rd_ptr_cs];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U]) 
           | (0xffffff00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__168__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U] 
        = ((0x17fU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U]) 
           | (0xffffff80U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__167__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 7U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U] 
        = ((0x1bfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U]) 
           | (0xffffffc0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__166__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U] 
        = ((0x1dfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U]) 
           | (0xffffffe0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__165__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 5U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U] 
        = ((0x1efU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U]) 
           | (0xfffffff0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__164__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U] 
        = ((0x1f7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U]) 
           | (0xfffffff8U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__163__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 3U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U] 
        = ((0x1fbU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U]) 
           | (0xfffffffcU & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__162__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U] 
        = ((0x1fdU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U]) 
           | (0xfffffffeU & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__161__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 1U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U] 
        = ((0x1feU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[5U]) 
           | (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__160__KET____DOT__u_soc_event_queue__DOT__r_event_count)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0x7fffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0x80000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__159__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1fU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xbfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xc0000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__158__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1eU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xdfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xe0000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__157__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1dU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xefffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xf0000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__156__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xf7ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xf8000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__155__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1bU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xfbffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xfc000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__154__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1aU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xfdffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xfe000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__153__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x19U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xfeffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xff000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__152__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xff7fffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xff800000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__151__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x17U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xffbfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xffc00000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__150__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x16U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xffdfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xffe00000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__149__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x15U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xffefffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xfff00000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__148__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xfff7ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xfff80000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__147__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x13U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xfffbffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xfffc0000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__146__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x12U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xfffdffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xfffe0000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__145__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x11U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xfffeffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xffff0000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__144__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xffff7fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xffff8000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__143__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xfU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xffffbfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xffffc000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__142__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xffffdfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xffffe000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__141__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xdU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xffffefffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xfffff000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__140__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xfffff7ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xfffff800U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__139__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xbU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xfffffbffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xfffffc00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__138__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xfffffdffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xfffffe00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__137__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 9U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xfffffeffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xffffff00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__136__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xffffff7fU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xffffff80U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__135__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 7U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xffffffbfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xffffffc0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__134__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xffffffdfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xffffffe0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__133__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 5U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xffffffefU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xfffffff0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__132__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xfffffff7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xfffffff8U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__131__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 3U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xfffffffbU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xfffffffcU & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__130__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xfffffffdU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0xfffffffeU & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__129__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 1U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U] 
        = ((0xfffffffeU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[4U]) 
           | (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__128__KET____DOT__u_soc_event_queue__DOT__r_event_count)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0x7fffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0x80000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__127__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1fU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xbfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xc0000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__126__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1eU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xdfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xe0000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__125__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1dU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xefffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xf0000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__124__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xf7ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xf8000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__123__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1bU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xfbffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xfc000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__122__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1aU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xfdffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xfe000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__121__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x19U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xfeffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xff000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__120__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xff7fffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xff800000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__119__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x17U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xffbfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xffc00000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__118__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x16U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xffdfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xffe00000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__117__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x15U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xffefffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xfff00000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__116__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xfff7ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xfff80000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__115__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x13U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xfffbffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xfffc0000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__114__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x12U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xfffdffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xfffe0000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__113__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x11U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xfffeffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xffff0000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__112__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xffff7fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xffff8000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__111__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xfU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xffffbfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xffffc000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__110__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xffffdfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xffffe000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__109__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xdU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xffffefffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xfffff000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__108__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xfffff7ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xfffff800U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__107__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xbU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xfffffbffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xfffffc00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__106__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xfffffdffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xfffffe00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__105__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 9U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xfffffeffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xffffff00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__104__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xffffff7fU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xffffff80U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__103__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 7U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xffffffbfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xffffffc0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__102__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xffffffdfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xffffffe0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__101__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 5U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xffffffefU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xfffffff0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__100__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xfffffff7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xfffffff8U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__99__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 3U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xfffffffbU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xfffffffcU & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__98__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xfffffffdU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0xfffffffeU & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__97__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 1U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U] 
        = ((0xfffffffeU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[3U]) 
           | (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__96__KET____DOT__u_soc_event_queue__DOT__r_event_count)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0x7fffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0x80000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__95__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1fU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xbfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xc0000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__94__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1eU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xdfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xe0000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__93__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1dU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xefffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xf0000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__92__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xf7ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xf8000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__91__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1bU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xfbffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xfc000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__90__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1aU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xfdffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xfe000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__89__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x19U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xfeffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xff000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__88__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xff7fffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xff800000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__87__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x17U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xffbfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xffc00000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__86__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x16U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xffdfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xffe00000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__85__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x15U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xffefffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xfff00000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__84__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xfff7ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xfff80000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__83__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x13U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xfffbffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xfffc0000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__82__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x12U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xfffdffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xfffe0000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__81__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x11U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xfffeffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xffff0000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__80__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xffff7fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xffff8000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__79__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xfU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xffffbfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xffffc000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__78__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xffffdfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xffffe000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__77__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xdU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xffffefffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xfffff000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__76__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xfffff7ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xfffff800U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__75__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xbU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xfffffbffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xfffffc00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__74__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xfffffdffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xfffffe00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__73__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 9U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xfffffeffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xffffff00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__72__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xffffff7fU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xffffff80U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__71__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 7U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xffffffbfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xffffffc0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__70__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xffffffdfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xffffffe0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__69__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 5U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xffffffefU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xfffffff0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__68__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xfffffff7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xfffffff8U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__67__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 3U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xfffffffbU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xfffffffcU & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__66__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xfffffffdU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0xfffffffeU & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__65__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 1U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U] 
        = ((0xfffffffeU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[2U]) 
           | (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__64__KET____DOT__u_soc_event_queue__DOT__r_event_count)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0x7fffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0x80000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__63__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1fU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xbfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xc0000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__62__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1eU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xdfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xe0000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__61__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1dU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xefffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xf0000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__60__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xf7ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xf8000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__59__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1bU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xfbffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xfc000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__58__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1aU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xfdffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xfe000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__57__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x19U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xfeffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xff000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__56__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xff7fffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xff800000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__55__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x17U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xffbfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xffc00000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__54__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x16U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xffdfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xffe00000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__53__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x15U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xffefffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xfff00000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__52__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xfff7ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xfff80000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__51__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x13U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xfffbffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xfffc0000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__50__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x12U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xfffdffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xfffe0000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__49__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x11U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xfffeffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xffff0000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__48__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xffff7fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xffff8000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__47__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xfU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xffffbfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xffffc000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__46__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xffffdfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xffffe000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__45__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xdU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xffffefffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xfffff000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__44__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xfffff7ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xfffff800U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__43__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xbU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xfffffbffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xfffffc00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__42__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xfffffdffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xfffffe00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__41__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 9U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xfffffeffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xffffff00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__40__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xffffff7fU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xffffff80U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__39__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 7U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xffffffbfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xffffffc0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__38__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xffffffdfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xffffffe0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__37__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 5U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xffffffefU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xfffffff0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__36__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xfffffff7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xfffffff8U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__35__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 3U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xfffffffbU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xfffffffcU & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__34__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xfffffffdU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0xfffffffeU & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__33__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 1U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U] 
        = ((0xfffffffeU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[1U]) 
           | (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__32__KET____DOT__u_soc_event_queue__DOT__r_event_count)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0x7fffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0x80000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__31__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1fU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xbfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xc0000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__30__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1eU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xdfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xe0000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__29__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1dU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xefffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xf0000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__28__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xf7ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xf8000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__27__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1bU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xfbffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xfc000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__26__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x1aU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xfdffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xfe000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__25__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x19U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xfeffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xff000000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__24__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xff7fffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xff800000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__23__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x17U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xffbfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xffc00000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__22__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x16U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xffdfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xffe00000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__21__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x15U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xffefffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xfff00000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__20__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xfff7ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xfff80000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__19__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x13U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xfffbffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xfffc0000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__18__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x12U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xfffdffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xfffe0000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__17__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x11U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xfffeffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xffff0000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__16__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xffff7fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xffff8000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__15__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xfU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xffffbfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xffffc000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__14__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xffffdfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xffffe000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__13__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xdU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xffffefffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xfffff000U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__12__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xfffff7ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xfffff800U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__11__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xbU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xfffffbffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xfffffc00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__10__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xfffffdffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xfffffe00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__9__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 9U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xfffffeffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xffffff00U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__8__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xffffff7fU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xffffff80U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__7__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 7U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xffffffbfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xffffffc0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__6__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xffffffdfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xffffffe0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__5__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 5U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xffffffefU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xfffffff0U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__4__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xfffffff7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xfffffff8U & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__3__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 3U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xfffffffbU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xfffffffcU & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__2__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xfffffffdU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0xfffffffeU & ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__1__KET____DOT__u_soc_event_queue__DOT__r_event_count)) 
                             << 1U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U] 
        = ((0xfffffffeU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__s_req[0U]) 
           | (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__genblk1__BRA__0__KET____DOT__u_soc_event_queue__DOT__r_event_count)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__frwf_frfu_cwf_wr_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrwf_INST__DOT__rfw_stm_cs) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrwf_INST__DOT__rfw_stm_cs) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrwf_INST__DOT__rfw_stm_cs))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__frwf_frfu_cwf_wr_en = 1U;
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__frwf_frfu_rd_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrwf_INST__DOT__rfw_stm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrwf_INST__DOT__rfw_stm_cs))) {
            if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrwf_INST__DOT__rfw_stm_cs))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__frwf_frfu_rd_en = 1U;
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__frwf_frfu_wr_en = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrwf_INST__DOT__rfw_stm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrwf_INST__DOT__rfw_stm_cs))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__fcbrwf_INST__DOT__rfw_stm_cs)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__U_fcb__DOT__frwf_frfu_wr_en = 1U;
            }
        }
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_reset) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_sync1 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_sync0;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll3_lock_sync0 
            = (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__apb_fll_if_i__PREADY)) 
                & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__penable)) 
               & 1U);
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll1_lock_sync0 
            = (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__apb_fll_if_i__PREADY)) 
                & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__penable)) 
               & 1U);
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll2_lock_sync0 
            = (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__apb_fll_if_i__PREADY)) 
                & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__penable)) 
               & 1U);
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_sync1 = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll3_lock_sync0 = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll1_lock_sync0 = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__apb_fll_if_i__DOT__fll2_lock_sync0 = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pready 
        = ((0x7fdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pready)) 
           | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PREADY) 
              << 1U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__prdata[1U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__PRDATA;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xfffffffeU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (1U & ((2U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                     ? (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out))
                     : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xfffffffdU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (2U & (((8U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                      ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                    >> 1U))) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                                                >> 2U)) 
                    << 1U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xfffffffbU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (4U & (((0x20U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                      ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                    >> 2U))) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                                                >> 4U)) 
                    << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xfffffff7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (8U & (((0x80U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                      ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                    >> 3U))) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                                                >> 6U)) 
                    << 3U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xffffffefU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x10U & (((0x200U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                         ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                       >> 4U))) : (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                                                   >> 8U)) 
                       << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xffffffdfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x20U & (((0x800U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                         ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                       >> 5U))) : (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                                                   >> 0xaU)) 
                       << 5U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xffffffbfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x40U & (((0x2000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                         ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                       >> 6U))) : (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                                                   >> 0xcU)) 
                       << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xffffff7fU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x80U & (((0x8000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                         ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                       >> 7U))) : (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                                                   >> 0xeU)) 
                       << 7U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xfffffeffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x100U & (((0x20000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                          ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                        >> 8U))) : 
                         (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                          >> 0x10U)) << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xfffffdffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x200U & (((0x80000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                          ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                        >> 9U))) : 
                         (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                          >> 0x12U)) << 9U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xfffffbffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x400U & (((0x200000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                          ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                        >> 0xaU))) : 
                         (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                          >> 0x14U)) << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xfffff7ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x800U & (((0x800000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                          ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                        >> 0xbU))) : 
                         (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                          >> 0x16U)) << 0xbU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xffffefffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x1000U & (((0x2000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                           ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                         >> 0xcU)))
                           : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                              >> 0x18U)) << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xffffdfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x2000U & (((0x8000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                           ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                         >> 0xdU)))
                           : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                              >> 0x1aU)) << 0xdU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xffffbfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x4000U & (((0x20000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                           ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                         >> 0xeU)))
                           : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                              >> 0x1cU)) << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xffff7fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x8000U & (((0x80000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U])
                           ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                         >> 0xfU)))
                           : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                              >> 0x1eU)) << 0xfU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xfffeffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x10000U & (((2U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                            ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                          >> 0x10U)))
                            : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U]) 
                          << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xfffdffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x20000U & (((8U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                            ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                          >> 0x11U)))
                            : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                               >> 2U)) << 0x11U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xfffbffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x40000U & (((0x20U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                            ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                          >> 0x12U)))
                            : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                               >> 4U)) << 0x12U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xfff7ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x80000U & (((0x80U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                            ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                          >> 0x13U)))
                            : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                               >> 6U)) << 0x13U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xffefffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x100000U & (((0x200U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                             ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                           >> 0x14U)))
                             : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                                >> 8U)) << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xffdfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x200000U & (((0x800U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                             ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                           >> 0x15U)))
                             : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                                >> 0xaU)) << 0x15U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xffbfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x400000U & (((0x2000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                             ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                           >> 0x16U)))
                             : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                                >> 0xcU)) << 0x16U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xff7fffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x800000U & (((0x8000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                             ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                           >> 0x17U)))
                             : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                                >> 0xeU)) << 0x17U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xfeffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x1000000U & (((0x20000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                              ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                            >> 0x18U)))
                              : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                                 >> 0x10U)) << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xfdffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x2000000U & (((0x80000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                              ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                            >> 0x19U)))
                              : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                                 >> 0x12U)) << 0x19U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xfbffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x4000000U & (((0x200000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                              ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                            >> 0x1aU)))
                              : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                                 >> 0x14U)) << 0x1aU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xf7ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x8000000U & (((0x800000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                              ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                            >> 0x1bU)))
                              : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                                 >> 0x16U)) << 0x1bU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xefffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x10000000U & (((0x2000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                               ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                             >> 0x1cU)))
                               : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                                  >> 0x18U)) << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xdfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x20000000U & (((0x8000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                               ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                             >> 0x1dU)))
                               : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                                  >> 0x1aU)) << 0x1dU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0xbfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x40000000U & (((0x20000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                               ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                             >> 0x1eU)))
                               : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                                  >> 0x1cU)) << 0x1eU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir 
        = ((0x7fffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_dir) 
           | (0x80000000U & (((0x80000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U])
                               ? (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                             >> 0x1fU)))
                               : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                                  >> 0x1eU)) << 0x1fU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xfffffffeU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                    & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xfffffffdU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (2U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                     >> 1U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                        >> 1U)) << 1U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xfffffffbU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (4U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                     >> 2U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                        >> 2U)) << 2U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xfffffff7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (8U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                     >> 3U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                        >> 3U)) << 3U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xffffffefU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x10U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                        >> 4U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                           >> 4U)) 
                                  << 4U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xffffffdfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x20U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                        >> 5U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                           >> 5U)) 
                                  << 5U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xffffffbfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x40U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                        >> 6U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                           >> 6U)) 
                                  << 6U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xffffff7fU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x80U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                        >> 7U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                           >> 7U)) 
                                  << 7U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xfffffeffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x100U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                         >> 8U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                            >> 8U)) 
                                   << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xfffffdffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x200U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                         >> 9U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                            >> 9U)) 
                                   << 9U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xfffffbffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x400U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                         >> 0xaU) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                              >> 0xaU)) 
                                     << 0xaU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xfffff7ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x800U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                         >> 0xbU) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                              >> 0xbU)) 
                                     << 0xbU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xffffefffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x1000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                          >> 0xcU) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                               >> 0xcU)) 
                                      << 0xcU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xffffdfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x2000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                          >> 0xdU) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                               >> 0xdU)) 
                                      << 0xdU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xffffbfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x4000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                          >> 0xeU) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                               >> 0xeU)) 
                                      << 0xeU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xffff7fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x8000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[0U] 
                          >> 0xfU) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                               >> 0xfU)) 
                                      << 0xfU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xfffeffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x10000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                           & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                      >> 0x10U))) << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xfffdffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x20000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                           << 0xfU) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                >> 0x11U)) 
                                       << 0x11U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xfffbffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x40000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                           << 0xeU) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                >> 0x12U)) 
                                       << 0x12U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xfff7ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x80000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                           << 0xdU) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                >> 0x13U)) 
                                       << 0x13U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xffefffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x100000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                            << 0xcU) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                 >> 0x14U)) 
                                        << 0x14U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xffdfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x200000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                            << 0xbU) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                 >> 0x15U)) 
                                        << 0x15U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xffbfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x400000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                            << 0xaU) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                 >> 0x16U)) 
                                        << 0x16U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xff7fffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x800000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                            << 9U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                               >> 0x17U)) 
                                      << 0x17U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xfeffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x1000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                             << 8U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                >> 0x18U)) 
                                       << 0x18U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xfdffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x2000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                             << 7U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                >> 0x19U)) 
                                       << 0x19U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xfbffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x4000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                             << 6U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                >> 0x1aU)) 
                                       << 0x1aU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xf7ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x8000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                             << 5U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                >> 0x1bU)) 
                                       << 0x1bU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xefffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x10000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                              << 4U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                 >> 0x1cU)) 
                                        << 0x1cU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xdfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x20000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                              << 3U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                 >> 0x1dU)) 
                                        << 0x1dU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0xbfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x40000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                              << 2U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                 >> 0x1eU)) 
                                        << 0x1eU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out 
        = ((0x7fffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT____Vcellout__i_apb_gpio__gpio_out) 
           | (0x80000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_dir[1U] 
                              << 1U) & ((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_out 
                                                 >> 0x1fU)) 
                                        << 0x1fU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xfffffffeU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                    & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xfffffffeU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (1U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                     >> 1U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xfffffffeU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | ((((0U == (7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U])) 
                & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in))) 
               & (~ vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int)) 
              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xfffffffeU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | ((((4U == (7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U])) 
                & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in)) 
               & (~ vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int)) 
              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xfffffffeU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten) 
                      & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                         | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                     | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                    | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xfffffffdU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (2U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                     >> 2U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xfffffffdU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (2U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                     >> 3U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xfffffffdU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 0x1dU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                             >> 3U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 1U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                               >> 1U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 1U))) << 1U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xfffffffdU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 0x1dU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                             >> 3U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 1U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                           >> 1U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 1U))) << 1U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xfffffffdU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (2U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                >> 1U)) << 1U) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                                                  | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                     | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                    | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xfffffffbU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (4U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                     >> 4U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xfffffffbU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (4U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                     >> 5U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xfffffffbU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 0x1aU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                             >> 6U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 2U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                               >> 2U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 2U))) << 2U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xfffffffbU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 0x1aU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                             >> 6U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 2U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                           >> 2U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 2U))) << 2U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xfffffffbU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (4U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                >> 2U)) << 2U) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                                                  | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                     | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                    | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xfffffff7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (8U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                     >> 6U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xfffffff7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (8U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                     >> 7U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xfffffff7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 0x17U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                             >> 9U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 3U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                               >> 3U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 3U))) << 3U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xfffffff7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 0x17U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                             >> 9U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 3U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                           >> 3U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 3U))) << 3U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xfffffff7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (8U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                >> 3U)) << 3U) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                                                  | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                     | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                    | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xffffffefU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x10U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                        >> 8U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xffffffefU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x10U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                        >> 9U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xffffffefU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 0x14U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                             >> 0xcU)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 4U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                               >> 4U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 4U))) << 4U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xffffffefU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 0x14U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                             >> 0xcU)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 4U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                           >> 4U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 4U))) << 4U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xffffffefU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x10U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                   >> 4U)) << 4U) & 
                         (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                          | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                        | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                       | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xffffffdfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x20U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                        >> 0xaU) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xffffffdfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x20U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                        >> 0xbU) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xffffffdfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 0x11U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                             >> 0xfU)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 5U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                               >> 5U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 5U))) << 5U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xffffffdfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 0x11U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                             >> 0xfU)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 5U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                           >> 5U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 5U))) << 5U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xffffffdfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x20U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                   >> 5U)) << 5U) & 
                         (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                          | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                        | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                       | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xffffffbfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x40U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                        >> 0xcU) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xffffffbfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x40U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                        >> 0xdU) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xffffffbfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 0xeU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                            >> 0x12U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 6U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                               >> 6U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 6U))) << 6U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xffffffbfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 0xeU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                            >> 0x12U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 6U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                           >> 6U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 6U))) << 6U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xffffffbfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x40U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                   >> 6U)) << 6U) & 
                         (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                          | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                        | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                       | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xffffff7fU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x80U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                        >> 0xeU) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xffffff7fU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x80U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                        >> 0xfU) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xffffff7fU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 0xbU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                            >> 0x15U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 7U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                               >> 7U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 7U))) << 7U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xffffff7fU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 0xbU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                            >> 0x15U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 7U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                           >> 7U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 7U))) << 7U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xffffff7fU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x80U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                   >> 7U)) << 7U) & 
                         (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                          | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                        | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                       | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xfffffeffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x100U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                         >> 0x10U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xfffffeffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x100U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                         >> 0x11U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xfffffeffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 8U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                          >> 0x18U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 8U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                               >> 8U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 8U))) << 8U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xfffffeffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 8U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                          >> 0x18U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 8U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                           >> 8U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 8U))) << 8U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xfffffeffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x100U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                    >> 8U)) << 8U) 
                          & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                         | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                        | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xfffffdffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x200U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                         >> 0x12U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xfffffdffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x200U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                         >> 0x13U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xfffffdffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 5U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                          >> 0x1bU)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 9U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                               >> 9U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 9U))) << 9U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xfffffdffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 5U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                          >> 0x1bU)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 9U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                           >> 9U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 9U))) << 9U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xfffffdffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x200U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                    >> 9U)) << 9U) 
                          & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                         | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                        | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xfffffbffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x400U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                         >> 0x14U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xfffffbffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x400U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                         >> 0x15U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xfffffbffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 2U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                          >> 0x1eU)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0xaU)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                 >> 0xaU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0xaU))) << 0xaU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xfffffbffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                << 2U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[0U] 
                                          >> 0x1eU)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0xaU))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                             >> 0xaU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0xaU))) << 0xaU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xfffffbffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x400U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                    >> 0xaU)) << 0xaU) 
                          & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                         | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                        | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xfffff7ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x800U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                         << 0xaU) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xfffff7ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x800U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                         << 9U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xfffff7ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0x1fU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                             >> 1U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0xbU)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                 >> 0xbU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0xbU))) << 0xbU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xfffff7ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0x1fU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                             >> 1U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0xbU))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                             >> 0xbU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0xbU))) << 0xbU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xfffff7ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x800U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                    >> 0xbU)) << 0xbU) 
                          & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                         | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                        | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xffffefffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x1000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                          << 8U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xffffefffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x1000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                          << 7U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xffffefffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0x1cU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                             >> 4U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0xcU)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                 >> 0xcU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0xcU))) << 0xcU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xffffefffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0x1cU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                             >> 4U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0xcU))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                             >> 0xcU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0xcU))) << 0xcU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xffffefffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x1000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                     >> 0xcU)) << 0xcU) 
                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                              | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                          | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                         | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xffffdfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x2000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                          << 6U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xffffdfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x2000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                          << 5U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xffffdfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0x19U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                             >> 7U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0xdU)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                 >> 0xdU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0xdU))) << 0xdU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xffffdfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0x19U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                             >> 7U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0xdU))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                             >> 0xdU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0xdU))) << 0xdU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xffffdfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x2000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                     >> 0xdU)) << 0xdU) 
                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                              | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                          | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                         | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xffffbfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x4000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                          << 4U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xffffbfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x4000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                          << 3U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xffffbfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0x16U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                             >> 0xaU)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0xeU)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                 >> 0xeU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0xeU))) << 0xeU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xffffbfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0x16U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                             >> 0xaU)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0xeU))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                             >> 0xeU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0xeU))) << 0xeU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xffffbfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x4000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                     >> 0xeU)) << 0xeU) 
                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                              | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                          | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                         | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xffff7fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x8000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                          << 2U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xffff7fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x8000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                          << 1U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xffff7fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0x13U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                             >> 0xdU)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0xfU)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                 >> 0xfU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0xfU))) << 0xfU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xffff7fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0x13U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                             >> 0xdU)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0xfU))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                             >> 0xfU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0xfU))) << 0xfU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xffff7fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x8000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                     >> 0xfU)) << 0xfU) 
                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                              | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                          | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                         | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xfffeffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x10000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                          & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xfffeffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x10000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                           >> 1U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xfffeffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0x10U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                             >> 0x10U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x10U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x10U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x10U))) << 0x10U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xfffeffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0x10U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                             >> 0x10U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x10U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x10U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x10U))) << 0x10U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xfffeffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x10000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                      >> 0x10U)) << 0x10U) 
                            & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                               | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                           | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                          | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xfffdffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x20000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                           >> 2U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xfffdffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x20000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                           >> 3U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xfffdffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0xdU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                            >> 0x13U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x11U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x11U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x11U))) << 0x11U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xfffdffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0xdU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                            >> 0x13U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x11U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x11U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x11U))) << 0x11U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xfffdffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x20000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                      >> 0x11U)) << 0x11U) 
                            & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                               | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                           | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                          | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xfffbffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x40000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                           >> 4U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xfffbffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x40000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                           >> 5U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xfffbffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0xaU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                            >> 0x16U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x12U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x12U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x12U))) << 0x12U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xfffbffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 0xaU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                            >> 0x16U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x12U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x12U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x12U))) << 0x12U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xfffbffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x40000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                      >> 0x12U)) << 0x12U) 
                            & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                               | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                           | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                          | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xfff7ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x80000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                           >> 6U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xfff7ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x80000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                           >> 7U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xfff7ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 7U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                          >> 0x19U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x13U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x13U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x13U))) << 0x13U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xfff7ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 7U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                          >> 0x19U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x13U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x13U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x13U))) << 0x13U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xfff7ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x80000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                      >> 0x13U)) << 0x13U) 
                            & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                               | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                           | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                          | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xffefffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x100000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                            >> 8U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xffefffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x100000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                            >> 9U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xffefffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 4U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                          >> 0x1cU)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x14U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x14U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x14U))) << 0x14U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xffefffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 4U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                          >> 0x1cU)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x14U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x14U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x14U))) << 0x14U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xffefffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x100000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                       >> 0x14U)) << 0x14U) 
                             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                                | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                            | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                           | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xffdfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x200000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                            >> 0xaU) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xffdfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x200000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                            << 0x15U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xffdfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 1U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                          >> 0x1fU)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x15U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x15U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x15U))) << 0x15U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xffdfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                << 1U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[1U] 
                                          >> 0x1fU)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x15U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x15U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x15U))) << 0x15U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xffdfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x200000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                       >> 0x15U)) << 0x15U) 
                             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                                | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                            | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                           | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xffbfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x400000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                            << 0x14U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xffbfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x400000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                            << 0x13U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xffbfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 0x1eU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                             >> 2U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x16U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x16U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x16U))) << 0x16U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xffbfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 0x1eU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                             >> 2U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x16U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x16U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x16U))) << 0x16U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xffbfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x400000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                       >> 0x16U)) << 0x16U) 
                             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                                | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                            | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                           | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xff7fffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x800000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                            << 0x12U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xff7fffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x800000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                            << 0x11U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xff7fffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 0x1bU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                             >> 5U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x17U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x17U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x17U))) << 0x17U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xff7fffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 0x1bU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                             >> 5U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x17U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x17U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x17U))) << 0x17U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xff7fffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x800000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                       >> 0x17U)) << 0x17U) 
                             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                                | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                            | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                           | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xfeffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x1000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                             << 0x10U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xfeffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x1000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                             << 0xfU) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xfeffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 0x18U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                             >> 8U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x18U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x18U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x18U))) << 0x18U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xfeffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 0x18U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                             >> 8U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x18U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x18U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x18U))) << 0x18U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xfeffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x1000000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                        >> 0x18U)) 
                               << 0x18U) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                                            | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                            | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xfdffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x2000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                             << 0xeU) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xfdffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x2000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                             << 0xdU) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xfdffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 0x15U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                             >> 0xbU)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x19U)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x19U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x19U))) << 0x19U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xfdffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 0x15U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                             >> 0xbU)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x19U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x19U))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x19U))) << 0x19U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xfdffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x2000000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                        >> 0x19U)) 
                               << 0x19U) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                                            | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                            | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xfbffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x4000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                             << 0xcU) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xfbffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x4000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                             << 0xbU) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xfbffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 0x12U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                             >> 0xeU)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x1aU)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x1aU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x1aU))) << 0x1aU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xfbffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 0x12U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                             >> 0xeU)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x1aU))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x1aU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x1aU))) << 0x1aU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xfbffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x4000000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                        >> 0x1aU)) 
                               << 0x1aU) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                                            | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                            | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xf7ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x8000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                             << 0xaU) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xf7ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x8000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                             << 9U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xf7ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 0xfU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                            >> 0x11U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x1bU)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x1bU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x1bU))) << 0x1bU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xf7ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 0xfU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                            >> 0x11U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x1bU))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x1bU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x1bU))) << 0x1bU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xf7ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x8000000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                        >> 0x1bU)) 
                               << 0x1bU) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                                            | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                            | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xefffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x10000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                              << 8U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xefffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x10000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                              << 7U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xefffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 0xcU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                            >> 0x14U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x1cU)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x1cU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x1cU))) << 0x1cU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xefffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 0xcU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                            >> 0x14U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x1cU))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x1cU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x1cU))) << 0x1cU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xefffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x10000000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                         >> 0x1cU)) 
                                << 0x1cU) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                              | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xdfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x20000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                              << 6U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xdfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x20000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                              << 5U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xdfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 9U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                          >> 0x17U)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x1dU)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x1dU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x1dU))) << 0x1dU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xdfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 9U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                          >> 0x17U)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x1dU))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x1dU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x1dU))) << 0x1dU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xdfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x20000000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                         >> 0x1dU)) 
                                << 0x1dU) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                              | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0xbfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x40000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                              << 4U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0xbfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x40000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                              << 3U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0xbfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 6U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                          >> 0x1aU)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x1eU)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x1eU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x1eU))) << 0x1eU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0xbfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 6U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                          >> 0x1aU)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x1eU))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x1eU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x1eU))) << 0x1eU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0xbfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x40000000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                         >> 0x1eU)) 
                                << 0x1eU) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                              | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
        = ((0x7fffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall) 
           | (0x80000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                              << 2U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_fall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise 
        = ((0x7fffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise) 
           | (0x80000000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                              << 1U) & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_rise)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low 
        = ((0x7fffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
           | (((((0U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 3U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                          >> 0x1dU)))) 
                 & (~ (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                               >> 0x1fU)))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                                  >> 0x1fU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x1fU))) << 0x1fU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi 
        = ((0x7fffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi) 
           | (((((4U == (7U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[3U] 
                                << 3U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inttype[2U] 
                                          >> 0x1dU)))) 
                 & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_in 
                            >> 0x1fU))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_block_int 
                                              >> 0x1fU))) 
               & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                          >> 0x1fU))) << 0x1fU));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events 
        = ((0x7fffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_gpio_events) 
           | (0x80000000U & (((((IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__r_gpio_inten 
                                         >> 0x1fU)) 
                                << 0x1fU) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_fall 
                                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_rise)) 
                              | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_low) 
                             | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_gpio__DOT__s_is_int_hi)));
}
