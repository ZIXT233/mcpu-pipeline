	.text
	.abicalls
	.option	pic0
	.section	.mdebug.abi32,"",@progbits
	.nan	legacy
	.module	fp=xx
	.module	nooddspreg
	.text
	.file	"segtest.c"
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
	lui	$1, 49104
	ori	$1, $1, 32768
	jr	$ra
	sw	$4, 0($1)
	.set	at
	.set	macro
	.set	reorder
	.end	print
$func_end0:
	.size	print, ($func_end0)-print
                                        # -- End function
	.globl	seg7Sb                          # -- Begin function seg7Sb
	.p2align	2
	.type	seg7Sb,@function
	.set	nomicromips
	.set	nomips16
	.ent	seg7Sb
seg7Sb:                                 # @seg7Sb
	.frame	$sp,0,$ra
	.mask 	0x00000000,0
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:
	lui	$1, 49104
	ori	$1, $1, 33024
	addu	$1, $5, $1
	jr	$ra
	sb	$4, 0($1)
	.set	at
	.set	macro
	.set	reorder
	.end	seg7Sb
$func_end1:
	.size	seg7Sb, ($func_end1)-seg7Sb
                                        # -- End function
	.globl	seg7Sw                          # -- Begin function seg7Sw
	.p2align	2
	.type	seg7Sw,@function
	.set	nomicromips
	.set	nomips16
	.ent	seg7Sw
seg7Sw:                                 # @seg7Sw
	.frame	$sp,0,$ra
	.mask 	0x00000000,0
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:
	lui	$1, 49104
	ori	$1, $1, 33024
	lw	$2, 16($sp)
	sll	$2, $2, 2
	addu	$1, $2, $1
	sll	$2, $4, 24
	sll	$3, $5, 16
	or	$2, $3, $2
	sll	$3, $6, 8
	or	$2, $2, $3
	or	$2, $2, $7
	jr	$ra
	sw	$2, 0($1)
	.set	at
	.set	macro
	.set	reorder
	.end	seg7Sw
$func_end2:
	.size	seg7Sw, ($func_end2)-seg7Sw
                                        # -- End function
	.globl	delay_1K                        # -- Begin function delay_1K
	.p2align	2
	.type	delay_1K,@function
	.set	nomicromips
	.set	nomips16
	.ent	delay_1K
delay_1K:                               # @delay_1K
	.frame	$sp,0,$ra
	.mask 	0x00000000,0
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:
	jr	$ra
	nop
	.set	at
	.set	macro
	.set	reorder
	.end	delay_1K
$func_end3:
	.size	delay_1K, ($func_end3)-delay_1K
                                        # -- End function
	.globl	delay_ms                        # -- Begin function delay_ms
	.p2align	2
	.type	delay_ms,@function
	.set	nomicromips
	.set	nomips16
	.ent	delay_ms
delay_ms:                               # @delay_ms
	.frame	$sp,0,$ra
	.mask 	0x00000000,0
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:
	jr	$ra
	nop
	.set	at
	.set	macro
	.set	reorder
	.end	delay_ms
$func_end4:
	.size	delay_ms, ($func_end4)-delay_ms
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
	lui	$1, %hi(seg)
	addiu	$2, $1, %lo(seg)
	lbu	$1, 2($2)
	sll	$3, $1, 24
	sll	$1, $1, 16
	or	$1, $1, $3
	lbu	$3, 3($2)
	sll	$4, $3, 8
	or	$1, $1, $4
	or	$1, $1, $3
	lui	$4, 49104
	ori	$5, $4, 33028
	addiu	$3, $zero, 1
	sw	$1, 0($5)
	ori	$1, $4, 33024
	lbu	$5, 1($2)
	sll	$6, $5, 24
	sll	$5, $5, 16
	or	$5, $5, $6
	lbu	$6, 4($2)
	sll	$6, $6, 8
	or	$5, $5, $6
	lbu	$6, 5($2)
	or	$5, $5, $6
	sw	$5, 0($1)
	ori	$4, $4, 33025
	j	$BB5_2
	addiu	$5, $zero, 8
$BB5_1:                                 #   in Loop: Header=BB5_2 Depth=1
	move	$3, $6
$BB5_2:                                 # =>This Inner Loop Header: Depth=1
	addu	$1, $2, $3
	lbu	$1, 0($1)
	sb	$1, 0($4)
	slt	$1, $5, $3
	bnez	$1, $BB5_1
	addiu	$6, $zero, 0
# %bb.3:                                #   in Loop: Header=BB5_2 Depth=1
	j	$BB5_1
	addiu	$6, $3, 1
	.set	at
	.set	macro
	.set	reorder
	.end	main
$func_end5:
	.size	main, ($func_end5)-main
                                        # -- End function
	.type	seg,@object                     # @seg
	.data
	.globl	seg
seg:
	.ascii	"?\006[Ofm}\007\177o"
	.size	seg, 10

	.ident	"Homebrew clang version 17.0.6"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.text
