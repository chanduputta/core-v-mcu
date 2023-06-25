// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCORE_V_MCU__SYMS_H_
#define _VCORE_V_MCU__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vcore_v_mcu.h"
#include "Vcore_v_mcu___024unit.h"
#include "Vcore_v_mcu_FLL_BUS__F20.h"
#include "Vcore_v_mcu_XBAR_TCDM_BUS.h"
#include "Vcore_v_mcu_APB_BUS.h"

// SYMS CLASS
class Vcore_v_mcu__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vcore_v_mcu*                   TOPp;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__core_data_bus;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__fc_subsystem_i__DOT__core_instr_bus;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__0__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__10__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__11__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__12__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__1__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__2__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__3__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__4__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__5__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__6__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__7__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__8__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__master_ports__BRA__9__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__i_soc_interconnect_wrap__DOT__tcdm_fc_data_addr_remapped;
    Vcore_v_mcu_FLL_BUS__F20       TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_cluster_fll_master;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_lint_efpga_apbt1_bus;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_lint_efpga_bus__BRA__0__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_lint_efpga_bus__BRA__1__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_lint_efpga_bus__BRA__2__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_lint_efpga_bus__BRA__3__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_lint_pulp_jtag_bus;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_mem_l2_bus__BRA__0__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_mem_l2_bus__BRA__1__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_mem_l2_bus__BRA__2__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_mem_l2_bus__BRA__3__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_mem_l2_pri_bus__BRA__0__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_mem_l2_pri_bus__BRA__1__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_mem_rom_bus;
    Vcore_v_mcu_FLL_BUS__F20       TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_per_fll_master;
    Vcore_v_mcu_FLL_BUS__F20       TOP__core_v_mcu__DOT__i_soc_domain__DOT__s_soc_fll_master;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__apbt1_int;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__l2_efpga_tcdm__BRA__0__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__l2_efpga_tcdm__BRA__1__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__l2_efpga_tcdm__BRA__2__KET__;
    Vcore_v_mcu_XBAR_TCDM_BUS      TOP__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__i_efpga_subsystem__DOT__l2_efpga_tcdm__BRA__3__KET__;
    Vcore_v_mcu_APB_BUS            TOP__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_apb_i2cs_bus;
    Vcore_v_mcu_APB_BUS            TOP__core_v_mcu__DOT__i_soc_domain__DOT__soc_peripherals_i__DOT__s_stdout_bus;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_core_v_mcu__i_soc_domain__l2_ram_i__CUTS__BRA__0__KET____bank_i__u0;
    VerilatedScope __Vscope_core_v_mcu__i_soc_domain__l2_ram_i__CUTS__BRA__1__KET____bank_i__u0;
    VerilatedScope __Vscope_core_v_mcu__i_soc_domain__l2_ram_i__CUTS__BRA__2__KET____bank_i__u0;
    VerilatedScope __Vscope_core_v_mcu__i_soc_domain__l2_ram_i__CUTS__BRA__3__KET____bank_i__u0;
    VerilatedScope __Vscope_core_v_mcu__i_soc_domain__l2_ram_i__bank_sram_pri0_i__u0;
    VerilatedScope __Vscope_core_v_mcu__i_soc_domain__l2_ram_i__bank_sram_pri1_i__u0;
    
    // CREATORS
    Vcore_v_mcu__Syms(Vcore_v_mcu* topp, const char* namep);
    ~Vcore_v_mcu__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
