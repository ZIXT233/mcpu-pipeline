	.text
	.abicalls
	.option	pic0
	.section	.mdebug.abi32,"",@progbits
	.nan	legacy
	.module	fp=xx
	.module	nooddspreg
	.text
	.file	"ccqsort.c"
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
	.globl	segShow                         # -- Begin function segShow
	.p2align	2
	.type	segShow,@function
	.set	nomicromips
	.set	nomips16
	.ent	segShow
segShow:                                # @segShow
	.frame	$sp,8,$ra
	.mask 	0x00000000,0
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:
	addiu	$sp, $sp, -8
	lw	$1, 0($4)
	lui	$2, %hi(seg)
	addiu	$2, $2, %lo(seg)
	addu	$1, $2, $1
	lbu	$1, 0($1)
	lui	$3, 49104
	ori	$5, $3, 33024
	sb	$1, 0($5)
	lw	$1, 4($4)
	addu	$1, $2, $1
	lbu	$1, 0($1)
	ori	$5, $3, 33030
	ori	$6, $3, 33029
	ori	$7, $3, 33028
	ori	$8, $3, 33027
	ori	$9, $3, 33026
	ori	$3, $3, 33025
	sb	$1, 0($3)
	lw	$1, 8($4)
	addu	$1, $2, $1
	lbu	$1, 0($1)
	sb	$1, 0($9)
	lw	$1, 12($4)
	addu	$1, $2, $1
	lbu	$1, 0($1)
	sb	$1, 0($8)
	lw	$1, 16($4)
	addu	$1, $2, $1
	lbu	$1, 0($1)
	sb	$1, 0($7)
	lw	$1, 20($4)
	addu	$1, $2, $1
	lbu	$1, 0($1)
	sb	$1, 0($6)
	lw	$1, 24($4)
	addu	$1, $2, $1
	lbu	$1, 0($1)
	sb	$1, 0($5)
	sw	$zero, 4($sp)
	lw	$1, 4($sp)
	slti	$1, $1, 1000
	bnez	$1, $BB2_3
	nop
$BB2_1:
	jr	$ra
	addiu	$sp, $sp, 8
$BB2_2:                                 #   in Loop: Header=BB2_3 Depth=1
	lw	$1, 4($sp)
	addiu	$1, $1, 1
	sw	$1, 4($sp)
	lw	$1, 4($sp)
	slti	$1, $1, 1000
	beqz	$1, $BB2_1
	nop
$BB2_3:                                 # =>This Loop Header: Depth=1
                                        #     Child Loop BB2_4 Depth 2
	sw	$zero, 0($sp)
	lw	$1, 0($sp)
	slti	$1, $1, 5000
	beqz	$1, $BB2_2
	nop
$BB2_4:                                 #   Parent Loop BB2_3 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lw	$1, 0($sp)
	addiu	$1, $1, 1
	sw	$1, 0($sp)
	lw	$1, 0($sp)
	slti	$1, $1, 5000
	bnez	$1, $BB2_4
	nop
# %bb.5:                                #   in Loop: Header=BB2_3 Depth=1
	j	$BB2_2
	nop
	.set	at
	.set	macro
	.set	reorder
	.end	segShow
$func_end2:
	.size	segShow, ($func_end2)-segShow
                                        # -- End function
	.globl	QkSort                          # -- Begin function QkSort
	.p2align	2
	.type	QkSort,@function
	.set	nomicromips
	.set	nomips16
	.ent	QkSort
QkSort:                                 # @QkSort
	.frame	$sp,80,$ra
	.mask 	0xc0ff0000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:
	slt	$1, $6, $5
	bnez	$1, $BB3_28
	nop
# %bb.1:
	addiu	$sp, $sp, -80
	sw	$ra, 76($sp)                    # 4-byte Folded Spill
	sw	$fp, 72($sp)                    # 4-byte Folded Spill
	sw	$23, 68($sp)                    # 4-byte Folded Spill
	sw	$22, 64($sp)                    # 4-byte Folded Spill
	sw	$21, 60($sp)                    # 4-byte Folded Spill
	sw	$20, 56($sp)                    # 4-byte Folded Spill
	sw	$19, 52($sp)                    # 4-byte Folded Spill
	sw	$18, 48($sp)                    # 4-byte Folded Spill
	sw	$17, 44($sp)                    # 4-byte Folded Spill
	sw	$16, 40($sp)                    # 4-byte Folded Spill
	move	$17, $4
	addiu	$25, $4, 4
	lui	$24, %hi(seg)
	addiu	$1, $24, %lo(seg)
	sw	$1, 24($sp)                     # 4-byte Folded Spill
	lui	$1, 49104
	ori	$21, $1, 33030
	ori	$22, $1, 33029
	ori	$23, $1, 33028
	ori	$fp, $1, 33027
	ori	$16, $1, 33026
	ori	$20, $1, 33025
	ori	$19, $1, 33024
	sw	$6, 28($sp)                     # 4-byte Folded Spill
	j	$BB3_3
	sw	$25, 20($sp)
$BB3_2:                                 #   in Loop: Header=BB3_3 Depth=1
	addiu	$6, $18, -1
	jal	QkSort
	move	$4, $17
	lw	$6, 28($sp)                     # 4-byte Folded Reload
	slt	$1, $18, $6
	addiu	$5, $18, 1
	lw	$25, 20($sp)                    # 4-byte Folded Reload
	beqz	$1, $BB3_27
	lui	$24, %hi(seg)
$BB3_3:                                 # =>This Loop Header: Depth=1
                                        #     Child Loop BB3_6 Depth 2
                                        #       Child Loop BB3_7 Depth 3
                                        #       Child Loop BB3_10 Depth 3
                                        #       Child Loop BB3_17 Depth 3
                                        #         Child Loop BB3_18 Depth 4
                                        #     Child Loop BB3_24 Depth 2
                                        #       Child Loop BB3_25 Depth 3
	sll	$1, $5, 2
	addu	$2, $17, $1
	lw	$3, 0($2)
	beq	$5, $6, $BB3_21
	move	$18, $6
# %bb.4:                                #   in Loop: Header=BB3_3 Depth=1
	move	$4, $5
	j	$BB3_6
	move	$8, $6
$BB3_5:                                 #   in Loop: Header=BB3_6 Depth=2
	beq	$7, $4, $BB3_20
	nop
$BB3_6:                                 #   Parent Loop BB3_3 Depth=1
                                        # =>  This Loop Header: Depth=2
                                        #       Child Loop BB3_7 Depth 3
                                        #       Child Loop BB3_10 Depth 3
                                        #       Child Loop BB3_17 Depth 3
                                        #         Child Loop BB3_18 Depth 4
	sll	$1, $8, 2
	addu	$11, $25, $1
	move	$15, $8
$BB3_7:                                 #   Parent Loop BB3_3 Depth=1
                                        #     Parent Loop BB3_6 Depth=2
                                        # =>    This Inner Loop Header: Depth=3
	move	$7, $15
	slt	$1, $4, $15
	addiu	$9, $11, -4
	lw	$10, -4($11)
	beqz	$1, $BB3_9
	addiu	$15, $15, -1
# %bb.8:                                #   in Loop: Header=BB3_7 Depth=3
	slt	$1, $10, $3
	beqz	$1, $BB3_7
	move	$11, $9
$BB3_9:                                 #   in Loop: Header=BB3_6 Depth=2
	sll	$1, $4, 2
	addu	$11, $17, $1
	addiu	$4, $4, -1
	addiu	$8, $15, 1
$BB3_10:                                #   Parent Loop BB3_3 Depth=1
                                        #     Parent Loop BB3_6 Depth=2
                                        # =>    This Inner Loop Header: Depth=3
	addiu	$4, $4, 1
	slt	$14, $4, $8
	lw	$12, 0($11)
	beqz	$14, $BB3_12
	addiu	$13, $11, 4
# %bb.11:                               #   in Loop: Header=BB3_10 Depth=3
	slt	$1, $3, $12
	beqz	$1, $BB3_10
	move	$11, $13
$BB3_12:                                #   in Loop: Header=BB3_6 Depth=2
	beqz	$14, $BB3_14
	nop
# %bb.13:                               #   in Loop: Header=BB3_6 Depth=2
	sw	$10, -4($13)
	sw	$12, 0($9)
$BB3_14:                                #   in Loop: Header=BB3_6 Depth=2
	lw	$1, 0($17)
	addiu	$9, $24, %lo(seg)
	addu	$1, $9, $1
	lbu	$1, 0($1)
	sb	$1, 0($19)
	lw	$1, 4($17)
	addu	$1, $9, $1
	lbu	$1, 0($1)
	sb	$1, 0($20)
	lw	$1, 8($17)
	addu	$1, $9, $1
	lbu	$1, 0($1)
	sb	$1, 0($16)
	lw	$1, 12($17)
	addu	$1, $9, $1
	lbu	$1, 0($1)
	sb	$1, 0($fp)
	lw	$1, 16($17)
	addu	$1, $9, $1
	lbu	$1, 0($1)
	sb	$1, 0($23)
	lw	$1, 20($17)
	addu	$1, $9, $1
	lbu	$1, 0($1)
	sb	$1, 0($22)
	lw	$1, 24($17)
	addu	$1, $9, $1
	lbu	$1, 0($1)
	sb	$1, 0($21)
	sw	$zero, 36($sp)
	lw	$1, 36($sp)
	slti	$1, $1, 1000
	beqz	$1, $BB3_5
	nop
# %bb.15:                               #   in Loop: Header=BB3_6 Depth=2
	j	$BB3_17
	nop
$BB3_16:                                #   in Loop: Header=BB3_17 Depth=3
	lw	$1, 36($sp)
	addiu	$1, $1, 1
	sw	$1, 36($sp)
	lw	$1, 36($sp)
	slti	$1, $1, 1000
	beqz	$1, $BB3_5
	nop
$BB3_17:                                #   Parent Loop BB3_3 Depth=1
                                        #     Parent Loop BB3_6 Depth=2
                                        # =>    This Loop Header: Depth=3
                                        #         Child Loop BB3_18 Depth 4
	sw	$zero, 32($sp)
	lw	$1, 32($sp)
	slti	$1, $1, 5000
	beqz	$1, $BB3_16
	nop
$BB3_18:                                #   Parent Loop BB3_3 Depth=1
                                        #     Parent Loop BB3_6 Depth=2
                                        #       Parent Loop BB3_17 Depth=3
                                        # =>      This Inner Loop Header: Depth=4
	lw	$1, 32($sp)
	addiu	$1, $1, 1
	sw	$1, 32($sp)
	lw	$1, 32($sp)
	slti	$1, $1, 5000
	bnez	$1, $BB3_18
	nop
# %bb.19:                               #   in Loop: Header=BB3_17 Depth=3
	j	$BB3_16
	nop
$BB3_20:                                #   in Loop: Header=BB3_3 Depth=1
	addiu	$18, $15, 1
$BB3_21:                                #   in Loop: Header=BB3_3 Depth=1
	sll	$1, $18, 2
	addu	$1, $17, $1
	lw	$4, 0($1)
	sw	$4, 0($2)
	sw	$3, 0($1)
	lw	$1, 0($17)
	lw	$2, 24($sp)                     # 4-byte Folded Reload
	addu	$1, $2, $1
	lbu	$1, 0($1)
	sb	$1, 0($19)
	lw	$1, 4($17)
	addu	$1, $2, $1
	lbu	$1, 0($1)
	sb	$1, 0($20)
	lw	$1, 8($17)
	addu	$1, $2, $1
	lbu	$1, 0($1)
	sb	$1, 0($16)
	lw	$1, 12($17)
	addu	$1, $2, $1
	lbu	$1, 0($1)
	sb	$1, 0($fp)
	lw	$1, 16($17)
	addu	$1, $2, $1
	lbu	$1, 0($1)
	sb	$1, 0($23)
	lw	$1, 20($17)
	addu	$1, $2, $1
	lbu	$1, 0($1)
	sb	$1, 0($22)
	lw	$1, 24($17)
	addu	$1, $2, $1
	lbu	$1, 0($1)
	sb	$1, 0($21)
	sw	$zero, 36($sp)
	lw	$1, 36($sp)
	slti	$1, $1, 1000
	beqz	$1, $BB3_2
	nop
# %bb.22:                               #   in Loop: Header=BB3_3 Depth=1
	j	$BB3_24
	nop
$BB3_23:                                #   in Loop: Header=BB3_24 Depth=2
	lw	$1, 36($sp)
	addiu	$1, $1, 1
	sw	$1, 36($sp)
	lw	$1, 36($sp)
	slti	$1, $1, 1000
	beqz	$1, $BB3_2
	nop
$BB3_24:                                #   Parent Loop BB3_3 Depth=1
                                        # =>  This Loop Header: Depth=2
                                        #       Child Loop BB3_25 Depth 3
	sw	$zero, 32($sp)
	lw	$1, 32($sp)
	slti	$1, $1, 5000
	beqz	$1, $BB3_23
	nop
$BB3_25:                                #   Parent Loop BB3_3 Depth=1
                                        #     Parent Loop BB3_24 Depth=2
                                        # =>    This Inner Loop Header: Depth=3
	lw	$1, 32($sp)
	addiu	$1, $1, 1
	sw	$1, 32($sp)
	lw	$1, 32($sp)
	slti	$1, $1, 5000
	bnez	$1, $BB3_25
	nop
# %bb.26:                               #   in Loop: Header=BB3_24 Depth=2
	j	$BB3_23
	nop
$BB3_27:
	lw	$16, 40($sp)                    # 4-byte Folded Reload
	lw	$17, 44($sp)                    # 4-byte Folded Reload
	lw	$18, 48($sp)                    # 4-byte Folded Reload
	lw	$19, 52($sp)                    # 4-byte Folded Reload
	lw	$20, 56($sp)                    # 4-byte Folded Reload
	lw	$21, 60($sp)                    # 4-byte Folded Reload
	lw	$22, 64($sp)                    # 4-byte Folded Reload
	lw	$23, 68($sp)                    # 4-byte Folded Reload
	lw	$fp, 72($sp)                    # 4-byte Folded Reload
	lw	$ra, 76($sp)                    # 4-byte Folded Reload
	addiu	$sp, $sp, 80
$BB3_28:
	jr	$ra
	nop
	.set	at
	.set	macro
	.set	reorder
	.end	QkSort
$func_end3:
	.size	QkSort, ($func_end3)-QkSort
                                        # -- End function
	.globl	main                            # -- Begin function main
	.p2align	2
	.type	main,@function
	.set	nomicromips
	.set	nomips16
	.ent	main
main:                                   # @main
	.frame	$sp,96,$ra
	.mask 	0xc0ff0000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:
	addiu	$sp, $sp, -96
	sw	$ra, 92($sp)                    # 4-byte Folded Spill
	sw	$fp, 88($sp)                    # 4-byte Folded Spill
	sw	$23, 84($sp)                    # 4-byte Folded Spill
	sw	$22, 80($sp)                    # 4-byte Folded Spill
	sw	$21, 76($sp)                    # 4-byte Folded Spill
	sw	$20, 72($sp)                    # 4-byte Folded Spill
	sw	$19, 68($sp)                    # 4-byte Folded Spill
	sw	$18, 64($sp)                    # 4-byte Folded Spill
	sw	$17, 60($sp)                    # 4-byte Folded Spill
	sw	$16, 56($sp)                    # 4-byte Folded Spill
	lui	$1, %hi(A)
	lw	$2, %lo(A)($1)
	sw	$2, 20($sp)
	lui	$3, 49104
	ori	$18, $3, 32768
	sw	$2, 0($18)
	addiu	$1, $1, %lo(A)
	lw	$4, 4($1)
	sw	$4, 24($sp)
	sw	$4, 0($18)
	lui	$5, %hi(seg)
	lw	$6, 8($1)
	addiu	$22, $5, %lo(seg)
	ori	$16, $3, 33030
	ori	$17, $3, 33029
	ori	$19, $3, 33028
	ori	$20, $3, 33027
	ori	$21, $3, 33026
	ori	$23, $3, 33025
	sw	$6, 28($sp)
	sw	$6, 0($18)
	lw	$5, 12($1)
	sw	$5, 32($sp)
	sw	$5, 0($18)
	lw	$7, 16($1)
	sw	$7, 36($sp)
	sw	$7, 0($18)
	lw	$8, 20($1)
	sw	$8, 40($sp)
	sw	$8, 0($18)
	lw	$1, 24($1)
	addu	$9, $22, $1
	addu	$8, $22, $8
	addu	$7, $22, $7
	addu	$5, $22, $5
	addu	$6, $22, $6
	addu	$4, $22, $4
	addu	$2, $22, $2
	ori	$fp, $3, 33024
	sw	$1, 44($sp)
	sw	$1, 0($18)
	lbu	$1, 0($2)
	sb	$1, 0($fp)
	lbu	$1, 0($4)
	sb	$1, 0($23)
	lbu	$1, 0($6)
	sb	$1, 0($21)
	lbu	$1, 0($5)
	sb	$1, 0($20)
	lbu	$1, 0($7)
	sb	$1, 0($19)
	lbu	$1, 0($8)
	sb	$1, 0($17)
	lbu	$1, 0($9)
	sb	$1, 0($16)
	sw	$zero, 52($sp)
	lw	$1, 52($sp)
	slti	$1, $1, 1000
	bnez	$1, $BB4_4
	nop
$BB4_1:
	addiu	$1, $zero, -1
	sw	$1, 0($18)
	addiu	$4, $sp, 20
	addiu	$5, $zero, 0
	jal	QkSort
	addiu	$6, $zero, 6
	lw	$1, 20($sp)
	sw	$1, 0($18)
	lw	$2, 24($sp)
	sw	$2, 0($18)
	lw	$3, 28($sp)
	sw	$3, 0($18)
	lw	$4, 32($sp)
	sw	$4, 0($18)
	lw	$5, 36($sp)
	sw	$5, 0($18)
	lw	$6, 40($sp)
	sw	$6, 0($18)
	lw	$7, 44($sp)
	addu	$8, $22, $7
	addu	$6, $22, $6
	addu	$5, $22, $5
	addu	$4, $22, $4
	addu	$3, $22, $3
	addu	$2, $22, $2
	addu	$1, $22, $1
	sw	$7, 0($18)
	lbu	$1, 0($1)
	sb	$1, 0($fp)
	lbu	$1, 0($2)
	sb	$1, 0($23)
	lbu	$1, 0($3)
	sb	$1, 0($21)
	lbu	$1, 0($4)
	sb	$1, 0($20)
	lbu	$1, 0($5)
	sb	$1, 0($19)
	lbu	$1, 0($6)
	sb	$1, 0($17)
	lbu	$1, 0($8)
	sb	$1, 0($16)
	sw	$zero, 52($sp)
	lw	$1, 52($sp)
	slti	$1, $1, 1000
	bnez	$1, $BB4_8
	nop
$BB4_2:                                 # =>This Inner Loop Header: Depth=1
	j	$BB4_2
	nop
$BB4_3:                                 #   in Loop: Header=BB4_4 Depth=1
	lw	$1, 52($sp)
	addiu	$1, $1, 1
	sw	$1, 52($sp)
	lw	$1, 52($sp)
	slti	$1, $1, 1000
	beqz	$1, $BB4_1
	nop
$BB4_4:                                 # =>This Loop Header: Depth=1
                                        #     Child Loop BB4_5 Depth 2
	sw	$zero, 48($sp)
	lw	$1, 48($sp)
	slti	$1, $1, 5000
	beqz	$1, $BB4_3
	nop
$BB4_5:                                 #   Parent Loop BB4_4 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lw	$1, 48($sp)
	addiu	$1, $1, 1
	sw	$1, 48($sp)
	lw	$1, 48($sp)
	slti	$1, $1, 5000
	bnez	$1, $BB4_5
	nop
# %bb.6:                                #   in Loop: Header=BB4_4 Depth=1
	j	$BB4_3
	nop
$BB4_7:                                 #   in Loop: Header=BB4_8 Depth=1
	lw	$1, 52($sp)
	addiu	$1, $1, 1
	sw	$1, 52($sp)
	lw	$1, 52($sp)
	slti	$1, $1, 1000
	beqz	$1, $BB4_2
	nop
$BB4_8:                                 # =>This Loop Header: Depth=1
                                        #     Child Loop BB4_9 Depth 2
	sw	$zero, 48($sp)
	lw	$1, 48($sp)
	slti	$1, $1, 5000
	beqz	$1, $BB4_7
	nop
$BB4_9:                                 #   Parent Loop BB4_8 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lw	$1, 48($sp)
	addiu	$1, $1, 1
	sw	$1, 48($sp)
	lw	$1, 48($sp)
	slti	$1, $1, 5000
	bnez	$1, $BB4_9
	nop
# %bb.10:                               #   in Loop: Header=BB4_8 Depth=1
	j	$BB4_7
	nop
	.set	at
	.set	macro
	.set	reorder
	.end	main
$func_end4:
	.size	main, ($func_end4)-main
                                        # -- End function
	.type	seg,@object                     # @seg
	.data
	.globl	seg
seg:
	.ascii	"?\006[Ofm}\007\177o"
	.size	seg, 10

	.type	A,@object                       # @A
	.globl	A
	.p2align	2, 0x0
A:
	.4byte	2                               # 0x2
	.4byte	3                               # 0x3
	.4byte	4                               # 0x4
	.4byte	0                               # 0x0
	.4byte	1                               # 0x1
	.4byte	7                               # 0x7
	.4byte	5                               # 0x5
	.size	A, 28

	.ident	"Homebrew clang version 17.0.6"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.text
