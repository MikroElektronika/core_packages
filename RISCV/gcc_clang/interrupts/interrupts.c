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

#ifdef INTERRUPTS_ESP_MATRIX
/* ------------------------------------------------------------------------- */
/* Espressif RISC-V: interrupt matrix + INTC (C2/C3), PLIC (C6/H2) or CLIC    */
/* (C5/C61/P4/S31). Every enabled source is routed to CPU interrupt line      */
/* INTERRUPTS_ESP_CPU_LINE; the startup trap entry calls                      */
/* __esp_interrupt_dispatch(), which calls <SOURCE>_IRQHandler for each       */
/* pending source routed to that line.                                        */
/* ------------------------------------------------------------------------- */

#define MSTATUS_MIE (0x00000008UL)
#define ESP_REG(addr) (*(volatile unsigned long *)(addr))
#define ESP_MAP(src)  ESP_REG(INTERRUPTS_ESP_MAP_BASE + 4UL * (unsigned long)(src))
#define ESP_LINE_OFF  (0UL) // CPU line 0 is never enabled: routing a source there disconnects it

extern void ( * const __esp_irq_handlers[] )( void );
static const unsigned long esp_status_regs[ INTERRUPTS_ESP_STATUS_COUNT ] = INTERRUPTS_ESP_STATUS_REGS;

static void esp_cpu_line_enable( void )
{
    const unsigned long line = INTERRUPTS_ESP_CPU_LINE;
#if defined( INTERRUPTS_ESP_INTC )
    ESP_REG( INTERRUPTS_ESP_INTERRUPT_CORE0_CPU_INT_TYPE_REG ) &= ~( 1UL << line ); // level
    ESP_REG( INTERRUPTS_ESP_INTERRUPT_CORE0_CPU_INT_PRI_0_REG + 4UL * line ) = 1UL;
    ESP_REG( INTERRUPTS_ESP_INTERRUPT_CORE0_CPU_INT_THRESH_REG ) = 1UL;
    ESP_REG( INTERRUPTS_ESP_INTERRUPT_CORE0_CPU_INT_ENABLE_REG ) |= ( 1UL << line );
#elif defined( INTERRUPTS_ESP_PLIC )
    ESP_REG( INTERRUPTS_ESP_PLIC_MXINT_TYPE_REG ) &= ~( 1UL << line ); // level
    ESP_REG( INTERRUPTS_ESP_PLIC_MXINT0_PRI_REG + 4UL * line ) = 1UL;
    ESP_REG( INTERRUPTS_ESP_PLIC_MXINT_THRESH_REG ) = 1UL;
    ESP_REG( INTERRUPTS_ESP_PLIC_MXINT_ENABLE_REG ) |= ( 1UL << line );
#elif defined( INTERRUPTS_ESP_CLIC )
    // CLIC control word: CTL (level 1, lower bits set) | ATTR mode = machine, level triggered, not vectored | IE.
    const unsigned long ctl = ( 1UL << ( 8UL - INTERRUPTS_ESP_NLBITS ) ) | ( ( 1UL << ( 8UL - INTERRUPTS_ESP_NLBITS ) ) - 1UL );
    ESP_REG( INTERRUPTS_ESP_DR_REG_CLIC_CTRL_BASE + 4UL * ( line + INTERRUPTS_ESP_CLIC_EXT_INTR_NUM_OFFSET ) ) =
        ( ctl << 24 ) | ( 3UL << 22 ) | ( 1UL << 8 );
#endif
}

void __esp_interrupt_dispatch( void )
{
    for ( unsigned long reg = 0; reg < INTERRUPTS_ESP_STATUS_COUNT; reg++ ) {
        unsigned long pending = ESP_REG( esp_status_regs[ reg ] );
        while ( pending ) {
            unsigned long bit = __builtin_ctzl( pending );
            unsigned long source = reg * 32UL + bit;
            pending &= pending - 1UL;
            if ( ( source < INTERRUPTS_ESP_SOURCES ) && ( ( ESP_MAP( source ) & 0x3FUL ) == INTERRUPTS_ESP_CPU_LINE ) ) {
                __esp_irq_handlers[ source ]();
            }
        }
    }
}

void interrupts_enable( void )
{
    set_csr( mstatus, MSTATUS_MIE );
}

void interrupts_disable( void )
{
    clear_csr( mstatus, MSTATUS_MIE );
}

void interrupt_enable( int interrupt )
{
    if ( ( interrupt < 0 ) || ( interrupt >= INTERRUPTS_ESP_SOURCES ) ) {
        return;
    }
    esp_cpu_line_enable();
    ESP_MAP( interrupt ) = INTERRUPTS_ESP_CPU_LINE;
}

void interrupt_disable( int interrupt )
{
    if ( ( interrupt < 0 ) || ( interrupt >= INTERRUPTS_ESP_SOURCES ) ) {
        return;
    }
    ESP_MAP( interrupt ) = ESP_LINE_OFF;
}

#else // ECLIC (GigaDevice, Nuclei cores)

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

#endif // INTERRUPTS_ESP_MATRIX

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
