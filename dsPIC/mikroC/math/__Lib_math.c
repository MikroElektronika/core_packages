/******************************************************************************
    __Lib_math.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
 * @brief Multiplication of signed/unsigned long integers (32-bit size)
 * @details This function performs the multiplication of two 32-bit integers.
 *          It handles both signed and unsigned long integers.
 */
void _Multiply_32x32(void) {
    asm  {
        MUL.UU   W1, W2, W4
        MOV      W0, W5
        MUL.UU   W0, W2, W0
        ADD      W4, W1, W1
        MUL.UU   W5, W3, W4
        ADD      W4, W1, W1
    }
}

/**
 * @brief Division of signed/unsigned long integers (32-bit size)
 * @details This function performs the division of two 32-bit integers.
 *          It handles both signed and unsigned long integers.
 */
void _Divide_32x32( void )
{
    asm RCALL Divide_32x32___testsus
    asm GOTO the_end_Divide_32x32;

    asm {
    Divide_32x32___testsus:
        CP0.W     W4
        BRA NZ    , Divide_32x32___divsi3
        RCALL    Divide_32x32___udivsi3
        RETURN
    Divide_32x32___divsi3:
        XOR.W    W1, W3, [W15++]
        CP0.W    W1
        BRA GE   , Divide_32x32_divtestb
        SUBR.W   W0, #0, W0
        SUBBR.W  W1, #0, W1
    Divide_32x32_divtestb:
        CP0.W    W3
        BRA GE   , Divide_32x32_calcquot
        SUBR.W   W2, #0, W2
        SUBBR.W  W3, #0, W3
    Divide_32x32_calcquot:
        RCALL    Divide_32x32___udivsi3
        CP0.W    [--W15]
        BRA NN   , Divide_32x32_returnq
        SUBR.W   W0, #0, W0
        SUBBR.W  W1, #0, W1
    Divide_32x32_returnq:
        RETURN
    Divide_32x32___udivsi3:
        MUL.UU   W4, #0, W4
        MOV      #0x20, W6
    Divide_32x32_nextbit:
        SL.W     W0, W0
        RLC.W    W1, W1
        RLC.W    W4, W4
        RLC.W    W5, W5
        BSET     W0, #0
        SUB.W    W4, W2, W4
        SUBB.W   W5, W3, W5
        BRA NN   , Divide_32x32_iterate
        ADD.W    W4, W2, W4
        ADDc.W   W5, W3, W5
        BCLR     W0, #0
    Divide_32x32_iterate:
        DEC.W    W6, W6
        BRA NZ   , Divide_32x32_nextbit
        RETURN
    }

    asm the_end_Divide_32x32:
    ;
}

/**
 * @brief Calculates the modulo of division of two long integers (32-bit size)
 * @details This function computes the remainder of the division of two 32-bit integers.
 *          It handles both signed and unsigned long integers.
 */
void _Modulus_32x32(void) {
    asm RCALL Modulus_32x32___testsus;
    asm GOTO the_end_Modulus_32x32;

    asm {
    Modulus_32x32___testsus:
        CP0.W     W4
        BRA NZ    , Modulus_32x32___modsi3
        RCALL     Modulus_32x32___umodsi3
        RETURN
    Modulus_32x32___modsi3:
        MOV.W     W1, [W15++]
        CP0.W     W1
        BRA GE    , Modulus_32x32_modtestb
        SUBR.W    W0, #0, W0
        SUBBR.W   W1, #0, W1
    Modulus_32x32_modtestb:
        CP0.W     W3
        BRA ge    , Modulus_32x32_calcrem
        SUBR.W    W2, #0, W2
        SUBBR.W   W3, #0, W3
    Modulus_32x32_calcrem:
        RCALL     Modulus_32x32___umodsi3
        CP0.W     [--W15]
        BRA NN    , Modulus_32x32_exitr
        SUBR.W    W0, #0, W0
        SUBBR.W   W1, #0, W1
    Modulus_32x32_exitr:
        RETURN
    Modulus_32x32___umodsi3:
        RCALL     Modulus_32x32___udivsi3
        MOV.D     W4, W0
        RETURN
    Modulus_32x32___udivsi3:
        MUL.UU    W4, #0, W4
        MOV       #0x20, W6
    Modulus_32x32_nextbit:
        SL.W      W0, W0
        RLC.W     W1, W1
        RLC.W     W4, W4
        RLC.W     W5, W5
        BSET      W0, #0
        SUB.W     W4, W2, W4
        SUBB.W    W5, W3, W5
        BRA NN    , Modulus_32x32_iterate
        ADD.W     W4, W2, W4
        ADDC.W    W5, W3, W5
        BCLR      W0, #0
    Modulus_32x32_iterate:
        DEC.W     W6, W6
        BRA NZ    , Modulus_32x32_nextbit
        RETURN
    }

    asm the_end_Modulus_32x32:
    ;
}

// ----------------------------------------------------------------------------
/*
    __Lib_math.c

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
