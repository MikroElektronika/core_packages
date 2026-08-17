/****************************************************************************
**
** Copyright (C) ${COPYRIGHT_YEAR_MIKROE} MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
** Commercial License Usage
**
** Licensees holding valid commercial NECTO compilers AI licenses may use this
** file in accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The MikroElektronika Company.
** For licensing terms and conditions see
** https://www.mikroe.com/legal/software-license-agreement.
** For further information use the contact form at
** https://www.mikroe.com/contact.
**
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used for
** non-commercial projects under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
** OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
 * @file  init_clock.c
 * @brief Mikroe clock initialization API.
 */

#include "core_header.h"
#include "mcu.h"

#define SIWD_SETUP (1U)           /* 1:Disable SIWD, 0:Enable SIWD */
#define SIWDEN_Val (0x00000000UL) /* SIWD Disable */
#define SIWDCR_Val (0x000000B1UL) /* SIWD Disable code */

#define CGSYSCR_PRCK_OFFSET        8

#define CGSYSCR_GEAR_MASK          0x7
#define CGSYSCR_PRCK_MASK          0xF00

#define CGPLL0SEL_PLL0ON_MASK      0x1
#define CGPLL0SEL_PLL0SEL_MASK     0x2
#define CGPLL0SEL_PLL0ST_MASK      0x4
#define CGPLL0SEL_PLL0SET_MASK     0xFFFFFF00

#define CGOSCCR_EOSCEN_MASK        0x6
#define CGOSCCR_OSCSEL_MASK        0x100
#define CGOSCCR_OSCF_MASK          0x200

/*
 * TMPM3H permits an external high-speed clock up to 20 MHz before PLL
 * selection. These loop counts therefore provide at least the datasheet/
 * reference-manual PLL setup times even at the fastest pre-PLL clock.
 */
#define PLL0_SETUP_WAIT_LOOPS      2000U
#define PLL0_STABLE_WAIT_LOOPS     8000U

typedef struct
{
    uint32_t CG_FC_Frequency;   // System frequency.
    uint32_t CG_FSYS_Frequency; // System clock.
    uint32_t CG_FT0_Frequency;  // Peripheral prescaler clock.
} CG_ClocksTypeDef;

static uint8_t FSYS_Prescaler_Table[ 5 ] = { 1, 2, 4, 8, 16 };
static uint16_t FT0_Prescaler_Table[ 10 ] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

static void clock_wait_loops( uint32_t loops )
{
    while ( loops-- ) {
        __NOP();
    }
}

void CG_GetClocksFrequency( CG_ClocksTypeDef *CG_Clocks )
{
    uint8_t fsys_prescaler = FSYS_Prescaler_Table[
        VALUE_SYSTEM_CGSYSCR & CGSYSCR_GEAR_MASK
    ];

    uint16_t ft0_prescaler = FT0_Prescaler_Table[
        ( VALUE_SYSTEM_CGSYSCR & CGSYSCR_PRCK_MASK ) >> CGSYSCR_PRCK_OFFSET
    ];

    /* System frequency is always the same as the configured general clock. */
    CG_Clocks->CG_FC_Frequency = ( uint32_t )FOSC_KHZ_VALUE * 1000U;

    /* Get system clock. */
    CG_Clocks->CG_FSYS_Frequency = CG_Clocks->CG_FC_Frequency / fsys_prescaler;

    /* Get peripheral prescaler clock. */
    CG_Clocks->CG_FT0_Frequency = CG_Clocks->CG_FC_Frequency / ft0_prescaler;
}

/**
 * Initialize the system.
 * @param  none
 * @return none
 * @brief  Set-up and initialize the microcontroller system.
 */
void SystemInit( void )
{
    /* Disable SIWD. */
    TSB_SIWD0->EN = SIWDEN_Val;
    TSB_SIWD0->CR = SIWDCR_Val;

    /*
     * TMPM3HQF10BFG uses Cortex-M3, so there is no Cortex-M4 FPU/CPACR
     * initialization here.
     */

    /* If external clock selection is requested. */
    if ( VALUE_SYSTEM_CGOSCCR & CGOSCCR_OSCSEL_MASK ) {
        /* Enable the selected external high-speed oscillator/clock input. */
        TSB_CG->OSCCR |= VALUE_SYSTEM_CGOSCCR & CGOSCCR_EOSCEN_MASK;

        /* Select external clock source. */
        TSB_CG_OSCCR_OSCSEL = 1;

        /* Wait until the external source is selected and stable. */
        while ( !( TSB_CG->OSCCR & CGOSCCR_OSCF_MASK ) );
    }

    /* Set the remaining oscillator configuration parameters. */
    TSB_CG->OSCCR |= VALUE_SYSTEM_CGOSCCR & ~CGOSCCR_OSCSEL_MASK;

    /* If PLL0 is requested as system clock source. */
    if ( VALUE_SYSTEM_CGPLL0SEL & CGPLL0SEL_PLL0SEL_MASK ) {
        /*
         * Program PLL0 setup while PLL0 is OFF.
         * PLL0SET occupies bits [31:8].
         */
        TSB_CG->PLL0SEL = VALUE_SYSTEM_CGPLL0SEL & CGPLL0SEL_PLL0SET_MASK;

        /*
         * Toshiba specifies an interval after writing PLL0SET before
         * enabling PLL0.
         */
        clock_wait_loops( PLL0_SETUP_WAIT_LOOPS );

        /* Enable PLL0. */
        TSB_CG->PLL0SEL |= VALUE_SYSTEM_CGPLL0SEL & CGPLL0SEL_PLL0ON_MASK;

        /* Allow PLL0 to stabilize before selecting it. */
        clock_wait_loops( PLL0_STABLE_WAIT_LOOPS );

        /* Select PLL0 as system clock. */
        TSB_CG->PLL0SEL |= VALUE_SYSTEM_CGPLL0SEL & CGPLL0SEL_PLL0SEL_MASK;

        /* Wait until PLL0 is actually selected. */
        while ( !( TSB_CG->PLL0SEL & CGPLL0SEL_PLL0ST_MASK ) );
    }

    /* Set requested system clock gear and peripheral prescaler. */
    TSB_CG->SYSCR = VALUE_SYSTEM_CGSYSCR;
}
