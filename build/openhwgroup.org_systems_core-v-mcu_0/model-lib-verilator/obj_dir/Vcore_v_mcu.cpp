// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_v_mcu.h for the primary calling header

#include "Vcore_v_mcu.h"
#include "Vcore_v_mcu__Syms.h"

//==========

void Vcore_v_mcu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcore_v_mcu::eval\n"); );
    Vcore_v_mcu__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../src/openhwgroup.org_systems_core-v-mcu_0/rtl/core-v-mcu/top/core_v_mcu.sv", 14, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcore_v_mcu::_eval_initial_loop(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../src/openhwgroup.org_systems_core-v-mcu_0/rtl/core-v-mcu/top/core_v_mcu.sv", 14, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vcore_v_mcu::_combo__TOP__25(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_combo__TOP__25\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp4690[3];
    WData/*95:0*/ __Vtemp4691[3];
    WData/*95:0*/ __Vtemp4694[3];
    WData/*95:0*/ __Vtemp4695[3];
    WData/*95:0*/ __Vtemp4698[3];
    WData/*95:0*/ __Vtemp4699[3];
    WData/*95:0*/ __Vtemp4702[3];
    WData/*95:0*/ __Vtemp4703[3];
    WData/*95:0*/ __Vtemp4706[3];
    WData/*95:0*/ __Vtemp4707[3];
    WData/*95:0*/ __Vtemp4710[3];
    WData/*95:0*/ __Vtemp4711[3];
    WData/*95:0*/ __Vtemp4714[3];
    WData/*95:0*/ __Vtemp4715[3];
    WData/*95:0*/ __Vtemp4718[3];
    WData/*95:0*/ __Vtemp4719[3];
    WData/*95:0*/ __Vtemp4722[3];
    WData/*95:0*/ __Vtemp4723[3];
    WData/*95:0*/ __Vtemp4726[3];
    WData/*95:0*/ __Vtemp4727[3];
    WData/*95:0*/ __Vtemp4730[3];
    WData/*95:0*/ __Vtemp4731[3];
    WData/*95:0*/ __Vtemp4734[3];
    WData/*95:0*/ __Vtemp4735[3];
    WData/*95:0*/ __Vtemp4738[3];
    WData/*95:0*/ __Vtemp4739[3];
    WData/*95:0*/ __Vtemp4742[3];
    WData/*95:0*/ __Vtemp4743[3];
    WData/*95:0*/ __Vtemp4746[3];
    WData/*95:0*/ __Vtemp4747[3];
    WData/*95:0*/ __Vtemp4750[3];
    WData/*95:0*/ __Vtemp4751[3];
    WData/*95:0*/ __Vtemp4754[3];
    WData/*95:0*/ __Vtemp4755[3];
    WData/*95:0*/ __Vtemp4758[3];
    WData/*95:0*/ __Vtemp4759[3];
    WData/*95:0*/ __Vtemp4762[3];
    WData/*95:0*/ __Vtemp4763[3];
    WData/*95:0*/ __Vtemp4766[3];
    WData/*95:0*/ __Vtemp4767[3];
    WData/*95:0*/ __Vtemp4770[3];
    WData/*95:0*/ __Vtemp4771[3];
    WData/*95:0*/ __Vtemp4774[3];
    WData/*95:0*/ __Vtemp4775[3];
    WData/*95:0*/ __Vtemp4778[3];
    WData/*95:0*/ __Vtemp4779[3];
    WData/*95:0*/ __Vtemp4782[3];
    WData/*95:0*/ __Vtemp4783[3];
    WData/*95:0*/ __Vtemp4786[3];
    WData/*95:0*/ __Vtemp4787[3];
    WData/*95:0*/ __Vtemp4790[3];
    WData/*95:0*/ __Vtemp4791[3];
    // Body
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_inp 
        = ((0x1f00U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[9U] 
                        << 0x1dU) | (0x1fffff00U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[8U] 
                                      >> 3U)))) | (0xffU 
                                                   & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[8U] 
                                                       << 0x1dU) 
                                                      | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[7U] 
                                                         >> 3U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__Arnold2_Design__DOT__A2__DOT__top1_rtl__DOT____Vsenitemexpr6 
        = (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__Arnold2_Design__DOT__A2__DOT____Vcellinp__top1_rtl__RESET) 
                 >> 3U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__Arnold2_Design__DOT__A2__DOT__top1_rtl__DOT____Vsenitemexpr2 
        = (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__Arnold2_Design__DOT__A2__DOT____Vcellinp__top1_rtl__RESET) 
                 >> 1U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__Arnold2_Design__DOT__A2__DOT__top1_rtl__DOT____Vsenitemexpr4 
        = (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__Arnold2_Design__DOT__A2__DOT____Vcellinp__top1_rtl__RESET) 
                 >> 2U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__slave_grant 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__dm_slave_req;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_burst_splitter__mst_req_o[2U] 
        = ((0xfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_burst_splitter__mst_req_o[2U]) 
           | (0xfffff000U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[4U])) 
                                          << 0x34U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[3U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[2U])) 
                                               >> 0xcU))))) 
                             << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_burst_splitter__mst_req_o[3U] 
        = ((0xff800000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_burst_splitter__mst_req_o[3U]) 
           | ((0xfffU & ((IData)((0x7ffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[4U])) 
                                      << 0x34U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[3U])) 
                                                    << 0x14U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[2U])) 
                                                      >> 0xcU))))) 
                         >> 0x14U)) | (0xfffff000U 
                                       & ((IData)((
                                                   (0x7ffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[4U])) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[3U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[2U])) 
                                                             >> 0xcU)))) 
                                                   >> 0x20U)) 
                                          << 0xcU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_burst_splitter__mst_req_o[2U] 
        = (0x40000U | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_burst_splitter__mst_req_o[2U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_burst_splitter__mst_req_o[2U] 
        = ((0xfffff7ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_burst_splitter__mst_req_o[2U]) 
           | (0x800U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[2U]));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__lite_resp 
        = ((0xffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__lite_resp) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_lite_to_apb__DOT____Vcellout__i_axi_lite_to_apb__axi_lite_resp_o 
                                             >> 0x28U))))) 
              << 0x28U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__lite_resp 
        = ((0x1f7ffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__lite_resp) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_lite_to_apb__DOT____Vcellout__i_axi_lite_to_apb__axi_lite_resp_o 
                                             >> 0x23U))))) 
              << 0x23U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__lite_resp 
        = ((0x17fffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__lite_resp) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_lite_to_apb__DOT____Vcellout__i_axi_lite_to_apb__axi_lite_resp_o 
                                             >> 0x27U))))) 
              << 0x27U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__lite_resp 
        = ((0x1efffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__lite_resp) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_lite_to_apb__DOT____Vcellout__i_axi_lite_to_apb__axi_lite_resp_o 
                                             >> 0x24U))))) 
              << 0x24U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__lite_resp 
        = ((0x19fffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__lite_resp) 
           | ((QData)((IData)((3U & (IData)((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_lite_to_apb__DOT____Vcellout__i_axi_lite_to_apb__axi_lite_resp_o 
                                             >> 0x25U))))) 
              << 0x25U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__lite_resp 
        = ((0x1fffffffffeULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__lite_resp) 
           | (IData)((IData)((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_lite_to_apb__DOT____Vcellout__i_axi_lite_to_apb__axi_lite_resp_o)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__lite_resp 
        = ((0x1f800000001ULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_to_axi_lite__DOT__lite_resp) 
           | (0x7fffffffeULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_axi_lite_to_apb__DOT____Vcellout__i_axi_lite_to_apb__axi_lite_resp_o));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_contiguous_xbar__DOT__master_ports_req 
        = ((0x1ffdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_contiguous_xbar__DOT__master_ports_req)) 
           | (2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__gen_l2_demux__BRA__1__KET____DOT__i_l2_demux__DOT__slave_ports_req)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_contiguous_xbar__DOT__master_ports_add[1U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__gen_l2_demux__BRA__1__KET____DOT__i_l2_demux__DOT__slave_ports_add[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__l2_demux_2_interleaved_xbar_req 
        = ((0x1ffdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__l2_demux_2_interleaved_xbar_req)) 
           | (2U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__gen_l2_demux__BRA__1__KET____DOT__i_l2_demux__DOT__slave_ports_req) 
                    >> 1U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__l2_demux_2_interleaved_xbar_add[1U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__gen_l2_demux__BRA__1__KET____DOT__i_l2_demux__DOT__slave_ports_add[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0x7fffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready)) 
              << 0x37U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xdfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready)) 
              << 0x35U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xbfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready)) 
              << 0x36U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0x7fffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready)) 
              << 0x37U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xdfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready)) 
              << 0x35U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xbfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready)) 
              << 0x36U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0x7fffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready)) 
              << 0x37U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xdfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready)) 
              << 0x35U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xbfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready)) 
              << 0x36U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0x7fffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready)) 
              << 0x37U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xdfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready)) 
              << 0x35U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xbfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready)) 
              << 0x36U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0x7fffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready)) 
              << 0x37U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xdfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready)) 
              << 0x35U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xbfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready)) 
              << 0x36U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0x7fffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready)) 
              << 0x37U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xdfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready)) 
              << 0x35U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xbfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready)) 
              << 0x36U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0x7fffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready)) 
              << 0x37U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xdfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready)) 
              << 0x35U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xbfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready)) 
              << 0x36U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0x7fffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready)) 
              << 0x37U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xdfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready)) 
              << 0x35U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xbfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready)) 
              << 0x36U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0x7fffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready)) 
              << 0x37U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xdfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready)) 
              << 0x35U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xbfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready)) 
              << 0x36U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0x7fffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready)) 
              << 0x37U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xdfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready)) 
              << 0x35U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xbfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready)) 
              << 0x36U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0x7fffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready)) 
              << 0x37U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xdfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready)) 
              << 0x35U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xbfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready)) 
              << 0x36U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0x7fffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready)) 
              << 0x37U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xdfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready)) 
              << 0x35U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xbfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready)) 
              << 0x36U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0x7fffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_aw_ready)) 
              << 0x37U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xdfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_w_ready)) 
              << 0x35U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__slv_resp_o 
        = ((0xbfffffffffffffULL & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__slv_resp_o) 
           | ((QData)((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__DOT__gen_demux__DOT__slv_ar_ready)) 
              << 0x36U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__Arnold2_Design__DOT__A2__DOT__top1_rtl__DOT____Vsenitemexpr12 
        = (1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__Arnold2_Design__DOT__A2__DOT____Vcellinp__top1_rtl__RESET));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_reqs_o[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[1U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_reqs_o[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[2U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_reqs_o[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[3U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_reqs_o[3U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[4U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_reqs_o[4U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[5U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_reqs_o[5U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[6U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_reqs_o[6U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[7U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_reqs_o[7U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[8U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_reqs_o[8U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[9U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_reqs_o[9U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xaU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_reqs_o[0xaU];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xbU] 
        = ((0xf0000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xbU]) 
           | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_reqs_o[0xbU]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xbU] 
        = ((0xfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xbU]) 
           | (0xf0000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                             << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xcU] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xdU] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xeU] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xfU] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x10U] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x11U] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x12U] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x13U] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x14U] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x15U] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x16U] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x17U] 
        = ((0xff000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x17U]) 
           | (0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                            >> 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x17U] 
        = ((0xffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x17U]) 
           | (0xff000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                             << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x18U] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x19U] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1aU] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1bU] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1cU] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1dU] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1eU] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1fU] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x20U] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x21U] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x22U] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x23U] 
        = ((0xfff00000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x23U]) 
           | (0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                           >> 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x23U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x23U]) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                             << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x24U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x25U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x26U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x27U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x28U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x29U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2aU] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2bU] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2cU] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2dU] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2eU] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2fU] 
        = ((0xffff0000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2fU]) 
           | (0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                          >> 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2fU] 
        = ((0xffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2fU]) 
           | (0xffff0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                             << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x30U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x31U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x32U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x33U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x34U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x35U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x36U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x37U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x38U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x39U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3aU] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3bU] 
        = ((0xfffff000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3bU]) 
           | (0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                         >> 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3bU] 
        = ((0xfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3bU]) 
           | (0xfffff000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                             << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3cU] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                                                   << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3dU] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                                                   << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3eU] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                                                   << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3fU] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                                                   << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x40U] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                                                   << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x41U] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                                                   << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x42U] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                                                   << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x43U] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                                                   << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x44U] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                                                   << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x45U] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                                                   << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x46U] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                                                   << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x47U] 
        = ((0xffffff00U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x47U]) 
           | (0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                        >> 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x47U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x47U]) 
           | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x48U] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                                                  << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x49U] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                                                  << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4aU] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                                                  << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4bU] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                                                  << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4cU] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                                                  << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4dU] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                                                  << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4eU] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                                                  << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4fU] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                                                  << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x50U] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                                                  << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x51U] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                                                  << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x52U] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                                                  << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x53U] 
        = ((0xfffffff0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x53U]) 
           | (0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                       >> 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x53U] 
        = ((0xfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x53U]) 
           | (0xfffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                             << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x54U] 
        = ((0xfU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                    >> 0x1cU)) | (0xfffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                                                 << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x55U] 
        = ((0xfU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                    >> 0x1cU)) | (0xfffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                                                 << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x56U] 
        = ((0xfU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                    >> 0x1cU)) | (0xfffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                                                 << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x57U] 
        = ((0xfU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                    >> 0x1cU)) | (0xfffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                                                 << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x58U] 
        = ((0xfU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                    >> 0x1cU)) | (0xfffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                                                 << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x59U] 
        = ((0xfU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                    >> 0x1cU)) | (0xfffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                                                 << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5aU] 
        = ((0xfU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                    >> 0x1cU)) | (0xfffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                                                 << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5bU] 
        = ((0xfU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                    >> 0x1cU)) | (0xfffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                                                 << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5cU] 
        = ((0xfU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                    >> 0x1cU)) | (0xfffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                                                 << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5dU] 
        = ((0xfU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                    >> 0x1cU)) | (0xfffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                                                 << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5eU] 
        = ((0xfU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                    >> 0x1cU)) | (0xfffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                                                 << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5fU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__mst_reqs_o[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x60U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__mst_reqs_o[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x61U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__mst_reqs_o[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x62U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__mst_reqs_o[3U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x63U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__mst_reqs_o[4U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x64U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__mst_reqs_o[5U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x65U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__mst_reqs_o[6U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x66U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__mst_reqs_o[7U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x67U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__mst_reqs_o[8U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x68U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__mst_reqs_o[9U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x69U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__mst_reqs_o[0xaU];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6aU] 
        = ((0xf0000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6aU]) 
           | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_demux__mst_reqs_o[0xbU]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6aU] 
        = ((0xfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6aU]) 
           | (0xf0000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                             << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6bU] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6cU] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6dU] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6eU] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6fU] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x70U] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x71U] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x72U] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x73U] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x74U] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x75U] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x76U] 
        = ((0xff000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x76U]) 
           | (0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                            >> 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x76U] 
        = ((0xffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x76U]) 
           | (0xff000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                             << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x77U] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x78U] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x79U] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7aU] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7bU] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7cU] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7dU] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7eU] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7fU] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x80U] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x81U] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x82U] 
        = ((0xfff00000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x82U]) 
           | (0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                           >> 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x82U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x82U]) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                             << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x83U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x84U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x85U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x86U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x87U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x88U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x89U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8aU] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8bU] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8cU] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8dU] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8eU] 
        = ((0xffff0000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8eU]) 
           | (0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                          >> 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8eU] 
        = ((0xffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8eU]) 
           | (0xffff0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                             << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8fU] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[0U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x90U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[1U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x91U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[2U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x92U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[3U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x93U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[4U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x94U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[5U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x95U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[6U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x96U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[7U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x97U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[8U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x98U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[9U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x99U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[0xaU] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x9aU] 
        = (0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_demux__mst_reqs_o[0xbU] 
                      >> 0x10U));
    vlTOPp->slow_clk_o = vlTOPp->ref_clk_i;
    if ((1U & (~ (IData)(vlTOPp->ref_clk_i)))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__i_event_fifo1__DOT__cg_cell__DOT__i_tc_clk_gating__DOT__clk_en 
            = (1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__i_event_fifo1__DOT__gate_clock)) 
                     | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__i_event_fifo1__DOT__test_mode_i)));
    }
    if ((1U & (~ (IData)(vlTOPp->ref_clk_i)))) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_ref_clk_sync__DOT__i_pulp_clock_gating__DOT__i_tc_clk_gating__DOT__clk_en = 1U;
    }
    vlTOPp->core_v_mcu__DOT__s_io_in = ((IData)(vlTOPp->stm_i)
                                         ? 0ULL : vlTOPp->io_in_i);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[9U] 
                             << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xfffffU & ((0xffffcU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xaU] 
                                     << 2U)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[9U] 
                                                >> 0x1eU))) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xaU] 
                             << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0xfffffU & ((0xffffcU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xbU] 
                                     << 2U)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xaU] 
                                                >> 0x1eU))) 
           | (0x3ff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xbU] 
                             << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = (0x3ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffff00U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xaU])) 
                                          << 0x3aU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[9U])) 
                                             << 0x1aU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[8U])) 
                                               >> 6U))))) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfff80000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | ((0xffU & ((IData)((0x7ffffffffffULL & 
                                 (((QData)((IData)(
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xaU])) 
                                   << 0x3aU) | (((QData)((IData)(
                                                                 vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[9U])) 
                                                 << 0x1aU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[8U])) 
                                                   >> 6U))))) 
                        >> 0x18U)) | (0xffffff00U & 
                                      ((IData)(((0x7ffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xaU])) 
                                                     << 0x3aU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[9U])) 
                                                        << 0x1aU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[8U])) 
                                                          >> 6U)))) 
                                                >> 0x20U)) 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[6U] 
                              << 2U) | (2U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[5U] 
                                              >> 0x1eU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[6U] 
                  >> 0x1eU)) | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[7U] 
                                                << 2U) 
                                               | (2U 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[6U] 
                                                     >> 0x1eU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffc0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[7U] 
                     >> 0x1eU)) | (0x3eU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[8U] 
                                             << 2U) 
                                            | (2U & 
                                               (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[7U] 
                                                >> 0x1eU))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x15U] 
                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xfffffU & ((0xfffc0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x16U] 
                                     << 6U)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x15U] 
                                                >> 0x1aU))) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x16U] 
                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0xfffffU & ((0xfffc0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x17U] 
                                     << 6U)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x16U] 
                                                >> 0x1aU))) 
           | (0x3ff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x17U] 
                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = (0x3ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffff00U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x16U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x15U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x14U])) 
                                               >> 2U))))) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfff80000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | ((0xffU & ((IData)((0x7ffffffffffULL & 
                                 (((QData)((IData)(
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x16U])) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x15U])) 
                                                 << 0x1eU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x14U])) 
                                                   >> 2U))))) 
                        >> 0x18U)) | (0xffffff00U & 
                                      ((IData)(((0x7ffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x16U])) 
                                                     << 0x3eU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x15U])) 
                                                        << 0x1eU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x14U])) 
                                                          >> 2U)))) 
                                                >> 0x20U)) 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x12U] 
                              << 6U) | (0x3eU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x11U] 
                                                 >> 0x1aU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x12U] 
                  >> 0x1aU)) | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x13U] 
                                                << 6U) 
                                               | (0x3eU 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x12U] 
                                                     >> 0x1aU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffc0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x13U] 
                     >> 0x1aU)) | (0x3eU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x14U] 
                                             << 6U) 
                                            | (0x3eU 
                                               & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x13U] 
                                                  >> 0x1aU))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x21U] 
                             << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xfffffU & ((0xffc00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x22U] 
                                     << 0xaU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x21U] 
                                                  >> 0x16U))) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x22U] 
                             << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0xfffffU & ((0xffc00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x23U] 
                                     << 0xaU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x22U] 
                                                  >> 0x16U))) 
           | (0x3ff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x23U] 
                             << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = (0x3ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffff00U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x21U])) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x20U])) 
                                             << 2U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1fU])) 
                                               >> 0x1eU))))) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfff80000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | ((0xffU & ((IData)((0x7ffffffffffULL & 
                                 (((QData)((IData)(
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x21U])) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x20U])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1fU])) 
                                                   >> 0x1eU))))) 
                        >> 0x18U)) | (0xffffff00U & 
                                      ((IData)(((0x7ffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x21U])) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x20U])) 
                                                        << 2U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1fU])) 
                                                          >> 0x1eU)))) 
                                                >> 0x20U)) 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1eU] 
                              << 0xaU) | (0x3feU & 
                                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1dU] 
                                           >> 0x16U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1eU] 
                  >> 0x16U)) | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1fU] 
                                                << 0xaU) 
                                               | (0x3feU 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1eU] 
                                                     >> 0x16U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffc0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1fU] 
                     >> 0x16U)) | (0x3eU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x20U] 
                                             << 0xaU) 
                                            | (0x3feU 
                                               & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1fU] 
                                                  >> 0x16U))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2dU] 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xfffffU & ((0xfc000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2eU] 
                                     << 0xeU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2dU] 
                                                  >> 0x12U))) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2eU] 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0xfffffU & ((0xfc000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2fU] 
                                     << 0xeU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2eU] 
                                                  >> 0x12U))) 
           | (0x3ff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2fU] 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = (0x3ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffff00U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2dU])) 
                                          << 0x26U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2cU])) 
                                             << 6U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2bU])) 
                                               >> 0x1aU))))) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfff80000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | ((0xffU & ((IData)((0x7ffffffffffULL & 
                                 (((QData)((IData)(
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2dU])) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2cU])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2bU])) 
                                                   >> 0x1aU))))) 
                        >> 0x18U)) | (0xffffff00U & 
                                      ((IData)(((0x7ffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2dU])) 
                                                     << 0x26U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2cU])) 
                                                        << 6U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2bU])) 
                                                          >> 0x1aU)))) 
                                                >> 0x20U)) 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2aU] 
                              << 0xeU) | (0x3ffeU & 
                                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x29U] 
                                           >> 0x12U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2aU] 
                  >> 0x12U)) | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2bU] 
                                                << 0xeU) 
                                               | (0x3ffeU 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2aU] 
                                                     >> 0x12U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffc0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__3__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2bU] 
                     >> 0x12U)) | (0x3eU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2cU] 
                                             << 0xeU) 
                                            | (0x3ffeU 
                                               & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2bU] 
                                                  >> 0x12U))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x39U] 
                             << 0x12U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xfffffU & ((0xc0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3aU] 
                                     << 0x12U)) | (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x39U] 
                                                   >> 0xeU))) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3aU] 
                             << 0x12U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0xfffffU & ((0xc0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3bU] 
                                     << 0x12U)) | (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3aU] 
                                                   >> 0xeU))) 
           | (0x3ff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3bU] 
                             << 0x12U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = (0x3ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffff00U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x39U])) 
                                          << 0x2aU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x38U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x37U])) 
                                               >> 0x16U))))) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfff80000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | ((0xffU & ((IData)((0x7ffffffffffULL & 
                                 (((QData)((IData)(
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x39U])) 
                                   << 0x2aU) | (((QData)((IData)(
                                                                 vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x38U])) 
                                                 << 0xaU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x37U])) 
                                                   >> 0x16U))))) 
                        >> 0x18U)) | (0xffffff00U & 
                                      ((IData)(((0x7ffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x39U])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x38U])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x37U])) 
                                                          >> 0x16U)))) 
                                                >> 0x20U)) 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x36U] 
                              << 0x12U) | (0x3fffeU 
                                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x35U] 
                                              >> 0xeU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x36U] 
                  >> 0xeU)) | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x37U] 
                                               << 0x12U) 
                                              | (0x3fffeU 
                                                 & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x36U] 
                                                    >> 0xeU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffc0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__4__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x37U] 
                     >> 0xeU)) | (0x3eU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x38U] 
                                            << 0x12U) 
                                           | (0x3fffeU 
                                              & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x37U] 
                                                 >> 0xeU))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | (0xfff00000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x45U] 
                              << 0x16U) | (0x300000U 
                                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x44U] 
                                              >> 0xaU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x45U] 
                        >> 0xaU)) | (0xfff00000U & 
                                     ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x46U] 
                                       << 0x16U) | 
                                      (0x300000U & 
                                       (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x45U] 
                                        >> 0xaU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x46U] 
                        >> 0xaU)) | (0x3ff00000U & 
                                     ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x47U] 
                                       << 0x16U) | 
                                      (0x300000U & 
                                       (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x46U] 
                                        >> 0xaU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = (0x3ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffff00U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x45U])) 
                                          << 0x2eU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x44U])) 
                                             << 0xeU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x43U])) 
                                               >> 0x12U))))) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfff80000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | ((0xffU & ((IData)((0x7ffffffffffULL & 
                                 (((QData)((IData)(
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x45U])) 
                                   << 0x2eU) | (((QData)((IData)(
                                                                 vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x44U])) 
                                                 << 0xeU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x43U])) 
                                                   >> 0x12U))))) 
                        >> 0x18U)) | (0xffffff00U & 
                                      ((IData)(((0x7ffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x45U])) 
                                                     << 0x2eU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x44U])) 
                                                        << 0xeU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x43U])) 
                                                          >> 0x12U)))) 
                                                >> 0x20U)) 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x42U] 
                              << 0x16U) | (0x3ffffeU 
                                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x41U] 
                                              >> 0xaU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x42U] 
                  >> 0xaU)) | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x43U] 
                                               << 0x16U) 
                                              | (0x3ffffeU 
                                                 & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x42U] 
                                                    >> 0xaU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffc0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__5__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x43U] 
                     >> 0xaU)) | (0x3eU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x44U] 
                                            << 0x16U) 
                                           | (0x3ffffeU 
                                              & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x43U] 
                                                 >> 0xaU))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | (0xfff00000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x51U] 
                              << 0x1aU) | (0x3f00000U 
                                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x50U] 
                                              >> 6U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x51U] 
                        >> 6U)) | (0xfff00000U & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x52U] 
                                                   << 0x1aU) 
                                                  | (0x3f00000U 
                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x51U] 
                                                        >> 6U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x52U] 
                        >> 6U)) | (0x3ff00000U & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x53U] 
                                                   << 0x1aU) 
                                                  | (0x3f00000U 
                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x52U] 
                                                        >> 6U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = (0x3ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffff00U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x51U])) 
                                          << 0x32U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x50U])) 
                                             << 0x12U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4fU])) 
                                               >> 0xeU))))) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfff80000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | ((0xffU & ((IData)((0x7ffffffffffULL & 
                                 (((QData)((IData)(
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x51U])) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x50U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4fU])) 
                                                   >> 0xeU))))) 
                        >> 0x18U)) | (0xffffff00U & 
                                      ((IData)(((0x7ffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x51U])) 
                                                     << 0x32U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x50U])) 
                                                        << 0x12U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4fU])) 
                                                          >> 0xeU)))) 
                                                >> 0x20U)) 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4eU] 
                              << 0x1aU) | (0x3fffffeU 
                                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4dU] 
                                              >> 6U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4eU] 
                  >> 6U)) | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4fU] 
                                             << 0x1aU) 
                                            | (0x3fffffeU 
                                               & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4eU] 
                                                  >> 6U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffc0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__6__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4fU] 
                     >> 6U)) | (0x3eU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x50U] 
                                          << 0x1aU) 
                                         | (0x3fffffeU 
                                            & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4fU] 
                                               >> 6U))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | (0xfff00000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5dU] 
                              << 0x1eU) | (0x3ff00000U 
                                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5cU] 
                                              >> 2U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5dU] 
                        >> 2U)) | (0xfff00000U & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5eU] 
                                                   << 0x1eU) 
                                                  | (0x3ff00000U 
                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5dU] 
                                                        >> 2U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5eU] 
                        >> 2U)) | (0x3ff00000U & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5fU] 
                                                   << 0x1eU) 
                                                  | (0x3ff00000U 
                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5eU] 
                                                        >> 2U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = (0x3ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffff00U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5dU])) 
                                          << 0x36U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5cU])) 
                                             << 0x16U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5bU])) 
                                               >> 0xaU))))) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfff80000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | ((0xffU & ((IData)((0x7ffffffffffULL & 
                                 (((QData)((IData)(
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5dU])) 
                                   << 0x36U) | (((QData)((IData)(
                                                                 vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5cU])) 
                                                 << 0x16U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5bU])) 
                                                   >> 0xaU))))) 
                        >> 0x18U)) | (0xffffff00U & 
                                      ((IData)(((0x7ffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5dU])) 
                                                     << 0x36U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5cU])) 
                                                        << 0x16U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5bU])) 
                                                          >> 0xaU)))) 
                                                >> 0x20U)) 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5aU] 
                              << 0x1eU) | (0x3ffffffeU 
                                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x59U] 
                                              >> 2U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5aU] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5bU] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5aU] 
                                                  >> 2U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffc0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__7__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5bU] 
                     >> 2U)) | (0x3eU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5cU] 
                                          << 0x1eU) 
                                         | (0x3ffffffeU 
                                            & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5bU] 
                                               >> 2U))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x68U] 
                             << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xfffffU & ((0xffffcU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x69U] 
                                     << 2U)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x68U] 
                                                >> 0x1eU))) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x69U] 
                             << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0xfffffU & ((0xffffcU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6aU] 
                                     << 2U)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x69U] 
                                                >> 0x1eU))) 
           | (0x3ff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6aU] 
                             << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = (0x3ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffff00U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x69U])) 
                                          << 0x3aU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x68U])) 
                                             << 0x1aU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x67U])) 
                                               >> 6U))))) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfff80000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | ((0xffU & ((IData)((0x7ffffffffffULL & 
                                 (((QData)((IData)(
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x69U])) 
                                   << 0x3aU) | (((QData)((IData)(
                                                                 vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x68U])) 
                                                 << 0x1aU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x67U])) 
                                                   >> 6U))))) 
                        >> 0x18U)) | (0xffffff00U & 
                                      ((IData)(((0x7ffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x69U])) 
                                                     << 0x3aU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x68U])) 
                                                        << 0x1aU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x67U])) 
                                                          >> 6U)))) 
                                                >> 0x20U)) 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x65U] 
                              << 2U) | (2U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x64U] 
                                              >> 0x1eU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x65U] 
                  >> 0x1eU)) | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x66U] 
                                                << 2U) 
                                               | (2U 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x65U] 
                                                     >> 0x1eU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffc0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__8__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x66U] 
                     >> 0x1eU)) | (0x3eU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x67U] 
                                             << 2U) 
                                            | (2U & 
                                               (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x66U] 
                                                >> 0x1eU))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x74U] 
                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xfffffU & ((0xfffc0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x75U] 
                                     << 6U)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x74U] 
                                                >> 0x1aU))) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x75U] 
                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0xfffffU & ((0xfffc0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x76U] 
                                     << 6U)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x75U] 
                                                >> 0x1aU))) 
           | (0x3ff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x76U] 
                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = (0x3ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffff00U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x75U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x74U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x73U])) 
                                               >> 2U))))) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfff80000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | ((0xffU & ((IData)((0x7ffffffffffULL & 
                                 (((QData)((IData)(
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x75U])) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x74U])) 
                                                 << 0x1eU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x73U])) 
                                                   >> 2U))))) 
                        >> 0x18U)) | (0xffffff00U & 
                                      ((IData)(((0x7ffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x75U])) 
                                                     << 0x3eU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x74U])) 
                                                        << 0x1eU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x73U])) 
                                                          >> 2U)))) 
                                                >> 0x20U)) 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x71U] 
                              << 6U) | (0x3eU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x70U] 
                                                 >> 0x1aU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x71U] 
                  >> 0x1aU)) | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x72U] 
                                                << 6U) 
                                               | (0x3eU 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x71U] 
                                                     >> 0x1aU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffc0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__9__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x72U] 
                     >> 0x1aU)) | (0x3eU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x73U] 
                                             << 6U) 
                                            | (0x3eU 
                                               & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x72U] 
                                                  >> 0x1aU))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x80U] 
                             << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xfffffU & ((0xffc00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x81U] 
                                     << 0xaU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x80U] 
                                                  >> 0x16U))) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x81U] 
                             << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0xfffffU & ((0xffc00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x82U] 
                                     << 0xaU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x81U] 
                                                  >> 0x16U))) 
           | (0x3ff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x82U] 
                             << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = (0x3ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffff00U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x80U])) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7fU])) 
                                             << 2U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7eU])) 
                                               >> 0x1eU))))) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfff80000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | ((0xffU & ((IData)((0x7ffffffffffULL & 
                                 (((QData)((IData)(
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x80U])) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7fU])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7eU])) 
                                                   >> 0x1eU))))) 
                        >> 0x18U)) | (0xffffff00U & 
                                      ((IData)(((0x7ffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x80U])) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7fU])) 
                                                        << 2U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7eU])) 
                                                          >> 0x1eU)))) 
                                                >> 0x20U)) 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7dU] 
                              << 0xaU) | (0x3feU & 
                                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7cU] 
                                           >> 0x16U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7dU] 
                  >> 0x16U)) | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7eU] 
                                                << 0xaU) 
                                               | (0x3feU 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7dU] 
                                                     >> 0x16U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffc0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__10__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7eU] 
                     >> 0x16U)) | (0x3eU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7fU] 
                                             << 0xaU) 
                                            | (0x3feU 
                                               & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7eU] 
                                                  >> 0x16U))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8cU] 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xfffffU & ((0xfc000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8dU] 
                                     << 0xeU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8cU] 
                                                  >> 0x12U))) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8dU] 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0xfffffU & ((0xfc000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8eU] 
                                     << 0xeU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8dU] 
                                                  >> 0x12U))) 
           | (0x3ff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8eU] 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = (0x3ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffff00U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8cU])) 
                                          << 0x26U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8bU])) 
                                             << 6U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8aU])) 
                                               >> 0x1aU))))) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfff80000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | ((0xffU & ((IData)((0x7ffffffffffULL & 
                                 (((QData)((IData)(
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8cU])) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8bU])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8aU])) 
                                                   >> 0x1aU))))) 
                        >> 0x18U)) | (0xffffff00U & 
                                      ((IData)(((0x7ffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8cU])) 
                                                     << 0x26U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8bU])) 
                                                        << 6U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8aU])) 
                                                          >> 0x1aU)))) 
                                                >> 0x20U)) 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x89U] 
                              << 0xeU) | (0x3ffeU & 
                                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x88U] 
                                           >> 0x12U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x89U] 
                  >> 0x12U)) | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8aU] 
                                                << 0xeU) 
                                               | (0x3ffeU 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x89U] 
                                                     >> 0x12U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffc0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__11__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8aU] 
                     >> 0x12U)) | (0x3eU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8bU] 
                                             << 0xeU) 
                                            | (0x3ffeU 
                                               & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8aU] 
                                                  >> 0x12U))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x98U] 
                             << 0x12U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xfffffU & ((0xc0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x99U] 
                                     << 0x12U)) | (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x98U] 
                                                   >> 0xeU))) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x99U] 
                             << 0x12U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0xfffffU & ((0xc0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x9aU] 
                                     << 0x12U)) | (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x99U] 
                                                   >> 0xeU))) 
           | (0x3ff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x9aU] 
                             << 0x12U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = (0x3ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffff00U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x98U])) 
                                          << 0x2aU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x97U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x96U])) 
                                               >> 0x16U))))) 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0xfff80000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U]) 
           | ((0xffU & ((IData)((0x7ffffffffffULL & 
                                 (((QData)((IData)(
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x98U])) 
                                   << 0x2aU) | (((QData)((IData)(
                                                                 vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x97U])) 
                                                 << 0xaU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x96U])) 
                                                   >> 0x16U))))) 
                        >> 0x18U)) | (0xffffff00U & 
                                      ((IData)(((0x7ffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x98U])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x97U])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x96U])) 
                                                          >> 0x16U)))) 
                                                >> 0x20U)) 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x95U] 
                              << 0x12U) | (0x3fffeU 
                                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x94U] 
                                              >> 0xeU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x95U] 
                  >> 0xeU)) | (0xfffffffeU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x96U] 
                                               << 0x12U) 
                                              | (0x3fffeU 
                                                 & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x95U] 
                                                    >> 0xeU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffc0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_slv_port_demux__BRA__12__KET____DOT__i_axi_err_slv__DOT____Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x96U] 
                     >> 0xeU)) | (0x3eU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x97U] 
                                            << 0x12U) 
                                           | (0x3fffeU 
                                              & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x96U] 
                                                 >> 0xeU))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[1U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[2U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[3U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[3U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[4U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[4U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[5U] 
        = ((0xc0000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[5U]) 
           | (0x3fffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[5U]));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[5U] 
        = ((0x3fffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[5U]) 
           | (0xc0000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xbU] 
                             << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[6U] 
        = ((0x3fffffffU & ((0x3ffffffcU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xcU] 
                                           << 2U)) 
                           | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xbU] 
                              >> 0x1eU))) | (0xc0000000U 
                                             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xcU] 
                                                << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[7U] 
        = ((0x3fffffffU & ((0x3ffffffcU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xdU] 
                                           << 2U)) 
                           | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xcU] 
                              >> 0x1eU))) | (0xc0000000U 
                                             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xdU] 
                                                << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[8U] 
        = ((0x3fffffffU & ((0x3ffffffcU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xeU] 
                                           << 2U)) 
                           | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xdU] 
                              >> 0x1eU))) | (0xc0000000U 
                                             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xeU] 
                                                << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[9U] 
        = ((0x3fffffffU & ((0x3ffffffcU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xfU] 
                                           << 2U)) 
                           | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xeU] 
                              >> 0x1eU))) | (0xc0000000U 
                                             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xfU] 
                                                << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xaU] 
        = ((0x3fffffffU & ((0x3ffffffcU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x10U] 
                                           << 2U)) 
                           | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0xfU] 
                              >> 0x1eU))) | (0xc0000000U 
                                             & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x10U] 
                                                << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xbU] 
        = ((0xf0000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xbU]) 
           | (0xfffffffU & ((0x3ffffffcU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x11U] 
                                            << 2U)) 
                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x10U] 
                               >> 0x1eU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xbU] 
        = ((0xfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xbU]) 
           | (0xf0000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x17U] 
                             << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xcU] 
        = ((0xfffffffU & ((0xffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x18U] 
                                         << 4U)) | 
                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x17U] 
                           >> 0x1cU))) | (0xf0000000U 
                                          & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x18U] 
                                             << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xdU] 
        = ((0xfffffffU & ((0xffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x19U] 
                                         << 4U)) | 
                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x18U] 
                           >> 0x1cU))) | (0xf0000000U 
                                          & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x19U] 
                                             << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xeU] 
        = ((0xfffffffU & ((0xffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1aU] 
                                         << 4U)) | 
                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x19U] 
                           >> 0x1cU))) | (0xf0000000U 
                                          & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1aU] 
                                             << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xfU] 
        = ((0xfffffffU & ((0xffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1bU] 
                                         << 4U)) | 
                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1aU] 
                           >> 0x1cU))) | (0xf0000000U 
                                          & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1bU] 
                                             << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x10U] 
        = ((0xfffffffU & ((0xffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1cU] 
                                         << 4U)) | 
                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1bU] 
                           >> 0x1cU))) | (0xf0000000U 
                                          & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1cU] 
                                             << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x11U] 
        = ((0xfc000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x11U]) 
           | (0x3ffffffU & ((0xffffff0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1dU] 
                                           << 4U)) 
                            | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x1cU] 
                               >> 0x1cU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x11U] 
        = ((0x3ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x11U]) 
           | (0xfc000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x23U] 
                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x12U] 
        = ((0x3ffffffU & ((0x3ffffc0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x24U] 
                                         << 6U)) | 
                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x23U] 
                           >> 0x1aU))) | (0xfc000000U 
                                          & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x24U] 
                                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x13U] 
        = ((0x3ffffffU & ((0x3ffffc0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x25U] 
                                         << 6U)) | 
                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x24U] 
                           >> 0x1aU))) | (0xfc000000U 
                                          & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x25U] 
                                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x14U] 
        = ((0x3ffffffU & ((0x3ffffc0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x26U] 
                                         << 6U)) | 
                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x25U] 
                           >> 0x1aU))) | (0xfc000000U 
                                          & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x26U] 
                                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x15U] 
        = ((0x3ffffffU & ((0x3ffffc0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x27U] 
                                         << 6U)) | 
                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x26U] 
                           >> 0x1aU))) | (0xfc000000U 
                                          & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x27U] 
                                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x16U] 
        = ((0x3ffffffU & ((0x3ffffc0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x28U] 
                                         << 6U)) | 
                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x27U] 
                           >> 0x1aU))) | (0xfc000000U 
                                          & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x28U] 
                                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x17U] 
        = ((0xff000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x17U]) 
           | (0xffffffU & ((0x3ffffc0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x29U] 
                                          << 6U)) | 
                           (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x28U] 
                            >> 0x1aU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x17U] 
        = ((0xffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x17U]) 
           | (0xff000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2fU] 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x18U] 
        = ((0xffffffU & ((0xffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x30U] 
                                       << 8U)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x2fU] 
                                                  >> 0x18U))) 
           | (0xff000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x30U] 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x19U] 
        = ((0xffffffU & ((0xffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x31U] 
                                       << 8U)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x30U] 
                                                  >> 0x18U))) 
           | (0xff000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x31U] 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1aU] 
        = ((0xffffffU & ((0xffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x32U] 
                                       << 8U)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x31U] 
                                                  >> 0x18U))) 
           | (0xff000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x32U] 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1bU] 
        = ((0xffffffU & ((0xffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x33U] 
                                       << 8U)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x32U] 
                                                  >> 0x18U))) 
           | (0xff000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x33U] 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1cU] 
        = ((0xffffffU & ((0xffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x34U] 
                                       << 8U)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x33U] 
                                                  >> 0x18U))) 
           | (0xff000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x34U] 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1dU] 
        = ((0xffc00000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1dU]) 
           | (0x3fffffU & ((0xffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x35U] 
                                         << 8U)) | 
                           (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x34U] 
                            >> 0x18U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1dU] 
        = ((0x3fffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1dU]) 
           | (0xffc00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3bU] 
                             << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1eU] 
        = ((0x3fffffU & ((0x3ffc00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3cU] 
                                       << 0xaU)) | 
                         (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3bU] 
                          >> 0x16U))) | (0xffc00000U 
                                         & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3cU] 
                                            << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1fU] 
        = ((0x3fffffU & ((0x3ffc00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3dU] 
                                       << 0xaU)) | 
                         (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3cU] 
                          >> 0x16U))) | (0xffc00000U 
                                         & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3dU] 
                                            << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x20U] 
        = ((0x3fffffU & ((0x3ffc00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3eU] 
                                       << 0xaU)) | 
                         (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3dU] 
                          >> 0x16U))) | (0xffc00000U 
                                         & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3eU] 
                                            << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x21U] 
        = ((0x3fffffU & ((0x3ffc00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3fU] 
                                       << 0xaU)) | 
                         (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3eU] 
                          >> 0x16U))) | (0xffc00000U 
                                         & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3fU] 
                                            << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x22U] 
        = ((0x3fffffU & ((0x3ffc00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x40U] 
                                       << 0xaU)) | 
                         (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x3fU] 
                          >> 0x16U))) | (0xffc00000U 
                                         & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x40U] 
                                            << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x23U] 
        = ((0xfff00000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x23U]) 
           | (0xfffffU & ((0x3ffc00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x41U] 
                                        << 0xaU)) | 
                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x40U] 
                           >> 0x16U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x23U] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x23U]) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x47U] 
                             << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x24U] 
        = ((0xfffffU & ((0xff000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x48U] 
                                     << 0xcU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x47U] 
                                                  >> 0x14U))) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x48U] 
                             << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x25U] 
        = ((0xfffffU & ((0xff000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x49U] 
                                     << 0xcU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x48U] 
                                                  >> 0x14U))) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x49U] 
                             << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x26U] 
        = ((0xfffffU & ((0xff000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4aU] 
                                     << 0xcU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x49U] 
                                                  >> 0x14U))) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4aU] 
                             << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x27U] 
        = ((0xfffffU & ((0xff000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4bU] 
                                     << 0xcU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4aU] 
                                                  >> 0x14U))) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4bU] 
                             << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x28U] 
        = ((0xfffffU & ((0xff000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4cU] 
                                     << 0xcU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4bU] 
                                                  >> 0x14U))) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4cU] 
                             << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x29U] 
        = ((0xfffc0000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x29U]) 
           | (0x3ffffU & ((0xff000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4dU] 
                                       << 0xcU)) | 
                          (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x4cU] 
                           >> 0x14U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x29U] 
        = ((0x3ffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x29U]) 
           | (0xfffc0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x53U] 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2aU] 
        = ((0x3ffffU & ((0x3c000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x54U] 
                                     << 0xeU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x53U] 
                                                  >> 0x12U))) 
           | (0xfffc0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x54U] 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2bU] 
        = ((0x3ffffU & ((0x3c000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x55U] 
                                     << 0xeU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x54U] 
                                                  >> 0x12U))) 
           | (0xfffc0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x55U] 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2cU] 
        = ((0x3ffffU & ((0x3c000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x56U] 
                                     << 0xeU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x55U] 
                                                  >> 0x12U))) 
           | (0xfffc0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x56U] 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2dU] 
        = ((0x3ffffU & ((0x3c000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x57U] 
                                     << 0xeU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x56U] 
                                                  >> 0x12U))) 
           | (0xfffc0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x57U] 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2eU] 
        = ((0x3ffffU & ((0x3c000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x58U] 
                                     << 0xeU)) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x57U] 
                                                  >> 0x12U))) 
           | (0xfffc0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x58U] 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2fU] 
        = ((0xffff0000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2fU]) 
           | (0xffffU & ((0x3c000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x59U] 
                                      << 0xeU)) | (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x58U] 
                                                   >> 0x12U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2fU] 
        = ((0xffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2fU]) 
           | (0xffff0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5fU] 
                             << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x30U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x5fU] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x60U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x31U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x60U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x61U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x32U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x61U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x62U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x33U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x62U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x63U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x34U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x63U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x64U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x35U] 
        = ((0xffffc000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x35U]) 
           | (0x3fffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x64U] 
                         >> 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x35U] 
        = ((0x3fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x35U]) 
           | (0xffffc000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6bU] 
                              << 0x12U) | (0x3c000U 
                                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6aU] 
                                              >> 0xeU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x36U] 
        = ((0x3fffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6bU] 
                       >> 0xeU)) | (0xffffc000U & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6cU] 
                                                    << 0x12U) 
                                                   | (0x3c000U 
                                                      & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6bU] 
                                                         >> 0xeU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x37U] 
        = ((0x3fffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6cU] 
                       >> 0xeU)) | (0xffffc000U & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6dU] 
                                                    << 0x12U) 
                                                   | (0x3c000U 
                                                      & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6cU] 
                                                         >> 0xeU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x38U] 
        = ((0x3fffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6dU] 
                       >> 0xeU)) | (0xffffc000U & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6eU] 
                                                    << 0x12U) 
                                                   | (0x3c000U 
                                                      & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6dU] 
                                                         >> 0xeU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x39U] 
        = ((0x3fffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6eU] 
                       >> 0xeU)) | (0xffffc000U & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6fU] 
                                                    << 0x12U) 
                                                   | (0x3c000U 
                                                      & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6eU] 
                                                         >> 0xeU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3aU] 
        = ((0x3fffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6fU] 
                       >> 0xeU)) | (0xffffc000U & (
                                                   (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x70U] 
                                                    << 0x12U) 
                                                   | (0x3c000U 
                                                      & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x6fU] 
                                                         >> 0xeU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3bU] 
        = ((0xfffff000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3bU]) 
           | (0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x70U] 
                        >> 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3bU] 
        = ((0xfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3bU]) 
           | (0xfffff000U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x77U] 
                              << 0x14U) | (0xff000U 
                                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x76U] 
                                              >> 0xcU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3cU] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x77U] 
                      >> 0xcU)) | (0xfffff000U & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x78U] 
                                                   << 0x14U) 
                                                  | (0xff000U 
                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x77U] 
                                                        >> 0xcU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3dU] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x78U] 
                      >> 0xcU)) | (0xfffff000U & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x79U] 
                                                   << 0x14U) 
                                                  | (0xff000U 
                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x78U] 
                                                        >> 0xcU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3eU] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x79U] 
                      >> 0xcU)) | (0xfffff000U & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7aU] 
                                                   << 0x14U) 
                                                  | (0xff000U 
                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x79U] 
                                                        >> 0xcU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3fU] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7aU] 
                      >> 0xcU)) | (0xfffff000U & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7bU] 
                                                   << 0x14U) 
                                                  | (0xff000U 
                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7aU] 
                                                        >> 0xcU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x40U] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7bU] 
                      >> 0xcU)) | (0xfffff000U & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7cU] 
                                                   << 0x14U) 
                                                  | (0xff000U 
                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7bU] 
                                                        >> 0xcU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x41U] 
        = ((0xfffffc00U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x41U]) 
           | (0x3ffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x7cU] 
                        >> 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x41U] 
        = ((0x3ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x41U]) 
           | (0xfffffc00U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x83U] 
                              << 0x16U) | (0x3ffc00U 
                                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x82U] 
                                              >> 0xaU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x42U] 
        = ((0x3ffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x83U] 
                      >> 0xaU)) | (0xfffffc00U & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x84U] 
                                                   << 0x16U) 
                                                  | (0x3ffc00U 
                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x83U] 
                                                        >> 0xaU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x43U] 
        = ((0x3ffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x84U] 
                      >> 0xaU)) | (0xfffffc00U & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x85U] 
                                                   << 0x16U) 
                                                  | (0x3ffc00U 
                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x84U] 
                                                        >> 0xaU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x44U] 
        = ((0x3ffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x85U] 
                      >> 0xaU)) | (0xfffffc00U & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x86U] 
                                                   << 0x16U) 
                                                  | (0x3ffc00U 
                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x85U] 
                                                        >> 0xaU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x45U] 
        = ((0x3ffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x86U] 
                      >> 0xaU)) | (0xfffffc00U & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x87U] 
                                                   << 0x16U) 
                                                  | (0x3ffc00U 
                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x86U] 
                                                        >> 0xaU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x46U] 
        = ((0x3ffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x87U] 
                      >> 0xaU)) | (0xfffffc00U & ((
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x88U] 
                                                   << 0x16U) 
                                                  | (0x3ffc00U 
                                                     & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x87U] 
                                                        >> 0xaU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x47U] 
        = ((0xffffff00U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x47U]) 
           | (0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x88U] 
                       >> 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x47U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x47U]) 
           | (0xffffff00U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8fU] 
                              << 0x18U) | (0xffff00U 
                                           & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8eU] 
                                              >> 8U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x48U] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8fU] 
                     >> 8U)) | (0xffffff00U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x90U] 
                                                << 0x18U) 
                                               | (0xffff00U 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x8fU] 
                                                     >> 8U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x49U] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x90U] 
                     >> 8U)) | (0xffffff00U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x91U] 
                                                << 0x18U) 
                                               | (0xffff00U 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x90U] 
                                                     >> 8U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4aU] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x91U] 
                     >> 8U)) | (0xffffff00U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x92U] 
                                                << 0x18U) 
                                               | (0xffff00U 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x91U] 
                                                     >> 8U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4bU] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x92U] 
                     >> 8U)) | (0xffffff00U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x93U] 
                                                << 0x18U) 
                                               | (0xffff00U 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x92U] 
                                                     >> 8U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4cU] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x93U] 
                     >> 8U)) | (0xffffff00U & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x94U] 
                                                << 0x18U) 
                                               | (0xffff00U 
                                                  & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x93U] 
                                                     >> 8U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4dU] 
        = (0x3fU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__slv_reqs[0x94U] 
                    >> 8U));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__i_event_fifo1__DOT__clk_gated 
        = ((IData)(vlTOPp->ref_clk_i) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__u_evnt_gen__DOT__i_event_fifo1__DOT__cg_cell__DOT__i_tc_clk_gating__DOT__clk_en));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_ref_clk_sync__DOT__clk 
        = ((IData)(vlTOPp->ref_clk_i) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_ref_clk_sync__DOT__i_pulp_clock_gating__DOT__i_tc_clk_gating__DOT__clk_en));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies 
        = ((0x1ffeU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies)) 
           | (1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0U]));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies 
        = ((0x1ffeU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies)) 
           | (1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[2U] 
                    >> 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies 
        = ((0x1ffdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies)) 
           | (2U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[5U] 
                    >> 0x1dU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies 
        = ((0x1ffdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies)) 
           | (2U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[8U] 
                    >> 3U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies 
        = ((0x1ffbU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies)) 
           | (4U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xbU] 
                    >> 0x1aU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies 
        = ((0x1ffbU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies)) 
           | (4U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xeU]));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies 
        = ((0x1ff7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies)) 
           | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x11U] 
                    >> 0x17U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies 
        = ((0x1ff7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies)) 
           | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x14U] 
                    << 3U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies 
        = ((0x1fefU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies)) 
           | (0x10U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x17U] 
                       >> 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies 
        = ((0x1fefU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies)) 
           | (0x10U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x19U] 
                       >> 0x1aU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies 
        = ((0x1fdfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies)) 
           | (0x20U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1dU] 
                       >> 0x11U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies 
        = ((0x1fdfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies)) 
           | (0x20U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1fU] 
                       >> 0x17U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies 
        = ((0x1fbfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies)) 
           | (0x40U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x23U] 
                       >> 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies 
        = ((0x1fbfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies)) 
           | (0x40U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x25U] 
                       >> 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies 
        = ((0x1f7fU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies)) 
           | (0x80U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x29U] 
                       >> 0xbU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies 
        = ((0x1f7fU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies)) 
           | (0x80U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2bU] 
                       >> 0x11U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies 
        = ((0x1effU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies)) 
           | (0x100U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2fU] 
                        >> 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies 
        = ((0x1effU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies)) 
           | (0x100U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x31U] 
                        >> 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies 
        = ((0x1dffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies)) 
           | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x35U] 
                        >> 5U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies 
        = ((0x1dffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies)) 
           | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x37U] 
                        >> 0xbU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies 
        = ((0x1bffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies)) 
           | (0x400U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3bU] 
                        >> 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies 
        = ((0x1bffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies)) 
           | (0x400U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3dU] 
                        >> 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies 
        = ((0x17ffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies)) 
           | (0x800U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x41U] 
                        << 1U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies 
        = ((0x17ffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies)) 
           | (0x800U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x43U] 
                        >> 5U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies 
        = ((0xfffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_r_readies)) 
           | (0x1000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x47U] 
                         << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies 
        = ((0xfffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_b_readies)) 
           | (0x1000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x49U] 
                         >> 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids 
        = ((0x1ffeU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids)) 
           | (1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[2U] 
                    >> 7U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids 
        = ((0x1ffdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids)) 
           | (2U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[8U] 
                    >> 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids 
        = ((0x1ffbU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids)) 
           | (4U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xeU] 
                    >> 1U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids 
        = ((0x1ff7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids)) 
           | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x14U] 
                    << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids 
        = ((0x1fefU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids)) 
           | (0x10U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x19U] 
                       >> 0x1bU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids 
        = ((0x1fdfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids)) 
           | (0x20U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1fU] 
                       >> 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids 
        = ((0x1fbfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids)) 
           | (0x40U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x25U] 
                       >> 0x15U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids 
        = ((0x1f7fU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids)) 
           | (0x80U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2bU] 
                       >> 0x12U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids 
        = ((0x1effU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids)) 
           | (0x100U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x31U] 
                        >> 0xfU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids 
        = ((0x1dffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids)) 
           | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x37U] 
                        >> 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids 
        = ((0x1bffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids)) 
           | (0x400U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3dU] 
                        >> 9U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids 
        = ((0x17ffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids)) 
           | (0x800U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x43U] 
                        >> 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids 
        = ((0xfffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_valids)) 
           | (0x1000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x49U] 
                         >> 3U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0U] 
        = (IData)((0x7ffffffffffULL & (((QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[4U])) 
                                        << 0x38U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[3U])) 
                                         << 0x18U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[2U])) 
                                           >> 8U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[1U] 
        = ((0xfffff800U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[1U]) 
           | (IData)(((0x7ffffffffffULL & (((QData)((IData)(
                                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[4U])) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[3U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[2U])) 
                                                 >> 8U)))) 
                      >> 0x20U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[1U] 
        = ((0x7ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[1U]) 
           | (0xfffff800U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xaU])) 
                                          << 0x3aU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[9U])) 
                                             << 0x1aU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[8U])) 
                                               >> 6U))))) 
                             << 0xbU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[2U] 
        = ((0xffc00000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[2U]) 
           | ((0x7ffU & ((IData)((0x7ffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xaU])) 
                                      << 0x3aU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[9U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[8U])) 
                                                      >> 6U))))) 
                         >> 0x15U)) | (0xfffff800U 
                                       & ((IData)((
                                                   (0x7ffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xaU])) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[9U])) 
                                                           << 0x1aU) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[8U])) 
                                                             >> 6U)))) 
                                                   >> 0x20U)) 
                                          << 0xbU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[2U] 
        = ((0x3fffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[2U]) 
           | (0xffc00000U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x10U])) 
                                          << 0x3cU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xfU])) 
                                             << 0x1cU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xeU])) 
                                               >> 4U))))) 
                             << 0x16U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[3U] 
        = ((0x3fffffU & ((IData)((0x7ffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x10U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xfU])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xeU])) 
                                                      >> 4U))))) 
                         >> 0xaU)) | (0xffc00000U & 
                                      ((IData)(((0x7ffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x10U])) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xfU])) 
                                                        << 0x1cU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xeU])) 
                                                          >> 4U)))) 
                                                >> 0x20U)) 
                                       << 0x16U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[4U] 
        = ((0xfffffffeU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[4U]) 
           | (0x3fffffU & ((IData)(((0x7ffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x10U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xfU])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xeU])) 
                                              >> 4U)))) 
                                    >> 0x20U)) >> 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[4U] 
        = ((1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[4U]) 
           | (0xfffffffeU & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x16U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x15U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x14U])) 
                                               >> 2U))))) 
                             << 1U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[5U] 
        = ((0xfffff000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[5U]) 
           | ((1U & ((IData)((0x7ffffffffffULL & (((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x16U])) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x15U])) 
                                                      << 0x1eU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x14U])) 
                                                        >> 2U))))) 
                     >> 0x1fU)) | (0xfffffffeU & ((IData)(
                                                          ((0x7ffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x16U])) 
                                                                << 0x3eU) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x15U])) 
                                                                   << 0x1eU) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x14U])) 
                                                                     >> 2U)))) 
                                                           >> 0x20U)) 
                                                  << 1U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[5U] 
        = ((0xfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[5U]) 
           | (0xfffff000U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1bU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1aU]))))) 
                             << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[6U] 
        = ((0xff800000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[6U]) 
           | ((0xfffU & ((IData)((0x7ffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1aU]))))) 
                         >> 0x14U)) | (0xfffff000U 
                                       & ((IData)((
                                                   (0x7ffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1bU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1aU])))) 
                                                   >> 0x20U)) 
                                          << 0xcU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[6U] 
        = ((0x7fffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[6U]) 
           | (0xff800000U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x21U])) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x20U])) 
                                             << 2U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1fU])) 
                                               >> 0x1eU))))) 
                             << 0x17U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[7U] 
        = ((0x7fffffU & ((IData)((0x7ffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x21U])) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x20U])) 
                                                    << 2U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1fU])) 
                                                      >> 0x1eU))))) 
                         >> 9U)) | (0xff800000U & ((IData)(
                                                           ((0x7ffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x21U])) 
                                                                 << 0x22U) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x20U])) 
                                                                    << 2U) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1fU])) 
                                                                      >> 0x1eU)))) 
                                                            >> 0x20U)) 
                                                   << 0x17U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[8U] 
        = ((0xfffffffcU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[8U]) 
           | (0x7fffffU & ((IData)(((0x7ffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x21U])) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x20U])) 
                                            << 2U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1fU])) 
                                              >> 0x1eU)))) 
                                    >> 0x20U)) >> 9U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[8U] 
        = ((3U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[8U]) 
           | (0xfffffffcU & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x27U])) 
                                          << 0x24U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x26U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x25U])) 
                                               >> 0x1cU))))) 
                             << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[9U] 
        = ((0xffffe000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[9U]) 
           | ((3U & ((IData)((0x7ffffffffffULL & (((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x27U])) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x26U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x25U])) 
                                                        >> 0x1cU))))) 
                     >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                          ((0x7ffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x27U])) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x26U])) 
                                                                   << 4U) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x25U])) 
                                                                     >> 0x1cU)))) 
                                                           >> 0x20U)) 
                                                  << 2U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[9U] 
        = ((0x1fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[9U]) 
           | (0xffffe000U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2dU])) 
                                          << 0x26U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2cU])) 
                                             << 6U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2bU])) 
                                               >> 0x1aU))))) 
                             << 0xdU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xaU] 
        = ((0xff000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xaU]) 
           | ((0x1fffU & ((IData)((0x7ffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2dU])) 
                                       << 0x26U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2cU])) 
                                        << 6U) | ((QData)((IData)(
                                                                  vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2bU])) 
                                                  >> 0x1aU))))) 
                          >> 0x13U)) | (0xffffe000U 
                                        & ((IData)(
                                                   ((0x7ffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2dU])) 
                                                         << 0x26U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2cU])) 
                                                            << 6U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2bU])) 
                                                              >> 0x1aU)))) 
                                                    >> 0x20U)) 
                                           << 0xdU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xaU] 
        = ((0xffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xaU]) 
           | (0xff000000U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x33U])) 
                                          << 0x28U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x32U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x31U])) 
                                               >> 0x18U))))) 
                             << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xbU] 
        = ((0xffffffU & ((IData)((0x7ffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x33U])) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x32U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x31U])) 
                                                      >> 0x18U))))) 
                         >> 8U)) | (0xff000000U & ((IData)(
                                                           ((0x7ffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x33U])) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x32U])) 
                                                                    << 8U) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x31U])) 
                                                                      >> 0x18U)))) 
                                                            >> 0x20U)) 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xcU] 
        = ((0xfffffff8U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xcU]) 
           | (0xffffffU & ((IData)(((0x7ffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x33U])) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x32U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x31U])) 
                                              >> 0x18U)))) 
                                    >> 0x20U)) >> 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xcU] 
        = ((7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xcU]) 
           | (0xfffffff8U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x39U])) 
                                          << 0x2aU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x38U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x37U])) 
                                               >> 0x16U))))) 
                             << 3U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xdU] 
        = ((0xffffc000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xdU]) 
           | ((7U & ((IData)((0x7ffffffffffULL & (((QData)((IData)(
                                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x39U])) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x38U])) 
                                                      << 0xaU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x37U])) 
                                                        >> 0x16U))))) 
                     >> 0x1dU)) | (0xfffffff8U & ((IData)(
                                                          ((0x7ffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x39U])) 
                                                                << 0x2aU) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x38U])) 
                                                                   << 0xaU) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x37U])) 
                                                                     >> 0x16U)))) 
                                                           >> 0x20U)) 
                                                  << 3U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xdU] 
        = ((0x3fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xdU]) 
           | (0xffffc000U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3fU])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3eU])) 
                                             << 0xcU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3dU])) 
                                               >> 0x14U))))) 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xeU] 
        = ((0xfe000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xeU]) 
           | ((0x3fffU & ((IData)((0x7ffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3fU])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3eU])) 
                                        << 0xcU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3dU])) 
                                        >> 0x14U))))) 
                          >> 0x12U)) | (0xffffc000U 
                                        & ((IData)(
                                                   ((0x7ffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3fU])) 
                                                         << 0x2cU) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3eU])) 
                                                            << 0xcU) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3dU])) 
                                                              >> 0x14U)))) 
                                                    >> 0x20U)) 
                                           << 0xeU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xeU] 
        = ((0x1ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xeU]) 
           | (0xfe000000U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x45U])) 
                                          << 0x2eU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x44U])) 
                                             << 0xeU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x43U])) 
                                               >> 0x12U))))) 
                             << 0x19U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0xfU] 
        = ((0x1ffffffU & ((IData)((0x7ffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x45U])) 
                                       << 0x2eU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x44U])) 
                                        << 0xeU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x43U])) 
                                        >> 0x12U))))) 
                          >> 7U)) | (0xfe000000U & 
                                     ((IData)(((0x7ffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x45U])) 
                                                    << 0x2eU) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x44U])) 
                                                       << 0xeU) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x43U])) 
                                                         >> 0x12U)))) 
                                               >> 0x20U)) 
                                      << 0x19U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0x10U] 
        = ((0xfffffff0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0x10U]) 
           | (0x1ffffffU & ((IData)(((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x45U])) 
                                          << 0x2eU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x44U])) 
                                             << 0xeU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x43U])) 
                                               >> 0x12U)))) 
                                     >> 0x20U)) >> 7U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0x10U] 
        = ((0xfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0x10U]) 
           | (0xfffffff0U & ((IData)((0x7ffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4bU])) 
                                          << 0x30U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4aU])) 
                                             << 0x10U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x49U])) 
                                               >> 0x10U))))) 
                             << 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_w_chans[0x11U] 
        = ((0xfU & ((IData)((0x7ffffffffffULL & (((QData)((IData)(
                                                                  vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4bU])) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4aU])) 
                                                     << 0x10U) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x49U])) 
                                                       >> 0x10U))))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((0x7ffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4bU])) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4aU])) 
                                                                  << 0x10U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x49U])) 
                                                                    >> 0x10U)))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    __Vtemp4690[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[1U] 
                        << 0x1eU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0U] 
                                     >> 2U));
    __Vtemp4690[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[2U] 
                        << 0x1eU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[1U] 
                                     >> 2U));
    __Vtemp4690[2U] = (0xfU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[3U] 
                                << 0x1eU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[2U] 
                                             >> 2U)));
    VL_EXTEND_WW(72,68, __Vtemp4691, __Vtemp4690);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp4691[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp4691[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp4691[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = ((7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]) 
           | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[2U] 
                    >> 2U)));
    __Vtemp4694[0U] = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[6U];
    __Vtemp4694[1U] = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[7U];
    __Vtemp4694[2U] = (0xfU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[8U]);
    VL_EXTEND_WW(72,68, __Vtemp4695, __Vtemp4694);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp4695[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp4695[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp4695[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = ((7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]) 
           | (0xfffffff8U & (0x10U | (8U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[8U]))));
    __Vtemp4698[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xcU] 
                        << 2U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xbU] 
                                  >> 0x1eU));
    __Vtemp4698[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xdU] 
                        << 2U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xcU] 
                                  >> 0x1eU));
    __Vtemp4698[2U] = (0xfU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xeU] 
                                << 2U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xdU] 
                                          >> 0x1eU)));
    VL_EXTEND_WW(72,68, __Vtemp4699, __Vtemp4698);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp4699[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp4699[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp4699[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = ((7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]) 
           | (0xfffffff8U & (0x20U | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xeU] 
                                            << 2U)))));
    __Vtemp4702[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x12U] 
                        << 4U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x11U] 
                                  >> 0x1cU));
    __Vtemp4702[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x13U] 
                        << 4U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x12U] 
                                  >> 0x1cU));
    __Vtemp4702[2U] = (0xfU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x14U] 
                                << 4U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x13U] 
                                          >> 0x1cU)));
    VL_EXTEND_WW(72,68, __Vtemp4703, __Vtemp4702);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp4703[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp4703[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp4703[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = ((7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]) 
           | (0xfffffff8U & (0x30U | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x13U] 
                                            >> 0x1cU)))));
    __Vtemp4706[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x18U] 
                        << 6U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x17U] 
                                  >> 0x1aU));
    __Vtemp4706[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x19U] 
                        << 6U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x18U] 
                                  >> 0x1aU));
    __Vtemp4706[2U] = (0xfU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1aU] 
                                << 6U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x19U] 
                                          >> 0x1aU)));
    VL_EXTEND_WW(72,68, __Vtemp4707, __Vtemp4706);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp4707[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp4707[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp4707[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = ((7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]) 
           | (0xfffffff8U & (0x40U | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x19U] 
                                            >> 0x1aU)))));
    __Vtemp4710[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1eU] 
                        << 8U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1dU] 
                                  >> 0x18U));
    __Vtemp4710[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1fU] 
                        << 8U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1eU] 
                                  >> 0x18U));
    __Vtemp4710[2U] = (0xfU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x20U] 
                                << 8U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1fU] 
                                          >> 0x18U)));
    VL_EXTEND_WW(72,68, __Vtemp4711, __Vtemp4710);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp4711[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp4711[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp4711[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = ((7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]) 
           | (0xfffffff8U & (0x50U | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1fU] 
                                            >> 0x18U)))));
    __Vtemp4714[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x24U] 
                        << 0xaU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x23U] 
                                    >> 0x16U));
    __Vtemp4714[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x25U] 
                        << 0xaU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x24U] 
                                    >> 0x16U));
    __Vtemp4714[2U] = (0xfU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x26U] 
                                << 0xaU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x25U] 
                                            >> 0x16U)));
    VL_EXTEND_WW(72,68, __Vtemp4715, __Vtemp4714);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp4715[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp4715[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp4715[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = ((7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]) 
           | (0xfffffff8U & (0x60U | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x25U] 
                                            >> 0x16U)))));
    __Vtemp4718[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2aU] 
                        << 0xcU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x29U] 
                                    >> 0x14U));
    __Vtemp4718[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2bU] 
                        << 0xcU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2aU] 
                                    >> 0x14U));
    __Vtemp4718[2U] = (0xfU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2cU] 
                                << 0xcU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2bU] 
                                            >> 0x14U)));
    VL_EXTEND_WW(72,68, __Vtemp4719, __Vtemp4718);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp4719[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp4719[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp4719[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = ((7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]) 
           | (0xfffffff8U & (0x70U | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2bU] 
                                            >> 0x14U)))));
    __Vtemp4722[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x30U] 
                        << 0xeU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2fU] 
                                    >> 0x12U));
    __Vtemp4722[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x31U] 
                        << 0xeU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x30U] 
                                    >> 0x12U));
    __Vtemp4722[2U] = (0xfU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x32U] 
                                << 0xeU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x31U] 
                                            >> 0x12U)));
    VL_EXTEND_WW(72,68, __Vtemp4723, __Vtemp4722);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp4723[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp4723[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp4723[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = ((7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]) 
           | (0xfffffff8U & (0x80U | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x31U] 
                                            >> 0x12U)))));
    __Vtemp4726[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x36U] 
                        << 0x10U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x35U] 
                                     >> 0x10U));
    __Vtemp4726[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x37U] 
                        << 0x10U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x36U] 
                                     >> 0x10U));
    __Vtemp4726[2U] = (0xfU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x38U] 
                                << 0x10U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x37U] 
                                             >> 0x10U)));
    VL_EXTEND_WW(72,68, __Vtemp4727, __Vtemp4726);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp4727[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp4727[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp4727[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = ((7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]) 
           | (0xfffffff8U & (0x90U | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x37U] 
                                            >> 0x10U)))));
    __Vtemp4730[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3cU] 
                        << 0x12U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3bU] 
                                     >> 0xeU));
    __Vtemp4730[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3dU] 
                        << 0x12U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3cU] 
                                     >> 0xeU));
    __Vtemp4730[2U] = (0xfU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3eU] 
                                << 0x12U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3dU] 
                                             >> 0xeU)));
    VL_EXTEND_WW(72,68, __Vtemp4731, __Vtemp4730);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp4731[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp4731[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp4731[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = ((7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]) 
           | (0xfffffff8U & (0xa0U | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3dU] 
                                            >> 0xeU)))));
    __Vtemp4734[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x42U] 
                        << 0x14U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x41U] 
                                     >> 0xcU));
    __Vtemp4734[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x43U] 
                        << 0x14U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x42U] 
                                     >> 0xcU));
    __Vtemp4734[2U] = (0xfU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x44U] 
                                << 0x14U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x43U] 
                                             >> 0xcU)));
    VL_EXTEND_WW(72,68, __Vtemp4735, __Vtemp4734);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp4735[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp4735[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp4735[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = ((7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]) 
           | (0xfffffff8U & (0xb0U | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x43U] 
                                            >> 0xcU)))));
    __Vtemp4738[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x48U] 
                        << 0x16U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x47U] 
                                     >> 0xaU));
    __Vtemp4738[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x49U] 
                        << 0x16U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x48U] 
                                     >> 0xaU));
    __Vtemp4738[2U] = (0xfU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4aU] 
                                << 0x16U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x49U] 
                                             >> 0xaU)));
    VL_EXTEND_WW(72,68, __Vtemp4739, __Vtemp4738);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp4739[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp4739[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp4739[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = ((7U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]) 
           | (0xfffffff8U & (0xc0U | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x49U] 
                                            >> 0xaU)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids 
        = ((0x1ffeU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids)) 
           | (1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0U] 
                    >> 1U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids 
        = ((0x1ffdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids)) 
           | (2U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[5U] 
                    >> 0x1eU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids 
        = ((0x1ffbU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids)) 
           | (4U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xbU] 
                    >> 0x1bU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids 
        = ((0x1ff7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids)) 
           | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x11U] 
                    >> 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids 
        = ((0x1fefU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids)) 
           | (0x10U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x17U] 
                       >> 0x15U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids 
        = ((0x1fdfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids)) 
           | (0x20U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1dU] 
                       >> 0x12U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids 
        = ((0x1fbfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids)) 
           | (0x40U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x23U] 
                       >> 0xfU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids 
        = ((0x1f7fU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids)) 
           | (0x80U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x29U] 
                       >> 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids 
        = ((0x1effU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids)) 
           | (0x100U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2fU] 
                        >> 9U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids 
        = ((0x1dffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids)) 
           | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x35U] 
                        >> 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids 
        = ((0x1bffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids)) 
           | (0x400U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3bU] 
                        >> 3U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids 
        = ((0x17ffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids)) 
           | (0x800U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x41U]));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids 
        = ((0xfffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_valids)) 
           | (0x1000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x47U] 
                         << 3U)));
    __Vtemp4742[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[4U] 
                        << 0xcU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[3U] 
                                    >> 0x14U));
    __Vtemp4742[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[5U] 
                        << 0xcU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[4U] 
                                    >> 0x14U));
    __Vtemp4742[2U] = (0x3ffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[6U] 
                                  << 0xcU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[5U] 
                                              >> 0x14U)));
    VL_EXTEND_WW(78,74, __Vtemp4743, __Vtemp4742);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp4743[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp4743[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp4743[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0x1ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[5U] 
                        >> 0x14U)));
    __Vtemp4746[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xaU] 
                        << 0xeU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[9U] 
                                    >> 0x12U));
    __Vtemp4746[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xbU] 
                        << 0xeU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xaU] 
                                    >> 0x12U));
    __Vtemp4746[2U] = (0x3ffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xcU] 
                                  << 0xeU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xbU] 
                                              >> 0x12U)));
    VL_EXTEND_WW(78,74, __Vtemp4747, __Vtemp4746);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp4747[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp4747[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp4747[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0x1ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffe00U & (0x400U | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xbU] 
                                                 >> 0x12U)))));
    __Vtemp4750[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x10U] 
                        << 0x10U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xfU] 
                                     >> 0x10U));
    __Vtemp4750[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x11U] 
                        << 0x10U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x10U] 
                                     >> 0x10U));
    __Vtemp4750[2U] = (0x3ffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x12U] 
                                  << 0x10U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x11U] 
                                               >> 0x10U)));
    VL_EXTEND_WW(78,74, __Vtemp4751, __Vtemp4750);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp4751[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp4751[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp4751[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0x1ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffe00U & (0x800U | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x11U] 
                                                 >> 0x10U)))));
    __Vtemp4754[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x16U] 
                        << 0x12U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x15U] 
                                     >> 0xeU));
    __Vtemp4754[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x17U] 
                        << 0x12U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x16U] 
                                     >> 0xeU));
    __Vtemp4754[2U] = (0x3ffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x18U] 
                                  << 0x12U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x17U] 
                                               >> 0xeU)));
    VL_EXTEND_WW(78,74, __Vtemp4755, __Vtemp4754);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp4755[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp4755[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp4755[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0x1ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffe00U & (0xc00U | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x17U] 
                                                 >> 0xeU)))));
    __Vtemp4758[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1cU] 
                        << 0x14U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1bU] 
                                     >> 0xcU));
    __Vtemp4758[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1dU] 
                        << 0x14U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1cU] 
                                     >> 0xcU));
    __Vtemp4758[2U] = (0x3ffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1eU] 
                                  << 0x14U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1dU] 
                                               >> 0xcU)));
    VL_EXTEND_WW(78,74, __Vtemp4759, __Vtemp4758);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp4759[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp4759[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp4759[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0x1ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffe00U & (0x1000U | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1dU] 
                                                  >> 0xcU)))));
    __Vtemp4762[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x22U] 
                        << 0x16U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x21U] 
                                     >> 0xaU));
    __Vtemp4762[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x23U] 
                        << 0x16U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x22U] 
                                     >> 0xaU));
    __Vtemp4762[2U] = (0x3ffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x24U] 
                                  << 0x16U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x23U] 
                                               >> 0xaU)));
    VL_EXTEND_WW(78,74, __Vtemp4763, __Vtemp4762);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp4763[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp4763[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp4763[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0x1ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffe00U & (0x1400U | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x23U] 
                                                  >> 0xaU)))));
    __Vtemp4766[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x28U] 
                        << 0x18U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x27U] 
                                     >> 8U));
    __Vtemp4766[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x29U] 
                        << 0x18U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x28U] 
                                     >> 8U));
    __Vtemp4766[2U] = (0x3ffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2aU] 
                                  << 0x18U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x29U] 
                                               >> 8U)));
    VL_EXTEND_WW(78,74, __Vtemp4767, __Vtemp4766);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp4767[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp4767[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp4767[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0x1ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffe00U & (0x1800U | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x29U] 
                                                  >> 8U)))));
    __Vtemp4770[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2eU] 
                        << 0x1aU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2dU] 
                                     >> 6U));
    __Vtemp4770[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2fU] 
                        << 0x1aU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2eU] 
                                     >> 6U));
    __Vtemp4770[2U] = (0x3ffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x30U] 
                                  << 0x1aU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2fU] 
                                               >> 6U)));
    VL_EXTEND_WW(78,74, __Vtemp4771, __Vtemp4770);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp4771[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp4771[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp4771[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0x1ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffe00U & (0x1c00U | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2fU] 
                                                  >> 6U)))));
    __Vtemp4774[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x34U] 
                        << 0x1cU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x33U] 
                                     >> 4U));
    __Vtemp4774[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x35U] 
                        << 0x1cU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x34U] 
                                     >> 4U));
    __Vtemp4774[2U] = (0x3ffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x36U] 
                                  << 0x1cU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x35U] 
                                               >> 4U)));
    VL_EXTEND_WW(78,74, __Vtemp4775, __Vtemp4774);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp4775[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp4775[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp4775[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0x1ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffe00U & (0x2000U | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x35U] 
                                                  >> 4U)))));
    __Vtemp4778[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3aU] 
                        << 0x1eU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x39U] 
                                     >> 2U));
    __Vtemp4778[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3bU] 
                        << 0x1eU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3aU] 
                                     >> 2U));
    __Vtemp4778[2U] = (0x3ffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3cU] 
                                  << 0x1eU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3bU] 
                                               >> 2U)));
    VL_EXTEND_WW(78,74, __Vtemp4779, __Vtemp4778);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp4779[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp4779[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp4779[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0x1ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffe00U & (0x2400U | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3bU] 
                                                  >> 2U)))));
    __Vtemp4782[0U] = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3fU];
    __Vtemp4782[1U] = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x40U];
    __Vtemp4782[2U] = (0x3ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x41U]);
    VL_EXTEND_WW(78,74, __Vtemp4783, __Vtemp4782);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp4783[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp4783[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp4783[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0x1ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffe00U & (0x2800U | (0x200U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x41U]))));
    __Vtemp4786[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x45U] 
                        << 2U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x44U] 
                                  >> 0x1eU));
    __Vtemp4786[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x46U] 
                        << 2U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x45U] 
                                  >> 0x1eU));
    __Vtemp4786[2U] = (0x3ffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x47U] 
                                  << 2U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x46U] 
                                            >> 0x1eU)));
    VL_EXTEND_WW(78,74, __Vtemp4787, __Vtemp4786);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp4787[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp4787[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp4787[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0x1ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffe00U & (0x2c00U | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x47U] 
                                                  << 2U)))));
    __Vtemp4790[0U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4bU] 
                        << 4U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4aU] 
                                  >> 0x1cU));
    __Vtemp4790[1U] = ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4cU] 
                        << 4U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4bU] 
                                  >> 0x1cU));
    __Vtemp4790[2U] = (0x3ffU & ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4dU] 
                                  << 4U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4cU] 
                                            >> 0x1cU)));
    VL_EXTEND_WW(78,74, __Vtemp4791, __Vtemp4790);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp4791[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp4791[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp4791[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0x1ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffe00U & (0x3000U | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4dU] 
                                                  << 4U)))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids 
        = ((0x1ffeU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids)) 
           | (1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[3U] 
                    >> 0x13U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids 
        = ((0x1ffdU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids)) 
           | (2U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[9U] 
                    >> 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids 
        = ((0x1ffbU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids)) 
           | (4U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0xfU] 
                    >> 0xdU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids 
        = ((0x1ff7U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids)) 
           | (8U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x15U] 
                    >> 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids 
        = ((0x1fefU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids)) 
           | (0x10U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x1bU] 
                       >> 7U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids 
        = ((0x1fdfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids)) 
           | (0x20U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x21U] 
                       >> 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids 
        = ((0x1fbfU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids)) 
           | (0x40U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x27U] 
                       >> 1U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids 
        = ((0x1f7fU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids)) 
           | (0x80U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x2dU] 
                       << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids 
        = ((0x1effU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids)) 
           | (0x100U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x33U] 
                        << 5U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids 
        = ((0x1dffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids)) 
           | (0x200U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x39U] 
                        << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids 
        = ((0x1bffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids)) 
           | (0x400U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x3eU] 
                        >> 0x15U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids 
        = ((0x17ffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids)) 
           | (0x800U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x44U] 
                        >> 0x12U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids 
        = ((0xfffU & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_valids)) 
           | (0x1000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__mst_reqs[0x4aU] 
                         >> 0xfU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[1U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[2U] 
        = ((0xffffff00U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[2U]) 
           | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[2U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[2U]) 
           | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[3U] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                                  << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[4U] 
        = ((0xffff0000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[4U]) 
           | ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                        >> 0x18U)) | (0xffffff00U & 
                                      (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[4U] 
        = ((0xffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[4U]) 
           | (0xffff0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                             << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[5U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[6U] 
        = ((0xff000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[6U]) 
           | ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                          >> 0x10U)) | (0xffff0000U 
                                        & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                           << 0x10U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[6U] 
        = ((0xffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[6U]) 
           | (0xff000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                             << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[7U] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[8U] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[9U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0xaU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0xbU] 
        = ((0xffffff00U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0xbU]) 
           | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0xbU] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0xbU]) 
           | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0xcU] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                                  << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0xdU] 
        = ((0xffff0000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0xdU]) 
           | ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                        >> 0x18U)) | (0xffffff00U & 
                                      (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0xdU] 
        = ((0xffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0xdU]) 
           | (0xffff0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                             << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0xeU] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0xfU] 
        = ((0xff000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0xfU]) 
           | ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                          >> 0x10U)) | (0xffff0000U 
                                        & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                           << 0x10U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0xfU] 
        = ((0xffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0xfU]) 
           | (0xff000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                             << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x10U] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x11U] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x12U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x13U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x14U] 
        = ((0xffffff00U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x14U]) 
           | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x14U] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x14U]) 
           | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x15U] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                                  << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x16U] 
        = ((0xffff0000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x16U]) 
           | ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                        >> 0x18U)) | (0xffffff00U & 
                                      (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                       << 8U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x16U] 
        = ((0xffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x16U]) 
           | (0xffff0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                             << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x17U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x18U] 
        = ((0xff000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x18U]) 
           | ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                          >> 0x10U)) | (0xffff0000U 
                                        & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                           << 0x10U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x18U] 
        = ((0xffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x18U]) 
           | (0xff000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                             << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x19U] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x1aU] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x1bU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x1cU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_ar_chans[0x1dU] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_ar_chans_o[2U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[1U] 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U];
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[2U] 
        = ((0xffffc000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[2U]) 
           | vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]);
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[2U] 
        = ((0x3fffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[2U]) 
           | (0xffffc000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                             << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[3U] 
        = ((0x3fffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                       >> 0x12U)) | (0xffffc000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                      << 0xeU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[4U] 
        = ((0xf0000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[4U]) 
           | ((0x3fffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                          >> 0x12U)) | (0xffffc000U 
                                        & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                           << 0xeU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[4U] 
        = ((0xfffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[4U]) 
           | (0xf0000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                             << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[5U] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[6U] 
        = ((0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                      << 0x1cU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[7U] 
        = ((0xfffffc00U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[7U]) 
           | (0xfffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                            >> 4U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[7U] 
        = ((0x3ffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[7U]) 
           | (0xfffffc00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                             << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[8U] 
        = ((0x3ffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                      >> 0x16U)) | (0xfffffc00U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                                   << 0xaU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[9U] 
        = ((0xff000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[9U]) 
           | ((0x3ffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                         >> 0x16U)) | (0xfffffc00U 
                                       & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__3__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                          << 0xaU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[9U] 
        = ((0xffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[9U]) 
           | (0xff000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                             << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0xaU] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0xbU] 
        = ((0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                         >> 8U)) | (0xff000000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                                   << 0x18U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0xcU] 
        = ((0xffffffc0U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0xcU]) 
           | (0xffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__4__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                           >> 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0xcU] 
        = ((0x3fU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0xcU]) 
           | (0xffffffc0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                             << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0xdU] 
        = ((0x3fU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                     >> 0x1aU)) | (0xffffffc0U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                                  << 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0xeU] 
        = ((0xfff00000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0xeU]) 
           | ((0x3fU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                        >> 0x1aU)) | (0xffffffc0U & 
                                      (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__5__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                       << 6U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0xeU] 
        = ((0xfffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0xeU]) 
           | (0xfff00000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                             << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0xfU] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x10U] 
        = ((0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                      << 0x14U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x11U] 
        = ((0xfffffffcU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x11U]) 
           | (0xfffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__6__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                          >> 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x11U] 
        = ((3U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x11U]) 
           | (0xfffffffcU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                             << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x12U] 
        = ((3U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                  >> 0x1eU)) | (0xfffffffcU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                               << 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x13U] 
        = ((0xffff0000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x13U]) 
           | ((3U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                     >> 0x1eU)) | (0xfffffffcU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__7__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                                  << 2U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x13U] 
        = ((0xffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x13U]) 
           | (0xffff0000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                             << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x14U] 
        = ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                       >> 0x10U)) | (0xffff0000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                      << 0x10U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x15U] 
        = ((0xc0000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x15U]) 
           | ((0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                          >> 0x10U)) | (0xffff0000U 
                                        & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__8__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                           << 0x10U))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x15U] 
        = ((0x3fffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x15U]) 
           | (0xc0000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                             << 0x1eU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x16U] 
        = ((0x3fffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                       << 0x1eU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x17U] 
        = ((0x3fffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                       << 0x1eU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x18U] 
        = ((0xfffff000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x18U]) 
           | (0x3fffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__9__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                             >> 2U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x18U] 
        = ((0xfffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x18U]) 
           | (0xfffff000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                             << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x19U] 
        = ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                                   << 0xcU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x1aU] 
        = ((0xfc000000U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x1aU]) 
           | ((0xfffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                         >> 0x14U)) | (0xfffff000U 
                                       & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__10__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                          << 0xcU))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x1aU] 
        = ((0x3ffffffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x1aU]) 
           | (0xfc000000U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                             << 0x1aU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x1bU] 
        = ((0x3ffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                          >> 6U)) | (0xfc000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                      << 0x1aU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x1cU] 
        = ((0x3ffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                          >> 6U)) | (0xfc000000U & 
                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                      << 0x1aU)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x1dU] 
        = ((0xffffff00U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x1dU]) 
           | (0x3ffffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__11__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                            >> 6U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x1dU] 
        = ((0xffU & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x1dU]) 
           | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                             << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x1eU] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                                  << 8U)));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT__gen_mux__DOT__slv_aw_chans[0x1fU] 
        = ((0xffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__i_soc_interconnect__DOT__i_axi_xbar__DOT__i_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__DOT____Vcellout__gen_mux__DOT__gen_id_prepend__BRA__12__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                                  << 8U)));
}

VL_INLINE_OPT void Vcore_v_mcu::_sequent__TOP__26(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_sequent__TOP__26\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_en_sync;
    CData/*0:0*/ __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_sample_msb;
    SData/*15:0*/ __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_rowcounter;
    SData/*15:0*/ __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_colcounter;
    // Body
    __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_sample_msb 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_sample_msb;
    __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_en_sync 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_en_sync;
    __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_colcounter 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_colcounter;
    __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_rowcounter 
        = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_rowcounter;
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) {
        if ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_en_sync))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_vsync 
                = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_cam_vsync;
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_vsync = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__full__DOT__latched_full_s 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) 
           & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__full__DOT__full_up) 
              | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__udma_tx_valid_flush)));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) {
        if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_enable)) 
                   | (~ (IData)((vlTOPp->core_v_mcu__DOT__s_perio_in 
                                 >> 0x26U)))))) {
            __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_sample_msb = 1U;
        } else {
            if (((IData)((vlTOPp->core_v_mcu__DOT__s_perio_in 
                          >> 0x26U)) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_enable))) {
                __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_sample_msb 
                    = (1U & (~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_sample_msb)));
            }
        }
    } else {
        __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_sample_msb = 1U;
    }
    __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_en_sync 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i)
            ? ((2U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_en_sync) 
                      << 1U)) | (1U & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_reg_if__DOT__r_cam_cfg 
                                       >> 0x1fU))) : 0U);
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_sof) 
             & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_enable))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_framecounter 
                = ((1U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_reg_if__DOT__r_cam_cfg)
                    ? (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_framecounter) 
                        == (0x3fU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_reg_if__DOT__r_cam_cfg 
                                     >> 1U))) ? 0U : 
                       (0x3fU & ((IData)(1U) + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_framecounter))))
                    : 0U);
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_framecounter = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_sof) {
            __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_rowcounter = 0U;
            __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_colcounter = 0U;
        } else {
            if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_sof)) 
                       & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_en_sync) 
                             >> 1U))))) {
                __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_rowcounter = 0U;
                __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_colcounter = 0U;
            } else {
                if (((IData)((vlTOPp->core_v_mcu__DOT__s_perio_in 
                              >> 0x26U)) & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_enable))) {
                    if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_sample_msb)) 
                               & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_reg_if__DOT__r_cam_cfg 
                                  >> 7U)))) {
                        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_colcounter) 
                             == (0xffffU & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_reg_if__DOT__r_cam_cfg_size 
                                            >> 0x10U)))) {
                            __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_rowcounter 
                                = (0xffffU & ((IData)(1U) 
                                              + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_rowcounter)));
                            __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_colcounter = 0U;
                        } else {
                            __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_colcounter 
                                = (0xffffU & ((IData)(1U) 
                                              + (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_colcounter)));
                        }
                    }
                    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_sample_msb) {
                        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_data_msb 
                            = (0xffU & (IData)((vlTOPp->core_v_mcu__DOT__s_perio_in 
                                                >> 0x27U)));
                    }
                }
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_data_msb = 0U;
        __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_rowcounter = 0U;
        __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_colcounter = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__write_enable) {
            VL_ASSIGNSEL_WIII(16,(0x7fU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__buffer__DOT__write_pointer_bin) 
                                           << 4U)), vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__buffer__DOT__data, vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__udma_tx_data);
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__buffer__DOT__data[0U] = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__buffer__DOT__data[1U] = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__buffer__DOT__data[2U] = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__buffer__DOT__data[3U] = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_rowcounter 
        = __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_rowcounter;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_colcounter 
        = __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_colcounter;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_sample_msb 
        = __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_sample_msb;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__full__DOT__full_up 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) 
           & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__full__DOT__full_synch__DOT__d_middle));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_sof) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_enable 
                = (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_en_sync) 
                         >> 1U));
        } else {
            if ((1U & ((~ (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_sof)) 
                       & (~ ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_en_sync) 
                             >> 1U))))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_enable 
                    = (1U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_en_sync) 
                             >> 1U));
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_enable = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) {
        if (((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_data_filter_valid) 
             | (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_yuv_data_valid))) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__udma_tx_data 
                = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_data_filter_valid)
                    ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_data_filter_shift)
                    : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_yuv_pix));
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__udma_tx_valid = 1U;
        } else {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__udma_tx_valid = 0U;
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__udma_tx_data = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__udma_tx_valid = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_en_sync 
        = __Vdly__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_en_sync;
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__full__DOT__full_synch__DOT__d_middle 
        = ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) 
           & (((0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__read_pointer) 
                       & ((0xfeU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__write_pointer) 
                                    << 1U)) | (1U & 
                                               ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__write_pointer) 
                                                >> 7U))))) 
               | (0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__read_pointer) 
                         & ((0xfcU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__write_pointer) 
                                      << 2U)) | (3U 
                                                 & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__write_pointer) 
                                                    >> 6U)))))) 
              | (0U != ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__read_pointer) 
                        & ((0xf8U & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__write_pointer) 
                                     << 3U)) | (7U 
                                                & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_dc_fifo__DOT__u_din__DOT__write_pointer) 
                                                   >> 5U)))))));
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_tx_valid) {
            if ((0x400U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_reg_if__DOT__r_cam_cfg)) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_yuv_data_valid = 1U;
            }
        } else {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_yuv_data_valid = 0U;
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_yuv_data_valid = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_tx_valid) {
            if ((0x400U & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_reg_if__DOT__r_cam_cfg)) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_yuv_pix 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_yuv_pix;
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_yuv_pix = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_tx_valid) {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_data_filter 
                = (0x1ffffU & (((0xffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_r_pix) 
                                            * (0xffU 
                                               & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_reg_if__DOT__r_cam_cfg_filter 
                                                  >> 0x10U)))) 
                                + (0xffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_g_pix) 
                                              * (0xffU 
                                                 & (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_reg_if__DOT__r_cam_cfg_filter 
                                                    >> 8U))))) 
                               + (0xffffU & ((IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_b_pix) 
                                             * (0xffU 
                                                & vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_reg_if__DOT__r_cam_cfg_filter)))));
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_data_filter_valid = 1U;
        } else {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_data_filter_valid = 0U;
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_data_filter = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_data_filter_valid = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_tx_valid) {
            if ((1U & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_reg_if__DOT__r_cam_cfg 
                          >> 0xaU)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_tx_valid = 1U;
            }
        } else {
            vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_tx_valid = 0U;
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_tx_valid = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_tx_valid) {
            if ((1U & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_reg_if__DOT__r_cam_cfg 
                          >> 0xaU)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_r_pix 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_r_pix;
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_r_pix = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_tx_valid) {
            if ((1U & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_reg_if__DOT__r_cam_cfg 
                          >> 0xaU)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_b_pix 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_b_pix;
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_b_pix = 0U;
    }
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT____Vcellinp__i_cam_gen__BRA__0__KET____DOT__i_camera_if__rstn_i) {
        if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_tx_valid) {
            if ((1U & (~ (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__u_reg_if__DOT__r_cam_cfg 
                          >> 0xaU)))) {
                vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_g_pix 
                    = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__s_g_pix;
            }
        }
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_udma__DOT__i_cam_gen__BRA__0__KET____DOT__i_camera_if__DOT__r_g_pix = 0U;
    }
}

VL_INLINE_OPT void Vcore_v_mcu::_sequent__TOP__27(Vcore_v_mcu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_v_mcu::_sequent__TOP__27\n"); );
    Vcore_v_mcu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__acc_ff_rstn) {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__mux_acc_idata;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__mux_acc_idata;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__mux_acc_idata;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__mux_acc_idata;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__mux_acc_idata;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__mux_acc_idata;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__mux_acc_idata;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__mux_acc_idata;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__mux_acc_idata;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__mux_acc_idata;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__mux_acc_idata;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__mux_acc_idata;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__mux_acc_idata;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__mux_acc_idata;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__mux_acc_idata[0U];
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__mux_acc_idata[1U];
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__mux_acc_idata[2U];
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__m0_m1_outsel;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__m0_m1_outsel;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__m0_m1_outsel;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__m0_m1_outsel;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__m0_m1_outsel;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__m0_m1_outsel;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__m0_m1_outsel;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__m0_m1_outsel;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__m0_m1_outsel;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__m0_m1_outsel;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__m0_m1_outsel;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__m0_m1_outsel;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__m0_m1_outsel;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__m0_m1_outsel;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL 
            = vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__m0_m1_outsel;
    } else {
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata = 0ULL;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata = 0ULL;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL = 0U;
        vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL = 0U;
    }
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__acc_data_out_sel 
        = (0xfU & ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata
                    : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                        ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata
                            : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0x10U)))))
                        : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xfU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xeU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xdU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xcU)))
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xbU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xaU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 9U) : 
                                       (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 8U)))) : 
                           ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                             ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 7U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 6U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 5U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 4U)))
                             : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 3U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 2U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 1U) : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U7_MAC_4BIT__DOT__fmux_acc_idata)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__acc_data_out_sel 
        = (0xfU & ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata
                    : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                        ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata
                            : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0x10U)))))
                        : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xfU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xeU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xdU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xcU)))
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xbU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xaU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 9U) : 
                                       (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 8U)))) : 
                           ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                             ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 7U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 6U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 5U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 4U)))
                             : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 3U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 2U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 1U) : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U6_MAC_4BIT__DOT__fmux_acc_idata)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__acc_data_out_sel 
        = (0xfU & ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata
                    : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                        ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata
                            : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0x10U)))))
                        : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xfU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xeU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xdU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xcU)))
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xbU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xaU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 9U) : 
                                       (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 8U)))) : 
                           ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                             ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 7U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 6U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 5U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 4U)))
                             : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 3U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 2U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 1U) : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U5_MAC_4BIT__DOT__fmux_acc_idata)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__acc_data_out_sel 
        = (0xfU & ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata
                    : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                        ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata
                            : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0x10U)))))
                        : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xfU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xeU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xdU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xcU)))
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xbU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xaU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 9U) : 
                                       (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 8U)))) : 
                           ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                             ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 7U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 6U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 5U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 4U)))
                             : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 3U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 2U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 1U) : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U4_MAC_4BIT__DOT__fmux_acc_idata)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__acc_data_out_sel 
        = (0xfU & ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata
                    : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                        ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata
                            : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0x10U)))))
                        : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xfU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xeU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xdU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xcU)))
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xbU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xaU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 9U) : 
                                       (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 8U)))) : 
                           ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                             ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 7U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 6U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 5U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 4U)))
                             : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 3U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 2U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 1U) : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_4BIT__DOT__fmux_acc_idata)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__acc_data_out_sel 
        = (0xfU & ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata
                    : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                        ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata
                            : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0x10U)))))
                        : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xfU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xeU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xdU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xcU)))
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xbU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xaU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 9U) : 
                                       (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 8U)))) : 
                           ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                             ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 7U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 6U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 5U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 4U)))
                             : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 3U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 2U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 1U) : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_4BIT__DOT__fmux_acc_idata)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__acc_data_out_sel 
        = (0xfU & ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata
                    : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                        ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata
                            : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0x10U)))))
                        : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xfU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xeU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xdU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xcU)))
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xbU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xaU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 9U) : 
                                       (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 8U)))) : 
                           ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                             ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 7U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 6U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 5U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 4U)))
                             : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 3U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 2U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 1U) : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_4BIT__DOT__fmux_acc_idata)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__acc_data_out_sel 
        = (0xfU & ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata
                    : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                        ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata
                            : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0x10U)))))
                        : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                            ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xfU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xeU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xdU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xcU)))
                                : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                    ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xbU)
                                        : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 0xaU))
                                    : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                        ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                           >> 9U) : 
                                       (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 8U)))) : 
                           ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                             ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 7U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 6U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 5U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 4U)))
                             : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                 ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 3U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                                  >> 2U))
                                 : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fMAC_OUT_SEL))
                                     ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata 
                                        >> 1U) : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_4BIT__DOT__fmux_acc_idata)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__acc_data_out_sel 
        = (0xffU & ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                     ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata
                     : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                         ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                             ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata
                             : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                 ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata
                                 : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                     ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata
                                     : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0x10U)))))
                         : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                             ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                 ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                     ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xfU)
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xeU))
                                     : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xdU)
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xcU)))
                                 : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                     ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xbU)
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xaU))
                                     : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 9U) : 
                                        (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 8U)))) : 
                            ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                              ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                  ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 7U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                                   >> 6U))
                                  : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 5U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                                   >> 4U)))
                              : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                  ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 3U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                                   >> 2U))
                                  : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 1U) : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U3_MAC_8BIT__DOT__fmux_acc_idata)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__acc_data_out_sel 
        = (0xffU & ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                     ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata
                     : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                         ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                             ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata
                             : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                 ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata
                                 : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                     ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata
                                     : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0x10U)))))
                         : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                             ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                 ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                     ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xfU)
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xeU))
                                     : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xdU)
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xcU)))
                                 : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                     ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xbU)
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xaU))
                                     : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 9U) : 
                                        (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 8U)))) : 
                            ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                              ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                  ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 7U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                                   >> 6U))
                                  : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 5U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                                   >> 4U)))
                              : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                  ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 3U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                                   >> 2U))
                                  : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 1U) : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U2_MAC_8BIT__DOT__fmux_acc_idata)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__acc_data_out_sel 
        = (0xffU & ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                     ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata
                     : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                         ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                             ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata
                             : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                 ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata
                                 : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                     ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata
                                     : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0x10U)))))
                         : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                             ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                 ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                     ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xfU)
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xeU))
                                     : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xdU)
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xcU)))
                                 : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                     ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xbU)
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xaU))
                                     : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 9U) : 
                                        (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 8U)))) : 
                            ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                              ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                  ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 7U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                                   >> 6U))
                                  : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 5U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                                   >> 4U)))
                              : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                  ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 3U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                                   >> 2U))
                                  : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 1U) : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_8BIT__DOT__fmux_acc_idata)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__acc_data_out_sel 
        = (0xffU & ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                     ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata
                     : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                         ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                             ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata
                             : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                 ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata
                                 : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                     ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata
                                     : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0x10U)))))
                         : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                             ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                 ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                     ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xfU)
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xeU))
                                     : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xdU)
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xcU)))
                                 : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                     ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xbU)
                                         : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 0xaU))
                                     : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                         ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                            >> 9U) : 
                                        (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 8U)))) : 
                            ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                              ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                  ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 7U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                                   >> 6U))
                                  : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 5U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                                   >> 4U)))
                              : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                  ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 3U) : (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                                   >> 2U))
                                  : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fMAC_OUT_SEL))
                                      ? (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata 
                                         >> 1U) : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_8BIT__DOT__fmux_acc_idata)))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__acc_data_out_sel 
        = (0xffffU & ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                       ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata)
                       : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                           ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                               ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                   ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata)
                                   : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                       ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata)
                                       : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata)
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x18U)))))
                               : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                   ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                       ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x17U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x16U)))
                                       : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x15U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x14U))))
                                   : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                       ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x13U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x12U)))
                                       : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x11U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x10U))))))
                           : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                               ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                   ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                       ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0xfU))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0xeU)))
                                       : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0xdU))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0xcU))))
                                   : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                       ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0xbU))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0xaU)))
                                       : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 9U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 8U)))))
                               : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                   ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                       ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 7U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 6U)))
                                       : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 5U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 4U))))
                                   : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                       ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 3U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 2U)))
                                       : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 1U))
                                           : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U1_MAC_16BIT__DOT__fmux_acc_idata))))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__acc_data_out_sel 
        = (0xffffU & ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                       ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata)
                       : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                           ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                               ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                   ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata)
                                   : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                       ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata)
                                       : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata)
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x18U)))))
                               : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                   ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                       ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x17U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x16U)))
                                       : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x15U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x14U))))
                                   : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                       ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x13U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x12U)))
                                       : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x11U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0x10U))))))
                           : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                               ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                   ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                       ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0xfU))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0xeU)))
                                       : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0xdU))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0xcU))))
                                   : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                       ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0xbU))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 0xaU)))
                                       : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 9U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 8U)))))
                               : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                   ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                       ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 7U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 6U)))
                                       : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 5U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 4U))))
                                   : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                       ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 3U))
                                           : (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 2U)))
                                       : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fMAC_OUT_SEL))
                                           ? (IData)(
                                                     (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata 
                                                      >> 1U))
                                           : (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U0_MAC_16BIT__DOT__fmux_acc_idata))))))));
    vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__acc_data_out_sel 
        = ((0x20U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
            ? ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                    ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U]
                    : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                        ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U]
                        : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                            ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U]
                            : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U]
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x10U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 0x10U))))))
                : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                    ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                        ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x11U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 0xfU))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x12U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 0xeU)))
                            : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x13U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 0xdU))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x14U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 0xcU))))
                        : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x15U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 0xbU))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x16U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 0xaU)))
                            : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x17U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 9U))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x18U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 8U)))))
                    : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                        ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x19U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 7U))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x1aU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 6U)))
                            : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x1bU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 5U))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x1cU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 4U))))
                        : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x1dU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 3U))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x1eU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 2U)))
                            : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[2U] 
                                    << 0x1fU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                                 >> 1U))
                                : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U])))))
            : ((0x10U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                ? ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                    ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                        ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 1U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                              >> 0x1fU))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 2U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                              >> 0x1eU)))
                            : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 3U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                              >> 0x1dU))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 4U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                              >> 0x1cU))))
                        : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 5U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                              >> 0x1bU))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 6U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                              >> 0x1aU)))
                            : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 7U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                              >> 0x19U))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 8U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                              >> 0x18U)))))
                    : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                        ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 9U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                              >> 0x17U))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0xaU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                >> 0x16U)))
                            : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0xbU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                >> 0x15U))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0xcU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                >> 0x14U))))
                        : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0xdU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                >> 0x13U))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0xeU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                >> 0x12U)))
                            : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0xfU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                >> 0x11U))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x10U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 0x10U))))))
                : ((8U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                    ? ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                        ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x11U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 0xfU))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x12U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 0xeU)))
                            : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x13U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 0xdU))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x14U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 0xcU))))
                        : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x15U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 0xbU))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x16U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 0xaU)))
                            : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x17U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 9U))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x18U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 8U)))))
                    : ((4U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                        ? ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x19U) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 7U))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x1aU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 6U)))
                            : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x1bU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 5U))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x1cU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 4U))))
                        : ((2U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                            ? ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x1dU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 3U))
                                : ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x1eU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 2U)))
                            : ((1U & (IData)(vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fMAC_OUT_SEL))
                                ? ((vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[1U] 
                                    << 0x1fU) | (vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U] 
                                                 >> 1U))
                                : vlTOPp->core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__eFPGA_wrapper__DOT__M0__DOT__U_MATH_BLOCK_1__DOT__U_MAC_ARRAY__DOT__U_MAC_32BIT__DOT__fmux_acc_idata[0U]))))));
}
