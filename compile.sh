#!/bin/bash
iverilog -g2005-sv -o wave -I./headers *.sv devices/*.sv control/*.sv sim/*.sv datapath/*.sv datapath/*/*.sv 