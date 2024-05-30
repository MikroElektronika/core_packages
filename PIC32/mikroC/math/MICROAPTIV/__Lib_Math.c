/*
    __lib_Math.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
 * @brief Operands r4, r5, r6, r7
 *        Results R2, R3
 *        Perform multiplication of two 64-bit values.
 */
void _Mul_64x64(){
  asm{
    multu       R6,R4
    mflo        R2
    mfhi        R3
    mul         R4,R4,R7
    addu        R7,R3,R4
    mul         R5,R6,R5
    addu        R3,R7,R5
  };
}

void _Div_64x64_S(){
  asm{

bltz        R5,label1
addu        R16,R0,R0
label27:
 bltz        R7,label2
nop
label26:
 addu        R3,R7,R0
addu        R8,R5,R0
addu        R7,R6,R0
bne         R3,R0,label3
addu        R12,R4,R0
sltu        R2,R5,R6
beq         R2,R0,label4
nop
clz         R6,R6
bne         R6,R0,label5
subu        R5,R0,R6
label28:
 srl         R6,R7,0x10
divu        R8,R6
teq         R6,R0
andi        R11,R7,0xffff
srl         R14,R12,0x10
mflo        R9
mfhi        R17
mflo        R10
mul         R9,R9,R11
sll         R15,R17,0x10
or          R5,R15,R14
sltu        R13,R5,R9
divu        R8,R6
teq         R6,R0
beql        R13,R0,label6
subu        R4,R5,R9
addu        R5,R5,R7
sltu        R8,R5,R7
bne         R8,R0,label7
addiu       R10,R10,-1
sltu        R2,R5,R9
bnel        R2,R0,label8
addiu       R10,R10,-1
label7:
 subu        R4,R5,R9
label6:
 divu        R4,R6
teq         R6,R0
andi        R3,R12,0xffff
mflo        R14
mfhi        R13
mflo        R9
mul         R11,R14,R11
sll         R5,R13,0x10
or          R8,R5,R3
sltu        R12,R8,R11
divu        R4,R6
teq         R6,R0
beql        R12,R0,label9
sll         R11,R10,0x10
addu        R8,R8,R7
sltu        R6,R8,R7
bne         R6,R0,label10
addiu       R9,R14,-1
sltu        R15,R8,R11
sltu        R7,R0,R15
subu        R9,R9,R7
label10:
 sll         R11,R10,0x10
label9:
 or          R4,R11,R9
addu        R6,R0,R0
label12:
 beq         R16,R0,label11
addu        R5,R6,R0
subu        R4,R0,R4
subu        R5,R0,R5
sltu        R2,R0,R4
subu        R5,R5,R2
label11:
 addu        R2,R4,R0
b label_end
addu        R3,R5,R0
label3:
sltu        R11,R5,R3
addu        R4,R0,R0
bne         R11,R0,label12
addu        R6,R0,R0
clz         R9,R3
beq         R9,R0,label13
sltu        R13,R12,R7
addiu       R2,R0,32
subu        R14,R2,R9
srlv        R10,R7,R14
sllv        R15,R3,R9
or          R13,R15,R10
srlv        R5,R5,R14
srl         R10,R13,0x10
divu        R5,R10
teq         R10,R0
sllv        R4,R8,R9
srlv        R17,R12,R14
andi        R15,R13,0xffff
or          R14,R4,R17
sllv        R17,R12,R9
srl         R4,R14,0x10
mflo        R6
mfhi        R11
mflo        R12
mul         R8,R6,R15
sll         R3,R11,0x10
or          R11,R3,R4
sltu        R6,R11,R8
divu        R5,R10
teq         R10,R0
beq         R6,R0,label14
sllv        R7,R7,R9
addu        R11,R11,R13
sltu        R9,R11,R13
bne         R9,R0,label14
addiu       R12,R12,-1
sltu        R5,R11,R8
beq         R5,R0,label15
subu        R3,R11,R8
addiu       R12,R12,-1
addu        R11,R11,R13
label14:
 subu        R3,R11,R8
label15:
 divu        R3,R10
teq         R10,R0
andi        R4,R14,0xffff
mflo        R2
mfhi        R8
mflo        R6
mul         R9,R2,R15
sll         R14,R8,0x10
or          R8,R14,R4
sltu        R11,R8,R9
divu        R3,R10
teq         R10,R0
beql        R11,R0,label16
sll         R13,R12,0x10
addu        R8,R8,R13
sltu        R10,R8,R13
bne         R10,R0,label17
addiu       R6,R2,-1
sltu        R15,R8,R9
beql        R15,R0,label16
sll         R13,R12,0x10
addu        R8,R8,R13
addiu       R6,R6,-1
label17:
 sll         R13,R12,0x10
label16:
 or          R4,R13,R6
multu       R4,R7
mfhi        R5
subu        R3,R8,R9
sltu        R12,R3,R5
bnel        R12,R0,label18
addiu       R4,R4,-1
xor         R11,R5,R3
mflo        R5
sltiu       R6,R11,1
sltu        R9,R17,R5
and         R7,R6,R9
beql        R7,R0,label12
addu        R6,R0,R0
addiu       R4,R4,-1
label18:
 beq         R0,R0,label12
addu        R6,R0,R0
label4:
 beq         R6,R0,label19
addiu       R10,R0,1
clz         R10,R7
bne         R10,R0,label20
addiu       R9,R0,32
subu        R5,R8,R7
label29:
 addiu       R6,R0,1
srl         R9,R7,0x10
andi        R13,R7,0xffff
label34:
 divu        R5,R9
teq         R9,R0
srl         R3,R12,0x10
mflo        R10
mfhi        R8
mflo        R11
mul         R10,R10,R13
sll         R2,R8,0x10
or          R8,R2,R3
sltu        R14,R8,R10
divu        R5,R9
teq         R9,R0
beq         R14,R0,label21
subu        R17,R8,R10
addu        R8,R8,R7
sltu        R5,R8,R7
bne         R5,R0,label22
addiu       R11,R11,-1
sltu        R15,R8,R10
bnel        R15,R0,label23
addiu       R11,R11,-1
label22:
 subu        R17,R8,R10
label21:
 divu        R17,R9
teq         R9,R0
andi        R4,R12,0xffff
mflo        R2
mfhi        R3
mflo        R10
mul         R12,R2,R13
sll         R14,R3,0x10
or          R8,R14,R4
sltu        R13,R8,R12
divu        R17,R9
teq         R9,R0
beql        R13,R0,label24
sll         R8,R11,0x10
addu        R8,R8,R7
sltu        R9,R8,R7
bne         R9,R0,label25
addiu       R10,R2,-1
sltu        R7,R8,R12
sltu        R12,R0,R7
subu        R10,R10,R12
label25:
 sll         R8,R11,0x10
label24:
 beq         R0,R0,label12
or          R4,R8,R10
label2:
 subu        R6,R0,R6
subu        R7,R0,R7
sltu        R2,R0,R6
subu        R7,R7,R2
beq         R0,R0,label26
nor         R16,R0,R16
label1:
 subu        R4,R0,R4
subu        R5,R0,R5
sltu        R2,R0,R4
subu        R5,R5,R2
beq         R0,R0,label27
addiu       R16,R0,-1
label5:
 srlv        R4,R4,R5
sllv        R3,R8,R6
or          R8,R3,R4
sllv        R12,R12,R6
beq         R0,R0,label28
sllv        R7,R7,R6
label13:
 sltu        R5,R3,R5
xori        R15,R13,0x1
or          R10,R5,R15
beq         R0,R0,label12
sltu        R4,R0,R10
label19:
 divu        R10,R6
teq         R6,R0
mflo        R7
clz         R10,R7
beq         R10,R0,label29
subu        R5,R8,R7
addiu       R9,R0,32
label20:
 subu        R15,R9,R10
sllv        R7,R7,R10
srlv        R4,R8,R15
srl         R9,R7,0x10
divu        R4,R9
teq         R9,R0
srlv        R14,R12,R15
sllv        R11,R8,R10
andi        R13,R7,0xffff
or          R15,R11,R14
srl         R3,R15,0x10
mflo        R6
mfhi        R5
mflo        R14
mul         R8,R6,R13
sll         R2,R5,0x10
or          R11,R2,R3
sltu        R17,R11,R8
divu        R4,R9
teq         R9,R0
beq         R17,R0,label30
sllv        R12,R12,R10
addu        R11,R11,R7
sltu        R10,R11,R7
bne         R10,R0,label30
addiu       R14,R6,-1
sltu        R17,R11,R8
beq         R17,R0,label31
subu        R3,R11,R8
addiu       R14,R14,-1
addu        R11,R11,R7
label30:
 subu        R3,R11,R8
label31:
 divu        R3,R9
teq         R9,R0
andi        R5,R15,0xffff
mflo        R11
mfhi        R8
mflo        R6
mul         R10,R11,R13
sll         R2,R8,0x10
or          R8,R2,R5
sltu        R4,R8,R10
divu        R3,R9
teq         R9,R0
beql        R4,R0,label32
sll         R4,R14,0x10
addu        R8,R8,R7
sltu        R15,R8,R7
bne         R15,R0,label33
addiu       R6,R11,-1
sltu        R17,R8,R10
beq         R17,R0,label32
sll         R4,R14,0x10
addiu       R6,R6,-1
addu        R8,R8,R7
label33:
 sll         R4,R14,0x10
label32:
 or          R6,R4,R6
beq         R0,R0,label34
subu        R5,R8,R10
label23:
 beq         R0,R0,label22
addu        R8,R8,R7
label8:
 beq         R0,R0,label7
addu        R5,R5,R7
label_end:
}
}

void _Div_64x64_U(){
asm{
addu        R3,R7,R0
addu        R8,R5,R0
addu        R7,R6,R0
bne         R3,R0,label1
addu        R12,R4,R0
sltu        R2,R5,R6
beq         R2,R0,label2
nop
clz         R6,R6
bne         R6,R0,label3
subu        R5,R0,R6
label22:
 srl         R6,R7,0x10
divu        R8,R6
teq         R6,R0
andi        R11,R7,0xffff
srl         R14,R12,0x10
mflo        R9
mfhi        R16
mflo        R10
mul         R9,R9,R11
sll         R15,R16,0x10
or          R5,R15,R14
sltu        R13,R5,R9
divu        R8,R6
teq         R6,R0
beql        R13,R0,label4
subu        R4,R5,R9
addu        R5,R5,R7
sltu        R8,R5,R7
bne         R8,R0,label5
addiu       R10,R10,-1
sltu        R17,R5,R9
bnel        R17,R0,label6
addiu       R10,R10,-1
label5:
 subu        R4,R5,R9
label4:
 divu        R4,R6
teq         R6,R0
andi        R3,R12,0xffff
mflo        R13
mfhi        R5
mflo        R9
mul         R11,R13,R11
sll         R2,R5,0x10
or          R8,R2,R3
sltu        R12,R8,R11
divu        R4,R6
teq         R6,R0
beql        R12,R0,label7
sll         R11,R10,0x10
addu        R8,R8,R7
sltu        R6,R8,R7
bne         R6,R0,label8
addiu       R9,R13,-1
sltu        R14,R8,R11
sltu        R7,R0,R14
subu        R9,R9,R7
label8:
 sll         R11,R10,0x10
label7:
 or          R4,R11,R9
addu        R6,R0,R0
label9:
 addu        R2,R4,R0
b label_end
addu        R3,R6,R0
label1:
 sltu        R11,R5,R3
addu        R4,R0,R0
bne         R11,R0,label9
addu        R6,R0,R0
clz         R9,R3
beq         R9,R0,label10
sltu        R2,R12,R7
addiu       R13,R0,32
subu        R14,R13,R9
sllv        R10,R3,R9
srlv        R15,R7,R14
or          R13,R10,R15
srlv        R17,R5,R14
srl         R10,R13,0x10
divu        R17,R10
teq         R10,R0
srlv        R16,R12,R14
sllv        R5,R5,R9
andi        R15,R13,0xffff
or          R14,R5,R16
sllv        R16,R12,R9
srl         R3,R14,0x10
sllv        R7,R7,R9
mflo        R4
mfhi        R11
mflo        R12
mul         R8,R4,R15
sll         R9,R11,0x10
or          R11,R9,R3
sltu        R6,R11,R8
divu        R17,R10
teq         R10,R0
beql        R6,R0,label11
subu        R3,R11,R8
addu        R11,R11,R13
sltu        R2,R11,R13
bne         R2,R0,label12
addiu       R12,R4,-1
sltu        R6,R11,R8
beq         R6,R0,label11
subu        R3,R11,R8
addiu       R12,R12,-1
addu        R11,R11,R13
label12:
subu        R3,R11,R8
label11:
divu        R3,R10
teq         R10,R0
andi        R11,R14,0xffff
mflo        R9
mfhi        R8
mflo        R6
mul         R9,R9,R15
sll         R4,R8,0x10
or          R8,R4,R11
sltu        R17,R8,R9
divu        R3,R10
teq         R10,R0
beql        R17,R0,label13
sll         R15,R12,0x10
addu        R8,R8,R13
sltu        R5,R8,R13
bne         R5,R0,label14
addiu       R6,R6,-1
sltu        R14,R8,R9
beq         R14,R0,label13
sll         R15,R12,0x10
addu        R8,R8,R13
addiu       R6,R6,-1
label14:
 sll         R15,R12,0x10
label13:
 or          R4,R15,R6
multu       R4,R7
mfhi        R5
subu        R3,R8,R9
sltu        R12,R3,R5
bnel        R12,R0,label15
addiu       R4,R4,-1
mflo        R2
xor         R13,R5,R3
sltu        R10,R16,R2
sltiu       R16,R13,1
and         R7,R16,R10
beql        R7,R0,label9
addu        R6,R0,R0
addiu       R4,R4,-1
label15:
 beq         R0,R0,label9
addu        R6,R0,R0
label2:
 beq         R6,R0,label16
addiu       R10,R0,1
clz         R10,R7
bne         R10,R0,label17
addiu       R9,R0,32
subu        R5,R8,R7
label23:
 addiu       R6,R0,1
srl         R9,R7,0x10
andi        R13,R7,0xffff
label28:
 divu        R5,R9
teq         R9,R0
srl         R17,R12,0x10
mflo        R10
mfhi        R3
mflo        R11
mul         R10,R10,R13
sll         R4,R3,0x10
or          R8,R4,R17
sltu        R14,R8,R10
divu        R5,R9
teq         R9,R0
beq         R14,R0,label18
subu        R15,R8,R10
addu        R8,R8,R7
sltu        R5,R8,R7
bne         R5,R0,label19
addiu       R11,R11,-1
sltu        R2,R8,R10
bnel        R2,R0,label20
addiu       R11,R11,-1
label19:
 subu        R15,R8,R10
label18:
 divu        R15,R9
teq         R9,R0
andi        R16,R12,0xffff
mflo        R17
mfhi        R8
mflo        R10
mul         R12,R17,R13
sll         R14,R8,0x10
or          R8,R14,R16
sltu        R13,R8,R12
divu        R15,R9
teq         R9,R0
beq         R13,R0,label21
sll         R3,R11,0x10
addu        R8,R8,R7
sltu        R9,R8,R7
bne         R9,R0,label21
addiu       R10,R17,-1
sltu        R7,R8,R12
sltu        R12,R0,R7
subu        R10,R10,R12
sll         R3,R11,0x10
label21:
 or          R4,R3,R10
addu        R2,R4,R0
b label_end
addu        R3,R6,R0
label3:
 srlv        R4,R4,R5
sllv        R3,R8,R6
or          R8,R3,R4
sllv        R12,R12,R6
beq         R0,R0,label22
sllv        R7,R7,R6
label10:
 sltu        R4,R3,R5
xori        R5,R2,0x1
or          R10,R4,R5
sltu        R4,R0,R10
addu        R2,R4,R0
b label_end
addu        R3,R6,R0
label16:
 divu        R10,R6
teq         R6,R0
mflo        R7
clz         R10,R7
beq         R10,R0,label23
subu        R5,R8,R7
addiu       R9,R0,32
label17:
 subu        R15,R9,R10
sllv        R7,R7,R10
srlv        R17,R8,R15
srl         R9,R7,0x10
divu        R17,R9
teq         R9,R0
srlv        R14,R12,R15
sllv        R2,R8,R10
andi        R13,R7,0xffff
or          R15,R2,R14
srl         R4,R15,0x10
mflo        R6
mfhi        R5
mflo        R14
mul         R8,R6,R13
sll         R3,R5,0x10
or          R11,R3,R4
sltu        R16,R11,R8
divu        R17,R9
teq         R9,R0
beq         R16,R0,label24
sllv        R12,R12,R10
addu        R11,R11,R7
sltu        R10,R11,R7
bne         R10,R0,label24
addiu       R14,R6,-1
sltu        R16,R11,R8
beq         R16,R0,label25
subu        R17,R11,R8
addiu       R14,R14,-1
addu        R11,R11,R7
label24:
 subu        R17,R11,R8
label25:
 divu        R17,R9
teq         R9,R0
andi        R4,R15,0xffff
mflo        R5
mfhi        R8
mflo        R6
mul         R10,R5,R13
sll         R3,R8,0x10
or          R8,R3,R4
sltu        R11,R8,R10
divu        R17,R9
teq         R9,R0
beq         R11,R0,label26
sll         R16,R14,0x10
addu        R8,R8,R7
sltu        R2,R8,R7
bne         R2,R0,label26
addiu       R6,R5,-1
sltu        R15,R8,R10
beql        R15,R0,label27
or          R6,R16,R6
addiu       R6,R6,-1
addu        R8,R8,R7
sll         R16,R14,0x10
label26:
 or          R6,R16,R6
label27:
 beq         R0,R0,label28
subu        R5,R8,R10
label20: beq         R0,R0,label19
addu        R8,R8,R7
label6:
 beq         R0,R0,label5
addu        R5,R5,R7
label_end:
nop

}
}

void _Mod_64x64_U(void) {
asm{
addiu       R29,R29,-24
addu        R8,R7,R0
sw          R18,16(R29)
sw          R17,12(R29)
sw          R16,8(R29)
addu        R18,R29,R0
addu        R10,R6,R0
addu        R11,R4,R0
bne         R8,R0,label1
addu        R7,R5,R0
sltu        R2,R5,R6
beq         R2,R0,label2
clz         R14,R6
bne         R14,R0,label3
subu        R5,R0,R14
label12:
 srl         R9,R10,0x10
divu        R7,R9
teq         R9,R0
andi        R15,R10,0xffff
srl         R12,R11,0x10
mflo        R16
mfhi        R6
mul         R5,R16,R15
sll         R13,R6,0x10
or          R6,R13,R12
sltu        R8,R6,R5
divu        R7,R9
teq         R9,R0
beq         R8,R0,label4
subu        R3,R6,R5
addu        R6,R6,R10
sltu        R7,R6,R10
bne         R7,R0,label4
subu        R3,R6,R5
sltu        R17,R6,R5
xori        R16,R17,0x0
addu        R17,R6,R10
movn        R6,R17,R16
subu        R3,R6,R5
label4:
 divu        R3,R9
teq         R9,R0
andi        R17,R11,0xffff
mflo        R17
mfhi        R16
mul         R11,R17,R15
sll         R15,R16,0x10
or          R8,R15,R17
sltu        R7,R8,R11
divu        R3,R9
teq         R9,R0
beq         R7,R0,label5
subu        R3,R8,R11
addu        R8,R8,R10
sltu        R9,R8,R10
bne         R9,R0,label5
subu        R3,R8,R11
sltu        R2,R8,R11
addu        R4,R8,R10
xori        R10,R2,0x0
movn        R8,R4,R10
subu        R3,R8,R11
label5:
 srlv        R12,R3,R14
beq         R18,R0,label6
addu        R13,R0,R0
sw          R12,0(R18)
sw          R13,4(R18)
label6:
 lw          R2,0(R29)
lw          R3,4(R29)
lw          R18,16(R29)
lw          R17,12(R29)
lw          R16,8(R29)
b label_end
addiu       R29,R29,24
label1:
 sltu        R14,R5,R8
beql        R14,R0,label7
clz         R14,R8
lw          R18,16(R29)
lw          R17,12(R29)
lw          R16,8(R29)
addu        R2,R4,R0
addu        R3,R5,R0
sw          R4,0(R29)
sw          R5,4(R29)
b label_end
addiu       R29,R29,24
label7:
 bne         R14,R0,label8
addiu       R15,R0,32
sltu        R13,R4,R6
xori        R12,R13,0x1
sltu        R6,R8,R5
or          R5,R6,R12
beq         R5,R0,label9
addu        R12,R11,R0
subu        R16,R4,R10
subu        R17,R7,R8
sltu        R8,R4,R16
subu        R7,R17,R8
addu        R11,R16,R0
addu        R12,R11,R0
label9:
 beq         R18,R0,label6
addu        R13,R7,R0
sw          R12,0(R18)
beq         R0,R0,label6
sw          R13,4(R18)
label2:
 beq         R6,R0,label10
addiu       R9,R0,1
clz         R14,R10
bne         R14,R0,label11
addiu       R15,R0,32
subu        R6,R7,R10
label19:
 srl         R9,R10,0x10
andi        R15,R10,0xffff
label22:
 divu        R6,R9
teq         R9,R0
srl         R4,R11,0x10
mflo        R8
mfhi        R5
mul         R7,R8,R15
sll         R3,R5,0x10
or          R5,R3,R4
sltu        R2,R5,R7
divu        R6,R9
teq         R9,R0
beq         R2,R0,label4
subu        R3,R5,R7
addu        R5,R5,R10
sltu        R6,R5,R10
bnel        R6,R0,label4
subu        R3,R5,R7
sltu        R16,R5,R7
xori        R13,R16,0x0
addu        R12,R5,R10
movn        R5,R12,R13
beq         R0,R0,label4
subu        R3,R5,R7
label3:
 srlv        R4,R4,R5
sllv        R3,R7,R14
or          R7,R3,R4
sllv        R10,R6,R14
beq         R0,R0,label12
sllv        R11,R11,R14
label8:
 subu        R16,R15,R14
sllv        R9,R8,R14
srlv        R17,R6,R16
or          R15,R9,R17
srlv        R4,R5,R16
srl         R9,R15,0x10
divu        R4,R9
teq         R9,R0
srlv        R7,R11,R16
sllv        R13,R5,R14
andi        R17,R15,0xffff
or          R17,R13,R7
sllv        R16,R11,R14
sllv        R7,R10,R14
srl         R3,R17,0x10
mflo        R6
mfhi        R12
mflo        R11
mul         R10,R6,R17
sll         R5,R12,0x10
or          R8,R5,R3
sltu        R2,R8,R10
divu        R4,R9
teq         R9,R0
beql        R2,R0,label13
subu        R3,R8,R10
addu        R8,R8,R15
sltu        R2,R8,R15
bne         R2,R0,label14
addiu       R11,R6,-1
sltu        R4,R8,R10
beq         R4,R0,label13
subu        R3,R8,R10
addiu       R11,R11,-1
addu        R8,R8,R15
label14:
 subu        R3,R8,R10
label13:
 divu        R3,R9
teq         R9,R0
andi        R5,R17,0xffff
mflo        R10
mfhi        R8
mflo        R6
mul         R10,R10,R17
sll         R12,R8,0x10
or          R8,R12,R5
sltu        R17,R8,R10
divu        R3,R9
teq         R9,R0
beq         R17,R0,label15
sll         R2,R11,0x10
addu        R8,R8,R15
sltu        R13,R8,R15
bne         R13,R0,label15
addiu       R6,R6,-1
sltu        R17,R8,R10
beq         R17,R0,label16
or          R9,R2,R6
addiu       R6,R6,-1
addu        R8,R8,R15
sll         R2,R11,0x10
label15:
 or          R9,R2,R6
label16:
 multu       R9,R7
mfhi        R6
subu        R8,R8,R10
sltu        R11,R8,R6
bne         R11,R0,label17
mflo        R5
xor         R12,R6,R8
sltiu       R17,R12,1
sltu        R3,R16,R5
and         R4,R17,R3
beq         R4,R0,label18
nop
label17:
 subu        R10,R5,R7
sltu        R7,R5,R10
subu        R13,R6,R15
subu        R6,R13,R7
addu        R5,R10,R0
label18:
 beq         R18,R0,label6
subu        R15,R16,R5
subu        R5,R8,R6
sltu        R8,R16,R15
subu        R16,R5,R8
sllv        R6,R16,R16
srlv        R16,R15,R14
or          R12,R6,R16
srlv        R13,R16,R14
sw          R12,0(R18)
beq         R0,R0,label6
sw          R13,4(R18)
label10:
 divu        R9,R6
teq         R6,R0
mflo        R10
clz         R14,R10
beq         R14,R0,label19
subu        R6,R7,R10
addiu       R15,R0,32
label11:
 subu        R16,R15,R14
sllv        R10,R10,R14
srlv        R4,R7,R16
srl         R9,R10,0x10
divu        R4,R9
teq         R9,R0
srlv        R13,R11,R16
sllv        R6,R7,R14
andi        R15,R10,0xffff
or          R7,R6,R13
srl         R3,R7,0x10
mflo        R12
mfhi        R8
mul         R6,R12,R15
sll         R5,R8,0x10
or          R8,R5,R3
sltu        R2,R8,R6
divu        R4,R9
teq         R9,R0
beq         R2,R0,label20
sllv        R11,R11,R14
addu        R8,R8,R10
sltu        R17,R8,R10
beq         R17,R0,label21
sltu        R2,R8,R6
label20:
 subu        R3,R8,R6
divu        R3,R9
teq         R9,R0
andi        R5,R7,0xffff
mflo        R13
mfhi        R12
mul         R7,R13,R15
sll         R8,R12,0x10
or          R6,R8,R5
sltu        R4,R6,R7
divu        R3,R9
teq         R9,R0
beql        R4,R0,label22
subu        R6,R6,R7
addu        R6,R6,R10
sltu        R16,R6,R10
bnel        R16,R0,label22
subu        R6,R6,R7
sltu        R17,R6,R7
xori        R16,R17,0x0
addu        R17,R6,R10
movn        R6,R17,R16
beq         R0,R0,label22
subu        R6,R6,R7
label21:
 xori        R17,R2,0x0
addu        R16,R8,R10
beq         R0,R0,label20
movn        R8,R16,R17
label_end:
}
}

void _Mod_64x64_S(void) {
asm{
addiu       R29,R29,-24
sw          R19,20(R29)
sw          R18,16(R29)
sw          R17,12(R29)
sw          R16,8(R29)
bltz        R5,label1
addu        R19,R0,R0
label17:
 bltz        R7,label2
nop
addu        R8,R7,R0
label16:
 addu        R18,R29,R0
addu        R7,R6,R0
addu        R11,R4,R0
bne         R8,R0,label3
addu        R9,R5,R0
sltu        R2,R5,R6
beq         R2,R0,label4
clz         R14,R6
bne         R14,R0,label5
subu        R5,R0,R14
label18:
 srl         R10,R7,0x10
divu        R9,R10
teq         R10,R0
andi        R15,R7,0xffff
srl         R12,R11,0x10
mflo        R16
mfhi        R6
mul         R5,R16,R15
sll         R13,R6,0x10
or          R6,R13,R12
sltu        R8,R6,R5
divu        R9,R10
teq         R10,R0
beq         R8,R0,label6
subu        R3,R6,R5
addu        R6,R6,R7
sltu        R9,R6,R7
bne         R9,R0,label6
subu        R3,R6,R5
sltu        R17,R6,R5
xori        R16,R17,0x0
addu        R17,R6,R7
movn        R6,R17,R16
subu        R3,R6,R5
label6:
 divu        R3,R10
teq         R10,R0
andi        R17,R11,0xffff
mflo        R16
mfhi        R8
mul         R9,R16,R15
sll         R15,R8,0x10
or          R8,R15,R17
sltu        R11,R8,R9
divu        R3,R10
teq         R10,R0
beq         R11,R0,label7
subu        R3,R8,R9
addu        R8,R8,R7
sltu        R10,R8,R7
bne         R10,R0,label7
subu        R3,R8,R9
sltu        R2,R8,R9
addu        R17,R8,R7
xori        R7,R2,0x0
movn        R8,R17,R7
subu        R3,R8,R9
label7:
 srlv        R12,R3,R14
beq         R18,R0,label8
addu        R13,R0,R0
sw          R12,0(R18)
sw          R13,4(R18)
label8:
 lw          R4,0(R29)
beq         R0,R0,label9
lw          R5,4(R29)
label3:
 sltu        R14,R5,R8
beq         R14,R0,label10
clz         R14,R8
addu        R5,R9,R0
sw          R4,0(R29)
sw          R9,4(R29)
label9:
 beq         R19,R0,label11
lw          R19,20(R29)
subu        R4,R0,R4
subu        R5,R0,R5
sltu        R2,R0,R4
subu        R5,R5,R2
sw          R4,0(R29)
sw          R5,4(R29)
label11:
 lw          R18,16(R29)
lw          R17,12(R29)
lw          R16,8(R29)
addu        R2,R4,R0
addu        R3,R5,R0
B label_end
addiu       R29,R29,24
label10:
 bne         R14,R0,label12
addiu       R13,R0,32
sltu        R13,R4,R6
xori        R12,R13,0x1
sltu        R6,R8,R5
or          R4,R6,R12
beq         R4,R0,label13
addu        R12,R11,R0
subu        R16,R11,R7
sltu        R17,R11,R16
subu        R15,R5,R8
subu        R9,R15,R17
addu        R11,R16,R0
addu        R12,R11,R0
label13:
 beq         R18,R0,label8
addu        R13,R9,R0
sw          R12,0(R18)
beq         R0,R0,label8
sw          R13,4(R18)
label4:
 beq         R6,R0,label14
addiu       R10,R0,1
clz         R14,R7
bne         R14,R0,label15
addiu       R15,R0,32
subu        R6,R9,R7
label25:
 srl         R10,R7,0x10
andi        R15,R7,0xffff
label28:
 divu        R6,R10
teq         R10,R0
srl         R9,R11,0x10
mflo        R4
mfhi        R5
mul         R8,R4,R15
sll         R3,R5,0x10
or          R5,R3,R9
sltu        R2,R5,R8
divu        R6,R10
teq         R10,R0
beq         R2,R0,label6
subu        R3,R5,R8
addu        R5,R5,R7
sltu        R6,R5,R7
bnel        R6,R0,label6
subu        R3,R5,R8
sltu        R16,R5,R8
xori        R13,R16,0x0
addu        R12,R5,R7
movn        R5,R12,R13
beq         R0,R0,label6
subu        R3,R5,R8
label2:
 subu        R6,R0,R6
subu        R7,R0,R7
sltu        R2,R0,R6
subu        R7,R7,R2
beq         R0,R0,label16
addu        R8,R7,R0
label1:
 subu        R4,R0,R4
subu        R5,R0,R5
sltu        R2,R0,R4
subu        R5,R5,R2
beq         R0,R0,label17
addiu       R19,R0,-1
label5:
 srlv        R4,R4,R5
sllv        R3,R9,R14
or          R9,R3,R4
sllv        R7,R6,R14
beq         R0,R0,label18
sllv        R11,R11,R14
label12:
 subu        R16,R13,R14
sllv        R17,R8,R14
srlv        R10,R6,R16
or          R15,R17,R10
srlv        R4,R5,R16
srl         R10,R15,0x10
divu        R4,R10
teq         R10,R0
srlv        R9,R11,R16
sllv        R12,R5,R14
andi        R17,R15,0xffff
or          R17,R12,R9
sllv        R16,R11,R14
srl         R3,R17,0x10
mflo        R6
mfhi        R8
mflo        R11
mul         R9,R6,R17
sll         R5,R8,0x10
or          R8,R5,R3
sltu        R2,R8,R9
divu        R4,R10
teq         R10,R0
beq         R2,R0,label19
sllv        R7,R7,R14
addu        R8,R8,R15
sltu        R2,R8,R15
bne         R2,R0,label19
addiu       R11,R6,-1
sltu        R4,R8,R9
beq         R4,R0,label20
subu        R3,R8,R9
addiu       R11,R11,-1
addu        R8,R8,R15
label19:
 subu        R3,R8,R9
label20:
 divu        R3,R10
teq         R10,R0
andi        R5,R17,0xffff
mflo        R9
mfhi        R8
mflo        R6
mul         R9,R9,R17
sll         R12,R8,0x10
or          R8,R12,R5
sltu        R17,R8,R9
divu        R3,R10
teq         R10,R0
beq         R17,R0,label21
sll         R2,R11,0x10
addu        R8,R8,R15
sltu        R10,R8,R15
bne         R10,R0,label21
addiu       R6,R6,-1
sltu        R17,R8,R9
beql        R17,R0,label22
subu        R9,R8,R9
addiu       R6,R6,-1
addu        R8,R8,R15
sll         R2,R11,0x10
label21:
 subu        R9,R8,R9
label22:
 or          R13,R2,R6
multu       R13,R7
mfhi        R8
sltu        R11,R9,R8
bne         R11,R0,label23
mflo        R5
xor         R3,R8,R9
sltiu       R4,R3,1
sltu        R17,R16,R5
and         R6,R4,R17
beq         R6,R0,label24
nop
label23:
 subu        R12,R5,R7
sltu        R7,R5,R12
subu        R10,R8,R15
subu        R8,R10,R7
addu        R5,R12,R0
label24:
 beq         R18,R0,label8
subu        R17,R16,R5
subu        R5,R9,R8
sltu        R8,R16,R17
subu        R16,R5,R8
sllv        R15,R16,R16
srlv        R16,R17,R14
or          R12,R15,R16
srlv        R13,R16,R14
sw          R12,0(R18)
beq         R0,R0,label8
sw          R13,4(R18)
label14:
 divu        R10,R6
teq         R6,R0
mflo        R7
clz         R14,R7
beq         R14,R0,label25
subu        R6,R9,R7
addiu       R15,R0,32
label15:
 subu        R16,R15,R14
sllv        R7,R7,R14
srlv        R4,R9,R16
srl         R10,R7,0x10
divu        R4,R10
teq         R10,R0
srlv        R13,R11,R16
sllv        R6,R9,R14
andi        R15,R7,0xffff
or          R9,R6,R13
srl         R3,R9,0x10
mflo        R12
mfhi        R8
mul         R6,R12,R15
sll         R5,R8,0x10
or          R8,R5,R3
sltu        R2,R8,R6
divu        R4,R10
teq         R10,R0
beq         R2,R0,label26
sllv        R11,R11,R14
addu        R8,R8,R7
sltu        R17,R8,R7
beq         R17,R0,label27
sltu        R2,R8,R6
label26:
 subu        R3,R8,R6
divu        R3,R10
teq         R10,R0
andi        R5,R9,0xffff
mflo        R13
mfhi        R12
mul         R8,R13,R15
sll         R4,R12,0x10
or          R6,R4,R5
sltu        R9,R6,R8
divu        R3,R10
teq         R10,R0
beql        R9,R0,label28
subu        R6,R6,R8
addu        R6,R6,R7
sltu        R16,R6,R7
bnel        R16,R0,label28
subu        R6,R6,R8
sltu        R17,R6,R8
xori        R16,R17,0x0
addu        R17,R6,R7
movn        R6,R17,R16
beq         R0,R0,label28
subu        R6,R6,R8
label27:
 xori        R17,R2,0x0
addu        R16,R8,R7
beq         R0,R0,label26
movn        R8,R16,R17
label_end:
}
}

// ----------------------------------------------------------------------------
/*
    __Lib_Math.c

    Copyright (c) 2024, MikroElektronika - www.mikroe.com

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/
// ----------------------------------------------------------------------------
