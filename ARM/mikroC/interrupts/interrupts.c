/*
    interrupts.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2023, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "interrupts.h"

// ------------------------------------------------------------- PRIVATE MACROS

/* Set bit _bit in register _reg. */
#define interrupt_bit_set(_reg,_bit) (_reg |= 1UL << _bit)

/* Clear bit _bit in register _reg. */
#define interrupt_bit_clear(_reg,_bit) (_reg &= ~(1UL << _bit))

/* Get IRQ number from IVT. */
#define INTERRUPT_GET_IRQ(ivt_val) (ivt_val - 16)

/* IRQ mask. */
#define INTERRUPT_IRQ_MASK (0x1FU)

/* Cortex register addresses. */
#define REGISTER_SCB_SHCRS (*( unsigned long * )0xE000ED24)
#define REGISTER_STK_CTRL (*( unsigned long * )0xE000E010)
#define REGISTER_NVIC_ISER_0 (*( unsigned long * )0xE000E100)
#define REGISTER_NVIC_ISER_1 (*( unsigned long * )0xE000E104)
#define REGISTER_NVIC_ISER_2 (*( unsigned long * )0xE000E108)
#define REGISTER_NVIC_ISER_3 (*( unsigned long * )0xE000E10C)
#define REGISTER_NVIC_ICER_0 (*( unsigned long * )0xE000E180)
#define REGISTER_NVIC_ICER_1 (*( unsigned long * )0xE000E184)
#define REGISTER_NVIC_ICER_2 (*( unsigned long * )0xE000E188)
#define REGISTER_NVIC_ICER_3 (*( unsigned long * )0xE000E18C)
#define REGISTER_NVIC_IPR_0 (*( unsigned long * )0xE000E400)
#define REGISTER_NVIC_SCB_SHPR1 (*( unsigned long * )0xE000ED18)
#define REGISTER_NVIC_SCB_SHPR2 (*( unsigned long * )0xE000ED1C)
#define REGISTER_NVIC_SCB_SHPR3 (*( unsigned long * )0xE000ED20)

/* Vector table numbers. */
#define IVT_MEM_MANAGE (4)
#define IVT_BUS_FAULT (5)
#define IVT_USAGE_FAULT (6)
#define IVT_SYS_TICK (15)

/* Vector table register bit locations. */
#define IVT_BIT_TICKINT (1)
#define IVT_BIT_MEMFAULTENA (16)
#define IVT_BIT_BUSFAULTENA (17)
#define IVT_BIT_USGFAULTENA (18)

// ---------------------------------------------- PRIVATE FUNCTION DECLARATIONS

/**
 * @brief Enables interrupts on the global level.
 * @return Nothing.
 */
static inline void interrupts_enable_asm( void );

/**
 * @brief Disables interrupts on the global level.
 * @return Nothing.
 */
static inline void interrupts_disable_asm( void );

// ------------------------------------------------ PUBLIC FUNCTION DEFINITIONS

void interrupts_enable( void ) {
    interrupts_enable_asm();
}

void interrupts_disable( void ) {
    interrupts_disable_asm();
}

void interrupt_enable( int interrupt ) {
    switch ( interrupt ) {
        #ifdef _INCLUDE_INTERRUPT_CASES_
        case IVT_MEM_MANAGE:
            interrupt_bit_set( REGISTER_SCB_SHCRS, IVT_BIT_MEMFAULTENA );
            break;
        case IVT_BUS_FAULT:
            interrupt_bit_set( REGISTER_SCB_SHCRS, IVT_BIT_BUSFAULTENA );
            break;
        case IVT_USAGE_FAULT:
            interrupt_bit_set( REGISTER_SCB_SHCRS, IVT_BIT_USGFAULTENA );
            break;
        #endif
        case IVT_SYS_TICK:
            interrupt_bit_set( REGISTER_STK_CTRL, IVT_BIT_TICKINT );
            break;

        default: // If none of the above, exit switch.
            break;
    }

    // General exceptions.
    if ( interrupt >= 112 ) {
        interrupt_bit_set( REGISTER_NVIC_ISER_3, ( ( INTERRUPT_GET_IRQ( interrupt ) ) & INTERRUPT_IRQ_MASK ) );
    } else if ( interrupt >= 80 ) {
        interrupt_bit_set( REGISTER_NVIC_ISER_2, ( ( INTERRUPT_GET_IRQ( interrupt ) ) & INTERRUPT_IRQ_MASK ) );
    } else if ( interrupt >= 48 ) {
        interrupt_bit_set( REGISTER_NVIC_ISER_1, ( ( INTERRUPT_GET_IRQ( interrupt ) ) & INTERRUPT_IRQ_MASK ) );
    } else if ( interrupt >= 16 ) {
        interrupt_bit_set( REGISTER_NVIC_ISER_0, ( ( INTERRUPT_GET_IRQ( interrupt ) ) & INTERRUPT_IRQ_MASK ) );
    }
}

void interrupt_disable( int interrupt ) {
    switch ( interrupt ) {
        #ifdef _INCLUDE_INTERRUPT_CASES_
        case IVT_MEM_MANAGE:
            interrupt_bit_clear( REGISTER_SCB_SHCRS, IVT_BIT_MEMFAULTENA );
            break;
        case IVT_BUS_FAULT:
            interrupt_bit_clear( REGISTER_SCB_SHCRS, IVT_BIT_BUSFAULTENA );
            break;
        case IVT_USAGE_FAULT:
            interrupt_bit_clear( REGISTER_SCB_SHCRS, IVT_BIT_USGFAULTENA );
            break;
        #endif
        case IVT_SYS_TICK:
            interrupt_bit_clear( REGISTER_STK_CTRL, IVT_BIT_TICKINT );
            break;

        default: // If none of the above, exit switch.
            break;
    }

    // General exceptions.
    if ( interrupt >= 112 ) {
        interrupt_bit_set( REGISTER_NVIC_ICER_3, ( ( INTERRUPT_GET_IRQ( interrupt ) ) & INTERRUPT_IRQ_MASK ) );
    } else if ( interrupt >= 80 ) {
        interrupt_bit_set( REGISTER_NVIC_ICER_2, ( ( INTERRUPT_GET_IRQ( interrupt ) ) & INTERRUPT_IRQ_MASK ) );
    } else if ( interrupt >= 48 ) {
        interrupt_bit_set( REGISTER_NVIC_ICER_1, ( ( INTERRUPT_GET_IRQ( interrupt ) ) & INTERRUPT_IRQ_MASK ) );
    } else if ( interrupt >= 16 ) {
        interrupt_bit_set( REGISTER_NVIC_ICER_0, ( ( INTERRUPT_GET_IRQ( interrupt ) ) & INTERRUPT_IRQ_MASK ) );
    }
}

// ----------------------------------------------- PRIVATE FUNCTION DEFINITIONS

static inline void interrupts_enable_asm( void ) {
    asm CPSIE I;
}

static inline void interrupts_disable_asm( void ) {
    asm CPSID I;
}

// ----------------------------------------------------------------------------
/*
    interrupts.c

    Copyright (c) 2023, MikroElektronika - www.mikroe.com

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
