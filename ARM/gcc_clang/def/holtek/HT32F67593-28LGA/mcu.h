/**************************************************************************//**
 * @file     ARMCM0plus.h
 * @brief    CMSIS Core Peripheral Access Layer Header File for
 *           ARMCM0plus Device
 * @version  V5.3.1
 * @date     09. July 2018
 ******************************************************************************/
/*
 * Copyright (c) 2009-2018 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ARMCM0plus_H
#define ARMCM0plus_H

#ifdef __cplusplus
extern "C" {
#endif


/* -------------------------  Interrupt Number Definition  ------------------------ */

typedef enum IRQn
{
/* -------------------  Processor Exceptions Numbers  ----------------------------- */
    NonMaskableInt_IRQn           = -14,     /*  2 Non Maskable Interrupt */
    HardFault_IRQn                = -13,     /*  3 HardFault Interrupt */

    SVCall_IRQn                   =  -5,     /* 11 SV Call Interrupt */

    PendSV_IRQn                   =  -2,     /* 14 Pend SV Interrupt */
    SysTick_IRQn                  =  -1,     /* 15 System Tick Interrupt */

/* -------------------  Processor Interrupt Numbers  ------------------------------ */
    RTC_CH3_IRQ      = 0,  /* RTC interrupt*/
    GPADC1_IRQ       = 1,  /* GPADC1 interrupt */
    LLC_IRQ          = 2,  /* LLC interrupt    */
    I2S_IRQ          = 3,  /* I2S interrupt    */
    I2C2_IRQ         = 4,  /* I2C2 interrupt   */
    AUDIO1_IRQ       = 5,  /* AUDIO1 interrupt   */
    CRYPT_IRQ        = 6,  /* CRYPT interrupt  */
    TRNG_IRQ         = 7,  /* TRNG interrupt   */
    RF_CAL_IRQ       = 8,  /* RF interrupt */
    UART0_IRQ        = 9,  /* UART0 interrupt  */
    UART1_IRQ        = 10,  /* UART1 interrupt  */
    UART2_IRQ        = 11,  /* UART2 interrupt  */
    SPI0_IRQ         = 12,  /* SPI0 interrupt   */
    SPI1_IRQ         = 13,  /* SPI1 interrupt   */
    DMA_IRQ4         = 14,  /* DMA interrupt   */
    DMA_IRQ5         = 15,  /* DMA interrupt   */
    I2C3_IRQ         = 16,  /* I2C3 interrupt   */
    DMA_IRQ6         = 17,  /* DMA interrupt   */
    DMA_IRQ7         = 18,  /* DMA interrupt   */
    SW_IRQ1          = 19,  /* SW interrupt    */
    TIMER2_IRQ       = 20,  /* TIMER2 interrupt */
    STIM1_IRQ0       = 21,  /* STIM1 interrupt */
    GPIO_IRQ2        = 22,  /* GPIO interrupt  */
    PMU_IRQ          = 23,  /* PMU interrupt    */
    STIM1_IRQ1       = 24,  /* STIM1 interrupt */
    STIM1_IRQ2       = 25,  /* STIM1 interrupt */
    USB_IRQ          = 26,  /* USB interrupt    */
    TIMER3_IRQ       = 27,  /* TIMER3 interrupt */
    SW_IRQ0          = 28,  /* SW interrupt    */
    SW_IRQ2          = 29,  /* SW interrupt    */
    USB_PHY_IRQ      = 30,  /* USB interrupt    */
    STIM1_IRQ3       = 31,  /* STIM1 interrupt */

} IRQn_Type;


/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

/* -------  Start of section using anonymous unions and disabling warnings  ------- */
#if   defined (__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined (__ICCARM__)
  #pragma language=extended
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wc11-extensions"
  #pragma clang diagnostic ignored "-Wreserved-id-macro"
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning 586
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#else
  #warning Not supported compiler type
#endif


/* --------  Configuration of Core Peripherals  ----------------------------------- */
#define __CM0PLUS_REV             0x0001U   /* Core revision r0p1 */
#define __MPU_PRESENT             0U        /* no MPU present */
#define __VTOR_PRESENT            1U        /* no VTOR present */
#define __NVIC_PRIO_BITS          2U        /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig    0U        /* Set to 1 if different SysTick Config is used */

#include "core_cm0plus.h"                   /* Processor and core peripherals */
// Note: Changed for MikroE implementation.
//#include "system_ARMCM0plus.h"              /* System Header */
#define __I volatile // Note: Added for MikroE implementation.
#define __O __I // Note: Added for MikroE implementation.
#define __IO __I // Note: Added for MikroE implementation.
#include <stdint.h>


/* --------  End of section using anonymous unions and disabling warnings  -------- */
#if   defined (__CC_ARM)
  #pragma pop
#elif defined (__ICCARM__)
  /* leave anonymous unions enabled */
#elif (defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050))
  #pragma clang diagnostic pop
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning restore
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#else
  #warning Not supported compiler type
#endif


#ifdef __cplusplus
}
#endif

#endif  /* ARMCM0plus_H */
