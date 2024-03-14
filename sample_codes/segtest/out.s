
dtmp:	file format elf32-mips

Disassembly of section .text:

80000000 <_init>:
80000000: 40 80 1d 3c  	lui	$sp, 0x8040 <seg+0x7f20>
80000004: 00 30 bd 37  	ori	$sp, $sp, 0x3000 <seg+0x2ee0>
80000008: 22 00 00 0c  	jal	0x88 <main>
8000000c: 00 00 00 00  	nop <_init>

80000010 <endLoop>:
80000010: 04 00 00 08  	j	0x10 <endLoop>
80000014: 00 00 00 00  	nop <_init>
80000018: 01 00 17 04  	<unknown>
8000001c: 01 00 17 04  	<unknown>

80000020 <print>:
80000020: d0 bf 01 3c  	lui	$1, 0xbfd0 <seg+0xbeb0>
80000024: 00 80 21 34  	ori	$1, $1, 0x8000 <seg+0x7ee0>
80000028: 08 00 e0 03  	jr	$ra
8000002c: 00 00 24 ac  	sw	$4, 0x0($1)

80000030 <seg7Sb>:
80000030: d0 bf 01 3c  	lui	$1, 0xbfd0 <seg+0xbeb0>
80000034: 00 81 21 34  	ori	$1, $1, 0x8100 <seg+0x7fe0>
80000038: 21 08 a1 00  	addu	$1, $5, $1
8000003c: 08 00 e0 03  	jr	$ra
80000040: 00 00 24 a0  	sb	$4, 0x0($1)

80000044 <seg7Sw>:
80000044: d0 bf 01 3c  	lui	$1, 0xbfd0 <seg+0xbeb0>
80000048: 00 81 21 34  	ori	$1, $1, 0x8100 <seg+0x7fe0>
8000004c: 10 00 a2 8f  	lw	$2, 0x10($sp)
80000050: 80 10 02 00  	sll	$2, $2, 0x2 <_init+0x2>
80000054: 21 08 41 00  	addu	$1, $2, $1
80000058: 00 16 04 00  	sll	$2, $4, 0x18 <endLoop+0x8>
8000005c: 00 1c 05 00  	sll	$3, $5, 0x10 <endLoop>
80000060: 25 10 62 00  	or	$2, $3, $2
80000064: 00 1a 06 00  	sll	$3, $6, 0x8 <_init+0x8>
80000068: 25 10 43 00  	or	$2, $2, $3
8000006c: 25 10 47 00  	or	$2, $2, $7
80000070: 08 00 e0 03  	jr	$ra
80000074: 00 00 22 ac  	sw	$2, 0x0($1)

80000078 <delay_1K>:
80000078: 08 00 e0 03  	jr	$ra
8000007c: 00 00 00 00  	nop <_init>

80000080 <delay_ms>:
80000080: 08 00 e0 03  	jr	$ra
80000084: 00 00 00 00  	nop <_init>

80000088 <main>:
80000088: 00 80 01 3c  	lui	$1, 0x8000 <seg+0x7ee0>
8000008c: 20 01 22 24  	addiu	$2, $1, 0x120 <seg>
80000090: 02 00 41 90  	lbu	$1, 0x2($2)
80000094: 00 1e 01 00  	sll	$3, $1, 0x18 <endLoop+0x8>
80000098: 00 0c 01 00  	sll	$1, $1, 0x10 <endLoop>
8000009c: 25 08 23 00  	or	$1, $1, $3
800000a0: 03 00 43 90  	lbu	$3, 0x3($2)
800000a4: 00 22 03 00  	sll	$4, $3, 0x8 <_init+0x8>
800000a8: 25 08 24 00  	or	$1, $1, $4
800000ac: 25 08 23 00  	or	$1, $1, $3
800000b0: d0 bf 04 3c  	lui	$4, 0xbfd0 <seg+0xbeb0>
800000b4: 04 81 85 34  	ori	$5, $4, 0x8104 <seg+0x7fe4>
800000b8: 01 00 03 24  	addiu	$3, $zero, 0x1 <_init+0x1>
800000bc: 00 00 a1 ac  	sw	$1, 0x0($5)
800000c0: 00 81 81 34  	ori	$1, $4, 0x8100 <seg+0x7fe0>
800000c4: 01 00 45 90  	lbu	$5, 0x1($2)
800000c8: 00 36 05 00  	sll	$6, $5, 0x18 <endLoop+0x8>
800000cc: 00 2c 05 00  	sll	$5, $5, 0x10 <endLoop>
800000d0: 25 28 a6 00  	or	$5, $5, $6
800000d4: 04 00 46 90  	lbu	$6, 0x4($2)
800000d8: 00 32 06 00  	sll	$6, $6, 0x8 <_init+0x8>
800000dc: 25 28 a6 00  	or	$5, $5, $6
800000e0: 05 00 46 90  	lbu	$6, 0x5($2)
800000e4: 25 28 a6 00  	or	$5, $5, $6
800000e8: 00 00 25 ac  	sw	$5, 0x0($1)
800000ec: 01 81 84 34  	ori	$4, $4, 0x8101 <seg+0x7fe1>
800000f0: 3f 00 00 08  	j	0xfc <main+0x74>
800000f4: 08 00 05 24  	addiu	$5, $zero, 0x8 <_init+0x8>
800000f8: 25 18 c0 00  	move	$3, $6
800000fc: 21 08 43 00  	addu	$1, $2, $3
80000100: 00 00 21 90  	lbu	$1, 0x0($1)
80000104: 00 00 81 a0  	sb	$1, 0x0($4)
80000108: 2a 08 a3 00  	slt	$1, $5, $3
8000010c: fa ff 20 14  	bnez	$1, 0x800000f8 <main+0x70>
80000110: 00 00 06 24  	addiu	$6, $zero, 0x0 <_init>
80000114: 3e 00 00 08  	j	0xf8 <main+0x70>
80000118: 01 00 66 24  	addiu	$6, $3, 0x1 <_init+0x1>
8000011c: 01 00 17 04  	<unknown>

Disassembly of section .data:

80000120 <seg>:
80000120: 3f 06 5b 4f  	<unknown>
80000124: 66 6d 7d 07  	<unknown>
80000128: 7f 6f 00 00  	<unknown>
8000012c: 00 00 00 00  	nop <_init>

Disassembly of section .symtab:

00000000 <.symtab>:
		...
      10: 2e 00 00 00  	<unknown>
		...
      1c: 04 00 f1 ff  	<unknown>
      20: 1d 00 00 00  	<unknown>
      24: 10 00 00 80  	lb	$zero, 0x10($zero)
      28: 00 00 00 00  	nop <.symtab>
      2c: 00 00 01 00  	sll	$zero, $1, 0x0 <.symtab>
      30: 08 00 00 00  	jr	$zero
      34: 20 00 00 80  	lb	$zero, 0x20($zero)
      38: 10 00 00 00  	mfhi	$zero
      3c: 12 00 01 00  	<unknown>
      40: 38 00 00 00  	<unknown>
      44: 30 00 00 80  	lb	$zero, 0x30($zero)
      48: 14 00 00 00  	<unknown>
      4c: 12 00 01 00  	<unknown>
      50: 01 00 00 00  	movf	$zero, $zero, $fcc0
      54: 44 00 00 80  	lb	$zero, 0x44($zero)
      58: 34 00 00 00  	teq	$zero, $zero <.symtab>
      5c: 12 00 01 00  	<unknown>
      60: 3f 00 00 00  	<unknown>
      64: 78 00 00 80  	lb	$zero, 0x78($zero)
      68: 08 00 00 00  	jr	$zero
      6c: 12 00 01 00  	<unknown>
      70: 14 00 00 00  	<unknown>
      74: 80 00 00 80  	lb	$zero, 0x80($zero)
      78: 08 00 00 00  	jr	$zero
      7c: 12 00 01 00  	<unknown>
      80: 25 00 00 00  	move	$zero, $zero
      84: 88 00 00 80  	lb	$zero, 0x88($zero)
      88: 94 00 00 00  	<unknown>
      8c: 12 00 01 00  	<unknown>
      90: 2a 00 00 00  	slt	$zero, $zero, $zero
      94: 20 01 00 80  	lb	$zero, 0x120($zero)
      98: 0a 00 00 00  	movz	$zero, $zero, $zero
      9c: 11 00 02 00  	<unknown>
      a0: 0e 00 00 00  	<unknown>
      a4: 00 00 00 80  	lb	$zero, 0x0($zero)
      a8: 00 00 00 00  	nop <.symtab>
      ac: 10 00 01 00  	<unknown>

Disassembly of section .shstrtab:

00000000 <.shstrtab>:
       0: 00 2e 74 65  	<unknown>
       4: 78 74 00 2e  	sltiu	$zero, $16, 0x7478 <.symtab+0x7478>
       8: 73 68 73 74  	jalx	0x1cda1cc <.symtab+0x1cda1cc>
       c: 72 74 61 62  	<unknown>
      10: 00 2e 73 74  	jalx	0x1ccb800 <.symtab+0x1ccb800>
      14: 72 74 61 62  	<unknown>
      18: 00 2e 73 79  	<unknown>
      1c: 6d 74 61 62  	<unknown>
      20: 00 2e 64 61  	<unknown>
      24: 74           	<unknown>
      25: 61           	<unknown>
      26: 00           	<unknown>

Disassembly of section .strtab:

00000000 <.strtab>:
       0: 00 73 65 67  	<unknown>
       4: 37 53 77 00  	<unknown>
       8: 70 72 69 6e  	<unknown>
       c: 74 00 5f 69  	<unknown>
      10: 6e 69 74 00  	<unknown>
      14: 64 65 6c 61  	<unknown>
      18: 79 5f 6d 73  	<unknown>
      1c: 00 65 6e 64  	<unknown>
      20: 4c 6f 6f 70  	<unknown>
      24: 00 6d 61 69  	<unknown>
      28: 6e 00 73 65  	<unknown>
      2c: 67 00 73 65  	<unknown>
      30: 67 74 65 73  	<unknown>
      34: 74 2e 63 00  	teq	$3, $3, 0xb9 <.symtab+0xb9>
      38: 73 65 67 37  	ori	$7, $27, 0x6573 <.symtab+0x6573>
      3c: 53 62 00 64  	<unknown>
      40: 65 6c 61 79  	<unknown>
      44: 5f 31 4b 00  	<unknown>
