#!/bin/bash
#iverilog -g2005-sv -o wave -I./ devices/*.sv control/*.sv sim/*.sv datapath/*.sv datapath/*/*.sv 
verilator -sv  --cc FIFO.sv -Wno-fatal --trace -exe fifo_test.cpp --Mdir ./verilator/fifo_dir
cd verilator
make -j8 -C ./fifo_dir -f VFIFO.mk VFIFO
./fifo_dir/VFIFO