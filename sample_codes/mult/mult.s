	.text
	.abicalls
	.option	pic0
	.section	.mdebug.abi32,"",@progbits
	.nan	legacy
	.module	fp=xx
	.module	nooddspreg
	.text
	.file	"mult.c"
	.globl	print                           # -- Begin function print
	.p2align	2
	.type	print,@function
	.set	nomicromips
	.set	nomips16
	.ent	print
print:                                  # @print
	.frame	$sp,0,$ra
	.mask 	0x00000000,0
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:
	ori	$1, $zero, 32768
	jr	$ra
	sw	$4, 0($1)
	.set	at
	.set	macro
	.set	reorder
	.end	print
$func_end0:
	.size	print, ($func_end0)-print
                                        # -- End function
	.globl	main                            # -- Begin function main
	.p2align	2
	.type	main,@function
	.set	nomicromips
	.set	nomips16
	.ent	main
main:                                   # @main
	.frame	$sp,0,$ra
	.mask 	0x00000000,0
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:
	ori	$1, $zero, 32768
	addiu	$2, $zero, 2
	sw	$2, 0($1)
	addiu	$2, $zero, 4
	sw	$2, 0($1)
	addiu	$2, $zero, 16
	sw	$2, 0($1)
	jr	$ra
	addiu	$2, $zero, 0
	.set	at
	.set	macro
	.set	reorder
	.end	main
$func_end1:
	.size	main, ($func_end1)-main
                                        # -- End function
	.ident	"Homebrew clang version 17.0.6"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.text
