
dtmp:	file format elf32-mips

Disassembly of section .text:

00003000 <_init>:
    3000: 00 30 1d 24  	addiu	$sp, $zero, 0x3000 <_init>
    3004: 5c 0c 00 08  	j	0x3170 <main>
    3008: 00 00 00 00  	nop <qsort.c>

0000300c <endLoop>:
    300c: 03 0c 00 08  	j	0x300c <endLoop>
    3010: 00 00 00 00  	nop <qsort.c>
    3014: 01 00 17 04  	<unknown>
    3018: 01 00 17 04  	<unknown>
    301c: 01 00 17 04  	<unknown>
    3020: 00 30 1d 24  	addiu	$sp, $zero, 0x3000 <_init>
    3024: 5c 0c 00 08  	j	0x3170 <main>
    3028: 00 00 00 00  	nop <qsort.c>

0000302c <print>:
    302c: 00 80 01 34  	ori	$1, $zero, 0x8000 <main+0x4e90>
    3030: 08 00 e0 03  	jr	$ra
    3034: 00 00 24 ac  	sw	$4, 0x0($1)

00003038 <QkSort>:
    3038: 2a 08 c5 00  	slt	$1, $6, $5
    303c: 4a 00 20 14  	bnez	$1, 0x3168 <QkSort+0x130>
    3040: 00 00 00 00  	nop <qsort.c>
    3044: d8 ff bd 27  	addiu	$sp, $sp, -0x28 <main+0xffffffffffffce68>
    3048: 24 00 bf af  	sw	$ra, 0x24($sp)
    304c: 20 00 b4 af  	sw	$20, 0x20($sp)
    3050: 1c 00 b3 af  	sw	$19, 0x1c($sp)
    3054: 18 00 b2 af  	sw	$18, 0x18($sp)
    3058: 14 00 b1 af  	sw	$17, 0x14($sp)
    305c: 10 00 b0 af  	sw	$16, 0x10($sp)
    3060: 25 80 c0 00  	move	$16, $6
    3064: 25 88 80 00  	move	$17, $4
    3068: 80 08 06 00  	sll	$1, $6, 0x2 <qsort.c+0x2>
    306c: 21 90 81 00  	addu	$18, $4, $1
    3070: 29 0c 00 08  	j	0x30a4 <QkSort+0x6c>
    3074: 04 00 93 24  	addiu	$19, $4, 0x4 <qsort.c+0x4>
    3078: 01 00 d4 24  	addiu	$20, $6, 0x1 <qsort.c+0x1>
    307c: 00 00 6b ac  	sw	$11, 0x0($3)
    3080: 80 08 14 00  	sll	$1, $20, 0x2 <qsort.c+0x2>
    3084: 21 08 21 02  	addu	$1, $17, $1
    3088: 00 00 22 ac  	sw	$2, 0x0($1)
    308c: ff ff 86 26  	addiu	$6, $20, -0x1 <main+0xffffffffffffce8f>
    3090: 0e 0c 00 0c  	jal	0x3038 <QkSort>
    3094: 25 20 20 02  	move	$4, $17
    3098: 2a 08 90 02  	slt	$1, $20, $16
    309c: 2b 00 20 10  	beqz	$1, 0x314c <QkSort+0x114>
    30a0: 01 00 85 26  	addiu	$5, $20, 0x1 <qsort.c+0x1>
    30a4: 80 08 05 00  	sll	$1, $5, 0x2 <qsort.c+0x2>
    30a8: 21 18 21 02  	addu	$3, $17, $1
    30ac: 00 00 62 8c  	lw	$2, 0x0($3)
    30b0: 25 20 a0 00  	move	$4, $5
    30b4: 07 00 b0 14  	bne	$5, $16, 0x30d4 <QkSort+0x9c>
    30b8: 25 40 00 02  	move	$8, $16
    30bc: 00 00 4b 8e  	lw	$11, 0x0($18)
    30c0: 1f 0c 00 08  	j	0x307c <QkSort+0x44>
    30c4: 25 a0 00 02  	move	$20, $16
    30c8: fc ff aa ad  	sw	$10, -0x4($13)
    30cc: ea ff e4 10  	beq	$7, $4, 0x3078 <QkSort+0x40>
    30d0: 00 00 2b ad  	sw	$11, 0x0($9)
    30d4: 80 08 08 00  	sll	$1, $8, 0x2 <qsort.c+0x2>
    30d8: 21 58 61 02  	addu	$11, $19, $1
    30dc: 25 30 00 01  	move	$6, $8
    30e0: 25 38 c0 00  	move	$7, $6
    30e4: 2a 08 86 00  	slt	$1, $4, $6
    30e8: fc ff 69 25  	addiu	$9, $11, -0x4 <main+0xffffffffffffce8c>
    30ec: fc ff 6a 8d  	lw	$10, -0x4($11)
    30f0: 04 00 20 10  	beqz	$1, 0x3104 <QkSort+0xcc>
    30f4: ff ff c6 24  	addiu	$6, $6, -0x1 <main+0xffffffffffffce8f>
    30f8: 2a 08 42 01  	slt	$1, $10, $2
    30fc: f8 ff 20 10  	beqz	$1, 0x30e0 <QkSort+0xa8>
    3100: 25 58 20 01  	move	$11, $9
    3104: 80 08 04 00  	sll	$1, $4, 0x2 <qsort.c+0x2>
    3108: 21 60 21 02  	addu	$12, $17, $1
    310c: ff ff 84 24  	addiu	$4, $4, -0x1 <main+0xffffffffffffce8f>
    3110: 01 00 c8 24  	addiu	$8, $6, 0x1 <qsort.c+0x1>
    3114: 01 00 84 24  	addiu	$4, $4, 0x1 <qsort.c+0x1>
    3118: 2a 70 88 00  	slt	$14, $4, $8
    311c: 00 00 8b 8d  	lw	$11, 0x0($12)
    3120: 04 00 c0 11  	beqz	$14, 0x3134 <QkSort+0xfc>
    3124: 04 00 8d 25  	addiu	$13, $12, 0x4 <qsort.c+0x4>
    3128: 2a 08 4b 00  	slt	$1, $2, $11
    312c: f9 ff 20 10  	beqz	$1, 0x3114 <QkSort+0xdc>
    3130: 25 60 a0 01  	move	$12, $13
    3134: e4 ff c0 15  	bnez	$14, 0x30c8 <QkSort+0x90>
    3138: 00 00 00 00  	nop <qsort.c>
    313c: e5 ff e4 14  	bne	$7, $4, 0x30d4 <QkSort+0x9c>
    3140: 25 58 40 01  	move	$11, $10
    3144: 1e 0c 00 08  	j	0x3078 <QkSort+0x40>
    3148: 00 00 00 00  	nop <qsort.c>
    314c: 10 00 b0 8f  	lw	$16, 0x10($sp)
    3150: 14 00 b1 8f  	lw	$17, 0x14($sp)
    3154: 18 00 b2 8f  	lw	$18, 0x18($sp)
    3158: 1c 00 b3 8f  	lw	$19, 0x1c($sp)
    315c: 20 00 b4 8f  	lw	$20, 0x20($sp)
    3160: 24 00 bf 8f  	lw	$ra, 0x24($sp)
    3164: 28 00 bd 27  	addiu	$sp, $sp, 0x28 <qsort.c+0x28>
    3168: 08 00 e0 03  	jr	$ra
    316c: 00 00 00 00  	nop <qsort.c>

00003170 <main>:
    3170: c8 ff bd 27  	addiu	$sp, $sp, -0x38 <main+0xffffffffffffce58>
    3174: 34 00 bf af  	sw	$ra, 0x34($sp)
    3178: 30 00 b0 af  	sw	$16, 0x30($sp)
    317c: 04 00 01 24  	addiu	$1, $zero, 0x4 <qsort.c+0x4>
    3180: 01 00 02 24  	addiu	$2, $zero, 0x1 <qsort.c+0x1>
    3184: 07 00 03 24  	addiu	$3, $zero, 0x7 <qsort.c+0x7>
    3188: 05 00 05 24  	addiu	$5, $zero, 0x5 <qsort.c+0x5>
    318c: 2c 00 a5 af  	sw	$5, 0x2c($sp)
    3190: 28 00 a3 af  	sw	$3, 0x28($sp)
    3194: 20 00 a2 af  	sw	$2, 0x20($sp)
    3198: 1c 00 a1 af  	sw	$1, 0x1c($sp)
    319c: 03 00 04 24  	addiu	$4, $zero, 0x3 <qsort.c+0x3>
    31a0: 18 00 a4 af  	sw	$4, 0x18($sp)
    31a4: 02 00 06 24  	addiu	$6, $zero, 0x2 <qsort.c+0x2>
    31a8: 14 00 a6 af  	sw	$6, 0x14($sp)
    31ac: 24 00 a0 af  	sw	$zero, 0x24($sp)
    31b0: 00 80 10 34  	ori	$16, $zero, 0x8000 <main+0x4e90>
    31b4: 00 00 06 ae  	sw	$6, 0x0($16)
    31b8: 00 00 04 ae  	sw	$4, 0x0($16)
    31bc: 00 00 01 ae  	sw	$1, 0x0($16)
    31c0: 00 00 02 ae  	sw	$2, 0x0($16)
    31c4: 00 00 00 ae  	sw	$zero, 0x0($16)
    31c8: 14 00 a4 27  	addiu	$4, $sp, 0x14 <qsort.c+0x14>
    31cc: ff ff 01 24  	addiu	$1, $zero, -0x1 <main+0xffffffffffffce8f>
    31d0: 00 00 03 ae  	sw	$3, 0x0($16)
    31d4: 00 00 05 ae  	sw	$5, 0x0($16)
    31d8: 00 00 01 ae  	sw	$1, 0x0($16)
    31dc: 00 00 05 24  	addiu	$5, $zero, 0x0 <qsort.c>
    31e0: 0e 0c 00 0c  	jal	0x3038 <QkSort>
    31e4: 06 00 06 24  	addiu	$6, $zero, 0x6 <qsort.c+0x6>
    31e8: 14 00 a1 8f  	lw	$1, 0x14($sp)
    31ec: 00 00 01 ae  	sw	$1, 0x0($16)
    31f0: 18 00 a1 8f  	lw	$1, 0x18($sp)
    31f4: 00 00 01 ae  	sw	$1, 0x0($16)
    31f8: 1c 00 a1 8f  	lw	$1, 0x1c($sp)
    31fc: 00 00 01 ae  	sw	$1, 0x0($16)
    3200: 20 00 a1 8f  	lw	$1, 0x20($sp)
    3204: 00 00 01 ae  	sw	$1, 0x0($16)
    3208: 24 00 a1 8f  	lw	$1, 0x24($sp)
    320c: 00 00 01 ae  	sw	$1, 0x0($16)
    3210: 28 00 a1 8f  	lw	$1, 0x28($sp)
    3214: 00 00 01 ae  	sw	$1, 0x0($16)
    3218: 2c 00 a1 8f  	lw	$1, 0x2c($sp)
    321c: 00 00 01 ae  	sw	$1, 0x0($16)
    3220: 88 0c 00 08  	j	0x3220 <main+0xb0>
    3224: 00 00 00 00  	nop <qsort.c>
    3228: 01 00 17 04  	<unknown>
    322c: 01 00 17 04  	<unknown>

Disassembly of section .symtab:

00000000 <.symtab>:
		...
      10: 21 00 00 00  	move	$zero, $zero
		...
      1c: 04 00 f1 ff  	<unknown>
      20: 14 00 00 00  	<unknown>
      24: 0c 30 00 00  	syscall	0xc0 <.symtab+0xc0>
      28: 00 00 00 00  	nop <.symtab>
      2c: 00 00 01 00  	sll	$zero, $1, 0x0 <.symtab>
      30: 1c 00 00 00  	<unknown>
      34: 70 31 00 00  	tge	$zero, $zero, 0xc5 <.symtab+0xc5>
      38: b8 00 00 00  	<unknown>
      3c: 12 00 01 00  	<unknown>
      40: 08 00 00 00  	jr	$zero
      44: 2c 30 00 00  	<unknown>
      48: 0c 00 00 00  	syscall <.symtab>
      4c: 12 00 01 00  	<unknown>
      50: 01 00 00 00  	movf	$zero, $zero, $fcc0
      54: 38 30 00 00  	<unknown>
      58: 38 01 00 00  	<unknown>
      5c: 12 00 01 00  	<unknown>
      60: 0e 00 00 00  	<unknown>
      64: 00 30 00 00  	sll	$6, $zero, 0x0 <.symtab>
      68: 00 00 00 00  	nop <.symtab>
      6c: 10 00 01 00  	<unknown>

Disassembly of section .shstrtab:

00000000 <.shstrtab>:
       0: 00 2e 74 65  	<unknown>
       4: 78 74 00 2e  	sltiu	$zero, $16, 0x7478 <main+0x4308>
       8: 73 68 73 74  	jalx	0x1cda1cc <main+0x1cd705c>
       c: 72 74 61 62  	<unknown>
      10: 00 2e 73 74  	jalx	0x1ccb800 <main+0x1cc8690>
      14: 72 74 61 62  	<unknown>
      18: 00 2e 73 79  	<unknown>
      1c: 6d 74 61 62  	<unknown>
      20: 00           	<unknown>

Disassembly of section .strtab:

00000000 <.strtab>:
       0: 00 51 6b 53  	beql	$27, $11, 0x14404 <main+0x11294>
       4: 6f 72 74 00  	<unknown>
       8: 70 72 69 6e  	<unknown>
       c: 74 00 5f 69  	<unknown>
      10: 6e 69 74 00  	<unknown>
      14: 65 6e 64 4c  	<unknown>
      18: 6f 6f 70 00  	<unknown>
      1c: 6d 61 69 6e  	<unknown>
      20: 00 71 73 6f  	<unknown>
      24: 72 74 2e 63  	<unknown>
      28: 00           	<unknown>
