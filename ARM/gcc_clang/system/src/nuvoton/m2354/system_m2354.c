/**************************************************************************//**
 * @file     system_M2354.c
 * @version  V2.00
 * @brief    System Setting Source File
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/

#include "core_header.h"
#include "mcu.h" // Note: Added for MikroE implementation.

extern void *__Vectors;                   /* see startup file */

extern uint32_t __bss_start__;
extern uint32_t __bss_end__;

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