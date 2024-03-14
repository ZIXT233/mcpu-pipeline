.section .init
.global _init

_init:
li $sp,0x80403000
jal main
endLoop: 
j endLoop

