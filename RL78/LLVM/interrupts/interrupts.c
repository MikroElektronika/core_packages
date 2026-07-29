/*
    interrupts.c

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2024, MikroElektonika - www.mikroe.com

  All rights reserved.

---------------------------------------------------------------------------- */

#include "interrupts.h"

/* -----------------------------PRIVATE MACROS------------------------------ */

/* ----------------------PRIVATE FUNCTION DECLARATIONS---------------------- */

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
    // TODO
}

void interrupt_disable( int interrupt )
{
    // TODO
}

/* ----------------------PRIVATE FUNCTION DEFINITIONS----------------------- */

static inline void interrupts_enable_asm( void )
{
    // TODO
}

static inline void interrupts_disable_asm( void )
{
    // TODO
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
