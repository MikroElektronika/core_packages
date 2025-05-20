/**************************************************************************//**
 * @file     system_M471.h
 * @version  V1.00
 * @brief    CMSIS Cortex-M4 Core Peripheral Access Layer Header File for M471
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/

#ifndef __SYSTEM_M471_H__
#define __SYSTEM_M471_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

//#define FPGA_BOARD

/*----------------------------------------------------------------------------
  Define clocks
 *----------------------------------------------------------------------------*/
#ifdef FPGA_BOARD
#define __HXT       (12000000UL)    /*!< External Crystal Clock Frequency     */
#define __LXT       (32768UL)       /*!< External Crystal Clock Frequency 32.768KHz */
#define __HIRC      (12000000UL)    /*!< Internal 12M RC Oscillator Frequency */
#define __LIRC      (__LXT)         /*!< Internal 10K RC Oscillator Frequency */
#define __HSI       (12000000UL)    /*!< PLL default output is 12MHz */
#else
#define __HXT       (12000000UL)    /*!< External Crystal Clock Frequency     */
#define __LXT       (32768UL)       /*!< External Crystal Clock Frequency 32.768KHz */
#define __HIRC      (48000000UL)    /*!< Internal 12M RC Oscillator Frequency */
#define __LIRC      (38400UL)       /*!< Internal 10K RC Oscillator Frequency */
#define __HSI       (96000000UL)    /*!< PLL default output is 96MHz */
#endif

#define __SYS_OSC_CLK     (    ___HSI)    /* Main oscillator frequency        */

#define __SYSTEM_CLOCK    (1UL*__HXT)

extern uint32_t SystemCoreClock;     /*!< System Clock Frequency (Core Clock)  */
extern uint32_t CyclesPerUs;         /*!< Cycles per micro second              */
extern uint32_t PllClock;            /*!< PLL Output Clock Frequency           */

/**
  \brief Exception / Interrupt Handler Function Prototype
*/
typedef void(*VECTOR_TABLE_Type)(void);


/**
 * Initialize the system
 *
 * @param  none
 * @return none
 *
 * @brief  Setup the micro controller system.
 *         Initialize the System and update the SystemCoreClock variable.
 */
extern void SystemInit (void);

/**
 * Update SystemCoreClock variable
 *
 * @param  none
 * @return none
 *
 * @brief  Updates the SystemCoreClock with current core Clock
 *         retrieved from cpu registers.
 */
extern void SystemCoreClockUpdate (void);

#ifdef __cplusplus
}
#endif

#endif /* __SYSTEM_M471_H__ */

/*** (C) COPYRIGHT 2016 Nuvoton Technology Corp. ***/
