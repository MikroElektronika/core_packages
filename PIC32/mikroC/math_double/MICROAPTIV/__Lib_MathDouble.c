/*
    __lib_MathDouble.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
 * @brief Convert a floating-point number to a signed integral value of 8, 16, or 32 bits.
 */
void _FloatToSignedIntegral()
{
    asm {
sll         R5,R4,0x8
lui         R8,0x8000
or          R5,R5,R8
srl         R7,R4,0x17
andi        R7,R7,0xff
addiu       R6,R0,158
subu        R6,R6,R7
blez        R6,label1
nop
slti        R8,R6,32
bne         R8,R0,label2
nop
beq         R0,R0,label_end
addiu       R2,R0,0
label2:
 bgez        R4,label3
srlv        R5,R5,R6
subu        R5,R0,R5
label3:
or          R2,R0,R5
b label_end
nop
label1:
 lui         R8,0x7f80
ori         R8,R8,0x1
sltu        R8,R4,R8
bne         R8,R0,label4
nop
beq         R0,R0,label_end
lui         R2,0x8000
label4:
 lui         R2,0x7fff
ori         R2,R2,0xffff
label_end:
    }
}

/**
 * @brief Convert a floating-point number to an unsigned integral value of 8, 16, or 32 bits.
 */
void _FloatToUnsignedIntegral()
{
    asm {
sll         R5,R4,0x8
lui         R8,0x8000
or          R5,R5,R8
srl         R7,R4,0x17
andi        R7,R7,0xff
addiu       R6,R0,158
subu        R6,R6,R7
bltz        R6,label1
nop
slti        R8,R6,32
bne         R8,R0,label2
nop
beq         R0,R0,label_end
addiu       R2,R0,0
label2:
 bgez        R4,label4
srlv        R5,R5,R6
subu        R5,R0,R5
label4:
 or          R2,R0,R5
b label_end
nop
label1:
 lui         R8,0x7f80
ori         R8,R8,0x1
sltu        R8,R4,R8
bne         R8,R0,label5
nop
beq         R0,R0,label_end
lui         R2,0x8000
label5:
addiu       R2,R0,-1
label_end:
    }
}

void _LongDoubleToSignedIntegral()
{
    asm {
sll         R7,R5,0xb
srl         R10,R4,0x15
or          R7,R7,R10
lui         R8,0x8000
or          R7,R7,R8
sll         R10,R5,0x1
srl         R10,R10,0x15
addiu       R6,R0,1054
subu        R6,R6,R10
blez        R6,label1
nop
sltiu       R8,R6,32
bne         R8,R0,label2
nop
ori         R7,R0,0x0
label2:
 bgez        R5,label3
srlv        R7,R7,R6
subu        R7,R0,R7
label3:
 or          R2,R0,R7
b label_end
nop
label1:
 beq         R4,R0,label4
nop
ori         R5,R5,0x1
label4:
 lui         R8,0x7ff0
ori         R8,R8,0x1
sltu        R8,R5,R8
bne         R8,R0,label5
nop
beq         R0,R0,label_end
lui         R2,0x8000
label5:
 lui         R2,0x7fff
ori         R2,R2,0xffff
label_end:
    }
}

void _LongDoubleToUnsignedIntegral()
{
    asm {
sll         R7,R5,0xb
srl         R10,R4,0x15
or          R7,R7,R10
lui         R8,0x8000
or          R7,R7,R8
sll         R10,R5,0x1
srl         R10,R10,0x15
addiu       R6,R0,1054
subu        R6,R6,R10
bltz        R6,label1
nop
sltiu       R8,R6,32
bne         R8,R0,label2
nop
ori         R7,R0,0x0
label2:
 bgez        R5,label3
srlv        R7,R7,R6
subu        R7,R0,R7
label3:
 beq         R0,R0,label_end
 or          R2,R0,R7
label1:
 beq         R4,R0,label4
nop
ori         R5,R5,0x1
label4:
 lui         R8,0x7ff0
ori         R8,R8,0x1
sltu        R8,R5,R8
bne         R8,R0,label5
nop
beq         R0,R0,label_end
lui         R2,0x8000
label5:
addiu       R2,R0,-1
label_end:
    }
}

/**
 * @brief Convert signed integral values of 8, 16, or 32 bits to a floating-point number.
 */
void _SignedIntegralToFloat()
{
    asm {
  lui         R3,0x8000
  beq         R4,R0,label_end
  and         R6,R4,R3
  bgez        R4,label1
  nop
  subu        R4,R0,R4
  label1:
   addiu       R5,R0,158
  clz         R7,R4
  subu        R5,R5,R7
  sllv        R4,R4,R7
  addiu       R4,R4,128
  sltiu       R8,R4,128
  addu        R5,R5,R8
  sra         R8,R4,0x8
  andi        R8,R8,0x1
  subu        R4,R4,R8
  sll         R4,R4,0x1
  srl         R4,R4,0x9
  sll         R8,R5,0x17
  or          R4,R4,R8
  label_end:
   or          R2,R4,R6
    }
}

/**
 * @brief Convert signed integral values of 8, 16, or 32 bits to a long double.
 */
void _SignedIntegralToLongDouble()
{
    asm {
addiu       R5,R0,0
or          R9,R0,R5
or          R7,R0,R5
or          R6,R0,R4
beq         R6,R0,label1
nop
bgez        R6,label2
nop
lui         R9,0x8000
sltu        R10,R0,R5
subu        R5,R0,R5
subu        R6,R0,R6
subu        R6,R6,R10
label2:
 addiu       R7,R0,1054
clz         R8,R6
subu        R7,R7,R8
sllv        R6,R6,R8
label1:
 srl         R8,R5,0xb
sll         R10,R6,0x15
or          R8,R8,R10
sll         R10,R6,0x1
srl         R10,R10,0xc
or          R9,R9,R10
sll         R10,R7,0x14
or          R9,R9,R10
or          R2,R0,R8
or          R3,R0,R9

    }
}

/**
 * @brief Helper function for unsigned conversion, called from _UnsignedXXIntToFloat() function.
 */
static void _UnsignedIntegralToFloat()
{
    asm {
srl         R9,R4,0x17
andi        R9,R9,0xff
srl         R11,R5,0x17
andi        R11,R11,0xff
lui         R7,0x8000
sll         R8,R4,0x8
or          R8,R8,R7
sll         R10,R5,0x8
or          R10,R10,R7
addiu       R13,R9,-1
sltiu       R3,R13,254
beq         R3,R0,label1
nop
label18:
 addiu       R13,R11,-1
sltiu       R3,R13,254
beq         R3,R0,label2
nop
label23:
 subu        R12,R9,R11
bltz        R12,label3
nop
slti        R3,R12,32
bne         R3,R0,label4
nop
beq         R0,R0,label5
addiu       R10,R0,2
label4:
 or          R6,R0,R10
srlv        R10,R10,R12
sllv        R13,R10,R12
beq         R13,R6,label5
nop
beq         R0,R0,label5
ori         R10,R10,0x2
label3:
 or          R9,R0,R11
subu        R12,R0,R12
slti        R3,R12,32
bne         R3,R0,label6
nop
beq         R0,R0,label5
addiu       R8,R0,2
label6:
 or          R6,R0,R8
srlv        R8,R8,R12
sllv        R13,R8,R12
beq         R13,R6,label5
nop
ori         R8,R8,0x2
label5:
 and         R12,R4,R7
xor         R13,R12,R5
bltz        R13,label7
nop
addu        R8,R8,R10
sltu        R13,R8,R10
beq         R13,R0,label8
nop
andi        R13,R8,0x1
beq         R13,R0,label9
nop
ori         R8,R8,0x2
label9:
 srl         R8,R8,0x1
addiu       R9,R9,1
addiu       R3,R0,255
bne         R9,R3,label8
nop
beq         R0,R0,label8
addiu       R8,R0,0
label7:
 sltu        R13,R8,R10
beq         R13,R0,label10
subu        R8,R8,R10
subu        R8,R0,R8
beq         R0,R0,label11
xor         R12,R12,R7
label10:
 beq         R8,R0,label12
nop
label11:
 clz         R6,R8
subu        R9,R9,R6
sllv        R8,R8,R6
label8:
 blez        R9,label13
nop
label15:
 addiu       R8,R8,128
sltiu       R13,R8,128
addu        R9,R9,R13
srl         R13,R8,0x8
andi        R13,R13,0x1
subu        R8,R8,R13
sll         R8,R8,0x1
srl         R8,R8,0x9
sll         R13,R9,0x17
or          R8,R8,R13
beq         R0,R0,label_end
or          R2,R8,R12
label13:
 addiu       R6,R0,1
subu        R6,R6,R9
sltiu       R3,R6,32
beq         R3,R0,label12
nop
lui         R3,0x8000
or          R8,R8,R3
addiu       R13,R0,32
subu        R13,R13,R6
sllv        R9,R8,R13
beq         R9,R0,label14
srlv        R8,R8,R6
ori         R8,R8,0x1
label14:
 addiu       R9,R0,0
addiu       R13,R8,128
bgez        R13,label15
nop
beq         R0,R0,label15
addiu       R9,R0,1
label1:
 bne         R9,R0,label16
nop
addu        R8,R8,R8
beq         R8,R0,label17
nop
clz         R12,R8
subu        R9,R9,R12
beq         R0,R0,label18
sllv        R8,R8,R12
label17:
 addiu       R3,R0,255
beq         R11,R3,label2
nop
lui         R3,0x8000
bne         R5,R3,label19
nop
label16:
 addu        R13,R8,R8
bne         R13,R0,label20
nop
addiu       R3,R0,255
bne         R11,R3,label21
nop
xor         R13,R4,R5
bltz        R13,label20
nop
beq         R0,R0,label19
nop
label2:
 bne         R11,R0,label22
nop
addu        R10,R10,R10
beq         R10,R0,label21
nop
clz         R12,R10
subu        R11,R11,R12
beq         R0,R0,label23
sllv        R10,R10,R12
label22:
 addu        R13,R10,R10
bne         R13,R0,label20
nop
label19:
 beq         R0,R0,label_end
or          R2,R0,R5
label21:
 beq         R0,R0,label_end
or          R2,R0,R4
label12:
 beq         R0,R0,label_end
addiu       R2,R0,0
label20:
lui         R2,0xffc0
label_end:
    }
}

/**
 * @brief Convert an 8-bit unsigned integer to a float.
 */
void _Unsigned8IntToFloat()
{
    asm {
bgez R4, label_signed
nop
jal __SignedIntegralToFloat
nop
or R4,R2,R0 // R4=R2
lui R5, 17280 // R5=0x43800000    za 8bit
jal __Lib_MathDouble__UnsignedIntegralToFloat
nop
beq R0,R0, label_end
nop
label_signed:
jal __SignedIntegralToFloat
nop
label_end:
    }
}

/**
 * @brief Converts a 16-bit unsigned integer to a floating-point number.
 */
void _Unsigned16IntToFloat()
{
    asm {
bgez R4, label_signed
nop
jal __SignedIntegralToFloat
nop
or R4,R2,R0 // R4=R2
lui R5, 18304 // R5=0x47800000 za 16bit
jal __Lib_MathDouble__UnsignedIntegralToFloat
nop
beq R0,R0, label_end
nop
label_signed:
jal __SignedIntegralToFloat
nop
label_end:
    }
}

/**
 * @brief Converts a 32-bit unsigned integer to a floating-point number.
 */
void _Unsigned32IntToFloat()
{
    asm {
bltz R4, label_unsigned
nop
jal __SignedIntegralToFloat
nop
beq R0,R0, label_end
nop

label_unsigned:
or R2,R4,R0 // R2=R4
andi R2,R2,0x1
or R3,R4,R0 // R3=R4
srl R3,R3,0x1
or R2,R2,R3
addu R4,R2,R0
jal __SignedIntegralToFloat
nop
or R4,R2,0
or R5,R2,0
jal __Lib_MathDouble__UnsignedIntegralToFloat
nop
label_end:
    }
}

/**
 * @brief Helper function for unsigned conversion, called by _UnsignedXXIntToLongDouble() functions.
 */
static void _UnsignedIntegralToLongDouble()
{
    asm {
sll         R11,R5,0x1
srl         R11,R11,0x15
sll         R10,R5,0xb
srl         R15,R4,0x15
or          R10,R10,R15
sll         R9,R4,0xb
lui         R8,0x8000
or          R10,R10,R8
sll         R14,R7,0x1
srl         R14,R14,0x15
sll         R13,R7,0xb
srl         R15,R6,0x15
or          R13,R13,R15
sll         R12,R6,0xb
or          R13,R13,R8
addiu       R15,R11,-1
sltiu       R16,R15,2046
beq         R16,R0,label1
nop
label23:
 addiu       R15,R14,-1
sltiu       R16,R15,2046
beq         R16,R0,label2
nop
label30:
 lui         R16,0x8000
and         R5,R5,R16
subu        R8,R11,R14
beq         R8,R0,label3
nop
blez        R8,label4
nop
label6:
 sltiu       R16,R8,32
bne         R16,R0,label5
nop
addi        R8,R8,-32
sltu        R6,R0,R12
beq         R0,R13,label3
or          R12,R13,R6
beq         R0,R0,label6
ori         R13,R0,0x0
label5:
 beq         R8,R0,label3
nop
sub         R4,R0,R8
sllv        R6,R12,R4
sllv        R4,R13,R4
srlv        R12,R12,R8
srlv        R13,R13,R8
beq         R6,R0,label3
or          R12,R4,R12
beq         R0,R0,label3
ori         R12,R12,0x2
label4:
 or          R11,R0,R14
subu        R8,R0,R8
label8:
 sltiu       R16,R8,32
bne         R16,R0,label7
nop
addi        R8,R8,-32
sltu        R6,R0,R9
beq         R0,R10,label3
or          R9,R10,R6
beq         R0,R0,label8
ori         R10,R0,0x0
label7:
 beq         R8,R0,label3
nop
sub         R4,R0,R8
sllv        R6,R9,R4
sllv        R4,R10,R4
srlv        R9,R9,R8
srlv        R10,R10,R8
beq         R6,R0,label3
or          R9,R4,R9
ori         R9,R9,0x2
label3:
 xor         R15,R5,R7
bltz        R15,label9
nop
addu        R9,R9,R12
sltu        R15,R9,R12
addu        R10,R10,R13
addu        R10,R10,R15
beq         R10,R13,label10
nop
sltu        R15,R10,R13
label10:
 beq         R15,R0,label11
nop
andi        R15,R9,0x1
beq         R15,R0,label12
nop
ori         R9,R9,0x2
label12:
 srl         R9,R9,0x1
sll         R15,R10,0x1f
or          R9,R9,R15
srl         R10,R10,0x1
lui         R16,0x8000
or          R10,R10,R16
addiu       R11,R11,1
addiu       R16,R0,2047
bne         R11,R16,label11
nop
lui         R16,0x7ff0
or          R5,R5,R16
beq         R0,R0,label13
addiu       R4,R0,0
label9:
 sltu        R15,R9,R12
subu        R9,R9,R12
sltu        R2,R10,R15
subu        R10,R10,R15
sltu        R15,R10,R13
or          R15,R15,R2
beq         R15,R0,label14
subu        R10,R10,R13
lui         R16,0x8000
xor         R5,R5,R16
sltu        R15,R0,R9
subu        R9,R0,R9
subu        R10,R0,R10
subu        R10,R10,R15
label14:
 bne         R10,R0,label15
nop
bne         R9,R0,label16
nop
beq         R0,R0,label17
addiu       R11,R0,0
label16:
 or          R10,R9,R0
addiu       R9,R0,0
addiu       R11,R11,-32
label15:
 clz         R8,R10
beq         R8,R0,label17
nop
subu        R11,R11,R8
sub         R4,R0,R8
srlv        R4,R9,R4
sllv        R9,R9,R8
sllv        R10,R10,R8
or          R10,R10,R4
label17:
 or          R15,R10,R9
bne         R15,R0,label11
nop
addiu       R5,R0,0
label11:
 blez        R11,label18
nop
label34:
 addiu       R9,R9,1024
sltiu       R15,R9,1024
addu        R10,R10,R15
sltu        R15,R10,R15
addu        R11,R11,R15
srl         R15,R9,0xb
andi        R15,R15,0x1
subu        R9,R9,R15
srl         R4,R9,0xb
sll         R15,R10,0x15
or          R4,R4,R15
sll         R15,R10,0x1
srl         R15,R15,0xc
or          R5,R5,R15
sll         R15,R11,0x14
or          R5,R5,R15
label13:
 or          R2,R0,R4
or          R3,R0,R5
label25:
 beq R0,R0,label_end
nop
label1:
 slt         R15,R9,R0
addu        R9,R9,R9
addu        R10,R10,R10
bne         R11,R0,label19
addu        R10,R10,R15
or          R15,R10,R9
beq         R15,R0,label20
nop
bne         R10,R0,label21
nop
bne         R9,R0,label22
nop
beq         R0,R0,label23
addiu       R11,R0,0
label22:
 or          R10,R9,R0
addiu       R9,R0,0
addiu       R11,R11,-32
label21:
 clz         R8,R10
beq         R8,R0,label23
nop
subu        R11,R11,R8
sub         R4,R0,R8
srlv        R4,R9,R4
sllv        R9,R9,R8
sllv        R10,R10,R8
beq         R0,R0,label23
or          R10,R10,R4
label20:
 addiu       R16,R0,2047
beq         R14,R16,label2
nop
addu        R8,R7,R7
or          R15,R8,R6
bne         R15,R0,label24
nop
bltz        R7,label13
nop
label24:
 or          R2,R0,R6
beq         R0,R0,label25
or          R3,R0,R7
label19:
 or          R15,R10,R9
bne         R15,R0,label26
nop
addiu       R16,R0,2047
bne         R14,R16,label13
nop
xor         R15,R5,R7
bltz        R15,label26
nop
beq         R0,R0,label24
nop
label2:
 slt         R15,R12,R0
addu        R12,R12,R12
addu        R13,R13,R13
bne         R14,R0,label27
addu        R13,R13,R15
or          R15,R13,R12
beq         R15,R0,label13
nop
bne         R13,R0,label28
nop
bne         R12,R0,label29
nop
beq         R0,R0,label30
addiu       R14,R0,0
label29:
 or          R13,R12,R0
addiu       R12,R0,0
addiu       R14,R14,-32
label28:
 clz         R8,R13
beq         R8,R0,label30
nop
subu        R14,R14,R8
sub         R4,R0,R8
srlv        R4,R12,R4
sllv        R12,R12,R8
sllv        R13,R13,R8
beq         R0,R0,label30
or          R13,R13,R4
label27:
 or          R15,R13,R12
beq         R15,R0,label24
nop
label26:
 lui         R5,0xfff8
beq         R0,R0,label13
addiu       R4,R0,0
label18:
 addiu       R8,R0,1
subu        R8,R8,R11
label33:
 sltiu       R16,R8,32
bne         R16,R0,label31
nop
addi        R8,R8,-32
sltu        R6,R0,R9
beq         R0,R10,label32
or          R9,R10,R6
beq         R0,R0,label33
ori         R10,R0,0x0
label31:
 beq         R8,R0,label32
nop
sub         R4,R0,R8
sllv        R6,R9,R4
sllv        R4,R10,R4
srlv        R9,R9,R8
srlv        R10,R10,R8
beq         R6,R0,label32
or          R9,R4,R9
ori         R9,R9,0x2
label32:
 beq         R0,R0,label34
addiu       R11,R0,0
label_end:
    }
}

void _Unsigned8IntToLongDouble()
{
    asm {
bltz R4, label_negative
nop
jal __SignedIntegralToLongDouble
nop
beq R0,R0, label_end
nop

label_negative:
jal __SignedIntegralToLongDouble
nop
or R4,R2,R0
or R5,R3,R0
or R6,R0,R0
lui R7,0x4070
jal __Lib_MathDouble__UnsignedIntegralToLongDouble
nop
label_end:
    }
}

void _Unsigned16IntToLongDouble()
{
    asm {
bltz R4, label_negative
nop
jal __SignedIntegralToLongDouble
nop
beq R0,R0, label_end
nop

label_negative:
jal __SignedIntegralToLongDouble
nop
or R4,R2,R0
or R5,R3,R0
or R6,R0,R0
lui R7,0x40F0
jal __Lib_MathDouble__UnsignedIntegralToLongDouble
nop
label_end:
    }
}

void _Unsigned32IntToLongDouble()
{
    asm {
bltz R4, label_negative
nop
jal __SignedIntegralToLongDouble
nop
beq R0,R0, label_end
nop

label_negative:
jal __SignedIntegralToLongDouble
nop
or R4,R2,R0
or R5,R3,R0
or R6,R0,R0
lui R7,0x41F0
jal __Lib_MathDouble__UnsignedIntegralToLongDouble
nop
label_end:
    }
}

void _LongDoubleToFloat()
{
    asm {
sll         R7,R5,0xb
srl         R11,R4,0x15
or          R7,R7,R11
sll         R6,R4,0xb
lui         R3,0x8000
or          R7,R7,R3
lui         R3,0x8000
and         R9,R5,R3
sll         R8,R5,0x1
srl         R8,R8,0x15
addiu       R8,R8,-896
addiu       R11,R8,-1
sltiu       R3,R11,254
beq         R3,R0,label1
nop
label7:
 beq         R6,R0,label2
nop
ori         R7,R7,0x1
label2:
 addiu       R7,R7,128
sltiu       R11,R7,128
addu        R8,R8,R11
srl         R11,R7,0x8
andi        R11,R11,0x1
subu        R7,R7,R11
sll         R7,R7,0x1
srl         R7,R7,0x9
sll         R11,R8,0x17
or          R7,R7,R11

beq         R0,R0,label_end
or          R2,R7,R9
label1:
 addiu       R3,R0,1151
bne         R8,R3,label3
nop
sll         R11,R7,0x1
or          R11,R11,R6
beq         R11,R0,label3
nop
beq         R0,R0,label_end
lui         R2,0xffc0
label3:
 slti        R3,R8,255
bne         R3,R0,label5
nop
lui         R3,0x7f80
beq         R0,R0,label_end
or          R2,R9,R3
label5:
 addiu       R10,R0,1
subu        R10,R10,R8
sltiu       R3,R10,32
bne         R3,R0,label6
nop
beq         R0,R0,label_end
or          R2,R0,R9
label6:
 addiu       R12,R0,32
subu        R12,R12,R10
sllv        R11,R7,R12
or          R6,R6,R11
srlv        R7,R7,R10
addiu       R8,R0,0
lui         R3,0x8000
beq         R0,R0,label7
or          R7,R7,R3
label_end:
    }
}

void _FloatToLongDouble()
{
    asm {
srl         R7,R4,0x17
andi        R7,R7,0xff
lui         R8,0x8000
and         R6,R4,R8
addiu       R9,R7,-1
sltiu       R8,R9,254
beq         R8,R0,label1
nop
label5:
 addiu       R7,R7,896
sll         R9,R4,0x9
srl         R9,R9,0xc
or          R6,R6,R9
sll         R5,R4,0x1d
label2:
 sll         R9,R7,0x14
or          R6,R6,R9
or          R2,R0,R5
beq         R0,R0,label_end
or          R3,R0,R6
label1:
 addiu       R5,R0,0
addu        R4,R4,R4
beq         R4,R0,label2
nop
bne         R7,R0,label3
nop
label4:
 addiu       R7,R7,-1
addu        R4,R4,R4
lui         R8,0x80
sltu        R8,R4,R8
bne         R8,R0,label4
nop
beq         R0,R0,label5
nop
label3:
 addiu       R7,R0,2047
lui         R8,0xff00
ori         R8,R8,0x1
sltu        R8,R4,R8
bne         R8,R0,label2
nop
beq         R0,R0,label2
lui         R6,0xfff8
label_end:
    }
}

void _Add_FP()
{
    asm {
    srl         R9,R4,0x17 // from here add
    andi        R9,R9,0xff
    srl         R11,R6,0x17
    andi        R11,R11,0xff
    lui         R7,0x8000
    sll         R8,R4,0x8
    or          R8,R8,R7
    sll         R10,R6,0x8
    or          R10,R10,R7
    addiu       R13,R9,-1
    sltiu       R14,R13,254
    beq         R14,R0,label1
    nop
    label18:
    addiu       R13,R11,-1
    sltiu       R14,R13,254
    beq         R14,R0,label2
    nop
    label23:
    subu        R12,R9,R11
    bltz        R12,label3
    nop
    slti        R14,R12,32
    bne         R14,R0,label4
    nop
    beq         R0,R0,label5
    addiu       R10,R0,2
    label4:
     or          R5,R0,R10
    srlv        R10,R10,R12
    sllv        R13,R10,R12
    beq         R13,R5,label5
    nop
    beq         R0,R0,label5
    ori         R10,R10,0x2
    label3:
    or          R9,R0,R11
    subu        R12,R0,R12
    slti        R14,R12,32
    bne         R14,R0,label6
    nop
    beq         R0,R0,label5
    addiu       R8,R0,2
    label6:
    or          R5,R0,R8
    srlv        R8,R8,R12
    sllv        R13,R8,R12
    beq         R13,R5,label5
    nop
    ori         R8,R8,0x2
    label5:
    and         R12,R4,R7
    xor         R13,R12,R6
    bltz        R13,label7
    nop
    addu        R8,R8,R10
    sltu        R13,R8,R10
    beq         R13,R0,label8
    nop
    andi        R13,R8,0x1
    beq         R13,R0,label9
    nop
    ori         R8,R8,0x2
    label9:
    srl         R8,R8,0x1
    addiu       R9,R9,1
    addiu       R14,R0,255
    bne         R9,R14,label8
    nop
    beq         R0,R0,label8
    addiu       R8,R0,0
    label7:
    sltu        R13,R8,R10
    beq         R13,R0,label10
    subu        R8,R8,R10
    subu        R8,R0,R8
    beq         R0,R0,label11
    xor         R12,R12,R7
    label10:
    beq         R8,R0,label12
    nop
    label11:
    clz         R5,R8
    subu        R9,R9,R5
    sllv        R8,R8,R5
    label8:
    blez        R9,label13
    nop
    label15:
    addiu       R8,R8,128
    sltiu       R13,R8,128
    addu        R9,R9,R13
    srl         R13,R8,0x8
    andi        R13,R13,0x1
    subu        R8,R8,R13
    sll         R8,R8,0x1
    srl         R8,R8,0x9
    sll         R13,R9,0x17
    or          R8,R8,R13
    or          R2,R8,R12
    label24:
    B label_end
    nop
    label13:
    addiu       R5,R0,1
    subu        R5,R5,R9
    sltiu       R14,R5,32
    beq         R14,R0,label12
    nop
    lui         R14,0x8000
    or          R8,R8,R14
    addiu       R13,R0,32
    subu        R13,R13,R5
    sllv        R9,R8,R13
    beq         R9,R0,label14
    srlv        R8,R8,R5
    ori         R8,R8,0x1
    label14:
    addiu       R9,R0,0
    addiu       R13,R8,128
    bgez        R13,label15
    nop
    beq         R0,R0,label15
    addiu       R9,R0,1
    label1:
    bne         R9,R0,label16
    nop
    addu        R8,R8,R8
    beq         R8,R0,label17
    nop
    clz         R12,R8
    subu        R9,R9,R12
    beq         R0,R0,label18
    sllv        R8,R8,R12
    label17:
    addiu       R14,R0,255
    beq         R11,R14,label2
    nop
    lui         R14,0x8000
    bne         R6,R14,label19
    nop
    label16:
    addu        R13,R8,R8
    bne         R13,R0,label20
    nop
    addiu       R14,R0,255
    bne         R11,R14,label21
    nop
    xor         R13,R4,R6
    bltz        R13,label20
    nop
    beq         R0,R0,label19
    nop
    label2:
    bne         R11,R0,label22
    nop
    addu        R10,R10,R10
    beq         R10,R0,label21
    nop
    clz         R12,R10
    subu        R11,R11,R12
    beq         R0,R0,label23
    sllv        R10,R10,R12
    label22:
    addu        R13,R10,R10
    bne         R13,R0,label20
    nop
    label19:
    beq         R0,R0,label24
    or          R2,R0,R6
    label21:
    beq         R0,R0,label24
    or          R2,R0,R4
    label12:
    beq         R0,R0,label24
    addiu       R2,R0,0
    label20:
    beq         R0,R0,label24
    lui         R2,0xffc0
    label_end:
    }
}

void _Sub_FP( void )
{
    asm {
  lui         R5,0x8000 // from here sub
  xor         R6,R6,R5
    }
    _Add_FP();
}

void _Mul_FP( void )
{
    asm {
srl         R7,R4,0x17
andi        R7,R7,0xff
srl         R9,R6,0x17
andi        R9,R9,0xff
lui         R10,0x8000
sll         R5,R4,0x8
or          R5,R5,R10
sll         R8,R6,0x8
or          R8,R8,R10
xor         R12,R4,R6
and         R10,R10,R12
addiu       R12,R7,-1
sltiu       R15,R12,254
beq         R15,R0,label1
nop
label8:
 addiu       R12,R9,-1
sltiu       R15,R12,254
beq         R15,R0,label2
nop
label14:
 multu       R5,R8
mflo        R11
beq         R11,R0,label3
mfhi        R5
ori         R5,R5,0x1
label3:
 bltz        R5,label4
nop
sll         R5,R5,0x1
addiu       R7,R7,-1
label4:
 addiu       R12,R9,-126
addu        R7,R7,R12
addiu       R12,R7,-1
sltiu       R15,R12,254
beq         R15,R0,label5
nop
label17:
 addiu       R5,R5,128
sltiu       R12,R5,128
addu        R7,R7,R12
srl         R12,R5,0x8
andi        R12,R12,0x1
subu        R5,R5,R12
sll         R5,R5,0x1
srl         R5,R5,0x9
sll         R12,R7,0x17
or          R5,R5,R12
or          R2,R5,R10
label15:
 B          label_end
nop
label1:
 bne         R7,R0,label6
nop
addu        R5,R5,R5
beq         R5,R0,label7
nop
clz         R11,R5
subu        R7,R7,R11
beq         R0,R0,label8
sllv        R5,R5,R11
label7:
 addiu       R15,R0,255
beq         R9,R15,label9
nop
beq         R0,R0,label10
nop
label6:
 addu        R12,R5,R5
bne         R12,R0,label9
nop
bne         R9,R0,label11
nop
addu        R12,R8,R8
beq         R12,R0,label9
nop
label11:
 addiu       R15,R0,255
bne         R9,R15,label12
nop
label2:
 bne         R9,R0,label13
nop
addu        R8,R8,R8
beq         R8,R0,label10
nop
clz         R11,R8
subu        R9,R9,R11
beq         R0,R0,label14
sllv        R8,R8,R11
label10:
 beq         R0,R0,label15
or          R2,R0,R10
label13:
 addu        R12,R8,R8
bne         R12,R0,label9
nop
label12:
 lui         R15,0x7f80
beq         R0,R0,label15
or          R2,R10,R15
label9:
 beq         R0,R0,label15
lui         R2,0xffc0
label5:
 bgtz        R7,label12
nop
addiu       R11,R0,1
subu        R11,R11,R7
sltiu       R15,R11,32
beq         R15,R0,label10
nop
addiu       R12,R0,32
subu        R12,R12,R11
sllv        R7,R5,R12
beq         R7,R0,label16
srlv        R5,R5,R11
ori         R5,R5,0x2
label16:
 addiu       R7,R0,0
addiu       R12,R5,128
bgez        R12,label17
nop
beq         R0,R0,label17
addiu       R7,R0,1
label_end:
    }
}

void _Div_FP( void )
{
    asm {
lui         R11,0x8000
srl         R8,R4,0x17
andi        R8,R8,0xff
srl         R10,R6,0x17
andi        R10,R10,0xff
sll         R7,R4,0x8
or          R7,R7,R11
sll         R9,R6,0x8
or          R9,R9,R11
xor         R14,R4,R6
and         R11,R11,R14
addiu       R14,R8,-1
sltiu       R15,R14,254
beq         R15,R0,label18
nop
label26:
 addiu       R14,R10,-1
sltiu       R15,R14,254
beq         R15,R0,label19
nop
label32:
 sltu        R15,R7,R9
bne         R15,R0,label20
nop
srl         R7,R7,0x1
addiu       R8,R8,1
label20:
 srl         R12,R9,0xe
teq         R12,R0
divu        R7,R12
mflo        R4
mfhi        R5
andi        R13,R9,0x3fff
multu       R13,R4
mflo        R6
sll         R5,R5,0xe
sltu        R14,R5,R6
beq         R14,R0,label21
subu        R5,R5,R6
addiu       R4,R4,-1
addu        R5,R5,R9
sltu        R14,R5,R9
label21:
 teq         R12,R0
divu        R5,R12
mflo        R7
mfhi        R5
multu       R13,R7
mflo        R6
sll         R5,R5,0xe
sltu        R14,R5,R6
beq         R14,R0,label22
subu        R5,R5,R6
addiu       R7,R7,-1
addu        R5,R5,R9
sltu        R14,R5,R9
label22:
 sll         R14,R4,0xe
addu        R7,R7,R14
beq         R5,R0,label23
sll         R7,R7,0x4
ori         R7,R7,0x1
label23:
 addiu       R14,R0,126
subu        R14,R14,R10
addu        R8,R8,R14
addiu       R14,R8,-1
sltiu       R15,R14,254
beq         R15,R0,label24
nop
label35:
 addiu       R7,R7,128
sltiu       R14,R7,128
addu        R8,R8,R14
srl         R14,R7,0x8
andi        R14,R14,0x1
subu        R7,R7,R14
sll         R7,R7,0x1
srl         R7,R7,0x9
sll         R14,R8,0x17
or          R7,R7,R14
or          R2,R7,R11
label33:
 b label_end
nop
label18:
 bne         R8,R0,label25
nop
addu        R7,R7,R7
beq         R7,R0,label25
nop
clz         R12,R7
subu        R8,R8,R12
beq         R0,R0,label26
sllv        R7,R7,R12
label25:
 bne         R10,R8,label27
nop
addu        R14,R9,R9
beq         R14,R0,label28
nop
label27:
 addiu       R15,R0,255
beq         R10,R15,label19
nop
beq         R8,R0,label29
nop
addu        R14,R7,R7
bne         R14,R0,label28
nop
beq         R0,R0,label30
nop
label19:
 bne         R10,R0,label31
nop
addu        R9,R9,R9
beq         R9,R0,label30
nop
clz         R12,R9
subu        R10,R10,R12
beq         R0,R0,label32
sllv        R9,R9,R12
label31:
 addu        R14,R9,R9
bne         R14,R0,label28
nop
label29:
 beq         R0,R0,label33
or          R2,R0,R11
label24:
 bgtz        R8,label30
nop
addiu       R12,R0,1
subu        R12,R12,R8
sltiu       R15,R12,32
beq         R15,R0,label29
nop
addiu       R14,R0,32
subu        R14,R14,R12
sllv        R8,R7,R14
beq         R8,R0,label34
srlv        R7,R7,R12
ori         R7,R7,0x2
label34:
 addiu       R8,R0,0
addiu       R14,R7,128
bgez        R14,label35
nop
beq         R0,R0,label35
addiu       R8,R0,1
label30:
 lui         R15,0x7f80
beq         R0,R0,label33
or          R2,R11,R15
label28:
 beq         R0,R0,label33
lui         R2,0xffc0
label_end:
    }
}
void _Compare_FP()
{
    asm {
addiu       R8,R0,-2
sll         R5,R4,0x1
sll         R7,R6,0x1
or          R9,R5,R7
beq         R9,R0,label49
nop
lui         R15,0xff00
ori         R15,R15,0x1
sltu        R15,R5,R15
beq         R15,R0,label50
nop
lui         R15,0xff00
ori         R15,R15,0x1
sltu        R15,R7,R15
beq         R15,R0,label50
nop
bgez        R4,label51
srl         R5,R5,0x1
subu        R5,R0,R5
label51:
 bgez        R6,label52
srl         R7,R7,0x1
subu        R7,R0,R7
label52:
 slt         R15,R5,R7
beq         R15,R0,label53
nop
beq         R0,R0,label54
addiu       R2,R0,-1
label53:
 slt         R15,R7,R5
beq         R15,R0,label49
nop
beq         R0,R0,label54
addiu       R2,R0,1
label49:
 addiu       R2,R0,0
label54:
 b label_end
nop
label50:
 beq         R0,R0,label54
or          R2,R0,R8
label_end:
    }
}

void _Add_DP()
{
    asm {
sll         R11,R5,0x1
srl         R11,R11,0x15
sll         R10,R5,0xb
srl         R15,R4,0x15
or          R10,R10,R15
sll         R9,R4,0xb
lui         R8,0x8000
or          R10,R10,R8
sll         R14,R7,0x1
srl         R14,R14,0x15
sll         R13,R7,0xb
srl         R15,R6,0x15
or          R13,R13,R15
sll         R12,R6,0xb
or          R13,R13,R8
addiu       R15,R11,-1
sltiu       R16,R15,2046
beq         R16,R0,label1
nop
label23:
 addiu       R15,R14,-1
sltiu       R16,R15,2046
beq         R16,R0,label2
nop
label30:
 lui         R16,0x8000
and         R5,R5,R16
subu        R8,R11,R14
beq         R8,R0,label3
nop
blez        R8,label4
nop
label6:
 sltiu       R16,R8,32
bne         R16,R0,label5
nop
addi        R8,R8,-32
sltu        R6,R0,R12
beq         R0,R13,label3
or          R12,R13,R6
beq         R0,R0,label6
ori         R13,R0,0x0
label5:
 beq         R8,R0,label3
nop
sub         R4,R0,R8
sllv        R6,R12,R4
sllv        R4,R13,R4
srlv        R12,R12,R8
srlv        R13,R13,R8
beq         R6,R0,label3
or          R12,R4,R12
beq         R0,R0,label3
ori         R12,R12,0x2
label4:
 or          R11,R0,R14
subu        R8,R0,R8
label8:
 sltiu       R16,R8,32
bne         R16,R0,label7
nop
addi        R8,R8,-32
sltu        R6,R0,R9
beq         R0,R10,label3
or          R9,R10,R6
beq         R0,R0,label8
ori         R10,R0,0x0
label7:
 beq         R8,R0,label3
nop
sub         R4,R0,R8
sllv        R6,R9,R4
sllv        R4,R10,R4
srlv        R9,R9,R8
srlv        R10,R10,R8
beq         R6,R0,label3
or          R9,R4,R9
ori         R9,R9,0x2
label3:
 xor         R15,R5,R7
bltz        R15,label9
nop
addu        R9,R9,R12
sltu        R15,R9,R12
addu        R10,R10,R13
addu        R10,R10,R15
beq         R10,R13,label10
nop
sltu        R15,R10,R13
label10:
 beq         R15,R0,label11
nop
andi        R15,R9,0x1
beq         R15,R0,label12
nop
ori         R9,R9,0x2
label12:
 srl         R9,R9,0x1
sll         R15,R10,0x1f
or          R9,R9,R15
srl         R10,R10,0x1
lui         R16,0x8000
or          R10,R10,R16
addiu       R11,R11,1
addiu       R16,R0,2047
bne         R11,R16,label11
nop
lui         R16,0x7ff0
or          R5,R5,R16
beq         R0,R0,label13
addiu       R4,R0,0
label9:
 sltu        R15,R9,R12
subu        R9,R9,R12
sltu        R2,R10,R15
subu        R10,R10,R15
sltu        R15,R10,R13
or          R15,R15,R2
beq         R15,R0,label14
subu        R10,R10,R13
lui         R16,0x8000
xor         R5,R5,R16
sltu        R15,R0,R9
subu        R9,R0,R9
subu        R10,R0,R10
subu        R10,R10,R15
label14:
 bne         R10,R0,label15
nop
bne         R9,R0,label16
nop
beq         R0,R0,label17
addiu       R11,R0,0
label16:
 or          R10,R9,R0
addiu       R9,R0,0
addiu       R11,R11,-32
label15:
 clz         R8,R10
beq         R8,R0,label17
nop
subu        R11,R11,R8
sub         R4,R0,R8
srlv        R4,R9,R4
sllv        R9,R9,R8
sllv        R10,R10,R8
or          R10,R10,R4
label17:
 or          R15,R10,R9
bne         R15,R0,label11
nop
addiu       R5,R0,0
label11:
 blez        R11,label18
nop
label34:
 addiu       R9,R9,1024
sltiu       R15,R9,1024
addu        R10,R10,R15
sltu        R15,R10,R15
addu        R11,R11,R15
srl         R15,R9,0xb
andi        R15,R15,0x1
subu        R9,R9,R15
srl         R4,R9,0xb
sll         R15,R10,0x15
or          R4,R4,R15
sll         R15,R10,0x1
srl         R15,R15,0xc
or          R5,R5,R15
sll         R15,R11,0x14
or          R5,R5,R15
label13:
 or          R2,R0,R4
or          R3,R0,R5
label25:
 b label_end
nop
label1:
 slt         R15,R9,R0
addu        R9,R9,R9
addu        R10,R10,R10
bne         R11,R0,label19
addu        R10,R10,R15
or          R15,R10,R9
beq         R15,R0,label20
nop
bne         R10,R0,label21
nop
bne         R9,R0,label22
nop
beq         R0,R0,label23
addiu       R11,R0,0
label22:
 or          R10,R9,R0
addiu       R9,R0,0
addiu       R11,R11,-32
label21:
 clz         R8,R10
beq         R8,R0,label23
nop
subu        R11,R11,R8
sub         R4,R0,R8
srlv        R4,R9,R4
sllv        R9,R9,R8
sllv        R10,R10,R8
beq         R0,R0,label23
or          R10,R10,R4
label20:
 addiu       R16,R0,2047
beq         R14,R16,label2
nop
addu        R8,R7,R7
or          R15,R8,R6
bne         R15,R0,label24
nop
bltz        R7,label13
nop
label24:
 or          R2,R0,R6
beq         R0,R0,label25
or          R3,R0,R7
label19:
 or          R15,R10,R9
bne         R15,R0,label26
nop
addiu       R16,R0,2047
bne         R14,R16,label13
nop
xor         R15,R5,R7
bltz        R15,label26
nop
beq         R0,R0,label24
nop
label2:
 slt         R15,R12,R0
addu        R12,R12,R12
addu        R13,R13,R13
bne         R14,R0,label27
addu        R13,R13,R15
or          R15,R13,R12
beq         R15,R0,label13
nop
bne         R13,R0,label28
nop
bne         R12,R0,label29
nop
beq         R0,R0,label30
addiu       R14,R0,0
label29:
 or          R13,R12,R0
addiu       R12,R0,0
addiu       R14,R14,-32
label28:
 clz         R8,R13
beq         R8,R0,label30
nop
subu        R14,R14,R8
sub         R4,R0,R8
srlv        R4,R12,R4
sllv        R12,R12,R8
sllv        R13,R13,R8
beq         R0,R0,label30
or          R13,R13,R4
label27:
 or          R15,R13,R12
beq         R15,R0,label24
nop
label26:
 lui         R5,0xfff8
beq         R0,R0,label13
addiu       R4,R0,0
label18:
 addiu       R8,R0,1
subu        R8,R8,R11
label33:
 sltiu       R16,R8,32
bne         R16,R0,label31
nop
addi        R8,R8,-32
sltu        R6,R0,R9
beq         R0,R10,label32
or          R9,R10,R6
beq         R0,R0,label33
ori         R10,R0,0x0
label31:
 beq         R8,R0,label32
nop
sub         R4,R0,R8
sllv        R6,R9,R4
sllv        R4,R10,R4
srlv        R9,R9,R8
srlv        R10,R10,R8
beq         R6,R0,label32
or          R9,R4,R9
ori         R9,R9,0x2
label32:
 beq         R0,R0,label34
addiu       R11,R0,0
label_end:
    }
}

void _Sub_DP( void )
{
    asm {
lui         R8,0x8000
xor         R7,R7,R8
    }
    _Add_DP();
}

void _Mul_DP()
{
    asm {
sll         R10,R5,0x1
srl         R10,R10,0x15
sll         R9,R5,0xb
srl         R15,R4,0x15
or          R9,R9,R15
sll         R8,R4,0xb
lui         R14,0x8000
or          R9,R9,R14
sll         R13,R7,0x1
srl         R13,R13,0x15
sll         R12,R7,0xb
srl         R15,R6,0x15
or          R12,R12,R15
sll         R11,R6,0xb
or          R12,R12,R14
xor         R5,R5,R7
and         R5,R5,R14
addiu       R15,R10,-1
sltiu       R16,R15,2046
beq         R16,R0,label35
nop
label46:
 addiu       R15,R13,-1
sltiu       R16,R15,2046
beq         R16,R0,label36
nop
label55:
 addiu       R15,R13,-1022
addu        R10,R10,R15
multu       R9,R12
mflo        R7
mfhi        R14
multu       R8,R11
mflo        R4
mfhi        R6
multu       R9,R11
mflo        R11
mfhi        R13
addu        R6,R6,R11
sltu        R15,R6,R11
addu        R7,R7,R13
addu        R7,R7,R15
beq         R7,R13,label37
nop
sltu        R15,R7,R13
label37:
 addu        R14,R14,R15
multu       R8,R12
mflo        R8
mfhi        R9
addu        R6,R6,R8
sltu        R15,R6,R8
addu        R7,R7,R9
addu        R7,R7,R15
beq         R7,R9,label38
nop
sltu        R15,R7,R9
label38:
 addu        R14,R14,R15
or          R15,R4,R6
beq         R15,R0,label39
nop
ori         R7,R7,0x1
label39:
 or          R9,R0,R14
bltz        R9,label40
or          R8,R0,R7
slt         R15,R8,R0
addu        R8,R8,R8
addu        R9,R9,R9
addu        R9,R9,R15
addiu       R10,R10,-1
label40:
 addiu       R15,R10,-1
sltiu       R16,R15,2046
beq         R16,R0,label41
nop
addiu       R8,R8,1024
sltiu       R15,R8,1024
addu        R9,R9,R15
sltu        R15,R9,R15
addu        R10,R10,R15
label59:
 srl         R15,R8,0xb
andi        R15,R15,0x1
subu        R8,R8,R15
srl         R4,R8,0xb
sll         R15,R9,0x15
or          R4,R4,R15
sll         R15,R9,0x1
srl         R15,R15,0xc
or          R5,R5,R15
sll         R15,R10,0x14
or          R5,R5,R15
label48:
 or          R2,R0,R4
or          R3,R0,R5
b label_end
nop
label35:
 slt         R15,R8,R0
addu        R8,R8,R8
addu        R9,R9,R9
bne         R10,R0,label42
addu        R9,R9,R15
or          R15,R9,R8
beq         R15,R0,label43
nop
bne         R9,R0,label44
nop
bne         R8,R0,label45
nop
beq         R0,R0,label46
addiu       R10,R0,0
label45:
 or          R9,R8,R0
addiu       R8,R0,0
addiu       R10,R10,-32
label44:
 clz         R14,R9
beq         R14,R0,label46
nop
subu        R10,R10,R14
sub         R7,R0,R14
srlv        R7,R8,R7
sllv        R8,R8,R14
sllv        R9,R9,R14
beq         R0,R0,label46
or          R9,R9,R7
label43:
 addiu       R16,R0,2047
beq         R13,R16,label47
nop
beq         R0,R0,label48
nop
label42:
 or          R15,R9,R8
bne         R15,R0,label47
nop
bne         R13,R0,label49
nop
sll         R15,R12,0x1
or          R15,R15,R11
beq         R15,R0,label47
nop
label49:
 addiu       R16,R0,2047
bne         R13,R16,label50
nop
label36:
 slt         R15,R11,R0
addu        R11,R11,R11
addu        R12,R12,R12
bne         R13,R0,label51
addu        R12,R12,R15
or          R15,R12,R11
beq         R15,R0,label52
nop
bne         R12,R0,label53
nop
bne         R11,R0,label54
nop
beq         R0,R0,label55
addiu       R13,R0,0
label54:
 or          R12,R11,R0
addiu       R11,R0,0
addiu       R13,R13,-32
label53:
 clz         R6,R12
beq         R6,R0,label55
nop
subu        R13,R13,R6
sub         R14,R0,R6
srlv        R14,R11,R14
sllv        R11,R11,R6
sllv        R12,R12,R6
beq         R0,R0,label55
or          R12,R12,R14
label52:
 beq         R0,R0,label48
addiu       R4,R0,0
label51:
 or          R15,R12,R11
bne         R15,R0,label47
nop
label50:
 lui         R16,0x7ff0
or          R5,R5,R16
beq         R0,R0,label48
addiu       R4,R0,0
label47:
 lui         R5,0xfff8
beq         R0,R0,label48
addiu       R4,R0,0
label41:
 bgtz        R10,label50
nop
addiu       R14,R0,1
subu        R14,R14,R10
label58:
 sltiu       R16,R14,32
bne         R16,R0,label56
nop
addi        R14,R14,-32
sltu        R6,R0,R8
beq         R0,R9,label57
or          R8,R9,R6
beq         R0,R0,label58
ori         R9,R0,0x0
label56:
 beq         R14,R0,label57
nop
sub         R7,R0,R14
sllv        R6,R8,R7
sllv        R7,R9,R7
srlv        R8,R8,R14
srlv        R9,R9,R14
beq         R6,R0,label57
or          R8,R7,R8
ori         R8,R8,0x2
label57:
 addiu       R8,R8,1024
sltiu       R15,R8,1024
addu        R9,R9,R15
beq         R0,R0,label59
srl         R10,R9,0x1f
label_end:
    }
}

void _Div_DP()
{
    asm {
sll         R10,R5,0x1
srl         R10,R10,0x15
sll         R9,R5,0xb
srl         R15,R4,0x15
or          R9,R9,R15
sll         R8,R4,0xb
lui         R14,0x8000
or          R9,R9,R14
sll         R13,R7,0x1
srl         R13,R13,0x15
sll         R12,R7,0xb
srl         R15,R6,0x15
or          R12,R12,R15
sll         R11,R6,0xb
or          R12,R12,R14
xor         R5,R5,R7
and         R5,R5,R14
addiu       R15,R10,-1
sltiu       R16,R15,2046
beq         R16,R0,label60
nop
label89:
 addiu       R15,R13,-1
sltiu       R16,R15,2046
beq         R16,R0,label61
nop
label96:
 subu        R10,R10,R13
addiu       R10,R10,1023
srl         R8,R8,0x1
sll         R15,R9,0x1f
or          R8,R8,R15
srl         R9,R9,0x1
srl         R7,R12,0x10
teq         R7,R0
divu        R9,R7
mflo        R14
mfhi        R9
andi        R6,R12,0xffff
multu       R6,R14
mflo        R4
sll         R9,R9,0x10
srl         R15,R8,0x10
or          R9,R9,R15
sltu        R15,R9,R4
beq         R15,R0,label62
subu        R9,R9,R4
label63:
 addiu       R14,R14,-1
addu        R9,R9,R12
sltu        R16,R9,R12
beq         R16,R0,label63
nop
label62:
 teq         R7,R0
divu        R9,R7
mflo        R7
mfhi        R9
multu       R6,R7
mflo        R4
sll         R9,R9,0x10
andi        R15,R8,0xffff
or          R9,R9,R15
sltu        R15,R9,R4
beq         R15,R0,label64
subu        R9,R9,R4
label65:
 addiu       R7,R7,-1
addu        R9,R9,R12
sltu        R16,R9,R12
beq         R16,R0,label65
nop
label64:
 sll         R14,R14,0x10
addu        R14,R14,R7
multu       R14,R11
mflo        R7
mfhi        R4
addiu       R8,R0,0
sltu        R15,R8,R7
subu        R8,R8,R7
sltu        R2,R9,R15
subu        R9,R9,R15
sltu        R15,R9,R4
or          R15,R15,R2
beq         R15,R0,label66
subu        R9,R9,R4
label68:
 addiu       R14,R14,-1
addu        R8,R8,R11
sltu        R15,R8,R11
addu        R9,R9,R12
addu        R9,R9,R15
beq         R9,R12,label67
nop
sltu        R15,R9,R12
label67:
 beq         R15,R0,label68
nop
label66:
 bne         R9,R12,label69
nop
or          R4,R0,R11
or          R9,R0,R8
addiu       R13,R0,0
beq         R0,R0,label70
or          R7,R0,R13
label69:
 srl         R7,R12,0x10
teq         R7,R0
divu        R9,R7
mflo        R13
mfhi        R9
andi        R6,R12,0xffff
multu       R6,R13
mflo        R4
sll         R9,R9,0x10
srl         R15,R8,0x10
or          R9,R9,R15
sltu        R15,R9,R4
beq         R15,R0,label71
subu        R9,R9,R4
label72:
 addiu       R13,R13,-1
addu        R9,R9,R12
sltu        R16,R9,R12
beq         R16,R0,label72
nop
label71:
 teq         R7,R0
divu        R9,R7
mflo        R7
mfhi        R9
multu       R6,R7
mflo        R4
sll         R9,R9,0x10
andi        R15,R8,0xffff
or          R9,R9,R15
sltu        R15,R9,R4
beq         R15,R0,label73
subu        R9,R9,R4
label74:
 addiu       R7,R7,-1
addu        R9,R9,R12
sltu        R16,R9,R12
beq         R16,R0,label74
nop
label73:
 sll         R13,R13,0x10
addu        R13,R13,R7
multu       R13,R11
mflo        R7
mfhi        R4
label70:
 addiu       R8,R0,0
sltu        R15,R8,R7
subu        R8,R8,R7
sltu        R2,R9,R15
subu        R9,R9,R15
sltu        R15,R9,R4
or          R15,R15,R2
beq         R15,R0,label75
subu        R9,R9,R4
label77:
 addiu       R13,R13,-1
addu        R8,R8,R11
sltu        R15,R8,R11
addu        R9,R9,R12
addu        R9,R9,R15
beq         R9,R12,label76
nop
sltu        R15,R9,R12
label76:
 beq         R15,R0,label77
nop
label75:
 bltz        R14,label78
nop
slt         R15,R13,R0
addu        R13,R13,R13
addu        R14,R14,R14
addu        R14,R14,R15
addiu       R10,R10,-1
label78:
 or          R15,R9,R8
beq         R15,R0,label79
nop
ori         R13,R13,0x1
label79:
 or          R9,R0,R14
or          R8,R0,R13
addiu       R15,R10,-1
sltiu       R16,R15,2046
beq         R16,R0,label80
nop
addiu       R8,R8,1024
sltiu       R15,R8,1024
addu        R9,R9,R15
sltu        R15,R9,R15
addu        R10,R10,R15
label85:
 srl         R15,R8,0xb
andi        R15,R15,0x1
subu        R8,R8,R15
srl         R4,R8,0xb
sll         R15,R9,0x15
or          R4,R4,R15
sll         R15,R9,0x1
srl         R15,R15,0xc
or          R5,R5,R15
sll         R15,R10,0x14
or          R5,R5,R15
label92:
 or          R2,R0,R4
or          R3,R0,R5
b label_end
nop
label80:
 bgtz        R10,label81
nop
addiu       R14,R0,1
subu        R14,R14,R10
label84:
 sltiu       R16,R14,32
bne         R16,R0,label82
nop
addi        R14,R14,-32
sltu        R4,R0,R8
beq         R0,R9,label83
or          R8,R9,R4
beq         R0,R0,label84
ori         R9,R0,0x0
label82:
 beq         R14,R0,label83
nop
sub         R6,R0,R14
sllv        R4,R8,R6
sllv        R6,R9,R6
srlv        R8,R8,R14
srlv        R9,R9,R14
beq         R4,R0,label83
or          R8,R6,R8
ori         R8,R8,0x2
label83:
 addiu       R8,R8,1024
sltiu       R15,R8,1024
addu        R9,R9,R15
beq         R0,R0,label85
srl         R10,R9,0x1f
label60:
 slt         R15,R8,R0
addu        R8,R8,R8
addu        R9,R9,R9
bne         R10,R0,label86
addu        R9,R9,R15
or          R15,R9,R8
beq         R15,R0,label86
nop
bne         R9,R0,label87
nop
bne         R8,R0,label88
nop
beq         R0,R0,label89
addiu       R10,R0,0
label88:
 or          R9,R8,R0
addiu       R8,R0,0
addiu       R10,R10,-32
label87:
 clz         R14,R9
beq         R14,R0,label89
nop
subu        R10,R10,R14
sub         R6,R0,R14
srlv        R6,R8,R6
sllv        R8,R8,R14
sllv        R9,R9,R14
beq         R0,R0,label89
or          R9,R9,R6
label86:
 bne         R10,R13,label90
nop
sll         R15,R12,0x1
or          R15,R15,R11
beq         R15,R0,label91
nop
label90:
 addiu       R16,R0,2047
beq         R13,R16,label61
nop
beq         R10,R0,label92
nop
or          R15,R9,R8
bne         R15,R0,label91
nop
label81:
 lui         R16,0x7ff0
or          R5,R5,R16
beq         R0,R0,label92
addiu       R4,R0,0
label61:
 slt         R15,R11,R0
addu        R11,R11,R11
addu        R12,R12,R12
bne         R13,R0,label93
addu        R12,R12,R15
or          R15,R12,R11
beq         R15,R0,label81
nop
bne         R12,R0,label94
nop
bne         R11,R0,label95
nop
beq         R0,R0,label96
addiu       R13,R0,0
label95:
 or          R12,R11,R0
addiu       R11,R0,0
addiu       R13,R13,-32
label94:
 clz         R14,R12
beq         R14,R0,label96
nop
subu        R13,R13,R14
sub         R6,R0,R14
srlv        R6,R11,R6
sllv        R11,R11,R14
sllv        R12,R12,R14
beq         R0,R0,label96
or          R12,R12,R6
label93:
 or          R15,R12,R11
beq         R15,R0,label97
nop
label91:
 lui         R5,0xfff8
label97:
 beq         R0,R0,label92
addiu       R4,R0,0
label_end:
    }
}

void _Compare_DP()
{
    asm {
addiu       R9,R0,-2
sll         R10,R5,0x1
sll         R11,R7,0x1
or          R11,R11,R4
or          R11,R11,R6
or          R10,R10,R11
bne         R10,R0,label125
nop
beq         R0,R0,label126
addiu       R2,R0,0
label125:
 beq         R4,R0,label127
sll         R8,R5,0x1
addiu       R8,R8,1
label127:
 lui         R16,0xffe0
ori         R16,R16,0x1
sltu        R16,R8,R16
beq         R16,R0,label128
nop
beq         R6,R0,label129
sll         R8,R7,0x1
addiu       R8,R8,1
label129:
 lui         R16,0xffe0
ori         R16,R16,0x1
sltu        R16,R8,R16
beq         R16,R0,label128
nop
bgez        R5,label130
nop
bltz        R7,label131
nop
beq         R0,R0,label126
addiu       R2,R0,-1
label131:
 sltu        R10,R4,R6
subu        R4,R4,R6
sltu        R11,R5,R10
subu        R5,R5,R10
sltu        R10,R5,R7
or          R10,R10,R11
beq         R10,R0,label132
subu        R5,R5,R7
beq         R0,R0,label126
addiu       R2,R0,1
label132:
 or          R10,R5,R4
beq         R10,R0,label133
nop
beq         R0,R0,label126
addiu       R2,R0,-1
label133:
 beq         R0,R0,label126
addiu       R2,R0,0
label130:
 bgez        R7,label134
nop
beq         R0,R0,label126
addiu       R2,R0,1
label134:
 sltu        R10,R4,R6
subu        R4,R4,R6
sltu        R11,R5,R10
subu        R5,R5,R10
sltu        R10,R5,R7
or          R10,R10,R11
beq         R10,R0,label135
subu        R5,R5,R7
beq         R0,R0,label126
addiu       R2,R0,-1
label135:
 or          R10,R5,R4
beq         R10,R0,label136
nop
beq         R0,R0,label126
addiu       R2,R0,1
label136:
 addiu       R2,R0,0
label126:
 b label_end
nop
label128:
 beq         R0,R0,label126
or          R2,R0,R9
label_end:
    }
}

/**
 * @brief Converts a long long integer to a floating-point number.
 */
static void _F_1034()
{
    asm {
ADDIU       R5,R0,0
OR          R9,R0,R5
OR          R7,R0,R5
OR          R6,R0,R4
BEQ         R6,R0,label1
NOP
BGEZ        R6,label2
NOP
LUI         R9,0x8000
SLTU        R10,R0,R5
SUBU        R5,R0,R5
SUBU        R6,R0,R6
SUBU        R6,R6,R10
label2:
 ADDIU       R7,R0,1054
CLZ         R8,R6
SUBU        R7,R7,R8
SLLV        R6,R6,R8
label1:
 SRL         R8,R5,0xB
SLL         R10,R6,0x15
OR          R8,R8,R10
SLL         R10,R6,0x1
SRL         R10,R10,0xC
OR          R9,R9,R10
SLL         R10,R7,0x14
OR          R9,R9,R10
OR          R2,R0,R8
OR          R3,R0,R9
    }
}

static void _F_0858()
{
    asm {
SLL         R10,R5,0x1
SRL         R10,R10,0x15
SLL         R9,R5,0xB
SRL         R15,R4,0x15
OR          R9,R9,R15
SLL         R8,R4,0xB
LUI         R14,0x8000
OR          R9,R9,R14
SLL         R13,R7,0x1
SRL         R13,R13,0x15
SLL         R12,R7,0xB
SRL         R15,R6,0x15
OR          R12,R12,R15
SLL         R11,R6,0xB
OR          R12,R12,R14
XOR         R5,R5,R7
AND         R5,R5,R14
ADDIU       R15,R10,-1
SLTIU       R24,R15,2046
BEQ         R24,R0,label1
NOP
label12:
 ADDIU       R15,R13,-1
SLTIU       R24,R15,2046
BEQ         R24,R0,label2
NOP
label21:
 ADDIU       R15,R13,-1022
ADDU        R10,R10,R15
MULTU       R9,R12
MFLO        R7
MFHI        R14
MULTU       R8,R11
MFLO        R4
MFHI        R6
MULTU       R9,R11
MFLO        R11
MFHI        R13
ADDU        R6,R6,R11
SLTU        R15,R6,R11
ADDU        R7,R7,R13
ADDU        R7,R7,R15
BEQ         R7,R13,label3
NOP
SLTU        R15,R7,R13
label3:
 ADDU        R14,R14,R15
MULTU       R8,R12
MFLO        R8
MFHI        R9
ADDU        R6,R6,R8
SLTU        R15,R6,R8
ADDU        R7,R7,R9
ADDU        R7,R7,R15
BEQ         R7,R9,label4
NOP
SLTU        R15,R7,R9
label4:
 ADDU        R14,R14,R15
OR          R15,R4,R6
BEQ         R15,R0,label5
NOP
ORI         R7,R7,0x1
label5:
 OR          R9,R0,R14
BLTZ        R9,label6
OR          R8,R0,R7
SLT         R15,R8,R0
ADDU        R8,R8,R8
ADDU        R9,R9,R9
ADDU        R9,R9,R15
ADDIU       R10,R10,-1
label6:
 ADDIU       R15,R10,-1
SLTIU       R24,R15,2046
BEQ         R24,R0,label7
NOP
ADDIU       R8,R8,1024
SLTIU       R15,R8,1024
ADDU        R9,R9,R15
SLTU        R15,R9,R15
ADDU        R10,R10,R15
label25:
 SRL         R15,R8,0xB
ANDI        R15,R15,0x1
SUBU        R8,R8,R15
SRL         R4,R8,0xB
SLL         R15,R9,0x15
OR          R4,R4,R15
SLL         R15,R9,0x1
SRL         R15,R15,0xC
OR          R5,R5,R15
SLL         R15,R10,0x14
OR          R5,R5,R15
label14:
 OR          R2,R0,R4
OR          R3,R0,R5
B label_end
NOP
label1:
 SLT         R15,R8,R0
ADDU        R8,R8,R8
ADDU        R9,R9,R9
BNE         R10,R0,label8
ADDU        R9,R9,R15
OR          R15,R9,R8
BEQ         R15,R0,label9
NOP
BNE         R9,R0,label10
NOP
BNE         R8,R0,label11
NOP
BEQ         R0,R0,label12
ADDIU       R10,R0,0
label11:
 OR          R9,R8,R0
ADDIU       R8,R0,0
ADDIU       R10,R10,-32
label10:
 CLZ         R14,R9
BEQ         R14,R0,label12
NOP
SUBU        R10,R10,R14
SUBU         R7,R0,R14
SRLV        R7,R8,R7
SLLV        R8,R8,R14
SLLV        R9,R9,R14
BEQ         R0,R0,label12
OR          R9,R9,R7
label9:
 ADDIU       R24,R0,2047
BEQ         R13,R24,label13
NOP
BEQ         R0,R0,label14
NOP
label8:
 OR          R15,R9,R8
BNE         R15,R0,label13
NOP
BNE         R13,R0,label15
NOP
SLL         R15,R12,0x1
OR          R15,R15,R11
BEQ         R15,R0,label13
NOP
label15:
 ADDIU       R24,R0,2047
BNE         R13,R24,label16
NOP
label2:
 SLT         R15,R11,R0
ADDU        R11,R11,R11
ADDU        R12,R12,R12
BNE         R13,R0,label17
ADDU        R12,R12,R15
OR          R15,R12,R11
BEQ         R15,R0,label18
NOP
BNE         R12,R0,label19
NOP
BNE         R11,R0,label20
NOP
BEQ         R0,R0,label21
ADDIU       R13,R0,0
label20:
 OR          R12,R11,R0
ADDIU       R11,R0,0
ADDIU       R13,R13,-32
label19:
 CLZ         R6,R12
BEQ         R6,R0,label21
NOP
SUBU        R13,R13,R6
SUBU         R14,R0,R6
SRLV        R14,R11,R14
SLLV        R11,R11,R6
SLLV        R12,R12,R6
BEQ         R0,R0,label21
OR          R12,R12,R14
label18:
 BEQ         R0,R0,label14
ADDIU       R4,R0,0
label17:
 OR          R15,R12,R11
BNE         R15,R0,label13
NOP
label16:
 LUI         R24,0x7FF0
OR          R5,R5,R24
BEQ         R0,R0,label14
ADDIU       R4,R0,0
label13:
 LUI         R5,0xFFF8
BEQ         R0,R0,label14
ADDIU       R4,R0,0
label7:
 BGTZ        R10,label16
NOP
ADDIU       R14,R0,1
SUBU        R14,R14,R10
label24:
 SLTIU       R24,R14,32
BNE         R24,R0,label22
NOP
ADDIU        R14,R14,-32
SLTU        R6,R0,R8
BEQ         R0,R9,label23
OR          R8,R9,R6
BEQ         R0,R0,label24
ORI         R9,R0,0x0
label22:
 BEQ         R14,R0,label23
NOP
SUBU         R7,R0,R14
SLLV        R6,R8,R7
SLLV        R7,R9,R7
SRLV        R8,R8,R14
SRLV        R9,R9,R14
BEQ         R6,R0,label23
OR          R8,R7,R8
ORI         R8,R8,0x2
label23:
 ADDIU       R8,R8,1024
SLTIU       R15,R8,1024
ADDU        R9,R9,R15
BEQ         R0,R0,label25
SRL         R10,R9,0x1F
label_end:
    }
}

static void _F_0434()
{
    asm {
SLL         R11,R5,0x1
SRL         R11,R11,0x15
SLL         R10,R5,0xB
SRL         R15,R4,0x15
OR          R10,R10,R15
SLL         R9,R4,0xB
LUI         R8,0x8000
OR          R10,R10,R8
SLL         R14,R7,0x1
SRL         R14,R14,0x15
SLL         R13,R7,0xB
SRL         R15,R6,0x15
OR          R13,R13,R15
SLL         R12,R6,0xB
OR          R13,R13,R8
ADDIU       R15,R11,-1
SLTIU       R24,R15,2046
BEQ         R24,R0,label1
NOP
label23:
 ADDIU       R15,R14,-1
SLTIU       R24,R15,2046
BEQ         R24,R0,label2
NOP
label30:
 LUI         R24,0x8000
AND         R5,R5,R24
SUBU        R8,R11,R14
BEQ         R8,R0,label3
NOP
BLEZ        R8,label4
NOP
label6:
 SLTIU       R24,R8,32
BNE         R24,R0,label5
NOP
ADDIU        R8,R8,-32
SLTU        R6,R0,R12
BEQ         R0,R13,label3
OR          R12,R13,R6
BEQ         R0,R0,label6
ORI         R13,R0,0x0
label5:
 BEQ         R8,R0,label3
NOP
SUBU         R4,R0,R8
SLLV        R6,R12,R4
SLLV        R4,R13,R4
SRLV        R12,R12,R8
SRLV        R13,R13,R8
BEQ         R6,R0,label3
OR          R12,R4,R12
BEQ         R0,R0,label3
ORI         R12,R12,0x2
label4:
 OR          R11,R0,R14
SUBU        R8,R0,R8
label8:
 SLTIU       R24,R8,32
BNE         R24,R0,label7
NOP
ADDIU        R8,R8,-32
SLTU        R6,R0,R9
BEQ         R0,R10,label3
OR          R9,R10,R6
BEQ         R0,R0,label8
ORI         R10,R0,0x0
label7:
 BEQ         R8,R0,label3
NOP
SUBU         R4,R0,R8
SLLV        R6,R9,R4
SLLV        R4,R10,R4
SRLV        R9,R9,R8
SRLV        R10,R10,R8
BEQ         R6,R0,label3
OR          R9,R4,R9
ORI         R9,R9,0x2
label3:
 XOR         R15,R5,R7
BLTZ        R15,label9
NOP
ADDU        R9,R9,R12
SLTU        R15,R9,R12
ADDU        R10,R10,R13
ADDU        R10,R10,R15
BEQ         R10,R13,label10
NOP
SLTU        R15,R10,R13
label10:
 BEQ         R15,R0,label11
NOP
ANDI        R15,R9,0x1
BEQ         R15,R0,label12
NOP
ORI         R9,R9,0x2
label12:
 SRL         R9,R9,0x1
SLL         R15,R10,0x1F
OR          R9,R9,R15
SRL         R10,R10,0x1
LUI         R24,0x8000
OR          R10,R10,R24
ADDIU       R11,R11,1
ADDIU       R24,R0,2047
BNE         R11,R24,label11
NOP
LUI         R24,0x7FF0
OR          R5,R5,R24
BEQ         R0,R0,label13
ADDIU       R4,R0,0
label9:
 SLTU        R15,R9,R12
SUBU        R9,R9,R12
SLTU        R2,R10,R15
SUBU        R10,R10,R15
SLTU        R15,R10,R13
OR          R15,R15,R2
BEQ         R15,R0,label14
SUBU        R10,R10,R13
LUI         R24,0x8000
XOR         R5,R5,R24
SLTU        R15,R0,R9
SUBU        R9,R0,R9
SUBU        R10,R0,R10
SUBU        R10,R10,R15
label14:
 BNE         R10,R0,label15
NOP
BNE         R9,R0,label16
NOP
BEQ         R0,R0,label17
ADDIU       R11,R0,0
label16:
 OR          R10,R9,R0
ADDIU       R9,R0,0
ADDIU       R11,R11,-32
label15:
 CLZ         R8,R10
BEQ         R8,R0,label17
NOP
SUBU        R11,R11,R8
SUBU         R4,R0,R8
SRLV        R4,R9,R4
SLLV        R9,R9,R8
SLLV        R10,R10,R8
OR          R10,R10,R4
label17:
 OR          R15,R10,R9
BNE         R15,R0,label11
NOP
ADDIU       R5,R0,0
label11:
 BLEZ        R11,label18
NOP
label34:
 ADDIU       R9,R9,1024
SLTIU       R15,R9,1024
ADDU        R10,R10,R15
SLTU        R15,R10,R15
ADDU        R11,R11,R15
SRL         R15,R9,0xB
ANDI        R15,R15,0x1
SUBU        R9,R9,R15
SRL         R4,R9,0xB
SLL         R15,R10,0x15
OR          R4,R4,R15
SLL         R15,R10,0x1
SRL         R15,R15,0xC
OR          R5,R5,R15
SLL         R15,R11,0x14
OR          R5,R5,R15
label13:
 OR          R2,R0,R4
OR          R3,R0,R5
label25:
B label_end
NOP
label1:
 SLT         R15,R9,R0
ADDU        R9,R9,R9
ADDU        R10,R10,R10
BNE         R11,R0,label19
ADDU        R10,R10,R15
OR          R15,R10,R9
BEQ         R15,R0,label20
NOP
BNE         R10,R0,label21
NOP
BNE         R9,R0,label22
NOP
BEQ         R0,R0,label23
ADDIU       R11,R0,0
label22:
 OR          R10,R9,R0
ADDIU       R9,R0,0
ADDIU       R11,R11,-32
label21:
 CLZ         R8,R10
BEQ         R8,R0,label23
NOP
SUBU        R11,R11,R8
SUBU         R4,R0,R8
SRLV        R4,R9,R4
SLLV        R9,R9,R8
SLLV        R10,R10,R8
BEQ         R0,R0,label23
OR          R10,R10,R4
label20:
 ADDIU       R24,R0,2047
BEQ         R14,R24,label2
NOP
ADDU        R8,R7,R7
OR          R15,R8,R6
BNE         R15,R0,label24
NOP
BLTZ        R7,label13
NOP
label24:
 OR          R2,R0,R6
BEQ         R0,R0,label25
OR          R3,R0,R7
label19:
 OR          R15,R10,R9
BNE         R15,R0,label26
NOP
ADDIU       R24,R0,2047
BNE         R14,R24,label13
NOP
XOR         R15,R5,R7
BLTZ        R15,label26
NOP
BEQ         R0,R0,label24
NOP
label2:
 SLT         R15,R12,R0
ADDU        R12,R12,R12
ADDU        R13,R13,R13
BNE         R14,R0,label27
ADDU        R13,R13,R15
OR          R15,R13,R12
BEQ         R15,R0,label13
NOP
BNE         R13,R0,label28
NOP
BNE         R12,R0,label29
NOP
BEQ         R0,R0,label30
ADDIU       R14,R0,0
label29:
 OR          R13,R12,R0
ADDIU       R12,R0,0
ADDIU       R14,R14,-32
label28:
 CLZ         R8,R13
BEQ         R8,R0,label30
NOP
SUBU        R14,R14,R8
SUBU         R4,R0,R8
SRLV        R4,R12,R4
SLLV        R12,R12,R8
SLLV        R13,R13,R8
BEQ         R0,R0,label30
OR          R13,R13,R4
label27:
 OR          R15,R13,R12
BEQ         R15,R0,label24
NOP
label26:
 LUI         R5,0xFFF8
BEQ         R0,R0,label13
ADDIU       R4,R0,0
label18:
 ADDIU       R8,R0,1
SUBU        R8,R8,R11
label33:
 SLTIU       R24,R8,32
BNE         R24,R0,label31
NOP
ADDIU        R8,R8,-32
SLTU        R6,R0,R9
BEQ         R0,R10,label32
OR          R9,R10,R6
BEQ         R0,R0,label33
ORI         R10,R0,0x0
label31:
 BEQ         R8,R0,label32
NOP
SUBU         R4,R0,R8
SLLV        R6,R9,R4
SLLV        R4,R10,R4
SRLV        R9,R9,R8
SRLV        R10,R10,R8
BEQ         R6,R0,label32
OR          R9,R4,R9
ORI         R9,R9,0x2
label32:
 BEQ         R0,R0,label34
ADDIU       R11,R0,0
label_end:
    }
}

static void _F_119C()
{
    asm {
SLL         R7,R5,0xB
SRL         R11,R4,0x15
OR          R7,R7,R11
SLL         R6,R4,0xB
LUI         R24,0x8000
OR          R7,R7,R24
LUI         R24,0x8000
AND         R9,R5,R24
SLL         R8,R5,0x1
SRL         R8,R8,0x15
ADDIU       R8,R8,-896
ADDIU       R11,R8,-1
SLTIU       R24,R11,254
BEQ         R24,R0,label1
NOP
label7:
 BEQ         R6,R0,label2
NOP
ORI         R7,R7,0x1
label2:
 ADDIU       R7,R7,128
SLTIU       R11,R7,128
ADDU        R8,R8,R11
SRL         R11,R7,0x8
ANDI        R11,R11,0x1
SUBU        R7,R7,R11
SLL         R7,R7,0x1
SRL         R7,R7,0x9
SLL         R11,R8,0x17
OR          R7,R7,R11
OR          R2,R7,R9
label4:
B label_end
NOP
label1:
 ADDIU       R24,R0,1151
BNE         R8,R24,label3
NOP
SLL         R11,R7,0x1
OR          R11,R11,R6
BEQ         R11,R0,label3
NOP
BEQ         R0,R0,label4
LUI         R2,0xFFC0
label3:
 SLTI        R24,R8,255
BNE         R24,R0,label5
NOP
LUI         R24,0x7F80
BEQ         R0,R0,label4
OR          R2,R9,R24
label5:
 ADDIU       R10,R0,1
SUBU        R10,R10,R8
SLTIU       R24,R10,32
BNE         R24,R0,label6
NOP
BEQ         R0,R0,label4
OR          R2,R0,R9
label6:
 ADDIU       R12,R0,32
SUBU        R12,R12,R10
SLLV        R11,R7,R12
OR          R6,R6,R11
SRLV        R7,R7,R10
ADDIU       R8,R0,0
LUI         R24,0x8000
BEQ         R0,R0,label7
OR          R7,R7,R24
label_end:
    }
}

/**
 * @brief Converts signed long long integers from registers R4 and R6 to floating-point numbers.
 */
void _SignedLongLongToFloat()
{
    asm {
ADDIU       R29,R29,-40
LUI         R8, 0
ORI         R8, R8, 1
LUI         R3, 0xFFE0

SW          R19,28(R29)
ADDU        R19,R5,R0
SW          R18,24(R29)
SLTU        R5,R4,R8
ADDU        R18,R4,R0
SUBU        R6,R4,R8
SUBU        R7,R19,R3
LUI         R4,0x3F
SUBU        R7,R7,R5
ORI         R4,R4,0xFFFF
SLTU        R2,R4,R7
SW          R31,32(R29)
SW          R17,20(R29)
BNE         R2,R0,label1
SW          R16,16(R29)
BEQ         R7,R4,label2
SLTIU       R2,R6,-1
label4:
 JAL         __Lib_MathDouble__F_1034
ADDU        R4,R19,R0

LUI         R16, 0
LUI         R17, 0x40F0

ADDU        R6,R16,R0
ADDU        R7,R17,R0
ADDU        R4,R2,R0
JAL         __Lib_MathDouble__F_0858
ADDU        R5,R3,R0
ADDU        R5,R3,R0
ADDU        R6,R16,R0
ADDU        R7,R17,R0
JAL         __Lib_MathDouble__F_0858
ADDU        R4,R2,R0
ADDU        R4,R18,R0
ADDU        R16,R2,R0
JAL         __Lib_MathDouble__F_1034
ADDU        R17,R3,R0
ADDU        R4,R2,R0
BLTZ        R18,label3
ADDU        R5,R3,R0
label5:
 ADDU        R4,R16,R0
ADDU        R5,R17,R0
ADDU        R6,R2,R0
JAL         __Lib_MathDouble__F_0434
ADDU        R7,R3,R0
ADDU        R4,R2,R0
JAL         __Lib_MathDouble__F_119C
ADDU        R5,R3,R0
LW          R31,32(R29)
LW          R19,28(R29)
LW          R18,24(R29)
LW          R17,20(R29)
LW          R16,16(R29)
B   label_end
ADDIU       R29,R29,40
label2:
 BNE         R2,R0,label4
NOP
label1:
 ANDI        R12,R18,0X7FF
ADDU        R9,R0,R0
ADDIU       R14,R0,-2048
AND         R13,R18,R14
OR          R10,R12,R9
BEQ         R10,R0,label4
ORI         R6,R13,0X800
ADDU        R4,R19,R0
JAL         __Lib_MathDouble__F_1034
ADDU        R18,R6,R0
LUI         R15,0x9D00

LUI         R16, 0
LUI         R17, 0x40F0

ADDU        R6,R16,R0
ADDU        R7,R17,R0
ADDU        R4,R2,R0
JAL         __Lib_MathDouble__F_0858
ADDU        R5,R3,R0
ADDU        R5,R3,R0
ADDU        R6,R16,R0
ADDU        R7,R17,R0
JAL         __Lib_MathDouble__F_0858
ADDU        R4,R2,R0
ADDU        R4,R18,R0
ADDU        R16,R2,R0
JAL         __Lib_MathDouble__F_1034
ADDU        R17,R3,R0
ADDU        R4,R2,R0
BGEZ        R18,label5
ADDU        R5,R3,R0
label3:
MOVZ        R6,R0,R0

JAL         __Lib_MathDouble__F_0434
LUI         R7, 0x41F0

ADDU        R6,R2,R0
ADDU        R4,R16,R0
ADDU        R5,R17,R0
JAL         __Lib_MathDouble__F_0434
ADDU        R7,R3,R0
ADDU        R4,R2,R0
JAL         __Lib_MathDouble__F_119C
ADDU        R5,R3,R0
LW          R31,32(R29)
LW          R19,28(R29)
LW          R18,24(R29)
LW          R17,20(R29)
LW          R16,16(R29)
ADDIU       R29,R29,40
label_end:
    }
}

static void _F_011C()
{
    asm {
SLT         R2,R5,R7
SLT         R8,R7,R5
BNE         R2,R0,label_end
ADDU        R3,R0,R0
SLTU        R2,R4,R6
BNE         R8,R0,label_end
ADDIU       R3,R0,2
SLTU        R4,R6,R4
BNE         R2,R0,label_end
ADDU        R3,R0,R0
ADDIU       R3,R0,2
ADDIU       R5,R0,1
MOVZ        R3,R5,R4
label_end:
ADDU        R2,R3,R0
    }
}

static void _F_155C()
{
    asm {
SRL         R9,R4,0x17
ANDI        R9,R9,0xFF
SRL         R11,R5,0x17
ANDI        R11,R11,0xFF
LUI         R7,0x8000
SLL         R8,R4,0x8
OR          R8,R8,R7
SLL         R10,R5,0x8
OR          R10,R10,R7
ADDIU       R13,R9,-1
SLTIU       R24,R13,254
BEQ         R24,R0,label1
NOP
label18:
 ADDIU       R13,R11,-1
SLTIU       R24,R13,254
BEQ         R24,R0,label2
NOP
label23:
 SUBU        R12,R9,R11
BLTZ        R12,label3
NOP
SLTI        R24,R12,32
BNE         R24,R0,label4
NOP
BEQ         R0,R0,label5
ADDIU       R10,R0,2
label4:
 OR          R6,R0,R10
SRLV        R10,R10,R12
SLLV        R13,R10,R12
BEQ         R13,R6,label5
NOP
BEQ         R0,R0,label5
ORI         R10,R10,0x2
label3:
 OR          R9,R0,R11
SUBU        R12,R0,R12
SLTI        R24,R12,32
BNE         R24,R0,label6
NOP
BEQ         R0,R0,label5
ADDIU       R8,R0,2
label6:
 OR          R6,R0,R8
SRLV        R8,R8,R12
SLLV        R13,R8,R12
BEQ         R13,R6,label5
NOP
ORI         R8,R8,0x2
label5:
 AND         R12,R4,R7
XOR         R13,R12,R5
BLTZ        R13,label7
NOP
ADDU        R8,R8,R10
SLTU        R13,R8,R10
BEQ         R13,R0,label8
NOP
ANDI        R13,R8,0x1
BEQ         R13,R0,label9
NOP
ORI         R8,R8,0x2
label9:
 SRL         R8,R8,0x1
ADDIU       R9,R9,1
ADDIU       R24,R0,255
BNE         R9,R24,label8
NOP
BEQ         R0,R0,label8
ADDIU       R8,R0,0
label7:
 SLTU        R13,R8,R10
BEQ         R13,R0,label10
SUBU        R8,R8,R10
SUBU        R8,R0,R8
BEQ         R0,R0,label11
XOR         R12,R12,R7
label10:
 BEQ         R8,R0,label12
NOP
label11:
 CLZ         R6,R8
SUBU        R9,R9,R6
SLLV        R8,R8,R6
label8:
 BLEZ        R9,label13
NOP
label15:
 ADDIU       R8,R8,128
SLTIU       R13,R8,128
ADDU        R9,R9,R13
SRL         R13,R8,0x8
ANDI        R13,R13,0x1
SUBU        R8,R8,R13
SLL         R8,R8,0x1
SRL         R8,R8,0x9
SLL         R13,R9,0x17
OR          R8,R8,R13
OR          R2,R8,R12
label24:
B label_end
NOP
label13:
 ADDIU       R6,R0,1
SUBU        R6,R6,R9
SLTIU       R24,R6,32
BEQ         R24,R0,label12
NOP
LUI         R24,0x8000
OR          R8,R8,R24
ADDIU       R13,R0,32
SUBU        R13,R13,R6
SLLV        R9,R8,R13
BEQ         R9,R0,label14
SRLV        R8,R8,R6
ORI         R8,R8,0x1
label14:
 ADDIU       R9,R0,0
ADDIU       R13,R8,128
BGEZ        R13,label15
NOP
BEQ         R0,R0,label15
ADDIU       R9,R0,1
label1:
 BNE         R9,R0,label16
NOP
ADDU        R8,R8,R8
BEQ         R8,R0,label17
NOP
CLZ         R12,R8
SUBU        R9,R9,R12
BEQ         R0,R0,label18
SLLV        R8,R8,R12
label17:
 ADDIU       R24,R0,255
BEQ         R11,R24,label2
NOP
LUI         R24,0x8000
BNE         R5,R24,label19
NOP
label16:
 ADDU        R13,R8,R8
BNE         R13,R0,label20
NOP
ADDIU       R24,R0,255
BNE         R11,R24,label21
NOP
XOR         R13,R4,R5
BLTZ        R13,label20
NOP
BEQ         R0,R0,label19
NOP
label2:
 BNE         R11,R0,label22
NOP
ADDU        R10,R10,R10
BEQ         R10,R0,label21
NOP
CLZ         R12,R10
SUBU        R11,R11,R12
BEQ         R0,R0,label23
SLLV        R10,R10,R12
label22:
 ADDU        R13,R10,R10
BNE         R13,R0,label20
NOP
label19:
 BEQ         R0,R0,label24
OR          R2,R0,R5
label21:
 BEQ         R0,R0,label24
OR          R2,R0,R4
label12:
 BEQ         R0,R0,label24
ADDIU       R2,R0,0
label20:
 BEQ         R0,R0,label24
LUI         R2,0xFFC0
label_end:
    }
}

/**
 * @brief Converts unsigned long long integers from registers R4 and R5 to floating-point numbers.
 */
void _UnsignedLongLongToFloat_UnsignedLongLongToFloat()
{
    asm {
ADDIU       R29,R29,-16
SW          R4,8(R29)
SW          R5,4(R29)

ADDU        R6,R0,R0
ADDU        R7,R0,R0
JAL         __Lib_MathDouble__F_011C // 0x1D00011C
NOP
SLTI        R2,R2,1
BNE         R2,R0,label1
NOP
LW          R4,8(R29)
LW          R5,4(R29)

JAL         __SignedLongLongToFloat  // 0x1D000158
NOP
SW          R2, 12(R29)

BEQ         R0,R0,label2
NOP
label1:
LW          R2,8(R29)
LW          R3,4(R29)

ANDI        R4,R2,0x1
ANDI        R5,R3,0x0
LW          R2,8(R29)
LW          R3,4(R29)

SRL         R6,R2,0x1
SLL         R8,R3,0x1F
OR          R6,R6,R8
SRL         R7,R3,0x1
OR          R2,R4,R6
OR          R3,R5,R7
ADDU        R4,R2,R0
ADDU        R5,R3,R0
JAL         __SignedLongLongToFloat  // 0x1D000158
NOP
SW          R2,12(R29)
LW          R4,12(R29)
LW          R5,12(R29)

JAL         __Lib_MathDouble__F_155C // 0x1D00155C
NOP
SW          R2,12(R29)
label2:
 LW          R2,12(R29)

ADDIU     R29,R29,16
    }
}

/**
 * @brief Converts floating-point numbers to long long integers.
 */
static void _FLL_0368()
{
    asm {
 LUI         R8,0x8000
 XOR         R7,R7,R8
 JAL         __Lib_MathDouble__F_0434
NOP
    }
}

static void _FLL_1034()
{
    asm {
SRL         R7,R4,0x17
ANDI        R7,R7,0xFF
LUI         R13,0x8000
AND         R6,R4,R13
ADDIU       R9,R7,-1
SLTIU       R13,R9,254
BEQ         R13,R0,label1
NOP
label5:
 ADDIU       R7,R7,896
SLL         R9,R4,0x9
SRL         R9,R9,0xC
OR          R6,R6,R9
SLL         R5,R4,0x1D
label2:
 SLL         R9,R7,0x14
OR          R6,R6,R9
OR          R2,R0,R5
OR          R3,R0,R6
B label_end
NOP
label1:
 ADDIU       R5,R0,0
ADDU        R4,R4,R4
BEQ         R4,R0,label2
NOP
BNE         R7,R0,label3
NOP
label4:
 ADDIU       R7,R7,-1
ADDU        R4,R4,R4
LUI         R13,0x80
SLTU        R13,R4,R13
BNE         R13,R0,label4
NOP
BEQ         R0,R0,label5
NOP
label3:
 ADDIU       R7,R0,2047
LUI         R13,0xFF00
ORI         R13,R13,0x1
SLTU        R13,R4,R13
BNE         R13,R0,label2
NOP
BEQ         R0,R0,label2
LUI         R6,0xFFF8

label_end:

    }
}

static void _FLL_1258()
{
    asm {
SLL         R7,R5,0xB
SRL         R10,R4,0x15
OR          R7,R7,R10
LUI         R8,0x8000
OR          R7,R7,R8
SLL         R10,R5,0x1
SRL         R10,R10,0x15
ADDIU       R6,R0,1054
SUBU        R6,R6,R10
BLTZ        R6,label1
NOP
SLTIU       R8,R6,32
BNE         R8,R0,label2
NOP
ORI         R7,R0,0x0
label2:
 BGEZ        R5,label3
SRLV        R7,R7,R6
SUBU        R7,R0,R7
label3:
 OR          R2,R0,R7
label6:
B  label_end
NOP
label1:
 BEQ         R4,R0,label4
NOP
ORI         R5,R5,0x1
label4:
 LUI         R8,0x7FF0
ORI         R8,R8,0x1
SLTU        R8,R5,R8
BNE         R8,R0,label5
NOP
BEQ         R0,R0,label6
LUI         R2,0x8000
label5:
 BEQ         R0,R0,label6
ADDIU       R2,R0,-1
label_end:

    }
}

void _FloatToUnsignedLongLong()
{
    asm {
ADDIU       R29,R29,-40
SW          R31,36(R29)
SW          R21,32(R29)
SW          R20,28(R29)
SW          R16,16(R29)
SW          R19,24(R29)
JAL         __Lib_MathDouble__FLL_1034
SW          R18,20(R29)
ADDU        R20,R2,R0
LUI         R6,0
LUI         R7,0x3DF0

ADDU        R4,R20,R0
ADDU        R5,R3,R0
JAL         __Lib_MathDouble__F_0858
ADDU        R21,R3,R0
ADDU        R5,R3,R0
JAL         __Lib_MathDouble__FLL_1258
ADDU        R4,R2,R0
ADDU        R4,R2,R0
JAL         __Lib_MathDouble__F_1034
ADDU        R16,R2,R0
ADDU        R8,R2,R0
ADDU        R9,R3,R0
ADDU        R4,R2,R0
BLTZ        R16,label1
ADDU        R5,R3,R0
LUI         R18,0
LUI         R19,0x41F0

ADDU        R5,R9,R0
ADDU        R4,R8,R0
ADDU        R6,R18,R0
JAL         __Lib_MathDouble__F_0858
ADDU        R7,R19,R0
ADDU        R7,R3,R0
ADDU        R4,R20,R0
ADDU        R5,R21,R0
JAL         __Lib_MathDouble__FLL_0368
ADDU        R6,R2,R0
ADDU        R5,R3,R0
JAL         __Lib_MathDouble__FLL_1258
ADDU        R4,R2,R0
ADDU        R7,R0,R0
ADDU        R10,R0,R0
OR          R5,R16,R7
OR          R8,R10,R2
LW          R31,36(R29)
LW          R21,32(R29)
LW          R20,28(R29)
LW          R19,24(R29)
LW          R18,20(R29)
LW          R16,16(R29)
ADDU        R2,R8,R0
ADDU        R3,R5,R0
B label_end
ADDIU       R29,R29,40
label1:
 LUI         R3,0x9D00
LUI         R18,0
LUI         R19,0x41F0

ADDU        R6,R18,R0
JAL         __Lib_MathDouble__F_0434
ADDU        R7,R19,R0
ADDU        R8,R2,R0
ADDU        R9,R3,R0
ADDU        R4,R8,R0
ADDU        R5,R9,R0
ADDU        R6,R18,R0
JAL         __Lib_MathDouble__F_0858
ADDU        R7,R19,R0
ADDU        R7,R3,R0
ADDU        R4,R20,R0
ADDU        R5,R21,R0
JAL         __Lib_MathDouble__FLL_0368
ADDU        R6,R2,R0
ADDU        R5,R3,R0
JAL         __Lib_MathDouble__FLL_1258
ADDU        R4,R2,R0
ADDU        R7,R0,R0
ADDU        R10,R0,R0
OR          R5,R16,R7
OR          R8,R10,R2
LW          R31,36(R29)
LW          R21,32(R29)
LW          R20,28(R29)
LW          R19,24(R29)
LW          R18,20(R29)
LW          R16,16(R29)
ADDU        R2,R8,R0
ADDU        R3,R5,R0
ADDIU       R29,R29,40
label_end:
    }
}

static void _FLL_1C7C()
{
    asm {
ADDIU       R8,R0,-2
SLL         R6,R4,0x1
SLL         R7,R5,0x1
OR          R9,R6,R7
BEQ         R9,R0,label1
NOP
LUI         R10,0xFF00
ORI         R10,R10,0x1
SLTU        R10,R6,R10
BEQ         R10,R0,label2
NOP
LUI         R10,0xFF00
ORI         R10,R10,0x1
SLTU        R10,R7,R10
BEQ         R10,R0,label2
NOP
BGEZ        R4,label3
SRL         R6,R6,0x1
SUBU        R6,R0,R6
label3:
 BGEZ        R5,label4
SRL         R7,R7,0x1
SUBU        R7,R0,R7
label4:
 SLT         R10,R6,R7
BEQ         R10,R0,label5
NOP
BEQ         R0,R0,label6
ADDIU       R2,R0,-1
label5:
 SLT         R10,R7,R6
BEQ         R10,R0,label1
NOP
BEQ         R0,R0,label6
ADDIU       R2,R0,1
label1:
 ADDIU       R2,R0,0
label6:
 B label_end
NOP
label2:
 BEQ         R0,R0,label6
OR          R2,R0,R8
label_end:

    }
}

void _FloatToSignedLongLong()
{
    asm {
ADDIU       R29,R29,-24
SW          R16,16(R29)
SW          R31,20(R29)
ADDU        R16,R4,R0
JAL         __Lib_MathDouble__FLL_1C7C
ADDU        R5,R0,R0
LUI         R3,0x8000
BLTZ        R2,label1
XOR         R4,R3,R16
JAL         __FloatToUnsignedLongLong
ADDU        R4,R16,R0
LW          R31,20(R29)
LW          R16,16(R29)
B label_end
ADDIU       R29,R29,24
label1:
 JAL        __FloatToUnsignedLongLong
NOP
LW          R31,20(R29)
LW          R16,16(R29)
SUBU        R2,R0,R2
SUBU        R3,R0,R3
SLTU        R4,R0,R2
SUBU        R3,R3,R4
ADDIU       R29,R29,24
label_end:
    }
}

/**
 * @brief Converts signed long long integers to long double.
 */
void _SignedLongLongToLongDouble()
{
    asm {
ADDIU       R29,R29,-40
SW          R18,24(R29)
ADDU        R18,R4,R0
ADDU        R4,R5,R0
SW          R31,32(R29)
SW          R17,20(R29)
SW          R16,16(R29)
JAL         __Lib_MathDouble__F_1034
SW          R19,28(R29)
LUI          R16, 0
LUI          R17, 0x40F0

ADDU        R6,R16,R0
ADDU        R7,R17,R0
ADDU        R4,R2,R0
JAL         __Lib_MathDouble__F_0858
ADDU        R5,R3,R0
ADDU        R5,R3,R0
ADDU        R6,R16,R0
ADDU        R7,R17,R0
JAL         __Lib_MathDouble__F_0858
ADDU        R4,R2,R0
ADDU        R4,R18,R0
ADDU        R16,R2,R0
JAL         __Lib_MathDouble__F_1034
ADDU        R17,R3,R0
ADDU        R4,R2,R0
BLTZ        R18,label1
ADDU        R5,R3,R0
ADDU        R4,R16,R0
ADDU        R5,R17,R0
ADDU        R6,R2,R0
JAL         __Lib_MathDouble__F_0434
ADDU        R7,R3,R0
LW          R31,32(R29)
LW          R19,28(R29)
LW          R18,24(R29)
LW          R17,20(R29)
LW          R16,16(R29)
B             label_end
ADDIU       R29,R29,40
label1:
LUI         R6, 0

JAL         __Lib_MathDouble__F_0434
LUI         R7, 0x41F0

ADDU        R6,R2,R0
ADDU        R4,R16,R0
ADDU        R5,R17,R0
JAL         __Lib_MathDouble__F_0434
ADDU        R7,R3,R0
LW          R31,32(R29)
LW          R19,28(R29)
LW          R18,24(R29)
LW          R17,20(R29)
LW          R16,16(R29)
ADDIU       R29,R29,40
label_end:
    }
}

void _UnsignedLongLongToLongDouble()
{
    asm {
ADDIU       R29,R29,-20
SW          R4,4(R29)
SW          R5,8(R29)

ADDU        R6,R0,R0
ADDU        R7,R0,R0
JAL         __Lib_MathDouble__F_011C
NOP
SLTI        R2,R2,1
BNE         R2,R0,label1
NOP
LW          R4,4(R29)
lW          R5,8(R29)

JAL         __SignedLongLongToLongDouble
NOP
SW          R2,12(R29)
SW          R3,16(R29)
BEQ         R0,R0,label2
NOP
label1:
LW          R2,4(R29)
LW          R3,8(R29)

ANDI        R4,R2,0x1
ANDI        R5,R3,0x0
LW          R2,4(R29)
LW          R3,8(R29)

SRL         R6,R2,0x1
SLL         R8,R3,0x1F
OR          R6,R6,R8
SRL         R7,R3,0x1
OR          R2,R4,R6
OR          R3,R5,R7
ADDU        R4,R2,R0
ADDU        R5,R3,R0
JAL         __SignedLongLongToLongDouble
NOP
SW          R2,12(R29)
SW          R3,16(R29)
LW          R4,12(R29)
LW          R5,16(R29)
LW          R6,12(R29)
LW          R7,16(R29)
JAL         __Lib_MathDouble__F_0434
NOP
SW          R2,12(R29)
SW          R3,16(R29)
label2:
 LW          R2,12(R29)
LW          R3,16(R29)

ADDIU       R29,R29,20
    }
}

/**
 * @brief Converts long double to unsigned long long integers.
 */
void _LongDoubleToUnsignedLongLong()
{
    asm {
ADDIU       R29,R29,-40
SW          R31,36(R29)
SW          R21,32(R29)
SW          R20,28(R29)
SW          R16,16(R29)
SW          R19,24(R29)
SW          R18,20(R29)
LUI         R6,0
LUI         R7,0x3DF0

ADDU        R20,R4,R0
JAL         __Lib_MathDouble__F_0858
ADDU        R21,R5,R0
ADDU        R5,R3,R0
JAL         __Lib_MathDouble__FLL_1258
ADDU        R4,R2,R0
ADDU        R4,R2,R0
JAL         __Lib_MathDouble__F_1034
ADDU        R16,R2,R0
ADDU        R8,R2,R0
ADDU        R9,R3,R0
ADDU        R4,R2,R0
BLTZ        R16,label1
ADDU        R5,R3,R0
LUI         R18,0
LUI         R19,0x41F0

ADDU        R5,R9,R0
ADDU        R4,R8,R0
ADDU        R6,R18,R0
JAL         __Lib_MathDouble__F_0858
ADDU        R7,R19,R0
ADDU        R7,R3,R0
ADDU        R4,R20,R0
ADDU        R5,R21,R0
JAL         __Lib_MathDouble__FLL_0368
ADDU        R6,R2,R0
ADDU        R5,R3,R0
JAL         __Lib_MathDouble__FLL_1258
ADDU        R4,R2,R0
ADDU        R7,R0,R0
ADDU        R10,R0,R0
OR          R5,R16,R7
OR          R8,R10,R2
LW          R31,36(R29)
LW          R21,32(R29)
LW          R20,28(R29)
LW          R19,24(R29)
LW          R18,20(R29)
LW          R16,16(R29)
ADDU        R2,R8,R0
ADDU        R3,R5,R0
B label_end
ADDIU       R29,R29,40
label1:
LUI         R18,0
LUI         R19,0x41F0

ADDU        R6,R18,R0
JAL         __Lib_MathDouble__F_0434
ADDU        R7,R19,R0
ADDU        R8,R2,R0
ADDU        R9,R3,R0
ADDU        R4,R8,R0
ADDU        R5,R9,R0
ADDU        R6,R18,R0
JAL         __Lib_MathDouble__F_0858
ADDU        R7,R19,R0
ADDU        R7,R3,R0
ADDU        R4,R20,R0
ADDU        R5,R21,R0
JAL         __Lib_MathDouble__FLL_0368
ADDU        R6,R2,R0
ADDU        R5,R3,R0
JAL         __Lib_MathDouble__FLL_1258
ADDU        R4,R2,R0
ADDU        R7,R0,R0
ADDU        R10,R0,R0
OR          R5,R16,R7
OR          R8,R10,R2
LW          R31,36(R29)
LW          R21,32(R29)
LW          R20,28(R29)
LW          R19,24(R29)
LW          R18,20(R29)
LW          R16,16(R29)
ADDU        R2,R8,R0
ADDU        R3,R5,R0
ADDIU       R29,R29,40
label_end:
    }
}

static void _DLL_1304()
{
    asm {
ADDIU       R9,R0,-2
SLL         R10,R5,0x1
SLL         R11,R7,0x1
OR          R11,R11,R4
OR          R11,R11,R6
OR          R10,R10,R11
BNE         R10,R0,label1
NOP
BEQ         R0,R0,label2
ADDIU       R2,R0,0
label1:
 BEQ         R4,R0,label3
SLL         R8,R5,0x1
ADDIU       R8,R8,1
label3:
 LUI         R24,0xFFE0
ORI         R24,R24,0x1
SLTU        R24,R8,R24
BEQ         R24,R0,label4
NOP
BEQ         R6,R0,label5
SLL         R8,R7,0x1
ADDIU       R8,R8,1
label5:
 LUI         R24,0xFFE0
ORI         R24,R24,0x1
SLTU        R24,R8,R24
BEQ         R24,R0,label4
NOP
BGEZ        R5,label6
NOP
BLTZ        R7,label7
NOP
BEQ         R0,R0,label2
ADDIU       R2,R0,-1
label7:
 SLTU        R10,R4,R6
SUBU        R4,R4,R6
SLTU        R11,R5,R10
SUBU        R5,R5,R10
SLTU        R10,R5,R7
OR          R10,R10,R11
BEQ         R10,R0,label8
SUBU        R5,R5,R7
BEQ         R0,R0,label2
ADDIU       R2,R0,1
label8:
 OR          R10,R5,R4
BEQ         R10,R0,label9
NOP
BEQ         R0,R0,label2
ADDIU       R2,R0,-1
label9:
 BEQ         R0,R0,label2
ADDIU       R2,R0,0
label6:
 BGEZ        R7,label10
NOP
BEQ         R0,R0,label2
ADDIU       R2,R0,1
label10:
 SLTU        R10,R4,R6
SUBU        R4,R4,R6
SLTU        R11,R5,R10
SUBU        R5,R5,R10
SLTU        R10,R5,R7
OR          R10,R10,R11
BEQ         R10,R0,label11
SUBU        R5,R5,R7
BEQ         R0,R0,label2
ADDIU       R2,R0,-1
label11:
 OR          R10,R5,R4
BEQ         R10,R0,label12
NOP
BEQ         R0,R0,label2
ADDIU       R2,R0,1
label12:
 ADDIU       R2,R0,0
label2:
B label_end
NOP
label4:
 BEQ         R0,R0,label2
OR          R2,R0,R9
label_end:
    }
}

void _LongDoubleToSignedLongLong()
{
    asm {
ADDIU       R29,R29,-32
ADDU        R6,R0,R0
ADDU        R7,R0,R0
SW          R17,20(R29)
SW          R16,16(R29)
ADDU        R17,R5,R0
SW          R31,24(R29)
JAL         __Lib_MathDouble__DLL_1304
ADDU        R16,R4,R0
ADDU        R4,R16,R0
BLTZ        R2,label1
ADDU        R5,R17,R0
JAL         __LongDoubleToUnsignedLongLong
NOP
LW          R31,24(R29)
LW          R17,20(R29)
LW          R16,16(R29)
B label_end
ADDIU       R29,R29,32
label1:
LUI         R5,0x8000

ADDU        R4,R16,R0
XOR         R7,R17,R5
JAL         __LongDoubleToUnsignedLongLong
ADDU        R5,R7,R0
LW          R31,24(R29)
LW          R17,20(R29)
LW          R16,16(R29)
SUBU        R2,R0,R2
SUBU        R3,R0,R3
SLTU        R4,R0,R2
SUBU        R3,R3,R4
ADDIU       R29,R29,32
label_end:
    }
}

// ----------------------------------------------------------------------------
/*
    __Lib_MathDouble.c

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
