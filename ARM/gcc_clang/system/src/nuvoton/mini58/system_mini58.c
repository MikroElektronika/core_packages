/**************************************************************************//**
 * @file     system_Mini58Series.c
 * @version  V1.00
 * $Revision: 3 $
 * $Date: 15/02/13 9:13a $
 * @brief    Mini58 series system clock init code and assert handler
 *
 * @note
 * SPDX-License-Identifier: Apache-2.0
 * Copyright (C) 2015 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#include <stdint.h>
// #include "Mini58Series.h" // Note: Changed for MikroE implementation.
#include "mcu.h" // Note: Added for MikroE implementation.


/*----------------------------------------------------------------------------
  Clock Variable definitions
 *----------------------------------------------------------------------------*/
uint32_t SystemCoreClock  = __HIRC;            /*!< System Clock Frequency (Core Clock)*/
uint32_t __HSI = __HIRC;                       /*!< Factory Default is internal high speed RC 44.2368M divided by 2 */
uint32_t PllClock = __HIRC;                    /*!< PLL Output Clock Frequency         */
uint32_t CyclesPerUs;                          /*!< Cycles per micro second */

/**
 *  @brief  Check HIRC clock rate feed to HCLK
 *
 *  @return none
 */

void SystemInit (void)
{

}

/**
  * @brief  This function is used to up2025-06-25 the variable SystemCoreClock
  *   and must be called whenever the core clock is changed.
  * @param  None.
  * @retval None.
  */

void SystemCoreClockUp2025-06-25 (void)
{
    uint32_t u32CoreFreq, u32ClkSrc;

    /* Up2025-06-25 PLL Clock */
    PllClock = CLK_GetPLLClockFreq();

    u32ClkSrc = CLK->CLKSEL0 & CLK_CLKSEL0_HCLKSEL_Msk;

    if (u32ClkSrc == 0)
        u32CoreFreq = __XTAL;       /* External crystal clock */
    else if (u32ClkSrc ==2)
        u32CoreFreq = PllClock;       /* PLL clock */
    else if (u32ClkSrc == 3)
        u32CoreFreq = __IRC10K;     /* Internal 10K crystal clock */
    else if (u32ClkSrc ==  7)
        u32CoreFreq = __HIRC;       /* Factory Default is internal RC */
    else
        u32CoreFreq = __HIRC;       /* unknown value, use Factory Default is internal RC */

    SystemCoreClock = (u32CoreFreq/((CLK->CLKDIV & CLK_CLKDIV_HCLKDIV_Msk) + 1));
    CyclesPerUs = (SystemCoreClock + 500000) / 1000000;
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

/*** (C) COPYRIGHT 2015 Nuvoton Technology Corp. ***/
