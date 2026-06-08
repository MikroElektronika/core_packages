
/****************************************************************************************************//**
 * @file     A31G21x.h
 *
 * @brief    CMSIS Cortex-M0PLUS Peripheral Access Layer Header File for
 *           A31G21x from ABOV Semiconductor Co., Ltd..
 *
 * @version  V1.00
 *
 * @note     Generated with SVDConv V2.85b 
 *           from CMSIS SVD File 'A31G21x.svd' Version 1.0,
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

/** @addtogroup A31G21x
  * @{
  */

#ifndef A31G21x_H
#define A31G21x_H

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
/* ---------------------  A31G21x Specific Interrupt Numbers  --------------------- */
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
  SPI21_IRQn                    =  26,              /*!<  26  SPI21                                                         */
  LED_IRQn                      =  28,              /*!<  28  LED                                                              */
  TOUCH_IRQn                    =  29,              /*!<  29  TOUCH                                                            */
  CRC_IRQn                 =  31               /*!<  31  COMP_CRC                                                         */
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
//#include "system_A31G21x.h"                         /*!< A31G21x System                                                        */
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
  __IO uint32_t  WUSR;                              /*!< (@ 0x40000014) Wake up source status register                         */
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
  __I  uint32_t  RESERVED4;
  __IO uint32_t  LSICON;                            /*!< (@ 0x4000006C) LSI Control Register                                   */
  __I  uint32_t  RESERVED5[4];
  __IO uint32_t  EOSCR;                             /*!< (@ 0x40000080) External Oscillator control register                   */
  __IO uint32_t  EMODR;                             /*!< (@ 0x40000084) External mode pin read register                        */
  __I  uint32_t  RESERVED6[2];
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
/* ================                       PA                       ================ */
/* ================================================================================ */


/**
  * @brief General Port A (PA)
  */

typedef struct {                                    /*!< (@ 0x40001000) PA Structure                                           */
  __IO uint32_t  MOD;                               /*!< (@ 0x40001000) Port n Mode Register                                   */
  __IO uint32_t  TYP;                               /*!< (@ 0x40001004) Port n Output Type Selection Register                  */
  __IO uint32_t  AFSR1;                             /*!< (@ 0x40001008) Port n Alternative Function Selection Register
                                                         1                                                                     */
  __I  uint32_t  RESERVED;
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
} PORT_Type;




/* ================================================================================ */
/* ================                       PF                       ================ */
/* ================================================================================ */


/**
  * @brief General Port A (PF)
  */

typedef struct {                                    /*!< (@ 0x40001500) PF Structure                                           */
  __IO uint32_t  PLSR;                              /*!< (@ 0x40001538) PORT F level select register                           */
} PFPLSR_Type;


/* ================================================================================ */
/* ================                       PCU                      ================ */
/* ================================================================================ */


/**
  * @brief Port Control Mode Enable Register (PCU)
  */

typedef struct {                                    /*!< (@ 0x40001F00) PCU Structure                                          */
  __IO uint32_t  KEYR;                              /*!< (@ 0x40001F00) Port LED KEY Register                                  */
  __IO uint32_t  SEGR;                              /*!< (@ 0x40001F04) Port LED SEG Register                                  */
  __IO uint32_t  COMR;                              /*!< (@ 0x40001F08) Port LED COM Register                                  */
  __I  uint32_t  RESERVED[57];
  __IO uint32_t  PORTEN;                            /*!< (@ 0x40001FF0) Port Access Enable 0x15->0x51                          */
} PCU_Type;



/* ================================================================================ */
/* ================                    SPI2PCON                    ================ */
/* ================================================================================ */


/**
  * @brief SPI2x select Register (SPI2PCON)
  */

typedef struct {                                    /*!< (@ 0x40001540) SPI2PCON Structure                                     */
  __IO uint32_t  CON;                               /*!< (@ 0x40001540) PORT select register                                   */
} SPI2PCON_Type;


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
  __IO uint32_t  CRC;                               /*!< (@ 0x40000120) Flash CRC16 check value                                */
  __I  uint32_t  RESERVED3[3];
  __IO uint32_t  CFG;                               /*!< (@ 0x40000130) Flash Memory Config Register                           */
  __IO uint32_t  WPROT;                             /*!< (@ 0x40000134) Write Protection Register                              */
  __I  uint32_t  RESERVED4;
  __IO uint32_t  LOCK;                              /*!< (@ 0x4000013C) Flash LOCK register                                    */
} FMC_Type;


/* ================================================================================ */
/* ================                      DMAC0                     ================ */
/* ================================================================================ */


/**
  * @brief FLASH MEMORY CONTROLLER (DMA0)
  */
  

typedef struct {                                    /*!< (@ 0x40000400) DMAC0 Structure                                        */
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
  __IO uint32_t  RDR_TDR;                           /*!< SPI n Receive Data Register   */
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
/* ================                       DAC                      ================ */
/* ================================================================================ */


/**
  * @brief 5-BIT D/A CONVERTER (DAC)
  */

typedef struct {                                    /*!< (@ 0x40003450) DAC Structure                                          */
  __IO uint32_t  CR;                                /*!< (@ 0x40003450) D/A Converter Control Register                         */
  __IO  uint32_t  DR;                                /*!< (@ 0x40003454) D/A Converter Buffer Register                          */
  __IO uint32_t  DACEN;                             /*!< (@ 0x40003458) D/A Converter Control TEST Register                    */
} DAC_Type;


/* ================================================================================ */
/* ================                      TOUCH                     ================ */
/* ================================================================================ */


/**
  * @brief TOUCH (TOUCH)
  */

typedef struct {                                    /*!< (@ 0x40003600) TOUCH Structure                                        */
  __I  uint32_t  SUM_CH0;                           /*!< (@ 0x40003600) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH1;                           /*!< (@ 0x40003604) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH2;                           /*!< (@ 0x40003608) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH3;                           /*!< (@ 0x4000360C) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH4;                           /*!< (@ 0x40003610) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH5;                           /*!< (@ 0x40003614) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH6;                           /*!< (@ 0x40003618) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH7;                           /*!< (@ 0x4000361C) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH8;                           /*!< (@ 0x40003620) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH9;                           /*!< (@ 0x40003624) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH10;                          /*!< (@ 0x40003628) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH11;                          /*!< (@ 0x4000362C) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH12;                          /*!< (@ 0x40003630) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH13;                          /*!< (@ 0x40003634) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH14;                          /*!< (@ 0x40003638) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH15;                          /*!< (@ 0x4000363C) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH16;                          /*!< (@ 0x40003640) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH17;                          /*!< (@ 0x40003644) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH18;                          /*!< (@ 0x40003648) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH19;                          /*!< (@ 0x4000364C) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH20;                          /*!< (@ 0x40003650) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH21;                          /*!< (@ 0x40003654) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH22;                          /*!< (@ 0x40003658) Touch Sensor Channel 0~23 Sum Register                 */
  __I  uint32_t  SUM_CH23;                          /*!< (@ 0x4000365C) Touch Sensor Channel 0~23 Sum Register                 */
  __IO uint32_t  SCO0;                              /*!< (@ 0x40003660) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO1;                              /*!< (@ 0x40003664) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO2;                              /*!< (@ 0x40003668) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO3;                              /*!< (@ 0x4000366C) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO4;                              /*!< (@ 0x40003670) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO5;                              /*!< (@ 0x40003674) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO6;                              /*!< (@ 0x40003678) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO7;                              /*!< (@ 0x4000367C) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO8;                              /*!< (@ 0x40003680) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO9;                              /*!< (@ 0x40003684) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO10;                             /*!< (@ 0x40003688) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO11;                             /*!< (@ 0x4000368C) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO12;                             /*!< (@ 0x40003690) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO13;                             /*!< (@ 0x40003694) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO14;                             /*!< (@ 0x40003698) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO15;                             /*!< (@ 0x4000369C) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO16;                             /*!< (@ 0x400036A0) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO17;                             /*!< (@ 0x400036A4) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO18;                             /*!< (@ 0x400036A8) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO19;                             /*!< (@ 0x400036AC) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO20;                             /*!< (@ 0x400036B0) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO21;                             /*!< (@ 0x400036B4) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO22;                             /*!< (@ 0x400036B8) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __IO uint32_t  SCO23;                             /*!< (@ 0x400036BC) Touch Sensor Offset Capacitor Selection Register
                                                         for CH0~23                                                            */
  __I  uint32_t  RESERVED[16];
  __IO uint32_t  CON;                               /*!< (@ 0x40003700) Touch Sensor Control Register                          */
  __IO uint32_t  MODE;                              /*!< (@ 0x40003704) Touch Sensor Mode Register                             */
  __IO uint32_t  SUM_CNT;                           /*!< (@ 0x40003708) Touch Sensor Sum Repeat Count Register                 */
  __IO uint32_t  CH_SEL;                            /*!< (@ 0x4000370C) Touch Sensor Channel Selection Register                */
  __I  uint32_t  RESERVED1;
  __IO uint32_t  SLP_CR;                            /*!< (@ 0x40003714) Touch Sensor Low Pass Filter Control Register          */
  __IO uint32_t  ADC_CH_SEL;                        /*!< (@ 0x40003718) ADC Channel Selection Register                         */
  __IO uint32_t  INTEG_CNT;                         /*!< (@ 0x4000371C) Touch Sensor Sensing Integration Count Register        */
  __IO uint32_t  FREQ_NUM;                          /*!< (@ 0x40003720) Touch Sensor Frequency Number Register                 */
  __IO uint32_t  FREQ_DEL;                          /*!< (@ 0x40003724) Touch Sensor Frequency Delta Register                  */
  __IO uint32_t  CLK_CFG;                           /*!< (@ 0x40003728) Touch Sensor Clock Configuration Register              */
  __IO uint32_t  TRIM_OSC;                          /*!< (@ 0x4000372C) Touch Sensor RING Oscillator Trimming Selection
                                                         Register                                                              */
  __IO uint32_t  TRIM_A_OSC;                        /*!< (@ 0x40003730) Touch Sensor RING Oscillator Trimming for ADC
                                                         Register                                                              */
  __IO uint32_t  SCI;                               /*!< (@ 0x40003734) Touch Sensor Input Capacitor Selection Register        */
  __IO uint32_t  SCC;                               /*!< (@ 0x40003738) Touch Sensor Conversion Capacitor Selection Register   */
  __IO uint32_t  SVREF;                             /*!< (@ 0x4000373C) Touch Sensor VREF Resistor Selection Register          */
  __IO uint32_t  TAR;                               /*!< (@ 0x40003740) Touch Sensor Integration AMP Reset Register            */
  __IO uint32_t  TRST;                              /*!< (@ 0x40003744) Touch Sensor Reset time of Sensing Register            */
  __IO uint32_t  TDRV;                              /*!< (@ 0x40003748) Touch Sensor Sample time of Sensing Register           */
  __IO uint32_t  TINT;                              /*!< (@ 0x4000374C) Touch Sensor Integration time of Sensing Register      */
  __IO uint32_t  TD;                                /*!< (@ 0x40003750) Touch Sensor Differential AMP Sampling Register        */
  __IO uint32_t  TWR;                               /*!< (@ 0x40003754) Touch Sensor Wait time Register                        */
  __IO uint32_t  TLED;                              /*!< (@ 0x40003758) LED stable time Register                               */
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
  __IO uint32_t  COMER;                             /*!< (@ 0x4000600C) COM EnableRegister                                     */
  __IO uint32_t  COMPWID;                           /*!< (@ 0x40006010) COM Pulse Width Control Register                       */
  __IO uint32_t  DIMM1;                             /*!< (@ 0x40006014) COM Dimming Control Register1                          */
  __IO uint32_t  DIMM2;                             /*!< (@ 0x40006018) COM Dimming Control Register2                          */
  __IO uint32_t  DIMM3;                             /*!< (@ 0x4000601C) COM Dimming Control Register3                          */
  __IO uint32_t  DIMM4;                             /*!< (@ 0x40006020) COM Dimming Control Register4                          */
  __I  uint32_t  RESERVED[3];
  __IO uint32_t  STPD;                              /*!< (@ 0x40006030) LED STOP Duration Register                             */
  __IO uint32_t  SR;                                /*!< (@ 0x40006034) LED STATUS Register                                    */
  __IO uint32_t  CON2;                              /*!< (@ 0x40006038) LED Control Register2                                  */
  __IO uint32_t  CON1;                              /*!< (@ 0x4000603C) LED Control Register1                                  */
} LED_Type;


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
/* ================          struct 'SCU' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  SCU_SMR  ---------------------------------- */
#define SCU_SMR_PREVMODE_Pos                  4                                                       /*!< SCU SMR: PREVMODE Position              */
#define SCU_SMR_PREVMODE_Msk                  (0x03UL << SCU_SMR_PREVMODE_Pos)                        /*!< SCU SMR: PREVMODE Mask                  */
#define SCU_SMR_VDCAON_Pos                    8                                                       /*!< SCU SMR: VDCAON Position                */
#define SCU_SMR_VDCAON_Msk                    (0x01UL << SCU_SMR_VDCAON_Pos)                          /*!< SCU SMR: VDCAON Mask                    */
#define SCU_SMR_BGRAON_Pos                    9                                                       /*!< SCU SMR: BGRAON Position                */
#define SCU_SMR_BGRAON_Msk                    (0x01UL << SCU_SMR_BGRAON_Pos)                          /*!< SCU SMR: BGRAON Mask                    */
#define SCU_SMR_ROSCAON_Pos                   10                                                      /*!< SCU SMR: ROSCAON Position               */
#define SCU_SMR_ROSCAON_Msk                   (0x01UL << SCU_SMR_ROSCAON_Pos)                         /*!< SCU SMR: ROSCAON Mask                   */

/* -----------------------------------  SCU_SCR  ---------------------------------- */
#define SCU_SCR_SWRST_Pos                     0                                                       /*!< SCU SCR: SWRST Position                 */
#define SCU_SCR_SWRST_Msk                     (0x01UL << SCU_SCR_SWRST_Pos)                           /*!< SCU SCR: SWRST Mask                     */
#define SCU_SCR_WTIDKY_Pos                    16                                                      /*!< SCU SCR: WTIDKY Position                */
#define SCU_SCR_WTIDKY_Msk                    (0x0000ffffUL << SCU_SCR_WTIDKY_Pos)                    /*!< SCU SCR: WTIDKY Mask                    */

/* ----------------------------------  SCU_WUER  ---------------------------------- */
#define SCU_WUER_LVDWUE_Pos                   0                                                       /*!< SCU WUER: LVDWUE Position               */
#define SCU_WUER_LVDWUE_Msk                   (0x01UL << SCU_WUER_LVDWUE_Pos)                         /*!< SCU WUER: LVDWUE Mask                   */
#define SCU_WUER_WDTWUE_Pos                   1                                                       /*!< SCU WUER: WDTWUE Position               */
#define SCU_WUER_WDTWUE_Msk                   (0x01UL << SCU_WUER_WDTWUE_Pos)                         /*!< SCU WUER: WDTWUE Mask                   */
#define SCU_WUER_WTWUE_Pos                    2                                                       /*!< SCU WUER: WTWUE Position                */
#define SCU_WUER_WTWUE_Msk                    (0x01UL << SCU_WUER_WTWUE_Pos)                          /*!< SCU WUER: WTWUE Mask                    */
#define SCU_WUER_GPIOAWUE_Pos                 8                                                       /*!< SCU WUER: GPIOAWUE Position             */
#define SCU_WUER_GPIOAWUE_Msk                 (0x01UL << SCU_WUER_GPIOAWUE_Pos)                       /*!< SCU WUER: GPIOAWUE Mask                 */
#define SCU_WUER_GPIOBWUE_Pos                 9                                                       /*!< SCU WUER: GPIOBWUE Position             */
#define SCU_WUER_GPIOBWUE_Msk                 (0x01UL << SCU_WUER_GPIOBWUE_Pos)                       /*!< SCU WUER: GPIOBWUE Mask                 */
#define SCU_WUER_GPIOCWUE_Pos                 10                                                      /*!< SCU WUER: GPIOCWUE Position             */
#define SCU_WUER_GPIOCWUE_Msk                 (0x01UL << SCU_WUER_GPIOCWUE_Pos)                       /*!< SCU WUER: GPIOCWUE Mask                 */
#define SCU_WUER_GPIODWUE_Pos                 11                                                      /*!< SCU WUER: GPIODWUE Position             */
#define SCU_WUER_GPIODWUE_Msk                 (0x01UL << SCU_WUER_GPIODWUE_Pos)                       /*!< SCU WUER: GPIODWUE Mask                 */
#define SCU_WUER_GPIOEWUE_Pos                 12                                                      /*!< SCU WUER: GPIOEWUE Position             */
#define SCU_WUER_GPIOEWUE_Msk                 (0x01UL << SCU_WUER_GPIOEWUE_Pos)                       /*!< SCU WUER: GPIOEWUE Mask                 */
#define SCU_WUER_GPIOFWUE_Pos                 13                                                      /*!< SCU WUER: GPIOFWUE Position             */
#define SCU_WUER_GPIOFWUE_Msk                 (0x01UL << SCU_WUER_GPIOFWUE_Pos)                       /*!< SCU WUER: GPIOFWUE Mask                 */

/* ----------------------------------  SCU_WUSR  ---------------------------------- */
#define SCU_WUSR_LVDWU_Pos                    0                                                       /*!< SCU WUSR: LVDWU Position                */
#define SCU_WUSR_LVDWU_Msk                    (0x01UL << SCU_WUSR_LVDWU_Pos)                          /*!< SCU WUSR: LVDWU Mask                    */
#define SCU_WUSR_WDTWU_Pos                    1                                                       /*!< SCU WUSR: WDTWU Position                */
#define SCU_WUSR_WDTWU_Msk                    (0x01UL << SCU_WUSR_WDTWU_Pos)                          /*!< SCU WUSR: WDTWU Mask                    */
#define SCU_WUSR_WTWU_Pos                     2                                                       /*!< SCU WUSR: WTWU Position                 */
#define SCU_WUSR_WTWU_Msk                     (0x01UL << SCU_WUSR_WTWU_Pos)                           /*!< SCU WUSR: WTWU Mask                     */
#define SCU_WUSR_GPIOAWU_Pos                  8                                                       /*!< SCU WUSR: GPIOAWU Position              */
#define SCU_WUSR_GPIOAWU_Msk                  (0x01UL << SCU_WUSR_GPIOAWU_Pos)                        /*!< SCU WUSR: GPIOAWU Mask                  */
#define SCU_WUSR_GPIOBWU_Pos                  9                                                       /*!< SCU WUSR: GPIOBWU Position              */
#define SCU_WUSR_GPIOBWU_Msk                  (0x01UL << SCU_WUSR_GPIOBWU_Pos)                        /*!< SCU WUSR: GPIOBWU Mask                  */
#define SCU_WUSR_GPIOCWU_Pos                  10                                                      /*!< SCU WUSR: GPIOCWU Position              */
#define SCU_WUSR_GPIOCWU_Msk                  (0x01UL << SCU_WUSR_GPIOCWU_Pos)                        /*!< SCU WUSR: GPIOCWU Mask                  */
#define SCU_WUSR_GPIODWU_Pos                  11                                                      /*!< SCU WUSR: GPIODWU Position              */
#define SCU_WUSR_GPIODWU_Msk                  (0x01UL << SCU_WUSR_GPIODWU_Pos)                        /*!< SCU WUSR: GPIODWU Mask                  */
#define SCU_WUSR_GPIOEWU_Pos                  12                                                      /*!< SCU WUSR: GPIOEWU Position              */
#define SCU_WUSR_GPIOEWU_Msk                  (0x01UL << SCU_WUSR_GPIOEWU_Pos)                        /*!< SCU WUSR: GPIOEWU Mask                  */
#define SCU_WUSR_GPIOFWU_Pos                  13                                                      /*!< SCU WUSR: GPIOFWU Position              */
#define SCU_WUSR_GPIOFWU_Msk                  (0x01UL << SCU_WUSR_GPIOFWU_Pos)                        /*!< SCU WUSR: GPIOFWU Mask                  */

/* ----------------------------------  SCU_RSER  ---------------------------------- */
#define SCU_RSER_LVDRST_Pos                   0                                                       /*!< SCU RSER: LVDRST Position               */
#define SCU_RSER_LVDRST_Msk                   (0x01UL << SCU_RSER_LVDRST_Pos)                         /*!< SCU RSER: LVDRST Mask                   */
#define SCU_RSER_MOFRST_Pos                   1                                                       /*!< SCU RSER: MOFRST Position               */
#define SCU_RSER_MOFRST_Msk                   (0x01UL << SCU_RSER_MOFRST_Pos)                         /*!< SCU RSER: MOFRST Mask                   */
#define SCU_RSER_MCKFRST_Pos                  2                                                       /*!< SCU RSER: MCKFRST Position              */
#define SCU_RSER_MCKFRST_Msk                  (0x01UL << SCU_RSER_MCKFRST_Pos)                        /*!< SCU RSER: MCKFRST Mask                  */
#define SCU_RSER_WDTRST_Pos                   3                                                       /*!< SCU RSER: WDTRST Position               */
#define SCU_RSER_WDTRST_Msk                   (0x01UL << SCU_RSER_WDTRST_Pos)                         /*!< SCU RSER: WDTRST Mask                   */
#define SCU_RSER_SWRST_Pos                    4                                                       /*!< SCU RSER: SWRST Position                */
#define SCU_RSER_SWRST_Msk                    (0x01UL << SCU_RSER_SWRST_Pos)                          /*!< SCU RSER: SWRST Mask                    */
#define SCU_RSER_CPURST_Pos                   5                                                       /*!< SCU RSER: CPURST Position               */
#define SCU_RSER_CPURST_Msk                   (0x01UL << SCU_RSER_CPURST_Pos)                         /*!< SCU RSER: CPURST Mask                   */
#define SCU_RSER_PINRST_Pos                   6                                                       /*!< SCU RSER: PINRST Position               */
#define SCU_RSER_PINRST_Msk                   (0x01UL << SCU_RSER_PINRST_Pos)                         /*!< SCU RSER: PINRST Mask                   */

/* ----------------------------------  SCU_RSSR  ---------------------------------- */
#define SCU_RSSR_LVDRST_Pos                   0                                                       /*!< SCU RSSR: LVDRST Position               */
#define SCU_RSSR_LVDRST_Msk                   (0x01UL << SCU_RSSR_LVDRST_Pos)                         /*!< SCU RSSR: LVDRST Mask                   */
#define SCU_RSSR_MOFRST_Pos                   1                                                       /*!< SCU RSSR: MOFRST Position               */
#define SCU_RSSR_MOFRST_Msk                   (0x01UL << SCU_RSSR_MOFRST_Pos)                         /*!< SCU RSSR: MOFRST Mask                   */
#define SCU_RSSR_MCKFRST_Pos                  2                                                       /*!< SCU RSSR: MCKFRST Position              */
#define SCU_RSSR_MCKFRST_Msk                  (0x01UL << SCU_RSSR_MCKFRST_Pos)                        /*!< SCU RSSR: MCKFRST Mask                  */
#define SCU_RSSR_WDTRST_Pos                   3                                                       /*!< SCU RSSR: WDTRST Position               */
#define SCU_RSSR_WDTRST_Msk                   (0x01UL << SCU_RSSR_WDTRST_Pos)                         /*!< SCU RSSR: WDTRST Mask                   */
#define SCU_RSSR_SWRST_Pos                    4                                                       /*!< SCU RSSR: SWRST Position                */
#define SCU_RSSR_SWRST_Msk                    (0x01UL << SCU_RSSR_SWRST_Pos)                          /*!< SCU RSSR: SWRST Mask                    */
#define SCU_RSSR_CPURST_Pos                   5                                                       /*!< SCU RSSR: CPURST Position               */
#define SCU_RSSR_CPURST_Msk                   (0x01UL << SCU_RSSR_CPURST_Pos)                         /*!< SCU RSSR: CPURST Mask                   */
#define SCU_RSSR_PINRST_Pos                   6                                                       /*!< SCU RSSR: PINRST Position               */
#define SCU_RSSR_PINRST_Msk                   (0x01UL << SCU_RSSR_PINRST_Pos)                         /*!< SCU RSSR: PINRST Mask                   */
#define SCU_RSSR_PORST_Pos                    7                                                       /*!< SCU RSSR: PORST Position                */
#define SCU_RSSR_PORST_Msk                    (0x01UL << SCU_RSSR_PORST_Pos)                          /*!< SCU RSSR: PORST Mask                    */

/* ----------------------------------  SCU_PRER1  --------------------------------- */
#define SCU_PRER1_SCU_Pos                     0                                                       /*!< SCU PRER1: SCU Position                 */
#define SCU_PRER1_SCU_Msk                     (0x01UL << SCU_PRER1_SCU_Pos)                           /*!< SCU PRER1: SCU Mask                     */
#define SCU_PRER1_FMC_Pos                     1                                                       /*!< SCU PRER1: FMC Position                 */
#define SCU_PRER1_FMC_Msk                     (0x01UL << SCU_PRER1_FMC_Pos)                           /*!< SCU PRER1: FMC Mask                     */
#define SCU_PRER1_WDT_Pos                     2                                                       /*!< SCU PRER1: WDT Position                 */
#define SCU_PRER1_WDT_Msk                     (0x01UL << SCU_PRER1_WDT_Pos)                           /*!< SCU PRER1: WDT Mask                     */
#define SCU_PRER1_PCU_Pos                     3                                                       /*!< SCU PRER1: PCU Position                 */
#define SCU_PRER1_PCU_Msk                     (0x01UL << SCU_PRER1_PCU_Pos)                           /*!< SCU PRER1: PCU Mask                     */
#define SCU_PRER1_DMA_Pos                     4                                                       /*!< SCU PRER1: DMA Position                 */
#define SCU_PRER1_DMA_Msk                     (0x01UL << SCU_PRER1_DMA_Pos)                           /*!< SCU PRER1: DMA Mask                     */
#define SCU_PRER1_GPIOA_Pos                   8                                                       /*!< SCU PRER1: GPIOA Position               */
#define SCU_PRER1_GPIOA_Msk                   (0x01UL << SCU_PRER1_GPIOA_Pos)                         /*!< SCU PRER1: GPIOA Mask                   */
#define SCU_PRER1_GPIOB_Pos                   9                                                       /*!< SCU PRER1: GPIOB Position               */
#define SCU_PRER1_GPIOB_Msk                   (0x01UL << SCU_PRER1_GPIOB_Pos)                         /*!< SCU PRER1: GPIOB Mask                   */
#define SCU_PRER1_GPIOC_Pos                   10                                                      /*!< SCU PRER1: GPIOC Position               */
#define SCU_PRER1_GPIOC_Msk                   (0x01UL << SCU_PRER1_GPIOC_Pos)                         /*!< SCU PRER1: GPIOC Mask                   */
#define SCU_PRER1_GPIOD_Pos                   11                                                      /*!< SCU PRER1: GPIOD Position               */
#define SCU_PRER1_GPIOD_Msk                   (0x01UL << SCU_PRER1_GPIOD_Pos)                         /*!< SCU PRER1: GPIOD Mask                   */
#define SCU_PRER1_GPIOE_Pos                   12                                                      /*!< SCU PRER1: GPIOE Position               */
#define SCU_PRER1_GPIOE_Msk                   (0x01UL << SCU_PRER1_GPIOE_Pos)                         /*!< SCU PRER1: GPIOE Mask                   */
#define SCU_PRER1_GPIOF_Pos                   13                                                      /*!< SCU PRER1: GPIOF Position               */
#define SCU_PRER1_GPIOF_Msk                   (0x01UL << SCU_PRER1_GPIOF_Pos)                         /*!< SCU PRER1: GPIOF Mask                   */
#define SCU_PRER1_TIMER10_Pos                 16                                                      /*!< SCU PRER1: TIMER10 Position             */
#define SCU_PRER1_TIMER10_Msk                 (0x01UL << SCU_PRER1_TIMER10_Pos)                       /*!< SCU PRER1: TIMER10 Mask                 */
#define SCU_PRER1_TIMER11_Pos                 17                                                      /*!< SCU PRER1: TIMER11 Position             */
#define SCU_PRER1_TIMER11_Msk                 (0x01UL << SCU_PRER1_TIMER11_Pos)                       /*!< SCU PRER1: TIMER11 Mask                 */
#define SCU_PRER1_TIMER12_Pos                 18                                                      /*!< SCU PRER1: TIMER12 Position             */
#define SCU_PRER1_TIMER12_Msk                 (0x01UL << SCU_PRER1_TIMER12_Pos)                       /*!< SCU PRER1: TIMER12 Mask                 */
#define SCU_PRER1_TIMER13_Pos                 19                                                      /*!< SCU PRER1: TIMER13 Position             */
#define SCU_PRER1_TIMER13_Msk                 (0x01UL << SCU_PRER1_TIMER13_Pos)                       /*!< SCU PRER1: TIMER13 Mask                 */

#define SCU_PRER1_TIMER30_Pos                 24                                                      /*!< SCU PRER1: TIMER30 Position             */
#define SCU_PRER1_TIMER30_Msk                 (0x01UL << SCU_PRER1_TIMER30_Pos)                       /*!< SCU PRER1: TIMER30 Mask                 */
#define SCU_PRER1_TIMER20_Pos                 25                                                      /*!< SCU PRER1: TIMER20 Position             */
#define SCU_PRER1_TIMER20_Msk                 (0x01UL << SCU_PRER1_TIMER20_Pos)                       /*!< SCU PRER1: TIMER20 Mask                 */
#define SCU_PRER1_TIMER21_Pos                 26                                                      /*!< SCU PRER1: TIMER21 Position             */
#define SCU_PRER1_TIMER21_Msk                 (0x01UL << SCU_PRER1_TIMER21_Pos)                       /*!< SCU PRER1: TIMER21 Mask                 */
#define SCU_PRER1_WT_Pos                      31                                                      /*!< SCU PRER1: WT Position                  */
#define SCU_PRER1_WT_Msk                      (0x01UL << SCU_PRER1_WT_Pos)                            /*!< SCU PRER1: WT Mask                      */

/* ----------------------------------  SCU_PRER2  --------------------------------- */
#define SCU_PRER2_I2C0_Pos                    4                                                       /*!< SCU PRER2: I2C0 Position                */
#define SCU_PRER2_I2C0_Msk                    (0x01UL << SCU_PRER2_I2C0_Pos)                          /*!< SCU PRER2: I2C0 Mask                    */
#define SCU_PRER2_I2C1_Pos                    5                                                       /*!< SCU PRER2: I2C1 Position                */
#define SCU_PRER2_I2C1_Msk                    (0x01UL << SCU_PRER2_I2C1_Pos)                          /*!< SCU PRER2: I2C1 Mask                    */

#define SCU_PRER2_USART10_Pos                 8                                                       /*!< SCU PRER2: USART10 Position             */
#define SCU_PRER2_USART10_Msk                 (0x01UL << SCU_PRER2_USART10_Pos)                       /*!< SCU PRER2: USART10 Mask                 */
#define SCU_PRER2_USART11_Pos                 9                                                       /*!< SCU PRER2: USART11 Position             */
#define SCU_PRER2_USART11_Msk                 (0x01UL << SCU_PRER2_USART11_Pos)                       /*!< SCU PRER2: USART11 Mask                 */
#define SCU_PRER2_SPI20_Pos                   10                                                      /*!< SCU PRER2: SPI20 Position               */
#define SCU_PRER2_SPI20_Msk                   (0x01UL << SCU_PRER2_SPI20_Pos)                         /*!< SCU PRER2: SPI20 Mask                   */
#define SCU_PRER2_SPI21_Pos                   11                                                      /*!< SCU PRER2: SPI21 Position               */
#define SCU_PRER2_SPI21_Msk                   (0x01UL << SCU_PRER2_SPI21_Pos)                         /*!< SCU PRER2: SPI21 Mask                   */
#define SCU_PRER2_UART0_Pos                   12                                                      /*!< SCU PRER2: UART0 Position               */
#define SCU_PRER2_UART0_Msk                   (0x01UL << SCU_PRER2_UART0_Pos)                         /*!< SCU PRER2: UART0 Mask                   */
#define SCU_PRER2_UART1_Pos                   13                                                      /*!< SCU PRER2: UART1 Position               */
#define SCU_PRER2_UART1_Msk                   (0x01UL << SCU_PRER2_UART1_Pos)                         /*!< SCU PRER2: UART1 Mask                   */

#define SCU_PRER2_ADC_Pos                     20                                                      /*!< SCU PRER2: ADC Position                 */
#define SCU_PRER2_ADC_Msk                     (0x01UL << SCU_PRER2_ADC_Pos)                           /*!< SCU PRER2: ADC Mask                     */

#define SCU_PRER2_TOUCH_Pos                   25                                                      /*!< SCU PRER2: TOUCH Position               */
#define SCU_PRER2_TOUCH_Msk                   (0x01UL << SCU_PRER2_TOUCH_Pos)                         /*!< SCU PRER2: TOUCH Mask                   */

#define SCU_PRER2_LED_Pos                     29                                                      /*!< SCU PRER2: LED Position                 */
#define SCU_PRER2_LED_Msk                     (0x01UL << SCU_PRER2_LED_Pos)                           /*!< SCU PRER2: LED Mask                     */
#define SCU_PRER2_CRC_Pos                     31                                                      /*!< SCU PRER2: CRC Position                 */
#define SCU_PRER2_CRC_Msk                     (0x01UL << SCU_PRER2_CRC_Pos)                           /*!< SCU PRER2: CRC Mask                     */

/* ----------------------------------  SCU_PER1  ---------------------------------- */
#define SCU_PER1_DMA_Pos                      4                                                       /*!< SCU PER1: DMA Position                  */
#define SCU_PER1_DMA_Msk                      (0x01UL << SCU_PER1_DMA_Pos)                            /*!< SCU PER1: DMA Mask                      */
#define SCU_PER1_GPIOA_Pos                    8                                                       /*!< SCU PER1: GPIOA Position                */
#define SCU_PER1_GPIOA_Msk                    (0x01UL << SCU_PER1_GPIOA_Pos)                          /*!< SCU PER1: GPIOA Mask                    */
#define SCU_PER1_GPIOB_Pos                    9                                                       /*!< SCU PER1: GPIOB Position                */
#define SCU_PER1_GPIOB_Msk                    (0x01UL << SCU_PER1_GPIOB_Pos)                          /*!< SCU PER1: GPIOB Mask                    */
#define SCU_PER1_GPIOC_Pos                    10                                                      /*!< SCU PER1: GPIOC Position                */
#define SCU_PER1_GPIOC_Msk                    (0x01UL << SCU_PER1_GPIOC_Pos)                          /*!< SCU PER1: GPIOC Mask                    */
#define SCU_PER1_GPIOD_Pos                    11                                                      /*!< SCU PER1: GPIOD Position                */
#define SCU_PER1_GPIOD_Msk                    (0x01UL << SCU_PER1_GPIOD_Pos)                          /*!< SCU PER1: GPIOD Mask                    */
#define SCU_PER1_GPIOE_Pos                    12                                                      /*!< SCU PER1: GPIOE Position                */
#define SCU_PER1_GPIOE_Msk                    (0x01UL << SCU_PER1_GPIOE_Pos)                          /*!< SCU PER1: GPIOE Mask                    */
#define SCU_PER1_GPIOF_Pos                    13                                                      /*!< SCU PER1: GPIOF Position                */
#define SCU_PER1_GPIOF_Msk                    (0x01UL << SCU_PER1_GPIOF_Pos)                          /*!< SCU PER1: GPIOF Mask                    */
#define SCU_PER1_TIMER10_Pos                  16                                                      /*!< SCU PER1: TIMER10 Position              */
#define SCU_PER1_TIMER10_Msk                  (0x01UL << SCU_PER1_TIMER10_Pos)                        /*!< SCU PER1: TIMER10 Mask                  */
#define SCU_PER1_TIMER11_Pos                  17                                                      /*!< SCU PER1: TIMER11 Position              */
#define SCU_PER1_TIMER11_Msk                  (0x01UL << SCU_PER1_TIMER11_Pos)                        /*!< SCU PER1: TIMER11 Mask                  */
#define SCU_PER1_TIMER12_Pos                  18                                                      /*!< SCU PER1: TIMER12 Position              */
#define SCU_PER1_TIMER12_Msk                  (0x01UL << SCU_PER1_TIMER12_Pos)                        /*!< SCU PER1: TIMER12 Mask                  */
#define SCU_PER1_TIMER13_Pos                  19                                                      /*!< SCU PER1: TIMER13 Position              */
#define SCU_PER1_TIMER13_Msk                  (0x01UL << SCU_PER1_TIMER13_Pos)                        /*!< SCU PER1: TIMER13 Mask                  */

#define SCU_PER1_TIMER30_Pos                  24                                                      /*!< SCU PER1: TIMER30 Position              */
#define SCU_PER1_TIMER30_Msk                  (0x01UL << SCU_PER1_TIMER30_Pos)                        /*!< SCU PER1: TIMER30 Mask                  */
#define SCU_PER1_TIMER20_Pos                  25                                                      /*!< SCU PER1: TIMER20 Position              */
#define SCU_PER1_TIMER20_Msk                  (0x01UL << SCU_PER1_TIMER20_Pos)                        /*!< SCU PER1: TIMER20 Mask                  */
#define SCU_PER1_TIMER21_Pos                  26                                                      /*!< SCU PER1: TIMER21 Position              */
#define SCU_PER1_TIMER21_Msk                  (0x01UL << SCU_PER1_TIMER21_Pos)                        /*!< SCU PER1: TIMER21 Mask                  */
#define SCU_PER1_WT_Pos                       31                                                      /*!< SCU PER1: WT Position                   */
#define SCU_PER1_WT_Msk                       (0x01UL << SCU_PER1_WT_Pos)                             /*!< SCU PER1: WT Mask                       */

/* ----------------------------------  SCU_PER2  ---------------------------------- */
#define SCU_PER2_I2C0_Pos                     4                                                       /*!< SCU PER2: I2C0 Position                 */
#define SCU_PER2_I2C0_Msk                     (0x01UL << SCU_PER2_I2C0_Pos)                           /*!< SCU PER2: I2C0 Mask                     */
#define SCU_PER2_I2C1_Pos                     5                                                       /*!< SCU PER2: I2C1 Position                 */
#define SCU_PER2_I2C1_Msk                     (0x01UL << SCU_PER2_I2C1_Pos)                           /*!< SCU PER2: I2C1 Mask                     */

#define SCU_PER2_USART10_Pos                  8                                                       /*!< SCU PER2: USART10 Position              */
#define SCU_PER2_USART10_Msk                  (0x01UL << SCU_PER2_USART10_Pos)                        /*!< SCU PER2: USART10 Mask                  */
#define SCU_PER2_USART11_Pos                  9                                                       /*!< SCU PER2: USART11 Position              */
#define SCU_PER2_USART11_Msk                  (0x01UL << SCU_PER2_USART11_Pos)                        /*!< SCU PER2: USART11 Mask                  */
#define SCU_PER2_SPI20_Pos                    10                                                      /*!< SCU PER2: SPI20 Position                */
#define SCU_PER2_SPI20_Msk                    (0x01UL << SCU_PER2_SPI20_Pos)                          /*!< SCU PER2: SPI20 Mask                    */
#define SCU_PER2_SPI21_Pos                    11                                                      /*!< SCU PER2: SPI21 Position                */
#define SCU_PER2_SPI21_Msk                    (0x01UL << SCU_PER2_SPI21_Pos)                          /*!< SCU PER2: SPI21 Mask                    */
#define SCU_PER2_UART0_Pos                    12                                                      /*!< SCU PER2: UART0 Position                */
#define SCU_PER2_UART0_Msk                    (0x01UL << SCU_PER2_UART0_Pos)                          /*!< SCU PER2: UART0 Mask                    */
#define SCU_PER2_UART1_Pos                    13                                                      /*!< SCU PER2: UART1 Position                */
#define SCU_PER2_UART1_Msk                    (0x01UL << SCU_PER2_UART1_Pos)                          /*!< SCU PER2: UART1 Mask                    */

#define SCU_PER2_ADC_Pos                      20                                                      /*!< SCU PER2: ADC Position                  */
#define SCU_PER2_ADC_Msk                      (0x01UL << SCU_PER2_ADC_Pos)                            /*!< SCU PER2: ADC Mask                      */

#define SCU_PER2_TOUCH_Pos                    25                                                      /*!< SCU PER2: TOUCH Position                */
#define SCU_PER2_TOUCH_Msk                    (0x01UL << SCU_PER2_TOUCH_Pos)                          /*!< SCU PER2: TOUCH Mask                    */

#define SCU_PER2_LED_Pos                      29                                                      /*!< SCU PER2: LED Position                  */
#define SCU_PER2_LED_Msk                      (0x01UL << SCU_PER2_LED_Pos)                            /*!< SCU PER2: LED Mask                      */
#define SCU_PER2_CRC_Pos                      31                                                      /*!< SCU PER2: CRC Position                  */
#define SCU_PER2_CRC_Msk                      (0x01UL << SCU_PER2_CRC_Pos)                            /*!< SCU PER2: CRC Mask                      */

/* ----------------------------------  SCU_PCER1  --------------------------------- */
#define SCU_PCER1_DMA_Pos                     4                                                       /*!< SCU PCER1: DMA Position                 */
#define SCU_PCER1_DMA_Msk                     (0x01UL << SCU_PCER1_DMA_Pos)                           /*!< SCU PCER1: DMA Mask                     */
#define SCU_PCER1_GPIOA_Pos                   8                                                       /*!< SCU PCER1: GPIOA Position               */
#define SCU_PCER1_GPIOA_Msk                   (0x01UL << SCU_PCER1_GPIOA_Pos)                         /*!< SCU PCER1: GPIOA Mask                   */
#define SCU_PCER1_GPIOB_Pos                   9                                                       /*!< SCU PCER1: GPIOB Position               */
#define SCU_PCER1_GPIOB_Msk                   (0x01UL << SCU_PCER1_GPIOB_Pos)                         /*!< SCU PCER1: GPIOB Mask                   */
#define SCU_PCER1_GPIOC_Pos                   10                                                      /*!< SCU PCER1: GPIOC Position               */
#define SCU_PCER1_GPIOC_Msk                   (0x01UL << SCU_PCER1_GPIOC_Pos)                         /*!< SCU PCER1: GPIOC Mask                   */
#define SCU_PCER1_GPIOD_Pos                   11                                                      /*!< SCU PCER1: GPIOD Position               */
#define SCU_PCER1_GPIOD_Msk                   (0x01UL << SCU_PCER1_GPIOD_Pos)                         /*!< SCU PCER1: GPIOD Mask                   */
#define SCU_PCER1_GPIOE_Pos                   12                                                      /*!< SCU PCER1: GPIOE Position               */
#define SCU_PCER1_GPIOE_Msk                   (0x01UL << SCU_PCER1_GPIOE_Pos)                         /*!< SCU PCER1: GPIOE Mask                   */
#define SCU_PCER1_GPIOF_Pos                   13                                                      /*!< SCU PCER1: GPIOF Position               */
#define SCU_PCER1_GPIOF_Msk                   (0x01UL << SCU_PCER1_GPIOF_Pos)                         /*!< SCU PCER1: GPIOF Mask                   */
#define SCU_PCER1_TIMER10_Pos                 16                                                      /*!< SCU PCER1: TIMER10 Position             */
#define SCU_PCER1_TIMER10_Msk                 (0x01UL << SCU_PCER1_TIMER10_Pos)                       /*!< SCU PCER1: TIMER10 Mask                 */
#define SCU_PCER1_TIMER11_Pos                 17                                                      /*!< SCU PCER1: TIMER11 Position             */
#define SCU_PCER1_TIMER11_Msk                 (0x01UL << SCU_PCER1_TIMER11_Pos)                       /*!< SCU PCER1: TIMER11 Mask                 */
#define SCU_PCER1_TIMER12_Pos                 18                                                      /*!< SCU PCER1: TIMER12 Position             */
#define SCU_PCER1_TIMER12_Msk                 (0x01UL << SCU_PCER1_TIMER12_Pos)                       /*!< SCU PCER1: TIMER12 Mask                 */
#define SCU_PCER1_TIMER13_Pos                 19                                                      /*!< SCU PCER1: TIMER13 Position             */
#define SCU_PCER1_TIMER13_Msk                 (0x01UL << SCU_PCER1_TIMER13_Pos)                       /*!< SCU PCER1: TIMER13 Mask                 */
#define SCU_PCER1_TIMER14_Pos                 20                                                      /*!< SCU PCER1: TIMER14 Position             */
#define SCU_PCER1_TIMER14_Msk                 (0x01UL << SCU_PCER1_TIMER14_Pos)                       /*!< SCU PCER1: TIMER14 Mask                 */

#define SCU_PCER1_TIMER30_Pos                 24                                                      /*!< SCU PCER1: TIMER30 Position             */
#define SCU_PCER1_TIMER30_Msk                 (0x01UL << SCU_PCER1_TIMER30_Pos)                       /*!< SCU PCER1: TIMER30 Mask                 */
#define SCU_PCER1_TIMER20_Pos                 25                                                      /*!< SCU PCER1: TIMER20 Position             */
#define SCU_PCER1_TIMER20_Msk                 (0x01UL << SCU_PCER1_TIMER20_Pos)                       /*!< SCU PCER1: TIMER20 Mask                 */
#define SCU_PCER1_TIMER21_Pos                 26                                                      /*!< SCU PCER1: TIMER21 Position             */
#define SCU_PCER1_TIMER21_Msk                 (0x01UL << SCU_PCER1_TIMER21_Pos)                       /*!< SCU PCER1: TIMER21 Mask                 */
#define SCU_PCER1_WT_Pos                      31                                                      /*!< SCU PCER1: WT Position                  */
#define SCU_PCER1_WT_Msk                      (0x01UL << SCU_PCER1_WT_Pos)                            /*!< SCU PCER1: WT Mask                      */

/* ----------------------------------  SCU_PCER2  --------------------------------- */
#define SCU_PCER2_I2C0_Pos                    4                                                       /*!< SCU PCER2: I2C0 Position                */
#define SCU_PCER2_I2C0_Msk                    (0x01UL << SCU_PCER2_I2C0_Pos)                          /*!< SCU PCER2: I2C0 Mask                    */
#define SCU_PCER2_I2C1_Pos                    5                                                       /*!< SCU PCER2: I2C1 Position                */
#define SCU_PCER2_I2C1_Msk                    (0x01UL << SCU_PCER2_I2C1_Pos)                          /*!< SCU PCER2: I2C1 Mask                    */

#define SCU_PCER2_USART10_Pos                 8                                                       /*!< SCU PCER2: USART10 Position             */
#define SCU_PCER2_USART10_Msk                 (0x01UL << SCU_PCER2_USART10_Pos)                       /*!< SCU PCER2: USART10 Mask                 */
#define SCU_PCER2_USART11_Pos                 9                                                       /*!< SCU PCER2: USART11 Position             */
#define SCU_PCER2_USART11_Msk                 (0x01UL << SCU_PCER2_USART11_Pos)                       /*!< SCU PCER2: USART11 Mask                 */
#define SCU_PCER2_SPI20_Pos                   10                                                      /*!< SCU PCER2: SPI20 Position               */
#define SCU_PCER2_SPI20_Msk                   (0x01UL << SCU_PCER2_SPI20_Pos)                         /*!< SCU PCER2: SPI20 Mask                   */
#define SCU_PCER2_SPI21_Pos                   11                                                      /*!< SCU PCER2: SPI21 Position               */
#define SCU_PCER2_SPI21_Msk                   (0x01UL << SCU_PCER2_SPI21_Pos)                         /*!< SCU PCER2: SPI21 Mask                   */
#define SCU_PCER2_UART0_Pos                   12                                                      /*!< SCU PCER2: UART0 Position               */
#define SCU_PCER2_UART0_Msk                   (0x01UL << SCU_PCER2_UART0_Pos)                         /*!< SCU PCER2: UART0 Mask                   */
#define SCU_PCER2_UART1_Pos                   13                                                      /*!< SCU PCER2: UART1 Position               */
#define SCU_PCER2_UART1_Msk                   (0x01UL << SCU_PCER2_UART1_Pos)                         /*!< SCU PCER2: UART1 Mask                   */

#define SCU_PCER2_ADC_Pos                     20                                                      /*!< SCU PCER2: ADC Position                 */
#define SCU_PCER2_ADC_Msk                     (0x01UL << SCU_PCER2_ADC_Pos)                           /*!< SCU PCER2: ADC Mask                     */

#define SCU_PCER2_TOUCH_Pos                   25                                                      /*!< SCU PCER2: TOUCH Position               */
#define SCU_PCER2_TOUCH_Msk                   (0x01UL << SCU_PCER2_TOUCH_Pos)                         /*!< SCU PCER2: TOUCH Mask                   */

#define SCU_PCER2_LED_Pos                     29                                                      /*!< SCU PCER2: LED Position                 */
#define SCU_PCER2_LED_Msk                     (0x01UL << SCU_PCER2_LED_Pos)                           /*!< SCU PCER2: LED Mask                     */
#define SCU_PCER2_CRC_Pos                     31                                                      /*!< SCU PCER2: CRC Position                 */
#define SCU_PCER2_CRC_Msk                     (0x01UL << SCU_PCER2_CRC_Pos)                           /*!< SCU PCER2: CRC Mask                     */

/* ---------------------------------  SCU_PPCLKSR  -------------------------------- */
#define SCU_PPCLKSR_WDTCLK_Pos                0                                                       /*!< SCU PPCLKSR: WDTCLK Position            */
#define SCU_PPCLKSR_WDTCLK_Msk                (0x01UL << SCU_PPCLKSR_WDTCLK_Pos)                      /*!< SCU PPCLKSR: WDTCLK Mask                */
#define SCU_PPCLKSR_WTCLK_Pos                 3                                                       /*!< SCU PPCLKSR: WTCLK Position             */
#define SCU_PPCLKSR_WTCLK_Msk                 (0x03UL << SCU_PPCLKSR_WTCLK_Pos)                       /*!< SCU PPCLKSR: WTCLK Mask                 */

#define SCU_PPCLKSR_LEDCLK_Pos                10                                                      /*!< SCU PPCLKSR: LEDCLK Position            */
#define SCU_PPCLKSR_LEDCLK_Msk                (0x01UL << SCU_PPCLKSR_LEDCLK_Pos)                      /*!< SCU PPCLKSR: LEDCLK Mask                */
#define SCU_PPCLKSR_T30CLK_Pos                17                                                      /*!< SCU PPCLKSR: T30CLK Position            */
#define SCU_PPCLKSR_T30CLK_Msk                (0x01UL << SCU_PPCLKSR_T30CLK_Pos)                      /*!< SCU PPCLKSR: T30CLK Mask                */
#define SCU_PPCLKSR_T20CLK_Pos                20                                                      /*!< SCU PPCLKSR: T20CLK Position            */
#define SCU_PPCLKSR_T20CLK_Msk                (0x01UL << SCU_PPCLKSR_T20CLK_Pos)                      /*!< SCU PPCLKSR: T20CLK Mask                */
#define SCU_PPCLKSR_T1xCLK_Pos                22                                                      /*!< SCU PPCLKSR: T1xCLK Position            */
#define SCU_PPCLKSR_T1xCLK_Msk                (0x01UL << SCU_PPCLKSR_T1xCLK_Pos)                      /*!< SCU PPCLKSR: T1xCLK Mask                */

/* ----------------------------------  SCU_CSCR  ---------------------------------- */
#define SCU_CSCR_MOSCCON_Pos                  0                                                       /*!< SCU CSCR: MOSCCON Position              */
#define SCU_CSCR_MOSCCON_Msk                  (0x0fUL << SCU_CSCR_MOSCCON_Pos)                        /*!< SCU CSCR: MOSCCON Mask                  */
#define SCU_CSCR_HSICON_Pos                   4                                                       /*!< SCU CSCR: HSICON Position               */
#define SCU_CSCR_HSICON_Msk                   (0x0fUL << SCU_CSCR_HSICON_Pos)                         /*!< SCU CSCR: HSICON Mask                   */
#define SCU_CSCR_LSICON_Pos                   8                                                       /*!< SCU CSCR: LSICON Position               */
#define SCU_CSCR_LSICON_Msk                   (0x0fUL << SCU_CSCR_LSICON_Pos)                         /*!< SCU CSCR: LSICON Mask                   */
#define SCU_CSCR_SOSCCON_Pos                  12                                                      /*!< SCU CSCR: SOSCCON Position              */
#define SCU_CSCR_SOSCCON_Msk                  (0x0fUL << SCU_CSCR_SOSCCON_Pos)                        /*!< SCU CSCR: SOSCCON Mask                  */
#define SCU_CSCR_WTIDKY_Pos                   16                                                      /*!< SCU CSCR: WTIDKY Position               */
#define SCU_CSCR_WTIDKY_Msk                   (0x0000ffffUL << SCU_CSCR_WTIDKY_Pos)                   /*!< SCU CSCR: WTIDKY Mask                   */

/* ----------------------------------  SCU_SCCR  ---------------------------------- */
#define SCU_SCCR_MCLKSEL_Pos                  0                                                       /*!< SCU SCCR: MCLKSEL Position              */
#define SCU_SCCR_MCLKSEL_Msk                  (0x03UL << SCU_SCCR_MCLKSEL_Pos)                        /*!< SCU SCCR: MCLKSEL Mask                  */
#define SCU_SCCR_FINSEL_Pos                   2                                                       /*!< SCU SCCR: FINSEL Position               */
#define SCU_SCCR_FINSEL_Msk                   (0x01UL << SCU_SCCR_FINSEL_Pos)                         /*!< SCU SCCR: FINSEL Mask                   */
#define SCU_SCCR_WTIDKY_Pos                   16                                                      /*!< SCU SCCR: WTIDKY Position               */
#define SCU_SCCR_WTIDKY_Msk                   (0x0000ffffUL << SCU_SCCR_WTIDKY_Pos)                   /*!< SCU SCCR: WTIDKY Mask                   */

/* -----------------------------------  SCU_CMR  ---------------------------------- */
#define SCU_CMR_MOSCSTS_Pos                   0                                                       /*!< SCU CMR: MOSCSTS Position               */
#define SCU_CMR_MOSCSTS_Msk                   (0x01UL << SCU_CMR_MOSCSTS_Pos)                         /*!< SCU CMR: MOSCSTS Mask                   */
#define SCU_CMR_MOSCFAIL_Pos                  1                                                       /*!< SCU CMR: MOSCFAIL Position              */
#define SCU_CMR_MOSCFAIL_Msk                  (0x01UL << SCU_CMR_MOSCFAIL_Pos)                        /*!< SCU CMR: MOSCFAIL Mask                  */
#define SCU_CMR_MOSCIE_Pos                    2                                                       /*!< SCU CMR: MOSCIE Position                */
#define SCU_CMR_MOSCIE_Msk                    (0x01UL << SCU_CMR_MOSCIE_Pos)                          /*!< SCU CMR: MOSCIE Mask                    */
#define SCU_CMR_MOSCMNT_Pos                   3                                                       /*!< SCU CMR: MOSCMNT Position               */
#define SCU_CMR_MOSCMNT_Msk                   (0x01UL << SCU_CMR_MOSCMNT_Pos)                         /*!< SCU CMR: MOSCMNT Mask                   */
#define SCU_CMR_MCLKSTS_Pos                   4                                                       /*!< SCU CMR: MCLKSTS Position               */
#define SCU_CMR_MCLKSTS_Msk                   (0x01UL << SCU_CMR_MCLKSTS_Pos)                         /*!< SCU CMR: MCLKSTS Mask                   */
#define SCU_CMR_MCLKFAIL_Pos                  5                                                       /*!< SCU CMR: MCLKFAIL Position              */
#define SCU_CMR_MCLKFAIL_Msk                  (0x01UL << SCU_CMR_MCLKFAIL_Pos)                        /*!< SCU CMR: MCLKFAIL Mask                  */
#define SCU_CMR_MCLKIE_Pos                    6                                                       /*!< SCU CMR: MCLKIE Position                */
#define SCU_CMR_MCLKIE_Msk                    (0x01UL << SCU_CMR_MCLKIE_Pos)                          /*!< SCU CMR: MCLKIE Mask                    */
#define SCU_CMR_MCLKMNT_Pos                   7                                                       /*!< SCU CMR: MCLKMNT Position               */
#define SCU_CMR_MCLKMNT_Msk                   (0x01UL << SCU_CMR_MCLKMNT_Pos)                         /*!< SCU CMR: MCLKMNT Mask                   */
#define SCU_CMR_SOSCSTS_Pos                   8                                                       /*!< SCU CMR: SOSCSTS Position               */
#define SCU_CMR_SOSCSTS_Msk                   (0x01UL << SCU_CMR_SOSCSTS_Pos)                         /*!< SCU CMR: SOSCSTS Mask                   */
#define SCU_CMR_SOSCFAIL_Pos                  9                                                       /*!< SCU CMR: SOSCFAIL Position              */
#define SCU_CMR_SOSCFAIL_Msk                  (0x01UL << SCU_CMR_SOSCFAIL_Pos)                        /*!< SCU CMR: SOSCFAIL Mask                  */
#define SCU_CMR_SOSCIE_Pos                    10                                                      /*!< SCU CMR: SOSCIE Position                */
#define SCU_CMR_SOSCIE_Msk                    (0x01UL << SCU_CMR_SOSCIE_Pos)                          /*!< SCU CMR: SOSCIE Mask                    */
#define SCU_CMR_SOSCMNT_Pos                   11                                                      /*!< SCU CMR: SOSCMNT Position               */
#define SCU_CMR_SOSCMNT_Msk                   (0x01UL << SCU_CMR_SOSCMNT_Pos)                         /*!< SCU CMR: SOSCMNT Mask                   */
#define SCU_CMR_MCLKREC_Pos                   15                                                      /*!< SCU CMR: MCLKREC Position               */
#define SCU_CMR_MCLKREC_Msk                   (0x01UL << SCU_CMR_MCLKREC_Pos)                         /*!< SCU CMR: MCLKREC Mask                   */

/* ----------------------------------  SCU_NMIR  ---------------------------------- */
#define SCU_NMIR_LVDEN_Pos                    0                                                       /*!< SCU NMIR: LVDEN Position                */
#define SCU_NMIR_LVDEN_Msk                    (0x01UL << SCU_NMIR_LVDEN_Pos)                          /*!< SCU NMIR: LVDEN Mask                    */
#define SCU_NMIR_MCLKFAILEN_Pos               1                                                       /*!< SCU NMIR: MCLKFAILEN Position           */
#define SCU_NMIR_MCLKFAILEN_Msk               (0x01UL << SCU_NMIR_MCLKFAILEN_Pos)                     /*!< SCU NMIR: MCLKFAILEN Mask               */
#define SCU_NMIR_WDTINTEN_Pos                 2                                                       /*!< SCU NMIR: WDTINTEN Position             */
#define SCU_NMIR_WDTINTEN_Msk                 (0x01UL << SCU_NMIR_WDTINTEN_Pos)                       /*!< SCU NMIR: WDTINTEN Mask                 */
#define SCU_NMIR_LVDSTS_Pos                   8                                                       /*!< SCU NMIR: LVDSTS Position               */
#define SCU_NMIR_LVDSTS_Msk                   (0x01UL << SCU_NMIR_LVDSTS_Pos)                         /*!< SCU NMIR: LVDSTS Mask                   */
#define SCU_NMIR_MCLKFAILSTS_Pos              9                                                       /*!< SCU NMIR: MCLKFAILSTS Position          */
#define SCU_NMIR_MCLKFAILSTS_Msk              (0x01UL << SCU_NMIR_MCLKFAILSTS_Pos)                    /*!< SCU NMIR: MCLKFAILSTS Mask              */
#define SCU_NMIR_WDTINTSTS_Pos                10                                                      /*!< SCU NMIR: WDTINTSTS Position            */
#define SCU_NMIR_WDTINTSTS_Msk                (0x01UL << SCU_NMIR_WDTINTSTS_Pos)                      /*!< SCU NMIR: WDTINTSTS Mask                */
#define SCU_NMIR_ACCESSCODE_Pos               16                                                      /*!< SCU NMIR: ACCESSCODE Position           */
#define SCU_NMIR_ACCESSCODE_Msk               (0x0000ffffUL << SCU_NMIR_ACCESSCODE_Pos)               /*!< SCU NMIR: ACCESSCODE Mask               */

/* -----------------------------------  SCU_COR  ---------------------------------- */
#define SCU_COR_CLKODIV_Pos                   0                                                       /*!< SCU COR: CLKODIV Position               */
#define SCU_COR_CLKODIV_Msk                   (0x0fUL << SCU_COR_CLKODIV_Pos)                         /*!< SCU COR: CLKODIV Mask                   */
#define SCU_COR_CLKOEN_Pos                    4                                                       /*!< SCU COR: CLKOEN Position                */
#define SCU_COR_CLKOEN_Msk                    (0x01UL << SCU_COR_CLKOEN_Pos)                          /*!< SCU COR: CLKOEN Mask                    */

/* ---------------------------------  SCU_PLLCON  --------------------------------- */
#define SCU_PLLCON_OUTDIV_Pos                 0                                                       /*!< SCU PLLCON: OUTDIV Position             */
#define SCU_PLLCON_OUTDIV_Msk                 (0x07UL << SCU_PLLCON_OUTDIV_Pos)                       /*!< SCU PLLCON: OUTDIV Mask                 */
#define SCU_PLLCON_POSTDIV2_Pos               4                                                       /*!< SCU PLLCON: POSTDIV2 Position           */
#define SCU_PLLCON_POSTDIV2_Msk               (0x0fUL << SCU_PLLCON_POSTDIV2_Pos)                     /*!< SCU PLLCON: POSTDIV2 Mask               */
#define SCU_PLLCON_POSTDIV1_Pos               8                                                       /*!< SCU PLLCON: POSTDIV1 Position           */
#define SCU_PLLCON_POSTDIV1_Msk               (0x000000ffUL << SCU_PLLCON_POSTDIV1_Pos)               /*!< SCU PLLCON: POSTDIV1 Mask               */
#define SCU_PLLCON_PREDIV_Pos                 16                                                      /*!< SCU PLLCON: PREDIV Position             */
#define SCU_PLLCON_PREDIV_Msk                 (0x07UL << SCU_PLLCON_PREDIV_Pos)                       /*!< SCU PLLCON: PREDIV Mask                 */
#define SCU_PLLCON_PLLMODE_Pos                20                                                      /*!< SCU PLLCON: PLLMODE Position            */
#define SCU_PLLCON_PLLMODE_Msk                (0x01UL << SCU_PLLCON_PLLMODE_Pos)                      /*!< SCU PLLCON: PLLMODE Mask                */
#define SCU_PLLCON_BYPASSB_Pos                21                                                      /*!< SCU PLLCON: BYPASSB Position            */
#define SCU_PLLCON_BYPASSB_Msk                (0x01UL << SCU_PLLCON_BYPASSB_Pos)                      /*!< SCU PLLCON: BYPASSB Mask                */
#define SCU_PLLCON_PLLEN_Pos                  22                                                      /*!< SCU PLLCON: PLLEN Position              */
#define SCU_PLLCON_PLLEN_Msk                  (0x01UL << SCU_PLLCON_PLLEN_Pos)                        /*!< SCU PLLCON: PLLEN Mask                  */
#define SCU_PLLCON_PLLRSTB_Pos                23                                                      /*!< SCU PLLCON: PLLRSTB Position            */
#define SCU_PLLCON_PLLRSTB_Msk                (0x01UL << SCU_PLLCON_PLLRSTB_Pos)                      /*!< SCU PLLCON: PLLRSTB Mask                */
#define SCU_PLLCON_LOCK_Pos                   31                                                      /*!< SCU PLLCON: LOCK Position               */
#define SCU_PLLCON_LOCK_Msk                   (0x01UL << SCU_PLLCON_LOCK_Pos)                         /*!< SCU PLLCON: LOCK Mask                   */

/* ---------------------------------  SCU_VDCCON  --------------------------------- */
#define SCU_VDCCON_VDCWDLY_Pos                0                                                       /*!< SCU VDCCON: VDCWDLY Position            */
#define SCU_VDCCON_VDCWDLY_Msk                (0x7fUL << SCU_VDCCON_VDCWDLY_Pos)                      /*!< SCU VDCCON: VDCWDLY Mask                */
#define SCU_VDCCON_VDCWDLY_WEN_Pos            8                                                       /*!< SCU VDCCON: VDCWDLY_WEN Position        */
#define SCU_VDCCON_VDCWDLY_WEN_Msk            (0x01UL << SCU_VDCCON_VDCWDLY_WEN_Pos)                  /*!< SCU VDCCON: VDCWDLY_WEN Mask            */
#define SCU_VDCCON_VDC15_LOCK_Pos             15                                                      /*!< SCU VDCCON: VDC15_LOCK Position         */
#define SCU_VDCCON_VDC15_LOCK_Msk             (0x01UL << SCU_VDCCON_VDC15_LOCK_Pos)                   /*!< SCU VDCCON: VDC15_LOCK Mask             */
#define SCU_VDCCON_VDC15_IDLE_Pos             16                                                      /*!< SCU VDCCON: VDC15_IDLE Position         */
#define SCU_VDCCON_VDC15_IDLE_Msk             (0x01UL << SCU_VDCCON_VDC15_IDLE_Pos)                   /*!< SCU VDCCON: VDC15_IDLE Mask             */
#define SCU_VDCCON_VDC15_STOP_Pos             17                                                      /*!< SCU VDCCON: VDC15_STOP Position         */
#define SCU_VDCCON_VDC15_STOP_Msk             (0x01UL << SCU_VDCCON_VDC15_STOP_Pos)                   /*!< SCU VDCCON: VDC15_STOP Mask             */
#define SCU_VDCCON_VDC15_PDBGR_Pos            19                                                      /*!< SCU VDCCON: VDC15_PDBGR Position        */
#define SCU_VDCCON_VDC15_PDBGR_Msk            (0x01UL << SCU_VDCCON_VDC15_PDBGR_Pos)                  /*!< SCU VDCCON: VDC15_PDBGR Mask            */
#define SCU_VDCCON_VDC15_WTIDKY_Pos           20                                                      /*!< SCU VDCCON: VDC15_WTIDKY Position       */
#define SCU_VDCCON_VDC15_WTIDKY_Msk           (0x0fUL << SCU_VDCCON_VDC15_WTIDKY_Pos)                 /*!< SCU VDCCON: VDC15_WTIDKY Mask           */

/* ---------------------------------  SCU_LSICON  --------------------------------- */
#define SCU_LSICON_SKIP_LS_Pos                0                                                       /*!< SCU LSICON: SKIP_LS Position            */
#define SCU_LSICON_SKIP_LS_Msk                (0x01UL << SCU_LSICON_SKIP_LS_Pos)                      /*!< SCU LSICON: SKIP_LS Mask                */
#define SCU_LSICON_EN_LDO_Pos                 1                                                       /*!< SCU LSICON: EN_LDO Position             */
#define SCU_LSICON_EN_LDO_Msk                 (0x01UL << SCU_LSICON_EN_LDO_Pos)                       /*!< SCU LSICON: EN_LDO Mask                 */

/* ----------------------------------  SCU_EOSCR  --------------------------------- */
#define SCU_EOSCR_NCSKIP_Pos                  0                                                       /*!< SCU EOSCR: NCSKIP Position              */
#define SCU_EOSCR_NCSKIP_Msk                  (0x01UL << SCU_EOSCR_NCSKIP_Pos)                        /*!< SCU EOSCR: NCSKIP Mask                  */
#define SCU_EOSCR_NCOPT_Pos                   2                                                       /*!< SCU EOSCR: NCOPT Position               */
#define SCU_EOSCR_NCOPT_Msk                   (0x03UL << SCU_EOSCR_NCOPT_Pos)                         /*!< SCU EOSCR: NCOPT Mask                   */
#define SCU_EOSCR_ISE_Pos                     4                                                       /*!< SCU EOSCR: ISE Position                 */
#define SCU_EOSCR_ISE_Msk                     (0x03UL << SCU_EOSCR_ISE_Pos)                           /*!< SCU EOSCR: ISE Mask                     */
#define SCU_EOSCR_EMEN_Pos                    7                                                       /*!< SCU EOSCR: EMEN Position                */
#define SCU_EOSCR_EMEN_Msk                    (0x01UL << SCU_EOSCR_EMEN_Pos)                          /*!< SCU EOSCR: EMEN Mask                    */
#define SCU_EOSCR_ESNCBYPS_Pos                8                                                       /*!< SCU EOSCR: ESNCBYPS Position            */
#define SCU_EOSCR_ESNCBYPS_Msk                (0x01UL << SCU_EOSCR_ESNCBYPS_Pos)                      /*!< SCU EOSCR: ESNCBYPS Mask                */
#define SCU_EOSCR_ESISEL_Pos                  12                                                      /*!< SCU EOSCR: ESISEL Position              */
#define SCU_EOSCR_ESISEL_Msk                  (0x03UL << SCU_EOSCR_ESISEL_Pos)                        /*!< SCU EOSCR: ESISEL Mask                  */
#define SCU_EOSCR_ESEN_Pos                    15                                                      /*!< SCU EOSCR: ESEN Position                */
#define SCU_EOSCR_ESEN_Msk                    (0x01UL << SCU_EOSCR_ESEN_Pos)                          /*!< SCU EOSCR: ESEN Mask                    */

/* ----------------------------------  SCU_EMODR  --------------------------------- */
#define SCU_EMODR_BOOT_Pos                    0                                                       /*!< SCU EMODR: BOOT Position                */
#define SCU_EMODR_BOOT_Msk                    (0x01UL << SCU_EMODR_BOOT_Pos)                          /*!< SCU EMODR: BOOT Mask                    */
#define SCU_EMODR_TEST_Pos                    1                                                       /*!< SCU EMODR: TEST Position                */
#define SCU_EMODR_TEST_Msk                    (0x01UL << SCU_EMODR_TEST_Pos)                          /*!< SCU EMODR: TEST Mask                    */
#define SCU_EMODR_SCANMD_Pos                  2                                                       /*!< SCU EMODR: SCANMD Position              */
#define SCU_EMODR_SCANMD_Msk                  (0x01UL << SCU_EMODR_SCANMD_Pos)                        /*!< SCU EMODR: SCANMD Mask                  */

/* ----------------------------------  SCU_MCCR1  --------------------------------- */
#define SCU_MCCR1_STDIV_Pos                   0                                                       /*!< SCU MCCR1: STDIV Position               */
#define SCU_MCCR1_STDIV_Msk                   (0x000000ffUL << SCU_MCCR1_STDIV_Pos)                   /*!< SCU MCCR1: STDIV Mask                   */
#define SCU_MCCR1_STCSEL_Pos                  8                                                       /*!< SCU MCCR1: STCSEL Position              */
#define SCU_MCCR1_STCSEL_Msk                  (0x07UL << SCU_MCCR1_STCSEL_Pos)                        /*!< SCU MCCR1: STCSEL Mask                  */
#define SCU_MCCR1_TEXT1DIV_Pos                16                                                      /*!< SCU MCCR1: TEXT1DIV Position            */
#define SCU_MCCR1_TEXT1DIV_Msk                (0x000000ffUL << SCU_MCCR1_TEXT1DIV_Pos)                /*!< SCU MCCR1: TEXT1DIV Mask                */
#define SCU_MCCR1_TEXT1CSEL_Pos               24                                                      /*!< SCU MCCR1: TEXT1CSEL Position           */
#define SCU_MCCR1_TEXT1CSEL_Msk               (0x07UL << SCU_MCCR1_TEXT1CSEL_Pos)                     /*!< SCU MCCR1: TEXT1CSEL Mask               */

/* ----------------------------------  SCU_MCCR2  --------------------------------- */
#define SCU_MCCR2_TEXT2DIV_Pos                0                                                       /*!< SCU MCCR2: TEXT2DIV Position            */
#define SCU_MCCR2_TEXT2DIV_Msk                (0x000000ffUL << SCU_MCCR2_TEXT2DIV_Pos)                /*!< SCU MCCR2: TEXT2DIV Mask                */
#define SCU_MCCR2_TEXT2CSEL_Pos               8                                                       /*!< SCU MCCR2: TEXT2CSEL Position           */
#define SCU_MCCR2_TEXT2CSEL_Msk               (0x07UL << SCU_MCCR2_TEXT2CSEL_Pos)                     /*!< SCU MCCR2: TEXT2CSEL Mask               */
#define SCU_MCCR2_TEXT3DIV_Pos                16                                                      /*!< SCU MCCR2: TEXT3DIV Position            */
#define SCU_MCCR2_TEXT3DIV_Msk                (0x000000ffUL << SCU_MCCR2_TEXT3DIV_Pos)                /*!< SCU MCCR2: TEXT3DIV Mask                */
#define SCU_MCCR2_TEXT3CSEL_Pos               24                                                      /*!< SCU MCCR2: TEXT3CSEL Position           */
#define SCU_MCCR2_TEXT3CSEL_Msk               (0x07UL << SCU_MCCR2_TEXT3CSEL_Pos)                     /*!< SCU MCCR2: TEXT3CSEL Mask               */

/* ----------------------------------  SCU_MCCR3  --------------------------------- */
#define SCU_MCCR3_WDTDIV_Pos                  0                                                       /*!< SCU MCCR3: WDTDIV Position              */
#define SCU_MCCR3_WDTDIV_Msk                  (0x000000ffUL << SCU_MCCR3_WDTDIV_Pos)                  /*!< SCU MCCR3: WDTDIV Mask                  */
#define SCU_MCCR3_WDTCSEL_Pos                 8                                                       /*!< SCU MCCR3: WDTCSEL Position             */
#define SCU_MCCR3_WDTCSEL_Msk                 (0x07UL << SCU_MCCR3_WDTCSEL_Pos)                       /*!< SCU MCCR3: WDTCSEL Mask                 */
#define SCU_MCCR3_WTEXTCDIV_Pos               16                                                      /*!< SCU MCCR3: WTEXTCDIV Position           */
#define SCU_MCCR3_WTEXTCDIV_Msk               (0x000000ffUL << SCU_MCCR3_WTEXTCDIV_Pos)               /*!< SCU MCCR3: WTEXTCDIV Mask               */
#define SCU_MCCR3_WTEXTCSEL_Pos               24                                                      /*!< SCU MCCR3: WTEXTCSEL Position           */
#define SCU_MCCR3_WTEXTCSEL_Msk               (0x07UL << SCU_MCCR3_WTEXTCSEL_Pos)                     /*!< SCU MCCR3: WTEXTCSEL Mask               */

/* ----------------------------------  SCU_MCCR4  --------------------------------- */
#define SCU_MCCR4_PD0DIV_Pos                  0                                                       /*!< SCU MCCR4: PD0DIV Position              */
#define SCU_MCCR4_PD0DIV_Msk                  (0x000000ffUL << SCU_MCCR4_PD0DIV_Pos)                  /*!< SCU MCCR4: PD0DIV Mask                  */
#define SCU_MCCR4_PD0CSEL_Pos                 8                                                       /*!< SCU MCCR4: PD0CSEL Position             */
#define SCU_MCCR4_PD0CSEL_Msk                 (0x07UL << SCU_MCCR4_PD0CSEL_Pos)                       /*!< SCU MCCR4: PD0CSEL Mask                 */
#define SCU_MCCR4_PD1DIV_Pos                  16                                                      /*!< SCU MCCR4: PD1DIV Position              */
#define SCU_MCCR4_PD1DIV_Msk                  (0x000000ffUL << SCU_MCCR4_PD1DIV_Pos)                  /*!< SCU MCCR4: PD1DIV Mask                  */
#define SCU_MCCR4_PD1CSEL_Pos                 24                                                      /*!< SCU MCCR4: PD1CSEL Position             */
#define SCU_MCCR4_PD1CSEL_Msk                 (0x07UL << SCU_MCCR4_PD1CSEL_Pos)                       /*!< SCU MCCR4: PD1CSEL Mask                 */

/* ----------------------------------  SCU_MCCR5  --------------------------------- */
#define SCU_MCCR5_LEDDIV_Pos                  0                                                       /*!< SCU MCCR5: LEDDIV Position              */
#define SCU_MCCR5_LEDDIV_Msk                  (0x000000ffUL << SCU_MCCR5_LEDDIV_Pos)                  /*!< SCU MCCR5: LEDDIV Mask                  */
#define SCU_MCCR5_LEDCSEL_Pos                 8                                                       /*!< SCU MCCR5: LEDCSEL Position             */
#define SCU_MCCR5_LEDCSEL_Msk                 (0x07UL << SCU_MCCR5_LEDCSEL_Pos)                       /*!< SCU MCCR5: LEDCSEL Mask                 */


/* ----------------------------------  SCU_MCCR6  --------------------------------- */
#define SCU_MCCR6_TSPRES_Pos                  0                                                       /*!< SCU MCCR6: TSPRES Position              */
#define SCU_MCCR6_TSPRES_Msk                  (0x03UL << SCU_MCCR6_TSPRES_Pos)                        /*!< SCU MCCR6: TSPRES Mask                  */
#define SCU_MCCR6_TSEN_Pos                    4                                                       /*!< SCU MCCR6: TSEN Position                */
#define SCU_MCCR6_TSEN_Msk                    (0x01UL << SCU_MCCR6_TSEN_Pos)                          /*!< SCU MCCR6: TSEN Mask                    */
#define SCU_MCCR6_T3CAPSEL_Pos                8                                                       /*!< SCU MCCR6: T3CAPSEL Position            */
#define SCU_MCCR6_T3CAPSEL_Msk                (0x01UL << SCU_MCCR6_T3CAPSEL_Pos)                      /*!< SCU MCCR6: T3CAPSEL Mask                */


/* ================================================================================ */
/* ================         struct 'SCUCC' Position & Mask         ================ */
/* ================================================================================ */


/* -------------------------------  SCUCC_VENDORID  ------------------------------- */
#define SCUCC_VENDORID_VENDID_Pos             0                                                       /*!< SCUCC VENDORID: VENDID Position         */
#define SCUCC_VENDORID_VENDID_Msk             (0xffffffffUL << SCUCC_VENDORID_VENDID_Pos)             /*!< SCUCC VENDORID: VENDID Mask             */

/* --------------------------------  SCUCC_CHIPID  -------------------------------- */
#define SCUCC_CHIPID_CHIPID_Pos               0                                                       /*!< SCUCC CHIPID: CHIPID Position           */
#define SCUCC_CHIPID_CHIPID_Msk               (0xffffffffUL << SCUCC_CHIPID_CHIPID_Pos)               /*!< SCUCC CHIPID: CHIPID Mask               */

/* ---------------------------------  SCUCC_REVNR  -------------------------------- */
#define SCUCC_REVNR_REVNO_Pos                 0                                                       /*!< SCUCC REVNR: REVNO Position             */
#define SCUCC_REVNR_REVNO_Msk                 (0x000000ffUL << SCUCC_REVNR_REVNO_Pos)                 /*!< SCUCC REVNR: REVNO Mask                 */


/* ================================================================================ */
/* ================         struct 'SCULV' Position & Mask         ================ */
/* ================================================================================ */


/* ---------------------------------  SCULV_LVICR  -------------------------------- */
#define SCULV_LVICR_LVIVS_Pos                 0                                                       /*!< SCULV LVICR: LVIVS Position             */
#define SCULV_LVICR_LVIVS_Msk                 (0x0fUL << SCULV_LVICR_LVIVS_Pos)                       /*!< SCULV LVICR: LVIVS Mask                 */
#define SCULV_LVICR_LVIFLAG_Pos               4                                                       /*!< SCULV LVICR: LVIFLAG Position           */
#define SCULV_LVICR_LVIFLAG_Msk               (0x01UL << SCULV_LVICR_LVIFLAG_Pos)                     /*!< SCULV LVICR: LVIFLAG Mask               */
#define SCULV_LVICR_LVINTEN_Pos               5                                                       /*!< SCULV LVICR: LVINTEN Position           */
#define SCULV_LVICR_LVINTEN_Msk               (0x01UL << SCULV_LVICR_LVINTEN_Pos)                     /*!< SCULV LVICR: LVINTEN Mask               */
#define SCULV_LVICR_LVIEN_Pos                 7                                                       /*!< SCULV LVICR: LVIEN Position             */
#define SCULV_LVICR_LVIEN_Msk                 (0x01UL << SCULV_LVICR_LVIEN_Pos)                       /*!< SCULV LVICR: LVIEN Mask                 */

/* ---------------------------------  SCULV_LVRCR  -------------------------------- */
#define SCULV_LVRCR_LVREN_Pos                 0                                                       /*!< SCULV LVRCR: LVREN Position             */
#define SCULV_LVRCR_LVREN_Msk                 (0x000000ffUL << SCULV_LVRCR_LVREN_Pos)                 /*!< SCULV LVRCR: LVREN Mask                 */

/* -------------------------------  SCULV_LVRCNFIG  ------------------------------- */
#define SCULV_LVRCNFIG_LVRVS_Pos              0                                                       /*!< SCULV LVRCNFIG: LVRVS Position          */
#define SCULV_LVRCNFIG_LVRVS_Msk              (0x000000ffUL << SCULV_LVRCNFIG_LVRVS_Pos)              /*!< SCULV LVRCNFIG: LVRVS Mask              */
#define SCULV_LVRCNFIG_LVRENM_Pos             8                                                       /*!< SCULV LVRCNFIG: LVRENM Position         */
#define SCULV_LVRCNFIG_LVRENM_Msk             (0x000000ffUL << SCULV_LVRCNFIG_LVRENM_Pos)             /*!< SCULV LVRCNFIG: LVRENM Mask             */
#define SCULV_LVRCNFIG_WTIDKY_Pos             16                                                      /*!< SCULV LVRCNFIG: WTIDKY Position         */
#define SCULV_LVRCNFIG_WTIDKY_Msk             (0x0000ffffUL << SCULV_LVRCNFIG_WTIDKY_Pos)             /*!< SCULV LVRCNFIG: WTIDKY Mask             */


/* ================================================================================ */
/* ================           struct 'PA' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  PA_MOD  ----------------------------------- */
#define PA_MOD_MODE0_Pos                      0                                                       /*!< PA MOD: MODE0 Position                  */
#define PA_MOD_MODE0_Msk                      (0x03UL << PA_MOD_MODE0_Pos)                            /*!< PA MOD: MODE0 Mask                      */
#define PA_MOD_MODE1_Pos                      2                                                       /*!< PA MOD: MODE1 Position                  */
#define PA_MOD_MODE1_Msk                      (0x03UL << PA_MOD_MODE1_Pos)                            /*!< PA MOD: MODE1 Mask                      */
#define PA_MOD_MODE2_Pos                      4                                                       /*!< PA MOD: MODE2 Position                  */
#define PA_MOD_MODE2_Msk                      (0x03UL << PA_MOD_MODE2_Pos)                            /*!< PA MOD: MODE2 Mask                      */
#define PA_MOD_MODE3_Pos                      6                                                       /*!< PA MOD: MODE3 Position                  */
#define PA_MOD_MODE3_Msk                      (0x03UL << PA_MOD_MODE3_Pos)                            /*!< PA MOD: MODE3 Mask                      */
#define PA_MOD_MODE4_Pos                      8                                                       /*!< PA MOD: MODE4 Position                  */
#define PA_MOD_MODE4_Msk                      (0x03UL << PA_MOD_MODE4_Pos)                            /*!< PA MOD: MODE4 Mask                      */
#define PA_MOD_MODE5_Pos                      10                                                      /*!< PA MOD: MODE5 Position                  */
#define PA_MOD_MODE5_Msk                      (0x03UL << PA_MOD_MODE5_Pos)                            /*!< PA MOD: MODE5 Mask                      */
#define PA_MOD_MODE6_Pos                      12                                                      /*!< PA MOD: MODE6 Position                  */
#define PA_MOD_MODE6_Msk                      (0x03UL << PA_MOD_MODE6_Pos)                            /*!< PA MOD: MODE6 Mask                      */
#define PA_MOD_MODE7_Pos                      14                                                      /*!< PA MOD: MODE7 Position                  */
#define PA_MOD_MODE7_Msk                      (0x03UL << PA_MOD_MODE7_Pos)                            /*!< PA MOD: MODE7 Mask                      */


/* -----------------------------------  PA_TYP  ----------------------------------- */
#define PA_TYP_TYP0_Pos                       0                                                       /*!< PA TYP: TYP0 Position                   */
#define PA_TYP_TYP0_Msk                       (0x01UL << PA_TYP_TYP0_Pos)                             /*!< PA TYP: TYP0 Mask                       */
#define PA_TYP_TYP1_Pos                       1                                                       /*!< PA TYP: TYP1 Position                   */
#define PA_TYP_TYP1_Msk                       (0x01UL << PA_TYP_TYP1_Pos)                             /*!< PA TYP: TYP1 Mask                       */
#define PA_TYP_TYP2_Pos                       2                                                       /*!< PA TYP: TYP2 Position                   */
#define PA_TYP_TYP2_Msk                       (0x01UL << PA_TYP_TYP2_Pos)                             /*!< PA TYP: TYP2 Mask                       */
#define PA_TYP_TYP3_Pos                       3                                                       /*!< PA TYP: TYP3 Position                   */
#define PA_TYP_TYP3_Msk                       (0x01UL << PA_TYP_TYP3_Pos)                             /*!< PA TYP: TYP3 Mask                       */
#define PA_TYP_TYP4_Pos                       4                                                       /*!< PA TYP: TYP4 Position                   */
#define PA_TYP_TYP4_Msk                       (0x01UL << PA_TYP_TYP4_Pos)                             /*!< PA TYP: TYP4 Mask                       */
#define PA_TYP_TYP5_Pos                       5                                                       /*!< PA TYP: TYP5 Position                   */
#define PA_TYP_TYP5_Msk                       (0x01UL << PA_TYP_TYP5_Pos)                             /*!< PA TYP: TYP5 Mask                       */
#define PA_TYP_TYP6_Pos                       6                                                       /*!< PA TYP: TYP6 Position                   */
#define PA_TYP_TYP6_Msk                       (0x01UL << PA_TYP_TYP6_Pos)                             /*!< PA TYP: TYP6 Mask                       */
#define PA_TYP_TYP7_Pos                       7                                                       /*!< PA TYP: TYP7 Position                   */
#define PA_TYP_TYP7_Msk                       (0x01UL << PA_TYP_TYP7_Pos)                             /*!< PA TYP: TYP7 Mask                       */


/* ----------------------------------  PA_AFSR1  ---------------------------------- */
#define PA_AFSR1_AFSR0_Pos                    0                                                       /*!< PA AFSR1: AFSR0 Position                */
#define PA_AFSR1_AFSR0_Msk                    (0x0fUL << PA_AFSR1_AFSR0_Pos)                          /*!< PA AFSR1: AFSR0 Mask                    */
#define PA_AFSR1_AFSR1_Pos                    4                                                       /*!< PA AFSR1: AFSR1 Position                */
#define PA_AFSR1_AFSR1_Msk                    (0x0fUL << PA_AFSR1_AFSR1_Pos)                          /*!< PA AFSR1: AFSR1 Mask                    */
#define PA_AFSR1_AFSR2_Pos                    8                                                       /*!< PA AFSR1: AFSR2 Position                */
#define PA_AFSR1_AFSR2_Msk                    (0x0fUL << PA_AFSR1_AFSR2_Pos)                          /*!< PA AFSR1: AFSR2 Mask                    */
#define PA_AFSR1_AFSR3_Pos                    12                                                      /*!< PA AFSR1: AFSR3 Position                */
#define PA_AFSR1_AFSR3_Msk                    (0x0fUL << PA_AFSR1_AFSR3_Pos)                          /*!< PA AFSR1: AFSR3 Mask                    */
#define PA_AFSR1_AFSR4_Pos                    16                                                      /*!< PA AFSR1: AFSR4 Position                */
#define PA_AFSR1_AFSR4_Msk                    (0x0fUL << PA_AFSR1_AFSR4_Pos)                          /*!< PA AFSR1: AFSR4 Mask                    */
#define PA_AFSR1_AFSR5_Pos                    20                                                      /*!< PA AFSR1: AFSR5 Position                */
#define PA_AFSR1_AFSR5_Msk                    (0x0fUL << PA_AFSR1_AFSR5_Pos)                          /*!< PA AFSR1: AFSR5 Mask                    */
#define PA_AFSR1_AFSR6_Pos                    24                                                      /*!< PA AFSR1: AFSR6 Position                */
#define PA_AFSR1_AFSR6_Msk                    (0x0fUL << PA_AFSR1_AFSR6_Pos)                          /*!< PA AFSR1: AFSR6 Mask                    */
#define PA_AFSR1_AFSR7_Pos                    28                                                      /*!< PA AFSR1: AFSR7 Position                */
#define PA_AFSR1_AFSR7_Msk                    (0x0fUL << PA_AFSR1_AFSR7_Pos)                          /*!< PA AFSR1: AFSR7 Mask                    */



/* -----------------------------------  PA_PUPD  ---------------------------------- */
#define PA_PUPD_PUPD0_Pos                     0                                                       /*!< PA PUPD: PUPD0 Position                 */
#define PA_PUPD_PUPD0_Msk                     (0x03UL << PA_PUPD_PUPD0_Pos)                           /*!< PA PUPD: PUPD0 Mask                     */
#define PA_PUPD_PUPD1_Pos                     2                                                       /*!< PA PUPD: PUPD1 Position                 */
#define PA_PUPD_PUPD1_Msk                     (0x03UL << PA_PUPD_PUPD1_Pos)                           /*!< PA PUPD: PUPD1 Mask                     */
#define PA_PUPD_PUPD2_Pos                     4                                                       /*!< PA PUPD: PUPD2 Position                 */
#define PA_PUPD_PUPD2_Msk                     (0x03UL << PA_PUPD_PUPD2_Pos)                           /*!< PA PUPD: PUPD2 Mask                     */
#define PA_PUPD_PUPD3_Pos                     6                                                       /*!< PA PUPD: PUPD3 Position                 */
#define PA_PUPD_PUPD3_Msk                     (0x03UL << PA_PUPD_PUPD3_Pos)                           /*!< PA PUPD: PUPD3 Mask                     */
#define PA_PUPD_PUPD4_Pos                     8                                                       /*!< PA PUPD: PUPD4 Position                 */
#define PA_PUPD_PUPD4_Msk                     (0x03UL << PA_PUPD_PUPD4_Pos)                           /*!< PA PUPD: PUPD4 Mask                     */
#define PA_PUPD_PUPD5_Pos                     10                                                      /*!< PA PUPD: PUPD5 Position                 */
#define PA_PUPD_PUPD5_Msk                     (0x03UL << PA_PUPD_PUPD5_Pos)                           /*!< PA PUPD: PUPD5 Mask                     */
#define PA_PUPD_PUPD6_Pos                     12                                                      /*!< PA PUPD: PUPD6 Position                 */
#define PA_PUPD_PUPD6_Msk                     (0x03UL << PA_PUPD_PUPD6_Pos)                           /*!< PA PUPD: PUPD6 Mask                     */
#define PA_PUPD_PUPD7_Pos                     14                                                      /*!< PA PUPD: PUPD7 Position                 */
#define PA_PUPD_PUPD7_Msk                     (0x03UL << PA_PUPD_PUPD7_Pos)                           /*!< PA PUPD: PUPD7 Mask                     */


/* -----------------------------------  PA_INDR  ---------------------------------- */
#define PA_INDR_INDR0_Pos                     0                                                       /*!< PA INDR: INDR0 Position                 */
#define PA_INDR_INDR0_Msk                     (0x01UL << PA_INDR_INDR0_Pos)                           /*!< PA INDR: INDR0 Mask                     */
#define PA_INDR_INDR1_Pos                     1                                                       /*!< PA INDR: INDR1 Position                 */
#define PA_INDR_INDR1_Msk                     (0x01UL << PA_INDR_INDR1_Pos)                           /*!< PA INDR: INDR1 Mask                     */
#define PA_INDR_INDR2_Pos                     2                                                       /*!< PA INDR: INDR2 Position                 */
#define PA_INDR_INDR2_Msk                     (0x01UL << PA_INDR_INDR2_Pos)                           /*!< PA INDR: INDR2 Mask                     */
#define PA_INDR_INDR3_Pos                     3                                                       /*!< PA INDR: INDR3 Position                 */
#define PA_INDR_INDR3_Msk                     (0x01UL << PA_INDR_INDR3_Pos)                           /*!< PA INDR: INDR3 Mask                     */
#define PA_INDR_INDR4_Pos                     4                                                       /*!< PA INDR: INDR4 Position                 */
#define PA_INDR_INDR4_Msk                     (0x01UL << PA_INDR_INDR4_Pos)                           /*!< PA INDR: INDR4 Mask                     */
#define PA_INDR_INDR5_Pos                     5                                                       /*!< PA INDR: INDR5 Position                 */
#define PA_INDR_INDR5_Msk                     (0x01UL << PA_INDR_INDR5_Pos)                           /*!< PA INDR: INDR5 Mask                     */
#define PA_INDR_INDR6_Pos                     6                                                       /*!< PA INDR: INDR6 Position                 */
#define PA_INDR_INDR6_Msk                     (0x01UL << PA_INDR_INDR6_Pos)                           /*!< PA INDR: INDR6 Mask                     */
#define PA_INDR_INDR7_Pos                     7                                                       /*!< PA INDR: INDR7 Position                 */
#define PA_INDR_INDR7_Msk                     (0x01UL << PA_INDR_INDR7_Pos)                           /*!< PA INDR: INDR7 Mask                     */


/* ----------------------------------  PA_OUTDR  ---------------------------------- */
#define PA_OUTDR_OUTDR0_Pos                   0                                                       /*!< PA OUTDR: OUTDR0 Position               */
#define PA_OUTDR_OUTDR0_Msk                   (0x01UL << PA_OUTDR_OUTDR0_Pos)                         /*!< PA OUTDR: OUTDR0 Mask                   */
#define PA_OUTDR_OUTDR1_Pos                   1                                                       /*!< PA OUTDR: OUTDR1 Position               */
#define PA_OUTDR_OUTDR1_Msk                   (0x01UL << PA_OUTDR_OUTDR1_Pos)                         /*!< PA OUTDR: OUTDR1 Mask                   */
#define PA_OUTDR_OUTDR2_Pos                   2                                                       /*!< PA OUTDR: OUTDR2 Position               */
#define PA_OUTDR_OUTDR2_Msk                   (0x01UL << PA_OUTDR_OUTDR2_Pos)                         /*!< PA OUTDR: OUTDR2 Mask                   */
#define PA_OUTDR_OUTDR3_Pos                   3                                                       /*!< PA OUTDR: OUTDR3 Position               */
#define PA_OUTDR_OUTDR3_Msk                   (0x01UL << PA_OUTDR_OUTDR3_Pos)                         /*!< PA OUTDR: OUTDR3 Mask                   */
#define PA_OUTDR_OUTDR4_Pos                   4                                                       /*!< PA OUTDR: OUTDR4 Position               */
#define PA_OUTDR_OUTDR4_Msk                   (0x01UL << PA_OUTDR_OUTDR4_Pos)                         /*!< PA OUTDR: OUTDR4 Mask                   */
#define PA_OUTDR_OUTDR5_Pos                   5                                                       /*!< PA OUTDR: OUTDR5 Position               */
#define PA_OUTDR_OUTDR5_Msk                   (0x01UL << PA_OUTDR_OUTDR5_Pos)                         /*!< PA OUTDR: OUTDR5 Mask                   */
#define PA_OUTDR_OUTDR6_Pos                   6                                                       /*!< PA OUTDR: OUTDR6 Position               */
#define PA_OUTDR_OUTDR6_Msk                   (0x01UL << PA_OUTDR_OUTDR6_Pos)                         /*!< PA OUTDR: OUTDR6 Mask                   */
#define PA_OUTDR_OUTDR7_Pos                   7                                                       /*!< PA OUTDR: OUTDR7 Position               */
#define PA_OUTDR_OUTDR7_Msk                   (0x01UL << PA_OUTDR_OUTDR7_Pos)                         /*!< PA OUTDR: OUTDR7 Mask                   */


/* -----------------------------------  PA_BSR  ----------------------------------- */
#define PA_BSR_BSR0_Pos                       0                                                       /*!< PA BSR: BSR0 Position                   */
#define PA_BSR_BSR0_Msk                       (0x01UL << PA_BSR_BSR0_Pos)                             /*!< PA BSR: BSR0 Mask                       */
#define PA_BSR_BSR1_Pos                       1                                                       /*!< PA BSR: BSR1 Position                   */
#define PA_BSR_BSR1_Msk                       (0x01UL << PA_BSR_BSR1_Pos)                             /*!< PA BSR: BSR1 Mask                       */
#define PA_BSR_BSR2_Pos                       2                                                       /*!< PA BSR: BSR2 Position                   */
#define PA_BSR_BSR2_Msk                       (0x01UL << PA_BSR_BSR2_Pos)                             /*!< PA BSR: BSR2 Mask                       */
#define PA_BSR_BSR3_Pos                       3                                                       /*!< PA BSR: BSR3 Position                   */
#define PA_BSR_BSR3_Msk                       (0x01UL << PA_BSR_BSR3_Pos)                             /*!< PA BSR: BSR3 Mask                       */
#define PA_BSR_BSR4_Pos                       4                                                       /*!< PA BSR: BSR4 Position                   */
#define PA_BSR_BSR4_Msk                       (0x01UL << PA_BSR_BSR4_Pos)                             /*!< PA BSR: BSR4 Mask                       */
#define PA_BSR_BSR5_Pos                       5                                                       /*!< PA BSR: BSR5 Position                   */
#define PA_BSR_BSR5_Msk                       (0x01UL << PA_BSR_BSR5_Pos)                             /*!< PA BSR: BSR5 Mask                       */
#define PA_BSR_BSR6_Pos                       6                                                       /*!< PA BSR: BSR6 Position                   */
#define PA_BSR_BSR6_Msk                       (0x01UL << PA_BSR_BSR6_Pos)                             /*!< PA BSR: BSR6 Mask                       */
#define PA_BSR_BSR7_Pos                       7                                                       /*!< PA BSR: BSR7 Position                   */
#define PA_BSR_BSR7_Msk                       (0x01UL << PA_BSR_BSR7_Pos)                             /*!< PA BSR: BSR7 Mask                       */


/* -----------------------------------  PA_BCR  ----------------------------------- */
#define PA_BCR_BCR0_Pos                       0                                                       /*!< PA BCR: BCR0 Position                   */
#define PA_BCR_BCR0_Msk                       (0x01UL << PA_BCR_BCR0_Pos)                             /*!< PA BCR: BCR0 Mask                       */
#define PA_BCR_BCR1_Pos                       1                                                       /*!< PA BCR: BCR1 Position                   */
#define PA_BCR_BCR1_Msk                       (0x01UL << PA_BCR_BCR1_Pos)                             /*!< PA BCR: BCR1 Mask                       */
#define PA_BCR_BCR2_Pos                       2                                                       /*!< PA BCR: BCR2 Position                   */
#define PA_BCR_BCR2_Msk                       (0x01UL << PA_BCR_BCR2_Pos)                             /*!< PA BCR: BCR2 Mask                       */
#define PA_BCR_BCR3_Pos                       3                                                       /*!< PA BCR: BCR3 Position                   */
#define PA_BCR_BCR3_Msk                       (0x01UL << PA_BCR_BCR3_Pos)                             /*!< PA BCR: BCR3 Mask                       */
#define PA_BCR_BCR4_Pos                       4                                                       /*!< PA BCR: BCR4 Position                   */
#define PA_BCR_BCR4_Msk                       (0x01UL << PA_BCR_BCR4_Pos)                             /*!< PA BCR: BCR4 Mask                       */
#define PA_BCR_BCR5_Pos                       5                                                       /*!< PA BCR: BCR5 Position                   */
#define PA_BCR_BCR5_Msk                       (0x01UL << PA_BCR_BCR5_Pos)                             /*!< PA BCR: BCR5 Mask                       */
#define PA_BCR_BCR6_Pos                       6                                                       /*!< PA BCR: BCR6 Position                   */
#define PA_BCR_BCR6_Msk                       (0x01UL << PA_BCR_BCR6_Pos)                             /*!< PA BCR: BCR6 Mask                       */
#define PA_BCR_BCR7_Pos                       7                                                       /*!< PA BCR: BCR7 Position                   */
#define PA_BCR_BCR7_Msk                       (0x01UL << PA_BCR_BCR7_Pos)                             /*!< PA BCR: BCR7 Mask                       */


/* ---------------------------------  PA_OUTDMSK  --------------------------------- */
#define PA_OUTDMSK_OUTDMSK0_Pos               0                                                       /*!< PA OUTDMSK: OUTDMSK0 Position           */
#define PA_OUTDMSK_OUTDMSK0_Msk               (0x01UL << PA_OUTDMSK_OUTDMSK0_Pos)                     /*!< PA OUTDMSK: OUTDMSK0 Mask               */
#define PA_OUTDMSK_OUTDMSK1_Pos               1                                                       /*!< PA OUTDMSK: OUTDMSK1 Position           */
#define PA_OUTDMSK_OUTDMSK1_Msk               (0x01UL << PA_OUTDMSK_OUTDMSK1_Pos)                     /*!< PA OUTDMSK: OUTDMSK1 Mask               */
#define PA_OUTDMSK_OUTDMSK2_Pos               2                                                       /*!< PA OUTDMSK: OUTDMSK2 Position           */
#define PA_OUTDMSK_OUTDMSK2_Msk               (0x01UL << PA_OUTDMSK_OUTDMSK2_Pos)                     /*!< PA OUTDMSK: OUTDMSK2 Mask               */
#define PA_OUTDMSK_OUTDMSK3_Pos               3                                                       /*!< PA OUTDMSK: OUTDMSK3 Position           */
#define PA_OUTDMSK_OUTDMSK3_Msk               (0x01UL << PA_OUTDMSK_OUTDMSK3_Pos)                     /*!< PA OUTDMSK: OUTDMSK3 Mask               */
#define PA_OUTDMSK_OUTDMSK4_Pos               4                                                       /*!< PA OUTDMSK: OUTDMSK4 Position           */
#define PA_OUTDMSK_OUTDMSK4_Msk               (0x01UL << PA_OUTDMSK_OUTDMSK4_Pos)                     /*!< PA OUTDMSK: OUTDMSK4 Mask               */
#define PA_OUTDMSK_OUTDMSK5_Pos               5                                                       /*!< PA OUTDMSK: OUTDMSK5 Position           */
#define PA_OUTDMSK_OUTDMSK5_Msk               (0x01UL << PA_OUTDMSK_OUTDMSK5_Pos)                     /*!< PA OUTDMSK: OUTDMSK5 Mask               */
#define PA_OUTDMSK_OUTDMSK6_Pos               6                                                       /*!< PA OUTDMSK: OUTDMSK6 Position           */
#define PA_OUTDMSK_OUTDMSK6_Msk               (0x01UL << PA_OUTDMSK_OUTDMSK6_Pos)                     /*!< PA OUTDMSK: OUTDMSK6 Mask               */
#define PA_OUTDMSK_OUTDMSK7_Pos               7                                                       /*!< PA OUTDMSK: OUTDMSK7 Position           */
#define PA_OUTDMSK_OUTDMSK7_Msk               (0x01UL << PA_OUTDMSK_OUTDMSK7_Pos)                     /*!< PA OUTDMSK: OUTDMSK7 Mask               */


/* -----------------------------------  PA_DBCR  ---------------------------------- */
#define PA_DBCR_DBEN0_Pos                     0                                                       /*!< PA DBCR: DBEN0 Position                 */
#define PA_DBCR_DBEN0_Msk                     (0x01UL << PA_DBCR_DBEN0_Pos)                           /*!< PA DBCR: DBEN0 Mask                     */
#define PA_DBCR_DBEN1_Pos                     1                                                       /*!< PA DBCR: DBEN1 Position                 */
#define PA_DBCR_DBEN1_Msk                     (0x01UL << PA_DBCR_DBEN1_Pos)                           /*!< PA DBCR: DBEN1 Mask                     */
#define PA_DBCR_DBEN2_Pos                     2                                                       /*!< PA DBCR: DBEN2 Position                 */
#define PA_DBCR_DBEN2_Msk                     (0x01UL << PA_DBCR_DBEN2_Pos)                           /*!< PA DBCR: DBEN2 Mask                     */
#define PA_DBCR_DBEN3_Pos                     3                                                       /*!< PA DBCR: DBEN3 Position                 */
#define PA_DBCR_DBEN3_Msk                     (0x01UL << PA_DBCR_DBEN3_Pos)                           /*!< PA DBCR: DBEN3 Mask                     */
#define PA_DBCR_DBEN4_Pos                     4                                                       /*!< PA DBCR: DBEN4 Position                 */
#define PA_DBCR_DBEN4_Msk                     (0x01UL << PA_DBCR_DBEN4_Pos)                           /*!< PA DBCR: DBEN4 Mask                     */
#define PA_DBCR_DBEN5_Pos                     5                                                       /*!< PA DBCR: DBEN5 Position                 */
#define PA_DBCR_DBEN5_Msk                     (0x01UL << PA_DBCR_DBEN5_Pos)                           /*!< PA DBCR: DBEN5 Mask                     */
#define PA_DBCR_DBEN6_Pos                     6                                                       /*!< PA DBCR: DBEN6 Position                 */
#define PA_DBCR_DBEN6_Msk                     (0x01UL << PA_DBCR_DBEN6_Pos)                           /*!< PA DBCR: DBEN6 Mask                     */
#define PA_DBCR_DBEN7_Pos                     7                                                       /*!< PA DBCR: DBEN7 Position                 */
#define PA_DBCR_DBEN7_Msk                     (0x01UL << PA_DBCR_DBEN7_Pos)                           /*!< PA DBCR: DBEN7 Mask                     */


/* -----------------------------------  PA_IER  ----------------------------------- */
#define PA_IER_P0_Pos                         0                                                       /*!< PA IER: P0 Position                     */
#define PA_IER_P0_Msk                         (0x03UL << PA_IER_P0_Pos)                               /*!< PA IER: P0 Mask                         */
#define PA_IER_P1_Pos                         2                                                       /*!< PA IER: P1 Position                     */
#define PA_IER_P1_Msk                         (0x03UL << PA_IER_P1_Pos)                               /*!< PA IER: P1 Mask                         */
#define PA_IER_P2_Pos                         4                                                       /*!< PA IER: P2 Position                     */
#define PA_IER_P2_Msk                         (0x03UL << PA_IER_P2_Pos)                               /*!< PA IER: P2 Mask                         */
#define PA_IER_P3_Pos                         6                                                       /*!< PA IER: P3 Position                     */
#define PA_IER_P3_Msk                         (0x03UL << PA_IER_P3_Pos)                               /*!< PA IER: P3 Mask                         */
#define PA_IER_P4_Pos                         8                                                       /*!< PA IER: P4 Position                     */
#define PA_IER_P4_Msk                         (0x03UL << PA_IER_P4_Pos)                               /*!< PA IER: P4 Mask                         */
#define PA_IER_P5_Pos                         10                                                      /*!< PA IER: P5 Position                     */
#define PA_IER_P5_Msk                         (0x03UL << PA_IER_P5_Pos)                               /*!< PA IER: P5 Mask                         */
#define PA_IER_P6_Pos                         12                                                      /*!< PA IER: P6 Position                     */
#define PA_IER_P6_Msk                         (0x03UL << PA_IER_P6_Pos)                               /*!< PA IER: P6 Mask                         */
#define PA_IER_P7_Pos                         14                                                      /*!< PA IER: P7 Position                     */
#define PA_IER_P7_Msk                         (0x03UL << PA_IER_P7_Pos)                               /*!< PA IER: P7 Mask                         */


/* -----------------------------------  PA_ISR  ----------------------------------- */
#define PA_ISR_P0_Pos                         0                                                       /*!< PA ISR: P0 Position                     */
#define PA_ISR_P0_Msk                         (0x03UL << PA_ISR_P0_Pos)                               /*!< PA ISR: P0 Mask                         */
#define PA_ISR_P1_Pos                         2                                                       /*!< PA ISR: P1 Position                     */
#define PA_ISR_P1_Msk                         (0x03UL << PA_ISR_P1_Pos)                               /*!< PA ISR: P1 Mask                         */
#define PA_ISR_P2_Pos                         4                                                       /*!< PA ISR: P2 Position                     */
#define PA_ISR_P2_Msk                         (0x03UL << PA_ISR_P2_Pos)                               /*!< PA ISR: P2 Mask                         */
#define PA_ISR_P3_Pos                         6                                                       /*!< PA ISR: P3 Position                     */
#define PA_ISR_P3_Msk                         (0x03UL << PA_ISR_P3_Pos)                               /*!< PA ISR: P3 Mask                         */
#define PA_ISR_P4_Pos                         8                                                       /*!< PA ISR: P4 Position                     */
#define PA_ISR_P4_Msk                         (0x03UL << PA_ISR_P4_Pos)                               /*!< PA ISR: P4 Mask                         */
#define PA_ISR_P5_Pos                         10                                                      /*!< PA ISR: P5 Position                     */
#define PA_ISR_P5_Msk                         (0x03UL << PA_ISR_P5_Pos)                               /*!< PA ISR: P5 Mask                         */
#define PA_ISR_P6_Pos                         12                                                      /*!< PA ISR: P6 Position                     */
#define PA_ISR_P6_Msk                         (0x03UL << PA_ISR_P6_Pos)                               /*!< PA ISR: P6 Mask                         */
#define PA_ISR_P7_Pos                         14                                                      /*!< PA ISR: P7 Position                     */
#define PA_ISR_P7_Msk                         (0x03UL << PA_ISR_P7_Pos)                               /*!< PA ISR: P7 Mask                         */


/* -----------------------------------  PA_ICR  ----------------------------------- */
#define PA_ICR_P0_Pos                         0                                                       /*!< PA ICR: P0 Position                     */
#define PA_ICR_P0_Msk                         (0x03UL << PA_ICR_P0_Pos)                               /*!< PA ICR: P0 Mask                         */
#define PA_ICR_P1_Pos                         2                                                       /*!< PA ICR: P1 Position                     */
#define PA_ICR_P1_Msk                         (0x03UL << PA_ICR_P1_Pos)                               /*!< PA ICR: P1 Mask                         */
#define PA_ICR_P2_Pos                         4                                                       /*!< PA ICR: P2 Position                     */
#define PA_ICR_P2_Msk                         (0x03UL << PA_ICR_P2_Pos)                               /*!< PA ICR: P2 Mask                         */
#define PA_ICR_P3_Pos                         6                                                       /*!< PA ICR: P3 Position                     */
#define PA_ICR_P3_Msk                         (0x03UL << PA_ICR_P3_Pos)                               /*!< PA ICR: P3 Mask                         */
#define PA_ICR_P4_Pos                         8                                                       /*!< PA ICR: P4 Position                     */
#define PA_ICR_P4_Msk                         (0x03UL << PA_ICR_P4_Pos)                               /*!< PA ICR: P4 Mask                         */
#define PA_ICR_P5_Pos                         10                                                      /*!< PA ICR: P5 Position                     */
#define PA_ICR_P5_Msk                         (0x03UL << PA_ICR_P5_Pos)                               /*!< PA ICR: P5 Mask                         */
#define PA_ICR_P6_Pos                         12                                                      /*!< PA ICR: P6 Position                     */
#define PA_ICR_P6_Msk                         (0x03UL << PA_ICR_P6_Pos)                               /*!< PA ICR: P6 Mask                         */
#define PA_ICR_P7_Pos                         14                                                      /*!< PA ICR: P7 Position                     */
#define PA_ICR_P7_Msk                         (0x03UL << PA_ICR_P7_Pos)                               /*!< PA ICR: P7 Mask                         */



/* ================================================================================ */
/* ================           struct 'PB' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  PB_MOD  ----------------------------------- */
#define PB_MOD_MODE0_Pos                      0                                                       /*!< PB MOD: MODE0 Position                  */
#define PB_MOD_MODE0_Msk                      (0x03UL << PB_MOD_MODE0_Pos)                            /*!< PB MOD: MODE0 Mask                      */
#define PB_MOD_MODE1_Pos                      2                                                       /*!< PB MOD: MODE1 Position                  */
#define PB_MOD_MODE1_Msk                      (0x03UL << PB_MOD_MODE1_Pos)                            /*!< PB MOD: MODE1 Mask                      */
#define PB_MOD_MODE2_Pos                      4                                                       /*!< PB MOD: MODE2 Position                  */
#define PB_MOD_MODE2_Msk                      (0x03UL << PB_MOD_MODE2_Pos)                            /*!< PB MOD: MODE2 Mask                      */
#define PB_MOD_MODE3_Pos                      6                                                       /*!< PB MOD: MODE3 Position                  */
#define PB_MOD_MODE3_Msk                      (0x03UL << PB_MOD_MODE3_Pos)                            /*!< PB MOD: MODE3 Mask                      */
#define PB_MOD_MODE4_Pos                      8                                                       /*!< PB MOD: MODE4 Position                  */
#define PB_MOD_MODE4_Msk                      (0x03UL << PB_MOD_MODE4_Pos)                            /*!< PB MOD: MODE4 Mask                      */
#define PB_MOD_MODE5_Pos                      10                                                      /*!< PB MOD: MODE5 Position                  */
#define PB_MOD_MODE5_Msk                      (0x03UL << PB_MOD_MODE5_Pos)                            /*!< PB MOD: MODE5 Mask                      */
#define PB_MOD_MODE6_Pos                      12                                                      /*!< PB MOD: MODE6 Position                  */
#define PB_MOD_MODE6_Msk                      (0x03UL << PB_MOD_MODE6_Pos)                            /*!< PB MOD: MODE6 Mask                      */
#define PB_MOD_MODE7_Pos                      14                                                      /*!< PB MOD: MODE7 Position                  */
#define PB_MOD_MODE7_Msk                      (0x03UL << PB_MOD_MODE7_Pos)                            /*!< PB MOD: MODE7 Mask                      */


/* -----------------------------------  PB_TYP  ----------------------------------- */
#define PB_TYP_TYP0_Pos                       0                                                       /*!< PB TYP: TYP0 Position                   */
#define PB_TYP_TYP0_Msk                       (0x01UL << PB_TYP_TYP0_Pos)                             /*!< PB TYP: TYP0 Mask                       */
#define PB_TYP_TYP1_Pos                       1                                                       /*!< PB TYP: TYP1 Position                   */
#define PB_TYP_TYP1_Msk                       (0x01UL << PB_TYP_TYP1_Pos)                             /*!< PB TYP: TYP1 Mask                       */
#define PB_TYP_TYP2_Pos                       2                                                       /*!< PB TYP: TYP2 Position                   */
#define PB_TYP_TYP2_Msk                       (0x01UL << PB_TYP_TYP2_Pos)                             /*!< PB TYP: TYP2 Mask                       */
#define PB_TYP_TYP3_Pos                       3                                                       /*!< PB TYP: TYP3 Position                   */
#define PB_TYP_TYP3_Msk                       (0x01UL << PB_TYP_TYP3_Pos)                             /*!< PB TYP: TYP3 Mask                       */
#define PB_TYP_TYP4_Pos                       4                                                       /*!< PB TYP: TYP4 Position                   */
#define PB_TYP_TYP4_Msk                       (0x01UL << PB_TYP_TYP4_Pos)                             /*!< PB TYP: TYP4 Mask                       */
#define PB_TYP_TYP5_Pos                       5                                                       /*!< PB TYP: TYP5 Position                   */
#define PB_TYP_TYP5_Msk                       (0x01UL << PB_TYP_TYP5_Pos)                             /*!< PB TYP: TYP5 Mask                       */
#define PB_TYP_TYP6_Pos                       6                                                       /*!< PB TYP: TYP6 Position                   */
#define PB_TYP_TYP6_Msk                       (0x01UL << PB_TYP_TYP6_Pos)                             /*!< PB TYP: TYP6 Mask                       */
#define PB_TYP_TYP7_Pos                       7                                                       /*!< PB TYP: TYP7 Position                   */
#define PB_TYP_TYP7_Msk                       (0x01UL << PB_TYP_TYP7_Pos)                             /*!< PB TYP: TYP7 Mask                       */


/* ----------------------------------  PB_AFSR1  ---------------------------------- */
#define PB_AFSR1_AFSR0_Pos                    0                                                       /*!< PB AFSR1: AFSR0 Position                */
#define PB_AFSR1_AFSR0_Msk                    (0x0fUL << PB_AFSR1_AFSR0_Pos)                          /*!< PB AFSR1: AFSR0 Mask                    */
#define PB_AFSR1_AFSR1_Pos                    4                                                       /*!< PB AFSR1: AFSR1 Position                */
#define PB_AFSR1_AFSR1_Msk                    (0x0fUL << PB_AFSR1_AFSR1_Pos)                          /*!< PB AFSR1: AFSR1 Mask                    */
#define PB_AFSR1_AFSR2_Pos                    8                                                       /*!< PB AFSR1: AFSR2 Position                */
#define PB_AFSR1_AFSR2_Msk                    (0x0fUL << PB_AFSR1_AFSR2_Pos)                          /*!< PB AFSR1: AFSR2 Mask                    */
#define PB_AFSR1_AFSR3_Pos                    12                                                      /*!< PB AFSR1: AFSR3 Position                */
#define PB_AFSR1_AFSR3_Msk                    (0x0fUL << PB_AFSR1_AFSR3_Pos)                          /*!< PB AFSR1: AFSR3 Mask                    */
#define PB_AFSR1_AFSR4_Pos                    16                                                      /*!< PB AFSR1: AFSR4 Position                */
#define PB_AFSR1_AFSR4_Msk                    (0x0fUL << PB_AFSR1_AFSR4_Pos)                          /*!< PB AFSR1: AFSR4 Mask                    */
#define PB_AFSR1_AFSR5_Pos                    20                                                      /*!< PB AFSR1: AFSR5 Position                */
#define PB_AFSR1_AFSR5_Msk                    (0x0fUL << PB_AFSR1_AFSR5_Pos)                          /*!< PB AFSR1: AFSR5 Mask                    */
#define PB_AFSR1_AFSR6_Pos                    24                                                      /*!< PB AFSR1: AFSR6 Position                */
#define PB_AFSR1_AFSR6_Msk                    (0x0fUL << PB_AFSR1_AFSR6_Pos)                          /*!< PB AFSR1: AFSR6 Mask                    */
#define PB_AFSR1_AFSR7_Pos                    28                                                      /*!< PB AFSR1: AFSR7 Position                */
#define PB_AFSR1_AFSR7_Msk                    (0x0fUL << PB_AFSR1_AFSR7_Pos)                          /*!< PB AFSR1: AFSR7 Mask                    */



/* -----------------------------------  PB_PUPD  ---------------------------------- */
#define PB_PUPD_PUPD0_Pos                     0                                                       /*!< PB PUPD: PUPD0 Position                 */
#define PB_PUPD_PUPD0_Msk                     (0x03UL << PB_PUPD_PUPD0_Pos)                           /*!< PB PUPD: PUPD0 Mask                     */
#define PB_PUPD_PUPD1_Pos                     2                                                       /*!< PB PUPD: PUPD1 Position                 */
#define PB_PUPD_PUPD1_Msk                     (0x03UL << PB_PUPD_PUPD1_Pos)                           /*!< PB PUPD: PUPD1 Mask                     */
#define PB_PUPD_PUPD2_Pos                     4                                                       /*!< PB PUPD: PUPD2 Position                 */
#define PB_PUPD_PUPD2_Msk                     (0x03UL << PB_PUPD_PUPD2_Pos)                           /*!< PB PUPD: PUPD2 Mask                     */
#define PB_PUPD_PUPD3_Pos                     6                                                       /*!< PB PUPD: PUPD3 Position                 */
#define PB_PUPD_PUPD3_Msk                     (0x03UL << PB_PUPD_PUPD3_Pos)                           /*!< PB PUPD: PUPD3 Mask                     */
#define PB_PUPD_PUPD4_Pos                     8                                                       /*!< PB PUPD: PUPD4 Position                 */
#define PB_PUPD_PUPD4_Msk                     (0x03UL << PB_PUPD_PUPD4_Pos)                           /*!< PB PUPD: PUPD4 Mask                     */
#define PB_PUPD_PUPD5_Pos                     10                                                      /*!< PB PUPD: PUPD5 Position                 */
#define PB_PUPD_PUPD5_Msk                     (0x03UL << PB_PUPD_PUPD5_Pos)                           /*!< PB PUPD: PUPD5 Mask                     */
#define PB_PUPD_PUPD6_Pos                     12                                                      /*!< PB PUPD: PUPD6 Position                 */
#define PB_PUPD_PUPD6_Msk                     (0x03UL << PB_PUPD_PUPD6_Pos)                           /*!< PB PUPD: PUPD6 Mask                     */
#define PB_PUPD_PUPD7_Pos                     14                                                      /*!< PB PUPD: PUPD7 Position                 */
#define PB_PUPD_PUPD7_Msk                     (0x03UL << PB_PUPD_PUPD7_Pos)                           /*!< PB PUPD: PUPD7 Mask                     */
/*-----------------------------------  PB_INDR  ---------------------------------- */
#define PB_INDR_INDR0_Pos                     0                                                       /*!< PB INDR: INDR0 Position                 */
#define PB_INDR_INDR0_Msk                     (0x01UL << PB_INDR_INDR0_Pos)                           /*!< PB INDR: INDR0 Mask                     */
#define PB_INDR_INDR1_Pos                     1                                                       /*!< PB INDR: INDR1 Position                 */
#define PB_INDR_INDR1_Msk                     (0x01UL << PB_INDR_INDR1_Pos)                           /*!< PB INDR: INDR1 Mask                     */
#define PB_INDR_INDR2_Pos                     2                                                       /*!< PB INDR: INDR2 Position                 */
#define PB_INDR_INDR2_Msk                     (0x01UL << PB_INDR_INDR2_Pos)                           /*!< PB INDR: INDR2 Mask                     */
#define PB_INDR_INDR3_Pos                     3                                                       /*!< PB INDR: INDR3 Position                 */
#define PB_INDR_INDR3_Msk                     (0x01UL << PB_INDR_INDR3_Pos)                           /*!< PB INDR: INDR3 Mask                     */
#define PB_INDR_INDR4_Pos                     4                                                       /*!< PB INDR: INDR4 Position                 */
#define PB_INDR_INDR4_Msk                     (0x01UL << PB_INDR_INDR4_Pos)                           /*!< PB INDR: INDR4 Mask                     */
#define PB_INDR_INDR5_Pos                     5                                                       /*!< PB INDR: INDR5 Position                 */
#define PB_INDR_INDR5_Msk                     (0x01UL << PB_INDR_INDR5_Pos)                           /*!< PB INDR: INDR5 Mask                     */
#define PB_INDR_INDR6_Pos                     6                                                       /*!< PB INDR: INDR6 Position                 */
#define PB_INDR_INDR6_Msk                     (0x01UL << PB_INDR_INDR6_Pos)                           /*!< PB INDR: INDR6 Mask                     */
#define PB_INDR_INDR7_Pos                     7                                                       /*!< PB INDR: INDR7 Position                 */
#define PB_INDR_INDR7_Msk                     (0x01UL << PB_INDR_INDR7_Pos)                           /*!< PB INDR: INDR7 Mask                     */


/* ----------------------------------  PB_OUTDR  ---------------------------------- */
#define PB_OUTDR_OUTDR0_Pos                   0                                                       /*!< PB OUTDR: OUTDR0 Position               */
#define PB_OUTDR_OUTDR0_Msk                   (0x01UL << PB_OUTDR_OUTDR0_Pos)                         /*!< PB OUTDR: OUTDR0 Mask                   */
#define PB_OUTDR_OUTDR1_Pos                   1                                                       /*!< PB OUTDR: OUTDR1 Position               */
#define PB_OUTDR_OUTDR1_Msk                   (0x01UL << PB_OUTDR_OUTDR1_Pos)                         /*!< PB OUTDR: OUTDR1 Mask                   */
#define PB_OUTDR_OUTDR2_Pos                   2                                                       /*!< PB OUTDR: OUTDR2 Position               */
#define PB_OUTDR_OUTDR2_Msk                   (0x01UL << PB_OUTDR_OUTDR2_Pos)                         /*!< PB OUTDR: OUTDR2 Mask                   */
#define PB_OUTDR_OUTDR3_Pos                   3                                                       /*!< PB OUTDR: OUTDR3 Position               */
#define PB_OUTDR_OUTDR3_Msk                   (0x01UL << PB_OUTDR_OUTDR3_Pos)                         /*!< PB OUTDR: OUTDR3 Mask                   */
#define PB_OUTDR_OUTDR4_Pos                   4                                                       /*!< PB OUTDR: OUTDR4 Position               */
#define PB_OUTDR_OUTDR4_Msk                   (0x01UL << PB_OUTDR_OUTDR4_Pos)                         /*!< PB OUTDR: OUTDR4 Mask                   */
#define PB_OUTDR_OUTDR5_Pos                   5                                                       /*!< PB OUTDR: OUTDR5 Position               */
#define PB_OUTDR_OUTDR5_Msk                   (0x01UL << PB_OUTDR_OUTDR5_Pos)                         /*!< PB OUTDR: OUTDR5 Mask                   */
#define PB_OUTDR_OUTDR6_Pos                   6                                                       /*!< PB OUTDR: OUTDR6 Position               */
#define PB_OUTDR_OUTDR6_Msk                   (0x01UL << PB_OUTDR_OUTDR6_Pos)                         /*!< PB OUTDR: OUTDR6 Mask                   */
#define PB_OUTDR_OUTDR7_Pos                   7                                                       /*!< PB OUTDR: OUTDR7 Position               */
#define PB_OUTDR_OUTDR7_Msk                   (0x01UL << PB_OUTDR_OUTDR7_Pos)                         /*!< PB OUTDR: OUTDR7 Mask                   */


/* -----------------------------------  PB_BSR  ----------------------------------- */
#define PB_BSR_BSR0_Pos                       0                                                       /*!< PB BSR: BSR0 Position                   */
#define PB_BSR_BSR0_Msk                       (0x01UL << PB_BSR_BSR0_Pos)                             /*!< PB BSR: BSR0 Mask                       */
#define PB_BSR_BSR1_Pos                       1                                                       /*!< PB BSR: BSR1 Position                   */
#define PB_BSR_BSR1_Msk                       (0x01UL << PB_BSR_BSR1_Pos)                             /*!< PB BSR: BSR1 Mask                       */
#define PB_BSR_BSR2_Pos                       2                                                       /*!< PB BSR: BSR2 Position                   */
#define PB_BSR_BSR2_Msk                       (0x01UL << PB_BSR_BSR2_Pos)                             /*!< PB BSR: BSR2 Mask                       */
#define PB_BSR_BSR3_Pos                       3                                                       /*!< PB BSR: BSR3 Position                   */
#define PB_BSR_BSR3_Msk                       (0x01UL << PB_BSR_BSR3_Pos)                             /*!< PB BSR: BSR3 Mask                       */
#define PB_BSR_BSR4_Pos                       4                                                       /*!< PB BSR: BSR4 Position                   */
#define PB_BSR_BSR4_Msk                       (0x01UL << PB_BSR_BSR4_Pos)                             /*!< PB BSR: BSR4 Mask                       */
#define PB_BSR_BSR5_Pos                       5                                                       /*!< PB BSR: BSR5 Position                   */
#define PB_BSR_BSR5_Msk                       (0x01UL << PB_BSR_BSR5_Pos)                             /*!< PB BSR: BSR5 Mask                       */
#define PB_BSR_BSR6_Pos                       6                                                       /*!< PB BSR: BSR6 Position                   */
#define PB_BSR_BSR6_Msk                       (0x01UL << PB_BSR_BSR6_Pos)                             /*!< PB BSR: BSR6 Mask                       */
#define PB_BSR_BSR7_Pos                       7                                                       /*!< PB BSR: BSR7 Position                   */
#define PB_BSR_BSR7_Msk                       (0x01UL << PB_BSR_BSR7_Pos)                             /*!< PB BSR: BSR7 Mask                       */


/* -----------------------------------  PB_BCR  ----------------------------------- */
#define PB_BCR_BCR0_Pos                       0                                                       /*!< PB BCR: BCR0 Position                   */
#define PB_BCR_BCR0_Msk                       (0x01UL << PB_BCR_BCR0_Pos)                             /*!< PB BCR: BCR0 Mask                       */
#define PB_BCR_BCR1_Pos                       1                                                       /*!< PB BCR: BCR1 Position                   */
#define PB_BCR_BCR1_Msk                       (0x01UL << PB_BCR_BCR1_Pos)                             /*!< PB BCR: BCR1 Mask                       */
#define PB_BCR_BCR2_Pos                       2                                                       /*!< PB BCR: BCR2 Position                   */
#define PB_BCR_BCR2_Msk                       (0x01UL << PB_BCR_BCR2_Pos)                             /*!< PB BCR: BCR2 Mask                       */
#define PB_BCR_BCR3_Pos                       3                                                       /*!< PB BCR: BCR3 Position                   */
#define PB_BCR_BCR3_Msk                       (0x01UL << PB_BCR_BCR3_Pos)                             /*!< PB BCR: BCR3 Mask                       */
#define PB_BCR_BCR4_Pos                       4                                                       /*!< PB BCR: BCR4 Position                   */
#define PB_BCR_BCR4_Msk                       (0x01UL << PB_BCR_BCR4_Pos)                             /*!< PB BCR: BCR4 Mask                       */
#define PB_BCR_BCR5_Pos                       5                                                       /*!< PB BCR: BCR5 Position                   */
#define PB_BCR_BCR5_Msk                       (0x01UL << PB_BCR_BCR5_Pos)                             /*!< PB BCR: BCR5 Mask                       */
#define PB_BCR_BCR6_Pos                       6                                                       /*!< PB BCR: BCR6 Position                   */
#define PB_BCR_BCR6_Msk                       (0x01UL << PB_BCR_BCR6_Pos)                             /*!< PB BCR: BCR6 Mask                       */
#define PB_BCR_BCR7_Pos                       7                                                       /*!< PB BCR: BCR7 Position                   */
#define PB_BCR_BCR7_Msk                       (0x01UL << PB_BCR_BCR7_Pos)                             /*!< PB BCR: BCR7 Mask                       */


/* ---------------------------------  PB_OUTDMSK  --------------------------------- */
#define PB_OUTDMSK_OUTDMSK0_Pos               0                                                       /*!< PB OUTDMSK: OUTDMSK0 Position           */
#define PB_OUTDMSK_OUTDMSK0_Msk               (0x01UL << PB_OUTDMSK_OUTDMSK0_Pos)                     /*!< PB OUTDMSK: OUTDMSK0 Mask               */
#define PB_OUTDMSK_OUTDMSK1_Pos               1                                                       /*!< PB OUTDMSK: OUTDMSK1 Position           */
#define PB_OUTDMSK_OUTDMSK1_Msk               (0x01UL << PB_OUTDMSK_OUTDMSK1_Pos)                     /*!< PB OUTDMSK: OUTDMSK1 Mask               */
#define PB_OUTDMSK_OUTDMSK2_Pos               2                                                       /*!< PB OUTDMSK: OUTDMSK2 Position           */
#define PB_OUTDMSK_OUTDMSK2_Msk               (0x01UL << PB_OUTDMSK_OUTDMSK2_Pos)                     /*!< PB OUTDMSK: OUTDMSK2 Mask               */
#define PB_OUTDMSK_OUTDMSK3_Pos               3                                                       /*!< PB OUTDMSK: OUTDMSK3 Position           */
#define PB_OUTDMSK_OUTDMSK3_Msk               (0x01UL << PB_OUTDMSK_OUTDMSK3_Pos)                     /*!< PB OUTDMSK: OUTDMSK3 Mask               */
#define PB_OUTDMSK_OUTDMSK4_Pos               4                                                       /*!< PB OUTDMSK: OUTDMSK4 Position           */
#define PB_OUTDMSK_OUTDMSK4_Msk               (0x01UL << PB_OUTDMSK_OUTDMSK4_Pos)                     /*!< PB OUTDMSK: OUTDMSK4 Mask               */
#define PB_OUTDMSK_OUTDMSK5_Pos               5                                                       /*!< PB OUTDMSK: OUTDMSK5 Position           */
#define PB_OUTDMSK_OUTDMSK5_Msk               (0x01UL << PB_OUTDMSK_OUTDMSK5_Pos)                     /*!< PB OUTDMSK: OUTDMSK5 Mask               */
#define PB_OUTDMSK_OUTDMSK6_Pos               6                                                       /*!< PB OUTDMSK: OUTDMSK6 Position           */
#define PB_OUTDMSK_OUTDMSK6_Msk               (0x01UL << PB_OUTDMSK_OUTDMSK6_Pos)                     /*!< PB OUTDMSK: OUTDMSK6 Mask               */
#define PB_OUTDMSK_OUTDMSK7_Pos               7                                                       /*!< PB OUTDMSK: OUTDMSK7 Position           */
#define PB_OUTDMSK_OUTDMSK7_Msk               (0x01UL << PB_OUTDMSK_OUTDMSK7_Pos)                     /*!< PB OUTDMSK: OUTDMSK7 Mask               */


/* -----------------------------------  PB_DBCR  ---------------------------------- */
#define PB_DBCR_DBEN0_Pos                     0                                                       /*!< PB DBCR: DBEN0 Position                 */
#define PB_DBCR_DBEN0_Msk                     (0x01UL << PB_DBCR_DBEN0_Pos)                           /*!< PB DBCR: DBEN0 Mask                     */
#define PB_DBCR_DBEN1_Pos                     1                                                       /*!< PB DBCR: DBEN1 Position                 */
#define PB_DBCR_DBEN1_Msk                     (0x01UL << PB_DBCR_DBEN1_Pos)                           /*!< PB DBCR: DBEN1 Mask                     */
#define PB_DBCR_DBEN2_Pos                     2                                                       /*!< PB DBCR: DBEN2 Position                 */
#define PB_DBCR_DBEN2_Msk                     (0x01UL << PB_DBCR_DBEN2_Pos)                           /*!< PB DBCR: DBEN2 Mask                     */
#define PB_DBCR_DBEN3_Pos                     3                                                       /*!< PB DBCR: DBEN3 Position                 */
#define PB_DBCR_DBEN3_Msk                     (0x01UL << PB_DBCR_DBEN3_Pos)                           /*!< PB DBCR: DBEN3 Mask                     */
#define PB_DBCR_DBEN4_Pos                     4                                                       /*!< PB DBCR: DBEN4 Position                 */
#define PB_DBCR_DBEN4_Msk                     (0x01UL << PB_DBCR_DBEN4_Pos)                           /*!< PB DBCR: DBEN4 Mask                     */
#define PB_DBCR_DBEN5_Pos                     5                                                       /*!< PB DBCR: DBEN5 Position                 */
#define PB_DBCR_DBEN5_Msk                     (0x01UL << PB_DBCR_DBEN5_Pos)                           /*!< PB DBCR: DBEN5 Mask                     */
#define PB_DBCR_DBEN6_Pos                     6                                                       /*!< PB DBCR: DBEN6 Position                 */
#define PB_DBCR_DBEN6_Msk                     (0x01UL << PB_DBCR_DBEN6_Pos)                           /*!< PB DBCR: DBEN6 Mask                     */
#define PB_DBCR_DBEN7_Pos                     7                                                       /*!< PB DBCR: DBEN7 Position                 */
#define PB_DBCR_DBEN7_Msk                     (0x01UL << PB_DBCR_DBEN7_Pos)                           /*!< PB DBCR: DBEN7 Mask                     */


/* -----------------------------------  PB_IER  ----------------------------------- */
#define PB_IER_P0_Pos                         0                                                       /*!< PB IER: P0 Position                     */
#define PB_IER_P0_Msk                         (0x03UL << PB_IER_P0_Pos)                               /*!< PB IER: P0 Mask                         */
#define PB_IER_P1_Pos                         2                                                       /*!< PB IER: P1 Position                     */
#define PB_IER_P1_Msk                         (0x03UL << PB_IER_P1_Pos)                               /*!< PB IER: P1 Mask                         */
#define PB_IER_P2_Pos                         4                                                       /*!< PB IER: P2 Position                     */
#define PB_IER_P2_Msk                         (0x03UL << PB_IER_P2_Pos)                               /*!< PB IER: P2 Mask                         */
#define PB_IER_P3_Pos                         6                                                       /*!< PB IER: P3 Position                     */
#define PB_IER_P3_Msk                         (0x03UL << PB_IER_P3_Pos)                               /*!< PB IER: P3 Mask                         */
#define PB_IER_P4_Pos                         8                                                       /*!< PB IER: P4 Position                     */
#define PB_IER_P4_Msk                         (0x03UL << PB_IER_P4_Pos)                               /*!< PB IER: P4 Mask                         */
#define PB_IER_P5_Pos                         10                                                      /*!< PB IER: P5 Position                     */
#define PB_IER_P5_Msk                         (0x03UL << PB_IER_P5_Pos)                               /*!< PB IER: P5 Mask                         */
#define PB_IER_P6_Pos                         12                                                      /*!< PB IER: P6 Position                     */
#define PB_IER_P6_Msk                         (0x03UL << PB_IER_P6_Pos)                               /*!< PB IER: P6 Mask                         */
#define PB_IER_P7_Pos                         14                                                      /*!< PB IER: P7 Position                     */
#define PB_IER_P7_Msk                         (0x03UL << PB_IER_P7_Pos)                               /*!< PB IER: P7 Mask                         */


/* -----------------------------------  PB_ISR  ----------------------------------- */
#define PB_ISR_P0_Pos                         0                                                       /*!< PB ISR: P0 Position                     */
#define PB_ISR_P0_Msk                         (0x03UL << PB_ISR_P0_Pos)                               /*!< PB ISR: P0 Mask                         */
#define PB_ISR_P1_Pos                         2                                                       /*!< PB ISR: P1 Position                     */
#define PB_ISR_P1_Msk                         (0x03UL << PB_ISR_P1_Pos)                               /*!< PB ISR: P1 Mask                         */
#define PB_ISR_P2_Pos                         4                                                       /*!< PB ISR: P2 Position                     */
#define PB_ISR_P2_Msk                         (0x03UL << PB_ISR_P2_Pos)                               /*!< PB ISR: P2 Mask                         */
#define PB_ISR_P3_Pos                         6                                                       /*!< PB ISR: P3 Position                     */
#define PB_ISR_P3_Msk                         (0x03UL << PB_ISR_P3_Pos)                               /*!< PB ISR: P3 Mask                         */
#define PB_ISR_P4_Pos                         8                                                       /*!< PB ISR: P4 Position                     */
#define PB_ISR_P4_Msk                         (0x03UL << PB_ISR_P4_Pos)                               /*!< PB ISR: P4 Mask                         */
#define PB_ISR_P5_Pos                         10                                                      /*!< PB ISR: P5 Position                     */
#define PB_ISR_P5_Msk                         (0x03UL << PB_ISR_P5_Pos)                               /*!< PB ISR: P5 Mask                         */
#define PB_ISR_P6_Pos                         12                                                      /*!< PB ISR: P6 Position                     */
#define PB_ISR_P6_Msk                         (0x03UL << PB_ISR_P6_Pos)                               /*!< PB ISR: P6 Mask                         */
#define PB_ISR_P7_Pos                         14                                                      /*!< PB ISR: P7 Position                     */
#define PB_ISR_P7_Msk                         (0x03UL << PB_ISR_P7_Pos)                               /*!< PB ISR: P7 Mask                         */


/* -----------------------------------  PB_ICR  ----------------------------------- */
#define PB_ICR_P0_Pos                         0                                                       /*!< PB ICR: P0 Position                     */
#define PB_ICR_P0_Msk                         (0x03UL << PB_ICR_P0_Pos)                               /*!< PB ICR: P0 Mask                         */
#define PB_ICR_P1_Pos                         2                                                       /*!< PB ICR: P1 Position                     */
#define PB_ICR_P1_Msk                         (0x03UL << PB_ICR_P1_Pos)                               /*!< PB ICR: P1 Mask                         */
#define PB_ICR_P2_Pos                         4                                                       /*!< PB ICR: P2 Position                     */
#define PB_ICR_P2_Msk                         (0x03UL << PB_ICR_P2_Pos)                               /*!< PB ICR: P2 Mask                         */
#define PB_ICR_P3_Pos                         6                                                       /*!< PB ICR: P3 Position                     */
#define PB_ICR_P3_Msk                         (0x03UL << PB_ICR_P3_Pos)                               /*!< PB ICR: P3 Mask                         */
#define PB_ICR_P4_Pos                         8                                                       /*!< PB ICR: P4 Position                     */
#define PB_ICR_P4_Msk                         (0x03UL << PB_ICR_P4_Pos)                               /*!< PB ICR: P4 Mask                         */
#define PB_ICR_P5_Pos                         10                                                      /*!< PB ICR: P5 Position                     */
#define PB_ICR_P5_Msk                         (0x03UL << PB_ICR_P5_Pos)                               /*!< PB ICR: P5 Mask                         */
#define PB_ICR_P6_Pos                         12                                                      /*!< PB ICR: P6 Position                     */
#define PB_ICR_P6_Msk                         (0x03UL << PB_ICR_P6_Pos)                               /*!< PB ICR: P6 Mask                         */
#define PB_ICR_P7_Pos                         14                                                      /*!< PB ICR: P7 Position                     */
#define PB_ICR_P7_Msk                         (0x03UL << PB_ICR_P7_Pos)                               /*!< PB ICR: P7 Mask                         */



/* ================================================================================ */
/* ================           struct 'PC' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  PC_MOD  ----------------------------------- */
#define PC_MOD_MODE0_Pos                      0                                                       /*!< PC MOD: MODE0 Position                  */
#define PC_MOD_MODE0_Msk                      (0x03UL << PC_MOD_MODE0_Pos)                            /*!< PC MOD: MODE0 Mask                      */
#define PC_MOD_MODE1_Pos                      2                                                       /*!< PC MOD: MODE1 Position                  */
#define PC_MOD_MODE1_Msk                      (0x03UL << PC_MOD_MODE1_Pos)                            /*!< PC MOD: MODE1 Mask                      */
#define PC_MOD_MODE2_Pos                      4                                                       /*!< PC MOD: MODE2 Position                  */
#define PC_MOD_MODE2_Msk                      (0x03UL << PC_MOD_MODE2_Pos)                            /*!< PC MOD: MODE2 Mask                      */
#define PC_MOD_MODE3_Pos                      6                                                       /*!< PC MOD: MODE3 Position                  */
#define PC_MOD_MODE3_Msk                      (0x03UL << PC_MOD_MODE3_Pos)                            /*!< PC MOD: MODE3 Mask                      */
#define PC_MOD_MODE4_Pos                      8                                                       /*!< PC MOD: MODE4 Position                  */
#define PC_MOD_MODE4_Msk                      (0x03UL << PC_MOD_MODE4_Pos)                            /*!< PC MOD: MODE4 Mask                      */
#define PC_MOD_MODE5_Pos                      10                                                      /*!< PC MOD: MODE5 Position                  */
#define PC_MOD_MODE5_Msk                      (0x03UL << PC_MOD_MODE5_Pos)                            /*!< PC MOD: MODE5 Mask                      */
#define PC_MOD_MODE6_Pos                      12                                                      /*!< PC MOD: MODE6 Position                  */
#define PC_MOD_MODE6_Msk                      (0x03UL << PC_MOD_MODE6_Pos)                            /*!< PC MOD: MODE6 Mask                      */
#define PC_MOD_MODE7_Pos                      14                                                      /*!< PC MOD: MODE7 Position                  */
#define PC_MOD_MODE7_Msk                      (0x03UL << PC_MOD_MODE7_Pos)                            /*!< PC MOD: MODE7 Mask                      */


/* -----------------------------------  PC_TYP  ----------------------------------- */
#define PC_TYP_TYP0_Pos                       0                                                       /*!< PC TYP: TYP0 Position                   */
#define PC_TYP_TYP0_Msk                       (0x01UL << PC_TYP_TYP0_Pos)                             /*!< PC TYP: TYP0 Mask                       */
#define PC_TYP_TYP1_Pos                       1                                                       /*!< PC TYP: TYP1 Position                   */
#define PC_TYP_TYP1_Msk                       (0x01UL << PC_TYP_TYP1_Pos)                             /*!< PC TYP: TYP1 Mask                       */
#define PC_TYP_TYP2_Pos                       2                                                       /*!< PC TYP: TYP2 Position                   */
#define PC_TYP_TYP2_Msk                       (0x01UL << PC_TYP_TYP2_Pos)                             /*!< PC TYP: TYP2 Mask                       */
#define PC_TYP_TYP3_Pos                       3                                                       /*!< PC TYP: TYP3 Position                   */
#define PC_TYP_TYP3_Msk                       (0x01UL << PC_TYP_TYP3_Pos)                             /*!< PC TYP: TYP3 Mask                       */
#define PC_TYP_TYP4_Pos                       4                                                       /*!< PC TYP: TYP4 Position                   */
#define PC_TYP_TYP4_Msk                       (0x01UL << PC_TYP_TYP4_Pos)                             /*!< PC TYP: TYP4 Mask                       */
#define PC_TYP_TYP5_Pos                       5                                                       /*!< PC TYP: TYP5 Position                   */
#define PC_TYP_TYP5_Msk                       (0x01UL << PC_TYP_TYP5_Pos)                             /*!< PC TYP: TYP5 Mask                       */
#define PC_TYP_TYP6_Pos                       6                                                       /*!< PC TYP: TYP6 Position                   */
#define PC_TYP_TYP6_Msk                       (0x01UL << PC_TYP_TYP6_Pos)                             /*!< PC TYP: TYP6 Mask                       */
#define PC_TYP_TYP7_Pos                       7                                                       /*!< PC TYP: TYP7 Position                   */
#define PC_TYP_TYP7_Msk                       (0x01UL << PC_TYP_TYP7_Pos)                             /*!< PC TYP: TYP7 Mask                       */

/* ----------------------------------  PC_AFSR1  ---------------------------------- */
#define PC_AFSR1_AFSR0_Pos                    0                                                       /*!< PC AFSR1: AFSR0 Position                */
#define PC_AFSR1_AFSR0_Msk                    (0x0fUL << PC_AFSR1_AFSR0_Pos)                          /*!< PC AFSR1: AFSR0 Mask                    */
#define PC_AFSR1_AFSR1_Pos                    4                                                       /*!< PC AFSR1: AFSR1 Position                */
#define PC_AFSR1_AFSR1_Msk                    (0x0fUL << PC_AFSR1_AFSR1_Pos)                          /*!< PC AFSR1: AFSR1 Mask                    */
#define PC_AFSR1_AFSR2_Pos                    8                                                       /*!< PC AFSR1: AFSR2 Position                */
#define PC_AFSR1_AFSR2_Msk                    (0x0fUL << PC_AFSR1_AFSR2_Pos)                          /*!< PC AFSR1: AFSR2 Mask                    */
#define PC_AFSR1_AFSR3_Pos                    12                                                      /*!< PC AFSR1: AFSR3 Position                */
#define PC_AFSR1_AFSR3_Msk                    (0x0fUL << PC_AFSR1_AFSR3_Pos)                          /*!< PC AFSR1: AFSR3 Mask                    */
#define PC_AFSR1_AFSR4_Pos                    16                                                      /*!< PC AFSR1: AFSR4 Position                */
#define PC_AFSR1_AFSR4_Msk                    (0x0fUL << PC_AFSR1_AFSR4_Pos)                          /*!< PC AFSR1: AFSR4 Mask                    */
#define PC_AFSR1_AFSR5_Pos                    20                                                      /*!< PC AFSR1: AFSR5 Position                */
#define PC_AFSR1_AFSR5_Msk                    (0x0fUL << PC_AFSR1_AFSR5_Pos)                          /*!< PC AFSR1: AFSR5 Mask                    */
#define PC_AFSR1_AFSR6_Pos                    24                                                      /*!< PC AFSR1: AFSR6 Position                */
#define PC_AFSR1_AFSR6_Msk                    (0x0fUL << PC_AFSR1_AFSR6_Pos)                          /*!< PC AFSR1: AFSR6 Mask                    */
#define PC_AFSR1_AFSR7_Pos                    28                                                      /*!< PC AFSR1: AFSR7 Position                */
#define PC_AFSR1_AFSR7_Msk                    (0x0fUL << PC_AFSR1_AFSR7_Pos)                          /*!< PC AFSR1: AFSR7 Mask                    */


/* -----------------------------------  PC_PUPD  ---------------------------------- */
#define PC_PUPD_PUPD0_Pos                     0                                                       /*!< PC PUPD: PUPD0 Position                 */
#define PC_PUPD_PUPD0_Msk                     (0x03UL << PC_PUPD_PUPD0_Pos)                           /*!< PC PUPD: PUPD0 Mask                     */
#define PC_PUPD_PUPD1_Pos                     2                                                       /*!< PC PUPD: PUPD1 Position                 */
#define PC_PUPD_PUPD1_Msk                     (0x03UL << PC_PUPD_PUPD1_Pos)                           /*!< PC PUPD: PUPD1 Mask                     */
#define PC_PUPD_PUPD2_Pos                     4                                                       /*!< PC PUPD: PUPD2 Position                 */
#define PC_PUPD_PUPD2_Msk                     (0x03UL << PC_PUPD_PUPD2_Pos)                           /*!< PC PUPD: PUPD2 Mask                     */
#define PC_PUPD_PUPD3_Pos                     6                                                       /*!< PC PUPD: PUPD3 Position                 */
#define PC_PUPD_PUPD3_Msk                     (0x03UL << PC_PUPD_PUPD3_Pos)                           /*!< PC PUPD: PUPD3 Mask                     */
#define PC_PUPD_PUPD4_Pos                     8                                                       /*!< PC PUPD: PUPD4 Position                 */
#define PC_PUPD_PUPD4_Msk                     (0x03UL << PC_PUPD_PUPD4_Pos)                           /*!< PC PUPD: PUPD4 Mask                     */
#define PC_PUPD_PUPD5_Pos                     10                                                      /*!< PC PUPD: PUPD5 Position                 */
#define PC_PUPD_PUPD5_Msk                     (0x03UL << PC_PUPD_PUPD5_Pos)                           /*!< PC PUPD: PUPD5 Mask                     */
#define PC_PUPD_PUPD6_Pos                     12                                                      /*!< PC PUPD: PUPD6 Position                 */
#define PC_PUPD_PUPD6_Msk                     (0x03UL << PC_PUPD_PUPD6_Pos)                           /*!< PC PUPD: PUPD6 Mask                     */
#define PC_PUPD_PUPD7_Pos                     14                                                      /*!< PC PUPD: PUPD7 Position                 */
#define PC_PUPD_PUPD7_Msk                     (0x03UL << PC_PUPD_PUPD7_Pos)                           /*!< PC PUPD: PUPD7 Mask                     */


/* -----------------------------------  PC_INDR  ---------------------------------- */
#define PC_INDR_INDR0_Pos                     0                                                       /*!< PC INDR: INDR0 Position                 */
#define PC_INDR_INDR0_Msk                     (0x01UL << PC_INDR_INDR0_Pos)                           /*!< PC INDR: INDR0 Mask                     */
#define PC_INDR_INDR1_Pos                     1                                                       /*!< PC INDR: INDR1 Position                 */
#define PC_INDR_INDR1_Msk                     (0x01UL << PC_INDR_INDR1_Pos)                           /*!< PC INDR: INDR1 Mask                     */
#define PC_INDR_INDR2_Pos                     2                                                       /*!< PC INDR: INDR2 Position                 */
#define PC_INDR_INDR2_Msk                     (0x01UL << PC_INDR_INDR2_Pos)                           /*!< PC INDR: INDR2 Mask                     */
#define PC_INDR_INDR3_Pos                     3                                                       /*!< PC INDR: INDR3 Position                 */
#define PC_INDR_INDR3_Msk                     (0x01UL << PC_INDR_INDR3_Pos)                           /*!< PC INDR: INDR3 Mask                     */
#define PC_INDR_INDR4_Pos                     4                                                       /*!< PC INDR: INDR4 Position                 */
#define PC_INDR_INDR4_Msk                     (0x01UL << PC_INDR_INDR4_Pos)                           /*!< PC INDR: INDR4 Mask                     */
#define PC_INDR_INDR5_Pos                     5                                                       /*!< PC INDR: INDR5 Position                 */
#define PC_INDR_INDR5_Msk                     (0x01UL << PC_INDR_INDR5_Pos)                           /*!< PC INDR: INDR5 Mask                     */
#define PC_INDR_INDR6_Pos                     6                                                       /*!< PC INDR: INDR6 Position                 */
#define PC_INDR_INDR6_Msk                     (0x01UL << PC_INDR_INDR6_Pos)                           /*!< PC INDR: INDR6 Mask                     */
#define PC_INDR_INDR7_Pos                     7                                                       /*!< PC INDR: INDR7 Position                 */
#define PC_INDR_INDR7_Msk                     (0x01UL << PC_INDR_INDR7_Pos)                           /*!< PC INDR: INDR7 Mask                     */


/* ----------------------------------  PC_OUTDR  ---------------------------------- */
#define PC_OUTDR_OUTDR0_Pos                   0                                                       /*!< PC OUTDR: OUTDR0 Position               */
#define PC_OUTDR_OUTDR0_Msk                   (0x01UL << PC_OUTDR_OUTDR0_Pos)                         /*!< PC OUTDR: OUTDR0 Mask                   */
#define PC_OUTDR_OUTDR1_Pos                   1                                                       /*!< PC OUTDR: OUTDR1 Position               */
#define PC_OUTDR_OUTDR1_Msk                   (0x01UL << PC_OUTDR_OUTDR1_Pos)                         /*!< PC OUTDR: OUTDR1 Mask                   */
#define PC_OUTDR_OUTDR2_Pos                   2                                                       /*!< PC OUTDR: OUTDR2 Position               */
#define PC_OUTDR_OUTDR2_Msk                   (0x01UL << PC_OUTDR_OUTDR2_Pos)                         /*!< PC OUTDR: OUTDR2 Mask                   */
#define PC_OUTDR_OUTDR3_Pos                   3                                                       /*!< PC OUTDR: OUTDR3 Position               */
#define PC_OUTDR_OUTDR3_Msk                   (0x01UL << PC_OUTDR_OUTDR3_Pos)                         /*!< PC OUTDR: OUTDR3 Mask                   */
#define PC_OUTDR_OUTDR4_Pos                   4                                                       /*!< PC OUTDR: OUTDR4 Position               */
#define PC_OUTDR_OUTDR4_Msk                   (0x01UL << PC_OUTDR_OUTDR4_Pos)                         /*!< PC OUTDR: OUTDR4 Mask                   */
#define PC_OUTDR_OUTDR5_Pos                   5                                                       /*!< PC OUTDR: OUTDR5 Position               */
#define PC_OUTDR_OUTDR5_Msk                   (0x01UL << PC_OUTDR_OUTDR5_Pos)                         /*!< PC OUTDR: OUTDR5 Mask                   */
#define PC_OUTDR_OUTDR6_Pos                   6                                                       /*!< PC OUTDR: OUTDR6 Position               */
#define PC_OUTDR_OUTDR6_Msk                   (0x01UL << PC_OUTDR_OUTDR6_Pos)                         /*!< PC OUTDR: OUTDR6 Mask                   */
#define PC_OUTDR_OUTDR7_Pos                   7                                                       /*!< PC OUTDR: OUTDR7 Position               */
#define PC_OUTDR_OUTDR7_Msk                   (0x01UL << PC_OUTDR_OUTDR7_Pos)                         /*!< PC OUTDR: OUTDR7 Mask                   */


/* -----------------------------------  PC_BSR  ----------------------------------- */
#define PC_BSR_BSR0_Pos                       0                                                       /*!< PC BSR: BSR0 Position                   */
#define PC_BSR_BSR0_Msk                       (0x01UL << PC_BSR_BSR0_Pos)                             /*!< PC BSR: BSR0 Mask                       */
#define PC_BSR_BSR1_Pos                       1                                                       /*!< PC BSR: BSR1 Position                   */
#define PC_BSR_BSR1_Msk                       (0x01UL << PC_BSR_BSR1_Pos)                             /*!< PC BSR: BSR1 Mask                       */
#define PC_BSR_BSR2_Pos                       2                                                       /*!< PC BSR: BSR2 Position                   */
#define PC_BSR_BSR2_Msk                       (0x01UL << PC_BSR_BSR2_Pos)                             /*!< PC BSR: BSR2 Mask                       */
#define PC_BSR_BSR3_Pos                       3                                                       /*!< PC BSR: BSR3 Position                   */
#define PC_BSR_BSR3_Msk                       (0x01UL << PC_BSR_BSR3_Pos)                             /*!< PC BSR: BSR3 Mask                       */
#define PC_BSR_BSR4_Pos                       4                                                       /*!< PC BSR: BSR4 Position                   */
#define PC_BSR_BSR4_Msk                       (0x01UL << PC_BSR_BSR4_Pos)                             /*!< PC BSR: BSR4 Mask                       */
#define PC_BSR_BSR5_Pos                       5                                                       /*!< PC BSR: BSR5 Position                   */
#define PC_BSR_BSR5_Msk                       (0x01UL << PC_BSR_BSR5_Pos)                             /*!< PC BSR: BSR5 Mask                       */
#define PC_BSR_BSR6_Pos                       6                                                       /*!< PC BSR: BSR6 Position                   */
#define PC_BSR_BSR6_Msk                       (0x01UL << PC_BSR_BSR6_Pos)                             /*!< PC BSR: BSR6 Mask                       */
#define PC_BSR_BSR7_Pos                       7                                                       /*!< PC BSR: BSR7 Position                   */
#define PC_BSR_BSR7_Msk                       (0x01UL << PC_BSR_BSR7_Pos)                             /*!< PC BSR: BSR7 Mask                       */


/* -----------------------------------  PC_BCR  ----------------------------------- */
#define PC_BCR_BCR0_Pos                       0                                                       /*!< PC BCR: BCR0 Position                   */
#define PC_BCR_BCR0_Msk                       (0x01UL << PC_BCR_BCR0_Pos)                             /*!< PC BCR: BCR0 Mask                       */
#define PC_BCR_BCR1_Pos                       1                                                       /*!< PC BCR: BCR1 Position                   */
#define PC_BCR_BCR1_Msk                       (0x01UL << PC_BCR_BCR1_Pos)                             /*!< PC BCR: BCR1 Mask                       */
#define PC_BCR_BCR2_Pos                       2                                                       /*!< PC BCR: BCR2 Position                   */
#define PC_BCR_BCR2_Msk                       (0x01UL << PC_BCR_BCR2_Pos)                             /*!< PC BCR: BCR2 Mask                       */
#define PC_BCR_BCR3_Pos                       3                                                       /*!< PC BCR: BCR3 Position                   */
#define PC_BCR_BCR3_Msk                       (0x01UL << PC_BCR_BCR3_Pos)                             /*!< PC BCR: BCR3 Mask                       */
#define PC_BCR_BCR4_Pos                       4                                                       /*!< PC BCR: BCR4 Position                   */
#define PC_BCR_BCR4_Msk                       (0x01UL << PC_BCR_BCR4_Pos)                             /*!< PC BCR: BCR4 Mask                       */
#define PC_BCR_BCR5_Pos                       5                                                       /*!< PC BCR: BCR5 Position                   */
#define PC_BCR_BCR5_Msk                       (0x01UL << PC_BCR_BCR5_Pos)                             /*!< PC BCR: BCR5 Mask                       */
#define PC_BCR_BCR6_Pos                       6                                                       /*!< PC BCR: BCR6 Position                   */
#define PC_BCR_BCR6_Msk                       (0x01UL << PC_BCR_BCR6_Pos)                             /*!< PC BCR: BCR6 Mask                       */
#define PC_BCR_BCR7_Pos                       7                                                       /*!< PC BCR: BCR7 Position                   */
#define PC_BCR_BCR7_Msk                       (0x01UL << PC_BCR_BCR7_Pos)                             /*!< PC BCR: BCR7 Mask                       */


/* ---------------------------------  PC_OUTDMSK  --------------------------------- */
#define PC_OUTDMSK_OUTDMSK0_Pos               0                                                       /*!< PC OUTDMSK: OUTDMSK0 Position           */
#define PC_OUTDMSK_OUTDMSK0_Msk               (0x01UL << PC_OUTDMSK_OUTDMSK0_Pos)                     /*!< PC OUTDMSK: OUTDMSK0 Mask               */
#define PC_OUTDMSK_OUTDMSK1_Pos               1                                                       /*!< PC OUTDMSK: OUTDMSK1 Position           */
#define PC_OUTDMSK_OUTDMSK1_Msk               (0x01UL << PC_OUTDMSK_OUTDMSK1_Pos)                     /*!< PC OUTDMSK: OUTDMSK1 Mask               */
#define PC_OUTDMSK_OUTDMSK2_Pos               2                                                       /*!< PC OUTDMSK: OUTDMSK2 Position           */
#define PC_OUTDMSK_OUTDMSK2_Msk               (0x01UL << PC_OUTDMSK_OUTDMSK2_Pos)                     /*!< PC OUTDMSK: OUTDMSK2 Mask               */
#define PC_OUTDMSK_OUTDMSK3_Pos               3                                                       /*!< PC OUTDMSK: OUTDMSK3 Position           */
#define PC_OUTDMSK_OUTDMSK3_Msk               (0x01UL << PC_OUTDMSK_OUTDMSK3_Pos)                     /*!< PC OUTDMSK: OUTDMSK3 Mask               */
#define PC_OUTDMSK_OUTDMSK4_Pos               4                                                       /*!< PC OUTDMSK: OUTDMSK4 Position           */
#define PC_OUTDMSK_OUTDMSK4_Msk               (0x01UL << PC_OUTDMSK_OUTDMSK4_Pos)                     /*!< PC OUTDMSK: OUTDMSK4 Mask               */
#define PC_OUTDMSK_OUTDMSK5_Pos               5                                                       /*!< PC OUTDMSK: OUTDMSK5 Position           */
#define PC_OUTDMSK_OUTDMSK5_Msk               (0x01UL << PC_OUTDMSK_OUTDMSK5_Pos)                     /*!< PC OUTDMSK: OUTDMSK5 Mask               */
#define PC_OUTDMSK_OUTDMSK6_Pos               6                                                       /*!< PC OUTDMSK: OUTDMSK6 Position           */
#define PC_OUTDMSK_OUTDMSK6_Msk               (0x01UL << PC_OUTDMSK_OUTDMSK6_Pos)                     /*!< PC OUTDMSK: OUTDMSK6 Mask               */
#define PC_OUTDMSK_OUTDMSK7_Pos               7                                                       /*!< PC OUTDMSK: OUTDMSK7 Position           */
#define PC_OUTDMSK_OUTDMSK7_Msk               (0x01UL << PC_OUTDMSK_OUTDMSK7_Pos)                     /*!< PC OUTDMSK: OUTDMSK7 Mask               */

/* -----------------------------------  PC_DBCR  ---------------------------------- */
#define PC_DBCR_DBEN0_Pos                     0                                                       /*!< PC DBCR: DBEN0 Position                 */
#define PC_DBCR_DBEN0_Msk                     (0x01UL << PC_DBCR_DBEN0_Pos)                           /*!< PC DBCR: DBEN0 Mask                     */
#define PC_DBCR_DBEN1_Pos                     1                                                       /*!< PC DBCR: DBEN1 Position                 */
#define PC_DBCR_DBEN1_Msk                     (0x01UL << PC_DBCR_DBEN1_Pos)                           /*!< PC DBCR: DBEN1 Mask                     */
#define PC_DBCR_DBEN2_Pos                     2                                                       /*!< PC DBCR: DBEN2 Position                 */
#define PC_DBCR_DBEN2_Msk                     (0x01UL << PC_DBCR_DBEN2_Pos)                           /*!< PC DBCR: DBEN2 Mask                     */
#define PC_DBCR_DBEN3_Pos                     3                                                       /*!< PC DBCR: DBEN3 Position                 */
#define PC_DBCR_DBEN3_Msk                     (0x01UL << PC_DBCR_DBEN3_Pos)                           /*!< PC DBCR: DBEN3 Mask                     */
#define PC_DBCR_DBEN4_Pos                     4                                                       /*!< PC DBCR: DBEN4 Position                 */
#define PC_DBCR_DBEN4_Msk                     (0x01UL << PC_DBCR_DBEN4_Pos)                           /*!< PC DBCR: DBEN4 Mask                     */
#define PC_DBCR_DBEN5_Pos                     5                                                       /*!< PC DBCR: DBEN5 Position                 */
#define PC_DBCR_DBEN5_Msk                     (0x01UL << PC_DBCR_DBEN5_Pos)                           /*!< PC DBCR: DBEN5 Mask                     */
#define PC_DBCR_DBEN6_Pos                     6                                                       /*!< PC DBCR: DBEN6 Position                 */
#define PC_DBCR_DBEN6_Msk                     (0x01UL << PC_DBCR_DBEN6_Pos)                           /*!< PC DBCR: DBEN6 Mask                     */
#define PC_DBCR_DBEN7_Pos                     7                                                       /*!< PC DBCR: DBEN7 Position                 */
#define PC_DBCR_DBEN7_Msk                     (0x01UL << PC_DBCR_DBEN7_Pos)                           /*!< PC DBCR: DBEN7 Mask                     */

/* -----------------------------------  PC_IER  ----------------------------------- */
#define PC_IER_P0_Pos                         0                                                       /*!< PC IER: P0 Position                     */
#define PC_IER_P0_Msk                         (0x03UL << PC_IER_P0_Pos)                               /*!< PC IER: P0 Mask                         */
#define PC_IER_P1_Pos                         2                                                       /*!< PC IER: P1 Position                     */
#define PC_IER_P1_Msk                         (0x03UL << PC_IER_P1_Pos)                               /*!< PC IER: P1 Mask                         */
#define PC_IER_P2_Pos                         4                                                       /*!< PC IER: P2 Position                     */
#define PC_IER_P2_Msk                         (0x03UL << PC_IER_P2_Pos)                               /*!< PC IER: P2 Mask                         */
#define PC_IER_P3_Pos                         6                                                       /*!< PC IER: P3 Position                     */
#define PC_IER_P3_Msk                         (0x03UL << PC_IER_P3_Pos)                               /*!< PC IER: P3 Mask                         */
#define PC_IER_P4_Pos                         8                                                       /*!< PC IER: P4 Position                     */
#define PC_IER_P4_Msk                         (0x03UL << PC_IER_P4_Pos)                               /*!< PC IER: P4 Mask                         */
#define PC_IER_P5_Pos                         10                                                      /*!< PC IER: P5 Position                     */
#define PC_IER_P5_Msk                         (0x03UL << PC_IER_P5_Pos)                               /*!< PC IER: P5 Mask                         */
#define PC_IER_P6_Pos                         12                                                      /*!< PC IER: P6 Position                     */
#define PC_IER_P6_Msk                         (0x03UL << PC_IER_P6_Pos)                               /*!< PC IER: P6 Mask                         */
#define PC_IER_P7_Pos                         14                                                      /*!< PC IER: P7 Position                     */
#define PC_IER_P7_Msk                         (0x03UL << PC_IER_P7_Pos)                               /*!< PC IER: P7 Mask                         */


/* -----------------------------------  PC_ISR  ----------------------------------- */
#define PC_ISR_P0_Pos                         0                                                       /*!< PC ISR: P0 Position                     */
#define PC_ISR_P0_Msk                         (0x03UL << PC_ISR_P0_Pos)                               /*!< PC ISR: P0 Mask                         */
#define PC_ISR_P1_Pos                         2                                                       /*!< PC ISR: P1 Position                     */
#define PC_ISR_P1_Msk                         (0x03UL << PC_ISR_P1_Pos)                               /*!< PC ISR: P1 Mask                         */
#define PC_ISR_P2_Pos                         4                                                       /*!< PC ISR: P2 Position                     */
#define PC_ISR_P2_Msk                         (0x03UL << PC_ISR_P2_Pos)                               /*!< PC ISR: P2 Mask                         */
#define PC_ISR_P3_Pos                         6                                                       /*!< PC ISR: P3 Position                     */
#define PC_ISR_P3_Msk                         (0x03UL << PC_ISR_P3_Pos)                               /*!< PC ISR: P3 Mask                         */
#define PC_ISR_P4_Pos                         8                                                       /*!< PC ISR: P4 Position                     */
#define PC_ISR_P4_Msk                         (0x03UL << PC_ISR_P4_Pos)                               /*!< PC ISR: P4 Mask                         */
#define PC_ISR_P5_Pos                         10                                                      /*!< PC ISR: P5 Position                     */
#define PC_ISR_P5_Msk                         (0x03UL << PC_ISR_P5_Pos)                               /*!< PC ISR: P5 Mask                         */
#define PC_ISR_P6_Pos                         12                                                      /*!< PC ISR: P6 Position                     */
#define PC_ISR_P6_Msk                         (0x03UL << PC_ISR_P6_Pos)                               /*!< PC ISR: P6 Mask                         */
#define PC_ISR_P7_Pos                         14                                                      /*!< PC ISR: P7 Position                     */
#define PC_ISR_P7_Msk                         (0x03UL << PC_ISR_P7_Pos)                               /*!< PC ISR: P7 Mask                         */


/* -----------------------------------  PC_ICR  ----------------------------------- */
#define PC_ICR_P0_Pos                         0                                                       /*!< PC ICR: P0 Position                     */
#define PC_ICR_P0_Msk                         (0x03UL << PC_ICR_P0_Pos)                               /*!< PC ICR: P0 Mask                         */
#define PC_ICR_P1_Pos                         2                                                       /*!< PC ICR: P1 Position                     */
#define PC_ICR_P1_Msk                         (0x03UL << PC_ICR_P1_Pos)                               /*!< PC ICR: P1 Mask                         */
#define PC_ICR_P2_Pos                         4                                                       /*!< PC ICR: P2 Position                     */
#define PC_ICR_P2_Msk                         (0x03UL << PC_ICR_P2_Pos)                               /*!< PC ICR: P2 Mask                         */
#define PC_ICR_P3_Pos                         6                                                       /*!< PC ICR: P3 Position                     */
#define PC_ICR_P3_Msk                         (0x03UL << PC_ICR_P3_Pos)                               /*!< PC ICR: P3 Mask                         */
#define PC_ICR_P4_Pos                         8                                                       /*!< PC ICR: P4 Position                     */
#define PC_ICR_P4_Msk                         (0x03UL << PC_ICR_P4_Pos)                               /*!< PC ICR: P4 Mask                         */
#define PC_ICR_P5_Pos                         10                                                      /*!< PC ICR: P5 Position                     */
#define PC_ICR_P5_Msk                         (0x03UL << PC_ICR_P5_Pos)                               /*!< PC ICR: P5 Mask                         */
#define PC_ICR_P6_Pos                         12                                                      /*!< PC ICR: P6 Position                     */
#define PC_ICR_P6_Msk                         (0x03UL << PC_ICR_P6_Pos)                               /*!< PC ICR: P6 Mask                         */
#define PC_ICR_P7_Pos                         14                                                      /*!< PC ICR: P7 Position                     */
#define PC_ICR_P7_Msk                         (0x03UL << PC_ICR_P7_Pos)                               /*!< PC ICR: P7 Mask                         */



/* ================================================================================ */
/* ================           struct 'PD' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  PD_MOD  ----------------------------------- */
#define PD_MOD_MODE0_Pos                      0                                                       /*!< PD MOD: MODE0 Position                  */
#define PD_MOD_MODE0_Msk                      (0x03UL << PD_MOD_MODE0_Pos)                            /*!< PD MOD: MODE0 Mask                      */
#define PD_MOD_MODE1_Pos                      2                                                       /*!< PD MOD: MODE1 Position                  */
#define PD_MOD_MODE1_Msk                      (0x03UL << PD_MOD_MODE1_Pos)                            /*!< PD MOD: MODE1 Mask                      */
#define PD_MOD_MODE2_Pos                      4                                                       /*!< PD MOD: MODE2 Position                  */
#define PD_MOD_MODE2_Msk                      (0x03UL << PD_MOD_MODE2_Pos)                            /*!< PD MOD: MODE2 Mask                      */
#define PD_MOD_MODE3_Pos                      6                                                       /*!< PD MOD: MODE3 Position                  */
#define PD_MOD_MODE3_Msk                      (0x03UL << PD_MOD_MODE3_Pos)                            /*!< PD MOD: MODE3 Mask                      */
#define PD_MOD_MODE4_Pos                      8                                                       /*!< PD MOD: MODE4 Position                  */
#define PD_MOD_MODE4_Msk                      (0x03UL << PD_MOD_MODE4_Pos)                            /*!< PD MOD: MODE4 Mask                      */
#define PD_MOD_MODE5_Pos                      10                                                      /*!< PD MOD: MODE5 Position                  */
#define PD_MOD_MODE5_Msk                      (0x03UL << PD_MOD_MODE5_Pos)                            /*!< PD MOD: MODE5 Mask                      */
#define PD_MOD_MODE6_Pos                      12                                                      /*!< PD MOD: MODE6 Position                  */
#define PD_MOD_MODE6_Msk                      (0x03UL << PD_MOD_MODE6_Pos)                            /*!< PD MOD: MODE6 Mask                      */
#define PD_MOD_MODE7_Pos                      14                                                      /*!< PD MOD: MODE7 Position                  */
#define PD_MOD_MODE7_Msk                      (0x03UL << PD_MOD_MODE7_Pos)                            /*!< PD MOD: MODE7 Mask                      */


/* -----------------------------------  PD_TYP  ----------------------------------- */
#define PD_TYP_TYP0_Pos                       0                                                       /*!< PD TYP: TYP0 Position                   */
#define PD_TYP_TYP0_Msk                       (0x01UL << PD_TYP_TYP0_Pos)                             /*!< PD TYP: TYP0 Mask                       */
#define PD_TYP_TYP1_Pos                       1                                                       /*!< PD TYP: TYP1 Position                   */
#define PD_TYP_TYP1_Msk                       (0x01UL << PD_TYP_TYP1_Pos)                             /*!< PD TYP: TYP1 Mask                       */
#define PD_TYP_TYP2_Pos                       2                                                       /*!< PD TYP: TYP2 Position                   */
#define PD_TYP_TYP2_Msk                       (0x01UL << PD_TYP_TYP2_Pos)                             /*!< PD TYP: TYP2 Mask                       */
#define PD_TYP_TYP3_Pos                       3                                                       /*!< PD TYP: TYP3 Position                   */
#define PD_TYP_TYP3_Msk                       (0x01UL << PD_TYP_TYP3_Pos)                             /*!< PD TYP: TYP3 Mask                       */
#define PD_TYP_TYP4_Pos                       4                                                       /*!< PD TYP: TYP4 Position                   */
#define PD_TYP_TYP4_Msk                       (0x01UL << PD_TYP_TYP4_Pos)                             /*!< PD TYP: TYP4 Mask                       */
#define PD_TYP_TYP5_Pos                       5                                                       /*!< PD TYP: TYP5 Position                   */
#define PD_TYP_TYP5_Msk                       (0x01UL << PD_TYP_TYP5_Pos)                             /*!< PD TYP: TYP5 Mask                       */
#define PD_TYP_TYP6_Pos                       6                                                       /*!< PD TYP: TYP6 Position                   */
#define PD_TYP_TYP6_Msk                       (0x01UL << PD_TYP_TYP6_Pos)                             /*!< PD TYP: TYP6 Mask                       */
#define PD_TYP_TYP7_Pos                       7                                                       /*!< PD TYP: TYP7 Position                   */
#define PD_TYP_TYP7_Msk                       (0x01UL << PD_TYP_TYP7_Pos)                             /*!< PD TYP: TYP7 Mask                       */


/* ----------------------------------  PD_AFSR1  ---------------------------------- */
#define PD_AFSR1_AFSR0_Pos                    0                                                       /*!< PD AFSR1: AFSR0 Position                */
#define PD_AFSR1_AFSR0_Msk                    (0x0fUL << PD_AFSR1_AFSR0_Pos)                          /*!< PD AFSR1: AFSR0 Mask                    */
#define PD_AFSR1_AFSR1_Pos                    4                                                       /*!< PD AFSR1: AFSR1 Position                */
#define PD_AFSR1_AFSR1_Msk                    (0x0fUL << PD_AFSR1_AFSR1_Pos)                          /*!< PD AFSR1: AFSR1 Mask                    */
#define PD_AFSR1_AFSR2_Pos                    8                                                       /*!< PD AFSR1: AFSR2 Position                */
#define PD_AFSR1_AFSR2_Msk                    (0x0fUL << PD_AFSR1_AFSR2_Pos)                          /*!< PD AFSR1: AFSR2 Mask                    */
#define PD_AFSR1_AFSR3_Pos                    12                                                      /*!< PD AFSR1: AFSR3 Position                */
#define PD_AFSR1_AFSR3_Msk                    (0x0fUL << PD_AFSR1_AFSR3_Pos)                          /*!< PD AFSR1: AFSR3 Mask                    */
#define PD_AFSR1_AFSR4_Pos                    16                                                      /*!< PD AFSR1: AFSR4 Position                */
#define PD_AFSR1_AFSR4_Msk                    (0x0fUL << PD_AFSR1_AFSR4_Pos)                          /*!< PD AFSR1: AFSR4 Mask                    */
#define PD_AFSR1_AFSR5_Pos                    20                                                      /*!< PD AFSR1: AFSR5 Position                */
#define PD_AFSR1_AFSR5_Msk                    (0x0fUL << PD_AFSR1_AFSR5_Pos)                          /*!< PD AFSR1: AFSR5 Mask                    */
#define PD_AFSR1_AFSR6_Pos                    24                                                      /*!< PD AFSR1: AFSR6 Position                */
#define PD_AFSR1_AFSR6_Msk                    (0x0fUL << PD_AFSR1_AFSR6_Pos)                          /*!< PD AFSR1: AFSR6 Mask                    */
#define PD_AFSR1_AFSR7_Pos                    28                                                      /*!< PD AFSR1: AFSR7 Position                */
#define PD_AFSR1_AFSR7_Msk                    (0x0fUL << PD_AFSR1_AFSR7_Pos)                          /*!< PD AFSR1: AFSR7 Mask                    */



/* -----------------------------------  PD_PUPD  ---------------------------------- */
#define PD_PUPD_PUPD0_Pos                     0                                                       /*!< PD PUPD: PUPD0 Position                 */
#define PD_PUPD_PUPD0_Msk                     (0x03UL << PD_PUPD_PUPD0_Pos)                           /*!< PD PUPD: PUPD0 Mask                     */
#define PD_PUPD_PUPD1_Pos                     2                                                       /*!< PD PUPD: PUPD1 Position                 */
#define PD_PUPD_PUPD1_Msk                     (0x03UL << PD_PUPD_PUPD1_Pos)                           /*!< PD PUPD: PUPD1 Mask                     */
#define PD_PUPD_PUPD2_Pos                     4                                                       /*!< PD PUPD: PUPD2 Position                 */
#define PD_PUPD_PUPD2_Msk                     (0x03UL << PD_PUPD_PUPD2_Pos)                           /*!< PD PUPD: PUPD2 Mask                     */
#define PD_PUPD_PUPD3_Pos                     6                                                       /*!< PD PUPD: PUPD3 Position                 */
#define PD_PUPD_PUPD3_Msk                     (0x03UL << PD_PUPD_PUPD3_Pos)                           /*!< PD PUPD: PUPD3 Mask                     */
#define PD_PUPD_PUPD4_Pos                     8                                                       /*!< PD PUPD: PUPD4 Position                 */
#define PD_PUPD_PUPD4_Msk                     (0x03UL << PD_PUPD_PUPD4_Pos)                           /*!< PD PUPD: PUPD4 Mask                     */
#define PD_PUPD_PUPD5_Pos                     10                                                      /*!< PD PUPD: PUPD5 Position                 */
#define PD_PUPD_PUPD5_Msk                     (0x03UL << PD_PUPD_PUPD5_Pos)                           /*!< PD PUPD: PUPD5 Mask                     */
#define PD_PUPD_PUPD6_Pos                     12                                                      /*!< PD PUPD: PUPD6 Position                 */
#define PD_PUPD_PUPD6_Msk                     (0x03UL << PD_PUPD_PUPD6_Pos)                           /*!< PD PUPD: PUPD6 Mask                     */
#define PD_PUPD_PUPD7_Pos                     14                                                      /*!< PD PUPD: PUPD7 Position                 */
#define PD_PUPD_PUPD7_Msk                     (0x03UL << PD_PUPD_PUPD7_Pos)                           /*!< PD PUPD: PUPD7 Mask                     */


/* -----------------------------------  PD_INDR  ---------------------------------- */
#define PD_INDR_INDR0_Pos                     0                                                       /*!< PD INDR: INDR0 Position                 */
#define PD_INDR_INDR0_Msk                     (0x01UL << PD_INDR_INDR0_Pos)                           /*!< PD INDR: INDR0 Mask                     */
#define PD_INDR_INDR1_Pos                     1                                                       /*!< PD INDR: INDR1 Position                 */
#define PD_INDR_INDR1_Msk                     (0x01UL << PD_INDR_INDR1_Pos)                           /*!< PD INDR: INDR1 Mask                     */
#define PD_INDR_INDR2_Pos                     2                                                       /*!< PD INDR: INDR2 Position                 */
#define PD_INDR_INDR2_Msk                     (0x01UL << PD_INDR_INDR2_Pos)                           /*!< PD INDR: INDR2 Mask                     */
#define PD_INDR_INDR3_Pos                     3                                                       /*!< PD INDR: INDR3 Position                 */
#define PD_INDR_INDR3_Msk                     (0x01UL << PD_INDR_INDR3_Pos)                           /*!< PD INDR: INDR3 Mask                     */
#define PD_INDR_INDR4_Pos                     4                                                       /*!< PD INDR: INDR4 Position                 */
#define PD_INDR_INDR4_Msk                     (0x01UL << PD_INDR_INDR4_Pos)                           /*!< PD INDR: INDR4 Mask                     */
#define PD_INDR_INDR5_Pos                     5                                                       /*!< PD INDR: INDR5 Position                 */
#define PD_INDR_INDR5_Msk                     (0x01UL << PD_INDR_INDR5_Pos)                           /*!< PD INDR: INDR5 Mask                     */
#define PD_INDR_INDR6_Pos                     6                                                       /*!< PD INDR: INDR6 Position                 */
#define PD_INDR_INDR6_Msk                     (0x01UL << PD_INDR_INDR6_Pos)                           /*!< PD INDR: INDR6 Mask                     */
#define PD_INDR_INDR7_Pos                     7                                                       /*!< PD INDR: INDR7 Position                 */
#define PD_INDR_INDR7_Msk                     (0x01UL << PD_INDR_INDR7_Pos)                           /*!< PD INDR: INDR7 Mask                     */


/* ----------------------------------  PD_OUTDR  ---------------------------------- */
#define PD_OUTDR_OUTDR0_Pos                   0                                                       /*!< PD OUTDR: OUTDR0 Position               */
#define PD_OUTDR_OUTDR0_Msk                   (0x01UL << PD_OUTDR_OUTDR0_Pos)                         /*!< PD OUTDR: OUTDR0 Mask                   */
#define PD_OUTDR_OUTDR1_Pos                   1                                                       /*!< PD OUTDR: OUTDR1 Position               */
#define PD_OUTDR_OUTDR1_Msk                   (0x01UL << PD_OUTDR_OUTDR1_Pos)                         /*!< PD OUTDR: OUTDR1 Mask                   */
#define PD_OUTDR_OUTDR2_Pos                   2                                                       /*!< PD OUTDR: OUTDR2 Position               */
#define PD_OUTDR_OUTDR2_Msk                   (0x01UL << PD_OUTDR_OUTDR2_Pos)                         /*!< PD OUTDR: OUTDR2 Mask                   */
#define PD_OUTDR_OUTDR3_Pos                   3                                                       /*!< PD OUTDR: OUTDR3 Position               */
#define PD_OUTDR_OUTDR3_Msk                   (0x01UL << PD_OUTDR_OUTDR3_Pos)                         /*!< PD OUTDR: OUTDR3 Mask                   */
#define PD_OUTDR_OUTDR4_Pos                   4                                                       /*!< PD OUTDR: OUTDR4 Position               */
#define PD_OUTDR_OUTDR4_Msk                   (0x01UL << PD_OUTDR_OUTDR4_Pos)                         /*!< PD OUTDR: OUTDR4 Mask                   */
#define PD_OUTDR_OUTDR5_Pos                   5                                                       /*!< PD OUTDR: OUTDR5 Position               */
#define PD_OUTDR_OUTDR5_Msk                   (0x01UL << PD_OUTDR_OUTDR5_Pos)                         /*!< PD OUTDR: OUTDR5 Mask                   */
#define PD_OUTDR_OUTDR6_Pos                   6                                                       /*!< PD OUTDR: OUTDR6 Position               */
#define PD_OUTDR_OUTDR6_Msk                   (0x01UL << PD_OUTDR_OUTDR6_Pos)                         /*!< PD OUTDR: OUTDR6 Mask                   */
#define PD_OUTDR_OUTDR7_Pos                   7                                                       /*!< PD OUTDR: OUTDR7 Position               */
#define PD_OUTDR_OUTDR7_Msk                   (0x01UL << PD_OUTDR_OUTDR7_Pos)                         /*!< PD OUTDR: OUTDR7 Mask                   */

/* -----------------------------------  PD_BSR  ----------------------------------- */
#define PD_BSR_BSR0_Pos                       0                                                       /*!< PD BSR: BSR0 Position                   */
#define PD_BSR_BSR0_Msk                       (0x01UL << PD_BSR_BSR0_Pos)                             /*!< PD BSR: BSR0 Mask                       */
#define PD_BSR_BSR1_Pos                       1                                                       /*!< PD BSR: BSR1 Position                   */
#define PD_BSR_BSR1_Msk                       (0x01UL << PD_BSR_BSR1_Pos)                             /*!< PD BSR: BSR1 Mask                       */
#define PD_BSR_BSR2_Pos                       2                                                       /*!< PD BSR: BSR2 Position                   */
#define PD_BSR_BSR2_Msk                       (0x01UL << PD_BSR_BSR2_Pos)                             /*!< PD BSR: BSR2 Mask                       */
#define PD_BSR_BSR3_Pos                       3                                                       /*!< PD BSR: BSR3 Position                   */
#define PD_BSR_BSR3_Msk                       (0x01UL << PD_BSR_BSR3_Pos)                             /*!< PD BSR: BSR3 Mask                       */
#define PD_BSR_BSR4_Pos                       4                                                       /*!< PD BSR: BSR4 Position                   */
#define PD_BSR_BSR4_Msk                       (0x01UL << PD_BSR_BSR4_Pos)                             /*!< PD BSR: BSR4 Mask                       */
#define PD_BSR_BSR5_Pos                       5                                                       /*!< PD BSR: BSR5 Position                   */
#define PD_BSR_BSR5_Msk                       (0x01UL << PD_BSR_BSR5_Pos)                             /*!< PD BSR: BSR5 Mask                       */
#define PD_BSR_BSR6_Pos                       6                                                       /*!< PD BSR: BSR6 Position                   */
#define PD_BSR_BSR6_Msk                       (0x01UL << PD_BSR_BSR6_Pos)                             /*!< PD BSR: BSR6 Mask                       */
#define PD_BSR_BSR7_Pos                       7                                                       /*!< PD BSR: BSR7 Position                   */
#define PD_BSR_BSR7_Msk                       (0x01UL << PD_BSR_BSR7_Pos)                             /*!< PD BSR: BSR7 Mask                       */


/* -----------------------------------  PD_BCR  ----------------------------------- */
#define PD_BCR_BCR0_Pos                       0                                                       /*!< PD BCR: BCR0 Position                   */
#define PD_BCR_BCR0_Msk                       (0x01UL << PD_BCR_BCR0_Pos)                             /*!< PD BCR: BCR0 Mask                       */
#define PD_BCR_BCR1_Pos                       1                                                       /*!< PD BCR: BCR1 Position                   */
#define PD_BCR_BCR1_Msk                       (0x01UL << PD_BCR_BCR1_Pos)                             /*!< PD BCR: BCR1 Mask                       */
#define PD_BCR_BCR2_Pos                       2                                                       /*!< PD BCR: BCR2 Position                   */
#define PD_BCR_BCR2_Msk                       (0x01UL << PD_BCR_BCR2_Pos)                             /*!< PD BCR: BCR2 Mask                       */
#define PD_BCR_BCR3_Pos                       3                                                       /*!< PD BCR: BCR3 Position                   */
#define PD_BCR_BCR3_Msk                       (0x01UL << PD_BCR_BCR3_Pos)                             /*!< PD BCR: BCR3 Mask                       */
#define PD_BCR_BCR4_Pos                       4                                                       /*!< PD BCR: BCR4 Position                   */
#define PD_BCR_BCR4_Msk                       (0x01UL << PD_BCR_BCR4_Pos)                             /*!< PD BCR: BCR4 Mask                       */
#define PD_BCR_BCR5_Pos                       5                                                       /*!< PD BCR: BCR5 Position                   */
#define PD_BCR_BCR5_Msk                       (0x01UL << PD_BCR_BCR5_Pos)                             /*!< PD BCR: BCR5 Mask                       */
#define PD_BCR_BCR6_Pos                       6                                                       /*!< PD BCR: BCR6 Position                   */
#define PD_BCR_BCR6_Msk                       (0x01UL << PD_BCR_BCR6_Pos)                             /*!< PD BCR: BCR6 Mask                       */
#define PD_BCR_BCR7_Pos                       7                                                       /*!< PD BCR: BCR7 Position                   */
#define PD_BCR_BCR7_Msk                       (0x01UL << PD_BCR_BCR7_Pos)                             /*!< PD BCR: BCR7 Mask                       */


/* ---------------------------------  PD_OUTDMSK  --------------------------------- */
#define PD_OUTDMSK_OUTDMSK0_Pos               0                                                       /*!< PD OUTDMSK: OUTDMSK0 Position           */
#define PD_OUTDMSK_OUTDMSK0_Msk               (0x01UL << PD_OUTDMSK_OUTDMSK0_Pos)                     /*!< PD OUTDMSK: OUTDMSK0 Mask               */
#define PD_OUTDMSK_OUTDMSK1_Pos               1                                                       /*!< PD OUTDMSK: OUTDMSK1 Position           */
#define PD_OUTDMSK_OUTDMSK1_Msk               (0x01UL << PD_OUTDMSK_OUTDMSK1_Pos)                     /*!< PD OUTDMSK: OUTDMSK1 Mask               */
#define PD_OUTDMSK_OUTDMSK2_Pos               2                                                       /*!< PD OUTDMSK: OUTDMSK2 Position           */
#define PD_OUTDMSK_OUTDMSK2_Msk               (0x01UL << PD_OUTDMSK_OUTDMSK2_Pos)                     /*!< PD OUTDMSK: OUTDMSK2 Mask               */
#define PD_OUTDMSK_OUTDMSK3_Pos               3                                                       /*!< PD OUTDMSK: OUTDMSK3 Position           */
#define PD_OUTDMSK_OUTDMSK3_Msk               (0x01UL << PD_OUTDMSK_OUTDMSK3_Pos)                     /*!< PD OUTDMSK: OUTDMSK3 Mask               */
#define PD_OUTDMSK_OUTDMSK4_Pos               4                                                       /*!< PD OUTDMSK: OUTDMSK4 Position           */
#define PD_OUTDMSK_OUTDMSK4_Msk               (0x01UL << PD_OUTDMSK_OUTDMSK4_Pos)                     /*!< PD OUTDMSK: OUTDMSK4 Mask               */
#define PD_OUTDMSK_OUTDMSK5_Pos               5                                                       /*!< PD OUTDMSK: OUTDMSK5 Position           */
#define PD_OUTDMSK_OUTDMSK5_Msk               (0x01UL << PD_OUTDMSK_OUTDMSK5_Pos)                     /*!< PD OUTDMSK: OUTDMSK5 Mask               */
#define PD_OUTDMSK_OUTDMSK6_Pos               6                                                       /*!< PD OUTDMSK: OUTDMSK6 Position           */
#define PD_OUTDMSK_OUTDMSK6_Msk               (0x01UL << PD_OUTDMSK_OUTDMSK6_Pos)                     /*!< PD OUTDMSK: OUTDMSK6 Mask               */
#define PD_OUTDMSK_OUTDMSK7_Pos               7                                                       /*!< PD OUTDMSK: OUTDMSK7 Position           */
#define PD_OUTDMSK_OUTDMSK7_Msk               (0x01UL << PD_OUTDMSK_OUTDMSK7_Pos)                     /*!< PD OUTDMSK: OUTDMSK7 Mask               */


/* -----------------------------------  PD_DBCR  ---------------------------------- */
#define PD_DBCR_DBEN0_Pos                     0                                                       /*!< PD DBCR: DBEN0 Position                 */
#define PD_DBCR_DBEN0_Msk                     (0x01UL << PD_DBCR_DBEN0_Pos)                           /*!< PD DBCR: DBEN0 Mask                     */
#define PD_DBCR_DBEN1_Pos                     1                                                       /*!< PD DBCR: DBEN1 Position                 */
#define PD_DBCR_DBEN1_Msk                     (0x01UL << PD_DBCR_DBEN1_Pos)                           /*!< PD DBCR: DBEN1 Mask                     */
#define PD_DBCR_DBEN2_Pos                     2                                                       /*!< PD DBCR: DBEN2 Position                 */
#define PD_DBCR_DBEN2_Msk                     (0x01UL << PD_DBCR_DBEN2_Pos)                           /*!< PD DBCR: DBEN2 Mask                     */
#define PD_DBCR_DBEN3_Pos                     3                                                       /*!< PD DBCR: DBEN3 Position                 */
#define PD_DBCR_DBEN3_Msk                     (0x01UL << PD_DBCR_DBEN3_Pos)                           /*!< PD DBCR: DBEN3 Mask                     */
#define PD_DBCR_DBEN4_Pos                     4                                                       /*!< PD DBCR: DBEN4 Position                 */
#define PD_DBCR_DBEN4_Msk                     (0x01UL << PD_DBCR_DBEN4_Pos)                           /*!< PD DBCR: DBEN4 Mask                     */
#define PD_DBCR_DBEN5_Pos                     5                                                       /*!< PD DBCR: DBEN5 Position                 */
#define PD_DBCR_DBEN5_Msk                     (0x01UL << PD_DBCR_DBEN5_Pos)                           /*!< PD DBCR: DBEN5 Mask                     */
#define PD_DBCR_DBEN6_Pos                     6                                                       /*!< PD DBCR: DBEN6 Position                 */
#define PD_DBCR_DBEN6_Msk                     (0x01UL << PD_DBCR_DBEN6_Pos)                           /*!< PD DBCR: DBEN6 Mask                     */
#define PD_DBCR_DBEN7_Pos                     7                                                       /*!< PD DBCR: DBEN7 Position                 */
#define PD_DBCR_DBEN7_Msk                     (0x01UL << PD_DBCR_DBEN7_Pos)                           /*!< PD DBCR: DBEN7 Mask                     */


/* -----------------------------------  PD_IER  ----------------------------------- */
#define PD_IER_P0_Pos                         0                                                       /*!< PD IER: P0 Position                     */
#define PD_IER_P0_Msk                         (0x03UL << PD_IER_P0_Pos)                               /*!< PD IER: P0 Mask                         */
#define PD_IER_P1_Pos                         2                                                       /*!< PD IER: P1 Position                     */
#define PD_IER_P1_Msk                         (0x03UL << PD_IER_P1_Pos)                               /*!< PD IER: P1 Mask                         */
#define PD_IER_P2_Pos                         4                                                       /*!< PD IER: P2 Position                     */
#define PD_IER_P2_Msk                         (0x03UL << PD_IER_P2_Pos)                               /*!< PD IER: P2 Mask                         */
#define PD_IER_P3_Pos                         6                                                       /*!< PD IER: P3 Position                     */
#define PD_IER_P3_Msk                         (0x03UL << PD_IER_P3_Pos)                               /*!< PD IER: P3 Mask                         */
#define PD_IER_P4_Pos                         8                                                       /*!< PD IER: P4 Position                     */
#define PD_IER_P4_Msk                         (0x03UL << PD_IER_P4_Pos)                               /*!< PD IER: P4 Mask                         */
#define PD_IER_P5_Pos                         10                                                      /*!< PD IER: P5 Position                     */
#define PD_IER_P5_Msk                         (0x03UL << PD_IER_P5_Pos)                               /*!< PD IER: P5 Mask                         */
#define PD_IER_P6_Pos                         12                                                      /*!< PD IER: P6 Position                     */
#define PD_IER_P6_Msk                         (0x03UL << PD_IER_P6_Pos)                               /*!< PD IER: P6 Mask                         */
#define PD_IER_P7_Pos                         14                                                      /*!< PD IER: P7 Position                     */
#define PD_IER_P7_Msk                         (0x03UL << PD_IER_P7_Pos)                               /*!< PD IER: P7 Mask                         */


/* -----------------------------------  PD_ISR  ----------------------------------- */
#define PD_ISR_P0_Pos                         0                                                       /*!< PD ISR: P0 Position                     */
#define PD_ISR_P0_Msk                         (0x03UL << PD_ISR_P0_Pos)                               /*!< PD ISR: P0 Mask                         */
#define PD_ISR_P1_Pos                         2                                                       /*!< PD ISR: P1 Position                     */
#define PD_ISR_P1_Msk                         (0x03UL << PD_ISR_P1_Pos)                               /*!< PD ISR: P1 Mask                         */
#define PD_ISR_P2_Pos                         4                                                       /*!< PD ISR: P2 Position                     */
#define PD_ISR_P2_Msk                         (0x03UL << PD_ISR_P2_Pos)                               /*!< PD ISR: P2 Mask                         */
#define PD_ISR_P3_Pos                         6                                                       /*!< PD ISR: P3 Position                     */
#define PD_ISR_P3_Msk                         (0x03UL << PD_ISR_P3_Pos)                               /*!< PD ISR: P3 Mask                         */
#define PD_ISR_P4_Pos                         8                                                       /*!< PD ISR: P4 Position                     */
#define PD_ISR_P4_Msk                         (0x03UL << PD_ISR_P4_Pos)                               /*!< PD ISR: P4 Mask                         */
#define PD_ISR_P5_Pos                         10                                                      /*!< PD ISR: P5 Position                     */
#define PD_ISR_P5_Msk                         (0x03UL << PD_ISR_P5_Pos)                               /*!< PD ISR: P5 Mask                         */
#define PD_ISR_P6_Pos                         12                                                      /*!< PD ISR: P6 Position                     */
#define PD_ISR_P6_Msk                         (0x03UL << PD_ISR_P6_Pos)                               /*!< PD ISR: P6 Mask                         */
#define PD_ISR_P7_Pos                         14                                                      /*!< PD ISR: P7 Position                     */
#define PD_ISR_P7_Msk                         (0x03UL << PD_ISR_P7_Pos)                               /*!< PD ISR: P7 Mask                         */


/* -----------------------------------  PD_ICR  ----------------------------------- */
#define PD_ICR_P0_Pos                         0                                                       /*!< PD ICR: P0 Position                     */
#define PD_ICR_P0_Msk                         (0x03UL << PD_ICR_P0_Pos)                               /*!< PD ICR: P0 Mask                         */
#define PD_ICR_P1_Pos                         2                                                       /*!< PD ICR: P1 Position                     */
#define PD_ICR_P1_Msk                         (0x03UL << PD_ICR_P1_Pos)                               /*!< PD ICR: P1 Mask                         */
#define PD_ICR_P2_Pos                         4                                                       /*!< PD ICR: P2 Position                     */
#define PD_ICR_P2_Msk                         (0x03UL << PD_ICR_P2_Pos)                               /*!< PD ICR: P2 Mask                         */
#define PD_ICR_P3_Pos                         6                                                       /*!< PD ICR: P3 Position                     */
#define PD_ICR_P3_Msk                         (0x03UL << PD_ICR_P3_Pos)                               /*!< PD ICR: P3 Mask                         */
#define PD_ICR_P4_Pos                         8                                                       /*!< PD ICR: P4 Position                     */
#define PD_ICR_P4_Msk                         (0x03UL << PD_ICR_P4_Pos)                               /*!< PD ICR: P4 Mask                         */
#define PD_ICR_P5_Pos                         10                                                      /*!< PD ICR: P5 Position                     */
#define PD_ICR_P5_Msk                         (0x03UL << PD_ICR_P5_Pos)                               /*!< PD ICR: P5 Mask                         */
#define PD_ICR_P6_Pos                         12                                                      /*!< PD ICR: P6 Position                     */
#define PD_ICR_P6_Msk                         (0x03UL << PD_ICR_P6_Pos)                               /*!< PD ICR: P6 Mask                         */
#define PD_ICR_P7_Pos                         14                                                      /*!< PD ICR: P7 Position                     */
#define PD_ICR_P7_Msk                         (0x03UL << PD_ICR_P7_Pos)                               /*!< PD ICR: P7 Mask                         */



/* ================================================================================ */
/* ================           struct 'PE' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  PE_MOD  ----------------------------------- */
#define PE_MOD_MODE0_Pos                      0                                                       /*!< PE MOD: MODE0 Position                  */
#define PE_MOD_MODE0_Msk                      (0x03UL << PE_MOD_MODE0_Pos)                            /*!< PE MOD: MODE0 Mask                      */
#define PE_MOD_MODE1_Pos                      2                                                       /*!< PE MOD: MODE1 Position                  */
#define PE_MOD_MODE1_Msk                      (0x03UL << PE_MOD_MODE1_Pos)                            /*!< PE MOD: MODE1 Mask                      */
#define PE_MOD_MODE2_Pos                      4                                                       /*!< PE MOD: MODE2 Position                  */
#define PE_MOD_MODE2_Msk                      (0x03UL << PE_MOD_MODE2_Pos)                            /*!< PE MOD: MODE2 Mask                      */
#define PE_MOD_MODE3_Pos                      6                                                       /*!< PE MOD: MODE3 Position                  */
#define PE_MOD_MODE3_Msk                      (0x03UL << PE_MOD_MODE3_Pos)                            /*!< PE MOD: MODE3 Mask                      */
#define PE_MOD_MODE4_Pos                      8                                                       /*!< PE MOD: MODE4 Position                  */
#define PE_MOD_MODE4_Msk                      (0x03UL << PE_MOD_MODE4_Pos)                            /*!< PE MOD: MODE4 Mask                      */
#define PE_MOD_MODE5_Pos                      10                                                      /*!< PE MOD: MODE5 Position                  */
#define PE_MOD_MODE5_Msk                      (0x03UL << PE_MOD_MODE5_Pos)                            /*!< PE MOD: MODE5 Mask                      */
#define PE_MOD_MODE6_Pos                      12                                                      /*!< PE MOD: MODE6 Position                  */
#define PE_MOD_MODE6_Msk                      (0x03UL << PE_MOD_MODE6_Pos)                            /*!< PE MOD: MODE6 Mask                      */
#define PE_MOD_MODE7_Pos                      14                                                      /*!< PE MOD: MODE7 Position                  */
#define PE_MOD_MODE7_Msk                      (0x03UL << PE_MOD_MODE7_Pos)                            /*!< PE MOD: MODE7 Mask                      */


/* -----------------------------------  PE_TYP  ----------------------------------- */
#define PE_TYP_TYP0_Pos                       0                                                       /*!< PE TYP: TYP0 Position                   */
#define PE_TYP_TYP0_Msk                       (0x01UL << PE_TYP_TYP0_Pos)                             /*!< PE TYP: TYP0 Mask                       */
#define PE_TYP_TYP1_Pos                       1                                                       /*!< PE TYP: TYP1 Position                   */
#define PE_TYP_TYP1_Msk                       (0x01UL << PE_TYP_TYP1_Pos)                             /*!< PE TYP: TYP1 Mask                       */
#define PE_TYP_TYP2_Pos                       2                                                       /*!< PE TYP: TYP2 Position                   */
#define PE_TYP_TYP2_Msk                       (0x01UL << PE_TYP_TYP2_Pos)                             /*!< PE TYP: TYP2 Mask                       */
#define PE_TYP_TYP3_Pos                       3                                                       /*!< PE TYP: TYP3 Position                   */
#define PE_TYP_TYP3_Msk                       (0x01UL << PE_TYP_TYP3_Pos)                             /*!< PE TYP: TYP3 Mask                       */
#define PE_TYP_TYP4_Pos                       4                                                       /*!< PE TYP: TYP4 Position                   */
#define PE_TYP_TYP4_Msk                       (0x01UL << PE_TYP_TYP4_Pos)                             /*!< PE TYP: TYP4 Mask                       */
#define PE_TYP_TYP5_Pos                       5                                                       /*!< PE TYP: TYP5 Position                   */
#define PE_TYP_TYP5_Msk                       (0x01UL << PE_TYP_TYP5_Pos)                             /*!< PE TYP: TYP5 Mask                       */
#define PE_TYP_TYP6_Pos                       6                                                       /*!< PE TYP: TYP6 Position                   */
#define PE_TYP_TYP6_Msk                       (0x01UL << PE_TYP_TYP6_Pos)                             /*!< PE TYP: TYP6 Mask                       */
#define PE_TYP_TYP7_Pos                       7                                                       /*!< PE TYP: TYP7 Position                   */
#define PE_TYP_TYP7_Msk                       (0x01UL << PE_TYP_TYP7_Pos)                             /*!< PE TYP: TYP7 Mask                       */


/* ----------------------------------  PE_AFSR1  ---------------------------------- */
#define PE_AFSR1_AFSR0_Pos                    0                                                       /*!< PE AFSR1: AFSR0 Position                */
#define PE_AFSR1_AFSR0_Msk                    (0x0fUL << PE_AFSR1_AFSR0_Pos)                          /*!< PE AFSR1: AFSR0 Mask                    */
#define PE_AFSR1_AFSR1_Pos                    4                                                       /*!< PE AFSR1: AFSR1 Position                */
#define PE_AFSR1_AFSR1_Msk                    (0x0fUL << PE_AFSR1_AFSR1_Pos)                          /*!< PE AFSR1: AFSR1 Mask                    */
#define PE_AFSR1_AFSR2_Pos                    8                                                       /*!< PE AFSR1: AFSR2 Position                */
#define PE_AFSR1_AFSR2_Msk                    (0x0fUL << PE_AFSR1_AFSR2_Pos)                          /*!< PE AFSR1: AFSR2 Mask                    */
#define PE_AFSR1_AFSR3_Pos                    12                                                      /*!< PE AFSR1: AFSR3 Position                */
#define PE_AFSR1_AFSR3_Msk                    (0x0fUL << PE_AFSR1_AFSR3_Pos)                          /*!< PE AFSR1: AFSR3 Mask                    */
#define PE_AFSR1_AFSR4_Pos                    16                                                      /*!< PE AFSR1: AFSR4 Position                */
#define PE_AFSR1_AFSR4_Msk                    (0x0fUL << PE_AFSR1_AFSR4_Pos)                          /*!< PE AFSR1: AFSR4 Mask                    */
#define PE_AFSR1_AFSR5_Pos                    20                                                      /*!< PE AFSR1: AFSR5 Position                */
#define PE_AFSR1_AFSR5_Msk                    (0x0fUL << PE_AFSR1_AFSR5_Pos)                          /*!< PE AFSR1: AFSR5 Mask                    */
#define PE_AFSR1_AFSR6_Pos                    24                                                      /*!< PE AFSR1: AFSR6 Position                */
#define PE_AFSR1_AFSR6_Msk                    (0x0fUL << PE_AFSR1_AFSR6_Pos)                          /*!< PE AFSR1: AFSR6 Mask                    */
#define PE_AFSR1_AFSR7_Pos                    28                                                      /*!< PE AFSR1: AFSR7 Position                */
#define PE_AFSR1_AFSR7_Msk                    (0x0fUL << PE_AFSR1_AFSR7_Pos)                          /*!< PE AFSR1: AFSR7 Mask                    */


/* -----------------------------------  PE_PUPD  ---------------------------------- */
#define PE_PUPD_PUPD0_Pos                     0                                                       /*!< PE PUPD: PUPD0 Position                 */
#define PE_PUPD_PUPD0_Msk                     (0x03UL << PE_PUPD_PUPD0_Pos)                           /*!< PE PUPD: PUPD0 Mask                     */
#define PE_PUPD_PUPD1_Pos                     2                                                       /*!< PE PUPD: PUPD1 Position                 */
#define PE_PUPD_PUPD1_Msk                     (0x03UL << PE_PUPD_PUPD1_Pos)                           /*!< PE PUPD: PUPD1 Mask                     */
#define PE_PUPD_PUPD2_Pos                     4                                                       /*!< PE PUPD: PUPD2 Position                 */
#define PE_PUPD_PUPD2_Msk                     (0x03UL << PE_PUPD_PUPD2_Pos)                           /*!< PE PUPD: PUPD2 Mask                     */
#define PE_PUPD_PUPD3_Pos                     6                                                       /*!< PE PUPD: PUPD3 Position                 */
#define PE_PUPD_PUPD3_Msk                     (0x03UL << PE_PUPD_PUPD3_Pos)                           /*!< PE PUPD: PUPD3 Mask                     */
#define PE_PUPD_PUPD4_Pos                     8                                                       /*!< PE PUPD: PUPD4 Position                 */
#define PE_PUPD_PUPD4_Msk                     (0x03UL << PE_PUPD_PUPD4_Pos)                           /*!< PE PUPD: PUPD4 Mask                     */
#define PE_PUPD_PUPD5_Pos                     10                                                      /*!< PE PUPD: PUPD5 Position                 */
#define PE_PUPD_PUPD5_Msk                     (0x03UL << PE_PUPD_PUPD5_Pos)                           /*!< PE PUPD: PUPD5 Mask                     */
#define PE_PUPD_PUPD6_Pos                     12                                                      /*!< PE PUPD: PUPD6 Position                 */
#define PE_PUPD_PUPD6_Msk                     (0x03UL << PE_PUPD_PUPD6_Pos)                           /*!< PE PUPD: PUPD6 Mask                     */
#define PE_PUPD_PUPD7_Pos                     14                                                      /*!< PE PUPD: PUPD7 Position                 */
#define PE_PUPD_PUPD7_Msk                     (0x03UL << PE_PUPD_PUPD7_Pos)                           /*!< PE PUPD: PUPD7 Mask                     */


/* -----------------------------------  PE_INDR  ---------------------------------- */
#define PE_INDR_INDR0_Pos                     0                                                       /*!< PE INDR: INDR0 Position                 */
#define PE_INDR_INDR0_Msk                     (0x01UL << PE_INDR_INDR0_Pos)                           /*!< PE INDR: INDR0 Mask                     */
#define PE_INDR_INDR1_Pos                     1                                                       /*!< PE INDR: INDR1 Position                 */
#define PE_INDR_INDR1_Msk                     (0x01UL << PE_INDR_INDR1_Pos)                           /*!< PE INDR: INDR1 Mask                     */
#define PE_INDR_INDR2_Pos                     2                                                       /*!< PE INDR: INDR2 Position                 */
#define PE_INDR_INDR2_Msk                     (0x01UL << PE_INDR_INDR2_Pos)                           /*!< PE INDR: INDR2 Mask                     */
#define PE_INDR_INDR3_Pos                     3                                                       /*!< PE INDR: INDR3 Position                 */
#define PE_INDR_INDR3_Msk                     (0x01UL << PE_INDR_INDR3_Pos)                           /*!< PE INDR: INDR3 Mask                     */
#define PE_INDR_INDR4_Pos                     4                                                       /*!< PE INDR: INDR4 Position                 */
#define PE_INDR_INDR4_Msk                     (0x01UL << PE_INDR_INDR4_Pos)                           /*!< PE INDR: INDR4 Mask                     */
#define PE_INDR_INDR5_Pos                     5                                                       /*!< PE INDR: INDR5 Position                 */
#define PE_INDR_INDR5_Msk                     (0x01UL << PE_INDR_INDR5_Pos)                           /*!< PE INDR: INDR5 Mask                     */
#define PE_INDR_INDR6_Pos                     6                                                       /*!< PE INDR: INDR6 Position                 */
#define PE_INDR_INDR6_Msk                     (0x01UL << PE_INDR_INDR6_Pos)                           /*!< PE INDR: INDR6 Mask                     */
#define PE_INDR_INDR7_Pos                     7                                                       /*!< PE INDR: INDR7 Position                 */
#define PE_INDR_INDR7_Msk                     (0x01UL << PE_INDR_INDR7_Pos)                           /*!< PE INDR: INDR7 Mask                     */


/* ----------------------------------  PE_OUTDR  ---------------------------------- */
#define PE_OUTDR_OUTDR0_Pos                   0                                                       /*!< PE OUTDR: OUTDR0 Position               */
#define PE_OUTDR_OUTDR0_Msk                   (0x01UL << PE_OUTDR_OUTDR0_Pos)                         /*!< PE OUTDR: OUTDR0 Mask                   */
#define PE_OUTDR_OUTDR1_Pos                   1                                                       /*!< PE OUTDR: OUTDR1 Position               */
#define PE_OUTDR_OUTDR1_Msk                   (0x01UL << PE_OUTDR_OUTDR1_Pos)                         /*!< PE OUTDR: OUTDR1 Mask                   */
#define PE_OUTDR_OUTDR2_Pos                   2                                                       /*!< PE OUTDR: OUTDR2 Position               */
#define PE_OUTDR_OUTDR2_Msk                   (0x01UL << PE_OUTDR_OUTDR2_Pos)                         /*!< PE OUTDR: OUTDR2 Mask                   */
#define PE_OUTDR_OUTDR3_Pos                   3                                                       /*!< PE OUTDR: OUTDR3 Position               */
#define PE_OUTDR_OUTDR3_Msk                   (0x01UL << PE_OUTDR_OUTDR3_Pos)                         /*!< PE OUTDR: OUTDR3 Mask                   */
#define PE_OUTDR_OUTDR4_Pos                   4                                                       /*!< PE OUTDR: OUTDR4 Position               */
#define PE_OUTDR_OUTDR4_Msk                   (0x01UL << PE_OUTDR_OUTDR4_Pos)                         /*!< PE OUTDR: OUTDR4 Mask                   */
#define PE_OUTDR_OUTDR5_Pos                   5                                                       /*!< PE OUTDR: OUTDR5 Position               */
#define PE_OUTDR_OUTDR5_Msk                   (0x01UL << PE_OUTDR_OUTDR5_Pos)                         /*!< PE OUTDR: OUTDR5 Mask                   */
#define PE_OUTDR_OUTDR6_Pos                   6                                                       /*!< PE OUTDR: OUTDR6 Position               */
#define PE_OUTDR_OUTDR6_Msk                   (0x01UL << PE_OUTDR_OUTDR6_Pos)                         /*!< PE OUTDR: OUTDR6 Mask                   */
#define PE_OUTDR_OUTDR7_Pos                   7                                                       /*!< PE OUTDR: OUTDR7 Position               */
#define PE_OUTDR_OUTDR7_Msk                   (0x01UL << PE_OUTDR_OUTDR7_Pos)                         /*!< PE OUTDR: OUTDR7 Mask                   */


/* -----------------------------------  PE_BSR  ----------------------------------- */
#define PE_BSR_BSR0_Pos                       0                                                       /*!< PE BSR: BSR0 Position                   */
#define PE_BSR_BSR0_Msk                       (0x01UL << PE_BSR_BSR0_Pos)                             /*!< PE BSR: BSR0 Mask                       */
#define PE_BSR_BSR1_Pos                       1                                                       /*!< PE BSR: BSR1 Position                   */
#define PE_BSR_BSR1_Msk                       (0x01UL << PE_BSR_BSR1_Pos)                             /*!< PE BSR: BSR1 Mask                       */
#define PE_BSR_BSR2_Pos                       2                                                       /*!< PE BSR: BSR2 Position                   */
#define PE_BSR_BSR2_Msk                       (0x01UL << PE_BSR_BSR2_Pos)                             /*!< PE BSR: BSR2 Mask                       */
#define PE_BSR_BSR3_Pos                       3                                                       /*!< PE BSR: BSR3 Position                   */
#define PE_BSR_BSR3_Msk                       (0x01UL << PE_BSR_BSR3_Pos)                             /*!< PE BSR: BSR3 Mask                       */
#define PE_BSR_BSR4_Pos                       4                                                       /*!< PE BSR: BSR4 Position                   */
#define PE_BSR_BSR4_Msk                       (0x01UL << PE_BSR_BSR4_Pos)                             /*!< PE BSR: BSR4 Mask                       */
#define PE_BSR_BSR5_Pos                       5                                                       /*!< PE BSR: BSR5 Position                   */
#define PE_BSR_BSR5_Msk                       (0x01UL << PE_BSR_BSR5_Pos)                             /*!< PE BSR: BSR5 Mask                       */
#define PE_BSR_BSR6_Pos                       6                                                       /*!< PE BSR: BSR6 Position                   */
#define PE_BSR_BSR6_Msk                       (0x01UL << PE_BSR_BSR6_Pos)                             /*!< PE BSR: BSR6 Mask                       */
#define PE_BSR_BSR7_Pos                       7                                                       /*!< PE BSR: BSR7 Position                   */
#define PE_BSR_BSR7_Msk                       (0x01UL << PE_BSR_BSR7_Pos)                             /*!< PE BSR: BSR7 Mask                       */


/* -----------------------------------  PE_BCR  ----------------------------------- */
#define PE_BCR_BCR0_Pos                       0                                                       /*!< PE BCR: BCR0 Position                   */
#define PE_BCR_BCR0_Msk                       (0x01UL << PE_BCR_BCR0_Pos)                             /*!< PE BCR: BCR0 Mask                       */
#define PE_BCR_BCR1_Pos                       1                                                       /*!< PE BCR: BCR1 Position                   */
#define PE_BCR_BCR1_Msk                       (0x01UL << PE_BCR_BCR1_Pos)                             /*!< PE BCR: BCR1 Mask                       */
#define PE_BCR_BCR2_Pos                       2                                                       /*!< PE BCR: BCR2 Position                   */
#define PE_BCR_BCR2_Msk                       (0x01UL << PE_BCR_BCR2_Pos)                             /*!< PE BCR: BCR2 Mask                       */
#define PE_BCR_BCR3_Pos                       3                                                       /*!< PE BCR: BCR3 Position                   */
#define PE_BCR_BCR3_Msk                       (0x01UL << PE_BCR_BCR3_Pos)                             /*!< PE BCR: BCR3 Mask                       */
#define PE_BCR_BCR4_Pos                       4                                                       /*!< PE BCR: BCR4 Position                   */
#define PE_BCR_BCR4_Msk                       (0x01UL << PE_BCR_BCR4_Pos)                             /*!< PE BCR: BCR4 Mask                       */
#define PE_BCR_BCR5_Pos                       5                                                       /*!< PE BCR: BCR5 Position                   */
#define PE_BCR_BCR5_Msk                       (0x01UL << PE_BCR_BCR5_Pos)                             /*!< PE BCR: BCR5 Mask                       */
#define PE_BCR_BCR6_Pos                       6                                                       /*!< PE BCR: BCR6 Position                   */
#define PE_BCR_BCR6_Msk                       (0x01UL << PE_BCR_BCR6_Pos)                             /*!< PE BCR: BCR6 Mask                       */
#define PE_BCR_BCR7_Pos                       7                                                       /*!< PE BCR: BCR7 Position                   */
#define PE_BCR_BCR7_Msk                       (0x01UL << PE_BCR_BCR7_Pos)                             /*!< PE BCR: BCR7 Mask                       */


/* ---------------------------------  PE_OUTDMSK  --------------------------------- */
#define PE_OUTDMSK_OUTDMSK0_Pos               0                                                       /*!< PE OUTDMSK: OUTDMSK0 Position           */
#define PE_OUTDMSK_OUTDMSK0_Msk               (0x01UL << PE_OUTDMSK_OUTDMSK0_Pos)                     /*!< PE OUTDMSK: OUTDMSK0 Mask               */
#define PE_OUTDMSK_OUTDMSK1_Pos               1                                                       /*!< PE OUTDMSK: OUTDMSK1 Position           */
#define PE_OUTDMSK_OUTDMSK1_Msk               (0x01UL << PE_OUTDMSK_OUTDMSK1_Pos)                     /*!< PE OUTDMSK: OUTDMSK1 Mask               */
#define PE_OUTDMSK_OUTDMSK2_Pos               2                                                       /*!< PE OUTDMSK: OUTDMSK2 Position           */
#define PE_OUTDMSK_OUTDMSK2_Msk               (0x01UL << PE_OUTDMSK_OUTDMSK2_Pos)                     /*!< PE OUTDMSK: OUTDMSK2 Mask               */
#define PE_OUTDMSK_OUTDMSK3_Pos               3                                                       /*!< PE OUTDMSK: OUTDMSK3 Position           */
#define PE_OUTDMSK_OUTDMSK3_Msk               (0x01UL << PE_OUTDMSK_OUTDMSK3_Pos)                     /*!< PE OUTDMSK: OUTDMSK3 Mask               */
#define PE_OUTDMSK_OUTDMSK4_Pos               4                                                       /*!< PE OUTDMSK: OUTDMSK4 Position           */
#define PE_OUTDMSK_OUTDMSK4_Msk               (0x01UL << PE_OUTDMSK_OUTDMSK4_Pos)                     /*!< PE OUTDMSK: OUTDMSK4 Mask               */
#define PE_OUTDMSK_OUTDMSK5_Pos               5                                                       /*!< PE OUTDMSK: OUTDMSK5 Position           */
#define PE_OUTDMSK_OUTDMSK5_Msk               (0x01UL << PE_OUTDMSK_OUTDMSK5_Pos)                     /*!< PE OUTDMSK: OUTDMSK5 Mask               */
#define PE_OUTDMSK_OUTDMSK6_Pos               6                                                       /*!< PE OUTDMSK: OUTDMSK6 Position           */
#define PE_OUTDMSK_OUTDMSK6_Msk               (0x01UL << PE_OUTDMSK_OUTDMSK6_Pos)                     /*!< PE OUTDMSK: OUTDMSK6 Mask               */
#define PE_OUTDMSK_OUTDMSK7_Pos               7                                                       /*!< PE OUTDMSK: OUTDMSK7 Position           */
#define PE_OUTDMSK_OUTDMSK7_Msk               (0x01UL << PE_OUTDMSK_OUTDMSK7_Pos)                     /*!< PE OUTDMSK: OUTDMSK7 Mask               */


/* -----------------------------------  PE_DBCR  ---------------------------------- */
#define PE_DBCR_DBEN0_Pos                     0                                                       /*!< PE DBCR: DBEN0 Position                 */
#define PE_DBCR_DBEN0_Msk                     (0x01UL << PE_DBCR_DBEN0_Pos)                           /*!< PE DBCR: DBEN0 Mask                     */
#define PE_DBCR_DBEN1_Pos                     1                                                       /*!< PE DBCR: DBEN1 Position                 */
#define PE_DBCR_DBEN1_Msk                     (0x01UL << PE_DBCR_DBEN1_Pos)                           /*!< PE DBCR: DBEN1 Mask                     */
#define PE_DBCR_DBEN2_Pos                     2                                                       /*!< PE DBCR: DBEN2 Position                 */
#define PE_DBCR_DBEN2_Msk                     (0x01UL << PE_DBCR_DBEN2_Pos)                           /*!< PE DBCR: DBEN2 Mask                     */
#define PE_DBCR_DBEN3_Pos                     3                                                       /*!< PE DBCR: DBEN3 Position                 */
#define PE_DBCR_DBEN3_Msk                     (0x01UL << PE_DBCR_DBEN3_Pos)                           /*!< PE DBCR: DBEN3 Mask                     */
#define PE_DBCR_DBEN4_Pos                     4                                                       /*!< PE DBCR: DBEN4 Position                 */
#define PE_DBCR_DBEN4_Msk                     (0x01UL << PE_DBCR_DBEN4_Pos)                           /*!< PE DBCR: DBEN4 Mask                     */
#define PE_DBCR_DBEN5_Pos                     5                                                       /*!< PE DBCR: DBEN5 Position                 */
#define PE_DBCR_DBEN5_Msk                     (0x01UL << PE_DBCR_DBEN5_Pos)                           /*!< PE DBCR: DBEN5 Mask                     */
#define PE_DBCR_DBEN6_Pos                     6                                                       /*!< PE DBCR: DBEN6 Position                 */
#define PE_DBCR_DBEN6_Msk                     (0x01UL << PE_DBCR_DBEN6_Pos)                           /*!< PE DBCR: DBEN6 Mask                     */
#define PE_DBCR_DBEN7_Pos                     7                                                       /*!< PE DBCR: DBEN7 Position                 */
#define PE_DBCR_DBEN7_Msk                     (0x01UL << PE_DBCR_DBEN7_Pos)                           /*!< PE DBCR: DBEN7 Mask                     */


/* -----------------------------------  PE_IER  ----------------------------------- */
#define PE_IER_P0_Pos                         0                                                       /*!< PE IER: P0 Position                     */
#define PE_IER_P0_Msk                         (0x03UL << PE_IER_P0_Pos)                               /*!< PE IER: P0 Mask                         */
#define PE_IER_P1_Pos                         2                                                       /*!< PE IER: P1 Position                     */
#define PE_IER_P1_Msk                         (0x03UL << PE_IER_P1_Pos)                               /*!< PE IER: P1 Mask                         */
#define PE_IER_P2_Pos                         4                                                       /*!< PE IER: P2 Position                     */
#define PE_IER_P2_Msk                         (0x03UL << PE_IER_P2_Pos)                               /*!< PE IER: P2 Mask                         */
#define PE_IER_P3_Pos                         6                                                       /*!< PE IER: P3 Position                     */
#define PE_IER_P3_Msk                         (0x03UL << PE_IER_P3_Pos)                               /*!< PE IER: P3 Mask                         */
#define PE_IER_P4_Pos                         8                                                       /*!< PE IER: P4 Position                     */
#define PE_IER_P4_Msk                         (0x03UL << PE_IER_P4_Pos)                               /*!< PE IER: P4 Mask                         */
#define PE_IER_P5_Pos                         10                                                      /*!< PE IER: P5 Position                     */
#define PE_IER_P5_Msk                         (0x03UL << PE_IER_P5_Pos)                               /*!< PE IER: P5 Mask                         */
#define PE_IER_P6_Pos                         12                                                      /*!< PE IER: P6 Position                     */
#define PE_IER_P6_Msk                         (0x03UL << PE_IER_P6_Pos)                               /*!< PE IER: P6 Mask                         */
#define PE_IER_P7_Pos                         14                                                      /*!< PE IER: P7 Position                     */
#define PE_IER_P7_Msk                         (0x03UL << PE_IER_P7_Pos)                               /*!< PE IER: P7 Mask                         */


/* -----------------------------------  PE_ISR  ----------------------------------- */
#define PE_ISR_P0_Pos                         0                                                       /*!< PE ISR: P0 Position                     */
#define PE_ISR_P0_Msk                         (0x03UL << PE_ISR_P0_Pos)                               /*!< PE ISR: P0 Mask                         */
#define PE_ISR_P1_Pos                         2                                                       /*!< PE ISR: P1 Position                     */
#define PE_ISR_P1_Msk                         (0x03UL << PE_ISR_P1_Pos)                               /*!< PE ISR: P1 Mask                         */
#define PE_ISR_P2_Pos                         4                                                       /*!< PE ISR: P2 Position                     */
#define PE_ISR_P2_Msk                         (0x03UL << PE_ISR_P2_Pos)                               /*!< PE ISR: P2 Mask                         */
#define PE_ISR_P3_Pos                         6                                                       /*!< PE ISR: P3 Position                     */
#define PE_ISR_P3_Msk                         (0x03UL << PE_ISR_P3_Pos)                               /*!< PE ISR: P3 Mask                         */
#define PE_ISR_P4_Pos                         8                                                       /*!< PE ISR: P4 Position                     */
#define PE_ISR_P4_Msk                         (0x03UL << PE_ISR_P4_Pos)                               /*!< PE ISR: P4 Mask                         */
#define PE_ISR_P5_Pos                         10                                                      /*!< PE ISR: P5 Position                     */
#define PE_ISR_P5_Msk                         (0x03UL << PE_ISR_P5_Pos)                               /*!< PE ISR: P5 Mask                         */
#define PE_ISR_P6_Pos                         12                                                      /*!< PE ISR: P6 Position                     */
#define PE_ISR_P6_Msk                         (0x03UL << PE_ISR_P6_Pos)                               /*!< PE ISR: P6 Mask                         */
#define PE_ISR_P7_Pos                         14                                                      /*!< PE ISR: P7 Position                     */
#define PE_ISR_P7_Msk                         (0x03UL << PE_ISR_P7_Pos)                               /*!< PE ISR: P7 Mask                         */


/* -----------------------------------  PE_ICR  ----------------------------------- */
#define PE_ICR_P0_Pos                         0                                                       /*!< PE ICR: P0 Position                     */
#define PE_ICR_P0_Msk                         (0x03UL << PE_ICR_P0_Pos)                               /*!< PE ICR: P0 Mask                         */
#define PE_ICR_P1_Pos                         2                                                       /*!< PE ICR: P1 Position                     */
#define PE_ICR_P1_Msk                         (0x03UL << PE_ICR_P1_Pos)                               /*!< PE ICR: P1 Mask                         */
#define PE_ICR_P2_Pos                         4                                                       /*!< PE ICR: P2 Position                     */
#define PE_ICR_P2_Msk                         (0x03UL << PE_ICR_P2_Pos)                               /*!< PE ICR: P2 Mask                         */
#define PE_ICR_P3_Pos                         6                                                       /*!< PE ICR: P3 Position                     */
#define PE_ICR_P3_Msk                         (0x03UL << PE_ICR_P3_Pos)                               /*!< PE ICR: P3 Mask                         */
#define PE_ICR_P4_Pos                         8                                                       /*!< PE ICR: P4 Position                     */
#define PE_ICR_P4_Msk                         (0x03UL << PE_ICR_P4_Pos)                               /*!< PE ICR: P4 Mask                         */
#define PE_ICR_P5_Pos                         10                                                      /*!< PE ICR: P5 Position                     */
#define PE_ICR_P5_Msk                         (0x03UL << PE_ICR_P5_Pos)                               /*!< PE ICR: P5 Mask                         */
#define PE_ICR_P6_Pos                         12                                                      /*!< PE ICR: P6 Position                     */
#define PE_ICR_P6_Msk                         (0x03UL << PE_ICR_P6_Pos)                               /*!< PE ICR: P6 Mask                         */
#define PE_ICR_P7_Pos                         14                                                      /*!< PE ICR: P7 Position                     */
#define PE_ICR_P7_Msk                         (0x03UL << PE_ICR_P7_Pos)                               /*!< PE ICR: P7 Mask                         */



/* ================================================================================ */
/* ================           struct 'PF' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  PF_MOD  ----------------------------------- */
#define PF_MOD_MODE0_Pos                      0                                                       /*!< PF MOD: MODE0 Position                  */
#define PF_MOD_MODE0_Msk                      (0x03UL << PF_MOD_MODE0_Pos)                            /*!< PF MOD: MODE0 Mask                      */
#define PF_MOD_MODE1_Pos                      2                                                       /*!< PF MOD: MODE1 Position                  */
#define PF_MOD_MODE1_Msk                      (0x03UL << PF_MOD_MODE1_Pos)                            /*!< PF MOD: MODE1 Mask                      */
#define PF_MOD_MODE2_Pos                      4                                                       /*!< PF MOD: MODE2 Position                  */
#define PF_MOD_MODE2_Msk                      (0x03UL << PF_MOD_MODE2_Pos)                            /*!< PF MOD: MODE2 Mask                      */
#define PF_MOD_MODE3_Pos                      6                                                       /*!< PF MOD: MODE3 Position                  */
#define PF_MOD_MODE3_Msk                      (0x03UL << PF_MOD_MODE3_Pos)                            /*!< PF MOD: MODE3 Mask                      */
#define PF_MOD_MODE4_Pos                      8                                                       /*!< PF MOD: MODE4 Position                  */
#define PF_MOD_MODE4_Msk                      (0x03UL << PF_MOD_MODE4_Pos)                            /*!< PF MOD: MODE4 Mask                      */
#define PF_MOD_MODE5_Pos                      10                                                      /*!< PF MOD: MODE5 Position                  */
#define PF_MOD_MODE5_Msk                      (0x03UL << PF_MOD_MODE5_Pos)                            /*!< PF MOD: MODE5 Mask                      */
#define PF_MOD_MODE6_Pos                      12                                                      /*!< PF MOD: MODE6 Position                  */
#define PF_MOD_MODE6_Msk                      (0x03UL << PF_MOD_MODE6_Pos)                            /*!< PF MOD: MODE6 Mask                      */
#define PF_MOD_MODE7_Pos                      14                                                      /*!< PF MOD: MODE7 Position                  */
#define PF_MOD_MODE7_Msk                      (0x03UL << PF_MOD_MODE7_Pos)                            /*!< PF MOD: MODE7 Mask                      */


/* -----------------------------------  PF_TYP  ----------------------------------- */
#define PF_TYP_TYP0_Pos                       0                                                       /*!< PF TYP: TYP0 Position                   */
#define PF_TYP_TYP0_Msk                       (0x01UL << PF_TYP_TYP0_Pos)                             /*!< PF TYP: TYP0 Mask                       */
#define PF_TYP_TYP1_Pos                       1                                                       /*!< PF TYP: TYP1 Position                   */
#define PF_TYP_TYP1_Msk                       (0x01UL << PF_TYP_TYP1_Pos)                             /*!< PF TYP: TYP1 Mask                       */
#define PF_TYP_TYP2_Pos                       2                                                       /*!< PF TYP: TYP2 Position                   */
#define PF_TYP_TYP2_Msk                       (0x01UL << PF_TYP_TYP2_Pos)                             /*!< PF TYP: TYP2 Mask                       */
#define PF_TYP_TYP3_Pos                       3                                                       /*!< PF TYP: TYP3 Position                   */
#define PF_TYP_TYP3_Msk                       (0x01UL << PF_TYP_TYP3_Pos)                             /*!< PF TYP: TYP3 Mask                       */
#define PF_TYP_TYP4_Pos                       4                                                       /*!< PF TYP: TYP4 Position                   */
#define PF_TYP_TYP4_Msk                       (0x01UL << PF_TYP_TYP4_Pos)                             /*!< PF TYP: TYP4 Mask                       */
#define PF_TYP_TYP5_Pos                       5                                                       /*!< PF TYP: TYP5 Position                   */
#define PF_TYP_TYP5_Msk                       (0x01UL << PF_TYP_TYP5_Pos)                             /*!< PF TYP: TYP5 Mask                       */
#define PF_TYP_TYP6_Pos                       6                                                       /*!< PF TYP: TYP6 Position                   */
#define PF_TYP_TYP6_Msk                       (0x01UL << PF_TYP_TYP6_Pos)                             /*!< PF TYP: TYP6 Mask                       */
#define PF_TYP_TYP7_Pos                       7                                                       /*!< PF TYP: TYP7 Position                   */
#define PF_TYP_TYP7_Msk                       (0x01UL << PF_TYP_TYP7_Pos)                             /*!< PF TYP: TYP7 Mask                       */


/* ----------------------------------  PF_AFSR1  ---------------------------------- */
#define PF_AFSR1_AFSR0_Pos                    0                                                       /*!< PF AFSR1: AFSR0 Position                */
#define PF_AFSR1_AFSR0_Msk                    (0x0fUL << PF_AFSR1_AFSR0_Pos)                          /*!< PF AFSR1: AFSR0 Mask                    */
#define PF_AFSR1_AFSR1_Pos                    4                                                       /*!< PF AFSR1: AFSR1 Position                */
#define PF_AFSR1_AFSR1_Msk                    (0x0fUL << PF_AFSR1_AFSR1_Pos)                          /*!< PF AFSR1: AFSR1 Mask                    */
#define PF_AFSR1_AFSR2_Pos                    8                                                       /*!< PF AFSR1: AFSR2 Position                */
#define PF_AFSR1_AFSR2_Msk                    (0x0fUL << PF_AFSR1_AFSR2_Pos)                          /*!< PF AFSR1: AFSR2 Mask                    */
#define PF_AFSR1_AFSR3_Pos                    12                                                      /*!< PF AFSR1: AFSR3 Position                */
#define PF_AFSR1_AFSR3_Msk                    (0x0fUL << PF_AFSR1_AFSR3_Pos)                          /*!< PF AFSR1: AFSR3 Mask                    */
#define PF_AFSR1_AFSR4_Pos                    16                                                      /*!< PF AFSR1: AFSR4 Position                */
#define PF_AFSR1_AFSR4_Msk                    (0x0fUL << PF_AFSR1_AFSR4_Pos)                          /*!< PF AFSR1: AFSR4 Mask                    */
#define PF_AFSR1_AFSR5_Pos                    20                                                      /*!< PF AFSR1: AFSR5 Position                */
#define PF_AFSR1_AFSR5_Msk                    (0x0fUL << PF_AFSR1_AFSR5_Pos)                          /*!< PF AFSR1: AFSR5 Mask                    */
#define PF_AFSR1_AFSR6_Pos                    24                                                      /*!< PF AFSR1: AFSR6 Position                */
#define PF_AFSR1_AFSR6_Msk                    (0x0fUL << PF_AFSR1_AFSR6_Pos)                          /*!< PF AFSR1: AFSR6 Mask                    */
#define PF_AFSR1_AFSR7_Pos                    28                                                      /*!< PF AFSR1: AFSR7 Position                */
#define PF_AFSR1_AFSR7_Msk                    (0x0fUL << PF_AFSR1_AFSR7_Pos)                          /*!< PF AFSR1: AFSR7 Mask                    */


/* -----------------------------------  PF_PUPD  ---------------------------------- */
#define PF_PUPD_PUPD0_Pos                     0                                                       /*!< PF PUPD: PUPD0 Position                 */
#define PF_PUPD_PUPD0_Msk                     (0x03UL << PF_PUPD_PUPD0_Pos)                           /*!< PF PUPD: PUPD0 Mask                     */
#define PF_PUPD_PUPD1_Pos                     2                                                       /*!< PF PUPD: PUPD1 Position                 */
#define PF_PUPD_PUPD1_Msk                     (0x03UL << PF_PUPD_PUPD1_Pos)                           /*!< PF PUPD: PUPD1 Mask                     */
#define PF_PUPD_PUPD2_Pos                     4                                                       /*!< PF PUPD: PUPD2 Position                 */
#define PF_PUPD_PUPD2_Msk                     (0x03UL << PF_PUPD_PUPD2_Pos)                           /*!< PF PUPD: PUPD2 Mask                     */
#define PF_PUPD_PUPD3_Pos                     6                                                       /*!< PF PUPD: PUPD3 Position                 */
#define PF_PUPD_PUPD3_Msk                     (0x03UL << PF_PUPD_PUPD3_Pos)                           /*!< PF PUPD: PUPD3 Mask                     */
#define PF_PUPD_PUPD4_Pos                     8                                                       /*!< PF PUPD: PUPD4 Position                 */
#define PF_PUPD_PUPD4_Msk                     (0x03UL << PF_PUPD_PUPD4_Pos)                           /*!< PF PUPD: PUPD4 Mask                     */
#define PF_PUPD_PUPD5_Pos                     10                                                      /*!< PF PUPD: PUPD5 Position                 */
#define PF_PUPD_PUPD5_Msk                     (0x03UL << PF_PUPD_PUPD5_Pos)                           /*!< PF PUPD: PUPD5 Mask                     */
#define PF_PUPD_PUPD6_Pos                     12                                                      /*!< PF PUPD: PUPD6 Position                 */
#define PF_PUPD_PUPD6_Msk                     (0x03UL << PF_PUPD_PUPD6_Pos)                           /*!< PF PUPD: PUPD6 Mask                     */
#define PF_PUPD_PUPD7_Pos                     14                                                      /*!< PF PUPD: PUPD7 Position                 */
#define PF_PUPD_PUPD7_Msk                     (0x03UL << PF_PUPD_PUPD7_Pos)                           /*!< PF PUPD: PUPD7 Mask                     */

/* -----------------------------------  PF_INDR  ---------------------------------- */
#define PF_INDR_INDR0_Pos                     0                                                       /*!< PF INDR: INDR0 Position                 */
#define PF_INDR_INDR0_Msk                     (0x01UL << PF_INDR_INDR0_Pos)                           /*!< PF INDR: INDR0 Mask                     */
#define PF_INDR_INDR1_Pos                     1                                                       /*!< PF INDR: INDR1 Position                 */
#define PF_INDR_INDR1_Msk                     (0x01UL << PF_INDR_INDR1_Pos)                           /*!< PF INDR: INDR1 Mask                     */
#define PF_INDR_INDR2_Pos                     2                                                       /*!< PF INDR: INDR2 Position                 */
#define PF_INDR_INDR2_Msk                     (0x01UL << PF_INDR_INDR2_Pos)                           /*!< PF INDR: INDR2 Mask                     */
#define PF_INDR_INDR3_Pos                     3                                                       /*!< PF INDR: INDR3 Position                 */
#define PF_INDR_INDR3_Msk                     (0x01UL << PF_INDR_INDR3_Pos)                           /*!< PF INDR: INDR3 Mask                     */
#define PF_INDR_INDR4_Pos                     4                                                       /*!< PF INDR: INDR4 Position                 */
#define PF_INDR_INDR4_Msk                     (0x01UL << PF_INDR_INDR4_Pos)                           /*!< PF INDR: INDR4 Mask                     */
#define PF_INDR_INDR5_Pos                     5                                                       /*!< PF INDR: INDR5 Position                 */
#define PF_INDR_INDR5_Msk                     (0x01UL << PF_INDR_INDR5_Pos)                           /*!< PF INDR: INDR5 Mask                     */
#define PF_INDR_INDR6_Pos                     6                                                       /*!< PF INDR: INDR6 Position                 */
#define PF_INDR_INDR6_Msk                     (0x01UL << PF_INDR_INDR6_Pos)                           /*!< PF INDR: INDR6 Mask                     */
#define PF_INDR_INDR7_Pos                     7                                                       /*!< PF INDR: INDR7 Position                 */
#define PF_INDR_INDR7_Msk                     (0x01UL << PF_INDR_INDR7_Pos)                           /*!< PF INDR: INDR7 Mask                     */


/* ----------------------------------  PF_OUTDR  ---------------------------------- */
#define PF_OUTDR_OUTDR0_Pos                   0                                                       /*!< PF OUTDR: OUTDR0 Position               */
#define PF_OUTDR_OUTDR0_Msk                   (0x01UL << PF_OUTDR_OUTDR0_Pos)                         /*!< PF OUTDR: OUTDR0 Mask                   */
#define PF_OUTDR_OUTDR1_Pos                   1                                                       /*!< PF OUTDR: OUTDR1 Position               */
#define PF_OUTDR_OUTDR1_Msk                   (0x01UL << PF_OUTDR_OUTDR1_Pos)                         /*!< PF OUTDR: OUTDR1 Mask                   */
#define PF_OUTDR_OUTDR2_Pos                   2                                                       /*!< PF OUTDR: OUTDR2 Position               */
#define PF_OUTDR_OUTDR2_Msk                   (0x01UL << PF_OUTDR_OUTDR2_Pos)                         /*!< PF OUTDR: OUTDR2 Mask                   */
#define PF_OUTDR_OUTDR3_Pos                   3                                                       /*!< PF OUTDR: OUTDR3 Position               */
#define PF_OUTDR_OUTDR3_Msk                   (0x01UL << PF_OUTDR_OUTDR3_Pos)                         /*!< PF OUTDR: OUTDR3 Mask                   */
#define PF_OUTDR_OUTDR4_Pos                   4                                                       /*!< PF OUTDR: OUTDR4 Position               */
#define PF_OUTDR_OUTDR4_Msk                   (0x01UL << PF_OUTDR_OUTDR4_Pos)                         /*!< PF OUTDR: OUTDR4 Mask                   */
#define PF_OUTDR_OUTDR5_Pos                   5                                                       /*!< PF OUTDR: OUTDR5 Position               */
#define PF_OUTDR_OUTDR5_Msk                   (0x01UL << PF_OUTDR_OUTDR5_Pos)                         /*!< PF OUTDR: OUTDR5 Mask                   */
#define PF_OUTDR_OUTDR6_Pos                   6                                                       /*!< PF OUTDR: OUTDR6 Position               */
#define PF_OUTDR_OUTDR6_Msk                   (0x01UL << PF_OUTDR_OUTDR6_Pos)                         /*!< PF OUTDR: OUTDR6 Mask                   */
#define PF_OUTDR_OUTDR7_Pos                   7                                                       /*!< PF OUTDR: OUTDR7 Position               */
#define PF_OUTDR_OUTDR7_Msk                   (0x01UL << PF_OUTDR_OUTDR7_Pos)                         /*!< PF OUTDR: OUTDR7 Mask                   */


/* -----------------------------------  PF_BSR  ----------------------------------- */
#define PF_BSR_BSR0_Pos                       0                                                       /*!< PF BSR: BSR0 Position                   */
#define PF_BSR_BSR0_Msk                       (0x01UL << PF_BSR_BSR0_Pos)                             /*!< PF BSR: BSR0 Mask                       */
#define PF_BSR_BSR1_Pos                       1                                                       /*!< PF BSR: BSR1 Position                   */
#define PF_BSR_BSR1_Msk                       (0x01UL << PF_BSR_BSR1_Pos)                             /*!< PF BSR: BSR1 Mask                       */
#define PF_BSR_BSR2_Pos                       2                                                       /*!< PF BSR: BSR2 Position                   */
#define PF_BSR_BSR2_Msk                       (0x01UL << PF_BSR_BSR2_Pos)                             /*!< PF BSR: BSR2 Mask                       */
#define PF_BSR_BSR3_Pos                       3                                                       /*!< PF BSR: BSR3 Position                   */
#define PF_BSR_BSR3_Msk                       (0x01UL << PF_BSR_BSR3_Pos)                             /*!< PF BSR: BSR3 Mask                       */
#define PF_BSR_BSR4_Pos                       4                                                       /*!< PF BSR: BSR4 Position                   */
#define PF_BSR_BSR4_Msk                       (0x01UL << PF_BSR_BSR4_Pos)                             /*!< PF BSR: BSR4 Mask                       */
#define PF_BSR_BSR5_Pos                       5                                                       /*!< PF BSR: BSR5 Position                   */
#define PF_BSR_BSR5_Msk                       (0x01UL << PF_BSR_BSR5_Pos)                             /*!< PF BSR: BSR5 Mask                       */
#define PF_BSR_BSR6_Pos                       6                                                       /*!< PF BSR: BSR6 Position                   */
#define PF_BSR_BSR6_Msk                       (0x01UL << PF_BSR_BSR6_Pos)                             /*!< PF BSR: BSR6 Mask                       */
#define PF_BSR_BSR7_Pos                       7                                                       /*!< PF BSR: BSR7 Position                   */
#define PF_BSR_BSR7_Msk                       (0x01UL << PF_BSR_BSR7_Pos)                             /*!< PF BSR: BSR7 Mask                       */


/* -----------------------------------  PF_BCR  ----------------------------------- */
#define PF_BCR_BCR0_Pos                       0                                                       /*!< PF BCR: BCR0 Position                   */
#define PF_BCR_BCR0_Msk                       (0x01UL << PF_BCR_BCR0_Pos)                             /*!< PF BCR: BCR0 Mask                       */
#define PF_BCR_BCR1_Pos                       1                                                       /*!< PF BCR: BCR1 Position                   */
#define PF_BCR_BCR1_Msk                       (0x01UL << PF_BCR_BCR1_Pos)                             /*!< PF BCR: BCR1 Mask                       */
#define PF_BCR_BCR2_Pos                       2                                                       /*!< PF BCR: BCR2 Position                   */
#define PF_BCR_BCR2_Msk                       (0x01UL << PF_BCR_BCR2_Pos)                             /*!< PF BCR: BCR2 Mask                       */
#define PF_BCR_BCR3_Pos                       3                                                       /*!< PF BCR: BCR3 Position                   */
#define PF_BCR_BCR3_Msk                       (0x01UL << PF_BCR_BCR3_Pos)                             /*!< PF BCR: BCR3 Mask                       */
#define PF_BCR_BCR4_Pos                       4                                                       /*!< PF BCR: BCR4 Position                   */
#define PF_BCR_BCR4_Msk                       (0x01UL << PF_BCR_BCR4_Pos)                             /*!< PF BCR: BCR4 Mask                       */
#define PF_BCR_BCR5_Pos                       5                                                       /*!< PF BCR: BCR5 Position                   */
#define PF_BCR_BCR5_Msk                       (0x01UL << PF_BCR_BCR5_Pos)                             /*!< PF BCR: BCR5 Mask                       */
#define PF_BCR_BCR6_Pos                       6                                                       /*!< PF BCR: BCR6 Position                   */
#define PF_BCR_BCR6_Msk                       (0x01UL << PF_BCR_BCR6_Pos)                             /*!< PF BCR: BCR6 Mask                       */
#define PF_BCR_BCR7_Pos                       7                                                       /*!< PF BCR: BCR7 Position                   */
#define PF_BCR_BCR7_Msk                       (0x01UL << PF_BCR_BCR7_Pos)                             /*!< PF BCR: BCR7 Mask                       */

/* ---------------------------------  PF_OUTDMSK  --------------------------------- */
#define PF_OUTDMSK_OUTDMSK0_Pos               0                                                       /*!< PF OUTDMSK: OUTDMSK0 Position           */
#define PF_OUTDMSK_OUTDMSK0_Msk               (0x01UL << PF_OUTDMSK_OUTDMSK0_Pos)                     /*!< PF OUTDMSK: OUTDMSK0 Mask               */
#define PF_OUTDMSK_OUTDMSK1_Pos               1                                                       /*!< PF OUTDMSK: OUTDMSK1 Position           */
#define PF_OUTDMSK_OUTDMSK1_Msk               (0x01UL << PF_OUTDMSK_OUTDMSK1_Pos)                     /*!< PF OUTDMSK: OUTDMSK1 Mask               */
#define PF_OUTDMSK_OUTDMSK2_Pos               2                                                       /*!< PF OUTDMSK: OUTDMSK2 Position           */
#define PF_OUTDMSK_OUTDMSK2_Msk               (0x01UL << PF_OUTDMSK_OUTDMSK2_Pos)                     /*!< PF OUTDMSK: OUTDMSK2 Mask               */
#define PF_OUTDMSK_OUTDMSK3_Pos               3                                                       /*!< PF OUTDMSK: OUTDMSK3 Position           */
#define PF_OUTDMSK_OUTDMSK3_Msk               (0x01UL << PF_OUTDMSK_OUTDMSK3_Pos)                     /*!< PF OUTDMSK: OUTDMSK3 Mask               */
#define PF_OUTDMSK_OUTDMSK4_Pos               4                                                       /*!< PF OUTDMSK: OUTDMSK4 Position           */
#define PF_OUTDMSK_OUTDMSK4_Msk               (0x01UL << PF_OUTDMSK_OUTDMSK4_Pos)                     /*!< PF OUTDMSK: OUTDMSK4 Mask               */
#define PF_OUTDMSK_OUTDMSK5_Pos               5                                                       /*!< PF OUTDMSK: OUTDMSK5 Position           */
#define PF_OUTDMSK_OUTDMSK5_Msk               (0x01UL << PF_OUTDMSK_OUTDMSK5_Pos)                     /*!< PF OUTDMSK: OUTDMSK5 Mask               */
#define PF_OUTDMSK_OUTDMSK6_Pos               6                                                       /*!< PF OUTDMSK: OUTDMSK6 Position           */
#define PF_OUTDMSK_OUTDMSK6_Msk               (0x01UL << PF_OUTDMSK_OUTDMSK6_Pos)                     /*!< PF OUTDMSK: OUTDMSK6 Mask               */
#define PF_OUTDMSK_OUTDMSK7_Pos               7                                                       /*!< PF OUTDMSK: OUTDMSK7 Position           */
#define PF_OUTDMSK_OUTDMSK7_Msk               (0x01UL << PF_OUTDMSK_OUTDMSK7_Pos)                     /*!< PF OUTDMSK: OUTDMSK7 Mask               */


/* -----------------------------------  PF_DBCR  ---------------------------------- */
#define PF_DBCR_DBEN0_Pos                     0                                                       /*!< PF DBCR: DBEN0 Position                 */
#define PF_DBCR_DBEN0_Msk                     (0x01UL << PF_DBCR_DBEN0_Pos)                           /*!< PF DBCR: DBEN0 Mask                     */
#define PF_DBCR_DBEN1_Pos                     1                                                       /*!< PF DBCR: DBEN1 Position                 */
#define PF_DBCR_DBEN1_Msk                     (0x01UL << PF_DBCR_DBEN1_Pos)                           /*!< PF DBCR: DBEN1 Mask                     */
#define PF_DBCR_DBEN2_Pos                     2                                                       /*!< PF DBCR: DBEN2 Position                 */
#define PF_DBCR_DBEN2_Msk                     (0x01UL << PF_DBCR_DBEN2_Pos)                           /*!< PF DBCR: DBEN2 Mask                     */
#define PF_DBCR_DBEN3_Pos                     3                                                       /*!< PF DBCR: DBEN3 Position                 */
#define PF_DBCR_DBEN3_Msk                     (0x01UL << PF_DBCR_DBEN3_Pos)                           /*!< PF DBCR: DBEN3 Mask                     */
#define PF_DBCR_DBEN4_Pos                     4                                                       /*!< PF DBCR: DBEN4 Position                 */
#define PF_DBCR_DBEN4_Msk                     (0x01UL << PF_DBCR_DBEN4_Pos)                           /*!< PF DBCR: DBEN4 Mask                     */
#define PF_DBCR_DBEN5_Pos                     5                                                       /*!< PF DBCR: DBEN5 Position                 */
#define PF_DBCR_DBEN5_Msk                     (0x01UL << PF_DBCR_DBEN5_Pos)                           /*!< PF DBCR: DBEN5 Mask                     */
#define PF_DBCR_DBEN6_Pos                     6                                                       /*!< PF DBCR: DBEN6 Position                 */
#define PF_DBCR_DBEN6_Msk                     (0x01UL << PF_DBCR_DBEN6_Pos)                           /*!< PF DBCR: DBEN6 Mask                     */
#define PF_DBCR_DBEN7_Pos                     7                                                       /*!< PF DBCR: DBEN7 Position                 */
#define PF_DBCR_DBEN7_Msk                     (0x01UL << PF_DBCR_DBEN7_Pos)                           /*!< PF DBCR: DBEN7 Mask                     */

/* -----------------------------------  PF_IER  ----------------------------------- */
#define PF_IER_P0_Pos                         0                                                       /*!< PF IER: P0 Position                     */
#define PF_IER_P0_Msk                         (0x03UL << PF_IER_P0_Pos)                               /*!< PF IER: P0 Mask                         */
#define PF_IER_P1_Pos                         2                                                       /*!< PF IER: P1 Position                     */
#define PF_IER_P1_Msk                         (0x03UL << PF_IER_P1_Pos)                               /*!< PF IER: P1 Mask                         */
#define PF_IER_P2_Pos                         4                                                       /*!< PF IER: P2 Position                     */
#define PF_IER_P2_Msk                         (0x03UL << PF_IER_P2_Pos)                               /*!< PF IER: P2 Mask                         */
#define PF_IER_P3_Pos                         6                                                       /*!< PF IER: P3 Position                     */
#define PF_IER_P3_Msk                         (0x03UL << PF_IER_P3_Pos)                               /*!< PF IER: P3 Mask                         */
#define PF_IER_P4_Pos                         8                                                       /*!< PF IER: P4 Position                     */
#define PF_IER_P4_Msk                         (0x03UL << PF_IER_P4_Pos)                               /*!< PF IER: P4 Mask                         */
#define PF_IER_P5_Pos                         10                                                      /*!< PF IER: P5 Position                     */
#define PF_IER_P5_Msk                         (0x03UL << PF_IER_P5_Pos)                               /*!< PF IER: P5 Mask                         */
#define PF_IER_P6_Pos                         12                                                      /*!< PF IER: P6 Position                     */
#define PF_IER_P6_Msk                         (0x03UL << PF_IER_P6_Pos)                               /*!< PF IER: P6 Mask                         */
#define PF_IER_P7_Pos                         14                                                      /*!< PF IER: P7 Position                     */
#define PF_IER_P7_Msk                         (0x03UL << PF_IER_P7_Pos)                               /*!< PF IER: P7 Mask                         */


/* -----------------------------------  PF_ISR  ----------------------------------- */
#define PF_ISR_P0_Pos                         0                                                       /*!< PF ISR: P0 Position                     */
#define PF_ISR_P0_Msk                         (0x03UL << PF_ISR_P0_Pos)                               /*!< PF ISR: P0 Mask                         */
#define PF_ISR_P1_Pos                         2                                                       /*!< PF ISR: P1 Position                     */
#define PF_ISR_P1_Msk                         (0x03UL << PF_ISR_P1_Pos)                               /*!< PF ISR: P1 Mask                         */
#define PF_ISR_P2_Pos                         4                                                       /*!< PF ISR: P2 Position                     */
#define PF_ISR_P2_Msk                         (0x03UL << PF_ISR_P2_Pos)                               /*!< PF ISR: P2 Mask                         */
#define PF_ISR_P3_Pos                         6                                                       /*!< PF ISR: P3 Position                     */
#define PF_ISR_P3_Msk                         (0x03UL << PF_ISR_P3_Pos)                               /*!< PF ISR: P3 Mask                         */
#define PF_ISR_P4_Pos                         8                                                       /*!< PF ISR: P4 Position                     */
#define PF_ISR_P4_Msk                         (0x03UL << PF_ISR_P4_Pos)                               /*!< PF ISR: P4 Mask                         */
#define PF_ISR_P5_Pos                         10                                                      /*!< PF ISR: P5 Position                     */
#define PF_ISR_P5_Msk                         (0x03UL << PF_ISR_P5_Pos)                               /*!< PF ISR: P5 Mask                         */
#define PF_ISR_P6_Pos                         12                                                      /*!< PF ISR: P6 Position                     */
#define PF_ISR_P6_Msk                         (0x03UL << PF_ISR_P6_Pos)                               /*!< PF ISR: P6 Mask                         */
#define PF_ISR_P7_Pos                         14                                                      /*!< PF ISR: P7 Position                     */
#define PF_ISR_P7_Msk                         (0x03UL << PF_ISR_P7_Pos)                               /*!< PF ISR: P7 Mask                         */


/* -----------------------------------  PF_ICR  ----------------------------------- */
#define PF_ICR_P0_Pos                         0                                                       /*!< PF ICR: P0 Position                     */
#define PF_ICR_P0_Msk                         (0x03UL << PF_ICR_P0_Pos)                               /*!< PF ICR: P0 Mask                         */
#define PF_ICR_P1_Pos                         2                                                       /*!< PF ICR: P1 Position                     */
#define PF_ICR_P1_Msk                         (0x03UL << PF_ICR_P1_Pos)                               /*!< PF ICR: P1 Mask                         */
#define PF_ICR_P2_Pos                         4                                                       /*!< PF ICR: P2 Position                     */
#define PF_ICR_P2_Msk                         (0x03UL << PF_ICR_P2_Pos)                               /*!< PF ICR: P2 Mask                         */
#define PF_ICR_P3_Pos                         6                                                       /*!< PF ICR: P3 Position                     */
#define PF_ICR_P3_Msk                         (0x03UL << PF_ICR_P3_Pos)                               /*!< PF ICR: P3 Mask                         */
#define PF_ICR_P4_Pos                         8                                                       /*!< PF ICR: P4 Position                     */
#define PF_ICR_P4_Msk                         (0x03UL << PF_ICR_P4_Pos)                               /*!< PF ICR: P4 Mask                         */
#define PF_ICR_P5_Pos                         10                                                      /*!< PF ICR: P5 Position                     */
#define PF_ICR_P5_Msk                         (0x03UL << PF_ICR_P5_Pos)                               /*!< PF ICR: P5 Mask                         */
#define PF_ICR_P6_Pos                         12                                                      /*!< PF ICR: P6 Position                     */
#define PF_ICR_P6_Msk                         (0x03UL << PF_ICR_P6_Pos)                               /*!< PF ICR: P6 Mask                         */
#define PF_ICR_P7_Pos                         14                                                      /*!< PF ICR: P7 Position                     */
#define PF_ICR_P7_Msk                         (0x03UL << PF_ICR_P7_Pos)                               /*!< PF ICR: P7 Mask                         */


/* -----------------------------------  PF_PLSR  ---------------------------------- */
#define PF_PLSR_PF5LSB_Pos                    0                                                       /*!< PF PLSR: PF5LSB Position                */
#define PF_PLSR_PF5LSB_Msk                    (0x01UL << PF_PLSR_PF5LSB_Pos)                          /*!< PF PLSR: PF5LSB Mask                    */
#define PF_PLSR_PF6LSB_Pos                    1                                                       /*!< PF PLSR: PF6LSB Position                */
#define PF_PLSR_PF6LSB_Msk                    (0x01UL << PF_PLSR_PF6LSB_Pos)                          /*!< PF PLSR: PF6LSB Mask                    */
#define PF_PLSR_PF7LSB_Pos                    2                                                       /*!< PF PLSR: PF7LSB Position                */
#define PF_PLSR_PF7LSB_Msk                    (0x01UL << PF_PLSR_PF7LSB_Pos)                          /*!< PF PLSR: PF7LSB Mask                    */

/* ================================================================================ */
/* ================          struct 'PCU' Position & Mask          ================ */
/* ================================================================================ */


/* ----------------------------------  PCU_KEYR  ---------------------------------- */
#define PCU_KEYR_COMENKEY_Pos                 0                                                       /*!< PCU KEYR: COMENKEY Position             */
#define PCU_KEYR_COMENKEY_Msk                 (0x0000ffffUL << PCU_KEYR_COMENKEY_Pos)                 /*!< PCU KEYR: COMENKEY Mask                 */
#define PCU_KEYR_SEGENKEY_Pos                 16                                                      /*!< PCU KEYR: SEGENKEY Position             */
#define PCU_KEYR_SEGENKEY_Msk                 (0x0000ffffUL << PCU_KEYR_SEGENKEY_Pos)                 /*!< PCU KEYR: SEGENKEY Mask                 */

/* ----------------------------------  PCU_SEGR  ---------------------------------- */
#define PCU_SEGR_SEG0_Pos                     0                                                       /*!< PCU SEGR: SEG0 Position                 */
#define PCU_SEGR_SEG0_Msk                     (0x01UL << PCU_SEGR_SEG0_Pos)                           /*!< PCU SEGR: SEG0 Mask                     */
#define PCU_SEGR_SEG1_Pos                     1                                                       /*!< PCU SEGR: SEG1 Position                 */
#define PCU_SEGR_SEG1_Msk                     (0x01UL << PCU_SEGR_SEG1_Pos)                           /*!< PCU SEGR: SEG1 Mask                     */
#define PCU_SEGR_SEG2_Pos                     2                                                       /*!< PCU SEGR: SEG2 Position                 */
#define PCU_SEGR_SEG2_Msk                     (0x01UL << PCU_SEGR_SEG2_Pos)                           /*!< PCU SEGR: SEG2 Mask                     */
#define PCU_SEGR_SEG3_Pos                     3                                                       /*!< PCU SEGR: SEG3 Position                 */
#define PCU_SEGR_SEG3_Msk                     (0x01UL << PCU_SEGR_SEG3_Pos)                           /*!< PCU SEGR: SEG3 Mask                     */
#define PCU_SEGR_SEG4_Pos                     4                                                       /*!< PCU SEGR: SEG4 Position                 */
#define PCU_SEGR_SEG4_Msk                     (0x01UL << PCU_SEGR_SEG4_Pos)                           /*!< PCU SEGR: SEG4 Mask                     */
#define PCU_SEGR_SEG5_Pos                     5                                                       /*!< PCU SEGR: SEG5 Position                 */
#define PCU_SEGR_SEG5_Msk                     (0x01UL << PCU_SEGR_SEG5_Pos)                           /*!< PCU SEGR: SEG5 Mask                     */
#define PCU_SEGR_SEG6_Pos                     6                                                       /*!< PCU SEGR: SEG6 Position                 */
#define PCU_SEGR_SEG6_Msk                     (0x01UL << PCU_SEGR_SEG6_Pos)                           /*!< PCU SEGR: SEG6 Mask                     */
#define PCU_SEGR_SEG7_Pos                     7                                                       /*!< PCU SEGR: SEG7 Position                 */
#define PCU_SEGR_SEG7_Msk                     (0x01UL << PCU_SEGR_SEG7_Pos)                           /*!< PCU SEGR: SEG7 Mask                     */
#define PCU_SEGR_SEG8_Pos                     8                                                       /*!< PCU SEGR: SEG8 Position                 */
#define PCU_SEGR_SEG8_Msk                     (0x01UL << PCU_SEGR_SEG8_Pos)                           /*!< PCU SEGR: SEG8 Mask                     */
#define PCU_SEGR_SEG9_Pos                     9                                                       /*!< PCU SEGR: SEG9 Position                 */
#define PCU_SEGR_SEG9_Msk                     (0x01UL << PCU_SEGR_SEG9_Pos)                           /*!< PCU SEGR: SEG9 Mask                     */

/* ----------------------------------  PCU_COMR  ---------------------------------- */
#define PCU_COMR_COM0_Pos                     0                                                       /*!< PCU COMR: COM0 Position                 */
#define PCU_COMR_COM0_Msk                     (0x01UL << PCU_COMR_COM0_Pos)                           /*!< PCU COMR: COM0 Mask                     */
#define PCU_COMR_COM1_Pos                     1                                                       /*!< PCU COMR: COM1 Position                 */
#define PCU_COMR_COM1_Msk                     (0x01UL << PCU_COMR_COM1_Pos)                           /*!< PCU COMR: COM1 Mask                     */
#define PCU_COMR_COM2_Pos                     2                                                       /*!< PCU COMR: COM2 Position                 */
#define PCU_COMR_COM2_Msk                     (0x01UL << PCU_COMR_COM2_Pos)                           /*!< PCU COMR: COM2 Mask                     */
#define PCU_COMR_COM3_Pos                     3                                                       /*!< PCU COMR: COM3 Position                 */
#define PCU_COMR_COM3_Msk                     (0x01UL << PCU_COMR_COM3_Pos)                           /*!< PCU COMR: COM3 Mask                     */
#define PCU_COMR_COM4_Pos                     4                                                       /*!< PCU COMR: COM4 Position                 */
#define PCU_COMR_COM4_Msk                     (0x01UL << PCU_COMR_COM4_Pos)                           /*!< PCU COMR: COM4 Mask                     */
#define PCU_COMR_COM5_Pos                     5                                                       /*!< PCU COMR: COM5 Position                 */
#define PCU_COMR_COM5_Msk                     (0x01UL << PCU_COMR_COM5_Pos)                           /*!< PCU COMR: COM5 Mask                     */
#define PCU_COMR_COM6_Pos                     6                                                       /*!< PCU COMR: COM6 Position                 */
#define PCU_COMR_COM6_Msk                     (0x01UL << PCU_COMR_COM6_Pos)                           /*!< PCU COMR: COM6 Mask                     */
#define PCU_COMR_COM7_Pos                     7                                                       /*!< PCU COMR: COM7 Position                 */
#define PCU_COMR_COM7_Msk                     (0x01UL << PCU_COMR_COM7_Pos)                           /*!< PCU COMR: COM7 Mask                     */
#define PCU_COMR_COM8_Pos                     8                                                       /*!< PCU COMR: COM8 Position                 */
#define PCU_COMR_COM8_Msk                     (0x01UL << PCU_COMR_COM8_Pos)                           /*!< PCU COMR: COM8 Mask                     */
#define PCU_COMR_COM9_Pos                     9                                                       /*!< PCU COMR: COM9 Position                 */
#define PCU_COMR_COM9_Msk                     (0x01UL << PCU_COMR_COM9_Pos)                           /*!< PCU COMR: COM9 Mask                     */
#define PCU_COMR_COM10_Pos                    10                                                      /*!< PCU COMR: COM10 Position                */
#define PCU_COMR_COM10_Msk                    (0x01UL << PCU_COMR_COM10_Pos)                          /*!< PCU COMR: COM10 Mask                    */
#define PCU_COMR_COM11_Pos                    11                                                      /*!< PCU COMR: COM11 Position                */
#define PCU_COMR_COM11_Msk                    (0x01UL << PCU_COMR_COM11_Pos)                          /*!< PCU COMR: COM11 Mask                    */
#define PCU_COMR_COM12_Pos                    12                                                      /*!< PCU COMR: COM12 Position                */
#define PCU_COMR_COM12_Msk                    (0x01UL << PCU_COMR_COM12_Pos)                          /*!< PCU COMR: COM12 Mask                    */
#define PCU_COMR_COM13_Pos                    13                                                      /*!< PCU COMR: COM13 Position                */
#define PCU_COMR_COM13_Msk                    (0x01UL << PCU_COMR_COM13_Pos)                          /*!< PCU COMR: COM13 Mask                    */
#define PCU_COMR_COM14_Pos                    14                                                      /*!< PCU COMR: COM14 Position                */
#define PCU_COMR_COM14_Msk                    (0x01UL << PCU_COMR_COM14_Pos)                          /*!< PCU COMR: COM14 Mask                    */
#define PCU_COMR_COM15_Pos                    15                                                      /*!< PCU COMR: COM15 Position                */
#define PCU_COMR_COM15_Msk                    (0x01UL << PCU_COMR_COM15_Pos)                          /*!< PCU COMR: COM15 Mask                    */
#define PCU_COMR_LED_ENDF_Pos                 27                                                      /*!< PCU COMR: LED_ENDF Position             */
#define PCU_COMR_LED_ENDF_Msk                 (0x01UL << PCU_COMR_LED_ENDF_Pos)                       /*!< PCU COMR: LED_ENDF Mask                 */

/* ---------------------------------  PCU_PORTEN  --------------------------------- */
#define PCU_PORTEN_PORTEN_Pos                 0                                                       /*!< PCU PORTEN: PORTEN Position             */
#define PCU_PORTEN_PORTEN_Msk                 (0x000000ffUL << PCU_PORTEN_PORTEN_Pos)                 /*!< PCU PORTEN: PORTEN Mask                 */


/* ================================================================================ */
/* ================        struct 'SPI2PCON' Position & Mask       ================ */
/* ================================================================================ */


/* --------------------------------  SPI2PCON_CON  -------------------------------- */
#define SPI2PCON_CON_SPI20_PCON_Pos           0                                                       /*!< SPI2PCON CON: SPI20_PCON Position       */
#define SPI2PCON_CON_SPI20_PCON_Msk           (0x01UL << SPI2PCON_CON_SPI20_PCON_Pos)                 /*!< SPI2PCON CON: SPI20_PCON Mask           */
#define SPI2PCON_CON_SPI21_PCON_Pos           1                                                       /*!< SPI2PCON CON: SPI21_PCON Position       */
#define SPI2PCON_CON_SPI21_PCON_Msk           (0x01UL << SPI2PCON_CON_SPI21_PCON_Pos)                 /*!< SPI2PCON CON: SPI21_PCON Mask           */


/* ================================================================================ */
/* ================          struct 'FMC' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  FMC_MR  ----------------------------------- */
#define FMC_MR_ACODE_Pos                      0                                                       /*!< FMC MR: ACODE Position                  */
#define FMC_MR_ACODE_Msk                      (0x7fUL << FMC_MR_ACODE_Pos)                            /*!< FMC MR: ACODE Mask                      */

/* -----------------------------------  FMC_CR  ----------------------------------- */
#define FMC_CR_HVEN_Pos                       0                                                       /*!< FMC CR: HVEN Position                   */
#define FMC_CR_HVEN_Msk                       (0x01UL << FMC_CR_HVEN_Pos)                             /*!< FMC CR: HVEN Mask                       */
#define FMC_CR_ERS_Pos                        1                                                       /*!< FMC CR: ERS Position                    */
#define FMC_CR_ERS_Msk                        (0x01UL << FMC_CR_ERS_Pos)                              /*!< FMC CR: ERS Mask                        */
#define FMC_CR_PGM_Pos                        2                                                       /*!< FMC CR: PGM Position                    */
#define FMC_CR_PGM_Msk                        (0x01UL << FMC_CR_PGM_Pos)                              /*!< FMC CR: PGM Mask                        */
#define FMC_CR_WADCK_Pos                      3                                                       /*!< FMC CR: WADCK Position                  */
#define FMC_CR_WADCK_Msk                      (0x01UL << FMC_CR_WADCK_Pos)                            /*!< FMC CR: WADCK Mask                      */
#define FMC_CR_PMODE_Pos                      4                                                       /*!< FMC CR: PMODE Position                  */
#define FMC_CR_PMODE_Msk                      (0x01UL << FMC_CR_PMODE_Pos)                            /*!< FMC CR: PMODE Mask                      */
#define FMC_CR_SECT1K_Pos                     5                                                       /*!< FMC CR: SECT1K Position                 */
#define FMC_CR_SECT1K_Msk                     (0x01UL << FMC_CR_SECT1K_Pos)                           /*!< FMC CR: SECT1K Mask                     */
#define FMC_CR_SECT4K_Pos                     6                                                       /*!< FMC CR: SECT4K Position                 */
#define FMC_CR_SECT4K_Msk                     (0x01UL << FMC_CR_SECT4K_Pos)                           /*!< FMC CR: SECT4K Mask                     */
#define FMC_CR_MAS_Pos                        7                                                       /*!< FMC CR: MAS Position                    */
#define FMC_CR_MAS_Msk                        (0x01UL << FMC_CR_MAS_Pos)                              /*!< FMC CR: MAS Mask                        */
#define FMC_CR_BBLOCK_Pos                     8                                                       /*!< FMC CR: BBLOCK Position                 */
#define FMC_CR_BBLOCK_Msk                     (0x01UL << FMC_CR_BBLOCK_Pos)                           /*!< FMC CR: BBLOCK Mask                     */
#define FMC_CR_IFEN_Pos                       12                                                      /*!< FMC CR: IFEN Position                   */
#define FMC_CR_IFEN_Msk                       (0x01UL << FMC_CR_IFEN_Pos)                             /*!< FMC CR: IFEN Mask                       */
#define FMC_CR_SELFPGM_Pos                    23                                                      /*!< FMC CR: SELFPGM Position                */
#define FMC_CR_SELFPGM_Msk                    (0x01UL << FMC_CR_SELFPGM_Pos)                          /*!< FMC CR: SELFPGM Mask                    */
#define FMC_CR_LOCKSEL_Pos                    24                                                      /*!< FMC CR: LOCKSEL Position                */
#define FMC_CR_LOCKSEL_Msk                    (0x01UL << FMC_CR_LOCKSEL_Pos)                          /*!< FMC CR: LOCKSEL Mask                    */

/* -----------------------------------  FMC_AR  ----------------------------------- */
#define FMC_AR_FADDR_Pos                      0                                                       /*!< FMC AR: FADDR Position                  */
#define FMC_AR_FADDR_Msk                      (0x0000ffffUL << FMC_AR_FADDR_Pos)                      /*!< FMC AR: FADDR Mask                      */

/* -----------------------------------  FMC_DR  ----------------------------------- */
#define FMC_DR_FDATA_Pos                      0                                                       /*!< FMC DR: FDATA Position                  */
#define FMC_DR_FDATA_Msk                      (0xffffffffUL << FMC_DR_FDATA_Pos)                      /*!< FMC DR: FDATA Mask                      */

/* ----------------------------------  FMC_BUSY  ---------------------------------- */
#define FMC_BUSY_WRBUSY_Pos                   0                                                       /*!< FMC BUSY: WRBUSY Position               */
#define FMC_BUSY_WRBUSY_Msk                   (0x01UL << FMC_BUSY_WRBUSY_Pos)                         /*!< FMC BUSY: WRBUSY Mask                   */

/* -----------------------------------  FMC_CRC  ---------------------------------- */
#define FMC_CRC_CRC16_Pos                     0                                                       /*!< FMC CRC: CRC16 Position                 */
#define FMC_CRC_CRC16_Msk                     (0x0000ffffUL << FMC_CRC_CRC16_Pos)                     /*!< FMC CRC: CRC16 Mask                     */

/* -----------------------------------  FMC_CFG  ---------------------------------- */
#define FMC_CFG_CRCEN_Pos                     6                                                       /*!< FMC CFG: CRCEN Position                 */
#define FMC_CFG_CRCEN_Msk                     (0x01UL << FMC_CFG_CRCEN_Pos)                           /*!< FMC CFG: CRCEN Mask                     */
#define FMC_CFG_CRCINIT_Pos                   7                                                       /*!< FMC CFG: CRCINIT Position               */
#define FMC_CFG_CRCINIT_Msk                   (0x01UL << FMC_CFG_CRCINIT_Pos)                         /*!< FMC CFG: CRCINIT Mask                   */
#define FMC_CFG_WAIT_Pos                      8                                                       /*!< FMC CFG: WAIT Position                  */
#define FMC_CFG_WAIT_Msk                      (0x07UL << FMC_CFG_WAIT_Pos)                            /*!< FMC CFG: WAIT Mask                      */
#define FMC_CFG_WTIDKY_Pos                    16                                                      /*!< FMC CFG: WTIDKY Position                */
#define FMC_CFG_WTIDKY_Msk                    (0x0000ffffUL << FMC_CFG_WTIDKY_Pos)                    /*!< FMC CFG: WTIDKY Mask                    */

/* ----------------------------------  FMC_WPROT  --------------------------------- */
#define FMC_WPROT_WPROT_Pos                   0                                                       /*!< FMC WPROT: WPROT Position               */
#define FMC_WPROT_WPROT_Msk                   (0xffffffffUL << FMC_WPROT_WPROT_Pos)                   /*!< FMC WPROT: WPROT Mask                   */

/* ----------------------------------  FMC_LOCK  ---------------------------------- */
#define FMC_LOCK_RPROT_Pos                    0                                                       /*!< FMC LOCK: RPROT Position                */
#define FMC_LOCK_RPROT_Msk                    (0x0000ffffUL << FMC_LOCK_RPROT_Pos)                    /*!< FMC LOCK: RPROT Mask                    */


/* ================================================================================ */
/* ================         struct 'DMAC0' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  DMA0_CR  ---------------------------------- */
#define DMA0_CR_DIR_Pos                       1                                                       /*!< DMA0 CR: DIR Position                   */
#define DMA0_CR_DIR_Msk                       (0x01UL << DMA0_CR_DIR_Pos)                             /*!< DMA0 CR: DIR Mask                       */
#define DMA0_CR_SIZE_Pos                      2                                                       /*!< DMA0 CR: SIZE Position                  */
#define DMA0_CR_SIZE_Msk                      (0x03UL << DMA0_CR_SIZE_Pos)                            /*!< DMA0 CR: SIZE Mask                      */
#define DMA0_CR_PERISEL_Pos                   8                                                       /*!< DMA0 CR: PERISEL Position               */
#define DMA0_CR_PERISEL_Msk                   (0x0fUL << DMA0_CR_PERISEL_Pos)                         /*!< DMA0 CR: PERISEL Mask                   */
#define DMA0_CR_TRANSCNT_Pos                  16                                                      /*!< DMA0 CR: TRANSCNT Position              */
#define DMA0_CR_TRANSCNT_Msk                  (0x00000fffUL << DMA0_CR_TRANSCNT_Pos)                  /*!< DMA0 CR: TRANSCNT Mask                  */

/* -----------------------------------  DMA0_SR  ---------------------------------- */
#define DMA0_SR_DMAEN_Pos                     0                                                       /*!< DMA0 SR: DMAEN Position                 */
#define DMA0_SR_DMAEN_Msk                     (0x01UL << DMA0_SR_DMAEN_Pos)                           /*!< DMA0 SR: DMAEN Mask                     */
#define DMA0_SR_EOT_Pos                       7                                                       /*!< DMA0 SR: EOT Position                   */
#define DMA0_SR_EOT_Msk                       (0x01UL << DMA0_SR_EOT_Pos)                             /*!< DMA0 SR: EOT Mask                       */

/* ----------------------------------  DMA0_PAR  ---------------------------------- */
#define DMA0_PAR_PAR_Pos                      0                                                       /*!< DMA0 PAR: PAR Position                  */
#define DMA0_PAR_PAR_Msk                      (0x0000ffffUL << DMA0_PAR_PAR_Pos)                      /*!< DMA0 PAR: PAR Mask                      */

/* ----------------------------------  DMA0_MAR  ---------------------------------- */
#define DMA0_MAR_MAR_Pos                      0                                                       /*!< DMA0 MAR: MAR Position                  */
#define DMA0_MAR_MAR_Msk                      (0xffffffffUL << DMA0_MAR_MAR_Pos)                      /*!< DMA0 MAR: MAR Mask                      */


/* ================================================================================ */
/* ================         struct 'DMAC1' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  DMA1_CR  ---------------------------------- */
#define DMA1_CR_DIR_Pos                       1                                                       /*!< DMA1 CR: DIR Position                   */
#define DMA1_CR_DIR_Msk                       (0x01UL << DMA1_CR_DIR_Pos)                             /*!< DMA1 CR: DIR Mask                       */
#define DMA1_CR_SIZE_Pos                      2                                                       /*!< DMA1 CR: SIZE Position                  */
#define DMA1_CR_SIZE_Msk                      (0x03UL << DMA1_CR_SIZE_Pos)                            /*!< DMA1 CR: SIZE Mask                      */
#define DMA1_CR_PERISEL_Pos                   8                                                       /*!< DMA1 CR: PERISEL Position               */
#define DMA1_CR_PERISEL_Msk                   (0x0fUL << DMA1_CR_PERISEL_Pos)                         /*!< DMA1 CR: PERISEL Mask                   */
#define DMA1_CR_TRANSCNT_Pos                  16                                                      /*!< DMA1 CR: TRANSCNT Position              */
#define DMA1_CR_TRANSCNT_Msk                  (0x00000fffUL << DMA1_CR_TRANSCNT_Pos)                  /*!< DMA1 CR: TRANSCNT Mask                  */

/* -----------------------------------  DMA1_SR  ---------------------------------- */
#define DMA1_SR_DMAEN_Pos                     0                                                       /*!< DMA1 SR: DMAEN Position                 */
#define DMA1_SR_DMAEN_Msk                     (0x01UL << DMA1_SR_DMAEN_Pos)                           /*!< DMA1 SR: DMAEN Mask                     */
#define DMA1_SR_EOT_Pos                       7                                                       /*!< DMA1 SR: EOT Position                   */
#define DMA1_SR_EOT_Msk                       (0x01UL << DMA1_SR_EOT_Pos)                             /*!< DMA1 SR: EOT Mask                       */

/* ----------------------------------  DMA1_PAR  ---------------------------------- */
#define DMA1_PAR_PAR_Pos                      0                                                       /*!< DMA1 PAR: PAR Position                  */
#define DMA1_PAR_PAR_Msk                      (0x0000ffffUL << DMA1_PAR_PAR_Pos)                      /*!< DMA1 PAR: PAR Mask                      */

/* ----------------------------------  DMA1_MAR  ---------------------------------- */
#define DMA1_MAR_MAR_Pos                      0                                                       /*!< DMA1 MAR: MAR Position                  */
#define DMA1_MAR_MAR_Msk                      (0xffffffffUL << DMA1_MAR_MAR_Pos)                      /*!< DMA1 MAR: MAR Mask                      */


/* ================================================================================ */
/* ================         struct 'DMA2' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  DMA2_CR  ---------------------------------- */
#define DMA2_CR_DIR_Pos                       1                                                       /*!< DMA2 CR: DIR Position                   */
#define DMA2_CR_DIR_Msk                       (0x01UL << DMA2_CR_DIR_Pos)                             /*!< DMA2 CR: DIR Mask                       */
#define DMA2_CR_SIZE_Pos                      2                                                       /*!< DMA2 CR: SIZE Position                  */
#define DMA2_CR_SIZE_Msk                      (0x03UL << DMA2_CR_SIZE_Pos)                            /*!< DMA2 CR: SIZE Mask                      */
#define DMA2_CR_PERISEL_Pos                   8                                                       /*!< DMA2 CR: PERISEL Position               */
#define DMA2_CR_PERISEL_Msk                   (0x0fUL << DMA2_CR_PERISEL_Pos)                         /*!< DMA2 CR: PERISEL Mask                   */
#define DMA2_CR_TRANSCNT_Pos                  16                                                      /*!< DMA2 CR: TRANSCNT Position              */
#define DMA2_CR_TRANSCNT_Msk                  (0x00000fffUL << DMA2_CR_TRANSCNT_Pos)                  /*!< DMA2 CR: TRANSCNT Mask                  */

/* -----------------------------------  DMA2_SR  ---------------------------------- */
#define DMA2_SR_DMAEN_Pos                     0                                                       /*!< DMA2 SR: DMAEN Position                 */
#define DMA2_SR_DMAEN_Msk                     (0x01UL << DMA2_SR_DMAEN_Pos)                           /*!< DMA2 SR: DMAEN Mask                     */
#define DMA2_SR_EOT_Pos                       7                                                       /*!< DMA2 SR: EOT Position                   */
#define DMA2_SR_EOT_Msk                       (0x01UL << DMA2_SR_EOT_Pos)                             /*!< DMA2 SR: EOT Mask                       */

/* ----------------------------------  DMA2_PAR  ---------------------------------- */
#define DMA2_PAR_PAR_Pos                      0                                                       /*!< DMA2 PAR: PAR Position                  */
#define DMA2_PAR_PAR_Msk                      (0x0000ffffUL << DMA2_PAR_PAR_Pos)                      /*!< DMA2 PAR: PAR Mask                      */

/* ----------------------------------  DMA2_MAR  ---------------------------------- */
#define DMA2_MAR_MAR_Pos                      0                                                       /*!< DMA2 MAR: MAR Position                  */
#define DMA2_MAR_MAR_Msk                      (0xffffffffUL << DMA2_MAR_MAR_Pos)                      /*!< DMA2 MAR: MAR Mask                      */


/* ================================================================================ */
/* ================         struct 'DMAC3' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  DMA3_CR  ---------------------------------- */
#define DMA3_CR_DIR_Pos                       1                                                       /*!< DMA3 CR: DIR Position                   */
#define DMA3_CR_DIR_Msk                       (0x01UL << DMA3_CR_DIR_Pos)                             /*!< DMA3 CR: DIR Mask                       */
#define DMA3_CR_SIZE_Pos                      2                                                       /*!< DMA3 CR: SIZE Position                  */
#define DMA3_CR_SIZE_Msk                      (0x03UL << DMA3_CR_SIZE_Pos)                            /*!< DMA3 CR: SIZE Mask                      */
#define DMA3_CR_PERISEL_Pos                   8                                                       /*!< DMA3 CR: PERISEL Position               */
#define DMA3_CR_PERISEL_Msk                   (0x0fUL << DMA3_CR_PERISEL_Pos)                         /*!< DMA3 CR: PERISEL Mask                   */
#define DMA3_CR_TRANSCNT_Pos                  16                                                      /*!< DMA3 CR: TRANSCNT Position              */
#define DMA3_CR_TRANSCNT_Msk                  (0x00000fffUL << DMA3_CR_TRANSCNT_Pos)                  /*!< DMA3 CR: TRANSCNT Mask                  */

/* -----------------------------------  DMA3_SR  ---------------------------------- */
#define DMA3_SR_DMAEN_Pos                     0                                                       /*!< DMA3 SR: DMAEN Position                 */
#define DMA3_SR_DMAEN_Msk                     (0x01UL << DMA3_SR_DMAEN_Pos)                           /*!< DMA3 SR: DMAEN Mask                     */
#define DMA3_SR_EOT_Pos                       7                                                       /*!< DMA3 SR: EOT Position                   */
#define DMA3_SR_EOT_Msk                       (0x01UL << DMA3_SR_EOT_Pos)                             /*!< DMA3 SR: EOT Mask                       */

/* ----------------------------------  DMA3_PAR  ---------------------------------- */
#define DMA3_PAR_PAR_Pos                      0                                                       /*!< DMA3 PAR: PAR Position                  */
#define DMA3_PAR_PAR_Msk                      (0x0000ffffUL << DMA3_PAR_PAR_Pos)                      /*!< DMA3 PAR: PAR Mask                      */

/* ----------------------------------  DMA3_MAR  ---------------------------------- */
#define DMA3_MAR_MAR_Pos                      0                                                       /*!< DMA3 MAR: MAR Position                  */
#define DMA3_MAR_MAR_Msk                      (0xffffffffUL << DMA3_MAR_MAR_Pos)                      /*!< DMA3 MAR: MAR Mask                      */


/* ================================================================================ */
/* ================          struct 'WDT' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  WDT_CR  ----------------------------------- */
#define WDT_CR_CLKDIV_Pos                     0                                                       /*!< WDT CR: CLKDIV Position                 */
#define WDT_CR_CLKDIV_Msk                     (0x03UL << WDT_CR_CLKDIV_Pos)                           /*!< WDT CR: CLKDIV Mask                     */
#define WDT_CR_UNFIEN_Pos                     2                                                       /*!< WDT CR: UNFIEN Position                 */
#define WDT_CR_UNFIEN_Msk                     (0x01UL << WDT_CR_UNFIEN_Pos)                           /*!< WDT CR: UNFIEN Mask                     */
#define WDT_CR_WINMIEN_Pos                    3                                                       /*!< WDT CR: WINMIEN Position                */
#define WDT_CR_WINMIEN_Msk                    (0x01UL << WDT_CR_WINMIEN_Pos)                          /*!< WDT CR: WINMIEN Mask                    */
#define WDT_CR_CNTEN_Pos                      4                                                       /*!< WDT CR: CNTEN Position                  */
#define WDT_CR_CNTEN_Msk                      (0x3fUL << WDT_CR_CNTEN_Pos)                            /*!< WDT CR: CNTEN Mask                      */
#define WDT_CR_RSTEN_Pos                      10                                                      /*!< WDT CR: RSTEN Position                  */
#define WDT_CR_RSTEN_Msk                      (0x3fUL << WDT_CR_RSTEN_Pos)                            /*!< WDT CR: RSTEN Mask                      */
#define WDT_CR_WTIDKY_Pos                     16                                                      /*!< WDT CR: WTIDKY Position                 */
#define WDT_CR_WTIDKY_Msk                     (0x0000ffffUL << WDT_CR_WTIDKY_Pos)                     /*!< WDT CR: WTIDKY Mask                     */

/* -----------------------------------  WDT_SR  ----------------------------------- */
#define WDT_SR_UNFIFLAG_Pos                   0                                                       /*!< WDT SR: UNFIFLAG Position               */
#define WDT_SR_UNFIFLAG_Msk                   (0x01UL << WDT_SR_UNFIFLAG_Pos)                         /*!< WDT SR: UNFIFLAG Mask                   */
#define WDT_SR_WINMIFLAG_Pos                  1                                                       /*!< WDT SR: WINMIFLAG Position              */
#define WDT_SR_WINMIFLAG_Msk                  (0x01UL << WDT_SR_WINMIFLAG_Pos)                        /*!< WDT SR: WINMIFLAG Mask                  */
#define WDT_SR_DBGCNTEN_Pos                   7                                                       /*!< WDT SR: DBGCNTEN Position               */
#define WDT_SR_DBGCNTEN_Msk                   (0x01UL << WDT_SR_DBGCNTEN_Pos)                         /*!< WDT SR: DBGCNTEN Mask                   */

/* -----------------------------------  WDT_DR  ----------------------------------- */
#define WDT_DR_DATA_Pos                       0                                                       /*!< WDT DR: DATA Position                   */
#define WDT_DR_DATA_Msk                       (0x00ffffffUL << WDT_DR_DATA_Pos)                       /*!< WDT DR: DATA Mask                       */

/* -----------------------------------  WDT_CNT  ---------------------------------- */
#define WDT_CNT_CNT_Pos                       0                                                       /*!< WDT CNT: CNT Position                   */
#define WDT_CNT_CNT_Msk                       (0x00ffffffUL << WDT_CNT_CNT_Pos)                       /*!< WDT CNT: CNT Mask                       */

/* ----------------------------------  WDT_WINDR  --------------------------------- */
#define WDT_WINDR_WDATA_Pos                   0                                                       /*!< WDT WINDR: WDATA Position               */
#define WDT_WINDR_WDATA_Msk                   (0x00ffffffUL << WDT_WINDR_WDATA_Pos)                   /*!< WDT WINDR: WDATA Mask                   */

/* ----------------------------------  WDT_CNTR  ---------------------------------- */
#define WDT_CNTR_CNTR_Pos                     0                                                       /*!< WDT CNTR: CNTR Position                 */
#define WDT_CNTR_CNTR_Msk                     (0x000000ffUL << WDT_CNTR_CNTR_Pos)                     /*!< WDT CNTR: CNTR Mask                     */


/* ================================================================================ */
/* ================           struct 'WT' Position & Mask          ================ */
/* ================================================================================ */


/* ------------------------------------  WT_CR  ----------------------------------- */
#define WT_CR_WTCLR_Pos                       0                                                       /*!< WT CR: WTCLR Position                   */
#define WT_CR_WTCLR_Msk                       (0x01UL << WT_CR_WTCLR_Pos)                             /*!< WT CR: WTCLR Mask                       */
#define WT_CR_WTIFLAG_Pos                     1                                                       /*!< WT CR: WTIFLAG Position                 */
#define WT_CR_WTIFLAG_Msk                     (0x01UL << WT_CR_WTIFLAG_Pos)                           /*!< WT CR: WTIFLAG Mask                     */
#define WT_CR_WTIEN_Pos                       3                                                       /*!< WT CR: WTIEN Position                   */
#define WT_CR_WTIEN_Msk                       (0x01UL << WT_CR_WTIEN_Pos)                             /*!< WT CR: WTIEN Mask                       */
#define WT_CR_WTINTV_Pos                      4                                                       /*!< WT CR: WTINTV Position                  */
#define WT_CR_WTINTV_Msk                      (0x03UL << WT_CR_WTINTV_Pos)                            /*!< WT CR: WTINTV Mask                      */
#define WT_CR_WTEN_Pos                        7                                                       /*!< WT CR: WTEN Position                    */
#define WT_CR_WTEN_Msk                        (0x01UL << WT_CR_WTEN_Pos)                              /*!< WT CR: WTEN Mask                        */

/* ------------------------------------  WT_DR  ----------------------------------- */
#define WT_DR_WTDATA_Pos                      0                                                       /*!< WT DR: WTDATA Position                  */
#define WT_DR_WTDATA_Msk                      (0x00000fffUL << WT_DR_WTDATA_Pos)                      /*!< WT DR: WTDATA Mask                      */

/* -----------------------------------  WT_CNT  ----------------------------------- */
#define WT_CNT_CNT_Pos                        0                                                       /*!< WT CNT: CNT Position                    */
#define WT_CNT_CNT_Msk                        (0x00000fffUL << WT_CNT_CNT_Pos)                        /*!< WT CNT: CNT Mask                        */


/* ================================================================================ */
/* ================        struct 'TIMER10' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER10_CR  --------------------------------- */
#define TIMER10_CR_TnCLR_Pos                  0                                                       /*!< TIMER10 CR: TnCLR Position              */
#define TIMER10_CR_TnCLR_Msk                  (0x01UL << TIMER10_CR_TnCLR_Pos)                        /*!< TIMER10 CR: TnCLR Mask                  */
#define TIMER10_CR_TnPAU_Pos                  1                                                       /*!< TIMER10 CR: TnPAU Position              */
#define TIMER10_CR_TnPAU_Msk                  (0x01UL << TIMER10_CR_TnPAU_Pos)                        /*!< TIMER10 CR: TnPAU Mask                  */
#define TIMER10_CR_TnCIFLAG_Pos               2                                                       /*!< TIMER10 CR: TnCIFLAG Position           */
#define TIMER10_CR_TnCIFLAG_Msk               (0x01UL << TIMER10_CR_TnCIFLAG_Pos)                     /*!< TIMER10 CR: TnCIFLAG Mask               */
#define TIMER10_CR_TnMIFLAG_Pos               3                                                       /*!< TIMER10 CR: TnMIFLAG Position           */
#define TIMER10_CR_TnMIFLAG_Msk               (0x01UL << TIMER10_CR_TnMIFLAG_Pos)                     /*!< TIMER10 CR: TnMIFLAG Mask               */
#define TIMER10_CR_TnCIEN_Pos                 4                                                       /*!< TIMER10 CR: TnCIEN Position             */
#define TIMER10_CR_TnCIEN_Msk                 (0x01UL << TIMER10_CR_TnCIEN_Pos)                       /*!< TIMER10 CR: TnCIEN Mask                 */
#define TIMER10_CR_TnMIEN_Pos                 5                                                       /*!< TIMER10 CR: TnMIEN Position             */
#define TIMER10_CR_TnMIEN_Msk                 (0x01UL << TIMER10_CR_TnMIEN_Pos)                       /*!< TIMER10 CR: TnMIEN Mask                 */
#define TIMER10_CR_TnCPOL_Pos                 6                                                       /*!< TIMER10 CR: TnCPOL Position             */
#define TIMER10_CR_TnCPOL_Msk                 (0x03UL << TIMER10_CR_TnCPOL_Pos)                       /*!< TIMER10 CR: TnCPOL Mask                 */
#define TIMER10_CR_TnOPOL_Pos                 8                                                       /*!< TIMER10 CR: TnOPOL Position             */
#define TIMER10_CR_TnOPOL_Msk                 (0x01UL << TIMER10_CR_TnOPOL_Pos)                       /*!< TIMER10 CR: TnOPOL Mask                 */
#define TIMER10_CR_TnECE_Pos                  11                                                      /*!< TIMER10 CR: TnECE Position              */
#define TIMER10_CR_TnECE_Msk                  (0x01UL << TIMER10_CR_TnECE_Pos)                        /*!< TIMER10 CR: TnECE Mask                  */
#define TIMER10_CR_TnMS_Pos                   12                                                      /*!< TIMER10 CR: TnMS Position               */
#define TIMER10_CR_TnMS_Msk                   (0x03UL << TIMER10_CR_TnMS_Pos)                         /*!< TIMER10 CR: TnMS Mask                   */
#define TIMER10_CR_TnCLK_Pos                  14                                                      /*!< TIMER10 CR: TnCLK Position              */
#define TIMER10_CR_TnCLK_Msk                  (0x01UL << TIMER10_CR_TnCLK_Pos)                        /*!< TIMER10 CR: TnCLK Mask                  */
#define TIMER10_CR_TnEN_Pos                   15                                                      /*!< TIMER10 CR: TnEN Position               */
#define TIMER10_CR_TnEN_Msk                   (0x01UL << TIMER10_CR_TnEN_Pos)                         /*!< TIMER10 CR: TnEN Mask                   */

/* ---------------------------------  TIMER10_ADR  -------------------------------- */
#define TIMER10_ADR_ADATA_Pos                 0                                                       /*!< TIMER10 ADR: ADATA Position             */
#define TIMER10_ADR_ADATA_Msk                 (0x0000ffffUL << TIMER10_ADR_ADATA_Pos)                 /*!< TIMER10 ADR: ADATA Mask                 */

/* ---------------------------------  TIMER10_BDR  -------------------------------- */
#define TIMER10_BDR_BDATA_Pos                 0                                                       /*!< TIMER10 BDR: BDATA Position             */
#define TIMER10_BDR_BDATA_Msk                 (0x0000ffffUL << TIMER10_BDR_BDATA_Pos)                 /*!< TIMER10 BDR: BDATA Mask                 */

/* --------------------------------  TIMER10_CAPDR  ------------------------------- */
#define TIMER10_CAPDR_CAPD_Pos                0                                                       /*!< TIMER10 CAPDR: CAPD Position            */
#define TIMER10_CAPDR_CAPD_Msk                (0x0000ffffUL << TIMER10_CAPDR_CAPD_Pos)                /*!< TIMER10 CAPDR: CAPD Mask                */

/* --------------------------------  TIMER10_PREDR  ------------------------------- */
#define TIMER10_PREDR_PRED_Pos                0                                                       /*!< TIMER10 PREDR: PRED Position            */
#define TIMER10_PREDR_PRED_Msk                (0x00000fffUL << TIMER10_PREDR_PRED_Pos)                /*!< TIMER10 PREDR: PRED Mask                */

/* ---------------------------------  TIMER10_CNT  -------------------------------- */
#define TIMER10_CNT_CNT_Pos                   0                                                       /*!< TIMER10 CNT: CNT Position               */
#define TIMER10_CNT_CNT_Msk                   (0x0000ffffUL << TIMER10_CNT_CNT_Pos)                   /*!< TIMER10 CNT: CNT Mask                   */


/* ================================================================================ */
/* ================        struct 'TIMER11' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER11_CR  --------------------------------- */
#define TIMER11_CR_TnCLR_Pos                  0                                                       /*!< TIMER11 CR: TnCLR Position              */
#define TIMER11_CR_TnCLR_Msk                  (0x01UL << TIMER11_CR_TnCLR_Pos)                        /*!< TIMER11 CR: TnCLR Mask                  */
#define TIMER11_CR_TnPAU_Pos                  1                                                       /*!< TIMER11 CR: TnPAU Position              */
#define TIMER11_CR_TnPAU_Msk                  (0x01UL << TIMER11_CR_TnPAU_Pos)                        /*!< TIMER11 CR: TnPAU Mask                  */
#define TIMER11_CR_TnCIFLAG_Pos               2                                                       /*!< TIMER11 CR: TnCIFLAG Position           */
#define TIMER11_CR_TnCIFLAG_Msk               (0x01UL << TIMER11_CR_TnCIFLAG_Pos)                     /*!< TIMER11 CR: TnCIFLAG Mask               */
#define TIMER11_CR_TnMIFLAG_Pos               3                                                       /*!< TIMER11 CR: TnMIFLAG Position           */
#define TIMER11_CR_TnMIFLAG_Msk               (0x01UL << TIMER11_CR_TnMIFLAG_Pos)                     /*!< TIMER11 CR: TnMIFLAG Mask               */
#define TIMER11_CR_TnCIEN_Pos                 4                                                       /*!< TIMER11 CR: TnCIEN Position             */
#define TIMER11_CR_TnCIEN_Msk                 (0x01UL << TIMER11_CR_TnCIEN_Pos)                       /*!< TIMER11 CR: TnCIEN Mask                 */
#define TIMER11_CR_TnMIEN_Pos                 5                                                       /*!< TIMER11 CR: TnMIEN Position             */
#define TIMER11_CR_TnMIEN_Msk                 (0x01UL << TIMER11_CR_TnMIEN_Pos)                       /*!< TIMER11 CR: TnMIEN Mask                 */
#define TIMER11_CR_TnCPOL_Pos                 6                                                       /*!< TIMER11 CR: TnCPOL Position             */
#define TIMER11_CR_TnCPOL_Msk                 (0x03UL << TIMER11_CR_TnCPOL_Pos)                       /*!< TIMER11 CR: TnCPOL Mask                 */
#define TIMER11_CR_TnOPOL_Pos                 8                                                       /*!< TIMER11 CR: TnOPOL Position             */
#define TIMER11_CR_TnOPOL_Msk                 (0x01UL << TIMER11_CR_TnOPOL_Pos)                       /*!< TIMER11 CR: TnOPOL Mask                 */
#define TIMER11_CR_TnECE_Pos                  11                                                      /*!< TIMER11 CR: TnECE Position              */
#define TIMER11_CR_TnECE_Msk                  (0x01UL << TIMER11_CR_TnECE_Pos)                        /*!< TIMER11 CR: TnECE Mask                  */
#define TIMER11_CR_TnMS_Pos                   12                                                      /*!< TIMER11 CR: TnMS Position               */
#define TIMER11_CR_TnMS_Msk                   (0x03UL << TIMER11_CR_TnMS_Pos)                         /*!< TIMER11 CR: TnMS Mask                   */
#define TIMER11_CR_TnCLK_Pos                  14                                                      /*!< TIMER11 CR: TnCLK Position              */
#define TIMER11_CR_TnCLK_Msk                  (0x01UL << TIMER11_CR_TnCLK_Pos)                        /*!< TIMER11 CR: TnCLK Mask                  */
#define TIMER11_CR_TnEN_Pos                   15                                                      /*!< TIMER11 CR: TnEN Position               */
#define TIMER11_CR_TnEN_Msk                   (0x01UL << TIMER11_CR_TnEN_Pos)                         /*!< TIMER11 CR: TnEN Mask                   */

/* ---------------------------------  TIMER11_ADR  -------------------------------- */
#define TIMER11_ADR_ADATA_Pos                 0                                                       /*!< TIMER11 ADR: ADATA Position             */
#define TIMER11_ADR_ADATA_Msk                 (0x0000ffffUL << TIMER11_ADR_ADATA_Pos)                 /*!< TIMER11 ADR: ADATA Mask                 */

/* ---------------------------------  TIMER11_BDR  -------------------------------- */
#define TIMER11_BDR_BDATA_Pos                 0                                                       /*!< TIMER11 BDR: BDATA Position             */
#define TIMER11_BDR_BDATA_Msk                 (0x0000ffffUL << TIMER11_BDR_BDATA_Pos)                 /*!< TIMER11 BDR: BDATA Mask                 */

/* --------------------------------  TIMER11_CAPDR  ------------------------------- */
#define TIMER11_CAPDR_CAPD_Pos                0                                                       /*!< TIMER11 CAPDR: CAPD Position            */
#define TIMER11_CAPDR_CAPD_Msk                (0x0000ffffUL << TIMER11_CAPDR_CAPD_Pos)                /*!< TIMER11 CAPDR: CAPD Mask                */

/* --------------------------------  TIMER11_PREDR  ------------------------------- */
#define TIMER11_PREDR_PRED_Pos                0                                                       /*!< TIMER11 PREDR: PRED Position            */
#define TIMER11_PREDR_PRED_Msk                (0x00000fffUL << TIMER11_PREDR_PRED_Pos)                /*!< TIMER11 PREDR: PRED Mask                */

/* ---------------------------------  TIMER11_CNT  -------------------------------- */
#define TIMER11_CNT_CNT_Pos                   0                                                       /*!< TIMER11 CNT: CNT Position               */
#define TIMER11_CNT_CNT_Msk                   (0x0000ffffUL << TIMER11_CNT_CNT_Pos)                   /*!< TIMER11 CNT: CNT Mask                   */


/* ================================================================================ */
/* ================        struct 'TIMER12' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER12_CR  --------------------------------- */
#define TIMER12_CR_TnCLR_Pos                  0                                                       /*!< TIMER12 CR: TnCLR Position              */
#define TIMER12_CR_TnCLR_Msk                  (0x01UL << TIMER12_CR_TnCLR_Pos)                        /*!< TIMER12 CR: TnCLR Mask                  */
#define TIMER12_CR_TnPAU_Pos                  1                                                       /*!< TIMER12 CR: TnPAU Position              */
#define TIMER12_CR_TnPAU_Msk                  (0x01UL << TIMER12_CR_TnPAU_Pos)                        /*!< TIMER12 CR: TnPAU Mask                  */
#define TIMER12_CR_TnCIFLAG_Pos               2                                                       /*!< TIMER12 CR: TnCIFLAG Position           */
#define TIMER12_CR_TnCIFLAG_Msk               (0x01UL << TIMER12_CR_TnCIFLAG_Pos)                     /*!< TIMER12 CR: TnCIFLAG Mask               */
#define TIMER12_CR_TnMIFLAG_Pos               3                                                       /*!< TIMER12 CR: TnMIFLAG Position           */
#define TIMER12_CR_TnMIFLAG_Msk               (0x01UL << TIMER12_CR_TnMIFLAG_Pos)                     /*!< TIMER12 CR: TnMIFLAG Mask               */
#define TIMER12_CR_TnCIEN_Pos                 4                                                       /*!< TIMER12 CR: TnCIEN Position             */
#define TIMER12_CR_TnCIEN_Msk                 (0x01UL << TIMER12_CR_TnCIEN_Pos)                       /*!< TIMER12 CR: TnCIEN Mask                 */
#define TIMER12_CR_TnMIEN_Pos                 5                                                       /*!< TIMER12 CR: TnMIEN Position             */
#define TIMER12_CR_TnMIEN_Msk                 (0x01UL << TIMER12_CR_TnMIEN_Pos)                       /*!< TIMER12 CR: TnMIEN Mask                 */
#define TIMER12_CR_TnCPOL_Pos                 6                                                       /*!< TIMER12 CR: TnCPOL Position             */
#define TIMER12_CR_TnCPOL_Msk                 (0x03UL << TIMER12_CR_TnCPOL_Pos)                       /*!< TIMER12 CR: TnCPOL Mask                 */
#define TIMER12_CR_TnOPOL_Pos                 8                                                       /*!< TIMER12 CR: TnOPOL Position             */
#define TIMER12_CR_TnOPOL_Msk                 (0x01UL << TIMER12_CR_TnOPOL_Pos)                       /*!< TIMER12 CR: TnOPOL Mask                 */
#define TIMER12_CR_TnECE_Pos                  11                                                      /*!< TIMER12 CR: TnECE Position              */
#define TIMER12_CR_TnECE_Msk                  (0x01UL << TIMER12_CR_TnECE_Pos)                        /*!< TIMER12 CR: TnECE Mask                  */
#define TIMER12_CR_TnMS_Pos                   12                                                      /*!< TIMER12 CR: TnMS Position               */
#define TIMER12_CR_TnMS_Msk                   (0x03UL << TIMER12_CR_TnMS_Pos)                         /*!< TIMER12 CR: TnMS Mask                   */
#define TIMER12_CR_TnCLK_Pos                  14                                                      /*!< TIMER12 CR: TnCLK Position              */
#define TIMER12_CR_TnCLK_Msk                  (0x01UL << TIMER12_CR_TnCLK_Pos)                        /*!< TIMER12 CR: TnCLK Mask                  */
#define TIMER12_CR_TnEN_Pos                   15                                                      /*!< TIMER12 CR: TnEN Position               */
#define TIMER12_CR_TnEN_Msk                   (0x01UL << TIMER12_CR_TnEN_Pos)                         /*!< TIMER12 CR: TnEN Mask                   */

/* ---------------------------------  TIMER12_ADR  -------------------------------- */
#define TIMER12_ADR_ADATA_Pos                 0                                                       /*!< TIMER12 ADR: ADATA Position             */
#define TIMER12_ADR_ADATA_Msk                 (0x0000ffffUL << TIMER12_ADR_ADATA_Pos)                 /*!< TIMER12 ADR: ADATA Mask                 */

/* ---------------------------------  TIMER12_BDR  -------------------------------- */
#define TIMER12_BDR_BDATA_Pos                 0                                                       /*!< TIMER12 BDR: BDATA Position             */
#define TIMER12_BDR_BDATA_Msk                 (0x0000ffffUL << TIMER12_BDR_BDATA_Pos)                 /*!< TIMER12 BDR: BDATA Mask                 */

/* --------------------------------  TIMER12_CAPDR  ------------------------------- */
#define TIMER12_CAPDR_CAPD_Pos                0                                                       /*!< TIMER12 CAPDR: CAPD Position            */
#define TIMER12_CAPDR_CAPD_Msk                (0x0000ffffUL << TIMER12_CAPDR_CAPD_Pos)                /*!< TIMER12 CAPDR: CAPD Mask                */

/* --------------------------------  TIMER12_PREDR  ------------------------------- */
#define TIMER12_PREDR_PRED_Pos                0                                                       /*!< TIMER12 PREDR: PRED Position            */
#define TIMER12_PREDR_PRED_Msk                (0x00000fffUL << TIMER12_PREDR_PRED_Pos)                /*!< TIMER12 PREDR: PRED Mask                */

/* ---------------------------------  TIMER12_CNT  -------------------------------- */
#define TIMER12_CNT_CNT_Pos                   0                                                       /*!< TIMER12 CNT: CNT Position               */
#define TIMER12_CNT_CNT_Msk                   (0x0000ffffUL << TIMER12_CNT_CNT_Pos)                   /*!< TIMER12 CNT: CNT Mask                   */


/* ================================================================================ */
/* ================        struct 'TIMER13' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER13_CR  --------------------------------- */
#define TIMER13_CR_TnCLR_Pos                  0                                                       /*!< TIMER13 CR: TnCLR Position              */
#define TIMER13_CR_TnCLR_Msk                  (0x01UL << TIMER13_CR_TnCLR_Pos)                        /*!< TIMER13 CR: TnCLR Mask                  */
#define TIMER13_CR_TnPAU_Pos                  1                                                       /*!< TIMER13 CR: TnPAU Position              */
#define TIMER13_CR_TnPAU_Msk                  (0x01UL << TIMER13_CR_TnPAU_Pos)                        /*!< TIMER13 CR: TnPAU Mask                  */
#define TIMER13_CR_TnCIFLAG_Pos               2                                                       /*!< TIMER13 CR: TnCIFLAG Position           */
#define TIMER13_CR_TnCIFLAG_Msk               (0x01UL << TIMER13_CR_TnCIFLAG_Pos)                     /*!< TIMER13 CR: TnCIFLAG Mask               */
#define TIMER13_CR_TnMIFLAG_Pos               3                                                       /*!< TIMER13 CR: TnMIFLAG Position           */
#define TIMER13_CR_TnMIFLAG_Msk               (0x01UL << TIMER13_CR_TnMIFLAG_Pos)                     /*!< TIMER13 CR: TnMIFLAG Mask               */
#define TIMER13_CR_TnCIEN_Pos                 4                                                       /*!< TIMER13 CR: TnCIEN Position             */
#define TIMER13_CR_TnCIEN_Msk                 (0x01UL << TIMER13_CR_TnCIEN_Pos)                       /*!< TIMER13 CR: TnCIEN Mask                 */
#define TIMER13_CR_TnMIEN_Pos                 5                                                       /*!< TIMER13 CR: TnMIEN Position             */
#define TIMER13_CR_TnMIEN_Msk                 (0x01UL << TIMER13_CR_TnMIEN_Pos)                       /*!< TIMER13 CR: TnMIEN Mask                 */
#define TIMER13_CR_TnCPOL_Pos                 6                                                       /*!< TIMER13 CR: TnCPOL Position             */
#define TIMER13_CR_TnCPOL_Msk                 (0x03UL << TIMER13_CR_TnCPOL_Pos)                       /*!< TIMER13 CR: TnCPOL Mask                 */
#define TIMER13_CR_TnOPOL_Pos                 8                                                       /*!< TIMER13 CR: TnOPOL Position             */
#define TIMER13_CR_TnOPOL_Msk                 (0x01UL << TIMER13_CR_TnOPOL_Pos)                       /*!< TIMER13 CR: TnOPOL Mask                 */
#define TIMER13_CR_TnECE_Pos                  11                                                      /*!< TIMER13 CR: TnECE Position              */
#define TIMER13_CR_TnECE_Msk                  (0x01UL << TIMER13_CR_TnECE_Pos)                        /*!< TIMER13 CR: TnECE Mask                  */
#define TIMER13_CR_TnMS_Pos                   12                                                      /*!< TIMER13 CR: TnMS Position               */
#define TIMER13_CR_TnMS_Msk                   (0x03UL << TIMER13_CR_TnMS_Pos)                         /*!< TIMER13 CR: TnMS Mask                   */
#define TIMER13_CR_TnCLK_Pos                  14                                                      /*!< TIMER13 CR: TnCLK Position              */
#define TIMER13_CR_TnCLK_Msk                  (0x01UL << TIMER13_CR_TnCLK_Pos)                        /*!< TIMER13 CR: TnCLK Mask                  */
#define TIMER13_CR_TnEN_Pos                   15                                                      /*!< TIMER13 CR: TnEN Position               */
#define TIMER13_CR_TnEN_Msk                   (0x01UL << TIMER13_CR_TnEN_Pos)                         /*!< TIMER13 CR: TnEN Mask                   */

/* ---------------------------------  TIMER13_ADR  -------------------------------- */
#define TIMER13_ADR_ADATA_Pos                 0                                                       /*!< TIMER13 ADR: ADATA Position             */
#define TIMER13_ADR_ADATA_Msk                 (0x0000ffffUL << TIMER13_ADR_ADATA_Pos)                 /*!< TIMER13 ADR: ADATA Mask                 */

/* ---------------------------------  TIMER13_BDR  -------------------------------- */
#define TIMER13_BDR_BDATA_Pos                 0                                                       /*!< TIMER13 BDR: BDATA Position             */
#define TIMER13_BDR_BDATA_Msk                 (0x0000ffffUL << TIMER13_BDR_BDATA_Pos)                 /*!< TIMER13 BDR: BDATA Mask                 */

/* --------------------------------  TIMER13_CAPDR  ------------------------------- */
#define TIMER13_CAPDR_CAPD_Pos                0                                                       /*!< TIMER13 CAPDR: CAPD Position            */
#define TIMER13_CAPDR_CAPD_Msk                (0x0000ffffUL << TIMER13_CAPDR_CAPD_Pos)                /*!< TIMER13 CAPDR: CAPD Mask                */

/* --------------------------------  TIMER13_PREDR  ------------------------------- */
#define TIMER13_PREDR_PRED_Pos                0                                                       /*!< TIMER13 PREDR: PRED Position            */
#define TIMER13_PREDR_PRED_Msk                (0x00000fffUL << TIMER13_PREDR_PRED_Pos)                /*!< TIMER13 PREDR: PRED Mask                */

/* ---------------------------------  TIMER13_CNT  -------------------------------- */
#define TIMER13_CNT_CNT_Pos                   0                                                       /*!< TIMER13 CNT: CNT Position               */
#define TIMER13_CNT_CNT_Msk                   (0x0000ffffUL << TIMER13_CNT_CNT_Pos)                   /*!< TIMER13 CNT: CNT Mask                   */


/* ================================================================================ */
/* ================        struct 'TIMER20' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER20_CR  --------------------------------- */
#define TIMER20_CR_TnCLR_Pos                  0                                                       /*!< TIMER20 CR: TnCLR Position              */
#define TIMER20_CR_TnCLR_Msk                  (0x01UL << TIMER20_CR_TnCLR_Pos)                        /*!< TIMER20 CR: TnCLR Mask                  */
#define TIMER20_CR_TnPAU_Pos                  1                                                       /*!< TIMER20 CR: TnPAU Position              */
#define TIMER20_CR_TnPAU_Msk                  (0x01UL << TIMER20_CR_TnPAU_Pos)                        /*!< TIMER20 CR: TnPAU Mask                  */
#define TIMER20_CR_TnCIFLAG_Pos               2                                                       /*!< TIMER20 CR: TnCIFLAG Position           */
#define TIMER20_CR_TnCIFLAG_Msk               (0x01UL << TIMER20_CR_TnCIFLAG_Pos)                     /*!< TIMER20 CR: TnCIFLAG Mask               */
#define TIMER20_CR_TnMIFLAG_Pos               3                                                       /*!< TIMER20 CR: TnMIFLAG Position           */
#define TIMER20_CR_TnMIFLAG_Msk               (0x01UL << TIMER20_CR_TnMIFLAG_Pos)                     /*!< TIMER20 CR: TnMIFLAG Mask               */
#define TIMER20_CR_TnCIEN_Pos                 4                                                       /*!< TIMER20 CR: TnCIEN Position             */
#define TIMER20_CR_TnCIEN_Msk                 (0x01UL << TIMER20_CR_TnCIEN_Pos)                       /*!< TIMER20 CR: TnCIEN Mask                 */
#define TIMER20_CR_TnMIEN_Pos                 5                                                       /*!< TIMER20 CR: TnMIEN Position             */
#define TIMER20_CR_TnMIEN_Msk                 (0x01UL << TIMER20_CR_TnMIEN_Pos)                       /*!< TIMER20 CR: TnMIEN Mask                 */
#define TIMER20_CR_TnCPOL_Pos                 6                                                       /*!< TIMER20 CR: TnCPOL Position             */
#define TIMER20_CR_TnCPOL_Msk                 (0x03UL << TIMER20_CR_TnCPOL_Pos)                       /*!< TIMER20 CR: TnCPOL Mask                 */
#define TIMER20_CR_TnOPOL_Pos                 8                                                       /*!< TIMER20 CR: TnOPOL Position             */
#define TIMER20_CR_TnOPOL_Msk                 (0x01UL << TIMER20_CR_TnOPOL_Pos)                       /*!< TIMER20 CR: TnOPOL Mask                 */
#define TIMER20_CR_TnECE_Pos                  11                                                      /*!< TIMER20 CR: TnECE Position              */
#define TIMER20_CR_TnECE_Msk                  (0x01UL << TIMER20_CR_TnECE_Pos)                        /*!< TIMER20 CR: TnECE Mask                  */
#define TIMER20_CR_TnMS_Pos                   12                                                      /*!< TIMER20 CR: TnMS Position               */
#define TIMER20_CR_TnMS_Msk                   (0x03UL << TIMER20_CR_TnMS_Pos)                         /*!< TIMER20 CR: TnMS Mask                   */
#define TIMER20_CR_TnCLK_Pos                  14                                                      /*!< TIMER20 CR: TnCLK Position              */
#define TIMER20_CR_TnCLK_Msk                  (0x01UL << TIMER20_CR_TnCLK_Pos)                        /*!< TIMER20 CR: TnCLK Mask                  */
#define TIMER20_CR_TnEN_Pos                   15                                                      /*!< TIMER20 CR: TnEN Position               */
#define TIMER20_CR_TnEN_Msk                   (0x01UL << TIMER20_CR_TnEN_Pos)                         /*!< TIMER20 CR: TnEN Mask                   */

/* ---------------------------------  TIMER20_ADR  -------------------------------- */
#define TIMER20_ADR_ADATA_Pos                 0                                                       /*!< TIMER20 ADR: ADATA Position             */
#define TIMER20_ADR_ADATA_Msk                 (0xffffffffUL << TIMER20_ADR_ADATA_Pos)                 /*!< TIMER20 ADR: ADATA Mask                 */

/* ---------------------------------  TIMER20_BDR  -------------------------------- */
#define TIMER20_BDR_BDATA_Pos                 0                                                       /*!< TIMER20 BDR: BDATA Position             */
#define TIMER20_BDR_BDATA_Msk                 (0xffffffffUL << TIMER20_BDR_BDATA_Pos)                 /*!< TIMER20 BDR: BDATA Mask                 */

/* --------------------------------  TIMER20_CAPDR  ------------------------------- */
#define TIMER20_CAPDR_CAPD_Pos                0                                                       /*!< TIMER20 CAPDR: CAPD Position            */
#define TIMER20_CAPDR_CAPD_Msk                (0xffffffffUL << TIMER20_CAPDR_CAPD_Pos)                /*!< TIMER20 CAPDR: CAPD Mask                */

/* --------------------------------  TIMER20_PREDR  ------------------------------- */
#define TIMER20_PREDR_PRED_Pos                0                                                       /*!< TIMER20 PREDR: PRED Position            */
#define TIMER20_PREDR_PRED_Msk                (0x00000fffUL << TIMER20_PREDR_PRED_Pos)                /*!< TIMER20 PREDR: PRED Mask                */

/* ---------------------------------  TIMER20_CNT  -------------------------------- */
#define TIMER20_CNT_CNT_Pos                   0                                                       /*!< TIMER20 CNT: CNT Position               */
#define TIMER20_CNT_CNT_Msk                   (0xffffffffUL << TIMER20_CNT_CNT_Pos)                   /*!< TIMER20 CNT: CNT Mask                   */


/* ================================================================================ */
/* ================        struct 'TIMER21' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER21_CR  --------------------------------- */
#define TIMER21_CR_TnCLR_Pos                  0                                                       /*!< TIMER21 CR: TnCLR Position              */
#define TIMER21_CR_TnCLR_Msk                  (0x01UL << TIMER21_CR_TnCLR_Pos)                        /*!< TIMER21 CR: TnCLR Mask                  */
#define TIMER21_CR_TnPAU_Pos                  1                                                       /*!< TIMER21 CR: TnPAU Position              */
#define TIMER21_CR_TnPAU_Msk                  (0x01UL << TIMER21_CR_TnPAU_Pos)                        /*!< TIMER21 CR: TnPAU Mask                  */
#define TIMER21_CR_TnCIFLAG_Pos               2                                                       /*!< TIMER21 CR: TnCIFLAG Position           */
#define TIMER21_CR_TnCIFLAG_Msk               (0x01UL << TIMER21_CR_TnCIFLAG_Pos)                     /*!< TIMER21 CR: TnCIFLAG Mask               */
#define TIMER21_CR_TnMIFLAG_Pos               3                                                       /*!< TIMER21 CR: TnMIFLAG Position           */
#define TIMER21_CR_TnMIFLAG_Msk               (0x01UL << TIMER21_CR_TnMIFLAG_Pos)                     /*!< TIMER21 CR: TnMIFLAG Mask               */
#define TIMER21_CR_TnCIEN_Pos                 4                                                       /*!< TIMER21 CR: TnCIEN Position             */
#define TIMER21_CR_TnCIEN_Msk                 (0x01UL << TIMER21_CR_TnCIEN_Pos)                       /*!< TIMER21 CR: TnCIEN Mask                 */
#define TIMER21_CR_TnMIEN_Pos                 5                                                       /*!< TIMER21 CR: TnMIEN Position             */
#define TIMER21_CR_TnMIEN_Msk                 (0x01UL << TIMER21_CR_TnMIEN_Pos)                       /*!< TIMER21 CR: TnMIEN Mask                 */
#define TIMER21_CR_TnCPOL_Pos                 6                                                       /*!< TIMER21 CR: TnCPOL Position             */
#define TIMER21_CR_TnCPOL_Msk                 (0x03UL << TIMER21_CR_TnCPOL_Pos)                       /*!< TIMER21 CR: TnCPOL Mask                 */
#define TIMER21_CR_TnOPOL_Pos                 8                                                       /*!< TIMER21 CR: TnOPOL Position             */
#define TIMER21_CR_TnOPOL_Msk                 (0x01UL << TIMER21_CR_TnOPOL_Pos)                       /*!< TIMER21 CR: TnOPOL Mask                 */
#define TIMER21_CR_TnECE_Pos                  11                                                      /*!< TIMER21 CR: TnECE Position              */
#define TIMER21_CR_TnECE_Msk                  (0x01UL << TIMER21_CR_TnECE_Pos)                        /*!< TIMER21 CR: TnECE Mask                  */
#define TIMER21_CR_TnMS_Pos                   12                                                      /*!< TIMER21 CR: TnMS Position               */
#define TIMER21_CR_TnMS_Msk                   (0x03UL << TIMER21_CR_TnMS_Pos)                         /*!< TIMER21 CR: TnMS Mask                   */
#define TIMER21_CR_TnCLK_Pos                  14                                                      /*!< TIMER21 CR: TnCLK Position              */
#define TIMER21_CR_TnCLK_Msk                  (0x01UL << TIMER21_CR_TnCLK_Pos)                        /*!< TIMER21 CR: TnCLK Mask                  */
#define TIMER21_CR_TnEN_Pos                   15                                                      /*!< TIMER21 CR: TnEN Position               */
#define TIMER21_CR_TnEN_Msk                   (0x01UL << TIMER21_CR_TnEN_Pos)                         /*!< TIMER21 CR: TnEN Mask                   */

/* ---------------------------------  TIMER21_ADR  -------------------------------- */
#define TIMER21_ADR_ADATA_Pos                 0                                                       /*!< TIMER21 ADR: ADATA Position             */
#define TIMER21_ADR_ADATA_Msk                 (0xffffffffUL << TIMER21_ADR_ADATA_Pos)                 /*!< TIMER21 ADR: ADATA Mask                 */

/* ---------------------------------  TIMER21_BDR  -------------------------------- */
#define TIMER21_BDR_BDATA_Pos                 0                                                       /*!< TIMER21 BDR: BDATA Position             */
#define TIMER21_BDR_BDATA_Msk                 (0xffffffffUL << TIMER21_BDR_BDATA_Pos)                 /*!< TIMER21 BDR: BDATA Mask                 */

/* --------------------------------  TIMER21_CAPDR  ------------------------------- */
#define TIMER21_CAPDR_CAPD_Pos                0                                                       /*!< TIMER21 CAPDR: CAPD Position            */
#define TIMER21_CAPDR_CAPD_Msk                (0xffffffffUL << TIMER21_CAPDR_CAPD_Pos)                /*!< TIMER21 CAPDR: CAPD Mask                */

/* --------------------------------  TIMER21_PREDR  ------------------------------- */
#define TIMER21_PREDR_PRED_Pos                0                                                       /*!< TIMER21 PREDR: PRED Position            */
#define TIMER21_PREDR_PRED_Msk                (0x00000fffUL << TIMER21_PREDR_PRED_Pos)                /*!< TIMER21 PREDR: PRED Mask                */

/* ---------------------------------  TIMER21_CNT  -------------------------------- */
#define TIMER21_CNT_CNT_Pos                   0                                                       /*!< TIMER21 CNT: CNT Position               */
#define TIMER21_CNT_CNT_Msk                   (0xffffffffUL << TIMER21_CNT_CNT_Pos)                   /*!< TIMER21 CNT: CNT Mask                   */


/* ================================================================================ */
/* ================        struct 'TIMER30' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER30_CR  --------------------------------- */
#define TIMER30_CR_T30CLR_Pos                 0                                                       /*!< TIMER30 CR: T30CLR Position             */
#define TIMER30_CR_T30CLR_Msk                 (0x01UL << TIMER30_CR_T30CLR_Pos)                       /*!< TIMER30 CR: T30CLR Mask                 */
#define TIMER30_CR_PMOC_Pos                   1                                                       /*!< TIMER30 CR: PMOC Position               */
#define TIMER30_CR_PMOC_Msk                   (0x07UL << TIMER30_CR_PMOC_Pos)                         /*!< TIMER30 CR: PMOC Mask                   */
#define TIMER30_CR_UPDT_Pos                   4                                                       /*!< TIMER30 CR: UPDT Position               */
#define TIMER30_CR_UPDT_Msk                   (0x03UL << TIMER30_CR_UPDT_Pos)                         /*!< TIMER30 CR: UPDT Mask                   */
#define TIMER30_CR_T30CPOL_Pos                6                                                       /*!< TIMER30 CR: T30CPOL Position            */
#define TIMER30_CR_T30CPOL_Msk                (0x03UL << TIMER30_CR_T30CPOL_Pos)                      /*!< TIMER30 CR: T30CPOL Mask                */
#define TIMER30_CR_DLYPOS_Pos                 8                                                       /*!< TIMER30 CR: DLYPOS Position             */
#define TIMER30_CR_DLYPOS_Msk                 (0x01UL << TIMER30_CR_DLYPOS_Pos)                       /*!< TIMER30 CR: DLYPOS Mask                 */
#define TIMER30_CR_DLYEN_Pos                  9                                                       /*!< TIMER30 CR: DLYEN Position              */
#define TIMER30_CR_DLYEN_Msk                  (0x01UL << TIMER30_CR_DLYEN_Pos)                        /*!< TIMER30 CR: DLYEN Mask                  */
#define TIMER30_CR_FORCA_Pos                  10                                                      /*!< TIMER30 CR: FORCA Position              */
#define TIMER30_CR_FORCA_Msk                  (0x01UL << TIMER30_CR_FORCA_Pos)                        /*!< TIMER30 CR: FORCA Mask                  */
#define TIMER30_CR_T30ECE_Pos                 11                                                      /*!< TIMER30 CR: T30ECE Position             */
#define TIMER30_CR_T30ECE_Msk                 (0x01UL << TIMER30_CR_T30ECE_Pos)                       /*!< TIMER30 CR: T30ECE Mask                 */
#define TIMER30_CR_T30MS_Pos                  12                                                      /*!< TIMER30 CR: T30MS Position              */
#define TIMER30_CR_T30MS_Msk                  (0x03UL << TIMER30_CR_T30MS_Pos)                        /*!< TIMER30 CR: T30MS Mask                  */
#define TIMER30_CR_T30CLK_Pos                 14                                                      /*!< TIMER30 CR: T30CLK Position             */
#define TIMER30_CR_T30CLK_Msk                 (0x01UL << TIMER30_CR_T30CLK_Pos)                       /*!< TIMER30 CR: T30CLK Mask                 */
#define TIMER30_CR_T30EN_Pos                  15                                                      /*!< TIMER30 CR: T30EN Position              */
#define TIMER30_CR_T30EN_Msk                  (0x01UL << TIMER30_CR_T30EN_Pos)                        /*!< TIMER30 CR: T30EN Mask                  */

/* ---------------------------------  TIMER30_PDR  -------------------------------- */
#define TIMER30_PDR_PDATA_Pos                 0                                                       /*!< TIMER30 PDR: PDATA Position             */
#define TIMER30_PDR_PDATA_Msk                 (0x0000ffffUL << TIMER30_PDR_PDATA_Pos)                 /*!< TIMER30 PDR: PDATA Mask                 */

/* ---------------------------------  TIMER30_ADR  -------------------------------- */
#define TIMER30_ADR_ADATA_Pos                 0                                                       /*!< TIMER30 ADR: ADATA Position             */
#define TIMER30_ADR_ADATA_Msk                 (0x0000ffffUL << TIMER30_ADR_ADATA_Pos)                 /*!< TIMER30 ADR: ADATA Mask                 */

/* ---------------------------------  TIMER30_BDR  -------------------------------- */
#define TIMER30_BDR_BDATA_Pos                 0                                                       /*!< TIMER30 BDR: BDATA Position             */
#define TIMER30_BDR_BDATA_Msk                 (0x0000ffffUL << TIMER30_BDR_BDATA_Pos)                 /*!< TIMER30 BDR: BDATA Mask                 */

/* ---------------------------------  TIMER30_CDR  -------------------------------- */
#define TIMER30_CDR_CDATA_Pos                 0                                                       /*!< TIMER30 CDR: CDATA Position             */
#define TIMER30_CDR_CDATA_Msk                 (0x0000ffffUL << TIMER30_CDR_CDATA_Pos)                 /*!< TIMER30 CDR: CDATA Mask                 */

/* --------------------------------  TIMER30_CAPDR  ------------------------------- */
#define TIMER30_CAPDR_CAPD_Pos                0                                                       /*!< TIMER30 CAPDR: CAPD Position            */
#define TIMER30_CAPDR_CAPD_Msk                (0x0000ffffUL << TIMER30_CAPDR_CAPD_Pos)                /*!< TIMER30 CAPDR: CAPD Mask                */

/* --------------------------------  TIMER30_PREDR  ------------------------------- */
#define TIMER30_PREDR_PRED_Pos                0                                                       /*!< TIMER30 PREDR: PRED Position            */
#define TIMER30_PREDR_PRED_Msk                (0x00000fffUL << TIMER30_PREDR_PRED_Pos)                /*!< TIMER30 PREDR: PRED Mask                */

/* ---------------------------------  TIMER30_CNT  -------------------------------- */
#define TIMER30_CNT_CNT_Pos                   0                                                       /*!< TIMER30 CNT: CNT Position               */
#define TIMER30_CNT_CNT_Msk                   (0x0000ffffUL << TIMER30_CNT_CNT_Pos)                   /*!< TIMER30 CNT: CNT Mask                   */

/* --------------------------------  TIMER30_OUTCR  ------------------------------- */
#define TIMER30_OUTCR_LVLCA_Pos               0                                                       /*!< TIMER30 OUTCR: LVLCA Position           */
#define TIMER30_OUTCR_LVLCA_Msk               (0x01UL << TIMER30_OUTCR_LVLCA_Pos)                     /*!< TIMER30 OUTCR: LVLCA Mask               */
#define TIMER30_OUTCR_LVLBA_Pos               1                                                       /*!< TIMER30 OUTCR: LVLBA Position           */
#define TIMER30_OUTCR_LVLBA_Msk               (0x01UL << TIMER30_OUTCR_LVLBA_Pos)                     /*!< TIMER30 OUTCR: LVLBA Mask               */
#define TIMER30_OUTCR_LVLAA_Pos               2                                                       /*!< TIMER30 OUTCR: LVLAA Position           */
#define TIMER30_OUTCR_LVLAA_Msk               (0x01UL << TIMER30_OUTCR_LVLAA_Pos)                     /*!< TIMER30 OUTCR: LVLAA Mask               */
#define TIMER30_OUTCR_LVLCB_Pos               4                                                       /*!< TIMER30 OUTCR: LVLCB Position           */
#define TIMER30_OUTCR_LVLCB_Msk               (0x01UL << TIMER30_OUTCR_LVLCB_Pos)                     /*!< TIMER30 OUTCR: LVLCB Mask               */
#define TIMER30_OUTCR_LVLBB_Pos               5                                                       /*!< TIMER30 OUTCR: LVLBB Position           */
#define TIMER30_OUTCR_LVLBB_Msk               (0x01UL << TIMER30_OUTCR_LVLBB_Pos)                     /*!< TIMER30 OUTCR: LVLBB Mask               */
#define TIMER30_OUTCR_LVLAB_Pos               6                                                       /*!< TIMER30 OUTCR: LVLAB Position           */
#define TIMER30_OUTCR_LVLAB_Msk               (0x01UL << TIMER30_OUTCR_LVLAB_Pos)                     /*!< TIMER30 OUTCR: LVLAB Mask               */
#define TIMER30_OUTCR_PCAOE_Pos               8                                                       /*!< TIMER30 OUTCR: PCAOE Position           */
#define TIMER30_OUTCR_PCAOE_Msk               (0x01UL << TIMER30_OUTCR_PCAOE_Pos)                     /*!< TIMER30 OUTCR: PCAOE Mask               */
#define TIMER30_OUTCR_PBAOE_Pos               9                                                       /*!< TIMER30 OUTCR: PBAOE Position           */
#define TIMER30_OUTCR_PBAOE_Msk               (0x01UL << TIMER30_OUTCR_PBAOE_Pos)                     /*!< TIMER30 OUTCR: PBAOE Mask               */
#define TIMER30_OUTCR_PAAOE_Pos               10                                                      /*!< TIMER30 OUTCR: PAAOE Position           */
#define TIMER30_OUTCR_PAAOE_Msk               (0x01UL << TIMER30_OUTCR_PAAOE_Pos)                     /*!< TIMER30 OUTCR: PAAOE Mask               */
#define TIMER30_OUTCR_PCBOE_Pos               11                                                      /*!< TIMER30 OUTCR: PCBOE Position           */
#define TIMER30_OUTCR_PCBOE_Msk               (0x01UL << TIMER30_OUTCR_PCBOE_Pos)                     /*!< TIMER30 OUTCR: PCBOE Mask               */
#define TIMER30_OUTCR_PBBOE_Pos               12                                                      /*!< TIMER30 OUTCR: PBBOE Position           */
#define TIMER30_OUTCR_PBBOE_Msk               (0x01UL << TIMER30_OUTCR_PBBOE_Pos)                     /*!< TIMER30 OUTCR: PBBOE Mask               */
#define TIMER30_OUTCR_PABOE_Pos               13                                                      /*!< TIMER30 OUTCR: PABOE Position           */
#define TIMER30_OUTCR_PABOE_Msk               (0x01UL << TIMER30_OUTCR_PABOE_Pos)                     /*!< TIMER30 OUTCR: PABOE Mask               */
#define TIMER30_OUTCR_POLA_Pos                14                                                      /*!< TIMER30 OUTCR: POLA Position            */
#define TIMER30_OUTCR_POLA_Msk                (0x01UL << TIMER30_OUTCR_POLA_Pos)                      /*!< TIMER30 OUTCR: POLA Mask                */
#define TIMER30_OUTCR_POLB_Pos                15                                                      /*!< TIMER30 OUTCR: POLB Position            */
#define TIMER30_OUTCR_POLB_Msk                (0x01UL << TIMER30_OUTCR_POLB_Pos)                      /*!< TIMER30 OUTCR: POLB Mask                */
#define TIMER30_OUTCR_WTIDKY_Pos              16                                                      /*!< TIMER30 OUTCR: WTIDKY Position          */
#define TIMER30_OUTCR_WTIDKY_Msk              (0x0000ffffUL << TIMER30_OUTCR_WTIDKY_Pos)              /*!< TIMER30 OUTCR: WTIDKY Mask              */

/* ---------------------------------  TIMER30_DLY  -------------------------------- */
#define TIMER30_DLY_DLY_Pos                   0                                                       /*!< TIMER30 DLY: DLY Position               */
#define TIMER30_DLY_DLY_Msk                   (0x000003ffUL << TIMER30_DLY_DLY_Pos)                   /*!< TIMER30 DLY: DLY Mask                   */

/* --------------------------------  TIMER30_INTCR  ------------------------------- */
#define TIMER30_INTCR_T30CMIEN_Pos            0                                                       /*!< TIMER30 INTCR: T30CMIEN Position        */
#define TIMER30_INTCR_T30CMIEN_Msk            (0x01UL << TIMER30_INTCR_T30CMIEN_Pos)                  /*!< TIMER30 INTCR: T30CMIEN Mask            */
#define TIMER30_INTCR_T30BMIEN_Pos            1                                                       /*!< TIMER30 INTCR: T30BMIEN Position        */
#define TIMER30_INTCR_T30BMIEN_Msk            (0x01UL << TIMER30_INTCR_T30BMIEN_Pos)                  /*!< TIMER30 INTCR: T30BMIEN Mask            */
#define TIMER30_INTCR_T30AMIEN_Pos            2                                                       /*!< TIMER30 INTCR: T30AMIEN Position        */
#define TIMER30_INTCR_T30AMIEN_Msk            (0x01UL << TIMER30_INTCR_T30AMIEN_Pos)                  /*!< TIMER30 INTCR: T30AMIEN Mask            */
#define TIMER30_INTCR_T30PMIEN_Pos            3                                                       /*!< TIMER30 INTCR: T30PMIEN Position        */
#define TIMER30_INTCR_T30PMIEN_Msk            (0x01UL << TIMER30_INTCR_T30PMIEN_Pos)                  /*!< TIMER30 INTCR: T30PMIEN Mask            */
#define TIMER30_INTCR_T30BTIEN_Pos            4                                                       /*!< TIMER30 INTCR: T30BTIEN Position        */
#define TIMER30_INTCR_T30BTIEN_Msk            (0x01UL << TIMER30_INTCR_T30BTIEN_Pos)                  /*!< TIMER30 INTCR: T30BTIEN Mask            */
#define TIMER30_INTCR_T30CIEN_Pos             5                                                       /*!< TIMER30 INTCR: T30CIEN Position         */
#define TIMER30_INTCR_T30CIEN_Msk             (0x01UL << TIMER30_INTCR_T30CIEN_Pos)                   /*!< TIMER30 INTCR: T30CIEN Mask             */
#define TIMER30_INTCR_HIZIEN_Pos              6                                                       /*!< TIMER30 INTCR: HIZIEN Position          */
#define TIMER30_INTCR_HIZIEN_Msk              (0x01UL << TIMER30_INTCR_HIZIEN_Pos)                    /*!< TIMER30 INTCR: HIZIEN Mask              */

/* -------------------------------  TIMER30_INTFLAG  ------------------------------ */
#define TIMER30_INTFLAG_T30CMIFLAG_Pos        0                                                       /*!< TIMER30 INTFLAG: T30CMIFLAG Position    */
#define TIMER30_INTFLAG_T30CMIFLAG_Msk        (0x01UL << TIMER30_INTFLAG_T30CMIFLAG_Pos)              /*!< TIMER30 INTFLAG: T30CMIFLAG Mask        */
#define TIMER30_INTFLAG_T30BMIFLAG_Pos        1                                                       /*!< TIMER30 INTFLAG: T30BMIFLAG Position    */
#define TIMER30_INTFLAG_T30BMIFLAG_Msk        (0x01UL << TIMER30_INTFLAG_T30BMIFLAG_Pos)              /*!< TIMER30 INTFLAG: T30BMIFLAG Mask        */
#define TIMER30_INTFLAG_T30AMIFLAG_Pos        2                                                       /*!< TIMER30 INTFLAG: T30AMIFLAG Position    */
#define TIMER30_INTFLAG_T30AMIFLAG_Msk        (0x01UL << TIMER30_INTFLAG_T30AMIFLAG_Pos)              /*!< TIMER30 INTFLAG: T30AMIFLAG Mask        */
#define TIMER30_INTFLAG_T30PMIFLAG_Pos        3                                                       /*!< TIMER30 INTFLAG: T30PMIFLAG Position    */
#define TIMER30_INTFLAG_T30PMIFLAG_Msk        (0x01UL << TIMER30_INTFLAG_T30PMIFLAG_Pos)              /*!< TIMER30 INTFLAG: T30PMIFLAG Mask        */
#define TIMER30_INTFLAG_T30BTIFLAG_Pos        4                                                       /*!< TIMER30 INTFLAG: T30BTIFLAG Position    */
#define TIMER30_INTFLAG_T30BTIFLAG_Msk        (0x01UL << TIMER30_INTFLAG_T30BTIFLAG_Pos)              /*!< TIMER30 INTFLAG: T30BTIFLAG Mask        */
#define TIMER30_INTFLAG_T30CIFLAG_Pos         5                                                       /*!< TIMER30 INTFLAG: T30CIFLAG Position     */
#define TIMER30_INTFLAG_T30CIFLAG_Msk         (0x01UL << TIMER30_INTFLAG_T30CIFLAG_Pos)               /*!< TIMER30 INTFLAG: T30CIFLAG Mask         */
#define TIMER30_INTFLAG_HIZIFLAG_Pos          6                                                       /*!< TIMER30 INTFLAG: HIZIFLAG Position      */
#define TIMER30_INTFLAG_HIZIFLAG_Msk          (0x01UL << TIMER30_INTFLAG_HIZIFLAG_Pos)                /*!< TIMER30 INTFLAG: HIZIFLAG Mask          */

/* --------------------------------  TIMER30_HIZCR  ------------------------------- */
#define TIMER30_HIZCR_HIZCLR_Pos              0                                                       /*!< TIMER30 HIZCR: HIZCLR Position          */
#define TIMER30_HIZCR_HIZCLR_Msk              (0x01UL << TIMER30_HIZCR_HIZCLR_Pos)                    /*!< TIMER30 HIZCR: HIZCLR Mask              */
#define TIMER30_HIZCR_HIZSTA_Pos              1                                                       /*!< TIMER30 HIZCR: HIZSTA Position          */
#define TIMER30_HIZCR_HIZSTA_Msk              (0x01UL << TIMER30_HIZCR_HIZSTA_Pos)                    /*!< TIMER30 HIZCR: HIZSTA Mask              */
#define TIMER30_HIZCR_HEDGE_Pos               2                                                       /*!< TIMER30 HIZCR: HEDGE Position           */
#define TIMER30_HIZCR_HEDGE_Msk               (0x01UL << TIMER30_HIZCR_HEDGE_Pos)                     /*!< TIMER30 HIZCR: HEDGE Mask               */
#define TIMER30_HIZCR_HIZSW_Pos               4                                                       /*!< TIMER30 HIZCR: HIZSW Position           */
#define TIMER30_HIZCR_HIZSW_Msk               (0x01UL << TIMER30_HIZCR_HIZSW_Pos)                     /*!< TIMER30 HIZCR: HIZSW Mask               */
#define TIMER30_HIZCR_HIZEN_Pos               7                                                       /*!< TIMER30 HIZCR: HIZEN Position           */
#define TIMER30_HIZCR_HIZEN_Msk               (0x01UL << TIMER30_HIZCR_HIZEN_Pos)                     /*!< TIMER30 HIZCR: HIZEN Mask               */

/* --------------------------------  TIMER30_ADTCR  ------------------------------- */
#define TIMER30_ADTCR_T30CMTG_Pos             0                                                       /*!< TIMER30 ADTCR: T30CMTG Position         */
#define TIMER30_ADTCR_T30CMTG_Msk             (0x01UL << TIMER30_ADTCR_T30CMTG_Pos)                   /*!< TIMER30 ADTCR: T30CMTG Mask             */
#define TIMER30_ADTCR_T30BMTG_Pos             1                                                       /*!< TIMER30 ADTCR: T30BMTG Position         */
#define TIMER30_ADTCR_T30BMTG_Msk             (0x01UL << TIMER30_ADTCR_T30BMTG_Pos)                   /*!< TIMER30 ADTCR: T30BMTG Mask             */
#define TIMER30_ADTCR_T30AMTG_Pos             2                                                       /*!< TIMER30 ADTCR: T30AMTG Position         */
#define TIMER30_ADTCR_T30AMTG_Msk             (0x01UL << TIMER30_ADTCR_T30AMTG_Pos)                   /*!< TIMER30 ADTCR: T30AMTG Mask             */
#define TIMER30_ADTCR_T30PMTG_Pos             3                                                       /*!< TIMER30 ADTCR: T30PMTG Position         */
#define TIMER30_ADTCR_T30PMTG_Msk             (0x01UL << TIMER30_ADTCR_T30PMTG_Pos)                   /*!< TIMER30 ADTCR: T30PMTG Mask             */
#define TIMER30_ADTCR_T30BTTG_Pos             4                                                       /*!< TIMER30 ADTCR: T30BTTG Position         */
#define TIMER30_ADTCR_T30BTTG_Msk             (0x01UL << TIMER30_ADTCR_T30BTTG_Pos)                   /*!< TIMER30 ADTCR: T30BTTG Mask             */

/* --------------------------------  TIMER30_ADTDR  ------------------------------- */
#define TIMER30_ADTDR_ADTDATA_Pos             0                                                       /*!< TIMER30 ADTDR: ADTDATA Position         */
#define TIMER30_ADTDR_ADTDATA_Msk             (0x00003fffUL << TIMER30_ADTDR_ADTDATA_Pos)             /*!< TIMER30 ADTDR: ADTDATA Mask             */


/* ================================================================================ */
/* ================        struct 'USART10' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  USART10_CR1  -------------------------------- */
#define USART10_CR1_RXEn_Pos                  0                                                       /*!< USART10 CR1: RXEn Position              */
#define USART10_CR1_RXEn_Msk                  (0x01UL << USART10_CR1_RXEn_Pos)                        /*!< USART10 CR1: RXEn Mask                  */
#define USART10_CR1_TXEn_Pos                  1                                                       /*!< USART10 CR1: TXEn Position              */
#define USART10_CR1_TXEn_Msk                  (0x01UL << USART10_CR1_TXEn_Pos)                        /*!< USART10 CR1: TXEn Mask                  */
#define USART10_CR1_WAKEIEn_Pos               2                                                       /*!< USART10 CR1: WAKEIEn Position           */
#define USART10_CR1_WAKEIEn_Msk               (0x01UL << USART10_CR1_WAKEIEn_Pos)                     /*!< USART10 CR1: WAKEIEn Mask               */
#define USART10_CR1_RXCIEn_Pos                3                                                       /*!< USART10 CR1: RXCIEn Position            */
#define USART10_CR1_RXCIEn_Msk                (0x01UL << USART10_CR1_RXCIEn_Pos)                      /*!< USART10 CR1: RXCIEn Mask                */
#define USART10_CR1_TXCIEn_Pos                4                                                       /*!< USART10 CR1: TXCIEn Position            */
#define USART10_CR1_TXCIEn_Msk                (0x01UL << USART10_CR1_TXCIEn_Pos)                      /*!< USART10 CR1: TXCIEn Mask                */
#define USART10_CR1_DRIEn_Pos                 5                                                       /*!< USART10 CR1: DRIEn Position             */
#define USART10_CR1_DRIEn_Msk                 (0x01UL << USART10_CR1_DRIEn_Pos)                       /*!< USART10 CR1: DRIEn Mask                 */
#define USART10_CR1_CPHAn_Pos                 6                                                       /*!< USART10 CR1: CPHAn Position             */
#define USART10_CR1_CPHAn_Msk                 (0x01UL << USART10_CR1_CPHAn_Pos)                       /*!< USART10 CR1: CPHAn Mask                 */
#define USART10_CR1_CPOLn_Pos                 7                                                       /*!< USART10 CR1: CPOLn Position             */
#define USART10_CR1_CPOLn_Msk                 (0x01UL << USART10_CR1_CPOLn_Pos)                       /*!< USART10 CR1: CPOLn Mask                 */
#define USART10_CR1_ORDn_Pos                  8                                                       /*!< USART10 CR1: ORDn Position              */
#define USART10_CR1_ORDn_Msk                  (0x01UL << USART10_CR1_ORDn_Pos)                        /*!< USART10 CR1: ORDn Mask                  */
#define USART10_CR1_USTnS_Pos                 9                                                       /*!< USART10 CR1: USTnS Position             */
#define USART10_CR1_USTnS_Msk                 (0x07UL << USART10_CR1_USTnS_Pos)                       /*!< USART10 CR1: USTnS Mask                 */
#define USART10_CR1_USTnP_Pos                 12                                                      /*!< USART10 CR1: USTnP Position             */
#define USART10_CR1_USTnP_Msk                 (0x03UL << USART10_CR1_USTnP_Pos)                       /*!< USART10 CR1: USTnP Mask                 */
#define USART10_CR1_USTnMS_Pos                14                                                      /*!< USART10 CR1: USTnMS Position            */
#define USART10_CR1_USTnMS_Msk                (0x03UL << USART10_CR1_USTnMS_Pos)                      /*!< USART10 CR1: USTnMS Mask                */

/* ---------------------------------  USART10_CR2  -------------------------------- */
#define USART10_CR2_USTnRX8_Pos               0                                                       /*!< USART10 CR2: USTnRX8 Position           */
#define USART10_CR2_USTnRX8_Msk               (0x01UL << USART10_CR2_USTnRX8_Pos)                     /*!< USART10 CR2: USTnRX8 Mask               */
#define USART10_CR2_USTnTX8_Pos               1                                                       /*!< USART10 CR2: USTnTX8 Position           */
#define USART10_CR2_USTnTX8_Msk               (0x01UL << USART10_CR2_USTnTX8_Pos)                     /*!< USART10 CR2: USTnTX8 Mask               */
#define USART10_CR2_USTnSB_Pos                2                                                       /*!< USART10 CR2: USTnSB Position            */
#define USART10_CR2_USTnSB_Msk                (0x01UL << USART10_CR2_USTnSB_Pos)                      /*!< USART10 CR2: USTnSB Mask                */
#define USART10_CR2_FXCHn_Pos                 3                                                       /*!< USART10 CR2: FXCHn Position             */
#define USART10_CR2_FXCHn_Msk                 (0x01UL << USART10_CR2_FXCHn_Pos)                       /*!< USART10 CR2: FXCHn Mask                 */
#define USART10_CR2_USTnSSEN_Pos              4                                                       /*!< USART10 CR2: USTnSSEN Position          */
#define USART10_CR2_USTnSSEN_Msk              (0x01UL << USART10_CR2_USTnSSEN_Pos)                    /*!< USART10 CR2: USTnSSEN Mask              */
#define USART10_CR2_DISSCKn_Pos               5                                                       /*!< USART10 CR2: DISSCKn Position           */
#define USART10_CR2_DISSCKn_Msk               (0x01UL << USART10_CR2_DISSCKn_Pos)                     /*!< USART10 CR2: DISSCKn Mask               */
#define USART10_CR2_LOOPSn_Pos                6                                                       /*!< USART10 CR2: LOOPSn Position            */
#define USART10_CR2_LOOPSn_Msk                (0x01UL << USART10_CR2_LOOPSn_Pos)                      /*!< USART10 CR2: LOOPSn Mask                */
#define USART10_CR2_MASTERn_Pos               7                                                       /*!< USART10 CR2: MASTERn Position           */
#define USART10_CR2_MASTERn_Msk               (0x01UL << USART10_CR2_MASTERn_Pos)                     /*!< USART10 CR2: MASTERn Mask               */
#define USART10_CR2_DBLSn_Pos                 8                                                       /*!< USART10 CR2: DBLSn Position             */
#define USART10_CR2_DBLSn_Msk                 (0x01UL << USART10_CR2_DBLSn_Pos)                       /*!< USART10 CR2: DBLSn Mask                 */
#define USART10_CR2_USTnEN_Pos                9                                                       /*!< USART10 CR2: USTnEN Position            */
#define USART10_CR2_USTnEN_Msk                (0x01UL << USART10_CR2_USTnEN_Pos)                      /*!< USART10 CR2: USTnEN Mask                */

/* ---------------------------------  USART10_ST  --------------------------------- */
#define USART10_ST_PEn_Pos                    0                                                       /*!< USART10 ST: PEn Position                */
#define USART10_ST_PEn_Msk                    (0x01UL << USART10_ST_PEn_Pos)                          /*!< USART10 ST: PEn Mask                    */
#define USART10_ST_FEn_Pos                    1                                                       /*!< USART10 ST: FEn Position                */
#define USART10_ST_FEn_Msk                    (0x01UL << USART10_ST_FEn_Pos)                          /*!< USART10 ST: FEn Mask                    */
#define USART10_ST_DORn_Pos                   2                                                       /*!< USART10 ST: DORn Position               */
#define USART10_ST_DORn_Msk                   (0x01UL << USART10_ST_DORn_Pos)                         /*!< USART10 ST: DORn Mask                   */
#define USART10_ST_WAKEn_Pos                  4                                                       /*!< USART10 ST: WAKEn Position              */
#define USART10_ST_WAKEn_Msk                  (0x01UL << USART10_ST_WAKEn_Pos)                        /*!< USART10 ST: WAKEn Mask                  */
#define USART10_ST_RXCn_Pos                   5                                                       /*!< USART10 ST: RXCn Position               */
#define USART10_ST_RXCn_Msk                   (0x01UL << USART10_ST_RXCn_Pos)                         /*!< USART10 ST: RXCn Mask                   */
#define USART10_ST_TXCn_Pos                   6                                                       /*!< USART10 ST: TXCn Position               */
#define USART10_ST_TXCn_Msk                   (0x01UL << USART10_ST_TXCn_Pos)                         /*!< USART10 ST: TXCn Mask                   */
#define USART10_ST_DREn_Pos                   7                                                       /*!< USART10 ST: DREn Position               */
#define USART10_ST_DREn_Msk                   (0x01UL << USART10_ST_DREn_Pos)                         /*!< USART10 ST: DREn Mask                   */

/* ---------------------------------  USART10_BDR  -------------------------------- */
#define USART10_BDR_BDATA_Pos                 0                                                       /*!< USART10 BDR: BDATA Position             */
#define USART10_BDR_BDATA_Msk                 (0x00000fffUL << USART10_BDR_BDATA_Pos)                 /*!< USART10 BDR: BDATA Mask                 */

/* ---------------------------------  USART10_DR  --------------------------------- */
#define USART10_DR_DATA_Pos                   0                                                       /*!< USART10 DR: DATA Position               */
#define USART10_DR_DATA_Msk                   (0x000000ffUL << USART10_DR_DATA_Pos)                   /*!< USART10 DR: DATA Mask                   */


/* ================================================================================ */
/* ================        struct 'USART11' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  USART11_CR1  -------------------------------- */
#define USART11_CR1_RXEn_Pos                  0                                                       /*!< USART11 CR1: RXEn Position              */
#define USART11_CR1_RXEn_Msk                  (0x01UL << USART11_CR1_RXEn_Pos)                        /*!< USART11 CR1: RXEn Mask                  */
#define USART11_CR1_TXEn_Pos                  1                                                       /*!< USART11 CR1: TXEn Position              */
#define USART11_CR1_TXEn_Msk                  (0x01UL << USART11_CR1_TXEn_Pos)                        /*!< USART11 CR1: TXEn Mask                  */
#define USART11_CR1_WAKEIEn_Pos               2                                                       /*!< USART11 CR1: WAKEIEn Position           */
#define USART11_CR1_WAKEIEn_Msk               (0x01UL << USART11_CR1_WAKEIEn_Pos)                     /*!< USART11 CR1: WAKEIEn Mask               */
#define USART11_CR1_RXCIEn_Pos                3                                                       /*!< USART11 CR1: RXCIEn Position            */
#define USART11_CR1_RXCIEn_Msk                (0x01UL << USART11_CR1_RXCIEn_Pos)                      /*!< USART11 CR1: RXCIEn Mask                */
#define USART11_CR1_TXCIEn_Pos                4                                                       /*!< USART11 CR1: TXCIEn Position            */
#define USART11_CR1_TXCIEn_Msk                (0x01UL << USART11_CR1_TXCIEn_Pos)                      /*!< USART11 CR1: TXCIEn Mask                */
#define USART11_CR1_DRIEn_Pos                 5                                                       /*!< USART11 CR1: DRIEn Position             */
#define USART11_CR1_DRIEn_Msk                 (0x01UL << USART11_CR1_DRIEn_Pos)                       /*!< USART11 CR1: DRIEn Mask                 */
#define USART11_CR1_CPHAn_Pos                 6                                                       /*!< USART11 CR1: CPHAn Position             */
#define USART11_CR1_CPHAn_Msk                 (0x01UL << USART11_CR1_CPHAn_Pos)                       /*!< USART11 CR1: CPHAn Mask                 */
#define USART11_CR1_CPOLn_Pos                 7                                                       /*!< USART11 CR1: CPOLn Position             */
#define USART11_CR1_CPOLn_Msk                 (0x01UL << USART11_CR1_CPOLn_Pos)                       /*!< USART11 CR1: CPOLn Mask                 */
#define USART11_CR1_ORDn_Pos                  8                                                       /*!< USART11 CR1: ORDn Position              */
#define USART11_CR1_ORDn_Msk                  (0x01UL << USART11_CR1_ORDn_Pos)                        /*!< USART11 CR1: ORDn Mask                  */
#define USART11_CR1_USTnS_Pos                 9                                                       /*!< USART11 CR1: USTnS Position             */
#define USART11_CR1_USTnS_Msk                 (0x07UL << USART11_CR1_USTnS_Pos)                       /*!< USART11 CR1: USTnS Mask                 */
#define USART11_CR1_USTnP_Pos                 12                                                      /*!< USART11 CR1: USTnP Position             */
#define USART11_CR1_USTnP_Msk                 (0x03UL << USART11_CR1_USTnP_Pos)                       /*!< USART11 CR1: USTnP Mask                 */
#define USART11_CR1_USTnMS_Pos                14                                                      /*!< USART11 CR1: USTnMS Position            */
#define USART11_CR1_USTnMS_Msk                (0x03UL << USART11_CR1_USTnMS_Pos)                      /*!< USART11 CR1: USTnMS Mask                */

/* ---------------------------------  USART11_CR2  -------------------------------- */
#define USART11_CR2_USTnRX8_Pos               0                                                       /*!< USART11 CR2: USTnRX8 Position           */
#define USART11_CR2_USTnRX8_Msk               (0x01UL << USART11_CR2_USTnRX8_Pos)                     /*!< USART11 CR2: USTnRX8 Mask               */
#define USART11_CR2_USTnTX8_Pos               1                                                       /*!< USART11 CR2: USTnTX8 Position           */
#define USART11_CR2_USTnTX8_Msk               (0x01UL << USART11_CR2_USTnTX8_Pos)                     /*!< USART11 CR2: USTnTX8 Mask               */
#define USART11_CR2_USTnSB_Pos                2                                                       /*!< USART11 CR2: USTnSB Position            */
#define USART11_CR2_USTnSB_Msk                (0x01UL << USART11_CR2_USTnSB_Pos)                      /*!< USART11 CR2: USTnSB Mask                */
#define USART11_CR2_FXCHn_Pos                 3                                                       /*!< USART11 CR2: FXCHn Position             */
#define USART11_CR2_FXCHn_Msk                 (0x01UL << USART11_CR2_FXCHn_Pos)                       /*!< USART11 CR2: FXCHn Mask                 */
#define USART11_CR2_USTnSSEN_Pos              4                                                       /*!< USART11 CR2: USTnSSEN Position          */
#define USART11_CR2_USTnSSEN_Msk              (0x01UL << USART11_CR2_USTnSSEN_Pos)                    /*!< USART11 CR2: USTnSSEN Mask              */
#define USART11_CR2_DISSCKn_Pos               5                                                       /*!< USART11 CR2: DISSCKn Position           */
#define USART11_CR2_DISSCKn_Msk               (0x01UL << USART11_CR2_DISSCKn_Pos)                     /*!< USART11 CR2: DISSCKn Mask               */
#define USART11_CR2_LOOPSn_Pos                6                                                       /*!< USART11 CR2: LOOPSn Position            */
#define USART11_CR2_LOOPSn_Msk                (0x01UL << USART11_CR2_LOOPSn_Pos)                      /*!< USART11 CR2: LOOPSn Mask                */
#define USART11_CR2_MASTERn_Pos               7                                                       /*!< USART11 CR2: MASTERn Position           */
#define USART11_CR2_MASTERn_Msk               (0x01UL << USART11_CR2_MASTERn_Pos)                     /*!< USART11 CR2: MASTERn Mask               */
#define USART11_CR2_DBLSn_Pos                 8                                                       /*!< USART11 CR2: DBLSn Position             */
#define USART11_CR2_DBLSn_Msk                 (0x01UL << USART11_CR2_DBLSn_Pos)                       /*!< USART11 CR2: DBLSn Mask                 */
#define USART11_CR2_USTnEN_Pos                9                                                       /*!< USART11 CR2: USTnEN Position            */
#define USART11_CR2_USTnEN_Msk                (0x01UL << USART11_CR2_USTnEN_Pos)                      /*!< USART11 CR2: USTnEN Mask                */

/* ---------------------------------  USART11_ST  --------------------------------- */
#define USART11_ST_PEn_Pos                    0                                                       /*!< USART11 ST: PEn Position                */
#define USART11_ST_PEn_Msk                    (0x01UL << USART11_ST_PEn_Pos)                          /*!< USART11 ST: PEn Mask                    */
#define USART11_ST_FEn_Pos                    1                                                       /*!< USART11 ST: FEn Position                */
#define USART11_ST_FEn_Msk                    (0x01UL << USART11_ST_FEn_Pos)                          /*!< USART11 ST: FEn Mask                    */
#define USART11_ST_DORn_Pos                   2                                                       /*!< USART11 ST: DORn Position               */
#define USART11_ST_DORn_Msk                   (0x01UL << USART11_ST_DORn_Pos)                         /*!< USART11 ST: DORn Mask                   */
#define USART11_ST_WAKEn_Pos                  4                                                       /*!< USART11 ST: WAKEn Position              */
#define USART11_ST_WAKEn_Msk                  (0x01UL << USART11_ST_WAKEn_Pos)                        /*!< USART11 ST: WAKEn Mask                  */
#define USART11_ST_RXCn_Pos                   5                                                       /*!< USART11 ST: RXCn Position               */
#define USART11_ST_RXCn_Msk                   (0x01UL << USART11_ST_RXCn_Pos)                         /*!< USART11 ST: RXCn Mask                   */
#define USART11_ST_TXCn_Pos                   6                                                       /*!< USART11 ST: TXCn Position               */
#define USART11_ST_TXCn_Msk                   (0x01UL << USART11_ST_TXCn_Pos)                         /*!< USART11 ST: TXCn Mask                   */
#define USART11_ST_DREn_Pos                   7                                                       /*!< USART11 ST: DREn Position               */
#define USART11_ST_DREn_Msk                   (0x01UL << USART11_ST_DREn_Pos)                         /*!< USART11 ST: DREn Mask                   */

/* ---------------------------------  USART11_BDR  -------------------------------- */
#define USART11_BDR_BDATA_Pos                 0                                                       /*!< USART11 BDR: BDATA Position             */
#define USART11_BDR_BDATA_Msk                 (0x00000fffUL << USART11_BDR_BDATA_Pos)                 /*!< USART11 BDR: BDATA Mask                 */

/* ---------------------------------  USART11_DR  --------------------------------- */
#define USART11_DR_DATA_Pos                   0                                                       /*!< USART11 DR: DATA Position               */
#define USART11_DR_DATA_Msk                   (0x000000ffUL << USART11_DR_DATA_Pos)                   /*!< USART11 DR: DATA Mask                   */


/* ================================================================================ */
/* ================         struct 'UART0' Position & Mask         ================ */
/* ================================================================================ */


/* ----------------------------------  UART0_RBR  --------------------------------- */
#define UART0_RBR_RBR_Pos                     0                                                       /*!< UART0 RBR: RBR Position                 */
#define UART0_RBR_RBR_Msk                     (0x000000ffUL << UART0_RBR_RBR_Pos)                     /*!< UART0 RBR: RBR Mask                     */

/* ----------------------------------  UART0_THR  --------------------------------- */
#define UART0_THR_THR_Pos                     0                                                       /*!< UART0 THR: THR Position                 */
#define UART0_THR_THR_Msk                     (0x000000ffUL << UART0_THR_THR_Pos)                     /*!< UART0 THR: THR Mask                     */

/* ----------------------------------  UART0_IER  --------------------------------- */
#define UART0_IER_DRIE_Pos                    0                                                       /*!< UART0 IER: DRIE Position                */
#define UART0_IER_DRIE_Msk                    (0x01UL << UART0_IER_DRIE_Pos)                          /*!< UART0 IER: DRIE Mask                    */
#define UART0_IER_THREIE_Pos                  1                                                       /*!< UART0 IER: THREIE Position              */
#define UART0_IER_THREIE_Msk                  (0x01UL << UART0_IER_THREIE_Pos)                        /*!< UART0 IER: THREIE Mask                  */
#define UART0_IER_RLSIE_Pos                   2                                                       /*!< UART0 IER: RLSIE Position               */
#define UART0_IER_RLSIE_Msk                   (0x01UL << UART0_IER_RLSIE_Pos)                         /*!< UART0 IER: RLSIE Mask                   */
#define UART0_IER_DRXIEN_Pos                  4                                                       /*!< UART0 IER: DRXIEN Position              */
#define UART0_IER_DRXIEN_Msk                  (0x01UL << UART0_IER_DRXIEN_Pos)                        /*!< UART0 IER: DRXIEN Mask                  */
#define UART0_IER_DTXIEN_Pos                  5                                                       /*!< UART0 IER: DTXIEN Position              */
#define UART0_IER_DTXIEN_Msk                  (0x01UL << UART0_IER_DTXIEN_Pos)                        /*!< UART0 IER: DTXIEN Mask                  */

/* ----------------------------------  UART0_IIR  --------------------------------- */
#define UART0_IIR_IPEN_Pos                    0                                                       /*!< UART0 IIR: IPEN Position                */
#define UART0_IIR_IPEN_Msk                    (0x01UL << UART0_IIR_IPEN_Pos)                          /*!< UART0 IIR: IPEN Mask                    */
#define UART0_IIR_IID_Pos                     1                                                       /*!< UART0 IIR: IID Position                 */
#define UART0_IIR_IID_Msk                     (0x07UL << UART0_IIR_IID_Pos)                           /*!< UART0 IIR: IID Mask                     */
#define UART0_IIR_TXE_Pos                     4                                                       /*!< UART0 IIR: TXE Position                 */
#define UART0_IIR_TXE_Msk                     (0x01UL << UART0_IIR_TXE_Pos)                           /*!< UART0 IIR: TXE Mask                     */

/* ----------------------------------  UART0_LCR  --------------------------------- */
#define UART0_LCR_DLEN_Pos                    0                                                       /*!< UART0 LCR: DLEN Position                */
#define UART0_LCR_DLEN_Msk                    (0x03UL << UART0_LCR_DLEN_Pos)                          /*!< UART0 LCR: DLEN Mask                    */
#define UART0_LCR_STOPBIT_Pos                 2                                                       /*!< UART0 LCR: STOPBIT Position             */
#define UART0_LCR_STOPBIT_Msk                 (0x01UL << UART0_LCR_STOPBIT_Pos)                       /*!< UART0 LCR: STOPBIT Mask                 */
#define UART0_LCR_PEN_Pos                     3                                                       /*!< UART0 LCR: PEN Position                 */
#define UART0_LCR_PEN_Msk                     (0x01UL << UART0_LCR_PEN_Pos)                           /*!< UART0 LCR: PEN Mask                     */
#define UART0_LCR_PARITY_Pos                  4                                                       /*!< UART0 LCR: PARITY Position              */
#define UART0_LCR_PARITY_Msk                  (0x01UL << UART0_LCR_PARITY_Pos)                        /*!< UART0 LCR: PARITY Mask                  */
#define UART0_LCR_STICKP_Pos                  5                                                       /*!< UART0 LCR: STICKP Position              */
#define UART0_LCR_STICKP_Msk                  (0x01UL << UART0_LCR_STICKP_Pos)                        /*!< UART0 LCR: STICKP Mask                  */
#define UART0_LCR_BREAK_Pos                   6                                                       /*!< UART0 LCR: BREAK Position               */
#define UART0_LCR_BREAK_Msk                   (0x01UL << UART0_LCR_BREAK_Pos)                         /*!< UART0 LCR: BREAK Mask                   */

/* ----------------------------------  UART0_DCR  --------------------------------- */
#define UART0_DCR_TXINV_Pos                   2                                                       /*!< UART0 DCR: TXINV Position               */
#define UART0_DCR_TXINV_Msk                   (0x01UL << UART0_DCR_TXINV_Pos)                         /*!< UART0 DCR: TXINV Mask                   */
#define UART0_DCR_RXINV_Pos                   3                                                       /*!< UART0 DCR: RXINV Position               */
#define UART0_DCR_RXINV_Msk                   (0x01UL << UART0_DCR_RXINV_Pos)                         /*!< UART0 DCR: RXINV Mask                   */
#define UART0_DCR_LBON_Pos                    4                                                       /*!< UART0 DCR: LBON Position                */
#define UART0_DCR_LBON_Msk                    (0x01UL << UART0_DCR_LBON_Pos)                          /*!< UART0 DCR: LBON Mask                    */

/* ----------------------------------  UART0_LSR  --------------------------------- */
#define UART0_LSR_DR_Pos                      0                                                       /*!< UART0 LSR: DR Position                  */
#define UART0_LSR_DR_Msk                      (0x01UL << UART0_LSR_DR_Pos)                            /*!< UART0 LSR: DR Mask                      */
#define UART0_LSR_OE_Pos                      1                                                       /*!< UART0 LSR: OE Position                  */
#define UART0_LSR_OE_Msk                      (0x01UL << UART0_LSR_OE_Pos)                            /*!< UART0 LSR: OE Mask                      */
#define UART0_LSR_PE_Pos                      2                                                       /*!< UART0 LSR: PE Position                  */
#define UART0_LSR_PE_Msk                      (0x01UL << UART0_LSR_PE_Pos)                            /*!< UART0 LSR: PE Mask                      */
#define UART0_LSR_FE_Pos                      3                                                       /*!< UART0 LSR: FE Position                  */
#define UART0_LSR_FE_Msk                      (0x01UL << UART0_LSR_FE_Pos)                            /*!< UART0 LSR: FE Mask                      */
#define UART0_LSR_BI_Pos                      4                                                       /*!< UART0 LSR: BI Position                  */
#define UART0_LSR_BI_Msk                      (0x01UL << UART0_LSR_BI_Pos)                            /*!< UART0 LSR: BI Mask                      */
#define UART0_LSR_THRE_Pos                    5                                                       /*!< UART0 LSR: THRE Position                */
#define UART0_LSR_THRE_Msk                    (0x01UL << UART0_LSR_THRE_Pos)                          /*!< UART0 LSR: THRE Mask                    */
#define UART0_LSR_TEMT_Pos                    6                                                       /*!< UART0 LSR: TEMT Position                */
#define UART0_LSR_TEMT_Msk                    (0x01UL << UART0_LSR_TEMT_Pos)                          /*!< UART0 LSR: TEMT Mask                    */

/* ----------------------------------  UART0_BDR  --------------------------------- */
#define UART0_BDR_BDR_Pos                     0                                                       /*!< UART0 BDR: BDR Position                 */
#define UART0_BDR_BDR_Msk                     (0x0000ffffUL << UART0_BDR_BDR_Pos)                     /*!< UART0 BDR: BDR Mask                     */

/* ----------------------------------  UART0_BFR  --------------------------------- */
#define UART0_BFR_BFR_Pos                     0                                                       /*!< UART0 BFR: BFR Position                 */
#define UART0_BFR_BFR_Msk                     (0x000000ffUL << UART0_BFR_BFR_Pos)                     /*!< UART0 BFR: BFR Mask                     */

/* ---------------------------------  UART0_IDTR  --------------------------------- */
#define UART0_IDTR_WAITVAL_Pos                0                                                       /*!< UART0 IDTR: WAITVAL Position            */
#define UART0_IDTR_WAITVAL_Msk                (0x03UL << UART0_IDTR_WAITVAL_Pos)                      /*!< UART0 IDTR: WAITVAL Mask                */
#define UART0_IDTR_DMS_Pos                    6                                                       /*!< UART0 IDTR: DMS Position                */
#define UART0_IDTR_DMS_Msk                    (0x01UL << UART0_IDTR_DMS_Pos)                          /*!< UART0 IDTR: DMS Mask                    */
#define UART0_IDTR_SMS_Pos                    7                                                       /*!< UART0 IDTR: SMS Position                */
#define UART0_IDTR_SMS_Msk                    (0x01UL << UART0_IDTR_SMS_Pos)                          /*!< UART0 IDTR: SMS Mask                    */


/* ================================================================================ */
/* ================         struct 'UART1' Position & Mask         ================ */
/* ================================================================================ */


/* ----------------------------------  UART1_THR  --------------------------------- */
#define UART1_THR_THR_Pos                     0                                                       /*!< UART1 THR: THR Position                 */
#define UART1_THR_THR_Msk                     (0x000000ffUL << UART1_THR_THR_Pos)                     /*!< UART1 THR: THR Mask                     */

/* ----------------------------------  UART1_RBR  --------------------------------- */
#define UART1_RBR_RBR_Pos                     0                                                       /*!< UART1 RBR: RBR Position                 */
#define UART1_RBR_RBR_Msk                     (0x000000ffUL << UART1_RBR_RBR_Pos)                     /*!< UART1 RBR: RBR Mask                     */

/* ----------------------------------  UART1_IER  --------------------------------- */
#define UART1_IER_DRIE_Pos                    0                                                       /*!< UART1 IER: DRIE Position                */
#define UART1_IER_DRIE_Msk                    (0x01UL << UART1_IER_DRIE_Pos)                          /*!< UART1 IER: DRIE Mask                    */
#define UART1_IER_THREIE_Pos                  1                                                       /*!< UART1 IER: THREIE Position              */
#define UART1_IER_THREIE_Msk                  (0x01UL << UART1_IER_THREIE_Pos)                        /*!< UART1 IER: THREIE Mask                  */
#define UART1_IER_RLSIE_Pos                   2                                                       /*!< UART1 IER: RLSIE Position               */
#define UART1_IER_RLSIE_Msk                   (0x01UL << UART1_IER_RLSIE_Pos)                         /*!< UART1 IER: RLSIE Mask                   */
#define UART1_IER_DRXIEN_Pos                  4                                                       /*!< UART1 IER: DRXIEN Position              */
#define UART1_IER_DRXIEN_Msk                  (0x01UL << UART1_IER_DRXIEN_Pos)                        /*!< UART1 IER: DRXIEN Mask                  */
#define UART1_IER_DTXIEN_Pos                  5                                                       /*!< UART1 IER: DTXIEN Position              */
#define UART1_IER_DTXIEN_Msk                  (0x01UL << UART1_IER_DTXIEN_Pos)                        /*!< UART1 IER: DTXIEN Mask                  */

/* ----------------------------------  UART1_IIR  --------------------------------- */
#define UART1_IIR_IPEN_Pos                    0                                                       /*!< UART1 IIR: IPEN Position                */
#define UART1_IIR_IPEN_Msk                    (0x01UL << UART1_IIR_IPEN_Pos)                          /*!< UART1 IIR: IPEN Mask                    */
#define UART1_IIR_IID_Pos                     1                                                       /*!< UART1 IIR: IID Position                 */
#define UART1_IIR_IID_Msk                     (0x07UL << UART1_IIR_IID_Pos)                           /*!< UART1 IIR: IID Mask                     */
#define UART1_IIR_TXE_Pos                     4                                                       /*!< UART1 IIR: TXE Position                 */
#define UART1_IIR_TXE_Msk                     (0x01UL << UART1_IIR_TXE_Pos)                           /*!< UART1 IIR: TXE Mask                     */

/* ----------------------------------  UART1_LCR  --------------------------------- */
#define UART1_LCR_DLEN_Pos                    0                                                       /*!< UART1 LCR: DLEN Position                */
#define UART1_LCR_DLEN_Msk                    (0x03UL << UART1_LCR_DLEN_Pos)                          /*!< UART1 LCR: DLEN Mask                    */
#define UART1_LCR_STOPBIT_Pos                 2                                                       /*!< UART1 LCR: STOPBIT Position             */
#define UART1_LCR_STOPBIT_Msk                 (0x01UL << UART1_LCR_STOPBIT_Pos)                       /*!< UART1 LCR: STOPBIT Mask                 */
#define UART1_LCR_PEN_Pos                     3                                                       /*!< UART1 LCR: PEN Position                 */
#define UART1_LCR_PEN_Msk                     (0x01UL << UART1_LCR_PEN_Pos)                           /*!< UART1 LCR: PEN Mask                     */
#define UART1_LCR_PARITY_Pos                  4                                                       /*!< UART1 LCR: PARITY Position              */
#define UART1_LCR_PARITY_Msk                  (0x01UL << UART1_LCR_PARITY_Pos)                        /*!< UART1 LCR: PARITY Mask                  */
#define UART1_LCR_STICKP_Pos                  5                                                       /*!< UART1 LCR: STICKP Position              */
#define UART1_LCR_STICKP_Msk                  (0x01UL << UART1_LCR_STICKP_Pos)                        /*!< UART1 LCR: STICKP Mask                  */
#define UART1_LCR_BREAK_Pos                   6                                                       /*!< UART1 LCR: BREAK Position               */
#define UART1_LCR_BREAK_Msk                   (0x01UL << UART1_LCR_BREAK_Pos)                         /*!< UART1 LCR: BREAK Mask                   */

/* ----------------------------------  UART1_DCR  --------------------------------- */
#define UART1_DCR_TXINV_Pos                   2                                                       /*!< UART1 DCR: TXINV Position               */
#define UART1_DCR_TXINV_Msk                   (0x01UL << UART1_DCR_TXINV_Pos)                         /*!< UART1 DCR: TXINV Mask                   */
#define UART1_DCR_RXINV_Pos                   3                                                       /*!< UART1 DCR: RXINV Position               */
#define UART1_DCR_RXINV_Msk                   (0x01UL << UART1_DCR_RXINV_Pos)                         /*!< UART1 DCR: RXINV Mask                   */
#define UART1_DCR_LBON_Pos                    4                                                       /*!< UART1 DCR: LBON Position                */
#define UART1_DCR_LBON_Msk                    (0x01UL << UART1_DCR_LBON_Pos)                          /*!< UART1 DCR: LBON Mask                    */

/* ----------------------------------  UART1_LSR  --------------------------------- */
#define UART1_LSR_DR_Pos                      0                                                       /*!< UART1 LSR: DR Position                  */
#define UART1_LSR_DR_Msk                      (0x01UL << UART1_LSR_DR_Pos)                            /*!< UART1 LSR: DR Mask                      */
#define UART1_LSR_OE_Pos                      1                                                       /*!< UART1 LSR: OE Position                  */
#define UART1_LSR_OE_Msk                      (0x01UL << UART1_LSR_OE_Pos)                            /*!< UART1 LSR: OE Mask                      */
#define UART1_LSR_PE_Pos                      2                                                       /*!< UART1 LSR: PE Position                  */
#define UART1_LSR_PE_Msk                      (0x01UL << UART1_LSR_PE_Pos)                            /*!< UART1 LSR: PE Mask                      */
#define UART1_LSR_FE_Pos                      3                                                       /*!< UART1 LSR: FE Position                  */
#define UART1_LSR_FE_Msk                      (0x01UL << UART1_LSR_FE_Pos)                            /*!< UART1 LSR: FE Mask                      */
#define UART1_LSR_BI_Pos                      4                                                       /*!< UART1 LSR: BI Position                  */
#define UART1_LSR_BI_Msk                      (0x01UL << UART1_LSR_BI_Pos)                            /*!< UART1 LSR: BI Mask                      */
#define UART1_LSR_THRE_Pos                    5                                                       /*!< UART1 LSR: THRE Position                */
#define UART1_LSR_THRE_Msk                    (0x01UL << UART1_LSR_THRE_Pos)                          /*!< UART1 LSR: THRE Mask                    */
#define UART1_LSR_TEMT_Pos                    6                                                       /*!< UART1 LSR: TEMT Position                */
#define UART1_LSR_TEMT_Msk                    (0x01UL << UART1_LSR_TEMT_Pos)                          /*!< UART1 LSR: TEMT Mask                    */

/* ----------------------------------  UART1_BDR  --------------------------------- */
#define UART1_BDR_BDR_Pos                     0                                                       /*!< UART1 BDR: BDR Position                 */
#define UART1_BDR_BDR_Msk                     (0x0000ffffUL << UART1_BDR_BDR_Pos)                     /*!< UART1 BDR: BDR Mask                     */

/* ----------------------------------  UART1_BFR  --------------------------------- */
#define UART1_BFR_BFR_Pos                     0                                                       /*!< UART1 BFR: BFR Position                 */
#define UART1_BFR_BFR_Msk                     (0x000000ffUL << UART1_BFR_BFR_Pos)                     /*!< UART1 BFR: BFR Mask                     */

/* ---------------------------------  UART1_IDTR  --------------------------------- */
#define UART1_IDTR_WAITVAL_Pos                0                                                       /*!< UART1 IDTR: WAITVAL Position            */
#define UART1_IDTR_WAITVAL_Msk                (0x03UL << UART1_IDTR_WAITVAL_Pos)                      /*!< UART1 IDTR: WAITVAL Mask                */
#define UART1_IDTR_DMS_Pos                    6                                                       /*!< UART1 IDTR: DMS Position                */
#define UART1_IDTR_DMS_Msk                    (0x01UL << UART1_IDTR_DMS_Pos)                          /*!< UART1 IDTR: DMS Mask                    */
#define UART1_IDTR_SMS_Pos                    7                                                       /*!< UART1 IDTR: SMS Position                */
#define UART1_IDTR_SMS_Msk                    (0x01UL << UART1_IDTR_SMS_Pos)                          /*!< UART1 IDTR: SMS Mask                    */


/* ================================================================================ */
/* ================          struct 'I2C0' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  I2C0_CR  ---------------------------------- */
#define I2C0_CR_STARTCn_Pos                   0                                                       /*!< I2C0 CR: STARTCn Position               */
#define I2C0_CR_STARTCn_Msk                   (0x01UL << I2C0_CR_STARTCn_Pos)                         /*!< I2C0 CR: STARTCn Mask                   */
#define I2C0_CR_STOPCn_Pos                    1                                                       /*!< I2C0 CR: STOPCn Position                */
#define I2C0_CR_STOPCn_Msk                    (0x01UL << I2C0_CR_STOPCn_Pos)                          /*!< I2C0 CR: STOPCn Mask                    */
#define I2C0_CR_IMASTERn_Pos                  2                                                       /*!< I2C0 CR: IMASTERn Position              */
#define I2C0_CR_IMASTERn_Msk                  (0x01UL << I2C0_CR_IMASTERn_Pos)                        /*!< I2C0 CR: IMASTERn Mask                  */
#define I2C0_CR_ACKnEN_Pos                    3                                                       /*!< I2C0 CR: ACKnEN Position                */
#define I2C0_CR_ACKnEN_Msk                    (0x01UL << I2C0_CR_ACKnEN_Pos)                          /*!< I2C0 CR: ACKnEN Mask                    */
#define I2C0_CR_I2CnIFLAG_Pos                 4                                                       /*!< I2C0 CR: I2CnIFLAG Position             */
#define I2C0_CR_I2CnIFLAG_Msk                 (0x01UL << I2C0_CR_I2CnIFLAG_Pos)                       /*!< I2C0 CR: I2CnIFLAG Mask                 */
#define I2C0_CR_I2CnIEN_Pos                   5                                                       /*!< I2C0 CR: I2CnIEN Position               */
#define I2C0_CR_I2CnIEN_Msk                   (0x01UL << I2C0_CR_I2CnIEN_Pos)                         /*!< I2C0 CR: I2CnIEN Mask                   */
#define I2C0_CR_TXDLYENBn_Pos                 6                                                       /*!< I2C0 CR: TXDLYENBn Position             */
#define I2C0_CR_TXDLYENBn_Msk                 (0x01UL << I2C0_CR_TXDLYENBn_Pos)                       /*!< I2C0 CR: TXDLYENBn Mask                 */
#define I2C0_CR_I2CnEN_Pos                    7                                                       /*!< I2C0 CR: I2CnEN Position                */
#define I2C0_CR_I2CnEN_Msk                    (0x01UL << I2C0_CR_I2CnEN_Pos)                          /*!< I2C0 CR: I2CnEN Mask                    */

/* -----------------------------------  I2C0_ST  ---------------------------------- */
#define I2C0_ST_RXACKn_Pos                    0                                                       /*!< I2C0 ST: RXACKn Position                */
#define I2C0_ST_RXACKn_Msk                    (0x01UL << I2C0_ST_RXACKn_Pos)                          /*!< I2C0 ST: RXACKn Mask                    */
#define I2C0_ST_TMODEn_Pos                    1                                                       /*!< I2C0 ST: TMODEn Position                */
#define I2C0_ST_TMODEn_Msk                    (0x01UL << I2C0_ST_TMODEn_Pos)                          /*!< I2C0 ST: TMODEn Mask                    */
#define I2C0_ST_BUSYn_Pos                     2                                                       /*!< I2C0 ST: BUSYn Position                 */
#define I2C0_ST_BUSYn_Msk                     (0x01UL << I2C0_ST_BUSYn_Pos)                           /*!< I2C0 ST: BUSYn Mask                     */
#define I2C0_ST_MLOSTn_Pos                    3                                                       /*!< I2C0 ST: MLOSTn Position                */
#define I2C0_ST_MLOSTn_Msk                    (0x01UL << I2C0_ST_MLOSTn_Pos)                          /*!< I2C0 ST: MLOSTn Mask                    */
#define I2C0_ST_SSELn_Pos                     4                                                       /*!< I2C0 ST: SSELn Position                 */
#define I2C0_ST_SSELn_Msk                     (0x01UL << I2C0_ST_SSELn_Pos)                           /*!< I2C0 ST: SSELn Mask                     */
#define I2C0_ST_STOPDn_Pos                    5                                                       /*!< I2C0 ST: STOPDn Position                */
#define I2C0_ST_STOPDn_Msk                    (0x01UL << I2C0_ST_STOPDn_Pos)                          /*!< I2C0 ST: STOPDn Mask                    */
#define I2C0_ST_TENDn_Pos                     6                                                       /*!< I2C0 ST: TENDn Position                 */
#define I2C0_ST_TENDn_Msk                     (0x01UL << I2C0_ST_TENDn_Pos)                           /*!< I2C0 ST: TENDn Mask                     */
#define I2C0_ST_GCALLn_Pos                    7                                                       /*!< I2C0 ST: GCALLn Position                */
#define I2C0_ST_GCALLn_Msk                    (0x01UL << I2C0_ST_GCALLn_Pos)                          /*!< I2C0 ST: GCALLn Mask                    */

/* ----------------------------------  I2C0_SAR1  --------------------------------- */
#define I2C0_SAR1_GCALLnEN_Pos                0                                                       /*!< I2C0 SAR1: GCALLnEN Position            */
#define I2C0_SAR1_GCALLnEN_Msk                (0x01UL << I2C0_SAR1_GCALLnEN_Pos)                      /*!< I2C0 SAR1: GCALLnEN Mask                */
#define I2C0_SAR1_SLAn_Pos                    1                                                       /*!< I2C0 SAR1: SLAn Position                */
#define I2C0_SAR1_SLAn_Msk                    (0x7fUL << I2C0_SAR1_SLAn_Pos)                          /*!< I2C0 SAR1: SLAn Mask                    */

/* ----------------------------------  I2C0_SAR2  --------------------------------- */
#define I2C0_SAR2_GCALLnEN_Pos                0                                                       /*!< I2C0 SAR2: GCALLnEN Position            */
#define I2C0_SAR2_GCALLnEN_Msk                (0x01UL << I2C0_SAR2_GCALLnEN_Pos)                      /*!< I2C0 SAR2: GCALLnEN Mask                */
#define I2C0_SAR2_SLAn_Pos                    1                                                       /*!< I2C0 SAR2: SLAn Position                */
#define I2C0_SAR2_SLAn_Msk                    (0x7fUL << I2C0_SAR2_SLAn_Pos)                          /*!< I2C0 SAR2: SLAn Mask                    */

/* -----------------------------------  I2C0_DR  ---------------------------------- */
#define I2C0_DR_DATA_Pos                      0                                                       /*!< I2C0 DR: DATA Position                  */
#define I2C0_DR_DATA_Msk                      (0x000000ffUL << I2C0_DR_DATA_Pos)                      /*!< I2C0 DR: DATA Mask                      */

/* ----------------------------------  I2C0_SDHR  --------------------------------- */
#define I2C0_SDHR_HLDT_Pos                    0                                                       /*!< I2C0 SDHR: HLDT Position                */
#define I2C0_SDHR_HLDT_Msk                    (0x00000fffUL << I2C0_SDHR_HLDT_Pos)                    /*!< I2C0 SDHR: HLDT Mask                    */

/* ----------------------------------  I2C0_SCLR  --------------------------------- */
#define I2C0_SCLR_SCLL_Pos                    0                                                       /*!< I2C0 SCLR: SCLL Position                */
#define I2C0_SCLR_SCLL_Msk                    (0x00000fffUL << I2C0_SCLR_SCLL_Pos)                    /*!< I2C0 SCLR: SCLL Mask                    */

/* ----------------------------------  I2C0_SCHR  --------------------------------- */
#define I2C0_SCHR_SCLH_Pos                    0                                                       /*!< I2C0 SCHR: SCLH Position                */
#define I2C0_SCHR_SCLH_Msk                    (0x00000fffUL << I2C0_SCHR_SCLH_Pos)                    /*!< I2C0 SCHR: SCLH Mask                    */


/* ================================================================================ */
/* ================          struct 'I2C1' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  I2C1_CR  ---------------------------------- */
#define I2C1_CR_STARTCn_Pos                   0                                                       /*!< I2C1 CR: STARTCn Position               */
#define I2C1_CR_STARTCn_Msk                   (0x01UL << I2C1_CR_STARTCn_Pos)                         /*!< I2C1 CR: STARTCn Mask                   */
#define I2C1_CR_STOPCn_Pos                    1                                                       /*!< I2C1 CR: STOPCn Position                */
#define I2C1_CR_STOPCn_Msk                    (0x01UL << I2C1_CR_STOPCn_Pos)                          /*!< I2C1 CR: STOPCn Mask                    */
#define I2C1_CR_IMASTERn_Pos                  2                                                       /*!< I2C1 CR: IMASTERn Position              */
#define I2C1_CR_IMASTERn_Msk                  (0x01UL << I2C1_CR_IMASTERn_Pos)                        /*!< I2C1 CR: IMASTERn Mask                  */
#define I2C1_CR_ACKnEN_Pos                    3                                                       /*!< I2C1 CR: ACKnEN Position                */
#define I2C1_CR_ACKnEN_Msk                    (0x01UL << I2C1_CR_ACKnEN_Pos)                          /*!< I2C1 CR: ACKnEN Mask                    */
#define I2C1_CR_I2CnIFLAG_Pos                 4                                                       /*!< I2C1 CR: I2CnIFLAG Position             */
#define I2C1_CR_I2CnIFLAG_Msk                 (0x01UL << I2C1_CR_I2CnIFLAG_Pos)                       /*!< I2C1 CR: I2CnIFLAG Mask                 */
#define I2C1_CR_I2CnIEN_Pos                   5                                                       /*!< I2C1 CR: I2CnIEN Position               */
#define I2C1_CR_I2CnIEN_Msk                   (0x01UL << I2C1_CR_I2CnIEN_Pos)                         /*!< I2C1 CR: I2CnIEN Mask                   */
#define I2C1_CR_TXDLYENBn_Pos                 6                                                       /*!< I2C1 CR: TXDLYENBn Position             */
#define I2C1_CR_TXDLYENBn_Msk                 (0x01UL << I2C1_CR_TXDLYENBn_Pos)                       /*!< I2C1 CR: TXDLYENBn Mask                 */
#define I2C1_CR_I2CnEN_Pos                    7                                                       /*!< I2C1 CR: I2CnEN Position                */
#define I2C1_CR_I2CnEN_Msk                    (0x01UL << I2C1_CR_I2CnEN_Pos)                          /*!< I2C1 CR: I2CnEN Mask                    */

/* -----------------------------------  I2C1_ST  ---------------------------------- */
#define I2C1_ST_RXACKn_Pos                    0                                                       /*!< I2C1 ST: RXACKn Position                */
#define I2C1_ST_RXACKn_Msk                    (0x01UL << I2C1_ST_RXACKn_Pos)                          /*!< I2C1 ST: RXACKn Mask                    */
#define I2C1_ST_TMODEn_Pos                    1                                                       /*!< I2C1 ST: TMODEn Position                */
#define I2C1_ST_TMODEn_Msk                    (0x01UL << I2C1_ST_TMODEn_Pos)                          /*!< I2C1 ST: TMODEn Mask                    */
#define I2C1_ST_BUSYn_Pos                     2                                                       /*!< I2C1 ST: BUSYn Position                 */
#define I2C1_ST_BUSYn_Msk                     (0x01UL << I2C1_ST_BUSYn_Pos)                           /*!< I2C1 ST: BUSYn Mask                     */
#define I2C1_ST_MLOSTn_Pos                    3                                                       /*!< I2C1 ST: MLOSTn Position                */
#define I2C1_ST_MLOSTn_Msk                    (0x01UL << I2C1_ST_MLOSTn_Pos)                          /*!< I2C1 ST: MLOSTn Mask                    */
#define I2C1_ST_SSELn_Pos                     4                                                       /*!< I2C1 ST: SSELn Position                 */
#define I2C1_ST_SSELn_Msk                     (0x01UL << I2C1_ST_SSELn_Pos)                           /*!< I2C1 ST: SSELn Mask                     */
#define I2C1_ST_STOPDn_Pos                    5                                                       /*!< I2C1 ST: STOPDn Position                */
#define I2C1_ST_STOPDn_Msk                    (0x01UL << I2C1_ST_STOPDn_Pos)                          /*!< I2C1 ST: STOPDn Mask                    */
#define I2C1_ST_TENDn_Pos                     6                                                       /*!< I2C1 ST: TENDn Position                 */
#define I2C1_ST_TENDn_Msk                     (0x01UL << I2C1_ST_TENDn_Pos)                           /*!< I2C1 ST: TENDn Mask                     */
#define I2C1_ST_GCALLn_Pos                    7                                                       /*!< I2C1 ST: GCALLn Position                */
#define I2C1_ST_GCALLn_Msk                    (0x01UL << I2C1_ST_GCALLn_Pos)                          /*!< I2C1 ST: GCALLn Mask                    */

/* ----------------------------------  I2C1_SAR1  --------------------------------- */
#define I2C1_SAR1_GCALLnEN_Pos                0                                                       /*!< I2C1 SAR1: GCALLnEN Position            */
#define I2C1_SAR1_GCALLnEN_Msk                (0x01UL << I2C1_SAR1_GCALLnEN_Pos)                      /*!< I2C1 SAR1: GCALLnEN Mask                */
#define I2C1_SAR1_SLAn_Pos                    1                                                       /*!< I2C1 SAR1: SLAn Position                */
#define I2C1_SAR1_SLAn_Msk                    (0x7fUL << I2C1_SAR1_SLAn_Pos)                          /*!< I2C1 SAR1: SLAn Mask                    */

/* ----------------------------------  I2C1_SAR2  --------------------------------- */
#define I2C1_SAR2_GCALLnEN_Pos                0                                                       /*!< I2C1 SAR2: GCALLnEN Position            */
#define I2C1_SAR2_GCALLnEN_Msk                (0x01UL << I2C1_SAR2_GCALLnEN_Pos)                      /*!< I2C1 SAR2: GCALLnEN Mask                */
#define I2C1_SAR2_SLAn_Pos                    1                                                       /*!< I2C1 SAR2: SLAn Position                */
#define I2C1_SAR2_SLAn_Msk                    (0x7fUL << I2C1_SAR2_SLAn_Pos)                          /*!< I2C1 SAR2: SLAn Mask                    */

/* -----------------------------------  I2C1_DR  ---------------------------------- */
#define I2C1_DR_DATA_Pos                      0                                                       /*!< I2C1 DR: DATA Position                  */
#define I2C1_DR_DATA_Msk                      (0x000000ffUL << I2C1_DR_DATA_Pos)                      /*!< I2C1 DR: DATA Mask                      */

/* ----------------------------------  I2C1_SDHR  --------------------------------- */
#define I2C1_SDHR_HLDT_Pos                    0                                                       /*!< I2C1 SDHR: HLDT Position                */
#define I2C1_SDHR_HLDT_Msk                    (0x00000fffUL << I2C1_SDHR_HLDT_Pos)                    /*!< I2C1 SDHR: HLDT Mask                    */

/* ----------------------------------  I2C1_SCLR  --------------------------------- */
#define I2C1_SCLR_SCLL_Pos                    0                                                       /*!< I2C1 SCLR: SCLL Position                */
#define I2C1_SCLR_SCLL_Msk                    (0x00000fffUL << I2C1_SCLR_SCLL_Pos)                    /*!< I2C1 SCLR: SCLL Mask                    */

/* ----------------------------------  I2C1_SCHR  --------------------------------- */
#define I2C1_SCHR_SCLH_Pos                    0                                                       /*!< I2C1 SCHR: SCLH Position                */
#define I2C1_SCHR_SCLH_Msk                    (0x00000fffUL << I2C1_SCHR_SCLH_Pos)                    /*!< I2C1 SCHR: SCLH Mask                    */


/* ================================================================================ */
/* ================         struct 'SPI20' Position & Mask         ================ */
/* ================================================================================ */


/* ----------------------------------  SPI20_TDR  --------------------------------- */
#define SPI20_TDR_TDR_Pos                     0                                                       /*!< SPI20 TDR: TDR Position                 */
#define SPI20_TDR_TDR_Msk                     (0x0001ffffUL << SPI20_TDR_TDR_Pos)                     /*!< SPI20 TDR: TDR Mask                     */

/* ----------------------------------  SPI20_RDR  --------------------------------- */
#define SPI20_RDR_RDR_Pos                     0                                                       /*!< SPI20 RDR: RDR Position                 */
#define SPI20_RDR_RDR_Msk                     (0x0001ffffUL << SPI20_RDR_RDR_Pos)                     /*!< SPI20 RDR: RDR Mask                     */

/* ----------------------------------  SPI20_CR  ---------------------------------- */
#define SPI20_CR_BITSZ_Pos                    0                                                       /*!< SPI20 CR: BITSZ Position                */
#define SPI20_CR_BITSZ_Msk                    (0x03UL << SPI20_CR_BITSZ_Pos)                          /*!< SPI20 CR: BITSZ Mask                    */
#define SPI20_CR_CPOL_Pos                     2                                                       /*!< SPI20 CR: CPOL Position                 */
#define SPI20_CR_CPOL_Msk                     (0x01UL << SPI20_CR_CPOL_Pos)                           /*!< SPI20 CR: CPOL Mask                     */
#define SPI20_CR_CPHA_Pos                     3                                                       /*!< SPI20 CR: CPHA Position                 */
#define SPI20_CR_CPHA_Msk                     (0x01UL << SPI20_CR_CPHA_Pos)                           /*!< SPI20 CR: CPHA Mask                     */
#define SPI20_CR_MSBF_Pos                     4                                                       /*!< SPI20 CR: MSBF Position                 */
#define SPI20_CR_MSBF_Msk                     (0x01UL << SPI20_CR_MSBF_Pos)                           /*!< SPI20 CR: MSBF Mask                     */
#define SPI20_CR_MS_Pos                       5                                                       /*!< SPI20 CR: MS Position                   */
#define SPI20_CR_MS_Msk                       (0x01UL << SPI20_CR_MS_Pos)                             /*!< SPI20 CR: MS Mask                       */
#define SPI20_CR_SSPOL_Pos                    8                                                       /*!< SPI20 CR: SSPOL Position                */
#define SPI20_CR_SSPOL_Msk                    (0x01UL << SPI20_CR_SSPOL_Pos)                          /*!< SPI20 CR: SSPOL Mask                    */
#define SPI20_CR_SSMO_Pos                     9                                                       /*!< SPI20 CR: SSMO Position                 */
#define SPI20_CR_SSMO_Msk                     (0x01UL << SPI20_CR_SSMO_Pos)                           /*!< SPI20 CR: SSMO Mask                     */
#define SPI20_CR_SSMASK_Pos                   10                                                      /*!< SPI20 CR: SSMASK Position               */
#define SPI20_CR_SSMASK_Msk                   (0x01UL << SPI20_CR_SSMASK_Pos)                         /*!< SPI20 CR: SSMASK Mask                   */
#define SPI20_CR_LBE_Pos                      11                                                      /*!< SPI20 CR: LBE Position                  */
#define SPI20_CR_LBE_Msk                      (0x01UL << SPI20_CR_LBE_Pos)                            /*!< SPI20 CR: LBE Mask                      */
#define SPI20_CR_SSOUT_Pos                    12                                                      /*!< SPI20 CR: SSOUT Position                */
#define SPI20_CR_SSOUT_Msk                    (0x01UL << SPI20_CR_SSOUT_Pos)                          /*!< SPI20 CR: SSOUT Mask                    */
#define SPI20_CR_SSMOD_Pos                    13                                                      /*!< SPI20 CR: SSMOD Position                */
#define SPI20_CR_SSMOD_Msk                    (0x01UL << SPI20_CR_SSMOD_Pos)                          /*!< SPI20 CR: SSMOD Mask                    */
#define SPI20_CR_RXIE_Pos                     14                                                      /*!< SPI20 CR: RXIE Position                 */
#define SPI20_CR_RXIE_Msk                     (0x01UL << SPI20_CR_RXIE_Pos)                           /*!< SPI20 CR: RXIE Mask                     */
#define SPI20_CR_TXIE_Pos                     15                                                      /*!< SPI20 CR: TXIE Position                 */
#define SPI20_CR_TXIE_Msk                     (0x01UL << SPI20_CR_TXIE_Pos)                           /*!< SPI20 CR: TXIE Mask                     */
#define SPI20_CR_SSCIE_Pos                    16                                                      /*!< SPI20 CR: SSCIE Position                */
#define SPI20_CR_SSCIE_Msk                    (0x01UL << SPI20_CR_SSCIE_Pos)                          /*!< SPI20 CR: SSCIE Mask                    */
#define SPI20_CR_RXDIE_Pos                    17                                                      /*!< SPI20 CR: RXDIE Position                */
#define SPI20_CR_RXDIE_Msk                    (0x01UL << SPI20_CR_RXDIE_Pos)                          /*!< SPI20 CR: RXDIE Mask                    */
#define SPI20_CR_TXDIE_Pos                    18                                                      /*!< SPI20 CR: TXDIE Position                */
#define SPI20_CR_TXDIE_Msk                    (0x01UL << SPI20_CR_TXDIE_Pos)                          /*!< SPI20 CR: TXDIE Mask                    */
#define SPI20_CR_RXBC_Pos                     19                                                      /*!< SPI20 CR: RXBC Position                 */
#define SPI20_CR_RXBC_Msk                     (0x01UL << SPI20_CR_RXBC_Pos)                           /*!< SPI20 CR: RXBC Mask                     */
#define SPI20_CR_TXBC_Pos                     20                                                      /*!< SPI20 CR: TXBC Position                 */
#define SPI20_CR_TXBC_Msk                     (0x01UL << SPI20_CR_TXBC_Pos)                           /*!< SPI20 CR: TXBC Mask                     */

/* ----------------------------------  SPI20_SR  ---------------------------------- */
#define SPI20_SR_RRDY_Pos                     0                                                       /*!< SPI20 SR: RRDY Position                 */
#define SPI20_SR_RRDY_Msk                     (0x01UL << SPI20_SR_RRDY_Pos)                           /*!< SPI20 SR: RRDY Mask                     */
#define SPI20_SR_TRDY_Pos                     1                                                       /*!< SPI20 SR: TRDY Position                 */
#define SPI20_SR_TRDY_Msk                     (0x01UL << SPI20_SR_TRDY_Pos)                           /*!< SPI20 SR: TRDY Mask                     */
#define SPI20_SR_TXIDLE_Pos                   2                                                       /*!< SPI20 SR: TXIDLE Position               */
#define SPI20_SR_TXIDLE_Msk                   (0x01UL << SPI20_SR_TXIDLE_Pos)                         /*!< SPI20 SR: TXIDLE Mask                   */
#define SPI20_SR_UDRF_Pos                     3                                                       /*!< SPI20 SR: UDRF Position                 */
#define SPI20_SR_UDRF_Msk                     (0x01UL << SPI20_SR_UDRF_Pos)                           /*!< SPI20 SR: UDRF Mask                     */
#define SPI20_SR_OVRF_Pos                     4                                                       /*!< SPI20 SR: OVRF Position                 */
#define SPI20_SR_OVRF_Msk                     (0x01UL << SPI20_SR_OVRF_Pos)                           /*!< SPI20 SR: OVRF Mask                     */
#define SPI20_SR_SSON_Pos                     5                                                       /*!< SPI20 SR: SSON Position                 */
#define SPI20_SR_SSON_Msk                     (0x01UL << SPI20_SR_SSON_Pos)                           /*!< SPI20 SR: SSON Mask                     */
#define SPI20_SR_SSDET_Pos                    6                                                       /*!< SPI20 SR: SSDET Position                */
#define SPI20_SR_SSDET_Msk                    (0x01UL << SPI20_SR_SSDET_Pos)                          /*!< SPI20 SR: SSDET Mask                    */
#define SPI20_SR_SBUSY_Pos                    7                                                       /*!< SPI20 SR: SBUSY Position                */
#define SPI20_SR_SBUSY_Msk                    (0x01UL << SPI20_SR_SBUSY_Pos)                          /*!< SPI20 SR: SBUSY Mask                    */
#define SPI20_SR_RXDMAF_Pos                   8                                                       /*!< SPI20 SR: RXDMAF Position               */
#define SPI20_SR_RXDMAF_Msk                   (0x01UL << SPI20_SR_RXDMAF_Pos)                         /*!< SPI20 SR: RXDMAF Mask                   */
#define SPI20_SR_TXDMAF_Pos                   9                                                       /*!< SPI20 SR: TXDMAF Position               */
#define SPI20_SR_TXDMAF_Msk                   (0x01UL << SPI20_SR_TXDMAF_Pos)                         /*!< SPI20 SR: TXDMAF Mask                   */

/* ----------------------------------  SPI20_BR  ---------------------------------- */
#define SPI20_BR_BR_Pos                       0                                                       /*!< SPI20 BR: BR Position                   */
#define SPI20_BR_BR_Msk                       (0x0000ffffUL << SPI20_BR_BR_Pos)                       /*!< SPI20 BR: BR Mask                       */

/* ----------------------------------  SPI20_EN  ---------------------------------- */
#define SPI20_EN_ENABLE_Pos                   0                                                       /*!< SPI20 EN: ENABLE Position               */
#define SPI20_EN_ENABLE_Msk                   (0x01UL << SPI20_EN_ENABLE_Pos)                         /*!< SPI20 EN: ENABLE Mask                   */

/* ----------------------------------  SPI20_LR  ---------------------------------- */
#define SPI20_LR_STL_Pos                      0                                                       /*!< SPI20 LR: STL Position                  */
#define SPI20_LR_STL_Msk                      (0x000000ffUL << SPI20_LR_STL_Pos)                      /*!< SPI20 LR: STL Mask                      */
#define SPI20_LR_BTL_Pos                      8                                                       /*!< SPI20 LR: BTL Position                  */
#define SPI20_LR_BTL_Msk                      (0x000000ffUL << SPI20_LR_BTL_Pos)                      /*!< SPI20 LR: BTL Mask                      */
#define SPI20_LR_SPL_Pos                      16                                                      /*!< SPI20 LR: SPL Position                  */
#define SPI20_LR_SPL_Msk                      (0x000000ffUL << SPI20_LR_SPL_Pos)                      /*!< SPI20 LR: SPL Mask                      */


/* ================================================================================ */
/* ================         struct 'SPI21' Position & Mask         ================ */
/* ================================================================================ */


/* ----------------------------------  SPI21_RDR  --------------------------------- */
#define SPI21_RDR_RDR_Pos                     0                                                       /*!< SPI21 RDR: RDR Position                 */
#define SPI21_RDR_RDR_Msk                     (0x0001ffffUL << SPI21_RDR_RDR_Pos)                     /*!< SPI21 RDR: RDR Mask                     */

/* ----------------------------------  SPI21_TDR  --------------------------------- */
#define SPI21_TDR_TDR_Pos                     0                                                       /*!< SPI21 TDR: TDR Position                 */
#define SPI21_TDR_TDR_Msk                     (0x0001ffffUL << SPI21_TDR_TDR_Pos)                     /*!< SPI21 TDR: TDR Mask                     */

/* ----------------------------------  SPI21_CR  ---------------------------------- */
#define SPI21_CR_BITSZ_Pos                    0                                                       /*!< SPI21 CR: BITSZ Position                */
#define SPI21_CR_BITSZ_Msk                    (0x03UL << SPI21_CR_BITSZ_Pos)                          /*!< SPI21 CR: BITSZ Mask                    */
#define SPI21_CR_CPOL_Pos                     2                                                       /*!< SPI21 CR: CPOL Position                 */
#define SPI21_CR_CPOL_Msk                     (0x01UL << SPI21_CR_CPOL_Pos)                           /*!< SPI21 CR: CPOL Mask                     */
#define SPI21_CR_CPHA_Pos                     3                                                       /*!< SPI21 CR: CPHA Position                 */
#define SPI21_CR_CPHA_Msk                     (0x01UL << SPI21_CR_CPHA_Pos)                           /*!< SPI21 CR: CPHA Mask                     */
#define SPI21_CR_MSBF_Pos                     4                                                       /*!< SPI21 CR: MSBF Position                 */
#define SPI21_CR_MSBF_Msk                     (0x01UL << SPI21_CR_MSBF_Pos)                           /*!< SPI21 CR: MSBF Mask                     */
#define SPI21_CR_MS_Pos                       5                                                       /*!< SPI21 CR: MS Position                   */
#define SPI21_CR_MS_Msk                       (0x01UL << SPI21_CR_MS_Pos)                             /*!< SPI21 CR: MS Mask                       */
#define SPI21_CR_SSPOL_Pos                    8                                                       /*!< SPI21 CR: SSPOL Position                */
#define SPI21_CR_SSPOL_Msk                    (0x01UL << SPI21_CR_SSPOL_Pos)                          /*!< SPI21 CR: SSPOL Mask                    */
#define SPI21_CR_SSMO_Pos                     9                                                       /*!< SPI21 CR: SSMO Position                 */
#define SPI21_CR_SSMO_Msk                     (0x01UL << SPI21_CR_SSMO_Pos)                           /*!< SPI21 CR: SSMO Mask                     */
#define SPI21_CR_SSMASK_Pos                   10                                                      /*!< SPI21 CR: SSMASK Position               */
#define SPI21_CR_SSMASK_Msk                   (0x01UL << SPI21_CR_SSMASK_Pos)                         /*!< SPI21 CR: SSMASK Mask                   */
#define SPI21_CR_LBE_Pos                      11                                                      /*!< SPI21 CR: LBE Position                  */
#define SPI21_CR_LBE_Msk                      (0x01UL << SPI21_CR_LBE_Pos)                            /*!< SPI21 CR: LBE Mask                      */
#define SPI21_CR_SSOUT_Pos                    12                                                      /*!< SPI21 CR: SSOUT Position                */
#define SPI21_CR_SSOUT_Msk                    (0x01UL << SPI21_CR_SSOUT_Pos)                          /*!< SPI21 CR: SSOUT Mask                    */
#define SPI21_CR_SSMOD_Pos                    13                                                      /*!< SPI21 CR: SSMOD Position                */
#define SPI21_CR_SSMOD_Msk                    (0x01UL << SPI21_CR_SSMOD_Pos)                          /*!< SPI21 CR: SSMOD Mask                    */
#define SPI21_CR_RXIE_Pos                     14                                                      /*!< SPI21 CR: RXIE Position                 */
#define SPI21_CR_RXIE_Msk                     (0x01UL << SPI21_CR_RXIE_Pos)                           /*!< SPI21 CR: RXIE Mask                     */
#define SPI21_CR_TXIE_Pos                     15                                                      /*!< SPI21 CR: TXIE Position                 */
#define SPI21_CR_TXIE_Msk                     (0x01UL << SPI21_CR_TXIE_Pos)                           /*!< SPI21 CR: TXIE Mask                     */
#define SPI21_CR_SSCIE_Pos                    16                                                      /*!< SPI21 CR: SSCIE Position                */
#define SPI21_CR_SSCIE_Msk                    (0x01UL << SPI21_CR_SSCIE_Pos)                          /*!< SPI21 CR: SSCIE Mask                    */
#define SPI21_CR_RXDIE_Pos                    17                                                      /*!< SPI21 CR: RXDIE Position                */
#define SPI21_CR_RXDIE_Msk                    (0x01UL << SPI21_CR_RXDIE_Pos)                          /*!< SPI21 CR: RXDIE Mask                    */
#define SPI21_CR_TXDIE_Pos                    18                                                      /*!< SPI21 CR: TXDIE Position                */
#define SPI21_CR_TXDIE_Msk                    (0x01UL << SPI21_CR_TXDIE_Pos)                          /*!< SPI21 CR: TXDIE Mask                    */
#define SPI21_CR_RXBC_Pos                     19                                                      /*!< SPI21 CR: RXBC Position                 */
#define SPI21_CR_RXBC_Msk                     (0x01UL << SPI21_CR_RXBC_Pos)                           /*!< SPI21 CR: RXBC Mask                     */
#define SPI21_CR_TXBC_Pos                     20                                                      /*!< SPI21 CR: TXBC Position                 */
#define SPI21_CR_TXBC_Msk                     (0x01UL << SPI21_CR_TXBC_Pos)                           /*!< SPI21 CR: TXBC Mask                     */

/* ----------------------------------  SPI21_SR  ---------------------------------- */
#define SPI21_SR_RRDY_Pos                     0                                                       /*!< SPI21 SR: RRDY Position                 */
#define SPI21_SR_RRDY_Msk                     (0x01UL << SPI21_SR_RRDY_Pos)                           /*!< SPI21 SR: RRDY Mask                     */
#define SPI21_SR_TRDY_Pos                     1                                                       /*!< SPI21 SR: TRDY Position                 */
#define SPI21_SR_TRDY_Msk                     (0x01UL << SPI21_SR_TRDY_Pos)                           /*!< SPI21 SR: TRDY Mask                     */
#define SPI21_SR_TXIDLE_Pos                   2                                                       /*!< SPI21 SR: TXIDLE Position               */
#define SPI21_SR_TXIDLE_Msk                   (0x01UL << SPI21_SR_TXIDLE_Pos)                         /*!< SPI21 SR: TXIDLE Mask                   */
#define SPI21_SR_UDRF_Pos                     3                                                       /*!< SPI21 SR: UDRF Position                 */
#define SPI21_SR_UDRF_Msk                     (0x01UL << SPI21_SR_UDRF_Pos)                           /*!< SPI21 SR: UDRF Mask                     */
#define SPI21_SR_OVRF_Pos                     4                                                       /*!< SPI21 SR: OVRF Position                 */
#define SPI21_SR_OVRF_Msk                     (0x01UL << SPI21_SR_OVRF_Pos)                           /*!< SPI21 SR: OVRF Mask                     */
#define SPI21_SR_SSON_Pos                     5                                                       /*!< SPI21 SR: SSON Position                 */
#define SPI21_SR_SSON_Msk                     (0x01UL << SPI21_SR_SSON_Pos)                           /*!< SPI21 SR: SSON Mask                     */
#define SPI21_SR_SSDET_Pos                    6                                                       /*!< SPI21 SR: SSDET Position                */
#define SPI21_SR_SSDET_Msk                    (0x01UL << SPI21_SR_SSDET_Pos)                          /*!< SPI21 SR: SSDET Mask                    */
#define SPI21_SR_SBUSY_Pos                    7                                                       /*!< SPI21 SR: SBUSY Position                */
#define SPI21_SR_SBUSY_Msk                    (0x01UL << SPI21_SR_SBUSY_Pos)                          /*!< SPI21 SR: SBUSY Mask                    */
#define SPI21_SR_RXDMAF_Pos                   8                                                       /*!< SPI21 SR: RXDMAF Position               */
#define SPI21_SR_RXDMAF_Msk                   (0x01UL << SPI21_SR_RXDMAF_Pos)                         /*!< SPI21 SR: RXDMAF Mask                   */
#define SPI21_SR_TXDMAF_Pos                   9                                                       /*!< SPI21 SR: TXDMAF Position               */
#define SPI21_SR_TXDMAF_Msk                   (0x01UL << SPI21_SR_TXDMAF_Pos)                         /*!< SPI21 SR: TXDMAF Mask                   */

/* ----------------------------------  SPI21_BR  ---------------------------------- */
#define SPI21_BR_BR_Pos                       0                                                       /*!< SPI21 BR: BR Position                   */
#define SPI21_BR_BR_Msk                       (0x0000ffffUL << SPI21_BR_BR_Pos)                       /*!< SPI21 BR: BR Mask                       */

/* ----------------------------------  SPI21_EN  ---------------------------------- */
#define SPI21_EN_ENABLE_Pos                   0                                                       /*!< SPI21 EN: ENABLE Position               */
#define SPI21_EN_ENABLE_Msk                   (0x01UL << SPI21_EN_ENABLE_Pos)                         /*!< SPI21 EN: ENABLE Mask                   */

/* ----------------------------------  SPI21_LR  ---------------------------------- */
#define SPI21_LR_STL_Pos                      0                                                       /*!< SPI21 LR: STL Position                  */
#define SPI21_LR_STL_Msk                      (0x000000ffUL << SPI21_LR_STL_Pos)                      /*!< SPI21 LR: STL Mask                      */
#define SPI21_LR_BTL_Pos                      8                                                       /*!< SPI21 LR: BTL Position                  */
#define SPI21_LR_BTL_Msk                      (0x000000ffUL << SPI21_LR_BTL_Pos)                      /*!< SPI21 LR: BTL Mask                      */
#define SPI21_LR_SPL_Pos                      16                                                      /*!< SPI21 LR: SPL Position                  */
#define SPI21_LR_SPL_Msk                      (0x000000ffUL << SPI21_LR_SPL_Pos)                      /*!< SPI21 LR: SPL Mask                      */


/* ================================================================================ */
/* ================          struct 'ADC' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  ADC_CR  ----------------------------------- */
#define ADC_CR_ADSEL_Pos                      0                                                       /*!< ADC CR: ADSEL Position                  */
#define ADC_CR_ADSEL_Msk                      (0x0fUL << ADC_CR_ADSEL_Pos)                            /*!< ADC CR: ADSEL Mask                      */
#define ADC_CR_ADCIFLAG_Pos                   4                                                       /*!< ADC CR: ADCIFLAG Position               */
#define ADC_CR_ADCIFLAG_Msk                   (0x01UL << ADC_CR_ADCIFLAG_Pos)                         /*!< ADC CR: ADCIFLAG Mask                   */
#define ADC_CR_ADCIEN_Pos                     5                                                       /*!< ADC CR: ADCIEN Position                 */
#define ADC_CR_ADCIEN_Msk                     (0x01UL << ADC_CR_ADCIEN_Pos)                           /*!< ADC CR: ADCIEN Mask                     */
#define ADC_CR_ADST_Pos                       8                                                       /*!< ADC CR: ADST Position                   */
#define ADC_CR_ADST_Msk                       (0x01UL << ADC_CR_ADST_Pos)                             /*!< ADC CR: ADST Mask                       */
#define ADC_CR_REFSEL_Pos                     10                                                      /*!< ADC CR: REFSEL Position                 */
#define ADC_CR_REFSEL_Msk                     (0x01UL << ADC_CR_REFSEL_Pos)                           /*!< ADC CR: REFSEL Mask                     */
#define ADC_CR_TRIG_Pos                       11                                                      /*!< ADC CR: TRIG Position                   */
#define ADC_CR_TRIG_Msk                       (0x07UL << ADC_CR_TRIG_Pos)                             /*!< ADC CR: TRIG Mask                       */
#define ADC_CR_ADCEN_Pos                      15                                                      /*!< ADC CR: ADCEN Position                  */
#define ADC_CR_ADCEN_Msk                      (0x01UL << ADC_CR_ADCEN_Pos)                            /*!< ADC CR: ADCEN Mask                      */

/* -----------------------------------  ADC_DR  ----------------------------------- */
#define ADC_DR_ADDATA_Pos                     0                                                       /*!< ADC DR: ADDATA Position                 */
#define ADC_DR_ADDATA_Msk                     (0x00000fffUL << ADC_DR_ADDATA_Pos)                     /*!< ADC DR: ADDATA Mask                     */

/* ----------------------------------  ADC_PREDR  --------------------------------- */
#define ADC_PREDR_PRED_Pos                    0                                                       /*!< ADC PREDR: PRED Position                */
#define ADC_PREDR_PRED_Msk                    (0x1fUL << ADC_PREDR_PRED_Pos)                          /*!< ADC PREDR: PRED Mask                    */


/* ================================================================================ */
/* ================          struct 'DAC' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  DAC_CR  ----------------------------------- */
#define DAC_CR_DACEN_Pos                      0                                                       /*!< DAC CR: DACEN Position                  */
#define DAC_CR_DACEN_Msk                      (0x01UL << DAC_CR_DACEN_Pos)                            /*!< DAC CR: DACEN Mask                      */

/* -----------------------------------  DAC_DR  ----------------------------------- */
#define DAC_DR_DADTA_Pos                      4                                                       /*!< DAC DR: DADTA Position                  */
#define DAC_DR_DADTA_Msk                      (0x000000ffUL << DAC_DR_DADTA_Pos)                      /*!< DAC DR: DADTA Mask                      */

/* ----------------------------------  DAC_DACEN  --------------------------------- */
#define DAC_DACEN_DACPORT_Pos                 0                                                       /*!< DAC DACEN: DACPORT Position             */
#define DAC_DACEN_DACPORT_Msk                 (0x01UL << DAC_DACEN_DACPORT_Pos)                       /*!< DAC DACEN: DACPORT Mask                 */


/* ================================================================================ */
/* ================         struct 'TOUCH' Position & Mask         ================ */
/* ================================================================================ */


/* --------------------------------  TOUCH_SUM_CH0  ------------------------------- */
#define TOUCH_SUM_CH0_SUM_CH_DATA_Pos         0                                                       /*!< TOUCH SUM_CH0: SUM_CH_DATA Position     */
#define TOUCH_SUM_CH0_SUM_CH_DATA_Msk         (0x0000ffffUL << TOUCH_SUM_CH0_SUM_CH_DATA_Pos)         /*!< TOUCH SUM_CH0: SUM_CH_DATA Mask         */

/* --------------------------------  TOUCH_SUM_CH1  ------------------------------- */
#define TOUCH_SUM_CH1_SUM_CH_DATA_Pos         0                                                       /*!< TOUCH SUM_CH1: SUM_CH_DATA Position     */
#define TOUCH_SUM_CH1_SUM_CH_DATA_Msk         (0x0000ffffUL << TOUCH_SUM_CH1_SUM_CH_DATA_Pos)         /*!< TOUCH SUM_CH1: SUM_CH_DATA Mask         */

/* --------------------------------  TOUCH_SUM_CH2  ------------------------------- */
#define TOUCH_SUM_CH2_SUM_CH_DATA_Pos         0                                                       /*!< TOUCH SUM_CH2: SUM_CH_DATA Position     */
#define TOUCH_SUM_CH2_SUM_CH_DATA_Msk         (0x0000ffffUL << TOUCH_SUM_CH2_SUM_CH_DATA_Pos)         /*!< TOUCH SUM_CH2: SUM_CH_DATA Mask         */

/* --------------------------------  TOUCH_SUM_CH3  ------------------------------- */
#define TOUCH_SUM_CH3_SUM_CH_DATA_Pos         0                                                       /*!< TOUCH SUM_CH3: SUM_CH_DATA Position     */
#define TOUCH_SUM_CH3_SUM_CH_DATA_Msk         (0x0000ffffUL << TOUCH_SUM_CH3_SUM_CH_DATA_Pos)         /*!< TOUCH SUM_CH3: SUM_CH_DATA Mask         */

/* --------------------------------  TOUCH_SUM_CH4  ------------------------------- */
#define TOUCH_SUM_CH4_SUM_CH_DATA_Pos         0                                                       /*!< TOUCH SUM_CH4: SUM_CH_DATA Position     */
#define TOUCH_SUM_CH4_SUM_CH_DATA_Msk         (0x0000ffffUL << TOUCH_SUM_CH4_SUM_CH_DATA_Pos)         /*!< TOUCH SUM_CH4: SUM_CH_DATA Mask         */

/* --------------------------------  TOUCH_SUM_CH5  ------------------------------- */
#define TOUCH_SUM_CH5_SUM_CH_DATA_Pos         0                                                       /*!< TOUCH SUM_CH5: SUM_CH_DATA Position     */
#define TOUCH_SUM_CH5_SUM_CH_DATA_Msk         (0x0000ffffUL << TOUCH_SUM_CH5_SUM_CH_DATA_Pos)         /*!< TOUCH SUM_CH5: SUM_CH_DATA Mask         */

/* --------------------------------  TOUCH_SUM_CH6  ------------------------------- */
#define TOUCH_SUM_CH6_SUM_CH_DATA_Pos         0                                                       /*!< TOUCH SUM_CH6: SUM_CH_DATA Position     */
#define TOUCH_SUM_CH6_SUM_CH_DATA_Msk         (0x0000ffffUL << TOUCH_SUM_CH6_SUM_CH_DATA_Pos)         /*!< TOUCH SUM_CH6: SUM_CH_DATA Mask         */

/* --------------------------------  TOUCH_SUM_CH7  ------------------------------- */
#define TOUCH_SUM_CH7_SUM_CH_DATA_Pos         0                                                       /*!< TOUCH SUM_CH7: SUM_CH_DATA Position     */
#define TOUCH_SUM_CH7_SUM_CH_DATA_Msk         (0x0000ffffUL << TOUCH_SUM_CH7_SUM_CH_DATA_Pos)         /*!< TOUCH SUM_CH7: SUM_CH_DATA Mask         */

/* --------------------------------  TOUCH_SUM_CH8  ------------------------------- */
#define TOUCH_SUM_CH8_SUM_CH_DATA_Pos         0                                                       /*!< TOUCH SUM_CH8: SUM_CH_DATA Position     */
#define TOUCH_SUM_CH8_SUM_CH_DATA_Msk         (0x0000ffffUL << TOUCH_SUM_CH8_SUM_CH_DATA_Pos)         /*!< TOUCH SUM_CH8: SUM_CH_DATA Mask         */

/* --------------------------------  TOUCH_SUM_CH9  ------------------------------- */
#define TOUCH_SUM_CH9_SUM_CH_DATA_Pos         0                                                       /*!< TOUCH SUM_CH9: SUM_CH_DATA Position     */
#define TOUCH_SUM_CH9_SUM_CH_DATA_Msk         (0x0000ffffUL << TOUCH_SUM_CH9_SUM_CH_DATA_Pos)         /*!< TOUCH SUM_CH9: SUM_CH_DATA Mask         */

/* -------------------------------  TOUCH_SUM_CH10  ------------------------------- */
#define TOUCH_SUM_CH10_SUM_CH_DATA_Pos        0                                                       /*!< TOUCH SUM_CH10: SUM_CH_DATA Position    */
#define TOUCH_SUM_CH10_SUM_CH_DATA_Msk        (0x0000ffffUL << TOUCH_SUM_CH10_SUM_CH_DATA_Pos)        /*!< TOUCH SUM_CH10: SUM_CH_DATA Mask        */

/* -------------------------------  TOUCH_SUM_CH11  ------------------------------- */
#define TOUCH_SUM_CH11_SUM_CH_DATA_Pos        0                                                       /*!< TOUCH SUM_CH11: SUM_CH_DATA Position    */
#define TOUCH_SUM_CH11_SUM_CH_DATA_Msk        (0x0000ffffUL << TOUCH_SUM_CH11_SUM_CH_DATA_Pos)        /*!< TOUCH SUM_CH11: SUM_CH_DATA Mask        */

/* -------------------------------  TOUCH_SUM_CH12  ------------------------------- */
#define TOUCH_SUM_CH12_SUM_CH_DATA_Pos        0                                                       /*!< TOUCH SUM_CH12: SUM_CH_DATA Position    */
#define TOUCH_SUM_CH12_SUM_CH_DATA_Msk        (0x0000ffffUL << TOUCH_SUM_CH12_SUM_CH_DATA_Pos)        /*!< TOUCH SUM_CH12: SUM_CH_DATA Mask        */

/* -------------------------------  TOUCH_SUM_CH13  ------------------------------- */
#define TOUCH_SUM_CH13_SUM_CH_DATA_Pos        0                                                       /*!< TOUCH SUM_CH13: SUM_CH_DATA Position    */
#define TOUCH_SUM_CH13_SUM_CH_DATA_Msk        (0x0000ffffUL << TOUCH_SUM_CH13_SUM_CH_DATA_Pos)        /*!< TOUCH SUM_CH13: SUM_CH_DATA Mask        */

/* -------------------------------  TOUCH_SUM_CH14  ------------------------------- */
#define TOUCH_SUM_CH14_SUM_CH_DATA_Pos        0                                                       /*!< TOUCH SUM_CH14: SUM_CH_DATA Position    */
#define TOUCH_SUM_CH14_SUM_CH_DATA_Msk        (0x0000ffffUL << TOUCH_SUM_CH14_SUM_CH_DATA_Pos)        /*!< TOUCH SUM_CH14: SUM_CH_DATA Mask        */

/* -------------------------------  TOUCH_SUM_CH15  ------------------------------- */
#define TOUCH_SUM_CH15_SUM_CH_DATA_Pos        0                                                       /*!< TOUCH SUM_CH15: SUM_CH_DATA Position    */
#define TOUCH_SUM_CH15_SUM_CH_DATA_Msk        (0x0000ffffUL << TOUCH_SUM_CH15_SUM_CH_DATA_Pos)        /*!< TOUCH SUM_CH15: SUM_CH_DATA Mask        */

/* -------------------------------  TOUCH_SUM_CH16  ------------------------------- */
#define TOUCH_SUM_CH16_SUM_CH_DATA_Pos        0                                                       /*!< TOUCH SUM_CH16: SUM_CH_DATA Position    */
#define TOUCH_SUM_CH16_SUM_CH_DATA_Msk        (0x0000ffffUL << TOUCH_SUM_CH16_SUM_CH_DATA_Pos)        /*!< TOUCH SUM_CH16: SUM_CH_DATA Mask        */

/* -------------------------------  TOUCH_SUM_CH17  ------------------------------- */
#define TOUCH_SUM_CH17_SUM_CH_DATA_Pos        0                                                       /*!< TOUCH SUM_CH17: SUM_CH_DATA Position    */
#define TOUCH_SUM_CH17_SUM_CH_DATA_Msk        (0x0000ffffUL << TOUCH_SUM_CH17_SUM_CH_DATA_Pos)        /*!< TOUCH SUM_CH17: SUM_CH_DATA Mask        */

/* -------------------------------  TOUCH_SUM_CH18  ------------------------------- */
#define TOUCH_SUM_CH18_SUM_CH_DATA_Pos        0                                                       /*!< TOUCH SUM_CH18: SUM_CH_DATA Position    */
#define TOUCH_SUM_CH18_SUM_CH_DATA_Msk        (0x0000ffffUL << TOUCH_SUM_CH18_SUM_CH_DATA_Pos)        /*!< TOUCH SUM_CH18: SUM_CH_DATA Mask        */

/* -------------------------------  TOUCH_SUM_CH19  ------------------------------- */
#define TOUCH_SUM_CH19_SUM_CH_DATA_Pos        0                                                       /*!< TOUCH SUM_CH19: SUM_CH_DATA Position    */
#define TOUCH_SUM_CH19_SUM_CH_DATA_Msk        (0x0000ffffUL << TOUCH_SUM_CH19_SUM_CH_DATA_Pos)        /*!< TOUCH SUM_CH19: SUM_CH_DATA Mask        */

/* -------------------------------  TOUCH_SUM_CH20  ------------------------------- */
#define TOUCH_SUM_CH20_SUM_CH_DATA_Pos        0                                                       /*!< TOUCH SUM_CH20: SUM_CH_DATA Position    */
#define TOUCH_SUM_CH20_SUM_CH_DATA_Msk        (0x0000ffffUL << TOUCH_SUM_CH20_SUM_CH_DATA_Pos)        /*!< TOUCH SUM_CH20: SUM_CH_DATA Mask        */

/* -------------------------------  TOUCH_SUM_CH21  ------------------------------- */
#define TOUCH_SUM_CH21_SUM_CH_DATA_Pos        0                                                       /*!< TOUCH SUM_CH21: SUM_CH_DATA Position    */
#define TOUCH_SUM_CH21_SUM_CH_DATA_Msk        (0x0000ffffUL << TOUCH_SUM_CH21_SUM_CH_DATA_Pos)        /*!< TOUCH SUM_CH21: SUM_CH_DATA Mask        */

/* -------------------------------  TOUCH_SUM_CH22  ------------------------------- */
#define TOUCH_SUM_CH22_SUM_CH_DATA_Pos        0                                                       /*!< TOUCH SUM_CH22: SUM_CH_DATA Position    */
#define TOUCH_SUM_CH22_SUM_CH_DATA_Msk        (0x0000ffffUL << TOUCH_SUM_CH22_SUM_CH_DATA_Pos)        /*!< TOUCH SUM_CH22: SUM_CH_DATA Mask        */

/* -------------------------------  TOUCH_SUM_CH23  ------------------------------- */
#define TOUCH_SUM_CH23_SUM_CH_DATA_Pos        0                                                       /*!< TOUCH SUM_CH23: SUM_CH_DATA Position    */
#define TOUCH_SUM_CH23_SUM_CH_DATA_Msk        (0x0000ffffUL << TOUCH_SUM_CH23_SUM_CH_DATA_Pos)        /*!< TOUCH SUM_CH23: SUM_CH_DATA Mask        */

/* ---------------------------------  TOUCH_SCO0  --------------------------------- */
#define TOUCH_SCO0_SCO_Pos                    0                                                       /*!< TOUCH SCO0: SCO Position                */
#define TOUCH_SCO0_SCO_Msk                    (0x000001ffUL << TOUCH_SCO0_SCO_Pos)                    /*!< TOUCH SCO0: SCO Mask                    */

/* ---------------------------------  TOUCH_SCO1  --------------------------------- */
#define TOUCH_SCO1_SCO_Pos                    0                                                       /*!< TOUCH SCO1: SCO Position                */
#define TOUCH_SCO1_SCO_Msk                    (0x000001ffUL << TOUCH_SCO1_SCO_Pos)                    /*!< TOUCH SCO1: SCO Mask                    */

/* ---------------------------------  TOUCH_SCO2  --------------------------------- */
#define TOUCH_SCO2_SCO_Pos                    0                                                       /*!< TOUCH SCO2: SCO Position                */
#define TOUCH_SCO2_SCO_Msk                    (0x000001ffUL << TOUCH_SCO2_SCO_Pos)                    /*!< TOUCH SCO2: SCO Mask                    */

/* ---------------------------------  TOUCH_SCO3  --------------------------------- */
#define TOUCH_SCO3_SCO_Pos                    0                                                       /*!< TOUCH SCO3: SCO Position                */
#define TOUCH_SCO3_SCO_Msk                    (0x000001ffUL << TOUCH_SCO3_SCO_Pos)                    /*!< TOUCH SCO3: SCO Mask                    */

/* ---------------------------------  TOUCH_SCO4  --------------------------------- */
#define TOUCH_SCO4_SCO_Pos                    0                                                       /*!< TOUCH SCO4: SCO Position                */
#define TOUCH_SCO4_SCO_Msk                    (0x000001ffUL << TOUCH_SCO4_SCO_Pos)                    /*!< TOUCH SCO4: SCO Mask                    */

/* ---------------------------------  TOUCH_SCO5  --------------------------------- */
#define TOUCH_SCO5_SCO_Pos                    0                                                       /*!< TOUCH SCO5: SCO Position                */
#define TOUCH_SCO5_SCO_Msk                    (0x000001ffUL << TOUCH_SCO5_SCO_Pos)                    /*!< TOUCH SCO5: SCO Mask                    */

/* ---------------------------------  TOUCH_SCO6  --------------------------------- */
#define TOUCH_SCO6_SCO_Pos                    0                                                       /*!< TOUCH SCO6: SCO Position                */
#define TOUCH_SCO6_SCO_Msk                    (0x000001ffUL << TOUCH_SCO6_SCO_Pos)                    /*!< TOUCH SCO6: SCO Mask                    */

/* ---------------------------------  TOUCH_SCO7  --------------------------------- */
#define TOUCH_SCO7_SCO_Pos                    0                                                       /*!< TOUCH SCO7: SCO Position                */
#define TOUCH_SCO7_SCO_Msk                    (0x000001ffUL << TOUCH_SCO7_SCO_Pos)                    /*!< TOUCH SCO7: SCO Mask                    */

/* ---------------------------------  TOUCH_SCO8  --------------------------------- */
#define TOUCH_SCO8_SCO_Pos                    0                                                       /*!< TOUCH SCO8: SCO Position                */
#define TOUCH_SCO8_SCO_Msk                    (0x000001ffUL << TOUCH_SCO8_SCO_Pos)                    /*!< TOUCH SCO8: SCO Mask                    */

/* ---------------------------------  TOUCH_SCO9  --------------------------------- */
#define TOUCH_SCO9_SCO_Pos                    0                                                       /*!< TOUCH SCO9: SCO Position                */
#define TOUCH_SCO9_SCO_Msk                    (0x000001ffUL << TOUCH_SCO9_SCO_Pos)                    /*!< TOUCH SCO9: SCO Mask                    */

/* ---------------------------------  TOUCH_SCO10  -------------------------------- */
#define TOUCH_SCO10_SCO_Pos                   0                                                       /*!< TOUCH SCO10: SCO Position               */
#define TOUCH_SCO10_SCO_Msk                   (0x000001ffUL << TOUCH_SCO10_SCO_Pos)                   /*!< TOUCH SCO10: SCO Mask                   */

/* ---------------------------------  TOUCH_SCO11  -------------------------------- */
#define TOUCH_SCO11_SCO_Pos                   0                                                       /*!< TOUCH SCO11: SCO Position               */
#define TOUCH_SCO11_SCO_Msk                   (0x000001ffUL << TOUCH_SCO11_SCO_Pos)                   /*!< TOUCH SCO11: SCO Mask                   */

/* ---------------------------------  TOUCH_SCO12  -------------------------------- */
#define TOUCH_SCO12_SCO_Pos                   0                                                       /*!< TOUCH SCO12: SCO Position               */
#define TOUCH_SCO12_SCO_Msk                   (0x000001ffUL << TOUCH_SCO12_SCO_Pos)                   /*!< TOUCH SCO12: SCO Mask                   */

/* ---------------------------------  TOUCH_SCO13  -------------------------------- */
#define TOUCH_SCO13_SCO_Pos                   0                                                       /*!< TOUCH SCO13: SCO Position               */
#define TOUCH_SCO13_SCO_Msk                   (0x000001ffUL << TOUCH_SCO13_SCO_Pos)                   /*!< TOUCH SCO13: SCO Mask                   */

/* ---------------------------------  TOUCH_SCO14  -------------------------------- */
#define TOUCH_SCO14_SCO_Pos                   0                                                       /*!< TOUCH SCO14: SCO Position               */
#define TOUCH_SCO14_SCO_Msk                   (0x000001ffUL << TOUCH_SCO14_SCO_Pos)                   /*!< TOUCH SCO14: SCO Mask                   */

/* ---------------------------------  TOUCH_SCO15  -------------------------------- */
#define TOUCH_SCO15_SCO_Pos                   0                                                       /*!< TOUCH SCO15: SCO Position               */
#define TOUCH_SCO15_SCO_Msk                   (0x000001ffUL << TOUCH_SCO15_SCO_Pos)                   /*!< TOUCH SCO15: SCO Mask                   */

/* ---------------------------------  TOUCH_SCO16  -------------------------------- */
#define TOUCH_SCO16_SCO_Pos                   0                                                       /*!< TOUCH SCO16: SCO Position               */
#define TOUCH_SCO16_SCO_Msk                   (0x000001ffUL << TOUCH_SCO16_SCO_Pos)                   /*!< TOUCH SCO16: SCO Mask                   */

/* ---------------------------------  TOUCH_SCO17  -------------------------------- */
#define TOUCH_SCO17_SCO_Pos                   0                                                       /*!< TOUCH SCO17: SCO Position               */
#define TOUCH_SCO17_SCO_Msk                   (0x000001ffUL << TOUCH_SCO17_SCO_Pos)                   /*!< TOUCH SCO17: SCO Mask                   */

/* ---------------------------------  TOUCH_SCO18  -------------------------------- */
#define TOUCH_SCO18_SCO_Pos                   0                                                       /*!< TOUCH SCO18: SCO Position               */
#define TOUCH_SCO18_SCO_Msk                   (0x000001ffUL << TOUCH_SCO18_SCO_Pos)                   /*!< TOUCH SCO18: SCO Mask                   */

/* ---------------------------------  TOUCH_SCO19  -------------------------------- */
#define TOUCH_SCO19_SCO_Pos                   0                                                       /*!< TOUCH SCO19: SCO Position               */
#define TOUCH_SCO19_SCO_Msk                   (0x000001ffUL << TOUCH_SCO19_SCO_Pos)                   /*!< TOUCH SCO19: SCO Mask                   */

/* ---------------------------------  TOUCH_SCO20  -------------------------------- */
#define TOUCH_SCO20_SCO_Pos                   0                                                       /*!< TOUCH SCO20: SCO Position               */
#define TOUCH_SCO20_SCO_Msk                   (0x000001ffUL << TOUCH_SCO20_SCO_Pos)                   /*!< TOUCH SCO20: SCO Mask                   */

/* ---------------------------------  TOUCH_SCO21  -------------------------------- */
#define TOUCH_SCO21_SCO_Pos                   0                                                       /*!< TOUCH SCO21: SCO Position               */
#define TOUCH_SCO21_SCO_Msk                   (0x000001ffUL << TOUCH_SCO21_SCO_Pos)                   /*!< TOUCH SCO21: SCO Mask                   */

/* ---------------------------------  TOUCH_SCO22  -------------------------------- */
#define TOUCH_SCO22_SCO_Pos                   0                                                       /*!< TOUCH SCO22: SCO Position               */
#define TOUCH_SCO22_SCO_Msk                   (0x000001ffUL << TOUCH_SCO22_SCO_Pos)                   /*!< TOUCH SCO22: SCO Mask                   */

/* ---------------------------------  TOUCH_SCO23  -------------------------------- */
#define TOUCH_SCO23_SCO_Pos                   0                                                       /*!< TOUCH SCO23: SCO Position               */
#define TOUCH_SCO23_SCO_Msk                   (0x000001ffUL << TOUCH_SCO23_SCO_Pos)                   /*!< TOUCH SCO23: SCO Mask                   */

/* ----------------------------------  TOUCH_CON  --------------------------------- */
#define TOUCH_CON_TS_RUN_Pos                  0                                                       /*!< TOUCH CON: TS_RUN Position              */
#define TOUCH_CON_TS_RUN_Msk                  (0x01UL << TOUCH_CON_TS_RUN_Pos)                        /*!< TOUCH CON: TS_RUN Mask                  */
#define TOUCH_CON_TS_IF_Pos                   2                                                       /*!< TOUCH CON: TS_IF Position               */
#define TOUCH_CON_TS_IF_Msk                   (0x01UL << TOUCH_CON_TS_IF_Pos)                         /*!< TOUCH CON: TS_IF Mask                   */
#define TOUCH_CON_BGR_EN_Pos                  3                                                       /*!< TOUCH CON: BGR_EN Position              */
#define TOUCH_CON_BGR_EN_Msk                  (0x01UL << TOUCH_CON_BGR_EN_Pos)                        /*!< TOUCH CON: BGR_EN Mask                  */
#define TOUCH_CON_OSC_EN_Pos                  4                                                       /*!< TOUCH CON: OSC_EN Position              */
#define TOUCH_CON_OSC_EN_Msk                  (0x01UL << TOUCH_CON_OSC_EN_Pos)                        /*!< TOUCH CON: OSC_EN Mask                  */

/* ---------------------------------  TOUCH_MODE  --------------------------------- */
#define TOUCH_MODE_PORT_Pos                   0                                                       /*!< TOUCH MODE: PORT Position               */
#define TOUCH_MODE_PORT_Msk                   (0x03UL << TOUCH_MODE_PORT_Pos)                         /*!< TOUCH MODE: PORT Mask                   */
#define TOUCH_MODE_SAP_Pos                    4                                                       /*!< TOUCH MODE: SAP Position                */
#define TOUCH_MODE_SAP_Msk                    (0x03UL << TOUCH_MODE_SAP_Pos)                          /*!< TOUCH MODE: SAP Mask                    */
#define TOUCH_MODE_SC_GAIN_Pos                6                                                       /*!< TOUCH MODE: SC_GAIN Position            */
#define TOUCH_MODE_SC_GAIN_Msk                (0x01UL << TOUCH_MODE_SC_GAIN_Pos)                      /*!< TOUCH MODE: SC_GAIN Mask                */
#define TOUCH_MODE_SREF_Pos                   7                                                       /*!< TOUCH MODE: SREF Position               */
#define TOUCH_MODE_SREF_Msk                   (0x01UL << TOUCH_MODE_SREF_Pos)                         /*!< TOUCH MODE: SREF Mask                   */

/* --------------------------------  TOUCH_SUM_CNT  ------------------------------- */
#define TOUCH_SUM_CNT_TS_SUM_CNT_Pos          0                                                       /*!< TOUCH SUM_CNT: TS_SUM_CNT Position      */
#define TOUCH_SUM_CNT_TS_SUM_CNT_Msk          (0x000000ffUL << TOUCH_SUM_CNT_TS_SUM_CNT_Pos)          /*!< TOUCH SUM_CNT: TS_SUM_CNT Mask          */

/* --------------------------------  TOUCH_CH_SEL  -------------------------------- */
#define TOUCH_CH_SEL_CH0_SEL_Pos              0                                                       /*!< TOUCH CH_SEL: CH0_SEL Position          */
#define TOUCH_CH_SEL_CH0_SEL_Msk              (0x01UL << TOUCH_CH_SEL_CH0_SEL_Pos)                    /*!< TOUCH CH_SEL: CH0_SEL Mask              */
#define TOUCH_CH_SEL_CH1_SEL_Pos              1                                                       /*!< TOUCH CH_SEL: CH1_SEL Position          */
#define TOUCH_CH_SEL_CH1_SEL_Msk              (0x01UL << TOUCH_CH_SEL_CH1_SEL_Pos)                    /*!< TOUCH CH_SEL: CH1_SEL Mask              */
#define TOUCH_CH_SEL_CH2_SEL_Pos              2                                                       /*!< TOUCH CH_SEL: CH2_SEL Position          */
#define TOUCH_CH_SEL_CH2_SEL_Msk              (0x01UL << TOUCH_CH_SEL_CH2_SEL_Pos)                    /*!< TOUCH CH_SEL: CH2_SEL Mask              */
#define TOUCH_CH_SEL_CH3_SEL_Pos              3                                                       /*!< TOUCH CH_SEL: CH3_SEL Position          */
#define TOUCH_CH_SEL_CH3_SEL_Msk              (0x01UL << TOUCH_CH_SEL_CH3_SEL_Pos)                    /*!< TOUCH CH_SEL: CH3_SEL Mask              */
#define TOUCH_CH_SEL_CH4_SEL_Pos              4                                                       /*!< TOUCH CH_SEL: CH4_SEL Position          */
#define TOUCH_CH_SEL_CH4_SEL_Msk              (0x01UL << TOUCH_CH_SEL_CH4_SEL_Pos)                    /*!< TOUCH CH_SEL: CH4_SEL Mask              */
#define TOUCH_CH_SEL_CH5_SEL_Pos              5                                                       /*!< TOUCH CH_SEL: CH5_SEL Position          */
#define TOUCH_CH_SEL_CH5_SEL_Msk              (0x01UL << TOUCH_CH_SEL_CH5_SEL_Pos)                    /*!< TOUCH CH_SEL: CH5_SEL Mask              */
#define TOUCH_CH_SEL_CH6_SEL_Pos              6                                                       /*!< TOUCH CH_SEL: CH6_SEL Position          */
#define TOUCH_CH_SEL_CH6_SEL_Msk              (0x01UL << TOUCH_CH_SEL_CH6_SEL_Pos)                    /*!< TOUCH CH_SEL: CH6_SEL Mask              */
#define TOUCH_CH_SEL_CH7_SEL_Pos              7                                                       /*!< TOUCH CH_SEL: CH7_SEL Position          */
#define TOUCH_CH_SEL_CH7_SEL_Msk              (0x01UL << TOUCH_CH_SEL_CH7_SEL_Pos)                    /*!< TOUCH CH_SEL: CH7_SEL Mask              */
#define TOUCH_CH_SEL_CH8_SEL_Pos              8                                                       /*!< TOUCH CH_SEL: CH8_SEL Position          */
#define TOUCH_CH_SEL_CH8_SEL_Msk              (0x01UL << TOUCH_CH_SEL_CH8_SEL_Pos)                    /*!< TOUCH CH_SEL: CH8_SEL Mask              */
#define TOUCH_CH_SEL_CH9_SEL_Pos              9                                                       /*!< TOUCH CH_SEL: CH9_SEL Position          */
#define TOUCH_CH_SEL_CH9_SEL_Msk              (0x01UL << TOUCH_CH_SEL_CH9_SEL_Pos)                    /*!< TOUCH CH_SEL: CH9_SEL Mask              */
#define TOUCH_CH_SEL_CH10_SEL_Pos             10                                                      /*!< TOUCH CH_SEL: CH10_SEL Position         */
#define TOUCH_CH_SEL_CH10_SEL_Msk             (0x01UL << TOUCH_CH_SEL_CH10_SEL_Pos)                   /*!< TOUCH CH_SEL: CH10_SEL Mask             */
#define TOUCH_CH_SEL_CH11_SEL_Pos             11                                                      /*!< TOUCH CH_SEL: CH11_SEL Position         */
#define TOUCH_CH_SEL_CH11_SEL_Msk             (0x01UL << TOUCH_CH_SEL_CH11_SEL_Pos)                   /*!< TOUCH CH_SEL: CH11_SEL Mask             */
#define TOUCH_CH_SEL_CH12_SEL_Pos             12                                                      /*!< TOUCH CH_SEL: CH12_SEL Position         */
#define TOUCH_CH_SEL_CH12_SEL_Msk             (0x01UL << TOUCH_CH_SEL_CH12_SEL_Pos)                   /*!< TOUCH CH_SEL: CH12_SEL Mask             */
#define TOUCH_CH_SEL_CH13_SEL_Pos             13                                                      /*!< TOUCH CH_SEL: CH13_SEL Position         */
#define TOUCH_CH_SEL_CH13_SEL_Msk             (0x01UL << TOUCH_CH_SEL_CH13_SEL_Pos)                   /*!< TOUCH CH_SEL: CH13_SEL Mask             */
#define TOUCH_CH_SEL_CH14_SEL_Pos             14                                                      /*!< TOUCH CH_SEL: CH14_SEL Position         */
#define TOUCH_CH_SEL_CH14_SEL_Msk             (0x01UL << TOUCH_CH_SEL_CH14_SEL_Pos)                   /*!< TOUCH CH_SEL: CH14_SEL Mask             */
#define TOUCH_CH_SEL_CH15_SEL_Pos             15                                                      /*!< TOUCH CH_SEL: CH15_SEL Position         */
#define TOUCH_CH_SEL_CH15_SEL_Msk             (0x01UL << TOUCH_CH_SEL_CH15_SEL_Pos)                   /*!< TOUCH CH_SEL: CH15_SEL Mask             */
#define TOUCH_CH_SEL_CH16_SEL_Pos             16                                                      /*!< TOUCH CH_SEL: CH16_SEL Position         */
#define TOUCH_CH_SEL_CH16_SEL_Msk             (0x01UL << TOUCH_CH_SEL_CH16_SEL_Pos)                   /*!< TOUCH CH_SEL: CH16_SEL Mask             */
#define TOUCH_CH_SEL_CH17_SEL_Pos             17                                                      /*!< TOUCH CH_SEL: CH17_SEL Position         */
#define TOUCH_CH_SEL_CH17_SEL_Msk             (0x01UL << TOUCH_CH_SEL_CH17_SEL_Pos)                   /*!< TOUCH CH_SEL: CH17_SEL Mask             */
#define TOUCH_CH_SEL_CH18_SEL_Pos             18                                                      /*!< TOUCH CH_SEL: CH18_SEL Position         */
#define TOUCH_CH_SEL_CH18_SEL_Msk             (0x01UL << TOUCH_CH_SEL_CH18_SEL_Pos)                   /*!< TOUCH CH_SEL: CH18_SEL Mask             */
#define TOUCH_CH_SEL_CH19_SEL_Pos             19                                                      /*!< TOUCH CH_SEL: CH19_SEL Position         */
#define TOUCH_CH_SEL_CH19_SEL_Msk             (0x01UL << TOUCH_CH_SEL_CH19_SEL_Pos)                   /*!< TOUCH CH_SEL: CH19_SEL Mask             */
#define TOUCH_CH_SEL_CH20_SEL_Pos             20                                                      /*!< TOUCH CH_SEL: CH20_SEL Position         */
#define TOUCH_CH_SEL_CH20_SEL_Msk             (0x01UL << TOUCH_CH_SEL_CH20_SEL_Pos)                   /*!< TOUCH CH_SEL: CH20_SEL Mask             */
#define TOUCH_CH_SEL_CH21_SEL_Pos             21                                                      /*!< TOUCH CH_SEL: CH21_SEL Position         */
#define TOUCH_CH_SEL_CH21_SEL_Msk             (0x01UL << TOUCH_CH_SEL_CH21_SEL_Pos)                   /*!< TOUCH CH_SEL: CH21_SEL Mask             */
#define TOUCH_CH_SEL_CH22_SEL_Pos             22                                                      /*!< TOUCH CH_SEL: CH22_SEL Position         */
#define TOUCH_CH_SEL_CH22_SEL_Msk             (0x01UL << TOUCH_CH_SEL_CH22_SEL_Pos)                   /*!< TOUCH CH_SEL: CH22_SEL Mask             */
#define TOUCH_CH_SEL_CH23_SEL_Pos             23                                                      /*!< TOUCH CH_SEL: CH23_SEL Position         */
#define TOUCH_CH_SEL_CH23_SEL_Msk             (0x01UL << TOUCH_CH_SEL_CH23_SEL_Pos)                   /*!< TOUCH CH_SEL: CH23_SEL Mask             */

/* --------------------------------  TOUCH_SLP_CR  -------------------------------- */
#define TOUCH_SLP_CR_SLP_R_Pos                0                                                       /*!< TOUCH SLP_CR: SLP_R Position            */
#define TOUCH_SLP_CR_SLP_R_Msk                (0x0fUL << TOUCH_SLP_CR_SLP_R_Pos)                      /*!< TOUCH SLP_CR: SLP_R Mask                */
#define TOUCH_SLP_CR_SLP_C_Pos                4                                                       /*!< TOUCH SLP_CR: SLP_C Position            */
#define TOUCH_SLP_CR_SLP_C_Msk                (0x07UL << TOUCH_SLP_CR_SLP_C_Pos)                      /*!< TOUCH SLP_CR: SLP_C Mask                */

/* ------------------------------  TOUCH_ADC_CH_SEL  ------------------------------ */
#define TOUCH_ADC_CH_SEL_CH0_SEL_Pos          0                                                       /*!< TOUCH ADC_CH_SEL: CH0_SEL Position      */
#define TOUCH_ADC_CH_SEL_CH0_SEL_Msk          (0x01UL << TOUCH_ADC_CH_SEL_CH0_SEL_Pos)                /*!< TOUCH ADC_CH_SEL: CH0_SEL Mask          */
#define TOUCH_ADC_CH_SEL_CH1_SEL_Pos          1                                                       /*!< TOUCH ADC_CH_SEL: CH1_SEL Position      */
#define TOUCH_ADC_CH_SEL_CH1_SEL_Msk          (0x01UL << TOUCH_ADC_CH_SEL_CH1_SEL_Pos)                /*!< TOUCH ADC_CH_SEL: CH1_SEL Mask          */
#define TOUCH_ADC_CH_SEL_CH2_SEL_Pos          2                                                       /*!< TOUCH ADC_CH_SEL: CH2_SEL Position      */
#define TOUCH_ADC_CH_SEL_CH2_SEL_Msk          (0x01UL << TOUCH_ADC_CH_SEL_CH2_SEL_Pos)                /*!< TOUCH ADC_CH_SEL: CH2_SEL Mask          */
#define TOUCH_ADC_CH_SEL_CH3_SEL_Pos          3                                                       /*!< TOUCH ADC_CH_SEL: CH3_SEL Position      */
#define TOUCH_ADC_CH_SEL_CH3_SEL_Msk          (0x01UL << TOUCH_ADC_CH_SEL_CH3_SEL_Pos)                /*!< TOUCH ADC_CH_SEL: CH3_SEL Mask          */
#define TOUCH_ADC_CH_SEL_CH4_SEL_Pos          4                                                       /*!< TOUCH ADC_CH_SEL: CH4_SEL Position      */
#define TOUCH_ADC_CH_SEL_CH4_SEL_Msk          (0x01UL << TOUCH_ADC_CH_SEL_CH4_SEL_Pos)                /*!< TOUCH ADC_CH_SEL: CH4_SEL Mask          */
#define TOUCH_ADC_CH_SEL_CH5_SEL_Pos          5                                                       /*!< TOUCH ADC_CH_SEL: CH5_SEL Position      */
#define TOUCH_ADC_CH_SEL_CH5_SEL_Msk          (0x01UL << TOUCH_ADC_CH_SEL_CH5_SEL_Pos)                /*!< TOUCH ADC_CH_SEL: CH5_SEL Mask          */
#define TOUCH_ADC_CH_SEL_CH6_SEL_Pos          6                                                       /*!< TOUCH ADC_CH_SEL: CH6_SEL Position      */
#define TOUCH_ADC_CH_SEL_CH6_SEL_Msk          (0x01UL << TOUCH_ADC_CH_SEL_CH6_SEL_Pos)                /*!< TOUCH ADC_CH_SEL: CH6_SEL Mask          */
#define TOUCH_ADC_CH_SEL_CH7_SEL_Pos          7                                                       /*!< TOUCH ADC_CH_SEL: CH7_SEL Position      */
#define TOUCH_ADC_CH_SEL_CH7_SEL_Msk          (0x01UL << TOUCH_ADC_CH_SEL_CH7_SEL_Pos)                /*!< TOUCH ADC_CH_SEL: CH7_SEL Mask          */
#define TOUCH_ADC_CH_SEL_CH8_SEL_Pos          8                                                       /*!< TOUCH ADC_CH_SEL: CH8_SEL Position      */
#define TOUCH_ADC_CH_SEL_CH8_SEL_Msk          (0x01UL << TOUCH_ADC_CH_SEL_CH8_SEL_Pos)                /*!< TOUCH ADC_CH_SEL: CH8_SEL Mask          */
#define TOUCH_ADC_CH_SEL_CH9_SEL_Pos          9                                                       /*!< TOUCH ADC_CH_SEL: CH9_SEL Position      */
#define TOUCH_ADC_CH_SEL_CH9_SEL_Msk          (0x01UL << TOUCH_ADC_CH_SEL_CH9_SEL_Pos)                /*!< TOUCH ADC_CH_SEL: CH9_SEL Mask          */
#define TOUCH_ADC_CH_SEL_CH10_SEL_Pos         10                                                      /*!< TOUCH ADC_CH_SEL: CH10_SEL Position     */
#define TOUCH_ADC_CH_SEL_CH10_SEL_Msk         (0x01UL << TOUCH_ADC_CH_SEL_CH10_SEL_Pos)               /*!< TOUCH ADC_CH_SEL: CH10_SEL Mask         */
#define TOUCH_ADC_CH_SEL_CH11_SEL_Pos         11                                                      /*!< TOUCH ADC_CH_SEL: CH11_SEL Position     */
#define TOUCH_ADC_CH_SEL_CH11_SEL_Msk         (0x01UL << TOUCH_ADC_CH_SEL_CH11_SEL_Pos)               /*!< TOUCH ADC_CH_SEL: CH11_SEL Mask         */
#define TOUCH_ADC_CH_SEL_CH12_SEL_Pos         12                                                      /*!< TOUCH ADC_CH_SEL: CH12_SEL Position     */
#define TOUCH_ADC_CH_SEL_CH12_SEL_Msk         (0x01UL << TOUCH_ADC_CH_SEL_CH12_SEL_Pos)               /*!< TOUCH ADC_CH_SEL: CH12_SEL Mask         */
#define TOUCH_ADC_CH_SEL_CH13_SEL_Pos         13                                                      /*!< TOUCH ADC_CH_SEL: CH13_SEL Position     */
#define TOUCH_ADC_CH_SEL_CH13_SEL_Msk         (0x01UL << TOUCH_ADC_CH_SEL_CH13_SEL_Pos)               /*!< TOUCH ADC_CH_SEL: CH13_SEL Mask         */
#define TOUCH_ADC_CH_SEL_CH14_SEL_Pos         14                                                      /*!< TOUCH ADC_CH_SEL: CH14_SEL Position     */
#define TOUCH_ADC_CH_SEL_CH14_SEL_Msk         (0x01UL << TOUCH_ADC_CH_SEL_CH14_SEL_Pos)               /*!< TOUCH ADC_CH_SEL: CH14_SEL Mask         */
#define TOUCH_ADC_CH_SEL_CH15_SEL_Pos         15                                                      /*!< TOUCH ADC_CH_SEL: CH15_SEL Position     */
#define TOUCH_ADC_CH_SEL_CH15_SEL_Msk         (0x01UL << TOUCH_ADC_CH_SEL_CH15_SEL_Pos)               /*!< TOUCH ADC_CH_SEL: CH15_SEL Mask         */
#define TOUCH_ADC_CH_SEL_CH16_SEL_Pos         16                                                      /*!< TOUCH ADC_CH_SEL: CH16_SEL Position     */
#define TOUCH_ADC_CH_SEL_CH16_SEL_Msk         (0x01UL << TOUCH_ADC_CH_SEL_CH16_SEL_Pos)               /*!< TOUCH ADC_CH_SEL: CH16_SEL Mask         */
#define TOUCH_ADC_CH_SEL_CH17_SEL_Pos         17                                                      /*!< TOUCH ADC_CH_SEL: CH17_SEL Position     */
#define TOUCH_ADC_CH_SEL_CH17_SEL_Msk         (0x01UL << TOUCH_ADC_CH_SEL_CH17_SEL_Pos)               /*!< TOUCH ADC_CH_SEL: CH17_SEL Mask         */
#define TOUCH_ADC_CH_SEL_CH18_SEL_Pos         18                                                      /*!< TOUCH ADC_CH_SEL: CH18_SEL Position     */
#define TOUCH_ADC_CH_SEL_CH18_SEL_Msk         (0x01UL << TOUCH_ADC_CH_SEL_CH18_SEL_Pos)               /*!< TOUCH ADC_CH_SEL: CH18_SEL Mask         */
#define TOUCH_ADC_CH_SEL_CH19_SEL_Pos         19                                                      /*!< TOUCH ADC_CH_SEL: CH19_SEL Position     */
#define TOUCH_ADC_CH_SEL_CH19_SEL_Msk         (0x01UL << TOUCH_ADC_CH_SEL_CH19_SEL_Pos)               /*!< TOUCH ADC_CH_SEL: CH19_SEL Mask         */
#define TOUCH_ADC_CH_SEL_CH20_SEL_Pos         20                                                      /*!< TOUCH ADC_CH_SEL: CH20_SEL Position     */
#define TOUCH_ADC_CH_SEL_CH20_SEL_Msk         (0x01UL << TOUCH_ADC_CH_SEL_CH20_SEL_Pos)               /*!< TOUCH ADC_CH_SEL: CH20_SEL Mask         */
#define TOUCH_ADC_CH_SEL_CH21_SEL_Pos         21                                                      /*!< TOUCH ADC_CH_SEL: CH21_SEL Position     */
#define TOUCH_ADC_CH_SEL_CH21_SEL_Msk         (0x01UL << TOUCH_ADC_CH_SEL_CH21_SEL_Pos)               /*!< TOUCH ADC_CH_SEL: CH21_SEL Mask         */
#define TOUCH_ADC_CH_SEL_CH22_SEL_Pos         22                                                      /*!< TOUCH ADC_CH_SEL: CH22_SEL Position     */
#define TOUCH_ADC_CH_SEL_CH22_SEL_Msk         (0x01UL << TOUCH_ADC_CH_SEL_CH22_SEL_Pos)               /*!< TOUCH ADC_CH_SEL: CH22_SEL Mask         */
#define TOUCH_ADC_CH_SEL_CH23_SEL_Pos         23                                                      /*!< TOUCH ADC_CH_SEL: CH23_SEL Position     */
#define TOUCH_ADC_CH_SEL_CH23_SEL_Msk         (0x01UL << TOUCH_ADC_CH_SEL_CH23_SEL_Pos)               /*!< TOUCH ADC_CH_SEL: CH23_SEL Mask         */

/* -------------------------------  TOUCH_INTEG_CNT  ------------------------------ */
#define TOUCH_INTEG_CNT_TS_INTEG_CNT_Pos      0                                                       /*!< TOUCH INTEG_CNT: TS_INTEG_CNT Position  */
#define TOUCH_INTEG_CNT_TS_INTEG_CNT_Msk      (0x000000ffUL << TOUCH_INTEG_CNT_TS_INTEG_CNT_Pos)      /*!< TOUCH INTEG_CNT: TS_INTEG_CNT Mask      */

/* -------------------------------  TOUCH_FREQ_NUM  ------------------------------- */
#define TOUCH_FREQ_NUM_TS_FREQ_NUM_Pos        0                                                       /*!< TOUCH FREQ_NUM: TS_FREQ_NUM Position    */
#define TOUCH_FREQ_NUM_TS_FREQ_NUM_Msk        (0x000000ffUL << TOUCH_FREQ_NUM_TS_FREQ_NUM_Pos)        /*!< TOUCH FREQ_NUM: TS_FREQ_NUM Mask        */

/* -------------------------------  TOUCH_FREQ_DEL  ------------------------------- */
#define TOUCH_FREQ_DEL_TS_FREQ_DEL_Pos        0                                                       /*!< TOUCH FREQ_DEL: TS_FREQ_DEL Position    */
#define TOUCH_FREQ_DEL_TS_FREQ_DEL_Msk        (0x000000ffUL << TOUCH_FREQ_DEL_TS_FREQ_DEL_Pos)        /*!< TOUCH FREQ_DEL: TS_FREQ_DEL Mask        */

/* --------------------------------  TOUCH_CLK_CFG  ------------------------------- */
#define TOUCH_CLK_CFG_TSCLKDIV_Pos            0                                                       /*!< TOUCH CLK_CFG: TSCLKDIV Position        */
#define TOUCH_CLK_CFG_TSCLKDIV_Msk            (0x07UL << TOUCH_CLK_CFG_TSCLKDIV_Pos)                  /*!< TOUCH CLK_CFG: TSCLKDIV Mask            */
#define TOUCH_CLK_CFG_TSCLKOE_Pos             3                                                       /*!< TOUCH CLK_CFG: TSCLKOE Position         */
#define TOUCH_CLK_CFG_TSCLKOE_Msk             (0x01UL << TOUCH_CLK_CFG_TSCLKOE_Pos)                   /*!< TOUCH CLK_CFG: TSCLKOE Mask             */
#define TOUCH_CLK_CFG_ACLKDIV_Pos             4                                                       /*!< TOUCH CLK_CFG: ACLKDIV Position         */
#define TOUCH_CLK_CFG_ACLKDIV_Msk             (0x07UL << TOUCH_CLK_CFG_ACLKDIV_Pos)                   /*!< TOUCH CLK_CFG: ACLKDIV Mask             */
#define TOUCH_CLK_CFG_ACLKSEL_Pos             7                                                       /*!< TOUCH CLK_CFG: ACLKSEL Position         */
#define TOUCH_CLK_CFG_ACLKSEL_Msk             (0x01UL << TOUCH_CLK_CFG_ACLKSEL_Pos)                   /*!< TOUCH CLK_CFG: ACLKSEL Mask             */

/* -------------------------------  TOUCH_TRIM_OSC  ------------------------------- */
#define TOUCH_TRIM_OSC_TRIM_OSC_Pos           0                                                       /*!< TOUCH TRIM_OSC: TRIM_OSC Position       */
#define TOUCH_TRIM_OSC_TRIM_OSC_Msk           (0x000000ffUL << TOUCH_TRIM_OSC_TRIM_OSC_Pos)           /*!< TOUCH TRIM_OSC: TRIM_OSC Mask           */

/* ------------------------------  TOUCH_TRIM_A_OSC  ------------------------------ */
#define TOUCH_TRIM_A_OSC_TRIM_A_OSC_Pos       0                                                       /*!< TOUCH TRIM_A_OSC: TRIM_A_OSC Position   */
#define TOUCH_TRIM_A_OSC_TRIM_A_OSC_Msk       (0x000000ffUL << TOUCH_TRIM_A_OSC_TRIM_A_OSC_Pos)       /*!< TOUCH TRIM_A_OSC: TRIM_A_OSC Mask       */

/* ----------------------------------  TOUCH_SCI  --------------------------------- */
#define TOUCH_SCI_SCI_Pos                     0                                                       /*!< TOUCH SCI: SCI Position                 */
#define TOUCH_SCI_SCI_Msk                     (0x07UL << TOUCH_SCI_SCI_Pos)                           /*!< TOUCH SCI: SCI Mask                     */
#define TOUCH_SCI_IBIAS_TRIM_Pos              4                                                       /*!< TOUCH SCI: IBIAS_TRIM Position          */
#define TOUCH_SCI_IBIAS_TRIM_Msk              (0x0fUL << TOUCH_SCI_IBIAS_TRIM_Pos)                    /*!< TOUCH SCI: IBIAS_TRIM Mask              */

/* ----------------------------------  TOUCH_SCC  --------------------------------- */
#define TOUCH_SCC_SCC_Pos                     0                                                       /*!< TOUCH SCC: SCC Position                 */
#define TOUCH_SCC_SCC_Msk                     (0x07UL << TOUCH_SCC_SCC_Pos)                           /*!< TOUCH SCC: SCC Mask                     */

/* ---------------------------------  TOUCH_SVREF  -------------------------------- */
#define TOUCH_SVREF_SVREF_Pos                 0                                                       /*!< TOUCH SVREF: SVREF Position             */
#define TOUCH_SVREF_SVREF_Msk                 (0x0fUL << TOUCH_SVREF_SVREF_Pos)                       /*!< TOUCH SVREF: SVREF Mask                 */

/* ----------------------------------  TOUCH_TAR  --------------------------------- */
#define TOUCH_TAR_TAR_Pos                     0                                                       /*!< TOUCH TAR: TAR Position                 */
#define TOUCH_TAR_TAR_Msk                     (0x000000ffUL << TOUCH_TAR_TAR_Pos)                     /*!< TOUCH TAR: TAR Mask                     */

/* ---------------------------------  TOUCH_TRST  --------------------------------- */
#define TOUCH_TRST_TRST_Pos                   0                                                       /*!< TOUCH TRST: TRST Position               */
#define TOUCH_TRST_TRST_Msk                   (0x000000ffUL << TOUCH_TRST_TRST_Pos)                   /*!< TOUCH TRST: TRST Mask                   */

/* ---------------------------------  TOUCH_TDRV  --------------------------------- */
#define TOUCH_TDRV_TDRV_Pos                   0                                                       /*!< TOUCH TDRV: TDRV Position               */
#define TOUCH_TDRV_TDRV_Msk                   (0x000000ffUL << TOUCH_TDRV_TDRV_Pos)                   /*!< TOUCH TDRV: TDRV Mask                   */

/* ---------------------------------  TOUCH_TINT  --------------------------------- */
#define TOUCH_TINT_TINT_Pos                   0                                                       /*!< TOUCH TINT: TINT Position               */
#define TOUCH_TINT_TINT_Msk                   (0x000000ffUL << TOUCH_TINT_TINT_Pos)                   /*!< TOUCH TINT: TINT Mask                   */

/* ----------------------------------  TOUCH_TD  ---------------------------------- */
#define TOUCH_TD_TD_Pos                       0                                                       /*!< TOUCH TD: TD Position                   */
#define TOUCH_TD_TD_Msk                       (0x000000ffUL << TOUCH_TD_TD_Pos)                       /*!< TOUCH TD: TD Mask                       */

/* ----------------------------------  TOUCH_TWR  --------------------------------- */
#define TOUCH_TWR_TWR_Pos                     0                                                       /*!< TOUCH TWR: TWR Position                 */
#define TOUCH_TWR_TWR_Msk                     (0x000000ffUL << TOUCH_TWR_TWR_Pos)                     /*!< TOUCH TWR: TWR Mask                     */

/* ---------------------------------  TOUCH_TLED  --------------------------------- */
#define TOUCH_TLED_TLED_Pos                   0                                                       /*!< TOUCH TLED: TLED Position               */
#define TOUCH_TLED_TLED_Msk                   (0x000000ffUL << TOUCH_TLED_TLED_Pos)                   /*!< TOUCH TLED: TLED Mask                   */


/* ================================================================================ */
/* ================          struct 'LED' Position & Mask          ================ */
/* ================================================================================ */


/* ----------------------------------  LED_COMOE  --------------------------------- */
#define LED_COMOE_COMOE1_Pos                  0                                                       /*!< LED COMOE: COMOE1 Position              */
#define LED_COMOE_COMOE1_Msk                  (0x000000ffUL << LED_COMOE_COMOE1_Pos)                  /*!< LED COMOE: COMOE1 Mask                  */
#define LED_COMOE_COMOE2_Pos                  8                                                       /*!< LED COMOE: COMOE2 Position              */
#define LED_COMOE_COMOE2_Msk                  (0x000000ffUL << LED_COMOE_COMOE2_Pos)                  /*!< LED COMOE: COMOE2 Mask                  */

/* ----------------------------------  LED_SEGOE  --------------------------------- */
#define LED_SEGOE_SEGOE1_Pos                  0                                                       /*!< LED SEGOE: SEGOE1 Position              */
#define LED_SEGOE_SEGOE1_Msk                  (0x000000ffUL << LED_SEGOE_SEGOE1_Pos)                  /*!< LED SEGOE: SEGOE1 Mask                  */
#define LED_SEGOE_SEGOE2_Pos                  8                                                       /*!< LED SEGOE: SEGOE2 Position              */
#define LED_SEGOE_SEGOE2_Msk                  (0x07UL << LED_SEGOE_SEGOE2_Pos)                        /*!< LED SEGOE: SEGOE2 Mask                  */

/* ----------------------------------  LED_PRESD  --------------------------------- */
#define LED_PRESD_PRESD_Pos                   0                                                       /*!< LED PRESD: PRESD Position               */
#define LED_PRESD_PRESD_Msk                   (0x0000ffffUL << LED_PRESD_PRESD_Pos)                   /*!< LED PRESD: PRESD Mask                   */

/* ----------------------------------  LED_COMER  --------------------------------- */
#define LED_COMER_COM0_Pos                    0                                                       /*!< LED COMER: COM0 Position                */
#define LED_COMER_COM0_Msk                    (0x01UL << LED_COMER_COM0_Pos)                          /*!< LED COMER: COM0 Mask                    */
#define LED_COMER_COM1_Pos                    1                                                       /*!< LED COMER: COM1 Position                */
#define LED_COMER_COM1_Msk                    (0x01UL << LED_COMER_COM1_Pos)                          /*!< LED COMER: COM1 Mask                    */
#define LED_COMER_COM2_Pos                    2                                                       /*!< LED COMER: COM2 Position                */
#define LED_COMER_COM2_Msk                    (0x01UL << LED_COMER_COM2_Pos)                          /*!< LED COMER: COM2 Mask                    */
#define LED_COMER_COM3_Pos                    3                                                       /*!< LED COMER: COM3 Position                */
#define LED_COMER_COM3_Msk                    (0x01UL << LED_COMER_COM3_Pos)                          /*!< LED COMER: COM3 Mask                    */
#define LED_COMER_COM4_Pos                    4                                                       /*!< LED COMER: COM4 Position                */
#define LED_COMER_COM4_Msk                    (0x01UL << LED_COMER_COM4_Pos)                          /*!< LED COMER: COM4 Mask                    */
#define LED_COMER_COM5_Pos                    5                                                       /*!< LED COMER: COM5 Position                */
#define LED_COMER_COM5_Msk                    (0x01UL << LED_COMER_COM5_Pos)                          /*!< LED COMER: COM5 Mask                    */
#define LED_COMER_COM6_Pos                    6                                                       /*!< LED COMER: COM6 Position                */
#define LED_COMER_COM6_Msk                    (0x01UL << LED_COMER_COM6_Pos)                          /*!< LED COMER: COM6 Mask                    */
#define LED_COMER_COM7_Pos                    7                                                       /*!< LED COMER: COM7 Position                */
#define LED_COMER_COM7_Msk                    (0x01UL << LED_COMER_COM7_Pos)                          /*!< LED COMER: COM7 Mask                    */
#define LED_COMER_COM8_Pos                    8                                                       /*!< LED COMER: COM8 Position                */
#define LED_COMER_COM8_Msk                    (0x01UL << LED_COMER_COM8_Pos)                          /*!< LED COMER: COM8 Mask                    */
#define LED_COMER_COM9_Pos                    9                                                       /*!< LED COMER: COM9 Position                */
#define LED_COMER_COM9_Msk                    (0x01UL << LED_COMER_COM9_Pos)                          /*!< LED COMER: COM9 Mask                    */
#define LED_COMER_COM10_Pos                   10                                                      /*!< LED COMER: COM10 Position               */
#define LED_COMER_COM10_Msk                   (0x01UL << LED_COMER_COM10_Pos)                         /*!< LED COMER: COM10 Mask                   */
#define LED_COMER_COM11_Pos                   11                                                      /*!< LED COMER: COM11 Position               */
#define LED_COMER_COM11_Msk                   (0x01UL << LED_COMER_COM11_Pos)                         /*!< LED COMER: COM11 Mask                   */
#define LED_COMER_COM12_Pos                   12                                                      /*!< LED COMER: COM12 Position               */
#define LED_COMER_COM12_Msk                   (0x01UL << LED_COMER_COM12_Pos)                         /*!< LED COMER: COM12 Mask                   */
#define LED_COMER_COM13_Pos                   13                                                      /*!< LED COMER: COM13 Position               */
#define LED_COMER_COM13_Msk                   (0x01UL << LED_COMER_COM13_Pos)                         /*!< LED COMER: COM13 Mask                   */
#define LED_COMER_COM14_Pos                   14                                                      /*!< LED COMER: COM14 Position               */
#define LED_COMER_COM14_Msk                   (0x01UL << LED_COMER_COM14_Pos)                         /*!< LED COMER: COM14 Mask                   */
#define LED_COMER_COM15_Pos                   15                                                      /*!< LED COMER: COM15 Position               */
#define LED_COMER_COM15_Msk                   (0x01UL << LED_COMER_COM15_Pos)                         /*!< LED COMER: COM15 Mask                   */

/* ---------------------------------  LED_COMPWID  -------------------------------- */
#define LED_COMPWID_COMPWID_Pos               0                                                       /*!< LED COMPWID: COMPWID Position           */
#define LED_COMPWID_COMPWID_Msk               (0x000000ffUL << LED_COMPWID_COMPWID_Pos)               /*!< LED COMPWID: COMPWID Mask               */

/* ----------------------------------  LED_DIMM1  --------------------------------- */
#define LED_DIMM1_COMDIMM0_Pos                0                                                       /*!< LED DIMM1: COMDIMM0 Position            */
#define LED_DIMM1_COMDIMM0_Msk                (0x000000ffUL << LED_DIMM1_COMDIMM0_Pos)                /*!< LED DIMM1: COMDIMM0 Mask                */
#define LED_DIMM1_COMDIMM1_Pos                8                                                       /*!< LED DIMM1: COMDIMM1 Position            */
#define LED_DIMM1_COMDIMM1_Msk                (0x000000ffUL << LED_DIMM1_COMDIMM1_Pos)                /*!< LED DIMM1: COMDIMM1 Mask                */
#define LED_DIMM1_COMDIMM2_Pos                16                                                      /*!< LED DIMM1: COMDIMM2 Position            */
#define LED_DIMM1_COMDIMM2_Msk                (0x000000ffUL << LED_DIMM1_COMDIMM2_Pos)                /*!< LED DIMM1: COMDIMM2 Mask                */
#define LED_DIMM1_COMDIMM3_Pos                24                                                      /*!< LED DIMM1: COMDIMM3 Position            */
#define LED_DIMM1_COMDIMM3_Msk                (0x000000ffUL << LED_DIMM1_COMDIMM3_Pos)                /*!< LED DIMM1: COMDIMM3 Mask                */

/* ----------------------------------  LED_DIMM2  --------------------------------- */
#define LED_DIMM2_COMDIMM4_Pos                0                                                       /*!< LED DIMM2: COMDIMM4 Position            */
#define LED_DIMM2_COMDIMM4_Msk                (0x000000ffUL << LED_DIMM2_COMDIMM4_Pos)                /*!< LED DIMM2: COMDIMM4 Mask                */
#define LED_DIMM2_COMDIMM5_Pos                8                                                       /*!< LED DIMM2: COMDIMM5 Position            */
#define LED_DIMM2_COMDIMM5_Msk                (0x000000ffUL << LED_DIMM2_COMDIMM5_Pos)                /*!< LED DIMM2: COMDIMM5 Mask                */
#define LED_DIMM2_COMDIMM6_Pos                16                                                      /*!< LED DIMM2: COMDIMM6 Position            */
#define LED_DIMM2_COMDIMM6_Msk                (0x000000ffUL << LED_DIMM2_COMDIMM6_Pos)                /*!< LED DIMM2: COMDIMM6 Mask                */
#define LED_DIMM2_COMDIMM7_Pos                24                                                      /*!< LED DIMM2: COMDIMM7 Position            */
#define LED_DIMM2_COMDIMM7_Msk                (0x000000ffUL << LED_DIMM2_COMDIMM7_Pos)                /*!< LED DIMM2: COMDIMM7 Mask                */

/* ----------------------------------  LED_DIMM3  --------------------------------- */
#define LED_DIMM3_COMDIMM8_Pos                0                                                       /*!< LED DIMM3: COMDIMM8 Position            */
#define LED_DIMM3_COMDIMM8_Msk                (0x000000ffUL << LED_DIMM3_COMDIMM8_Pos)                /*!< LED DIMM3: COMDIMM8 Mask                */
#define LED_DIMM3_COMDIMM9_Pos                8                                                       /*!< LED DIMM3: COMDIMM9 Position            */
#define LED_DIMM3_COMDIMM9_Msk                (0x000000ffUL << LED_DIMM3_COMDIMM9_Pos)                /*!< LED DIMM3: COMDIMM9 Mask                */
#define LED_DIMM3_COMDIMM10_Pos               16                                                      /*!< LED DIMM3: COMDIMM10 Position           */
#define LED_DIMM3_COMDIMM10_Msk               (0x000000ffUL << LED_DIMM3_COMDIMM10_Pos)               /*!< LED DIMM3: COMDIMM10 Mask               */
#define LED_DIMM3_COMDIMM11_Pos               24                                                      /*!< LED DIMM3: COMDIMM11 Position           */
#define LED_DIMM3_COMDIMM11_Msk               (0x000000ffUL << LED_DIMM3_COMDIMM11_Pos)               /*!< LED DIMM3: COMDIMM11 Mask               */

/* ----------------------------------  LED_DIMM4  --------------------------------- */
#define LED_DIMM4_COMDIMM12_Pos               0                                                       /*!< LED DIMM4: COMDIMM12 Position           */
#define LED_DIMM4_COMDIMM12_Msk               (0x000000ffUL << LED_DIMM4_COMDIMM12_Pos)               /*!< LED DIMM4: COMDIMM12 Mask               */
#define LED_DIMM4_COMDIMM13_Pos               8                                                       /*!< LED DIMM4: COMDIMM13 Position           */
#define LED_DIMM4_COMDIMM13_Msk               (0x000000ffUL << LED_DIMM4_COMDIMM13_Pos)               /*!< LED DIMM4: COMDIMM13 Mask               */
#define LED_DIMM4_COMDIMM14_Pos               16                                                      /*!< LED DIMM4: COMDIMM14 Position           */
#define LED_DIMM4_COMDIMM14_Msk               (0x000000ffUL << LED_DIMM4_COMDIMM14_Pos)               /*!< LED DIMM4: COMDIMM14 Mask               */
#define LED_DIMM4_COMDIMM15_Pos               24                                                      /*!< LED DIMM4: COMDIMM15 Position           */
#define LED_DIMM4_COMDIMM15_Msk               (0x000000ffUL << LED_DIMM4_COMDIMM15_Pos)               /*!< LED DIMM4: COMDIMM15 Mask               */

/* ----------------------------------  LED_STPD  ---------------------------------- */
#define LED_STPD_LEDSTPD_Pos                  0                                                       /*!< LED STPD: LEDSTPD Position              */
#define LED_STPD_LEDSTPD_Msk                  (0x000fffffUL << LED_STPD_LEDSTPD_Pos)                  /*!< LED STPD: LEDSTPD Mask                  */

/* -----------------------------------  LED_SR  ----------------------------------- */
#define LED_SR_LED_ENDF_Pos                   0                                                       /*!< LED SR: LED_ENDF Position               */
#define LED_SR_LED_ENDF_Msk                   (0x01UL << LED_SR_LED_ENDF_Pos)                         /*!< LED SR: LED_ENDF Mask                   */
#define LED_SR_LED_INTE_Pos                   1                                                       /*!< LED SR: LED_INTE Position               */
#define LED_SR_LED_INTE_Msk                   (0x01UL << LED_SR_LED_INTE_Pos)                         /*!< LED SR: LED_INTE Mask                   */
#define LED_SR_LED_INT_Pos                    2                                                       /*!< LED SR: LED_INT Position                */
#define LED_SR_LED_INT_Msk                    (0x01UL << LED_SR_LED_INT_Pos)                          /*!< LED SR: LED_INT Mask                    */
#define LED_SR_MATCHF_Pos                     3                                                       /*!< LED SR: MATCHF Position                 */
#define LED_SR_MATCHF_Msk                     (0x01UL << LED_SR_MATCHF_Pos)                           /*!< LED SR: MATCHF Mask                     */

/* ----------------------------------  LED_CON2  ---------------------------------- */
#define LED_CON2_OVERTS_Pos                   0                                                       /*!< LED CON2: OVERTS Position               */
#define LED_CON2_OVERTS_Msk                   (0x07UL << LED_CON2_OVERTS_Pos)                         /*!< LED CON2: OVERTS Mask                   */
#define LED_CON2_OVERLAP_Pos                  3                                                       /*!< LED CON2: OVERLAP Position              */
#define LED_CON2_OVERLAP_Msk                  (0x01UL << LED_CON2_OVERLAP_Pos)                        /*!< LED CON2: OVERLAP Mask                  */

/* ----------------------------------  LED_CON1  ---------------------------------- */
#define LED_CON1_LEDST_Pos                    0                                                       /*!< LED CON1: LEDST Position                */
#define LED_CON1_LEDST_Msk                    (0x01UL << LED_CON1_LEDST_Pos)                          /*!< LED CON1: LEDST Mask                    */
#define LED_CON1_LEDEN_Pos                    1                                                       /*!< LED CON1: LEDEN Position                */
#define LED_CON1_LEDEN_Msk                    (0x01UL << LED_CON1_LEDEN_Pos)                          /*!< LED CON1: LEDEN Mask                    */
#define LED_CON1_MD_Pos                       2                                                       /*!< LED CON1: MD Position                   */
#define LED_CON1_MD_Msk                       (0x03UL << LED_CON1_MD_Pos)                             /*!< LED CON1: MD Mask                       */


/* ================================================================================ */
/* ================          struct 'CRC' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  CRC_CR  ----------------------------------- */
#define CRC_CR_CRCRUN_Pos                     0                                                       /*!< CRC CR: CRCRUN Position                 */
#define CRC_CR_CRCRUN_Msk                     (0x01UL << CRC_CR_CRCRUN_Pos)                           /*!< CRC CR: CRCRUN Mask                     */
#define CRC_CR_FIRSTBS_Pos                    1                                                       /*!< CRC CR: FIRSTBS Position                */
#define CRC_CR_FIRSTBS_Msk                    (0x01UL << CRC_CR_FIRSTBS_Pos)                          /*!< CRC CR: FIRSTBS Mask                    */
#define CRC_CR_POLYS_Pos                      4                                                       /*!< CRC CR: POLYS Position                  */
#define CRC_CR_POLYS_Msk                      (0x01UL << CRC_CR_POLYS_Pos)                            /*!< CRC CR: POLYS Mask                      */
#define CRC_CR_MDSEL_Pos                      5                                                       /*!< CRC CR: MDSEL Position                  */
#define CRC_CR_MDSEL_Msk                      (0x01UL << CRC_CR_MDSEL_Pos)                            /*!< CRC CR: MDSEL Mask                      */
#define CRC_CR_RLTCLR_Pos                     6                                                       /*!< CRC CR: RLTCLR Position                 */
#define CRC_CR_RLTCLR_Msk                     (0x01UL << CRC_CR_RLTCLR_Pos)                           /*!< CRC CR: RLTCLR Mask                     */
#define CRC_CR_MODS_Pos                       7                                                       /*!< CRC CR: MODS Position                   */
#define CRC_CR_MODS_Msk                       (0x01UL << CRC_CR_MODS_Pos)                             /*!< CRC CR: MODS Mask                       */
#define CRC_CR_CRCINTF_Pos                    8                                                       /*!< CRC CR: CRCINTF Position                */
#define CRC_CR_CRCINTF_Msk                    (0x01UL << CRC_CR_CRCINTF_Pos)                          /*!< CRC CR: CRCINTF Mask                    */
#define CRC_CR_CRCINTEN_Pos                   9                                                       /*!< CRC CR: CRCINTEN Position               */
#define CRC_CR_CRCINTEN_Msk                   (0x01UL << CRC_CR_CRCINTEN_Pos)                         /*!< CRC CR: CRCINTEN Mask                   */

/* -----------------------------------  CRC_IN  ----------------------------------- */
#define CRC_IN_INDATA_Pos                     0                                                       /*!< CRC IN: INDATA Position                 */
#define CRC_IN_INDATA_Msk                     (0xffffffffUL << CRC_IN_INDATA_Pos)                     /*!< CRC IN: INDATA Mask                     */

/* -----------------------------------  CRC_RLT  ---------------------------------- */
#define CRC_RLT_RLTDATA_Pos                   0                                                       /*!< CRC RLT: RLTDATA Position               */
#define CRC_RLT_RLTDATA_Msk                   (0x0000ffffUL << CRC_RLT_RLTDATA_Pos)                   /*!< CRC RLT: RLTDATA Mask                   */

/* ----------------------------------  CRC_INIT  ---------------------------------- */
#define CRC_INIT_INIDATA_Pos                  0                                                       /*!< CRC INIT: INIDATA Position              */
#define CRC_INIT_INIDATA_Msk                  (0x0000ffffUL << CRC_INIT_INIDATA_Pos)                  /*!< CRC INIT: INIDATA Mask                  */



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
#define PFPLSR_BASE                     0x40001538UL
#define SPI2PCON_BASE                   0x40001540UL
#define PCU_BASE                        0x40001F00UL
//#define PORTLED_BASE                  0x40001F00UL

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
#define DAC_BASE                        0x40003450UL

#define TOUCH_BASE                      0x40003600UL

#define LED_BASE                        0x40006000UL
#define CRC_BASE                        0x40000300UL



/* ================================================================================ */
/* ================             Peripheral declaration             ================ */
/* ================================================================================ */

#define SCU                             ((SCU_Type                *) SCU_BASE)
#define SCUCC                           ((SCUCC_Type              *) SCUCC_BASE)
#define SCULV                           ((SCULV_Type              *) SCULV_BASE)
#define PA                              ((PORT_Type               *) PA_BASE)
#define PB                              ((PORT_Type               *) PB_BASE)
#define PC                              ((PORT_Type               *) PC_BASE)
#define PD                              ((PORT_Type               *) PD_BASE)
#define PE                              ((PORT_Type               *) PE_BASE)
#define PF                              ((PORT_Type               *) PF_BASE)
#define PFPLSR                          ((PFPLSR_Type             *) PFPLSR_BASE)
//#define PORTLED                       ((PORTLED_Type            *) PORTLED_BASE)
#define SPI2PCON                        ((SPI2PCON_Type           *) SPI2PCON_BASE)
#define PCU                             ((PCU_Type                *) PCU_BASE)

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
#define USART10                         ((USART_Type              *) USART10_BASE)
#define USART11                         ((USART_Type              *) USART11_BASE)

#define UART0                           ((UART_Type               *) UART0_BASE)
#define UART1                           ((UART_Type               *) UART1_BASE)
#define I2C0                            ((I2C_Type                *) I2C0_BASE)
#define I2C1                            ((I2C_Type                *) I2C1_BASE)
#define SPI20                           ((SPI_Type                *) SPI20_BASE)
#define SPI21                           ((SPI_Type                *) SPI21_BASE)
#define ADC                             ((ADC_Type                *) ADC_BASE)
#define DAC                             ((DAC_Type                *) DAC_BASE)

#define TOUCH                           ((TOUCH_Type              *) TOUCH_BASE)

#define LED                             ((LED_Type                *) LED_BASE)
#define CRC                             ((CRC_Type                *) CRC_BASE)



/** @} */ /* End of group Device_Peripheral_Registers */
/** @} */ /* End of group A31G21x */
/** @} */ /* End of group ABOV Semiconductor Co., Ltd. */

#ifdef __cplusplus
}
#endif


#endif  /* A31G21x_H */

