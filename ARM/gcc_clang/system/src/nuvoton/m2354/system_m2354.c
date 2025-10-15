/****************************************************************************
**
** Copyright (C) 2025 MikroElektronika d.o.o.
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
#include "mcu.h" // Note: Added for MikroE implementation.

extern void *__Vectors;                   /* see startup file */

extern uint32_t __bss_start__;
extern uint32_t __bss_end__;

uint32_t SystemCoreClock  = 0;            /*!< System Clock Frequency (Core Clock) */
uint32_t CyclesPerUs      = 0;            /*!< Cycles per micro second             */
uint32_t PllClock         = 0;            /*!< PLL Output Clock Frequency          */

/**
 * @brief    Update the Variable SystemCoreClock
 *
 * @details  This function is used to update the variable SystemCoreClock
 *           and must be called whenever the core clock is changed.
 */
void SystemCoreClockUpdate(void)
{
    /* Update PLL Clock */
    PllClock = CLK_GetPLLClockFreq();

    /* Update System Core Clock */
    SystemCoreClock = CLK_GetCPUFreq();

    /* Update Cycles per micro second */
    CyclesPerUs = (SystemCoreClock + 500000UL) / 1000000UL;
}

/**
 * @brief    System Initialization
 *
 * @details  The necessary initialization of system. Global variables are forbidden here.
 */
void SystemInit(void)
{

    if((__PC() & NS_OFFSET) == 0)
    {
        /* Unlock protected registers */
        do
        {
            SYS->REGLCTL = 0x59;
            SYS->REGLCTL = 0x16;
            SYS->REGLCTL = 0x88;
        }
        while(!SYS->REGLCTL);

        /* Enable Crypto power switch */
        SYS->PSWCTL = SYS_PSWCTL_CRPTPWREN_Msk;

        /* Enable all GPIO, SRAM and Trace clock */
        CLK->AHBCLK |= (0xffful << 20) | (1ul << 14);
    }

#if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
    SCB->VTOR = (uint32_t) &__Vectors;
#endif

    if ( VALUE_CLK_CLKSEL0 == 0x2UL ) {
        CLK->PWRCTL |= VALUE_CLK_PWRCTL;
        CLK_WaitClockReady( CLK_STATUS_HIRCSTB_Msk );

        CLK->PLLCTL = VALUE_CLK_PLLCTL | CLK_PLLCTL_PLLSRC_HIRC;
        CLK_WaitClockReady( CLK_STATUS_PLLSTB_Msk );
    }
    else {
        CLK->PWRCTL |= VALUE_CLK_PWRCTL;

        switch ( VALUE_CLK_PWRCTL ) {
        case CLK_PWRCTL_HXTEN_Msk:
            CLK_WaitClockReady( CLK_STATUS_HXTSTB_Msk );
            break;
        case CLK_PWRCTL_LXTEN_Msk:
            CLK_WaitClockReady( CLK_STATUS_LXTSTB_Msk );
            break;
        case CLK_PWRCTL_LIRCEN_Msk:
            CLK_WaitClockReady( CLK_STATUS_LIRCSTB_Msk );
            break;
        case CLK_PWRCTL_HIRCEN_Msk:
            CLK_WaitClockReady( CLK_STATUS_HIRCSTB_Msk );
            break;
        case CLK_PWRCTL_MIRCEN_Msk:
            CLK_WaitClockReady( CLK_STATUS_MIRCSTB_Msk );
            break;
        case CLK_PWRCTL_HIRC48EN_Msk:
            CLK_WaitClockReady( CLK_STATUS_HIRC48STB_Msk );
            break;

        default:
            break;
        }
    }

    CLK_SetHCLK(VALUE_CLK_CLKSEL0, VALUE_CLK_CLKDIV0);
    SystemCoreClockUpdate();

    uint32_t *dst = NULL;
    /* Zero .bss */
    for (dst = &__bss_start__; dst < &__bss_end__; ) {
        *dst++ = 0;
    }
}

typedef struct
{
    uint32_t hclk;
    uint32_t pclk;
} CLK_ClocksTypeDef;

void CLK_GetClocksFrequency( CLK_ClocksTypeDef* CLK_Clocks ) {
    CLK_Clocks->hclk = FOSC_KHZ_VALUE * 1000;

    CLK_Clocks->pclk = CLK_Clocks->hclk / ( VALUE_CLK_CLKDIV0 + 1 );
}
