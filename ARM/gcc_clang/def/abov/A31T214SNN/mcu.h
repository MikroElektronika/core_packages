
/****************************************************************************************************//**
 * @file     A31T21x.h
 *
 * @brief    CMSIS Cortex-M0PLUS Peripheral Access Layer Header File for
 *           A31T21x from ABOV Semiconductor Co., Ltd..
 *
 * @version  V0.92

 *


 *
 * @par      ARM Limited (ARM) is supplying this software for use with Cortex-M
 *           processor based microcontroller, but can be equally used for other
 *           suitable processor architectures. This file can be freely distributed.
 *           Modifications to this file shall be clearly marked.
 *           
 *           THIS SOFTWARE IS PROVIDED "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 *           OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 *           MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 *           ARM SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
 *           CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER. 
 *
 *******************************************************************************************************/



/** @addtogroup ABOV Semiconductor Co., Ltd.
  * @{
  */

/** @addtogroup A31T21x
  * @{
  */

#ifndef __A31T21X_H
#define __A31T21X_H

#ifdef __cplusplus
extern "C" {
#endif


/* -------------------------  Interrupt Number Definition  ------------------------ */

typedef enum {
/* -----------------  Cortex-M0PLUS Processor Exceptions Numbers  ----------------- */
  Reset_IRQn                    = -15,              /*!<   1  Reset Vector, invoked on Power up and warm reset                 */
  NonMaskableInt_IRQn           = -14,              /*!<   2  Non maskable Interrupt, cannot be stopped or preempted           */
  HardFault_IRQn                = -13,              /*!<   3  Hard Fault, all classes of Fault                                 */
  SVCall_IRQn                   =  -5,              /*!<  11  System Service Call via SVC instruction                          */
  DebugMonitor_IRQn             =  -4,              /*!<  12  Debug Monitor                                                    */
  SysTick_IRQn                  =  -1,              /*!<  15  System Tick Timer                                                */
/* ---------------------  A31T21x Specific Interrupt Numbers  --------------------- */
  LVI_IRQn                      =   0,              /*!<   0  LVI                                                              */
  SYSCLKFAIL_IRQn               =   1,              /*!<   1  SYSCLKFAIL                                                       */
  WDT_IRQn                      =   2,              /*!<   2  WDT                                                              */
  GPIOAB_IRQn                   =   3,              /*!<   3  GPIOAB                                                           */
  GPIOCD_IRQn                   =   4,              /*!<   4  GPIOCD                                                           */
  GPIOE_IRQn                    =   5,              /*!<   5  GPIOE                                                            */
  GPIOF_IRQn                    =   6,              /*!<   6  GPIOF                                                            */
  TIMER10_IRQn                  =   7,              /*!<   7  TIMER10                                                          */
  TIMER11_IRQn                  =   8,              /*!<   8  TIMER11                                                          */
  TIMER12_IRQn                  =   9,              /*!<   9  TIMER12                                                          */
  I2C0_IRQn                     =  10,              /*!<  10  I2C0                                                             */
  USART10_IRQn                  =  11,              /*!<  11  USART10                                                          */
  WT_IRQn                       =  12,              /*!<  12  WT                                                               */
  TIMER30_IRQn                  =  13,              /*!<  13  TIMER30                                                          */
  I2C1_IRQn                     =  14,              /*!<  14  I2C1                                                             */
  TIMER20_IRQn                  =  15,              /*!<  15  TIMER20                                                          */
  TIMER21_IRQn                  =  16,              /*!<  16  TIMER21                                                          */
  USART11_IRQn                  =  17,              /*!<  17  USART11                                                          */
  ADC_IRQn                      =  18,              /*!<  18  ADC                                                              */
  UART0_IRQn                    =  19,              /*!<  19  UART0                                                            */
  UART1_IRQn                    =  20,              /*!<  20  UART1                                                            */
  TIMER13_IRQn                  =  21,              /*!<  21  TIMER13                                                          */
  SPI20_IRQn                    =  25,              /*!<  25  SPI20                                                            */
  SPI21_IRQn                    =  26,              /*!<  26  SPI21                                                            */
  TSENSE_IRQn                   =  27,              /*!<  27  TSENSE                                                           */
  LED_IRQn                      =  28,              /*!<  28  LED                                                              */
  TOUCH_IRQn                    =  29,              /*!<  29  TOUCH                                                            */
  CRC_IRQn                      =  31               /*!<  31  CRC                                                              */
} IRQn_Type;


/** @addtogroup Configuration_of_CMSIS
  * @{
  */


/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

/* ----------------Configuration of the Cortex-M0PLUS Processor and Core Peripherals---------------- */
#define __CM0PLUS_REV                 0x0001        /*!< Cortex-M0PLUS Core Revision                                           */
#define __MPU_PRESENT                  0            /*!< MPU present or not                                                    */
#define __NVIC_PRIO_BITS               2            /*!< Number of Bits used for Priority Levels                               */
#define __Vendor_SysTickConfig         0            /*!< Set to 1 if different SysTick Config is used                          */
#define __VTOR_PRESENT                 1            /*!< Set to 1 if CPU supports Vector Table Offset Register                 */
/** @} */ /* End of group Configuration_of_CMSIS */

#include "core_cm0plus.h"                           /*!< Cortex-M0PLUS processor and core peripherals                          */
// Note: Changed for MikroE implementation.
//#include "a31t21x_system.h"                         /*!< A31T21x System                                                        */
#define __I volatile // Note: Added for MikroE implementation.
#define __O __I // Note: Added for MikroE implementation.
#define __IO __I // Note: Added for MikroE implementation.
#include <stdint.h>


/* ================================================================================ */
/* ================       Device Specific Peripheral Section       ================ */
/* ================================================================================ */


/** @addtogroup Device_Peripheral_Registers
  * @{
  */


/* -------------------  Start of section using anonymous unions  ------------------ */
#if defined(__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined(__ICCARM__)
  #pragma language=extended
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning 586
#else
  #warning Not supported compiler type
#endif



/* ================================================================================ */
/* ================                       SCU                      ================ */
/* ================================================================================ */


/**
  * @brief System Control Unit (SCU)
  */

typedef struct {                                    /*!< (@ 0x40000000) SCU Structure                                          */
  __I  uint32_t  RESERVED;
  __IO uint32_t  SMR;                               /*!< (@ 0x40000004) System Mode Register                                   */
  __IO uint32_t  SCR;                               /*!< (@ 0x40000008) System Control Register                                */
  __I  uint32_t  RESERVED1;
  __IO uint32_t  WUER;                              /*!< (@ 0x40000010) Wake up source enable register                         */
  __I  uint32_t  WUSR;                              /*!< (@ 0x40000014) Wake up source status register                         */
  __IO uint32_t  RSER;                              /*!< (@ 0x40000018) Reset source enable register                           */
  __IO uint32_t  RSSR;                              /*!< (@ 0x4000001C) Reset source status register                           */
  __IO uint32_t  PRER1;                             /*!< (@ 0x40000020) Peripheral reset enable register 1                     */
  __IO uint32_t  PRER2;                             /*!< (@ 0x40000024) Peripheral reset enable register 2                     */
  __IO uint32_t  PER1;                              /*!< (@ 0x40000028) Peripheral enable register 1                           */
  __IO uint32_t  PER2;                              /*!< (@ 0x4000002C) Peripheral enable register 2                           */
  __IO uint32_t  PCER1;                             /*!< (@ 0x40000030) Peripheral clock enable register 1                     */
  __IO uint32_t  PCER2;                             /*!< (@ 0x40000034) Peripheral clock enable register 2                     */
  __IO uint32_t  PPCLKSR;                           /*!< (@ 0x40000038) Peripheral clock selection register                    */
  __I  uint32_t  RESERVED2;
  __IO uint32_t  CSCR;                              /*!< (@ 0x40000040) Clock Source Control register                          */
  __IO uint32_t  SCCR;                              /*!< (@ 0x40000044) System Clock Control register                          */
  __IO uint32_t  CMR;                               /*!< (@ 0x40000048) Clock Monitoring register                              */
  __IO uint32_t  NMIR;                              /*!< (@ 0x4000004C) NMI control register                                   */
  __IO uint32_t  COR;                               /*!< (@ 0x40000050) Clock Output Control register                          */
  __I  uint32_t  RESERVED3[3];
  __IO uint32_t  PLLCON;                            /*!< (@ 0x40000060) PLL Control register                                   */
  __IO uint32_t  VDCCON;                            /*!< (@ 0x40000064) VDC Control register                                   */
  __IO uint32_t  TIRCCON;                           /*!< (@ 0x40000068) On chip Internal IRC for Touch control register        */
  __IO uint32_t  LSICON;                            /*!< (@ 0x4000006C) LSI Control Register                                   */
  __I  uint32_t  RESERVED4[4];
  __IO uint32_t  EOSCR;                             /*!< (@ 0x40000080) External Oscillator control register                   */
  __IO uint32_t  EMODR;                             /*!< (@ 0x40000084) External mode pin read register                        */
  __IO uint32_t  RSTDBCR;                           /*!< (@ 0x40000088) Pin Reset Debounce Control Register                    */
  __I  uint32_t  RESERVED5;
  __IO uint32_t  MCCR1;                             /*!< (@ 0x40000090) Miscellaneous Clock Control Register 1                 */
  __IO uint32_t  MCCR2;                             /*!< (@ 0x40000094) Miscellaneous Clock Control Register 2                 */
  __IO uint32_t  MCCR3;                             /*!< (@ 0x40000098) Miscellaneous Clock Control Register 3                 */
  __IO uint32_t  MCCR4;                             /*!< (@ 0x4000009C) Miscellaneous Clock Control Register 4                 */
  __IO uint32_t  MCCR5;                             /*!< (@ 0x400000A0) Miscellaneous Clock Control Register 5                 */
  __IO uint32_t  MCCR6;                             /*!< (@ 0x400000A4) Miscellaneous Clock Control Register 6                 */
} SCU_Type;


/* ================================================================================ */
/* ================                      SCUCC                     ================ */
/* ================================================================================ */


/**
  * @brief CHIP CONFIGURATION (SCUCC)
  */

typedef struct {                                    /*!< (@ 0x4000F000) SCUCC Structure                                        */
  __I  uint32_t  VENDORID;                          /*!< (@ 0x4000F000) Vendor Identification Register                         */
  __I  uint32_t  CHIPID;                            /*!< (@ 0x4000F004) Chip Identification Register                           */
  __I  uint32_t  REVNR;                             /*!< (@ 0x4000F008) Revision Number Register                               */
} SCUCC_Type;


/* ================================================================================ */
/* ================                      SCULV                     ================ */
/* ================================================================================ */


/**
  * @brief LOW VOLTAGE INDICATOR(LVI) AND LOW VOLTAGE RESET(LVR) (SCULV)
  */

typedef struct {                                    /*!< (@ 0x40005100) SCULV Structure                                        */
  __IO uint32_t  LVICR;                             /*!< (@ 0x40005100) Low Voltage Indicator Control Register                 */
  __IO uint32_t  LVRCR;                             /*!< (@ 0x40005104) Low Voltage Reset Control Register                     */
  __IO uint32_t  LVRCNFIG;                          /*!< (@ 0x40005108) Configuration for Low Voltage Reset                    */
} SCULV_Type;


/* ================================================================================ */
/* ================                       PCU                       ================ */
/* ================================================================================ */


/**
  * @brief General Port (PCU)
  */

typedef struct {                                    /*!< (@ 0x40001000) PA Structure                                           */
  __IO uint32_t  MOD;                               /*!< (@ 0x40001000) Port n Mode Register                                   */
  __IO uint32_t  TYP;                               /*!< (@ 0x40001004) Port n Output Type Selection Register                  */
  __IO uint32_t  AFSR1;                             /*!< (@ 0x40001008) Port n Alternative Function Selection Register
                                                         1                                                                     */
  __IO uint32_t  AFSR2;                             /*!< (@ 0x4000100C) Port n Alternative Function Selection Register
                                                         2                                                                     */
  __IO uint32_t  PUPD;                              /*!< (@ 0x40001010) Port n Pull-up/down Resistor Selection Register        */
  __I  uint32_t  INDR;                              /*!< (@ 0x40001014) Port n Input Data Register                             */
  __IO uint32_t  OUTDR;                             /*!< (@ 0x40001018) Port n Output Data Register                            */
  __O  uint32_t  BSR;                               /*!< (@ 0x4000101C) Port n Output Bit Set Register                         */
  __O  uint32_t  BCR;                               /*!< (@ 0x40001020) Port n Output Bit Clear Register                       */
  __IO uint32_t  OUTDMSK;                           /*!< (@ 0x40001024) Port n Output Data Mask Register                       */
  __IO uint32_t  DBCR;                              /*!< (@ 0x40001028) Port n Debounce Control Register                       */
  __IO uint32_t  IER;                               /*!< (@ 0x4000102C) Port n interrupt enable register                       */
  __IO uint32_t  ISR;                               /*!< (@ 0x40001030) Port n interrupt status register                       */
  __IO uint32_t  ICR;                               /*!< (@ 0x40001034) Port n interrupt control register                      */
} PCU_Type;


/* ================================================================================ */
/* ================                       PORT                      ================ */
/* ================================================================================ */


/**
  * @brief Port Control Mode Enable Register (PORT)
  */

typedef struct {                                    /*!< (@ 0x40001F00) PCU Structure                                          */
  __I  uint32_t  RESERVED[60];
  __IO uint32_t  EN;                            /*!< (@ 0x40001FF0) Port Access Enable 0x15->0x51                          */
} PORTEN_Type;


/* ================================================================================ */
/* ================                       FMC                      ================ */
/* ================================================================================ */


/**
  * @brief FLASH MEMORY CONTROLLER (FMC)
  */

typedef struct {                                    /*!< (@ 0x40000100) FMC Structure                                          */
  __I  uint32_t  RESERVED;
  __IO uint32_t  MR;                                /*!< (@ 0x40000104) Flash Memory Mode Select register                      */
  __IO uint32_t  CR;                                /*!< (@ 0x40000108) Flash Memory Control register                          */
  __IO uint32_t  AR;                                /*!< (@ 0x4000010C) Flash Memory Address register                          */
  __IO uint32_t  DR;                                /*!< (@ 0x40000110) Flash Memory Data register                             */
  __I  uint32_t  RESERVED1;
  __IO uint32_t  BUSY;                              /*!< (@ 0x40000118) Flash Write Busy Status Register                       */
  __I  uint32_t  RESERVED2;
  __I  uint32_t  CRC;                               /*!< (@ 0x40000120) Flash CRC-CCITT check value                            */
  __I  uint32_t  RESERVED3[3];
  __IO uint32_t  CFG;                               /*!< (@ 0x40000130) Flash Memory Config Register                           */
  __IO uint32_t  WPROT;                             /*!< (@ 0x40000134) Write Protection Register                              */
  __I  uint32_t  RESERVED4;
  __IO uint32_t  LOCK;                              /*!< (@ 0x4000013C) Flash LOCK register                                    */
  __I  uint32_t  RESERVED5[6];
  __I  uint32_t  HWID;                              /*!< (@ 0x40000158) Flash Size option check register                       */
} FMC_Type;


/* ================================================================================ */
/* ================                      DMA0                      ================ */
/* ================================================================================ */


/**
  * @brief Direct Memory Access (DMA0)
  */

typedef struct {                                    /*!< (@ 0x40000400) DMA0 Structure                                         */
  __IO uint32_t  CR;                                /*!< (@ 0x40000400) DMA Channel n Control Register                         */
  __IO uint32_t  SR;                                /*!< (@ 0x40000404) DMA Channel n Status Register                          */
  __IO uint32_t  PAR;                               /*!< (@ 0x40000408) DMA Channel n Peripheral Address                       */
  __IO uint32_t  MAR;                               /*!< (@ 0x4000040C) DMA Channel n Memory Address                           */
} DMA_Type;


/* ================================================================================ */
/* ================                       WDT                      ================ */
/* ================================================================================ */


/**
  * @brief WATCH-DOG TIMER (WDT)
  */

typedef struct {                                    /*!< (@ 0x40001A00) WDT Structure                                          */
  __IO uint32_t  CR;                                /*!< (@ 0x40001A00) Watch-dog Timer Control Register                       */
  __IO uint32_t  SR;                                /*!< (@ 0x40001A04) Watch-dog Timer Status Register                        */
  __IO uint32_t  DR;                                /*!< (@ 0x40001A08) Watch-dog Timer Data Register                          */
  __I  uint32_t  CNT;                               /*!< (@ 0x40001A0C) Watch-dog Timer Counter Register                       */
  __IO uint32_t  WINDR;                             /*!< (@ 0x40001A10) Watch-dog Timer Window Data Register (Note: Once
                                                         any value is written to this window data register, the register
                                                          can't be changed until a system reset.)                              */
  __O  uint32_t  CNTR;                              /*!< (@ 0x40001A14) Watch-dog Timer Counter Reload Register                */
} WDT_Type;


/* ================================================================================ */
/* ================                       WT                       ================ */
/* ================================================================================ */


/**
  * @brief WATCH TIMER (WT)
  */

typedef struct {                                    /*!< (@ 0x40002000) WT Structure                                           */
  __IO uint32_t  CR;                                /*!< (@ 0x40002000) Watch Timer Control Register                           */
  __IO uint32_t  DR;                                /*!< (@ 0x40002004) Watch Timer Data Register                              */
  __I  uint32_t  CNT;                               /*!< (@ 0x40002008) Watch Timer Counter Register                           */
} WT_Type;


/* ================================================================================ */
/* ================                     TIMER10                    ================ */
/* ================================================================================ */


/**
  * @brief TIMER COUNTER 10/11/12 (TIMER10)
  */

typedef struct {                                    /*!< (@ 0x40002100) TIMER10 Structure                                      */
  __IO uint32_t  CR;                                /*!< (@ 0x40002100) Timer/Counter n Control Register                       */
  __IO uint32_t  ADR;                               /*!< (@ 0x40002104) Timer/Counter n A Data Register                        */
  __IO uint32_t  BDR;                               /*!< (@ 0x40002108) Timer/Counter n B Data Register                        */
  __I  uint32_t  CAPDR;                             /*!< (@ 0x4000210C) Timer/Counter n Capture Data Register                  */
  __IO uint32_t  PREDR;                             /*!< (@ 0x40002110) Timer/Counter n Prescaler Data Register                */
  __I  uint32_t  CNT;                               /*!< (@ 0x40002114) Timer/Counter n Counter Register                       */
} TIMER1n_Type;


/* ================================================================================ */
/* ================                     TIMER20                    ================ */
/* ================================================================================ */


/**
  * @brief TIMER COUNTER 20/21 (TIMER20)
  */

typedef struct {                                    /*!< (@ 0x40002500) TIMER20 Structure                                      */
  __IO uint32_t  CR;                                /*!< (@ 0x40002500) Timer/Counter n Control Register                       */
  __IO uint32_t  ADR;                               /*!< (@ 0x40002504) Timer/Counter n A Data Register                        */
  __IO uint32_t  BDR;                               /*!< (@ 0x40002508) Timer/Counter n B Data Register                        */
  __I  uint32_t  CAPDR;                             /*!< (@ 0x4000250C) Timer/Counter n Capture Data Register                  */
  __IO uint32_t  PREDR;                             /*!< (@ 0x40002510) Timer/Counter n Prescaler Data Register                */
  __I  uint32_t  CNT;                               /*!< (@ 0x40002514) Timer/Counter n Counter Register                       */
} TIMER2n_Type;

/* ================================================================================ */
/* ================                     TIMER (Total)              ================ */
/* ================================================================================ */


/**
  * @brief TIMER COUNTER
  */

typedef struct {                                    /*!< (@ 0x40002500) TIMER20 Structure                                      */
  __IO uint32_t  CR;                                /*!< (@ 0x40002500) Timer/Counter n Control Register                       */
  __IO uint32_t  ADR;                               /*!< (@ 0x40002504) Timer/Counter n A Data Register                        */
  __IO uint32_t  BDR;                               /*!< (@ 0x40002508) Timer/Counter n B Data Register                        */
  __I  uint32_t  CAPDR;                             /*!< (@ 0x4000250C) Timer/Counter n Capture Data Register                  */
  __IO uint32_t  PREDR;                             /*!< (@ 0x40002510) Timer/Counter n Prescaler Data Register                */
  __I  uint32_t  CNT;                               /*!< (@ 0x40002514) Timer/Counter n Counter Register                       */
} TIMER_Type;


/* ================================================================================ */
/* ================                     TIMER30                    ================ */
/* ================================================================================ */


/**
  * @brief TIMER COUNTER 30 (TIMER30)
  */

typedef struct {                                    /*!< (@ 0x40002400) TIMER30 Structure                                      */
  __IO uint32_t  CR;                                /*!< (@ 0x40002400) Timer/Counter 30 Control Register                      */
  __IO uint32_t  PDR;                               /*!< (@ 0x40002404) Timer/Counter 30 Period Data Register                  */
  __IO uint32_t  ADR;                               /*!< (@ 0x40002408) Timer/Counter 30 A Data Register                       */
  __IO uint32_t  BDR;                               /*!< (@ 0x4000240C) Timer/Counter 30 B Data Register                       */
  __IO uint32_t  CDR;                               /*!< (@ 0x40002410) Timer/Counter 30 C Data Register                       */
  __I  uint32_t  CAPDR;                             /*!< (@ 0x40002414) Timer/Counter 30 Capture Data Register                 */
  __IO uint32_t  PREDR;                             /*!< (@ 0x40002418) Timer/Counter 30 Prescaler Data Register               */
  __I  uint32_t  CNT;                               /*!< (@ 0x4000241C) Timer/Counter 30 Counter Register                      */
  __IO uint32_t  OUTCR;                             /*!< (@ 0x40002420) Timer/Counter 30 Output Control Register               */
  __IO uint32_t  DLY;                               /*!< (@ 0x40002424) Timer/Counter 30 PWM Output Delay Data Register        */
  __IO uint32_t  INTCR;                             /*!< (@ 0x40002428) Timer/Counter 30 Interrupt Control Register            */
  __IO uint32_t  INTFLAG;                           /*!< (@ 0x4000242C) Timer/Counter 30 Interrupt Flag Register               */
  __IO uint32_t  HIZCR;                             /*!< (@ 0x40002430) Timer/Counter 30 High-Impedance Control Register       */
  __IO uint32_t  ADTCR;                             /*!< (@ 0x40002434) Timer/Counter 30 A/DC Trigger Control Register         */
  __IO uint32_t  ADTDR;                             /*!< (@ 0x40002438) Timer/Counter 30 A/DC Trigger Generator Data
                                                         Register                                                              */
} TIMER3n_Type;


/* ================================================================================ */
/* ================                     USART10                    ================ */
/* ================================================================================ */


/**
  * @brief USART 10 (UART + SPI) (USART10)
  */

typedef struct {                                    /*!< (@ 0x40003800) USART10 Structure                                      */
  __IO uint32_t  CR1;                               /*!< (@ 0x40003800) USARTn Control Register 1                              */
  __IO uint32_t  CR2;                               /*!< (@ 0x40003804) USARTn Control Register 2                              */
  __I  uint32_t  RESERVED;
  __IO uint32_t  ST;                                /*!< (@ 0x4000380C) USARTn Status Register                                 */
  __IO uint32_t  BDR;                               /*!< (@ 0x40003810) USARTn Baud Rate Generation Register                   */
  __IO uint32_t  DR;                                /*!< (@ 0x40003814) USARTn Data Register                                   */
  __IO uint32_t  BFR;                               /*!< (@ 0x40003818) USARTn Baud Rate Fraction Register                     */
  __IO uint32_t  RTO;                               /*!< (@ 0x4000381C) USARTn Receive Time Out Register	                     */
} USART_Type;


/* ================================================================================ */
/* ================                      UART0                     ================ */
/* ================================================================================ */


/**
  * @brief UNIVERSAL ASYNCHRONOUS RECEIVER/TRANSMITTER (UART0)
  */

typedef struct {                                    /*!< (@ 0x40004000) UART0 Structure                                        */
  
  union {
    __O  uint32_t  THR;                             /*!< (@ 0x40004000) Transmit Data Hold Register                            */
    __I  uint32_t  RBR;                             /*!< (@ 0x40004000) Receive Buffer Register                                */
  };
  __IO uint32_t  IER;                               /*!< (@ 0x40004004) UART Interrupt Enable Register                         */
  __IO uint32_t  IIR;                               /*!< (@ 0x40004008) UART Interrupt ID Register                             */
  __IO uint32_t  LCR;                               /*!< (@ 0x4000400C) UART Line Control Register                             */
  __IO uint32_t  DCR;                               /*!< (@ 0x40004010) UART Data Control Register                             */
  __IO uint32_t  LSR;                               /*!< (@ 0x40004014) UART Line Status Register                              */
  __I  uint32_t  RESERVED[2];
  __IO uint32_t  BDR;                               /*!< (@ 0x40004020) Baud rate Divisor Latch Register                       */
  __IO uint32_t  BFR;                               /*!< (@ 0x40004024) Baud rate Fraction Counter Register                    */
  __I  uint32_t  RESERVED1[2];
  __IO uint32_t  IDTR;                              /*!< (@ 0x40004030) Inter-frame Delay Time Register                        */
} UART_Type;


/* ================================================================================ */
/* ================                      I2C0                      ================ */
/* ================================================================================ */


/**
  * @brief I2C 0 (I2C0)
  */

typedef struct {                                    /*!< (@ 0x40004800) I2C0 Structure                                         */
  __IO uint32_t  CR;                                /*!< (@ 0x40004800) I2Cn Control Register                                  */
  __IO uint32_t  ST;                                /*!< (@ 0x40004804) I2Cn Status Register                                   */
  __IO uint32_t  SAR1;                              /*!< (@ 0x40004808) I2Cn Slave Address Register 1                          */
  __IO uint32_t  SAR2;                              /*!< (@ 0x4000480C) I2Cn Slave Address Register 2                          */
  __IO uint32_t  DR;                                /*!< (@ 0x40004810) I2Cn Data Register                                     */
  __IO uint32_t  SDHR;                              /*!< (@ 0x40004814) I2Cn SDA Hold Time Register                            */
  __IO uint32_t  SCLR;                              /*!< (@ 0x40004818) I2Cn SCL Low Period Register                           */
  __IO uint32_t  SCHR;                              /*!< (@ 0x4000481C) I2Cn SCL High Period Register                          */
  __IO uint32_t  SLTCR;                             /*!< (@ 0x40004820) I2Cn SCL low timeout control register                  */
  __IO uint32_t  SLTPDR;                            /*!< (@ 0x40004824) I2Cn SCL low timeout period data register              */
  __IO uint32_t  MBCR;                              /*!< (@ 0x40004828) I2Cn manual bus control register                       */
} I2C_Type;


/* ================================================================================ */
/* ================                      SPI20                     ================ */
/* ================================================================================ */


/**
  * @brief Serial Peripheral Interface Bus (SPI20)
  */

typedef struct {                                    /*!< (@ 0x40004C00) SPI20 Structure                                        */
  
//  union {
//    __I  uint32_t  RDR;                             /*!< (@ 0x40004C00) SPI n Received Data Register                           */
//    __O  uint32_t  TDR;                             /*!< (@ 0x40004C00) SPI2 n Transmit Data Register                          */
//  };
  __IO uint32_t  RDR_TDR;                           /*!< SPI n Transmit_Receive Data Register   */																								  
  __IO uint32_t  CR;                                /*!< (@ 0x40004C04) SPI Control Register                                   */
  __IO uint32_t  SR;                                /*!< (@ 0x40004C08) SPI n Status Register                                  */
  __IO uint32_t  BR;                                /*!< (@ 0x40004C0C) SPI n Baud Rate Register                               */
  __IO uint32_t  EN;                                /*!< (@ 0x40004C10) SPI n Enable Register                                  */
  __IO uint32_t  LR;                                /*!< (@ 0x40004C14) SPI n Delay Length Register                            */
} SPI_Type;


/* ================================================================================ */
/* ================                       ADC                      ================ */
/* ================================================================================ */


/**
  * @brief 12-BIT A/D CONVERTER (ADC)
  */

typedef struct {                                    /*!< (@ 0x40003000) ADC Structure                                          */
  __IO uint32_t  CR;                                /*!< (@ 0x40003000) A/D Converter Control Register                         */
  __I  uint32_t  DR;                                /*!< (@ 0x40003004) A/D Converter Data Register                            */
  __IO uint32_t  PREDR;                             /*!< (@ 0x40003008) A/D Converter Prescaler Data Register                  */
} ADC_Type;


/* ================================================================================ */
/* ================                      TOUCH                     ================ */
/* ================================================================================ */


/**
  * @brief TOUCH (TOUCH)
  */

typedef struct {                                    /*!< (@ 0x40003600) TOUCH Structure                                        */
  __I  uint32_t  SUM_CH0_F0;                        /*!< (@ 0x40003600) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH0_F1;                        /*!< (@ 0x40003604) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH1_F0;                        /*!< (@ 0x40003608) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH1_F1;                        /*!< (@ 0x4000360C) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH2_F0;                        /*!< (@ 0x40003610) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH2_F1;                        /*!< (@ 0x40003614) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH3_F0;                        /*!< (@ 0x40003618) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH3_F1;                        /*!< (@ 0x4000361C) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH4_F0;                        /*!< (@ 0x40003620) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH4_F1;                        /*!< (@ 0x40003624) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH5_F0;                        /*!< (@ 0x40003628) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH5_F1;                        /*!< (@ 0x4000362C) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH6_F0;                        /*!< (@ 0x40003630) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH6_F1;                        /*!< (@ 0x40003634) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH7_F0;                        /*!< (@ 0x40003638) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH7_F1;                        /*!< (@ 0x4000363C) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH8_F0;                        /*!< (@ 0x40003640) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH8_F1;                        /*!< (@ 0x40003644) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH9_F0;                        /*!< (@ 0x40003648) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH9_F1;                        /*!< (@ 0x4000364C) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH10_F0;                       /*!< (@ 0x40003650) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH10_F1;                       /*!< (@ 0x40003654) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH11_F0;                       /*!< (@ 0x40003658) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH11_F1;                       /*!< (@ 0x4000365C) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH12_F0;                       /*!< (@ 0x40003660) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH12_F1;                       /*!< (@ 0x40003664) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH13_F0;                       /*!< (@ 0x40003668) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH13_F1;                       /*!< (@ 0x4000366C) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH14_F0;                       /*!< (@ 0x40003670) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH14_F1;                       /*!< (@ 0x40003674) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH15_F0;                       /*!< (@ 0x40003678) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH15_F1;                       /*!< (@ 0x4000367C) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH16_F0;                       /*!< (@ 0x40003680) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH16_F1;                       /*!< (@ 0x40003684) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH17_F0;                       /*!< (@ 0x40003688) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH17_F1;                       /*!< (@ 0x4000368C) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH18_F0;                       /*!< (@ 0x40003690) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH18_F1;                       /*!< (@ 0x40003694) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH19_F0;                       /*!< (@ 0x40003698) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH19_F1;                       /*!< (@ 0x4000369C) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH20_F0;                       /*!< (@ 0x400036A0) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH20_F1;                       /*!< (@ 0x400036A4) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH21_F0;                       /*!< (@ 0x400036A8) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH21_F1;                       /*!< (@ 0x400036AC) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH22_F0;                       /*!< (@ 0x400036B0) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH22_F1;                       /*!< (@ 0x400036B4) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH23_F0;                       /*!< (@ 0x400036B8) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH23_F1;                       /*!< (@ 0x400036BC) Touch Sensor Channel 0~23 Sum Register                 */
  __IO uint32_t  SCO0;                              /*!< (@ 0x400036C0) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO1;                              /*!< (@ 0x400036C4) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO2;                              /*!< (@ 0x400036C8) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO3;                              /*!< (@ 0x400036CC) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO4;                              /*!< (@ 0x400036D0) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO5;                              /*!< (@ 0x400036D4) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO6;                              /*!< (@ 0x400036D8) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO7;                              /*!< (@ 0x400036DC) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO8;                              /*!< (@ 0x400036E0) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO9;                              /*!< (@ 0x400036E4) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO10;                             /*!< (@ 0x400036E8) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO11;                             /*!< (@ 0x400036EC) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO12;                             /*!< (@ 0x400036F0) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO13;                             /*!< (@ 0x400036F4) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO14;                             /*!< (@ 0x400036F8) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO15;                             /*!< (@ 0x400036FC) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO16;                             /*!< (@ 0x40003700) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO17;                             /*!< (@ 0x40003704) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO18;                             /*!< (@ 0x40003708) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO19;                             /*!< (@ 0x4000370C) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO20;                             /*!< (@ 0x40003710) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO21;                             /*!< (@ 0x40003714) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO22;                             /*!< (@ 0x40003718) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO23;                             /*!< (@ 0x4000371C) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  CON;                               /*!< (@ 0x40003720) Touch Sensor Control Register                          */
  __IO uint32_t  MODE;                              /*!< (@ 0x40003724) Touch Sensor Mode Register                             */
  __IO uint32_t  SUM_CNT;                           /*!< (@ 0x40003728) Touch Sensor Sum Repeat Count Register                 */
  __IO uint32_t  CH_SEL;                            /*!< (@ 0x4000372C) Touch Sensor Channel Selection Register                */
  __IO uint32_t  S1_WIDTH;                          /*!< (@ 0x40003730) Touch Sensor Sum Repeat Count Register                 */
  __IO uint32_t  SLP_CON;                           /*!< (@ 0x40003734) Touch Sensor Low Pass Filter Control Register          */
  __IO uint32_t  TRIM;                              /*!< (@ 0x40003738) Touch Sensor Trimming Register                         */
  __IO uint32_t  CLK_CFG;                           /*!< (@ 0x4000373C) Touch Sensor Clock Configuration Register              */
  __IO uint32_t  TRIM_OSC;                          /*!< (@ 0x40003740) Touch Sensor RING Oscillator Trimming Selection
                                                         Register                                                              */
  __IO uint32_t  DELTA_OSC;                         /*!< (@ 0x40003744) Touch Sensor RING Oscillator Delta Register            */
  __IO uint32_t  TLED;                              /*!< (@ 0x40003748) LED stable time Register                               */
  __IO uint32_t  VHS;                               /*!< (@ 0x4000374C) Touch Sensor High Sense Voltage Register               */
  __IO uint32_t  VREF;                              /*!< (@ 0x40003750) Touch Sensor COMP Reference Voltage Register           */
  __I  uint32_t  RESERVED[3];
  __IO uint32_t  SHLD_CON;                          /*!< (@ 0x40003760) Touch Sensor Shield Channel Control Register           */
} TOUCH_Type;


/* ================================================================================ */
/* ================                       LED                      ================ */
/* ================================================================================ */


/**
  * @brief LED DRIVER/CONTROLLER (LED)
  */

typedef struct {                                    /*!< (@ 0x40006000) LED Structure                                          */
  __IO uint32_t  COMOE;                             /*!< (@ 0x40006000) COM Output Enable Register                             */
  __IO uint32_t  SEGOE;                             /*!< (@ 0x40006004) SEG Output Enable Register                             */
  __IO uint32_t  PRESD;                             /*!< (@ 0x40006008) LED Prescaler Data Register                            */
  __IO uint32_t  COMER;                             /*!< (@ 0x4000600C) COM Enable Register                                    */
  __IO uint32_t  COMPWID;                           /*!< (@ 0x40006010) COM Pulse Width Control Register                       */
  __IO uint32_t  COMDIMM0;                          /*!< (@ 0x40006014) LED COM Dimming 0 Register                             */
  __IO uint32_t  COMDIMM1;                          /*!< (@ 0x40006018) LED COM Dimming 1 Register                             */
  __IO uint32_t  COMDIMM2;                          /*!< (@ 0x4000601C) LED COM Dimming 2 Register                             */
  __IO uint32_t  COMDIMM3;                          /*!< (@ 0x40006020) LED COM Dimming 3 Register                             */
  __IO uint32_t  LEDPD;                             /*!< (@ 0x40006024) LED Period Data Register                               */
  __IO uint32_t  SR;                                /*!< (@ 0x40006028) LED STATUS Register                                    */
  __IO uint32_t  LEDCON3;                           /*!< (@ 0x4000602C) LED Control 3 Register                                 */
  __IO uint32_t  LEDCON2;                           /*!< (@ 0x40006030) LED Control 2 Register                                 */
  __IO uint32_t  LEDCON1;                           /*!< (@ 0x40006034) LED Control 1 Register                                 */
  __I  uint32_t  RESERVED[2];
  __IO uint32_t  DISPRAM0;                          /*!< (@ 0x40006040) LED Display RAM                                        */
  __IO uint32_t  DISPRAM1;                          /*!< (@ 0x40006044) LED Display RAM                                        */
  __IO uint32_t  DISPRAM2;                          /*!< (@ 0x40006048) LED Display RAM                                        */
  __IO uint32_t  DISPRAM3;                          /*!< (@ 0x4000604C) LED Display RAM                                        */
  __IO uint32_t  DISPRAM4;                          /*!< (@ 0x40006050) LED Display RAM                                        */
  __IO uint32_t  DISPRAM5;                          /*!< (@ 0x40006054) LED Display RAM                                        */
  __IO uint32_t  DISPRAM6;                          /*!< (@ 0x40006058) LED Display RAM                                        */
  __IO uint32_t  DISPRAM7;                          /*!< (@ 0x4000605C) LED Display RAM                                        */
  __IO uint32_t  DISPRAM8;                          /*!< (@ 0x40006060) LED Display RAM                                        */
  __IO uint32_t  DISPRAM9;                          /*!< (@ 0x40006064) LED Display RAM                                        */
  __IO uint32_t  DISPRAM10;                         /*!< (@ 0x40006068) LED Display RAM                                        */
  __IO uint32_t  DISPRAM11;                         /*!< (@ 0x4000606C) LED Display RAM                                        */
  __IO uint32_t  DISPRAM12;                         /*!< (@ 0x40006070) LED Display RAM                                        */
  __IO uint32_t  CCSTRIM;   	                    /*!< (@ 0x40006074) LED CCSTRIM Register                                   */
  __I  uint32_t  RESERVED1[2];
  __IO uint32_t  LOGDE;                             /*!< (@ 0x40006080) LED Log-scale Dimming Enable Register                  */
  __IO uint32_t  COMDRIVE;                          /*!< (@ 0x40006084) LED COM additional driving Register                    */
  __IO uint32_t  PORTCTRL;                          /*!< (@ 0x40006088) LED Port Control Register                              */
  __IO uint32_t  DLYCNT;                            /*!< (@ 0x4000608C) LED run signal Delay Count Register                    */
} LED_Type;


/* ================================================================================ */
/* ================                       LCD                      ================ */
/* ================================================================================ */


/**
  * @brief LCD DRIVER/CONTROLLER (LCD)
  */

typedef struct {                                    /*!< (@ 0x40005000) LCD Structure                                          */
  __IO uint32_t  CR;                                /*!< (@ 0x40005000) LCD Driver Control Register                            */
  __IO uint32_t  BCCR;                              /*!< (@ 0x40005004) LCD Automatic Bias and Contrast Control Register.
                                                         Notes: 1. The above LCD contrast step is based on 1/3 bias with
                                                          66kohm RLCD and on 1/4 bias with 50kohm RLCD 2. The "LCD driver
                                                          contrast control" is disabled during the LCDABC bit (LCD automatic
                                                          bias) is set to "1b".                                                */
  __IO uint32_t  BSSR;                              /*!< (@ 0x40005008) LCD source selection register                          */
  __I  uint32_t  RESERVED;
  __IO uint8_t   DR0;                               /*!< (@ 0x40005010) LCD Display Data Register 0                            */
  __IO uint8_t   DR1;                               /*!< (@ 0x40005011) LCD Display Data Register 1                            */
  __IO uint8_t   DR2;                               /*!< (@ 0x40005012) LCD Display Data Register 2                            */
  __IO uint8_t   DR3;                               /*!< (@ 0x40005013) LCD Display Data Register 3                            */
  __IO uint8_t   DR4;                               /*!< (@ 0x40005014) LCD Display Data Register 4                            */
  __IO uint8_t   DR5;                               /*!< (@ 0x40005015) LCD Display Data Register 5                            */
  __IO uint8_t   DR6;                               /*!< (@ 0x40005016) LCD Display Data Register 6                            */
  __IO uint8_t   DR7;                               /*!< (@ 0x40005017) LCD Display Data Register 7                            */
  __IO uint8_t   DR8;                               /*!< (@ 0x40005018) LCD Display Data Register 8                            */
  __IO uint8_t   DR9;                               /*!< (@ 0x40005019) LCD Display Data Register 9                            */
  __IO uint8_t   DR10;                              /*!< (@ 0x4000501A) LCD Display Data Register 10                           */
  __IO uint8_t   DR11;                              /*!< (@ 0x4000501B) LCD Display Data Register 11                           */
  __IO uint8_t   DR12;                              /*!< (@ 0x4000501C) LCD Display Data Register 12                           */
  __IO uint8_t   DR13;                              /*!< (@ 0x4000501D) LCD Display Data Register 13                           */
  __IO uint8_t   DR14;                              /*!< (@ 0x4000501E) LCD Display Data Register 14                           */
  __IO uint8_t   DR15;                              /*!< (@ 0x4000501F) LCD Display Data Register 15                           */
  __IO uint8_t   DR16;                              /*!< (@ 0x40005020) LCD Display Data Register 16                           */
  __IO uint8_t   DR17;                              /*!< (@ 0x40005021) LCD Display Data Register 17                           */
  __IO uint8_t   DR18;                              /*!< (@ 0x40005022) LCD Display Data Register 18                           */
  __IO uint8_t   DR19;                              /*!< (@ 0x40005023) LCD Display Data Register 19                           */
  __IO uint8_t   DR20;                              /*!< (@ 0x40005024) LCD Display Data Register 20                           */
  __IO uint8_t   DR21;                              /*!< (@ 0x40005025) LCD Display Data Register 21                           */
  __IO uint8_t   DR22;                              /*!< (@ 0x40005026) LCD Display Data Register 22                           */
  __IO uint8_t   DR23;                              /*!< (@ 0x40005027) LCD Display Data Register 23                           */
  __IO uint8_t   DR24;                              /*!< (@ 0x40005028) LCD Display Data Register 24                           */
  __IO uint8_t   DR25;                              /*!< (@ 0x40005029) LCD Display Data Register 25                           */
  __IO uint8_t   DR26;                              /*!< (@ 0x4000502A) LCD Display Data Register 26                           */
  __IO uint8_t   DR27;                              /*!< (@ 0x4000502B) LCD Display Data Register 27                           */
  __IO uint8_t   DR28;                              /*!< (@ 0x4000502C) LCD Display Data Register 28                           */
  __IO uint8_t   DR29;                              /*!< (@ 0x4000502D) LCD Display Data Register 29                           */
  __IO uint8_t   DR30;                              /*!< (@ 0x4000502E) LCD Display Data Register 30                           */
  __IO uint8_t   DR31;                              /*!< (@ 0x4000502F) LCD Display Data Register 31                           */
} LCD_Type;


/* ================================================================================ */
/* ================                       CRC                      ================ */
/* ================================================================================ */


/**
  * @brief CYCLIC REDUNDANCY CHECK AND CHECKSUM (CRC)
  */

typedef struct {                                    /*!< (@ 0x40000300) CRC Structure                                          */
  __IO uint32_t  CR;                                /*!< (@ 0x40000300) CRC/Checksum Control Register. Notes: 1. The
                                                         CRCRLT register and the CRC/Checksum block should be initialized
                                                          by writing "1b" to the RLTCLR bit before a new CRC/Checksum
                                                          calculation. 2. The CRCRUN bit should be set to "1b" last time
                                                          after setting appropriate values to the registers. 3. On the
                                                          user mode, it will be calculated every writing data to the CRCIN
                                                          register during CRCRUN==1. 4. On the user mode with SARINC==0,
                                                          the block is finished by writing "0b" to the CRCRUN bit. 4.
                                                          It is prohibit                                                       */
  __IO uint32_t  IN;                                /*!< (@ 0x40000304) CRC/Checksum Input Data Register                       */
  __I  uint32_t  RLT;                               /*!< (@ 0x40000308) CRC/Checksum Result Data Register                      */
  __IO uint32_t  INIT;                              /*!< (@ 0x4000030C) CRC/Checksum Initial Data Register                     */
} CRC_Type;


/* ================================================================================ */
/* ================                     TSENSE                     ================ */
/* ================================================================================ */


/**
  * @brief Temp Sensor (TSENSE)
  */

typedef struct {                                    /*!< (@ 0x40006300) TSENSE Structure                                       */
  __IO uint32_t  CR;                                /*!< (@ 0x40006300) Temp sensor control register                           */
  __IO uint32_t  RCCNT;                             /*!< (@ 0x40006304) Temp sensor reference clock counter register           */
  __I  uint32_t  SCCNT;                             /*!< (@ 0x40006308) Temp sensor sensing clock counter register             */
  __IO uint32_t  SR;                                /*!< (@ 0x4000630C) Temp sensor status register                            */
} TSENSE_Type;


/* --------------------  End of section using anonymous unions  ------------------- */
#if defined(__CC_ARM)
  #pragma pop
#elif defined(__ICCARM__)
  /* leave anonymous unions enabled */
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning restore
#else
  #warning Not supported compiler type
#endif




/* ================================================================================ */
/* ================              Peripheral memory map             ================ */
/* ================================================================================ */

#define SCU_BASE                        0x40000000UL
#define SCUCC_BASE                      0x4000F000UL
#define SCULV_BASE                      0x40005100UL
#define PA_BASE                         0x40001000UL
#define PB_BASE                         0x40001100UL
#define PC_BASE                         0x40001200UL
#define PD_BASE                         0x40001300UL
#define PE_BASE                         0x40001400UL
#define PF_BASE                         0x40001500UL
#define PORTEN_BASE                     0x40001F00UL
#define FMC_BASE                        0x40000100UL
#define DMA0_BASE                       0x40000400UL
#define DMA1_BASE                       0x40000410UL
#define DMA2_BASE                       0x40000420UL
#define DMA3_BASE                       0x40000430UL
#define WDT_BASE                        0x40001A00UL
#define WT_BASE                         0x40002000UL
#define TIMER10_BASE                    0x40002100UL
#define TIMER11_BASE                    0x40002200UL
#define TIMER12_BASE                    0x40002300UL
#define TIMER13_BASE                    0x40002700UL
#define TIMER20_BASE                    0x40002500UL
#define TIMER21_BASE                    0x40002600UL
#define TIMER30_BASE                    0x40002400UL
#define USART10_BASE                    0x40003800UL
#define USART11_BASE                    0x40003900UL
#define UART0_BASE                      0x40004000UL
#define UART1_BASE                      0x40004100UL
#define I2C0_BASE                       0x40004800UL
#define I2C1_BASE                       0x40004900UL
#define SPI20_BASE                      0x40004C00UL
#define SPI21_BASE                      0x40004D00UL
#define ADC_BASE                        0x40003000UL
#define TOUCH_BASE                      0x40003600UL
#define LED_BASE                        0x40006000UL
#define LCD_BASE                        0x40005000UL
#define CRC_BASE                        0x40000300UL
#define TSENSE_BASE                     0x40006300UL


/* ================================================================================ */
/* ================             Peripheral declaration             ================ */
/* ================================================================================ */

#define SCU                             ((SCU_Type                *) SCU_BASE)
#define SCUCC                           ((SCUCC_Type              *) SCUCC_BASE)
#define SCULV                           ((SCULV_Type              *) SCULV_BASE)
#define PA                              ((PCU_Type                 *) PA_BASE)
#define PB                              ((PCU_Type                 *) PB_BASE)
#define PC                              ((PCU_Type                 *) PC_BASE)
#define PD                              ((PCU_Type                 *) PD_BASE)
#define PE                              ((PCU_Type                 *) PE_BASE)
#define PF                              ((PCU_Type                 *) PF_BASE)
#define PORTEN                          ((PORTEN_Type              *) PORTEN_BASE)
#define FMC                             ((FMC_Type                *) FMC_BASE)
#define DMA0                            ((DMA_Type               *) DMA0_BASE)
#define DMA1                            ((DMA_Type               *) DMA1_BASE)
#define DMA2                            ((DMA_Type               *) DMA2_BASE)
#define DMA3                            ((DMA_Type               *) DMA3_BASE)
#define WDT                             ((WDT_Type                *) WDT_BASE)
#define WT                              ((WT_Type                 *) WT_BASE)
#define TIMER10                         ((TIMER1n_Type            *) TIMER10_BASE)
#define TIMER11                         ((TIMER1n_Type            *) TIMER11_BASE)
#define TIMER12                         ((TIMER1n_Type            *) TIMER12_BASE)
#define TIMER13                         ((TIMER1n_Type            *) TIMER13_BASE)
#define TIMER20                         ((TIMER2n_Type            *) TIMER20_BASE)
#define TIMER21                         ((TIMER2n_Type            *) TIMER21_BASE)
#define TIMER30                         ((TIMER3n_Type            *) TIMER30_BASE)
#define USART10                         ((USART_Type            *) USART10_BASE)
#define USART11                         ((USART_Type            *) USART11_BASE)
#define UART0                           ((UART_Type              *) UART0_BASE)
#define UART1                           ((UART_Type              *) UART1_BASE)
#define I2C0                            ((I2C_Type               *) I2C0_BASE)
#define I2C1                            ((I2C_Type               *) I2C1_BASE)
#define SPI20                           ((SPI_Type              *) SPI20_BASE)
#define SPI21                           ((SPI_Type              *) SPI21_BASE)
#define ADC                             ((ADC_Type                *) ADC_BASE)
#define TOUCH                           ((TOUCH_Type              *) TOUCH_BASE)
#define LED                             ((LED_Type                *) LED_BASE)
#define LCD                             ((LCD_Type                *) LCD_BASE)
#define CRC                             ((CRC_Type                *) CRC_BASE)
#define TSENSE                          ((TSENSE_Type             *) TSENSE_BASE)


/** @} */ /* End of group Device_Peripheral_Registers */
/** @} */ /* End of group A31T21x */
/** @} */ /* End of group ABOV Semiconductor Co., Ltd. */

#ifdef __cplusplus
}
#endif


#endif  /* __A31T21x_H */

