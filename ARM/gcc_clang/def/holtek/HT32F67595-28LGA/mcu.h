/**************************************************************************//**
 * @file     ARMCM33_DSP_FP.h
 * @brief    CMSIS Core Peripheral Access Layer Header File for
 *           ARMCM33 Device (configured for ARMCM33 with FPU, with DSP extension)
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

//this file has been modified

#ifndef ARMCM33_DSP_FP_H
#define ARMCM33_DSP_FP_H

#ifdef __cplusplus
extern "C" {
#endif


/* -------------------------  Interrupt Number Definition  ------------------------ */

typedef enum IRQn
{
/* -------------------  Processor Exceptions Numbers  ----------------------------- */
    NonMaskableInt_IRQn           = -14,     /*  2 Non Maskable Interrupt      */
    HardFault_IRQn                = -13,     /*  3 HardFault Interrupt         */
    MemoryManagement_IRQn         = -12,     /*  4 Memory Management Interrupt */
    BusFault_IRQn                 = -11,     /*  5 Bus Fault Interrupt         */
    UsageFault_IRQn               = -10,     /*  6 Usage Fault Interrupt       */
    SecureFault_IRQn              =  -9,     /*  7 Secure Fault Interrupt      */
    SVCall_IRQn                   =  -5,     /* 11 SV Call Interrupt           */
    DebugMonitor_IRQn             =  -4,     /* 12 Debug Monitor Interrupt     */
    PendSV_IRQn                   =  -2,     /* 14 Pend SV Interrupt           */
    SysTick_IRQn                  =  -1,     /* 15 System Tick Interrupt       */

/* -------------------  Processor Interrupt Numbers  ------------------------------ */
    RTC_CH0_IRQ      = 0,   /* RTC interrupt     */
    GPADC0_IRQ       = 1,   /* GPADC0 interrupt  */
    LLC_IRQ          = 2,   /* LLC interrupt     */
    I2S_IRQ          = 3,   /* I2S interrupt     */
    QDEC_IRQ         = 4,   /* QDEC interrupt    */
    AUDIO0_IRQ       = 5,   /* AUDIO0 interrupt  */
    CRYPT0_IRQ       = 6,   /* CRYPT0 interrupt  */
    TRNG_IRQ         = 7,   /* TRNG interrupt    */
    RF_CAL_IRQ       = 8,   /* RF interrupt      */
    UART0_IRQ        = 9,   /* UART0 interrupt   */
    UART1_IRQ        = 10,  /* UART1 interrupt   */
    UART2_IRQ        = 11,  /* UART2 interrupt   */
    SPI0_IRQ         = 12,  /* SPI0 interrupt    */
    SPI1_IRQ         = 13,  /* SPI1 interrupt    */
    I2C0_IRQ         = 14,  /* I2C0 interrupt    */
    I2C1_IRQ         = 15,  /* I2C1 interrupt    */
    I2C2_IRQ         = 16,  /* I2C2 interrupt    */
    DMA_IRQ0         = 17,  /* DMA interrupt     */
    DMA_IRQ4         = 18,  /* DMA interrupt     */
    TIMER0_IRQ       = 19,  /* TIMER0 interrupt  */
    GPIO_IRQ0        = 20,  /* GPIO interrupt    */
    GPIO_IRQ1        = 21,  /* GPIO interrupt    */
    GPIO_IRQ2        = 22,  /* GPIO interrupt    */
    PMU_IRQ          = 23,  /* PMU interrupt     */
    QSPI0_IRQ        = 24,  /* QSPI0 interrupt   */
    QSPI1_IRQ        = 25,  /* QSPI1 interrupt   */
    QSPI2_IRQ        = 26,  /* QSPI0 interrupt   */
    QSPI3_IRQ        = 27,  /* QSPI1 interrupt   */
    SW_IRQ0          = 28,  /* SW0 interrupt     */
    SW_IRQ1          = 29,  /* SW1 interrupt     */
    USB_CTRL_IRQ     = 30,  /* USB interrupt     */
    RTC_CH3_IRQ      = 31,  /* RTC interrupt     */
    DMA_IRQ1         = 32,  /* DMA interrupt     */
    DMA_IRQ2         = 33,  /* DMA interrupt     */
    DMA_IRQ3         = 34,  /* DMA interrupt     */
    DMA_IRQ5         = 35,  /* DMA interrupt     */
    DMA_IRQ6         = 36,  /* DMA interrupt     */
    DMA_IRQ7         = 37,  /* DMA interrupt     */
    TIMER1_IRQ       = 38,  /* TIMER1 interrupt  */
    TIMER2_IRQ       = 39,  /* TIMER2 interrupt  */
    TIMER3_IRQ       = 40,  /* TIMER3 interrupt  */
    SW_IRQ2          = 41,  /* SW2 interrupt     */
    FP_IRQ           = 42,  /* FP interrupt      */
    RTC_CH1_IRQ      = 43,  /* RTC interrupt     */
    RTC_CH2_IRQ      = 44,  /* RTC interrupt     */
    AUDIO1_IRQ       = 45,  /* AUDIO1 interrupt */
    GPADC1_IRQ       = 46,  /* GPADC1 interrupt  */
    I2C3_IRQ         = 47,  /* I2C3 interrupt    */
    USB_PHY_IRQ      = 48,  /* USB PHY interrupt */
    STIM0_IRQ0       = 49,  /* STIM0 interrupt   */
    STIM0_IRQ1       = 50,  /* STIM0 interrupt   */
    STIM0_IRQ2       = 51,  /* STIM0 interrupt   */
    STIM0_IRQ3       = 52,  /* STIM0 interrupt   */
    STIM1_IRQ0       = 53,  /* STIM1 interrupt   */
    STIM1_IRQ1       = 54,  /* STIM1 interrupt   */
    STIM1_IRQ2       = 55,  /* STIM1 interrupt   */
    STIM1_IRQ3       = 56,  /* STIM1 interrupt   */
    WDT1_IRQ         = 57,  /* WDT1 interrupt    */
    CRYPT1_IRQ       = 58,  /* CRYPT1 interrupt */

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
#define __CM33_REV                0x0000U   /* Core revision r0p1 */
#define __SAUREGION_PRESENT       0U        /* SAU regions present */
#define __MPU_PRESENT             1U        /* MPU present */
#define __VTOR_PRESENT            1U        /* VTOR present */
#define __NVIC_PRIO_BITS          3U        /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig    0U        /* Set to 1 if different SysTick Config is used */
#define __FPU_PRESENT             1U        /* FPU present */
#define __DSP_PRESENT             1U        /* DSP extension present */

#include "core_cm33.h"                      /* Processor and core peripherals */
// Note: Changed for MikroE implementation.
//#include "system_ARMCM33.h"                 /* System Header */
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

#endif  /* ARMCM33_DSP_FP_H */
