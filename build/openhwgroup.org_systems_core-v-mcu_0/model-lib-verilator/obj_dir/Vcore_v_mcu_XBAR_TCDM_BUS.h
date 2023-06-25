// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore_v_mcu.h for the primary calling header

#ifndef _VCORE_V_MCU_XBAR_TCDM_BUS_H_
#define _VCORE_V_MCU_XBAR_TCDM_BUS_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcore_v_mcu__Syms;
class Vcore_v_mcu_VerilatedVcd;


//----------

VL_MODULE(Vcore_v_mcu_XBAR_TCDM_BUS) {
  public:
    
    // LOCAL SIGNALS
    CData/*0:0*/ req;
    CData/*0:0*/ wen;
    CData/*3:0*/ be;
    CData/*0:0*/ gnt;
    CData/*0:0*/ r_opc;
    CData/*0:0*/ r_valid;
    IData/*31:0*/ add;
    IData/*31:0*/ wdata;
    IData/*31:0*/ r_rdata;
    
    // INTERNAL VARIABLES
  private:
    Vcore_v_mcu__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcore_v_mcu_XBAR_TCDM_BUS);  ///< Copying not allowed
  public:
    Vcore_v_mcu_XBAR_TCDM_BUS(const char* name = "TOP");
    ~Vcore_v_mcu_XBAR_TCDM_BUS();
    
    // INTERNAL METHODS
    void __Vconfigure(Vcore_v_mcu__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
