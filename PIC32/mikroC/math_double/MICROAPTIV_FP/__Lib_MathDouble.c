/*
    __lib_MathDouble.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

void __D2ULL_FM()
{
    asm {
        ORI  R5, R0, R0
        LUI  R5, 0x5F00
        MTC1 R5, S0
        C.LE.S 0,S0, S12
        BC1T L_GT_LongLong
        NOP
        TRUNC.L.S S12, S12
        MFC1  R2, S12
        MFHC1 R3, S12
        J L_lab0
        NOP
    L_GT_LongLong:
        ORI  R5, R0, R0
        LUI  R5, 0x5F00
        MTC1 R5, S1
        SUB.S S12, S12, S1
        TRUNC.L.S S12, S12
        MFC1 R2, S12
        MFHC1 R3, S12
        LUI R4, 0x8000
        XOR R3, R4, R3
    L_lab0:
    }
}

void __LD2ULL_FM()
{
    asm {
        ORI  R5, R0, R0
        ORI  R2, R0, R0
        LUI  R2, 0x43E0
        MTC1 R5, S0
        MTHC1 R2, S0
        C.LE.D 0,S0, S12
        BC1T L_GT_LongLong
        NOP
        TRUNC.L.D S12, S12
        MFC1  R2, S12
        MFHC1 R3, S12
        J L_lab0
        NOP
    L_GT_LongLong:
        ORI  R5, R0, R0
        ORI  R2, R0, R0
        LUI  R2, 0x43E0
        MTC1 R5, S1
        MTHC1 R2, S1
        SUB.D S12, S12, S1
        TRUNC.L.D S12, S12
        MFC1 R2, S12
        MFHC1 R3, S12
        LUI R4, 0x8000
        XOR R3, R4, R3
    L_lab0:
        // results are in R2 & R3
    }
}

void __ULL2LD_FM()
{
    // R4 and R5 are input parameters
    asm {
        MOVZ R25, R4, R0
        MOVZ R26, R5, R0
        SRL R5, R26, 31
        BNE R5, R0, Lab_leading1
        NOP
        MTC1 R25, S0
        MTHC1 R26, S0
        J Lab_ende
        CVT.D.L S0, S0
    Lab_leading1:
        ANDI R2, R25, 1  // check if odd
        MOVZ R6, R2, R0  // save oddness
        ANDI R2, R26, 0
        SLL R2, R26, 31  // Lowest bit to the 31st place in R2 (upper word)
        SRL R4, R25, 1   // Shift right by 1, logical 0 at the 31st place
        OR R4, R2, R4    // Insert the lowest bit from the upper word
        SRL R5, R26, 1   // Shift upper word (R5 and R4) right by 1, divide by 2
        MOVZ R2, R6, R0  // Load the oddness
        OR R2, R2, R4
        MTC1 R4, S0
        MTHC1 R5, S0
        CVT.D.L S0, S0
        ADD.D S0, S0, S0 // Add to itself
    Lab_ende:
    }
}

void __ULL2D_FM()
{
    // R4 are R5 input parameters
    asm {
        MOVZ R25, R4, R0
        MOVZ R26, R5, R0
        SRL R5, R26, 31
        BNE R5, R0, Lab_leading1
        NOP
        MTC1 R25, S0
        MTHC1 R26, S0
        J Lab_ende
        CVT.S.L S0, S0
    Lab_leading1:
        ANDI R2, R25, 1  // Check if odd
        MOVZ R6, R2, R0  // Save oddness
        ANDI R2, R26, 0
        SLL R2, R26, 31  // Lowest bit to the 31st place in R2 (upper word)
        SRL R4, R25, 1   // Shift right by 1, logical 0 at the 31st place
        OR R4, R2, R4    // Insert the lowest bit from the upper word
        SRL R5, R26, 1   // Shift upper word (R5 and R4) right by 1
        OR R2, R2, R4
        MTC1 R4, S0
        MTHC1 R5, S0
        CVT.S.L S0, S0
        ADD.S S0, S0, S0 // Add to itself
    Lab_ende:
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
