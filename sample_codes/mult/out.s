
dtmp:	file format elf32-mips

Disassembly of section .text:

80000000 <_init>:
80000000: 00 30 1d 24  	addiu	$sp, $zero, 0x3000 <main+0x2fd4>
80000004: 0b 00 00 0c  	jal	0x2c <main>
80000008: 00 00 00 00  	nop <_init>

8000000c <endLoop>:
8000000c: 03 00 00 08  	j	0xc <endLoop>
80000010: 00 00 00 00  	nop <_init>
80000014: 01 00 17 04  	<unknown>
80000018: 01 00 17 04  	<unknown>
8000001c: 01 00 17 04  	<unknown>

80000020 <print>:
80000020: 00 80 01 34  	ori	$1, $zero, 0x8000 <main+0x7fd4>
80000024: 08 00 e0 03  	jr	$ra
80000028: 00 00 24 ac  	sw	$4, 0x0($1)

8000002c <main>:
8000002c: 00 80 01 34  	ori	$1, $zero, 0x8000 <main+0x7fd4>
80000030: 02 00 02 24  	addiu	$2, $zero, 0x2 <_init+0x2>
80000034: 00 00 22 ac  	sw	$2, 0x0($1)
80000038: 04 00 02 24  	addiu	$2, $zero, 0x4 <_init+0x4>
8000003c: 00 00 22 ac  	sw	$2, 0x0($1)
80000040: 10 00 02 24  	addiu	$2, $zero, 0x10 <endLoop+0x4>
80000044: 00 00 22 ac  	sw	$2, 0x0($1)
80000048: 08 00 e0 03  	jr	$ra
8000004c: 00 00 02 24  	addiu	$2, $zero, 0x0 <_init>

Disassembly of section .symtab:

00000000 <.symtab>:
		...
      10: 1a 00 00 00  	div	$zero, $zero, $zero
		...
      1c: 04 00 f1 ff  	<unknown>
      20: 0d 00 00 00  	break <.symtab>
      24: 0c 00 00 80  	lb	$zero, 0xc($zero)
      28: 00 00 00 00  	nop <.symtab>
      2c: 00 00 01 00  	sll	$zero, $1, 0x0 <.symtab>
      30: 01 00 00 00  	movf	$zero, $zero, $fcc0
      34: 20 00 00 80  	lb	$zero, 0x20($zero)
      38: 0c 00 00 00  	syscall <.symtab>
      3c: 12 00 01 00  	<unknown>
      40: 15 00 00 00  	<unknown>
      44: 2c 00 00 80  	lb	$zero, 0x2c($zero)
      48: 24 00 00 00  	and	$zero, $zero, $zero
      4c: 12 00 01 00  	<unknown>
      50: 07 00 00 00  	srav	$zero, $zero, $zero
      54: 00 00 00 80  	lb	$zero, 0x0($zero)
      58: 00 00 00 00  	nop <.symtab>
      5c: 10 00 01 00  	<unknown>

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
      20: 00           	<unknown>

Disassembly of section .strtab:

00000000 <.strtab>:
       0: 00 70 72 69  	<unknown>
       4: 6e 74 00 5f  	bgtzl	$24, 0x1d1c0 <.symtab+0x1d1c0>
       8: 69 6e 69 74  	jalx	0x1a5b9a4 <.symtab+0x1a5b9a4>
       c: 00 65 6e 64  	<unknown>
      10: 4c 6f 6f 70  	<unknown>
      14: 00 6d 61 69  	<unknown>
      18: 6e 00 6d 75  	jalx	0x5b401b8 <.symtab+0x5b401b8>
      1c: 6c 74 2e 63  	<unknown>
      20: 00           	<unknown>
