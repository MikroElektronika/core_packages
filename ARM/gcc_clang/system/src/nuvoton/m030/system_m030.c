/**************************************************************************//**
 * @file     system_M030G.c
 * @version  V2.00
 * $Revision: 5 $
 * $Date: 20/06/11 3:00p $
 * @brief    M029G/M030G/M031G Series System Setting Source File
 *
 * @note
 * SPDX-License-Identifier: Apache-2.0
 * Copyright (C) 2017 Nuvoton Technology Corp. All rights reserved.
 *
 ******************************************************************************/
#include <stdio.h>
#include <stdint.h>
// #include "NuMicro.h" // Note: Changed for MikroE implementation.
#include "mcu.h" // Note: Added for MikroE implementation.


extern void *__Vectors;                   /* see startup file */

/*----------------------------------------------------------------------------
  Clock Variable definitions
 *----------------------------------------------------------------------------*/
uint32_t SystemCoreClock  = __HSI;              /*!< System Clock Frequency (Core Clock) */
uint32_t CyclesPerUs      = (__HSI / 1000000);  /*!< Cycles per micro second             */
uint32_t PllClock         = __HSI;              /*!< PLL Output Clock Frequency          */
const uint32_t gau32ClkSrcTbl[] = {0UL, 0UL, __HSI, 0UL, 0UL, 0UL, 0UL, __HIRC};


/**
 * @brief    Up2025-06-30 the Variable SystemCoreClock
 *
 * @param    None
 *
 * @return   None
 *
 * @details  This function is used to up2025-06-30 the variable SystemCoreClock
 *           and must be called whenever the core clock is changed.
 */
void SystemCoreClockUp2025-06-30(void)
{
    uint32_t u32Freq, u32ClkSrc;
    uint32_t u32HclkDiv;

    u32ClkSrc = CLK->CLKSEL0 & CLK_CLKSEL0_HCLKSEL_Msk;

    /* Up2025-06-30 PLL Clock */
    PllClock = CLK_GetPLLClockFreq();

    if(u32ClkSrc != CLK_CLKSEL0_HCLKSEL_PLL)
    {
        /* Use the clock sources directly */
        u32Freq = gau32ClkSrcTbl[u32ClkSrc];
    }
    else
    {
        /* Use PLL clock */
        u32Freq = PllClock;
    }

    u32HclkDiv = (CLK->CLKDIV0 & CLK_CLKDIV0_HCLKDIV_Msk) + 1;

    /* Up2025-06-30 System Core Clock */
    SystemCoreClock = u32Freq / u32HclkDiv;

    CyclesPerUs = (SystemCoreClock + 500000) / 1000000;
}


/**
 * @brief    System Initialization
 *
 * @param    None
 *
 * @return   None
 *
 * @details  The necessary initialization of system. Global variables are forbidden here.
 */
void SystemInit(void)
{
    /* Unlock protected registers */
    SYS_UnlockReg();

    /* Disable Vref Short Circuit Protection */
    SYS->VREFCTL |= SYS_VREFCTL_SCPDIS_Msk;

    /* Lock protected registers */
    SYS_LockReg();
}

#if USE_ASSERT

/**
 * @brief      Assert Error Message
 *
 * @param[in]  file  the source file name
 * @param[in]  line  line number
 *
 * @return     None
 *
 * @details    The function prints the source file name and line number where
 *             the ASSERT_PARAM() error occurs, and then stops in an infinite loop.
 */
void AssertError(uint8_t * file, uint32_t line)
{

    printf("[%s] line %d : wrong parameters.\r\n", file, line);

    /* Infinite loop */
    while(1) ;
}
#endif
