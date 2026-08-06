/**************************************************************************//**
 * @file     CMS32F030.h
 * @brief    CMSIS Cortex-M0 Core Peripheral Access Layer Header File
 *           for the CMSARM CMS32F030 Series
 * @version  V2.10
 * @date     20. December 2016
 *
 * @note
 * Copyright (C) 2016-2020 ARM Limited. All rights reserved.
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


#ifndef __CMS32F030_H__
#define __CMS32F030_H__

#ifdef __cplusplus
 extern "C" {
#endif


#if !defined HSI_8M_VAL
#define HSI_8M_VAL   ((uint32_t)(8000000))
#endif

#if !defined HSI_22M_VAL
#define HSI_22M_VAL   ((uint32_t)(22118400))
#endif

#if !defined HSE_L_VAL
#define HSE_L_VAL   ((uint32_t)(32768))
#endif

#if !defined HSE_H_VAL
#define HSE_H_VAL   ((uint32_t)(8000000))
#endif

#if !defined RC_10K_VAL
#define RC_10K_VAL  ((uint32_t)(10000))
#endif


/*
 * ==========================================================================
 * ---------- Interrupt Number Definition -----------------------------------
 * ==========================================================================
 */

typedef enum IRQn
{
/******  Cortex-M0 Processor Exceptions Numbers ***************************************************/
  NonMaskableInt_IRQn           = -14,      /*!<  2 Non Maskable Interrupt                        */
  HardFault_IRQn                = -13,      /*!<  3 Hard Fault Interrupt                          */
  SVCall_IRQn                   = -5,       /*!< 11 SV Call Interrupt                             */
  PendSV_IRQn                   = -2,       /*!< 14 Pend SV Interrupt                             */
  SysTick_IRQn                  = -1,       /*!< 15 System Tick Interrupt                         */

/******  CMS32F030 Specific Interrupt Numbers ********************************************************/
  GPIO0_IRQn                    = 0,        /*!< GPIO 0 Interrupt                                 */
  GPIO1_IRQn                    = 1,        /*!< GPIO 1 Interrupt                                 */
  GPIO2_IRQn                    = 2,        /*!< GPIO 2 Interrupt                                 */
  GPIO3_IRQn                    = 3,        /*!< GPIO 3 Interrupt                                 */
  GPIO4_IRQn 	                  = 4,
  Reserved0_IRQn                = 5,
  PWM_IRQn                      = 6,        /*!< Capture/PWM Interrupt                            */
  ADC_IRQn                      = 7,        /*!< A/D Converter Interrupt                          */
  EPWM_IRQn                     = 8,
  WWDT_IRQn               	    = 9,
  Reserved3_IRQn                = 10,
  Reserved4_IRQn                = 11,
  Reserved5_IRQn                = 12,
  Reserved6_IRQn                = 13,
  Reserved7_IRQn                = 14,
  UART0_IRQn                    = 15,       /*!< UART0 Interrupt                                  */
  UART1_IRQn                    = 16,       /*!< UART1 Interrupt                                  */
  Reserved8_IRQn                = 17,
  Reserved9_IRQn	              = 18,
  TIMER0_IRQn                   = 19,       /*!< Timer0 Interrupt                                 */
  TIMER1_IRQn                   = 20,       /*!< Timer1 Interrupt                                 */
  Reserved10_IRQn               = 21,
  Reserved11_IRQn               = 22,
  WDT_IRQn                      = 23,       /*!< Watchdog timer Interrupt                         */
  I2C0_IRQn                     = 24,       /*!< I2C0 Interrupt                                   */
  Reserved12_IRQn               = 25,
  SSP0_IRQn                     = 26,       /*!< SSP0 Interrupt                                   */
  Reserved13_IRQn               = 27,
  Reserved14_IRQn               = 28,       /*!< Timer0/Timer1 Interrupt                          */
  Reserved15_IRQn               = 29,
  SYS_CLK_ERR_IRQn              = 30,
  Reserved16_IRQn               = 31,       /*!< Low Voltage Detect Interrupt                     */
} IRQn_Type;

typedef enum {RESET = 0, SET = !RESET} FlagStatus, ITStatus;
typedef enum {DISABLE = 0, ENABLE = !DISABLE} FunctionalState;
typedef enum {ERROR = 0, SUCCESS = !ERROR} ErrorStatus;

/*
 * ==========================================================================
 * ----------- Processor and Core Peripheral Section ------------------------
 * ==========================================================================
 */

/* Configuration of the Cortex-M0 Processor and Core Peripherals */
#define __CM0_REV                 0x0000    /*!< Core Revision r0p0                               */
#define __MPU_PRESENT             0         /*!< MPU present or not                               */
#define __NVIC_PRIO_BITS          2         /*!< Number of Bits used for Priority Levels          */
#define __Vendor_SysTickConfig    0         /*!< Set to 1 if different SysTick Config is used     */

/*@}*/ /* end of group CMS32F030_CMSIS */


#include <core_cm0.h>                       /* Cortex-M0 processor and core peripherals           */
// Note: Changed for MikroE implementation.
//#include "system_CMS32F030.h"                   /* CMS32F030 System  include file                         */
#define __I volatile // Note: Added for MikroE implementation.
#define __O __I // Note: Added for MikroE implementation.
#define __IO __I // Note: Added for MikroE implementation.
#include <stdint.h>


/******************************************************************************/
/*                Device Specific Peripheral registers structures             */
/******************************************************************************/
/** @addtogroup CMS32F030_Peripherals CMS32F030 Peripherals
  CMS32F030 Device Specific Peripheral registers structures
  @{
*/

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif


/*------------- Unique Device ID (UDID) --------------------------*/
/** @addtogroup CMS32F030_UDID Unique Device ID (UDID)
  @{
*/
typedef struct
{
__I uint32_t UID; 
__I uint32_t CIDL;
__I uint32_t CIDH;
}UDID_TypeDef;
/*@}*/ /* end of group CMS32F030_UDID */


/*------------- General Purpose Input/Output (GPIO) --------------------------*/
/** @addtogroup CMS32F030_GPIO General Purpose Input/Output (GPIO)
  @{
*/
typedef struct
{
  __IO uint32_t             PMS;
  __IO uint32_t             DOM;
  __IO uint32_t             DO;
  __I  uint32_t             DI;
  __IO uint32_t             IMSC;
  __I  uint32_t             RIS;
  __I  uint32_t             MIS;
  __O  uint32_t             ICLR;
  __IO uint32_t             ITYPE;
  __IO uint32_t             IVAL;
  __IO uint32_t             IANY;
  __IO uint32_t             DIDB;
  __O  uint32_t             DOSET;
  __O  uint32_t             DOCLR;
  __IO uint32_t             DR;
  __IO uint32_t             SR;
} GPIO_TypeDef;
/*@}*/ /* end of group CMS32F030_GPIO */

/*------------- Capture/PWM (PWM) Controller ---------------------------------*/
/** @addtogroup CMS32F030_PWM Capture/PWM (PWM)
  @{
*/
typedef struct
{
  __IO uint32_t             CON0;
  __IO uint32_t             LOAD0;
  __IO uint32_t             D0A;
  __IO uint32_t             D0B;
  __IO uint32_t             CON1;
  __IO uint32_t             LOAD1;
  __IO uint32_t             D1A;
  __IO uint32_t             D1B; 
	__I  uint32_t							RESERVED[8];
  __IO uint32_t             IMSC;
  __I  uint32_t             RIS;
  __I  uint32_t             MIS;
  __O  uint32_t             ICLR;
  __IO uint32_t             RUN;
} PWM_TypeDef;
/*@}*/ /* end of group CMS32F030_PWM */



/*------------- EPWM ( Controller ---------------------------------*/
/** @addtogroup CMS32F030_EPWM
  @{
*/
typedef struct
{
  __IO uint32_t             CLKPSC;
  __IO uint32_t             CLKDIV;
  __IO uint32_t             CON;
  __IO uint32_t             PERIOD[6];

  __IO uint32_t             CMPDAT[6];

  __IO uint32_t             POEN;
  __IO uint32_t             BRKCTL;
  __IO uint32_t             DTCTL;
  __IO uint32_t             IMSC;
  __I  uint32_t             RIS;
  __I  uint32_t             MIS;
  __O  uint32_t             ICLR;
  __IO uint32_t             IFA;
  __IO uint32_t             LOCK;
} EPWM_TypeDef;
/*@}*/ /* end of group CMS32F030_EPWM */







/*------------- Analog-to-Digital Converter (ADC) ----------------------------*/
/** @addtogroup CMS32F030_ADC CMS32F030 Analog-to-Digital Converter (ADC)
  @{
*/
typedef struct
{
  __IO uint32_t             CON;
  __IO uint32_t             SCAN;
  __I  uint32_t             DAT[16];
  __IO uint32_t             IMSC;
  __I  uint32_t             RIS;
  __I  uint32_t             MIS;
  __O  uint32_t             ICLR;
//  __I  uint32_t             DAT;
} ADC_TypeDef;
/*@}*/ /* end of group CMS32F030_ADC */

/*------------- Universal Asynchronous Receiver Transmitter (UART) -----------*/
/** @addtogroup CMS32F030_UART CMS32F030 Universal Asynchronous Receiver Transmitter (UART)
  @{
*/
typedef struct
{
  __I  uint32_t             RBR;
  __O  uint32_t             THR;
  __IO uint32_t             DLR;
  __IO uint32_t             IER;
  __I  uint32_t             IIR;
  __IO uint32_t             FCR;
  __IO uint32_t             LCR;
  __IO uint32_t             MCR;
  __I  uint32_t             LSR;
  __I  uint32_t             MSR;
  __IO uint32_t             SCR;
  __IO uint32_t             EFR;
  __IO uint32_t             XON2;
  __IO uint32_t             XON1;
  __IO uint32_t             XOFF2;
  __IO uint32_t             XOFF1;
} UART_TypeDef;
/*@}*/ /* end of group CMS32F030_UART */

/*------------- Timer (TMR) --------------------------------------------------*/
/** @addtogroup CMS32F030_TMR CMS32F030 32/16-bit Timer (TMR)
  @{
*/
typedef struct
{
  __IO uint32_t             CON;
  __IO uint32_t             LOAD;
  __I  uint32_t             VAL;
  __I  uint32_t             RIS;
  __I  uint32_t             MIS;
  __O  uint32_t             ICLR;
  __IO uint32_t             BGLOAD;
} TIMER_TypeDef;
/*@}*/ /* end of group CMS32F030_TMR */


/*------------- WWDT --------------------------------------------------*/
/** @addtogroup CMS32F030_TMR CMS32F030 32/16-bit WWDT
  @{
*/
typedef struct
{
  __IO uint32_t             CON;
  __O  uint32_t             RELOAD;
  __I  uint32_t             VAL;
  __I  uint32_t             RIS;
  __I  uint32_t             MIS;
  __O  uint32_t             ICLR;
} WWDT_TypeDef;
/*@}*/ /* end of group CMS32F030_WWDT */


/*------------- Watchdog Timer (WDT) -----------------------------------------*/
/** @addtogroup CMS32F030_WDT CMS32F030 32-bit Watchdog Timer (WDT)
  @{
*/
typedef struct
{
  __IO uint32_t             CON;
  __IO uint32_t             LOAD;
  __I  uint32_t             VAL;
  __I  uint32_t             RIS;
  __I  uint32_t             MIS;
  __O  uint32_t             ICLR;
       uint32_t             RESERVED[314];
  __IO uint32_t             LOCK;
} WDT_TypeDef;
/*@}*/ /* end of group CMS32F030_WDT */

/*------------- Inter-Integrated Circuit (I2C) -------------------------------*/
/** @addtogroup CMS32F030_I2C CMS32F030 Inter-Integrated Circuit (I2C)
  @{
*/
typedef struct
{
  __IO uint32_t             CONSET;
  __O  uint32_t             CONCLR;
  __I  uint32_t             STAT;
  __IO uint32_t             DAT;
  __IO uint32_t             CLK;
  __IO uint32_t             ADR0;
  __IO uint32_t             ADM0;
  __IO uint32_t             XADR0;
  __IO uint32_t             XADM0;
  __O  uint32_t             RST;
  __IO uint32_t             ADR1;
  __IO uint32_t             ADM1;
  __IO uint32_t             ADR2;
  __IO uint32_t             ADM2;
  __IO uint32_t             ADR3;
  __IO uint32_t             ADM3;
} I2C_TypeDef;
/*@}*/ /* end of group CMS32F030_I2C */

/*------------- Synchronous Serial Communication (SSP) -----------------------*/
/** @addtogroup CMS32F030_SSP Synchronous Serial Communication (SSP)
  @{
*/
typedef struct
{
  __IO uint32_t             CON;
  __I  uint32_t             STAT;
  __IO uint32_t             DAT;
  __IO uint32_t             CLK;
  __IO uint32_t             IMSC;
  __I  uint32_t             RIS;
  __I  uint32_t             MIS;
  __O  uint32_t             ICLR;
       uint32_t             RESERVED[2];
  __IO uint32_t             CSCR;
} SSP_TypeDef;
/*@}*/ /* end of group CMS32F030_SSP */

/*------------- System Control (SYSCON) --------------------------------------*/
/** @addtogroup CMS32F030_SYSCON CMS32F030 System Control (SYSCON)
  @{
*/
typedef struct
{
  __I  uint32_t             DID;
  __IO uint32_t             AHBCKDIV;
  __IO uint32_t             APBCKDIV;
  __IO uint32_t             APBCKEN;
  __IO uint32_t             CLKODIV;
  __IO uint32_t             PCON;
  __O  uint32_t             RSTCON;
  __IO uint32_t             RSTSTAT;
  __IO uint32_t             CLKCON;
  __IO uint32_t             CLKSEL;
  __I  uint32_t             CLKSTAT;
  __IO uint32_t             APBCKSEL;
  __I  uint32_t             IOMUX;
  __I  uint32_t             CIDL;
  __I  uint32_t             CIDH;
  __IO uint32_t             LVDCFG;
  __IO uint32_t             IOP00CFG;
  __IO uint32_t             IOP01CFG;
  __I  uint32_t							RESERVED1[2];
  __IO uint32_t             IOP04CFG;
  __IO uint32_t             IOP05CFG;
  __IO uint32_t             IOP06CFG;
  __IO uint32_t             IOP07CFG;
  __IO uint32_t             IOP10CFG;
  __I  uint32_t							RESERVED2[1];
  __IO uint32_t             IOP12CFG;
  __IO uint32_t             IOP13CFG;
  __IO uint32_t             IOP14CFG;
  __IO uint32_t             IOP15CFG;
  __IO uint32_t             IOP16CFG;
  __IO uint32_t             IOP17CFG;
  __I  uint32_t							RESERVED3[1];
  __IO uint32_t             IOP21CFG;
  __IO uint32_t             IOP22CFG;
  __IO uint32_t             IOP23CFG;
  __IO uint32_t             IOP24CFG;
  __IO uint32_t             IOP25CFG;
  __IO uint32_t             IOP26CFG;
  __I  uint32_t							RESERVED4[1];
  __IO uint32_t             IOP30CFG;	
  __IO uint32_t             IOP31CFG;
  __IO uint32_t             IOP32CFG;
  __I  uint32_t							RESERVED5[1];
  __IO uint32_t             IOP34CFG;
  __IO uint32_t             IOP35CFG;
  __IO uint32_t             IOP36CFG;
  __I  uint32_t							RESERVED6[1];
  __IO uint32_t             IOP40CFG;
  __I  uint32_t							RESERVED7[2];
  __IO uint32_t             IOP43CFG;
	__IO uint32_t 						IOP44CFG;
  __I  uint32_t							RESERVED8[1];
	__IO uint32_t 						IOP46CFG;
	__IO uint32_t 						IOP47CFG;
	__I  uint32_t							RESERVED9[8];
	__IO uint32_t 						SYS_IMSC;
	__IO uint32_t 						SYS_RIS;
	__IO uint32_t 						SYS_MIS;
	__IO uint32_t 						SYS_ICLR;
	__IO uint32_t 						IHRC_TRIM;
	__IO uint32_t 						PLLCON;
} SYSCON_TypeDef;
/*@}*/ /* end of group CMS32F030_SYSCON */

/*------------- Flash Memory Controller (FMC) --------------------------------*/
/** @addtogroup CMS32F030_FMC CMS32F030 Flash Memory Controller (FMC)
  @{
*/
typedef struct
{
  __IO uint32_t             CON;
  __IO uint32_t             ADR;
  __IO uint32_t             DAT;
  __IO uint32_t             CMD;
  __IO uint32_t             LOCK;
  __IO uint32_t             KEY;
} FMC_TypeDef;
/*@}*/ /* end of group CMS32F030_FMC */

//-----SYS_CMS


//------------

#if defined ( __CC_ARM   )
#pragma no_anon_unions
#endif

/*@}*/ /* end of group CMS32F030_Peripherals */


/******************************************************************************/
/*                         Peripheral memory map                              */
/******************************************************************************/
/** @addtogroup CMS32F030_MemoryMap CMS32F030 Memory Mapping
  @{
*/

/* Peripheral and SRAM base address */
#define FLASH_BASE          (0x00000000UL)                            /*!< (FLASH   ) Base Address */
#define INFO_BASE           (0x10000000UL)                            /*!< (INFO    ) Base Address */
#define UDID_BASE           (0x18000004UL)                            /*!< (UDID    ) Base Address */

#define SRAM_BASE           (0x20000000UL)                            /*!< (SRAM    ) Base Address */
#define APB_BASE            (0x40000000UL)                            /*!< (APB     ) Base Address */
#define AHB_BASE            (0x50000000UL)                            /*!< (AHB     ) Base Address */

/* APB memory map */
#define WWDT_BASE           (APB_BASE + 0x1800000UL)                  /*!< (WWDT    ) Base Address*/
#define EPWM_BASE           (APB_BASE + 0x2000000UL)                  /*!< (EPWM    ) Base Address*/
#define PWM_BASE            (APB_BASE + 0x2800000UL)                  /*!< (Capture/PWM)Base Address*/
#define ADC_BASE            (APB_BASE + 0x3000000UL)                  /*!< (ADC     ) Base Address */
#define SSP0_BASE           (APB_BASE + 0x3800000UL)                  /*!< (SSP0    ) Base Address */
#define UART0_BASE          (APB_BASE + 0x4800000UL)                  /*!< (UART0   ) Base Address */
#define UART1_BASE          (APB_BASE + 0x5000000UL)                  /*!< (UART1   ) Base Address */
#define UART2_BASE          (APB_BASE + 0x5800000UL)                  /*!< (UART2   ) Base Address */
#define TIMER0_BASE         (APB_BASE + 0x6800000UL)                  /*!< (TIMER0  ) Base Address */
#define TIMER1_BASE         (TIMER0_BASE + 0x0100UL)                  /*!< (TIMER1  ) Base Address */
#define WDT_BASE            (APB_BASE + 0x7800000UL)                  /*!< (WDT     ) Base Address */
#define I2C0_BASE           (APB_BASE + 0x8000000UL)                  /*!< (I2C0    ) Base Address */
#define FMC_BASE            (APB_BASE + 0x9800000UL)                  /*!< (FMC     ) Base Address */


/* AHB memory map */
#define SYSCON_BASE         (AHB_BASE)                                /*!< (SYSCON  ) Base Address */
#define GPIO0_BASE          (AHB_BASE + 0x2000000UL)                  /*!< (GPIO0   ) Base Address */
#define GPIO1_BASE          (AHB_BASE + 0x2800000UL)                  /*!< (GPIO1   ) Base Address */
#define GPIO2_BASE          (AHB_BASE + 0x3000000UL)                  /*!< (GPIO2   ) Base Address */
#define GPIO3_BASE          (AHB_BASE + 0x3800000UL)                  /*!< (GPIO3   ) Base Address */
#define GPIO4_BASE          (AHB_BASE + 0x4000000UL)                  /*!< (GPIO4   ) Base Address */
/*@}*/ /* end of group CMS32F030_MemoryMap */

/******************************************************************************/
/*                         Peripheral declaration                             */
/******************************************************************************/
/** @addtogroup CMS32F030_PeripheralDecl CMS32F030 Peripheral Declaration
  @{
*/

#define PWM                 ((PWM_TypeDef       *) PWM_BASE)          /*!< Capture/PWM configuration struct  */
#define WWDT                ((WWDT_TypeDef      *) WWDT_BASE)         /*!< WWDT configuration struct         */
#define EPWM                ((EPWM_TypeDef      *) EPWM_BASE)         /*!< EPWM configuration struct         */
#define ADC                 ((ADC_TypeDef       *) ADC_BASE)          /*!< ADC configuration struct          */
#define SSP0                ((SSP_TypeDef       *) SSP0_BASE)         /*!< SSP0 configuration struct         */
#define UART0               ((UART_TypeDef      *) UART0_BASE)        /*!< UART0 configuration struct        */
#define UART1               ((UART_TypeDef      *) UART1_BASE)        /*!< UART1 configuration struct        */
#define UART2               ((UART_TypeDef      *) UART2_BASE)        /*!< UART0 configuration struct        */
#define TIMER0              ((TIMER_TypeDef     *) TIMER0_BASE)       /*!< TIMER0 configuration struct       */
#define TIMER1              ((TIMER_TypeDef     *) TIMER1_BASE)       /*!< TIMER1 configuration struct       */
#define WDT                 ((WDT_TypeDef       *) WDT_BASE)          /*!< WDT configuration struct          */
#define I2C0                ((I2C_TypeDef       *) I2C0_BASE)         /*!< I2C0 configuration struct         */
#define FMC                 ((FMC_TypeDef       *) FMC_BASE)          /*!< FMC configuration struct          */
#define SYSCON              ((SYSCON_TypeDef    *) SYSCON_BASE)       /*!< SYSCON configuration struct       */
#define GPIO0               ((GPIO_TypeDef      *) GPIO0_BASE)        /*!< GPIO0 configuration struct        */
#define GPIO1               ((GPIO_TypeDef      *) GPIO1_BASE)        /*!< GPIO1 configuration struct        */
#define GPIO2               ((GPIO_TypeDef      *) GPIO2_BASE)        /*!< GPIO2 configuration struct        */
#define GPIO3               ((GPIO_TypeDef      *) GPIO3_BASE)        /*!< GPIO3 configuration struct        */
#define GPIO4               ((GPIO_TypeDef      *) GPIO4_BASE)        /*!< GPIO4 configuration struct        */
#define UDID                ((UDID_TypeDef      *) UDID_BASE)         /*!< UDID  configuration struct        */
/*@}*/ /* end of group CMS32F030_PeripheralDecl */


/*@}*/ /* end of group CMS32F030_Definitions */

#ifdef __cplusplus
}
#endif

#endif  /* CMS32F030 */
