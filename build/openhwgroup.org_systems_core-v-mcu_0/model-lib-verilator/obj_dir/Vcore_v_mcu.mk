# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vcore_v_mcu.mk

default: Vcore_v_mcu__ALL.a

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vcore_v_mcu
# Module prefix (from --prefix)
VM_MODPREFIX = Vcore_v_mcu
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I../src/openhwgroup.org_ip_udma_qspi_0/rtl \
	-I../src/pulp-platform.org__common_cells_1.20.0/include \
	-I../src/pulp-platform.org__axi_0.28.0/include \
	-I../src/openhwgroup.org_systems_core-v-mcu_0/rtl/includes \
	-I../src/openhwgroup.org_systems_core-v-mcu_0/rtl/core-v-mcu/include/ \
	-fPIC \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \


### Default rules...
# Include list of all generated classes
include Vcore_v_mcu_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

# Verilated -*- Makefile -*-
