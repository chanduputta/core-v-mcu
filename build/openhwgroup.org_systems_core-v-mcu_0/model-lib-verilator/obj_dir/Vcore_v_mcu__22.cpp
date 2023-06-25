// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_v_mcu.h for the primary calling header

#include "Vcore_v_mcu.h"
#include "Vcore_v_mcu__Syms.h"

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__199(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__199\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__s_ctrl_update_all 
        = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer1_start) 
            & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_controller__DOT__r_active))) 
           | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__s_cnt_evt));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__s_ctrl_rst 
        = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer1_start) 
            & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_controller__DOT__r_active))) 
           | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer1_rst));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__s_ctrl_update_cnt 
        = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer1_start) 
            & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_controller__DOT__r_active))) 
           | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer1_update));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_pending_update 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_pending_update;
    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__s_ctrl_update_cnt) 
         | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_pending_update))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_pending_update 
            = (1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__s_ctrl_update_cnt) 
                         & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_controller__DOT__r_active)))) 
                     & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_is_update))));
    } else {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__s_ctrl_rst) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_pending_update = 0U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_do_update = 0U;
    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__s_ctrl_update_cnt) 
         | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_pending_update))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_do_update 
            = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__s_ctrl_update_cnt) 
                & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_controller__DOT__r_active))) 
               | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_is_update) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__s_presc_evt)));
    } else {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__s_ctrl_rst) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_do_update = 1U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_end 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_end;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_do_update) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_end 
            = (0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer1_th 
                          >> 0x10U));
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_sawtooth 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_sawtooth;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_do_update) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_sawtooth 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer1_saw;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_start 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_start;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_do_update) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_start 
            = (0xffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer1_th);
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_direction 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_direction;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_do_update) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_direction = 0U;
    } else {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__s_presc_evt) 
             & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_controller__DOT__r_active))) {
            if (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_direction)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_counter) 
                    == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_end)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_direction 
                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_sawtooth)));
            } else {
                if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_direction) 
                     & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_counter) 
                        == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_start)))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_direction = 0U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_counter 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_counter;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_do_update) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_counter 
            = (0xffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer1_th);
    } else {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__s_presc_evt) 
             & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_controller__DOT__r_active))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__s_counter 
                = (0xffffU & (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_direction)) 
                               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_counter) 
                                  == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_end)))
                               ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_sawtooth)
                                   ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_start)
                                   : ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_counter) 
                                      - (IData)(1U)))
                               : (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_direction) 
                                   & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_counter) 
                                      == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_start)))
                                   ? ((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_counter))
                                   : ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_direction)
                                       ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_counter) 
                                          - (IData)(1U))
                                       : ((IData)(1U) 
                                          + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim1__DOT__u_counter__DOT__r_counter))))));
        }
    }
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__200(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__200\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__s_ctrl_update_all 
        = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer2_start) 
            & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_controller__DOT__r_active))) 
           | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__s_cnt_evt));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__s_ctrl_rst 
        = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer2_start) 
            & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_controller__DOT__r_active))) 
           | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer2_rst));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__s_ctrl_update_cnt 
        = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer2_start) 
            & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_controller__DOT__r_active))) 
           | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer2_update));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_pending_update 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_pending_update;
    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__s_ctrl_update_cnt) 
         | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_pending_update))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_pending_update 
            = (1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__s_ctrl_update_cnt) 
                         & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_controller__DOT__r_active)))) 
                     & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_is_update))));
    } else {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__s_ctrl_rst) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_pending_update = 0U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_do_update = 0U;
    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__s_ctrl_update_cnt) 
         | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_pending_update))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_do_update 
            = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__s_ctrl_update_cnt) 
                & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_controller__DOT__r_active))) 
               | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_is_update) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__s_presc_evt)));
    } else {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__s_ctrl_rst) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_do_update = 1U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_end 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_end;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_do_update) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_end 
            = (0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer2_th 
                          >> 0x10U));
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_sawtooth 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_sawtooth;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_do_update) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_sawtooth 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer2_saw;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_start 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_start;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_do_update) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_start 
            = (0xffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer2_th);
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_direction 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_direction;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_do_update) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_direction = 0U;
    } else {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__s_presc_evt) 
             & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_controller__DOT__r_active))) {
            if (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_direction)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_counter) 
                    == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_end)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_direction 
                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_sawtooth)));
            } else {
                if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_direction) 
                     & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_counter) 
                        == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_start)))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_direction = 0U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_counter 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_counter;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_do_update) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_counter 
            = (0xffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer2_th);
    } else {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__s_presc_evt) 
             & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_controller__DOT__r_active))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__s_counter 
                = (0xffffU & (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_direction)) 
                               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_counter) 
                                  == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_end)))
                               ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_sawtooth)
                                   ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_start)
                                   : ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_counter) 
                                      - (IData)(1U)))
                               : (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_direction) 
                                   & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_counter) 
                                      == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_start)))
                                   ? ((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_counter))
                                   : ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_direction)
                                       ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_counter) 
                                          - (IData)(1U))
                                       : ((IData)(1U) 
                                          + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim2__DOT__u_counter__DOT__r_counter))))));
        }
    }
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__201(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__201\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__s_ctrl_update_all 
        = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer3_start) 
            & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_controller__DOT__r_active))) 
           | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__s_cnt_evt));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__s_ctrl_rst 
        = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer3_start) 
            & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_controller__DOT__r_active))) 
           | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer3_rst));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__s_ctrl_update_cnt 
        = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer3_start) 
            & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_controller__DOT__r_active))) 
           | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer3_update));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_pending_update 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_pending_update;
    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__s_ctrl_update_cnt) 
         | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_pending_update))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_pending_update 
            = (1U & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__s_ctrl_update_cnt) 
                         & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_controller__DOT__r_active)))) 
                     & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_is_update))));
    } else {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__s_ctrl_rst) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_pending_update = 0U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_do_update = 0U;
    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__s_ctrl_update_cnt) 
         | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_pending_update))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_do_update 
            = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__s_ctrl_update_cnt) 
                & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_controller__DOT__r_active))) 
               | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_is_update) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__s_presc_evt)));
    } else {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__s_ctrl_rst) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_do_update = 1U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_end 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_end;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_do_update) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_end 
            = (0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer3_th 
                          >> 0x10U));
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_sawtooth 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_sawtooth;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_do_update) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_sawtooth 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer3_saw;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_start 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_start;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_do_update) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_start 
            = (0xffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer3_th);
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_direction 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_direction;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_do_update) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_direction = 0U;
    } else {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__s_presc_evt) 
             & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_controller__DOT__r_active))) {
            if (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_direction)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_counter) 
                    == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_end)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_direction 
                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_sawtooth)));
            } else {
                if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_direction) 
                     & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_counter) 
                        == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_start)))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_direction = 0U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_counter 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_counter;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_do_update) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_counter 
            = (0xffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_apb_if__DOT__r_timer3_th);
    } else {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__s_presc_evt) 
             & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_controller__DOT__r_active))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__s_counter 
                = (0xffffU & (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_direction)) 
                               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_counter) 
                                  == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_end)))
                               ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_sawtooth)
                                   ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_start)
                                   : ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_counter) 
                                      - (IData)(1U)))
                               : (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_direction) 
                                   & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_counter) 
                                      == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_start)))
                                   ? ((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_counter))
                                   : ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_direction)
                                       ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_counter) 
                                          - (IData)(1U))
                                       : ((IData)(1U) 
                                          + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_adv_timer__DOT__u_tim3__DOT__u_counter__DOT__r_counter))))));
        }
    }
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__202(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__202\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__s_io_out = ((0xffffffffff7fULL 
                                          & vlTOPp->core_v_mcu__DOT__s_io_out) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                   << 0x12U) 
                                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                     >> 0xeU)))) 
                                                             & ((1U 
                                                                 != 
                                                                 (3U 
                                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                      << 0x12U) 
                                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                        >> 0xeU)))) 
                                                                & ((2U 
                                                                    == 
                                                                    (3U 
                                                                     & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                         << 0x12U) 
                                                                        | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                           >> 0xeU))))
                                                                    ? (IData)(vlTOPp->core_v_mcu__DOT__s_apbio_out)
                                                                    : 
                                                                   ((3U 
                                                                     == 
                                                                     (3U 
                                                                      & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                          << 0x12U) 
                                                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                            >> 0xeU)))) 
                                                                    & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__fpga_out[0U])))))) 
                                            << 7U));
    vlTOPp->core_v_mcu__DOT__s_io_out = ((0xfffffffffbffULL 
                                          & vlTOPp->core_v_mcu__DOT__s_io_out) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                   << 0xcU) 
                                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                     >> 0x14U)))) 
                                                             & ((1U 
                                                                 != 
                                                                 (3U 
                                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                      << 0xcU) 
                                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                        >> 0x14U)))) 
                                                                & ((2U 
                                                                    == 
                                                                    (3U 
                                                                     & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                         << 0xcU) 
                                                                        | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                           >> 0x14U))))
                                                                    ? (IData)(
                                                                              (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                               >> 3U))
                                                                    : 
                                                                   ((3U 
                                                                     == 
                                                                     (3U 
                                                                      & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                          << 0xcU) 
                                                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                            >> 0x14U)))) 
                                                                    & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__fpga_out[0U] 
                                                                       >> 3U))))))) 
                                            << 0xaU));
    vlTOPp->core_v_mcu__DOT__s_io_out = ((0xfffffffff7ffULL 
                                          & vlTOPp->core_v_mcu__DOT__s_io_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & ((0U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                      << 0xaU) 
                                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                        >> 0x16U))))
                                                                 ? (IData)(
                                                                           (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                            >> 0x20U))
                                                                 : 
                                                                ((1U 
                                                                  == 
                                                                  (3U 
                                                                   & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                       << 0xaU) 
                                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                         >> 0x16U))))
                                                                  ? (IData)(
                                                                            (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                             >> 0x2fU))
                                                                  : 
                                                                 ((2U 
                                                                   == 
                                                                   (3U 
                                                                    & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                        << 0xaU) 
                                                                       | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                          >> 0x16U))))
                                                                   ? (IData)(
                                                                             (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                              >> 4U))
                                                                   : 
                                                                  ((3U 
                                                                    == 
                                                                    (3U 
                                                                     & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                         << 0xaU) 
                                                                        | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                           >> 0x16U)))) 
                                                                   & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__fpga_out[0U] 
                                                                      >> 4U)))))))) 
                                            << 0xbU));
    vlTOPp->core_v_mcu__DOT__s_io_out = ((0xffffffffefffULL 
                                          & vlTOPp->core_v_mcu__DOT__s_io_out) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                   << 8U) 
                                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                     >> 0x18U)))) 
                                                             & ((1U 
                                                                 != 
                                                                 (3U 
                                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                      << 8U) 
                                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                        >> 0x18U)))) 
                                                                & ((2U 
                                                                    == 
                                                                    (3U 
                                                                     & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                         << 8U) 
                                                                        | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                           >> 0x18U))))
                                                                    ? (IData)(
                                                                              (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                               >> 5U))
                                                                    : 
                                                                   ((3U 
                                                                     == 
                                                                     (3U 
                                                                      & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                          << 8U) 
                                                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[0U] 
                                                                            >> 0x18U)))) 
                                                                    & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__fpga_out[0U] 
                                                                       >> 5U))))))) 
                                            << 0xcU));
    vlTOPp->core_v_mcu__DOT__s_io_out = ((0xfffffffdffffULL 
                                          & vlTOPp->core_v_mcu__DOT__s_io_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & ((0U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                      << 0x1eU) 
                                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                        >> 2U)))) 
                                                                | ((1U 
                                                                    == 
                                                                    (3U 
                                                                     & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                         << 0x1eU) 
                                                                        | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                           >> 2U))))
                                                                    ? (IData)(
                                                                              (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                               >> 0x28U))
                                                                    : 
                                                                   ((2U 
                                                                     == 
                                                                     (3U 
                                                                      & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                          << 0x1eU) 
                                                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                            >> 2U))))
                                                                     ? (IData)(
                                                                               (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                                >> 0xaU))
                                                                     : 
                                                                    ((3U 
                                                                      == 
                                                                      (3U 
                                                                       & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                           << 0x1eU) 
                                                                          | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                             >> 2U)))) 
                                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__fpga_out[0U] 
                                                                        >> 0xaU)))))))) 
                                            << 0x11U));
    vlTOPp->core_v_mcu__DOT__s_io_out = ((0xfffffffbffffULL 
                                          & vlTOPp->core_v_mcu__DOT__s_io_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & ((0U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                      << 0x1cU) 
                                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                        >> 4U)))) 
                                                                | ((1U 
                                                                    == 
                                                                    (3U 
                                                                     & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                         << 0x1cU) 
                                                                        | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                           >> 4U))))
                                                                    ? (IData)(
                                                                              (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                               >> 0x29U))
                                                                    : 
                                                                   ((2U 
                                                                     == 
                                                                     (3U 
                                                                      & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                          << 0x1cU) 
                                                                         | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                            >> 4U))))
                                                                     ? (IData)(
                                                                               (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                                >> 0xbU))
                                                                     : 
                                                                    ((3U 
                                                                      == 
                                                                      (3U 
                                                                       & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                           << 0x1cU) 
                                                                          | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                             >> 4U)))) 
                                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__fpga_out[0U] 
                                                                        >> 0xbU)))))))) 
                                            << 0x12U));
    vlTOPp->core_v_mcu__DOT__s_io_out = ((0xffffffdfffffULL 
                                          & vlTOPp->core_v_mcu__DOT__s_io_out) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                   << 0x16U) 
                                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                     >> 0xaU)))) 
                                                             & ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                      << 0x16U) 
                                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                        >> 0xaU))))
                                                                 ? (IData)(
                                                                           (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                            >> 0x24U))
                                                                 : 
                                                                ((2U 
                                                                  == 
                                                                  (3U 
                                                                   & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                       << 0x16U) 
                                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                         >> 0xaU))))
                                                                  ? (IData)(
                                                                            (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                             >> 0xeU))
                                                                  : 
                                                                 ((3U 
                                                                   == 
                                                                   (3U 
                                                                    & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                        << 0x16U) 
                                                                       | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                          >> 0xaU)))) 
                                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__fpga_out[0U] 
                                                                     >> 0xeU))))))) 
                                            << 0x15U));
    vlTOPp->core_v_mcu__DOT__s_io_out = ((0xffffffbfffffULL 
                                          & vlTOPp->core_v_mcu__DOT__s_io_out) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                   << 0x14U) 
                                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                     >> 0xcU)))) 
                                                             & ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                      << 0x14U) 
                                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                        >> 0xcU))))
                                                                 ? (IData)(
                                                                           (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                            >> 0x27U))
                                                                 : 
                                                                ((2U 
                                                                  == 
                                                                  (3U 
                                                                   & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                       << 0x14U) 
                                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                         >> 0xcU))))
                                                                  ? (IData)(
                                                                            (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                             >> 0xfU))
                                                                  : 
                                                                 ((3U 
                                                                   == 
                                                                   (3U 
                                                                    & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                        << 0x14U) 
                                                                       | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                          >> 0xcU)))) 
                                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__fpga_out[0U] 
                                                                     >> 0xfU))))))) 
                                            << 0x16U));
    vlTOPp->core_v_mcu__DOT__s_io_out = ((0xfffffdffffffULL 
                                          & vlTOPp->core_v_mcu__DOT__s_io_out) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                   << 0xeU) 
                                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                     >> 0x12U)))) 
                                                             & ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                      << 0xeU) 
                                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                        >> 0x12U))))
                                                                 ? (IData)(
                                                                           (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                            >> 0x21U))
                                                                 : 
                                                                ((2U 
                                                                  == 
                                                                  (3U 
                                                                   & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                       << 0xeU) 
                                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                         >> 0x12U))))
                                                                  ? (IData)(
                                                                            (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                             >> 0x12U))
                                                                  : 
                                                                 ((3U 
                                                                   == 
                                                                   (3U 
                                                                    & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                        << 0xeU) 
                                                                       | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[1U] 
                                                                          >> 0x12U)))) 
                                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__fpga_out[0U] 
                                                                     >> 0x12U))))))) 
                                            << 0x19U));
    vlTOPp->core_v_mcu__DOT__s_io_out = ((0xf7ffffffffffULL 
                                          & vlTOPp->core_v_mcu__DOT__s_io_out) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             & ((0U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                     >> 0x16U)))
                                                                 ? (IData)(
                                                                           (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                            >> 0x32U))
                                                                 : 
                                                                ((1U 
                                                                  == 
                                                                  (3U 
                                                                   & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                      >> 0x16U)))
                                                                  ? (IData)(vlTOPp->core_v_mcu__DOT__s_apbio_out)
                                                                  : 
                                                                 ((2U 
                                                                   == 
                                                                   (3U 
                                                                    & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                       >> 0x16U)))
                                                                   ? (IData)(
                                                                             (vlTOPp->core_v_mcu__DOT__s_apbio_out 
                                                                              >> 0x2eU))
                                                                   : 
                                                                  ((3U 
                                                                    == 
                                                                    (3U 
                                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_soc_ctrl__DOT__r_padmux[2U] 
                                                                        >> 0x16U))) 
                                                                   & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__fpga_out[1U] 
                                                                      >> 4U)))))))) 
                                            << 0x2bU));
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__203(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__203\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_uart_tx__DOT__reg_data_next 
        = (0x80U | (0x7fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_uart_tx__DOT__reg_data) 
                             >> 1U)));
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_uart_tx__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_uart_tx__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_uart_tx__DOT__CS)))) {
                if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_uart_tx__DOT__reg_data_next 
                        = (0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__data 
                                    >> (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                                                 << 3U))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__204(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__204\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_uart_tx__DOT__reg_data_next 
        = (0x80U | (0x7fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_uart_tx__DOT__reg_data) 
                             >> 1U)));
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_uart_tx__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_uart_tx__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_uart_tx__DOT__CS)))) {
                if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_uart_tx__DOT__reg_data_next 
                        = (0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__data 
                                    >> (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                                                 << 3U))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__205(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__205\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__write_tr__DOT__next_state 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__write_enable)
            ? ((0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__write_token) 
                         << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__write_token) 
                                          >> 7U))) : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__write_token));
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__206(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__206\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_dc_fifo_rx__DOT__u_din__DOT__write_tr__DOT__next_state 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_dc_fifo_rx__DOT__u_din__DOT__write_enable)
            ? ((0xeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_dc_fifo_rx__DOT__write_token) 
                        << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_dc_fifo_rx__DOT__write_token) 
                                         >> 3U))) : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_dc_fifo_rx__DOT__write_token));
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__207(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__207\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_dc_fifo_rx__DOT__u_din__DOT__write_tr__DOT__next_state 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_dc_fifo_rx__DOT__u_din__DOT__write_enable)
            ? ((0xeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_dc_fifo_rx__DOT__write_token) 
                        << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_dc_fifo_rx__DOT__write_token) 
                                         >> 3U))) : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_dc_fifo_rx__DOT__write_token));
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__208(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__208\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async 
        = (0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__data 
                    >> (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                                 << 3U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__read_tr__DOT__next_state 
        = (((~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))) 
            & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__u_reg_if__DOT__r_do_rst) 
               | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data_tx_ready)))
            ? ((0xeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__read_token) 
                        << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__read_token) 
                                         >> 3U))) : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__read_token));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__u_din__DOT__write_tr__DOT__next_state 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__u_din__DOT__write_enable)
            ? ((0xeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__write_token) 
                        << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__write_token) 
                                         >> 3U))) : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__write_token));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_div_num 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_div_num;
    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS)))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_div_num 
                            = ((0xff00U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_div_num)) 
                               | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async));
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_div_num 
                            = ((0xffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_div_num)) 
                               | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                                  << 8U));
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rpt_num 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num;
    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rpt_num 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num;
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rpt_num 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS)))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rpt_num 
                            = ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async))
                                ? 0U : (0x7fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                                                 - (IData)(1U))));
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rpt_num 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__u_din__DOT__stall)))) {
                        if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rpt_num 
                                = (0x7fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num) 
                                            - (IData)(1U)));
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                                  & (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                                      & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))))) {
                            if ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                                  & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits))) 
                                 & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rpt_num 
                                    = (0x7fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num) 
                                                - (IData)(1U)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data;
    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data;
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS)))) {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                         & (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                            = (0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data) 
                                        << 1U));
                    } else {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                                = (0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data) 
                                            << 1U));
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                         & (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                            = ((0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data) 
                                         << 1U)) | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_core_rxd));
                    } else {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                                = ((0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data) 
                                             << 1U)) 
                                   | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_core_rxd));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_ack 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_en_decode) 
           & (4U == (0xfU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                             >> 4U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_nack 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_en_decode) 
           & (6U == (0xfU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                             >> 4U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_start 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_en_decode) 
           & (0U == (0xfU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                             >> 4U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_stop 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_en_decode) 
           & (2U == (0xfU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                             >> 4U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_en_decode) 
           & (0xaU == (0xfU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                               >> 4U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait_ev 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_en_decode) 
           & (1U == (0xfU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                             >> 4U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_core_txd 
        = (1U & ((3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))
                  ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rd_ack)
                  : ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data) 
                     >> 7U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_sample_ev = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS)))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_start)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_stop)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait)))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait_ev) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_sample_ev = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rd_ack 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rd_ack;
    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rd_ack 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rd_ack;
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rd_ack 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rd_ack;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rd_ack 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rd_ack;
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS)))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_start)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_stop)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait_ev)))) {
                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_ack) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rd_ack = 0U;
                                        } else {
                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_nack) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rd_ack = 1U;
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
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 0U;
    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 0U;
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 0U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 0U;
                } else {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__u_din__DOT__stall)))) {
                        if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                        }
                    }
                } else {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                         & (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                    } else {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                         & (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                    } else {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                                  & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))))) {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS)))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_start) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                        } else {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_stop) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait_ev)))) {
                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_ack) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                                        } else {
                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_nack) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
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
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 0U;
    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 0U;
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 0U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 0U;
                } else {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 5U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 3U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__u_din__DOT__stall)))) {
                        if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 4U;
                        }
                    }
                } else {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                         & (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 4U;
                    } else {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 3U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                         & (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 3U;
                    } else {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 4U;
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                                  & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))))) {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 5U;
                        }
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS)))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_start) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 1U;
                        } else {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_stop) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 2U;
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait_ev)))) {
                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_ack) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 4U;
                                        } else {
                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_nack) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__0__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 4U;
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

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__209(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__209\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async 
        = (0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__data 
                    >> (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                                 << 3U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__read_tr__DOT__next_state 
        = (((~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))) 
            & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__u_reg_if__DOT__r_do_rst) 
               | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data_tx_ready)))
            ? ((0xeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__read_token) 
                        << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__read_token) 
                                         >> 3U))) : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__read_token));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__u_din__DOT__write_tr__DOT__next_state 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__u_din__DOT__write_enable)
            ? ((0xeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__write_token) 
                        << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__write_token) 
                                         >> 3U))) : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__write_token));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_div_num 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_div_num;
    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS)))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_div_num 
                            = ((0xff00U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_div_num)) 
                               | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async));
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_div_num 
                            = ((0xffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_div_num)) 
                               | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                                  << 8U));
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rpt_num 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num;
    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rpt_num 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num;
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rpt_num 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS)))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rpt_num 
                            = ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async))
                                ? 0U : (0x7fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                                                 - (IData)(1U))));
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rpt_num 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__u_din__DOT__stall)))) {
                        if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rpt_num 
                                = (0x7fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num) 
                                            - (IData)(1U)));
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                                  & (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))))) {
                        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                                      & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))))) {
                            if ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                                  & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits))) 
                                 & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num)))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rpt_num 
                                    = (0x7fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num) 
                                                - (IData)(1U)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data;
    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data;
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS)))) {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                         & (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                            = (0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data) 
                                        << 1U));
                    } else {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                                = (0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data) 
                                            << 1U));
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                         & (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                            = ((0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data) 
                                         << 1U)) | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_core_rxd));
                    } else {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data 
                                = ((0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_data) 
                                             << 1U)) 
                                   | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_core_rxd));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_ack 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_en_decode) 
           & (4U == (0xfU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                             >> 4U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_nack 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_en_decode) 
           & (6U == (0xfU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                             >> 4U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_start 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_en_decode) 
           & (0U == (0xfU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                             >> 4U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_stop 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_en_decode) 
           & (2U == (0xfU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                             >> 4U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_en_decode) 
           & (0xaU == (0xfU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                               >> 4U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait_ev 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_en_decode) 
           & (1U == (0xfU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__data_async) 
                             >> 4U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_core_txd 
        = (1U & ((3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))
                  ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rd_ack)
                  : ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_data) 
                     >> 7U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_sample_ev = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS)))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_start)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_stop)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait)))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait_ev) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_sample_ev = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rd_ack 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rd_ack;
    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rd_ack 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rd_ack;
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rd_ack 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rd_ack;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rd_ack 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rd_ack;
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS)))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_start)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_stop)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait_ev)))) {
                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_ack) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rd_ack = 0U;
                                        } else {
                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_nack) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_rd_ack = 1U;
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
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 0U;
    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 0U;
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 0U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 0U;
                } else {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__u_din__DOT__stall)))) {
                        if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                        }
                    }
                } else {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                         & (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                    } else {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                         & (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                    } else {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                                  & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))))) {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS)))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_start) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                        } else {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_stop) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait_ev)))) {
                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_ack) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
                                        } else {
                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_nack) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd_valid = 1U;
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
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 0U;
    if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 0U;
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 0U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 0U;
                } else {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 5U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 3U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__u_dc_fifo_rx__DOT__u_din__DOT__stall)))) {
                        if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_rpt_num))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 4U;
                        }
                    }
                } else {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                         & (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 4U;
                    } else {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 3U;
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS))) {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                         & (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 3U;
                    } else {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 4U;
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                                  & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))))) {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_done) 
                             & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__r_bits)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 5U;
                        }
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__CS)))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__empty)))))) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_start) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 1U;
                        } else {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_stop) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 2U;
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_wait_ev)))) {
                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_ack) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 4U;
                                        } else {
                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_cmd_rd_nack) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_i2c_gen__BRA__1__KET____DOT__i_i2c__DOT__i_i2c_control__DOT__s_bus_if_cmd = 4U;
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

VL_INLINE_OPT void Vcore_v_mcu::_sequent__TOP__210(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_sequent__TOP__210\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_clockgen__DOT__i_edge_prop__DOT__i_pulp_sync__DOT__r_reg 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_clockgen__DOT__i_edge_prop__DOT__i_pulp_sync__DOT__r_reg;
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__211(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__211\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en;
    if ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
          & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en) 
             | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
         & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
            | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
               & ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  | (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant))))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 1U;
    } else {
        if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en) 
               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant)) 
              & (4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements))) 
             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                <= vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 0U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en;
    if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
           >> 1U) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en) 
                     | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
         & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
            | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
               & ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  | (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                        >> 1U))))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 1U;
    } else {
        if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en) 
               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                  >> 1U)) & (4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements))) 
             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                <= vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 0U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en;
    if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
           >> 2U) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en) 
                     | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
         & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
            | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
               & ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  | (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                        >> 2U))))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 1U;
    } else {
        if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en) 
               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                  >> 2U)) & (4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements))) 
             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                <= vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 0U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en;
    if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
           >> 3U) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en) 
                     | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
         & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
            | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
               & ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  | (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                        >> 3U))))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 1U;
    } else {
        if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en) 
               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                  >> 3U)) & (4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements))) 
             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                <= vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 0U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en;
    if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
           >> 4U) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en) 
                     | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
         & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
            | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
               & ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  | (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                        >> 4U))))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 1U;
    } else {
        if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en) 
               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                  >> 4U)) & (4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements))) 
             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                <= vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 0U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en;
    if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
           >> 5U) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en) 
                     | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
         & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
            | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
               & ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  | (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                        >> 5U))))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 1U;
    } else {
        if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en) 
               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                  >> 5U)) & (4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements))) 
             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                <= vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 0U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en;
    if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
           >> 6U) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en) 
                     | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
         & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
            | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
               & ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  | (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                        >> 6U))))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 1U;
    } else {
        if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en) 
               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                  >> 6U)) & (4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements))) 
             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                <= vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 0U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en;
    if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
           >> 7U) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en) 
                     | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
         & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
            | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
               & ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  | (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                        >> 7U))))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 1U;
    } else {
        if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en) 
               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                  >> 7U)) & (4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements))) 
             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                <= vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 0U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en;
    if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
           >> 8U) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en) 
                     | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
         & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
            | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
               & ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  | (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                        >> 8U))))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 1U;
    } else {
        if (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en) 
               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                  >> 8U)) & (4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements))) 
             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                <= vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_pending_en = 0U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_stream 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_stream;
    if ((1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_event 
        = ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en)))) 
           & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr)) 
              & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                   & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant)) 
                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_compare))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_stream 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_stream;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 1U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
    } else {
        if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 1U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_event 
        = ((~ (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 1U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en)))) 
           & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                  >> 1U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                 >> 1U)) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_compare))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_stream 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_stream;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 2U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
    } else {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 2U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_event 
        = ((~ (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 2U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en)))) 
           & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                  >> 2U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                 >> 2U)) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_compare))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_stream 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_stream;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 3U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
    } else {
        if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 3U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_event 
        = ((~ (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 3U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en)))) 
           & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                  >> 3U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                 >> 3U)) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_compare))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_stream 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_stream;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 4U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
    } else {
        if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 4U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_event 
        = ((~ (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 4U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en)))) 
           & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                  >> 4U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                 >> 4U)) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_compare))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_stream 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_stream;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 5U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
    } else {
        if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 5U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_event 
        = ((~ (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 5U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en)))) 
           & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                  >> 5U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                 >> 5U)) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_compare))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_stream 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_stream;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 6U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
    } else {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 6U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_event 
        = ((~ (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 6U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en)))) 
           & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                  >> 6U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                 >> 6U)) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_compare))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_stream 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_stream;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 7U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
    } else {
        if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 7U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_event 
        = ((~ (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 7U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en)))) 
           & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                  >> 7U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                 >> 7U)) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_compare))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_stream 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_stream;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 8U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
    } else {
        if ((0x100U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 8U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_stream = 0U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_event 
        = ((~ (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 8U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en)))) 
           & ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                  >> 8U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                 >> 8U)) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_compare))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_sot 
        = (1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                  & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
                 | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr)) 
                    & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                        & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant)) 
                       & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
                          & (~ (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous)) 
                                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en)))))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_stream_id;
    if ((1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr)))) {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    if ((1U & (~ (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous)) 
                                   & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                  & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en;
    if ((1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
                    = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
                             | (~ (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous)) 
                                    & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                   & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en))))));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_sot 
        = (1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                   >> 1U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
                 | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                        >> 1U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                                    & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                       >> 1U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
                                                  & (~ 
                                                     (((~ 
                                                        ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                         >> 1U)) 
                                                       & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                          >> 1U)))))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_stream_id;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 1U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                      >> 1U)))) {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 1U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    if ((1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                       >> 1U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                  & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                        >> 1U)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 1U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
    } else {
        if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 1U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
                    = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
                             | (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                        >> 1U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                   & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                         >> 1U))))));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_sot 
        = (1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                   >> 2U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
                 | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                        >> 2U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                                    & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                       >> 2U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
                                                  & (~ 
                                                     (((~ 
                                                        ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                         >> 2U)) 
                                                       & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                          >> 2U)))))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_stream_id;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 2U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                      >> 2U)))) {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 2U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    if ((1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                       >> 2U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                  & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                        >> 2U)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 2U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
    } else {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 2U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
                    = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
                             | (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                        >> 2U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                   & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                         >> 2U))))));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_sot 
        = (1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                   >> 3U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
                 | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                        >> 3U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                                    & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                       >> 3U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
                                                  & (~ 
                                                     (((~ 
                                                        ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                         >> 3U)) 
                                                       & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                          >> 3U)))))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_stream_id;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 3U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                      >> 3U)))) {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 3U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    if ((1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                       >> 3U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                  & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                        >> 3U)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 3U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
    } else {
        if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 3U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
                    = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
                             | (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                        >> 3U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                   & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                         >> 3U))))));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_sot 
        = (1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                   >> 4U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
                 | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                        >> 4U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                                    & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                       >> 4U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
                                                  & (~ 
                                                     (((~ 
                                                        ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                         >> 4U)) 
                                                       & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                          >> 4U)))))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_stream_id;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 4U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                      >> 4U)))) {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 4U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    if ((1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                       >> 4U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                  & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                        >> 4U)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 4U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
    } else {
        if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 4U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
                    = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
                             | (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                        >> 4U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                   & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                         >> 4U))))));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_sot 
        = (1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                   >> 5U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
                 | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                        >> 5U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                                    & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                       >> 5U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
                                                  & (~ 
                                                     (((~ 
                                                        ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                         >> 5U)) 
                                                       & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                          >> 5U)))))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_stream_id;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 5U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                      >> 5U)))) {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 5U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    if ((1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                       >> 5U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                  & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                        >> 5U)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 5U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
    } else {
        if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 5U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
                    = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
                             | (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                        >> 5U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                   & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                         >> 5U))))));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_sot 
        = (1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                   >> 6U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
                 | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                        >> 6U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                                    & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                       >> 6U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
                                                  & (~ 
                                                     (((~ 
                                                        ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                         >> 6U)) 
                                                       & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                          >> 6U)))))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_stream_id;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 6U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                      >> 6U)))) {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 6U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    if ((1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                       >> 6U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                  & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                        >> 6U)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 6U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
    } else {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 6U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
                    = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
                             | (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                        >> 6U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                   & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                         >> 6U))))));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_sot 
        = (1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                   >> 7U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
                 | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                        >> 7U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                                    & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                       >> 7U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
                                                  & (~ 
                                                     (((~ 
                                                        ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                         >> 7U)) 
                                                       & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                          >> 7U)))))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_stream_id;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 7U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                      >> 7U)))) {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 7U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    if ((1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                       >> 7U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                  & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                        >> 7U)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 7U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
    } else {
        if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 7U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
                    = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
                             | (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                        >> 7U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                   & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                         >> 7U))))));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_sot 
        = (1U & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                   >> 8U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en))) 
                 | ((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                        >> 8U)) & ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                                    & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                                       >> 8U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) 
                                                  & (~ 
                                                     (((~ 
                                                        ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                         >> 8U)) 
                                                       & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                          >> 8U)))))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_stream_id;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 8U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr) 
                      >> 8U)))) {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 8U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    if ((1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                       >> 8U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                  & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                        >> 8U)))))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_stream_id = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_ch_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 8U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
    } else {
        if ((0x100U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 8U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_ch_en 
                    = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)) 
                             | (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                        >> 8U)) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                   & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                         >> 8U))))));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en;
    if ((1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 1U;
    } else {
        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
                        = (1U & (~ (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous)) 
                                     & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                    & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en)))));
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 1U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 1U;
    } else {
        if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 1U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
                        = (1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                         >> 1U)) & 
                                     (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                    & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                          >> 1U)))));
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 2U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 1U;
    } else {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 2U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
                        = (1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                         >> 2U)) & 
                                     (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                    & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                          >> 2U)))));
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 3U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 1U;
    } else {
        if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 3U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
                        = (1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                         >> 3U)) & 
                                     (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                    & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                          >> 3U)))));
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 4U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 1U;
    } else {
        if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 4U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
                        = (1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                         >> 4U)) & 
                                     (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                    & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                          >> 4U)))));
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 5U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 1U;
    } else {
        if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 5U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
                        = (1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                         >> 5U)) & 
                                     (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                    & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                          >> 5U)))));
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 6U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 1U;
    } else {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 6U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
                        = (1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                         >> 6U)) & 
                                     (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                    & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                          >> 6U)))));
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 7U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 1U;
    } else {
        if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 7U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
                        = (1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                         >> 7U)) & 
                                     (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                    & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                          >> 7U)))));
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 8U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 1U;
    } else {
        if ((0x100U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_en = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 8U))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_compare) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_en 
                        = (1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                         >> 8U)) & 
                                     (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                    & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                          >> 8U)))));
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses;
    if ((1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
            = (0x7ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[0U]);
    } else {
        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
                    = (0x7ffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en))))
                                        ? 0U : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[0U])
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses 
                                       + vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 1U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
            = (0x7ffffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[1U] 
                            << 0xdU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[0U] 
                                        >> 0x13U)));
    } else {
        if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 1U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
                    = (0x7ffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 1U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 1U))))
                                        ? 0U : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[1U] 
                                                 << 0xdU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[0U] 
                                                   >> 0x13U)))
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses 
                                       + vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 2U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
            = (0x7ffffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[2U] 
                            << 0x1aU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[1U] 
                                         >> 6U)));
    } else {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 2U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
                    = (0x7ffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 2U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 2U))))
                                        ? 0U : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[2U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[1U] 
                                                   >> 6U)))
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses 
                                       + vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 3U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
            = (0x7ffffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[2U] 
                            << 7U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[1U] 
                                      >> 0x19U)));
    } else {
        if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 3U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
                    = (0x7ffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 3U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 3U))))
                                        ? 0U : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[2U] 
                                                 << 7U) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[1U] 
                                                   >> 0x19U)))
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses 
                                       + vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 4U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
            = (0x7ffffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[3U] 
                            << 0x14U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[2U] 
                                         >> 0xcU)));
    } else {
        if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 4U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
                    = (0x7ffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 4U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 4U))))
                                        ? 0U : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[3U] 
                                                 << 0x14U) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[2U] 
                                                   >> 0xcU)))
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses 
                                       + vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 5U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
            = (0x7ffffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[3U] 
                            << 1U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[2U] 
                                      >> 0x1fU)));
    } else {
        if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 5U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
                    = (0x7ffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 5U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 5U))))
                                        ? 0U : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[3U] 
                                                 << 1U) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[2U] 
                                                   >> 0x1fU)))
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses 
                                       + vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 6U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
            = (0x7ffffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[4U] 
                            << 0xeU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[3U] 
                                        >> 0x12U)));
    } else {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 6U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
                    = (0x7ffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 6U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 6U))))
                                        ? 0U : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[4U] 
                                                 << 0xeU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[3U] 
                                                   >> 0x12U)))
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses 
                                       + vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 7U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
            = (0x7ffffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[5U] 
                            << 0x1bU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[4U] 
                                         >> 5U)));
    } else {
        if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 7U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
                    = (0x7ffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 7U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 7U))))
                                        ? 0U : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[5U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[4U] 
                                                   >> 5U)))
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses 
                                       + vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 8U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
            = (0x7ffffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[5U] 
                            << 8U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[4U] 
                                      >> 0x18U)));
    } else {
        if ((0x100U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 8U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_addresses 
                    = (0x7ffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 8U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 8U))))
                                        ? 0U : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[5U] 
                                                 << 8U) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_startaddr[4U] 
                                                   >> 0x18U)))
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_addresses 
                                       + vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_counters;
    if ((1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
            = (0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[0U]);
    } else {
        if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_counters = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
                    = (0xfffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en))))
                                        ? 0U : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[0U])
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                                       - vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_counters;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 1U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
            = (0xfffffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[1U] 
                            << 0xcU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[0U] 
                                        >> 0x14U)));
    } else {
        if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_counters = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 1U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
                    = (0xfffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 1U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 1U))))
                                        ? 0U : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[1U] 
                                                 << 0xcU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[0U] 
                                                   >> 0x14U)))
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                                       - vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_counters;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 2U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
            = (0xfffffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[2U] 
                            << 0x18U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[1U] 
                                         >> 8U)));
    } else {
        if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_counters = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 2U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
                    = (0xfffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 2U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 2U))))
                                        ? 0U : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[2U] 
                                                 << 0x18U) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[1U] 
                                                   >> 8U)))
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                                       - vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_counters;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 3U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
            = (0xfffffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[2U] 
                            << 4U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[1U] 
                                      >> 0x1cU)));
    } else {
        if ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_counters = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 3U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
                    = (0xfffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 3U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 3U))))
                                        ? 0U : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[2U] 
                                                 << 4U) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[1U] 
                                                   >> 0x1cU)))
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                                       - vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_counters;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 4U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
            = (0xfffffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[3U] 
                            << 0x10U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[2U] 
                                         >> 0x10U)));
    } else {
        if ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_counters = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 4U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
                    = (0xfffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 4U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 4U))))
                                        ? 0U : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[3U] 
                                                 << 0x10U) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[2U] 
                                                   >> 0x10U)))
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                                       - vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_counters;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 5U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
            = (0xfffffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[4U] 
                            << 0x1cU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[3U] 
                                         >> 4U)));
    } else {
        if ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_counters = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 5U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
                    = (0xfffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 5U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 5U))))
                                        ? 0U : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[4U] 
                                                 << 0x1cU) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[3U] 
                                                   >> 4U)))
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                                       - vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_counters;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 6U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
            = (0xfffffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[4U] 
                            << 8U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[3U] 
                                      >> 0x18U)));
    } else {
        if ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_counters = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 6U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
                    = (0xfffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 6U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 6U))))
                                        ? 0U : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[4U] 
                                                 << 8U) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[3U] 
                                                   >> 0x18U)))
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                                       - vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_counters;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 7U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
            = (0xfffffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[5U] 
                            << 0x14U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[4U] 
                                         >> 0xcU)));
    } else {
        if ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_counters = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 7U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
                    = (0xfffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 7U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 7U))))
                                        ? 0U : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[5U] 
                                                 << 0x14U) 
                                                | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[4U] 
                                                   >> 0xcU)))
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                                       - vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_counters;
    if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                >> 8U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
            = (0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[5U]);
    } else {
        if ((0x100U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_clr))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_counters = 0U;
        } else {
            if ((((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__u_fifo__DOT__elements)) 
                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_en)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__r_grant) 
                    >> 8U))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_counters 
                    = (0xfffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_compare)
                                    ? ((1U & (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_continuous) 
                                                   >> 8U)) 
                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_pending_en))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_en) 
                                                  >> 8U))))
                                        ? 0U : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_cfg_size[5U])
                                    : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__r_counters 
                                       - vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_datasize_toadd)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en 
        = ((0x1feU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en)) 
           | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__0__KET____DOT__u_tx_ch_ctrl__DOT__s_en));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en 
        = ((0x1fdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en)) 
           | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__1__KET____DOT__u_tx_ch_ctrl__DOT__s_en) 
              << 1U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en 
        = ((0x1fbU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en)) 
           | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__2__KET____DOT__u_tx_ch_ctrl__DOT__s_en) 
              << 2U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en 
        = ((0x1f7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en)) 
           | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__3__KET____DOT__u_tx_ch_ctrl__DOT__s_en) 
              << 3U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en 
        = ((0x1efU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en)) 
           | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__4__KET____DOT__u_tx_ch_ctrl__DOT__s_en) 
              << 4U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en 
        = ((0x1dfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en)) 
           | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__5__KET____DOT__u_tx_ch_ctrl__DOT__s_en) 
              << 5U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en 
        = ((0x1bfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en)) 
           | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__6__KET____DOT__u_tx_ch_ctrl__DOT__s_en) 
              << 6U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en 
        = ((0x17fU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en)) 
           | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__7__KET____DOT__u_tx_ch_ctrl__DOT__s_en) 
              << 7U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en 
        = ((0xffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en)) 
           | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__genblk1__BRA__8__KET____DOT__u_tx_ch_ctrl__DOT__s_en) 
              << 8U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_req 
        = ((0xe00U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_req)) 
           | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_ch_req) 
              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_en)));
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__212(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__212\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_ready 
        = ((0xe00U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__u_tx_channels__DOT__s_ch_ready)) 
           | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_tx_ch_ready));
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__213(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__213\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_uart_evt 
        = ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_uart_evt)) 
           | (((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__i_ep_event__DOT__i_sync_clkb__DOT__i_pulp_sync__DOT__r_reg) 
                 >> 1U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__i_ep_event__DOT__i_sync_clkb__DOT__serial_q))) 
               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_reg_if__DOT__r_uart_rx_irq_en)) 
              & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_reg_if__DOT__r_uart_rx_polling_en))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__s_err_rx_overflow_sync 
        = (1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__i_ep_err_overflow__DOT__i_sync_clkb__DOT__i_pulp_sync__DOT__r_reg) 
                  >> 1U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__i_ep_err_overflow__DOT__i_sync_clkb__DOT__serial_q))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__s_err_rx_parity_sync 
        = (1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__i_ep_err_parity__DOT__i_sync_clkb__DOT__i_pulp_sync__DOT__r_reg) 
                  >> 1U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__i_ep_err_parity__DOT__i_sync_clkb__DOT__serial_q))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_uart_err 
        = ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_uart_err)) 
           | (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__s_err_rx_overflow_sync) 
               | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__s_err_rx_parity_sync)) 
              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__0__KET____DOT__i_uart__DOT__u_reg_if__DOT__r_uart_err_irq_en)));
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__214(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__214\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_uart_evt 
        = ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_uart_evt)) 
           | (0xfffffffeU & ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__i_ep_event__DOT__i_sync_clkb__DOT__i_pulp_sync__DOT__r_reg) 
                               & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__i_ep_event__DOT__i_sync_clkb__DOT__serial_q)) 
                                  << 1U)) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_reg_if__DOT__r_uart_rx_irq_en) 
                                             << 1U)) 
                             & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_reg_if__DOT__r_uart_rx_polling_en)) 
                                << 1U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__s_err_rx_overflow_sync 
        = (1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__i_ep_err_overflow__DOT__i_sync_clkb__DOT__i_pulp_sync__DOT__r_reg) 
                  >> 1U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__i_ep_err_overflow__DOT__i_sync_clkb__DOT__serial_q))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__s_err_rx_parity_sync 
        = (1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__i_ep_err_parity__DOT__i_sync_clkb__DOT__i_pulp_sync__DOT__r_reg) 
                  >> 1U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__i_ep_err_parity__DOT__i_sync_clkb__DOT__serial_q))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_uart_err 
        = ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_uart_err)) 
           | ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__s_err_rx_overflow_sync) 
                | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__s_err_rx_parity_sync)) 
               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_uart_gen__BRA__1__KET____DOT__i_uart__DOT__u_reg_if__DOT__r_uart_err_irq_en)) 
              << 1U));
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__215(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__215\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__s_sdio_err 
        = (1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__error_int_sync__DOT__i_pulp_sync__DOT__r_reg) 
                  >> 1U) & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__error_int_sync__DOT__serial_q))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_events[0U] 
        = ((0xf7ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_events[0U]) 
           | (0xf8000000U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__s_sdio_err) 
                             << 0x1bU)));
}

VL_INLINE_OPT void Vcore_v_mcu::_sequent__TOP__216(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_sequent__TOP__216\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__r_int 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__r_int;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__Arnold2_Design__DOT__A2__DOT____Vcellinp__top1_rtl__RESET 
        = ((8U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT____Vcellinp__Arnold2_Design__RESET) 
                  << 3U)) | (7U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT____Vcellinp__Arnold2_Design__RESET) 
                                   >> 1U)));
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__217(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__217\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_ref_clk_edge_del 
        = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_ref_clk2) 
            & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_ref_clk3))) 
           & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                 >> 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_ref_clk_edge 
        = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_ref_clk1) 
            & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_ref_clk2))) 
           & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                 >> 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_enable_count_prescaler_lo = 0U;
    if ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
               & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                     >> 0x1fU))))) {
        if ((1U & (~ ((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                          >> 6U)) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                        >> 7U)))))) {
            if ((1U & (~ ((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                              >> 6U)) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                         >> 7U))))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_enable_count_prescaler_lo 
                    = (1U & ((1U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                     >> 6U) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                               >> 7U)))
                              ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_ref_clk_edge) 
                                 & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                       >> 2U))) : (~ 
                                                   ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                                    >> 2U))));
            }
        }
    }
    if ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
               & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                  >> 0x1fU)))) {
        if ((1U & (~ ((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                          >> 6U)) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                        >> 7U)))))) {
            if ((1U & (~ ((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                              >> 6U)) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                         >> 7U))))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_enable_count_prescaler_lo 
                    = (1U & ((1U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                     >> 6U) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                               >> 7U)))
                              ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_ref_clk_edge) 
                                 & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                       >> 2U))) : (~ 
                                                   ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                                    >> 2U))));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_enable_count_prescaler_hi = 0U;
    if ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_hi_reg 
               & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                     >> 0x1fU))))) {
        if ((1U & (~ ((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_hi_reg 
                          >> 6U)) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_hi_reg 
                                        >> 7U)))))) {
            if ((1U & (~ ((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_hi_reg 
                              >> 6U)) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_hi_reg 
                                         >> 7U))))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_enable_count_prescaler_hi 
                    = (1U & ((1U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_hi_reg 
                                     >> 6U) & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_hi_reg 
                                               >> 7U)))
                              ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_ref_clk_edge) 
                                 & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                       >> 2U))) : (~ 
                                                   ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                                    >> 2U))));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_enable_count_lo = 0U;
    if ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
               & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                     >> 0x1fU))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_enable_count_lo 
            = (1U & ((1U & ((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                >> 6U)) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                              >> 7U))))
                      ? (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                            >> 2U)) : ((1U & ((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                                  >> 6U)) 
                                              & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                                 >> 7U)))
                                        ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_ref_clk_edge) 
                                           & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                                 >> 2U)))
                                        : ((1U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                                   >> 6U) 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                                     >> 7U)))
                                            ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_target_reached_prescaler_lo) 
                                               & (~ 
                                                  ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                                   >> 2U)))
                                            : ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_target_reached_prescaler_lo) 
                                               & (~ 
                                                  ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                                   >> 2U)))))));
    }
    if ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
               & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                  >> 0x1fU)))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_enable_count_lo 
            = (1U & ((1U & ((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                >> 6U)) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                              >> 7U))))
                      ? (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                            >> 2U)) : ((1U & ((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                                  >> 6U)) 
                                              & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                                 >> 7U)))
                                        ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_ref_clk_edge) 
                                           & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                                 >> 2U)))
                                        : ((1U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                                   >> 6U) 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                                     >> 7U)))
                                            ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_target_reached_prescaler_lo) 
                                               & (~ 
                                                  ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                                   >> 2U)))
                                            : ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_target_reached_prescaler_lo) 
                                               & (~ 
                                                  ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                                   >> 2U)))))));
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_enable_count_hi = 0U;
    if ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_hi_reg 
               & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                     >> 0x1fU))))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_enable_count_hi 
            = (1U & ((1U & ((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_hi_reg 
                                >> 6U)) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_hi_reg 
                                              >> 7U))))
                      ? (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                            >> 2U)) : ((1U & ((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_hi_reg 
                                                  >> 6U)) 
                                              & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_hi_reg 
                                                 >> 7U)))
                                        ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_ref_clk_edge) 
                                           & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                                 >> 2U)))
                                        : ((1U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_hi_reg 
                                                   >> 6U) 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_hi_reg 
                                                     >> 7U)))
                                            ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_target_reached_prescaler_hi) 
                                               & (~ 
                                                  ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                                   >> 2U)))
                                            : ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_target_reached_prescaler_hi) 
                                               & (~ 
                                                  ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                                   >> 2U)))))));
    }
    if ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
               & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                  >> 0x1fU)))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_enable_count_hi 
            = ((1U & ((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                          >> 6U)) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                        >> 7U)))) ? 
               ((0xffffffffU == vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__counter_lo_i__DOT__s_count_reg) 
                & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                      >> 2U))) : ((1U & ((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                             >> 6U)) 
                                         & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                            >> 7U)))
                                   ? (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_ref_clk_edge_del) 
                                       & (0xffffffffU 
                                          == vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__counter_lo_i__DOT__s_count_reg)) 
                                      & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                            >> 2U)))
                                   : ((1U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                              >> 6U) 
                                             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_cfg_lo_reg 
                                                >> 7U)))
                                       ? ((((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_target_reached_prescaler_lo) 
                                            & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_ref_clk_edge_del)) 
                                           & (0xffffffffU 
                                              == vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__counter_lo_i__DOT__s_count_reg)) 
                                          & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                                >> 2U)))
                                       : (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__s_target_reached_prescaler_lo) 
                                           & (0xffffffffU 
                                              == vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_apb_timer_unit__DOT__counter_lo_i__DOT__s_count_reg)) 
                                          & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                                >> 2U))))));
    }
}

VL_INLINE_OPT void Vcore_v_mcu::_sequent__TOP__218(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_sequent__TOP__218\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__s_soc_rstn 
        = (1U & (~ (((~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_clk_rst_gen__DOT__i_soc_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                         >> 3U)) | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__s_wd_expired)) 
                    | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                       >> 1U))));
}

VL_INLINE_OPT void Vcore_v_mcu::_sequent__TOP__219(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_sequent__TOP__219\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((0xfffffffeU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_write_increment) 
           | (1U & (((~ vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
                     & (~ vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) 
                    & (~ vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mcountinhibit_q))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((0xfffffffbU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_write_increment) 
           | (4U & (((((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                           >> 2U)) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
                                         >> 2U))) & 
                      (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mcountinhibit_q 
                          >> 2U))) << 2U) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__hpm_events) 
                                             << 1U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((0xfffffff7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_write_increment) 
           | (((((~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                     >> 3U)) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
                                   >> 3U))) & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                  >> 3U))) 
               & (0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__hpm_events) 
                         & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[3U]))) 
              << 3U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[2U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[3U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[8U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[9U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xaU] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xbU] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xcU] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xdU] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xeU] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xfU] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x10U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x11U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x12U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x13U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x14U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x15U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x16U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x17U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x18U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x19U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1aU] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1cU] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1eU] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x20U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x21U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x20U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x21U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x21U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x20U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x22U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x23U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x22U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x23U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x23U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x22U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x24U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x25U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x24U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x25U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x25U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x24U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x26U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x27U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x26U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x27U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x27U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x26U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x28U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x29U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x28U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x29U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x29U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x28U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2aU] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2aU])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2aU])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2cU] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2cU])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2cU])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2eU] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2eU])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2eU])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x30U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x31U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x30U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x31U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x31U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x30U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x32U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x33U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x32U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x33U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x33U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x32U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x34U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x35U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x34U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x35U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x35U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x34U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x36U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x37U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x36U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x37U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x37U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x36U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x38U] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x39U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x38U])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x39U] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x39U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x38U])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3aU] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3aU])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3aU])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3cU] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3cU])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3cU])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3eU] 
        = (IData)((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3eU])))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3eU])))) 
                   >> 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x800U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
            ? ((0x400U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                ? ((0x200U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                    ? ((0x100U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                        ? ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                            ? 0U : ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                     ? 0U : ((0x20U 
                                              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                               ? ((8U 
                                                   & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                      ? 0U
                                                      : 4U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                      ? 0x602U
                                                      : 0U))))
                                               : 0U))))
                        : 0U) : ((0x100U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                  ? 0U : ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                           ? ((0x40U 
                                               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                              << 6U)))))
                                                      ? 0U
                                                      : 
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      ((IData)(1U) 
                                                       + 
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                << 6U))) 
                                                           >> 5U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                               << 6U))))))) 
                                                    | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                << 6U))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                               << 6U))))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                               << 6U)))))
                                                       ? 0U
                                                       : 
                                                      (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                 << 6U))) 
                                                            >> 5U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                << 6U))))))) 
                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                 << 6U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                << 6U))))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                << 6U)))))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        ((IData)(1U) 
                                                         + 
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                  << 6U))) 
                                                             >> 5U)))] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                 << 6U))))))) 
                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                  << 6U))) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                 << 6U))))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                 << 6U)))))
                                                         ? 0U
                                                         : 
                                                        (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         ((IData)(1U) 
                                                          + 
                                                          (0x3fU 
                                                           & (((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                   << 6U))) 
                                                              >> 5U)))] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                  << 6U))))))) 
                                                       | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (0x3fU 
                                                           & (((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                   << 6U))) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                  << 6U))))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                        ? 0U
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                  << 6U)))))
                                                          ? 0U
                                                          : 
                                                         (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          ((IData)(1U) 
                                                           + 
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                    << 6U))) 
                                                               >> 5U)))] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                   << 6U))))))) 
                                                        | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                    << 6U))) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                   << 6U)))))))))))))
                                           : ((0x40U 
                                               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                    ? 
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                   (0x3eU 
                                                    & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                       << 1U))]
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                     ? 
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                    (0x3eU 
                                                     & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                        << 1U))]
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (0x3eU 
                                                      & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                         << 1U))]
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                       ? 
                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (0x3eU 
                                                       & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                          << 1U))]
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                        ? 0U
                                                        : 
                                                       vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3eU 
                                                        & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                           << 1U))]))))))))))
                : ((0x200U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                    ? ((0x100U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                        ? ((0x80U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                            ? ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                ? 0U : ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        (0x7c0U 
                                                         & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                            << 6U)))))
                                                    ? 0U
                                                    : 
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0x3fU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                              << 6U))) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x7c0U 
                                                          & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                             << 6U))))))) 
                                                  | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (0x3fU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                              << 6U))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x7c0U 
                                                          & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                             << 6U))))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x7c0U 
                                                          & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                             << 6U)))))
                                                     ? 0U
                                                     : 
                                                    (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     ((IData)(1U) 
                                                      + 
                                                      (0x3fU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                               << 6U))) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                              << 6U))))))) 
                                                   | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (0x3fU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                               << 6U))) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                              << 6U))))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                              << 6U)))))
                                                      ? 0U
                                                      : 
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      ((IData)(1U) 
                                                       + 
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                << 6U))) 
                                                           >> 5U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                               << 6U))))))) 
                                                    | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                << 6U))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                               << 6U))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                               << 6U)))))
                                                       ? 0U
                                                       : 
                                                      (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                 << 6U))) 
                                                            >> 5U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                << 6U))))))) 
                                                     | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                 << 6U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                << 6U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                      ? 0U
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                << 6U)))))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        ((IData)(1U) 
                                                         + 
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                  << 6U))) 
                                                             >> 5U)))] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                 << 6U))))))) 
                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                  << 6U))) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                                 << 6U)))))))))))))
                            : ((0x40U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                ? 0U : ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                  ? 
                                                 vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                 (0x3eU 
                                                  & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                     << 1U))]
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                   ? 
                                                  vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                  (0x3eU 
                                                   & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                      << 1U))]
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                    ? 
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                   (0x3eU 
                                                    & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                       << 1U))]
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                     ? 
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                    (0x3eU 
                                                     & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                        << 1U))]
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                      ? 0U
                                                      : 
                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (0x3eU 
                                                      & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                                         << 1U))]))))))))
                        : 0U) : 0U)) : ((0x400U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                         ? ((0x200U 
                                             & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                             ? ((0x100U 
                                                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                 ? 
                                                ((0x80U 
                                                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                         ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__dscratch1_q
                                                         : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__dscratch0_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                         ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__depc_q
                                                         : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__dcsr_q))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                         ? 0U
                                                         : 4U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                         ? 0U
                                                         : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                         ? 
                                                        (0x28001040U 
                                                         | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
                                                            << 2U))
                                                         : 0U)))))
                                                    : 0U))
                                                  : 0U)
                                                 : 0U)
                                             : 0U) : 
                                        ((0x200U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                          ? ((0x100U 
                                              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                              ? ((0x80U 
                                                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                         ? 0U
                                                         : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                         ? 0U
                                                         : 
                                                        ((0x80000000U 
                                                          & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mcause_q) 
                                                             << 0x1aU)) 
                                                         | (0x1fU 
                                                            & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mcause_q))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                         ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mepc_q
                                                         : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mscratch_q))))))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                     ? 
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))]
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                      ? 
                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))]
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                       ? 
                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))]
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                         ? 
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))]
                                                         : 0U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                         ? 0U
                                                         : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mcountinhibit_q)))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                         ? 
                                                        ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mtvec_q 
                                                          << 8U) 
                                                         | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mtvec_mode_q))
                                                         : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mie_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))
                                                         ? 0x40001104U
                                                         : 
                                                        ((0x20000U 
                                                          & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mstatus_q) 
                                                             << 0x11U)) 
                                                         | ((0x1800U 
                                                             & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                << 0xaU)) 
                                                            | ((0x80U 
                                                                & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mstatus_q)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                         >> 2U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                           >> 6U)))))))))))))))
                                              : 0U)
                                          : 0U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_op_ex))
            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_op_ex))
                ? ((~ vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__alu_operand_a_ex) 
                   & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__alu_operand_a_ex 
                   | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__alu_operand_a_ex);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__dscratch1_n 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__dscratch1_q;
    if ((1U & (~ ((((((((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int)) 
                        | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                       | (3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                      | (0x300U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                     | (0x304U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                    | (0x305U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                   | (0x340U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                  | (0x341U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int)))))) {
        if (((((((((0x342U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int)) 
                   | (0x7b0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                  | (0x7b1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                 | (0x7b2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                | (0x7b3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
               | (0x800U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
              | (0x801U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
             | (0x802U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int)))) {
            if ((0x342U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                if ((0x7b0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                    if ((0x7b1U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                        if ((0x7b2U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                            if ((0x7b3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__dscratch1_n 
                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_wdata_int;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__dscratch0_n 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__dscratch0_q;
    if ((1U & (~ ((((((((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int)) 
                        | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                       | (3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                      | (0x300U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                     | (0x304U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                    | (0x305U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                   | (0x340U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                  | (0x341U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int)))))) {
        if (((((((((0x342U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int)) 
                   | (0x7b0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                  | (0x7b1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                 | (0x7b2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
                | (0x7b3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
               | (0x800U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
              | (0x801U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
             | (0x802U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int)))) {
            if ((0x342U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                if ((0x7b0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                    if ((0x7b1U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                        if ((0x7b2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__dscratch0_n 
                                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_wdata_int;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mie_n 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mie_q;
    if (((((((((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int)) 
               | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
              | (3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
             | (0x300U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
            | (0x304U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
           | (0x305U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
          | (0x340U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
         | (0x341U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int)))) {
        if ((1U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
            if ((2U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                if ((3U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                    if ((0x300U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                        if ((0x304U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mie_n 
                                    = (0xffff0888U 
                                       & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_wdata_int);
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mscratch_n 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mscratch_q;
    if (((((((((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int)) 
               | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
              | (3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
             | (0x300U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
            | (0x304U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
           | (0x305U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
          | (0x340U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
         | (0x341U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int)))) {
        if ((1U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
            if ((2U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                if ((3U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                    if ((0x300U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                        if ((0x304U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                            if ((0x305U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                                if ((0x340U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_we_int) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mscratch_n 
                                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_wdata_int;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mtvec_mode_n 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mtvec_mode_q;
    if (((((((((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int)) 
               | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
              | (3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
             | (0x300U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
            | (0x304U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
           | (0x305U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
          | (0x340U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) 
         | (0x341U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int)))) {
        if ((1U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
            if ((2U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                if ((3U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                    if ((0x300U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                        if ((0x304U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                            if ((0x305U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int))) {
                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mtvec_mode_n 
                                        = (1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mcountinhibit_q;
    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_we_int) 
         & (0x320U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int)))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mcountinhibit_n 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_wdata_int;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[3U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[4U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[5U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[6U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[7U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[8U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[9U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0xaU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0xaU];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0xbU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0xbU];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0xcU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0xcU];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0xdU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0xdU];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0xeU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0xeU];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0xfU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0xfU];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x10U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x10U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x11U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x11U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x12U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x12U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x13U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x13U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x14U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x14U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x15U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x15U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x16U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x16U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x17U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x17U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x18U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x18U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x19U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x19U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x1aU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x1aU];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x1bU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x1bU];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x1cU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x1cU];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x1dU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x1dU];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x1eU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x1eU];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n[0x1fU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_q[0x1fU];
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_we) {
        VL_ASSIGNSEL_WIII(32,(0x3e0U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__csr_addr_int) 
                                        << 5U)), vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__mhpmevent_n, vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__lFC_CORE__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
}

VL_INLINE_OPT void Vcore_v_mcu::_sequent__TOP__220(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_sequent__TOP__220\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__read_pointer 
        = (((0xcU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_dout__DOT__read_token) 
                     << 2U)) | (3U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_dout__DOT__read_token) 
                                      >> 2U))) & ((8U 
                                                   & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_dout__DOT__read_token) 
                                                      << 3U)) 
                                                  | (7U 
                                                     & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_dout__DOT__read_token) 
                                                        >> 1U))));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_sdio_gen__BRA__0__KET____DOT__i_sdio__rstn_i) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__write_enable) {
            VL_ASSIGNSEL_WIII(32,(0x7fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__write_pointer_bin) 
                                           << 5U)), vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__data, 
                              vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_tx_fifo__DOT__i_fifo__DOT__buffer
                              [vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_tx_fifo__DOT__i_fifo__DOT__pointer_out]);
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__data[0U] = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__data[1U] = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__data[2U] = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__data[3U] = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_start_sync__DOT__r_input_reg 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_sdio_gen__BRA__0__KET____DOT__i_sdio__rstn_i) 
           & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_start_sync__DOT__s_input_reg_next));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_sdio_gen__BRA__0__KET____DOT__i_sdio__rstn_i) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__s_periph_valid) 
                    >> 7U) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pwrite) 
                              >> 2U)))) {
            if (((((((((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr)) 
                       | (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) 
                      | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) 
                     | (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) 
                    | (5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) 
                   | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) 
                  | (8U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) 
                 | (9U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr)))) {
                if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) {
                    if ((1U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) {
                        if ((2U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) {
                            if ((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) {
                                if ((5U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) {
                                    if ((6U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) {
                                        if ((8U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_cmd_op 
                                                = (0x3fU 
                                                   & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[3U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[2U] 
                                                         >> 8U)));
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
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_cmd_op = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_sdio_gen__BRA__0__KET____DOT__i_sdio__rstn_i) {
        if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_udmacore__DOT__s_periph_valid) 
                    >> 7U) & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT__pwrite) 
                              >> 2U)))) {
            if (((((((((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr)) 
                       | (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) 
                      | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) 
                     | (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) 
                    | (5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) 
                   | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) 
                  | (8U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) 
                 | (9U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr)))) {
                if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) {
                    if ((1U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) {
                        if ((2U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) {
                            if ((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) {
                                if ((5U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) {
                                    if ((6U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) {
                                        if ((8U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__s_wr_addr))) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_cmd_arg 
                                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__periph_bus_i__DOT__apb_node_wrap_i__DOT____Vcellout__apb_node_i__pwdata_o[2U];
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
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_cmd_arg = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__write_token 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_sdio_gen__BRA__0__KET____DOT__i_sdio__rstn_i)
            ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__write_tr__DOT__next_state)
            : 0xcU);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin 
        = ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin)) 
           | (0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__buffer__DOT__RPRT_OH_BIN__DOT__jl__BRA__0__KET____DOT__tmp_mask) 
                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__read_pointer))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin 
        = ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin)) 
           | ((IData)((0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__buffer__DOT__RPRT_OH_BIN__DOT__jl__BRA__1__KET____DOT__tmp_mask) 
                              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__read_pointer)))) 
              << 1U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_dout__DOT__empty 
        = (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_dout__DOT__write_token_dn)) 
            & ((8U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_dout__DOT__write_token_dn) 
                      << 3U)) | (7U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_dout__DOT__write_token_dn) 
                                       >> 1U)))) & 
           ((0xcU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__read_pointer) 
                     << 2U)) | (3U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__read_pointer) 
                                      >> 2U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_tx_fifo__DOT__i_fifo__DOT__pointer_out 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_tx_fifo__DOT__i_fifo__DOT__pointer_out;
    if (vlTOPp->__Vdlyvset__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_tx_fifo__DOT__i_fifo__DOT__buffer__v0) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_tx_fifo__DOT__i_fifo__DOT__buffer[vlTOPp->__Vdlyvdim0__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_tx_fifo__DOT__i_fifo__DOT__buffer__v0] 
            = vlTOPp->__Vdlyvval__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_tx_fifo__DOT__i_fifo__DOT__buffer__v0;
    }
    if (vlTOPp->__Vdlyvset__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_tx_fifo__DOT__i_fifo__DOT__buffer__v1) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_tx_fifo__DOT__i_fifo__DOT__buffer[0U] = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_tx_fifo__DOT__i_fifo__DOT__buffer[1U] = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__write_enable 
        = ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_tx_fifo__DOT__i_fifo__DOT__elements)) 
           & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__stall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_rx_ch_valid 
        = ((0xbfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_rx_ch_valid)) 
           | (0x40U & ((~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_dout__DOT__empty)))) 
                       << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_start_sync__DOT__s_input_reg_next 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_sdio_start) 
           | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_start_sync__DOT__r_input_reg) 
              & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_start_sync__DOT__sync_a))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__write_tr__DOT__next_state 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__write_enable)
            ? ((0xeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__write_token) 
                        << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__write_token) 
                                         >> 3U))) : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__write_token));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__write_pointer 
        = (((0xeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__write_token) 
                     << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__write_token) 
                                      >> 3U))) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__write_token));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__write_pointer_bin 
        = ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__write_pointer_bin)) 
           | (0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__WPRT_OH_BIN__DOT__jl__BRA__0__KET____DOT__tmp_mask) 
                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__write_pointer))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__write_pointer_bin 
        = ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__write_pointer_bin)) 
           | ((IData)((0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__buffer__DOT__WPRT_OH_BIN__DOT__jl__BRA__1__KET____DOT__tmp_mask) 
                              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_din__DOT__write_pointer)))) 
              << 1U));
}

VL_INLINE_OPT void Vcore_v_mcu::_sequent__TOP__221(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_sequent__TOP__221\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_eot_sync__DOT__i_sync_clkb__DOT__serial_q 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_sdio_gen__BRA__0__KET____DOT__i_sdio__rstn_i) 
           & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_eot_sync__DOT__i_sync_clkb__DOT__i_pulp_sync__DOT__r_reg) 
              >> 1U));
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__222(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__222\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_dataout = 0U;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_data_quad) {
        if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_byte_in_word))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_dataout 
                = (0xfU & ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                            ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                               >> 4U) : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data));
        } else {
            if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_byte_in_word))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_dataout 
                    = (0xfU & ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                   >> 0xcU) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                               >> 8U)));
            } else {
                if ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_byte_in_word))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_dataout 
                        = (0xfU & ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                    ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                       >> 0x14U) : 
                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                    >> 0x10U)));
                } else {
                    if ((3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_byte_in_word))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_dataout 
                            = (0xfU & ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                           >> 0x1cU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                           >> 0x18U)));
                    }
                }
            }
        }
    } else {
        if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_byte_in_word))) {
            if (((((((((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt)) 
                       | (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                      | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                     | (3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                    | (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                   | (5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                  | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                 | (7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_dataout 
                    = ((0xeU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_dataout)) 
                       | (1U & ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                 ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                    >> 7U) : ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                               ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                  >> 6U)
                                               : ((2U 
                                                   == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                   ? 
                                                  (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                   >> 5U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                    ? 
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                    >> 4U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                     ? 
                                                    (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                     >> 3U)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                      ? 
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                      >> 2U)
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                       ? 
                                                      (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                       >> 1U)
                                                       : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data)))))))));
            }
        } else {
            if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_byte_in_word))) {
                if (((((((((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt)) 
                           | (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                          | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                         | (3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                        | (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                       | (5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                      | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                     | (7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt)))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_dataout 
                        = ((0xeU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_dataout)) 
                           | (1U & ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                        >> 0xfU) : 
                                    ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                         >> 0xeU) : 
                                     ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                       ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                          >> 0xdU) : 
                                      ((3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                           >> 0xcU)
                                        : ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                            ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                               >> 0xbU)
                                            : ((5U 
                                                == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                   >> 0xaU)
                                                : (
                                                   (6U 
                                                    == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                    ? 
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                    >> 9U)
                                                    : 
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                    >> 8U))))))))));
                }
            } else {
                if ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_byte_in_word))) {
                    if (((((((((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt)) 
                               | (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                              | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                             | (3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                            | (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                           | (5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                          | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                         | (7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_dataout 
                            = ((0xeU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_dataout)) 
                               | (1U & ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                            >> 0x17U)
                                         : ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                             ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                >> 0x16U)
                                             : ((2U 
                                                 == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                 ? 
                                                (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                 >> 0x15U)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                  ? 
                                                 (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                  >> 0x14U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                   ? 
                                                  (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                   >> 0x13U)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                    ? 
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                    >> 0x12U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                     ? 
                                                    (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                     >> 0x11U)
                                                     : 
                                                    (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                     >> 0x10U))))))))));
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_byte_in_word))) {
                        if (((((((((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt)) 
                                   | (1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                                  | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                                 | (3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                                | (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                               | (5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                              | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))) 
                             | (7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt)))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_dataout 
                                = ((0xeU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_dataout)) 
                                   | (1U & ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                             ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                >> 0x1fU)
                                             : ((1U 
                                                 == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                 ? 
                                                (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                 >> 0x1eU)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                  ? 
                                                 (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                  >> 0x1dU)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                   ? 
                                                  (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                   >> 0x1cU)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                    ? 
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                    >> 0x1bU)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                     ? 
                                                    (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                     >> 0x1aU)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt))
                                                      ? 
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                      >> 0x19U)
                                                      : 
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_data 
                                                      >> 0x18U))))))))));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_cnt_byte_evnt 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_bit_cnt) 
           == ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_data_quad)
                ? 1U : 7U));
    vlTOPp->__Vtableidx11 = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__s_cmd_mux)
                              ? 1U : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_cmd_rsp_type));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_rsp_en 
        = vlTOPp->__Vtable11_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_rsp_en
        [vlTOPp->__Vtableidx11];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_rsp_crc 
        = vlTOPp->__Vtable11_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_rsp_crc
        [vlTOPp->__Vtableidx11];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_rsp_len 
        = vlTOPp->__Vtable11_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_rsp_len
        [vlTOPp->__Vtableidx11];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_rsp_bsy 
        = vlTOPp->__Vtable11_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_rsp_bsy
        [vlTOPp->__Vtableidx11];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_block_shift 
        = ((0xdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_block_shift)) 
           | (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_data_quad) 
               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_shift)) 
              << 1U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_block_shift 
        = ((0xbU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_block_shift)) 
           | (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_data_quad) 
               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_shift)) 
              << 2U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_block_shift 
        = ((7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_block_shift)) 
           | (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_data_quad) 
               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_shift)) 
              << 3U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_block_en 
        = ((0xdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_block_en)) 
           | (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_data_quad) 
               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_en)) 
              << 1U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_block_en 
        = ((0xbU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_block_en)) 
           | (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_data_quad) 
               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_en)) 
              << 2U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_block_en 
        = ((7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_block_en)) 
           | (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_data_quad) 
               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_en)) 
              << 3U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__s_sddata_oen 
        = ((0xdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__s_sddata_oen)) 
           | (2U & (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_data_quad)) 
                     | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_sddata_oen)) 
                    << 1U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__s_sddata_oen 
        = ((0xbU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__s_sddata_oen)) 
           | (4U & (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_data_quad)) 
                     | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_sddata_oen)) 
                    << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__s_sddata_oen 
        = ((7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__s_sddata_oen)) 
           | (8U & (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_data_quad)) 
                     | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_sddata_oen)) 
                    << 3U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__s_data_start 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_data_en) 
           & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_data_rwn) 
               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_start_read)) 
              | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_reg_if__DOT__r_data_rwn)) 
                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_start_write))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_rx_ch_data[6U] 
        = (((0U == (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                             << 5U))) ? 0U : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__buffer__DOT__data[
                                              ((IData)(1U) 
                                               + (3U 
                                                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                                                      << 5U))))) 
           | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__buffer__DOT__data[
              (3U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin))] 
              >> (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                           << 5U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_sddata = 0U;
    if (((((((((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state)) 
               | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
              | (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
             | (5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
            | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
           | (7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
          | (8U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
         | (9U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state)))) {
        if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
            if ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_sddata = 0U;
            } else {
                if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_sddata 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_dataout;
                } else {
                    if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_sddata 
                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_crc_out;
                    } else {
                        if ((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_sddata = 0xfU;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_lastbitofword 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_cnt_byte_evnt) 
           & (3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_byte_in_word)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_cnt_done 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_cnt_byte)
            ? ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_cnt)) 
               & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_cnt_byte_evnt))
            : (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_cnt)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd_oen = 1U;
    if (((((((((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state)) 
               | (3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) 
              | (5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) 
             | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) 
            | (7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) 
           | (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) 
          | (8U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) 
         | (0xaU == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state)))) {
        if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) {
            if ((3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd_oen = 0U;
            } else {
                if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd_oen = 0U;
                } else {
                    if ((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd_oen = 0U;
                    } else {
                        if ((7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd_oen = 0U;
                        } else {
                            if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd_oen = 0U;
                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_rsp_en) {
                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd_oen = 1U;
                                }
                            } else {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd_oen = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0xbU == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd_oen = 1U;
        } else {
            if ((0xcU == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd_oen = 1U;
            } else {
                if ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd_oen = 1U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__s_perio_oe = ((0x7ff0ffffffffULL 
                                            & vlTOPp->core_v_mcu__DOT__s_perio_oe) 
                                           | ((QData)((IData)(
                                                              (0xfU 
                                                               & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__s_sddata_oen))))) 
                                              << 0x20U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_clk_en = 1U;
    if (((((((((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state)) 
               | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
              | (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
             | (5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
            | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
           | (7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
          | (8U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
         | (9U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state)))) {
        if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_clk_en = 0U;
            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__s_data_start) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_clk_en = 1U;
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_out_data_valid = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state)) 
                        | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
                       | (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
                      | (5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
                     | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
                    | (7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
                   | (8U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
                  | (9U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state)))))) {
        if ((0xbU == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_out_data_valid 
                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_lastbitofword;
        } else {
            if ((0xcU == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_out_data_valid 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_lastbitofword;
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_sdio_timeout = 0U;
    if (((((((((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state)) 
               | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
              | (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
             | (5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
            | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
           | (7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
          | (8U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
         | (9U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state)))) {
        if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
            if ((2U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
                if ((4U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
                    if ((5U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
                        if ((6U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
                            if ((7U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
                                if ((8U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_cnt_done) {
                                        if ((0x3ffU 
                                             != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_sdio_timeout))) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_sdio_timeout 
                                                = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_sdio_timeout)));
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
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_in_data_ready = 0U;
    if (((((((((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state)) 
               | (2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
              | (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
             | (5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
            | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
           | (7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
          | (8U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) 
         | (9U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state)))) {
        if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
            if ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_in_data_ready = 1U;
            } else {
                if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__r_state))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_in_data_ready 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_lastbitofword;
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_cnt_done) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_in_data_ready = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__write_enable 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_out_data_valid) 
           & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__full__DOT__latched_full_s) 
                 & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__full__DOT__full_up))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__read_tr__DOT__next_state 
        = (((~ (IData)((0U != (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__write_token_dn)) 
                                & ((8U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__write_token_dn) 
                                          << 3U)) | 
                                   (7U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__write_token_dn) 
                                          >> 1U)))) 
                               & ((0xcU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__read_pointer) 
                                           << 2U)) 
                                  | (3U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__read_pointer) 
                                           >> 2U))))))) 
            & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_data_if__DOT__s_in_data_ready))
            ? ((0xeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__read_token) 
                        << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__read_token) 
                                         >> 3U))) : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_dc_fifo_tx__DOT__u_dout__DOT__read_token));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__write_tr__DOT__next_state 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__u_din__DOT__write_enable)
            ? ((0xeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__write_token) 
                        << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__write_token) 
                                         >> 3U))) : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__u_dc_fifo_rx__DOT__write_token));
}

VL_INLINE_OPT void Vcore_v_mcu::_sequent__TOP__223(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_sequent__TOP__223\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd = 1U;
    if (((((((((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state)) 
               | (3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) 
              | (5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) 
             | (6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) 
            | (7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) 
           | (4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) 
          | (8U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) 
         | (0xaU == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state)))) {
        if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) {
            if ((3U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd = 0U;
            } else {
                if ((5U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd = 1U;
                } else {
                    if ((6U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd 
                            = (1U & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_cmd 
                                             >> 0x25U)));
                    } else {
                        if ((7U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd 
                                = (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__r_crc) 
                                         >> 6U));
                        } else {
                            if ((4U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__r_state))) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_start_sync__DOT__i_sync_clkb__DOT__i_pulp_sync__DOT__r_reg 
        = vlTOPp->__Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_start_sync__DOT__i_sync_clkb__DOT__i_pulp_sync__DOT__r_reg;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__r_crc;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_crc_en) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc 
            = ((0x7eU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc)) 
               | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_sdcmd) 
                        ^ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__r_crc) 
                           >> 6U))));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc 
            = ((0x7dU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc)) 
               | (2U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__r_crc) 
                        << 1U)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc 
            = ((0x7bU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc)) 
               | (4U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__r_crc) 
                        << 1U)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc 
            = ((0x77U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc)) 
               | (8U & ((0xfffffff8U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__r_crc) 
                                        << 1U)) ^ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc) 
                                                   << 3U))));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc 
            = ((0x6fU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc)) 
               | (0x10U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__r_crc) 
                           << 1U)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc 
            = ((0x5fU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc)) 
               | (0x20U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__r_crc) 
                           << 1U)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc 
            = ((0x3fU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc)) 
               | (0x40U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__r_crc) 
                           << 1U)));
    } else {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_crc_clr) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc = 0U;
        } else {
            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__s_crc_shift) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__s_crc 
                    = (0x7eU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_sdio_gen__BRA__0__KET____DOT__i_sdio__DOT__i_sdio_txrx__DOT__i_cmd_if__DOT__i_cmd_crc__DOT__r_crc) 
                                << 1U));
            }
        }
    }
}

VL_INLINE_OPT void Vcore_v_mcu::_sequent__TOP__224(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_sequent__TOP__224\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_clockgen__DOT__i_edge_prop__DOT__serial_q 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_spim_gen__BRA__0__KET____DOT__i_spim__rstn_i) 
           & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_clockgen__DOT__i_edge_prop__DOT__i_pulp_sync__DOT__r_reg) 
              >> 1U));
}

VL_INLINE_OPT void Vcore_v_mcu::_sequent__TOP__225(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_sequent__TOP__225\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__read_pointer 
        = (((0xfcU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_dout__DOT__read_token) 
                      << 2U)) | (3U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_dout__DOT__read_token) 
                                       >> 6U))) & (
                                                   (0xf8U 
                                                    & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_dout__DOT__read_token) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_dout__DOT__read_token) 
                                                         >> 5U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__genblk1__BRA__3__KET____DOT__u_eot_ep__DOT__r_input_reg 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_spim_gen__BRA__0__KET____DOT__i_spim__rstn_i) 
           & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__genblk1__BRA__3__KET____DOT__u_eot_ep__DOT__s_input_reg_next));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__genblk1__BRA__2__KET____DOT__u_eot_ep__DOT__r_input_reg 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_spim_gen__BRA__0__KET____DOT__i_spim__rstn_i) 
           & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__genblk1__BRA__2__KET____DOT__u_eot_ep__DOT__s_input_reg_next));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__genblk1__BRA__1__KET____DOT__u_eot_ep__DOT__r_input_reg 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_spim_gen__BRA__0__KET____DOT__i_spim__rstn_i) 
           & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__genblk1__BRA__1__KET____DOT__u_eot_ep__DOT__s_input_reg_next));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__genblk1__BRA__0__KET____DOT__u_eot_ep__DOT__r_input_reg 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_spim_gen__BRA__0__KET____DOT__i_spim__rstn_i) 
           & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__genblk1__BRA__0__KET____DOT__u_eot_ep__DOT__s_input_reg_next));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_spim_gen__BRA__0__KET____DOT__i_spim__rstn_i) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__write_token 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__write_tr__DOT__next_state;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__write_token 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__write_tr__DOT__next_state;
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__write_token = 0xcU;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__write_token = 0xcU;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin 
        = ((6U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin)) 
           | (0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__RPRT_OH_BIN__DOT__jl__BRA__0__KET____DOT__tmp_mask) 
                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__read_pointer))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin 
        = ((5U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin)) 
           | ((IData)((0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__RPRT_OH_BIN__DOT__jl__BRA__1__KET____DOT__tmp_mask) 
                              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__read_pointer)))) 
              << 1U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin 
        = ((3U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin)) 
           | ((IData)((0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__RPRT_OH_BIN__DOT__jl__BRA__2__KET____DOT__tmp_mask) 
                              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__read_pointer)))) 
              << 2U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_dout__DOT__empty 
        = (((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_dout__DOT__write_token_dn)) 
            & ((0x80U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_dout__DOT__write_token_dn) 
                         << 7U)) | (0x7fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_dout__DOT__write_token_dn) 
                                             >> 1U)))) 
           & ((0xc0U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__read_pointer) 
                        << 6U)) | (0x3fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__read_pointer) 
                                            >> 2U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_rx_ch_valid 
        = ((0xfbU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_rx_ch_valid)) 
           | (4U & ((~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_dout__DOT__empty)))) 
                    << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__write_tr__DOT__next_state 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__write_enable)
            ? ((0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__write_token) 
                         << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__write_token) 
                                          >> 7U))) : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__write_token));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__write_pointer 
        = (((0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__write_token) 
                      << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__write_token) 
                                       >> 7U))) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__write_token));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__write_tr__DOT__next_state 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__write_enable)
            ? ((0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__write_token) 
                         << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__write_token) 
                                          >> 7U))) : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__write_token));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__write_pointer 
        = (((0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__write_token) 
                      << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__write_token) 
                                       >> 7U))) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__write_token));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__write_pointer_bin 
        = ((6U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__write_pointer_bin)) 
           | (0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__WPRT_OH_BIN__DOT__jl__BRA__0__KET____DOT__tmp_mask) 
                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__write_pointer))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__write_pointer_bin 
        = ((5U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__write_pointer_bin)) 
           | ((IData)((0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__WPRT_OH_BIN__DOT__jl__BRA__1__KET____DOT__tmp_mask) 
                              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__write_pointer)))) 
              << 1U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__write_pointer_bin 
        = ((3U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__write_pointer_bin)) 
           | ((IData)((0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__WPRT_OH_BIN__DOT__jl__BRA__2__KET____DOT__tmp_mask) 
                              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__write_pointer)))) 
              << 2U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__write_pointer_bin 
        = ((6U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__write_pointer_bin)) 
           | (0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__WPRT_OH_BIN__DOT__jl__BRA__0__KET____DOT__tmp_mask) 
                     & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__write_pointer))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__write_pointer_bin 
        = ((5U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__write_pointer_bin)) 
           | ((IData)((0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__WPRT_OH_BIN__DOT__jl__BRA__1__KET____DOT__tmp_mask) 
                              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__write_pointer)))) 
              << 1U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__write_pointer_bin 
        = ((3U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__write_pointer_bin)) 
           | ((IData)((0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__WPRT_OH_BIN__DOT__jl__BRA__2__KET____DOT__tmp_mask) 
                              & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__write_pointer)))) 
              << 2U));
}

VL_INLINE_OPT void Vcore_v_mcu::_sequent__TOP__226(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_sequent__TOP__226\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_eot_ep__DOT__i_sync_clkb__DOT__serial_q 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_spim_gen__BRA__0__KET____DOT__i_spim__rstn_i) 
           & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_eot_ep__DOT__i_sync_clkb__DOT__i_pulp_sync__DOT__r_reg) 
              >> 1U));
}

VL_INLINE_OPT void Vcore_v_mcu::_multiclk__TOP__227(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_multiclk__TOP__227\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__data_async 
        = (((0U == (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                             << 5U))) ? 0U : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__data[
                                              ((IData)(1U) 
                                               + (7U 
                                                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__read_pointer_bin)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                                                      << 5U))))) 
           | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__data[
              (7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__read_pointer_bin))] 
              >> (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                           << 5U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__s_rx_ch_data[2U] 
        = (((0U == (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                             << 5U))) ? 0U : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__data[
                                              ((IData)(1U) 
                                               + (7U 
                                                  & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                                                      << 5U))))) 
           | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__data[
              (7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin))] 
              >> (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                           << 5U))));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wait_cyc 
            = (0xffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_replay_buffer_out));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_lsb 
            = (1U & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_replay_buffer_out 
                             >> 0x1aU)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wordsize 
            = (0x1fU & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_replay_buffer_out 
                                >> 0x10U)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wordstransf 
            = (3U & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_replay_buffer_out 
                             >> 0x15U)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wait_typ 
            = (3U & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_replay_buffer_out 
                             >> 8U)));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_size_long 
            = (0xffffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_replay_buffer_out));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_qpi 
            = (1U & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_replay_buffer_out 
                             >> 0x1bU)));
        vlTOPp->__Vtableidx3 = (0xfU & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_replay_buffer_out 
                                                >> 0x1cU)));
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wait_cyc 
            = (0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__data_async);
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_lsb 
            = (1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__data_async 
                     >> 0x1aU));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wordsize 
            = (0x1fU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__data_async 
                        >> 0x10U));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wordstransf 
            = (3U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__data_async 
                     >> 0x15U));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wait_typ 
            = (3U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__data_async 
                     >> 8U));
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_size_long 
            = (0xffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__data_async);
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_qpi 
            = (1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__data_async 
                     >> 0x1bU));
        vlTOPp->__Vtableidx3 = (0xfU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__data_async 
                                        >> 0x1cU));
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg 
        = vlTOPp->__Vtable3_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg
        [vlTOPp->__Vtableidx3];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot 
        = vlTOPp->__Vtable3_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot
        [vlTOPp->__Vtableidx3];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc 
        = vlTOPp->__Vtable3_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc
        [vlTOPp->__Vtableidx3];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum 
        = vlTOPp->__Vtable3_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum
        [vlTOPp->__Vtableidx3];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai 
        = vlTOPp->__Vtable3_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai
        [vlTOPp->__Vtableidx3];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd 
        = vlTOPp->__Vtable3_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd
        [vlTOPp->__Vtableidx3];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd 
        = vlTOPp->__Vtable3_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd
        [vlTOPp->__Vtableidx3];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxc 
        = vlTOPp->__Vtable3_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxc
        [vlTOPp->__Vtableidx3];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rpt 
        = vlTOPp->__Vtable3_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rpt
        [vlTOPp->__Vtableidx3];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_eot 
        = vlTOPp->__Vtable3_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_eot
        [vlTOPp->__Vtableidx3];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rpe 
        = vlTOPp->__Vtable3_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rpe
        [vlTOPp->__Vtableidx3];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful 
        = vlTOPp->__Vtable3_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful
        [vlTOPp->__Vtableidx3];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_uca 
        = vlTOPp->__Vtable3_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_uca
        [vlTOPp->__Vtableidx3];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ucs 
        = vlTOPp->__Vtable3_core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ucs
        [vlTOPp->__Vtableidx3];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_wordstransf 
        = ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wordstransf))
            ? 0U : ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wordstransf))
                     ? 1U : ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wordstransf))
                              ? 3U : 0U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_setup_replay = 0U;
    if ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_setup_replay 
                        = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rpe)));
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_update_cfg = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_update_cfg = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_update_cs = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_update_cs = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_update_evt = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc)))) {
                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai) {
                                    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wait_typ))) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_update_evt = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cnt_target = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cnt_target = 1U;
                    } else {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cnt_target 
                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wait_cyc;
                        } else {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc)))) {
                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai) {
                                    if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wait_typ))) {
                                        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wait_typ))) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cnt_target 
                                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wait_cyc;
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
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_update_qpi = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_update_qpi = 1U;
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_update_qpi = 1U;
                                    } else {
                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_update_qpi = 1U;
                                        } else {
                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_update_qpi = 1U;
                                            } else {
                                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_update_qpi = 1U;
                                                } else {
                                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxc) {
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_update_qpi = 1U;
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
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_is_ful 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_ful;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_is_ful = 0U;
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum)))) {
                                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd)))) {
                                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_is_ful = 1U;
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
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_bitsword = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_bitsword 
                                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wordsize;
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum)))) {
                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_bitsword 
                                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wordsize;
                                        } else {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd)))) {
                                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_bitsword 
                                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wordsize;
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
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_update_chk = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum)))) {
                                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful)))) {
                                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxc) {
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_update_chk = 1U;
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
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_lsbfirst = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_lsbfirst = 0U;
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum)))) {
                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_lsbfirst 
                                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_lsb;
                                        } else {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd)))) {
                                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_lsbfirst 
                                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_lsb;
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
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_set_first_reply = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum)))) {
                                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxc)))) {
                                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rpt) {
                                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_set_first_reply = 1U;
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
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_clr_rpt_buf = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum)))) {
                                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxc)))) {
                                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rpt) {
                                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_clr_rpt_buf = 1U;
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
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_bitsword = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_bitsword 
                                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wordsize;
                                    } else {
                                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd)))) {
                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_bitsword 
                                                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wordsize;
                                            } else {
                                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_bitsword 
                                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wordsize;
                                                } else {
                                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxc) {
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_bitsword 
                                                            = 
                                                            (0xfU 
                                                             & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wordsize));
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
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_lsbfirst = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum)))) {
                                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd)))) {
                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_lsbfirst 
                                                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_lsb;
                                            } else {
                                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_lsbfirst 
                                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_lsb;
                                                } else {
                                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxc) {
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_lsbfirst 
                                                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_lsb;
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
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_qpi 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_qpi;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_qpi 
                                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_qpi;
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_qpi 
                                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_qpi;
                                    } else {
                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_qpi 
                                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_qpi;
                                        } else {
                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_qpi 
                                                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_qpi;
                                            } else {
                                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_qpi = 0U;
                                                } else {
                                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxc) {
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_qpi 
                                                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_qpi;
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
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cnt_start = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cnt_start = 1U;
                    } else {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cnt_start = 1U;
                        } else {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc)))) {
                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai) {
                                    if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wait_typ))) {
                                        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_wait_typ))) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cnt_start = 1U;
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
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_spi_eot = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum)))) {
                                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxc)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rpt)))) {
                                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_eot) {
                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_spi_eot 
                                                                    = 
                                                                    (1U 
                                                                     & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)
                                                                         ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_replay_buffer_out)
                                                                         : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__data_async));
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
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_size = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_size = 0U;
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum)))) {
                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_size 
                                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_size_long;
                                        } else {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd)))) {
                                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_size 
                                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_size_long;
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
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data 
                    = (((0U == (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                                         << 5U))) ? 0U
                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__data[
                            ((IData)(1U) + (7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                                                     << 5U))))) 
                       | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__data[
                          (7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin))] 
                          >> (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_din__DOT__buffer__DOT__read_pointer_bin) 
                                       << 5U))));
            } else {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data 
                                    = (0xffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)
                                                   ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_replay_buffer_out)
                                                   : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__data_async));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_size = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_size = 0U;
                                    } else {
                                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd)))) {
                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_size 
                                                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_size_long;
                                            } else {
                                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_size 
                                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_size_long;
                                                } else {
                                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxc) {
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_size = 0U;
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
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_qpi 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_qpi;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_qpi 
                                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_qpi;
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum)))) {
                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_qpi 
                                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_qpi;
                                        } else {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd)))) {
                                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_qpi = 0U;
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
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid 
                    = (1U & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_dout__DOT__empty)))));
            } else {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_qpi 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_qpi;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_qpi 
                                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_qpi;
                                    } else {
                                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd)))) {
                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_qpi 
                                                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_qpi;
                                            } else {
                                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_qpi = 0U;
                                                } else {
                                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxc) {
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_qpi 
                                                            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cd_cfg_qpi;
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
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start = 1U;
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum)))) {
                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start = 1U;
                                        } else {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd)))) {
                                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start = 1U;
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
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_start = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_start = 1U;
                                    } else {
                                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd)))) {
                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_start = 1U;
                                            } else {
                                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_start = 1U;
                                                } else {
                                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxc) {
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_start = 1U;
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
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_wordtransf = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_wordtransf = 0U;
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum)))) {
                                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd) {
                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_wordtransf 
                                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_wordstransf;
                                        } else {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd)))) {
                                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_wordtransf 
                                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_wordstransf;
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
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_wordtransf = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_wordtransf = 0U;
                                    } else {
                                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_txd)))) {
                                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxd) {
                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_wordtransf 
                                                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_wordstransf;
                                            } else {
                                                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_ful) {
                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_wordtransf 
                                                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_wordstransf;
                                                } else {
                                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_rxc) {
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_wordtransf = 0U;
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
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cnt_state_next 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_cnt_state;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_cnt_state))) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cnt_start) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cnt_state_next = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_cnt_state))) {
            if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_cnt_target) 
                 == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_cnt))) {
                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cnt_start)))) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_cnt_state_next = 0U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_eot_ep__DOT__s_input_reg_next 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_spi_eot) 
           | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_eot_ep__DOT__r_input_reg) 
              & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_eot_ep__DOT__sync_a))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_mode = 3U;
    if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_mode 
                = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_qpi)
                    ? 2U : 0U);
        } else {
            if ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_mode 
                    = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_qpi)
                        ? 2U : 0U);
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_sample_bits = 0U;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_sample_bits = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_sample_bits = 1U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_driving = 0U;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_driving = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_driving = 1U;
        } else {
            if ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_driving = 1U;
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_sample_in = 0U;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_sample_in = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
            if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) 
                 & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_hi)))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_is_last) {
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_sample_in = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_counter_bits 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_bits;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_counter_bits 
                = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_qpi)
                    ? 3U : 0U);
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_counter_bits 
                = (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done)
                             ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_qpi)
                                 ? 3U : 0U) : ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_qpi)
                                                ? ((IData)(4U) 
                                                   + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_bits))
                                                : ((IData)(1U) 
                                                   + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_bits)))));
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_is_last 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_is_last;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_is_last 
                = (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_size));
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
            if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) 
                 & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_hi)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_is_last 
                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_is_last)));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state_next 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state_next 
                = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid)
                    ? 1U : 2U);
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
            if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) 
                 & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_hi)))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_is_last) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state_next 
                        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start)
                            ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid)
                                ? 1U : 2U) : 0U);
                } else {
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_transf_done) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state_next 
                            = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid)
                                ? 1U : 2U);
                    }
                }
            } else {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) {
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_transf_done) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state_next 
                            = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid)
                                ? 1U : 2U);
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state_next = 1U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_shift_reg 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_shift_reg;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start) {
            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_shift_reg 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data;
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
            if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) 
                 & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_hi)))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_is_last) {
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_shift_reg 
                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data;
                        }
                    }
                } else {
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_transf_done) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_shift_reg 
                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data;
                        }
                    }
                }
            } else {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) {
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_transf_done) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_shift_reg 
                                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_shift_reg 
                        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_ready = 0U;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start) {
            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_ready = 1U;
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
            if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) 
                 & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_hi)))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_is_last) {
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_ready = 1U;
                        }
                    }
                } else {
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_transf_done) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_ready = 1U;
                        }
                    }
                }
            } else {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) {
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_transf_done) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_ready = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_valid) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_ready = 1U;
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_idle = 0U;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__tx_state))) {
        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_idle = 1U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_idle = 0U;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_start)))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_idle = 1U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_sample_bits = 0U;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_start) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_sample_bits = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_sample_bits = 1U;
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_mode = 3U;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_start) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_mode 
                = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_qpi)
                    ? 3U : 0U);
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_mode 
                = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_qpi)
                    ? 3U : 0U);
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful 
        = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_start) 
            & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_start)) 
           | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_is_ful));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_udma_tx_data_ready = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_udma_tx_data_ready 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_data_ready;
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_spi_sdo3 
        = ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_idle)) 
           & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_qpi) 
              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_lsbfirst)
                  ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_shift_reg 
                     >> (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bit_index))
                  : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_shift_reg 
                     >> (0x1fU & ((IData)(3U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bit_index)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_spi_sdo2 
        = ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_idle)) 
           & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_qpi) 
              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_lsbfirst)
                  ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_shift_reg 
                     >> (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bit_index) 
                                  - (IData)(1U)))) : 
                 (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_shift_reg 
                  >> (0x1fU & ((IData)(2U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bit_index)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_spi_sdo1 
        = ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_idle)) 
           & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_qpi) 
              & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_lsbfirst)
                  ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_shift_reg 
                     >> (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bit_index) 
                                  - (IData)(2U)))) : 
                 (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_shift_reg 
                  >> (0x1fU & ((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bit_index)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_spi_sdo0 
        = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_idle)) 
                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_qpi)
                     ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_lsbfirst)
                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_shift_reg 
                            >> (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bit_index) 
                                         - (IData)(3U))))
                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_shift_reg 
                            >> (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bit_index)))
                     : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_tx_shift_reg 
                        >> (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bit_index)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_sample_transf = 0U;
    if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
            if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful)) 
                       | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful) 
                          & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_clken))))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_rx_clken) {
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_sample_transf = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_counter_hi 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_hi;
    if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
            if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful)) 
                       | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful) 
                          & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_clken))))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_rx_clken) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) 
                                  & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_hi)))))) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_counter_hi 
                                = (0xffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_hi) 
                                              - (IData)(1U)));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_sample_hi = 0U;
    if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
            if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful)) 
                       | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful) 
                          & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_clken))))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_rx_clken) {
                    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) 
                                  & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_hi)))))) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_sample_hi = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_counter_bits 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_bits;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_start) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_counter_bits 
                = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_qpi)
                    ? 3U : 0U);
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
            if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful)) 
                       | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful) 
                          & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_clken))))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_counter_bits 
                    = (0x1fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done)
                                 ? ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_qpi)
                                     ? 3U : 0U) : ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_qpi)
                                                    ? 
                                                   ((IData)(4U) 
                                                    + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_bits))
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_bits)))));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_counter_transf 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_transf;
    if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
            if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful)) 
                       | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful) 
                          & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_clken))))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_rx_clken) {
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_counter_transf 
                            = (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_transf) 
                                == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_wordtransf))
                                ? 0U : (3U & ((IData)(1U) 
                                              + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_transf))));
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state_next 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_start) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state_next = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
            if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful)) 
                       | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful) 
                          & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_clken))))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_rx_clken) {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) 
                         & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_hi)))) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_rx_is_last) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state_next 
                                = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_start)
                                    ? 1U : 0U);
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_sample_rx_in = 0U;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_start) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_sample_rx_in = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
            if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful)) 
                       | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful) 
                          & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_clken))))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_rx_clken) {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) 
                         & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_hi)))) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_rx_is_last) {
                            if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_start) {
                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_sample_rx_in = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_is_last 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_rx_is_last;
    if ((0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_start) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_is_last 
                = (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_size));
        }
    } else {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
            if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful)) 
                       | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful) 
                          & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_clken))))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_rx_clken) {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) 
                         & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_hi)))) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_is_last 
                            = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_rx_is_last)));
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_data_valid = 0U;
    if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
            if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful)) 
                       | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful) 
                          & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_clken))))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_rx_clken) {
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_transf) 
                             == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_wordtransf))) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_data_valid = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_done = 0U;
    if ((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
        if ((1U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__rx_state))) {
            if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful)) 
                       | ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful) 
                          & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_clken))))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_rx_clken) {
                    if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_bits_done) 
                         & (0U == (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_counter_hi)))) {
                        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__r_rx_is_last) {
                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_done = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_clken 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_is_ful)
            ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_clken)
            : ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_tx_clken) 
               | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_txrx__DOT__s_rx_clken)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_dout__DOT__read_tr__DOT__next_state 
        = (((~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_dout__DOT__empty)))) 
            & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_udma_tx_data_ready))
            ? ((0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_dout__DOT__read_token) 
                         << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_dout__DOT__read_token) 
                                          >> 7U))) : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_tx__DOT__u_dout__DOT__read_token));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_udma_rx_data_valid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_udma_rx_data_valid 
                    = ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_dummy)) 
                       & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_data_valid));
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_done 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_ful)
            ? (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_done) 
                | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_tx_done)) 
               & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_done) 
                  | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_rx_done)))
            : ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_tx_done) 
               | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_done)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__write_enable 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_udma_rx_data_valid) 
           & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__stall)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_is_dummy 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_dummy;
    if ((1U & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state))) {
            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state)))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__s_rx_done) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_is_dummy = 0U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__state))) {
                if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_done) {
                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_is_dummy = 0U;
                }
            } else {
                if ((1U & (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay) 
                            & (0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__i_reply_buffer__DOT__elements))) 
                           | ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__r_is_replay)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_cmd__DOT__u_dout__DOT__empty)))))))) {
                    if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_cfg)))) {
                        if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_sot)))) {
                            if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_snc)))) {
                                if ((1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_wai)))) {
                                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__is_cmd_dum) {
                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_spictrl__DOT__s_is_dummy = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__write_tr__DOT__next_state 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__u_din__DOT__write_enable)
            ? ((0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__write_token) 
                         << 1U)) | (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__write_token) 
                                          >> 7U))) : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_spim_gen__BRA__0__KET____DOT__i_spim__DOT__u_dc_rx__DOT__write_token));
}
