#!/bin/bash
#iverilog -g2005-sv -o wave -I./ devices/*.sv control/*.sv sim/*.sv datapath/*.sv datapath/*/*.sv 
verilator -sv  --cc top.sv devices/*.sv cpu/control/*.sv cpu/sim/*.sv cpu/datapath/*.sv cpu/datapath/*/*.sv cpu/*.sv --Wall --Wno-UNUSED --trace --top-module top -exe sim_main.cpp --Mdir ./verilator/obj_dir 2>&1 |tee verilator/compileInfo
cd verilator
read -p "Press to make:"
make -j8 -C ./obj_dir -f Vtop.mk Vtop
read -p "Press to run:"
./obj_dir/Vtop
