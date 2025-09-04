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

extern uint32_t __data_load__;
extern uint32_t __data_start__;
extern uint32_t __data_end__;
extern uint32_t __bss_start__;
extern uint32_t __bss_end__;

static void data_init(void) {
    /* Copy .data */
    uint32_t *src = &__data_load__;
    uint32_t *dst = &__data_start__;
    while (dst < &__data_end__) {
        *dst++ = *src++;
    }

    /* Zero .bss */
    for (dst = &__bss_start__; dst < &__bss_end__; ) {
        *dst++ = 0;
    }
}

/**
 * Initialize the system
 * @param  none
 * @return none
 * @brief  Set-up and initialize the microcontroller system.
 */
void clockConfig(void)
{
    data_init();

    /* Disable SIWD. */
    TSB_SIWD0->EN = SIWDEN_Val;
    TSB_SIWD0->CR = SIWDCR_Val;

    /* Set-up FPU settings. */
    SCB->CPACR |= ((3UL << (10*2)) | (3UL << (11*2)));

    /* If external clock selection requested. */
    if ( VALUE_SYSTEM_CGOSCCR & 0x100 ) {
        /* Enable external oscillator. */
        TSB_CG->OSCCR |= VALUE_SYSTEM_CGOSCCR & 0x6;
        /* Set external clock source. */
        TSB_CG_OSCCR_OSCSEL = 1;
        /* Wait for external clock source to be set. */
        while (!( TSB_CG_OSCCR_OSCF ));
    }

    /* Set all the rest oscillator configuration parameters. */
    TSB_CG->OSCCR |= VALUE_SYSTEM_CGOSCCR & ~0x100;

    /* If PLL is requested to be system clock source. */
    if ( VALUE_SYSTEM_CGPLL0SEL & 0x2 ) {
        /* Set PLL divisors and multiplicators. */
        TSB_CG->PLL0SEL = ( VALUE_SYSTEM_CGPLL0SEL & 0xFFFFFF00 );
        /* Enable PLL. */
        TSB_CG->PLL0SEL |= ( VALUE_SYSTEM_CGPLL0SEL & 0x1 );
        /* Set PLL as system clock. */
        TSB_CG->PLL0SEL |= ( VALUE_SYSTEM_CGPLL0SEL & 0x2 );
    }

    /* Set requested system configuration. */
    TSB_CG->SYSCR = VALUE_SYSTEM_CGSYSCR;
}
