/*
    interrupts.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

---------------------------------------------------------------------------- */

#include "interrupts.h"

/* -----------------------------PRIVATE MACROS------------------------------ */

#define set_csr(reg, bit) ({ unsigned long __tmp; \
                             if (__builtin_constant_p(bit) && (unsigned long)(bit) < 32) \
                                 asm volatile ("csrrs %0, " #reg ", %1" : "=r"(__tmp) : "i"(bit)); \
                             else \
                                 asm volatile ("csrrs %0, " #reg ", %1" : "=r"(__tmp) : "r"(bit)); \
                             __tmp; })
#define clear_csr(reg, bit) ({ unsigned long __tmp; \
                             if (__builtin_constant_p(bit) && (unsigned long)(bit) < 32) \
                                 asm volatile ("csrrc %0, " #reg ", %1" : "=r"(__tmp) : "i"(bit)); \
                             else \
                                 asm volatile ("csrrc %0, " #reg ", %1" : "=r"(__tmp) : "r"(bit)); \
                             __tmp; })

#define read_csr(reg) ({ unsigned long __tmp; \
                         asm volatile ("csrr %0, " #reg : "=r"(__tmp)); \
                         __tmp; })

#define write_csr(reg, val) ({ \
                               if (__builtin_constant_p(val) && (unsigned long)(val) < 32) \
                                   asm volatile ("csrw " #reg ", %0" :: "i"(val)); \
                               else \
                                   asm volatile ("csrw " #reg ", %0" :: "r"(val)); })

#define SET_ECLIC_CLICINT_IE(IRQn,val)   (*(volatile unsigned char*)(ECLIC_ADDR_BASE+ECLIC_INT_IE_OFFSET+IRQn*4)=val)

#define SET_ECLIC_CLICINT_ATTR(IRQn,val) (*(volatile unsigned char*)(ECLIC_ADDR_BASE+ECLIC_INT_ATTR_OFFSET+IRQn*4)=val)
#define GET_ECLIC_CLICINT_ATTR(IRQn)     (*(volatile unsigned char*)ECLIC_ADDR_BASE+ECLIC_INT_ATTR_OFFSET+IRQn*4)

#define MSTATUS_MIE (0x00000008UL)
#define ECLIC_ADDR_BASE (0xD2000000UL)
#define ECLIC_INT_IE_OFFSET (0x1001UL)
#define ECLIC_INT_ATTR_OFFSET (0x1002UL)

#define MTVEC_CLIC_INTERRUPT_MODE (0x00000003UL)
#define MTVEC_CLIC_INTERRUPT_MODE_MASK (0xFFFFFFC0UL)
#define CLICINT_ATTR_VECTORED_INTERRUPT (0x1UL)

/* ----------------------PRIVATE FUNCTION DECLARATIONS---------------------- */

/**
 * @brief Enables interrupts on the global level.
 * @return None.
 */
static inline void interrupts_enable_asm( void );

/**
 * @brief Disables interrupts on the global level.
 * @return None.
 */
static inline void interrupts_disable_asm( void );

/* -----------------------PUBLIC FUNCTION DEFINITIONS----------------------- */

void interrupts_enable( void )
{
    interrupts_enable_asm();
}

void interrupts_disable( void )
{
    interrupts_disable_asm();
}

void interrupt_enable( int interrupt )
{
    // Get previous register status.
    unsigned long mtvec_value = read_csr( mtvec );
    mtvec_value = mtvec_value & MTVEC_CLIC_INTERRUPT_MODE_MASK;
    mtvec_value = mtvec_value | MTVEC_CLIC_INTERRUPT_MODE;
    write_csr( mtvec, mtvec_value );
    // Set vectored mode for current interrupt value.
    unsigned char old_clicint_attr = GET_ECLIC_CLICINT_ATTR( interrupt );
    unsigned char new_clicint_attr = ( old_clicint_attr | CLICINT_ATTR_VECTORED_INTERRUPT );
    SET_ECLIC_CLICINT_ATTR( interrupt, new_clicint_attr );
    // Enable interrupt vector.
    SET_ECLIC_CLICINT_IE( interrupt, 1 );
}

void interrupt_disable( int interrupt )
{
    // Disable interrupt vector.
    SET_ECLIC_CLICINT_IE( interrupt, 0 );
}

/* ----------------------PRIVATE FUNCTION DEFINITIONS----------------------- */

static inline void interrupts_enable_asm( void )
{
    set_csr( mstatus, MSTATUS_MIE );
}

static inline void interrupts_disable_asm( void )
{
    clear_csr( mstatus, MSTATUS_MIE );
}

// ----------------------------------------------------------------------------
/*
    interrupts.c

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
