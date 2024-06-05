/*
    __Lib_System_MZ_EF.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */
#include "__Lib_CP0.h"

/**
 * @brief Routine that copies from the memory area pointed to by R28 to the
 * memory area pointed to by R27. The address up to which it copies is in R26.
 */
void __CC2DW()
{
    asm {
    L_loopDW:
        LB        R30, 0(R24)
        SB        R30, 0(R23)
        ADDIU     R23, R23, 1
        BNE       R23, R22, L_loopDW
        ADDIU     R24, R24, 1
    }
}

void __CA2AB()
{
    asm {
    L_loopCA2ABs:
        LB        R30, 0(R2)
        SB        R30, 0(R3)
        ADDIU     R2, R2, 1
        BNE       R2, R4, L_loopCA2ABs
        ADDIU     R3, R3, 1
    }
}

void __CS2S()
{
    asm {
    L_loopCS2Ss:
        LB        R30, 0(R2)
        BEQ       R30, R0, L_CS2Send
        ADDIU     R2, R2, 1
        SB        R30, 0(R3)
        J         L_loopCS2Ss
        ADDIU     R3, R3, 1
    L_CS2Send:
    }
}

void __FZinS()
{
    asm {
    L_loopCS2Ss:
        LB        R30, 0(R3)
        BNE       R30, R0, L_loopCS2Ss
        ADDIU     R3, R3, 1
        ADDIU     R3, R3, -1
    }
}

void RestoreInterrupts( unsigned long status )
{
    if ( status & 0x00000001 )
        asm EI R0;
    else
        asm DI R0;
}

void __BootGenExcept()
{
    while ( 1 )
        ;
}

void __GenExcept()
{
    while ( 1 )
        ;
}

void __CacheErrorExcept()
{
    while ( 1 )
        ;
}

extern void main();

#define SRSCtl   12, 2
#define Count    9, 0
#define Compare  11, 0
#define EBase    15, 1
#define IntCtl   12, 1
#define Cause    13, 0
#define Config   16, 0
#define Config1  16, 1
#define EntryLo0 2, 0
#define EntryLo1 3, 0
#define PageMask 5, 0
#define Wired    6, 0
#define Index    0, 0
#define EntryHi  10, 0
#define ErrCtl   26, 0
#define TagLo    28, 0
#define Status   12, 0

const long __OFFx_VALS[ 214 ] = { 0 };

void __BootStartUp()
{
    asm {
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
    }

    R29 = 0x00FF00FF;
    R1 = 0xA0008000;

    asm {
        // Initialize shadow set registers
        MFC0 R30, SRSCtl
        ADD R28, R30, R0
        ADDIU R27, R0, 7    // 7 sets

    __me_lab_set_srs:
        INS R30, R27, 6, 4
        MTC0 R30, SRSCtl
        EHB
        WRPGPR R1, R1
        ADDIU R27, R27, -1
        BNE R27, R0, __me_lab_set_srs
        NOP

        MTC0 R28, SRSCtl
        EHB
        NOP

        // Cache initialization
        // PIC32MZ EC Family has 16KB I-cache and 4KB D-Cache
        MFC0 R27, Status    // Read status
        ADDIU R30, R0, -2
        AND R30, R30, R27   // disable interrupts
        ORI R30, R30, 4     // set error level
        MTC0 R30, Status
        EHB

        MTC0 R0, ErrCtl     // clear wst bit, tag array is written on CACHE
        MTC0 R0, TagLo
        EHB

        LUI R30, 0x9D00
        ORI R28, R30, 0x4000
    __me_lab_i_cache_set:
        ADDIU R30, R30, 0x10
        BNE R30, R28, __me_lab_i_cache_set
        CACHE 8, -4(R30)    // initialize instruction cache

        LUI R30, 0x8000
        ORI R28, R30, 0x1000
    __me_lab_d_cache_set:
        ADDIU R30, R30, 0x10
        BNE R30, R28, __me_lab_d_cache_set
        CACHE 9, -4(R30)    // initialize data cache

        SYNC

        MTC0 R27, Status    // revert status
        EHB
        MFC0 R30, Config    // set Kseg0 coherency algorithm
        ORI R30, R30, 7
        XORI R30, R30, 7
        ORI R30, R30, 3
        MTC0 R30, Config    // Cacheable, non-coherent, write-back, write allocate
        EHB

        // Set other cp0 registers
        MTC0 R0, Count // count = 0
        ADDIU R30, R0, -1
        MTC0 R30, Compare   // Compare = 0xFFFFFFFF
        LUI R28, 128
        MTC0 R28, Cause     // Cause (IV = 1)
        MFC0 R27, Config
        EXT R28, R27, 22, 1 // UDI bit u Cause registru
        SLL R28, R28, 17
        MFC0 R27, Status
        LUI R26, 88
        AND R27, R27, R26   // BEV SR NMI
        LUI R30, 256
        OR R27, R30, R27    // MX = 1
        OR R27, R28, R27
        MTC0 R27, Status
        NOP
        MFC0 R27, Status
        LUI R26, -65
        ORI R26, R26, -1
        AND R27, R27, R26   // BEV = 0
        MTC0 R27, Status

        // enable floating point co-processor CP1 and set FR bit and DSP bit
        MFC0 R30, Status
        LUI R27, 0x2500
        OR R30, R30, R27
        MTC0 R30, Status
        // ensure that rounding mode is trunc toward zero
        // Floating Point Control and Status Register (FCSR, CP1 Control Register 31)
        // RM 1:0 Rounding mode. This field indicates the rounding
        // mode used for most floating point operations
        CFC1 R27, 31
        LUI R30, 0xFFFF
        ORI R30, R30, 0xFFFC
        AND R27, R27, R30
        ORI R27, R27, 1
        CTC1 R27, 31
        CFC1 R30, 31
    }
    CP0_SET( CP0_EBASE, 0x9FC01000 );
    CP0_SET( CP0_INTCTL, 0x00000020 );

    //  initialize OFFxxx registers
    // if changes are made, linker must be updated
    asm {
        ORI R30, R0, 214               // number of iv
        LUI R28, hi_addr(OFF000)       // address of first offset register
        ORI R28, R28, lo_addr(OFF000)
        LUI R26, hi_addr(___OFFx_VALS) // address of const array with offsets
        ORI R26, R26, lo_addr(___OFFx_VALS)
    __me_lab_set_offx:
        LW R27, (R26)                  // load offset value
        SW R27, (R28)                  // store offset to OFFx reg
        ADDIU R26, R26, 4              // move to next value
        ADDIU R28, R28, 4              // move to next offset register
        BNE R30, R0, __me_lab_set_offx
        ADDIU R30, R30, -1             // decrement loop counter
    }

    INTCON = 0x80000000;
    PRISS = 0x76543210;

    asm nop;
    asm nop;
    asm nop;
    asm nop;
    PRECON = 0x00000032;
    asm nop;
    asm nop;
    asm nop;
    asm nop;

    // jump to main
    asm {
        LUI R30, hi_addr(_main)
        ORI R30, R30, lo_addr(_main)

        JR R30
        NOP
    }
}

char Swap( char arg )
{
    return ( arg >> 4 ) | ( arg << 4 );
}

void __FillZeros()
{
    asm {
    L___FillZeros0:
        BEQ R23, R22, L___FillZeros1
        NOP
    L____FillZeros4:
        SW R0, 0(R23)
        J L___FillZeros0
        ADDIU R23, R23, 4
    L___FillZeros1:
    }
}

// ----------------------------------------------------------------------------
/*
    __Lib_System_MZ.c

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
