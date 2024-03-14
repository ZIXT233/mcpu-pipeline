	.text
	.abicalls
	.option	pic0
	.section	.mdebug.abi32,"",@progbits
	.nan	legacy
	.module	fp=xx
	.module	nooddspreg
	.text
	.file	"qsort.c"
                                        # Start of file scope inline assembly
	.set	push
	.set	at
	.set	macro
	.set	reorder

	addiu	$sp, $zero, 12288
	.set	noreorder
	j	main
	nop
	.set	reorder



	.set	pop
                                        # End of file scope inline assembly
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
	.globl	QkSort                          # -- Begin function QkSort
	.p2align	2
	.type	QkSort,@function
	.set	nomicromips
	.set	nomips16
	.ent	QkSort
QkSort:                                 # @QkSort
	.frame	$sp,40,$ra
	.mask 	0x801f0000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:
	slt	$1, $6, $5
	bnez	$1, $BB1_17
	nop
# %bb.1:
	addiu	$sp, $sp, -40
	sw	$ra, 36($sp)                    # 4-byte Folded Spill
	sw	$20, 32($sp)                    # 4-byte Folded Spill
	sw	$19, 28($sp)                    # 4-byte Folded Spill
	sw	$18, 24($sp)                    # 4-byte Folded Spill
	sw	$17, 20($sp)                    # 4-byte Folded Spill
	sw	$16, 16($sp)                    # 4-byte Folded Spill
	move	$16, $6
	move	$17, $4
	sll	$1, $6, 2
	addu	$18, $4, $1
	j	$BB1_4
	addiu	$19, $4, 4
$BB1_2:                                 #   in Loop: Header=BB1_4 Depth=1
	addiu	$20, $6, 1
$BB1_3:                                 #   in Loop: Header=BB1_4 Depth=1
	sw	$11, 0($3)
	sll	$1, $20, 2
	addu	$1, $17, $1
	sw	$2, 0($1)
	addiu	$6, $20, -1
	jal	QkSort
	move	$4, $17
	slt	$1, $20, $16
	beqz	$1, $BB1_16
	addiu	$5, $20, 1
$BB1_4:                                 # =>This Loop Header: Depth=1
                                        #     Child Loop BB1_7 Depth 2
                                        #       Child Loop BB1_8 Depth 3
                                        #       Child Loop BB1_11 Depth 3
	sll	$1, $5, 2
	addu	$3, $17, $1
	lw	$2, 0($3)
	move	$4, $5
	bne	$5, $16, $BB1_7
	move	$8, $16
# %bb.5:                                #   in Loop: Header=BB1_4 Depth=1
	lw	$11, 0($18)
	j	$BB1_3
	move	$20, $16
$BB1_6:                                 #   in Loop: Header=BB1_7 Depth=2
	sw	$10, -4($13)
	beq	$7, $4, $BB1_2
	sw	$11, 0($9)
$BB1_7:                                 #   Parent Loop BB1_4 Depth=1
                                        # =>  This Loop Header: Depth=2
                                        #       Child Loop BB1_8 Depth 3
                                        #       Child Loop BB1_11 Depth 3
	sll	$1, $8, 2
	addu	$11, $19, $1
	move	$6, $8
$BB1_8:                                 #   Parent Loop BB1_4 Depth=1
                                        #     Parent Loop BB1_7 Depth=2
                                        # =>    This Inner Loop Header: Depth=3
	move	$7, $6
	slt	$1, $4, $6
	addiu	$9, $11, -4
	lw	$10, -4($11)
	beqz	$1, $BB1_10
	addiu	$6, $6, -1
# %bb.9:                                #   in Loop: Header=BB1_8 Depth=3
	slt	$1, $10, $2
	beqz	$1, $BB1_8
	move	$11, $9
$BB1_10:                                #   in Loop: Header=BB1_7 Depth=2
	sll	$1, $4, 2
	addu	$12, $17, $1
	addiu	$4, $4, -1
	addiu	$8, $6, 1
$BB1_11:                                #   Parent Loop BB1_4 Depth=1
                                        #     Parent Loop BB1_7 Depth=2
                                        # =>    This Inner Loop Header: Depth=3
	addiu	$4, $4, 1
	slt	$14, $4, $8
	lw	$11, 0($12)
	beqz	$14, $BB1_13
	addiu	$13, $12, 4
# %bb.12:                               #   in Loop: Header=BB1_11 Depth=3
	slt	$1, $2, $11
	beqz	$1, $BB1_11
	move	$12, $13
$BB1_13:                                #   in Loop: Header=BB1_7 Depth=2
	bnez	$14, $BB1_6
	nop
# %bb.14:                               #   in Loop: Header=BB1_7 Depth=2
	bne	$7, $4, $BB1_7
	move	$11, $10
# %bb.15:                               #   in Loop: Header=BB1_4 Depth=1
	j	$BB1_2
	nop
$BB1_16:
	lw	$16, 16($sp)                    # 4-byte Folded Reload
	lw	$17, 20($sp)                    # 4-byte Folded Reload
	lw	$18, 24($sp)                    # 4-byte Folded Reload
	lw	$19, 28($sp)                    # 4-byte Folded Reload
	lw	$20, 32($sp)                    # 4-byte Folded Reload
	lw	$ra, 36($sp)                    # 4-byte Folded Reload
	addiu	$sp, $sp, 40
$BB1_17:
	jr	$ra
	nop
	.set	at
	.set	macro
	.set	reorder
	.end	QkSort
$func_end1:
	.size	QkSort, ($func_end1)-QkSort
                                        # -- End function
	.globl	main                            # -- Begin function main
	.p2align	2
	.type	main,@function
	.set	nomicromips
	.set	nomips16
	.ent	main
main:                                   # @main
	.frame	$sp,56,$ra
	.mask 	0x80010000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:
	addiu	$sp, $sp, -56
	sw	$ra, 52($sp)                    # 4-byte Folded Spill
	sw	$16, 48($sp)                    # 4-byte Folded Spill
	addiu	$1, $zero, 4
	addiu	$2, $zero, 1
	addiu	$3, $zero, 7
	addiu	$5, $zero, 5
	sw	$5, 44($sp)
	sw	$3, 40($sp)
	sw	$2, 32($sp)
	sw	$1, 28($sp)
	addiu	$4, $zero, 3
	sw	$4, 24($sp)
	addiu	$6, $zero, 2
	sw	$6, 20($sp)
	sw	$zero, 36($sp)
	ori	$16, $zero, 32768
	sw	$6, 0($16)
	sw	$4, 0($16)
	sw	$1, 0($16)
	sw	$2, 0($16)
	sw	$zero, 0($16)
	addiu	$4, $sp, 20
	addiu	$1, $zero, -1
	sw	$3, 0($16)
	sw	$5, 0($16)
	sw	$1, 0($16)
	addiu	$5, $zero, 0
	jal	QkSort
	addiu	$6, $zero, 6
	lw	$1, 20($sp)
	sw	$1, 0($16)
	lw	$1, 24($sp)
	sw	$1, 0($16)
	lw	$1, 28($sp)
	sw	$1, 0($16)
	lw	$1, 32($sp)
	sw	$1, 0($16)
	lw	$1, 36($sp)
	sw	$1, 0($16)
	lw	$1, 40($sp)
	sw	$1, 0($16)
	lw	$1, 44($sp)
	sw	$1, 0($16)
$BB2_1:                                 # =>This Inner Loop Header: Depth=1
	j	$BB2_1
	nop
	.set	at
	.set	macro
	.set	reorder
	.end	main
$func_end2:
	.size	main, ($func_end2)-main
                                        # -- End function
	.ident	"Homebrew clang version 17.0.6"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.text
