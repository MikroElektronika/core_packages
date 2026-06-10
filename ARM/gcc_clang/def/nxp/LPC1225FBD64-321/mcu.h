/**************************************************************************//**
 * @file     LPC122x.h
 * @brief    CMSIS Cortex-M0 Core Peripheral Access Layer Header File
 *           for the NXP LPC122x Device Series
 * @version  V1.11
 * @date     15. February 2011
 *
 * @note
 * Copyright (C) 2009-2011 ARM Limited. All rights reserved.
 *
 * @par
 * ARM Limited (ARM) is supplying this software for use with Cortex-M 
 * processor based microcontrollers.  This file can be freely distributed 
 * within development tools that are supporting such ARM based processors. 
 *
 * @par
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * ARM SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
 * CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 ******************************************************************************/


#ifndef __LPC122x_H__
#define __LPC122x_H__

#ifdef __cplusplus
 extern "C" {
#endif 

/** @addtogroup LPC122x_Definitions LPC122x Definitions
  This file defines all structures and symbols for LPC122x:
    - Registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
  @{
*/


/******************************************************************************/
/*                Processor and Core Peripherals                              */
/******************************************************************************/
/** @addtogroup LPC122x_CMSIS LPC122x CMSIS Definitions
  Configuration of the Cortex-M0 Processor and Core Peripherals
  @{
*/

/*
 * ==========================================================================
 * ---------- Interrupt Number Definition -----------------------------------
 * ==========================================================================
 */
typedef enum IRQn
{
/******  Cortex-M0 Processor Exceptions Numbers ***************************************************/
  NonMaskableInt_IRQn           = -14,      /*!< 2 Non Maskable Interrupt                         */
  HardFault_IRQn                = -13,      /*!< 3 Cortex-M0 Hard Fault Interrupt                 */
  SVCall_IRQn                   = -5,       /*!< 11 Cortex-M0 SV Call Interrupt                   */
  PendSV_IRQn                   = -2,       /*!< 14 Cortex-M0 Pend SV Interrupt                   */
  SysTick_IRQn                  = -1,       /*!< 15 Cortex-M0 System Tick Interrupt               */

/******  LPC122x Specific Interrupt Numbers *******************************************************/
  WAKEUP0_IRQn                  = 0,        /*!< The I/O pins can be used as wakeup source.       */
  WAKEUP1_IRQn                  = 1,
  WAKEUP2_IRQn                  = 2,
  WAKEUP3_IRQn                  = 3,
  WAKEUP4_IRQn                  = 4,   
  WAKEUP5_IRQn                  = 5,        
  WAKEUP6_IRQn                  = 6,        
  WAKEUP7_IRQn                  = 7,        
  WAKEUP8_IRQn                  = 8,        
  WAKEUP9_IRQn                  = 9,        
  WAKEUP10_IRQn                 = 10,       
  WAKEUP11_IRQn                 = 11,       /*!< 0 through 11 are WAKEUP interrupts               */
  I2C_IRQn                      = 12,       /*!< I2C Interrupt                                    */
  TIMER_16_0_IRQn               = 13,       /*!< 16-bit Timer0 Interrupt                          */
  TIMER_16_1_IRQn               = 14,       /*!< 16-bit Timer1 Interrupt                          */
  TIMER_32_0_IRQn               = 15,       /*!< 32-bit Timer0 Interrupt                          */
  TIMER_32_1_IRQn               = 16,       /*!< 32-bit Timer1 Interrupt                          */
  SSP_IRQn                      = 17,       /*!< SSP Interrupt                                    */
  UART0_IRQn                    = 18,       /*!< UART0 Interrupt                                  */
  UART1_IRQn                    = 19,       /*!< UART1 Interrupt                                  */
  CMP_IRQn                      = 20,       /*!< Comparator Interrupt                             */
  ADC_IRQn                      = 21,       /*!< A/D Converter Interrupt                          */
  WDT_IRQn                      = 22,       /*!< Watchdog timer Interrupt                         */  
  BOD_IRQn                      = 23,       /*!< Brown Out Detect(BOD) Interrupt                  */
  FLASH_IRQn                    = 24,       /*!< Flash Interrupt                                  */
  EINT0_IRQn                    = 25,       /*!< External Interrupt 0 Interrupt                   */
  EINT1_IRQn                    = 26,       /*!< External Interrupt 1 Interrupt                   */
  EINT2_IRQn                    = 27,       /*!< External Interrupt 2 Interrupt                   */
  PMU_IRQn                      = 28,       /*!< PMU Interrupt                                    */
  DMA_IRQn                      = 29,       /*!< DMA Interrupt                                    */
  RTC_IRQn                      = 30,       /*!< RTC Interrupt                                    */
} IRQn_Type;

/*
 * ==========================================================================
 * ----------- Processor and Core Peripheral Section ------------------------
 * ==========================================================================
 */

/* Configuration of the Cortex-M0 Processor and Core Peripherals */
#define __MPU_PRESENT             0        /*!< MPU present or not                               */
#define __NVIC_PRIO_BITS          2         /*!< Number of Bits used for Priority Levels          */
#define __Vendor_SysTickConfig    0         /*!< Set to 1 if different SysTick Config is used     */

/*@}*/ /* end of group LPC122x_CMSIS */


#include "core_cm0.h"                       /* Cortex-M0 processor and core peripherals           */
// Note: Changed for MikroE implementation.
//#include "system_LPC122x.h"                 /* System Header                                      */
#define __I volatile // Note: Added for MikroE implementation.
#define __O __I // Note: Added for MikroE implementation.
#define __IO __I // Note: Added for MikroE implementation.
#include <stdint.h>


/******************************************************************************/
/*                Device Specific Peripheral Registers structures             */
/******************************************************************************/

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

/*------------- System Control (SYSCON) --------------------------------------*/
/** @addtogroup LPC122x_SYSCON LPC122x System Control Block 
  @{
*/
typedef struct
{
  __IO uint32_t SYSMEMREMAP;            /*!< Offset: 0x000 (R/W)  System memory remap Register */
  __IO uint32_t PRESETCTRL;             /*!< Offset: 0x004 (R/W)  Peripheral reset control Register */
  __IO uint32_t SYSPLLCTRL;             /*!< Offset: 0x008 (R/W)  System PLL control Register */
  __I  uint32_t SYSPLLSTAT;             /*!< Offset: 0x00C (R/ )  System PLL status Register */
       uint32_t RESERVED0[4];

  __IO uint32_t SYSOSCCTRL;             /*!< Offset: 0x020 (R/W)  System oscillator control Register */
  __IO uint32_t WDTOSCCTRL;             /*!< Offset: 0x024 (R/W)  Watchdog oscillator control Register */
  __IO uint32_t IRCCTRL;                /*!< Offset: 0x028 (R/W)  IRC control Register */
  __IO uint32_t RTCOSCCTRL;             /*!< Offset: 0x02C (R/W)  RTC oscillator control Register */
  __I  uint32_t SYSRESSTAT;             /*!< Offset: 0x030 (R/ )  System reset status Register */
       uint32_t RESERVED2[3];
  __IO uint32_t SYSPLLCLKSEL;           /*!< Offset: 0x040 (R/W)  System PLL clock source select Register */	
  __IO uint32_t SYSPLLCLKUEN;           /*!< Offset: 0x044 (R/W)  System PLL clock source update enable Register */
       uint32_t RESERVED3[10];

  __IO uint32_t MAINCLKSEL;             /*!< Offset: 0x070 (R/W)  Main clock source select Register */
  __IO uint32_t MAINCLKUEN;             /*!< Offset: 0x074 (R/W)  Main clock source update enable Register */
  __IO uint32_t SYSAHBCLKDIV;           /*!< Offset: 0x078 (R/W)  System AHB clock divider Register */
       uint32_t RESERVED4[1];

  __IO uint32_t SYSAHBCLKCTRL;          /*!< Offset: 0x080 (R/W)  System AHB clock control Register */
       uint32_t RESERVED5[4];
  __IO uint32_t SSPCLKDIV;              /*!< Offset: 0x094 (R/W)  SSP clock divider Register */       
  __IO uint32_t UART0CLKDIV;            /*!< Offset: 0x098 (R/W)  UART0 clock divider Register */
  __IO uint32_t UART1CLKDIV;            /*!< Offset: 0x09C (R/W)  UART1 clock divider Register */
  __IO uint32_t RTCCLKDIV;              /*!< Offset: 0x0A0 (R/W)  RTC clock divider Register */
       uint32_t RESERVED7[11];

       uint32_t RESERVED8[3];
       uint32_t RESERVED9[1];

  __IO uint32_t CLKOUTCLKSEL;           /*!< Offset: 0x0E0 (R/W)  CLKOUT clock source select Register */
  __IO uint32_t CLKOUTUEN;              /*!< Offset: 0x0E4 (R/W)  CLKOUT clock source update enable Register */
  __IO uint32_t CLKOUTDIV;              /*!< Offset: 0x0E8 (R/W)  CLKOUT clock divider Register */
       uint32_t RESERVED10[5];

  __I  uint32_t PIOPORCAP0;             /*!< Offset: 0x100 (R/ )  POR captured PIO status 0 Register */
  __I  uint32_t PIOPORCAP1;             /*!< Offset: 0x104 (R/ )  POR captured PIO status 1 Register */
       uint32_t RESERVED11[11];
  __IO uint32_t IOCONFIGCLKDIV6;        /*!< Offset: 0x134 (R/W)  Peripheral clock 6 to the IOCONFIG block for prg. glitch filter Register */
  __IO uint32_t IOCONFIGCLKDIV5;        /*!< Offset: 0x138 (R/W)  Peripheral clock 5 to the IOCONFIG block for prg. glitch filter Register */
  __IO uint32_t IOCONFIGCLKDIV4;        /*!< Offset: 0x13C (R/W)  Peripheral clock 4 to the IOCONFIG block for prg. glitch filter Register */
  __IO uint32_t IOCONFIGCLKDIV3;        /*!< Offset: 0x140 (R/W)  Peripheral clock 3 to the IOCONFIG block for prg. glitch filter Register */
  __IO uint32_t IOCONFIGCLKDIV2;        /*!< Offset: 0x144 (R/W)  Peripheral clock 2 to the IOCONFIG block for prg. glitch filter Register */
  __IO uint32_t IOCONFIGCLKDIV1;        /*!< Offset: 0x148 (R/W)  Peripheral clock 1 to the IOCONFIG block for prg. glitch filter Register */
  __IO uint32_t IOCONFIGCLKDIV0;	    /*!< Offset: 0x14C (R/W)  Peripheral clock 0 to the IOCONFIG block for prg. glitch filter Register */	  	            
  __IO uint32_t BODCTRL;                /*!< Offset: 0x150 (R/W)  BOD control Register */
  __IO uint32_t SYSTCKCAL;              /*!< Offset: 0x154 (R/W)  System tick counter calibration Register */
  __IO uint32_t AHBPRIO;                /*!< Offset: 0x158 (R/W)  AHB priority setting Register */
       uint32_t RESERVED14[5];
  __IO uint32_t IRQLATENCY;             /*!< Offset: 0x170 (R/W)  IQR delay Register */
  __IO uint32_t INTNMI;                 /*!< Offset: 0x174 (R/W)  NMI interrupt source configuration Control Register */
       uint32_t RESERVED16[34];          

  __IO uint32_t STARTAPRP0;             /*!< Offset: 0x200 (R/W)  Start logic edge control Register 0 */     
  __IO uint32_t STARTERP0;              /*!< Offset: 0x204 (R/W)  Start logic signal enable Register 0 */
  __O  uint32_t STARTRSRP0CLR;          /*!< Offset: 0x208 ( /W)  Start logic reset Register 0 */
  __I  uint32_t STARTSRP0;              /*!< Offset: 0x20C (R/ )  Start logic status Register 0 */
  __IO uint32_t STARTAPRP1;             /*!< Offset: 0x210 (R/W)  Start logic edge control Register 1 */  
  __IO uint32_t STARTERP1;              /*!< Offset: 0x214 (R/W)  Start logic signal enable Register 1 */   
  __O  uint32_t STARTRSRP1CLR;          /*!< Offset: 0x218 ( /W)  Start logic reset Register 1 */
  __I  uint32_t STARTSRP1;              /*!< Offset: 0x21C (R/ )  Start logic status Register 1 */
       uint32_t RESERVED17[4];

  __IO uint32_t PDSLEEPCFG;             /*!< Offset: 0x230 (R/W)  Power-down states in Deep-sleep mode Register  */
  __IO uint32_t PDAWAKECFG;             /*!< Offset: 0x234 (R/W)  Power-down states after wake-up from Deep-sleep mode Register*/       
  __IO uint32_t PDRUNCFG;               /*!< Offset: 0x238 (R/W)  Power-down configuration Register*/
       uint32_t RESERVED18[110];
  __I  uint32_t DEVICE_ID;              /*!< Offset: 0x3F4 (R/ )  Device ID Register */
} LPC_SYSCON_TypeDef;
/*@}*/ /* end of group LPC122x_SYSCON */


/*------------- Pin Connect Block (IOCON) --------------------------------*/
/** @addtogroup LPC122x_IOCON LPC122x I/O Configuration Block 
  @{
*/
typedef struct
{
  __IO uint32_t PIO2_28;		        /*!< Offset: 0x000 (R/W)  I/O Configuration Port2 Register 28 */
  __IO uint32_t PIO2_29;                /*!< Offset: 0x004 (R/W)  I/O Configuration Port2 Register 29 */
  __IO uint32_t PIO0_19;                /*!< Offset: 0x008 (R/W)  I/O Configuration Port0 Register 19 */
  __IO uint32_t PIO0_20;                /*!< Offset: 0x00C (R/W)  I/O Configuration Port0 Register 20 */
  __IO uint32_t PIO0_21;                /*!< Offset: 0x010 (R/W)  I/O Configuration Port0 Register 21 */
  __IO uint32_t PIO0_22;                /*!< Offset: 0x014 (R/W)  I/O Configuration Port0 Register 22 */
  __IO uint32_t PIO0_23;                /*!< Offset: 0x018 (R/W)  I/O Configuration Port0 Register 23 */
  __IO uint32_t PIO0_24;                /*!< Offset: 0x01C (R/W)  I/O Configuration Port0 Register 24 */

  __IO uint32_t PIO0_25;	            /*!< Offset: 0x020 (R/W)  I/O Configuration Port0 Register 25 */
  __IO uint32_t PIO0_26;                /*!< Offset: 0x024 (R/W)  I/O Configuration Port0 Register 26 */
  __IO uint32_t PIO0_27;                /*!< Offset: 0x028 (R/W)  I/O Configuration Port0 Register 27 */
  __IO uint32_t PIO2_12;                /*!< Offset: 0x02C (R/W)  I/O Configuration Port2 Register 12 */
  __IO uint32_t PIO2_13;                /*!< Offset: 0x030 (R/W)  I/O Configuration Port2 Register 13 */
  __IO uint32_t PIO2_14;                /*!< Offset: 0x034 (R/W)  I/O Configuration Port2 Register 14 */
  __IO uint32_t PIO2_15;                /*!< Offset: 0x038 (R/W)  I/O Configuration Port2 Register 15 */
  __IO uint32_t PIO0_28;                /*!< Offset: 0x03C (R/W)  I/O Configuration Port0 Register 28 */

  __IO uint32_t PIO0_29;		        /*!< Offset: 0x040 (R/W)  I/O Configuration Port0 Register 29 */
  __IO uint32_t PIO0_0;                 /*!< Offset: 0x044 (R/W)  I/O Configuration Port0 Register  0 */
  __IO uint32_t PIO0_1;                 /*!< Offset: 0x048 (R/W)  I/O Configuration Port0 Register  1 */
  __IO uint32_t PIO0_2;                 /*!< Offset: 0x04C (R/W)  I/O Configuration Port0 Register  2 */
       uint32_t RESERVED0[1];
  __IO uint32_t PIO0_3;                 /*!< Offset: 0x054 (R/W)  I/O Configuration Port0 Register  3 */
  __IO uint32_t PIO0_4;                 /*!< Offset: 0x058 (R/W)  I/O Configuration Port0 Register  4 */
  __IO uint32_t PIO0_5;                 /*!< Offset: 0x05C (R/W)  I/O Configuration Port0 Register  5 */

  __IO uint32_t PIO0_6;                 /*!< Offset: 0x060 (R/W)  I/O Configuration Port0 Register  6 */
  __IO uint32_t PIO0_7;                 /*!< Offset: 0x064 (R/W)  I/O Configuration Port0 Register  7 */
  __IO uint32_t PIO0_8;                 /*!< Offset: 0x068 (R/W)  I/O Configuration Port0 Register  8 */
  __IO uint32_t PIO0_9;                 /*!< Offset: 0x06C (R/W)  I/O Configuration Port0 Register  9 */
  __IO uint32_t PIO2_0;                 /*!< Offset: 0x070 (R/W)  I/O Configuration Port2 Register  0 */
  __IO uint32_t PIO2_1;                 /*!< Offset: 0x074 (R/W)  I/O Configuration Port2 Register  1 */
  __IO uint32_t PIO2_2;                 /*!< Offset: 0x078 (R/W)  I/O Configuration Port2 Register  2 */
  __IO uint32_t PIO2_3;                 /*!< Offset: 0x07C (R/W)  I/O Configuration Port2 Register  3 */

  __IO uint32_t PIO2_4;                 /*!< Offset: 0x080 (R/W)  I/O Configuration Port2 Register  4 */
  __IO uint32_t PIO2_5;                 /*!< Offset: 0x084 (R/W)  I/O Configuration Port2 Register  5 */
  __IO uint32_t PIO2_6;                 /*!< Offset: 0x088 (R/W)  I/O Configuration Port2 Register  6 */
  __IO uint32_t PIO2_7;                 /*!< Offset: 0x08C (R/W)  I/O Configuration Port2 Register  7 */
  __IO uint32_t PIO0_10;                /*!< Offset: 0x090 (R/W)  I/O Configuration Port0 Register 10 */
  __IO uint32_t PIO0_11;                /*!< Offset: 0x094 (R/W)  I/O Configuration Port0 Register 11 */
  __IO uint32_t PIO0_12;                /*!< Offset: 0x098 (R/W)  I/O Configuration Port0 Register 12 */
  __IO uint32_t PIO0_13;                /*!< Offset: 0x09C (R/W)  I/O Configuration Port0 Register 13 */

  __IO uint32_t PIO0_14;                /*!< Offset: 0x0A0 (R/W)  I/O Configuration Port0 Register 14 */
  __IO uint32_t PIO0_15;                /*!< Offset: 0x0A4 (R/W)  I/O Configuration Port0 Register 15 */
  __IO uint32_t PIO0_16;                /*!< Offset: 0x0A8 (R/W)  I/O Configuration Port0 Register 16 */
  __IO uint32_t PIO0_17;                /*!< Offset: 0x0AC (R/W)  I/O Configuration Port0 Register 17 */
  __IO uint32_t PIO0_18;                /*!< Offset: 0x0B0 (R/W)  I/O Configuration Port0 Register 18 */
  __IO uint32_t PIO0_30;                /*!< Offset: 0x0B4 (R/W)  I/O Configuration Port0 Register 30 */
  __IO uint32_t PIO0_31;                /*!< Offset: 0x0B8 (R/W)  I/O Configuration Port0 Register 31 */
  __IO uint32_t PIO1_0;                 /*!< Offset: 0x0BC (R/W)  I/O Configuration Port1 Register  0 */

  __IO uint32_t PIO1_1;                 /*!< Offset: 0x0C0 (R/W)  I/O Configuration Port1 Register  1 */
  __IO uint32_t PIO1_2;                 /*!< Offset: 0x0C4 (R/W)  I/O Configuration Port1 Register  2 */
  __IO uint32_t PIO1_3;                 /*!< Offset: 0x0C8 (R/W)  I/O Configuration Port1 Register  3 */
  __IO uint32_t PIO1_4;                 /*!< Offset: 0x0CC (R/W)  I/O Configuration Port1 Register  4 */
  __IO uint32_t PIO1_5;                 /*!< Offset: 0x0D0 (R/W)  I/O Configuration Port1 Register  5 */
  __IO uint32_t PIO1_6;                 /*!< Offset: 0x0D4 (R/W)  I/O Configuration Port1 Register  6 */
       uint32_t RESERVED1[2];

  __IO uint32_t PIO2_8;                 /*!< Offset: 0x0E0 (R/W)  I/O Configuration Port2 Register  8 */
  __IO uint32_t PIO2_9;                 /*!< Offset: 0x0E$ (R/W)  I/O Configuration Port2 Register  9 */
  __IO uint32_t PIO2_10;                /*!< Offset: 0x0E8 (R/W)  I/O Configuration Port2 Register 10 */
  __IO uint32_t PIO2_11;                /*!< Offset: 0x0EC (R/W)  I/O Configuration Port2 Register 12 */
} LPC_IOCON_TypeDef;
/*@}*/ /* end of group LPC122x_IOCON */


/*------------- microDMA (DMA) --------------------------*/
/** @addtogroup LPC122x_DMA LPC122x microDMA
  @{
*/
typedef struct
{
  __I  uint32_t STATUS;                 /*!< Offset: 0x000 (R/ )  DMA status register Register */
  __O  uint32_t CFG;                    /*!< Offset: 0x004 ( /W)  DMA configuration Register */
  __IO uint32_t CTRL_BASE_PTR;          /*!< Offset: 0x008 (R/W)  Channel control base pointer Register */
  __I  uint32_t ALT_CTRL_BASE_PTR;      /*!< Offset: 0x00C (R/ )  Channel alternate control base pointer Register */
  __I  uint32_t WAITONREQ_STATUS;       /*!< Offset: 0x010 (R/ )  Channel wait on request status Register */
  __O  uint32_t CHNL_SW_REQUEST;        /*!< Offset: 0x014 ( /W)  Channel software request Register */
  __IO uint32_t CHNL_USEBURST_SET;      /*!< Offset: 0x018 (R/W)  Channel useburst set Register */
  __O  uint32_t CHNL_USEBURST_CLR;      /*!< Offset: 0x01C ( /W)  Channel useburst clear Register */
  __IO uint32_t CHNL_REQ_MASK_SET;      /*!< Offset: 0x020 (R/W)  Channel request mask set Register */
  __O  uint32_t CHNL_REQ_MASK_CLR;      /*!< Offset: 0x024 ( /W)  Channel request mask clear Register */
  __IO uint32_t CHNL_ENABLE_SET;        /*!< Offset: 0x028 (R/W)  Channel enable set Register */
  __O  uint32_t CHNL_ENABLE_CLR;        /*!< Offset: 0x02C ( /W)  Channel enable clear Register */
  __IO uint32_t CHNL_PRI_ALT_SET;       /*!< Offset: 0x030 (R/W)  Channel primary-alternate set Register */
  __O  uint32_t CHNL_PRI_ALT_CLR;       /*!< Offset: 0x034 ( /W)  Channel primary-alternate clear Register */
  __IO uint32_t CHNL_PRIORITY_SET;      /*!< Offset: 0x038 (R/W)  Channel priority set Register */
  __O  uint32_t CHNL_PRIORITY_CLR;      /*!< Offset: 0x03C ( /W)  Channel priority clear Register */
	   uint32_t RESERVE0[3];
  __IO uint32_t ERR_CLR;				/*!< Offset: 0x04C (R/W)  Bus error clear Register */
  	   uint32_t RESERVE1[12];
  __IO uint32_t CHNL_IRQ_STATUS;		/*!< Offset: 0x080 (R/W)  Channel DMA interrupt status Register */
  __IO uint32_t IRQ_ERR_ENABLE;         /*!< Offset: 0x084 (R/W)  DMA error interrupt enable Register */
  __IO uint32_t CHNL_IRQ_ENABLE;        /*!< Offset: 0x088 (R/W)  Channel DMA interrupt enable Register */
} LPC_DMA_TypeDef;
/*@}*/ /* end of group LPC122x_DMA */


/*------------- Comparator (CMP) --------------------------------*/
/** @addtogroup LPC122x_CMP LPC122x Comparator
  @{
*/
typedef struct
{
  __IO uint32_t CMP;                    /*!< Offset: 0x000 (R/W)  Comparator control Register */
  __IO uint32_t VLAD;                   /*!< Offset: 0x004 (R/W)  Voltage ladder Register */
} LPC_COMP_TypeDef;
/*@}*/ /* end of group LPC122x_CMP */


/*------------- Real Timer Clock (RTC) --------------------------*/
/** @addtogroup LPC122x_RTC LPC122x Real-time Clock
  @{
*/
typedef struct
{
  __I  uint32_t DR;                     /*!< Offset: 0x000 (R/ )  Data Register */
  __IO uint32_t MR;                     /*!< Offset: 0x004 (R/W)  Match Register */
  __IO uint32_t LR;                     /*!< Offset: 0x008 (R/W)  Load Register */
  __IO uint32_t CR;                     /*!< Offset: 0x00C (R/W)  Control Register */
  __IO uint32_t IMSC;                   /*!< Offset: 0x010 (R/W)  Interrupt mask set/clear Register */
  __I  uint32_t IRS;                    /*!< Offset: 0x014 (R/ )  Raw interrupt status Register */
  __I  uint32_t MIS;                    /*!< Offset: 0x018 (R/ )  Masked interrupt status Register */
  __O  uint32_t ICR;                    /*!< Offset: 0x01C ( /W)  Interrupt clear Register */
} LPC_RTC_TypeDef;
/*@}*/ /* end of group LPC122x_RTC */


/*------------- Power Management Unit (PMU) --------------------------*/
/** @addtogroup LPC122x_PMU LPC122x Power Management Unit
  @{
*/
typedef struct
{
  __IO uint32_t PCON;                   /*!< Offset: 0x000 (R/W)  Power control Register */
  __IO uint32_t GPREG0;                 /*!< Offset: 0x004 (R/W)  General purpose Register 0 */
  __IO uint32_t GPREG1;                 /*!< Offset: 0x008 (R/W)  General purpose Register 1 */
  __IO uint32_t GPREG2;                 /*!< Offset: 0x00C (R/W)  General purpose Register 2 */
  __IO uint32_t GPREG3;                 /*!< Offset: 0x010 (R/W)  General purpose Register 3 */
  __IO uint32_t GPREG4;                 /*!< Offset: 0x014 (R/W)  General purpose Register 4 */
} LPC_PMU_TypeDef;
/*@}*/ /* end of group LPC122x_PMU */


/*------------- General Purpose Input/Output (GPIO) --------------------------*/
/** @addtogroup LPC122x_GPIO LPC122x General Purpose Input/Output 
  @{
*/
typedef struct
{
  __IO uint32_t MASK;                   /*!< Offset: 0x000 (R/W)  Pin value mask Register */
  __I  uint32_t PIN;                    /*!< Offset: 0x004 (R/ )  Pin value Register */
  __IO uint32_t OUT;                    /*!< Offset: 0x008 (R/W)  Pin output value Register */
  __O  uint32_t SET;                    /*!< Offset: 0x00C ( /W)  Pin output value set Register */
  __O  uint32_t CLR;                    /*!< Offset: 0x010 ( /W)  Pin output value clear Register */
  __O  uint32_t NOT;                    /*!< Offset: 0x014 ( /W)  Pin output value invert Register */
  	   uint32_t RESERVE[2];
  __IO uint32_t DIR;                    /*!< Offset: 0x020 (R/W)  Data direction Register */
  __IO uint32_t IS;                     /*!< Offset: 0x024 (R/W)  Interrupt sense Register */
  __IO uint32_t IBE;                    /*!< Offset: 0x028 (R/W)  Interrupt both edges Register */
  __IO uint32_t IEV;                    /*!< Offset: 0x02C (R/W)  Interrupt event Register */
  __IO uint32_t IE;                     /*!< Offset: 0x030 (R/W)  Interrupt mask Register */
  __I  uint32_t RIS;                    /*!< Offset: 0x034 (R/ )  Raw interrupt status Register */
  __I  uint32_t MIS;                    /*!< Offset: 0x038 (R/ )  Masked interrupt status Register */
  __O  uint32_t IC;                     /*!< Offset: 0x03C ( /W)  Interrupt clear Register */
} LPC_GPIO_TypeDef;
/*@}*/ /* end of group LPC122x_GPIO */


/*------------- Timer (TMR) --------------------------------------------------*/
/** @addtogroup LPC122x_TMR LPC122x 16/32-bit Counter/Timer 
  @{
*/
typedef struct
{
  __IO uint32_t IR;                     /*!< Offset: 0x000 (R/W)  Interrupt Register */
  __IO uint32_t TCR;                    /*!< Offset: 0x004 (R/W)  Timer Control Register */
  __IO uint32_t TC;                     /*!< Offset: 0x008 (R/W)  Timer Counter Register */
  __IO uint32_t PR;                     /*!< Offset: 0x00C (R/W)  Prescale Register */
  __IO uint32_t PC;                     /*!< Offset: 0x010 (R/W)  Prescale Counter Register */
  __IO uint32_t MCR;                    /*!< Offset: 0x014 (R/W)  Match Control Register */
  __IO uint32_t MR0;                    /*!< Offset: 0x018 (R/W)  Match Register 0 */
  __IO uint32_t MR1;                    /*!< Offset: 0x01C (R/W)  Match Register 1 */
  __IO uint32_t MR2;                    /*!< Offset: 0x020 (R/W)  Match Register 2 */
  __IO uint32_t MR3;                    /*!< Offset: 0x024 (R/W)  Match Register 3 */
  __IO uint32_t CCR;                    /*!< Offset: 0x028 (R/W)  Capture Control Register */
  __I  uint32_t CR0;                    /*!< Offset: 0x02C (R/ )  Capture Register 0 */
  __I  uint32_t CR1;                    /*!< Offset: 0x030 (R/ )  Capture Register 1 */
  __I  uint32_t CR2;                    /*!< Offset: 0x034 (R/ )  Capture Register 2 */
  __I  uint32_t CR3;                    /*!< Offset: 0x038 (R/ )  Capture Register 3 */
  __IO uint32_t EMR;                    /*!< Offset: 0x03C (R/W)  External Match Register */
       uint32_t RESERVED2[12];
  __IO uint32_t CTCR;                   /*!< Offset: 0x070 (R/W)  Count Control Register */
  __IO uint32_t PWMC;                   /*!< Offset: 0x074 (R/W)  PWM Control Register */
} LPC_TMR_TypeDef;
/*@}*/ /* end of group LPC122x_TMR */


/*------------- Universal Asynchronous Receiver Transmitter (UART) -----------*/
/** @addtogroup LPC122x_UART LPC122x Universal Asynchronous Receiver/Transmitter 
  @{
*/
typedef struct
{
  union {
  __I  uint32_t  RBR;                   /*!< Offset: 0x000 (R/ )  Receiver Buffer  Register */
  __O  uint32_t  THR;                   /*!< Offset: 0x000 ( /W)  Transmit Holding Register */
  __IO uint32_t  DLL;                   /*!< Offset: 0x000 (R/W)  Divisor Latch LSB */
  };
  union {
  __IO uint32_t  DLM;                   /*!< Offset: 0x004 (R/W)  Divisor Latch MSB */
  __IO uint32_t  IER;                   /*!< Offset: 0x000 (R/W)  Interrupt Enable Register */
  };
  union {
  __I  uint32_t  IIR;                   /*!< Offset: 0x008 (R/ )  Interrupt ID Register */
  __O  uint32_t  FCR;                   /*!< Offset: 0x008 ( /W)  FIFO Control Register */
  };
  __IO uint32_t  LCR;                   /*!< Offset: 0x00C (R/W)  Line Control Register */
  __IO uint32_t  MCR;                   /*!< Offset: 0x010 (R/W)  Modem control Register */
  __I  uint32_t  LSR;                   /*!< Offset: 0x014 (R/ )  Line Status Register */
  __I  uint32_t  MSR;                   /*!< Offset: 0x018 (R/ )  Modem status Register */
  __IO uint32_t  SCR;                   /*!< Offset: 0x01C (R/W)  Scratch Pad Register */
  __IO uint32_t  ACR;                   /*!< Offset: 0x020 (R/W)  Auto-baud Control Register */
  __IO uint8_t  ICR;                    /*!< Offset: 0x024 (R/W)  IrDA Control Register */
  __IO uint32_t  FDR;                   /*!< Offset: 0x028 (R/W)  Fractional Divider Register */
       uint32_t  RESERVED1;
  __IO uint32_t  TER;                   /*!< Offset: 0x030 (R/W)  Transmit Enable Register */
       uint32_t  RESERVED2[6];
  __IO uint32_t  RS485CTRL;             /*!< Offset: 0x04C (R/W)  RS-485/EIA-485 Control Register */
  __IO uint32_t  ADRMATCH;              /*!< Offset: 0x050 (R/W)  RS-485/EIA-485 address match Register */
  __IO uint32_t  RS485DLY;              /*!< Offset: 0x054 (R/W)  RS-485/EIA-485 direction control delay Register */
  __I  uint32_t  FIFOLVL;               /*!< Offset: 0x058 (R/ )  FIFO Level Register */
} LPC_UART_TypeDef;
/*@}*/ /* end of group LPC122x_UART */


/*------------- Synchronous Serial Communication (SSP) -----------------------*/
/** @addtogroup LPC122x_SSP LPC122x Synchronous Serial Port 
  @{
*/
typedef struct
{
  __IO uint32_t CR0;                    /*!< Offset: 0x000 (R/W)  Control Register 0 */
  __IO uint32_t CR1;                    /*!< Offset: 0x004 (R/W)  Control Register 1 */
  __IO uint32_t DR;                     /*!< Offset: 0x008 (R/W)  Data Register */
  __I  uint32_t SR;                     /*!< Offset: 0x00C (R/ )  Status Register */
  __IO uint32_t CPSR;                   /*!< Offset: 0x010 (R/W)  Clock Prescale Register */
  __IO uint32_t IMSC;                   /*!< Offset: 0x014 (R/W)  Interrupt Mask Set and Clear Register */
  __I  uint32_t RIS;                    /*!< Offset: 0x018 (R/ )  Raw Interrupt Status Register */
  __I  uint32_t MIS;                    /*!< Offset: 0x01C (R/ )  Masked Interrupt Status Register */
  __O  uint32_t ICR;                    /*!< Offset: 0x020 ( /W)  SSPICR Interrupt Clear Register */
  __IO uint32_t DMACR;                  /*!< Offset: 0x024 (R/W)  DMA Control Register */
} LPC_SSP_TypeDef;
/*@}*/ /* end of group LPC122x_SSP */


/*------------- Inter-Integrated Circuit (I2C) -------------------------------*/
/** @addtogroup LPC122x_I2C LPC122x I2C-Bus Interface 
  @{
*/
typedef struct
{
  __IO uint32_t CONSET;                 /*!< Offset: 0x000 (R/W)  I2C Control Set Register */
  __I  uint32_t STAT;                   /*!< Offset: 0x004 (R/ )  I2C Status Register */
  __IO uint32_t DAT;                    /*!< Offset: 0x008 (R/W)  I2C Data Register */
  __IO uint32_t ADR0;                   /*!< Offset: 0x00C (R/W)  I2C Slave Address Register 0 */
  __IO uint32_t SCLH;                   /*!< Offset: 0x010 (R/W)  SCH Duty Cycle Register High Half Word */
  __IO uint32_t SCLL;                   /*!< Offset: 0x014 (R/W)  SCL Duty Cycle Register Low Half Word */
  __O  uint32_t CONCLR;                 /*!< Offset: 0x018 ( /W)  I2C Control Clear Register */
  __IO uint32_t MMCTRL;                 /*!< Offset: 0x01C (R/W)  Monitor mode control register */
  __IO uint32_t ADR1;                   /*!< Offset: 0x020 (R/W)  I2C Slave Address Register 1 */
  __IO uint32_t ADR2;                   /*!< Offset: 0x024 (R/W)  I2C Slave Address Register 2 */
  __IO uint32_t ADR3;                   /*!< Offset: 0x028 (R/W)  I2C Slave Address Register 3 */
  __I  uint32_t DATA_BUFFER;            /*!< Offset: 0x02C (R/ )  Data buffer Register */
  __IO uint32_t MASK0;                  /*!< Offset: 0x030 (R/W)  I2C Slave address mask register 0 */
  __IO uint32_t MASK1;                  /*!< Offset: 0x034 (R/W)  I2C Slave address mask register 1 */
  __IO uint32_t MASK2;                  /*!< Offset: 0x038 (R/W)  I2C Slave address mask register 2 */
  __IO uint32_t MASK3;                  /*!< Offset: 0x03C (R/W)  I2C Slave address mask register 3 */
} LPC_I2C_TypeDef;
/*@}*/ /* end of group LPC122x_I2C */


/*------------- Watchdog Timer (WWDT) -----------------------------------------*/
/** @addtogroup LPC122x_WDT LPC122x Windowed WatchDog Timer 
  @{
*/
typedef struct
{
  __IO uint32_t MOD;                    /*!< Offset: 0x000 (R/W)  Watchdog mode Register */
  __IO uint32_t TC;                     /*!< Offset: 0x004 (R/W)  Watchdog timer constant Register */
  __O  uint32_t FEED;                   /*!< Offset: 0x008 ( /W)  Watchdog feed sequence Register */
  __I  uint32_t TV;                     /*!< Offset: 0x00C (R/ )  Watchdog timer value Register */
  __IO uint32_t CLKSEL;                 /*!< Offset: 0x010 (R/W)  Watchdog clock source selection Register */
  __IO uint32_t WARNINT;                /*!< Offset: 0x014 (R/W)  Watchdog Warning Interrupt compare value Register */
  __IO uint32_t WINDOW;                 /*!< Offset: 0x018 (R/W)  Watchdog Window compare value Register */

} LPC_WDT_TypeDef;
/*@}*/ /* end of group LPC122x_WWDT */


/*------------- Analog-to-Digital Converter (ADC) ----------------------------*/
/** @addtogroup LPC122x_ADC LPC122x Analog-to-Digital Converter 
  @{
*/
typedef struct
{
  __IO uint32_t CR;                     /*!< Offset: 0x000 (R/W)  A/D Control Register */
  __IO uint32_t GDR;                    /*!< Offset: 0x004 (R/W)  A/D Global Data Register */
       uint32_t RESERVED0[1];
  __IO uint32_t INTEN;                  /*!< Offset: 0x00C (R/W)  A/D Interrupt Enable Register */
  __IO uint32_t DR[8];                  /*!< Offset: 0x010 (R/W)  A/D Channel 0..7 Data Register */
  __I  uint32_t STAT;                   /*!< Offset: 0x030 (R/ )  A/D Status Register */
  __IO uint32_t TRM;                    /*!< Offset: 0x034 (R/W)  ADC trim Register */
} LPC_ADC_TypeDef;
/*@}*/ /* end of group LPC122x_ADC */


/*------------- CRC Engine (CRC) -----------------------------------------*/
/** @addtogroup LPC122x_CRC LPC122x CRC Engine 
  @{
*/
typedef struct
{
  __IO uint32_t MODE;                   /*!< Offset: 0x000 (R/W)  CRC mode Register */
  __IO uint32_t SEED;                   /*!< Offset: 0x004 (R/W)  CRC seed Register */
  union {
      __I  uint32_t SUM;                /*!< Offset: 0x008 (R/ )  CRC checksum Register */
      __O  uint32_t WR_DATA_32;         /*!< Offset: 0x008 ( /W)  CRC data Register DWORD access */
    struct {
      __O  uint16_t WR_DATA_16;         /*!< Offset: 0x008 ( /W)  CRC data Register WORD access */
           uint16_t RESERVED_16;
    };
    struct {
      __O  uint8_t WR_DATA_8;           /*!< Offset: 0x008 ( /W)  CRC data Register Byte access */
           uint8_t RESERVED_8[3];
    };
  };
  __I  uint32_t ID;                     /*!< Offset: 0x00C (R/ )  CRC ID Register */
} LPC_CRC_TypeDef;
/*@}*/ /* end of group LPC122x_CRC */

#if defined ( __CC_ARM   )
#pragma no_anon_unions
#endif

/******************************************************************************/
/*                         Peripheral memory map                              */
/******************************************************************************/
/* Base addresses                                                             */
#define LPC_FLASH_BASE        (0x00000000UL)
#define LPC_RAM_BASE          (0x10000000UL)
#define LPC_APB0_BASE         (0x40000000UL)
#define LPC_AHB_BASE          (0x50000000UL)

/* APB0 peripherals                                                           */
#define LPC_I2C_BASE          (LPC_APB0_BASE + 0x00000)
#define LPC_WDT_BASE          (LPC_APB0_BASE + 0x04000)
#define LPC_UART0_BASE        (LPC_APB0_BASE + 0x08000)
#define LPC_UART1_BASE        (LPC_APB0_BASE + 0x0C000)
#define LPC_CT16B0_BASE       (LPC_APB0_BASE + 0x10000)
#define LPC_CT16B1_BASE       (LPC_APB0_BASE + 0x14000)
#define LPC_CT32B0_BASE       (LPC_APB0_BASE + 0x18000)
#define LPC_CT32B1_BASE       (LPC_APB0_BASE + 0x1C000)
#define LPC_ADC_BASE          (LPC_APB0_BASE + 0x20000)

#define LPC_PMU_BASE          (LPC_APB0_BASE + 0x38000)
#define LPC_SSP_BASE          (LPC_APB0_BASE + 0x40000)
#define LPC_IOCON_BASE        (LPC_APB0_BASE + 0x44000)
#define LPC_SYSCON_BASE       (LPC_APB0_BASE + 0x48000)
#define LPC_DMA_BASE          (LPC_APB0_BASE + 0x4C000)
#define LPC_RTC_BASE          (LPC_APB0_BASE + 0x50000)
#define LPC_COMP_BASE         (LPC_APB0_BASE + 0x54000)

/* AHB peripherals                                                            */	
#define LPC_GPIO_BASE         (LPC_AHB_BASE  + 0x00000)
#define LPC_GPIO0_BASE        (LPC_AHB_BASE  + 0x00000)
#define LPC_GPIO1_BASE        (LPC_AHB_BASE  + 0x10000)
#define LPC_GPIO2_BASE        (LPC_AHB_BASE  + 0x20000)
//#define LPC_FMC_BASE          (LPC_AHB_BASE  + 0x60000)  not documented in UM. delete?
#define LPC_CRC_BASE          (LPC_AHB_BASE  + 0x70000)

/******************************************************************************/
/*                         Peripheral declaration                             */
/******************************************************************************/
#define LPC_I2C               ((LPC_I2C_TypeDef    *) LPC_I2C_BASE   )
#define LPC_WDT               ((LPC_WDT_TypeDef    *) LPC_WDT_BASE   )
#define LPC_UART0             ((LPC_UART_TypeDef   *) LPC_UART0_BASE )
#define LPC_UART1             ((LPC_UART_TypeDef   *) LPC_UART1_BASE )
#define LPC_TMR16B0           ((LPC_TMR_TypeDef    *) LPC_CT16B0_BASE)
#define LPC_TMR16B1           ((LPC_TMR_TypeDef    *) LPC_CT16B1_BASE)
#define LPC_TMR32B0           ((LPC_TMR_TypeDef    *) LPC_CT32B0_BASE)
#define LPC_TMR32B1           ((LPC_TMR_TypeDef    *) LPC_CT32B1_BASE)
#define LPC_ADC               ((LPC_ADC_TypeDef    *) LPC_ADC_BASE   )
#define LPC_PMU               ((LPC_PMU_TypeDef    *) LPC_PMU_BASE   )
#define LPC_SSP               ((LPC_SSP_TypeDef    *) LPC_SSP_BASE   )
#define LPC_IOCON             ((LPC_IOCON_TypeDef  *) LPC_IOCON_BASE )
#define LPC_SYSCON            ((LPC_SYSCON_TypeDef *) LPC_SYSCON_BASE)
#define LPC_DMA               ((LPC_DMA_TypeDef    *) LPC_DMA_BASE   )
#define LPC_RTC               ((LPC_RTC_TypeDef    *) LPC_RTC_BASE   )
#define LPC_COMP              ((LPC_COMP_TypeDef   *) LPC_COMP_BASE  )

#define LPC_GPIO0             ((LPC_GPIO_TypeDef   *) LPC_GPIO0_BASE )
#define LPC_GPIO1             ((LPC_GPIO_TypeDef   *) LPC_GPIO1_BASE )
#define LPC_GPIO2             ((LPC_GPIO_TypeDef   *) LPC_GPIO2_BASE )
//#define LPC_FMC               ((LPC_FMC_TypeDef    *) LPC_FMC_BASE   )  not documented in UM. delete?
#define LPC_CRC               ((LPC_CRC_TypeDef    *) LPC_CRC_BASE   )

#ifdef __cplusplus
}
#endif

#endif  // __LPC122x_H__
