
tmp:	file format elf32-mips

Disassembly of section .MIPS.abiflags:

00000000 <.MIPS.abiflags>:
       0: 00 00 02 00  	sll	$zero, $2, 0x0 <.MIPS.abiflags>
       4: 01 01 00 05  	bltz	$8, 0x40c
		...

Disassembly of section .reginfo:

00000018 <.reginfo>:
      18: 3d 1f ef 80  	lb	$15, 0x1f3d($7)
		...
      2c: b0 8c 00 80  	lb	$zero, -0x7350($zero)

Disassembly of section .text:

80000000 <_start>:
80000000: 07 00 00 10  	b	0x80000020 <fib>
80000004: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>

80000008 <info>:
80000008: 46 69 62 20  	addi	$2, $3, 0x6946
8000000c: 46 69 6e 69  	<unknown>
80000010: 73 68 2e 00  	tltu	$1, $14, 0x1a1 <addi+0x55>

80000014 <feed>:
80000014: 41 6c 6c 20  	addi	$12, $3, 0x6c41
80000018: 50 41 53 53  	beql	$26, $19, 0x8001055c
8000001c: 21 00 00 00  	move	$zero, $zero

80000020 <fib>:
80000020: 01 00 08 34  	ori	$8, $zero, 0x1 <_start+0x1>
80000024: 01 00 09 34  	ori	$9, $zero, 0x1 <_start+0x1>
80000028: 40 80 04 3c  	lui	$4, 0x8040
8000002c: 00 01 8c 24  	addiu	$12, $4, 0x100 <add+0x40>

80000030 <loop0>:
80000030: 21 50 09 01  	addu	$10, $8, $9
80000034: 00 00 28 35  	ori	$8, $9, 0x0 <_start>
80000038: 00 00 49 35  	ori	$9, $10, 0x0 <_start>
8000003c: 00 00 89 ac  	sw	$9, 0x0($4)
80000040: 00 00 8b 8c  	lw	$11, 0x0($4)
80000044: 1b 03 2b 15  	bne	$9, $11, 0x80000cb4 <end>
80000048: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000004c: 04 00 84 24  	addiu	$4, $4, 0x4 <_start+0x4>
80000050: f7 ff 8c 14  	bne	$4, $12, 0x80000030 <loop0>
80000054: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>

80000058 <WRITESERIAL>:
80000058: 00 80 10 3c  	lui	$16, 0x8000
8000005c: 08 00 10 26  	addiu	$16, $16, 0x8 <info>
80000060: 00 00 04 82  	lb	$4, 0x0($16)
80000064: d0 bf 11 3c  	lui	$17, 0xbfd0

80000068 <loop1>:
80000068: 01 00 10 26  	addiu	$16, $16, 0x1 <_start+0x1>

8000006c <.TESTW>:
8000006c: fc 03 28 82  	lb	$8, 0x3fc($17)
80000070: 01 00 08 31  	andi	$8, $8, 0x1 <_start+0x1>
80000074: fd ff 00 11  	beqz	$8, 0x8000006c <.TESTW>
80000078: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000007c: f8 03 24 a2  	sb	$4, 0x3f8($17)
80000080: 00 00 04 82  	lb	$4, 0x0($16)
80000084: f8 ff 80 14  	bnez	$4, 0x80000068 <loop1>
80000088: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>

8000008c <READSERIAL>:
8000008c: fc 03 28 82  	lb	$8, 0x3fc($17)
80000090: 02 00 08 31  	andi	$8, $8, 0x2 <_start+0x2>
80000094: fd ff 00 11  	beqz	$8, 0x8000008c <READSERIAL>
80000098: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000009c: f8 03 24 82  	lb	$4, 0x3f8($17)
800000a0: 54 00 08 34  	ori	$8, $zero, 0x54 <loop0+0x24>
800000a4: f9 ff 88 14  	bne	$4, $8, 0x8000008c <READSERIAL>
800000a8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>

800000ac <RANDOMTEST>:
800000ac: 40 80 10 3c  	lui	$16, 0x8040
800000b0: 00 01 10 36  	ori	$16, $16, 0x100 <add+0x40>
800000b4: 00 00 11 24  	addiu	$17, $zero, 0x0 <_start>
800000b8: 04 00 12 8e  	lw	$18, 0x4($16)
800000bc: 08 00 13 8e  	lw	$19, 0x8($16)

800000c0 <add>:
800000c0: 01 00 48 32  	andi	$8, $18, 0x1 <_start+0x1>
800000c4: 21 00 00 11  	beqz	$8, 0x8000014c <addi>
800000c8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800000cc: cd bc 08 3c  	lui	$8, 0xbccd
800000d0: c8 54 08 35  	ori	$8, $8, 0x54c8
800000d4: 2c 0a 09 3c  	lui	$9, 0xa2c <blez+0x128>
800000d8: 14 3b 29 35  	ori	$9, $9, 0x3b14
800000dc: f9 c6 03 3c  	lui	$3, 0xc6f9
800000e0: dc 8f 63 34  	ori	$3, $3, 0x8fdc
800000e4: 20 10 09 01  	add	$2, $8, $9
800000e8: 18 00 43 14  	bne	$2, $3, 0x8000014c <addi>
800000ec: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800000f0: f0 95 08 3c  	lui	$8, 0x95f0
800000f4: b0 c7 08 35  	ori	$8, $8, 0xc7b0
800000f8: 00 00 09 24  	addiu	$9, $zero, 0x0 <_start>
800000fc: f0 95 03 3c  	lui	$3, 0x95f0
80000100: b0 c7 63 34  	ori	$3, $3, 0xc7b0
80000104: 20 10 09 01  	add	$2, $8, $9
80000108: 10 00 43 14  	bne	$2, $3, 0x8000014c <addi>
8000010c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000110: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
80000114: 70 6e 09 3c  	lui	$9, 0x6e70
80000118: 70 1f 29 35  	ori	$9, $9, 0x1f70
8000011c: 70 6e 03 3c  	lui	$3, 0x6e70
80000120: 70 1f 63 34  	ori	$3, $3, 0x1f70
80000124: 20 10 09 01  	add	$2, $8, $9
80000128: 08 00 43 14  	bne	$2, $3, 0x8000014c <addi>
8000012c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000130: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
80000134: 00 00 09 24  	addiu	$9, $zero, 0x0 <_start>
80000138: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
8000013c: 20 10 09 01  	add	$2, $8, $9
80000140: 02 00 43 14  	bne	$2, $3, 0x8000014c <addi>
80000144: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000148: 01 00 31 36  	ori	$17, $17, 0x1 <_start+0x1>

8000014c <addi>:
8000014c: 02 00 48 32  	andi	$8, $18, 0x2 <_start+0x2>
80000150: 1a 00 00 11  	beqz	$8, 0x800001bc <sub>
80000154: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000158: bf bc 08 3c  	lui	$8, 0xbcbf
8000015c: e0 db 08 35  	ori	$8, $8, 0xdbe0
80000160: bf bc 03 3c  	lui	$3, 0xbcbf
80000164: a0 d2 63 34  	ori	$3, $3, 0xd2a0
80000168: c0 f6 02 21  	addi	$2, $8, -0x940 <.reginfo+0x7ffff6a8>
8000016c: 13 00 43 14  	bne	$2, $3, 0x800001bc <sub>
80000170: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000174: 3b d3 08 3c  	lui	$8, 0xd33b
80000178: eb 01 08 35  	ori	$8, $8, 0x1eb <sub+0x2f>
8000017c: 3b d3 03 3c  	lui	$3, 0xd33b
80000180: eb 01 63 34  	ori	$3, $3, 0x1eb <sub+0x2f>
80000184: 00 00 02 21  	addi	$2, $8, 0x0 <_start>
80000188: 0c 00 43 14  	bne	$2, $3, 0x800001bc <sub>
8000018c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000190: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
80000194: 0c 3e 03 24  	addiu	$3, $zero, 0x3e0c
80000198: 0c 3e 02 21  	addi	$2, $8, 0x3e0c
8000019c: 07 00 43 14  	bne	$2, $3, 0x800001bc <sub>
800001a0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800001a4: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
800001a8: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
800001ac: 00 00 02 21  	addi	$2, $8, 0x0 <_start>
800001b0: 02 00 43 14  	bne	$2, $3, 0x800001bc <sub>
800001b4: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800001b8: 02 00 31 36  	ori	$17, $17, 0x2 <_start+0x2>

800001bc <sub>:
800001bc: 04 00 48 32  	andi	$8, $18, 0x4 <_start+0x4>
800001c0: 21 00 00 11  	beqz	$8, 0x80000248 <sub_next>
800001c4: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800001c8: 63 08 08 3c  	lui	$8, 0x863 <jalr_next+0x123>
800001cc: 94 54 08 35  	ori	$8, $8, 0x5494
800001d0: b5 9e 09 3c  	lui	$9, 0x9eb5
800001d4: 6c 1e 29 35  	ori	$9, $9, 0x1e6c
800001d8: ae 69 03 3c  	lui	$3, 0x69ae
800001dc: 28 36 63 34  	ori	$3, $3, 0x3628
800001e0: 22 10 09 01  	sub	$2, $8, $9
800001e4: 18 00 43 14  	bne	$2, $3, 0x80000248 <sub_next>
800001e8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800001ec: bd 93 08 3c  	lui	$8, 0x93bd
800001f0: a8 45 08 35  	ori	$8, $8, 0x45a8
800001f4: 00 00 09 24  	addiu	$9, $zero, 0x0 <_start>
800001f8: bd 93 03 3c  	lui	$3, 0x93bd
800001fc: a8 45 63 34  	ori	$3, $3, 0x45a8
80000200: 22 10 09 01  	sub	$2, $8, $9
80000204: 10 00 43 14  	bne	$2, $3, 0x80000248 <sub_next>
80000208: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000020c: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
80000210: e5 d2 09 3c  	lui	$9, 0xd2e5
80000214: 39 4c 29 35  	ori	$9, $9, 0x4c39
80000218: 1a 2d 03 3c  	lui	$3, 0x2d1a
8000021c: c7 b3 63 34  	ori	$3, $3, 0xb3c7
80000220: 22 10 09 01  	sub	$2, $8, $9
80000224: 08 00 43 14  	bne	$2, $3, 0x80000248 <sub_next>
80000228: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000022c: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
80000230: 00 00 09 24  	addiu	$9, $zero, 0x0 <_start>
80000234: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000238: 22 10 09 01  	sub	$2, $8, $9
8000023c: 02 00 43 14  	bne	$2, $3, 0x80000248 <sub_next>
80000240: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000244: 04 00 31 36  	ori	$17, $17, 0x4 <_start+0x4>

80000248 <sub_next>:
80000248: 08 00 48 32  	andi	$8, $18, 0x8 <info>
8000024c: 1e 00 00 11  	beqz	$8, 0x800002c8 <slt_next>
80000250: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000254: ea 77 08 3c  	lui	$8, 0x77ea
80000258: d8 82 08 35  	ori	$8, $8, 0x82d8
8000025c: 3d 27 09 3c  	lui	$9, 0x273d
80000260: 80 a0 29 35  	ori	$9, $9, 0xa080
80000264: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000268: 2a 10 09 01  	slt	$2, $8, $9
8000026c: 16 00 43 14  	bne	$2, $3, 0x800002c8 <slt_next>
80000270: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000274: 1e 5d 08 3c  	lui	$8, 0x5d1e
80000278: 94 b4 08 35  	ori	$8, $8, 0xb494
8000027c: 00 00 09 24  	addiu	$9, $zero, 0x0 <_start>
80000280: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000284: 2a 10 09 01  	slt	$2, $8, $9
80000288: 0f 00 43 14  	bne	$2, $3, 0x800002c8 <slt_next>
8000028c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000290: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
80000294: aa 1e 09 3c  	lui	$9, 0x1eaa
80000298: e3 c5 29 35  	ori	$9, $9, 0xc5e3
8000029c: 01 00 03 24  	addiu	$3, $zero, 0x1 <_start+0x1>
800002a0: 2a 10 09 01  	slt	$2, $8, $9
800002a4: 08 00 43 14  	bne	$2, $3, 0x800002c8 <slt_next>
800002a8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800002ac: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
800002b0: 00 00 09 24  	addiu	$9, $zero, 0x0 <_start>
800002b4: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
800002b8: 2a 10 09 01  	slt	$2, $8, $9
800002bc: 02 00 43 14  	bne	$2, $3, 0x800002c8 <slt_next>
800002c0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800002c4: 08 00 31 36  	ori	$17, $17, 0x8 <info>

800002c8 <slt_next>:
800002c8: 10 00 48 32  	andi	$8, $18, 0x10 <info+0x8>
800002cc: 1d 00 00 11  	beqz	$8, 0x80000344 <srav>
800002d0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800002d4: 96 1b 08 3c  	lui	$8, 0x1b96
800002d8: c3 90 08 35  	ori	$8, $8, 0x90c3
800002dc: 1b 00 09 24  	addiu	$9, $zero, 0x1b <feed+0x7>
800002e0: 00 18 03 3c  	lui	$3, 0x1800
800002e4: 04 10 28 01  	sllv	$2, $8, $9
800002e8: 16 00 43 14  	bne	$2, $3, 0x80000344 <srav>
800002ec: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800002f0: 9f 99 08 3c  	lui	$8, 0x999f
800002f4: 40 f1 08 35  	ori	$8, $8, 0xf140
800002f8: 00 00 09 24  	addiu	$9, $zero, 0x0 <_start>
800002fc: 9f 99 03 3c  	lui	$3, 0x999f
80000300: 40 f1 63 34  	ori	$3, $3, 0xf140
80000304: 04 10 28 01  	sllv	$2, $8, $9
80000308: 0e 00 43 14  	bne	$2, $3, 0x80000344 <srav>
8000030c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000310: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
80000314: 01 00 09 24  	addiu	$9, $zero, 0x1 <_start+0x1>
80000318: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
8000031c: 04 10 28 01  	sllv	$2, $8, $9
80000320: 08 00 43 14  	bne	$2, $3, 0x80000344 <srav>
80000324: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000328: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
8000032c: 00 00 09 24  	addiu	$9, $zero, 0x0 <_start>
80000330: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000334: 04 10 28 01  	sllv	$2, $8, $9
80000338: 02 00 43 14  	bne	$2, $3, 0x80000344 <srav>
8000033c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000340: 10 00 31 36  	ori	$17, $17, 0x10 <info+0x8>

80000344 <srav>:
80000344: 20 00 48 32  	andi	$8, $18, 0x20 <fib>
80000348: 1e 00 00 11  	beqz	$8, 0x800003c4 <srav_next>
8000034c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000350: ba db 08 3c  	lui	$8, 0xdbba
80000354: b0 d0 08 35  	ori	$8, $8, 0xd0b0
80000358: 05 00 09 24  	addiu	$9, $zero, 0x5 <_start+0x5>
8000035c: dd fe 03 3c  	lui	$3, 0xfedd
80000360: 85 d6 63 34  	ori	$3, $3, 0xd685
80000364: 07 10 28 01  	srav	$2, $8, $9
80000368: 16 00 43 14  	bne	$2, $3, 0x800003c4 <srav_next>
8000036c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000370: 24 0b 08 3c  	lui	$8, 0xb24 <bltz+0x5c>
80000374: 60 d5 08 35  	ori	$8, $8, 0xd560
80000378: 00 00 09 24  	addiu	$9, $zero, 0x0 <_start>
8000037c: 24 0b 03 3c  	lui	$3, 0xb24 <bltz+0x5c>
80000380: 60 d5 63 34  	ori	$3, $3, 0xd560
80000384: 07 10 28 01  	srav	$2, $8, $9
80000388: 0e 00 43 14  	bne	$2, $3, 0x800003c4 <srav_next>
8000038c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000390: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
80000394: 12 00 09 24  	addiu	$9, $zero, 0x12 <info+0xa>
80000398: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
8000039c: 07 10 28 01  	srav	$2, $8, $9
800003a0: 08 00 43 14  	bne	$2, $3, 0x800003c4 <srav_next>
800003a4: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800003a8: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
800003ac: 00 00 09 24  	addiu	$9, $zero, 0x0 <_start>
800003b0: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
800003b4: 07 10 28 01  	srav	$2, $8, $9
800003b8: 02 00 43 14  	bne	$2, $3, 0x800003c4 <srav_next>
800003bc: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800003c0: 20 00 31 36  	ori	$17, $17, 0x20 <fib>

800003c4 <srav_next>:
800003c4: 40 00 48 32  	andi	$8, $18, 0x40 <loop0+0x10>
800003c8: 19 00 00 11  	beqz	$8, 0x80000430 <srlv>
800003cc: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800003d0: bf b3 08 3c  	lui	$8, 0xb3bf
800003d4: f8 7e 08 35  	ori	$8, $8, 0x7ef8
800003d8: fb ff 03 24  	addiu	$3, $zero, -0x5 <.reginfo+0x7fffffe3>
800003dc: 03 17 08 00  	sra	$2, $8, 0x1c <feed+0x8>
800003e0: 13 00 43 14  	bne	$2, $3, 0x80000430 <srlv>
800003e4: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800003e8: 79 7f 08 3c  	lui	$8, 0x7f79
800003ec: 19 7f 08 35  	ori	$8, $8, 0x7f19
800003f0: 79 7f 03 3c  	lui	$3, 0x7f79
800003f4: 19 7f 63 34  	ori	$3, $3, 0x7f19
800003f8: 03 10 08 00  	sra	$2, $8, 0x0 <_start>
800003fc: 0c 00 43 14  	bne	$2, $3, 0x80000430 <srlv>
80000400: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000404: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
80000408: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
8000040c: 83 15 08 00  	sra	$2, $8, 0x16 <feed+0x2>
80000410: 07 00 43 14  	bne	$2, $3, 0x80000430 <srlv>
80000414: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000418: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
8000041c: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000420: 03 10 08 00  	sra	$2, $8, 0x0 <_start>
80000424: 02 00 43 14  	bne	$2, $3, 0x80000430 <srlv>
80000428: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000042c: 40 00 31 36  	ori	$17, $17, 0x40 <loop0+0x10>

80000430 <srlv>:
80000430: 80 00 48 32  	andi	$8, $18, 0x80 <.TESTW+0x14>
80000434: 1e 00 00 11  	beqz	$8, 0x800004b0 <srlv_next>
80000438: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000043c: e5 cf 08 3c  	lui	$8, 0xcfe5
80000440: 57 4c 08 35  	ori	$8, $8, 0x4c57
80000444: 06 00 09 24  	addiu	$9, $zero, 0x6 <_start+0x6>
80000448: 3f 03 03 3c  	lui	$3, 0x33f <slt_next+0x77>
8000044c: 31 95 63 34  	ori	$3, $3, 0x9531
80000450: 06 10 28 01  	srlv	$2, $8, $9
80000454: 16 00 43 14  	bne	$2, $3, 0x800004b0 <srlv_next>
80000458: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000045c: f9 16 08 3c  	lui	$8, 0x16f9
80000460: d8 a9 08 35  	ori	$8, $8, 0xa9d8
80000464: 00 00 09 24  	addiu	$9, $zero, 0x0 <_start>
80000468: f9 16 03 3c  	lui	$3, 0x16f9
8000046c: d8 a9 63 34  	ori	$3, $3, 0xa9d8
80000470: 06 10 28 01  	srlv	$2, $8, $9
80000474: 0e 00 43 14  	bne	$2, $3, 0x800004b0 <srlv_next>
80000478: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000047c: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
80000480: 0c 00 09 24  	addiu	$9, $zero, 0xc <info+0x4>
80000484: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000488: 06 10 28 01  	srlv	$2, $8, $9
8000048c: 08 00 43 14  	bne	$2, $3, 0x800004b0 <srlv_next>
80000490: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000494: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
80000498: 00 00 09 24  	addiu	$9, $zero, 0x0 <_start>
8000049c: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
800004a0: 06 10 28 01  	srlv	$2, $8, $9
800004a4: 02 00 43 14  	bne	$2, $3, 0x800004b0 <srlv_next>
800004a8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800004ac: 80 00 31 36  	ori	$17, $17, 0x80 <.TESTW+0x14>

800004b0 <srlv_next>:
800004b0: 00 01 48 32  	andi	$8, $18, 0x100 <add+0x40>
800004b4: a2 00 00 11  	beqz	$8, 0x80000740 <jalr_next>
800004b8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800004bc: 21 b8 1f 00  	addu	$23, $zero, $ra
800004c0: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
800004c4: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
800004c8: 00 80 08 3c  	lui	$8, 0x8000
800004cc: e0 04 08 25  	addiu	$8, $8, 0x4e0 <srlv_next+0x30>
800004d0: 00 80 09 3c  	lui	$9, 0x8000
800004d4: 0c 05 29 25  	addiu	$9, $9, 0x50c <srlv_next+0x5c>
800004d8: 08 00 00 10  	b	0x800004fc <srlv_next+0x4c>
800004dc: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800004e0: 21 20 e0 03  	move	$4, $ra
800004e4: 6b 6e 02 3c  	lui	$2, 0x6e6b
800004e8: 2a 36 42 34  	ori	$2, $2, 0x362a
800004ec: 09 f8 20 01  	jalr	$9
800004f0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800004f4: 08 00 00 10  	b	0x80000518 <srlv_next+0x68>
800004f8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800004fc: 09 f8 00 01  	jalr	$8
80000500: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000504: 04 00 00 10  	b	0x80000518 <srlv_next+0x68>
80000508: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000050c: 21 28 e0 03  	move	$5, $ra
80000510: 0b 24 03 3c  	lui	$3, 0x240b
80000514: 26 af 63 34  	ori	$3, $3, 0xaf26
80000518: 21 f8 17 00  	addu	$ra, $zero, $23
8000051c: 6b 6e 15 3c  	lui	$21, 0x6e6b
80000520: 2a 36 b5 36  	ori	$21, $21, 0x362a
80000524: 0b 24 16 3c  	lui	$22, 0x240b
80000528: 26 af d6 36  	ori	$22, $22, 0xaf26
8000052c: 84 00 55 14  	bne	$2, $21, 0x80000740 <jalr_next>
80000530: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000534: 82 00 76 14  	bne	$3, $22, 0x80000740 <jalr_next>
80000538: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000053c: 00 80 15 3c  	lui	$21, 0x8000
80000540: f4 04 b5 26  	addiu	$21, $21, 0x4f4 <srlv_next+0x44>
80000544: 00 80 16 3c  	lui	$22, 0x8000
80000548: 04 05 d6 26  	addiu	$22, $22, 0x504 <srlv_next+0x54>
8000054c: 7c 00 96 14  	bne	$4, $22, 0x80000740 <jalr_next>
80000550: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000554: 7a 00 b5 14  	bne	$5, $21, 0x80000740 <jalr_next>
80000558: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000055c: 21 b8 1f 00  	addu	$23, $zero, $ra
80000560: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
80000564: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000568: 00 80 08 3c  	lui	$8, 0x8000
8000056c: 80 05 08 25  	addiu	$8, $8, 0x580 <srlv_next+0xd0>
80000570: 00 80 09 3c  	lui	$9, 0x8000
80000574: ac 05 29 25  	addiu	$9, $9, 0x5ac <srlv_next+0xfc>
80000578: 08 00 00 10  	b	0x8000059c <srlv_next+0xec>
8000057c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000580: 21 20 e0 03  	move	$4, $ra
80000584: 0f 5d 02 3c  	lui	$2, 0x5d0f
80000588: c0 cb 42 34  	ori	$2, $2, 0xcbc0
8000058c: 09 f8 20 01  	jalr	$9
80000590: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000594: 08 00 00 10  	b	0x800005b8 <srlv_next+0x108>
80000598: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000059c: 09 f8 00 01  	jalr	$8
800005a0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800005a4: 04 00 00 10  	b	0x800005b8 <srlv_next+0x108>
800005a8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800005ac: 21 28 e0 03  	move	$5, $ra
800005b0: a3 db 03 3c  	lui	$3, 0xdba3
800005b4: 64 ac 63 34  	ori	$3, $3, 0xac64
800005b8: 21 f8 17 00  	addu	$ra, $zero, $23
800005bc: 0f 5d 15 3c  	lui	$21, 0x5d0f
800005c0: c0 cb b5 36  	ori	$21, $21, 0xcbc0
800005c4: a3 db 16 3c  	lui	$22, 0xdba3
800005c8: 64 ac d6 36  	ori	$22, $22, 0xac64
800005cc: 5c 00 55 14  	bne	$2, $21, 0x80000740 <jalr_next>
800005d0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800005d4: 5a 00 76 14  	bne	$3, $22, 0x80000740 <jalr_next>
800005d8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800005dc: 00 80 15 3c  	lui	$21, 0x8000
800005e0: 94 05 b5 26  	addiu	$21, $21, 0x594 <srlv_next+0xe4>
800005e4: 00 80 16 3c  	lui	$22, 0x8000
800005e8: a4 05 d6 26  	addiu	$22, $22, 0x5a4 <srlv_next+0xf4>
800005ec: 54 00 96 14  	bne	$4, $22, 0x80000740 <jalr_next>
800005f0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800005f4: 52 00 b5 14  	bne	$5, $21, 0x80000740 <jalr_next>
800005f8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800005fc: 21 b8 1f 00  	addu	$23, $zero, $ra
80000600: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
80000604: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000608: 00 80 08 3c  	lui	$8, 0x8000
8000060c: 20 06 08 25  	addiu	$8, $8, 0x620 <srlv_next+0x170>
80000610: 00 80 09 3c  	lui	$9, 0x8000
80000614: 4c 06 29 25  	addiu	$9, $9, 0x64c <srlv_next+0x19c>
80000618: 08 00 00 10  	b	0x8000063c <srlv_next+0x18c>
8000061c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000620: 21 20 e0 03  	move	$4, $ra
80000624: 32 a8 02 3c  	lui	$2, 0xa832
80000628: 00 bb 42 34  	ori	$2, $2, 0xbb00
8000062c: 09 f8 20 01  	jalr	$9
80000630: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000634: 08 00 00 10  	b	0x80000658 <srlv_next+0x1a8>
80000638: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000063c: 09 f8 00 01  	jalr	$8
80000640: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000644: 04 00 00 10  	b	0x80000658 <srlv_next+0x1a8>
80000648: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000064c: 21 28 e0 03  	move	$5, $ra
80000650: 3f f4 03 3c  	lui	$3, 0xf43f
80000654: 20 a6 63 34  	ori	$3, $3, 0xa620
80000658: 21 f8 17 00  	addu	$ra, $zero, $23
8000065c: 32 a8 15 3c  	lui	$21, 0xa832
80000660: 00 bb b5 36  	ori	$21, $21, 0xbb00
80000664: 3f f4 16 3c  	lui	$22, 0xf43f
80000668: 20 a6 d6 36  	ori	$22, $22, 0xa620
8000066c: 34 00 55 14  	bne	$2, $21, 0x80000740 <jalr_next>
80000670: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000674: 32 00 76 14  	bne	$3, $22, 0x80000740 <jalr_next>
80000678: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000067c: 00 80 15 3c  	lui	$21, 0x8000
80000680: 34 06 b5 26  	addiu	$21, $21, 0x634 <srlv_next+0x184>
80000684: 00 80 16 3c  	lui	$22, 0x8000
80000688: 44 06 d6 26  	addiu	$22, $22, 0x644 <srlv_next+0x194>
8000068c: 2c 00 96 14  	bne	$4, $22, 0x80000740 <jalr_next>
80000690: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000694: 2a 00 b5 14  	bne	$5, $21, 0x80000740 <jalr_next>
80000698: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000069c: 21 b8 1f 00  	addu	$23, $zero, $ra
800006a0: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
800006a4: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
800006a8: 00 80 08 3c  	lui	$8, 0x8000
800006ac: c0 06 08 25  	addiu	$8, $8, 0x6c0 <srlv_next+0x210>
800006b0: 00 80 09 3c  	lui	$9, 0x8000
800006b4: ec 06 29 25  	addiu	$9, $9, 0x6ec <srlv_next+0x23c>
800006b8: 08 00 00 10  	b	0x800006dc <srlv_next+0x22c>
800006bc: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800006c0: 21 20 e0 03  	move	$4, $ra
800006c4: 2a 1e 02 3c  	lui	$2, 0x1e2a
800006c8: ca a5 42 34  	ori	$2, $2, 0xa5ca
800006cc: 09 f8 20 01  	jalr	$9
800006d0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800006d4: 08 00 00 10  	b	0x800006f8 <srlv_next+0x248>
800006d8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800006dc: 09 f8 00 01  	jalr	$8
800006e0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800006e4: 04 00 00 10  	b	0x800006f8 <srlv_next+0x248>
800006e8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800006ec: 21 28 e0 03  	move	$5, $ra
800006f0: 82 47 03 3c  	lui	$3, 0x4782
800006f4: 22 fd 63 34  	ori	$3, $3, 0xfd22
800006f8: 21 f8 17 00  	addu	$ra, $zero, $23
800006fc: 2a 1e 15 3c  	lui	$21, 0x1e2a
80000700: ca a5 b5 36  	ori	$21, $21, 0xa5ca
80000704: 82 47 16 3c  	lui	$22, 0x4782
80000708: 22 fd d6 36  	ori	$22, $22, 0xfd22
8000070c: 0c 00 55 14  	bne	$2, $21, 0x80000740 <jalr_next>
80000710: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000714: 0a 00 76 14  	bne	$3, $22, 0x80000740 <jalr_next>
80000718: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000071c: 00 80 15 3c  	lui	$21, 0x8000
80000720: d4 06 b5 26  	addiu	$21, $21, 0x6d4 <srlv_next+0x224>
80000724: 00 80 16 3c  	lui	$22, 0x8000
80000728: e4 06 d6 26  	addiu	$22, $22, 0x6e4 <srlv_next+0x234>
8000072c: 04 00 96 14  	bne	$4, $22, 0x80000740 <jalr_next>
80000730: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000734: 02 00 b5 14  	bne	$5, $21, 0x80000740 <jalr_next>
80000738: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000073c: 00 01 31 36  	ori	$17, $17, 0x100 <add+0x40>

80000740 <jalr_next>:
80000740: 00 02 48 32  	andi	$8, $18, 0x200 <sub+0x44>
80000744: 6f 00 00 11  	beqz	$8, 0x80000904 <blez>
80000748: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000074c: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
80000750: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000754: 08 00 00 10  	b	0x80000778 <jalr_next+0x38>
80000758: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000075c: 15 1b 02 3c  	lui	$2, 0x1b15
80000760: 5e 1f 42 34  	ori	$2, $2, 0x1f5e
80000764: 0b 00 01 05  	bgez	$8, 0x80000794 <jalr_next+0x54>
80000768: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000076c: 0b 00 00 10  	b	0x8000079c <jalr_next+0x5c>
80000770: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000774: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000778: 00 bb 08 3c  	lui	$8, 0xbb00
8000077c: 0a 13 08 35  	ori	$8, $8, 0x130a
80000780: f6 ff 01 05  	bgez	$8, 0x8000075c <jalr_next+0x1c>
80000784: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000788: 04 00 00 10  	b	0x8000079c <jalr_next+0x5c>
8000078c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000790: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000794: 69 0e 03 3c  	lui	$3, 0xe69
80000798: ba 29 63 34  	ori	$3, $3, 0x29ba
8000079c: 00 00 15 24  	addiu	$21, $zero, 0x0 <_start>
800007a0: 00 00 16 24  	addiu	$22, $zero, 0x0 <_start>
800007a4: 57 00 55 14  	bne	$2, $21, 0x80000904 <blez>
800007a8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800007ac: 55 00 76 14  	bne	$3, $22, 0x80000904 <blez>
800007b0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800007b4: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
800007b8: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
800007bc: 08 00 00 10  	b	0x800007e0 <jalr_next+0xa0>
800007c0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800007c4: 20 40 02 3c  	lui	$2, 0x4020
800007c8: 52 bf 42 34  	ori	$2, $2, 0xbf52
800007cc: 0b 00 01 05  	bgez	$8, 0x800007fc <jalr_next+0xbc>
800007d0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800007d4: 0b 00 00 10  	b	0x80000804 <jalr_next+0xc4>
800007d8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800007dc: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800007e0: f2 44 08 3c  	lui	$8, 0x44f2
800007e4: f4 bf 08 35  	ori	$8, $8, 0xbff4
800007e8: f6 ff 01 05  	bgez	$8, 0x800007c4 <jalr_next+0x84>
800007ec: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800007f0: 04 00 00 10  	b	0x80000804 <jalr_next+0xc4>
800007f4: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800007f8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800007fc: fb 4e 03 3c  	lui	$3, 0x4efb
80000800: d3 06 63 34  	ori	$3, $3, 0x6d3 <srlv_next+0x223>
80000804: 20 40 15 3c  	lui	$21, 0x4020
80000808: 52 bf b5 36  	ori	$21, $21, 0xbf52
8000080c: fb 4e 16 3c  	lui	$22, 0x4efb
80000810: d3 06 d6 36  	ori	$22, $22, 0x6d3 <srlv_next+0x223>
80000814: 3b 00 55 14  	bne	$2, $21, 0x80000904 <blez>
80000818: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000081c: 39 00 76 14  	bne	$3, $22, 0x80000904 <blez>
80000820: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000824: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
80000828: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
8000082c: 08 00 00 10  	b	0x80000850 <jalr_next+0x110>
80000830: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000834: 21 ab 02 3c  	lui	$2, 0xab21
80000838: 88 58 42 34  	ori	$2, $2, 0x5888
8000083c: 0b 00 01 05  	bgez	$8, 0x8000086c <jalr_next+0x12c>
80000840: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000844: 0b 00 00 10  	b	0x80000874 <jalr_next+0x134>
80000848: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000084c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000850: bd 12 08 3c  	lui	$8, 0x12bd
80000854: 28 80 08 35  	ori	$8, $8, 0x8028
80000858: f6 ff 01 05  	bgez	$8, 0x80000834 <jalr_next+0xf4>
8000085c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000860: 04 00 00 10  	b	0x80000874 <jalr_next+0x134>
80000864: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000868: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000086c: ac 55 03 3c  	lui	$3, 0x55ac
80000870: 78 a6 63 34  	ori	$3, $3, 0xa678
80000874: 21 ab 15 3c  	lui	$21, 0xab21
80000878: 88 58 b5 36  	ori	$21, $21, 0x5888
8000087c: ac 55 16 3c  	lui	$22, 0x55ac
80000880: 78 a6 d6 36  	ori	$22, $22, 0xa678
80000884: 1f 00 55 14  	bne	$2, $21, 0x80000904 <blez>
80000888: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000088c: 1d 00 76 14  	bne	$3, $22, 0x80000904 <blez>
80000890: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000894: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
80000898: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
8000089c: 08 00 00 10  	b	0x800008c0 <jalr_next+0x180>
800008a0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800008a4: 13 1f 02 3c  	lui	$2, 0x1f13
800008a8: 00 99 42 34  	ori	$2, $2, 0x9900
800008ac: 0a 00 01 05  	bgez	$8, 0x800008d8 <jalr_next+0x198>
800008b0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800008b4: 0a 00 00 10  	b	0x800008e0 <jalr_next+0x1a0>
800008b8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800008bc: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800008c0: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
800008c4: f7 ff 01 05  	bgez	$8, 0x800008a4 <jalr_next+0x164>
800008c8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800008cc: 04 00 00 10  	b	0x800008e0 <jalr_next+0x1a0>
800008d0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800008d4: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800008d8: 65 af 03 3c  	lui	$3, 0xaf65
800008dc: c4 31 63 34  	ori	$3, $3, 0x31c4
800008e0: 13 1f 15 3c  	lui	$21, 0x1f13
800008e4: 00 99 b5 36  	ori	$21, $21, 0x9900
800008e8: 65 af 16 3c  	lui	$22, 0xaf65
800008ec: c4 31 d6 36  	ori	$22, $22, 0x31c4
800008f0: 04 00 55 14  	bne	$2, $21, 0x80000904 <blez>
800008f4: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800008f8: 02 00 76 14  	bne	$3, $22, 0x80000904 <blez>
800008fc: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000900: 00 02 31 36  	ori	$17, $17, 0x200 <sub+0x44>

80000904 <blez>:
80000904: 00 04 48 32  	andi	$8, $18, 0x400 <srav_next+0x3c>
80000908: 6f 00 00 11  	beqz	$8, 0x80000ac8 <bltz>
8000090c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000910: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
80000914: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000918: 08 00 00 10  	b	0x8000093c <blez+0x38>
8000091c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000920: d0 6a 02 3c  	lui	$2, 0x6ad0
80000924: b8 a0 42 34  	ori	$2, $2, 0xa0b8
80000928: 0b 00 00 19  	blez	$8, 0x80000958 <blez+0x54>
8000092c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000930: 0b 00 00 10  	b	0x80000960 <blez+0x5c>
80000934: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000938: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000093c: b9 95 08 3c  	lui	$8, 0x95b9
80000940: 6f 20 08 35  	ori	$8, $8, 0x206f
80000944: f6 ff 00 19  	blez	$8, 0x80000920 <blez+0x1c>
80000948: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
8000094c: 04 00 00 10  	b	0x80000960 <blez+0x5c>
80000950: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000954: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000958: 08 8f 03 3c  	lui	$3, 0x8f08
8000095c: 03 db 63 34  	ori	$3, $3, 0xdb03
80000960: d0 6a 15 3c  	lui	$21, 0x6ad0
80000964: b8 a0 b5 36  	ori	$21, $21, 0xa0b8
80000968: 08 8f 16 3c  	lui	$22, 0x8f08
8000096c: 03 db d6 36  	ori	$22, $22, 0xdb03
80000970: 55 00 55 14  	bne	$2, $21, 0x80000ac8 <bltz>
80000974: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000978: 53 00 76 14  	bne	$3, $22, 0x80000ac8 <bltz>
8000097c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000980: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
80000984: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000988: 08 00 00 10  	b	0x800009ac <blez+0xa8>
8000098c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000990: 82 c7 02 3c  	lui	$2, 0xc782
80000994: 00 62 42 34  	ori	$2, $2, 0x6200
80000998: 0b 00 00 19  	blez	$8, 0x800009c8 <blez+0xc4>
8000099c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800009a0: 0b 00 00 10  	b	0x800009d0 <blez+0xcc>
800009a4: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800009a8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800009ac: 09 2c 08 3c  	lui	$8, 0x2c09
800009b0: 44 b0 08 35  	ori	$8, $8, 0xb044
800009b4: f6 ff 00 19  	blez	$8, 0x80000990 <blez+0x8c>
800009b8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800009bc: 04 00 00 10  	b	0x800009d0 <blez+0xcc>
800009c0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800009c4: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800009c8: ea 13 03 3c  	lui	$3, 0x13ea
800009cc: 62 27 63 34  	ori	$3, $3, 0x2762
800009d0: 00 00 15 24  	addiu	$21, $zero, 0x0 <_start>
800009d4: 00 00 16 24  	addiu	$22, $zero, 0x0 <_start>
800009d8: 3b 00 55 14  	bne	$2, $21, 0x80000ac8 <bltz>
800009dc: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800009e0: 39 00 76 14  	bne	$3, $22, 0x80000ac8 <bltz>
800009e4: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800009e8: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
800009ec: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
800009f0: 08 00 00 10  	b	0x80000a14 <blez+0x110>
800009f4: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
800009f8: 86 ea 02 3c  	lui	$2, 0xea86
800009fc: 00 7f 42 34  	ori	$2, $2, 0x7f00
80000a00: 0b 00 00 19  	blez	$8, 0x80000a30 <blez+0x12c>
80000a04: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000a08: 0b 00 00 10  	b	0x80000a38 <blez+0x134>
80000a0c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000a10: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000a14: b5 da 08 3c  	lui	$8, 0xdab5
80000a18: ac 62 08 35  	ori	$8, $8, 0x62ac
80000a1c: f6 ff 00 19  	blez	$8, 0x800009f8 <blez+0xf4>
80000a20: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000a24: 04 00 00 10  	b	0x80000a38 <blez+0x134>
80000a28: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000a2c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000a30: 76 6d 03 3c  	lui	$3, 0x6d76
80000a34: e5 50 63 34  	ori	$3, $3, 0x50e5
80000a38: 86 ea 15 3c  	lui	$21, 0xea86
80000a3c: 00 7f b5 36  	ori	$21, $21, 0x7f00
80000a40: 76 6d 16 3c  	lui	$22, 0x6d76
80000a44: e5 50 d6 36  	ori	$22, $22, 0x50e5
80000a48: 1f 00 55 14  	bne	$2, $21, 0x80000ac8 <bltz>
80000a4c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000a50: 1d 00 76 14  	bne	$3, $22, 0x80000ac8 <bltz>
80000a54: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000a58: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
80000a5c: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000a60: 08 00 00 10  	b	0x80000a84 <blez+0x180>
80000a64: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000a68: 97 bb 02 3c  	lui	$2, 0xbb97
80000a6c: a0 34 42 34  	ori	$2, $2, 0x34a0
80000a70: 0a 00 00 19  	blez	$8, 0x80000a9c <blez+0x198>
80000a74: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000a78: 0a 00 00 10  	b	0x80000aa4 <blez+0x1a0>
80000a7c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000a80: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000a84: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
80000a88: f7 ff 00 19  	blez	$8, 0x80000a68 <blez+0x164>
80000a8c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000a90: 04 00 00 10  	b	0x80000aa4 <blez+0x1a0>
80000a94: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000a98: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000a9c: 0a ff 03 3c  	lui	$3, 0xff0a
80000aa0: 84 f0 63 34  	ori	$3, $3, 0xf084
80000aa4: 97 bb 15 3c  	lui	$21, 0xbb97
80000aa8: a0 34 b5 36  	ori	$21, $21, 0x34a0
80000aac: 0a ff 16 3c  	lui	$22, 0xff0a
80000ab0: 84 f0 d6 36  	ori	$22, $22, 0xf084
80000ab4: 04 00 55 14  	bne	$2, $21, 0x80000ac8 <bltz>
80000ab8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000abc: 02 00 76 14  	bne	$3, $22, 0x80000ac8 <bltz>
80000ac0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000ac4: 00 04 31 36  	ori	$17, $17, 0x400 <srav_next+0x3c>

80000ac8 <bltz>:
80000ac8: 00 08 48 32  	andi	$8, $18, 0x800 <jalr_next+0xc0>
80000acc: 65 00 00 11  	beqz	$8, 0x80000c64 <bltz_next>
80000ad0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000ad4: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
80000ad8: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000adc: 07 00 00 10  	b	0x80000afc <bltz+0x34>
80000ae0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000ae4: 2f 6a 02 3c  	lui	$2, 0x6a2f
80000ae8: 7c 7d 42 34  	ori	$2, $2, 0x7d7c
80000aec: 09 00 00 05  	bltz	$8, 0x80000b14 <bltz+0x4c>
80000af0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000af4: 09 00 00 10  	b	0x80000b1c <bltz+0x54>
80000af8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000afc: f9 ff 08 3c  	lui	$8, 0xfff9
80000b00: 90 02 08 35  	ori	$8, $8, 0x290 <sub_next+0x48>
80000b04: f7 ff 00 05  	bltz	$8, 0x80000ae4 <bltz+0x1c>
80000b08: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000b0c: 03 00 00 10  	b	0x80000b1c <bltz+0x54>
80000b10: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000b14: 75 c2 03 3c  	lui	$3, 0xc275
80000b18: 82 fd 63 34  	ori	$3, $3, 0xfd82
80000b1c: 2f 6a 15 3c  	lui	$21, 0x6a2f
80000b20: 7c 7d b5 36  	ori	$21, $21, 0x7d7c
80000b24: 75 c2 16 3c  	lui	$22, 0xc275
80000b28: 82 fd d6 36  	ori	$22, $22, 0xfd82
80000b2c: 4d 00 55 14  	bne	$2, $21, 0x80000c64 <bltz_next>
80000b30: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000b34: 4b 00 76 14  	bne	$3, $22, 0x80000c64 <bltz_next>
80000b38: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000b3c: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
80000b40: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000b44: 07 00 00 10  	b	0x80000b64 <bltz+0x9c>
80000b48: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000b4c: 1a 29 02 3c  	lui	$2, 0x291a
80000b50: 74 33 42 34  	ori	$2, $2, 0x3374
80000b54: 09 00 00 05  	bltz	$8, 0x80000b7c <bltz+0xb4>
80000b58: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000b5c: 09 00 00 10  	b	0x80000b84 <bltz+0xbc>
80000b60: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000b64: ae 35 08 3c  	lui	$8, 0x35ae
80000b68: 50 81 08 35  	ori	$8, $8, 0x8150
80000b6c: f7 ff 00 05  	bltz	$8, 0x80000b4c <bltz+0x84>
80000b70: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000b74: 03 00 00 10  	b	0x80000b84 <bltz+0xbc>
80000b78: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000b7c: d2 60 03 3c  	lui	$3, 0x60d2
80000b80: 10 81 63 34  	ori	$3, $3, 0x8110
80000b84: 00 00 15 24  	addiu	$21, $zero, 0x0 <_start>
80000b88: 00 00 16 24  	addiu	$22, $zero, 0x0 <_start>
80000b8c: 35 00 55 14  	bne	$2, $21, 0x80000c64 <bltz_next>
80000b90: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000b94: 33 00 76 14  	bne	$3, $22, 0x80000c64 <bltz_next>
80000b98: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000b9c: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
80000ba0: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000ba4: 07 00 00 10  	b	0x80000bc4 <bltz+0xfc>
80000ba8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000bac: 7d 5f 02 3c  	lui	$2, 0x5f7d
80000bb0: 5f 6c 42 34  	ori	$2, $2, 0x6c5f
80000bb4: 08 00 00 05  	bltz	$8, 0x80000bd8 <bltz+0x110>
80000bb8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000bbc: 08 00 00 10  	b	0x80000be0 <bltz+0x118>
80000bc0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000bc4: 00 00 08 24  	addiu	$8, $zero, 0x0 <_start>
80000bc8: f8 ff 00 05  	bltz	$8, 0x80000bac <bltz+0xe4>
80000bcc: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000bd0: 03 00 00 10  	b	0x80000be0 <bltz+0x118>
80000bd4: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000bd8: 2c 63 03 3c  	lui	$3, 0x632c
80000bdc: aa 31 63 34  	ori	$3, $3, 0x31aa
80000be0: 00 00 15 24  	addiu	$21, $zero, 0x0 <_start>
80000be4: 00 00 16 24  	addiu	$22, $zero, 0x0 <_start>
80000be8: 1e 00 55 14  	bne	$2, $21, 0x80000c64 <bltz_next>
80000bec: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000bf0: 1c 00 76 14  	bne	$3, $22, 0x80000c64 <bltz_next>
80000bf4: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000bf8: 00 00 02 24  	addiu	$2, $zero, 0x0 <_start>
80000bfc: 00 00 03 24  	addiu	$3, $zero, 0x0 <_start>
80000c00: 07 00 00 10  	b	0x80000c20 <bltz+0x158>
80000c04: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000c08: 38 18 02 3c  	lui	$2, 0x1838
80000c0c: c2 9f 42 34  	ori	$2, $2, 0x9fc2
80000c10: 09 00 00 05  	bltz	$8, 0x80000c38 <bltz+0x170>
80000c14: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000c18: 09 00 00 10  	b	0x80000c40 <bltz+0x178>
80000c1c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000c20: 96 f5 08 3c  	lui	$8, 0xf596
80000c24: 46 95 08 35  	ori	$8, $8, 0x9546
80000c28: f7 ff 00 05  	bltz	$8, 0x80000c08 <bltz+0x140>
80000c2c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000c30: 03 00 00 10  	b	0x80000c40 <bltz+0x178>
80000c34: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000c38: 95 eb 03 3c  	lui	$3, 0xeb95
80000c3c: c8 42 63 34  	ori	$3, $3, 0x42c8
80000c40: 38 18 15 3c  	lui	$21, 0x1838
80000c44: c2 9f b5 36  	ori	$21, $21, 0x9fc2
80000c48: 95 eb 16 3c  	lui	$22, 0xeb95
80000c4c: c8 42 d6 36  	ori	$22, $22, 0x42c8
80000c50: 04 00 55 14  	bne	$2, $21, 0x80000c64 <bltz_next>
80000c54: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000c58: 02 00 76 14  	bne	$3, $22, 0x80000c64 <bltz_next>
80000c5c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000c60: 00 08 31 36  	ori	$17, $17, 0x800 <jalr_next+0xc0>

80000c64 <bltz_next>:
80000c64: ed fe 08 3c  	lui	$8, 0xfeed
80000c68: 25 40 11 01  	or	$8, $8, $17
80000c6c: 26 40 13 01  	xor	$8, $8, $19
80000c70: 00 40 08 00  	sll	$8, $8, 0x0 <_start>
80000c74: 00 00 08 ae  	sw	$8, 0x0($16)
80000c78: 0e 00 32 16  	bne	$17, $18, 0x80000cb4 <end>
80000c7c: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>

80000c80 <FEEDBACK>:
80000c80: 00 80 10 3c  	lui	$16, 0x8000
80000c84: 14 00 10 26  	addiu	$16, $16, 0x14 <feed>
80000c88: 00 00 04 82  	lb	$4, 0x0($16)
80000c8c: d0 bf 11 3c  	lui	$17, 0xbfd0

80000c90 <loop2>:
80000c90: 01 00 10 26  	addiu	$16, $16, 0x1 <_start+0x1>

80000c94 <.TEST>:
80000c94: fc 03 28 82  	lb	$8, 0x3fc($17)
80000c98: 01 00 08 31  	andi	$8, $8, 0x1 <_start+0x1>
80000c9c: fd ff 00 11  	beqz	$8, 0x80000c94 <.TEST>
80000ca0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>
80000ca4: f8 03 24 a2  	sb	$4, 0x3f8($17)
80000ca8: 00 00 04 82  	lb	$4, 0x0($16)
80000cac: f8 ff 80 14  	bnez	$4, 0x80000c90 <loop2>
80000cb0: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>

80000cb4 <end>:
80000cb4: ff ff 00 10  	b	0x80000cb4 <end>
80000cb8: 00 00 00 34  	ori	$zero, $zero, 0x0 <_start>

Disassembly of section .got:

80000cc0 <.got>:
80000cc0: 00 00 00 00  	nop <_start>
80000cc4: 00 00 00 80  	lb	$zero, 0x0($zero)

Disassembly of section .comment:

00000000 <.comment>:
       0: 4c 69 6e 6b  	<unknown>
       4: 65 72 3a 20  	addi	$26, $1, 0x7265 <.reginfo+0x724d>
       8: 48 6f 6d 65  	<unknown>
       c: 62 72 65 77  	jalx	0xd95c988 <.reginfo+0xd95c970>
      10: 20 4c 4c 44  	<unknown>
      14: 20 31 37 2e  	sltiu	$23, $17, 0x3120 <.reginfo+0x3108>
      18: 30 2e 36 00  	tge	$1, $22, 0xb8 <.reginfo+0xa0>

Disassembly of section .symtab:

00000000 <.symtab>:
		...
      10: 01 00 00 00  	movf	$zero, $zero, $fcc0
      14: 20 00 00 80  	lb	$zero, 0x20($zero)
      18: 00 00 00 00  	nop <.symtab>
      1c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
      20: 05 00 00 00  	<unknown>
      24: 08 00 00 80  	lb	$zero, 0x8($zero)
      28: 00 00 00 00  	nop <.symtab>
      2c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
      30: 0a 00 00 00  	movz	$zero, $zero, $zero
      34: 14 00 00 80  	lb	$zero, 0x14($zero)
      38: 00 00 00 00  	nop <.symtab>
      3c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
      40: 0f 00 00 00  	sync <.symtab>
      44: 30 00 00 80  	lb	$zero, 0x30($zero)
      48: 00 00 00 00  	nop <.symtab>
      4c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
      50: 15 00 00 00  	<unknown>
      54: b4 0c 00 80  	lb	$zero, 0xcb4($zero)
      58: 00 00 00 00  	nop <.symtab>
      5c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
      60: 19 00 00 00  	multu	$zero, $zero
      64: 58 00 00 80  	lb	$zero, 0x58($zero)
      68: 00 00 00 00  	nop <.symtab>
      6c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
      70: 25 00 00 00  	move	$zero, $zero
      74: 68 00 00 80  	lb	$zero, 0x68($zero)
      78: 00 00 00 00  	nop <.symtab>
      7c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
      80: 2b 00 00 00  	sltu	$zero, $zero, $zero
      84: 6c 00 00 80  	lb	$zero, 0x6c($zero)
      88: 00 00 00 00  	nop <.symtab>
      8c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
      90: 32 00 00 00  	tlt	$zero, $zero <.symtab>
      94: 8c 00 00 80  	lb	$zero, 0x8c($zero)
      98: 00 00 00 00  	nop <.symtab>
      9c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
      a0: 3d 00 00 00  	<unknown>
      a4: 8c 00 00 80  	lb	$zero, 0x8c($zero)
      a8: 00 00 00 00  	nop <.symtab>
      ac: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
      b0: 44 00 00 00  	<unknown>
      b4: ac 00 00 80  	lb	$zero, 0xac($zero)
      b8: 00 00 00 00  	nop <.symtab>
      bc: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
      c0: 4f 00 00 00  	sync 0x1 <.symtab+0x1>
      c4: c0 00 00 80  	lb	$zero, 0xc0($zero)
      c8: 00 00 00 00  	nop <.symtab>
      cc: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
      d0: 53 00 00 00  	<unknown>
      d4: 4c 01 00 80  	lb	$zero, 0x14c($zero)
      d8: 00 00 00 00  	nop <.symtab>
      dc: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
      e0: 5c 00 00 00  	<unknown>
      e4: 4c 01 00 80  	lb	$zero, 0x14c($zero)
      e8: 00 00 00 00  	nop <.symtab>
      ec: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
      f0: 61 00 00 00  	<unknown>
      f4: bc 01 00 80  	lb	$zero, 0x1bc($zero)
      f8: 00 00 00 00  	nop <.symtab>
      fc: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     100: 6b 00 00 00  	<unknown>
     104: bc 01 00 80  	lb	$zero, 0x1bc($zero)
     108: 00 00 00 00  	nop <.symtab>
     10c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     110: 6f 00 00 00  	<unknown>
     114: 48 02 00 80  	lb	$zero, 0x248($zero)
     118: 00 00 00 00  	nop <.symtab>
     11c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     120: 78 00 00 00  	<unknown>
     124: 48 02 00 80  	lb	$zero, 0x248($zero)
     128: 00 00 00 00  	nop <.symtab>
     12c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     130: 7c 00 00 00  	<unknown>
     134: c8 02 00 80  	lb	$zero, 0x2c8($zero)
     138: 00 00 00 00  	nop <.symtab>
     13c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     140: 85 00 00 00  	<unknown>
     144: c8 02 00 80  	lb	$zero, 0x2c8($zero)
     148: 00 00 00 00  	nop <.symtab>
     14c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     150: 8a 00 00 00  	<unknown>
     154: 44 03 00 80  	lb	$zero, 0x344($zero)
     158: 00 00 00 00  	nop <.symtab>
     15c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     160: 94 00 00 00  	<unknown>
     164: 44 03 00 80  	lb	$zero, 0x344($zero)
     168: 00 00 00 00  	nop <.symtab>
     16c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     170: 99 00 00 00  	<unknown>
     174: c4 03 00 80  	lb	$zero, 0x3c4($zero)
     178: 00 00 00 00  	nop <.symtab>
     17c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     180: a3 00 00 00  	<unknown>
     184: c4 03 00 80  	lb	$zero, 0x3c4($zero)
     188: 00 00 00 00  	nop <.symtab>
     18c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     190: a7 00 00 00  	<unknown>
     194: 30 04 00 80  	lb	$zero, 0x430($zero)
     198: 00 00 00 00  	nop <.symtab>
     19c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     1a0: b0 00 00 00  	tge	$zero, $zero, 0x2 <.symtab+0x2>
     1a4: 30 04 00 80  	lb	$zero, 0x430($zero)
     1a8: 00 00 00 00  	nop <.symtab>
     1ac: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     1b0: b5 00 00 00  	<unknown>
     1b4: b0 04 00 80  	lb	$zero, 0x4b0($zero)
     1b8: 00 00 00 00  	nop <.symtab>
     1bc: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     1c0: bf 00 00 00  	<unknown>
     1c4: b0 04 00 80  	lb	$zero, 0x4b0($zero)
     1c8: 00 00 00 00  	nop <.symtab>
     1cc: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     1d0: c4 00 00 00  	<unknown>
     1d4: 40 07 00 80  	lb	$zero, 0x740($zero)
     1d8: 00 00 00 00  	nop <.symtab>
     1dc: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     1e0: ce 00 00 00  	<unknown>
     1e4: 40 07 00 80  	lb	$zero, 0x740($zero)
     1e8: 00 00 00 00  	nop <.symtab>
     1ec: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     1f0: d3 00 00 00  	<unknown>
     1f4: 04 09 00 80  	lb	$zero, 0x904($zero)
     1f8: 00 00 00 00  	nop <.symtab>
     1fc: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     200: dd 00 00 00  	<unknown>
     204: 04 09 00 80  	lb	$zero, 0x904($zero)
     208: 00 00 00 00  	nop <.symtab>
     20c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     210: e2 00 00 00  	<unknown>
     214: c8 0a 00 80  	lb	$zero, 0xac8($zero)
     218: 00 00 00 00  	nop <.symtab>
     21c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     220: ec 00 00 00  	<unknown>
     224: c8 0a 00 80  	lb	$zero, 0xac8($zero)
     228: 00 00 00 00  	nop <.symtab>
     22c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     230: f1 00 00 00  	tgeu	$zero, $zero, 0x3 <.symtab+0x3>
     234: 64 0c 00 80  	lb	$zero, 0xc64($zero)
     238: 00 00 00 00  	nop <.symtab>
     23c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     240: fb 00 00 00  	<unknown>
     244: 80 0c 00 80  	lb	$zero, 0xc80($zero)
     248: 00 00 00 00  	nop <.symtab>
     24c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     250: 04 01 00 00  	<unknown>
     254: 90 0c 00 80  	lb	$zero, 0xc90($zero)
     258: 00 00 00 00  	nop <.symtab>
     25c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     260: 0a 01 00 00  	<unknown>
     264: 94 0c 00 80  	lb	$zero, 0xc94($zero)
     268: 00 00 00 00  	nop <.symtab>
     26c: 00 00 03 00  	sll	$zero, $3, 0x0 <.symtab>
     270: 17 01 00 00  	<unknown>
     274: b0 8c 00 80  	lb	$zero, -0x7350($zero)
     278: 00 00 00 00  	nop <.symtab>
     27c: 00 02 05 00  	sll	$zero, $5, 0x8 <.symtab+0x8>
     280: 10 01 00 00  	<unknown>
     284: 00 00 00 80  	lb	$zero, 0x0($zero)
     288: 00 00 00 00  	nop <.symtab>
     28c: 10 00 03 00  	<unknown>

Disassembly of section .shstrtab:

00000000 <.shstrtab>:
       0: 00 2e 4d 49  	<unknown>
       4: 50 53 2e 61  	<unknown>
       8: 62 69 66 6c  	<unknown>
       c: 61 67 73 00  	<unknown>
      10: 2e 72 65 67  	<unknown>
      14: 69 6e 66 6f  	<unknown>
      18: 00 2e 74 65  	<unknown>
      1c: 78 74 00 2e  	sltiu	$zero, $16, 0x7478 <.reginfo+0x7460>
      20: 64 61 74 61  	<unknown>
      24: 00 2e 67 6f  	<unknown>
      28: 74 00 2e 62  	<unknown>
      2c: 73 73 00 2e  	sltiu	$zero, $16, 0x7373 <.reginfo+0x735b>
      30: 63 6f 6d 6d  	<unknown>
      34: 65 6e 74 00  	<unknown>
      38: 2e 73 79 6d  	<unknown>
      3c: 74 61 62 00  	teq	$3, $2, 0x185 <.reginfo+0x16d>
      40: 2e 73 68 73  	<unknown>
      44: 74 72 74 61  	<unknown>
      48: 62 00 2e 73  	<unknown>
      4c: 74 72 74 61  	<unknown>
      50: 62           	<unknown>
      51: 00           	<unknown>

Disassembly of section .strtab:

00000000 <.strtab>:
       0: 00 66 69 62  	<unknown>
       4: 00 69 6e 66  	<unknown>
       8: 6f 00 66 65  	<unknown>
       c: 65 64 00 6c  	<unknown>
      10: 6f 6f 70 30  	andi	$16, $3, 0x6f6f <.reginfo+0x6f57>
      14: 00 65 6e 64  	<unknown>
      18: 00 57 52 49  	<unknown>
      1c: 54 45 53 45  	<unknown>
      20: 52 49 41 4c  	<unknown>
      24: 00 6c 6f 6f  	<unknown>
      28: 70 31 00 2e  	sltiu	$zero, $16, 0x3170 <.reginfo+0x3158>
      2c: 54 45 53 54  	bnel	$2, $19, 0x11580 <.reginfo+0x11568>
      30: 57 00 52 45  	<unknown>
      34: 41 44 53 45  	<unknown>
      38: 52 49 41 4c  	<unknown>
      3c: 00 2e 54 45  	<unknown>
      40: 53 54 52 00  	<unknown>
      44: 52 41 4e 44  	<unknown>
      48: 4f 4d 54 45  	<unknown>
      4c: 53 54 00 61  	<unknown>
      50: 64 64 00 61  	<unknown>
      54: 64 64 5f 6e  	<unknown>
      58: 65 78 74 00  	<unknown>
      5c: 61 64 64 69  	<unknown>
      60: 00 61 64 64  	<unknown>
      64: 69 5f 6e 65  	<unknown>
      68: 78 74 00 73  	<unknown>
      6c: 75 62 00 73  	<unknown>
      70: 75 62 5f 6e  	<unknown>
      74: 65 78 74 00  	<unknown>
      78: 73 6c 74 00  	tltu	$3, $20, 0x1b1 <.reginfo+0x199>
      7c: 73 6c 74 5f  	<unknown>
      80: 6e 65 78 74  	jalx	0x1e195b8 <.reginfo+0x1e195a0>
      84: 00 73 6c 6c  	<unknown>
      88: 76 00 73 6c  	<unknown>
      8c: 6c 76 5f 6e  	<unknown>
      90: 65 78 74 00  	<unknown>
      94: 73 72 61 76  	jalx	0x985c9cc <.reginfo+0x985c9b4>
      98: 00 73 72 61  	<unknown>
      9c: 76 5f 6e 65  	<unknown>
      a0: 78 74 00 73  	<unknown>
      a4: 72 61 00 73  	<unknown>
      a8: 72 61 5f 6e  	<unknown>
      ac: 65 78 74 00  	<unknown>
      b0: 73 72 6c 76  	jalx	0x9b1c9cc <.reginfo+0x9b1c9b4>
      b4: 00 73 72 6c  	<unknown>
      b8: 76 5f 6e 65  	<unknown>
      bc: 78 74 00 6a  	<unknown>
      c0: 61 6c 72 00  	<unknown>
      c4: 6a 61 6c 72  	<unknown>
      c8: 5f 6e 65 78  	<unknown>
      cc: 74 00 62 67  	<unknown>
      d0: 65 7a 00 62  	<unknown>
      d4: 67 65 7a 5f  	<unknown>
      d8: 6e 65 78 74  	jalx	0x1e195b8 <.reginfo+0x1e195a0>
      dc: 00 62 6c 65  	<unknown>
      e0: 7a 00 62 6c  	<unknown>
      e4: 65 7a 5f 6e  	<unknown>
      e8: 65 78 74 00  	<unknown>
      ec: 62 6c 74 7a  	<unknown>
      f0: 00 62 6c 74  	jalx	0x1b18800 <.reginfo+0x1b187e8>
      f4: 7a 5f 6e 65  	<unknown>
      f8: 78 74 00 46  	<unknown>
      fc: 45 45 44 42  	<unknown>
     100: 41 43 4b 00  	<unknown>
     104: 6c 6f 6f 70  	<unknown>
     108: 32 00 2e 54  	bnel	$1, $14, 0x1d4 <.reginfo+0x1bc>
     10c: 45 53 54 00  	<unknown>
     110: 5f 73 74 61  	<unknown>
     114: 72 74 00 5f  	bgtzl	$24, 0x1d2e0 <.reginfo+0x1d2c8>
     118: 67           	<unknown>
     119: 70           	<unknown>
     11a: 00           	<unknown>
