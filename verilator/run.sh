#!/bin/bash
#iverilog -g2005-sv -o wave -I./ devices/*.sv control/*.sv sim/*.sv datapath/*.sv datapath/*/*.sv 
verilator -sv  --cc top.sv devices/*.sv cpu/control/*.sv cpu/sim/*.sv cpu/datapath/*.sv cpu/datapath/*/*.sv cpu/*.sv -Wno-fatal --trace --top-module top -exe sim_main.cpp --Mdir ./verilator/obj_dir
cd verilator
make -j8 -C ./obj_dir -f Vtop.mk Vtop
./obj_dir/Vtop