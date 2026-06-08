
/****************************************************************************************************//**
 * @file     A31G31x.h
 *
 * @brief    CMSIS Cortex-M0PLUS Peripheral Access Layer Header File for
 *           A31G31x from ABOV Semiconductor Co., Ltd..
 *
 * @version  V1.0
 * @date     23. April 2018
 *
 * @note     Generated with SVDConv V2.85b 
 *           from CMSIS SVD File 'A31G31x.svd' Version 1.0,
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

/** @addtogroup A31G31x
  * @{
  */

#ifndef A31G31x_H
#define A31G31x_H

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
/* ---------------------  A31G31x Specific Interrupt Numbers  --------------------- */
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
  TIMER14_IRQn                  =  22,              /*!<  22  TIMER14                                                          */
  TIMER15_IRQn                  =  23,              /*!<  23  TIMER15                                                          */
  TIMER16_IRQn                  =  24,              /*!<  24  TIMER16                                                          */
  I2C2_IRQn                     =  25,              /*!<  25  I2C2                                                             */
  USART12_13_IRQn               =  26,              /*!<  26  USART12_13                                                       */
  ADPCM_DAC_IRQn                =  27,              /*!<  27  ADPCM_DAC                                                        */
  LED_IRQn                      =  28,              /*!<  28  LED                                                              */
  TOUCH_IRQn                    =  29,              /*!<  29  TOUCH                                                            */
  USB_IRQn                      =  30,              /*!<  30  USB                                                              */
  CMP_CRC_IRQn                  =  31               /*!<  31  CMP_CRC                                                         */
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
//#include "system_A31G31x.h"                         /*!< A31G31x System                                                        */
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
  __IO uint32_t  ROSCCON;                           /*!< (@ 0x4000006C) ROSC Control Register                                  */
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
} PORT_Type;


/* ================================================================================ */
/* ================                       PF                       ================ */
/* ================================================================================ */


/**
  * @brief General Port A (PF)
  */

typedef struct {                                    /*!< (@ 0x40001500) PF Structure                                           */
  __IO uint32_t  MOD;                               /*!< (@ 0x40001500) Port n Mode Register                                   */
  __IO uint32_t  TYP;                               /*!< (@ 0x40001504) Port n Output Type Selection Register                  */
  __IO uint32_t  AFSR1;                             /*!< (@ 0x40001508) Port n Alternative Function Selection Register
                                                         1                                                                     */
  __IO uint32_t  AFSR2;                             /*!< (@ 0x4000150C) Port n Alternative Function Selection Register
                                                         2                                                                     */
  __IO uint32_t  PUPD;                              /*!< (@ 0x40001510) Port n Pull-up/down Resistor Selection Register        */
  __I  uint32_t  INDR;                              /*!< (@ 0x40001514) Port n Input Data Register                             */
  __IO uint32_t  OUTDR;                             /*!< (@ 0x40001518) Port n Output Data Register                            */
  __O  uint32_t  BSR;                               /*!< (@ 0x4000151C) Port n Output Bit Set Register                         */
  __O  uint32_t  BCR;                               /*!< (@ 0x40001520) Port n Output Bit Clear Register                       */
  __IO uint32_t  OUTDMSK;                           /*!< (@ 0x40001524) Port n Output Data Mask Register                       */
  __IO uint32_t  DBCR;                              /*!< (@ 0x40001528) Port n Debounce Control Register                       */
  __IO uint32_t  IER;                               /*!< (@ 0x4000152C) Port n interrupt enable register                       */
  __IO uint32_t  ISR;                               /*!< (@ 0x40001530) Port n interrupt status register                       */
  __IO uint32_t  ICR;                               /*!< (@ 0x40001534) Port n interrupt control register                      */
  __IO uint32_t  PLSR;                              /*!< (@ 0x40001538) PORT F level select register                           */
} PORTF_Type;


/* ================================================================================ */
/* ================                       PCU                      ================ */
/* ================================================================================ */


/**
  * @brief Port Control Mode Enable Register (PCU)
  */

typedef struct {                                    /*!< (@ 0x40001540) PCU Structure                                          */
  __IO uint32_t  USBCON;                            /*!< (@ 0x40001540) USB CONTROL Register                                   */
  __I  uint32_t  RESERVED[683];
  __IO uint32_t  PORTEN;                            /*!< (@ 0x40001FF0) Port Access Enable 0x15->0x51                          */
} PCU_Type;


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
  * @brief FLASH MEMORY CONTROLLER (DMAC0)
  */

typedef struct {                                    /*!< (@ 0x40000400) DMAC0 Structure                                        */
  __IO uint32_t  CR;                                /*!< (@ 0x40000400) DMA Channel n Control Register                         */
  __IO uint32_t  SR;                                /*!< (@ 0x40000404) DMA Channel n Status Register                          */
  __IO uint32_t  PAR;                               /*!< (@ 0x40000408) DMA Channel n Peripheral Address                       */
  __IO uint32_t  MAR;                               /*!< (@ 0x4000040C) DMA Channel n Memory Address                           */
} DMAC_Type;


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
  * @brief 12-BIT D/A CONVERTER (DAC)
  */

typedef struct {                                    /*!< (@ 0x40003450) DAC Structure                                          */
  __IO uint32_t  DR;                                /*!< (@ 0x40003450) D/A Converter Data Register                            */
  __I  uint32_t  BR;                                /*!< (@ 0x40003454) D/A Converter Buffer Register                          */
  __IO uint32_t  CR;                                /*!< (@ 0x40003458) D/A Converter Control Register                         */
  __IO uint32_t  PGSR;                              /*!< (@ 0x4000345C) Programmable Gain Control Register                     */
  __IO uint32_t  OFSCR;                             /*!< (@ 0x40003460) D/A Converter Offset Control Register                  */
} DAC_Type;


/* ================================================================================ */
/* ================                      ADPCM                     ================ */
/* ================================================================================ */


/**
  * @brief ADPCM (ADPCM)
  */

typedef struct {                                    /*!< (@ 0x40004700) ADPCM Structure                                        */
  __IO uint32_t  DECCR;                             /*!< (@ 0x40004700) A/D ADPCM Decoder Control Register                     */
  __IO uint32_t  DFIFOR;                            /*!< (@ 0x40004704) ADPCM Decoder FIFO Register                            */
  __IO uint32_t  DECDR;                             /*!< (@ 0x40004708) ADPCM Decoder Sampling Frequency Data Register         */
  __IO uint32_t  DBDLR;                             /*!< (@ 0x4000470C) ADPCM Decoder Bundle Register                          */
  __I  uint32_t  DODRL;                             /*!< (@ 0x40004710) ADPCM Decoder Result Output Low Register               */
  __I  uint32_t  DODRH;                             /*!< (@ 0x40004714) ADPCM Decoder Result Output High Register              */
  __IO uint32_t  FAFLAG;                            /*!< (@ 0x40004718) ADPCM Interrupt Flag Register                          */
  __IO uint32_t  VPCR;                              /*!< (@ 0x4000471C) Voice Prompt Control Register                          */
  __IO uint32_t  SFDDNO;                            /*!< (@ 0x40004720) Serial Flash Dummy and Data Number                     */
  __IO uint32_t  SFCMD;                             /*!< (@ 0x40004724) Serial Flash Command Register                          */
  __IO uint32_t  VPADDR1;                           /*!< (@ 0x40004728) Voice Prompt Address Register 1                        */
  __IO uint32_t  VPADDR2;                           /*!< (@ 0x4000472C) Voice Prompt Address Register 2                        */
  __IO uint32_t  VPADDR3;                           /*!< (@ 0x40004730) Voice Prompt Address Register 3                        */
  __IO uint32_t  VPSIZE1;                           /*!< (@ 0x40004734) Voice Prompt Size Register 1                           */
  __IO uint32_t  VPSIZE2;                           /*!< (@ 0x40004738) Voice Prompt Size Register 2                           */
  __IO uint32_t  VPSIZE3;                           /*!< (@ 0x4000473C) Voice Prompt Size Register 3                           */
  __IO uint32_t  VPINF1;                            /*!< (@ 0x40004740) Voice Prompt Inform Register 1                         */
  __IO uint32_t  VPINF2;                            /*!< (@ 0x40004744) Voice Prompt Inform Register 2                         */
  __I  uint32_t  RESERVED[2];
  __IO uint32_t  SPICR;                             /*!< (@ 0x40004750) SPI Control Register                                   */
  __IO uint32_t  SPIDR;                             /*!< (@ 0x40004754) SPI Data Register                                      */
  __IO uint32_t  SPISR;                             /*!< (@ 0x40004758) SPI Status Register                                    */
} ADPCM_Type;


/* ================================================================================ */
/* ================                       CMP                      ================ */
/* ================================================================================ */


/**
  * @brief COMPARATOR (CMP)
  */

typedef struct {                                    /*!< (@ 0x40003420) CMP Structure                                          */
  __IO uint32_t  CMP0CR;                            /*!< (@ 0x40003420) Comparator 0 Control Register                          */
  __IO uint32_t  CMP1CR;                            /*!< (@ 0x40003424) Comparator 1 Control Register                          */
  __I  uint32_t  RESERVED[2];
  __IO uint32_t  DBNC;                              /*!< (@ 0x40003430) Comparator Debounce Register                           */
  __IO uint32_t  ICON;                              /*!< (@ 0x40003434) Comparator Interrupt Control Register                  */
  __IO uint32_t  IEN;                               /*!< (@ 0x40003438) Comparator Interrupt Enable Register                   */
  __I  uint32_t  IST;                               /*!< (@ 0x4000343C) Comparator Interrupt Status Register                   */
  __IO uint32_t  ICLR;                              /*!< (@ 0x40003440) Comparator Interrupt Clear Register                    */
} CMP_Type;


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
  __I  uint32_t  RESERVED;
  __IO uint32_t  BSSR;                              /*!< (@ 0x4000500C) LCD Bias Source Selection Register is 32-bit
                                                         register.                                                             */
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
} LCD_Type;


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
  __IO uint32_t  DIMM0;                             /*!< (@ 0x40006014) COM Dimming Control Register0                          */
  __IO uint32_t  DIMM1;                             /*!< (@ 0x40006018) COM Dimming Control Register1                          */
  __IO uint32_t  DIMM2;                             /*!< (@ 0x4000601C) COM Dimming Control Register2                          */
  __IO uint32_t  DIMM3;                             /*!< (@ 0x40006020) COM Dimming Control Register3                          */
  __IO uint32_t  DIMM4;                             /*!< (@ 0x40006024) COM Dimming Control Register4                          */
  __IO uint32_t  DIMM5;                             /*!< (@ 0x40006028) COM Dimming Control Register5                          */
  __IO uint32_t  DIMM6;                             /*!< (@ 0x4000602C) COM Dimming Control Register0                          */
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


/* ================================================================================ */
/* ================                       USB                      ================ */
/* ================================================================================ */


/**
  * @brief USB (USB)
  */

typedef struct {                                    /*!< (@ 0x50000000) USB Structure                                          */
  __IO uint32_t  GOTGCTL;                           /*!< (@ 0x50000000) Interrupt Source Mask Register                         */
  __IO uint32_t  GOTGINT;                           /*!< (@ 0x50000004) Interrupt Register                                     */
  __IO uint32_t  GAHBCFG;                           /*!< (@ 0x50000008) AHB Configuration Register                             */
  __IO uint32_t  GUSBCFG;                           /*!< (@ 0x5000000C) USB Configuration Register                             */
  __IO uint32_t  GRSTCTL;                           /*!< (@ 0x50000010) Reset Register                                         */
  __IO uint32_t  GINTSTS;                           /*!< (@ 0x50000014) Interrupt Register                                     */
  __IO uint32_t  GINTMSK;                           /*!< (@ 0x50000018) Interrupt Mask Register                                */
  __IO uint32_t  GRXSTSR;                           /*!< (@ 0x5000001C) Receive Status Debug Read Register                     */
  __IO uint32_t  GRXSTSP;                           /*!< (@ 0x50000020) Receive Status Read/Pop Register                       */
  __IO uint32_t  GRXFSIZ;                           /*!< (@ 0x50000024) Receive FIFO Size Register                             */
  __IO uint32_t  GNPTXFSIZ;                         /*!< (@ 0x50000028) Non-periodic Transmit FIFO Size Register               */
  __I  uint32_t  RESERVED[5];
  __IO uint32_t  GSNPSID;                           /*!< (@ 0x50000040) Synopsys ID Register                                   */
  __IO uint32_t  GHWCFG1;                           /*!< (@ 0x50000044) User HW Config1 Register                               */
  __IO uint32_t  GHWCFG2;                           /*!< (@ 0x50000048) User HW Config2 Register                               */
  __IO uint32_t  GHWCFG3;                           /*!< (@ 0x5000004C) User HW Config3 Register                               */
  __IO uint32_t  GHWCFG4;                           /*!< (@ 0x50000050) User HW Config4 Register                               */
  __IO uint32_t  GLPMCFG;                           /*!< (@ 0x50000054) LPM Config Register                                    */
  __IO uint32_t  GPWRDN;                            /*!< (@ 0x50000058) Global Power Down register                             */
  __IO uint32_t  GDFIFOCFG;                         /*!< (@ 0x5000005C) Global DFIFO Configuration Register                    */
  __I  uint32_t  RESERVED1[55];
  __IO uint32_t  DIEPTXF1;                          /*!< (@ 0x5000013C) Device IN Endpoint Transmit FIFO Size Register
                                                         i                                                                     */
  __IO uint32_t  DIEPTXF2;                          /*!< (@ 0x50000140) Device IN Endpoint Transmit FIFO Size Register
                                                         i                                                                     */
  __IO uint32_t  DIEPTXF3;                          /*!< (@ 0x50000144) Device IN Endpoint Transmit FIFO Size Register
                                                         i                                                                     */
  __IO uint32_t  DIEPTXF4;                          /*!< (@ 0x50000148) Device IN Endpoint Transmit FIFO Size Register
                                                         i                                                                     */
  __I  uint32_t  RESERVED2[429];
  __IO uint32_t  DCFG;                              /*!< (@ 0x50000800) Device Configuration Register                          */
  __IO uint32_t  DCTL;                              /*!< (@ 0x50000804) Device Control Register                                */
  __I  uint32_t  DSTS;                              /*!< (@ 0x50000808) Device Status Register                                 */
  __I  uint32_t  RESERVED3;
  __IO uint32_t  DIEPMSK;                           /*!< (@ 0x50000810) Device IN Endpoint Common Interrupt Mask Register      */
  __IO uint32_t  DOEPMSK;                           /*!< (@ 0x50000814) Device OUT Endpoint Common Interrupt Mask Register     */
  __I  uint32_t  DAINT;                             /*!< (@ 0x50000818) Device All Endpoints Interrupt Register                */
  __IO uint32_t  DAINTMSK;                          /*!< (@ 0x5000081C) Device All Endpoints Interrupt Mask Register           */
  __I  uint32_t  RESERVED4[4];
  __IO uint32_t  DTHRCTL;                           /*!< (@ 0x50000830) Device Threshold Control Register                      */
  __IO uint32_t  DIEPEMPMSK;                        /*!< (@ 0x50000834) Device IN Endpoint FIFO Empty Interrupt Mask
                                                         Register                                                              */
  __I  uint32_t  RESERVED5[50];
  __IO uint32_t  DIEPCTL0;                          /*!< (@ 0x50000900) Device Control IN Endpoint 0 Control Register          */
  __I  uint32_t  RESERVED6;
  __IO uint32_t  DIEPINT0;                          /*!< (@ 0x50000908) Device IN Endpoint 0 Interrupt Register                */
  __I  uint32_t  RESERVED7[2];
  __IO uint32_t  DIEPDMA0;                          /*!< (@ 0x50000914) Device IN Endpoint 0 DMA Address Register              */
  __IO uint32_t  DTXFSTS0;                          /*!< (@ 0x50000918) Device IN Endpoint Transmit FIFO Status Register
                                                         0                                                                     */
  __IO uint32_t  DIEPDMAB0;                         /*!< (@ 0x5000091C) Device IN Endpoint 16 Buffer Address Register          */
  __IO uint32_t  DIEPCTL1;                          /*!< (@ 0x50000920) Device Control IN Endpoint 1 Control Register          */
  __I  uint32_t  RESERVED8;
  __IO uint32_t  DIEPINT1;                          /*!< (@ 0x50000928) Device IN Endpoint 1 Interrupt Register                */
  __I  uint32_t  RESERVED9[2];
  __IO uint32_t  DIEPDMA1;                          /*!< (@ 0x50000934) Device IN Endpoint 1 DMA Address Register              */
  __IO uint32_t  DTXFSTS1;                          /*!< (@ 0x50000938) Device IN Endpoint Transmit FIFO Status Register
                                                         1                                                                     */
  __IO uint32_t  DIEPDMAB1;                         /*!< (@ 0x5000093C) Device IN Endpoint 16 Buffer Address Register          */
  __IO uint32_t  DIEPCTL2;                          /*!< (@ 0x50000940) Device Control IN Endpoint 1 Control Register          */
  __I  uint32_t  RESERVED10;
  __IO uint32_t  DIEPINT2;                          /*!< (@ 0x50000948) Device IN Endpoint 1 Interrupt Register                */
  __I  uint32_t  RESERVED11[2];
  __IO uint32_t  DIEPDMA2;                          /*!< (@ 0x50000954) Device IN Endpoint 1 DMA Address Register              */
  __IO uint32_t  DTXFSTS2;                          /*!< (@ 0x50000958) Device IN Endpoint Transmit FIFO Status Register
                                                         1                                                                     */
  __IO uint32_t  DIEPDMAB2;                         /*!< (@ 0x5000095C) Device IN Endpoint 16 Buffer Address Register          */
  __IO uint32_t  DIEPCTL3;                          /*!< (@ 0x50000960) Device Control IN Endpoint 1 Control Register          */
  __I  uint32_t  RESERVED12;
  __IO uint32_t  DIEPINT3;                          /*!< (@ 0x50000968) Device IN Endpoint 1 Interrupt Register                */
  __I  uint32_t  RESERVED13[2];
  __IO uint32_t  DIEPDMA3;                          /*!< (@ 0x50000974) Device IN Endpoint 1 DMA Address Register              */
  __IO uint32_t  DTXFSTS3;                          /*!< (@ 0x50000978) Device IN Endpoint Transmit FIFO Status Register
                                                         1                                                                     */
  __IO uint32_t  DIEPDMAB3;                         /*!< (@ 0x5000097C) Device IN Endpoint 16 Buffer Address Register          */
  __IO uint32_t  DIEPCTL4;                          /*!< (@ 0x50000980) Device Control IN Endpoint 4 Control Register          */
  __I  uint32_t  RESERVED14;
  __IO uint32_t  DIEPINT4;                          /*!< (@ 0x50000988) Device IN Endpoint 4 Interrupt Register                */
  __I  uint32_t  RESERVED15[2];
  __IO uint32_t  DIEPDMA4;                          /*!< (@ 0x50000994) Device IN Endpoint 4 DMA Address Register              */
  __IO uint32_t  DTXFSTS4;                          /*!< (@ 0x50000998) Device IN Endpoint Transmit FIFO Status Register
                                                         4                                                                     */
  __IO uint32_t  DIEPDMAB4;                         /*!< (@ 0x5000099C) Device IN Endpoint 16 Buffer Address Register          */
  __I  uint32_t  RESERVED16[88];
  __IO uint32_t  DOEPCTL0;                          /*!< (@ 0x50000B00) Device Control OUT Endpoint 0 Control Register         */
  __I  uint32_t  RESERVED17;
  __IO uint32_t  DOEPINT0;                          /*!< (@ 0x50000B08) Device OUT Endpoint 0 Interrupt Register               */
  __I  uint32_t  RESERVED18[2];
  __IO uint32_t  DOEPDMA0;                          /*!< (@ 0x50000B14) Device OUT Endpoint 0 DMA Address Register             */
  __I  uint32_t  RESERVED19;
  __IO uint32_t  DOEPDMAB0;                         /*!< (@ 0x50000B1C) Device OUT Endpoint 16 Buffer Address Register         */
  __IO uint32_t  DOEPCTL1;                          /*!< (@ 0x50000B20) Device Control OUT Endpoint 1 Control Register         */
  __I  uint32_t  RESERVED20;
  __IO uint32_t  DOEPINT1;                          /*!< (@ 0x50000B28) Device OUT Endpoint 1 Interrupt Register               */
  __I  uint32_t  RESERVED21[2];
  __IO uint32_t  DOEPDMA1;                          /*!< (@ 0x50000B34) Device OUT Endpoint 1 DMA Address Register             */
  __I  uint32_t  RESERVED22;
  __IO uint32_t  DOEPDMAB1;                         /*!< (@ 0x50000B3C) Device OUT Endpoint 16 Buffer Address Register         */
  __IO uint32_t  DOEPCTL2;                          /*!< (@ 0x50000B40) Device Control OUT Endpoint 2 Control Register         */
  __I  uint32_t  RESERVED23;
  __IO uint32_t  DOEPINT2;                          /*!< (@ 0x50000B48) Device OUT Endpoint 2 Interrupt Register               */
  __I  uint32_t  RESERVED24[2];
  __IO uint32_t  DOEPDMA2;                          /*!< (@ 0x50000B54) Device OUT Endpoint 2 DMA Address Register             */
  __I  uint32_t  RESERVED25;
  __IO uint32_t  DOEPDMAB2;                         /*!< (@ 0x50000B5C) Device OUT Endpoint 16 Buffer Address Register         */
  __IO uint32_t  DOEPCTL3;                          /*!< (@ 0x50000B60) Device Control OUT Endpoint 3 Control Register         */
  __I  uint32_t  RESERVED26;
  __IO uint32_t  DOEPINT3;                          /*!< (@ 0x50000B68) Device OUT Endpoint 3 Interrupt Register               */
  __I  uint32_t  RESERVED27[2];
  __IO uint32_t  DOEPDMA3;                          /*!< (@ 0x50000B74) Device OUT Endpoint 3 DMA Address Register             */
  __I  uint32_t  RESERVED28;
  __IO uint32_t  DOEPDMAB3;                         /*!< (@ 0x50000B7C) Device OUT Endpoint 16 Buffer Address Register         */
  __IO uint32_t  DOEPCTL4;                          /*!< (@ 0x50000B80) Device Control OUT Endpoint 4 Control Register         */
  __I  uint32_t  RESERVED29;
  __IO uint32_t  DOEPINT4;                          /*!< (@ 0x50000B88) Device OUT Endpoint 4 Interrupt Register               */
  __I  uint32_t  RESERVED30[2];
  __IO uint32_t  DOEPDMA4;                          /*!< (@ 0x50000B94) Device OUT Endpoint 4 DMA Address Register             */
  __I  uint32_t  RESERVED31;
  __IO uint32_t  DOEPDMAB4;                         /*!< (@ 0x50000B9C) Device OUT Endpoint 16 Buffer Address Register         */
  __I  uint32_t  RESERVED32[152];
  __IO uint32_t  PCGCCTL;                           /*!< (@ 0x50000E00) Power and Clock Gating Control Register                */
} USB_Type;


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
#define SCU_PRER1_TIMER14_Pos                 20                                                      /*!< SCU PRER1: TIMER14 Position             */
#define SCU_PRER1_TIMER14_Msk                 (0x01UL << SCU_PRER1_TIMER14_Pos)                       /*!< SCU PRER1: TIMER14 Mask                 */
#define SCU_PRER1_TIMER15_Pos                 21                                                      /*!< SCU PRER1: TIMER15 Position             */
#define SCU_PRER1_TIMER15_Msk                 (0x01UL << SCU_PRER1_TIMER15_Pos)                       /*!< SCU PRER1: TIMER15 Mask                 */
#define SCU_PRER1_TIMER16_Pos                 22                                                      /*!< SCU PRER1: TIMER16 Position             */
#define SCU_PRER1_TIMER16_Msk                 (0x01UL << SCU_PRER1_TIMER16_Pos)                       /*!< SCU PRER1: TIMER16 Mask                 */
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
#define SCU_PRER2_I2C2_Pos                    6                                                       /*!< SCU PRER2: I2C2 Position                */
#define SCU_PRER2_I2C2_Msk                    (0x01UL << SCU_PRER2_I2C2_Pos)                          /*!< SCU PRER2: I2C2 Mask                    */
#define SCU_PRER2_USART10_Pos                 8                                                       /*!< SCU PRER2: USART10 Position             */
#define SCU_PRER2_USART10_Msk                 (0x01UL << SCU_PRER2_USART10_Pos)                       /*!< SCU PRER2: USART10 Mask                 */
#define SCU_PRER2_USART11_Pos                 9                                                       /*!< SCU PRER2: USART11 Position             */
#define SCU_PRER2_USART11_Msk                 (0x01UL << SCU_PRER2_USART11_Pos)                       /*!< SCU PRER2: USART11 Mask                 */
#define SCU_PRER2_USART12_Pos                 10                                                      /*!< SCU PRER2: USART12 Position             */
#define SCU_PRER2_USART12_Msk                 (0x01UL << SCU_PRER2_USART12_Pos)                       /*!< SCU PRER2: USART12 Mask                 */
#define SCU_PRER2_USART13_Pos                 11                                                      /*!< SCU PRER2: USART13 Position             */
#define SCU_PRER2_USART13_Msk                 (0x01UL << SCU_PRER2_USART13_Pos)                       /*!< SCU PRER2: USART13 Mask                 */
#define SCU_PRER2_UART0_Pos                   12                                                      /*!< SCU PRER2: UART0 Position               */
#define SCU_PRER2_UART0_Msk                   (0x01UL << SCU_PRER2_UART0_Pos)                         /*!< SCU PRER2: UART0 Mask                   */
#define SCU_PRER2_UART1_Pos                   13                                                      /*!< SCU PRER2: UART1 Position               */
#define SCU_PRER2_UART1_Msk                   (0x01UL << SCU_PRER2_UART1_Pos)                         /*!< SCU PRER2: UART1 Mask                   */
#define SCU_PRER2_USB_Pos                     16                                                      /*!< SCU PRER2: USB Position                 */
#define SCU_PRER2_USB_Msk                     (0x01UL << SCU_PRER2_USB_Pos)                           /*!< SCU PRER2: USB Mask                     */
#define SCU_PRER2_HSICMU_Pos                  17                                                      /*!< SCU PRER2: HSICMU Position              */
#define SCU_PRER2_HSICMU_Msk                  (0x01UL << SCU_PRER2_HSICMU_Pos)                        /*!< SCU PRER2: HSICMU Mask                  */
#define SCU_PRER2_ADC_Pos                     20                                                      /*!< SCU PRER2: ADC Position                 */
#define SCU_PRER2_ADC_Msk                     (0x01UL << SCU_PRER2_ADC_Pos)                           /*!< SCU PRER2: ADC Mask                     */
#define SCU_PRER2_DAC_Pos                     22                                                      /*!< SCU PRER2: DAC Position                 */
#define SCU_PRER2_DAC_Msk                     (0x01UL << SCU_PRER2_DAC_Pos)                           /*!< SCU PRER2: DAC Mask                     */
#define SCU_PRER2_CMP_Pos                     23                                                      /*!< SCU PRER2: CMP Position                */
#define SCU_PRER2_CMP_Msk                     (0x01UL << SCU_PRER2_CMP_Pos)                           /*!< SCU PRER2: CMP Mask                    */
#define SCU_PRER2_ADPCM_Pos                   24                                                      /*!< SCU PRER2: ADPCM Position               */
#define SCU_PRER2_ADPCM_Msk                   (0x01UL << SCU_PRER2_ADPCM_Pos)                         /*!< SCU PRER2: ADPCM Mask                   */
#define SCU_PRER2_TOUCH_Pos                   25                                                      /*!< SCU PRER2: TOUCH Position               */
#define SCU_PRER2_TOUCH_Msk                   (0x01UL << SCU_PRER2_TOUCH_Pos)                         /*!< SCU PRER2: TOUCH Mask                   */
#define SCU_PRER2_LCD_Pos                     28                                                      /*!< SCU PRER2: LCD Position                 */
#define SCU_PRER2_LCD_Msk                     (0x01UL << SCU_PRER2_LCD_Pos)                           /*!< SCU PRER2: LCD Mask                     */
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
#define SCU_PER1_TIMER14_Pos                  20                                                      /*!< SCU PER1: TIMER14 Position              */
#define SCU_PER1_TIMER14_Msk                  (0x01UL << SCU_PER1_TIMER14_Pos)                        /*!< SCU PER1: TIMER14 Mask                  */
#define SCU_PER1_TIMER15_Pos                  21                                                      /*!< SCU PER1: TIMER15 Position              */
#define SCU_PER1_TIMER15_Msk                  (0x01UL << SCU_PER1_TIMER15_Pos)                        /*!< SCU PER1: TIMER15 Mask                  */
#define SCU_PER1_TIMER16_Pos                  22                                                      /*!< SCU PER1: TIMER16 Position              */
#define SCU_PER1_TIMER16_Msk                  (0x01UL << SCU_PER1_TIMER16_Pos)                        /*!< SCU PER1: TIMER16 Mask                  */
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
#define SCU_PER2_I2C2_Pos                     6                                                       /*!< SCU PER2: I2C2 Position                 */
#define SCU_PER2_I2C2_Msk                     (0x01UL << SCU_PER2_I2C2_Pos)                           /*!< SCU PER2: I2C2 Mask                     */
#define SCU_PER2_USART10_Pos                  8                                                       /*!< SCU PER2: USART10 Position              */
#define SCU_PER2_USART10_Msk                  (0x01UL << SCU_PER2_USART10_Pos)                        /*!< SCU PER2: USART10 Mask                  */
#define SCU_PER2_USART11_Pos                  9                                                       /*!< SCU PER2: USART11 Position              */
#define SCU_PER2_USART11_Msk                  (0x01UL << SCU_PER2_USART11_Pos)                        /*!< SCU PER2: USART11 Mask                  */
#define SCU_PER2_USART12_Pos                  10                                                      /*!< SCU PER2: USART12 Position              */
#define SCU_PER2_USART12_Msk                  (0x01UL << SCU_PER2_USART12_Pos)                        /*!< SCU PER2: USART12 Mask                  */
#define SCU_PER2_USART13_Pos                  11                                                      /*!< SCU PER2: USART13 Position              */
#define SCU_PER2_USART13_Msk                  (0x01UL << SCU_PER2_USART13_Pos)                        /*!< SCU PER2: USART13 Mask                  */
#define SCU_PER2_UART0_Pos                    12                                                      /*!< SCU PER2: UART0 Position                */
#define SCU_PER2_UART0_Msk                    (0x01UL << SCU_PER2_UART0_Pos)                          /*!< SCU PER2: UART0 Mask                    */
#define SCU_PER2_UART1_Pos                    13                                                      /*!< SCU PER2: UART1 Position                */
#define SCU_PER2_UART1_Msk                    (0x01UL << SCU_PER2_UART1_Pos)                          /*!< SCU PER2: UART1 Mask                    */
#define SCU_PER2_USB_Pos                      16                                                      /*!< SCU PER2: USB Position                  */
#define SCU_PER2_USB_Msk                      (0x01UL << SCU_PER2_USB_Pos)                            /*!< SCU PER2: USB Mask                      */
#define SCU_PER2_SOFCTMR_Pos                  17                                                      /*!< SCU PER2: SOFCTMR Position              */
#define SCU_PER2_SOFCTMR_Msk                  (0x01UL << SCU_PER2_SOFCTMR_Pos)                        /*!< SCU PER2: SOFCTMR Mask                  */
#define SCU_PER2_ADC_Pos                      20                                                      /*!< SCU PER2: ADC Position                  */
#define SCU_PER2_ADC_Msk                      (0x01UL << SCU_PER2_ADC_Pos)                            /*!< SCU PER2: ADC Mask                      */
#define SCU_PER2_DAC_Pos                      22                                                      /*!< SCU PER2: DAC Position                  */
#define SCU_PER2_DAC_Msk                      (0x01UL << SCU_PER2_DAC_Pos)                            /*!< SCU PER2: DAC Mask                      */
#define SCU_PER2_CMP_Pos                      23                                                      /*!< SCU PER2: CMP Position                 */
#define SCU_PER2_CMP_Msk                      (0x01UL << SCU_PER2_CMP_Pos)                           /*!< SCU PER2: CMP Mask                     */
#define SCU_PER2_ADPCM_Pos                    24                                                      /*!< SCU PER2: ADPCM Position                */
#define SCU_PER2_ADPCM_Msk                    (0x01UL << SCU_PER2_ADPCM_Pos)                          /*!< SCU PER2: ADPCM Mask                    */
#define SCU_PER2_TOUCH_Pos                    25                                                      /*!< SCU PER2: TOUCH Position                */
#define SCU_PER2_TOUCH_Msk                    (0x01UL << SCU_PER2_TOUCH_Pos)                          /*!< SCU PER2: TOUCH Mask                    */
#define SCU_PER2_LCD_Pos                      28                                                      /*!< SCU PER2: LCD Position                  */
#define SCU_PER2_LCD_Msk                      (0x01UL << SCU_PER2_LCD_Pos)                            /*!< SCU PER2: LCD Mask                      */
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
#define SCU_PCER1_TIMER16_Pos                 22                                                      /*!< SCU PCER1: TIMER16 Position             */
#define SCU_PCER1_TIMER16_Msk                 (0x01UL << SCU_PCER1_TIMER16_Pos)                       /*!< SCU PCER1: TIMER16 Mask                 */
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
#define SCU_PCER2_I2C2_Pos                    6                                                       /*!< SCU PCER2: I2C2 Position                */
#define SCU_PCER2_I2C2_Msk                    (0x01UL << SCU_PCER2_I2C2_Pos)                          /*!< SCU PCER2: I2C2 Mask                    */
#define SCU_PCER2_USART10_Pos                 8                                                       /*!< SCU PCER2: USART10 Position             */
#define SCU_PCER2_USART10_Msk                 (0x01UL << SCU_PCER2_USART10_Pos)                       /*!< SCU PCER2: USART10 Mask                 */
#define SCU_PCER2_USART11_Pos                 9                                                       /*!< SCU PCER2: USART11 Position             */
#define SCU_PCER2_USART11_Msk                 (0x01UL << SCU_PCER2_USART11_Pos)                       /*!< SCU PCER2: USART11 Mask                 */
#define SCU_PCER2_USART12_Pos                 10                                                      /*!< SCU PCER2: USART12 Position             */
#define SCU_PCER2_USART12_Msk                 (0x01UL << SCU_PCER2_USART12_Pos)                       /*!< SCU PCER2: USART12 Mask                 */
#define SCU_PCER2_USART13_Pos                 11                                                      /*!< SCU PCER2: USART13 Position             */
#define SCU_PCER2_USART13_Msk                 (0x01UL << SCU_PCER2_USART13_Pos)                       /*!< SCU PCER2: USART13 Mask                 */
#define SCU_PCER2_UART0_Pos                   12                                                      /*!< SCU PCER2: UART0 Position               */
#define SCU_PCER2_UART0_Msk                   (0x01UL << SCU_PCER2_UART0_Pos)                         /*!< SCU PCER2: UART0 Mask                   */
#define SCU_PCER2_UART1_Pos                   13                                                      /*!< SCU PCER2: UART1 Position               */
#define SCU_PCER2_UART1_Msk                   (0x01UL << SCU_PCER2_UART1_Pos)                         /*!< SCU PCER2: UART1 Mask                   */
#define SCU_PCER2_USB_Pos                     16                                                      /*!< SCU PCER2: USB Position                 */
#define SCU_PCER2_USB_Msk                     (0x01UL << SCU_PCER2_USB_Pos)                           /*!< SCU PCER2: USB Mask                     */
#define SCU_PCER2_HSICMU_Pos                  17                                                      /*!< SCU PCER2: HSICMU Position              */
#define SCU_PCER2_HSICMU_Msk                  (0x01UL << SCU_PCER2_HSICMU_Pos)                        /*!< SCU PCER2: HSICMU Mask                  */
#define SCU_PCER2_ADC_Pos                     20                                                      /*!< SCU PCER2: ADC Position                 */
#define SCU_PCER2_ADC_Msk                     (0x01UL << SCU_PCER2_ADC_Pos)                           /*!< SCU PCER2: ADC Mask                     */
#define SCU_PCER2_DAC_Pos                     22                                                      /*!< SCU PCER2: DAC Position                 */
#define SCU_PCER2_DAC_Msk                     (0x01UL << SCU_PCER2_DAC_Pos)                           /*!< SCU PCER2: DAC Mask                     */
#define SCU_PCER2_CMP_Pos                    23                                                       /*!< SCU PCER2: CMP Position                */
#define SCU_PCER2_CMP_Msk                    (0x01UL << SCU_PCER2_CMP_Pos)                           /*!< SCU PCER2: CMP Mask                    */
#define SCU_PCER2_ADPCM_Pos                   24                                                      /*!< SCU PCER2: ADPCM Position               */
#define SCU_PCER2_ADPCM_Msk                   (0x01UL << SCU_PCER2_ADPCM_Pos)                         /*!< SCU PCER2: ADPCM Mask                   */
#define SCU_PCER2_TOUCH_Pos                   25                                                      /*!< SCU PCER2: TOUCH Position               */
#define SCU_PCER2_TOUCH_Msk                   (0x01UL << SCU_PCER2_TOUCH_Pos)                         /*!< SCU PCER2: TOUCH Mask                   */
#define SCU_PCER2_LCD_Pos                     28                                                      /*!< SCU PCER2: LCD Position                 */
#define SCU_PCER2_LCD_Msk                     (0x01UL << SCU_PCER2_LCD_Pos)                           /*!< SCU PCER2: LCD Mask                     */
#define SCU_PCER2_LED_Pos                     29                                                      /*!< SCU PCER2: LED Position                 */
#define SCU_PCER2_LED_Msk                     (0x01UL << SCU_PCER2_LED_Pos)                           /*!< SCU PCER2: LED Mask                     */
#define SCU_PCER2_CRC_Pos                     31                                                      /*!< SCU PCER2: CRC Position                 */
#define SCU_PCER2_CRC_Msk                     (0x01UL << SCU_PCER2_CRC_Pos)                           /*!< SCU PCER2: CRC Mask                     */

/* ---------------------------------  SCU_PPCLKSR  -------------------------------- */
#define SCU_PPCLKSR_WDTCLK_Pos                0                                                       /*!< SCU PPCLKSR: WDTCLK Position            */
#define SCU_PPCLKSR_WDTCLK_Msk                (0x01UL << SCU_PPCLKSR_WDTCLK_Pos)                      /*!< SCU PPCLKSR: WDTCLK Mask                */
#define SCU_PPCLKSR_WTCLK_Pos                 3                                                       /*!< SCU PPCLKSR: WTCLK Position             */
#define SCU_PPCLKSR_WTCLK_Msk                 (0x03UL << SCU_PPCLKSR_WTCLK_Pos)                       /*!< SCU PPCLKSR: WTCLK Mask                 */
#define SCU_PPCLKSR_LCDCLK_Pos                6                                                       /*!< SCU PPCLKSR: LCDCLK Position            */
#define SCU_PPCLKSR_LCDCLK_Msk                (0x03UL << SCU_PPCLKSR_LCDCLK_Pos)                      /*!< SCU PPCLKSR: LCDCLK Mask                */
#define SCU_PPCLKSR_USBCLK_Pos                9                                                       /*!< SCU PPCLKSR: USBCLK Position            */
#define SCU_PPCLKSR_USBCLK_Msk                (0x01UL << SCU_PPCLKSR_USBCLK_Pos)                      /*!< SCU PPCLKSR: USBCLK Mask                */
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
#define SCU_VDCCON_VDCWDLY_Msk                (0x000000ffUL << SCU_VDCCON_VDCWDLY_Pos)                /*!< SCU VDCCON: VDCWDLY Mask                */
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
#define SCU_VDCCON_VDC33_LOCK_Pos             24                                                      /*!< SCU VDCCON: VDC33_LOCK Position         */
#define SCU_VDCCON_VDC33_LOCK_Msk             (0x01UL << SCU_VDCCON_VDC33_LOCK_Pos)                   /*!< SCU VDCCON: VDC33_LOCK Mask             */
#define SCU_VDCCON_VDC33_BYPASS_Pos           25                                                      /*!< SCU VDCCON: VDC33_BYPASS Position       */
#define SCU_VDCCON_VDC33_BYPASS_Msk           (0x01UL << SCU_VDCCON_VDC33_BYPASS_Pos)                 /*!< SCU VDCCON: VDC33_BYPASS Mask           */
#define SCU_VDCCON_VDC33_STOP_Pos             26                                                      /*!< SCU VDCCON: VDC33_STOP Position         */
#define SCU_VDCCON_VDC33_STOP_Msk             (0x01UL << SCU_VDCCON_VDC33_STOP_Pos)                   /*!< SCU VDCCON: VDC33_STOP Mask             */
#define SCU_VDCCON_VDC33_PDBGR_Pos            27                                                      /*!< SCU VDCCON: VDC33_PDBGR Position        */
#define SCU_VDCCON_VDC33_PDBGR_Msk            (0x01UL << SCU_VDCCON_VDC33_PDBGR_Pos)                  /*!< SCU VDCCON: VDC33_PDBGR Mask            */
#define SCU_VDCCON_VDC33_WTIDKY_Pos           28                                                      /*!< SCU VDCCON: VDC33_WTIDKY Position       */
#define SCU_VDCCON_VDC33_WTIDKY_Msk           (0x0fUL << SCU_VDCCON_VDC33_WTIDKY_Pos)                 /*!< SCU VDCCON: VDC33_WTIDKY Mask           */

/* ---------------------------------  SCU_ROSCCON  -------------------------------- */
#define SCU_ROSCCON_SKIP_LS_Pos               0                                                       /*!< SCU ROSCCON: SKIP_LS Position           */
#define SCU_ROSCCON_SKIP_LS_Msk               (0x01UL << SCU_ROSCCON_SKIP_LS_Pos)                     /*!< SCU ROSCCON: SKIP_LS Mask               */
#define SCU_ROSCCON_EN_LDO_Pos                1                                                       /*!< SCU ROSCCON: EN_LDO Position            */
#define SCU_ROSCCON_EN_LDO_Msk                (0x01UL << SCU_ROSCCON_EN_LDO_Pos)                      /*!< SCU ROSCCON: EN_LDO Mask                */

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
#define SCU_MCCR5_LCDDIV_Pos                  16                                                      /*!< SCU MCCR5: LCDDIV Position              */
#define SCU_MCCR5_LCDDIV_Msk                  (0x000000ffUL << SCU_MCCR5_LCDDIV_Pos)                  /*!< SCU MCCR5: LCDDIV Mask                  */
#define SCU_MCCR5_LCDCSEL_Pos                 24                                                      /*!< SCU MCCR5: LCDCSEL Position             */
#define SCU_MCCR5_LCDCSEL_Msk                 (0x07UL << SCU_MCCR5_LCDCSEL_Pos)                       /*!< SCU MCCR5: LCDCSEL Mask                 */

/* ----------------------------------  SCU_MCCR6  --------------------------------- */
#define SCU_MCCR6_USBCDIV_Pos                 16                                                      /*!< SCU MCCR6: USBCDIV Position             */
#define SCU_MCCR6_USBCDIV_Msk                 (0x000000ffUL << SCU_MCCR6_USBCDIV_Pos)                 /*!< SCU MCCR6: USBCDIV Mask                 */
#define SCU_MCCR6_USBCSEL_Pos                 24                                                      /*!< SCU MCCR6: USBCSEL Position             */
#define SCU_MCCR6_USBCSEL_Msk                 (0x07UL << SCU_MCCR6_USBCSEL_Pos)                       /*!< SCU MCCR6: USBCSEL Mask                 */


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
#define PA_MOD_MODE8_Pos                      16                                                      /*!< PA MOD: MODE8 Position                  */
#define PA_MOD_MODE8_Msk                      (0x03UL << PA_MOD_MODE8_Pos)                            /*!< PA MOD: MODE8 Mask                      */
#define PA_MOD_MODE9_Pos                      18                                                      /*!< PA MOD: MODE9 Position                  */
#define PA_MOD_MODE9_Msk                      (0x03UL << PA_MOD_MODE9_Pos)                            /*!< PA MOD: MODE9 Mask                      */
#define PA_MOD_MODE10_Pos                     20                                                      /*!< PA MOD: MODE10 Position                 */
#define PA_MOD_MODE10_Msk                     (0x03UL << PA_MOD_MODE10_Pos)                           /*!< PA MOD: MODE10 Mask                     */
#define PA_MOD_MODE11_Pos                     22                                                      /*!< PA MOD: MODE11 Position                 */
#define PA_MOD_MODE11_Msk                     (0x03UL << PA_MOD_MODE11_Pos)                           /*!< PA MOD: MODE11 Mask                     */
#define PA_MOD_MODE12_Pos                     24                                                      /*!< PA MOD: MODE12 Position                 */
#define PA_MOD_MODE12_Msk                     (0x03UL << PA_MOD_MODE12_Pos)                           /*!< PA MOD: MODE12 Mask                     */
#define PA_MOD_MODE13_Pos                     26                                                      /*!< PA MOD: MODE13 Position                 */
#define PA_MOD_MODE13_Msk                     (0x03UL << PA_MOD_MODE13_Pos)                           /*!< PA MOD: MODE13 Mask                     */
#define PA_MOD_MODE14_Pos                     28                                                      /*!< PA MOD: MODE14 Position                 */
#define PA_MOD_MODE14_Msk                     (0x03UL << PA_MOD_MODE14_Pos)                           /*!< PA MOD: MODE14 Mask                     */
#define PA_MOD_MODE15_Pos                     30                                                      /*!< PA MOD: MODE15 Position                 */
#define PA_MOD_MODE15_Msk                     (0x03UL << PA_MOD_MODE15_Pos)                           /*!< PA MOD: MODE15 Mask                     */

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
#define PA_TYP_TYP8_Pos                       8                                                       /*!< PA TYP: TYP8 Position                   */
#define PA_TYP_TYP8_Msk                       (0x01UL << PA_TYP_TYP8_Pos)                             /*!< PA TYP: TYP8 Mask                       */
#define PA_TYP_TYP9_Pos                       9                                                       /*!< PA TYP: TYP9 Position                   */
#define PA_TYP_TYP9_Msk                       (0x01UL << PA_TYP_TYP9_Pos)                             /*!< PA TYP: TYP9 Mask                       */
#define PA_TYP_TYP10_Pos                      10                                                      /*!< PA TYP: TYP10 Position                  */
#define PA_TYP_TYP10_Msk                      (0x01UL << PA_TYP_TYP10_Pos)                            /*!< PA TYP: TYP10 Mask                      */
#define PA_TYP_TYP11_Pos                      11                                                      /*!< PA TYP: TYP11 Position                  */
#define PA_TYP_TYP11_Msk                      (0x01UL << PA_TYP_TYP11_Pos)                            /*!< PA TYP: TYP11 Mask                      */
#define PA_TYP_TYP12_Pos                      12                                                      /*!< PA TYP: TYP12 Position                  */
#define PA_TYP_TYP12_Msk                      (0x01UL << PA_TYP_TYP12_Pos)                            /*!< PA TYP: TYP12 Mask                      */
#define PA_TYP_TYP13_Pos                      13                                                      /*!< PA TYP: TYP13 Position                  */
#define PA_TYP_TYP13_Msk                      (0x01UL << PA_TYP_TYP13_Pos)                            /*!< PA TYP: TYP13 Mask                      */
#define PA_TYP_TYP14_Pos                      14                                                      /*!< PA TYP: TYP14 Position                  */
#define PA_TYP_TYP14_Msk                      (0x01UL << PA_TYP_TYP14_Pos)                            /*!< PA TYP: TYP14 Mask                      */
#define PA_TYP_TYP15_Pos                      15                                                      /*!< PA TYP: TYP15 Position                  */
#define PA_TYP_TYP15_Msk                      (0x01UL << PA_TYP_TYP15_Pos)                            /*!< PA TYP: TYP15 Mask                      */

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

/* ----------------------------------  PA_AFSR2  ---------------------------------- */
#define PA_AFSR2_AFSR8_Pos                    0                                                       /*!< PA AFSR2: AFSR8 Position                */
#define PA_AFSR2_AFSR8_Msk                    (0x0fUL << PA_AFSR2_AFSR8_Pos)                          /*!< PA AFSR2: AFSR8 Mask                    */
#define PA_AFSR2_AFSR9_Pos                    4                                                       /*!< PA AFSR2: AFSR9 Position                */
#define PA_AFSR2_AFSR9_Msk                    (0x0fUL << PA_AFSR2_AFSR9_Pos)                          /*!< PA AFSR2: AFSR9 Mask                    */
#define PA_AFSR2_AFSR10_Pos                   8                                                       /*!< PA AFSR2: AFSR10 Position               */
#define PA_AFSR2_AFSR10_Msk                   (0x0fUL << PA_AFSR2_AFSR10_Pos)                         /*!< PA AFSR2: AFSR10 Mask                   */
#define PA_AFSR2_AFSR11_Pos                   12                                                      /*!< PA AFSR2: AFSR11 Position               */
#define PA_AFSR2_AFSR11_Msk                   (0x0fUL << PA_AFSR2_AFSR11_Pos)                         /*!< PA AFSR2: AFSR11 Mask                   */
#define PA_AFSR2_AFSR12_Pos                   16                                                      /*!< PA AFSR2: AFSR12 Position               */
#define PA_AFSR2_AFSR12_Msk                   (0x0fUL << PA_AFSR2_AFSR12_Pos)                         /*!< PA AFSR2: AFSR12 Mask                   */
#define PA_AFSR2_AFSR13_Pos                   20                                                      /*!< PA AFSR2: AFSR13 Position               */
#define PA_AFSR2_AFSR13_Msk                   (0x0fUL << PA_AFSR2_AFSR13_Pos)                         /*!< PA AFSR2: AFSR13 Mask                   */
#define PA_AFSR2_AFSR14_Pos                   24                                                      /*!< PA AFSR2: AFSR14 Position               */
#define PA_AFSR2_AFSR14_Msk                   (0x0fUL << PA_AFSR2_AFSR14_Pos)                         /*!< PA AFSR2: AFSR14 Mask                   */
#define PA_AFSR2_AFSR15_Pos                   28                                                      /*!< PA AFSR2: AFSR15 Position               */
#define PA_AFSR2_AFSR15_Msk                   (0x0fUL << PA_AFSR2_AFSR15_Pos)                         /*!< PA AFSR2: AFSR15 Mask                   */

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
#define PA_PUPD_PUPD8_Pos                     16                                                      /*!< PA PUPD: PUPD8 Position                 */
#define PA_PUPD_PUPD8_Msk                     (0x03UL << PA_PUPD_PUPD8_Pos)                           /*!< PA PUPD: PUPD8 Mask                     */
#define PA_PUPD_PUPD9_Pos                     18                                                      /*!< PA PUPD: PUPD9 Position                 */
#define PA_PUPD_PUPD9_Msk                     (0x03UL << PA_PUPD_PUPD9_Pos)                           /*!< PA PUPD: PUPD9 Mask                     */
#define PA_PUPD_PUPD10_Pos                    20                                                      /*!< PA PUPD: PUPD10 Position                */
#define PA_PUPD_PUPD10_Msk                    (0x03UL << PA_PUPD_PUPD10_Pos)                          /*!< PA PUPD: PUPD10 Mask                    */
#define PA_PUPD_PUPD11_Pos                    22                                                      /*!< PA PUPD: PUPD11 Position                */
#define PA_PUPD_PUPD11_Msk                    (0x03UL << PA_PUPD_PUPD11_Pos)                          /*!< PA PUPD: PUPD11 Mask                    */
#define PA_PUPD_PUPD12_Pos                    24                                                      /*!< PA PUPD: PUPD12 Position                */
#define PA_PUPD_PUPD12_Msk                    (0x03UL << PA_PUPD_PUPD12_Pos)                          /*!< PA PUPD: PUPD12 Mask                    */
#define PA_PUPD_PUPD13_Pos                    26                                                      /*!< PA PUPD: PUPD13 Position                */
#define PA_PUPD_PUPD13_Msk                    (0x03UL << PA_PUPD_PUPD13_Pos)                          /*!< PA PUPD: PUPD13 Mask                    */
#define PA_PUPD_PUPD14_Pos                    28                                                      /*!< PA PUPD: PUPD14 Position                */
#define PA_PUPD_PUPD14_Msk                    (0x03UL << PA_PUPD_PUPD14_Pos)                          /*!< PA PUPD: PUPD14 Mask                    */
#define PA_PUPD_PUPD15_Pos                    30                                                      /*!< PA PUPD: PUPD15 Position                */
#define PA_PUPD_PUPD15_Msk                    (0x03UL << PA_PUPD_PUPD15_Pos)                          /*!< PA PUPD: PUPD15 Mask                    */

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
#define PA_INDR_INDR8_Pos                     8                                                       /*!< PA INDR: INDR8 Position                 */
#define PA_INDR_INDR8_Msk                     (0x01UL << PA_INDR_INDR8_Pos)                           /*!< PA INDR: INDR8 Mask                     */
#define PA_INDR_INDR9_Pos                     9                                                       /*!< PA INDR: INDR9 Position                 */
#define PA_INDR_INDR9_Msk                     (0x01UL << PA_INDR_INDR9_Pos)                           /*!< PA INDR: INDR9 Mask                     */
#define PA_INDR_INDR10_Pos                    10                                                      /*!< PA INDR: INDR10 Position                */
#define PA_INDR_INDR10_Msk                    (0x01UL << PA_INDR_INDR10_Pos)                          /*!< PA INDR: INDR10 Mask                    */
#define PA_INDR_INDR11_Pos                    11                                                      /*!< PA INDR: INDR11 Position                */
#define PA_INDR_INDR11_Msk                    (0x01UL << PA_INDR_INDR11_Pos)                          /*!< PA INDR: INDR11 Mask                    */
#define PA_INDR_INDR12_Pos                    12                                                      /*!< PA INDR: INDR12 Position                */
#define PA_INDR_INDR12_Msk                    (0x01UL << PA_INDR_INDR12_Pos)                          /*!< PA INDR: INDR12 Mask                    */
#define PA_INDR_INDR13_Pos                    13                                                      /*!< PA INDR: INDR13 Position                */
#define PA_INDR_INDR13_Msk                    (0x01UL << PA_INDR_INDR13_Pos)                          /*!< PA INDR: INDR13 Mask                    */
#define PA_INDR_INDR14_Pos                    14                                                      /*!< PA INDR: INDR14 Position                */
#define PA_INDR_INDR14_Msk                    (0x01UL << PA_INDR_INDR14_Pos)                          /*!< PA INDR: INDR14 Mask                    */
#define PA_INDR_INDR15_Pos                    15                                                      /*!< PA INDR: INDR15 Position                */
#define PA_INDR_INDR15_Msk                    (0x01UL << PA_INDR_INDR15_Pos)                          /*!< PA INDR: INDR15 Mask                    */

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
#define PA_OUTDR_OUTDR8_Pos                   8                                                       /*!< PA OUTDR: OUTDR8 Position               */
#define PA_OUTDR_OUTDR8_Msk                   (0x01UL << PA_OUTDR_OUTDR8_Pos)                         /*!< PA OUTDR: OUTDR8 Mask                   */
#define PA_OUTDR_OUTDR9_Pos                   9                                                       /*!< PA OUTDR: OUTDR9 Position               */
#define PA_OUTDR_OUTDR9_Msk                   (0x01UL << PA_OUTDR_OUTDR9_Pos)                         /*!< PA OUTDR: OUTDR9 Mask                   */
#define PA_OUTDR_OUTDR10_Pos                  10                                                      /*!< PA OUTDR: OUTDR10 Position              */
#define PA_OUTDR_OUTDR10_Msk                  (0x01UL << PA_OUTDR_OUTDR10_Pos)                        /*!< PA OUTDR: OUTDR10 Mask                  */
#define PA_OUTDR_OUTDR11_Pos                  11                                                      /*!< PA OUTDR: OUTDR11 Position              */
#define PA_OUTDR_OUTDR11_Msk                  (0x01UL << PA_OUTDR_OUTDR11_Pos)                        /*!< PA OUTDR: OUTDR11 Mask                  */
#define PA_OUTDR_OUTDR12_Pos                  12                                                      /*!< PA OUTDR: OUTDR12 Position              */
#define PA_OUTDR_OUTDR12_Msk                  (0x01UL << PA_OUTDR_OUTDR12_Pos)                        /*!< PA OUTDR: OUTDR12 Mask                  */
#define PA_OUTDR_OUTDR13_Pos                  13                                                      /*!< PA OUTDR: OUTDR13 Position              */
#define PA_OUTDR_OUTDR13_Msk                  (0x01UL << PA_OUTDR_OUTDR13_Pos)                        /*!< PA OUTDR: OUTDR13 Mask                  */
#define PA_OUTDR_OUTDR14_Pos                  14                                                      /*!< PA OUTDR: OUTDR14 Position              */
#define PA_OUTDR_OUTDR14_Msk                  (0x01UL << PA_OUTDR_OUTDR14_Pos)                        /*!< PA OUTDR: OUTDR14 Mask                  */
#define PA_OUTDR_OUTDR15_Pos                  15                                                      /*!< PA OUTDR: OUTDR15 Position              */
#define PA_OUTDR_OUTDR15_Msk                  (0x01UL << PA_OUTDR_OUTDR15_Pos)                        /*!< PA OUTDR: OUTDR15 Mask                  */

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
#define PA_BSR_BSR8_Pos                       8                                                       /*!< PA BSR: BSR8 Position                   */
#define PA_BSR_BSR8_Msk                       (0x01UL << PA_BSR_BSR8_Pos)                             /*!< PA BSR: BSR8 Mask                       */
#define PA_BSR_BSR9_Pos                       9                                                       /*!< PA BSR: BSR9 Position                   */
#define PA_BSR_BSR9_Msk                       (0x01UL << PA_BSR_BSR9_Pos)                             /*!< PA BSR: BSR9 Mask                       */
#define PA_BSR_BSR10_Pos                      10                                                      /*!< PA BSR: BSR10 Position                  */
#define PA_BSR_BSR10_Msk                      (0x01UL << PA_BSR_BSR10_Pos)                            /*!< PA BSR: BSR10 Mask                      */
#define PA_BSR_BSR11_Pos                      11                                                      /*!< PA BSR: BSR11 Position                  */
#define PA_BSR_BSR11_Msk                      (0x01UL << PA_BSR_BSR11_Pos)                            /*!< PA BSR: BSR11 Mask                      */
#define PA_BSR_BSR12_Pos                      12                                                      /*!< PA BSR: BSR12 Position                  */
#define PA_BSR_BSR12_Msk                      (0x01UL << PA_BSR_BSR12_Pos)                            /*!< PA BSR: BSR12 Mask                      */
#define PA_BSR_BSR13_Pos                      13                                                      /*!< PA BSR: BSR13 Position                  */
#define PA_BSR_BSR13_Msk                      (0x01UL << PA_BSR_BSR13_Pos)                            /*!< PA BSR: BSR13 Mask                      */
#define PA_BSR_BSR14_Pos                      14                                                      /*!< PA BSR: BSR14 Position                  */
#define PA_BSR_BSR14_Msk                      (0x01UL << PA_BSR_BSR14_Pos)                            /*!< PA BSR: BSR14 Mask                      */
#define PA_BSR_BSR15_Pos                      15                                                      /*!< PA BSR: BSR15 Position                  */
#define PA_BSR_BSR15_Msk                      (0x01UL << PA_BSR_BSR15_Pos)                            /*!< PA BSR: BSR15 Mask                      */

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
#define PA_BCR_BCR8_Pos                       8                                                       /*!< PA BCR: BCR8 Position                   */
#define PA_BCR_BCR8_Msk                       (0x01UL << PA_BCR_BCR8_Pos)                             /*!< PA BCR: BCR8 Mask                       */
#define PA_BCR_BCR9_Pos                       9                                                       /*!< PA BCR: BCR9 Position                   */
#define PA_BCR_BCR9_Msk                       (0x01UL << PA_BCR_BCR9_Pos)                             /*!< PA BCR: BCR9 Mask                       */
#define PA_BCR_BCR10_Pos                      10                                                      /*!< PA BCR: BCR10 Position                  */
#define PA_BCR_BCR10_Msk                      (0x01UL << PA_BCR_BCR10_Pos)                            /*!< PA BCR: BCR10 Mask                      */
#define PA_BCR_BCR11_Pos                      11                                                      /*!< PA BCR: BCR11 Position                  */
#define PA_BCR_BCR11_Msk                      (0x01UL << PA_BCR_BCR11_Pos)                            /*!< PA BCR: BCR11 Mask                      */
#define PA_BCR_BCR12_Pos                      12                                                      /*!< PA BCR: BCR12 Position                  */
#define PA_BCR_BCR12_Msk                      (0x01UL << PA_BCR_BCR12_Pos)                            /*!< PA BCR: BCR12 Mask                      */
#define PA_BCR_BCR13_Pos                      13                                                      /*!< PA BCR: BCR13 Position                  */
#define PA_BCR_BCR13_Msk                      (0x01UL << PA_BCR_BCR13_Pos)                            /*!< PA BCR: BCR13 Mask                      */
#define PA_BCR_BCR14_Pos                      14                                                      /*!< PA BCR: BCR14 Position                  */
#define PA_BCR_BCR14_Msk                      (0x01UL << PA_BCR_BCR14_Pos)                            /*!< PA BCR: BCR14 Mask                      */
#define PA_BCR_BCR15_Pos                      15                                                      /*!< PA BCR: BCR15 Position                  */
#define PA_BCR_BCR15_Msk                      (0x01UL << PA_BCR_BCR15_Pos)                            /*!< PA BCR: BCR15 Mask                      */

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
#define PA_OUTDMSK_OUTDMSK8_Pos               8                                                       /*!< PA OUTDMSK: OUTDMSK8 Position           */
#define PA_OUTDMSK_OUTDMSK8_Msk               (0x01UL << PA_OUTDMSK_OUTDMSK8_Pos)                     /*!< PA OUTDMSK: OUTDMSK8 Mask               */
#define PA_OUTDMSK_OUTDMSK9_Pos               9                                                       /*!< PA OUTDMSK: OUTDMSK9 Position           */
#define PA_OUTDMSK_OUTDMSK9_Msk               (0x01UL << PA_OUTDMSK_OUTDMSK9_Pos)                     /*!< PA OUTDMSK: OUTDMSK9 Mask               */
#define PA_OUTDMSK_OUTDMSK10_Pos              10                                                      /*!< PA OUTDMSK: OUTDMSK10 Position          */
#define PA_OUTDMSK_OUTDMSK10_Msk              (0x01UL << PA_OUTDMSK_OUTDMSK10_Pos)                    /*!< PA OUTDMSK: OUTDMSK10 Mask              */
#define PA_OUTDMSK_OUTDMSK11_Pos              11                                                      /*!< PA OUTDMSK: OUTDMSK11 Position          */
#define PA_OUTDMSK_OUTDMSK11_Msk              (0x01UL << PA_OUTDMSK_OUTDMSK11_Pos)                    /*!< PA OUTDMSK: OUTDMSK11 Mask              */
#define PA_OUTDMSK_OUTDMSK12_Pos              12                                                      /*!< PA OUTDMSK: OUTDMSK12 Position          */
#define PA_OUTDMSK_OUTDMSK12_Msk              (0x01UL << PA_OUTDMSK_OUTDMSK12_Pos)                    /*!< PA OUTDMSK: OUTDMSK12 Mask              */
#define PA_OUTDMSK_OUTDMSK13_Pos              13                                                      /*!< PA OUTDMSK: OUTDMSK13 Position          */
#define PA_OUTDMSK_OUTDMSK13_Msk              (0x01UL << PA_OUTDMSK_OUTDMSK13_Pos)                    /*!< PA OUTDMSK: OUTDMSK13 Mask              */
#define PA_OUTDMSK_OUTDMSK14_Pos              14                                                      /*!< PA OUTDMSK: OUTDMSK14 Position          */
#define PA_OUTDMSK_OUTDMSK14_Msk              (0x01UL << PA_OUTDMSK_OUTDMSK14_Pos)                    /*!< PA OUTDMSK: OUTDMSK14 Mask              */
#define PA_OUTDMSK_OUTDMSK15_Pos              15                                                      /*!< PA OUTDMSK: OUTDMSK15 Position          */
#define PA_OUTDMSK_OUTDMSK15_Msk              (0x01UL << PA_OUTDMSK_OUTDMSK15_Pos)                    /*!< PA OUTDMSK: OUTDMSK15 Mask              */

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
#define PA_DBCR_DBEN8_Pos                     8                                                       /*!< PA DBCR: DBEN8 Position                 */
#define PA_DBCR_DBEN8_Msk                     (0x01UL << PA_DBCR_DBEN8_Pos)                           /*!< PA DBCR: DBEN8 Mask                     */
#define PA_DBCR_DBEN9_Pos                     9                                                       /*!< PA DBCR: DBEN9 Position                 */
#define PA_DBCR_DBEN9_Msk                     (0x01UL << PA_DBCR_DBEN9_Pos)                           /*!< PA DBCR: DBEN9 Mask                     */
#define PA_DBCR_DBEN10_Pos                    10                                                      /*!< PA DBCR: DBEN10 Position                */
#define PA_DBCR_DBEN10_Msk                    (0x01UL << PA_DBCR_DBEN10_Pos)                          /*!< PA DBCR: DBEN10 Mask                    */
#define PA_DBCR_DBEN11_Pos                    11                                                      /*!< PA DBCR: DBEN11 Position                */
#define PA_DBCR_DBEN11_Msk                    (0x01UL << PA_DBCR_DBEN11_Pos)                          /*!< PA DBCR: DBEN11 Mask                    */
#define PA_DBCR_DBEN12_Pos                    12                                                      /*!< PA DBCR: DBEN12 Position                */
#define PA_DBCR_DBEN12_Msk                    (0x01UL << PA_DBCR_DBEN12_Pos)                          /*!< PA DBCR: DBEN12 Mask                    */
#define PA_DBCR_DBEN13_Pos                    13                                                      /*!< PA DBCR: DBEN13 Position                */
#define PA_DBCR_DBEN13_Msk                    (0x01UL << PA_DBCR_DBEN13_Pos)                          /*!< PA DBCR: DBEN13 Mask                    */
#define PA_DBCR_DBEN14_Pos                    14                                                      /*!< PA DBCR: DBEN14 Position                */
#define PA_DBCR_DBEN14_Msk                    (0x01UL << PA_DBCR_DBEN14_Pos)                          /*!< PA DBCR: DBEN14 Mask                    */
#define PA_DBCR_DBEN15_Pos                    15                                                      /*!< PA DBCR: DBEN15 Position                */
#define PA_DBCR_DBEN15_Msk                    (0x01UL << PA_DBCR_DBEN15_Pos)                          /*!< PA DBCR: DBEN15 Mask                    */

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
#define PA_IER_P8_Pos                         16                                                      /*!< PA IER: P8 Position                     */
#define PA_IER_P8_Msk                         (0x03UL << PA_IER_P8_Pos)                               /*!< PA IER: P8 Mask                         */
#define PA_IER_P9_Pos                         18                                                      /*!< PA IER: P9 Position                     */
#define PA_IER_P9_Msk                         (0x03UL << PA_IER_P9_Pos)                               /*!< PA IER: P9 Mask                         */
#define PA_IER_P10_Pos                        20                                                      /*!< PA IER: P10 Position                    */
#define PA_IER_P10_Msk                        (0x03UL << PA_IER_P10_Pos)                              /*!< PA IER: P10 Mask                        */
#define PA_IER_P11_Pos                        22                                                      /*!< PA IER: P11 Position                    */
#define PA_IER_P11_Msk                        (0x03UL << PA_IER_P11_Pos)                              /*!< PA IER: P11 Mask                        */
#define PA_IER_P12_Pos                        24                                                      /*!< PA IER: P12 Position                    */
#define PA_IER_P12_Msk                        (0x03UL << PA_IER_P12_Pos)                              /*!< PA IER: P12 Mask                        */
#define PA_IER_P13_Pos                        26                                                      /*!< PA IER: P13 Position                    */
#define PA_IER_P13_Msk                        (0x03UL << PA_IER_P13_Pos)                              /*!< PA IER: P13 Mask                        */
#define PA_IER_P14_Pos                        28                                                      /*!< PA IER: P14 Position                    */
#define PA_IER_P14_Msk                        (0x03UL << PA_IER_P14_Pos)                              /*!< PA IER: P14 Mask                        */
#define PA_IER_P15_Pos                        30                                                      /*!< PA IER: P15 Position                    */
#define PA_IER_P15_Msk                        (0x03UL << PA_IER_P15_Pos)                              /*!< PA IER: P15 Mask                        */

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
#define PA_ISR_P8_Pos                         16                                                      /*!< PA ISR: P8 Position                     */
#define PA_ISR_P8_Msk                         (0x03UL << PA_ISR_P8_Pos)                               /*!< PA ISR: P8 Mask                         */
#define PA_ISR_P9_Pos                         18                                                      /*!< PA ISR: P9 Position                     */
#define PA_ISR_P9_Msk                         (0x03UL << PA_ISR_P9_Pos)                               /*!< PA ISR: P9 Mask                         */
#define PA_ISR_P10_Pos                        20                                                      /*!< PA ISR: P10 Position                    */
#define PA_ISR_P10_Msk                        (0x03UL << PA_ISR_P10_Pos)                              /*!< PA ISR: P10 Mask                        */
#define PA_ISR_P11_Pos                        22                                                      /*!< PA ISR: P11 Position                    */
#define PA_ISR_P11_Msk                        (0x03UL << PA_ISR_P11_Pos)                              /*!< PA ISR: P11 Mask                        */
#define PA_ISR_P12_Pos                        24                                                      /*!< PA ISR: P12 Position                    */
#define PA_ISR_P12_Msk                        (0x03UL << PA_ISR_P12_Pos)                              /*!< PA ISR: P12 Mask                        */
#define PA_ISR_P13_Pos                        26                                                      /*!< PA ISR: P13 Position                    */
#define PA_ISR_P13_Msk                        (0x03UL << PA_ISR_P13_Pos)                              /*!< PA ISR: P13 Mask                        */
#define PA_ISR_P14_Pos                        28                                                      /*!< PA ISR: P14 Position                    */
#define PA_ISR_P14_Msk                        (0x03UL << PA_ISR_P14_Pos)                              /*!< PA ISR: P14 Mask                        */
#define PA_ISR_P15_Pos                        30                                                      /*!< PA ISR: P15 Position                    */
#define PA_ISR_P15_Msk                        (0x03UL << PA_ISR_P15_Pos)                              /*!< PA ISR: P15 Mask                        */

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
#define PA_ICR_P8_Pos                         16                                                      /*!< PA ICR: P8 Position                     */
#define PA_ICR_P8_Msk                         (0x03UL << PA_ICR_P8_Pos)                               /*!< PA ICR: P8 Mask                         */
#define PA_ICR_P9_Pos                         18                                                      /*!< PA ICR: P9 Position                     */
#define PA_ICR_P9_Msk                         (0x03UL << PA_ICR_P9_Pos)                               /*!< PA ICR: P9 Mask                         */
#define PA_ICR_P10_Pos                        20                                                      /*!< PA ICR: P10 Position                    */
#define PA_ICR_P10_Msk                        (0x03UL << PA_ICR_P10_Pos)                              /*!< PA ICR: P10 Mask                        */
#define PA_ICR_P11_Pos                        22                                                      /*!< PA ICR: P11 Position                    */
#define PA_ICR_P11_Msk                        (0x03UL << PA_ICR_P11_Pos)                              /*!< PA ICR: P11 Mask                        */
#define PA_ICR_P12_Pos                        24                                                      /*!< PA ICR: P12 Position                    */
#define PA_ICR_P12_Msk                        (0x03UL << PA_ICR_P12_Pos)                              /*!< PA ICR: P12 Mask                        */
#define PA_ICR_P13_Pos                        26                                                      /*!< PA ICR: P13 Position                    */
#define PA_ICR_P13_Msk                        (0x03UL << PA_ICR_P13_Pos)                              /*!< PA ICR: P13 Mask                        */
#define PA_ICR_P14_Pos                        28                                                      /*!< PA ICR: P14 Position                    */
#define PA_ICR_P14_Msk                        (0x03UL << PA_ICR_P14_Pos)                              /*!< PA ICR: P14 Mask                        */
#define PA_ICR_P15_Pos                        30                                                      /*!< PA ICR: P15 Position                    */
#define PA_ICR_P15_Msk                        (0x03UL << PA_ICR_P15_Pos)                              /*!< PA ICR: P15 Mask                        */


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
#define PB_MOD_MODE8_Pos                      16                                                      /*!< PB MOD: MODE8 Position                  */
#define PB_MOD_MODE8_Msk                      (0x03UL << PB_MOD_MODE8_Pos)                            /*!< PB MOD: MODE8 Mask                      */
#define PB_MOD_MODE9_Pos                      18                                                      /*!< PB MOD: MODE9 Position                  */
#define PB_MOD_MODE9_Msk                      (0x03UL << PB_MOD_MODE9_Pos)                            /*!< PB MOD: MODE9 Mask                      */
#define PB_MOD_MODE10_Pos                     20                                                      /*!< PB MOD: MODE10 Position                 */
#define PB_MOD_MODE10_Msk                     (0x03UL << PB_MOD_MODE10_Pos)                           /*!< PB MOD: MODE10 Mask                     */
#define PB_MOD_MODE11_Pos                     22                                                      /*!< PB MOD: MODE11 Position                 */
#define PB_MOD_MODE11_Msk                     (0x03UL << PB_MOD_MODE11_Pos)                           /*!< PB MOD: MODE11 Mask                     */
#define PB_MOD_MODE12_Pos                     24                                                      /*!< PB MOD: MODE12 Position                 */
#define PB_MOD_MODE12_Msk                     (0x03UL << PB_MOD_MODE12_Pos)                           /*!< PB MOD: MODE12 Mask                     */
#define PB_MOD_MODE13_Pos                     26                                                      /*!< PB MOD: MODE13 Position                 */
#define PB_MOD_MODE13_Msk                     (0x03UL << PB_MOD_MODE13_Pos)                           /*!< PB MOD: MODE13 Mask                     */
#define PB_MOD_MODE14_Pos                     28                                                      /*!< PB MOD: MODE14 Position                 */
#define PB_MOD_MODE14_Msk                     (0x03UL << PB_MOD_MODE14_Pos)                           /*!< PB MOD: MODE14 Mask                     */
#define PB_MOD_MODE15_Pos                     30                                                      /*!< PB MOD: MODE15 Position                 */
#define PB_MOD_MODE15_Msk                     (0x03UL << PB_MOD_MODE15_Pos)                           /*!< PB MOD: MODE15 Mask                     */

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
#define PB_TYP_TYP8_Pos                       8                                                       /*!< PB TYP: TYP8 Position                   */
#define PB_TYP_TYP8_Msk                       (0x01UL << PB_TYP_TYP8_Pos)                             /*!< PB TYP: TYP8 Mask                       */
#define PB_TYP_TYP9_Pos                       9                                                       /*!< PB TYP: TYP9 Position                   */
#define PB_TYP_TYP9_Msk                       (0x01UL << PB_TYP_TYP9_Pos)                             /*!< PB TYP: TYP9 Mask                       */
#define PB_TYP_TYP10_Pos                      10                                                      /*!< PB TYP: TYP10 Position                  */
#define PB_TYP_TYP10_Msk                      (0x01UL << PB_TYP_TYP10_Pos)                            /*!< PB TYP: TYP10 Mask                      */
#define PB_TYP_TYP11_Pos                      11                                                      /*!< PB TYP: TYP11 Position                  */
#define PB_TYP_TYP11_Msk                      (0x01UL << PB_TYP_TYP11_Pos)                            /*!< PB TYP: TYP11 Mask                      */
#define PB_TYP_TYP12_Pos                      12                                                      /*!< PB TYP: TYP12 Position                  */
#define PB_TYP_TYP12_Msk                      (0x01UL << PB_TYP_TYP12_Pos)                            /*!< PB TYP: TYP12 Mask                      */
#define PB_TYP_TYP13_Pos                      13                                                      /*!< PB TYP: TYP13 Position                  */
#define PB_TYP_TYP13_Msk                      (0x01UL << PB_TYP_TYP13_Pos)                            /*!< PB TYP: TYP13 Mask                      */
#define PB_TYP_TYP14_Pos                      14                                                      /*!< PB TYP: TYP14 Position                  */
#define PB_TYP_TYP14_Msk                      (0x01UL << PB_TYP_TYP14_Pos)                            /*!< PB TYP: TYP14 Mask                      */
#define PB_TYP_TYP15_Pos                      15                                                      /*!< PB TYP: TYP15 Position                  */
#define PB_TYP_TYP15_Msk                      (0x01UL << PB_TYP_TYP15_Pos)                            /*!< PB TYP: TYP15 Mask                      */

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

/* ----------------------------------  PB_AFSR2  ---------------------------------- */
#define PB_AFSR2_AFSR8_Pos                    0                                                       /*!< PB AFSR2: AFSR8 Position                */
#define PB_AFSR2_AFSR8_Msk                    (0x0fUL << PB_AFSR2_AFSR8_Pos)                          /*!< PB AFSR2: AFSR8 Mask                    */
#define PB_AFSR2_AFSR9_Pos                    4                                                       /*!< PB AFSR2: AFSR9 Position                */
#define PB_AFSR2_AFSR9_Msk                    (0x0fUL << PB_AFSR2_AFSR9_Pos)                          /*!< PB AFSR2: AFSR9 Mask                    */
#define PB_AFSR2_AFSR10_Pos                   8                                                       /*!< PB AFSR2: AFSR10 Position               */
#define PB_AFSR2_AFSR10_Msk                   (0x0fUL << PB_AFSR2_AFSR10_Pos)                         /*!< PB AFSR2: AFSR10 Mask                   */
#define PB_AFSR2_AFSR11_Pos                   12                                                      /*!< PB AFSR2: AFSR11 Position               */
#define PB_AFSR2_AFSR11_Msk                   (0x0fUL << PB_AFSR2_AFSR11_Pos)                         /*!< PB AFSR2: AFSR11 Mask                   */
#define PB_AFSR2_AFSR12_Pos                   16                                                      /*!< PB AFSR2: AFSR12 Position               */
#define PB_AFSR2_AFSR12_Msk                   (0x0fUL << PB_AFSR2_AFSR12_Pos)                         /*!< PB AFSR2: AFSR12 Mask                   */
#define PB_AFSR2_AFSR13_Pos                   20                                                      /*!< PB AFSR2: AFSR13 Position               */
#define PB_AFSR2_AFSR13_Msk                   (0x0fUL << PB_AFSR2_AFSR13_Pos)                         /*!< PB AFSR2: AFSR13 Mask                   */
#define PB_AFSR2_AFSR14_Pos                   24                                                      /*!< PB AFSR2: AFSR14 Position               */
#define PB_AFSR2_AFSR14_Msk                   (0x0fUL << PB_AFSR2_AFSR14_Pos)                         /*!< PB AFSR2: AFSR14 Mask                   */
#define PB_AFSR2_AFSR15_Pos                   28                                                      /*!< PB AFSR2: AFSR15 Position               */
#define PB_AFSR2_AFSR15_Msk                   (0x0fUL << PB_AFSR2_AFSR15_Pos)                         /*!< PB AFSR2: AFSR15 Mask                   */

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
#define PB_PUPD_PUPD8_Pos                     16                                                      /*!< PB PUPD: PUPD8 Position                 */
#define PB_PUPD_PUPD8_Msk                     (0x03UL << PB_PUPD_PUPD8_Pos)                           /*!< PB PUPD: PUPD8 Mask                     */
#define PB_PUPD_PUPD9_Pos                     18                                                      /*!< PB PUPD: PUPD9 Position                 */
#define PB_PUPD_PUPD9_Msk                     (0x03UL << PB_PUPD_PUPD9_Pos)                           /*!< PB PUPD: PUPD9 Mask                     */
#define PB_PUPD_PUPD10_Pos                    20                                                      /*!< PB PUPD: PUPD10 Position                */
#define PB_PUPD_PUPD10_Msk                    (0x03UL << PB_PUPD_PUPD10_Pos)                          /*!< PB PUPD: PUPD10 Mask                    */
#define PB_PUPD_PUPD11_Pos                    22                                                      /*!< PB PUPD: PUPD11 Position                */
#define PB_PUPD_PUPD11_Msk                    (0x03UL << PB_PUPD_PUPD11_Pos)                          /*!< PB PUPD: PUPD11 Mask                    */
#define PB_PUPD_PUPD12_Pos                    24                                                      /*!< PB PUPD: PUPD12 Position                */
#define PB_PUPD_PUPD12_Msk                    (0x03UL << PB_PUPD_PUPD12_Pos)                          /*!< PB PUPD: PUPD12 Mask                    */
#define PB_PUPD_PUPD13_Pos                    26                                                      /*!< PB PUPD: PUPD13 Position                */
#define PB_PUPD_PUPD13_Msk                    (0x03UL << PB_PUPD_PUPD13_Pos)                          /*!< PB PUPD: PUPD13 Mask                    */
#define PB_PUPD_PUPD14_Pos                    28                                                      /*!< PB PUPD: PUPD14 Position                */
#define PB_PUPD_PUPD14_Msk                    (0x03UL << PB_PUPD_PUPD14_Pos)                          /*!< PB PUPD: PUPD14 Mask                    */
#define PB_PUPD_PUPD15_Pos                    30                                                      /*!< PB PUPD: PUPD15 Position                */
#define PB_PUPD_PUPD15_Msk                    (0x03UL << PB_PUPD_PUPD15_Pos)                          /*!< PB PUPD: PUPD15 Mask                    */

/* -----------------------------------  PB_INDR  ---------------------------------- */
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
#define PB_INDR_INDR8_Pos                     8                                                       /*!< PB INDR: INDR8 Position                 */
#define PB_INDR_INDR8_Msk                     (0x01UL << PB_INDR_INDR8_Pos)                           /*!< PB INDR: INDR8 Mask                     */
#define PB_INDR_INDR9_Pos                     9                                                       /*!< PB INDR: INDR9 Position                 */
#define PB_INDR_INDR9_Msk                     (0x01UL << PB_INDR_INDR9_Pos)                           /*!< PB INDR: INDR9 Mask                     */
#define PB_INDR_INDR10_Pos                    10                                                      /*!< PB INDR: INDR10 Position                */
#define PB_INDR_INDR10_Msk                    (0x01UL << PB_INDR_INDR10_Pos)                          /*!< PB INDR: INDR10 Mask                    */
#define PB_INDR_INDR11_Pos                    11                                                      /*!< PB INDR: INDR11 Position                */
#define PB_INDR_INDR11_Msk                    (0x01UL << PB_INDR_INDR11_Pos)                          /*!< PB INDR: INDR11 Mask                    */
#define PB_INDR_INDR12_Pos                    12                                                      /*!< PB INDR: INDR12 Position                */
#define PB_INDR_INDR12_Msk                    (0x01UL << PB_INDR_INDR12_Pos)                          /*!< PB INDR: INDR12 Mask                    */
#define PB_INDR_INDR13_Pos                    13                                                      /*!< PB INDR: INDR13 Position                */
#define PB_INDR_INDR13_Msk                    (0x01UL << PB_INDR_INDR13_Pos)                          /*!< PB INDR: INDR13 Mask                    */
#define PB_INDR_INDR14_Pos                    14                                                      /*!< PB INDR: INDR14 Position                */
#define PB_INDR_INDR14_Msk                    (0x01UL << PB_INDR_INDR14_Pos)                          /*!< PB INDR: INDR14 Mask                    */
#define PB_INDR_INDR15_Pos                    15                                                      /*!< PB INDR: INDR15 Position                */
#define PB_INDR_INDR15_Msk                    (0x01UL << PB_INDR_INDR15_Pos)                          /*!< PB INDR: INDR15 Mask                    */

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
#define PB_OUTDR_OUTDR8_Pos                   8                                                       /*!< PB OUTDR: OUTDR8 Position               */
#define PB_OUTDR_OUTDR8_Msk                   (0x01UL << PB_OUTDR_OUTDR8_Pos)                         /*!< PB OUTDR: OUTDR8 Mask                   */
#define PB_OUTDR_OUTDR9_Pos                   9                                                       /*!< PB OUTDR: OUTDR9 Position               */
#define PB_OUTDR_OUTDR9_Msk                   (0x01UL << PB_OUTDR_OUTDR9_Pos)                         /*!< PB OUTDR: OUTDR9 Mask                   */
#define PB_OUTDR_OUTDR10_Pos                  10                                                      /*!< PB OUTDR: OUTDR10 Position              */
#define PB_OUTDR_OUTDR10_Msk                  (0x01UL << PB_OUTDR_OUTDR10_Pos)                        /*!< PB OUTDR: OUTDR10 Mask                  */
#define PB_OUTDR_OUTDR11_Pos                  11                                                      /*!< PB OUTDR: OUTDR11 Position              */
#define PB_OUTDR_OUTDR11_Msk                  (0x01UL << PB_OUTDR_OUTDR11_Pos)                        /*!< PB OUTDR: OUTDR11 Mask                  */
#define PB_OUTDR_OUTDR12_Pos                  12                                                      /*!< PB OUTDR: OUTDR12 Position              */
#define PB_OUTDR_OUTDR12_Msk                  (0x01UL << PB_OUTDR_OUTDR12_Pos)                        /*!< PB OUTDR: OUTDR12 Mask                  */
#define PB_OUTDR_OUTDR13_Pos                  13                                                      /*!< PB OUTDR: OUTDR13 Position              */
#define PB_OUTDR_OUTDR13_Msk                  (0x01UL << PB_OUTDR_OUTDR13_Pos)                        /*!< PB OUTDR: OUTDR13 Mask                  */
#define PB_OUTDR_OUTDR14_Pos                  14                                                      /*!< PB OUTDR: OUTDR14 Position              */
#define PB_OUTDR_OUTDR14_Msk                  (0x01UL << PB_OUTDR_OUTDR14_Pos)                        /*!< PB OUTDR: OUTDR14 Mask                  */
#define PB_OUTDR_OUTDR15_Pos                  15                                                      /*!< PB OUTDR: OUTDR15 Position              */
#define PB_OUTDR_OUTDR15_Msk                  (0x01UL << PB_OUTDR_OUTDR15_Pos)                        /*!< PB OUTDR: OUTDR15 Mask                  */

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
#define PB_BSR_BSR8_Pos                       8                                                       /*!< PB BSR: BSR8 Position                   */
#define PB_BSR_BSR8_Msk                       (0x01UL << PB_BSR_BSR8_Pos)                             /*!< PB BSR: BSR8 Mask                       */
#define PB_BSR_BSR9_Pos                       9                                                       /*!< PB BSR: BSR9 Position                   */
#define PB_BSR_BSR9_Msk                       (0x01UL << PB_BSR_BSR9_Pos)                             /*!< PB BSR: BSR9 Mask                       */
#define PB_BSR_BSR10_Pos                      10                                                      /*!< PB BSR: BSR10 Position                  */
#define PB_BSR_BSR10_Msk                      (0x01UL << PB_BSR_BSR10_Pos)                            /*!< PB BSR: BSR10 Mask                      */
#define PB_BSR_BSR11_Pos                      11                                                      /*!< PB BSR: BSR11 Position                  */
#define PB_BSR_BSR11_Msk                      (0x01UL << PB_BSR_BSR11_Pos)                            /*!< PB BSR: BSR11 Mask                      */
#define PB_BSR_BSR12_Pos                      12                                                      /*!< PB BSR: BSR12 Position                  */
#define PB_BSR_BSR12_Msk                      (0x01UL << PB_BSR_BSR12_Pos)                            /*!< PB BSR: BSR12 Mask                      */
#define PB_BSR_BSR13_Pos                      13                                                      /*!< PB BSR: BSR13 Position                  */
#define PB_BSR_BSR13_Msk                      (0x01UL << PB_BSR_BSR13_Pos)                            /*!< PB BSR: BSR13 Mask                      */
#define PB_BSR_BSR14_Pos                      14                                                      /*!< PB BSR: BSR14 Position                  */
#define PB_BSR_BSR14_Msk                      (0x01UL << PB_BSR_BSR14_Pos)                            /*!< PB BSR: BSR14 Mask                      */
#define PB_BSR_BSR15_Pos                      15                                                      /*!< PB BSR: BSR15 Position                  */
#define PB_BSR_BSR15_Msk                      (0x01UL << PB_BSR_BSR15_Pos)                            /*!< PB BSR: BSR15 Mask                      */

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
#define PB_BCR_BCR8_Pos                       8                                                       /*!< PB BCR: BCR8 Position                   */
#define PB_BCR_BCR8_Msk                       (0x01UL << PB_BCR_BCR8_Pos)                             /*!< PB BCR: BCR8 Mask                       */
#define PB_BCR_BCR9_Pos                       9                                                       /*!< PB BCR: BCR9 Position                   */
#define PB_BCR_BCR9_Msk                       (0x01UL << PB_BCR_BCR9_Pos)                             /*!< PB BCR: BCR9 Mask                       */
#define PB_BCR_BCR10_Pos                      10                                                      /*!< PB BCR: BCR10 Position                  */
#define PB_BCR_BCR10_Msk                      (0x01UL << PB_BCR_BCR10_Pos)                            /*!< PB BCR: BCR10 Mask                      */
#define PB_BCR_BCR11_Pos                      11                                                      /*!< PB BCR: BCR11 Position                  */
#define PB_BCR_BCR11_Msk                      (0x01UL << PB_BCR_BCR11_Pos)                            /*!< PB BCR: BCR11 Mask                      */
#define PB_BCR_BCR12_Pos                      12                                                      /*!< PB BCR: BCR12 Position                  */
#define PB_BCR_BCR12_Msk                      (0x01UL << PB_BCR_BCR12_Pos)                            /*!< PB BCR: BCR12 Mask                      */
#define PB_BCR_BCR13_Pos                      13                                                      /*!< PB BCR: BCR13 Position                  */
#define PB_BCR_BCR13_Msk                      (0x01UL << PB_BCR_BCR13_Pos)                            /*!< PB BCR: BCR13 Mask                      */
#define PB_BCR_BCR14_Pos                      14                                                      /*!< PB BCR: BCR14 Position                  */
#define PB_BCR_BCR14_Msk                      (0x01UL << PB_BCR_BCR14_Pos)                            /*!< PB BCR: BCR14 Mask                      */
#define PB_BCR_BCR15_Pos                      15                                                      /*!< PB BCR: BCR15 Position                  */
#define PB_BCR_BCR15_Msk                      (0x01UL << PB_BCR_BCR15_Pos)                            /*!< PB BCR: BCR15 Mask                      */

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
#define PB_OUTDMSK_OUTDMSK8_Pos               8                                                       /*!< PB OUTDMSK: OUTDMSK8 Position           */
#define PB_OUTDMSK_OUTDMSK8_Msk               (0x01UL << PB_OUTDMSK_OUTDMSK8_Pos)                     /*!< PB OUTDMSK: OUTDMSK8 Mask               */
#define PB_OUTDMSK_OUTDMSK9_Pos               9                                                       /*!< PB OUTDMSK: OUTDMSK9 Position           */
#define PB_OUTDMSK_OUTDMSK9_Msk               (0x01UL << PB_OUTDMSK_OUTDMSK9_Pos)                     /*!< PB OUTDMSK: OUTDMSK9 Mask               */
#define PB_OUTDMSK_OUTDMSK10_Pos              10                                                      /*!< PB OUTDMSK: OUTDMSK10 Position          */
#define PB_OUTDMSK_OUTDMSK10_Msk              (0x01UL << PB_OUTDMSK_OUTDMSK10_Pos)                    /*!< PB OUTDMSK: OUTDMSK10 Mask              */
#define PB_OUTDMSK_OUTDMSK11_Pos              11                                                      /*!< PB OUTDMSK: OUTDMSK11 Position          */
#define PB_OUTDMSK_OUTDMSK11_Msk              (0x01UL << PB_OUTDMSK_OUTDMSK11_Pos)                    /*!< PB OUTDMSK: OUTDMSK11 Mask              */
#define PB_OUTDMSK_OUTDMSK12_Pos              12                                                      /*!< PB OUTDMSK: OUTDMSK12 Position          */
#define PB_OUTDMSK_OUTDMSK12_Msk              (0x01UL << PB_OUTDMSK_OUTDMSK12_Pos)                    /*!< PB OUTDMSK: OUTDMSK12 Mask              */
#define PB_OUTDMSK_OUTDMSK13_Pos              13                                                      /*!< PB OUTDMSK: OUTDMSK13 Position          */
#define PB_OUTDMSK_OUTDMSK13_Msk              (0x01UL << PB_OUTDMSK_OUTDMSK13_Pos)                    /*!< PB OUTDMSK: OUTDMSK13 Mask              */
#define PB_OUTDMSK_OUTDMSK14_Pos              14                                                      /*!< PB OUTDMSK: OUTDMSK14 Position          */
#define PB_OUTDMSK_OUTDMSK14_Msk              (0x01UL << PB_OUTDMSK_OUTDMSK14_Pos)                    /*!< PB OUTDMSK: OUTDMSK14 Mask              */
#define PB_OUTDMSK_OUTDMSK15_Pos              15                                                      /*!< PB OUTDMSK: OUTDMSK15 Position          */
#define PB_OUTDMSK_OUTDMSK15_Msk              (0x01UL << PB_OUTDMSK_OUTDMSK15_Pos)                    /*!< PB OUTDMSK: OUTDMSK15 Mask              */

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
#define PB_DBCR_DBEN8_Pos                     8                                                       /*!< PB DBCR: DBEN8 Position                 */
#define PB_DBCR_DBEN8_Msk                     (0x01UL << PB_DBCR_DBEN8_Pos)                           /*!< PB DBCR: DBEN8 Mask                     */
#define PB_DBCR_DBEN9_Pos                     9                                                       /*!< PB DBCR: DBEN9 Position                 */
#define PB_DBCR_DBEN9_Msk                     (0x01UL << PB_DBCR_DBEN9_Pos)                           /*!< PB DBCR: DBEN9 Mask                     */
#define PB_DBCR_DBEN10_Pos                    10                                                      /*!< PB DBCR: DBEN10 Position                */
#define PB_DBCR_DBEN10_Msk                    (0x01UL << PB_DBCR_DBEN10_Pos)                          /*!< PB DBCR: DBEN10 Mask                    */
#define PB_DBCR_DBEN11_Pos                    11                                                      /*!< PB DBCR: DBEN11 Position                */
#define PB_DBCR_DBEN11_Msk                    (0x01UL << PB_DBCR_DBEN11_Pos)                          /*!< PB DBCR: DBEN11 Mask                    */
#define PB_DBCR_DBEN12_Pos                    12                                                      /*!< PB DBCR: DBEN12 Position                */
#define PB_DBCR_DBEN12_Msk                    (0x01UL << PB_DBCR_DBEN12_Pos)                          /*!< PB DBCR: DBEN12 Mask                    */
#define PB_DBCR_DBEN13_Pos                    13                                                      /*!< PB DBCR: DBEN13 Position                */
#define PB_DBCR_DBEN13_Msk                    (0x01UL << PB_DBCR_DBEN13_Pos)                          /*!< PB DBCR: DBEN13 Mask                    */
#define PB_DBCR_DBEN14_Pos                    14                                                      /*!< PB DBCR: DBEN14 Position                */
#define PB_DBCR_DBEN14_Msk                    (0x01UL << PB_DBCR_DBEN14_Pos)                          /*!< PB DBCR: DBEN14 Mask                    */
#define PB_DBCR_DBEN15_Pos                    15                                                      /*!< PB DBCR: DBEN15 Position                */
#define PB_DBCR_DBEN15_Msk                    (0x01UL << PB_DBCR_DBEN15_Pos)                          /*!< PB DBCR: DBEN15 Mask                    */

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
#define PB_IER_P8_Pos                         16                                                      /*!< PB IER: P8 Position                     */
#define PB_IER_P8_Msk                         (0x03UL << PB_IER_P8_Pos)                               /*!< PB IER: P8 Mask                         */
#define PB_IER_P9_Pos                         18                                                      /*!< PB IER: P9 Position                     */
#define PB_IER_P9_Msk                         (0x03UL << PB_IER_P9_Pos)                               /*!< PB IER: P9 Mask                         */
#define PB_IER_P10_Pos                        20                                                      /*!< PB IER: P10 Position                    */
#define PB_IER_P10_Msk                        (0x03UL << PB_IER_P10_Pos)                              /*!< PB IER: P10 Mask                        */
#define PB_IER_P11_Pos                        22                                                      /*!< PB IER: P11 Position                    */
#define PB_IER_P11_Msk                        (0x03UL << PB_IER_P11_Pos)                              /*!< PB IER: P11 Mask                        */
#define PB_IER_P12_Pos                        24                                                      /*!< PB IER: P12 Position                    */
#define PB_IER_P12_Msk                        (0x03UL << PB_IER_P12_Pos)                              /*!< PB IER: P12 Mask                        */
#define PB_IER_P13_Pos                        26                                                      /*!< PB IER: P13 Position                    */
#define PB_IER_P13_Msk                        (0x03UL << PB_IER_P13_Pos)                              /*!< PB IER: P13 Mask                        */
#define PB_IER_P14_Pos                        28                                                      /*!< PB IER: P14 Position                    */
#define PB_IER_P14_Msk                        (0x03UL << PB_IER_P14_Pos)                              /*!< PB IER: P14 Mask                        */
#define PB_IER_P15_Pos                        30                                                      /*!< PB IER: P15 Position                    */
#define PB_IER_P15_Msk                        (0x03UL << PB_IER_P15_Pos)                              /*!< PB IER: P15 Mask                        */

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
#define PB_ISR_P8_Pos                         16                                                      /*!< PB ISR: P8 Position                     */
#define PB_ISR_P8_Msk                         (0x03UL << PB_ISR_P8_Pos)                               /*!< PB ISR: P8 Mask                         */
#define PB_ISR_P9_Pos                         18                                                      /*!< PB ISR: P9 Position                     */
#define PB_ISR_P9_Msk                         (0x03UL << PB_ISR_P9_Pos)                               /*!< PB ISR: P9 Mask                         */
#define PB_ISR_P10_Pos                        20                                                      /*!< PB ISR: P10 Position                    */
#define PB_ISR_P10_Msk                        (0x03UL << PB_ISR_P10_Pos)                              /*!< PB ISR: P10 Mask                        */
#define PB_ISR_P11_Pos                        22                                                      /*!< PB ISR: P11 Position                    */
#define PB_ISR_P11_Msk                        (0x03UL << PB_ISR_P11_Pos)                              /*!< PB ISR: P11 Mask                        */
#define PB_ISR_P12_Pos                        24                                                      /*!< PB ISR: P12 Position                    */
#define PB_ISR_P12_Msk                        (0x03UL << PB_ISR_P12_Pos)                              /*!< PB ISR: P12 Mask                        */
#define PB_ISR_P13_Pos                        26                                                      /*!< PB ISR: P13 Position                    */
#define PB_ISR_P13_Msk                        (0x03UL << PB_ISR_P13_Pos)                              /*!< PB ISR: P13 Mask                        */
#define PB_ISR_P14_Pos                        28                                                      /*!< PB ISR: P14 Position                    */
#define PB_ISR_P14_Msk                        (0x03UL << PB_ISR_P14_Pos)                              /*!< PB ISR: P14 Mask                        */
#define PB_ISR_P15_Pos                        30                                                      /*!< PB ISR: P15 Position                    */
#define PB_ISR_P15_Msk                        (0x03UL << PB_ISR_P15_Pos)                              /*!< PB ISR: P15 Mask                        */

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
#define PB_ICR_P8_Pos                         16                                                      /*!< PB ICR: P8 Position                     */
#define PB_ICR_P8_Msk                         (0x03UL << PB_ICR_P8_Pos)                               /*!< PB ICR: P8 Mask                         */
#define PB_ICR_P9_Pos                         18                                                      /*!< PB ICR: P9 Position                     */
#define PB_ICR_P9_Msk                         (0x03UL << PB_ICR_P9_Pos)                               /*!< PB ICR: P9 Mask                         */
#define PB_ICR_P10_Pos                        20                                                      /*!< PB ICR: P10 Position                    */
#define PB_ICR_P10_Msk                        (0x03UL << PB_ICR_P10_Pos)                              /*!< PB ICR: P10 Mask                        */
#define PB_ICR_P11_Pos                        22                                                      /*!< PB ICR: P11 Position                    */
#define PB_ICR_P11_Msk                        (0x03UL << PB_ICR_P11_Pos)                              /*!< PB ICR: P11 Mask                        */
#define PB_ICR_P12_Pos                        24                                                      /*!< PB ICR: P12 Position                    */
#define PB_ICR_P12_Msk                        (0x03UL << PB_ICR_P12_Pos)                              /*!< PB ICR: P12 Mask                        */
#define PB_ICR_P13_Pos                        26                                                      /*!< PB ICR: P13 Position                    */
#define PB_ICR_P13_Msk                        (0x03UL << PB_ICR_P13_Pos)                              /*!< PB ICR: P13 Mask                        */
#define PB_ICR_P14_Pos                        28                                                      /*!< PB ICR: P14 Position                    */
#define PB_ICR_P14_Msk                        (0x03UL << PB_ICR_P14_Pos)                              /*!< PB ICR: P14 Mask                        */
#define PB_ICR_P15_Pos                        30                                                      /*!< PB ICR: P15 Position                    */
#define PB_ICR_P15_Msk                        (0x03UL << PB_ICR_P15_Pos)                              /*!< PB ICR: P15 Mask                        */


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
#define PC_MOD_MODE8_Pos                      16                                                      /*!< PC MOD: MODE8 Position                  */
#define PC_MOD_MODE8_Msk                      (0x03UL << PC_MOD_MODE8_Pos)                            /*!< PC MOD: MODE8 Mask                      */
#define PC_MOD_MODE9_Pos                      18                                                      /*!< PC MOD: MODE9 Position                  */
#define PC_MOD_MODE9_Msk                      (0x03UL << PC_MOD_MODE9_Pos)                            /*!< PC MOD: MODE9 Mask                      */
#define PC_MOD_MODE10_Pos                     20                                                      /*!< PC MOD: MODE10 Position                 */
#define PC_MOD_MODE10_Msk                     (0x03UL << PC_MOD_MODE10_Pos)                           /*!< PC MOD: MODE10 Mask                     */
#define PC_MOD_MODE11_Pos                     22                                                      /*!< PC MOD: MODE11 Position                 */
#define PC_MOD_MODE11_Msk                     (0x03UL << PC_MOD_MODE11_Pos)                           /*!< PC MOD: MODE11 Mask                     */
#define PC_MOD_MODE12_Pos                     24                                                      /*!< PC MOD: MODE12 Position                 */
#define PC_MOD_MODE12_Msk                     (0x03UL << PC_MOD_MODE12_Pos)                           /*!< PC MOD: MODE12 Mask                     */
#define PC_MOD_MODE13_Pos                     26                                                      /*!< PC MOD: MODE13 Position                 */
#define PC_MOD_MODE13_Msk                     (0x03UL << PC_MOD_MODE13_Pos)                           /*!< PC MOD: MODE13 Mask                     */
#define PC_MOD_MODE14_Pos                     28                                                      /*!< PC MOD: MODE14 Position                 */
#define PC_MOD_MODE14_Msk                     (0x03UL << PC_MOD_MODE14_Pos)                           /*!< PC MOD: MODE14 Mask                     */
#define PC_MOD_MODE15_Pos                     30                                                      /*!< PC MOD: MODE15 Position                 */
#define PC_MOD_MODE15_Msk                     (0x03UL << PC_MOD_MODE15_Pos)                           /*!< PC MOD: MODE15 Mask                     */

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
#define PC_TYP_TYP8_Pos                       8                                                       /*!< PC TYP: TYP8 Position                   */
#define PC_TYP_TYP8_Msk                       (0x01UL << PC_TYP_TYP8_Pos)                             /*!< PC TYP: TYP8 Mask                       */
#define PC_TYP_TYP9_Pos                       9                                                       /*!< PC TYP: TYP9 Position                   */
#define PC_TYP_TYP9_Msk                       (0x01UL << PC_TYP_TYP9_Pos)                             /*!< PC TYP: TYP9 Mask                       */
#define PC_TYP_TYP10_Pos                      10                                                      /*!< PC TYP: TYP10 Position                  */
#define PC_TYP_TYP10_Msk                      (0x01UL << PC_TYP_TYP10_Pos)                            /*!< PC TYP: TYP10 Mask                      */
#define PC_TYP_TYP11_Pos                      11                                                      /*!< PC TYP: TYP11 Position                  */
#define PC_TYP_TYP11_Msk                      (0x01UL << PC_TYP_TYP11_Pos)                            /*!< PC TYP: TYP11 Mask                      */
#define PC_TYP_TYP12_Pos                      12                                                      /*!< PC TYP: TYP12 Position                  */
#define PC_TYP_TYP12_Msk                      (0x01UL << PC_TYP_TYP12_Pos)                            /*!< PC TYP: TYP12 Mask                      */
#define PC_TYP_TYP13_Pos                      13                                                      /*!< PC TYP: TYP13 Position                  */
#define PC_TYP_TYP13_Msk                      (0x01UL << PC_TYP_TYP13_Pos)                            /*!< PC TYP: TYP13 Mask                      */
#define PC_TYP_TYP14_Pos                      14                                                      /*!< PC TYP: TYP14 Position                  */
#define PC_TYP_TYP14_Msk                      (0x01UL << PC_TYP_TYP14_Pos)                            /*!< PC TYP: TYP14 Mask                      */
#define PC_TYP_TYP15_Pos                      15                                                      /*!< PC TYP: TYP15 Position                  */
#define PC_TYP_TYP15_Msk                      (0x01UL << PC_TYP_TYP15_Pos)                            /*!< PC TYP: TYP15 Mask                      */

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

/* ----------------------------------  PC_AFSR2  ---------------------------------- */
#define PC_AFSR2_AFSR8_Pos                    0                                                       /*!< PC AFSR2: AFSR8 Position                */
#define PC_AFSR2_AFSR8_Msk                    (0x0fUL << PC_AFSR2_AFSR8_Pos)                          /*!< PC AFSR2: AFSR8 Mask                    */
#define PC_AFSR2_AFSR9_Pos                    4                                                       /*!< PC AFSR2: AFSR9 Position                */
#define PC_AFSR2_AFSR9_Msk                    (0x0fUL << PC_AFSR2_AFSR9_Pos)                          /*!< PC AFSR2: AFSR9 Mask                    */
#define PC_AFSR2_AFSR10_Pos                   8                                                       /*!< PC AFSR2: AFSR10 Position               */
#define PC_AFSR2_AFSR10_Msk                   (0x0fUL << PC_AFSR2_AFSR10_Pos)                         /*!< PC AFSR2: AFSR10 Mask                   */
#define PC_AFSR2_AFSR11_Pos                   12                                                      /*!< PC AFSR2: AFSR11 Position               */
#define PC_AFSR2_AFSR11_Msk                   (0x0fUL << PC_AFSR2_AFSR11_Pos)                         /*!< PC AFSR2: AFSR11 Mask                   */
#define PC_AFSR2_AFSR12_Pos                   16                                                      /*!< PC AFSR2: AFSR12 Position               */
#define PC_AFSR2_AFSR12_Msk                   (0x0fUL << PC_AFSR2_AFSR12_Pos)                         /*!< PC AFSR2: AFSR12 Mask                   */
#define PC_AFSR2_AFSR13_Pos                   20                                                      /*!< PC AFSR2: AFSR13 Position               */
#define PC_AFSR2_AFSR13_Msk                   (0x0fUL << PC_AFSR2_AFSR13_Pos)                         /*!< PC AFSR2: AFSR13 Mask                   */
#define PC_AFSR2_AFSR14_Pos                   24                                                      /*!< PC AFSR2: AFSR14 Position               */
#define PC_AFSR2_AFSR14_Msk                   (0x0fUL << PC_AFSR2_AFSR14_Pos)                         /*!< PC AFSR2: AFSR14 Mask                   */
#define PC_AFSR2_AFSR15_Pos                   28                                                      /*!< PC AFSR2: AFSR15 Position               */
#define PC_AFSR2_AFSR15_Msk                   (0x0fUL << PC_AFSR2_AFSR15_Pos)                         /*!< PC AFSR2: AFSR15 Mask                   */

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
#define PC_PUPD_PUPD8_Pos                     16                                                      /*!< PC PUPD: PUPD8 Position                 */
#define PC_PUPD_PUPD8_Msk                     (0x03UL << PC_PUPD_PUPD8_Pos)                           /*!< PC PUPD: PUPD8 Mask                     */
#define PC_PUPD_PUPD9_Pos                     18                                                      /*!< PC PUPD: PUPD9 Position                 */
#define PC_PUPD_PUPD9_Msk                     (0x03UL << PC_PUPD_PUPD9_Pos)                           /*!< PC PUPD: PUPD9 Mask                     */
#define PC_PUPD_PUPD10_Pos                    20                                                      /*!< PC PUPD: PUPD10 Position                */
#define PC_PUPD_PUPD10_Msk                    (0x03UL << PC_PUPD_PUPD10_Pos)                          /*!< PC PUPD: PUPD10 Mask                    */
#define PC_PUPD_PUPD11_Pos                    22                                                      /*!< PC PUPD: PUPD11 Position                */
#define PC_PUPD_PUPD11_Msk                    (0x03UL << PC_PUPD_PUPD11_Pos)                          /*!< PC PUPD: PUPD11 Mask                    */
#define PC_PUPD_PUPD12_Pos                    24                                                      /*!< PC PUPD: PUPD12 Position                */
#define PC_PUPD_PUPD12_Msk                    (0x03UL << PC_PUPD_PUPD12_Pos)                          /*!< PC PUPD: PUPD12 Mask                    */
#define PC_PUPD_PUPD13_Pos                    26                                                      /*!< PC PUPD: PUPD13 Position                */
#define PC_PUPD_PUPD13_Msk                    (0x03UL << PC_PUPD_PUPD13_Pos)                          /*!< PC PUPD: PUPD13 Mask                    */
#define PC_PUPD_PUPD14_Pos                    28                                                      /*!< PC PUPD: PUPD14 Position                */
#define PC_PUPD_PUPD14_Msk                    (0x03UL << PC_PUPD_PUPD14_Pos)                          /*!< PC PUPD: PUPD14 Mask                    */
#define PC_PUPD_PUPD15_Pos                    30                                                      /*!< PC PUPD: PUPD15 Position                */
#define PC_PUPD_PUPD15_Msk                    (0x03UL << PC_PUPD_PUPD15_Pos)                          /*!< PC PUPD: PUPD15 Mask                    */

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
#define PC_INDR_INDR8_Pos                     8                                                       /*!< PC INDR: INDR8 Position                 */
#define PC_INDR_INDR8_Msk                     (0x01UL << PC_INDR_INDR8_Pos)                           /*!< PC INDR: INDR8 Mask                     */
#define PC_INDR_INDR9_Pos                     9                                                       /*!< PC INDR: INDR9 Position                 */
#define PC_INDR_INDR9_Msk                     (0x01UL << PC_INDR_INDR9_Pos)                           /*!< PC INDR: INDR9 Mask                     */
#define PC_INDR_INDR10_Pos                    10                                                      /*!< PC INDR: INDR10 Position                */
#define PC_INDR_INDR10_Msk                    (0x01UL << PC_INDR_INDR10_Pos)                          /*!< PC INDR: INDR10 Mask                    */
#define PC_INDR_INDR11_Pos                    11                                                      /*!< PC INDR: INDR11 Position                */
#define PC_INDR_INDR11_Msk                    (0x01UL << PC_INDR_INDR11_Pos)                          /*!< PC INDR: INDR11 Mask                    */
#define PC_INDR_INDR12_Pos                    12                                                      /*!< PC INDR: INDR12 Position                */
#define PC_INDR_INDR12_Msk                    (0x01UL << PC_INDR_INDR12_Pos)                          /*!< PC INDR: INDR12 Mask                    */
#define PC_INDR_INDR13_Pos                    13                                                      /*!< PC INDR: INDR13 Position                */
#define PC_INDR_INDR13_Msk                    (0x01UL << PC_INDR_INDR13_Pos)                          /*!< PC INDR: INDR13 Mask                    */
#define PC_INDR_INDR14_Pos                    14                                                      /*!< PC INDR: INDR14 Position                */
#define PC_INDR_INDR14_Msk                    (0x01UL << PC_INDR_INDR14_Pos)                          /*!< PC INDR: INDR14 Mask                    */
#define PC_INDR_INDR15_Pos                    15                                                      /*!< PC INDR: INDR15 Position                */
#define PC_INDR_INDR15_Msk                    (0x01UL << PC_INDR_INDR15_Pos)                          /*!< PC INDR: INDR15 Mask                    */

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
#define PC_OUTDR_OUTDR8_Pos                   8                                                       /*!< PC OUTDR: OUTDR8 Position               */
#define PC_OUTDR_OUTDR8_Msk                   (0x01UL << PC_OUTDR_OUTDR8_Pos)                         /*!< PC OUTDR: OUTDR8 Mask                   */
#define PC_OUTDR_OUTDR9_Pos                   9                                                       /*!< PC OUTDR: OUTDR9 Position               */
#define PC_OUTDR_OUTDR9_Msk                   (0x01UL << PC_OUTDR_OUTDR9_Pos)                         /*!< PC OUTDR: OUTDR9 Mask                   */
#define PC_OUTDR_OUTDR10_Pos                  10                                                      /*!< PC OUTDR: OUTDR10 Position              */
#define PC_OUTDR_OUTDR10_Msk                  (0x01UL << PC_OUTDR_OUTDR10_Pos)                        /*!< PC OUTDR: OUTDR10 Mask                  */
#define PC_OUTDR_OUTDR11_Pos                  11                                                      /*!< PC OUTDR: OUTDR11 Position              */
#define PC_OUTDR_OUTDR11_Msk                  (0x01UL << PC_OUTDR_OUTDR11_Pos)                        /*!< PC OUTDR: OUTDR11 Mask                  */
#define PC_OUTDR_OUTDR12_Pos                  12                                                      /*!< PC OUTDR: OUTDR12 Position              */
#define PC_OUTDR_OUTDR12_Msk                  (0x01UL << PC_OUTDR_OUTDR12_Pos)                        /*!< PC OUTDR: OUTDR12 Mask                  */
#define PC_OUTDR_OUTDR13_Pos                  13                                                      /*!< PC OUTDR: OUTDR13 Position              */
#define PC_OUTDR_OUTDR13_Msk                  (0x01UL << PC_OUTDR_OUTDR13_Pos)                        /*!< PC OUTDR: OUTDR13 Mask                  */
#define PC_OUTDR_OUTDR14_Pos                  14                                                      /*!< PC OUTDR: OUTDR14 Position              */
#define PC_OUTDR_OUTDR14_Msk                  (0x01UL << PC_OUTDR_OUTDR14_Pos)                        /*!< PC OUTDR: OUTDR14 Mask                  */
#define PC_OUTDR_OUTDR15_Pos                  15                                                      /*!< PC OUTDR: OUTDR15 Position              */
#define PC_OUTDR_OUTDR15_Msk                  (0x01UL << PC_OUTDR_OUTDR15_Pos)                        /*!< PC OUTDR: OUTDR15 Mask                  */

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
#define PC_BSR_BSR8_Pos                       8                                                       /*!< PC BSR: BSR8 Position                   */
#define PC_BSR_BSR8_Msk                       (0x01UL << PC_BSR_BSR8_Pos)                             /*!< PC BSR: BSR8 Mask                       */
#define PC_BSR_BSR9_Pos                       9                                                       /*!< PC BSR: BSR9 Position                   */
#define PC_BSR_BSR9_Msk                       (0x01UL << PC_BSR_BSR9_Pos)                             /*!< PC BSR: BSR9 Mask                       */
#define PC_BSR_BSR10_Pos                      10                                                      /*!< PC BSR: BSR10 Position                  */
#define PC_BSR_BSR10_Msk                      (0x01UL << PC_BSR_BSR10_Pos)                            /*!< PC BSR: BSR10 Mask                      */
#define PC_BSR_BSR11_Pos                      11                                                      /*!< PC BSR: BSR11 Position                  */
#define PC_BSR_BSR11_Msk                      (0x01UL << PC_BSR_BSR11_Pos)                            /*!< PC BSR: BSR11 Mask                      */
#define PC_BSR_BSR12_Pos                      12                                                      /*!< PC BSR: BSR12 Position                  */
#define PC_BSR_BSR12_Msk                      (0x01UL << PC_BSR_BSR12_Pos)                            /*!< PC BSR: BSR12 Mask                      */
#define PC_BSR_BSR13_Pos                      13                                                      /*!< PC BSR: BSR13 Position                  */
#define PC_BSR_BSR13_Msk                      (0x01UL << PC_BSR_BSR13_Pos)                            /*!< PC BSR: BSR13 Mask                      */
#define PC_BSR_BSR14_Pos                      14                                                      /*!< PC BSR: BSR14 Position                  */
#define PC_BSR_BSR14_Msk                      (0x01UL << PC_BSR_BSR14_Pos)                            /*!< PC BSR: BSR14 Mask                      */
#define PC_BSR_BSR15_Pos                      15                                                      /*!< PC BSR: BSR15 Position                  */
#define PC_BSR_BSR15_Msk                      (0x01UL << PC_BSR_BSR15_Pos)                            /*!< PC BSR: BSR15 Mask                      */

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
#define PC_BCR_BCR8_Pos                       8                                                       /*!< PC BCR: BCR8 Position                   */
#define PC_BCR_BCR8_Msk                       (0x01UL << PC_BCR_BCR8_Pos)                             /*!< PC BCR: BCR8 Mask                       */
#define PC_BCR_BCR9_Pos                       9                                                       /*!< PC BCR: BCR9 Position                   */
#define PC_BCR_BCR9_Msk                       (0x01UL << PC_BCR_BCR9_Pos)                             /*!< PC BCR: BCR9 Mask                       */
#define PC_BCR_BCR10_Pos                      10                                                      /*!< PC BCR: BCR10 Position                  */
#define PC_BCR_BCR10_Msk                      (0x01UL << PC_BCR_BCR10_Pos)                            /*!< PC BCR: BCR10 Mask                      */
#define PC_BCR_BCR11_Pos                      11                                                      /*!< PC BCR: BCR11 Position                  */
#define PC_BCR_BCR11_Msk                      (0x01UL << PC_BCR_BCR11_Pos)                            /*!< PC BCR: BCR11 Mask                      */
#define PC_BCR_BCR12_Pos                      12                                                      /*!< PC BCR: BCR12 Position                  */
#define PC_BCR_BCR12_Msk                      (0x01UL << PC_BCR_BCR12_Pos)                            /*!< PC BCR: BCR12 Mask                      */
#define PC_BCR_BCR13_Pos                      13                                                      /*!< PC BCR: BCR13 Position                  */
#define PC_BCR_BCR13_Msk                      (0x01UL << PC_BCR_BCR13_Pos)                            /*!< PC BCR: BCR13 Mask                      */
#define PC_BCR_BCR14_Pos                      14                                                      /*!< PC BCR: BCR14 Position                  */
#define PC_BCR_BCR14_Msk                      (0x01UL << PC_BCR_BCR14_Pos)                            /*!< PC BCR: BCR14 Mask                      */
#define PC_BCR_BCR15_Pos                      15                                                      /*!< PC BCR: BCR15 Position                  */
#define PC_BCR_BCR15_Msk                      (0x01UL << PC_BCR_BCR15_Pos)                            /*!< PC BCR: BCR15 Mask                      */

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
#define PC_OUTDMSK_OUTDMSK8_Pos               8                                                       /*!< PC OUTDMSK: OUTDMSK8 Position           */
#define PC_OUTDMSK_OUTDMSK8_Msk               (0x01UL << PC_OUTDMSK_OUTDMSK8_Pos)                     /*!< PC OUTDMSK: OUTDMSK8 Mask               */
#define PC_OUTDMSK_OUTDMSK9_Pos               9                                                       /*!< PC OUTDMSK: OUTDMSK9 Position           */
#define PC_OUTDMSK_OUTDMSK9_Msk               (0x01UL << PC_OUTDMSK_OUTDMSK9_Pos)                     /*!< PC OUTDMSK: OUTDMSK9 Mask               */
#define PC_OUTDMSK_OUTDMSK10_Pos              10                                                      /*!< PC OUTDMSK: OUTDMSK10 Position          */
#define PC_OUTDMSK_OUTDMSK10_Msk              (0x01UL << PC_OUTDMSK_OUTDMSK10_Pos)                    /*!< PC OUTDMSK: OUTDMSK10 Mask              */
#define PC_OUTDMSK_OUTDMSK11_Pos              11                                                      /*!< PC OUTDMSK: OUTDMSK11 Position          */
#define PC_OUTDMSK_OUTDMSK11_Msk              (0x01UL << PC_OUTDMSK_OUTDMSK11_Pos)                    /*!< PC OUTDMSK: OUTDMSK11 Mask              */
#define PC_OUTDMSK_OUTDMSK12_Pos              12                                                      /*!< PC OUTDMSK: OUTDMSK12 Position          */
#define PC_OUTDMSK_OUTDMSK12_Msk              (0x01UL << PC_OUTDMSK_OUTDMSK12_Pos)                    /*!< PC OUTDMSK: OUTDMSK12 Mask              */
#define PC_OUTDMSK_OUTDMSK13_Pos              13                                                      /*!< PC OUTDMSK: OUTDMSK13 Position          */
#define PC_OUTDMSK_OUTDMSK13_Msk              (0x01UL << PC_OUTDMSK_OUTDMSK13_Pos)                    /*!< PC OUTDMSK: OUTDMSK13 Mask              */
#define PC_OUTDMSK_OUTDMSK14_Pos              14                                                      /*!< PC OUTDMSK: OUTDMSK14 Position          */
#define PC_OUTDMSK_OUTDMSK14_Msk              (0x01UL << PC_OUTDMSK_OUTDMSK14_Pos)                    /*!< PC OUTDMSK: OUTDMSK14 Mask              */
#define PC_OUTDMSK_OUTDMSK15_Pos              15                                                      /*!< PC OUTDMSK: OUTDMSK15 Position          */
#define PC_OUTDMSK_OUTDMSK15_Msk              (0x01UL << PC_OUTDMSK_OUTDMSK15_Pos)                    /*!< PC OUTDMSK: OUTDMSK15 Mask              */

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
#define PC_DBCR_DBEN8_Pos                     8                                                       /*!< PC DBCR: DBEN8 Position                 */
#define PC_DBCR_DBEN8_Msk                     (0x01UL << PC_DBCR_DBEN8_Pos)                           /*!< PC DBCR: DBEN8 Mask                     */
#define PC_DBCR_DBEN9_Pos                     9                                                       /*!< PC DBCR: DBEN9 Position                 */
#define PC_DBCR_DBEN9_Msk                     (0x01UL << PC_DBCR_DBEN9_Pos)                           /*!< PC DBCR: DBEN9 Mask                     */
#define PC_DBCR_DBEN10_Pos                    10                                                      /*!< PC DBCR: DBEN10 Position                */
#define PC_DBCR_DBEN10_Msk                    (0x01UL << PC_DBCR_DBEN10_Pos)                          /*!< PC DBCR: DBEN10 Mask                    */
#define PC_DBCR_DBEN11_Pos                    11                                                      /*!< PC DBCR: DBEN11 Position                */
#define PC_DBCR_DBEN11_Msk                    (0x01UL << PC_DBCR_DBEN11_Pos)                          /*!< PC DBCR: DBEN11 Mask                    */
#define PC_DBCR_DBEN12_Pos                    12                                                      /*!< PC DBCR: DBEN12 Position                */
#define PC_DBCR_DBEN12_Msk                    (0x01UL << PC_DBCR_DBEN12_Pos)                          /*!< PC DBCR: DBEN12 Mask                    */
#define PC_DBCR_DBEN13_Pos                    13                                                      /*!< PC DBCR: DBEN13 Position                */
#define PC_DBCR_DBEN13_Msk                    (0x01UL << PC_DBCR_DBEN13_Pos)                          /*!< PC DBCR: DBEN13 Mask                    */
#define PC_DBCR_DBEN14_Pos                    14                                                      /*!< PC DBCR: DBEN14 Position                */
#define PC_DBCR_DBEN14_Msk                    (0x01UL << PC_DBCR_DBEN14_Pos)                          /*!< PC DBCR: DBEN14 Mask                    */
#define PC_DBCR_DBEN15_Pos                    15                                                      /*!< PC DBCR: DBEN15 Position                */
#define PC_DBCR_DBEN15_Msk                    (0x01UL << PC_DBCR_DBEN15_Pos)                          /*!< PC DBCR: DBEN15 Mask                    */

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
#define PC_IER_P8_Pos                         16                                                      /*!< PC IER: P8 Position                     */
#define PC_IER_P8_Msk                         (0x03UL << PC_IER_P8_Pos)                               /*!< PC IER: P8 Mask                         */
#define PC_IER_P9_Pos                         18                                                      /*!< PC IER: P9 Position                     */
#define PC_IER_P9_Msk                         (0x03UL << PC_IER_P9_Pos)                               /*!< PC IER: P9 Mask                         */
#define PC_IER_P10_Pos                        20                                                      /*!< PC IER: P10 Position                    */
#define PC_IER_P10_Msk                        (0x03UL << PC_IER_P10_Pos)                              /*!< PC IER: P10 Mask                        */
#define PC_IER_P11_Pos                        22                                                      /*!< PC IER: P11 Position                    */
#define PC_IER_P11_Msk                        (0x03UL << PC_IER_P11_Pos)                              /*!< PC IER: P11 Mask                        */
#define PC_IER_P12_Pos                        24                                                      /*!< PC IER: P12 Position                    */
#define PC_IER_P12_Msk                        (0x03UL << PC_IER_P12_Pos)                              /*!< PC IER: P12 Mask                        */
#define PC_IER_P13_Pos                        26                                                      /*!< PC IER: P13 Position                    */
#define PC_IER_P13_Msk                        (0x03UL << PC_IER_P13_Pos)                              /*!< PC IER: P13 Mask                        */
#define PC_IER_P14_Pos                        28                                                      /*!< PC IER: P14 Position                    */
#define PC_IER_P14_Msk                        (0x03UL << PC_IER_P14_Pos)                              /*!< PC IER: P14 Mask                        */
#define PC_IER_P15_Pos                        30                                                      /*!< PC IER: P15 Position                    */
#define PC_IER_P15_Msk                        (0x03UL << PC_IER_P15_Pos)                              /*!< PC IER: P15 Mask                        */

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
#define PC_ISR_P8_Pos                         16                                                      /*!< PC ISR: P8 Position                     */
#define PC_ISR_P8_Msk                         (0x03UL << PC_ISR_P8_Pos)                               /*!< PC ISR: P8 Mask                         */
#define PC_ISR_P9_Pos                         18                                                      /*!< PC ISR: P9 Position                     */
#define PC_ISR_P9_Msk                         (0x03UL << PC_ISR_P9_Pos)                               /*!< PC ISR: P9 Mask                         */
#define PC_ISR_P10_Pos                        20                                                      /*!< PC ISR: P10 Position                    */
#define PC_ISR_P10_Msk                        (0x03UL << PC_ISR_P10_Pos)                              /*!< PC ISR: P10 Mask                        */
#define PC_ISR_P11_Pos                        22                                                      /*!< PC ISR: P11 Position                    */
#define PC_ISR_P11_Msk                        (0x03UL << PC_ISR_P11_Pos)                              /*!< PC ISR: P11 Mask                        */
#define PC_ISR_P12_Pos                        24                                                      /*!< PC ISR: P12 Position                    */
#define PC_ISR_P12_Msk                        (0x03UL << PC_ISR_P12_Pos)                              /*!< PC ISR: P12 Mask                        */
#define PC_ISR_P13_Pos                        26                                                      /*!< PC ISR: P13 Position                    */
#define PC_ISR_P13_Msk                        (0x03UL << PC_ISR_P13_Pos)                              /*!< PC ISR: P13 Mask                        */
#define PC_ISR_P14_Pos                        28                                                      /*!< PC ISR: P14 Position                    */
#define PC_ISR_P14_Msk                        (0x03UL << PC_ISR_P14_Pos)                              /*!< PC ISR: P14 Mask                        */
#define PC_ISR_P15_Pos                        30                                                      /*!< PC ISR: P15 Position                    */
#define PC_ISR_P15_Msk                        (0x03UL << PC_ISR_P15_Pos)                              /*!< PC ISR: P15 Mask                        */

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
#define PC_ICR_P8_Pos                         16                                                      /*!< PC ICR: P8 Position                     */
#define PC_ICR_P8_Msk                         (0x03UL << PC_ICR_P8_Pos)                               /*!< PC ICR: P8 Mask                         */
#define PC_ICR_P9_Pos                         18                                                      /*!< PC ICR: P9 Position                     */
#define PC_ICR_P9_Msk                         (0x03UL << PC_ICR_P9_Pos)                               /*!< PC ICR: P9 Mask                         */
#define PC_ICR_P10_Pos                        20                                                      /*!< PC ICR: P10 Position                    */
#define PC_ICR_P10_Msk                        (0x03UL << PC_ICR_P10_Pos)                              /*!< PC ICR: P10 Mask                        */
#define PC_ICR_P11_Pos                        22                                                      /*!< PC ICR: P11 Position                    */
#define PC_ICR_P11_Msk                        (0x03UL << PC_ICR_P11_Pos)                              /*!< PC ICR: P11 Mask                        */
#define PC_ICR_P12_Pos                        24                                                      /*!< PC ICR: P12 Position                    */
#define PC_ICR_P12_Msk                        (0x03UL << PC_ICR_P12_Pos)                              /*!< PC ICR: P12 Mask                        */
#define PC_ICR_P13_Pos                        26                                                      /*!< PC ICR: P13 Position                    */
#define PC_ICR_P13_Msk                        (0x03UL << PC_ICR_P13_Pos)                              /*!< PC ICR: P13 Mask                        */
#define PC_ICR_P14_Pos                        28                                                      /*!< PC ICR: P14 Position                    */
#define PC_ICR_P14_Msk                        (0x03UL << PC_ICR_P14_Pos)                              /*!< PC ICR: P14 Mask                        */
#define PC_ICR_P15_Pos                        30                                                      /*!< PC ICR: P15 Position                    */
#define PC_ICR_P15_Msk                        (0x03UL << PC_ICR_P15_Pos)                              /*!< PC ICR: P15 Mask                        */


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
#define PD_MOD_MODE8_Pos                      16                                                      /*!< PD MOD: MODE8 Position                  */
#define PD_MOD_MODE8_Msk                      (0x03UL << PD_MOD_MODE8_Pos)                            /*!< PD MOD: MODE8 Mask                      */
#define PD_MOD_MODE9_Pos                      18                                                      /*!< PD MOD: MODE9 Position                  */
#define PD_MOD_MODE9_Msk                      (0x03UL << PD_MOD_MODE9_Pos)                            /*!< PD MOD: MODE9 Mask                      */
#define PD_MOD_MODE10_Pos                     20                                                      /*!< PD MOD: MODE10 Position                 */
#define PD_MOD_MODE10_Msk                     (0x03UL << PD_MOD_MODE10_Pos)                           /*!< PD MOD: MODE10 Mask                     */
#define PD_MOD_MODE11_Pos                     22                                                      /*!< PD MOD: MODE11 Position                 */
#define PD_MOD_MODE11_Msk                     (0x03UL << PD_MOD_MODE11_Pos)                           /*!< PD MOD: MODE11 Mask                     */
#define PD_MOD_MODE12_Pos                     24                                                      /*!< PD MOD: MODE12 Position                 */
#define PD_MOD_MODE12_Msk                     (0x03UL << PD_MOD_MODE12_Pos)                           /*!< PD MOD: MODE12 Mask                     */
#define PD_MOD_MODE13_Pos                     26                                                      /*!< PD MOD: MODE13 Position                 */
#define PD_MOD_MODE13_Msk                     (0x03UL << PD_MOD_MODE13_Pos)                           /*!< PD MOD: MODE13 Mask                     */
#define PD_MOD_MODE14_Pos                     28                                                      /*!< PD MOD: MODE14 Position                 */
#define PD_MOD_MODE14_Msk                     (0x03UL << PD_MOD_MODE14_Pos)                           /*!< PD MOD: MODE14 Mask                     */
#define PD_MOD_MODE15_Pos                     30                                                      /*!< PD MOD: MODE15 Position                 */
#define PD_MOD_MODE15_Msk                     (0x03UL << PD_MOD_MODE15_Pos)                           /*!< PD MOD: MODE15 Mask                     */

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
#define PD_TYP_TYP8_Pos                       8                                                       /*!< PD TYP: TYP8 Position                   */
#define PD_TYP_TYP8_Msk                       (0x01UL << PD_TYP_TYP8_Pos)                             /*!< PD TYP: TYP8 Mask                       */
#define PD_TYP_TYP9_Pos                       9                                                       /*!< PD TYP: TYP9 Position                   */
#define PD_TYP_TYP9_Msk                       (0x01UL << PD_TYP_TYP9_Pos)                             /*!< PD TYP: TYP9 Mask                       */
#define PD_TYP_TYP10_Pos                      10                                                      /*!< PD TYP: TYP10 Position                  */
#define PD_TYP_TYP10_Msk                      (0x01UL << PD_TYP_TYP10_Pos)                            /*!< PD TYP: TYP10 Mask                      */
#define PD_TYP_TYP11_Pos                      11                                                      /*!< PD TYP: TYP11 Position                  */
#define PD_TYP_TYP11_Msk                      (0x01UL << PD_TYP_TYP11_Pos)                            /*!< PD TYP: TYP11 Mask                      */
#define PD_TYP_TYP12_Pos                      12                                                      /*!< PD TYP: TYP12 Position                  */
#define PD_TYP_TYP12_Msk                      (0x01UL << PD_TYP_TYP12_Pos)                            /*!< PD TYP: TYP12 Mask                      */
#define PD_TYP_TYP13_Pos                      13                                                      /*!< PD TYP: TYP13 Position                  */
#define PD_TYP_TYP13_Msk                      (0x01UL << PD_TYP_TYP13_Pos)                            /*!< PD TYP: TYP13 Mask                      */
#define PD_TYP_TYP14_Pos                      14                                                      /*!< PD TYP: TYP14 Position                  */
#define PD_TYP_TYP14_Msk                      (0x01UL << PD_TYP_TYP14_Pos)                            /*!< PD TYP: TYP14 Mask                      */
#define PD_TYP_TYP15_Pos                      15                                                      /*!< PD TYP: TYP15 Position                  */
#define PD_TYP_TYP15_Msk                      (0x01UL << PD_TYP_TYP15_Pos)                            /*!< PD TYP: TYP15 Mask                      */

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

/* ----------------------------------  PD_AFSR2  ---------------------------------- */
#define PD_AFSR2_AFSR8_Pos                    0                                                       /*!< PD AFSR2: AFSR8 Position                */
#define PD_AFSR2_AFSR8_Msk                    (0x0fUL << PD_AFSR2_AFSR8_Pos)                          /*!< PD AFSR2: AFSR8 Mask                    */
#define PD_AFSR2_AFSR9_Pos                    4                                                       /*!< PD AFSR2: AFSR9 Position                */
#define PD_AFSR2_AFSR9_Msk                    (0x0fUL << PD_AFSR2_AFSR9_Pos)                          /*!< PD AFSR2: AFSR9 Mask                    */
#define PD_AFSR2_AFSR10_Pos                   8                                                       /*!< PD AFSR2: AFSR10 Position               */
#define PD_AFSR2_AFSR10_Msk                   (0x0fUL << PD_AFSR2_AFSR10_Pos)                         /*!< PD AFSR2: AFSR10 Mask                   */
#define PD_AFSR2_AFSR11_Pos                   12                                                      /*!< PD AFSR2: AFSR11 Position               */
#define PD_AFSR2_AFSR11_Msk                   (0x0fUL << PD_AFSR2_AFSR11_Pos)                         /*!< PD AFSR2: AFSR11 Mask                   */
#define PD_AFSR2_AFSR12_Pos                   16                                                      /*!< PD AFSR2: AFSR12 Position               */
#define PD_AFSR2_AFSR12_Msk                   (0x0fUL << PD_AFSR2_AFSR12_Pos)                         /*!< PD AFSR2: AFSR12 Mask                   */
#define PD_AFSR2_AFSR13_Pos                   20                                                      /*!< PD AFSR2: AFSR13 Position               */
#define PD_AFSR2_AFSR13_Msk                   (0x0fUL << PD_AFSR2_AFSR13_Pos)                         /*!< PD AFSR2: AFSR13 Mask                   */
#define PD_AFSR2_AFSR14_Pos                   24                                                      /*!< PD AFSR2: AFSR14 Position               */
#define PD_AFSR2_AFSR14_Msk                   (0x0fUL << PD_AFSR2_AFSR14_Pos)                         /*!< PD AFSR2: AFSR14 Mask                   */
#define PD_AFSR2_AFSR15_Pos                   28                                                      /*!< PD AFSR2: AFSR15 Position               */
#define PD_AFSR2_AFSR15_Msk                   (0x0fUL << PD_AFSR2_AFSR15_Pos)                         /*!< PD AFSR2: AFSR15 Mask                   */

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
#define PD_PUPD_PUPD8_Pos                     16                                                      /*!< PD PUPD: PUPD8 Position                 */
#define PD_PUPD_PUPD8_Msk                     (0x03UL << PD_PUPD_PUPD8_Pos)                           /*!< PD PUPD: PUPD8 Mask                     */
#define PD_PUPD_PUPD9_Pos                     18                                                      /*!< PD PUPD: PUPD9 Position                 */
#define PD_PUPD_PUPD9_Msk                     (0x03UL << PD_PUPD_PUPD9_Pos)                           /*!< PD PUPD: PUPD9 Mask                     */
#define PD_PUPD_PUPD10_Pos                    20                                                      /*!< PD PUPD: PUPD10 Position                */
#define PD_PUPD_PUPD10_Msk                    (0x03UL << PD_PUPD_PUPD10_Pos)                          /*!< PD PUPD: PUPD10 Mask                    */
#define PD_PUPD_PUPD11_Pos                    22                                                      /*!< PD PUPD: PUPD11 Position                */
#define PD_PUPD_PUPD11_Msk                    (0x03UL << PD_PUPD_PUPD11_Pos)                          /*!< PD PUPD: PUPD11 Mask                    */
#define PD_PUPD_PUPD12_Pos                    24                                                      /*!< PD PUPD: PUPD12 Position                */
#define PD_PUPD_PUPD12_Msk                    (0x03UL << PD_PUPD_PUPD12_Pos)                          /*!< PD PUPD: PUPD12 Mask                    */
#define PD_PUPD_PUPD13_Pos                    26                                                      /*!< PD PUPD: PUPD13 Position                */
#define PD_PUPD_PUPD13_Msk                    (0x03UL << PD_PUPD_PUPD13_Pos)                          /*!< PD PUPD: PUPD13 Mask                    */
#define PD_PUPD_PUPD14_Pos                    28                                                      /*!< PD PUPD: PUPD14 Position                */
#define PD_PUPD_PUPD14_Msk                    (0x03UL << PD_PUPD_PUPD14_Pos)                          /*!< PD PUPD: PUPD14 Mask                    */
#define PD_PUPD_PUPD15_Pos                    30                                                      /*!< PD PUPD: PUPD15 Position                */
#define PD_PUPD_PUPD15_Msk                    (0x03UL << PD_PUPD_PUPD15_Pos)                          /*!< PD PUPD: PUPD15 Mask                    */

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
#define PD_INDR_INDR8_Pos                     8                                                       /*!< PD INDR: INDR8 Position                 */
#define PD_INDR_INDR8_Msk                     (0x01UL << PD_INDR_INDR8_Pos)                           /*!< PD INDR: INDR8 Mask                     */
#define PD_INDR_INDR9_Pos                     9                                                       /*!< PD INDR: INDR9 Position                 */
#define PD_INDR_INDR9_Msk                     (0x01UL << PD_INDR_INDR9_Pos)                           /*!< PD INDR: INDR9 Mask                     */
#define PD_INDR_INDR10_Pos                    10                                                      /*!< PD INDR: INDR10 Position                */
#define PD_INDR_INDR10_Msk                    (0x01UL << PD_INDR_INDR10_Pos)                          /*!< PD INDR: INDR10 Mask                    */
#define PD_INDR_INDR11_Pos                    11                                                      /*!< PD INDR: INDR11 Position                */
#define PD_INDR_INDR11_Msk                    (0x01UL << PD_INDR_INDR11_Pos)                          /*!< PD INDR: INDR11 Mask                    */
#define PD_INDR_INDR12_Pos                    12                                                      /*!< PD INDR: INDR12 Position                */
#define PD_INDR_INDR12_Msk                    (0x01UL << PD_INDR_INDR12_Pos)                          /*!< PD INDR: INDR12 Mask                    */
#define PD_INDR_INDR13_Pos                    13                                                      /*!< PD INDR: INDR13 Position                */
#define PD_INDR_INDR13_Msk                    (0x01UL << PD_INDR_INDR13_Pos)                          /*!< PD INDR: INDR13 Mask                    */
#define PD_INDR_INDR14_Pos                    14                                                      /*!< PD INDR: INDR14 Position                */
#define PD_INDR_INDR14_Msk                    (0x01UL << PD_INDR_INDR14_Pos)                          /*!< PD INDR: INDR14 Mask                    */
#define PD_INDR_INDR15_Pos                    15                                                      /*!< PD INDR: INDR15 Position                */
#define PD_INDR_INDR15_Msk                    (0x01UL << PD_INDR_INDR15_Pos)                          /*!< PD INDR: INDR15 Mask                    */

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
#define PD_OUTDR_OUTDR8_Pos                   8                                                       /*!< PD OUTDR: OUTDR8 Position               */
#define PD_OUTDR_OUTDR8_Msk                   (0x01UL << PD_OUTDR_OUTDR8_Pos)                         /*!< PD OUTDR: OUTDR8 Mask                   */
#define PD_OUTDR_OUTDR9_Pos                   9                                                       /*!< PD OUTDR: OUTDR9 Position               */
#define PD_OUTDR_OUTDR9_Msk                   (0x01UL << PD_OUTDR_OUTDR9_Pos)                         /*!< PD OUTDR: OUTDR9 Mask                   */
#define PD_OUTDR_OUTDR10_Pos                  10                                                      /*!< PD OUTDR: OUTDR10 Position              */
#define PD_OUTDR_OUTDR10_Msk                  (0x01UL << PD_OUTDR_OUTDR10_Pos)                        /*!< PD OUTDR: OUTDR10 Mask                  */
#define PD_OUTDR_OUTDR11_Pos                  11                                                      /*!< PD OUTDR: OUTDR11 Position              */
#define PD_OUTDR_OUTDR11_Msk                  (0x01UL << PD_OUTDR_OUTDR11_Pos)                        /*!< PD OUTDR: OUTDR11 Mask                  */
#define PD_OUTDR_OUTDR12_Pos                  12                                                      /*!< PD OUTDR: OUTDR12 Position              */
#define PD_OUTDR_OUTDR12_Msk                  (0x01UL << PD_OUTDR_OUTDR12_Pos)                        /*!< PD OUTDR: OUTDR12 Mask                  */
#define PD_OUTDR_OUTDR13_Pos                  13                                                      /*!< PD OUTDR: OUTDR13 Position              */
#define PD_OUTDR_OUTDR13_Msk                  (0x01UL << PD_OUTDR_OUTDR13_Pos)                        /*!< PD OUTDR: OUTDR13 Mask                  */
#define PD_OUTDR_OUTDR14_Pos                  14                                                      /*!< PD OUTDR: OUTDR14 Position              */
#define PD_OUTDR_OUTDR14_Msk                  (0x01UL << PD_OUTDR_OUTDR14_Pos)                        /*!< PD OUTDR: OUTDR14 Mask                  */
#define PD_OUTDR_OUTDR15_Pos                  15                                                      /*!< PD OUTDR: OUTDR15 Position              */
#define PD_OUTDR_OUTDR15_Msk                  (0x01UL << PD_OUTDR_OUTDR15_Pos)                        /*!< PD OUTDR: OUTDR15 Mask                  */

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
#define PD_BSR_BSR8_Pos                       8                                                       /*!< PD BSR: BSR8 Position                   */
#define PD_BSR_BSR8_Msk                       (0x01UL << PD_BSR_BSR8_Pos)                             /*!< PD BSR: BSR8 Mask                       */
#define PD_BSR_BSR9_Pos                       9                                                       /*!< PD BSR: BSR9 Position                   */
#define PD_BSR_BSR9_Msk                       (0x01UL << PD_BSR_BSR9_Pos)                             /*!< PD BSR: BSR9 Mask                       */
#define PD_BSR_BSR10_Pos                      10                                                      /*!< PD BSR: BSR10 Position                  */
#define PD_BSR_BSR10_Msk                      (0x01UL << PD_BSR_BSR10_Pos)                            /*!< PD BSR: BSR10 Mask                      */
#define PD_BSR_BSR11_Pos                      11                                                      /*!< PD BSR: BSR11 Position                  */
#define PD_BSR_BSR11_Msk                      (0x01UL << PD_BSR_BSR11_Pos)                            /*!< PD BSR: BSR11 Mask                      */
#define PD_BSR_BSR12_Pos                      12                                                      /*!< PD BSR: BSR12 Position                  */
#define PD_BSR_BSR12_Msk                      (0x01UL << PD_BSR_BSR12_Pos)                            /*!< PD BSR: BSR12 Mask                      */
#define PD_BSR_BSR13_Pos                      13                                                      /*!< PD BSR: BSR13 Position                  */
#define PD_BSR_BSR13_Msk                      (0x01UL << PD_BSR_BSR13_Pos)                            /*!< PD BSR: BSR13 Mask                      */
#define PD_BSR_BSR14_Pos                      14                                                      /*!< PD BSR: BSR14 Position                  */
#define PD_BSR_BSR14_Msk                      (0x01UL << PD_BSR_BSR14_Pos)                            /*!< PD BSR: BSR14 Mask                      */
#define PD_BSR_BSR15_Pos                      15                                                      /*!< PD BSR: BSR15 Position                  */
#define PD_BSR_BSR15_Msk                      (0x01UL << PD_BSR_BSR15_Pos)                            /*!< PD BSR: BSR15 Mask                      */

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
#define PD_BCR_BCR8_Pos                       8                                                       /*!< PD BCR: BCR8 Position                   */
#define PD_BCR_BCR8_Msk                       (0x01UL << PD_BCR_BCR8_Pos)                             /*!< PD BCR: BCR8 Mask                       */
#define PD_BCR_BCR9_Pos                       9                                                       /*!< PD BCR: BCR9 Position                   */
#define PD_BCR_BCR9_Msk                       (0x01UL << PD_BCR_BCR9_Pos)                             /*!< PD BCR: BCR9 Mask                       */
#define PD_BCR_BCR10_Pos                      10                                                      /*!< PD BCR: BCR10 Position                  */
#define PD_BCR_BCR10_Msk                      (0x01UL << PD_BCR_BCR10_Pos)                            /*!< PD BCR: BCR10 Mask                      */
#define PD_BCR_BCR11_Pos                      11                                                      /*!< PD BCR: BCR11 Position                  */
#define PD_BCR_BCR11_Msk                      (0x01UL << PD_BCR_BCR11_Pos)                            /*!< PD BCR: BCR11 Mask                      */
#define PD_BCR_BCR12_Pos                      12                                                      /*!< PD BCR: BCR12 Position                  */
#define PD_BCR_BCR12_Msk                      (0x01UL << PD_BCR_BCR12_Pos)                            /*!< PD BCR: BCR12 Mask                      */
#define PD_BCR_BCR13_Pos                      13                                                      /*!< PD BCR: BCR13 Position                  */
#define PD_BCR_BCR13_Msk                      (0x01UL << PD_BCR_BCR13_Pos)                            /*!< PD BCR: BCR13 Mask                      */
#define PD_BCR_BCR14_Pos                      14                                                      /*!< PD BCR: BCR14 Position                  */
#define PD_BCR_BCR14_Msk                      (0x01UL << PD_BCR_BCR14_Pos)                            /*!< PD BCR: BCR14 Mask                      */
#define PD_BCR_BCR15_Pos                      15                                                      /*!< PD BCR: BCR15 Position                  */
#define PD_BCR_BCR15_Msk                      (0x01UL << PD_BCR_BCR15_Pos)                            /*!< PD BCR: BCR15 Mask                      */

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
#define PD_OUTDMSK_OUTDMSK8_Pos               8                                                       /*!< PD OUTDMSK: OUTDMSK8 Position           */
#define PD_OUTDMSK_OUTDMSK8_Msk               (0x01UL << PD_OUTDMSK_OUTDMSK8_Pos)                     /*!< PD OUTDMSK: OUTDMSK8 Mask               */
#define PD_OUTDMSK_OUTDMSK9_Pos               9                                                       /*!< PD OUTDMSK: OUTDMSK9 Position           */
#define PD_OUTDMSK_OUTDMSK9_Msk               (0x01UL << PD_OUTDMSK_OUTDMSK9_Pos)                     /*!< PD OUTDMSK: OUTDMSK9 Mask               */
#define PD_OUTDMSK_OUTDMSK10_Pos              10                                                      /*!< PD OUTDMSK: OUTDMSK10 Position          */
#define PD_OUTDMSK_OUTDMSK10_Msk              (0x01UL << PD_OUTDMSK_OUTDMSK10_Pos)                    /*!< PD OUTDMSK: OUTDMSK10 Mask              */
#define PD_OUTDMSK_OUTDMSK11_Pos              11                                                      /*!< PD OUTDMSK: OUTDMSK11 Position          */
#define PD_OUTDMSK_OUTDMSK11_Msk              (0x01UL << PD_OUTDMSK_OUTDMSK11_Pos)                    /*!< PD OUTDMSK: OUTDMSK11 Mask              */
#define PD_OUTDMSK_OUTDMSK12_Pos              12                                                      /*!< PD OUTDMSK: OUTDMSK12 Position          */
#define PD_OUTDMSK_OUTDMSK12_Msk              (0x01UL << PD_OUTDMSK_OUTDMSK12_Pos)                    /*!< PD OUTDMSK: OUTDMSK12 Mask              */
#define PD_OUTDMSK_OUTDMSK13_Pos              13                                                      /*!< PD OUTDMSK: OUTDMSK13 Position          */
#define PD_OUTDMSK_OUTDMSK13_Msk              (0x01UL << PD_OUTDMSK_OUTDMSK13_Pos)                    /*!< PD OUTDMSK: OUTDMSK13 Mask              */
#define PD_OUTDMSK_OUTDMSK14_Pos              14                                                      /*!< PD OUTDMSK: OUTDMSK14 Position          */
#define PD_OUTDMSK_OUTDMSK14_Msk              (0x01UL << PD_OUTDMSK_OUTDMSK14_Pos)                    /*!< PD OUTDMSK: OUTDMSK14 Mask              */
#define PD_OUTDMSK_OUTDMSK15_Pos              15                                                      /*!< PD OUTDMSK: OUTDMSK15 Position          */
#define PD_OUTDMSK_OUTDMSK15_Msk              (0x01UL << PD_OUTDMSK_OUTDMSK15_Pos)                    /*!< PD OUTDMSK: OUTDMSK15 Mask              */

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
#define PD_DBCR_DBEN8_Pos                     8                                                       /*!< PD DBCR: DBEN8 Position                 */
#define PD_DBCR_DBEN8_Msk                     (0x01UL << PD_DBCR_DBEN8_Pos)                           /*!< PD DBCR: DBEN8 Mask                     */
#define PD_DBCR_DBEN9_Pos                     9                                                       /*!< PD DBCR: DBEN9 Position                 */
#define PD_DBCR_DBEN9_Msk                     (0x01UL << PD_DBCR_DBEN9_Pos)                           /*!< PD DBCR: DBEN9 Mask                     */
#define PD_DBCR_DBEN10_Pos                    10                                                      /*!< PD DBCR: DBEN10 Position                */
#define PD_DBCR_DBEN10_Msk                    (0x01UL << PD_DBCR_DBEN10_Pos)                          /*!< PD DBCR: DBEN10 Mask                    */
#define PD_DBCR_DBEN11_Pos                    11                                                      /*!< PD DBCR: DBEN11 Position                */
#define PD_DBCR_DBEN11_Msk                    (0x01UL << PD_DBCR_DBEN11_Pos)                          /*!< PD DBCR: DBEN11 Mask                    */
#define PD_DBCR_DBEN12_Pos                    12                                                      /*!< PD DBCR: DBEN12 Position                */
#define PD_DBCR_DBEN12_Msk                    (0x01UL << PD_DBCR_DBEN12_Pos)                          /*!< PD DBCR: DBEN12 Mask                    */
#define PD_DBCR_DBEN13_Pos                    13                                                      /*!< PD DBCR: DBEN13 Position                */
#define PD_DBCR_DBEN13_Msk                    (0x01UL << PD_DBCR_DBEN13_Pos)                          /*!< PD DBCR: DBEN13 Mask                    */
#define PD_DBCR_DBEN14_Pos                    14                                                      /*!< PD DBCR: DBEN14 Position                */
#define PD_DBCR_DBEN14_Msk                    (0x01UL << PD_DBCR_DBEN14_Pos)                          /*!< PD DBCR: DBEN14 Mask                    */
#define PD_DBCR_DBEN15_Pos                    15                                                      /*!< PD DBCR: DBEN15 Position                */
#define PD_DBCR_DBEN15_Msk                    (0x01UL << PD_DBCR_DBEN15_Pos)                          /*!< PD DBCR: DBEN15 Mask                    */

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
#define PD_IER_P8_Pos                         16                                                      /*!< PD IER: P8 Position                     */
#define PD_IER_P8_Msk                         (0x03UL << PD_IER_P8_Pos)                               /*!< PD IER: P8 Mask                         */
#define PD_IER_P9_Pos                         18                                                      /*!< PD IER: P9 Position                     */
#define PD_IER_P9_Msk                         (0x03UL << PD_IER_P9_Pos)                               /*!< PD IER: P9 Mask                         */
#define PD_IER_P10_Pos                        20                                                      /*!< PD IER: P10 Position                    */
#define PD_IER_P10_Msk                        (0x03UL << PD_IER_P10_Pos)                              /*!< PD IER: P10 Mask                        */
#define PD_IER_P11_Pos                        22                                                      /*!< PD IER: P11 Position                    */
#define PD_IER_P11_Msk                        (0x03UL << PD_IER_P11_Pos)                              /*!< PD IER: P11 Mask                        */
#define PD_IER_P12_Pos                        24                                                      /*!< PD IER: P12 Position                    */
#define PD_IER_P12_Msk                        (0x03UL << PD_IER_P12_Pos)                              /*!< PD IER: P12 Mask                        */
#define PD_IER_P13_Pos                        26                                                      /*!< PD IER: P13 Position                    */
#define PD_IER_P13_Msk                        (0x03UL << PD_IER_P13_Pos)                              /*!< PD IER: P13 Mask                        */
#define PD_IER_P14_Pos                        28                                                      /*!< PD IER: P14 Position                    */
#define PD_IER_P14_Msk                        (0x03UL << PD_IER_P14_Pos)                              /*!< PD IER: P14 Mask                        */
#define PD_IER_P15_Pos                        30                                                      /*!< PD IER: P15 Position                    */
#define PD_IER_P15_Msk                        (0x03UL << PD_IER_P15_Pos)                              /*!< PD IER: P15 Mask                        */

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
#define PD_ISR_P8_Pos                         16                                                      /*!< PD ISR: P8 Position                     */
#define PD_ISR_P8_Msk                         (0x03UL << PD_ISR_P8_Pos)                               /*!< PD ISR: P8 Mask                         */
#define PD_ISR_P9_Pos                         18                                                      /*!< PD ISR: P9 Position                     */
#define PD_ISR_P9_Msk                         (0x03UL << PD_ISR_P9_Pos)                               /*!< PD ISR: P9 Mask                         */
#define PD_ISR_P10_Pos                        20                                                      /*!< PD ISR: P10 Position                    */
#define PD_ISR_P10_Msk                        (0x03UL << PD_ISR_P10_Pos)                              /*!< PD ISR: P10 Mask                        */
#define PD_ISR_P11_Pos                        22                                                      /*!< PD ISR: P11 Position                    */
#define PD_ISR_P11_Msk                        (0x03UL << PD_ISR_P11_Pos)                              /*!< PD ISR: P11 Mask                        */
#define PD_ISR_P12_Pos                        24                                                      /*!< PD ISR: P12 Position                    */
#define PD_ISR_P12_Msk                        (0x03UL << PD_ISR_P12_Pos)                              /*!< PD ISR: P12 Mask                        */
#define PD_ISR_P13_Pos                        26                                                      /*!< PD ISR: P13 Position                    */
#define PD_ISR_P13_Msk                        (0x03UL << PD_ISR_P13_Pos)                              /*!< PD ISR: P13 Mask                        */
#define PD_ISR_P14_Pos                        28                                                      /*!< PD ISR: P14 Position                    */
#define PD_ISR_P14_Msk                        (0x03UL << PD_ISR_P14_Pos)                              /*!< PD ISR: P14 Mask                        */
#define PD_ISR_P15_Pos                        30                                                      /*!< PD ISR: P15 Position                    */
#define PD_ISR_P15_Msk                        (0x03UL << PD_ISR_P15_Pos)                              /*!< PD ISR: P15 Mask                        */

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
#define PD_ICR_P8_Pos                         16                                                      /*!< PD ICR: P8 Position                     */
#define PD_ICR_P8_Msk                         (0x03UL << PD_ICR_P8_Pos)                               /*!< PD ICR: P8 Mask                         */
#define PD_ICR_P9_Pos                         18                                                      /*!< PD ICR: P9 Position                     */
#define PD_ICR_P9_Msk                         (0x03UL << PD_ICR_P9_Pos)                               /*!< PD ICR: P9 Mask                         */
#define PD_ICR_P10_Pos                        20                                                      /*!< PD ICR: P10 Position                    */
#define PD_ICR_P10_Msk                        (0x03UL << PD_ICR_P10_Pos)                              /*!< PD ICR: P10 Mask                        */
#define PD_ICR_P11_Pos                        22                                                      /*!< PD ICR: P11 Position                    */
#define PD_ICR_P11_Msk                        (0x03UL << PD_ICR_P11_Pos)                              /*!< PD ICR: P11 Mask                        */
#define PD_ICR_P12_Pos                        24                                                      /*!< PD ICR: P12 Position                    */
#define PD_ICR_P12_Msk                        (0x03UL << PD_ICR_P12_Pos)                              /*!< PD ICR: P12 Mask                        */
#define PD_ICR_P13_Pos                        26                                                      /*!< PD ICR: P13 Position                    */
#define PD_ICR_P13_Msk                        (0x03UL << PD_ICR_P13_Pos)                              /*!< PD ICR: P13 Mask                        */
#define PD_ICR_P14_Pos                        28                                                      /*!< PD ICR: P14 Position                    */
#define PD_ICR_P14_Msk                        (0x03UL << PD_ICR_P14_Pos)                              /*!< PD ICR: P14 Mask                        */
#define PD_ICR_P15_Pos                        30                                                      /*!< PD ICR: P15 Position                    */
#define PD_ICR_P15_Msk                        (0x03UL << PD_ICR_P15_Pos)                              /*!< PD ICR: P15 Mask                        */


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
#define PE_MOD_MODE8_Pos                      16                                                      /*!< PE MOD: MODE8 Position                  */
#define PE_MOD_MODE8_Msk                      (0x03UL << PE_MOD_MODE8_Pos)                            /*!< PE MOD: MODE8 Mask                      */
#define PE_MOD_MODE9_Pos                      18                                                      /*!< PE MOD: MODE9 Position                  */
#define PE_MOD_MODE9_Msk                      (0x03UL << PE_MOD_MODE9_Pos)                            /*!< PE MOD: MODE9 Mask                      */
#define PE_MOD_MODE10_Pos                     20                                                      /*!< PE MOD: MODE10 Position                 */
#define PE_MOD_MODE10_Msk                     (0x03UL << PE_MOD_MODE10_Pos)                           /*!< PE MOD: MODE10 Mask                     */
#define PE_MOD_MODE11_Pos                     22                                                      /*!< PE MOD: MODE11 Position                 */
#define PE_MOD_MODE11_Msk                     (0x03UL << PE_MOD_MODE11_Pos)                           /*!< PE MOD: MODE11 Mask                     */
#define PE_MOD_MODE12_Pos                     24                                                      /*!< PE MOD: MODE12 Position                 */
#define PE_MOD_MODE12_Msk                     (0x03UL << PE_MOD_MODE12_Pos)                           /*!< PE MOD: MODE12 Mask                     */
#define PE_MOD_MODE13_Pos                     26                                                      /*!< PE MOD: MODE13 Position                 */
#define PE_MOD_MODE13_Msk                     (0x03UL << PE_MOD_MODE13_Pos)                           /*!< PE MOD: MODE13 Mask                     */
#define PE_MOD_MODE14_Pos                     28                                                      /*!< PE MOD: MODE14 Position                 */
#define PE_MOD_MODE14_Msk                     (0x03UL << PE_MOD_MODE14_Pos)                           /*!< PE MOD: MODE14 Mask                     */
#define PE_MOD_MODE15_Pos                     30                                                      /*!< PE MOD: MODE15 Position                 */
#define PE_MOD_MODE15_Msk                     (0x03UL << PE_MOD_MODE15_Pos)                           /*!< PE MOD: MODE15 Mask                     */

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
#define PE_TYP_TYP8_Pos                       8                                                       /*!< PE TYP: TYP8 Position                   */
#define PE_TYP_TYP8_Msk                       (0x01UL << PE_TYP_TYP8_Pos)                             /*!< PE TYP: TYP8 Mask                       */
#define PE_TYP_TYP9_Pos                       9                                                       /*!< PE TYP: TYP9 Position                   */
#define PE_TYP_TYP9_Msk                       (0x01UL << PE_TYP_TYP9_Pos)                             /*!< PE TYP: TYP9 Mask                       */
#define PE_TYP_TYP10_Pos                      10                                                      /*!< PE TYP: TYP10 Position                  */
#define PE_TYP_TYP10_Msk                      (0x01UL << PE_TYP_TYP10_Pos)                            /*!< PE TYP: TYP10 Mask                      */
#define PE_TYP_TYP11_Pos                      11                                                      /*!< PE TYP: TYP11 Position                  */
#define PE_TYP_TYP11_Msk                      (0x01UL << PE_TYP_TYP11_Pos)                            /*!< PE TYP: TYP11 Mask                      */
#define PE_TYP_TYP12_Pos                      12                                                      /*!< PE TYP: TYP12 Position                  */
#define PE_TYP_TYP12_Msk                      (0x01UL << PE_TYP_TYP12_Pos)                            /*!< PE TYP: TYP12 Mask                      */
#define PE_TYP_TYP13_Pos                      13                                                      /*!< PE TYP: TYP13 Position                  */
#define PE_TYP_TYP13_Msk                      (0x01UL << PE_TYP_TYP13_Pos)                            /*!< PE TYP: TYP13 Mask                      */
#define PE_TYP_TYP14_Pos                      14                                                      /*!< PE TYP: TYP14 Position                  */
#define PE_TYP_TYP14_Msk                      (0x01UL << PE_TYP_TYP14_Pos)                            /*!< PE TYP: TYP14 Mask                      */
#define PE_TYP_TYP15_Pos                      15                                                      /*!< PE TYP: TYP15 Position                  */
#define PE_TYP_TYP15_Msk                      (0x01UL << PE_TYP_TYP15_Pos)                            /*!< PE TYP: TYP15 Mask                      */

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

/* ----------------------------------  PE_AFSR2  ---------------------------------- */
#define PE_AFSR2_AFSR8_Pos                    0                                                       /*!< PE AFSR2: AFSR8 Position                */
#define PE_AFSR2_AFSR8_Msk                    (0x0fUL << PE_AFSR2_AFSR8_Pos)                          /*!< PE AFSR2: AFSR8 Mask                    */
#define PE_AFSR2_AFSR9_Pos                    4                                                       /*!< PE AFSR2: AFSR9 Position                */
#define PE_AFSR2_AFSR9_Msk                    (0x0fUL << PE_AFSR2_AFSR9_Pos)                          /*!< PE AFSR2: AFSR9 Mask                    */
#define PE_AFSR2_AFSR10_Pos                   8                                                       /*!< PE AFSR2: AFSR10 Position               */
#define PE_AFSR2_AFSR10_Msk                   (0x0fUL << PE_AFSR2_AFSR10_Pos)                         /*!< PE AFSR2: AFSR10 Mask                   */
#define PE_AFSR2_AFSR11_Pos                   12                                                      /*!< PE AFSR2: AFSR11 Position               */
#define PE_AFSR2_AFSR11_Msk                   (0x0fUL << PE_AFSR2_AFSR11_Pos)                         /*!< PE AFSR2: AFSR11 Mask                   */
#define PE_AFSR2_AFSR12_Pos                   16                                                      /*!< PE AFSR2: AFSR12 Position               */
#define PE_AFSR2_AFSR12_Msk                   (0x0fUL << PE_AFSR2_AFSR12_Pos)                         /*!< PE AFSR2: AFSR12 Mask                   */
#define PE_AFSR2_AFSR13_Pos                   20                                                      /*!< PE AFSR2: AFSR13 Position               */
#define PE_AFSR2_AFSR13_Msk                   (0x0fUL << PE_AFSR2_AFSR13_Pos)                         /*!< PE AFSR2: AFSR13 Mask                   */
#define PE_AFSR2_AFSR14_Pos                   24                                                      /*!< PE AFSR2: AFSR14 Position               */
#define PE_AFSR2_AFSR14_Msk                   (0x0fUL << PE_AFSR2_AFSR14_Pos)                         /*!< PE AFSR2: AFSR14 Mask                   */
#define PE_AFSR2_AFSR15_Pos                   28                                                      /*!< PE AFSR2: AFSR15 Position               */
#define PE_AFSR2_AFSR15_Msk                   (0x0fUL << PE_AFSR2_AFSR15_Pos)                         /*!< PE AFSR2: AFSR15 Mask                   */

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
#define PE_PUPD_PUPD8_Pos                     16                                                      /*!< PE PUPD: PUPD8 Position                 */
#define PE_PUPD_PUPD8_Msk                     (0x03UL << PE_PUPD_PUPD8_Pos)                           /*!< PE PUPD: PUPD8 Mask                     */
#define PE_PUPD_PUPD9_Pos                     18                                                      /*!< PE PUPD: PUPD9 Position                 */
#define PE_PUPD_PUPD9_Msk                     (0x03UL << PE_PUPD_PUPD9_Pos)                           /*!< PE PUPD: PUPD9 Mask                     */
#define PE_PUPD_PUPD10_Pos                    20                                                      /*!< PE PUPD: PUPD10 Position                */
#define PE_PUPD_PUPD10_Msk                    (0x03UL << PE_PUPD_PUPD10_Pos)                          /*!< PE PUPD: PUPD10 Mask                    */
#define PE_PUPD_PUPD11_Pos                    22                                                      /*!< PE PUPD: PUPD11 Position                */
#define PE_PUPD_PUPD11_Msk                    (0x03UL << PE_PUPD_PUPD11_Pos)                          /*!< PE PUPD: PUPD11 Mask                    */
#define PE_PUPD_PUPD12_Pos                    24                                                      /*!< PE PUPD: PUPD12 Position                */
#define PE_PUPD_PUPD12_Msk                    (0x03UL << PE_PUPD_PUPD12_Pos)                          /*!< PE PUPD: PUPD12 Mask                    */
#define PE_PUPD_PUPD13_Pos                    26                                                      /*!< PE PUPD: PUPD13 Position                */
#define PE_PUPD_PUPD13_Msk                    (0x03UL << PE_PUPD_PUPD13_Pos)                          /*!< PE PUPD: PUPD13 Mask                    */
#define PE_PUPD_PUPD14_Pos                    28                                                      /*!< PE PUPD: PUPD14 Position                */
#define PE_PUPD_PUPD14_Msk                    (0x03UL << PE_PUPD_PUPD14_Pos)                          /*!< PE PUPD: PUPD14 Mask                    */
#define PE_PUPD_PUPD15_Pos                    30                                                      /*!< PE PUPD: PUPD15 Position                */
#define PE_PUPD_PUPD15_Msk                    (0x03UL << PE_PUPD_PUPD15_Pos)                          /*!< PE PUPD: PUPD15 Mask                    */

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
#define PE_INDR_INDR8_Pos                     8                                                       /*!< PE INDR: INDR8 Position                 */
#define PE_INDR_INDR8_Msk                     (0x01UL << PE_INDR_INDR8_Pos)                           /*!< PE INDR: INDR8 Mask                     */
#define PE_INDR_INDR9_Pos                     9                                                       /*!< PE INDR: INDR9 Position                 */
#define PE_INDR_INDR9_Msk                     (0x01UL << PE_INDR_INDR9_Pos)                           /*!< PE INDR: INDR9 Mask                     */
#define PE_INDR_INDR10_Pos                    10                                                      /*!< PE INDR: INDR10 Position                */
#define PE_INDR_INDR10_Msk                    (0x01UL << PE_INDR_INDR10_Pos)                          /*!< PE INDR: INDR10 Mask                    */
#define PE_INDR_INDR11_Pos                    11                                                      /*!< PE INDR: INDR11 Position                */
#define PE_INDR_INDR11_Msk                    (0x01UL << PE_INDR_INDR11_Pos)                          /*!< PE INDR: INDR11 Mask                    */
#define PE_INDR_INDR12_Pos                    12                                                      /*!< PE INDR: INDR12 Position                */
#define PE_INDR_INDR12_Msk                    (0x01UL << PE_INDR_INDR12_Pos)                          /*!< PE INDR: INDR12 Mask                    */
#define PE_INDR_INDR13_Pos                    13                                                      /*!< PE INDR: INDR13 Position                */
#define PE_INDR_INDR13_Msk                    (0x01UL << PE_INDR_INDR13_Pos)                          /*!< PE INDR: INDR13 Mask                    */
#define PE_INDR_INDR14_Pos                    14                                                      /*!< PE INDR: INDR14 Position                */
#define PE_INDR_INDR14_Msk                    (0x01UL << PE_INDR_INDR14_Pos)                          /*!< PE INDR: INDR14 Mask                    */
#define PE_INDR_INDR15_Pos                    15                                                      /*!< PE INDR: INDR15 Position                */
#define PE_INDR_INDR15_Msk                    (0x01UL << PE_INDR_INDR15_Pos)                          /*!< PE INDR: INDR15 Mask                    */

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
#define PE_OUTDR_OUTDR8_Pos                   8                                                       /*!< PE OUTDR: OUTDR8 Position               */
#define PE_OUTDR_OUTDR8_Msk                   (0x01UL << PE_OUTDR_OUTDR8_Pos)                         /*!< PE OUTDR: OUTDR8 Mask                   */
#define PE_OUTDR_OUTDR9_Pos                   9                                                       /*!< PE OUTDR: OUTDR9 Position               */
#define PE_OUTDR_OUTDR9_Msk                   (0x01UL << PE_OUTDR_OUTDR9_Pos)                         /*!< PE OUTDR: OUTDR9 Mask                   */
#define PE_OUTDR_OUTDR10_Pos                  10                                                      /*!< PE OUTDR: OUTDR10 Position              */
#define PE_OUTDR_OUTDR10_Msk                  (0x01UL << PE_OUTDR_OUTDR10_Pos)                        /*!< PE OUTDR: OUTDR10 Mask                  */
#define PE_OUTDR_OUTDR11_Pos                  11                                                      /*!< PE OUTDR: OUTDR11 Position              */
#define PE_OUTDR_OUTDR11_Msk                  (0x01UL << PE_OUTDR_OUTDR11_Pos)                        /*!< PE OUTDR: OUTDR11 Mask                  */
#define PE_OUTDR_OUTDR12_Pos                  12                                                      /*!< PE OUTDR: OUTDR12 Position              */
#define PE_OUTDR_OUTDR12_Msk                  (0x01UL << PE_OUTDR_OUTDR12_Pos)                        /*!< PE OUTDR: OUTDR12 Mask                  */
#define PE_OUTDR_OUTDR13_Pos                  13                                                      /*!< PE OUTDR: OUTDR13 Position              */
#define PE_OUTDR_OUTDR13_Msk                  (0x01UL << PE_OUTDR_OUTDR13_Pos)                        /*!< PE OUTDR: OUTDR13 Mask                  */
#define PE_OUTDR_OUTDR14_Pos                  14                                                      /*!< PE OUTDR: OUTDR14 Position              */
#define PE_OUTDR_OUTDR14_Msk                  (0x01UL << PE_OUTDR_OUTDR14_Pos)                        /*!< PE OUTDR: OUTDR14 Mask                  */
#define PE_OUTDR_OUTDR15_Pos                  15                                                      /*!< PE OUTDR: OUTDR15 Position              */
#define PE_OUTDR_OUTDR15_Msk                  (0x01UL << PE_OUTDR_OUTDR15_Pos)                        /*!< PE OUTDR: OUTDR15 Mask                  */

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
#define PE_BSR_BSR8_Pos                       8                                                       /*!< PE BSR: BSR8 Position                   */
#define PE_BSR_BSR8_Msk                       (0x01UL << PE_BSR_BSR8_Pos)                             /*!< PE BSR: BSR8 Mask                       */
#define PE_BSR_BSR9_Pos                       9                                                       /*!< PE BSR: BSR9 Position                   */
#define PE_BSR_BSR9_Msk                       (0x01UL << PE_BSR_BSR9_Pos)                             /*!< PE BSR: BSR9 Mask                       */
#define PE_BSR_BSR10_Pos                      10                                                      /*!< PE BSR: BSR10 Position                  */
#define PE_BSR_BSR10_Msk                      (0x01UL << PE_BSR_BSR10_Pos)                            /*!< PE BSR: BSR10 Mask                      */
#define PE_BSR_BSR11_Pos                      11                                                      /*!< PE BSR: BSR11 Position                  */
#define PE_BSR_BSR11_Msk                      (0x01UL << PE_BSR_BSR11_Pos)                            /*!< PE BSR: BSR11 Mask                      */
#define PE_BSR_BSR12_Pos                      12                                                      /*!< PE BSR: BSR12 Position                  */
#define PE_BSR_BSR12_Msk                      (0x01UL << PE_BSR_BSR12_Pos)                            /*!< PE BSR: BSR12 Mask                      */
#define PE_BSR_BSR13_Pos                      13                                                      /*!< PE BSR: BSR13 Position                  */
#define PE_BSR_BSR13_Msk                      (0x01UL << PE_BSR_BSR13_Pos)                            /*!< PE BSR: BSR13 Mask                      */
#define PE_BSR_BSR14_Pos                      14                                                      /*!< PE BSR: BSR14 Position                  */
#define PE_BSR_BSR14_Msk                      (0x01UL << PE_BSR_BSR14_Pos)                            /*!< PE BSR: BSR14 Mask                      */
#define PE_BSR_BSR15_Pos                      15                                                      /*!< PE BSR: BSR15 Position                  */
#define PE_BSR_BSR15_Msk                      (0x01UL << PE_BSR_BSR15_Pos)                            /*!< PE BSR: BSR15 Mask                      */

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
#define PE_BCR_BCR8_Pos                       8                                                       /*!< PE BCR: BCR8 Position                   */
#define PE_BCR_BCR8_Msk                       (0x01UL << PE_BCR_BCR8_Pos)                             /*!< PE BCR: BCR8 Mask                       */
#define PE_BCR_BCR9_Pos                       9                                                       /*!< PE BCR: BCR9 Position                   */
#define PE_BCR_BCR9_Msk                       (0x01UL << PE_BCR_BCR9_Pos)                             /*!< PE BCR: BCR9 Mask                       */
#define PE_BCR_BCR10_Pos                      10                                                      /*!< PE BCR: BCR10 Position                  */
#define PE_BCR_BCR10_Msk                      (0x01UL << PE_BCR_BCR10_Pos)                            /*!< PE BCR: BCR10 Mask                      */
#define PE_BCR_BCR11_Pos                      11                                                      /*!< PE BCR: BCR11 Position                  */
#define PE_BCR_BCR11_Msk                      (0x01UL << PE_BCR_BCR11_Pos)                            /*!< PE BCR: BCR11 Mask                      */
#define PE_BCR_BCR12_Pos                      12                                                      /*!< PE BCR: BCR12 Position                  */
#define PE_BCR_BCR12_Msk                      (0x01UL << PE_BCR_BCR12_Pos)                            /*!< PE BCR: BCR12 Mask                      */
#define PE_BCR_BCR13_Pos                      13                                                      /*!< PE BCR: BCR13 Position                  */
#define PE_BCR_BCR13_Msk                      (0x01UL << PE_BCR_BCR13_Pos)                            /*!< PE BCR: BCR13 Mask                      */
#define PE_BCR_BCR14_Pos                      14                                                      /*!< PE BCR: BCR14 Position                  */
#define PE_BCR_BCR14_Msk                      (0x01UL << PE_BCR_BCR14_Pos)                            /*!< PE BCR: BCR14 Mask                      */
#define PE_BCR_BCR15_Pos                      15                                                      /*!< PE BCR: BCR15 Position                  */
#define PE_BCR_BCR15_Msk                      (0x01UL << PE_BCR_BCR15_Pos)                            /*!< PE BCR: BCR15 Mask                      */

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
#define PE_OUTDMSK_OUTDMSK8_Pos               8                                                       /*!< PE OUTDMSK: OUTDMSK8 Position           */
#define PE_OUTDMSK_OUTDMSK8_Msk               (0x01UL << PE_OUTDMSK_OUTDMSK8_Pos)                     /*!< PE OUTDMSK: OUTDMSK8 Mask               */
#define PE_OUTDMSK_OUTDMSK9_Pos               9                                                       /*!< PE OUTDMSK: OUTDMSK9 Position           */
#define PE_OUTDMSK_OUTDMSK9_Msk               (0x01UL << PE_OUTDMSK_OUTDMSK9_Pos)                     /*!< PE OUTDMSK: OUTDMSK9 Mask               */
#define PE_OUTDMSK_OUTDMSK10_Pos              10                                                      /*!< PE OUTDMSK: OUTDMSK10 Position          */
#define PE_OUTDMSK_OUTDMSK10_Msk              (0x01UL << PE_OUTDMSK_OUTDMSK10_Pos)                    /*!< PE OUTDMSK: OUTDMSK10 Mask              */
#define PE_OUTDMSK_OUTDMSK11_Pos              11                                                      /*!< PE OUTDMSK: OUTDMSK11 Position          */
#define PE_OUTDMSK_OUTDMSK11_Msk              (0x01UL << PE_OUTDMSK_OUTDMSK11_Pos)                    /*!< PE OUTDMSK: OUTDMSK11 Mask              */
#define PE_OUTDMSK_OUTDMSK12_Pos              12                                                      /*!< PE OUTDMSK: OUTDMSK12 Position          */
#define PE_OUTDMSK_OUTDMSK12_Msk              (0x01UL << PE_OUTDMSK_OUTDMSK12_Pos)                    /*!< PE OUTDMSK: OUTDMSK12 Mask              */
#define PE_OUTDMSK_OUTDMSK13_Pos              13                                                      /*!< PE OUTDMSK: OUTDMSK13 Position          */
#define PE_OUTDMSK_OUTDMSK13_Msk              (0x01UL << PE_OUTDMSK_OUTDMSK13_Pos)                    /*!< PE OUTDMSK: OUTDMSK13 Mask              */
#define PE_OUTDMSK_OUTDMSK14_Pos              14                                                      /*!< PE OUTDMSK: OUTDMSK14 Position          */
#define PE_OUTDMSK_OUTDMSK14_Msk              (0x01UL << PE_OUTDMSK_OUTDMSK14_Pos)                    /*!< PE OUTDMSK: OUTDMSK14 Mask              */
#define PE_OUTDMSK_OUTDMSK15_Pos              15                                                      /*!< PE OUTDMSK: OUTDMSK15 Position          */
#define PE_OUTDMSK_OUTDMSK15_Msk              (0x01UL << PE_OUTDMSK_OUTDMSK15_Pos)                    /*!< PE OUTDMSK: OUTDMSK15 Mask              */

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
#define PE_DBCR_DBEN8_Pos                     8                                                       /*!< PE DBCR: DBEN8 Position                 */
#define PE_DBCR_DBEN8_Msk                     (0x01UL << PE_DBCR_DBEN8_Pos)                           /*!< PE DBCR: DBEN8 Mask                     */
#define PE_DBCR_DBEN9_Pos                     9                                                       /*!< PE DBCR: DBEN9 Position                 */
#define PE_DBCR_DBEN9_Msk                     (0x01UL << PE_DBCR_DBEN9_Pos)                           /*!< PE DBCR: DBEN9 Mask                     */
#define PE_DBCR_DBEN10_Pos                    10                                                      /*!< PE DBCR: DBEN10 Position                */
#define PE_DBCR_DBEN10_Msk                    (0x01UL << PE_DBCR_DBEN10_Pos)                          /*!< PE DBCR: DBEN10 Mask                    */
#define PE_DBCR_DBEN11_Pos                    11                                                      /*!< PE DBCR: DBEN11 Position                */
#define PE_DBCR_DBEN11_Msk                    (0x01UL << PE_DBCR_DBEN11_Pos)                          /*!< PE DBCR: DBEN11 Mask                    */
#define PE_DBCR_DBEN12_Pos                    12                                                      /*!< PE DBCR: DBEN12 Position                */
#define PE_DBCR_DBEN12_Msk                    (0x01UL << PE_DBCR_DBEN12_Pos)                          /*!< PE DBCR: DBEN12 Mask                    */
#define PE_DBCR_DBEN13_Pos                    13                                                      /*!< PE DBCR: DBEN13 Position                */
#define PE_DBCR_DBEN13_Msk                    (0x01UL << PE_DBCR_DBEN13_Pos)                          /*!< PE DBCR: DBEN13 Mask                    */
#define PE_DBCR_DBEN14_Pos                    14                                                      /*!< PE DBCR: DBEN14 Position                */
#define PE_DBCR_DBEN14_Msk                    (0x01UL << PE_DBCR_DBEN14_Pos)                          /*!< PE DBCR: DBEN14 Mask                    */
#define PE_DBCR_DBEN15_Pos                    15                                                      /*!< PE DBCR: DBEN15 Position                */
#define PE_DBCR_DBEN15_Msk                    (0x01UL << PE_DBCR_DBEN15_Pos)                          /*!< PE DBCR: DBEN15 Mask                    */

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
#define PE_IER_P8_Pos                         16                                                      /*!< PE IER: P8 Position                     */
#define PE_IER_P8_Msk                         (0x03UL << PE_IER_P8_Pos)                               /*!< PE IER: P8 Mask                         */
#define PE_IER_P9_Pos                         18                                                      /*!< PE IER: P9 Position                     */
#define PE_IER_P9_Msk                         (0x03UL << PE_IER_P9_Pos)                               /*!< PE IER: P9 Mask                         */
#define PE_IER_P10_Pos                        20                                                      /*!< PE IER: P10 Position                    */
#define PE_IER_P10_Msk                        (0x03UL << PE_IER_P10_Pos)                              /*!< PE IER: P10 Mask                        */
#define PE_IER_P11_Pos                        22                                                      /*!< PE IER: P11 Position                    */
#define PE_IER_P11_Msk                        (0x03UL << PE_IER_P11_Pos)                              /*!< PE IER: P11 Mask                        */
#define PE_IER_P12_Pos                        24                                                      /*!< PE IER: P12 Position                    */
#define PE_IER_P12_Msk                        (0x03UL << PE_IER_P12_Pos)                              /*!< PE IER: P12 Mask                        */
#define PE_IER_P13_Pos                        26                                                      /*!< PE IER: P13 Position                    */
#define PE_IER_P13_Msk                        (0x03UL << PE_IER_P13_Pos)                              /*!< PE IER: P13 Mask                        */
#define PE_IER_P14_Pos                        28                                                      /*!< PE IER: P14 Position                    */
#define PE_IER_P14_Msk                        (0x03UL << PE_IER_P14_Pos)                              /*!< PE IER: P14 Mask                        */
#define PE_IER_P15_Pos                        30                                                      /*!< PE IER: P15 Position                    */
#define PE_IER_P15_Msk                        (0x03UL << PE_IER_P15_Pos)                              /*!< PE IER: P15 Mask                        */

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
#define PE_ISR_P8_Pos                         16                                                      /*!< PE ISR: P8 Position                     */
#define PE_ISR_P8_Msk                         (0x03UL << PE_ISR_P8_Pos)                               /*!< PE ISR: P8 Mask                         */
#define PE_ISR_P9_Pos                         18                                                      /*!< PE ISR: P9 Position                     */
#define PE_ISR_P9_Msk                         (0x03UL << PE_ISR_P9_Pos)                               /*!< PE ISR: P9 Mask                         */
#define PE_ISR_P10_Pos                        20                                                      /*!< PE ISR: P10 Position                    */
#define PE_ISR_P10_Msk                        (0x03UL << PE_ISR_P10_Pos)                              /*!< PE ISR: P10 Mask                        */
#define PE_ISR_P11_Pos                        22                                                      /*!< PE ISR: P11 Position                    */
#define PE_ISR_P11_Msk                        (0x03UL << PE_ISR_P11_Pos)                              /*!< PE ISR: P11 Mask                        */
#define PE_ISR_P12_Pos                        24                                                      /*!< PE ISR: P12 Position                    */
#define PE_ISR_P12_Msk                        (0x03UL << PE_ISR_P12_Pos)                              /*!< PE ISR: P12 Mask                        */
#define PE_ISR_P13_Pos                        26                                                      /*!< PE ISR: P13 Position                    */
#define PE_ISR_P13_Msk                        (0x03UL << PE_ISR_P13_Pos)                              /*!< PE ISR: P13 Mask                        */
#define PE_ISR_P14_Pos                        28                                                      /*!< PE ISR: P14 Position                    */
#define PE_ISR_P14_Msk                        (0x03UL << PE_ISR_P14_Pos)                              /*!< PE ISR: P14 Mask                        */
#define PE_ISR_P15_Pos                        30                                                      /*!< PE ISR: P15 Position                    */
#define PE_ISR_P15_Msk                        (0x03UL << PE_ISR_P15_Pos)                              /*!< PE ISR: P15 Mask                        */

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
#define PE_ICR_P8_Pos                         16                                                      /*!< PE ICR: P8 Position                     */
#define PE_ICR_P8_Msk                         (0x03UL << PE_ICR_P8_Pos)                               /*!< PE ICR: P8 Mask                         */
#define PE_ICR_P9_Pos                         18                                                      /*!< PE ICR: P9 Position                     */
#define PE_ICR_P9_Msk                         (0x03UL << PE_ICR_P9_Pos)                               /*!< PE ICR: P9 Mask                         */
#define PE_ICR_P10_Pos                        20                                                      /*!< PE ICR: P10 Position                    */
#define PE_ICR_P10_Msk                        (0x03UL << PE_ICR_P10_Pos)                              /*!< PE ICR: P10 Mask                        */
#define PE_ICR_P11_Pos                        22                                                      /*!< PE ICR: P11 Position                    */
#define PE_ICR_P11_Msk                        (0x03UL << PE_ICR_P11_Pos)                              /*!< PE ICR: P11 Mask                        */
#define PE_ICR_P12_Pos                        24                                                      /*!< PE ICR: P12 Position                    */
#define PE_ICR_P12_Msk                        (0x03UL << PE_ICR_P12_Pos)                              /*!< PE ICR: P12 Mask                        */
#define PE_ICR_P13_Pos                        26                                                      /*!< PE ICR: P13 Position                    */
#define PE_ICR_P13_Msk                        (0x03UL << PE_ICR_P13_Pos)                              /*!< PE ICR: P13 Mask                        */
#define PE_ICR_P14_Pos                        28                                                      /*!< PE ICR: P14 Position                    */
#define PE_ICR_P14_Msk                        (0x03UL << PE_ICR_P14_Pos)                              /*!< PE ICR: P14 Mask                        */
#define PE_ICR_P15_Pos                        30                                                      /*!< PE ICR: P15 Position                    */
#define PE_ICR_P15_Msk                        (0x03UL << PE_ICR_P15_Pos)                              /*!< PE ICR: P15 Mask                        */


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
#define PF_MOD_MODE8_Pos                      16                                                      /*!< PF MOD: MODE8 Position                  */
#define PF_MOD_MODE8_Msk                      (0x03UL << PF_MOD_MODE8_Pos)                            /*!< PF MOD: MODE8 Mask                      */
#define PF_MOD_MODE9_Pos                      18                                                      /*!< PF MOD: MODE9 Position                  */
#define PF_MOD_MODE9_Msk                      (0x03UL << PF_MOD_MODE9_Pos)                            /*!< PF MOD: MODE9 Mask                      */
#define PF_MOD_MODE10_Pos                     20                                                      /*!< PF MOD: MODE10 Position                 */
#define PF_MOD_MODE10_Msk                     (0x03UL << PF_MOD_MODE10_Pos)                           /*!< PF MOD: MODE10 Mask                     */
#define PF_MOD_MODE11_Pos                     22                                                      /*!< PF MOD: MODE11 Position                 */
#define PF_MOD_MODE11_Msk                     (0x03UL << PF_MOD_MODE11_Pos)                           /*!< PF MOD: MODE11 Mask                     */
#define PF_MOD_MODE12_Pos                     24                                                      /*!< PF MOD: MODE12 Position                 */
#define PF_MOD_MODE12_Msk                     (0x03UL << PF_MOD_MODE12_Pos)                           /*!< PF MOD: MODE12 Mask                     */
#define PF_MOD_MODE13_Pos                     26                                                      /*!< PF MOD: MODE13 Position                 */
#define PF_MOD_MODE13_Msk                     (0x03UL << PF_MOD_MODE13_Pos)                           /*!< PF MOD: MODE13 Mask                     */
#define PF_MOD_MODE14_Pos                     28                                                      /*!< PF MOD: MODE14 Position                 */
#define PF_MOD_MODE14_Msk                     (0x03UL << PF_MOD_MODE14_Pos)                           /*!< PF MOD: MODE14 Mask                     */
#define PF_MOD_MODE15_Pos                     30                                                      /*!< PF MOD: MODE15 Position                 */
#define PF_MOD_MODE15_Msk                     (0x03UL << PF_MOD_MODE15_Pos)                           /*!< PF MOD: MODE15 Mask                     */

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
#define PF_TYP_TYP8_Pos                       8                                                       /*!< PF TYP: TYP8 Position                   */
#define PF_TYP_TYP8_Msk                       (0x01UL << PF_TYP_TYP8_Pos)                             /*!< PF TYP: TYP8 Mask                       */
#define PF_TYP_TYP9_Pos                       9                                                       /*!< PF TYP: TYP9 Position                   */
#define PF_TYP_TYP9_Msk                       (0x01UL << PF_TYP_TYP9_Pos)                             /*!< PF TYP: TYP9 Mask                       */
#define PF_TYP_TYP10_Pos                      10                                                      /*!< PF TYP: TYP10 Position                  */
#define PF_TYP_TYP10_Msk                      (0x01UL << PF_TYP_TYP10_Pos)                            /*!< PF TYP: TYP10 Mask                      */
#define PF_TYP_TYP11_Pos                      11                                                      /*!< PF TYP: TYP11 Position                  */
#define PF_TYP_TYP11_Msk                      (0x01UL << PF_TYP_TYP11_Pos)                            /*!< PF TYP: TYP11 Mask                      */
#define PF_TYP_TYP12_Pos                      12                                                      /*!< PF TYP: TYP12 Position                  */
#define PF_TYP_TYP12_Msk                      (0x01UL << PF_TYP_TYP12_Pos)                            /*!< PF TYP: TYP12 Mask                      */
#define PF_TYP_TYP13_Pos                      13                                                      /*!< PF TYP: TYP13 Position                  */
#define PF_TYP_TYP13_Msk                      (0x01UL << PF_TYP_TYP13_Pos)                            /*!< PF TYP: TYP13 Mask                      */
#define PF_TYP_TYP14_Pos                      14                                                      /*!< PF TYP: TYP14 Position                  */
#define PF_TYP_TYP14_Msk                      (0x01UL << PF_TYP_TYP14_Pos)                            /*!< PF TYP: TYP14 Mask                      */
#define PF_TYP_TYP15_Pos                      15                                                      /*!< PF TYP: TYP15 Position                  */
#define PF_TYP_TYP15_Msk                      (0x01UL << PF_TYP_TYP15_Pos)                            /*!< PF TYP: TYP15 Mask                      */

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

/* ----------------------------------  PF_AFSR2  ---------------------------------- */
#define PF_AFSR2_AFSR8_Pos                    0                                                       /*!< PF AFSR2: AFSR8 Position                */
#define PF_AFSR2_AFSR8_Msk                    (0x0fUL << PF_AFSR2_AFSR8_Pos)                          /*!< PF AFSR2: AFSR8 Mask                    */
#define PF_AFSR2_AFSR9_Pos                    4                                                       /*!< PF AFSR2: AFSR9 Position                */
#define PF_AFSR2_AFSR9_Msk                    (0x0fUL << PF_AFSR2_AFSR9_Pos)                          /*!< PF AFSR2: AFSR9 Mask                    */
#define PF_AFSR2_AFSR10_Pos                   8                                                       /*!< PF AFSR2: AFSR10 Position               */
#define PF_AFSR2_AFSR10_Msk                   (0x0fUL << PF_AFSR2_AFSR10_Pos)                         /*!< PF AFSR2: AFSR10 Mask                   */
#define PF_AFSR2_AFSR11_Pos                   12                                                      /*!< PF AFSR2: AFSR11 Position               */
#define PF_AFSR2_AFSR11_Msk                   (0x0fUL << PF_AFSR2_AFSR11_Pos)                         /*!< PF AFSR2: AFSR11 Mask                   */
#define PF_AFSR2_AFSR12_Pos                   16                                                      /*!< PF AFSR2: AFSR12 Position               */
#define PF_AFSR2_AFSR12_Msk                   (0x0fUL << PF_AFSR2_AFSR12_Pos)                         /*!< PF AFSR2: AFSR12 Mask                   */
#define PF_AFSR2_AFSR13_Pos                   20                                                      /*!< PF AFSR2: AFSR13 Position               */
#define PF_AFSR2_AFSR13_Msk                   (0x0fUL << PF_AFSR2_AFSR13_Pos)                         /*!< PF AFSR2: AFSR13 Mask                   */
#define PF_AFSR2_AFSR14_Pos                   24                                                      /*!< PF AFSR2: AFSR14 Position               */
#define PF_AFSR2_AFSR14_Msk                   (0x0fUL << PF_AFSR2_AFSR14_Pos)                         /*!< PF AFSR2: AFSR14 Mask                   */
#define PF_AFSR2_AFSR15_Pos                   28                                                      /*!< PF AFSR2: AFSR15 Position               */
#define PF_AFSR2_AFSR15_Msk                   (0x0fUL << PF_AFSR2_AFSR15_Pos)                         /*!< PF AFSR2: AFSR15 Mask                   */

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
#define PF_PUPD_PUPD8_Pos                     16                                                      /*!< PF PUPD: PUPD8 Position                 */
#define PF_PUPD_PUPD8_Msk                     (0x03UL << PF_PUPD_PUPD8_Pos)                           /*!< PF PUPD: PUPD8 Mask                     */
#define PF_PUPD_PUPD9_Pos                     18                                                      /*!< PF PUPD: PUPD9 Position                 */
#define PF_PUPD_PUPD9_Msk                     (0x03UL << PF_PUPD_PUPD9_Pos)                           /*!< PF PUPD: PUPD9 Mask                     */
#define PF_PUPD_PUPD10_Pos                    20                                                      /*!< PF PUPD: PUPD10 Position                */
#define PF_PUPD_PUPD10_Msk                    (0x03UL << PF_PUPD_PUPD10_Pos)                          /*!< PF PUPD: PUPD10 Mask                    */
#define PF_PUPD_PUPD11_Pos                    22                                                      /*!< PF PUPD: PUPD11 Position                */
#define PF_PUPD_PUPD11_Msk                    (0x03UL << PF_PUPD_PUPD11_Pos)                          /*!< PF PUPD: PUPD11 Mask                    */
#define PF_PUPD_PUPD12_Pos                    24                                                      /*!< PF PUPD: PUPD12 Position                */
#define PF_PUPD_PUPD12_Msk                    (0x03UL << PF_PUPD_PUPD12_Pos)                          /*!< PF PUPD: PUPD12 Mask                    */
#define PF_PUPD_PUPD13_Pos                    26                                                      /*!< PF PUPD: PUPD13 Position                */
#define PF_PUPD_PUPD13_Msk                    (0x03UL << PF_PUPD_PUPD13_Pos)                          /*!< PF PUPD: PUPD13 Mask                    */
#define PF_PUPD_PUPD14_Pos                    28                                                      /*!< PF PUPD: PUPD14 Position                */
#define PF_PUPD_PUPD14_Msk                    (0x03UL << PF_PUPD_PUPD14_Pos)                          /*!< PF PUPD: PUPD14 Mask                    */
#define PF_PUPD_PUPD15_Pos                    30                                                      /*!< PF PUPD: PUPD15 Position                */
#define PF_PUPD_PUPD15_Msk                    (0x03UL << PF_PUPD_PUPD15_Pos)                          /*!< PF PUPD: PUPD15 Mask                    */

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
#define PF_INDR_INDR8_Pos                     8                                                       /*!< PF INDR: INDR8 Position                 */
#define PF_INDR_INDR8_Msk                     (0x01UL << PF_INDR_INDR8_Pos)                           /*!< PF INDR: INDR8 Mask                     */
#define PF_INDR_INDR9_Pos                     9                                                       /*!< PF INDR: INDR9 Position                 */
#define PF_INDR_INDR9_Msk                     (0x01UL << PF_INDR_INDR9_Pos)                           /*!< PF INDR: INDR9 Mask                     */
#define PF_INDR_INDR10_Pos                    10                                                      /*!< PF INDR: INDR10 Position                */
#define PF_INDR_INDR10_Msk                    (0x01UL << PF_INDR_INDR10_Pos)                          /*!< PF INDR: INDR10 Mask                    */
#define PF_INDR_INDR11_Pos                    11                                                      /*!< PF INDR: INDR11 Position                */
#define PF_INDR_INDR11_Msk                    (0x01UL << PF_INDR_INDR11_Pos)                          /*!< PF INDR: INDR11 Mask                    */
#define PF_INDR_INDR12_Pos                    12                                                      /*!< PF INDR: INDR12 Position                */
#define PF_INDR_INDR12_Msk                    (0x01UL << PF_INDR_INDR12_Pos)                          /*!< PF INDR: INDR12 Mask                    */
#define PF_INDR_INDR13_Pos                    13                                                      /*!< PF INDR: INDR13 Position                */
#define PF_INDR_INDR13_Msk                    (0x01UL << PF_INDR_INDR13_Pos)                          /*!< PF INDR: INDR13 Mask                    */
#define PF_INDR_INDR14_Pos                    14                                                      /*!< PF INDR: INDR14 Position                */
#define PF_INDR_INDR14_Msk                    (0x01UL << PF_INDR_INDR14_Pos)                          /*!< PF INDR: INDR14 Mask                    */
#define PF_INDR_INDR15_Pos                    15                                                      /*!< PF INDR: INDR15 Position                */
#define PF_INDR_INDR15_Msk                    (0x01UL << PF_INDR_INDR15_Pos)                          /*!< PF INDR: INDR15 Mask                    */

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
#define PF_OUTDR_OUTDR8_Pos                   8                                                       /*!< PF OUTDR: OUTDR8 Position               */
#define PF_OUTDR_OUTDR8_Msk                   (0x01UL << PF_OUTDR_OUTDR8_Pos)                         /*!< PF OUTDR: OUTDR8 Mask                   */
#define PF_OUTDR_OUTDR9_Pos                   9                                                       /*!< PF OUTDR: OUTDR9 Position               */
#define PF_OUTDR_OUTDR9_Msk                   (0x01UL << PF_OUTDR_OUTDR9_Pos)                         /*!< PF OUTDR: OUTDR9 Mask                   */
#define PF_OUTDR_OUTDR10_Pos                  10                                                      /*!< PF OUTDR: OUTDR10 Position              */
#define PF_OUTDR_OUTDR10_Msk                  (0x01UL << PF_OUTDR_OUTDR10_Pos)                        /*!< PF OUTDR: OUTDR10 Mask                  */
#define PF_OUTDR_OUTDR11_Pos                  11                                                      /*!< PF OUTDR: OUTDR11 Position              */
#define PF_OUTDR_OUTDR11_Msk                  (0x01UL << PF_OUTDR_OUTDR11_Pos)                        /*!< PF OUTDR: OUTDR11 Mask                  */
#define PF_OUTDR_OUTDR12_Pos                  12                                                      /*!< PF OUTDR: OUTDR12 Position              */
#define PF_OUTDR_OUTDR12_Msk                  (0x01UL << PF_OUTDR_OUTDR12_Pos)                        /*!< PF OUTDR: OUTDR12 Mask                  */
#define PF_OUTDR_OUTDR13_Pos                  13                                                      /*!< PF OUTDR: OUTDR13 Position              */
#define PF_OUTDR_OUTDR13_Msk                  (0x01UL << PF_OUTDR_OUTDR13_Pos)                        /*!< PF OUTDR: OUTDR13 Mask                  */
#define PF_OUTDR_OUTDR14_Pos                  14                                                      /*!< PF OUTDR: OUTDR14 Position              */
#define PF_OUTDR_OUTDR14_Msk                  (0x01UL << PF_OUTDR_OUTDR14_Pos)                        /*!< PF OUTDR: OUTDR14 Mask                  */
#define PF_OUTDR_OUTDR15_Pos                  15                                                      /*!< PF OUTDR: OUTDR15 Position              */
#define PF_OUTDR_OUTDR15_Msk                  (0x01UL << PF_OUTDR_OUTDR15_Pos)                        /*!< PF OUTDR: OUTDR15 Mask                  */

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
#define PF_BSR_BSR8_Pos                       8                                                       /*!< PF BSR: BSR8 Position                   */
#define PF_BSR_BSR8_Msk                       (0x01UL << PF_BSR_BSR8_Pos)                             /*!< PF BSR: BSR8 Mask                       */
#define PF_BSR_BSR9_Pos                       9                                                       /*!< PF BSR: BSR9 Position                   */
#define PF_BSR_BSR9_Msk                       (0x01UL << PF_BSR_BSR9_Pos)                             /*!< PF BSR: BSR9 Mask                       */
#define PF_BSR_BSR10_Pos                      10                                                      /*!< PF BSR: BSR10 Position                  */
#define PF_BSR_BSR10_Msk                      (0x01UL << PF_BSR_BSR10_Pos)                            /*!< PF BSR: BSR10 Mask                      */
#define PF_BSR_BSR11_Pos                      11                                                      /*!< PF BSR: BSR11 Position                  */
#define PF_BSR_BSR11_Msk                      (0x01UL << PF_BSR_BSR11_Pos)                            /*!< PF BSR: BSR11 Mask                      */
#define PF_BSR_BSR12_Pos                      12                                                      /*!< PF BSR: BSR12 Position                  */
#define PF_BSR_BSR12_Msk                      (0x01UL << PF_BSR_BSR12_Pos)                            /*!< PF BSR: BSR12 Mask                      */
#define PF_BSR_BSR13_Pos                      13                                                      /*!< PF BSR: BSR13 Position                  */
#define PF_BSR_BSR13_Msk                      (0x01UL << PF_BSR_BSR13_Pos)                            /*!< PF BSR: BSR13 Mask                      */
#define PF_BSR_BSR14_Pos                      14                                                      /*!< PF BSR: BSR14 Position                  */
#define PF_BSR_BSR14_Msk                      (0x01UL << PF_BSR_BSR14_Pos)                            /*!< PF BSR: BSR14 Mask                      */
#define PF_BSR_BSR15_Pos                      15                                                      /*!< PF BSR: BSR15 Position                  */
#define PF_BSR_BSR15_Msk                      (0x01UL << PF_BSR_BSR15_Pos)                            /*!< PF BSR: BSR15 Mask                      */

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
#define PF_BCR_BCR8_Pos                       8                                                       /*!< PF BCR: BCR8 Position                   */
#define PF_BCR_BCR8_Msk                       (0x01UL << PF_BCR_BCR8_Pos)                             /*!< PF BCR: BCR8 Mask                       */
#define PF_BCR_BCR9_Pos                       9                                                       /*!< PF BCR: BCR9 Position                   */
#define PF_BCR_BCR9_Msk                       (0x01UL << PF_BCR_BCR9_Pos)                             /*!< PF BCR: BCR9 Mask                       */
#define PF_BCR_BCR10_Pos                      10                                                      /*!< PF BCR: BCR10 Position                  */
#define PF_BCR_BCR10_Msk                      (0x01UL << PF_BCR_BCR10_Pos)                            /*!< PF BCR: BCR10 Mask                      */
#define PF_BCR_BCR11_Pos                      11                                                      /*!< PF BCR: BCR11 Position                  */
#define PF_BCR_BCR11_Msk                      (0x01UL << PF_BCR_BCR11_Pos)                            /*!< PF BCR: BCR11 Mask                      */
#define PF_BCR_BCR12_Pos                      12                                                      /*!< PF BCR: BCR12 Position                  */
#define PF_BCR_BCR12_Msk                      (0x01UL << PF_BCR_BCR12_Pos)                            /*!< PF BCR: BCR12 Mask                      */
#define PF_BCR_BCR13_Pos                      13                                                      /*!< PF BCR: BCR13 Position                  */
#define PF_BCR_BCR13_Msk                      (0x01UL << PF_BCR_BCR13_Pos)                            /*!< PF BCR: BCR13 Mask                      */
#define PF_BCR_BCR14_Pos                      14                                                      /*!< PF BCR: BCR14 Position                  */
#define PF_BCR_BCR14_Msk                      (0x01UL << PF_BCR_BCR14_Pos)                            /*!< PF BCR: BCR14 Mask                      */
#define PF_BCR_BCR15_Pos                      15                                                      /*!< PF BCR: BCR15 Position                  */
#define PF_BCR_BCR15_Msk                      (0x01UL << PF_BCR_BCR15_Pos)                            /*!< PF BCR: BCR15 Mask                      */

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
#define PF_OUTDMSK_OUTDMSK8_Pos               8                                                       /*!< PF OUTDMSK: OUTDMSK8 Position           */
#define PF_OUTDMSK_OUTDMSK8_Msk               (0x01UL << PF_OUTDMSK_OUTDMSK8_Pos)                     /*!< PF OUTDMSK: OUTDMSK8 Mask               */
#define PF_OUTDMSK_OUTDMSK9_Pos               9                                                       /*!< PF OUTDMSK: OUTDMSK9 Position           */
#define PF_OUTDMSK_OUTDMSK9_Msk               (0x01UL << PF_OUTDMSK_OUTDMSK9_Pos)                     /*!< PF OUTDMSK: OUTDMSK9 Mask               */
#define PF_OUTDMSK_OUTDMSK10_Pos              10                                                      /*!< PF OUTDMSK: OUTDMSK10 Position          */
#define PF_OUTDMSK_OUTDMSK10_Msk              (0x01UL << PF_OUTDMSK_OUTDMSK10_Pos)                    /*!< PF OUTDMSK: OUTDMSK10 Mask              */
#define PF_OUTDMSK_OUTDMSK11_Pos              11                                                      /*!< PF OUTDMSK: OUTDMSK11 Position          */
#define PF_OUTDMSK_OUTDMSK11_Msk              (0x01UL << PF_OUTDMSK_OUTDMSK11_Pos)                    /*!< PF OUTDMSK: OUTDMSK11 Mask              */
#define PF_OUTDMSK_OUTDMSK12_Pos              12                                                      /*!< PF OUTDMSK: OUTDMSK12 Position          */
#define PF_OUTDMSK_OUTDMSK12_Msk              (0x01UL << PF_OUTDMSK_OUTDMSK12_Pos)                    /*!< PF OUTDMSK: OUTDMSK12 Mask              */
#define PF_OUTDMSK_OUTDMSK13_Pos              13                                                      /*!< PF OUTDMSK: OUTDMSK13 Position          */
#define PF_OUTDMSK_OUTDMSK13_Msk              (0x01UL << PF_OUTDMSK_OUTDMSK13_Pos)                    /*!< PF OUTDMSK: OUTDMSK13 Mask              */
#define PF_OUTDMSK_OUTDMSK14_Pos              14                                                      /*!< PF OUTDMSK: OUTDMSK14 Position          */
#define PF_OUTDMSK_OUTDMSK14_Msk              (0x01UL << PF_OUTDMSK_OUTDMSK14_Pos)                    /*!< PF OUTDMSK: OUTDMSK14 Mask              */
#define PF_OUTDMSK_OUTDMSK15_Pos              15                                                      /*!< PF OUTDMSK: OUTDMSK15 Position          */
#define PF_OUTDMSK_OUTDMSK15_Msk              (0x01UL << PF_OUTDMSK_OUTDMSK15_Pos)                    /*!< PF OUTDMSK: OUTDMSK15 Mask              */

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
#define PF_DBCR_DBEN8_Pos                     8                                                       /*!< PF DBCR: DBEN8 Position                 */
#define PF_DBCR_DBEN8_Msk                     (0x01UL << PF_DBCR_DBEN8_Pos)                           /*!< PF DBCR: DBEN8 Mask                     */
#define PF_DBCR_DBEN9_Pos                     9                                                       /*!< PF DBCR: DBEN9 Position                 */
#define PF_DBCR_DBEN9_Msk                     (0x01UL << PF_DBCR_DBEN9_Pos)                           /*!< PF DBCR: DBEN9 Mask                     */
#define PF_DBCR_DBEN10_Pos                    10                                                      /*!< PF DBCR: DBEN10 Position                */
#define PF_DBCR_DBEN10_Msk                    (0x01UL << PF_DBCR_DBEN10_Pos)                          /*!< PF DBCR: DBEN10 Mask                    */
#define PF_DBCR_DBEN11_Pos                    11                                                      /*!< PF DBCR: DBEN11 Position                */
#define PF_DBCR_DBEN11_Msk                    (0x01UL << PF_DBCR_DBEN11_Pos)                          /*!< PF DBCR: DBEN11 Mask                    */
#define PF_DBCR_DBEN12_Pos                    12                                                      /*!< PF DBCR: DBEN12 Position                */
#define PF_DBCR_DBEN12_Msk                    (0x01UL << PF_DBCR_DBEN12_Pos)                          /*!< PF DBCR: DBEN12 Mask                    */
#define PF_DBCR_DBEN13_Pos                    13                                                      /*!< PF DBCR: DBEN13 Position                */
#define PF_DBCR_DBEN13_Msk                    (0x01UL << PF_DBCR_DBEN13_Pos)                          /*!< PF DBCR: DBEN13 Mask                    */
#define PF_DBCR_DBEN14_Pos                    14                                                      /*!< PF DBCR: DBEN14 Position                */
#define PF_DBCR_DBEN14_Msk                    (0x01UL << PF_DBCR_DBEN14_Pos)                          /*!< PF DBCR: DBEN14 Mask                    */
#define PF_DBCR_DBEN15_Pos                    15                                                      /*!< PF DBCR: DBEN15 Position                */
#define PF_DBCR_DBEN15_Msk                    (0x01UL << PF_DBCR_DBEN15_Pos)                          /*!< PF DBCR: DBEN15 Mask                    */

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
#define PF_IER_P8_Pos                         16                                                      /*!< PF IER: P8 Position                     */
#define PF_IER_P8_Msk                         (0x03UL << PF_IER_P8_Pos)                               /*!< PF IER: P8 Mask                         */
#define PF_IER_P9_Pos                         18                                                      /*!< PF IER: P9 Position                     */
#define PF_IER_P9_Msk                         (0x03UL << PF_IER_P9_Pos)                               /*!< PF IER: P9 Mask                         */
#define PF_IER_P10_Pos                        20                                                      /*!< PF IER: P10 Position                    */
#define PF_IER_P10_Msk                        (0x03UL << PF_IER_P10_Pos)                              /*!< PF IER: P10 Mask                        */
#define PF_IER_P11_Pos                        22                                                      /*!< PF IER: P11 Position                    */
#define PF_IER_P11_Msk                        (0x03UL << PF_IER_P11_Pos)                              /*!< PF IER: P11 Mask                        */
#define PF_IER_P12_Pos                        24                                                      /*!< PF IER: P12 Position                    */
#define PF_IER_P12_Msk                        (0x03UL << PF_IER_P12_Pos)                              /*!< PF IER: P12 Mask                        */
#define PF_IER_P13_Pos                        26                                                      /*!< PF IER: P13 Position                    */
#define PF_IER_P13_Msk                        (0x03UL << PF_IER_P13_Pos)                              /*!< PF IER: P13 Mask                        */
#define PF_IER_P14_Pos                        28                                                      /*!< PF IER: P14 Position                    */
#define PF_IER_P14_Msk                        (0x03UL << PF_IER_P14_Pos)                              /*!< PF IER: P14 Mask                        */
#define PF_IER_P15_Pos                        30                                                      /*!< PF IER: P15 Position                    */
#define PF_IER_P15_Msk                        (0x03UL << PF_IER_P15_Pos)                              /*!< PF IER: P15 Mask                        */

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
#define PF_ISR_P8_Pos                         16                                                      /*!< PF ISR: P8 Position                     */
#define PF_ISR_P8_Msk                         (0x03UL << PF_ISR_P8_Pos)                               /*!< PF ISR: P8 Mask                         */
#define PF_ISR_P9_Pos                         18                                                      /*!< PF ISR: P9 Position                     */
#define PF_ISR_P9_Msk                         (0x03UL << PF_ISR_P9_Pos)                               /*!< PF ISR: P9 Mask                         */
#define PF_ISR_P10_Pos                        20                                                      /*!< PF ISR: P10 Position                    */
#define PF_ISR_P10_Msk                        (0x03UL << PF_ISR_P10_Pos)                              /*!< PF ISR: P10 Mask                        */
#define PF_ISR_P11_Pos                        22                                                      /*!< PF ISR: P11 Position                    */
#define PF_ISR_P11_Msk                        (0x03UL << PF_ISR_P11_Pos)                              /*!< PF ISR: P11 Mask                        */
#define PF_ISR_P12_Pos                        24                                                      /*!< PF ISR: P12 Position                    */
#define PF_ISR_P12_Msk                        (0x03UL << PF_ISR_P12_Pos)                              /*!< PF ISR: P12 Mask                        */
#define PF_ISR_P13_Pos                        26                                                      /*!< PF ISR: P13 Position                    */
#define PF_ISR_P13_Msk                        (0x03UL << PF_ISR_P13_Pos)                              /*!< PF ISR: P13 Mask                        */
#define PF_ISR_P14_Pos                        28                                                      /*!< PF ISR: P14 Position                    */
#define PF_ISR_P14_Msk                        (0x03UL << PF_ISR_P14_Pos)                              /*!< PF ISR: P14 Mask                        */
#define PF_ISR_P15_Pos                        30                                                      /*!< PF ISR: P15 Position                    */
#define PF_ISR_P15_Msk                        (0x03UL << PF_ISR_P15_Pos)                              /*!< PF ISR: P15 Mask                        */

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
#define PF_ICR_P8_Pos                         16                                                      /*!< PF ICR: P8 Position                     */
#define PF_ICR_P8_Msk                         (0x03UL << PF_ICR_P8_Pos)                               /*!< PF ICR: P8 Mask                         */
#define PF_ICR_P9_Pos                         18                                                      /*!< PF ICR: P9 Position                     */
#define PF_ICR_P9_Msk                         (0x03UL << PF_ICR_P9_Pos)                               /*!< PF ICR: P9 Mask                         */
#define PF_ICR_P10_Pos                        20                                                      /*!< PF ICR: P10 Position                    */
#define PF_ICR_P10_Msk                        (0x03UL << PF_ICR_P10_Pos)                              /*!< PF ICR: P10 Mask                        */
#define PF_ICR_P11_Pos                        22                                                      /*!< PF ICR: P11 Position                    */
#define PF_ICR_P11_Msk                        (0x03UL << PF_ICR_P11_Pos)                              /*!< PF ICR: P11 Mask                        */
#define PF_ICR_P12_Pos                        24                                                      /*!< PF ICR: P12 Position                    */
#define PF_ICR_P12_Msk                        (0x03UL << PF_ICR_P12_Pos)                              /*!< PF ICR: P12 Mask                        */
#define PF_ICR_P13_Pos                        26                                                      /*!< PF ICR: P13 Position                    */
#define PF_ICR_P13_Msk                        (0x03UL << PF_ICR_P13_Pos)                              /*!< PF ICR: P13 Mask                        */
#define PF_ICR_P14_Pos                        28                                                      /*!< PF ICR: P14 Position                    */
#define PF_ICR_P14_Msk                        (0x03UL << PF_ICR_P14_Pos)                              /*!< PF ICR: P14 Mask                        */
#define PF_ICR_P15_Pos                        30                                                      /*!< PF ICR: P15 Position                    */
#define PF_ICR_P15_Msk                        (0x03UL << PF_ICR_P15_Pos)                              /*!< PF ICR: P15 Mask                        */

/* -----------------------------------  PF_PLSR  ---------------------------------- */
#define PF_PLSR_PF5LSB_Pos                    0                                                       /*!< PF PLSR: PF5LSB Position                */
#define PF_PLSR_PF5LSB_Msk                    (0x01UL << PF_PLSR_PF5LSB_Pos)                          /*!< PF PLSR: PF5LSB Mask                    */
#define PF_PLSR_PF6LSB_Pos                    1                                                       /*!< PF PLSR: PF6LSB Position                */
#define PF_PLSR_PF6LSB_Msk                    (0x01UL << PF_PLSR_PF6LSB_Pos)                          /*!< PF PLSR: PF6LSB Mask                    */
#define PF_PLSR_PF7LSB_Pos                    2                                                       /*!< PF PLSR: PF7LSB Position                */
#define PF_PLSR_PF7LSB_Msk                    (0x01UL << PF_PLSR_PF7LSB_Pos)                          /*!< PF PLSR: PF7LSB Mask                    */


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
#define FMC_CFG_WAIT_Msk                      (0x03UL << FMC_CFG_WAIT_Pos)                            /*!< FMC CFG: WAIT Mask                      */
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


/* ----------------------------------  DMAC0_CR  ---------------------------------- */
#define DMAC0_CR_DIR_Pos                      1                                                       /*!< DMAC0 CR: DIR Position                  */
#define DMAC0_CR_DIR_Msk                      (0x01UL << DMAC0_CR_DIR_Pos)                            /*!< DMAC0 CR: DIR Mask                      */
#define DMAC0_CR_SIZE_Pos                     2                                                       /*!< DMAC0 CR: SIZE Position                 */
#define DMAC0_CR_SIZE_Msk                     (0x03UL << DMAC0_CR_SIZE_Pos)                           /*!< DMAC0 CR: SIZE Mask                     */
#define DMAC0_CR_PERISEL_Pos                  8                                                       /*!< DMAC0 CR: PERISEL Position              */
#define DMAC0_CR_PERISEL_Msk                  (0x0fUL << DMAC0_CR_PERISEL_Pos)                        /*!< DMAC0 CR: PERISEL Mask                  */
#define DMAC0_CR_TRANSCNT_Pos                 16                                                      /*!< DMAC0 CR: TRANSCNT Position             */
#define DMAC0_CR_TRANSCNT_Msk                 (0x00000fffUL << DMAC0_CR_TRANSCNT_Pos)                 /*!< DMAC0 CR: TRANSCNT Mask                 */

/* ----------------------------------  DMAC0_SR  ---------------------------------- */
#define DMAC0_SR_DMAEN_Pos                    0                                                       /*!< DMAC0 SR: DMAEN Position                */
#define DMAC0_SR_DMAEN_Msk                    (0x01UL << DMAC0_SR_DMAEN_Pos)                          /*!< DMAC0 SR: DMAEN Mask                    */
#define DMAC0_SR_EOT_Pos                      7                                                       /*!< DMAC0 SR: EOT Position                  */
#define DMAC0_SR_EOT_Msk                      (0x01UL << DMAC0_SR_EOT_Pos)                            /*!< DMAC0 SR: EOT Mask                      */

/* ----------------------------------  DMAC0_PAR  --------------------------------- */
#define DMAC0_PAR_PAR_Pos                     0                                                       /*!< DMAC0 PAR: PAR Position                 */
#define DMAC0_PAR_PAR_Msk                     (0x0000ffffUL << DMAC0_PAR_PAR_Pos)                     /*!< DMAC0 PAR: PAR Mask                     */

/* ----------------------------------  DMAC0_MAR  --------------------------------- */
#define DMAC0_MAR_MAR_Pos                     0                                                       /*!< DMAC0 MAR: MAR Position                 */
#define DMAC0_MAR_MAR_Msk                     (0xffffffffUL << DMAC0_MAR_MAR_Pos)                     /*!< DMAC0 MAR: MAR Mask                     */


/* ================================================================================ */
/* ================         struct 'DMAC1' Position & Mask         ================ */
/* ================================================================================ */


/* ----------------------------------  DMAC1_CR  ---------------------------------- */
#define DMAC1_CR_DIR_Pos                      1                                                       /*!< DMAC1 CR: DIR Position                  */
#define DMAC1_CR_DIR_Msk                      (0x01UL << DMAC1_CR_DIR_Pos)                            /*!< DMAC1 CR: DIR Mask                      */
#define DMAC1_CR_SIZE_Pos                     2                                                       /*!< DMAC1 CR: SIZE Position                 */
#define DMAC1_CR_SIZE_Msk                     (0x03UL << DMAC1_CR_SIZE_Pos)                           /*!< DMAC1 CR: SIZE Mask                     */
#define DMAC1_CR_PERISEL_Pos                  8                                                       /*!< DMAC1 CR: PERISEL Position              */
#define DMAC1_CR_PERISEL_Msk                  (0x0fUL << DMAC1_CR_PERISEL_Pos)                        /*!< DMAC1 CR: PERISEL Mask                  */
#define DMAC1_CR_TRANSCNT_Pos                 16                                                      /*!< DMAC1 CR: TRANSCNT Position             */
#define DMAC1_CR_TRANSCNT_Msk                 (0x00000fffUL << DMAC1_CR_TRANSCNT_Pos)                 /*!< DMAC1 CR: TRANSCNT Mask                 */

/* ----------------------------------  DMAC1_SR  ---------------------------------- */
#define DMAC1_SR_DMAEN_Pos                    0                                                       /*!< DMAC1 SR: DMAEN Position                */
#define DMAC1_SR_DMAEN_Msk                    (0x01UL << DMAC1_SR_DMAEN_Pos)                          /*!< DMAC1 SR: DMAEN Mask                    */
#define DMAC1_SR_EOT_Pos                      7                                                       /*!< DMAC1 SR: EOT Position                  */
#define DMAC1_SR_EOT_Msk                      (0x01UL << DMAC1_SR_EOT_Pos)                            /*!< DMAC1 SR: EOT Mask                      */

/* ----------------------------------  DMAC1_PAR  --------------------------------- */
#define DMAC1_PAR_PAR_Pos                     0                                                       /*!< DMAC1 PAR: PAR Position                 */
#define DMAC1_PAR_PAR_Msk                     (0x0000ffffUL << DMAC1_PAR_PAR_Pos)                     /*!< DMAC1 PAR: PAR Mask                     */

/* ----------------------------------  DMAC1_MAR  --------------------------------- */
#define DMAC1_MAR_MAR_Pos                     0                                                       /*!< DMAC1 MAR: MAR Position                 */
#define DMAC1_MAR_MAR_Msk                     (0xffffffffUL << DMAC1_MAR_MAR_Pos)                     /*!< DMAC1 MAR: MAR Mask                     */


/* ================================================================================ */
/* ================         struct 'DMAC2' Position & Mask         ================ */
/* ================================================================================ */


/* ----------------------------------  DMAC2_CR  ---------------------------------- */
#define DMAC2_CR_DIR_Pos                      1                                                       /*!< DMAC2 CR: DIR Position                  */
#define DMAC2_CR_DIR_Msk                      (0x01UL << DMAC2_CR_DIR_Pos)                            /*!< DMAC2 CR: DIR Mask                      */
#define DMAC2_CR_SIZE_Pos                     2                                                       /*!< DMAC2 CR: SIZE Position                 */
#define DMAC2_CR_SIZE_Msk                     (0x03UL << DMAC2_CR_SIZE_Pos)                           /*!< DMAC2 CR: SIZE Mask                     */
#define DMAC2_CR_PERISEL_Pos                  8                                                       /*!< DMAC2 CR: PERISEL Position              */
#define DMAC2_CR_PERISEL_Msk                  (0x0fUL << DMAC2_CR_PERISEL_Pos)                        /*!< DMAC2 CR: PERISEL Mask                  */
#define DMAC2_CR_TRANSCNT_Pos                 16                                                      /*!< DMAC2 CR: TRANSCNT Position             */
#define DMAC2_CR_TRANSCNT_Msk                 (0x00000fffUL << DMAC2_CR_TRANSCNT_Pos)                 /*!< DMAC2 CR: TRANSCNT Mask                 */

/* ----------------------------------  DMAC2_SR  ---------------------------------- */
#define DMAC2_SR_DMAEN_Pos                    0                                                       /*!< DMAC2 SR: DMAEN Position                */
#define DMAC2_SR_DMAEN_Msk                    (0x01UL << DMAC2_SR_DMAEN_Pos)                          /*!< DMAC2 SR: DMAEN Mask                    */
#define DMAC2_SR_EOT_Pos                      7                                                       /*!< DMAC2 SR: EOT Position                  */
#define DMAC2_SR_EOT_Msk                      (0x01UL << DMAC2_SR_EOT_Pos)                            /*!< DMAC2 SR: EOT Mask                      */

/* ----------------------------------  DMAC2_PAR  --------------------------------- */
#define DMAC2_PAR_PAR_Pos                     0                                                       /*!< DMAC2 PAR: PAR Position                 */
#define DMAC2_PAR_PAR_Msk                     (0x0000ffffUL << DMAC2_PAR_PAR_Pos)                     /*!< DMAC2 PAR: PAR Mask                     */

/* ----------------------------------  DMAC2_MAR  --------------------------------- */
#define DMAC2_MAR_MAR_Pos                     0                                                       /*!< DMAC2 MAR: MAR Position                 */
#define DMAC2_MAR_MAR_Msk                     (0xffffffffUL << DMAC2_MAR_MAR_Pos)                     /*!< DMAC2 MAR: MAR Mask                     */


/* ================================================================================ */
/* ================         struct 'DMAC3' Position & Mask         ================ */
/* ================================================================================ */


/* ----------------------------------  DMAC3_CR  ---------------------------------- */
#define DMAC3_CR_DIR_Pos                      1                                                       /*!< DMAC3 CR: DIR Position                  */
#define DMAC3_CR_DIR_Msk                      (0x01UL << DMAC3_CR_DIR_Pos)                            /*!< DMAC3 CR: DIR Mask                      */
#define DMAC3_CR_SIZE_Pos                     2                                                       /*!< DMAC3 CR: SIZE Position                 */
#define DMAC3_CR_SIZE_Msk                     (0x03UL << DMAC3_CR_SIZE_Pos)                           /*!< DMAC3 CR: SIZE Mask                     */
#define DMAC3_CR_PERISEL_Pos                  8                                                       /*!< DMAC3 CR: PERISEL Position              */
#define DMAC3_CR_PERISEL_Msk                  (0x0fUL << DMAC3_CR_PERISEL_Pos)                        /*!< DMAC3 CR: PERISEL Mask                  */
#define DMAC3_CR_TRANSCNT_Pos                 16                                                      /*!< DMAC3 CR: TRANSCNT Position             */
#define DMAC3_CR_TRANSCNT_Msk                 (0x00000fffUL << DMAC3_CR_TRANSCNT_Pos)                 /*!< DMAC3 CR: TRANSCNT Mask                 */

/* ----------------------------------  DMAC3_SR  ---------------------------------- */
#define DMAC3_SR_DMAEN_Pos                    0                                                       /*!< DMAC3 SR: DMAEN Position                */
#define DMAC3_SR_DMAEN_Msk                    (0x01UL << DMAC3_SR_DMAEN_Pos)                          /*!< DMAC3 SR: DMAEN Mask                    */
#define DMAC3_SR_EOT_Pos                      7                                                       /*!< DMAC3 SR: EOT Position                  */
#define DMAC3_SR_EOT_Msk                      (0x01UL << DMAC3_SR_EOT_Pos)                            /*!< DMAC3 SR: EOT Mask                      */

/* ----------------------------------  DMAC3_PAR  --------------------------------- */
#define DMAC3_PAR_PAR_Pos                     0                                                       /*!< DMAC3 PAR: PAR Position                 */
#define DMAC3_PAR_PAR_Msk                     (0x0000ffffUL << DMAC3_PAR_PAR_Pos)                     /*!< DMAC3 PAR: PAR Mask                     */

/* ----------------------------------  DMAC3_MAR  --------------------------------- */
#define DMAC3_MAR_MAR_Pos                     0                                                       /*!< DMAC3 MAR: MAR Position                 */
#define DMAC3_MAR_MAR_Msk                     (0xffffffffUL << DMAC3_MAR_MAR_Pos)                     /*!< DMAC3 MAR: MAR Mask                     */


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
/* ================        struct 'TIMER14' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER14_CR  --------------------------------- */
#define TIMER14_CR_TnCLR_Pos                  0                                                       /*!< TIMER14 CR: TnCLR Position              */
#define TIMER14_CR_TnCLR_Msk                  (0x01UL << TIMER14_CR_TnCLR_Pos)                        /*!< TIMER14 CR: TnCLR Mask                  */
#define TIMER14_CR_TnPAU_Pos                  1                                                       /*!< TIMER14 CR: TnPAU Position              */
#define TIMER14_CR_TnPAU_Msk                  (0x01UL << TIMER14_CR_TnPAU_Pos)                        /*!< TIMER14 CR: TnPAU Mask                  */
#define TIMER14_CR_TnCIFLAG_Pos               2                                                       /*!< TIMER14 CR: TnCIFLAG Position           */
#define TIMER14_CR_TnCIFLAG_Msk               (0x01UL << TIMER14_CR_TnCIFLAG_Pos)                     /*!< TIMER14 CR: TnCIFLAG Mask               */
#define TIMER14_CR_TnMIFLAG_Pos               3                                                       /*!< TIMER14 CR: TnMIFLAG Position           */
#define TIMER14_CR_TnMIFLAG_Msk               (0x01UL << TIMER14_CR_TnMIFLAG_Pos)                     /*!< TIMER14 CR: TnMIFLAG Mask               */
#define TIMER14_CR_TnCIEN_Pos                 4                                                       /*!< TIMER14 CR: TnCIEN Position             */
#define TIMER14_CR_TnCIEN_Msk                 (0x01UL << TIMER14_CR_TnCIEN_Pos)                       /*!< TIMER14 CR: TnCIEN Mask                 */
#define TIMER14_CR_TnMIEN_Pos                 5                                                       /*!< TIMER14 CR: TnMIEN Position             */
#define TIMER14_CR_TnMIEN_Msk                 (0x01UL << TIMER14_CR_TnMIEN_Pos)                       /*!< TIMER14 CR: TnMIEN Mask                 */
#define TIMER14_CR_TnCPOL_Pos                 6                                                       /*!< TIMER14 CR: TnCPOL Position             */
#define TIMER14_CR_TnCPOL_Msk                 (0x03UL << TIMER14_CR_TnCPOL_Pos)                       /*!< TIMER14 CR: TnCPOL Mask                 */
#define TIMER14_CR_TnOPOL_Pos                 8                                                       /*!< TIMER14 CR: TnOPOL Position             */
#define TIMER14_CR_TnOPOL_Msk                 (0x01UL << TIMER14_CR_TnOPOL_Pos)                       /*!< TIMER14 CR: TnOPOL Mask                 */
#define TIMER14_CR_TnECE_Pos                  11                                                      /*!< TIMER14 CR: TnECE Position              */
#define TIMER14_CR_TnECE_Msk                  (0x01UL << TIMER14_CR_TnECE_Pos)                        /*!< TIMER14 CR: TnECE Mask                  */
#define TIMER14_CR_TnMS_Pos                   12                                                      /*!< TIMER14 CR: TnMS Position               */
#define TIMER14_CR_TnMS_Msk                   (0x03UL << TIMER14_CR_TnMS_Pos)                         /*!< TIMER14 CR: TnMS Mask                   */
#define TIMER14_CR_TnCLK_Pos                  14                                                      /*!< TIMER14 CR: TnCLK Position              */
#define TIMER14_CR_TnCLK_Msk                  (0x01UL << TIMER14_CR_TnCLK_Pos)                        /*!< TIMER14 CR: TnCLK Mask                  */
#define TIMER14_CR_TnEN_Pos                   15                                                      /*!< TIMER14 CR: TnEN Position               */
#define TIMER14_CR_TnEN_Msk                   (0x01UL << TIMER14_CR_TnEN_Pos)                         /*!< TIMER14 CR: TnEN Mask                   */

/* ---------------------------------  TIMER14_ADR  -------------------------------- */
#define TIMER14_ADR_ADATA_Pos                 0                                                       /*!< TIMER14 ADR: ADATA Position             */
#define TIMER14_ADR_ADATA_Msk                 (0x0000ffffUL << TIMER14_ADR_ADATA_Pos)                 /*!< TIMER14 ADR: ADATA Mask                 */

/* ---------------------------------  TIMER14_BDR  -------------------------------- */
#define TIMER14_BDR_BDATA_Pos                 0                                                       /*!< TIMER14 BDR: BDATA Position             */
#define TIMER14_BDR_BDATA_Msk                 (0x0000ffffUL << TIMER14_BDR_BDATA_Pos)                 /*!< TIMER14 BDR: BDATA Mask                 */

/* --------------------------------  TIMER14_CAPDR  ------------------------------- */
#define TIMER14_CAPDR_CAPD_Pos                0                                                       /*!< TIMER14 CAPDR: CAPD Position            */
#define TIMER14_CAPDR_CAPD_Msk                (0x0000ffffUL << TIMER14_CAPDR_CAPD_Pos)                /*!< TIMER14 CAPDR: CAPD Mask                */

/* --------------------------------  TIMER14_PREDR  ------------------------------- */
#define TIMER14_PREDR_PRED_Pos                0                                                       /*!< TIMER14 PREDR: PRED Position            */
#define TIMER14_PREDR_PRED_Msk                (0x00000fffUL << TIMER14_PREDR_PRED_Pos)                /*!< TIMER14 PREDR: PRED Mask                */

/* ---------------------------------  TIMER14_CNT  -------------------------------- */
#define TIMER14_CNT_CNT_Pos                   0                                                       /*!< TIMER14 CNT: CNT Position               */
#define TIMER14_CNT_CNT_Msk                   (0x0000ffffUL << TIMER14_CNT_CNT_Pos)                   /*!< TIMER14 CNT: CNT Mask                   */


/* ================================================================================ */
/* ================        struct 'TIMER15' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER15_CR  --------------------------------- */
#define TIMER15_CR_TnCLR_Pos                  0                                                       /*!< TIMER15 CR: TnCLR Position              */
#define TIMER15_CR_TnCLR_Msk                  (0x01UL << TIMER15_CR_TnCLR_Pos)                        /*!< TIMER15 CR: TnCLR Mask                  */
#define TIMER15_CR_TnPAU_Pos                  1                                                       /*!< TIMER15 CR: TnPAU Position              */
#define TIMER15_CR_TnPAU_Msk                  (0x01UL << TIMER15_CR_TnPAU_Pos)                        /*!< TIMER15 CR: TnPAU Mask                  */
#define TIMER15_CR_TnCIFLAG_Pos               2                                                       /*!< TIMER15 CR: TnCIFLAG Position           */
#define TIMER15_CR_TnCIFLAG_Msk               (0x01UL << TIMER15_CR_TnCIFLAG_Pos)                     /*!< TIMER15 CR: TnCIFLAG Mask               */
#define TIMER15_CR_TnMIFLAG_Pos               3                                                       /*!< TIMER15 CR: TnMIFLAG Position           */
#define TIMER15_CR_TnMIFLAG_Msk               (0x01UL << TIMER15_CR_TnMIFLAG_Pos)                     /*!< TIMER15 CR: TnMIFLAG Mask               */
#define TIMER15_CR_TnCIEN_Pos                 4                                                       /*!< TIMER15 CR: TnCIEN Position             */
#define TIMER15_CR_TnCIEN_Msk                 (0x01UL << TIMER15_CR_TnCIEN_Pos)                       /*!< TIMER15 CR: TnCIEN Mask                 */
#define TIMER15_CR_TnMIEN_Pos                 5                                                       /*!< TIMER15 CR: TnMIEN Position             */
#define TIMER15_CR_TnMIEN_Msk                 (0x01UL << TIMER15_CR_TnMIEN_Pos)                       /*!< TIMER15 CR: TnMIEN Mask                 */
#define TIMER15_CR_TnCPOL_Pos                 6                                                       /*!< TIMER15 CR: TnCPOL Position             */
#define TIMER15_CR_TnCPOL_Msk                 (0x03UL << TIMER15_CR_TnCPOL_Pos)                       /*!< TIMER15 CR: TnCPOL Mask                 */
#define TIMER15_CR_TnOPOL_Pos                 8                                                       /*!< TIMER15 CR: TnOPOL Position             */
#define TIMER15_CR_TnOPOL_Msk                 (0x01UL << TIMER15_CR_TnOPOL_Pos)                       /*!< TIMER15 CR: TnOPOL Mask                 */
#define TIMER15_CR_TnECE_Pos                  11                                                      /*!< TIMER15 CR: TnECE Position              */
#define TIMER15_CR_TnECE_Msk                  (0x01UL << TIMER15_CR_TnECE_Pos)                        /*!< TIMER15 CR: TnECE Mask                  */
#define TIMER15_CR_TnMS_Pos                   12                                                      /*!< TIMER15 CR: TnMS Position               */
#define TIMER15_CR_TnMS_Msk                   (0x03UL << TIMER15_CR_TnMS_Pos)                         /*!< TIMER15 CR: TnMS Mask                   */
#define TIMER15_CR_TnCLK_Pos                  14                                                      /*!< TIMER15 CR: TnCLK Position              */
#define TIMER15_CR_TnCLK_Msk                  (0x01UL << TIMER15_CR_TnCLK_Pos)                        /*!< TIMER15 CR: TnCLK Mask                  */
#define TIMER15_CR_TnEN_Pos                   15                                                      /*!< TIMER15 CR: TnEN Position               */
#define TIMER15_CR_TnEN_Msk                   (0x01UL << TIMER15_CR_TnEN_Pos)                         /*!< TIMER15 CR: TnEN Mask                   */

/* ---------------------------------  TIMER15_ADR  -------------------------------- */
#define TIMER15_ADR_ADATA_Pos                 0                                                       /*!< TIMER15 ADR: ADATA Position             */
#define TIMER15_ADR_ADATA_Msk                 (0x0000ffffUL << TIMER15_ADR_ADATA_Pos)                 /*!< TIMER15 ADR: ADATA Mask                 */

/* ---------------------------------  TIMER15_BDR  -------------------------------- */
#define TIMER15_BDR_BDATA_Pos                 0                                                       /*!< TIMER15 BDR: BDATA Position             */
#define TIMER15_BDR_BDATA_Msk                 (0x0000ffffUL << TIMER15_BDR_BDATA_Pos)                 /*!< TIMER15 BDR: BDATA Mask                 */

/* --------------------------------  TIMER15_CAPDR  ------------------------------- */
#define TIMER15_CAPDR_CAPD_Pos                0                                                       /*!< TIMER15 CAPDR: CAPD Position            */
#define TIMER15_CAPDR_CAPD_Msk                (0x0000ffffUL << TIMER15_CAPDR_CAPD_Pos)                /*!< TIMER15 CAPDR: CAPD Mask                */

/* --------------------------------  TIMER15_PREDR  ------------------------------- */
#define TIMER15_PREDR_PRED_Pos                0                                                       /*!< TIMER15 PREDR: PRED Position            */
#define TIMER15_PREDR_PRED_Msk                (0x00000fffUL << TIMER15_PREDR_PRED_Pos)                /*!< TIMER15 PREDR: PRED Mask                */

/* ---------------------------------  TIMER15_CNT  -------------------------------- */
#define TIMER15_CNT_CNT_Pos                   0                                                       /*!< TIMER15 CNT: CNT Position               */
#define TIMER15_CNT_CNT_Msk                   (0x0000ffffUL << TIMER15_CNT_CNT_Pos)                   /*!< TIMER15 CNT: CNT Mask                   */


/* ================================================================================ */
/* ================        struct 'TIMER16' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER16_CR  --------------------------------- */
#define TIMER16_CR_TnCLR_Pos                  0                                                       /*!< TIMER16 CR: TnCLR Position              */
#define TIMER16_CR_TnCLR_Msk                  (0x01UL << TIMER16_CR_TnCLR_Pos)                        /*!< TIMER16 CR: TnCLR Mask                  */
#define TIMER16_CR_TnPAU_Pos                  1                                                       /*!< TIMER16 CR: TnPAU Position              */
#define TIMER16_CR_TnPAU_Msk                  (0x01UL << TIMER16_CR_TnPAU_Pos)                        /*!< TIMER16 CR: TnPAU Mask                  */
#define TIMER16_CR_TnCIFLAG_Pos               2                                                       /*!< TIMER16 CR: TnCIFLAG Position           */
#define TIMER16_CR_TnCIFLAG_Msk               (0x01UL << TIMER16_CR_TnCIFLAG_Pos)                     /*!< TIMER16 CR: TnCIFLAG Mask               */
#define TIMER16_CR_TnMIFLAG_Pos               3                                                       /*!< TIMER16 CR: TnMIFLAG Position           */
#define TIMER16_CR_TnMIFLAG_Msk               (0x01UL << TIMER16_CR_TnMIFLAG_Pos)                     /*!< TIMER16 CR: TnMIFLAG Mask               */
#define TIMER16_CR_TnCIEN_Pos                 4                                                       /*!< TIMER16 CR: TnCIEN Position             */
#define TIMER16_CR_TnCIEN_Msk                 (0x01UL << TIMER16_CR_TnCIEN_Pos)                       /*!< TIMER16 CR: TnCIEN Mask                 */
#define TIMER16_CR_TnMIEN_Pos                 5                                                       /*!< TIMER16 CR: TnMIEN Position             */
#define TIMER16_CR_TnMIEN_Msk                 (0x01UL << TIMER16_CR_TnMIEN_Pos)                       /*!< TIMER16 CR: TnMIEN Mask                 */
#define TIMER16_CR_TnCPOL_Pos                 6                                                       /*!< TIMER16 CR: TnCPOL Position             */
#define TIMER16_CR_TnCPOL_Msk                 (0x03UL << TIMER16_CR_TnCPOL_Pos)                       /*!< TIMER16 CR: TnCPOL Mask                 */
#define TIMER16_CR_TnOPOL_Pos                 8                                                       /*!< TIMER16 CR: TnOPOL Position             */
#define TIMER16_CR_TnOPOL_Msk                 (0x01UL << TIMER16_CR_TnOPOL_Pos)                       /*!< TIMER16 CR: TnOPOL Mask                 */
#define TIMER16_CR_TnECE_Pos                  11                                                      /*!< TIMER16 CR: TnECE Position              */
#define TIMER16_CR_TnECE_Msk                  (0x01UL << TIMER16_CR_TnECE_Pos)                        /*!< TIMER16 CR: TnECE Mask                  */
#define TIMER16_CR_TnMS_Pos                   12                                                      /*!< TIMER16 CR: TnMS Position               */
#define TIMER16_CR_TnMS_Msk                   (0x03UL << TIMER16_CR_TnMS_Pos)                         /*!< TIMER16 CR: TnMS Mask                   */
#define TIMER16_CR_TnCLK_Pos                  14                                                      /*!< TIMER16 CR: TnCLK Position              */
#define TIMER16_CR_TnCLK_Msk                  (0x01UL << TIMER16_CR_TnCLK_Pos)                        /*!< TIMER16 CR: TnCLK Mask                  */
#define TIMER16_CR_TnEN_Pos                   15                                                      /*!< TIMER16 CR: TnEN Position               */
#define TIMER16_CR_TnEN_Msk                   (0x01UL << TIMER16_CR_TnEN_Pos)                         /*!< TIMER16 CR: TnEN Mask                   */

/* ---------------------------------  TIMER16_ADR  -------------------------------- */
#define TIMER16_ADR_ADATA_Pos                 0                                                       /*!< TIMER16 ADR: ADATA Position             */
#define TIMER16_ADR_ADATA_Msk                 (0x0000ffffUL << TIMER16_ADR_ADATA_Pos)                 /*!< TIMER16 ADR: ADATA Mask                 */

/* ---------------------------------  TIMER16_BDR  -------------------------------- */
#define TIMER16_BDR_BDATA_Pos                 0                                                       /*!< TIMER16 BDR: BDATA Position             */
#define TIMER16_BDR_BDATA_Msk                 (0x0000ffffUL << TIMER16_BDR_BDATA_Pos)                 /*!< TIMER16 BDR: BDATA Mask                 */

/* --------------------------------  TIMER16_CAPDR  ------------------------------- */
#define TIMER16_CAPDR_CAPD_Pos                0                                                       /*!< TIMER16 CAPDR: CAPD Position            */
#define TIMER16_CAPDR_CAPD_Msk                (0x0000ffffUL << TIMER16_CAPDR_CAPD_Pos)                /*!< TIMER16 CAPDR: CAPD Mask                */

/* --------------------------------  TIMER16_PREDR  ------------------------------- */
#define TIMER16_PREDR_PRED_Pos                0                                                       /*!< TIMER16 PREDR: PRED Position            */
#define TIMER16_PREDR_PRED_Msk                (0x00000fffUL << TIMER16_PREDR_PRED_Pos)                /*!< TIMER16 PREDR: PRED Mask                */

/* ---------------------------------  TIMER16_CNT  -------------------------------- */
#define TIMER16_CNT_CNT_Pos                   0                                                       /*!< TIMER16 CNT: CNT Position               */
#define TIMER16_CNT_CNT_Msk                   (0x0000ffffUL << TIMER16_CNT_CNT_Pos)                   /*!< TIMER16 CNT: CNT Mask                   */


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
/* ================        struct 'USART12' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  USART12_CR1  -------------------------------- */
#define USART12_CR1_RXEn_Pos                  0                                                       /*!< USART12 CR1: RXEn Position              */
#define USART12_CR1_RXEn_Msk                  (0x01UL << USART12_CR1_RXEn_Pos)                        /*!< USART12 CR1: RXEn Mask                  */
#define USART12_CR1_TXEn_Pos                  1                                                       /*!< USART12 CR1: TXEn Position              */
#define USART12_CR1_TXEn_Msk                  (0x01UL << USART12_CR1_TXEn_Pos)                        /*!< USART12 CR1: TXEn Mask                  */
#define USART12_CR1_WAKEIEn_Pos               2                                                       /*!< USART12 CR1: WAKEIEn Position           */
#define USART12_CR1_WAKEIEn_Msk               (0x01UL << USART12_CR1_WAKEIEn_Pos)                     /*!< USART12 CR1: WAKEIEn Mask               */
#define USART12_CR1_RXCIEn_Pos                3                                                       /*!< USART12 CR1: RXCIEn Position            */
#define USART12_CR1_RXCIEn_Msk                (0x01UL << USART12_CR1_RXCIEn_Pos)                      /*!< USART12 CR1: RXCIEn Mask                */
#define USART12_CR1_TXCIEn_Pos                4                                                       /*!< USART12 CR1: TXCIEn Position            */
#define USART12_CR1_TXCIEn_Msk                (0x01UL << USART12_CR1_TXCIEn_Pos)                      /*!< USART12 CR1: TXCIEn Mask                */
#define USART12_CR1_DRIEn_Pos                 5                                                       /*!< USART12 CR1: DRIEn Position             */
#define USART12_CR1_DRIEn_Msk                 (0x01UL << USART12_CR1_DRIEn_Pos)                       /*!< USART12 CR1: DRIEn Mask                 */
#define USART12_CR1_CPHAn_Pos                 6                                                       /*!< USART12 CR1: CPHAn Position             */
#define USART12_CR1_CPHAn_Msk                 (0x01UL << USART12_CR1_CPHAn_Pos)                       /*!< USART12 CR1: CPHAn Mask                 */
#define USART12_CR1_CPOLn_Pos                 7                                                       /*!< USART12 CR1: CPOLn Position             */
#define USART12_CR1_CPOLn_Msk                 (0x01UL << USART12_CR1_CPOLn_Pos)                       /*!< USART12 CR1: CPOLn Mask                 */
#define USART12_CR1_ORDn_Pos                  8                                                       /*!< USART12 CR1: ORDn Position              */
#define USART12_CR1_ORDn_Msk                  (0x01UL << USART12_CR1_ORDn_Pos)                        /*!< USART12 CR1: ORDn Mask                  */
#define USART12_CR1_USTnS_Pos                 9                                                       /*!< USART12 CR1: USTnS Position             */
#define USART12_CR1_USTnS_Msk                 (0x07UL << USART12_CR1_USTnS_Pos)                       /*!< USART12 CR1: USTnS Mask                 */
#define USART12_CR1_USTnP_Pos                 12                                                      /*!< USART12 CR1: USTnP Position             */
#define USART12_CR1_USTnP_Msk                 (0x03UL << USART12_CR1_USTnP_Pos)                       /*!< USART12 CR1: USTnP Mask                 */
#define USART12_CR1_USTnMS_Pos                14                                                      /*!< USART12 CR1: USTnMS Position            */
#define USART12_CR1_USTnMS_Msk                (0x03UL << USART12_CR1_USTnMS_Pos)                      /*!< USART12 CR1: USTnMS Mask                */

/* ---------------------------------  USART12_CR2  -------------------------------- */
#define USART12_CR2_USTnRX8_Pos               0                                                       /*!< USART12 CR2: USTnRX8 Position           */
#define USART12_CR2_USTnRX8_Msk               (0x01UL << USART12_CR2_USTnRX8_Pos)                     /*!< USART12 CR2: USTnRX8 Mask               */
#define USART12_CR2_USTnTX8_Pos               1                                                       /*!< USART12 CR2: USTnTX8 Position           */
#define USART12_CR2_USTnTX8_Msk               (0x01UL << USART12_CR2_USTnTX8_Pos)                     /*!< USART12 CR2: USTnTX8 Mask               */
#define USART12_CR2_USTnSB_Pos                2                                                       /*!< USART12 CR2: USTnSB Position            */
#define USART12_CR2_USTnSB_Msk                (0x01UL << USART12_CR2_USTnSB_Pos)                      /*!< USART12 CR2: USTnSB Mask                */
#define USART12_CR2_FXCHn_Pos                 3                                                       /*!< USART12 CR2: FXCHn Position             */
#define USART12_CR2_FXCHn_Msk                 (0x01UL << USART12_CR2_FXCHn_Pos)                       /*!< USART12 CR2: FXCHn Mask                 */
#define USART12_CR2_USTnSSEN_Pos              4                                                       /*!< USART12 CR2: USTnSSEN Position          */
#define USART12_CR2_USTnSSEN_Msk              (0x01UL << USART12_CR2_USTnSSEN_Pos)                    /*!< USART12 CR2: USTnSSEN Mask              */
#define USART12_CR2_DISSCKn_Pos               5                                                       /*!< USART12 CR2: DISSCKn Position           */
#define USART12_CR2_DISSCKn_Msk               (0x01UL << USART12_CR2_DISSCKn_Pos)                     /*!< USART12 CR2: DISSCKn Mask               */
#define USART12_CR2_LOOPSn_Pos                6                                                       /*!< USART12 CR2: LOOPSn Position            */
#define USART12_CR2_LOOPSn_Msk                (0x01UL << USART12_CR2_LOOPSn_Pos)                      /*!< USART12 CR2: LOOPSn Mask                */
#define USART12_CR2_MASTERn_Pos               7                                                       /*!< USART12 CR2: MASTERn Position           */
#define USART12_CR2_MASTERn_Msk               (0x01UL << USART12_CR2_MASTERn_Pos)                     /*!< USART12 CR2: MASTERn Mask               */
#define USART12_CR2_DBLSn_Pos                 8                                                       /*!< USART12 CR2: DBLSn Position             */
#define USART12_CR2_DBLSn_Msk                 (0x01UL << USART12_CR2_DBLSn_Pos)                       /*!< USART12 CR2: DBLSn Mask                 */
#define USART12_CR2_USTnEN_Pos                9                                                       /*!< USART12 CR2: USTnEN Position            */
#define USART12_CR2_USTnEN_Msk                (0x01UL << USART12_CR2_USTnEN_Pos)                      /*!< USART12 CR2: USTnEN Mask                */

/* ---------------------------------  USART12_ST  --------------------------------- */
#define USART12_ST_PEn_Pos                    0                                                       /*!< USART12 ST: PEn Position                */
#define USART12_ST_PEn_Msk                    (0x01UL << USART12_ST_PEn_Pos)                          /*!< USART12 ST: PEn Mask                    */
#define USART12_ST_FEn_Pos                    1                                                       /*!< USART12 ST: FEn Position                */
#define USART12_ST_FEn_Msk                    (0x01UL << USART12_ST_FEn_Pos)                          /*!< USART12 ST: FEn Mask                    */
#define USART12_ST_DORn_Pos                   2                                                       /*!< USART12 ST: DORn Position               */
#define USART12_ST_DORn_Msk                   (0x01UL << USART12_ST_DORn_Pos)                         /*!< USART12 ST: DORn Mask                   */
#define USART12_ST_WAKEn_Pos                  4                                                       /*!< USART12 ST: WAKEn Position              */
#define USART12_ST_WAKEn_Msk                  (0x01UL << USART12_ST_WAKEn_Pos)                        /*!< USART12 ST: WAKEn Mask                  */
#define USART12_ST_RXCn_Pos                   5                                                       /*!< USART12 ST: RXCn Position               */
#define USART12_ST_RXCn_Msk                   (0x01UL << USART12_ST_RXCn_Pos)                         /*!< USART12 ST: RXCn Mask                   */
#define USART12_ST_TXCn_Pos                   6                                                       /*!< USART12 ST: TXCn Position               */
#define USART12_ST_TXCn_Msk                   (0x01UL << USART12_ST_TXCn_Pos)                         /*!< USART12 ST: TXCn Mask                   */
#define USART12_ST_DREn_Pos                   7                                                       /*!< USART12 ST: DREn Position               */
#define USART12_ST_DREn_Msk                   (0x01UL << USART12_ST_DREn_Pos)                         /*!< USART12 ST: DREn Mask                   */

/* ---------------------------------  USART12_BDR  -------------------------------- */
#define USART12_BDR_BDATA_Pos                 0                                                       /*!< USART12 BDR: BDATA Position             */
#define USART12_BDR_BDATA_Msk                 (0x00000fffUL << USART12_BDR_BDATA_Pos)                 /*!< USART12 BDR: BDATA Mask                 */

/* ---------------------------------  USART12_DR  --------------------------------- */
#define USART12_DR_DATA_Pos                   0                                                       /*!< USART12 DR: DATA Position               */
#define USART12_DR_DATA_Msk                   (0x000000ffUL << USART12_DR_DATA_Pos)                   /*!< USART12 DR: DATA Mask                   */


/* ================================================================================ */
/* ================        struct 'USART13' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  USART13_CR1  -------------------------------- */
#define USART13_CR1_RXEn_Pos                  0                                                       /*!< USART13 CR1: RXEn Position              */
#define USART13_CR1_RXEn_Msk                  (0x01UL << USART13_CR1_RXEn_Pos)                        /*!< USART13 CR1: RXEn Mask                  */
#define USART13_CR1_TXEn_Pos                  1                                                       /*!< USART13 CR1: TXEn Position              */
#define USART13_CR1_TXEn_Msk                  (0x01UL << USART13_CR1_TXEn_Pos)                        /*!< USART13 CR1: TXEn Mask                  */
#define USART13_CR1_WAKEIEn_Pos               2                                                       /*!< USART13 CR1: WAKEIEn Position           */
#define USART13_CR1_WAKEIEn_Msk               (0x01UL << USART13_CR1_WAKEIEn_Pos)                     /*!< USART13 CR1: WAKEIEn Mask               */
#define USART13_CR1_RXCIEn_Pos                3                                                       /*!< USART13 CR1: RXCIEn Position            */
#define USART13_CR1_RXCIEn_Msk                (0x01UL << USART13_CR1_RXCIEn_Pos)                      /*!< USART13 CR1: RXCIEn Mask                */
#define USART13_CR1_TXCIEn_Pos                4                                                       /*!< USART13 CR1: TXCIEn Position            */
#define USART13_CR1_TXCIEn_Msk                (0x01UL << USART13_CR1_TXCIEn_Pos)                      /*!< USART13 CR1: TXCIEn Mask                */
#define USART13_CR1_DRIEn_Pos                 5                                                       /*!< USART13 CR1: DRIEn Position             */
#define USART13_CR1_DRIEn_Msk                 (0x01UL << USART13_CR1_DRIEn_Pos)                       /*!< USART13 CR1: DRIEn Mask                 */
#define USART13_CR1_CPHAn_Pos                 6                                                       /*!< USART13 CR1: CPHAn Position             */
#define USART13_CR1_CPHAn_Msk                 (0x01UL << USART13_CR1_CPHAn_Pos)                       /*!< USART13 CR1: CPHAn Mask                 */
#define USART13_CR1_CPOLn_Pos                 7                                                       /*!< USART13 CR1: CPOLn Position             */
#define USART13_CR1_CPOLn_Msk                 (0x01UL << USART13_CR1_CPOLn_Pos)                       /*!< USART13 CR1: CPOLn Mask                 */
#define USART13_CR1_ORDn_Pos                  8                                                       /*!< USART13 CR1: ORDn Position              */
#define USART13_CR1_ORDn_Msk                  (0x01UL << USART13_CR1_ORDn_Pos)                        /*!< USART13 CR1: ORDn Mask                  */
#define USART13_CR1_USTnS_Pos                 9                                                       /*!< USART13 CR1: USTnS Position             */
#define USART13_CR1_USTnS_Msk                 (0x07UL << USART13_CR1_USTnS_Pos)                       /*!< USART13 CR1: USTnS Mask                 */
#define USART13_CR1_USTnP_Pos                 12                                                      /*!< USART13 CR1: USTnP Position             */
#define USART13_CR1_USTnP_Msk                 (0x03UL << USART13_CR1_USTnP_Pos)                       /*!< USART13 CR1: USTnP Mask                 */
#define USART13_CR1_USTnMS_Pos                14                                                      /*!< USART13 CR1: USTnMS Position            */
#define USART13_CR1_USTnMS_Msk                (0x03UL << USART13_CR1_USTnMS_Pos)                      /*!< USART13 CR1: USTnMS Mask                */

/* ---------------------------------  USART13_CR2  -------------------------------- */
#define USART13_CR2_USTnRX8_Pos               0                                                       /*!< USART13 CR2: USTnRX8 Position           */
#define USART13_CR2_USTnRX8_Msk               (0x01UL << USART13_CR2_USTnRX8_Pos)                     /*!< USART13 CR2: USTnRX8 Mask               */
#define USART13_CR2_USTnTX8_Pos               1                                                       /*!< USART13 CR2: USTnTX8 Position           */
#define USART13_CR2_USTnTX8_Msk               (0x01UL << USART13_CR2_USTnTX8_Pos)                     /*!< USART13 CR2: USTnTX8 Mask               */
#define USART13_CR2_USTnSB_Pos                2                                                       /*!< USART13 CR2: USTnSB Position            */
#define USART13_CR2_USTnSB_Msk                (0x01UL << USART13_CR2_USTnSB_Pos)                      /*!< USART13 CR2: USTnSB Mask                */
#define USART13_CR2_FXCHn_Pos                 3                                                       /*!< USART13 CR2: FXCHn Position             */
#define USART13_CR2_FXCHn_Msk                 (0x01UL << USART13_CR2_FXCHn_Pos)                       /*!< USART13 CR2: FXCHn Mask                 */
#define USART13_CR2_USTnSSEN_Pos              4                                                       /*!< USART13 CR2: USTnSSEN Position          */
#define USART13_CR2_USTnSSEN_Msk              (0x01UL << USART13_CR2_USTnSSEN_Pos)                    /*!< USART13 CR2: USTnSSEN Mask              */
#define USART13_CR2_DISSCKn_Pos               5                                                       /*!< USART13 CR2: DISSCKn Position           */
#define USART13_CR2_DISSCKn_Msk               (0x01UL << USART13_CR2_DISSCKn_Pos)                     /*!< USART13 CR2: DISSCKn Mask               */
#define USART13_CR2_LOOPSn_Pos                6                                                       /*!< USART13 CR2: LOOPSn Position            */
#define USART13_CR2_LOOPSn_Msk                (0x01UL << USART13_CR2_LOOPSn_Pos)                      /*!< USART13 CR2: LOOPSn Mask                */
#define USART13_CR2_MASTERn_Pos               7                                                       /*!< USART13 CR2: MASTERn Position           */
#define USART13_CR2_MASTERn_Msk               (0x01UL << USART13_CR2_MASTERn_Pos)                     /*!< USART13 CR2: MASTERn Mask               */
#define USART13_CR2_DBLSn_Pos                 8                                                       /*!< USART13 CR2: DBLSn Position             */
#define USART13_CR2_DBLSn_Msk                 (0x01UL << USART13_CR2_DBLSn_Pos)                       /*!< USART13 CR2: DBLSn Mask                 */
#define USART13_CR2_USTnEN_Pos                9                                                       /*!< USART13 CR2: USTnEN Position            */
#define USART13_CR2_USTnEN_Msk                (0x01UL << USART13_CR2_USTnEN_Pos)                      /*!< USART13 CR2: USTnEN Mask                */

/* ---------------------------------  USART13_ST  --------------------------------- */
#define USART13_ST_PEn_Pos                    0                                                       /*!< USART13 ST: PEn Position                */
#define USART13_ST_PEn_Msk                    (0x01UL << USART13_ST_PEn_Pos)                          /*!< USART13 ST: PEn Mask                    */
#define USART13_ST_FEn_Pos                    1                                                       /*!< USART13 ST: FEn Position                */
#define USART13_ST_FEn_Msk                    (0x01UL << USART13_ST_FEn_Pos)                          /*!< USART13 ST: FEn Mask                    */
#define USART13_ST_DORn_Pos                   2                                                       /*!< USART13 ST: DORn Position               */
#define USART13_ST_DORn_Msk                   (0x01UL << USART13_ST_DORn_Pos)                         /*!< USART13 ST: DORn Mask                   */
#define USART13_ST_WAKEn_Pos                  4                                                       /*!< USART13 ST: WAKEn Position              */
#define USART13_ST_WAKEn_Msk                  (0x01UL << USART13_ST_WAKEn_Pos)                        /*!< USART13 ST: WAKEn Mask                  */
#define USART13_ST_RXCn_Pos                   5                                                       /*!< USART13 ST: RXCn Position               */
#define USART13_ST_RXCn_Msk                   (0x01UL << USART13_ST_RXCn_Pos)                         /*!< USART13 ST: RXCn Mask                   */
#define USART13_ST_TXCn_Pos                   6                                                       /*!< USART13 ST: TXCn Position               */
#define USART13_ST_TXCn_Msk                   (0x01UL << USART13_ST_TXCn_Pos)                         /*!< USART13 ST: TXCn Mask                   */
#define USART13_ST_DREn_Pos                   7                                                       /*!< USART13 ST: DREn Position               */
#define USART13_ST_DREn_Msk                   (0x01UL << USART13_ST_DREn_Pos)                         /*!< USART13 ST: DREn Mask                   */

/* ---------------------------------  USART13_BDR  -------------------------------- */
#define USART13_BDR_BDATA_Pos                 0                                                       /*!< USART13 BDR: BDATA Position             */
#define USART13_BDR_BDATA_Msk                 (0x00000fffUL << USART13_BDR_BDATA_Pos)                 /*!< USART13 BDR: BDATA Mask                 */

/* ---------------------------------  USART13_DR  --------------------------------- */
#define USART13_DR_DATA_Pos                   0                                                       /*!< USART13 DR: DATA Position               */
#define USART13_DR_DATA_Msk                   (0x000000ffUL << USART13_DR_DATA_Pos)                   /*!< USART13 DR: DATA Mask                   */


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
#define UART0_IDTR_WAITVAL_Msk                (0x07UL << UART0_IDTR_WAITVAL_Pos)                      /*!< UART0 IDTR: WAITVAL Mask                */


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
#define UART1_IDTR_WAITVAL_Msk                (0x07UL << UART1_IDTR_WAITVAL_Pos)                      /*!< UART1 IDTR: WAITVAL Mask                */


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
/* ================          struct 'I2C2' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  I2C2_CR  ---------------------------------- */
#define I2C2_CR_STARTCn_Pos                   0                                                       /*!< I2C2 CR: STARTCn Position               */
#define I2C2_CR_STARTCn_Msk                   (0x01UL << I2C2_CR_STARTCn_Pos)                         /*!< I2C2 CR: STARTCn Mask                   */
#define I2C2_CR_STOPCn_Pos                    1                                                       /*!< I2C2 CR: STOPCn Position                */
#define I2C2_CR_STOPCn_Msk                    (0x01UL << I2C2_CR_STOPCn_Pos)                          /*!< I2C2 CR: STOPCn Mask                    */
#define I2C2_CR_IMASTERn_Pos                  2                                                       /*!< I2C2 CR: IMASTERn Position              */
#define I2C2_CR_IMASTERn_Msk                  (0x01UL << I2C2_CR_IMASTERn_Pos)                        /*!< I2C2 CR: IMASTERn Mask                  */
#define I2C2_CR_ACKnEN_Pos                    3                                                       /*!< I2C2 CR: ACKnEN Position                */
#define I2C2_CR_ACKnEN_Msk                    (0x01UL << I2C2_CR_ACKnEN_Pos)                          /*!< I2C2 CR: ACKnEN Mask                    */
#define I2C2_CR_I2CnIFLAG_Pos                 4                                                       /*!< I2C2 CR: I2CnIFLAG Position             */
#define I2C2_CR_I2CnIFLAG_Msk                 (0x01UL << I2C2_CR_I2CnIFLAG_Pos)                       /*!< I2C2 CR: I2CnIFLAG Mask                 */
#define I2C2_CR_I2CnIEN_Pos                   5                                                       /*!< I2C2 CR: I2CnIEN Position               */
#define I2C2_CR_I2CnIEN_Msk                   (0x01UL << I2C2_CR_I2CnIEN_Pos)                         /*!< I2C2 CR: I2CnIEN Mask                   */
#define I2C2_CR_TXDLYENBn_Pos                 6                                                       /*!< I2C2 CR: TXDLYENBn Position             */
#define I2C2_CR_TXDLYENBn_Msk                 (0x01UL << I2C2_CR_TXDLYENBn_Pos)                       /*!< I2C2 CR: TXDLYENBn Mask                 */
#define I2C2_CR_I2CnEN_Pos                    7                                                       /*!< I2C2 CR: I2CnEN Position                */
#define I2C2_CR_I2CnEN_Msk                    (0x01UL << I2C2_CR_I2CnEN_Pos)                          /*!< I2C2 CR: I2CnEN Mask                    */

/* -----------------------------------  I2C2_ST  ---------------------------------- */
#define I2C2_ST_RXACKn_Pos                    0                                                       /*!< I2C2 ST: RXACKn Position                */
#define I2C2_ST_RXACKn_Msk                    (0x01UL << I2C2_ST_RXACKn_Pos)                          /*!< I2C2 ST: RXACKn Mask                    */
#define I2C2_ST_TMODEn_Pos                    1                                                       /*!< I2C2 ST: TMODEn Position                */
#define I2C2_ST_TMODEn_Msk                    (0x01UL << I2C2_ST_TMODEn_Pos)                          /*!< I2C2 ST: TMODEn Mask                    */
#define I2C2_ST_BUSYn_Pos                     2                                                       /*!< I2C2 ST: BUSYn Position                 */
#define I2C2_ST_BUSYn_Msk                     (0x01UL << I2C2_ST_BUSYn_Pos)                           /*!< I2C2 ST: BUSYn Mask                     */
#define I2C2_ST_MLOSTn_Pos                    3                                                       /*!< I2C2 ST: MLOSTn Position                */
#define I2C2_ST_MLOSTn_Msk                    (0x01UL << I2C2_ST_MLOSTn_Pos)                          /*!< I2C2 ST: MLOSTn Mask                    */
#define I2C2_ST_SSELn_Pos                     4                                                       /*!< I2C2 ST: SSELn Position                 */
#define I2C2_ST_SSELn_Msk                     (0x01UL << I2C2_ST_SSELn_Pos)                           /*!< I2C2 ST: SSELn Mask                     */
#define I2C2_ST_STOPDn_Pos                    5                                                       /*!< I2C2 ST: STOPDn Position                */
#define I2C2_ST_STOPDn_Msk                    (0x01UL << I2C2_ST_STOPDn_Pos)                          /*!< I2C2 ST: STOPDn Mask                    */
#define I2C2_ST_TENDn_Pos                     6                                                       /*!< I2C2 ST: TENDn Position                 */
#define I2C2_ST_TENDn_Msk                     (0x01UL << I2C2_ST_TENDn_Pos)                           /*!< I2C2 ST: TENDn Mask                     */
#define I2C2_ST_GCALLn_Pos                    7                                                       /*!< I2C2 ST: GCALLn Position                */
#define I2C2_ST_GCALLn_Msk                    (0x01UL << I2C2_ST_GCALLn_Pos)                          /*!< I2C2 ST: GCALLn Mask                    */

/* ----------------------------------  I2C2_SAR1  --------------------------------- */
#define I2C2_SAR1_GCALLnEN_Pos                0                                                       /*!< I2C2 SAR1: GCALLnEN Position            */
#define I2C2_SAR1_GCALLnEN_Msk                (0x01UL << I2C2_SAR1_GCALLnEN_Pos)                      /*!< I2C2 SAR1: GCALLnEN Mask                */
#define I2C2_SAR1_SLAn_Pos                    1                                                       /*!< I2C2 SAR1: SLAn Position                */
#define I2C2_SAR1_SLAn_Msk                    (0x7fUL << I2C2_SAR1_SLAn_Pos)                          /*!< I2C2 SAR1: SLAn Mask                    */

/* ----------------------------------  I2C2_SAR2  --------------------------------- */
#define I2C2_SAR2_GCALLnEN_Pos                0                                                       /*!< I2C2 SAR2: GCALLnEN Position            */
#define I2C2_SAR2_GCALLnEN_Msk                (0x01UL << I2C2_SAR2_GCALLnEN_Pos)                      /*!< I2C2 SAR2: GCALLnEN Mask                */
#define I2C2_SAR2_SLAn_Pos                    1                                                       /*!< I2C2 SAR2: SLAn Position                */
#define I2C2_SAR2_SLAn_Msk                    (0x7fUL << I2C2_SAR2_SLAn_Pos)                          /*!< I2C2 SAR2: SLAn Mask                    */

/* -----------------------------------  I2C2_DR  ---------------------------------- */
#define I2C2_DR_DATA_Pos                      0                                                       /*!< I2C2 DR: DATA Position                  */
#define I2C2_DR_DATA_Msk                      (0x000000ffUL << I2C2_DR_DATA_Pos)                      /*!< I2C2 DR: DATA Mask                      */

/* ----------------------------------  I2C2_SDHR  --------------------------------- */
#define I2C2_SDHR_HLDT_Pos                    0                                                       /*!< I2C2 SDHR: HLDT Position                */
#define I2C2_SDHR_HLDT_Msk                    (0x00000fffUL << I2C2_SDHR_HLDT_Pos)                    /*!< I2C2 SDHR: HLDT Mask                    */

/* ----------------------------------  I2C2_SCLR  --------------------------------- */
#define I2C2_SCLR_SCLL_Pos                    0                                                       /*!< I2C2 SCLR: SCLL Position                */
#define I2C2_SCLR_SCLL_Msk                    (0x00000fffUL << I2C2_SCLR_SCLL_Pos)                    /*!< I2C2 SCLR: SCLL Mask                    */

/* ----------------------------------  I2C2_SCHR  --------------------------------- */
#define I2C2_SCHR_SCLH_Pos                    0                                                       /*!< I2C2 SCHR: SCLH Position                */
#define I2C2_SCHR_SCLH_Msk                    (0x00000fffUL << I2C2_SCHR_SCLH_Pos)                    /*!< I2C2 SCHR: SCLH Mask                    */


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


/* -----------------------------------  DAC_DR  ----------------------------------- */
#define DAC_DR_DACDR_Pos                      0                                                       /*!< DAC DR: DACDR Position                  */
#define DAC_DR_DACDR_Msk                      (0x0000ffffUL << DAC_DR_DACDR_Pos)                      /*!< DAC DR: DACDR Mask                      */

/* -----------------------------------  DAC_BR  ----------------------------------- */
#define DAC_BR_DACBR_Pos                      0                                                       /*!< DAC BR: DACBR Position                  */
#define DAC_BR_DACBR_Msk                      (0x0000ffffUL << DAC_BR_DACBR_Pos)                      /*!< DAC BR: DACBR Mask                      */

/* -----------------------------------  DAC_CR  ----------------------------------- */
#define DAC_CR_DACEN_Pos                      0                                                       /*!< DAC CR: DACEN Position                  */
#define DAC_CR_DACEN_Msk                      (0x01UL << DAC_CR_DACEN_Pos)                            /*!< DAC CR: DACEN Mask                      */
#define DAC_CR_DACRLDS_Pos                    1                                                       /*!< DAC CR: DACRLDS Position                */
#define DAC_CR_DACRLDS_Msk                    (0x03UL << DAC_CR_DACRLDS_Pos)                          /*!< DAC CR: DACRLDS Mask                    */
#define DAC_CR_FADFEN_Pos                     3                                                       /*!< DAC CR: FADFEN Position                 */
#define DAC_CR_FADFEN_Msk                     (0x01UL << DAC_CR_FADFEN_Pos)                           /*!< DAC CR: FADFEN Mask                     */
#define DAC_CR_DACBC_Pos                      4                                                       /*!< DAC CR: DACBC Position                  */
#define DAC_CR_DACBC_Msk                      (0x01UL << DAC_CR_DACBC_Pos)                            /*!< DAC CR: DACBC Mask                      */
#define DAC_CR_ADATID_Pos                     5                                                       /*!< DAC CR: ADATID Position                 */
#define DAC_CR_ADATID_Msk                     (0x01UL << DAC_CR_ADATID_Pos)                           /*!< DAC CR: ADATID Mask                     */
#define DAC_CR_DACIFR_Pos                     6                                                       /*!< DAC CR: DACIFR Position                 */
#define DAC_CR_DACIFR_Msk                     (0x01UL << DAC_CR_DACIFR_Pos)                           /*!< DAC CR: DACIFR Mask                     */
#define DAC_CR_DACIE_Pos                      7                                                       /*!< DAC CR: DACIE Position                  */
#define DAC_CR_DACIE_Msk                      (0x01UL << DAC_CR_DACIE_Pos)                            /*!< DAC CR: DACIE Mask                      */
#define DAC_CR_REFSEL_Pos                     8                                                       /*!< DAC CR: REFSEL Position                 */
#define DAC_CR_REFSEL_Msk                     (0x01UL << DAC_CR_REFSEL_Pos)                           /*!< DAC CR: REFSEL Mask                     */

/* ----------------------------------  DAC_PGSR  ---------------------------------- */
#define DAC_PGSR_PSG_Pos                      0                                                       /*!< DAC PGSR: PSG Position                  */
#define DAC_PGSR_PSG_Msk                      (0x0fUL << DAC_PGSR_PSG_Pos)                            /*!< DAC PGSR: PSG Mask                      */

/* ----------------------------------  DAC_OFSCR  --------------------------------- */
#define DAC_OFSCR_OFS_Pos                     0                                                       /*!< DAC OFSCR: OFS Position                 */
#define DAC_OFSCR_OFS_Msk                     (0x0fUL << DAC_OFSCR_OFS_Pos)                           /*!< DAC OFSCR: OFS Mask                     */
#define DAC_OFSCR_OFSDIR_Pos                  6                                                       /*!< DAC OFSCR: OFSDIR Position              */
#define DAC_OFSCR_OFSDIR_Msk                  (0x01UL << DAC_OFSCR_OFSDIR_Pos)                        /*!< DAC OFSCR: OFSDIR Mask                  */
#define DAC_OFSCR_OFSEN_Pos                   7                                                       /*!< DAC OFSCR: OFSEN Position               */
#define DAC_OFSCR_OFSEN_Msk                   (0x01UL << DAC_OFSCR_OFSEN_Pos)                         /*!< DAC OFSCR: OFSEN Mask                   */


/* ================================================================================ */
/* ================         struct 'ADPCM' Position & Mask         ================ */
/* ================================================================================ */


/* ---------------------------------  ADPCM_DECCR  -------------------------------- */
#define ADPCM_DECCR_DCLKS_Pos                 0                                                       /*!< ADPCM DECCR: DCLKS Position             */
#define ADPCM_DECCR_DCLKS_Msk                 (0x07UL << ADPCM_DECCR_DCLKS_Pos)                       /*!< ADPCM DECCR: DCLKS Mask                 */
#define ADPCM_DECCR_DCEN_Pos                  3                                                       /*!< ADPCM DECCR: DCEN Position              */
#define ADPCM_DECCR_DCEN_Msk                  (0x01UL << ADPCM_DECCR_DCEN_Pos)                        /*!< ADPCM DECCR: DCEN Mask                  */
#define ADPCM_DECCR_DIVS_Pos                  4                                                       /*!< ADPCM DECCR: DIVS Position              */
#define ADPCM_DECCR_DIVS_Msk                  (0x01UL << ADPCM_DECCR_DIVS_Pos)                        /*!< ADPCM DECCR: DIVS Mask                  */
#define ADPCM_DECCR_DECEN_Pos                 5                                                       /*!< ADPCM DECCR: DECEN Position             */
#define ADPCM_DECCR_DECEN_Msk                 (0x01UL << ADPCM_DECCR_DECEN_Pos)                       /*!< ADPCM DECCR: DECEN Mask                 */
#define ADPCM_DECCR_DFFF_Pos                  6                                                       /*!< ADPCM DECCR: DFFF Position              */
#define ADPCM_DECCR_DFFF_Msk                  (0x01UL << ADPCM_DECCR_DFFF_Pos)                        /*!< ADPCM DECCR: DFFF Mask                  */
#define ADPCM_DECCR_DMIE_Pos                  7                                                       /*!< ADPCM DECCR: DMIE Position              */
#define ADPCM_DECCR_DMIE_Msk                  (0x01UL << ADPCM_DECCR_DMIE_Pos)                        /*!< ADPCM DECCR: DMIE Mask                  */
#define ADPCM_DECCR_DFEIE_Pos                 8                                                       /*!< ADPCM DECCR: DFEIE Position             */
#define ADPCM_DECCR_DFEIE_Msk                 (0x01UL << ADPCM_DECCR_DFEIE_Pos)                       /*!< ADPCM DECCR: DFEIE Mask                 */
#define ADPCM_DECCR_SPIEN_Pos                 9                                                       /*!< ADPCM DECCR: SPIEN Position             */
#define ADPCM_DECCR_SPIEN_Msk                 (0x01UL << ADPCM_DECCR_SPIEN_Pos)                       /*!< ADPCM DECCR: SPIEN Mask                 */

/* --------------------------------  ADPCM_DFIFOR  -------------------------------- */
#define ADPCM_DFIFOR_DFIFOR_Pos               0                                                       /*!< ADPCM DFIFOR: DFIFOR Position           */
#define ADPCM_DFIFOR_DFIFOR_Msk               (0x000000ffUL << ADPCM_DFIFOR_DFIFOR_Pos)               /*!< ADPCM DFIFOR: DFIFOR Mask               */

/* ---------------------------------  ADPCM_DECDR  -------------------------------- */
#define ADPCM_DECDR_DECDR_Pos                 0                                                       /*!< ADPCM DECDR: DECDR Position             */
#define ADPCM_DECDR_DECDR_Msk                 (0x000000ffUL << ADPCM_DECDR_DECDR_Pos)                 /*!< ADPCM DECDR: DECDR Mask                 */

/* ---------------------------------  ADPCM_DBDLR  -------------------------------- */
#define ADPCM_DBDLR_DBDLR_Pos                 0                                                       /*!< ADPCM DBDLR: DBDLR Position             */
#define ADPCM_DBDLR_DBDLR_Msk                 (0x000000ffUL << ADPCM_DBDLR_DBDLR_Pos)                 /*!< ADPCM DBDLR: DBDLR Mask                 */

/* ---------------------------------  ADPCM_DODRL  -------------------------------- */
#define ADPCM_DODRL_DODRL_Pos                 0                                                       /*!< ADPCM DODRL: DODRL Position             */
#define ADPCM_DODRL_DODRL_Msk                 (0x000000ffUL << ADPCM_DODRL_DODRL_Pos)                 /*!< ADPCM DODRL: DODRL Mask                 */

/* ---------------------------------  ADPCM_DODRH  -------------------------------- */
#define ADPCM_DODRH_DODRH_Pos                 0                                                       /*!< ADPCM DODRH: DODRH Position             */
#define ADPCM_DODRH_DODRH_Msk                 (0x000000ffUL << ADPCM_DODRH_DODRH_Pos)                 /*!< ADPCM DODRH: DODRH Mask                 */

/* --------------------------------  ADPCM_FAFLAG  -------------------------------- */
#define ADPCM_FAFLAG_DMIFR_Pos                0                                                       /*!< ADPCM FAFLAG: DMIFR Position            */
#define ADPCM_FAFLAG_DMIFR_Msk                (0x01UL << ADPCM_FAFLAG_DMIFR_Pos)                      /*!< ADPCM FAFLAG: DMIFR Mask                */
#define ADPCM_FAFLAG_DFEIFR_Pos               1                                                       /*!< ADPCM FAFLAG: DFEIFR Position           */
#define ADPCM_FAFLAG_DFEIFR_Msk               (0x01UL << ADPCM_FAFLAG_DFEIFR_Pos)                     /*!< ADPCM FAFLAG: DFEIFR Mask               */
#define ADPCM_FAFLAG_VPTBLIFR_Pos             2                                                       /*!< ADPCM FAFLAG: VPTBLIFR Position         */
#define ADPCM_FAFLAG_VPTBLIFR_Msk             (0x01UL << ADPCM_FAFLAG_VPTBLIFR_Pos)                   /*!< ADPCM FAFLAG: VPTBLIFR Mask             */
#define ADPCM_FAFLAG_VPEDIFR_Pos              3                                                       /*!< ADPCM FAFLAG: VPEDIFR Position          */
#define ADPCM_FAFLAG_VPEDIFR_Msk              (0x01UL << ADPCM_FAFLAG_VPEDIFR_Pos)                    /*!< ADPCM FAFLAG: VPEDIFR Mask              */
#define ADPCM_FAFLAG_SFSTOP_Pos               7                                                       /*!< ADPCM FAFLAG: SFSTOP Position           */
#define ADPCM_FAFLAG_SFSTOP_Msk               (0x01UL << ADPCM_FAFLAG_SFSTOP_Pos)                     /*!< ADPCM FAFLAG: SFSTOP Mask               */

/* ---------------------------------  ADPCM_VPCR  --------------------------------- */
#define ADPCM_VPCR_ATRIGS_Pos                 0                                                       /*!< ADPCM VPCR: ATRIGS Position             */
#define ADPCM_VPCR_ATRIGS_Msk                 (0x03UL << ADPCM_VPCR_ATRIGS_Pos)                       /*!< ADPCM VPCR: ATRIGS Mask                 */
#define ADPCM_VPCR_DTRS_Pos                   2                                                       /*!< ADPCM VPCR: DTRS Position               */
#define ADPCM_VPCR_DTRS_Msk                   (0x01UL << ADPCM_VPCR_DTRS_Pos)                         /*!< ADPCM VPCR: DTRS Mask                   */
#define ADPCM_VPCR_VPSDEC_Pos                 3                                                       /*!< ADPCM VPCR: VPSDEC Position             */
#define ADPCM_VPCR_VPSDEC_Msk                 (0x01UL << ADPCM_VPCR_VPSDEC_Pos)                       /*!< ADPCM VPCR: VPSDEC Mask                 */
#define ADPCM_VPCR_SPICSS_Pos                 4                                                       /*!< ADPCM VPCR: SPICSS Position             */
#define ADPCM_VPCR_SPICSS_Msk                 (0x01UL << ADPCM_VPCR_SPICSS_Pos)                       /*!< ADPCM VPCR: SPICSS Mask                 */
#define ADPCM_VPCR_SFRDST_Pos                 5                                                       /*!< ADPCM VPCR: SFRDST Position             */
#define ADPCM_VPCR_SFRDST_Msk                 (0x01UL << ADPCM_VPCR_SFRDST_Pos)                       /*!< ADPCM VPCR: SFRDST Mask                 */
#define ADPCM_VPCR_VPTBLIE_Pos                6                                                       /*!< ADPCM VPCR: VPTBLIE Position            */
#define ADPCM_VPCR_VPTBLIE_Msk                (0x01UL << ADPCM_VPCR_VPTBLIE_Pos)                      /*!< ADPCM VPCR: VPTBLIE Mask                */
#define ADPCM_VPCR_VPEDIE_Pos                 7                                                       /*!< ADPCM VPCR: VPEDIE Position             */
#define ADPCM_VPCR_VPEDIE_Msk                 (0x01UL << ADPCM_VPCR_VPEDIE_Pos)                       /*!< ADPCM VPCR: VPEDIE Mask                 */

/* --------------------------------  ADPCM_SFDDNO  -------------------------------- */
#define ADPCM_SFDDNO_RDNO_Pos                 0                                                       /*!< ADPCM SFDDNO: RDNO Position             */
#define ADPCM_SFDDNO_RDNO_Msk                 (0x07UL << ADPCM_SFDDNO_RDNO_Pos)                       /*!< ADPCM SFDDNO: RDNO Mask                 */
#define ADPCM_SFDDNO_DUMY_Pos                 4                                                       /*!< ADPCM SFDDNO: DUMY Position             */
#define ADPCM_SFDDNO_DUMY_Msk                 (0x0fUL << ADPCM_SFDDNO_DUMY_Pos)                       /*!< ADPCM SFDDNO: DUMY Mask                 */

/* ---------------------------------  ADPCM_SFCMD  -------------------------------- */
#define ADPCM_SFCMD_SFCMD_Pos                 0                                                       /*!< ADPCM SFCMD: SFCMD Position             */
#define ADPCM_SFCMD_SFCMD_Msk                 (0x000000ffUL << ADPCM_SFCMD_SFCMD_Pos)                 /*!< ADPCM SFCMD: SFCMD Mask                 */

/* --------------------------------  ADPCM_VPADDR1  ------------------------------- */
#define ADPCM_VPADDR1_VPAR_Pos                0                                                       /*!< ADPCM VPADDR1: VPAR Position            */
#define ADPCM_VPADDR1_VPAR_Msk                (0x000000ffUL << ADPCM_VPADDR1_VPAR_Pos)                /*!< ADPCM VPADDR1: VPAR Mask                */

/* --------------------------------  ADPCM_VPADDR2  ------------------------------- */
#define ADPCM_VPADDR2_VPAR_Pos                0                                                       /*!< ADPCM VPADDR2: VPAR Position            */
#define ADPCM_VPADDR2_VPAR_Msk                (0x000000ffUL << ADPCM_VPADDR2_VPAR_Pos)                /*!< ADPCM VPADDR2: VPAR Mask                */

/* --------------------------------  ADPCM_VPADDR3  ------------------------------- */
#define ADPCM_VPADDR3_VPAR_Pos                0                                                       /*!< ADPCM VPADDR3: VPAR Position            */
#define ADPCM_VPADDR3_VPAR_Msk                (0x000000ffUL << ADPCM_VPADDR3_VPAR_Pos)                /*!< ADPCM VPADDR3: VPAR Mask                */

/* --------------------------------  ADPCM_VPSIZE1  ------------------------------- */
#define ADPCM_VPSIZE1_VPSZ_Pos                0                                                       /*!< ADPCM VPSIZE1: VPSZ Position            */
#define ADPCM_VPSIZE1_VPSZ_Msk                (0x000000ffUL << ADPCM_VPSIZE1_VPSZ_Pos)                /*!< ADPCM VPSIZE1: VPSZ Mask                */

/* --------------------------------  ADPCM_VPSIZE2  ------------------------------- */
#define ADPCM_VPSIZE2_VPSZ_Pos                0                                                       /*!< ADPCM VPSIZE2: VPSZ Position            */
#define ADPCM_VPSIZE2_VPSZ_Msk                (0x000000ffUL << ADPCM_VPSIZE2_VPSZ_Pos)                /*!< ADPCM VPSIZE2: VPSZ Mask                */

/* --------------------------------  ADPCM_VPSIZE3  ------------------------------- */
#define ADPCM_VPSIZE3_VPSZ_Pos                0                                                       /*!< ADPCM VPSIZE3: VPSZ Position            */
#define ADPCM_VPSIZE3_VPSZ_Msk                (0x000000ffUL << ADPCM_VPSIZE3_VPSZ_Pos)                /*!< ADPCM VPSIZE3: VPSZ Mask                */

/* --------------------------------  ADPCM_VPINF1  -------------------------------- */
#define ADPCM_VPINF1_VPINF_Pos                0                                                       /*!< ADPCM VPINF1: VPINF Position            */
#define ADPCM_VPINF1_VPINF_Msk                (0x000000ffUL << ADPCM_VPINF1_VPINF_Pos)                /*!< ADPCM VPINF1: VPINF Mask                */

/* --------------------------------  ADPCM_VPINF2  -------------------------------- */
#define ADPCM_VPINF2_VPINF_Pos                0                                                       /*!< ADPCM VPINF2: VPINF Position            */
#define ADPCM_VPINF2_VPINF_Msk                (0x000000ffUL << ADPCM_VPINF2_VPINF_Pos)                /*!< ADPCM VPINF2: VPINF Mask                */

/* ---------------------------------  ADPCM_SPICR  -------------------------------- */
#define ADPCM_SPICR_SPISCR_Pos                0                                                       /*!< ADPCM SPICR: SPISCR Position            */
#define ADPCM_SPICR_SPISCR_Msk                (0x03UL << ADPCM_SPICR_SPISCR_Pos)                      /*!< ADPCM SPICR: SPISCR Mask                */
#define ADPCM_SPICR_SPIDSCR_Pos               2                                                       /*!< ADPCM SPICR: SPIDSCR Position           */
#define ADPCM_SPICR_SPIDSCR_Msk               (0x01UL << ADPCM_SPICR_SPIDSCR_Pos)                     /*!< ADPCM SPICR: SPIDSCR Mask               */
#define ADPCM_SPICR_CPHA_Pos                  3                                                       /*!< ADPCM SPICR: CPHA Position              */
#define ADPCM_SPICR_CPHA_Msk                  (0x01UL << ADPCM_SPICR_CPHA_Pos)                        /*!< ADPCM SPICR: CPHA Mask                  */
#define ADPCM_SPICR_CPOL_Pos                  4                                                       /*!< ADPCM SPICR: CPOL Position              */
#define ADPCM_SPICR_CPOL_Msk                  (0x01UL << ADPCM_SPICR_CPOL_Pos)                        /*!< ADPCM SPICR: CPOL Mask                  */
#define ADPCM_SPICR_SPIMS_Pos                 5                                                       /*!< ADPCM SPICR: SPIMS Position             */
#define ADPCM_SPICR_SPIMS_Msk                 (0x01UL << ADPCM_SPICR_SPIMS_Pos)                       /*!< ADPCM SPICR: SPIMS Mask                 */
#define ADPCM_SPICR_FLSB_Pos                  6                                                       /*!< ADPCM SPICR: FLSB Position              */
#define ADPCM_SPICR_FLSB_Msk                  (0x01UL << ADPCM_SPICR_FLSB_Pos)                        /*!< ADPCM SPICR: FLSB Mask                  */
#define ADPCM_SPICR_SPIEN_Pos                 7                                                       /*!< ADPCM SPICR: SPIEN Position             */
#define ADPCM_SPICR_SPIEN_Msk                 (0x01UL << ADPCM_SPICR_SPIEN_Pos)                       /*!< ADPCM SPICR: SPIEN Mask                 */

/* ---------------------------------  ADPCM_SPIDR  -------------------------------- */
#define ADPCM_SPIDR_SPIDR_Pos                 7                                                       /*!< ADPCM SPIDR: SPIDR Position             */
#define ADPCM_SPIDR_SPIDR_Msk                 (0x01UL << ADPCM_SPIDR_SPIDR_Pos)                       /*!< ADPCM SPIDR: SPIDR Mask                 */

/* ---------------------------------  ADPCM_SPISR  -------------------------------- */
#define ADPCM_SPISR_SPISSEN_Pos               2                                                       /*!< ADPCM SPISR: SPISSEN Position           */
#define ADPCM_SPISR_SPISSEN_Msk               (0x01UL << ADPCM_SPISR_SPISSEN_Pos)                     /*!< ADPCM SPISR: SPISSEN Mask               */
#define ADPCM_SPISR_FXCH_Pos                  3                                                       /*!< ADPCM SPISR: FXCH Position              */
#define ADPCM_SPISR_FXCH_Msk                  (0x01UL << ADPCM_SPISR_FXCH_Pos)                        /*!< ADPCM SPISR: FXCH Mask                  */
#define ADPCM_SPISR_SS_HIGH_Pos               5                                                       /*!< ADPCM SPISR: SS_HIGH Position           */
#define ADPCM_SPISR_SS_HIGH_Msk               (0x01UL << ADPCM_SPISR_SS_HIGH_Pos)                     /*!< ADPCM SPISR: SS_HIGH Mask               */
#define ADPCM_SPISR_WCOL_Pos                  6                                                       /*!< ADPCM SPISR: WCOL Position              */
#define ADPCM_SPISR_WCOL_Msk                  (0x01UL << ADPCM_SPISR_WCOL_Pos)                        /*!< ADPCM SPISR: WCOL Mask                  */
#define ADPCM_SPISR_SPIIFR_Pos                7                                                       /*!< ADPCM SPISR: SPIIFR Position            */
#define ADPCM_SPISR_SPIIFR_Msk                (0x01UL << ADPCM_SPISR_SPIIFR_Pos)                      /*!< ADPCM SPISR: SPIIFR Mask                */


/* ================================================================================ */
/* ================          struct 'CMP' Position & Mask          ================ */
/* ================================================================================ */


/* ---------------------------------  CMP_CMP0CR  --------------------------------- */
#define CMP_CMP0CR_C0INPSEL_Pos               0                                                       /*!< CMP CMP0CR: C0INPSEL Position           */
#define CMP_CMP0CR_C0INPSEL_Msk               (0x03UL << CMP_CMP0CR_C0INPSEL_Pos)                     /*!< CMP CMP0CR: C0INPSEL Mask               */
#define CMP_CMP0CR_C0INNSEL_Pos               4                                                       /*!< CMP CMP0CR: C0INNSEL Position           */
#define CMP_CMP0CR_C0INNSEL_Msk               (0x03UL << CMP_CMP0CR_C0INNSEL_Pos)                     /*!< CMP CMP0CR: C0INNSEL Mask               */
#define CMP_CMP0CR_CMP0EN_Pos                 12                                                      /*!< CMP CMP0CR: CMP0EN Position            */
#define CMP_CMP0CR_CMP0EN_Msk                 (0x01UL << CMP_CMP0CR_CMP0EN_Pos)                      /*!< CMP CMP0CR: CMP0EN Mask                */
#define CMP_CMP0CR_HYSSEL0_Pos                16                                                      /*!< CMP CMP0CR: HYSSEL0 Position            */
#define CMP_CMP0CR_HYSSEL0_Msk                (0x01UL << CMP_CMP0CR_HYSSEL0_Pos)                      /*!< CMP CMP0CR: HYSSEL0 Mask                */
#define CMP_CMP0CR_HYSEN0_Pos                 20                                                      /*!< CMP CMP0CR: HYSEN0 Position             */
#define CMP_CMP0CR_HYSEN0_Msk                 (0x01UL << CMP_CMP0CR_HYSEN0_Pos)                       /*!< CMP CMP0CR: HYSEN0 Mask                 */

/* ---------------------------------  CMP_CMP1CR  --------------------------------- */
#define CMP_CMP1CR_C0INPSEL_Pos               0                                                       /*!< CMP CMP1CR: C0INPSEL Position           */
#define CMP_CMP1CR_C0INPSEL_Msk               (0x03UL << CMP_CMP1CR_C0INPSEL_Pos)                     /*!< CMP CMP1CR: C0INPSEL Mask               */
#define CMP_CMP1CR_C1INNSEL_Pos               4                                                       /*!< CMP CMP1CR: C1INNSEL Position           */
#define CMP_CMP1CR_C1INNSEL_Msk               (0x03UL << CMP_CMP1CR_C1INNSEL_Pos)                     /*!< CMP CMP1CR: C1INNSEL Mask               */
#define CMP_CMP1CR_CMP1EN_Pos                 12                                                      /*!< CMP CMP1CR: CMP1EN Position            */
#define CMP_CMP1CR_CMP1EN_Msk                 (0x01UL << CMP_CMP1CR_CMP1EN_Pos)                      /*!< CMP CMP1CR: CMP1EN Mask                */
#define CMP_CMP1CR_HYSSEL1_Pos                16                                                      /*!< CMP CMP1CR: HYSSEL1 Position            */
#define CMP_CMP1CR_HYSSEL1_Msk                (0x01UL << CMP_CMP1CR_HYSSEL1_Pos)                      /*!< CMP CMP1CR: HYSSEL1 Mask                */
#define CMP_CMP1CR_HYSEN1_Pos                 20                                                      /*!< CMP CMP1CR: HYSEN1 Position             */
#define CMP_CMP1CR_HYSEN1_Msk                 (0x01UL << CMP_CMP1CR_HYSEN1_Pos)                       /*!< CMP CMP1CR: HYSEN1 Mask                 */

/* ----------------------------------  CMP_DBNC  ---------------------------------- */
#define CMP_DBNC_C0DBNC_Pos                   0                                                       /*!< CMP DBNC: C0DBNC Position               */
#define CMP_DBNC_C0DBNC_Msk                   (0x0fUL << CMP_DBNC_C0DBNC_Pos)                         /*!< CMP DBNC: C0DBNC Mask                   */
#define CMP_DBNC_C1DBNC_Pos                   4                                                       /*!< CMP DBNC: C1DBNC Position               */
#define CMP_DBNC_C1DBNC_Msk                   (0x0fUL << CMP_DBNC_C1DBNC_Pos)                         /*!< CMP DBNC: C1DBNC Mask                   */
#define CMP_DBNC_DBINCTB_Pos                  16                                                      /*!< CMP DBNC: DBINCTB Position              */
#define CMP_DBNC_DBINCTB_Msk                  (0x0000ffffUL << CMP_DBNC_DBINCTB_Pos)                  /*!< CMP DBNC: DBINCTB Mask                  */

/* ----------------------------------  CMP_ICON  ---------------------------------- */
#define CMP_ICON_C0IMODE_Pos                  0                                                       /*!< CMP ICON: C0IMODE Position              */
#define CMP_ICON_C0IMODE_Msk                  (0x03UL << CMP_ICON_C0IMODE_Pos)                        /*!< CMP ICON: C0IMODE Mask                  */
#define CMP_ICON_C1IMODE_Pos                  2                                                       /*!< CMP ICON: C1IMODE Position              */
#define CMP_ICON_C1IMODE_Msk                  (0x03UL << CMP_ICON_C1IMODE_Pos)                        /*!< CMP ICON: C1IMODE Mask                  */
#define CMP_ICON_IPOL0_Pos                    8                                                       /*!< CMP ICON: IPOL0 Position                */
#define CMP_ICON_IPOL0_Msk                    (0x01UL << CMP_ICON_IPOL0_Pos)                          /*!< CMP ICON: IPOL0 Mask                    */
#define CMP_ICON_IPOL1_Pos                    9                                                       /*!< CMP ICON: IPOL1 Position                */
#define CMP_ICON_IPOL1_Msk                    (0x01UL << CMP_ICON_IPOL1_Pos)                          /*!< CMP ICON: IPOL1 Mask                    */
#define CMP_ICON_TPOL0_Pos                    12                                                      /*!< CMP ICON: TPOL0 Position                */
#define CMP_ICON_TPOL0_Msk                    (0x01UL << CMP_ICON_TPOL0_Pos)                          /*!< CMP ICON: TPOL0 Mask                    */
#define CMP_ICON_TPOL1_Pos                    13                                                      /*!< CMP ICON: TPOL1 Position                */
#define CMP_ICON_TPOL1_Msk                    (0x01UL << CMP_ICON_TPOL1_Pos)                          /*!< CMP ICON: TPOL1 Mask                    */

/* -----------------------------------  CMP_IEN  ---------------------------------- */
#define CMP_IEN_C0IEN_Pos                     0                                                       /*!< CMP IEN: C0IEN Position                 */
#define CMP_IEN_C0IEN_Msk                     (0x01UL << CMP_IEN_C0IEN_Pos)                           /*!< CMP IEN: C0IEN Mask                     */
#define CMP_IEN_C1IEN_Pos                     1                                                       /*!< CMP IEN: C1IEN Position                 */
#define CMP_IEN_C1IEN_Msk                     (0x01UL << CMP_IEN_C1IEN_Pos)                           /*!< CMP IEN: C1IEN Mask                     */

/* -----------------------------------  CMP_IST  ---------------------------------- */
#define CMP_IST_C0IRQ_Pos                     0                                                       /*!< CMP IST: C0IRQ Position                 */
#define CMP_IST_C0IRQ_Msk                     (0x01UL << CMP_IST_C0IRQ_Pos)                           /*!< CMP IST: C0IRQ Mask                     */
#define CMP_IST_C1IRQ_Pos                     1                                                       /*!< CMP IST: C1IRQ Position                 */
#define CMP_IST_C1IRQ_Msk                     (0x01UL << CMP_IST_C1IRQ_Pos)                           /*!< CMP IST: C1IRQ Mask                     */

/* ----------------------------------  CMP_ICLR  ---------------------------------- */
#define CMP_ICLR_C0ICLR_Pos                   0                                                       /*!< CMP ICLR: C0ICLR Position               */
#define CMP_ICLR_C0ICLR_Msk                   (0x01UL << CMP_ICLR_C0ICLR_Pos)                         /*!< CMP ICLR: C0ICLR Mask                   */
#define CMP_ICLR_C1ICLR_Pos                   1                                                       /*!< CMP ICLR: C1ICLR Position               */
#define CMP_ICLR_C1ICLR_Msk                   (0x01UL << CMP_ICLR_C1ICLR_Pos)                         /*!< CMP ICLR: C1ICLR Mask                   */


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
/* ================          struct 'LCD' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  LCD_CR  ----------------------------------- */
#define LCD_CR_DISP_Pos                       0                                                       /*!< LCD CR: DISP Position                   */
#define LCD_CR_DISP_Msk                       (0x01UL << LCD_CR_DISP_Pos)                             /*!< LCD CR: DISP Mask                       */
#define LCD_CR_LCLK_Pos                       1                                                       /*!< LCD CR: LCLK Position                   */
#define LCD_CR_LCLK_Msk                       (0x03UL << LCD_CR_LCLK_Pos)                             /*!< LCD CR: LCLK Mask                       */
#define LCD_CR_DBS_Pos                        3                                                       /*!< LCD CR: DBS Position                    */
#define LCD_CR_DBS_Msk                        (0x07UL << LCD_CR_DBS_Pos)                              /*!< LCD CR: DBS Mask                        */
#define LCD_CR_IRSEL_Pos                      6                                                       /*!< LCD CR: IRSEL Position                  */
#define LCD_CR_IRSEL_Msk                      (0x03UL << LCD_CR_IRSEL_Pos)                            /*!< LCD CR: IRSEL Mask                      */

/* ----------------------------------  LCD_BCCR  ---------------------------------- */
#define LCD_BCCR_VLCD_Pos                     0                                                       /*!< LCD BCCR: VLCD Position                 */
#define LCD_BCCR_VLCD_Msk                     (0x0fUL << LCD_BCCR_VLCD_Pos)                           /*!< LCD BCCR: VLCD Mask                     */
#define LCD_BCCR_LCTEN_Pos                    5                                                       /*!< LCD BCCR: LCTEN Position                */
#define LCD_BCCR_LCTEN_Msk                    (0x01UL << LCD_BCCR_LCTEN_Pos)                          /*!< LCD BCCR: LCTEN Mask                    */
#define LCD_BCCR_BMSEL_Pos                    8                                                       /*!< LCD BCCR: BMSEL Position                */
#define LCD_BCCR_BMSEL_Msk                    (0x07UL << LCD_BCCR_BMSEL_Pos)                          /*!< LCD BCCR: BMSEL Mask                    */
#define LCD_BCCR_LCDABC_Pos                   12                                                      /*!< LCD BCCR: LCDABC Position               */
#define LCD_BCCR_LCDABC_Msk                   (0x01UL << LCD_BCCR_LCDABC_Pos)                         /*!< LCD BCCR: LCDABC Mask                   */

/* ----------------------------------  LCD_BSSR  ---------------------------------- */
#define LCD_BSSR_VLC0EN_Pos                   4                                                       /*!< LCD BSSR: VLC0EN Position               */
#define LCD_BSSR_VLC0EN_Msk                   (0x01UL << LCD_BSSR_VLC0EN_Pos)                         /*!< LCD BSSR: VLC0EN Mask                   */
#define LCD_BSSR_VLC1EN_Pos                   5                                                       /*!< LCD BSSR: VLC1EN Position               */
#define LCD_BSSR_VLC1EN_Msk                   (0x01UL << LCD_BSSR_VLC1EN_Pos)                         /*!< LCD BSSR: VLC1EN Mask                   */
#define LCD_BSSR_VLC2EN_Pos                   6                                                       /*!< LCD BSSR: VLC2EN Position               */
#define LCD_BSSR_VLC2EN_Msk                   (0x01UL << LCD_BSSR_VLC2EN_Pos)                         /*!< LCD BSSR: VLC2EN Mask                   */
#define LCD_BSSR_VLC3EN_Pos                   7                                                       /*!< LCD BSSR: VLC3EN Position               */
#define LCD_BSSR_VLC3EN_Msk                   (0x01UL << LCD_BSSR_VLC3EN_Pos)                         /*!< LCD BSSR: VLC3EN Mask                   */
#define LCD_BSSR_LCDEPEN_Pos                  8                                                       /*!< LCD BSSR: LCDEPEN Position              */
#define LCD_BSSR_LCDEPEN_Msk                  (0x01UL << LCD_BSSR_LCDEPEN_Pos)                        /*!< LCD BSSR: LCDEPEN Mask                  */
#define LCD_BSSR_LCDDR_Pos                    9                                                       /*!< LCD BSSR: LCDDR Position                */
#define LCD_BSSR_LCDDR_Msk                    (0x01UL << LCD_BSSR_LCDDR_Pos)                          /*!< LCD BSSR: LCDDR Mask                    */


/* ================================================================================ */
/* ================          struct 'LED' Position & Mask          ================ */
/* ================================================================================ */


/* ----------------------------------  LED_COMOE  --------------------------------- */
#define LED_COMOE_COMOE1_Pos                  0                                                       /*!< LED COMOE: COMOE1 Position              */
#define LED_COMOE_COMOE1_Msk                  (0x000000ffUL << LED_COMOE_COMOE1_Pos)                  /*!< LED COMOE: COMOE1 Mask                  */
#define LED_COMOE_COMOE2_Pos                  8                                                       /*!< LED COMOE: COMOE2 Position              */
#define LED_COMOE_COMOE2_Msk                  (0x000000ffUL << LED_COMOE_COMOE2_Pos)                  /*!< LED COMOE: COMOE2 Mask                  */
#define LED_COMOE_COMOE3_Pos                  16                                                      /*!< LED COMOE: COMOE3 Position              */
#define LED_COMOE_COMOE3_Msk                  (0x000000ffUL << LED_COMOE_COMOE3_Pos)                  /*!< LED COMOE: COMOE3 Mask                  */
#define LED_COMOE_COMOE4_Pos                  24                                                      /*!< LED COMOE: COMOE4 Position              */
#define LED_COMOE_COMOE4_Msk                  (0x07UL << LED_COMOE_COMOE4_Pos)                        /*!< LED COMOE: COMOE4 Mask                  */

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
#define LED_COMER_COM16_Pos                   16                                                      /*!< LED COMER: COM16 Position               */
#define LED_COMER_COM16_Msk                   (0x01UL << LED_COMER_COM16_Pos)                         /*!< LED COMER: COM16 Mask                   */
#define LED_COMER_COM17_Pos                   17                                                      /*!< LED COMER: COM17 Position               */
#define LED_COMER_COM17_Msk                   (0x01UL << LED_COMER_COM17_Pos)                         /*!< LED COMER: COM17 Mask                   */
#define LED_COMER_COM18_Pos                   18                                                      /*!< LED COMER: COM18 Position               */
#define LED_COMER_COM18_Msk                   (0x01UL << LED_COMER_COM18_Pos)                         /*!< LED COMER: COM18 Mask                   */
#define LED_COMER_COM19_Pos                   19                                                      /*!< LED COMER: COM19 Position               */
#define LED_COMER_COM19_Msk                   (0x01UL << LED_COMER_COM19_Pos)                         /*!< LED COMER: COM19 Mask                   */
#define LED_COMER_COM20_Pos                   20                                                      /*!< LED COMER: COM20 Position               */
#define LED_COMER_COM20_Msk                   (0x01UL << LED_COMER_COM20_Pos)                         /*!< LED COMER: COM20 Mask                   */
#define LED_COMER_COM21_Pos                   21                                                      /*!< LED COMER: COM21 Position               */
#define LED_COMER_COM21_Msk                   (0x01UL << LED_COMER_COM21_Pos)                         /*!< LED COMER: COM21 Mask                   */
#define LED_COMER_COM22_Pos                   22                                                      /*!< LED COMER: COM22 Position               */
#define LED_COMER_COM22_Msk                   (0x01UL << LED_COMER_COM22_Pos)                         /*!< LED COMER: COM22 Mask                   */
#define LED_COMER_COM23_Pos                   23                                                      /*!< LED COMER: COM23 Position               */
#define LED_COMER_COM23_Msk                   (0x01UL << LED_COMER_COM23_Pos)                         /*!< LED COMER: COM23 Mask                   */
#define LED_COMER_COM24_Pos                   24                                                      /*!< LED COMER: COM24 Position               */
#define LED_COMER_COM24_Msk                   (0x01UL << LED_COMER_COM24_Pos)                         /*!< LED COMER: COM24 Mask                   */
#define LED_COMER_COM25_Pos                   25                                                      /*!< LED COMER: COM25 Position               */
#define LED_COMER_COM25_Msk                   (0x01UL << LED_COMER_COM25_Pos)                         /*!< LED COMER: COM25 Mask                   */
#define LED_COMER_COM26_Pos                   26                                                      /*!< LED COMER: COM26 Position               */
#define LED_COMER_COM26_Msk                   (0x01UL << LED_COMER_COM26_Pos)                         /*!< LED COMER: COM26 Mask                   */

/* ---------------------------------  LED_COMPWID  -------------------------------- */
#define LED_COMPWID_COMPWID_Pos               0                                                       /*!< LED COMPWID: COMPWID Position           */
#define LED_COMPWID_COMPWID_Msk               (0x000000ffUL << LED_COMPWID_COMPWID_Pos)               /*!< LED COMPWID: COMPWID Mask               */

/* ----------------------------------  LED_DIMM0  --------------------------------- */
#define LED_DIMM0_COMDIMM0_Pos                0                                                       /*!< LED DIMM0: COMDIMM0 Position            */
#define LED_DIMM0_COMDIMM0_Msk                (0x000000ffUL << LED_DIMM0_COMDIMM0_Pos)                /*!< LED DIMM0: COMDIMM0 Mask                */
#define LED_DIMM0_COMDIMM1_Pos                8                                                       /*!< LED DIMM0: COMDIMM1 Position            */
#define LED_DIMM0_COMDIMM1_Msk                (0x000000ffUL << LED_DIMM0_COMDIMM1_Pos)                /*!< LED DIMM0: COMDIMM1 Mask                */
#define LED_DIMM0_COMDIMM2_Pos                16                                                      /*!< LED DIMM0: COMDIMM2 Position            */
#define LED_DIMM0_COMDIMM2_Msk                (0x000000ffUL << LED_DIMM0_COMDIMM2_Pos)                /*!< LED DIMM0: COMDIMM2 Mask                */
#define LED_DIMM0_COMDIMM3_Pos                24                                                      /*!< LED DIMM0: COMDIMM3 Position            */
#define LED_DIMM0_COMDIMM3_Msk                (0x000000ffUL << LED_DIMM0_COMDIMM3_Pos)                /*!< LED DIMM0: COMDIMM3 Mask                */

/* ----------------------------------  LED_DIMM1  --------------------------------- */
#define LED_DIMM1_COMDIMM4_Pos                0                                                       /*!< LED DIMM1: COMDIMM4 Position            */
#define LED_DIMM1_COMDIMM4_Msk                (0x000000ffUL << LED_DIMM1_COMDIMM4_Pos)                /*!< LED DIMM1: COMDIMM4 Mask                */
#define LED_DIMM1_COMDIMM5_Pos                8                                                       /*!< LED DIMM1: COMDIMM5 Position            */
#define LED_DIMM1_COMDIMM5_Msk                (0x000000ffUL << LED_DIMM1_COMDIMM5_Pos)                /*!< LED DIMM1: COMDIMM5 Mask                */
#define LED_DIMM1_COMDIMM6_Pos                16                                                      /*!< LED DIMM1: COMDIMM6 Position            */
#define LED_DIMM1_COMDIMM6_Msk                (0x000000ffUL << LED_DIMM1_COMDIMM6_Pos)                /*!< LED DIMM1: COMDIMM6 Mask                */
#define LED_DIMM1_COMDIMM7_Pos                24                                                      /*!< LED DIMM1: COMDIMM7 Position            */
#define LED_DIMM1_COMDIMM7_Msk                (0x000000ffUL << LED_DIMM1_COMDIMM7_Pos)                /*!< LED DIMM1: COMDIMM7 Mask                */

/* ----------------------------------  LED_DIMM2  --------------------------------- */
#define LED_DIMM2_COMDIMM8_Pos                0                                                       /*!< LED DIMM2: COMDIMM8 Position            */
#define LED_DIMM2_COMDIMM8_Msk                (0x000000ffUL << LED_DIMM2_COMDIMM8_Pos)                /*!< LED DIMM2: COMDIMM8 Mask                */
#define LED_DIMM2_COMDIMM9_Pos                8                                                       /*!< LED DIMM2: COMDIMM9 Position            */
#define LED_DIMM2_COMDIMM9_Msk                (0x000000ffUL << LED_DIMM2_COMDIMM9_Pos)                /*!< LED DIMM2: COMDIMM9 Mask                */
#define LED_DIMM2_COMDIMM10_Pos               16                                                      /*!< LED DIMM2: COMDIMM10 Position           */
#define LED_DIMM2_COMDIMM10_Msk               (0x000000ffUL << LED_DIMM2_COMDIMM10_Pos)               /*!< LED DIMM2: COMDIMM10 Mask               */
#define LED_DIMM2_COMDIMM11_Pos               24                                                      /*!< LED DIMM2: COMDIMM11 Position           */
#define LED_DIMM2_COMDIMM11_Msk               (0x000000ffUL << LED_DIMM2_COMDIMM11_Pos)               /*!< LED DIMM2: COMDIMM11 Mask               */

/* ----------------------------------  LED_DIMM3  --------------------------------- */
#define LED_DIMM3_COMDIMM12_Pos               0                                                       /*!< LED DIMM3: COMDIMM12 Position           */
#define LED_DIMM3_COMDIMM12_Msk               (0x000000ffUL << LED_DIMM3_COMDIMM12_Pos)               /*!< LED DIMM3: COMDIMM12 Mask               */
#define LED_DIMM3_COMDIMM13_Pos               8                                                       /*!< LED DIMM3: COMDIMM13 Position           */
#define LED_DIMM3_COMDIMM13_Msk               (0x000000ffUL << LED_DIMM3_COMDIMM13_Pos)               /*!< LED DIMM3: COMDIMM13 Mask               */
#define LED_DIMM3_COMDIMM14_Pos               16                                                      /*!< LED DIMM3: COMDIMM14 Position           */
#define LED_DIMM3_COMDIMM14_Msk               (0x000000ffUL << LED_DIMM3_COMDIMM14_Pos)               /*!< LED DIMM3: COMDIMM14 Mask               */
#define LED_DIMM3_COMDIMM15_Pos               24                                                      /*!< LED DIMM3: COMDIMM15 Position           */
#define LED_DIMM3_COMDIMM15_Msk               (0x000000ffUL << LED_DIMM3_COMDIMM15_Pos)               /*!< LED DIMM3: COMDIMM15 Mask               */

/* ----------------------------------  LED_DIMM4  --------------------------------- */
#define LED_DIMM4_COMDIMM16_Pos               0                                                       /*!< LED DIMM4: COMDIMM16 Position           */
#define LED_DIMM4_COMDIMM16_Msk               (0x000000ffUL << LED_DIMM4_COMDIMM16_Pos)               /*!< LED DIMM4: COMDIMM16 Mask               */
#define LED_DIMM4_COMDIMM17_Pos               8                                                       /*!< LED DIMM4: COMDIMM17 Position           */
#define LED_DIMM4_COMDIMM17_Msk               (0x000000ffUL << LED_DIMM4_COMDIMM17_Pos)               /*!< LED DIMM4: COMDIMM17 Mask               */
#define LED_DIMM4_COMDIMM18_Pos               16                                                      /*!< LED DIMM4: COMDIMM18 Position           */
#define LED_DIMM4_COMDIMM18_Msk               (0x000000ffUL << LED_DIMM4_COMDIMM18_Pos)               /*!< LED DIMM4: COMDIMM18 Mask               */
#define LED_DIMM4_COMDIMM19_Pos               24                                                      /*!< LED DIMM4: COMDIMM19 Position           */
#define LED_DIMM4_COMDIMM19_Msk               (0x000000ffUL << LED_DIMM4_COMDIMM19_Pos)               /*!< LED DIMM4: COMDIMM19 Mask               */

/* ----------------------------------  LED_DIMM5  --------------------------------- */
#define LED_DIMM5_COMDIMM20_Pos               0                                                       /*!< LED DIMM5: COMDIMM20 Position           */
#define LED_DIMM5_COMDIMM20_Msk               (0x000000ffUL << LED_DIMM5_COMDIMM20_Pos)               /*!< LED DIMM5: COMDIMM20 Mask               */
#define LED_DIMM5_COMDIMM21_Pos               8                                                       /*!< LED DIMM5: COMDIMM21 Position           */
#define LED_DIMM5_COMDIMM21_Msk               (0x000000ffUL << LED_DIMM5_COMDIMM21_Pos)               /*!< LED DIMM5: COMDIMM21 Mask               */
#define LED_DIMM5_COMDIMM22_Pos               16                                                      /*!< LED DIMM5: COMDIMM22 Position           */
#define LED_DIMM5_COMDIMM22_Msk               (0x000000ffUL << LED_DIMM5_COMDIMM22_Pos)               /*!< LED DIMM5: COMDIMM22 Mask               */
#define LED_DIMM5_COMDIMM23_Pos               24                                                      /*!< LED DIMM5: COMDIMM23 Position           */
#define LED_DIMM5_COMDIMM23_Msk               (0x000000ffUL << LED_DIMM5_COMDIMM23_Pos)               /*!< LED DIMM5: COMDIMM23 Mask               */

/* ----------------------------------  LED_DIMM6  --------------------------------- */
#define LED_DIMM6_COMDIMM24_Pos               0                                                       /*!< LED DIMM6: COMDIMM24 Position           */
#define LED_DIMM6_COMDIMM24_Msk               (0x000000ffUL << LED_DIMM6_COMDIMM24_Pos)               /*!< LED DIMM6: COMDIMM24 Mask               */
#define LED_DIMM6_COMDIMM25_Pos               8                                                       /*!< LED DIMM6: COMDIMM25 Position           */
#define LED_DIMM6_COMDIMM25_Msk               (0x000000ffUL << LED_DIMM6_COMDIMM25_Pos)               /*!< LED DIMM6: COMDIMM25 Mask               */
#define LED_DIMM6_COMDIMM26_Pos               16                                                      /*!< LED DIMM6: COMDIMM26 Position           */
#define LED_DIMM6_COMDIMM26_Msk               (0x000000ffUL << LED_DIMM6_COMDIMM26_Pos)               /*!< LED DIMM6: COMDIMM26 Mask               */

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
#define LED_CON2_COM_SEGN_Pos                 4                                                       /*!< LED CON2: COM_SEGN Position             */
#define LED_CON2_COM_SEGN_Msk                 (0x03UL << LED_CON2_COM_SEGN_Pos)                       /*!< LED CON2: COM_SEGN Mask                 */

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


/* ================================================================================ */
/* ================          struct 'USB' Position & Mask          ================ */
/* ================================================================================ */


/* ---------------------------------  USB_GOTGCTL  -------------------------------- */
#define USB_GOTGCTL_MultValIdBC_Pos           22                                                      /*!< USB GOTGCTL: MultValIdBC Position       */
#define USB_GOTGCTL_MultValIdBC_Msk           (0x1fUL << USB_GOTGCTL_MultValIdBC_Pos)                 /*!< USB GOTGCTL: MultValIdBC Mask           */

/* ---------------------------------  USB_GOTGINT  -------------------------------- */
#define USB_GOTGINT_MultValIpChng_Pos         20                                                      /*!< USB GOTGINT: MultValIpChng Position     */
#define USB_GOTGINT_MultValIpChng_Msk         (0x01UL << USB_GOTGINT_MultValIpChng_Pos)               /*!< USB GOTGINT: MultValIpChng Mask         */

/* ---------------------------------  USB_GAHBCFG  -------------------------------- */
#define USB_GAHBCFG_GlblIntrMsk_Pos           0                                                       /*!< USB GAHBCFG: GlblIntrMsk Position       */
#define USB_GAHBCFG_GlblIntrMsk_Msk           (0x01UL << USB_GAHBCFG_GlblIntrMsk_Pos)                 /*!< USB GAHBCFG: GlblIntrMsk Mask           */
#define USB_GAHBCFG_HbstLen_Pos               1                                                       /*!< USB GAHBCFG: HbstLen Position           */
#define USB_GAHBCFG_HbstLen_Msk               (0x0fUL << USB_GAHBCFG_HbstLen_Pos)                     /*!< USB GAHBCFG: HbstLen Mask               */
#define USB_GAHBCFG_DMAEn_Pos                 5                                                       /*!< USB GAHBCFG: DMAEn Position             */
#define USB_GAHBCFG_DMAEn_Msk                 (0x01UL << USB_GAHBCFG_DMAEn_Pos)                       /*!< USB GAHBCFG: DMAEn Mask                 */
#define USB_GAHBCFG_RemMemSupp_Pos            21                                                      /*!< USB GAHBCFG: RemMemSupp Position        */
#define USB_GAHBCFG_RemMemSupp_Msk            (0x01UL << USB_GAHBCFG_RemMemSupp_Pos)                  /*!< USB GAHBCFG: RemMemSupp Mask            */
#define USB_GAHBCFG_NotiAllDmaWrit_Pos        22                                                      /*!< USB GAHBCFG: NotiAllDmaWrit Position    */
#define USB_GAHBCFG_NotiAllDmaWrit_Msk        (0x01UL << USB_GAHBCFG_NotiAllDmaWrit_Pos)              /*!< USB GAHBCFG: NotiAllDmaWrit Mask        */
#define USB_GAHBCFG_AHBSingle_Pos             23                                                      /*!< USB GAHBCFG: AHBSingle Position         */
#define USB_GAHBCFG_AHBSingle_Msk             (0x01UL << USB_GAHBCFG_AHBSingle_Pos)                   /*!< USB GAHBCFG: AHBSingle Mask             */
#define USB_GAHBCFG_InvDescEndianes_Pos       24                                                      /*!< USB GAHBCFG: InvDescEndianes Position   */
#define USB_GAHBCFG_InvDescEndianes_Msk       (0x01UL << USB_GAHBCFG_InvDescEndianes_Pos)             /*!< USB GAHBCFG: InvDescEndianes Mask       */

/* ---------------------------------  USB_GUSBCFG  -------------------------------- */
#define USB_GUSBCFG_ToutCal_Pos               0                                                       /*!< USB GUSBCFG: ToutCal Position           */
#define USB_GUSBCFG_ToutCal_Msk               (0x07UL << USB_GUSBCFG_ToutCal_Pos)                     /*!< USB GUSBCFG: ToutCal Mask               */
#define USB_GUSBCFG_FSIntf_Pos                5                                                       /*!< USB GUSBCFG: FSIntf Position            */
#define USB_GUSBCFG_FSIntf_Msk                (0x01UL << USB_GUSBCFG_FSIntf_Pos)                      /*!< USB GUSBCFG: FSIntf Mask                */
#define USB_GUSBCFG_PHYSel_Pos                6                                                       /*!< USB GUSBCFG: PHYSel Position            */
#define USB_GUSBCFG_PHYSel_Msk                (0x01UL << USB_GUSBCFG_PHYSel_Pos)                      /*!< USB GUSBCFG: PHYSel Mask                */
#define USB_GUSBCFG_CorruptTxPkt_Pos          31                                                      /*!< USB GUSBCFG: CorruptTxPkt Position      */
#define USB_GUSBCFG_CorruptTxPkt_Msk          (0x01UL << USB_GUSBCFG_CorruptTxPkt_Pos)                /*!< USB GUSBCFG: CorruptTxPkt Mask          */

/* ---------------------------------  USB_GRSTCTL  -------------------------------- */
#define USB_GRSTCTL_CSftRst_Pos               0                                                       /*!< USB GRSTCTL: CSftRst Position           */
#define USB_GRSTCTL_CSftRst_Msk               (0x01UL << USB_GRSTCTL_CSftRst_Pos)                     /*!< USB GRSTCTL: CSftRst Mask               */
#define USB_GRSTCTL_PIUFSSftRst_Pos           1                                                       /*!< USB GRSTCTL: PIUFSSftRst Position       */
#define USB_GRSTCTL_PIUFSSftRst_Msk           (0x01UL << USB_GRSTCTL_PIUFSSftRst_Pos)                 /*!< USB GRSTCTL: PIUFSSftRst Mask           */
#define USB_GRSTCTL_RxFFlsh_Pos               4                                                       /*!< USB GRSTCTL: RxFFlsh Position           */
#define USB_GRSTCTL_RxFFlsh_Msk               (0x01UL << USB_GRSTCTL_RxFFlsh_Pos)                     /*!< USB GRSTCTL: RxFFlsh Mask               */
#define USB_GRSTCTL_TxFFlsh_Pos               5                                                       /*!< USB GRSTCTL: TxFFlsh Position           */
#define USB_GRSTCTL_TxFFlsh_Msk               (0x01UL << USB_GRSTCTL_TxFFlsh_Pos)                     /*!< USB GRSTCTL: TxFFlsh Mask               */
#define USB_GRSTCTL_TxFNum_Pos                6                                                       /*!< USB GRSTCTL: TxFNum Position            */
#define USB_GRSTCTL_TxFNum_Msk                (0x1fUL << USB_GRSTCTL_TxFNum_Pos)                      /*!< USB GRSTCTL: TxFNum Mask                */
#define USB_GRSTCTL_DMAReq_Pos                30                                                      /*!< USB GRSTCTL: DMAReq Position            */
#define USB_GRSTCTL_DMAReq_Msk                (0x01UL << USB_GRSTCTL_DMAReq_Pos)                      /*!< USB GRSTCTL: DMAReq Mask                */
#define USB_GRSTCTL_AHBIdle_Pos               31                                                      /*!< USB GRSTCTL: AHBIdle Position           */
#define USB_GRSTCTL_AHBIdle_Msk               (0x01UL << USB_GRSTCTL_AHBIdle_Pos)                     /*!< USB GRSTCTL: AHBIdle Mask               */

/* ---------------------------------  USB_GINTSTS  -------------------------------- */
#define USB_GINTSTS_Sof_Pos                   3                                                       /*!< USB GINTSTS: Sof Position               */
#define USB_GINTSTS_Sof_Msk                   (0x01UL << USB_GINTSTS_Sof_Pos)                         /*!< USB GINTSTS: Sof Mask                   */
#define USB_GINTSTS_RxFLvl_Pos                4                                                       /*!< USB GINTSTS: RxFLvl Position            */
#define USB_GINTSTS_RxFLvl_Msk                (0x01UL << USB_GINTSTS_RxFLvl_Pos)                      /*!< USB GINTSTS: RxFLvl Mask                */
#define USB_GINTSTS_GINNakEff_Pos             6                                                       /*!< USB GINTSTS: GINNakEff Position         */
#define USB_GINTSTS_GINNakEff_Msk             (0x01UL << USB_GINTSTS_GINNakEff_Pos)                   /*!< USB GINTSTS: GINNakEff Mask             */
#define USB_GINTSTS_GOUTNakEff_Pos            7                                                       /*!< USB GINTSTS: GOUTNakEff Position        */
#define USB_GINTSTS_GOUTNakEff_Msk            (0x01UL << USB_GINTSTS_GOUTNakEff_Pos)                  /*!< USB GINTSTS: GOUTNakEff Mask            */
#define USB_GINTSTS_ErlySusp_Pos              10                                                      /*!< USB GINTSTS: ErlySusp Position          */
#define USB_GINTSTS_ErlySusp_Msk              (0x01UL << USB_GINTSTS_ErlySusp_Pos)                    /*!< USB GINTSTS: ErlySusp Mask              */
#define USB_GINTSTS_USBSusp_Pos               11                                                      /*!< USB GINTSTS: USBSusp Position           */
#define USB_GINTSTS_USBSusp_Msk               (0x01UL << USB_GINTSTS_USBSusp_Pos)                     /*!< USB GINTSTS: USBSusp Mask               */
#define USB_GINTSTS_USBRst_Pos                12                                                      /*!< USB GINTSTS: USBRst Position            */
#define USB_GINTSTS_USBRst_Msk                (0x01UL << USB_GINTSTS_USBRst_Pos)                      /*!< USB GINTSTS: USBRst Mask                */
#define USB_GINTSTS_EnumDone_Pos              13                                                      /*!< USB GINTSTS: EnumDone Position          */
#define USB_GINTSTS_EnumDone_Msk              (0x01UL << USB_GINTSTS_EnumDone_Pos)                    /*!< USB GINTSTS: EnumDone Mask              */
#define USB_GINTSTS_ISOOutDrop_Pos            14                                                      /*!< USB GINTSTS: ISOOutDrop Position        */
#define USB_GINTSTS_ISOOutDrop_Msk            (0x01UL << USB_GINTSTS_ISOOutDrop_Pos)                  /*!< USB GINTSTS: ISOOutDrop Mask            */
#define USB_GINTSTS_EOPF_Pos                  15                                                      /*!< USB GINTSTS: EOPF Position              */
#define USB_GINTSTS_EOPF_Msk                  (0x01UL << USB_GINTSTS_EOPF_Pos)                        /*!< USB GINTSTS: EOPF Mask                  */
#define USB_GINTSTS_RstrDoneInt_Pos           16                                                      /*!< USB GINTSTS: RstrDoneInt Position       */
#define USB_GINTSTS_RstrDoneInt_Msk           (0x01UL << USB_GINTSTS_RstrDoneInt_Pos)                 /*!< USB GINTSTS: RstrDoneInt Mask           */
#define USB_GINTSTS_EPMis_Pos                 17                                                      /*!< USB GINTSTS: EPMis Position             */
#define USB_GINTSTS_EPMis_Msk                 (0x01UL << USB_GINTSTS_EPMis_Pos)                       /*!< USB GINTSTS: EPMis Mask                 */
#define USB_GINTSTS_IEPInt_Pos                18                                                      /*!< USB GINTSTS: IEPInt Position            */
#define USB_GINTSTS_IEPInt_Msk                (0x01UL << USB_GINTSTS_IEPInt_Pos)                      /*!< USB GINTSTS: IEPInt Mask                */
#define USB_GINTSTS_OEPInt_Pos                19                                                      /*!< USB GINTSTS: OEPInt Position            */
#define USB_GINTSTS_OEPInt_Msk                (0x01UL << USB_GINTSTS_OEPInt_Pos)                      /*!< USB GINTSTS: OEPInt Mask                */
#define USB_GINTSTS_FetSusp_Pos               22                                                      /*!< USB GINTSTS: FetSusp Position           */
#define USB_GINTSTS_FetSusp_Msk               (0x01UL << USB_GINTSTS_FetSusp_Pos)                     /*!< USB GINTSTS: FetSusp Mask               */
#define USB_GINTSTS_ResetDet_Pos              23                                                      /*!< USB GINTSTS: ResetDet Position          */
#define USB_GINTSTS_ResetDet_Msk              (0x01UL << USB_GINTSTS_ResetDet_Pos)                    /*!< USB GINTSTS: ResetDet Mask              */
#define USB_GINTSTS_LPM_Int_Pos               27                                                      /*!< USB GINTSTS: LPM_Int Position           */
#define USB_GINTSTS_LPM_Int_Msk               (0x01UL << USB_GINTSTS_LPM_Int_Pos)                     /*!< USB GINTSTS: LPM_Int Mask               */
#define USB_GINTSTS_WkUpInt_Pos               31                                                      /*!< USB GINTSTS: WkUpInt Position           */
#define USB_GINTSTS_WkUpInt_Msk               (0x01UL << USB_GINTSTS_WkUpInt_Pos)                     /*!< USB GINTSTS: WkUpInt Mask               */

/* ---------------------------------  USB_GINTMSK  -------------------------------- */
#define USB_GINTMSK_OTGIntMsk_Pos             2                                                       /*!< USB GINTMSK: OTGIntMsk Position         */
#define USB_GINTMSK_OTGIntMsk_Msk             (0x01UL << USB_GINTMSK_OTGIntMsk_Pos)                   /*!< USB GINTMSK: OTGIntMsk Mask             */
#define USB_GINTMSK_SofMsk_Pos                3                                                       /*!< USB GINTMSK: SofMsk Position            */
#define USB_GINTMSK_SofMsk_Msk                (0x01UL << USB_GINTMSK_SofMsk_Pos)                      /*!< USB GINTMSK: SofMsk Mask                */
#define USB_GINTMSK_RxFLvlMsk_Pos             4                                                       /*!< USB GINTMSK: RxFLvlMsk Position         */
#define USB_GINTMSK_RxFLvlMsk_Msk             (0x01UL << USB_GINTMSK_RxFLvlMsk_Pos)                   /*!< USB GINTMSK: RxFLvlMsk Mask             */
#define USB_GINTMSK_GINNakEffMsk_Pos          6                                                       /*!< USB GINTMSK: GINNakEffMsk Position      */
#define USB_GINTMSK_GINNakEffMsk_Msk          (0x01UL << USB_GINTMSK_GINNakEffMsk_Pos)                /*!< USB GINTMSK: GINNakEffMsk Mask          */
#define USB_GINTMSK_GOUTNakEffMsk_Pos         7                                                       /*!< USB GINTMSK: GOUTNakEffMsk Position     */
#define USB_GINTMSK_GOUTNakEffMsk_Msk         (0x01UL << USB_GINTMSK_GOUTNakEffMsk_Pos)               /*!< USB GINTMSK: GOUTNakEffMsk Mask         */
#define USB_GINTMSK_ErlySuspMsk_Pos           10                                                      /*!< USB GINTMSK: ErlySuspMsk Position       */
#define USB_GINTMSK_ErlySuspMsk_Msk           (0x01UL << USB_GINTMSK_ErlySuspMsk_Pos)                 /*!< USB GINTMSK: ErlySuspMsk Mask           */
#define USB_GINTMSK_USBSuspMsk_Pos            11                                                      /*!< USB GINTMSK: USBSuspMsk Position        */
#define USB_GINTMSK_USBSuspMsk_Msk            (0x01UL << USB_GINTMSK_USBSuspMsk_Pos)                  /*!< USB GINTMSK: USBSuspMsk Mask            */
#define USB_GINTMSK_USBRstMsk_Pos             12                                                      /*!< USB GINTMSK: USBRstMsk Position         */
#define USB_GINTMSK_USBRstMsk_Msk             (0x01UL << USB_GINTMSK_USBRstMsk_Pos)                   /*!< USB GINTMSK: USBRstMsk Mask             */
#define USB_GINTMSK_EnumDoneMsk_Pos           13                                                      /*!< USB GINTMSK: EnumDoneMsk Position       */
#define USB_GINTMSK_EnumDoneMsk_Msk           (0x01UL << USB_GINTMSK_EnumDoneMsk_Pos)                 /*!< USB GINTMSK: EnumDoneMsk Mask           */
#define USB_GINTMSK_ISOOutDropMsk_Pos         14                                                      /*!< USB GINTMSK: ISOOutDropMsk Position     */
#define USB_GINTMSK_ISOOutDropMsk_Msk         (0x01UL << USB_GINTMSK_ISOOutDropMsk_Pos)               /*!< USB GINTMSK: ISOOutDropMsk Mask         */
#define USB_GINTMSK_EOPFMsk_Pos               15                                                      /*!< USB GINTMSK: EOPFMsk Position           */
#define USB_GINTMSK_EOPFMsk_Msk               (0x01UL << USB_GINTMSK_EOPFMsk_Pos)                     /*!< USB GINTMSK: EOPFMsk Mask               */
#define USB_GINTMSK_RstrDoneIntMsk_Pos        16                                                      /*!< USB GINTMSK: RstrDoneIntMsk Position    */
#define USB_GINTMSK_RstrDoneIntMsk_Msk        (0x01UL << USB_GINTMSK_RstrDoneIntMsk_Pos)              /*!< USB GINTMSK: RstrDoneIntMsk Mask        */
#define USB_GINTMSK_EPMisMsk_Pos              17                                                      /*!< USB GINTMSK: EPMisMsk Position          */
#define USB_GINTMSK_EPMisMsk_Msk              (0x01UL << USB_GINTMSK_EPMisMsk_Pos)                    /*!< USB GINTMSK: EPMisMsk Mask              */
#define USB_GINTMSK_IEPIntMsk_Pos             18                                                      /*!< USB GINTMSK: IEPIntMsk Position         */
#define USB_GINTMSK_IEPIntMsk_Msk             (0x01UL << USB_GINTMSK_IEPIntMsk_Pos)                   /*!< USB GINTMSK: IEPIntMsk Mask             */
#define USB_GINTMSK_OEPIntMsk_Pos             19                                                      /*!< USB GINTMSK: OEPIntMsk Position         */
#define USB_GINTMSK_OEPIntMsk_Msk             (0x01UL << USB_GINTMSK_OEPIntMsk_Pos)                   /*!< USB GINTMSK: OEPIntMsk Mask             */
#define USB_GINTMSK_FetSuspMsk_Pos            22                                                      /*!< USB GINTMSK: FetSuspMsk Position        */
#define USB_GINTMSK_FetSuspMsk_Msk            (0x01UL << USB_GINTMSK_FetSuspMsk_Pos)                  /*!< USB GINTMSK: FetSuspMsk Mask            */
#define USB_GINTMSK_LPM_IntMsk_Pos            27                                                      /*!< USB GINTMSK: LPM_IntMsk Position        */
#define USB_GINTMSK_LPM_IntMsk_Msk            (0x01UL << USB_GINTMSK_LPM_IntMsk_Pos)                  /*!< USB GINTMSK: LPM_IntMsk Mask            */
#define USB_GINTMSK_WkUpIntMsk_Pos            31                                                      /*!< USB GINTMSK: WkUpIntMsk Position        */
#define USB_GINTMSK_WkUpIntMsk_Msk            (0x01UL << USB_GINTMSK_WkUpIntMsk_Pos)                  /*!< USB GINTMSK: WkUpIntMsk Mask            */

/* ---------------------------------  USB_GRXSTSR  -------------------------------- */
#define USB_GRXSTSR_EPNum_Pos                 0                                                       /*!< USB GRXSTSR: EPNum Position             */
#define USB_GRXSTSR_EPNum_Msk                 (0x0fUL << USB_GRXSTSR_EPNum_Pos)                       /*!< USB GRXSTSR: EPNum Mask                 */
#define USB_GRXSTSR_BCnt_Pos                  4                                                       /*!< USB GRXSTSR: BCnt Position              */
#define USB_GRXSTSR_BCnt_Msk                  (0x000007ffUL << USB_GRXSTSR_BCnt_Pos)                  /*!< USB GRXSTSR: BCnt Mask                  */
#define USB_GRXSTSR_DPID_Pos                  15                                                      /*!< USB GRXSTSR: DPID Position              */
#define USB_GRXSTSR_DPID_Msk                  (0x03UL << USB_GRXSTSR_DPID_Pos)                        /*!< USB GRXSTSR: DPID Mask                  */
#define USB_GRXSTSR_PktSts_Pos                17                                                      /*!< USB GRXSTSR: PktSts Position            */
#define USB_GRXSTSR_PktSts_Msk                (0x0fUL << USB_GRXSTSR_PktSts_Pos)                      /*!< USB GRXSTSR: PktSts Mask                */
#define USB_GRXSTSR_FN_Pos                    21                                                      /*!< USB GRXSTSR: FN Position                */
#define USB_GRXSTSR_FN_Msk                    (0x0fUL << USB_GRXSTSR_FN_Pos)                          /*!< USB GRXSTSR: FN Mask                    */

/* ---------------------------------  USB_GRXSTSP  -------------------------------- */
#define USB_GRXSTSP_EPNum_Pos                 0                                                       /*!< USB GRXSTSP: EPNum Position             */
#define USB_GRXSTSP_EPNum_Msk                 (0x0fUL << USB_GRXSTSP_EPNum_Pos)                       /*!< USB GRXSTSP: EPNum Mask                 */
#define USB_GRXSTSP_BCnt_Pos                  4                                                       /*!< USB GRXSTSP: BCnt Position              */
#define USB_GRXSTSP_BCnt_Msk                  (0x000007ffUL << USB_GRXSTSP_BCnt_Pos)                  /*!< USB GRXSTSP: BCnt Mask                  */
#define USB_GRXSTSP_DPID_Pos                  15                                                      /*!< USB GRXSTSP: DPID Position              */
#define USB_GRXSTSP_DPID_Msk                  (0x03UL << USB_GRXSTSP_DPID_Pos)                        /*!< USB GRXSTSP: DPID Mask                  */
#define USB_GRXSTSP_PktSts_Pos                17                                                      /*!< USB GRXSTSP: PktSts Position            */
#define USB_GRXSTSP_PktSts_Msk                (0x0fUL << USB_GRXSTSP_PktSts_Pos)                      /*!< USB GRXSTSP: PktSts Mask                */
#define USB_GRXSTSP_FN_Pos                    21                                                      /*!< USB GRXSTSP: FN Position                */
#define USB_GRXSTSP_FN_Msk                    (0x0fUL << USB_GRXSTSP_FN_Pos)                          /*!< USB GRXSTSP: FN Mask                    */

/* ---------------------------------  USB_GRXFSIZ  -------------------------------- */
#define USB_GRXFSIZ_RxFDep_Pos                0                                                       /*!< USB GRXFSIZ: RxFDep Position            */
#define USB_GRXFSIZ_RxFDep_Msk                (0x000007ffUL << USB_GRXFSIZ_RxFDep_Pos)                /*!< USB GRXFSIZ: RxFDep Mask                */

/* --------------------------------  USB_GNPTXFSIZ  ------------------------------- */
#define USB_GNPTXFSIZ_INEPTxF0StAddr_Pos      0                                                       /*!< USB GNPTXFSIZ: INEPTxF0StAddr Position  */
#define USB_GNPTXFSIZ_INEPTxF0StAddr_Msk      (0x0000ffffUL << USB_GNPTXFSIZ_INEPTxF0StAddr_Pos)      /*!< USB GNPTXFSIZ: INEPTxF0StAddr Mask      */
#define USB_GNPTXFSIZ_INEPTxF0Dep_Pos         16                                                      /*!< USB GNPTXFSIZ: INEPTxF0Dep Position     */
#define USB_GNPTXFSIZ_INEPTxF0Dep_Msk         (0x0000ffffUL << USB_GNPTXFSIZ_INEPTxF0Dep_Pos)         /*!< USB GNPTXFSIZ: INEPTxF0Dep Mask         */

/* ---------------------------------  USB_GSNPSID  -------------------------------- */
#define USB_GSNPSID_SynopsysID_Pos            0                                                       /*!< USB GSNPSID: SynopsysID Position        */
#define USB_GSNPSID_SynopsysID_Msk            (0xffffffffUL << USB_GSNPSID_SynopsysID_Pos)            /*!< USB GSNPSID: SynopsysID Mask            */

/* ---------------------------------  USB_GHWCFG1  -------------------------------- */
#define USB_GHWCFG1_EpDir_Pos                 0                                                       /*!< USB GHWCFG1: EpDir Position             */
#define USB_GHWCFG1_EpDir_Msk                 (0xffffffffUL << USB_GHWCFG1_EpDir_Pos)                 /*!< USB GHWCFG1: EpDir Mask                 */

/* ---------------------------------  USB_GHWCFG2  -------------------------------- */
#define USB_GHWCFG2_FSPhyType_Pos             8                                                       /*!< USB GHWCFG2: FSPhyType Position         */
#define USB_GHWCFG2_FSPhyType_Msk             (0x03UL << USB_GHWCFG2_FSPhyType_Pos)                   /*!< USB GHWCFG2: FSPhyType Mask             */
#define USB_GHWCFG2_NumDevEps_Pos             10                                                      /*!< USB GHWCFG2: NumDevEps Position         */
#define USB_GHWCFG2_NumDevEps_Msk             (0x0fUL << USB_GHWCFG2_NumDevEps_Pos)                   /*!< USB GHWCFG2: NumDevEps Mask             */
#define USB_GHWCFG2_DynFifoSizing_Pos         19                                                      /*!< USB GHWCFG2: DynFifoSizing Position     */
#define USB_GHWCFG2_DynFifoSizing_Msk         (0x01UL << USB_GHWCFG2_DynFifoSizing_Pos)               /*!< USB GHWCFG2: DynFifoSizing Mask         */

/* ---------------------------------  USB_GHWCFG3  -------------------------------- */
#define USB_GHWCFG3_XferSizeWidth_Pos         0                                                       /*!< USB GHWCFG3: XferSizeWidth Position     */
#define USB_GHWCFG3_XferSizeWidth_Msk         (0x0fUL << USB_GHWCFG3_XferSizeWidth_Pos)               /*!< USB GHWCFG3: XferSizeWidth Mask         */
#define USB_GHWCFG3_PktSizeWidth_Pos          4                                                       /*!< USB GHWCFG3: PktSizeWidth Position      */
#define USB_GHWCFG3_PktSizeWidth_Msk          (0x07UL << USB_GHWCFG3_PktSizeWidth_Pos)                /*!< USB GHWCFG3: PktSizeWidth Mask          */
#define USB_GHWCFG3_RstType_Pos               11                                                      /*!< USB GHWCFG3: RstType Position           */
#define USB_GHWCFG3_RstType_Msk               (0x01UL << USB_GHWCFG3_RstType_Pos)                     /*!< USB GHWCFG3: RstType Mask               */
#define USB_GHWCFG3_BCSupport_Pos             14                                                      /*!< USB GHWCFG3: BCSupport Position         */
#define USB_GHWCFG3_BCSupport_Msk             (0x01UL << USB_GHWCFG3_BCSupport_Pos)                   /*!< USB GHWCFG3: BCSupport Mask             */
#define USB_GHWCFG3_LPMMode_Pos               15                                                      /*!< USB GHWCFG3: LPMMode Position           */
#define USB_GHWCFG3_LPMMode_Msk               (0x01UL << USB_GHWCFG3_LPMMode_Pos)                     /*!< USB GHWCFG3: LPMMode Mask               */
#define USB_GHWCFG3_DfifoDepth_Pos            16                                                      /*!< USB GHWCFG3: DfifoDepth Position        */
#define USB_GHWCFG3_DfifoDepth_Msk            (0x0000ffffUL << USB_GHWCFG3_DfifoDepth_Pos)            /*!< USB GHWCFG3: DfifoDepth Mask            */

/* ---------------------------------  USB_GHWCFG4  -------------------------------- */
#define USB_GHWCFG4_NumDevPerioEps_Pos        0                                                       /*!< USB GHWCFG4: NumDevPerioEps Position    */
#define USB_GHWCFG4_NumDevPerioEps_Msk        (0x0fUL << USB_GHWCFG4_NumDevPerioEps_Pos)              /*!< USB GHWCFG4: NumDevPerioEps Mask        */
#define USB_GHWCFG4_PartialPwrDn_Pos          4                                                       /*!< USB GHWCFG4: PartialPwrDn Position      */
#define USB_GHWCFG4_PartialPwrDn_Msk          (0x01UL << USB_GHWCFG4_PartialPwrDn_Pos)                /*!< USB GHWCFG4: PartialPwrDn Mask          */
#define USB_GHWCFG4_AhbFreq_Pos               5                                                       /*!< USB GHWCFG4: AhbFreq Position           */
#define USB_GHWCFG4_AhbFreq_Msk               (0x01UL << USB_GHWCFG4_AhbFreq_Pos)                     /*!< USB GHWCFG4: AhbFreq Mask               */
#define USB_GHWCFG4_Hibernation_Pos           6                                                       /*!< USB GHWCFG4: Hibernation Position       */
#define USB_GHWCFG4_Hibernation_Msk           (0x01UL << USB_GHWCFG4_Hibernation_Pos)                 /*!< USB GHWCFG4: Hibernation Mask           */
#define USB_GHWCFG4_NumCtlEps_Pos             16                                                      /*!< USB GHWCFG4: NumCtlEps Position         */
#define USB_GHWCFG4_NumCtlEps_Msk             (0x0fUL << USB_GHWCFG4_NumCtlEps_Pos)                   /*!< USB GHWCFG4: NumCtlEps Mask             */
#define USB_GHWCFG4_INEps_Pos                 26                                                      /*!< USB GHWCFG4: INEps Position             */
#define USB_GHWCFG4_INEps_Msk                 (0x0fUL << USB_GHWCFG4_INEps_Pos)                       /*!< USB GHWCFG4: INEps Mask                 */
#define USB_GHWCFG4_DescDMAEnable_Pos         30                                                      /*!< USB GHWCFG4: DescDMAEnable Position     */
#define USB_GHWCFG4_DescDMAEnable_Msk         (0x01UL << USB_GHWCFG4_DescDMAEnable_Pos)               /*!< USB GHWCFG4: DescDMAEnable Mask         */
#define USB_GHWCFG4_DescDMA_Pos               31                                                      /*!< USB GHWCFG4: DescDMA Position           */
#define USB_GHWCFG4_DescDMA_Msk               (0x01UL << USB_GHWCFG4_DescDMA_Pos)                     /*!< USB GHWCFG4: DescDMA Mask               */

/* ---------------------------------  USB_GLPMCFG  -------------------------------- */
#define USB_GLPMCFG_LPMCap_Pos                0                                                       /*!< USB GLPMCFG: LPMCap Position            */
#define USB_GLPMCFG_LPMCap_Msk                (0x01UL << USB_GLPMCFG_LPMCap_Pos)                      /*!< USB GLPMCFG: LPMCap Mask                */
#define USB_GLPMCFG_AppL1Res_Pos              1                                                       /*!< USB GLPMCFG: AppL1Res Position          */
#define USB_GLPMCFG_AppL1Res_Msk              (0x01UL << USB_GLPMCFG_AppL1Res_Pos)                    /*!< USB GLPMCFG: AppL1Res Mask              */
#define USB_GLPMCFG_HIRD_Pos                  2                                                       /*!< USB GLPMCFG: HIRD Position              */
#define USB_GLPMCFG_HIRD_Msk                  (0x0fUL << USB_GLPMCFG_HIRD_Pos)                        /*!< USB GLPMCFG: HIRD Mask                  */
#define USB_GLPMCFG_bRemoteWake_Pos           6                                                       /*!< USB GLPMCFG: bRemoteWake Position       */
#define USB_GLPMCFG_bRemoteWake_Msk           (0x01UL << USB_GLPMCFG_bRemoteWake_Pos)                 /*!< USB GLPMCFG: bRemoteWake Mask           */
#define USB_GLPMCFG_EnblSlpM_Pos              7                                                       /*!< USB GLPMCFG: EnblSlpM Position          */
#define USB_GLPMCFG_EnblSlpM_Msk              (0x01UL << USB_GLPMCFG_EnblSlpM_Pos)                    /*!< USB GLPMCFG: EnblSlpM Mask              */
#define USB_GLPMCFG_HIRD_Thres_Pos            8                                                       /*!< USB GLPMCFG: HIRD_Thres Position        */
#define USB_GLPMCFG_HIRD_Thres_Msk            (0x1fUL << USB_GLPMCFG_HIRD_Thres_Pos)                  /*!< USB GLPMCFG: HIRD_Thres Mask            */
#define USB_GLPMCFG_CoreL1Res_Pos             13                                                      /*!< USB GLPMCFG: CoreL1Res Position         */
#define USB_GLPMCFG_CoreL1Res_Msk             (0x03UL << USB_GLPMCFG_CoreL1Res_Pos)                   /*!< USB GLPMCFG: CoreL1Res Mask             */
#define USB_GLPMCFG_SlpSts_Pos                15                                                      /*!< USB GLPMCFG: SlpSts Position            */
#define USB_GLPMCFG_SlpSts_Msk                (0x01UL << USB_GLPMCFG_SlpSts_Pos)                      /*!< USB GLPMCFG: SlpSts Mask                */
#define USB_GLPMCFG_L1ResumeOK_Pos            16                                                      /*!< USB GLPMCFG: L1ResumeOK Position        */
#define USB_GLPMCFG_L1ResumeOK_Msk            (0x01UL << USB_GLPMCFG_L1ResumeOK_Pos)                  /*!< USB GLPMCFG: L1ResumeOK Mask            */
#define USB_GLPMCFG_LPM_Retry_Cnt_Pos         21                                                      /*!< USB GLPMCFG: LPM_Retry_Cnt Position     */
#define USB_GLPMCFG_LPM_Retry_Cnt_Msk         (0x07UL << USB_GLPMCFG_LPM_Retry_Cnt_Pos)               /*!< USB GLPMCFG: LPM_Retry_Cnt Mask         */
#define USB_GLPMCFG_LPM_RetryCnt_Sts_Pos      25                                                      /*!< USB GLPMCFG: LPM_RetryCnt_Sts Position  */
#define USB_GLPMCFG_LPM_RetryCnt_Sts_Msk      (0x07UL << USB_GLPMCFG_LPM_RetryCnt_Sts_Pos)            /*!< USB GLPMCFG: LPM_RetryCnt_Sts Mask      */
#define USB_GLPMCFG_LPM_EnBESL_Pos            28                                                      /*!< USB GLPMCFG: LPM_EnBESL Position        */
#define USB_GLPMCFG_LPM_EnBESL_Msk            (0x01UL << USB_GLPMCFG_LPM_EnBESL_Pos)                  /*!< USB GLPMCFG: LPM_EnBESL Mask            */
#define USB_GLPMCFG_RestoreSlpSts_Pos         29                                                      /*!< USB GLPMCFG: RestoreSlpSts Position     */
#define USB_GLPMCFG_RestoreSlpSts_Msk         (0x01UL << USB_GLPMCFG_RestoreSlpSts_Pos)               /*!< USB GLPMCFG: RestoreSlpSts Mask         */

/* ---------------------------------  USB_GPWRDN  --------------------------------- */
#define USB_GPWRDN_PMUIntSel_Pos              0                                                       /*!< USB GPWRDN: PMUIntSel Position          */
#define USB_GPWRDN_PMUIntSel_Msk              (0x01UL << USB_GPWRDN_PMUIntSel_Pos)                    /*!< USB GPWRDN: PMUIntSel Mask              */
#define USB_GPWRDN_PMUActv_Pos                1                                                       /*!< USB GPWRDN: PMUActv Position            */
#define USB_GPWRDN_PMUActv_Msk                (0x01UL << USB_GPWRDN_PMUActv_Pos)                      /*!< USB GPWRDN: PMUActv Mask                */
#define USB_GPWRDN_Restore_Pos                2                                                       /*!< USB GPWRDN: Restore Position            */
#define USB_GPWRDN_Restore_Msk                (0x01UL << USB_GPWRDN_Restore_Pos)                      /*!< USB GPWRDN: Restore Mask                */
#define USB_GPWRDN_PwrDnClmp_Pos              3                                                       /*!< USB GPWRDN: PwrDnClmp Position          */
#define USB_GPWRDN_PwrDnClmp_Msk              (0x01UL << USB_GPWRDN_PwrDnClmp_Pos)                    /*!< USB GPWRDN: PwrDnClmp Mask              */
#define USB_GPWRDN_PwrDnRst_n_Pos             4                                                       /*!< USB GPWRDN: PwrDnRst_n Position         */
#define USB_GPWRDN_PwrDnRst_n_Msk             (0x01UL << USB_GPWRDN_PwrDnRst_n_Pos)                   /*!< USB GPWRDN: PwrDnRst_n Mask             */
#define USB_GPWRDN_PwrDnSwtch_Pos             5                                                       /*!< USB GPWRDN: PwrDnSwtch Position         */
#define USB_GPWRDN_PwrDnSwtch_Msk             (0x01UL << USB_GPWRDN_PwrDnSwtch_Pos)                   /*!< USB GPWRDN: PwrDnSwtch Mask             */
#define USB_GPWRDN_LnStsChng_Pos              7                                                       /*!< USB GPWRDN: LnStsChng Position          */
#define USB_GPWRDN_LnStsChng_Msk              (0x01UL << USB_GPWRDN_LnStsChng_Pos)                    /*!< USB GPWRDN: LnStsChng Mask              */
#define USB_GPWRDN_LineStageChangeMsk_Pos     8                                                       /*!< USB GPWRDN: LineStageChangeMsk Position */
#define USB_GPWRDN_LineStageChangeMsk_Msk     (0x01UL << USB_GPWRDN_LineStageChangeMsk_Pos)           /*!< USB GPWRDN: LineStageChangeMsk Mask     */
#define USB_GPWRDN_ResetDetected_Pos          9                                                       /*!< USB GPWRDN: ResetDetected Position      */
#define USB_GPWRDN_ResetDetected_Msk          (0x01UL << USB_GPWRDN_ResetDetected_Pos)                /*!< USB GPWRDN: ResetDetected Mask          */
#define USB_GPWRDN_ResetDetMsk_Pos            10                                                      /*!< USB GPWRDN: ResetDetMsk Position        */
#define USB_GPWRDN_ResetDetMsk_Msk            (0x01UL << USB_GPWRDN_ResetDetMsk_Pos)                  /*!< USB GPWRDN: ResetDetMsk Mask            */
#define USB_GPWRDN_DisconnectDetect_Pos       11                                                      /*!< USB GPWRDN: DisconnectDetect Position   */
#define USB_GPWRDN_DisconnectDetect_Msk       (0x01UL << USB_GPWRDN_DisconnectDetect_Pos)             /*!< USB GPWRDN: DisconnectDetect Mask       */
#define USB_GPWRDN_DisconnectDetectMsk_Pos    12                                                      /*!< USB GPWRDN: DisconnectDetectMsk Position */
#define USB_GPWRDN_DisconnectDetectMsk_Msk    (0x01UL << USB_GPWRDN_DisconnectDetectMsk_Pos)          /*!< USB GPWRDN: DisconnectDetectMsk Mask    */
#define USB_GPWRDN_ConnectDet_Pos             13                                                      /*!< USB GPWRDN: ConnectDet Position         */
#define USB_GPWRDN_ConnectDet_Msk             (0x01UL << USB_GPWRDN_ConnectDet_Pos)                   /*!< USB GPWRDN: ConnectDet Mask             */
#define USB_GPWRDN_ConnDetMsk_Pos             14                                                      /*!< USB GPWRDN: ConnDetMsk Position         */
#define USB_GPWRDN_ConnDetMsk_Msk             (0x01UL << USB_GPWRDN_ConnDetMsk_Pos)                   /*!< USB GPWRDN: ConnDetMsk Mask             */
#define USB_GPWRDN_StsChngInt_Pos             17                                                      /*!< USB GPWRDN: StsChngInt Position         */
#define USB_GPWRDN_StsChngInt_Msk             (0x01UL << USB_GPWRDN_StsChngInt_Pos)                   /*!< USB GPWRDN: StsChngInt Mask             */
#define USB_GPWRDN_StsChngIntMsk_Pos          18                                                      /*!< USB GPWRDN: StsChngIntMsk Position      */
#define USB_GPWRDN_StsChngIntMsk_Msk          (0x01UL << USB_GPWRDN_StsChngIntMsk_Pos)                /*!< USB GPWRDN: StsChngIntMsk Mask          */
#define USB_GPWRDN_LineState_Pos              19                                                      /*!< USB GPWRDN: LineState Position          */
#define USB_GPWRDN_LineState_Msk              (0x03UL << USB_GPWRDN_LineState_Pos)                    /*!< USB GPWRDN: LineState Mask              */
#define USB_GPWRDN_BsessVld_Pos               22                                                      /*!< USB GPWRDN: BsessVld Position           */
#define USB_GPWRDN_BsessVld_Msk               (0x01UL << USB_GPWRDN_BsessVld_Pos)                     /*!< USB GPWRDN: BsessVld Mask               */
#define USB_GPWRDN_MultValIdBC_Pos            24                                                      /*!< USB GPWRDN: MultValIdBC Position        */
#define USB_GPWRDN_MultValIdBC_Msk            (0x1fUL << USB_GPWRDN_MultValIdBC_Pos)                  /*!< USB GPWRDN: MultValIdBC Mask            */

/* --------------------------------  USB_GDFIFOCFG  ------------------------------- */
#define USB_GDFIFOCFG_GDFIFOCfg_Pos           0                                                       /*!< USB GDFIFOCFG: GDFIFOCfg Position       */
#define USB_GDFIFOCFG_GDFIFOCfg_Msk           (0x0000ffffUL << USB_GDFIFOCFG_GDFIFOCfg_Pos)           /*!< USB GDFIFOCFG: GDFIFOCfg Mask           */
#define USB_GDFIFOCFG_EPInfoBaseAddr_Pos      16                                                      /*!< USB GDFIFOCFG: EPInfoBaseAddr Position  */
#define USB_GDFIFOCFG_EPInfoBaseAddr_Msk      (0x0000ffffUL << USB_GDFIFOCFG_EPInfoBaseAddr_Pos)      /*!< USB GDFIFOCFG: EPInfoBaseAddr Mask      */

/* --------------------------------  USB_DIEPTXF1  -------------------------------- */
#define USB_DIEPTXF1_INEPnTxFStAddr_Pos       0                                                       /*!< USB DIEPTXF1: INEPnTxFStAddr Position   */
#define USB_DIEPTXF1_INEPnTxFStAddr_Msk       (0x0000ffffUL << USB_DIEPTXF1_INEPnTxFStAddr_Pos)       /*!< USB DIEPTXF1: INEPnTxFStAddr Mask       */
#define USB_DIEPTXF1_INEPnTxFDep_Pos          16                                                      /*!< USB DIEPTXF1: INEPnTxFDep Position      */
#define USB_DIEPTXF1_INEPnTxFDep_Msk          (0x00000fffUL << USB_DIEPTXF1_INEPnTxFDep_Pos)          /*!< USB DIEPTXF1: INEPnTxFDep Mask          */

/* --------------------------------  USB_DIEPTXF2  -------------------------------- */
#define USB_DIEPTXF2_INEPnTxFStAddr_Pos       0                                                       /*!< USB DIEPTXF2: INEPnTxFStAddr Position   */
#define USB_DIEPTXF2_INEPnTxFStAddr_Msk       (0x0000ffffUL << USB_DIEPTXF2_INEPnTxFStAddr_Pos)       /*!< USB DIEPTXF2: INEPnTxFStAddr Mask       */
#define USB_DIEPTXF2_INEPnTxFDep_Pos          16                                                      /*!< USB DIEPTXF2: INEPnTxFDep Position      */
#define USB_DIEPTXF2_INEPnTxFDep_Msk          (0x00000fffUL << USB_DIEPTXF2_INEPnTxFDep_Pos)          /*!< USB DIEPTXF2: INEPnTxFDep Mask          */

/* --------------------------------  USB_DIEPTXF3  -------------------------------- */
#define USB_DIEPTXF3_INEPnTxFStAddr_Pos       0                                                       /*!< USB DIEPTXF3: INEPnTxFStAddr Position   */
#define USB_DIEPTXF3_INEPnTxFStAddr_Msk       (0x0000ffffUL << USB_DIEPTXF3_INEPnTxFStAddr_Pos)       /*!< USB DIEPTXF3: INEPnTxFStAddr Mask       */
#define USB_DIEPTXF3_INEPnTxFDep_Pos          16                                                      /*!< USB DIEPTXF3: INEPnTxFDep Position      */
#define USB_DIEPTXF3_INEPnTxFDep_Msk          (0x00000fffUL << USB_DIEPTXF3_INEPnTxFDep_Pos)          /*!< USB DIEPTXF3: INEPnTxFDep Mask          */

/* --------------------------------  USB_DIEPTXF4  -------------------------------- */
#define USB_DIEPTXF4_INEPnTxFStAddr_Pos       0                                                       /*!< USB DIEPTXF4: INEPnTxFStAddr Position   */
#define USB_DIEPTXF4_INEPnTxFStAddr_Msk       (0x0000ffffUL << USB_DIEPTXF4_INEPnTxFStAddr_Pos)       /*!< USB DIEPTXF4: INEPnTxFStAddr Mask       */
#define USB_DIEPTXF4_INEPnTxFDep_Pos          16                                                      /*!< USB DIEPTXF4: INEPnTxFDep Position      */
#define USB_DIEPTXF4_INEPnTxFDep_Msk          (0x00000fffUL << USB_DIEPTXF4_INEPnTxFDep_Pos)          /*!< USB DIEPTXF4: INEPnTxFDep Mask          */

/* ----------------------------------  USB_DCFG  ---------------------------------- */
#define USB_DCFG_DevSpd_Pos                   0                                                       /*!< USB DCFG: DevSpd Position               */
#define USB_DCFG_DevSpd_Msk                   (0x03UL << USB_DCFG_DevSpd_Pos)                         /*!< USB DCFG: DevSpd Mask                   */
#define USB_DCFG_NZStsOUTHShk_Pos             2                                                       /*!< USB DCFG: NZStsOUTHShk Position         */
#define USB_DCFG_NZStsOUTHShk_Msk             (0x01UL << USB_DCFG_NZStsOUTHShk_Pos)                   /*!< USB DCFG: NZStsOUTHShk Mask             */
#define USB_DCFG_Ena32KhzSusp_Pos             3                                                       /*!< USB DCFG: Ena32KhzSusp Position         */
#define USB_DCFG_Ena32KhzSusp_Msk             (0x01UL << USB_DCFG_Ena32KhzSusp_Pos)                   /*!< USB DCFG: Ena32KhzSusp Mask             */
#define USB_DCFG_DevAddr_Pos                  4                                                       /*!< USB DCFG: DevAddr Position              */
#define USB_DCFG_DevAddr_Msk                  (0x7fUL << USB_DCFG_DevAddr_Pos)                        /*!< USB DCFG: DevAddr Mask                  */
#define USB_DCFG_PerFrInt_Pos                 11                                                      /*!< USB DCFG: PerFrInt Position             */
#define USB_DCFG_PerFrInt_Msk                 (0x03UL << USB_DCFG_PerFrInt_Pos)                       /*!< USB DCFG: PerFrInt Mask                 */
#define USB_DCFG_EnDevOutNak_Pos              13                                                      /*!< USB DCFG: EnDevOutNak Position          */
#define USB_DCFG_EnDevOutNak_Msk              (0x01UL << USB_DCFG_EnDevOutNak_Pos)                    /*!< USB DCFG: EnDevOutNak Mask              */
#define USB_DCFG_ErraticIntMsk_Pos            15                                                      /*!< USB DCFG: ErraticIntMsk Position        */
#define USB_DCFG_ErraticIntMsk_Msk            (0x01UL << USB_DCFG_ErraticIntMsk_Pos)                  /*!< USB DCFG: ErraticIntMsk Mask            */
#define USB_DCFG_DescDMA_Pos                  23                                                      /*!< USB DCFG: DescDMA Position              */
#define USB_DCFG_DescDMA_Msk                  (0x01UL << USB_DCFG_DescDMA_Pos)                        /*!< USB DCFG: DescDMA Mask                  */
#define USB_DCFG_PerSchIntvl_Pos              24                                                      /*!< USB DCFG: PerSchIntvl Position          */
#define USB_DCFG_PerSchIntvl_Msk              (0x03UL << USB_DCFG_PerSchIntvl_Pos)                    /*!< USB DCFG: PerSchIntvl Mask              */
#define USB_DCFG_ResValid_Pos                 26                                                      /*!< USB DCFG: ResValid Position             */
#define USB_DCFG_ResValid_Msk                 (0x3fUL << USB_DCFG_ResValid_Pos)                       /*!< USB DCFG: ResValid Mask                 */

/* ----------------------------------  USB_DCTL  ---------------------------------- */
#define USB_DCTL_RmtWkUpSig_Pos               0                                                       /*!< USB DCTL: RmtWkUpSig Position           */
#define USB_DCTL_RmtWkUpSig_Msk               (0x01UL << USB_DCTL_RmtWkUpSig_Pos)                     /*!< USB DCTL: RmtWkUpSig Mask               */
#define USB_DCTL_SftDiscon_Pos                1                                                       /*!< USB DCTL: SftDiscon Position            */
#define USB_DCTL_SftDiscon_Msk                (0x01UL << USB_DCTL_SftDiscon_Pos)                      /*!< USB DCTL: SftDiscon Mask                */
#define USB_DCTL_GNPINNakSts_Pos              2                                                       /*!< USB DCTL: GNPINNakSts Position          */
#define USB_DCTL_GNPINNakSts_Msk              (0x01UL << USB_DCTL_GNPINNakSts_Pos)                    /*!< USB DCTL: GNPINNakSts Mask              */
#define USB_DCTL_GOUTNakSts_Pos               3                                                       /*!< USB DCTL: GOUTNakSts Position           */
#define USB_DCTL_GOUTNakSts_Msk               (0x01UL << USB_DCTL_GOUTNakSts_Pos)                     /*!< USB DCTL: GOUTNakSts Mask               */
#define USB_DCTL_TstCtl_Pos                   4                                                       /*!< USB DCTL: TstCtl Position               */
#define USB_DCTL_TstCtl_Msk                   (0x07UL << USB_DCTL_TstCtl_Pos)                         /*!< USB DCTL: TstCtl Mask                   */
#define USB_DCTL_SGNPInNak_Pos                7                                                       /*!< USB DCTL: SGNPInNak Position            */
#define USB_DCTL_SGNPInNak_Msk                (0x01UL << USB_DCTL_SGNPInNak_Pos)                      /*!< USB DCTL: SGNPInNak Mask                */
#define USB_DCTL_CGNPInNak_Pos                8                                                       /*!< USB DCTL: CGNPInNak Position            */
#define USB_DCTL_CGNPInNak_Msk                (0x01UL << USB_DCTL_CGNPInNak_Pos)                      /*!< USB DCTL: CGNPInNak Mask                */
#define USB_DCTL_SGOUTNak_Pos                 9                                                       /*!< USB DCTL: SGOUTNak Position             */
#define USB_DCTL_SGOUTNak_Msk                 (0x01UL << USB_DCTL_SGOUTNak_Pos)                       /*!< USB DCTL: SGOUTNak Mask                 */
#define USB_DCTL_CGOUTNak_Pos                 10                                                      /*!< USB DCTL: CGOUTNak Position             */
#define USB_DCTL_CGOUTNak_Msk                 (0x01UL << USB_DCTL_CGOUTNak_Pos)                       /*!< USB DCTL: CGOUTNak Mask                 */
#define USB_DCTL_PWROnPrgDone_Pos             11                                                      /*!< USB DCTL: PWROnPrgDone Position         */
#define USB_DCTL_PWROnPrgDone_Msk             (0x01UL << USB_DCTL_PWROnPrgDone_Pos)                   /*!< USB DCTL: PWROnPrgDone Mask             */
#define USB_DCTL_GMC_Pos                      13                                                      /*!< USB DCTL: GMC Position                  */
#define USB_DCTL_GMC_Msk                      (0x03UL << USB_DCTL_GMC_Pos)                            /*!< USB DCTL: GMC Mask                      */
#define USB_DCTL_IgnrFrmNum_Pos               15                                                      /*!< USB DCTL: IgnrFrmNum Position           */
#define USB_DCTL_IgnrFrmNum_Msk               (0x01UL << USB_DCTL_IgnrFrmNum_Pos)                     /*!< USB DCTL: IgnrFrmNum Mask               */
#define USB_DCTL_NakOnBble_Pos                16                                                      /*!< USB DCTL: NakOnBble Position            */
#define USB_DCTL_NakOnBble_Msk                (0x01UL << USB_DCTL_NakOnBble_Pos)                      /*!< USB DCTL: NakOnBble Mask                */
#define USB_DCTL_EnContOnBNA_Pos              17                                                      /*!< USB DCTL: EnContOnBNA Position          */
#define USB_DCTL_EnContOnBNA_Msk              (0x01UL << USB_DCTL_EnContOnBNA_Pos)                    /*!< USB DCTL: EnContOnBNA Mask              */
#define USB_DCTL_DeepSleepBESLReject_Pos      18                                                      /*!< USB DCTL: DeepSleepBESLReject Position  */
#define USB_DCTL_DeepSleepBESLReject_Msk      (0x01UL << USB_DCTL_DeepSleepBESLReject_Pos)            /*!< USB DCTL: DeepSleepBESLReject Mask      */

/* ----------------------------------  USB_DSTS  ---------------------------------- */
#define USB_DSTS_SuspSts_Pos                  0                                                       /*!< USB DSTS: SuspSts Position              */
#define USB_DSTS_SuspSts_Msk                  (0x01UL << USB_DSTS_SuspSts_Pos)                        /*!< USB DSTS: SuspSts Mask                  */
#define USB_DSTS_EnumSpd_Pos                  1                                                       /*!< USB DSTS: EnumSpd Position              */
#define USB_DSTS_EnumSpd_Msk                  (0x03UL << USB_DSTS_EnumSpd_Pos)                        /*!< USB DSTS: EnumSpd Mask                  */
#define USB_DSTS_ErrticErr_Pos                3                                                       /*!< USB DSTS: ErrticErr Position            */
#define USB_DSTS_ErrticErr_Msk                (0x01UL << USB_DSTS_ErrticErr_Pos)                      /*!< USB DSTS: ErrticErr Mask                */
#define USB_DSTS_SOFFN_Pos                    8                                                       /*!< USB DSTS: SOFFN Position                */
#define USB_DSTS_SOFFN_Msk                    (0x00003fffUL << USB_DSTS_SOFFN_Pos)                    /*!< USB DSTS: SOFFN Mask                    */
#define USB_DSTS_DevLnSts_Pos                 22                                                      /*!< USB DSTS: DevLnSts Position             */
#define USB_DSTS_DevLnSts_Msk                 (0x03UL << USB_DSTS_DevLnSts_Pos)                       /*!< USB DSTS: DevLnSts Mask                 */

/* ---------------------------------  USB_DIEPMSK  -------------------------------- */
#define USB_DIEPMSK_XferComplMsk_Pos          0                                                       /*!< USB DIEPMSK: XferComplMsk Position      */
#define USB_DIEPMSK_XferComplMsk_Msk          (0x01UL << USB_DIEPMSK_XferComplMsk_Pos)                /*!< USB DIEPMSK: XferComplMsk Mask          */
#define USB_DIEPMSK_EPDisbldMsk_Pos           1                                                       /*!< USB DIEPMSK: EPDisbldMsk Position       */
#define USB_DIEPMSK_EPDisbldMsk_Msk           (0x01UL << USB_DIEPMSK_EPDisbldMsk_Pos)                 /*!< USB DIEPMSK: EPDisbldMsk Mask           */
#define USB_DIEPMSK_AHBErrMsk_Pos             2                                                       /*!< USB DIEPMSK: AHBErrMsk Position         */
#define USB_DIEPMSK_AHBErrMsk_Msk             (0x01UL << USB_DIEPMSK_AHBErrMsk_Pos)                   /*!< USB DIEPMSK: AHBErrMsk Mask             */
#define USB_DIEPMSK_TimeOUTMsk_Pos            3                                                       /*!< USB DIEPMSK: TimeOUTMsk Position        */
#define USB_DIEPMSK_TimeOUTMsk_Msk            (0x01UL << USB_DIEPMSK_TimeOUTMsk_Pos)                  /*!< USB DIEPMSK: TimeOUTMsk Mask            */
#define USB_DIEPMSK_INTknTXFEmpMsk_Pos        4                                                       /*!< USB DIEPMSK: INTknTXFEmpMsk Position    */
#define USB_DIEPMSK_INTknTXFEmpMsk_Msk        (0x01UL << USB_DIEPMSK_INTknTXFEmpMsk_Pos)              /*!< USB DIEPMSK: INTknTXFEmpMsk Mask        */
#define USB_DIEPMSK_INTknEPMisMsk_Pos         5                                                       /*!< USB DIEPMSK: INTknEPMisMsk Position     */
#define USB_DIEPMSK_INTknEPMisMsk_Msk         (0x01UL << USB_DIEPMSK_INTknEPMisMsk_Pos)               /*!< USB DIEPMSK: INTknEPMisMsk Mask         */
#define USB_DIEPMSK_INEPNakEffMsk_Pos         6                                                       /*!< USB DIEPMSK: INEPNakEffMsk Position     */
#define USB_DIEPMSK_INEPNakEffMsk_Msk         (0x01UL << USB_DIEPMSK_INEPNakEffMsk_Pos)               /*!< USB DIEPMSK: INEPNakEffMsk Mask         */
#define USB_DIEPMSK_TxfifoUndrnMsk_Pos        8                                                       /*!< USB DIEPMSK: TxfifoUndrnMsk Position    */
#define USB_DIEPMSK_TxfifoUndrnMsk_Msk        (0x01UL << USB_DIEPMSK_TxfifoUndrnMsk_Pos)              /*!< USB DIEPMSK: TxfifoUndrnMsk Mask        */
#define USB_DIEPMSK_BNAInIntrMsk_Pos          9                                                       /*!< USB DIEPMSK: BNAInIntrMsk Position      */
#define USB_DIEPMSK_BNAInIntrMsk_Msk          (0x01UL << USB_DIEPMSK_BNAInIntrMsk_Pos)                /*!< USB DIEPMSK: BNAInIntrMsk Mask          */
#define USB_DIEPMSK_NAKMsk_Pos                13                                                      /*!< USB DIEPMSK: NAKMsk Position            */
#define USB_DIEPMSK_NAKMsk_Msk                (0x01UL << USB_DIEPMSK_NAKMsk_Pos)                      /*!< USB DIEPMSK: NAKMsk Mask                */

/* ---------------------------------  USB_DOEPMSK  -------------------------------- */
#define USB_DOEPMSK_XferComplMsk_Pos          0                                                       /*!< USB DOEPMSK: XferComplMsk Position      */
#define USB_DOEPMSK_XferComplMsk_Msk          (0x01UL << USB_DOEPMSK_XferComplMsk_Pos)                /*!< USB DOEPMSK: XferComplMsk Mask          */
#define USB_DOEPMSK_EPDisbldMsk_Pos           1                                                       /*!< USB DOEPMSK: EPDisbldMsk Position       */
#define USB_DOEPMSK_EPDisbldMsk_Msk           (0x01UL << USB_DOEPMSK_EPDisbldMsk_Pos)                 /*!< USB DOEPMSK: EPDisbldMsk Mask           */
#define USB_DOEPMSK_AHBErrMsk_Pos             2                                                       /*!< USB DOEPMSK: AHBErrMsk Position         */
#define USB_DOEPMSK_AHBErrMsk_Msk             (0x01UL << USB_DOEPMSK_AHBErrMsk_Pos)                   /*!< USB DOEPMSK: AHBErrMsk Mask             */
#define USB_DOEPMSK_SetUPMsk_Pos              3                                                       /*!< USB DOEPMSK: SetUPMsk Position          */
#define USB_DOEPMSK_SetUPMsk_Msk              (0x01UL << USB_DOEPMSK_SetUPMsk_Pos)                    /*!< USB DOEPMSK: SetUPMsk Mask              */
#define USB_DOEPMSK_OUTTknEPdisMsk_Pos        4                                                       /*!< USB DOEPMSK: OUTTknEPdisMsk Position    */
#define USB_DOEPMSK_OUTTknEPdisMsk_Msk        (0x01UL << USB_DOEPMSK_OUTTknEPdisMsk_Pos)              /*!< USB DOEPMSK: OUTTknEPdisMsk Mask        */
#define USB_DOEPMSK_StsPhseRcvdMsk_Pos        5                                                       /*!< USB DOEPMSK: StsPhseRcvdMsk Position    */
#define USB_DOEPMSK_StsPhseRcvdMsk_Msk        (0x01UL << USB_DOEPMSK_StsPhseRcvdMsk_Pos)              /*!< USB DOEPMSK: StsPhseRcvdMsk Mask        */
#define USB_DOEPMSK_Back2BackSETup_Pos        6                                                       /*!< USB DOEPMSK: Back2BackSETup Position    */
#define USB_DOEPMSK_Back2BackSETup_Msk        (0x01UL << USB_DOEPMSK_Back2BackSETup_Pos)              /*!< USB DOEPMSK: Back2BackSETup Mask        */
#define USB_DOEPMSK_OutPktErrMsk_Pos          8                                                       /*!< USB DOEPMSK: OutPktErrMsk Position      */
#define USB_DOEPMSK_OutPktErrMsk_Msk          (0x01UL << USB_DOEPMSK_OutPktErrMsk_Pos)                /*!< USB DOEPMSK: OutPktErrMsk Mask          */
#define USB_DOEPMSK_BnaOutIntrMsk_Pos         9                                                       /*!< USB DOEPMSK: BnaOutIntrMsk Position     */
#define USB_DOEPMSK_BnaOutIntrMsk_Msk         (0x01UL << USB_DOEPMSK_BnaOutIntrMsk_Pos)               /*!< USB DOEPMSK: BnaOutIntrMsk Mask         */
#define USB_DOEPMSK_BbleErrMsk_Pos            12                                                      /*!< USB DOEPMSK: BbleErrMsk Position        */
#define USB_DOEPMSK_BbleErrMsk_Msk            (0x01UL << USB_DOEPMSK_BbleErrMsk_Pos)                  /*!< USB DOEPMSK: BbleErrMsk Mask            */
#define USB_DOEPMSK_NAKMsk_Pos                13                                                      /*!< USB DOEPMSK: NAKMsk Position            */
#define USB_DOEPMSK_NAKMsk_Msk                (0x01UL << USB_DOEPMSK_NAKMsk_Pos)                      /*!< USB DOEPMSK: NAKMsk Mask                */
#define USB_DOEPMSK_NYETMsk_Pos               14                                                      /*!< USB DOEPMSK: NYETMsk Position           */
#define USB_DOEPMSK_NYETMsk_Msk               (0x01UL << USB_DOEPMSK_NYETMsk_Pos)                     /*!< USB DOEPMSK: NYETMsk Mask               */

/* ----------------------------------  USB_DAINT  --------------------------------- */
#define USB_DAINT_InEpInt0_Pos                0                                                       /*!< USB DAINT: InEpInt0 Position            */
#define USB_DAINT_InEpInt0_Msk                (0x01UL << USB_DAINT_InEpInt0_Pos)                      /*!< USB DAINT: InEpInt0 Mask                */
#define USB_DAINT_InEpInt1_Pos                1                                                       /*!< USB DAINT: InEpInt1 Position            */
#define USB_DAINT_InEpInt1_Msk                (0x01UL << USB_DAINT_InEpInt1_Pos)                      /*!< USB DAINT: InEpInt1 Mask                */
#define USB_DAINT_InEpInt2_Pos                2                                                       /*!< USB DAINT: InEpInt2 Position            */
#define USB_DAINT_InEpInt2_Msk                (0x01UL << USB_DAINT_InEpInt2_Pos)                      /*!< USB DAINT: InEpInt2 Mask                */
#define USB_DAINT_InEpInt3_Pos                3                                                       /*!< USB DAINT: InEpInt3 Position            */
#define USB_DAINT_InEpInt3_Msk                (0x01UL << USB_DAINT_InEpInt3_Pos)                      /*!< USB DAINT: InEpInt3 Mask                */
#define USB_DAINT_InEpInt4_Pos                4                                                       /*!< USB DAINT: InEpInt4 Position            */
#define USB_DAINT_InEpInt4_Msk                (0x01UL << USB_DAINT_InEpInt4_Pos)                      /*!< USB DAINT: InEpInt4 Mask                */
#define USB_DAINT_OutEPInt0_Pos               16                                                      /*!< USB DAINT: OutEPInt0 Position           */
#define USB_DAINT_OutEPInt0_Msk               (0x01UL << USB_DAINT_OutEPInt0_Pos)                     /*!< USB DAINT: OutEPInt0 Mask               */
#define USB_DAINT_OutEPInt1_Pos               17                                                      /*!< USB DAINT: OutEPInt1 Position           */
#define USB_DAINT_OutEPInt1_Msk               (0x01UL << USB_DAINT_OutEPInt1_Pos)                     /*!< USB DAINT: OutEPInt1 Mask               */
#define USB_DAINT_OutEPInt2_Pos               18                                                      /*!< USB DAINT: OutEPInt2 Position           */
#define USB_DAINT_OutEPInt2_Msk               (0x01UL << USB_DAINT_OutEPInt2_Pos)                     /*!< USB DAINT: OutEPInt2 Mask               */
#define USB_DAINT_OutEPInt3_Pos               19                                                      /*!< USB DAINT: OutEPInt3 Position           */
#define USB_DAINT_OutEPInt3_Msk               (0x01UL << USB_DAINT_OutEPInt3_Pos)                     /*!< USB DAINT: OutEPInt3 Mask               */
#define USB_DAINT_OutEPInt4_Pos               20                                                      /*!< USB DAINT: OutEPInt4 Position           */
#define USB_DAINT_OutEPInt4_Msk               (0x01UL << USB_DAINT_OutEPInt4_Pos)                     /*!< USB DAINT: OutEPInt4 Mask               */

/* --------------------------------  USB_DAINTMSK  -------------------------------- */
#define USB_DAINTMSK_InEpMsk0_Pos             0                                                       /*!< USB DAINTMSK: InEpMsk0 Position         */
#define USB_DAINTMSK_InEpMsk0_Msk             (0x01UL << USB_DAINTMSK_InEpMsk0_Pos)                   /*!< USB DAINTMSK: InEpMsk0 Mask             */
#define USB_DAINTMSK_InEpMsk1_Pos             1                                                       /*!< USB DAINTMSK: InEpMsk1 Position         */
#define USB_DAINTMSK_InEpMsk1_Msk             (0x01UL << USB_DAINTMSK_InEpMsk1_Pos)                   /*!< USB DAINTMSK: InEpMsk1 Mask             */
#define USB_DAINTMSK_InEpMsk2_Pos             2                                                       /*!< USB DAINTMSK: InEpMsk2 Position         */
#define USB_DAINTMSK_InEpMsk2_Msk             (0x01UL << USB_DAINTMSK_InEpMsk2_Pos)                   /*!< USB DAINTMSK: InEpMsk2 Mask             */
#define USB_DAINTMSK_InEpMsk3_Pos             3                                                       /*!< USB DAINTMSK: InEpMsk3 Position         */
#define USB_DAINTMSK_InEpMsk3_Msk             (0x01UL << USB_DAINTMSK_InEpMsk3_Pos)                   /*!< USB DAINTMSK: InEpMsk3 Mask             */
#define USB_DAINTMSK_InEpMsk4_Pos             4                                                       /*!< USB DAINTMSK: InEpMsk4 Position         */
#define USB_DAINTMSK_InEpMsk4_Msk             (0x01UL << USB_DAINTMSK_InEpMsk4_Pos)                   /*!< USB DAINTMSK: InEpMsk4 Mask             */
#define USB_DAINTMSK_OutEPMak0_Pos            16                                                      /*!< USB DAINTMSK: OutEPMak0 Position        */
#define USB_DAINTMSK_OutEPMak0_Msk            (0x01UL << USB_DAINTMSK_OutEPMak0_Pos)                  /*!< USB DAINTMSK: OutEPMak0 Mask            */
#define USB_DAINTMSK_OutEPMak1_Pos            17                                                      /*!< USB DAINTMSK: OutEPMak1 Position        */
#define USB_DAINTMSK_OutEPMak1_Msk            (0x01UL << USB_DAINTMSK_OutEPMak1_Pos)                  /*!< USB DAINTMSK: OutEPMak1 Mask            */
#define USB_DAINTMSK_OutEPMak2_Pos            18                                                      /*!< USB DAINTMSK: OutEPMak2 Position        */
#define USB_DAINTMSK_OutEPMak2_Msk            (0x01UL << USB_DAINTMSK_OutEPMak2_Pos)                  /*!< USB DAINTMSK: OutEPMak2 Mask            */
#define USB_DAINTMSK_OutEPMak3_Pos            19                                                      /*!< USB DAINTMSK: OutEPMak3 Position        */
#define USB_DAINTMSK_OutEPMak3_Msk            (0x01UL << USB_DAINTMSK_OutEPMak3_Pos)                  /*!< USB DAINTMSK: OutEPMak3 Mask            */
#define USB_DAINTMSK_OutEPMak4_Pos            20                                                      /*!< USB DAINTMSK: OutEPMak4 Position        */
#define USB_DAINTMSK_OutEPMak4_Msk            (0x01UL << USB_DAINTMSK_OutEPMak4_Pos)                  /*!< USB DAINTMSK: OutEPMak4 Mask            */

/* ---------------------------------  USB_DTHRCTL  -------------------------------- */
#define USB_DTHRCTL_NonISOThrEn_Pos           0                                                       /*!< USB DTHRCTL: NonISOThrEn Position       */
#define USB_DTHRCTL_NonISOThrEn_Msk           (0x01UL << USB_DTHRCTL_NonISOThrEn_Pos)                 /*!< USB DTHRCTL: NonISOThrEn Mask           */
#define USB_DTHRCTL_ISOThrEn_Pos              1                                                       /*!< USB DTHRCTL: ISOThrEn Position          */
#define USB_DTHRCTL_ISOThrEn_Msk              (0x01UL << USB_DTHRCTL_ISOThrEn_Pos)                    /*!< USB DTHRCTL: ISOThrEn Mask              */
#define USB_DTHRCTL_TxThrLen_Pos              2                                                       /*!< USB DTHRCTL: TxThrLen Position          */
#define USB_DTHRCTL_TxThrLen_Msk              (0x000001ffUL << USB_DTHRCTL_TxThrLen_Pos)              /*!< USB DTHRCTL: TxThrLen Mask              */
#define USB_DTHRCTL_AHBThrRatio_Pos           11                                                      /*!< USB DTHRCTL: AHBThrRatio Position       */
#define USB_DTHRCTL_AHBThrRatio_Msk           (0x03UL << USB_DTHRCTL_AHBThrRatio_Pos)                 /*!< USB DTHRCTL: AHBThrRatio Mask           */
#define USB_DTHRCTL_RxThrEn_Pos               16                                                      /*!< USB DTHRCTL: RxThrEn Position           */
#define USB_DTHRCTL_RxThrEn_Msk               (0x01UL << USB_DTHRCTL_RxThrEn_Pos)                     /*!< USB DTHRCTL: RxThrEn Mask               */
#define USB_DTHRCTL_RxThrLen_Pos              17                                                      /*!< USB DTHRCTL: RxThrLen Position          */
#define USB_DTHRCTL_RxThrLen_Msk              (0x000001ffUL << USB_DTHRCTL_RxThrLen_Pos)              /*!< USB DTHRCTL: RxThrLen Mask              */
#define USB_DTHRCTL_ArbPrkEn_Pos              27                                                      /*!< USB DTHRCTL: ArbPrkEn Position          */
#define USB_DTHRCTL_ArbPrkEn_Msk              (0x01UL << USB_DTHRCTL_ArbPrkEn_Pos)                    /*!< USB DTHRCTL: ArbPrkEn Mask              */

/* -------------------------------  USB_DIEPEMPMSK  ------------------------------- */
#define USB_DIEPEMPMSK_InEpTxfEmpMsk_Pos      0                                                       /*!< USB DIEPEMPMSK: InEpTxfEmpMsk Position  */
#define USB_DIEPEMPMSK_InEpTxfEmpMsk_Msk      (0x0000ffffUL << USB_DIEPEMPMSK_InEpTxfEmpMsk_Pos)      /*!< USB DIEPEMPMSK: InEpTxfEmpMsk Mask      */

/* --------------------------------  USB_DIEPCTL0  -------------------------------- */
#define USB_DIEPCTL0_MPS_Pos                  0                                                       /*!< USB DIEPCTL0: MPS Position              */
#define USB_DIEPCTL0_MPS_Msk                  (0x03UL << USB_DIEPCTL0_MPS_Pos)                        /*!< USB DIEPCTL0: MPS Mask                  */
#define USB_DIEPCTL0_USBActEP_Pos             15                                                      /*!< USB DIEPCTL0: USBActEP Position         */
#define USB_DIEPCTL0_USBActEP_Msk             (0x01UL << USB_DIEPCTL0_USBActEP_Pos)                   /*!< USB DIEPCTL0: USBActEP Mask             */
#define USB_DIEPCTL0_NAKSts_Pos               17                                                      /*!< USB DIEPCTL0: NAKSts Position           */
#define USB_DIEPCTL0_NAKSts_Msk               (0x01UL << USB_DIEPCTL0_NAKSts_Pos)                     /*!< USB DIEPCTL0: NAKSts Mask               */
#define USB_DIEPCTL0_EPType_Pos               18                                                      /*!< USB DIEPCTL0: EPType Position           */
#define USB_DIEPCTL0_EPType_Msk               (0x03UL << USB_DIEPCTL0_EPType_Pos)                     /*!< USB DIEPCTL0: EPType Mask               */
#define USB_DIEPCTL0_Stall_Pos                21                                                      /*!< USB DIEPCTL0: Stall Position            */
#define USB_DIEPCTL0_Stall_Msk                (0x01UL << USB_DIEPCTL0_Stall_Pos)                      /*!< USB DIEPCTL0: Stall Mask                */
#define USB_DIEPCTL0_TxFNum_Pos               22                                                      /*!< USB DIEPCTL0: TxFNum Position           */
#define USB_DIEPCTL0_TxFNum_Msk               (0x0fUL << USB_DIEPCTL0_TxFNum_Pos)                     /*!< USB DIEPCTL0: TxFNum Mask               */
#define USB_DIEPCTL0_CNAK_Pos                 26                                                      /*!< USB DIEPCTL0: CNAK Position             */
#define USB_DIEPCTL0_CNAK_Msk                 (0x01UL << USB_DIEPCTL0_CNAK_Pos)                       /*!< USB DIEPCTL0: CNAK Mask                 */
#define USB_DIEPCTL0_SNAK_Pos                 27                                                      /*!< USB DIEPCTL0: SNAK Position             */
#define USB_DIEPCTL0_SNAK_Msk                 (0x01UL << USB_DIEPCTL0_SNAK_Pos)                       /*!< USB DIEPCTL0: SNAK Mask                 */
#define USB_DIEPCTL0_EPDis_Pos                30                                                      /*!< USB DIEPCTL0: EPDis Position            */
#define USB_DIEPCTL0_EPDis_Msk                (0x01UL << USB_DIEPCTL0_EPDis_Pos)                      /*!< USB DIEPCTL0: EPDis Mask                */
#define USB_DIEPCTL0_EPEna_Pos                31                                                      /*!< USB DIEPCTL0: EPEna Position            */
#define USB_DIEPCTL0_EPEna_Msk                (0x01UL << USB_DIEPCTL0_EPEna_Pos)                      /*!< USB DIEPCTL0: EPEna Mask                */

/* --------------------------------  USB_DIEPINT0  -------------------------------- */
#define USB_DIEPINT0_XferCompl_Pos            0                                                       /*!< USB DIEPINT0: XferCompl Position        */
#define USB_DIEPINT0_XferCompl_Msk            (0x01UL << USB_DIEPINT0_XferCompl_Pos)                  /*!< USB DIEPINT0: XferCompl Mask            */
#define USB_DIEPINT0_EPDisbld_Pos             1                                                       /*!< USB DIEPINT0: EPDisbld Position         */
#define USB_DIEPINT0_EPDisbld_Msk             (0x01UL << USB_DIEPINT0_EPDisbld_Pos)                   /*!< USB DIEPINT0: EPDisbld Mask             */
#define USB_DIEPINT0_AHBErr_Pos               2                                                       /*!< USB DIEPINT0: AHBErr Position           */
#define USB_DIEPINT0_AHBErr_Msk               (0x01UL << USB_DIEPINT0_AHBErr_Pos)                     /*!< USB DIEPINT0: AHBErr Mask               */
#define USB_DIEPINT0_INTknTXFEmp_Pos          4                                                       /*!< USB DIEPINT0: INTknTXFEmp Position      */
#define USB_DIEPINT0_INTknTXFEmp_Msk          (0x01UL << USB_DIEPINT0_INTknTXFEmp_Pos)                /*!< USB DIEPINT0: INTknTXFEmp Mask          */
#define USB_DIEPINT0_INTknEPMis_Pos           5                                                       /*!< USB DIEPINT0: INTknEPMis Position       */
#define USB_DIEPINT0_INTknEPMis_Msk           (0x01UL << USB_DIEPINT0_INTknEPMis_Pos)                 /*!< USB DIEPINT0: INTknEPMis Mask           */
#define USB_DIEPINT0_INEPNakEff_Pos           6                                                       /*!< USB DIEPINT0: INEPNakEff Position       */
#define USB_DIEPINT0_INEPNakEff_Msk           (0x01UL << USB_DIEPINT0_INEPNakEff_Pos)                 /*!< USB DIEPINT0: INEPNakEff Mask           */
#define USB_DIEPINT0_TxFEmp_Pos               7                                                       /*!< USB DIEPINT0: TxFEmp Position           */
#define USB_DIEPINT0_TxFEmp_Msk               (0x01UL << USB_DIEPINT0_TxFEmp_Pos)                     /*!< USB DIEPINT0: TxFEmp Mask               */
#define USB_DIEPINT0_TxfifoUndrn_Pos          8                                                       /*!< USB DIEPINT0: TxfifoUndrn Position      */
#define USB_DIEPINT0_TxfifoUndrn_Msk          (0x01UL << USB_DIEPINT0_TxfifoUndrn_Pos)                /*!< USB DIEPINT0: TxfifoUndrn Mask          */
#define USB_DIEPINT0_BNAIntr_Pos              9                                                       /*!< USB DIEPINT0: BNAIntr Position          */
#define USB_DIEPINT0_BNAIntr_Msk              (0x01UL << USB_DIEPINT0_BNAIntr_Pos)                    /*!< USB DIEPINT0: BNAIntr Mask              */
#define USB_DIEPINT0_BbleErr_Pos              12                                                      /*!< USB DIEPINT0: BbleErr Position          */
#define USB_DIEPINT0_BbleErr_Msk              (0x01UL << USB_DIEPINT0_BbleErr_Pos)                    /*!< USB DIEPINT0: BbleErr Mask              */
#define USB_DIEPINT0_NAKIntrpt_Pos            13                                                      /*!< USB DIEPINT0: NAKIntrpt Position        */
#define USB_DIEPINT0_NAKIntrpt_Msk            (0x01UL << USB_DIEPINT0_NAKIntrpt_Pos)                  /*!< USB DIEPINT0: NAKIntrpt Mask            */
#define USB_DIEPINT0_NYETIntrpt_Pos           14                                                      /*!< USB DIEPINT0: NYETIntrpt Position       */
#define USB_DIEPINT0_NYETIntrpt_Msk           (0x01UL << USB_DIEPINT0_NYETIntrpt_Pos)                 /*!< USB DIEPINT0: NYETIntrpt Mask           */

/* --------------------------------  USB_DIEPDMA0  -------------------------------- */
#define USB_DIEPDMA0_DMAAddr_Pos              0                                                       /*!< USB DIEPDMA0: DMAAddr Position          */
#define USB_DIEPDMA0_DMAAddr_Msk              (0xffffffffUL << USB_DIEPDMA0_DMAAddr_Pos)              /*!< USB DIEPDMA0: DMAAddr Mask              */

/* --------------------------------  USB_DTXFSTS0  -------------------------------- */
#define USB_DTXFSTS0_INEPTxFSpcAvail_Pos      0                                                       /*!< USB DTXFSTS0: INEPTxFSpcAvail Position  */
#define USB_DTXFSTS0_INEPTxFSpcAvail_Msk      (0x0000ffffUL << USB_DTXFSTS0_INEPTxFSpcAvail_Pos)      /*!< USB DTXFSTS0: INEPTxFSpcAvail Mask      */

/* --------------------------------  USB_DIEPDMAB0  ------------------------------- */
#define USB_DIEPDMAB0_DMABufferAddr_Pos       0                                                       /*!< USB DIEPDMAB0: DMABufferAddr Position   */
#define USB_DIEPDMAB0_DMABufferAddr_Msk       (0xffffffffUL << USB_DIEPDMAB0_DMABufferAddr_Pos)       /*!< USB DIEPDMAB0: DMABufferAddr Mask       */

/* --------------------------------  USB_DIEPCTL1  -------------------------------- */
#define USB_DIEPCTL1_MPS_Pos                  0                                                       /*!< USB DIEPCTL1: MPS Position              */
#define USB_DIEPCTL1_MPS_Msk                  (0x000007ffUL << USB_DIEPCTL1_MPS_Pos)                  /*!< USB DIEPCTL1: MPS Mask                  */
#define USB_DIEPCTL1_USBActEP_Pos             15                                                      /*!< USB DIEPCTL1: USBActEP Position         */
#define USB_DIEPCTL1_USBActEP_Msk             (0x01UL << USB_DIEPCTL1_USBActEP_Pos)                   /*!< USB DIEPCTL1: USBActEP Mask             */
#define USB_DIEPCTL1_DPID_Pos                 16                                                      /*!< USB DIEPCTL1: DPID Position             */
#define USB_DIEPCTL1_DPID_Msk                 (0x01UL << USB_DIEPCTL1_DPID_Pos)                       /*!< USB DIEPCTL1: DPID Mask                 */
#define USB_DIEPCTL1_NAKSts_Pos               17                                                      /*!< USB DIEPCTL1: NAKSts Position           */
#define USB_DIEPCTL1_NAKSts_Msk               (0x01UL << USB_DIEPCTL1_NAKSts_Pos)                     /*!< USB DIEPCTL1: NAKSts Mask               */
#define USB_DIEPCTL1_EPType_Pos               18                                                      /*!< USB DIEPCTL1: EPType Position           */
#define USB_DIEPCTL1_EPType_Msk               (0x03UL << USB_DIEPCTL1_EPType_Pos)                     /*!< USB DIEPCTL1: EPType Mask               */
#define USB_DIEPCTL1_Stall_Pos                21                                                      /*!< USB DIEPCTL1: Stall Position            */
#define USB_DIEPCTL1_Stall_Msk                (0x01UL << USB_DIEPCTL1_Stall_Pos)                      /*!< USB DIEPCTL1: Stall Mask                */
#define USB_DIEPCTL1_TxFNum_Pos               22                                                      /*!< USB DIEPCTL1: TxFNum Position           */
#define USB_DIEPCTL1_TxFNum_Msk               (0x0fUL << USB_DIEPCTL1_TxFNum_Pos)                     /*!< USB DIEPCTL1: TxFNum Mask               */
#define USB_DIEPCTL1_CNAK_Pos                 26                                                      /*!< USB DIEPCTL1: CNAK Position             */
#define USB_DIEPCTL1_CNAK_Msk                 (0x01UL << USB_DIEPCTL1_CNAK_Pos)                       /*!< USB DIEPCTL1: CNAK Mask                 */
#define USB_DIEPCTL1_SNAK_Pos                 27                                                      /*!< USB DIEPCTL1: SNAK Position             */
#define USB_DIEPCTL1_SNAK_Msk                 (0x01UL << USB_DIEPCTL1_SNAK_Pos)                       /*!< USB DIEPCTL1: SNAK Mask                 */
#define USB_DIEPCTL1_EPDis_Pos                30                                                      /*!< USB DIEPCTL1: EPDis Position            */
#define USB_DIEPCTL1_EPDis_Msk                (0x01UL << USB_DIEPCTL1_EPDis_Pos)                      /*!< USB DIEPCTL1: EPDis Mask                */
#define USB_DIEPCTL1_EPEna_Pos                31                                                      /*!< USB DIEPCTL1: EPEna Position            */
#define USB_DIEPCTL1_EPEna_Msk                (0x01UL << USB_DIEPCTL1_EPEna_Pos)                      /*!< USB DIEPCTL1: EPEna Mask                */

/* --------------------------------  USB_DIEPINT1  -------------------------------- */
#define USB_DIEPINT1_XferCompl_Pos            0                                                       /*!< USB DIEPINT1: XferCompl Position        */
#define USB_DIEPINT1_XferCompl_Msk            (0x01UL << USB_DIEPINT1_XferCompl_Pos)                  /*!< USB DIEPINT1: XferCompl Mask            */
#define USB_DIEPINT1_EPDisbld_Pos             1                                                       /*!< USB DIEPINT1: EPDisbld Position         */
#define USB_DIEPINT1_EPDisbld_Msk             (0x01UL << USB_DIEPINT1_EPDisbld_Pos)                   /*!< USB DIEPINT1: EPDisbld Mask             */
#define USB_DIEPINT1_AHBErr_Pos               2                                                       /*!< USB DIEPINT1: AHBErr Position           */
#define USB_DIEPINT1_AHBErr_Msk               (0x01UL << USB_DIEPINT1_AHBErr_Pos)                     /*!< USB DIEPINT1: AHBErr Mask               */
#define USB_DIEPINT1_INTknTXFEmp_Pos          4                                                       /*!< USB DIEPINT1: INTknTXFEmp Position      */
#define USB_DIEPINT1_INTknTXFEmp_Msk          (0x01UL << USB_DIEPINT1_INTknTXFEmp_Pos)                /*!< USB DIEPINT1: INTknTXFEmp Mask          */
#define USB_DIEPINT1_INTknEPMis_Pos           5                                                       /*!< USB DIEPINT1: INTknEPMis Position       */
#define USB_DIEPINT1_INTknEPMis_Msk           (0x01UL << USB_DIEPINT1_INTknEPMis_Pos)                 /*!< USB DIEPINT1: INTknEPMis Mask           */
#define USB_DIEPINT1_INEPNakEff_Pos           6                                                       /*!< USB DIEPINT1: INEPNakEff Position       */
#define USB_DIEPINT1_INEPNakEff_Msk           (0x01UL << USB_DIEPINT1_INEPNakEff_Pos)                 /*!< USB DIEPINT1: INEPNakEff Mask           */
#define USB_DIEPINT1_TxFEmp_Pos               7                                                       /*!< USB DIEPINT1: TxFEmp Position           */
#define USB_DIEPINT1_TxFEmp_Msk               (0x01UL << USB_DIEPINT1_TxFEmp_Pos)                     /*!< USB DIEPINT1: TxFEmp Mask               */
#define USB_DIEPINT1_TxfifoUndrn_Pos          8                                                       /*!< USB DIEPINT1: TxfifoUndrn Position      */
#define USB_DIEPINT1_TxfifoUndrn_Msk          (0x01UL << USB_DIEPINT1_TxfifoUndrn_Pos)                /*!< USB DIEPINT1: TxfifoUndrn Mask          */
#define USB_DIEPINT1_BNAIntr_Pos              9                                                       /*!< USB DIEPINT1: BNAIntr Position          */
#define USB_DIEPINT1_BNAIntr_Msk              (0x01UL << USB_DIEPINT1_BNAIntr_Pos)                    /*!< USB DIEPINT1: BNAIntr Mask              */
#define USB_DIEPINT1_BbleErr_Pos              12                                                      /*!< USB DIEPINT1: BbleErr Position          */
#define USB_DIEPINT1_BbleErr_Msk              (0x01UL << USB_DIEPINT1_BbleErr_Pos)                    /*!< USB DIEPINT1: BbleErr Mask              */
#define USB_DIEPINT1_NAKIntrpt_Pos            13                                                      /*!< USB DIEPINT1: NAKIntrpt Position        */
#define USB_DIEPINT1_NAKIntrpt_Msk            (0x01UL << USB_DIEPINT1_NAKIntrpt_Pos)                  /*!< USB DIEPINT1: NAKIntrpt Mask            */
#define USB_DIEPINT1_NYETIntrpt_Pos           14                                                      /*!< USB DIEPINT1: NYETIntrpt Position       */
#define USB_DIEPINT1_NYETIntrpt_Msk           (0x01UL << USB_DIEPINT1_NYETIntrpt_Pos)                 /*!< USB DIEPINT1: NYETIntrpt Mask           */

/* --------------------------------  USB_DIEPDMA1  -------------------------------- */
#define USB_DIEPDMA1_DMAAddr_Pos              0                                                       /*!< USB DIEPDMA1: DMAAddr Position          */
#define USB_DIEPDMA1_DMAAddr_Msk              (0xffffffffUL << USB_DIEPDMA1_DMAAddr_Pos)              /*!< USB DIEPDMA1: DMAAddr Mask              */

/* --------------------------------  USB_DTXFSTS1  -------------------------------- */
#define USB_DTXFSTS1_INEPTxFSpcAvail_Pos      0                                                       /*!< USB DTXFSTS1: INEPTxFSpcAvail Position  */
#define USB_DTXFSTS1_INEPTxFSpcAvail_Msk      (0x0000ffffUL << USB_DTXFSTS1_INEPTxFSpcAvail_Pos)      /*!< USB DTXFSTS1: INEPTxFSpcAvail Mask      */

/* --------------------------------  USB_DIEPDMAB1  ------------------------------- */
#define USB_DIEPDMAB1_DMABufferAddr_Pos       0                                                       /*!< USB DIEPDMAB1: DMABufferAddr Position   */
#define USB_DIEPDMAB1_DMABufferAddr_Msk       (0xffffffffUL << USB_DIEPDMAB1_DMABufferAddr_Pos)       /*!< USB DIEPDMAB1: DMABufferAddr Mask       */

/* --------------------------------  USB_DIEPCTL2  -------------------------------- */
#define USB_DIEPCTL2_MPS_Pos                  0                                                       /*!< USB DIEPCTL2: MPS Position              */
#define USB_DIEPCTL2_MPS_Msk                  (0x000007ffUL << USB_DIEPCTL2_MPS_Pos)                  /*!< USB DIEPCTL2: MPS Mask                  */
#define USB_DIEPCTL2_USBActEP_Pos             15                                                      /*!< USB DIEPCTL2: USBActEP Position         */
#define USB_DIEPCTL2_USBActEP_Msk             (0x01UL << USB_DIEPCTL2_USBActEP_Pos)                   /*!< USB DIEPCTL2: USBActEP Mask             */
#define USB_DIEPCTL2_DPID_Pos                 16                                                      /*!< USB DIEPCTL2: DPID Position             */
#define USB_DIEPCTL2_DPID_Msk                 (0x01UL << USB_DIEPCTL2_DPID_Pos)                       /*!< USB DIEPCTL2: DPID Mask                 */
#define USB_DIEPCTL2_NAKSts_Pos               17                                                      /*!< USB DIEPCTL2: NAKSts Position           */
#define USB_DIEPCTL2_NAKSts_Msk               (0x01UL << USB_DIEPCTL2_NAKSts_Pos)                     /*!< USB DIEPCTL2: NAKSts Mask               */
#define USB_DIEPCTL2_EPType_Pos               18                                                      /*!< USB DIEPCTL2: EPType Position           */
#define USB_DIEPCTL2_EPType_Msk               (0x03UL << USB_DIEPCTL2_EPType_Pos)                     /*!< USB DIEPCTL2: EPType Mask               */
#define USB_DIEPCTL2_Stall_Pos                21                                                      /*!< USB DIEPCTL2: Stall Position            */
#define USB_DIEPCTL2_Stall_Msk                (0x01UL << USB_DIEPCTL2_Stall_Pos)                      /*!< USB DIEPCTL2: Stall Mask                */
#define USB_DIEPCTL2_TxFNum_Pos               22                                                      /*!< USB DIEPCTL2: TxFNum Position           */
#define USB_DIEPCTL2_TxFNum_Msk               (0x0fUL << USB_DIEPCTL2_TxFNum_Pos)                     /*!< USB DIEPCTL2: TxFNum Mask               */
#define USB_DIEPCTL2_CNAK_Pos                 26                                                      /*!< USB DIEPCTL2: CNAK Position             */
#define USB_DIEPCTL2_CNAK_Msk                 (0x01UL << USB_DIEPCTL2_CNAK_Pos)                       /*!< USB DIEPCTL2: CNAK Mask                 */
#define USB_DIEPCTL2_SNAK_Pos                 27                                                      /*!< USB DIEPCTL2: SNAK Position             */
#define USB_DIEPCTL2_SNAK_Msk                 (0x01UL << USB_DIEPCTL2_SNAK_Pos)                       /*!< USB DIEPCTL2: SNAK Mask                 */
#define USB_DIEPCTL2_EPDis_Pos                30                                                      /*!< USB DIEPCTL2: EPDis Position            */
#define USB_DIEPCTL2_EPDis_Msk                (0x01UL << USB_DIEPCTL2_EPDis_Pos)                      /*!< USB DIEPCTL2: EPDis Mask                */
#define USB_DIEPCTL2_EPEna_Pos                31                                                      /*!< USB DIEPCTL2: EPEna Position            */
#define USB_DIEPCTL2_EPEna_Msk                (0x01UL << USB_DIEPCTL2_EPEna_Pos)                      /*!< USB DIEPCTL2: EPEna Mask                */

/* --------------------------------  USB_DIEPINT2  -------------------------------- */
#define USB_DIEPINT2_XferCompl_Pos            0                                                       /*!< USB DIEPINT2: XferCompl Position        */
#define USB_DIEPINT2_XferCompl_Msk            (0x01UL << USB_DIEPINT2_XferCompl_Pos)                  /*!< USB DIEPINT2: XferCompl Mask            */
#define USB_DIEPINT2_EPDisbld_Pos             1                                                       /*!< USB DIEPINT2: EPDisbld Position         */
#define USB_DIEPINT2_EPDisbld_Msk             (0x01UL << USB_DIEPINT2_EPDisbld_Pos)                   /*!< USB DIEPINT2: EPDisbld Mask             */
#define USB_DIEPINT2_AHBErr_Pos               2                                                       /*!< USB DIEPINT2: AHBErr Position           */
#define USB_DIEPINT2_AHBErr_Msk               (0x01UL << USB_DIEPINT2_AHBErr_Pos)                     /*!< USB DIEPINT2: AHBErr Mask               */
#define USB_DIEPINT2_INTknTXFEmp_Pos          4                                                       /*!< USB DIEPINT2: INTknTXFEmp Position      */
#define USB_DIEPINT2_INTknTXFEmp_Msk          (0x01UL << USB_DIEPINT2_INTknTXFEmp_Pos)                /*!< USB DIEPINT2: INTknTXFEmp Mask          */
#define USB_DIEPINT2_INTknEPMis_Pos           5                                                       /*!< USB DIEPINT2: INTknEPMis Position       */
#define USB_DIEPINT2_INTknEPMis_Msk           (0x01UL << USB_DIEPINT2_INTknEPMis_Pos)                 /*!< USB DIEPINT2: INTknEPMis Mask           */
#define USB_DIEPINT2_INEPNakEff_Pos           6                                                       /*!< USB DIEPINT2: INEPNakEff Position       */
#define USB_DIEPINT2_INEPNakEff_Msk           (0x01UL << USB_DIEPINT2_INEPNakEff_Pos)                 /*!< USB DIEPINT2: INEPNakEff Mask           */
#define USB_DIEPINT2_TxFEmp_Pos               7                                                       /*!< USB DIEPINT2: TxFEmp Position           */
#define USB_DIEPINT2_TxFEmp_Msk               (0x01UL << USB_DIEPINT2_TxFEmp_Pos)                     /*!< USB DIEPINT2: TxFEmp Mask               */
#define USB_DIEPINT2_TxfifoUndrn_Pos          8                                                       /*!< USB DIEPINT2: TxfifoUndrn Position      */
#define USB_DIEPINT2_TxfifoUndrn_Msk          (0x01UL << USB_DIEPINT2_TxfifoUndrn_Pos)                /*!< USB DIEPINT2: TxfifoUndrn Mask          */
#define USB_DIEPINT2_BNAIntr_Pos              9                                                       /*!< USB DIEPINT2: BNAIntr Position          */
#define USB_DIEPINT2_BNAIntr_Msk              (0x01UL << USB_DIEPINT2_BNAIntr_Pos)                    /*!< USB DIEPINT2: BNAIntr Mask              */
#define USB_DIEPINT2_BbleErr_Pos              12                                                      /*!< USB DIEPINT2: BbleErr Position          */
#define USB_DIEPINT2_BbleErr_Msk              (0x01UL << USB_DIEPINT2_BbleErr_Pos)                    /*!< USB DIEPINT2: BbleErr Mask              */
#define USB_DIEPINT2_NAKIntrpt_Pos            13                                                      /*!< USB DIEPINT2: NAKIntrpt Position        */
#define USB_DIEPINT2_NAKIntrpt_Msk            (0x01UL << USB_DIEPINT2_NAKIntrpt_Pos)                  /*!< USB DIEPINT2: NAKIntrpt Mask            */
#define USB_DIEPINT2_NYETIntrpt_Pos           14                                                      /*!< USB DIEPINT2: NYETIntrpt Position       */
#define USB_DIEPINT2_NYETIntrpt_Msk           (0x01UL << USB_DIEPINT2_NYETIntrpt_Pos)                 /*!< USB DIEPINT2: NYETIntrpt Mask           */

/* --------------------------------  USB_DIEPDMA2  -------------------------------- */
#define USB_DIEPDMA2_DMAAddr_Pos              0                                                       /*!< USB DIEPDMA2: DMAAddr Position          */
#define USB_DIEPDMA2_DMAAddr_Msk              (0xffffffffUL << USB_DIEPDMA2_DMAAddr_Pos)              /*!< USB DIEPDMA2: DMAAddr Mask              */

/* --------------------------------  USB_DTXFSTS2  -------------------------------- */
#define USB_DTXFSTS2_INEPTxFSpcAvail_Pos      0                                                       /*!< USB DTXFSTS2: INEPTxFSpcAvail Position  */
#define USB_DTXFSTS2_INEPTxFSpcAvail_Msk      (0x0000ffffUL << USB_DTXFSTS2_INEPTxFSpcAvail_Pos)      /*!< USB DTXFSTS2: INEPTxFSpcAvail Mask      */

/* --------------------------------  USB_DIEPDMAB2  ------------------------------- */
#define USB_DIEPDMAB2_DMABufferAddr_Pos       0                                                       /*!< USB DIEPDMAB2: DMABufferAddr Position   */
#define USB_DIEPDMAB2_DMABufferAddr_Msk       (0xffffffffUL << USB_DIEPDMAB2_DMABufferAddr_Pos)       /*!< USB DIEPDMAB2: DMABufferAddr Mask       */

/* --------------------------------  USB_DIEPCTL3  -------------------------------- */
#define USB_DIEPCTL3_MPS_Pos                  0                                                       /*!< USB DIEPCTL3: MPS Position              */
#define USB_DIEPCTL3_MPS_Msk                  (0x000007ffUL << USB_DIEPCTL3_MPS_Pos)                  /*!< USB DIEPCTL3: MPS Mask                  */
#define USB_DIEPCTL3_USBActEP_Pos             15                                                      /*!< USB DIEPCTL3: USBActEP Position         */
#define USB_DIEPCTL3_USBActEP_Msk             (0x01UL << USB_DIEPCTL3_USBActEP_Pos)                   /*!< USB DIEPCTL3: USBActEP Mask             */
#define USB_DIEPCTL3_DPID_Pos                 16                                                      /*!< USB DIEPCTL3: DPID Position             */
#define USB_DIEPCTL3_DPID_Msk                 (0x01UL << USB_DIEPCTL3_DPID_Pos)                       /*!< USB DIEPCTL3: DPID Mask                 */
#define USB_DIEPCTL3_NAKSts_Pos               17                                                      /*!< USB DIEPCTL3: NAKSts Position           */
#define USB_DIEPCTL3_NAKSts_Msk               (0x01UL << USB_DIEPCTL3_NAKSts_Pos)                     /*!< USB DIEPCTL3: NAKSts Mask               */
#define USB_DIEPCTL3_EPType_Pos               18                                                      /*!< USB DIEPCTL3: EPType Position           */
#define USB_DIEPCTL3_EPType_Msk               (0x03UL << USB_DIEPCTL3_EPType_Pos)                     /*!< USB DIEPCTL3: EPType Mask               */
#define USB_DIEPCTL3_Stall_Pos                21                                                      /*!< USB DIEPCTL3: Stall Position            */
#define USB_DIEPCTL3_Stall_Msk                (0x01UL << USB_DIEPCTL3_Stall_Pos)                      /*!< USB DIEPCTL3: Stall Mask                */
#define USB_DIEPCTL3_TxFNum_Pos               22                                                      /*!< USB DIEPCTL3: TxFNum Position           */
#define USB_DIEPCTL3_TxFNum_Msk               (0x0fUL << USB_DIEPCTL3_TxFNum_Pos)                     /*!< USB DIEPCTL3: TxFNum Mask               */
#define USB_DIEPCTL3_CNAK_Pos                 26                                                      /*!< USB DIEPCTL3: CNAK Position             */
#define USB_DIEPCTL3_CNAK_Msk                 (0x01UL << USB_DIEPCTL3_CNAK_Pos)                       /*!< USB DIEPCTL3: CNAK Mask                 */
#define USB_DIEPCTL3_SNAK_Pos                 27                                                      /*!< USB DIEPCTL3: SNAK Position             */
#define USB_DIEPCTL3_SNAK_Msk                 (0x01UL << USB_DIEPCTL3_SNAK_Pos)                       /*!< USB DIEPCTL3: SNAK Mask                 */
#define USB_DIEPCTL3_EPDis_Pos                30                                                      /*!< USB DIEPCTL3: EPDis Position            */
#define USB_DIEPCTL3_EPDis_Msk                (0x01UL << USB_DIEPCTL3_EPDis_Pos)                      /*!< USB DIEPCTL3: EPDis Mask                */
#define USB_DIEPCTL3_EPEna_Pos                31                                                      /*!< USB DIEPCTL3: EPEna Position            */
#define USB_DIEPCTL3_EPEna_Msk                (0x01UL << USB_DIEPCTL3_EPEna_Pos)                      /*!< USB DIEPCTL3: EPEna Mask                */

/* --------------------------------  USB_DIEPINT3  -------------------------------- */
#define USB_DIEPINT3_XferCompl_Pos            0                                                       /*!< USB DIEPINT3: XferCompl Position        */
#define USB_DIEPINT3_XferCompl_Msk            (0x01UL << USB_DIEPINT3_XferCompl_Pos)                  /*!< USB DIEPINT3: XferCompl Mask            */
#define USB_DIEPINT3_EPDisbld_Pos             1                                                       /*!< USB DIEPINT3: EPDisbld Position         */
#define USB_DIEPINT3_EPDisbld_Msk             (0x01UL << USB_DIEPINT3_EPDisbld_Pos)                   /*!< USB DIEPINT3: EPDisbld Mask             */
#define USB_DIEPINT3_AHBErr_Pos               2                                                       /*!< USB DIEPINT3: AHBErr Position           */
#define USB_DIEPINT3_AHBErr_Msk               (0x01UL << USB_DIEPINT3_AHBErr_Pos)                     /*!< USB DIEPINT3: AHBErr Mask               */
#define USB_DIEPINT3_INTknTXFEmp_Pos          4                                                       /*!< USB DIEPINT3: INTknTXFEmp Position      */
#define USB_DIEPINT3_INTknTXFEmp_Msk          (0x01UL << USB_DIEPINT3_INTknTXFEmp_Pos)                /*!< USB DIEPINT3: INTknTXFEmp Mask          */
#define USB_DIEPINT3_INTknEPMis_Pos           5                                                       /*!< USB DIEPINT3: INTknEPMis Position       */
#define USB_DIEPINT3_INTknEPMis_Msk           (0x01UL << USB_DIEPINT3_INTknEPMis_Pos)                 /*!< USB DIEPINT3: INTknEPMis Mask           */
#define USB_DIEPINT3_INEPNakEff_Pos           6                                                       /*!< USB DIEPINT3: INEPNakEff Position       */
#define USB_DIEPINT3_INEPNakEff_Msk           (0x01UL << USB_DIEPINT3_INEPNakEff_Pos)                 /*!< USB DIEPINT3: INEPNakEff Mask           */
#define USB_DIEPINT3_TxFEmp_Pos               7                                                       /*!< USB DIEPINT3: TxFEmp Position           */
#define USB_DIEPINT3_TxFEmp_Msk               (0x01UL << USB_DIEPINT3_TxFEmp_Pos)                     /*!< USB DIEPINT3: TxFEmp Mask               */
#define USB_DIEPINT3_TxfifoUndrn_Pos          8                                                       /*!< USB DIEPINT3: TxfifoUndrn Position      */
#define USB_DIEPINT3_TxfifoUndrn_Msk          (0x01UL << USB_DIEPINT3_TxfifoUndrn_Pos)                /*!< USB DIEPINT3: TxfifoUndrn Mask          */
#define USB_DIEPINT3_BNAIntr_Pos              9                                                       /*!< USB DIEPINT3: BNAIntr Position          */
#define USB_DIEPINT3_BNAIntr_Msk              (0x01UL << USB_DIEPINT3_BNAIntr_Pos)                    /*!< USB DIEPINT3: BNAIntr Mask              */
#define USB_DIEPINT3_BbleErr_Pos              12                                                      /*!< USB DIEPINT3: BbleErr Position          */
#define USB_DIEPINT3_BbleErr_Msk              (0x01UL << USB_DIEPINT3_BbleErr_Pos)                    /*!< USB DIEPINT3: BbleErr Mask              */
#define USB_DIEPINT3_NAKIntrpt_Pos            13                                                      /*!< USB DIEPINT3: NAKIntrpt Position        */
#define USB_DIEPINT3_NAKIntrpt_Msk            (0x01UL << USB_DIEPINT3_NAKIntrpt_Pos)                  /*!< USB DIEPINT3: NAKIntrpt Mask            */
#define USB_DIEPINT3_NYETIntrpt_Pos           14                                                      /*!< USB DIEPINT3: NYETIntrpt Position       */
#define USB_DIEPINT3_NYETIntrpt_Msk           (0x01UL << USB_DIEPINT3_NYETIntrpt_Pos)                 /*!< USB DIEPINT3: NYETIntrpt Mask           */

/* --------------------------------  USB_DIEPDMA3  -------------------------------- */
#define USB_DIEPDMA3_DMAAddr_Pos              0                                                       /*!< USB DIEPDMA3: DMAAddr Position          */
#define USB_DIEPDMA3_DMAAddr_Msk              (0xffffffffUL << USB_DIEPDMA3_DMAAddr_Pos)              /*!< USB DIEPDMA3: DMAAddr Mask              */

/* --------------------------------  USB_DTXFSTS3  -------------------------------- */
#define USB_DTXFSTS3_INEPTxFSpcAvail_Pos      0                                                       /*!< USB DTXFSTS3: INEPTxFSpcAvail Position  */
#define USB_DTXFSTS3_INEPTxFSpcAvail_Msk      (0x0000ffffUL << USB_DTXFSTS3_INEPTxFSpcAvail_Pos)      /*!< USB DTXFSTS3: INEPTxFSpcAvail Mask      */

/* --------------------------------  USB_DIEPDMAB3  ------------------------------- */
#define USB_DIEPDMAB3_DMABufferAddr_Pos       0                                                       /*!< USB DIEPDMAB3: DMABufferAddr Position   */
#define USB_DIEPDMAB3_DMABufferAddr_Msk       (0xffffffffUL << USB_DIEPDMAB3_DMABufferAddr_Pos)       /*!< USB DIEPDMAB3: DMABufferAddr Mask       */

/* --------------------------------  USB_DIEPCTL4  -------------------------------- */
#define USB_DIEPCTL4_MPS_Pos                  0                                                       /*!< USB DIEPCTL4: MPS Position              */
#define USB_DIEPCTL4_MPS_Msk                  (0x000007ffUL << USB_DIEPCTL4_MPS_Pos)                  /*!< USB DIEPCTL4: MPS Mask                  */
#define USB_DIEPCTL4_USBActEP_Pos             15                                                      /*!< USB DIEPCTL4: USBActEP Position         */
#define USB_DIEPCTL4_USBActEP_Msk             (0x01UL << USB_DIEPCTL4_USBActEP_Pos)                   /*!< USB DIEPCTL4: USBActEP Mask             */
#define USB_DIEPCTL4_DPID_Pos                 16                                                      /*!< USB DIEPCTL4: DPID Position             */
#define USB_DIEPCTL4_DPID_Msk                 (0x01UL << USB_DIEPCTL4_DPID_Pos)                       /*!< USB DIEPCTL4: DPID Mask                 */
#define USB_DIEPCTL4_NAKSts_Pos               17                                                      /*!< USB DIEPCTL4: NAKSts Position           */
#define USB_DIEPCTL4_NAKSts_Msk               (0x01UL << USB_DIEPCTL4_NAKSts_Pos)                     /*!< USB DIEPCTL4: NAKSts Mask               */
#define USB_DIEPCTL4_EPType_Pos               18                                                      /*!< USB DIEPCTL4: EPType Position           */
#define USB_DIEPCTL4_EPType_Msk               (0x03UL << USB_DIEPCTL4_EPType_Pos)                     /*!< USB DIEPCTL4: EPType Mask               */
#define USB_DIEPCTL4_Stall_Pos                21                                                      /*!< USB DIEPCTL4: Stall Position            */
#define USB_DIEPCTL4_Stall_Msk                (0x01UL << USB_DIEPCTL4_Stall_Pos)                      /*!< USB DIEPCTL4: Stall Mask                */
#define USB_DIEPCTL4_TxFNum_Pos               22                                                      /*!< USB DIEPCTL4: TxFNum Position           */
#define USB_DIEPCTL4_TxFNum_Msk               (0x0fUL << USB_DIEPCTL4_TxFNum_Pos)                     /*!< USB DIEPCTL4: TxFNum Mask               */
#define USB_DIEPCTL4_CNAK_Pos                 26                                                      /*!< USB DIEPCTL4: CNAK Position             */
#define USB_DIEPCTL4_CNAK_Msk                 (0x01UL << USB_DIEPCTL4_CNAK_Pos)                       /*!< USB DIEPCTL4: CNAK Mask                 */
#define USB_DIEPCTL4_SNAK_Pos                 27                                                      /*!< USB DIEPCTL4: SNAK Position             */
#define USB_DIEPCTL4_SNAK_Msk                 (0x01UL << USB_DIEPCTL4_SNAK_Pos)                       /*!< USB DIEPCTL4: SNAK Mask                 */
#define USB_DIEPCTL4_EPDis_Pos                30                                                      /*!< USB DIEPCTL4: EPDis Position            */
#define USB_DIEPCTL4_EPDis_Msk                (0x01UL << USB_DIEPCTL4_EPDis_Pos)                      /*!< USB DIEPCTL4: EPDis Mask                */
#define USB_DIEPCTL4_EPEna_Pos                31                                                      /*!< USB DIEPCTL4: EPEna Position            */
#define USB_DIEPCTL4_EPEna_Msk                (0x01UL << USB_DIEPCTL4_EPEna_Pos)                      /*!< USB DIEPCTL4: EPEna Mask                */

/* --------------------------------  USB_DIEPINT4  -------------------------------- */
#define USB_DIEPINT4_XferCompl_Pos            0                                                       /*!< USB DIEPINT4: XferCompl Position        */
#define USB_DIEPINT4_XferCompl_Msk            (0x01UL << USB_DIEPINT4_XferCompl_Pos)                  /*!< USB DIEPINT4: XferCompl Mask            */
#define USB_DIEPINT4_EPDisbld_Pos             1                                                       /*!< USB DIEPINT4: EPDisbld Position         */
#define USB_DIEPINT4_EPDisbld_Msk             (0x01UL << USB_DIEPINT4_EPDisbld_Pos)                   /*!< USB DIEPINT4: EPDisbld Mask             */
#define USB_DIEPINT4_AHBErr_Pos               2                                                       /*!< USB DIEPINT4: AHBErr Position           */
#define USB_DIEPINT4_AHBErr_Msk               (0x01UL << USB_DIEPINT4_AHBErr_Pos)                     /*!< USB DIEPINT4: AHBErr Mask               */
#define USB_DIEPINT4_INTknTXFEmp_Pos          4                                                       /*!< USB DIEPINT4: INTknTXFEmp Position      */
#define USB_DIEPINT4_INTknTXFEmp_Msk          (0x01UL << USB_DIEPINT4_INTknTXFEmp_Pos)                /*!< USB DIEPINT4: INTknTXFEmp Mask          */
#define USB_DIEPINT4_INTknEPMis_Pos           5                                                       /*!< USB DIEPINT4: INTknEPMis Position       */
#define USB_DIEPINT4_INTknEPMis_Msk           (0x01UL << USB_DIEPINT4_INTknEPMis_Pos)                 /*!< USB DIEPINT4: INTknEPMis Mask           */
#define USB_DIEPINT4_INEPNakEff_Pos           6                                                       /*!< USB DIEPINT4: INEPNakEff Position       */
#define USB_DIEPINT4_INEPNakEff_Msk           (0x01UL << USB_DIEPINT4_INEPNakEff_Pos)                 /*!< USB DIEPINT4: INEPNakEff Mask           */
#define USB_DIEPINT4_TxFEmp_Pos               7                                                       /*!< USB DIEPINT4: TxFEmp Position           */
#define USB_DIEPINT4_TxFEmp_Msk               (0x01UL << USB_DIEPINT4_TxFEmp_Pos)                     /*!< USB DIEPINT4: TxFEmp Mask               */
#define USB_DIEPINT4_TxfifoUndrn_Pos          8                                                       /*!< USB DIEPINT4: TxfifoUndrn Position      */
#define USB_DIEPINT4_TxfifoUndrn_Msk          (0x01UL << USB_DIEPINT4_TxfifoUndrn_Pos)                /*!< USB DIEPINT4: TxfifoUndrn Mask          */
#define USB_DIEPINT4_BNAIntr_Pos              9                                                       /*!< USB DIEPINT4: BNAIntr Position          */
#define USB_DIEPINT4_BNAIntr_Msk              (0x01UL << USB_DIEPINT4_BNAIntr_Pos)                    /*!< USB DIEPINT4: BNAIntr Mask              */
#define USB_DIEPINT4_BbleErr_Pos              12                                                      /*!< USB DIEPINT4: BbleErr Position          */
#define USB_DIEPINT4_BbleErr_Msk              (0x01UL << USB_DIEPINT4_BbleErr_Pos)                    /*!< USB DIEPINT4: BbleErr Mask              */
#define USB_DIEPINT4_NAKIntrpt_Pos            13                                                      /*!< USB DIEPINT4: NAKIntrpt Position        */
#define USB_DIEPINT4_NAKIntrpt_Msk            (0x01UL << USB_DIEPINT4_NAKIntrpt_Pos)                  /*!< USB DIEPINT4: NAKIntrpt Mask            */
#define USB_DIEPINT4_NYETIntrpt_Pos           14                                                      /*!< USB DIEPINT4: NYETIntrpt Position       */
#define USB_DIEPINT4_NYETIntrpt_Msk           (0x01UL << USB_DIEPINT4_NYETIntrpt_Pos)                 /*!< USB DIEPINT4: NYETIntrpt Mask           */

/* --------------------------------  USB_DIEPDMA4  -------------------------------- */
#define USB_DIEPDMA4_DMAAddr_Pos              0                                                       /*!< USB DIEPDMA4: DMAAddr Position          */
#define USB_DIEPDMA4_DMAAddr_Msk              (0xffffffffUL << USB_DIEPDMA4_DMAAddr_Pos)              /*!< USB DIEPDMA4: DMAAddr Mask              */

/* --------------------------------  USB_DTXFSTS4  -------------------------------- */
#define USB_DTXFSTS4_INEPTxFSpcAvail_Pos      0                                                       /*!< USB DTXFSTS4: INEPTxFSpcAvail Position  */
#define USB_DTXFSTS4_INEPTxFSpcAvail_Msk      (0x0000ffffUL << USB_DTXFSTS4_INEPTxFSpcAvail_Pos)      /*!< USB DTXFSTS4: INEPTxFSpcAvail Mask      */

/* --------------------------------  USB_DIEPDMAB4  ------------------------------- */
#define USB_DIEPDMAB4_DMABufferAddr_Pos       0                                                       /*!< USB DIEPDMAB4: DMABufferAddr Position   */
#define USB_DIEPDMAB4_DMABufferAddr_Msk       (0xffffffffUL << USB_DIEPDMAB4_DMABufferAddr_Pos)       /*!< USB DIEPDMAB4: DMABufferAddr Mask       */

/* --------------------------------  USB_DOEPCTL0  -------------------------------- */
#define USB_DOEPCTL0_MPS_Pos                  0                                                       /*!< USB DOEPCTL0: MPS Position              */
#define USB_DOEPCTL0_MPS_Msk                  (0x03UL << USB_DOEPCTL0_MPS_Pos)                        /*!< USB DOEPCTL0: MPS Mask                  */
#define USB_DOEPCTL0_USBActEP_Pos             15                                                      /*!< USB DOEPCTL0: USBActEP Position         */
#define USB_DOEPCTL0_USBActEP_Msk             (0x01UL << USB_DOEPCTL0_USBActEP_Pos)                   /*!< USB DOEPCTL0: USBActEP Mask             */
#define USB_DOEPCTL0_NAKSts_Pos               17                                                      /*!< USB DOEPCTL0: NAKSts Position           */
#define USB_DOEPCTL0_NAKSts_Msk               (0x01UL << USB_DOEPCTL0_NAKSts_Pos)                     /*!< USB DOEPCTL0: NAKSts Mask               */
#define USB_DOEPCTL0_EPType_Pos               18                                                      /*!< USB DOEPCTL0: EPType Position           */
#define USB_DOEPCTL0_EPType_Msk               (0x03UL << USB_DOEPCTL0_EPType_Pos)                     /*!< USB DOEPCTL0: EPType Mask               */
#define USB_DOEPCTL0_Snp_Pos                  20                                                      /*!< USB DOEPCTL0: Snp Position              */
#define USB_DOEPCTL0_Snp_Msk                  (0x01UL << USB_DOEPCTL0_Snp_Pos)                        /*!< USB DOEPCTL0: Snp Mask                  */
#define USB_DOEPCTL0_Stall_Pos                21                                                      /*!< USB DOEPCTL0: Stall Position            */
#define USB_DOEPCTL0_Stall_Msk                (0x01UL << USB_DOEPCTL0_Stall_Pos)                      /*!< USB DOEPCTL0: Stall Mask                */
#define USB_DOEPCTL0_CNAK_Pos                 26                                                      /*!< USB DOEPCTL0: CNAK Position             */
#define USB_DOEPCTL0_CNAK_Msk                 (0x01UL << USB_DOEPCTL0_CNAK_Pos)                       /*!< USB DOEPCTL0: CNAK Mask                 */
#define USB_DOEPCTL0_SNAK_Pos                 27                                                      /*!< USB DOEPCTL0: SNAK Position             */
#define USB_DOEPCTL0_SNAK_Msk                 (0x01UL << USB_DOEPCTL0_SNAK_Pos)                       /*!< USB DOEPCTL0: SNAK Mask                 */
#define USB_DOEPCTL0_EPDis_Pos                30                                                      /*!< USB DOEPCTL0: EPDis Position            */
#define USB_DOEPCTL0_EPDis_Msk                (0x01UL << USB_DOEPCTL0_EPDis_Pos)                      /*!< USB DOEPCTL0: EPDis Mask                */
#define USB_DOEPCTL0_EPEna_Pos                31                                                      /*!< USB DOEPCTL0: EPEna Position            */
#define USB_DOEPCTL0_EPEna_Msk                (0x01UL << USB_DOEPCTL0_EPEna_Pos)                      /*!< USB DOEPCTL0: EPEna Mask                */

/* --------------------------------  USB_DOEPINT0  -------------------------------- */
#define USB_DOEPINT0_XferCompl_Pos            0                                                       /*!< USB DOEPINT0: XferCompl Position        */
#define USB_DOEPINT0_XferCompl_Msk            (0x01UL << USB_DOEPINT0_XferCompl_Pos)                  /*!< USB DOEPINT0: XferCompl Mask            */
#define USB_DOEPINT0_EPDisbld_Pos             1                                                       /*!< USB DOEPINT0: EPDisbld Position         */
#define USB_DOEPINT0_EPDisbld_Msk             (0x01UL << USB_DOEPINT0_EPDisbld_Pos)                   /*!< USB DOEPINT0: EPDisbld Mask             */
#define USB_DOEPINT0_AHBErr_Pos               2                                                       /*!< USB DOEPINT0: AHBErr Position           */
#define USB_DOEPINT0_AHBErr_Msk               (0x01UL << USB_DOEPINT0_AHBErr_Pos)                     /*!< USB DOEPINT0: AHBErr Mask               */
#define USB_DOEPINT0_SetUp_Pos                3                                                       /*!< USB DOEPINT0: SetUp Position            */
#define USB_DOEPINT0_SetUp_Msk                (0x01UL << USB_DOEPINT0_SetUp_Pos)                      /*!< USB DOEPINT0: SetUp Mask                */
#define USB_DOEPINT0_OUTTknEPdis_Pos          4                                                       /*!< USB DOEPINT0: OUTTknEPdis Position      */
#define USB_DOEPINT0_OUTTknEPdis_Msk          (0x01UL << USB_DOEPINT0_OUTTknEPdis_Pos)                /*!< USB DOEPINT0: OUTTknEPdis Mask          */
#define USB_DOEPINT0_StsPhseRcvd_Pos          5                                                       /*!< USB DOEPINT0: StsPhseRcvd Position      */
#define USB_DOEPINT0_StsPhseRcvd_Msk          (0x01UL << USB_DOEPINT0_StsPhseRcvd_Pos)                /*!< USB DOEPINT0: StsPhseRcvd Mask          */
#define USB_DOEPINT0_Back2BackSETup_Pos       6                                                       /*!< USB DOEPINT0: Back2BackSETup Position   */
#define USB_DOEPINT0_Back2BackSETup_Msk       (0x01UL << USB_DOEPINT0_Back2BackSETup_Pos)             /*!< USB DOEPINT0: Back2BackSETup Mask       */
#define USB_DOEPINT0_OutPktErr_Pos            8                                                       /*!< USB DOEPINT0: OutPktErr Position        */
#define USB_DOEPINT0_OutPktErr_Msk            (0x01UL << USB_DOEPINT0_OutPktErr_Pos)                  /*!< USB DOEPINT0: OutPktErr Mask            */
#define USB_DOEPINT0_BNAIntr_Pos              9                                                       /*!< USB DOEPINT0: BNAIntr Position          */
#define USB_DOEPINT0_BNAIntr_Msk              (0x01UL << USB_DOEPINT0_BNAIntr_Pos)                    /*!< USB DOEPINT0: BNAIntr Mask              */
#define USB_DOEPINT0_BbleErr_Pos              12                                                      /*!< USB DOEPINT0: BbleErr Position          */
#define USB_DOEPINT0_BbleErr_Msk              (0x01UL << USB_DOEPINT0_BbleErr_Pos)                    /*!< USB DOEPINT0: BbleErr Mask              */
#define USB_DOEPINT0_NAKIntrpt_Pos            13                                                      /*!< USB DOEPINT0: NAKIntrpt Position        */
#define USB_DOEPINT0_NAKIntrpt_Msk            (0x01UL << USB_DOEPINT0_NAKIntrpt_Pos)                  /*!< USB DOEPINT0: NAKIntrpt Mask            */
#define USB_DOEPINT0_NYETIntrpt_Pos           14                                                      /*!< USB DOEPINT0: NYETIntrpt Position       */
#define USB_DOEPINT0_NYETIntrpt_Msk           (0x01UL << USB_DOEPINT0_NYETIntrpt_Pos)                 /*!< USB DOEPINT0: NYETIntrpt Mask           */

/* --------------------------------  USB_DOEPDMA0  -------------------------------- */
#define USB_DOEPDMA0_DMAAddr_Pos              0                                                       /*!< USB DOEPDMA0: DMAAddr Position          */
#define USB_DOEPDMA0_DMAAddr_Msk              (0xffffffffUL << USB_DOEPDMA0_DMAAddr_Pos)              /*!< USB DOEPDMA0: DMAAddr Mask              */

/* --------------------------------  USB_DOEPDMAB0  ------------------------------- */
#define USB_DOEPDMAB0_DMABufferAddr_Pos       0                                                       /*!< USB DOEPDMAB0: DMABufferAddr Position   */
#define USB_DOEPDMAB0_DMABufferAddr_Msk       (0xffffffffUL << USB_DOEPDMAB0_DMABufferAddr_Pos)       /*!< USB DOEPDMAB0: DMABufferAddr Mask       */

/* --------------------------------  USB_DOEPCTL1  -------------------------------- */
#define USB_DOEPCTL1_MPS_Pos                  0                                                       /*!< USB DOEPCTL1: MPS Position              */
#define USB_DOEPCTL1_MPS_Msk                  (0x000007ffUL << USB_DOEPCTL1_MPS_Pos)                  /*!< USB DOEPCTL1: MPS Mask                  */
#define USB_DOEPCTL1_USBActEP_Pos             15                                                      /*!< USB DOEPCTL1: USBActEP Position         */
#define USB_DOEPCTL1_USBActEP_Msk             (0x01UL << USB_DOEPCTL1_USBActEP_Pos)                   /*!< USB DOEPCTL1: USBActEP Mask             */
#define USB_DOEPCTL1_DPID_Pos                 16                                                      /*!< USB DOEPCTL1: DPID Position             */
#define USB_DOEPCTL1_DPID_Msk                 (0x01UL << USB_DOEPCTL1_DPID_Pos)                       /*!< USB DOEPCTL1: DPID Mask                 */
#define USB_DOEPCTL1_NAKSts_Pos               17                                                      /*!< USB DOEPCTL1: NAKSts Position           */
#define USB_DOEPCTL1_NAKSts_Msk               (0x01UL << USB_DOEPCTL1_NAKSts_Pos)                     /*!< USB DOEPCTL1: NAKSts Mask               */
#define USB_DOEPCTL1_EPType_Pos               18                                                      /*!< USB DOEPCTL1: EPType Position           */
#define USB_DOEPCTL1_EPType_Msk               (0x03UL << USB_DOEPCTL1_EPType_Pos)                     /*!< USB DOEPCTL1: EPType Mask               */
#define USB_DOEPCTL1_Snp_Pos                  20                                                      /*!< USB DOEPCTL1: Snp Position              */
#define USB_DOEPCTL1_Snp_Msk                  (0x01UL << USB_DOEPCTL1_Snp_Pos)                        /*!< USB DOEPCTL1: Snp Mask                  */
#define USB_DOEPCTL1_Stall_Pos                21                                                      /*!< USB DOEPCTL1: Stall Position            */
#define USB_DOEPCTL1_Stall_Msk                (0x01UL << USB_DOEPCTL1_Stall_Pos)                      /*!< USB DOEPCTL1: Stall Mask                */
#define USB_DOEPCTL1_CNAK_Pos                 26                                                      /*!< USB DOEPCTL1: CNAK Position             */
#define USB_DOEPCTL1_CNAK_Msk                 (0x01UL << USB_DOEPCTL1_CNAK_Pos)                       /*!< USB DOEPCTL1: CNAK Mask                 */
#define USB_DOEPCTL1_SNAK_Pos                 27                                                      /*!< USB DOEPCTL1: SNAK Position             */
#define USB_DOEPCTL1_SNAK_Msk                 (0x01UL << USB_DOEPCTL1_SNAK_Pos)                       /*!< USB DOEPCTL1: SNAK Mask                 */
#define USB_DOEPCTL1_SetD0PID_Pos             28                                                      /*!< USB DOEPCTL1: SetD0PID Position         */
#define USB_DOEPCTL1_SetD0PID_Msk             (0x01UL << USB_DOEPCTL1_SetD0PID_Pos)                   /*!< USB DOEPCTL1: SetD0PID Mask             */
#define USB_DOEPCTL1_SetD1PID_Pos             29                                                      /*!< USB DOEPCTL1: SetD1PID Position         */
#define USB_DOEPCTL1_SetD1PID_Msk             (0x01UL << USB_DOEPCTL1_SetD1PID_Pos)                   /*!< USB DOEPCTL1: SetD1PID Mask             */
#define USB_DOEPCTL1_EPDis_Pos                30                                                      /*!< USB DOEPCTL1: EPDis Position            */
#define USB_DOEPCTL1_EPDis_Msk                (0x01UL << USB_DOEPCTL1_EPDis_Pos)                      /*!< USB DOEPCTL1: EPDis Mask                */
#define USB_DOEPCTL1_EPEna_Pos                31                                                      /*!< USB DOEPCTL1: EPEna Position            */
#define USB_DOEPCTL1_EPEna_Msk                (0x01UL << USB_DOEPCTL1_EPEna_Pos)                      /*!< USB DOEPCTL1: EPEna Mask                */

/* --------------------------------  USB_DOEPINT1  -------------------------------- */
#define USB_DOEPINT1_XferCompl_Pos            0                                                       /*!< USB DOEPINT1: XferCompl Position        */
#define USB_DOEPINT1_XferCompl_Msk            (0x01UL << USB_DOEPINT1_XferCompl_Pos)                  /*!< USB DOEPINT1: XferCompl Mask            */
#define USB_DOEPINT1_EPDisbld_Pos             1                                                       /*!< USB DOEPINT1: EPDisbld Position         */
#define USB_DOEPINT1_EPDisbld_Msk             (0x01UL << USB_DOEPINT1_EPDisbld_Pos)                   /*!< USB DOEPINT1: EPDisbld Mask             */
#define USB_DOEPINT1_AHBErr_Pos               2                                                       /*!< USB DOEPINT1: AHBErr Position           */
#define USB_DOEPINT1_AHBErr_Msk               (0x01UL << USB_DOEPINT1_AHBErr_Pos)                     /*!< USB DOEPINT1: AHBErr Mask               */
#define USB_DOEPINT1_SetUp_Pos                3                                                       /*!< USB DOEPINT1: SetUp Position            */
#define USB_DOEPINT1_SetUp_Msk                (0x01UL << USB_DOEPINT1_SetUp_Pos)                      /*!< USB DOEPINT1: SetUp Mask                */
#define USB_DOEPINT1_OUTTknEPdis_Pos          4                                                       /*!< USB DOEPINT1: OUTTknEPdis Position      */
#define USB_DOEPINT1_OUTTknEPdis_Msk          (0x01UL << USB_DOEPINT1_OUTTknEPdis_Pos)                /*!< USB DOEPINT1: OUTTknEPdis Mask          */
#define USB_DOEPINT1_StsPhseRcvd_Pos          5                                                       /*!< USB DOEPINT1: StsPhseRcvd Position      */
#define USB_DOEPINT1_StsPhseRcvd_Msk          (0x01UL << USB_DOEPINT1_StsPhseRcvd_Pos)                /*!< USB DOEPINT1: StsPhseRcvd Mask          */
#define USB_DOEPINT1_Back2BackSETup_Pos       6                                                       /*!< USB DOEPINT1: Back2BackSETup Position   */
#define USB_DOEPINT1_Back2BackSETup_Msk       (0x01UL << USB_DOEPINT1_Back2BackSETup_Pos)             /*!< USB DOEPINT1: Back2BackSETup Mask       */
#define USB_DOEPINT1_OutPktErr_Pos            8                                                       /*!< USB DOEPINT1: OutPktErr Position        */
#define USB_DOEPINT1_OutPktErr_Msk            (0x01UL << USB_DOEPINT1_OutPktErr_Pos)                  /*!< USB DOEPINT1: OutPktErr Mask            */
#define USB_DOEPINT1_BNAIntr_Pos              9                                                       /*!< USB DOEPINT1: BNAIntr Position          */
#define USB_DOEPINT1_BNAIntr_Msk              (0x01UL << USB_DOEPINT1_BNAIntr_Pos)                    /*!< USB DOEPINT1: BNAIntr Mask              */
#define USB_DOEPINT1_PktDrpSts_Pos            11                                                      /*!< USB DOEPINT1: PktDrpSts Position        */
#define USB_DOEPINT1_PktDrpSts_Msk            (0x01UL << USB_DOEPINT1_PktDrpSts_Pos)                  /*!< USB DOEPINT1: PktDrpSts Mask            */
#define USB_DOEPINT1_BbleErr_Pos              12                                                      /*!< USB DOEPINT1: BbleErr Position          */
#define USB_DOEPINT1_BbleErr_Msk              (0x01UL << USB_DOEPINT1_BbleErr_Pos)                    /*!< USB DOEPINT1: BbleErr Mask              */
#define USB_DOEPINT1_NAKIntrpt_Pos            13                                                      /*!< USB DOEPINT1: NAKIntrpt Position        */
#define USB_DOEPINT1_NAKIntrpt_Msk            (0x01UL << USB_DOEPINT1_NAKIntrpt_Pos)                  /*!< USB DOEPINT1: NAKIntrpt Mask            */
#define USB_DOEPINT1_NYETIntrpt_Pos           14                                                      /*!< USB DOEPINT1: NYETIntrpt Position       */
#define USB_DOEPINT1_NYETIntrpt_Msk           (0x01UL << USB_DOEPINT1_NYETIntrpt_Pos)                 /*!< USB DOEPINT1: NYETIntrpt Mask           */

/* --------------------------------  USB_DOEPDMA1  -------------------------------- */
#define USB_DOEPDMA1_DMAAddr_Pos              0                                                       /*!< USB DOEPDMA1: DMAAddr Position          */
#define USB_DOEPDMA1_DMAAddr_Msk              (0xffffffffUL << USB_DOEPDMA1_DMAAddr_Pos)              /*!< USB DOEPDMA1: DMAAddr Mask              */

/* --------------------------------  USB_DOEPDMAB1  ------------------------------- */
#define USB_DOEPDMAB1_DMABufferAddr_Pos       0                                                       /*!< USB DOEPDMAB1: DMABufferAddr Position   */
#define USB_DOEPDMAB1_DMABufferAddr_Msk       (0xffffffffUL << USB_DOEPDMAB1_DMABufferAddr_Pos)       /*!< USB DOEPDMAB1: DMABufferAddr Mask       */

/* --------------------------------  USB_DOEPCTL2  -------------------------------- */
#define USB_DOEPCTL2_MPS_Pos                  0                                                       /*!< USB DOEPCTL2: MPS Position              */
#define USB_DOEPCTL2_MPS_Msk                  (0x000007ffUL << USB_DOEPCTL2_MPS_Pos)                  /*!< USB DOEPCTL2: MPS Mask                  */
#define USB_DOEPCTL2_USBActEP_Pos             15                                                      /*!< USB DOEPCTL2: USBActEP Position         */
#define USB_DOEPCTL2_USBActEP_Msk             (0x01UL << USB_DOEPCTL2_USBActEP_Pos)                   /*!< USB DOEPCTL2: USBActEP Mask             */
#define USB_DOEPCTL2_DPID_Pos                 16                                                      /*!< USB DOEPCTL2: DPID Position             */
#define USB_DOEPCTL2_DPID_Msk                 (0x01UL << USB_DOEPCTL2_DPID_Pos)                       /*!< USB DOEPCTL2: DPID Mask                 */
#define USB_DOEPCTL2_NAKSts_Pos               17                                                      /*!< USB DOEPCTL2: NAKSts Position           */
#define USB_DOEPCTL2_NAKSts_Msk               (0x01UL << USB_DOEPCTL2_NAKSts_Pos)                     /*!< USB DOEPCTL2: NAKSts Mask               */
#define USB_DOEPCTL2_EPType_Pos               18                                                      /*!< USB DOEPCTL2: EPType Position           */
#define USB_DOEPCTL2_EPType_Msk               (0x03UL << USB_DOEPCTL2_EPType_Pos)                     /*!< USB DOEPCTL2: EPType Mask               */
#define USB_DOEPCTL2_Snp_Pos                  20                                                      /*!< USB DOEPCTL2: Snp Position              */
#define USB_DOEPCTL2_Snp_Msk                  (0x01UL << USB_DOEPCTL2_Snp_Pos)                        /*!< USB DOEPCTL2: Snp Mask                  */
#define USB_DOEPCTL2_Stall_Pos                21                                                      /*!< USB DOEPCTL2: Stall Position            */
#define USB_DOEPCTL2_Stall_Msk                (0x01UL << USB_DOEPCTL2_Stall_Pos)                      /*!< USB DOEPCTL2: Stall Mask                */
#define USB_DOEPCTL2_CNAK_Pos                 26                                                      /*!< USB DOEPCTL2: CNAK Position             */
#define USB_DOEPCTL2_CNAK_Msk                 (0x01UL << USB_DOEPCTL2_CNAK_Pos)                       /*!< USB DOEPCTL2: CNAK Mask                 */
#define USB_DOEPCTL2_SNAK_Pos                 27                                                      /*!< USB DOEPCTL2: SNAK Position             */
#define USB_DOEPCTL2_SNAK_Msk                 (0x01UL << USB_DOEPCTL2_SNAK_Pos)                       /*!< USB DOEPCTL2: SNAK Mask                 */
#define USB_DOEPCTL2_SetD0PID_Pos             28                                                      /*!< USB DOEPCTL2: SetD0PID Position         */
#define USB_DOEPCTL2_SetD0PID_Msk             (0x01UL << USB_DOEPCTL2_SetD0PID_Pos)                   /*!< USB DOEPCTL2: SetD0PID Mask             */
#define USB_DOEPCTL2_SetD1PID_Pos             29                                                      /*!< USB DOEPCTL2: SetD1PID Position         */
#define USB_DOEPCTL2_SetD1PID_Msk             (0x01UL << USB_DOEPCTL2_SetD1PID_Pos)                   /*!< USB DOEPCTL2: SetD1PID Mask             */
#define USB_DOEPCTL2_EPDis_Pos                30                                                      /*!< USB DOEPCTL2: EPDis Position            */
#define USB_DOEPCTL2_EPDis_Msk                (0x01UL << USB_DOEPCTL2_EPDis_Pos)                      /*!< USB DOEPCTL2: EPDis Mask                */
#define USB_DOEPCTL2_EPEna_Pos                31                                                      /*!< USB DOEPCTL2: EPEna Position            */
#define USB_DOEPCTL2_EPEna_Msk                (0x01UL << USB_DOEPCTL2_EPEna_Pos)                      /*!< USB DOEPCTL2: EPEna Mask                */

/* --------------------------------  USB_DOEPINT2  -------------------------------- */
#define USB_DOEPINT2_XferCompl_Pos            0                                                       /*!< USB DOEPINT2: XferCompl Position        */
#define USB_DOEPINT2_XferCompl_Msk            (0x01UL << USB_DOEPINT2_XferCompl_Pos)                  /*!< USB DOEPINT2: XferCompl Mask            */
#define USB_DOEPINT2_EPDisbld_Pos             1                                                       /*!< USB DOEPINT2: EPDisbld Position         */
#define USB_DOEPINT2_EPDisbld_Msk             (0x01UL << USB_DOEPINT2_EPDisbld_Pos)                   /*!< USB DOEPINT2: EPDisbld Mask             */
#define USB_DOEPINT2_AHBErr_Pos               2                                                       /*!< USB DOEPINT2: AHBErr Position           */
#define USB_DOEPINT2_AHBErr_Msk               (0x01UL << USB_DOEPINT2_AHBErr_Pos)                     /*!< USB DOEPINT2: AHBErr Mask               */
#define USB_DOEPINT2_SetUp_Pos                3                                                       /*!< USB DOEPINT2: SetUp Position            */
#define USB_DOEPINT2_SetUp_Msk                (0x01UL << USB_DOEPINT2_SetUp_Pos)                      /*!< USB DOEPINT2: SetUp Mask                */
#define USB_DOEPINT2_OUTTknEPdis_Pos          4                                                       /*!< USB DOEPINT2: OUTTknEPdis Position      */
#define USB_DOEPINT2_OUTTknEPdis_Msk          (0x01UL << USB_DOEPINT2_OUTTknEPdis_Pos)                /*!< USB DOEPINT2: OUTTknEPdis Mask          */
#define USB_DOEPINT2_StsPhseRcvd_Pos          5                                                       /*!< USB DOEPINT2: StsPhseRcvd Position      */
#define USB_DOEPINT2_StsPhseRcvd_Msk          (0x01UL << USB_DOEPINT2_StsPhseRcvd_Pos)                /*!< USB DOEPINT2: StsPhseRcvd Mask          */
#define USB_DOEPINT2_Back2BackSETup_Pos       6                                                       /*!< USB DOEPINT2: Back2BackSETup Position   */
#define USB_DOEPINT2_Back2BackSETup_Msk       (0x01UL << USB_DOEPINT2_Back2BackSETup_Pos)             /*!< USB DOEPINT2: Back2BackSETup Mask       */
#define USB_DOEPINT2_OutPktErr_Pos            8                                                       /*!< USB DOEPINT2: OutPktErr Position        */
#define USB_DOEPINT2_OutPktErr_Msk            (0x01UL << USB_DOEPINT2_OutPktErr_Pos)                  /*!< USB DOEPINT2: OutPktErr Mask            */
#define USB_DOEPINT2_BNAIntr_Pos              9                                                       /*!< USB DOEPINT2: BNAIntr Position          */
#define USB_DOEPINT2_BNAIntr_Msk              (0x01UL << USB_DOEPINT2_BNAIntr_Pos)                    /*!< USB DOEPINT2: BNAIntr Mask              */
#define USB_DOEPINT2_PktDrpSts_Pos            11                                                      /*!< USB DOEPINT2: PktDrpSts Position        */
#define USB_DOEPINT2_PktDrpSts_Msk            (0x01UL << USB_DOEPINT2_PktDrpSts_Pos)                  /*!< USB DOEPINT2: PktDrpSts Mask            */
#define USB_DOEPINT2_BbleErr_Pos              12                                                      /*!< USB DOEPINT2: BbleErr Position          */
#define USB_DOEPINT2_BbleErr_Msk              (0x01UL << USB_DOEPINT2_BbleErr_Pos)                    /*!< USB DOEPINT2: BbleErr Mask              */
#define USB_DOEPINT2_NAKIntrpt_Pos            13                                                      /*!< USB DOEPINT2: NAKIntrpt Position        */
#define USB_DOEPINT2_NAKIntrpt_Msk            (0x01UL << USB_DOEPINT2_NAKIntrpt_Pos)                  /*!< USB DOEPINT2: NAKIntrpt Mask            */
#define USB_DOEPINT2_NYETIntrpt_Pos           14                                                      /*!< USB DOEPINT2: NYETIntrpt Position       */
#define USB_DOEPINT2_NYETIntrpt_Msk           (0x01UL << USB_DOEPINT2_NYETIntrpt_Pos)                 /*!< USB DOEPINT2: NYETIntrpt Mask           */

/* --------------------------------  USB_DOEPDMA2  -------------------------------- */
#define USB_DOEPDMA2_DMAAddr_Pos              0                                                       /*!< USB DOEPDMA2: DMAAddr Position          */
#define USB_DOEPDMA2_DMAAddr_Msk              (0xffffffffUL << USB_DOEPDMA2_DMAAddr_Pos)              /*!< USB DOEPDMA2: DMAAddr Mask              */

/* --------------------------------  USB_DOEPDMAB2  ------------------------------- */
#define USB_DOEPDMAB2_DMABufferAddr_Pos       0                                                       /*!< USB DOEPDMAB2: DMABufferAddr Position   */
#define USB_DOEPDMAB2_DMABufferAddr_Msk       (0xffffffffUL << USB_DOEPDMAB2_DMABufferAddr_Pos)       /*!< USB DOEPDMAB2: DMABufferAddr Mask       */

/* --------------------------------  USB_DOEPCTL3  -------------------------------- */
#define USB_DOEPCTL3_MPS_Pos                  0                                                       /*!< USB DOEPCTL3: MPS Position              */
#define USB_DOEPCTL3_MPS_Msk                  (0x000007ffUL << USB_DOEPCTL3_MPS_Pos)                  /*!< USB DOEPCTL3: MPS Mask                  */
#define USB_DOEPCTL3_USBActEP_Pos             15                                                      /*!< USB DOEPCTL3: USBActEP Position         */
#define USB_DOEPCTL3_USBActEP_Msk             (0x01UL << USB_DOEPCTL3_USBActEP_Pos)                   /*!< USB DOEPCTL3: USBActEP Mask             */
#define USB_DOEPCTL3_DPID_Pos                 16                                                      /*!< USB DOEPCTL3: DPID Position             */
#define USB_DOEPCTL3_DPID_Msk                 (0x01UL << USB_DOEPCTL3_DPID_Pos)                       /*!< USB DOEPCTL3: DPID Mask                 */
#define USB_DOEPCTL3_NAKSts_Pos               17                                                      /*!< USB DOEPCTL3: NAKSts Position           */
#define USB_DOEPCTL3_NAKSts_Msk               (0x01UL << USB_DOEPCTL3_NAKSts_Pos)                     /*!< USB DOEPCTL3: NAKSts Mask               */
#define USB_DOEPCTL3_EPType_Pos               18                                                      /*!< USB DOEPCTL3: EPType Position           */
#define USB_DOEPCTL3_EPType_Msk               (0x03UL << USB_DOEPCTL3_EPType_Pos)                     /*!< USB DOEPCTL3: EPType Mask               */
#define USB_DOEPCTL3_Snp_Pos                  20                                                      /*!< USB DOEPCTL3: Snp Position              */
#define USB_DOEPCTL3_Snp_Msk                  (0x01UL << USB_DOEPCTL3_Snp_Pos)                        /*!< USB DOEPCTL3: Snp Mask                  */
#define USB_DOEPCTL3_Stall_Pos                21                                                      /*!< USB DOEPCTL3: Stall Position            */
#define USB_DOEPCTL3_Stall_Msk                (0x01UL << USB_DOEPCTL3_Stall_Pos)                      /*!< USB DOEPCTL3: Stall Mask                */
#define USB_DOEPCTL3_CNAK_Pos                 26                                                      /*!< USB DOEPCTL3: CNAK Position             */
#define USB_DOEPCTL3_CNAK_Msk                 (0x01UL << USB_DOEPCTL3_CNAK_Pos)                       /*!< USB DOEPCTL3: CNAK Mask                 */
#define USB_DOEPCTL3_SNAK_Pos                 27                                                      /*!< USB DOEPCTL3: SNAK Position             */
#define USB_DOEPCTL3_SNAK_Msk                 (0x01UL << USB_DOEPCTL3_SNAK_Pos)                       /*!< USB DOEPCTL3: SNAK Mask                 */
#define USB_DOEPCTL3_SetD0PID_Pos             28                                                      /*!< USB DOEPCTL3: SetD0PID Position         */
#define USB_DOEPCTL3_SetD0PID_Msk             (0x01UL << USB_DOEPCTL3_SetD0PID_Pos)                   /*!< USB DOEPCTL3: SetD0PID Mask             */
#define USB_DOEPCTL3_SetD1PID_Pos             29                                                      /*!< USB DOEPCTL3: SetD1PID Position         */
#define USB_DOEPCTL3_SetD1PID_Msk             (0x01UL << USB_DOEPCTL3_SetD1PID_Pos)                   /*!< USB DOEPCTL3: SetD1PID Mask             */
#define USB_DOEPCTL3_EPDis_Pos                30                                                      /*!< USB DOEPCTL3: EPDis Position            */
#define USB_DOEPCTL3_EPDis_Msk                (0x01UL << USB_DOEPCTL3_EPDis_Pos)                      /*!< USB DOEPCTL3: EPDis Mask                */
#define USB_DOEPCTL3_EPEna_Pos                31                                                      /*!< USB DOEPCTL3: EPEna Position            */
#define USB_DOEPCTL3_EPEna_Msk                (0x01UL << USB_DOEPCTL3_EPEna_Pos)                      /*!< USB DOEPCTL3: EPEna Mask                */

/* --------------------------------  USB_DOEPINT3  -------------------------------- */
#define USB_DOEPINT3_XferCompl_Pos            0                                                       /*!< USB DOEPINT3: XferCompl Position        */
#define USB_DOEPINT3_XferCompl_Msk            (0x01UL << USB_DOEPINT3_XferCompl_Pos)                  /*!< USB DOEPINT3: XferCompl Mask            */
#define USB_DOEPINT3_EPDisbld_Pos             1                                                       /*!< USB DOEPINT3: EPDisbld Position         */
#define USB_DOEPINT3_EPDisbld_Msk             (0x01UL << USB_DOEPINT3_EPDisbld_Pos)                   /*!< USB DOEPINT3: EPDisbld Mask             */
#define USB_DOEPINT3_AHBErr_Pos               2                                                       /*!< USB DOEPINT3: AHBErr Position           */
#define USB_DOEPINT3_AHBErr_Msk               (0x01UL << USB_DOEPINT3_AHBErr_Pos)                     /*!< USB DOEPINT3: AHBErr Mask               */
#define USB_DOEPINT3_SetUp_Pos                3                                                       /*!< USB DOEPINT3: SetUp Position            */
#define USB_DOEPINT3_SetUp_Msk                (0x01UL << USB_DOEPINT3_SetUp_Pos)                      /*!< USB DOEPINT3: SetUp Mask                */
#define USB_DOEPINT3_OUTTknEPdis_Pos          4                                                       /*!< USB DOEPINT3: OUTTknEPdis Position      */
#define USB_DOEPINT3_OUTTknEPdis_Msk          (0x01UL << USB_DOEPINT3_OUTTknEPdis_Pos)                /*!< USB DOEPINT3: OUTTknEPdis Mask          */
#define USB_DOEPINT3_StsPhseRcvd_Pos          5                                                       /*!< USB DOEPINT3: StsPhseRcvd Position      */
#define USB_DOEPINT3_StsPhseRcvd_Msk          (0x01UL << USB_DOEPINT3_StsPhseRcvd_Pos)                /*!< USB DOEPINT3: StsPhseRcvd Mask          */
#define USB_DOEPINT3_Back2BackSETup_Pos       6                                                       /*!< USB DOEPINT3: Back2BackSETup Position   */
#define USB_DOEPINT3_Back2BackSETup_Msk       (0x01UL << USB_DOEPINT3_Back2BackSETup_Pos)             /*!< USB DOEPINT3: Back2BackSETup Mask       */
#define USB_DOEPINT3_OutPktErr_Pos            8                                                       /*!< USB DOEPINT3: OutPktErr Position        */
#define USB_DOEPINT3_OutPktErr_Msk            (0x01UL << USB_DOEPINT3_OutPktErr_Pos)                  /*!< USB DOEPINT3: OutPktErr Mask            */
#define USB_DOEPINT3_BNAIntr_Pos              9                                                       /*!< USB DOEPINT3: BNAIntr Position          */
#define USB_DOEPINT3_BNAIntr_Msk              (0x01UL << USB_DOEPINT3_BNAIntr_Pos)                    /*!< USB DOEPINT3: BNAIntr Mask              */
#define USB_DOEPINT3_PktDrpSts_Pos            11                                                      /*!< USB DOEPINT3: PktDrpSts Position        */
#define USB_DOEPINT3_PktDrpSts_Msk            (0x01UL << USB_DOEPINT3_PktDrpSts_Pos)                  /*!< USB DOEPINT3: PktDrpSts Mask            */
#define USB_DOEPINT3_BbleErr_Pos              12                                                      /*!< USB DOEPINT3: BbleErr Position          */
#define USB_DOEPINT3_BbleErr_Msk              (0x01UL << USB_DOEPINT3_BbleErr_Pos)                    /*!< USB DOEPINT3: BbleErr Mask              */
#define USB_DOEPINT3_NAKIntrpt_Pos            13                                                      /*!< USB DOEPINT3: NAKIntrpt Position        */
#define USB_DOEPINT3_NAKIntrpt_Msk            (0x01UL << USB_DOEPINT3_NAKIntrpt_Pos)                  /*!< USB DOEPINT3: NAKIntrpt Mask            */
#define USB_DOEPINT3_NYETIntrpt_Pos           14                                                      /*!< USB DOEPINT3: NYETIntrpt Position       */
#define USB_DOEPINT3_NYETIntrpt_Msk           (0x01UL << USB_DOEPINT3_NYETIntrpt_Pos)                 /*!< USB DOEPINT3: NYETIntrpt Mask           */

/* --------------------------------  USB_DOEPDMA3  -------------------------------- */
#define USB_DOEPDMA3_DMAAddr_Pos              0                                                       /*!< USB DOEPDMA3: DMAAddr Position          */
#define USB_DOEPDMA3_DMAAddr_Msk              (0xffffffffUL << USB_DOEPDMA3_DMAAddr_Pos)              /*!< USB DOEPDMA3: DMAAddr Mask              */

/* --------------------------------  USB_DOEPDMAB3  ------------------------------- */
#define USB_DOEPDMAB3_DMABufferAddr_Pos       0                                                       /*!< USB DOEPDMAB3: DMABufferAddr Position   */
#define USB_DOEPDMAB3_DMABufferAddr_Msk       (0xffffffffUL << USB_DOEPDMAB3_DMABufferAddr_Pos)       /*!< USB DOEPDMAB3: DMABufferAddr Mask       */

/* --------------------------------  USB_DOEPCTL4  -------------------------------- */
#define USB_DOEPCTL4_MPS_Pos                  0                                                       /*!< USB DOEPCTL4: MPS Position              */
#define USB_DOEPCTL4_MPS_Msk                  (0x000007ffUL << USB_DOEPCTL4_MPS_Pos)                  /*!< USB DOEPCTL4: MPS Mask                  */
#define USB_DOEPCTL4_USBActEP_Pos             15                                                      /*!< USB DOEPCTL4: USBActEP Position         */
#define USB_DOEPCTL4_USBActEP_Msk             (0x01UL << USB_DOEPCTL4_USBActEP_Pos)                   /*!< USB DOEPCTL4: USBActEP Mask             */
#define USB_DOEPCTL4_DPID_Pos                 16                                                      /*!< USB DOEPCTL4: DPID Position             */
#define USB_DOEPCTL4_DPID_Msk                 (0x01UL << USB_DOEPCTL4_DPID_Pos)                       /*!< USB DOEPCTL4: DPID Mask                 */
#define USB_DOEPCTL4_NAKSts_Pos               17                                                      /*!< USB DOEPCTL4: NAKSts Position           */
#define USB_DOEPCTL4_NAKSts_Msk               (0x01UL << USB_DOEPCTL4_NAKSts_Pos)                     /*!< USB DOEPCTL4: NAKSts Mask               */
#define USB_DOEPCTL4_EPType_Pos               18                                                      /*!< USB DOEPCTL4: EPType Position           */
#define USB_DOEPCTL4_EPType_Msk               (0x03UL << USB_DOEPCTL4_EPType_Pos)                     /*!< USB DOEPCTL4: EPType Mask               */
#define USB_DOEPCTL4_Snp_Pos                  20                                                      /*!< USB DOEPCTL4: Snp Position              */
#define USB_DOEPCTL4_Snp_Msk                  (0x01UL << USB_DOEPCTL4_Snp_Pos)                        /*!< USB DOEPCTL4: Snp Mask                  */
#define USB_DOEPCTL4_Stall_Pos                21                                                      /*!< USB DOEPCTL4: Stall Position            */
#define USB_DOEPCTL4_Stall_Msk                (0x01UL << USB_DOEPCTL4_Stall_Pos)                      /*!< USB DOEPCTL4: Stall Mask                */
#define USB_DOEPCTL4_CNAK_Pos                 26                                                      /*!< USB DOEPCTL4: CNAK Position             */
#define USB_DOEPCTL4_CNAK_Msk                 (0x01UL << USB_DOEPCTL4_CNAK_Pos)                       /*!< USB DOEPCTL4: CNAK Mask                 */
#define USB_DOEPCTL4_SNAK_Pos                 27                                                      /*!< USB DOEPCTL4: SNAK Position             */
#define USB_DOEPCTL4_SNAK_Msk                 (0x01UL << USB_DOEPCTL4_SNAK_Pos)                       /*!< USB DOEPCTL4: SNAK Mask                 */
#define USB_DOEPCTL4_SetD0PID_Pos             28                                                      /*!< USB DOEPCTL4: SetD0PID Position         */
#define USB_DOEPCTL4_SetD0PID_Msk             (0x01UL << USB_DOEPCTL4_SetD0PID_Pos)                   /*!< USB DOEPCTL4: SetD0PID Mask             */
#define USB_DOEPCTL4_SetD1PID_Pos             29                                                      /*!< USB DOEPCTL4: SetD1PID Position         */
#define USB_DOEPCTL4_SetD1PID_Msk             (0x01UL << USB_DOEPCTL4_SetD1PID_Pos)                   /*!< USB DOEPCTL4: SetD1PID Mask             */
#define USB_DOEPCTL4_EPDis_Pos                30                                                      /*!< USB DOEPCTL4: EPDis Position            */
#define USB_DOEPCTL4_EPDis_Msk                (0x01UL << USB_DOEPCTL4_EPDis_Pos)                      /*!< USB DOEPCTL4: EPDis Mask                */
#define USB_DOEPCTL4_EPEna_Pos                31                                                      /*!< USB DOEPCTL4: EPEna Position            */
#define USB_DOEPCTL4_EPEna_Msk                (0x01UL << USB_DOEPCTL4_EPEna_Pos)                      /*!< USB DOEPCTL4: EPEna Mask                */

/* --------------------------------  USB_DOEPINT4  -------------------------------- */
#define USB_DOEPINT4_XferCompl_Pos            0                                                       /*!< USB DOEPINT4: XferCompl Position        */
#define USB_DOEPINT4_XferCompl_Msk            (0x01UL << USB_DOEPINT4_XferCompl_Pos)                  /*!< USB DOEPINT4: XferCompl Mask            */
#define USB_DOEPINT4_EPDisbld_Pos             1                                                       /*!< USB DOEPINT4: EPDisbld Position         */
#define USB_DOEPINT4_EPDisbld_Msk             (0x01UL << USB_DOEPINT4_EPDisbld_Pos)                   /*!< USB DOEPINT4: EPDisbld Mask             */
#define USB_DOEPINT4_AHBErr_Pos               2                                                       /*!< USB DOEPINT4: AHBErr Position           */
#define USB_DOEPINT4_AHBErr_Msk               (0x01UL << USB_DOEPINT4_AHBErr_Pos)                     /*!< USB DOEPINT4: AHBErr Mask               */
#define USB_DOEPINT4_SetUp_Pos                3                                                       /*!< USB DOEPINT4: SetUp Position            */
#define USB_DOEPINT4_SetUp_Msk                (0x01UL << USB_DOEPINT4_SetUp_Pos)                      /*!< USB DOEPINT4: SetUp Mask                */
#define USB_DOEPINT4_OUTTknEPdis_Pos          4                                                       /*!< USB DOEPINT4: OUTTknEPdis Position      */
#define USB_DOEPINT4_OUTTknEPdis_Msk          (0x01UL << USB_DOEPINT4_OUTTknEPdis_Pos)                /*!< USB DOEPINT4: OUTTknEPdis Mask          */
#define USB_DOEPINT4_StsPhseRcvd_Pos          5                                                       /*!< USB DOEPINT4: StsPhseRcvd Position      */
#define USB_DOEPINT4_StsPhseRcvd_Msk          (0x01UL << USB_DOEPINT4_StsPhseRcvd_Pos)                /*!< USB DOEPINT4: StsPhseRcvd Mask          */
#define USB_DOEPINT4_Back2BackSETup_Pos       6                                                       /*!< USB DOEPINT4: Back2BackSETup Position   */
#define USB_DOEPINT4_Back2BackSETup_Msk       (0x01UL << USB_DOEPINT4_Back2BackSETup_Pos)             /*!< USB DOEPINT4: Back2BackSETup Mask       */
#define USB_DOEPINT4_OutPktErr_Pos            8                                                       /*!< USB DOEPINT4: OutPktErr Position        */
#define USB_DOEPINT4_OutPktErr_Msk            (0x01UL << USB_DOEPINT4_OutPktErr_Pos)                  /*!< USB DOEPINT4: OutPktErr Mask            */
#define USB_DOEPINT4_BNAIntr_Pos              9                                                       /*!< USB DOEPINT4: BNAIntr Position          */
#define USB_DOEPINT4_BNAIntr_Msk              (0x01UL << USB_DOEPINT4_BNAIntr_Pos)                    /*!< USB DOEPINT4: BNAIntr Mask              */
#define USB_DOEPINT4_PktDrpSts_Pos            11                                                      /*!< USB DOEPINT4: PktDrpSts Position        */
#define USB_DOEPINT4_PktDrpSts_Msk            (0x01UL << USB_DOEPINT4_PktDrpSts_Pos)                  /*!< USB DOEPINT4: PktDrpSts Mask            */
#define USB_DOEPINT4_BbleErr_Pos              12                                                      /*!< USB DOEPINT4: BbleErr Position          */
#define USB_DOEPINT4_BbleErr_Msk              (0x01UL << USB_DOEPINT4_BbleErr_Pos)                    /*!< USB DOEPINT4: BbleErr Mask              */
#define USB_DOEPINT4_NAKIntrpt_Pos            13                                                      /*!< USB DOEPINT4: NAKIntrpt Position        */
#define USB_DOEPINT4_NAKIntrpt_Msk            (0x01UL << USB_DOEPINT4_NAKIntrpt_Pos)                  /*!< USB DOEPINT4: NAKIntrpt Mask            */
#define USB_DOEPINT4_NYETIntrpt_Pos           14                                                      /*!< USB DOEPINT4: NYETIntrpt Position       */
#define USB_DOEPINT4_NYETIntrpt_Msk           (0x01UL << USB_DOEPINT4_NYETIntrpt_Pos)                 /*!< USB DOEPINT4: NYETIntrpt Mask           */

/* --------------------------------  USB_DOEPDMA4  -------------------------------- */
#define USB_DOEPDMA4_DMAAddr_Pos              0                                                       /*!< USB DOEPDMA4: DMAAddr Position          */
#define USB_DOEPDMA4_DMAAddr_Msk              (0xffffffffUL << USB_DOEPDMA4_DMAAddr_Pos)              /*!< USB DOEPDMA4: DMAAddr Mask              */

/* --------------------------------  USB_DOEPDMAB4  ------------------------------- */
#define USB_DOEPDMAB4_DMABufferAddr_Pos       0                                                       /*!< USB DOEPDMAB4: DMABufferAddr Position   */
#define USB_DOEPDMAB4_DMABufferAddr_Msk       (0xffffffffUL << USB_DOEPDMAB4_DMABufferAddr_Pos)       /*!< USB DOEPDMAB4: DMABufferAddr Mask       */

/* ---------------------------------  USB_PCGCCTL  -------------------------------- */
#define USB_PCGCCTL_StopPclk_Pos              0                                                       /*!< USB PCGCCTL: StopPclk Position          */
#define USB_PCGCCTL_StopPclk_Msk              (0x01UL << USB_PCGCCTL_StopPclk_Pos)                    /*!< USB PCGCCTL: StopPclk Mask              */
#define USB_PCGCCTL_GateHclk_Pos              1                                                       /*!< USB PCGCCTL: GateHclk Position          */
#define USB_PCGCCTL_GateHclk_Msk              (0x01UL << USB_PCGCCTL_GateHclk_Pos)                    /*!< USB PCGCCTL: GateHclk Mask              */
#define USB_PCGCCTL_PwrClmp_Pos               2                                                       /*!< USB PCGCCTL: PwrClmp Position           */
#define USB_PCGCCTL_PwrClmp_Msk               (0x01UL << USB_PCGCCTL_PwrClmp_Pos)                     /*!< USB PCGCCTL: PwrClmp Mask               */
#define USB_PCGCCTL_RstPdwnModule_Pos         3                                                       /*!< USB PCGCCTL: RstPdwnModule Position     */
#define USB_PCGCCTL_RstPdwnModule_Msk         (0x01UL << USB_PCGCCTL_RstPdwnModule_Pos)               /*!< USB PCGCCTL: RstPdwnModule Mask         */
#define USB_PCGCCTL_Enbl_L1Gating_Pos         5                                                       /*!< USB PCGCCTL: Enbl_L1Gating Position     */
#define USB_PCGCCTL_Enbl_L1Gating_Msk         (0x01UL << USB_PCGCCTL_Enbl_L1Gating_Pos)               /*!< USB PCGCCTL: Enbl_L1Gating Mask         */
#define USB_PCGCCTL_PhySleep_Pos              6                                                       /*!< USB PCGCCTL: PhySleep Position          */
#define USB_PCGCCTL_PhySleep_Msk              (0x01UL << USB_PCGCCTL_PhySleep_Pos)                    /*!< USB PCGCCTL: PhySleep Mask              */
#define USB_PCGCCTL_L1Suspended_Pos           7                                                       /*!< USB PCGCCTL: L1Suspended Position       */
#define USB_PCGCCTL_L1Suspended_Msk           (0x01UL << USB_PCGCCTL_L1Suspended_Pos)                 /*!< USB PCGCCTL: L1Suspended Mask           */
#define USB_PCGCCTL_RestoreMode_Pos           9                                                       /*!< USB PCGCCTL: RestoreMode Position       */
#define USB_PCGCCTL_RestoreMode_Msk           (0x01UL << USB_PCGCCTL_RestoreMode_Pos)                 /*!< USB PCGCCTL: RestoreMode Mask           */
#define USB_PCGCCTL_EssRegRestored_Pos        13                                                      /*!< USB PCGCCTL: EssRegRestored Position    */
#define USB_PCGCCTL_EssRegRestored_Msk        (0x01UL << USB_PCGCCTL_EssRegRestored_Pos)              /*!< USB PCGCCTL: EssRegRestored Mask        */
#define USB_PCGCCTL_RestoreValue_Pos          14                                                      /*!< USB PCGCCTL: RestoreValue Position      */
#define USB_PCGCCTL_RestoreValue_Msk          (0x0003ffffUL << USB_PCGCCTL_RestoreValue_Pos)          /*!< USB PCGCCTL: RestoreValue Mask          */



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
#define PCU_BASE                        0x40001540UL
#define FMC_BASE                        0x40000100UL
#define DMAC0_BASE                      0x40000400UL
#define DMAC1_BASE                      0x40000410UL
#define DMAC2_BASE                      0x40000420UL
#define DMAC3_BASE                      0x40000430UL
#define WDT_BASE                        0x40001A00UL
#define WT_BASE                         0x40002000UL
#define TIMER10_BASE                    0x40002100UL
#define TIMER11_BASE                    0x40002200UL
#define TIMER12_BASE                    0x40002300UL
#define TIMER13_BASE                    0x40002700UL
#define TIMER14_BASE                    0x40002800UL
#define TIMER15_BASE                    0x40002900UL
#define TIMER16_BASE                    0x40002A00UL
#define TIMER20_BASE                    0x40002500UL
#define TIMER21_BASE                    0x40002600UL
#define TIMER30_BASE                    0x40002400UL
#define USART10_BASE                    0x40003800UL
#define USART11_BASE                    0x40003900UL
#define USART12_BASE                    0x40003A00UL
#define USART13_BASE                    0x40003B00UL
#define UART0_BASE                      0x40004000UL
#define UART1_BASE                      0x40004100UL
#define I2C0_BASE                       0x40004800UL
#define I2C1_BASE                       0x40004900UL
#define I2C2_BASE                       0x40004A00UL
#define ADC_BASE                        0x40003000UL
#define DAC_BASE                        0x40003450UL
#define ADPCM_BASE                      0x40004700UL
#define CMP_BASE                        0x40003420UL
#define TOUCH_BASE                      0x40003600UL
#define LCD_BASE                        0x40005000UL
#define LED_BASE                        0x40006000UL
#define CRC_BASE                        0x40000300UL
#define USB_BASE                        0x50000000UL


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
#define PF                              ((PORTF_Type              *) PF_BASE)
#define PCU                             ((PCU_Type                *) PCU_BASE)
#define FMC                             ((FMC_Type                *) FMC_BASE)
#define DMAC0                           ((DMAC_Type               *) DMAC0_BASE)
#define DMAC1                           ((DMAC_Type               *) DMAC1_BASE)
#define DMAC2                           ((DMAC_Type               *) DMAC2_BASE)
#define DMAC3                           ((DMAC_Type               *) DMAC3_BASE)
#define WDT                             ((WDT_Type                *) WDT_BASE)
#define WT                              ((WT_Type                 *) WT_BASE)
#define TIMER10                         ((TIMER1n_Type            *) TIMER10_BASE)
#define TIMER11                         ((TIMER1n_Type            *) TIMER11_BASE)
#define TIMER12                         ((TIMER1n_Type            *) TIMER12_BASE)
#define TIMER13                         ((TIMER1n_Type            *) TIMER13_BASE)
#define TIMER14                         ((TIMER1n_Type            *) TIMER14_BASE)
#define TIMER15                         ((TIMER1n_Type            *) TIMER15_BASE)
#define TIMER16                         ((TIMER1n_Type            *) TIMER16_BASE)
#define TIMER20                         ((TIMER2n_Type            *) TIMER20_BASE)
#define TIMER21                         ((TIMER2n_Type            *) TIMER21_BASE)
#define TIMER30                         ((TIMER3n_Type            *) TIMER30_BASE)
#define USART10                         ((USART_Type              *) USART10_BASE)
#define USART11                         ((USART_Type              *) USART11_BASE)
#define USART12                         ((USART_Type              *) USART12_BASE)
#define USART13                         ((USART_Type              *) USART13_BASE)
#define UART0                           ((UART_Type               *) UART0_BASE)
#define UART1                           ((UART_Type               *) UART1_BASE)
#define I2C0                            ((I2C_Type                *) I2C0_BASE)
#define I2C1                            ((I2C_Type                *) I2C1_BASE)
#define I2C2                            ((I2C_Type                *) I2C2_BASE)
#define ADC                             ((ADC_Type                *) ADC_BASE)
#define DAC                             ((DAC_Type                *) DAC_BASE)
#define ADPCM                           ((ADPCM_Type              *) ADPCM_BASE)
#define CMP                             ((CMP_Type                *) CMP_BASE)
#define TOUCH                           ((TOUCH_Type              *) TOUCH_BASE)
#define LCD                             ((LCD_Type                *) LCD_BASE)
#define LED                             ((LED_Type                *) LED_BASE)
#define CRC                             ((CRC_Type                *) CRC_BASE)
#define USB                             ((USB_Type                *) USB_BASE)


/** @} */ /* End of group Device_Peripheral_Registers */
/** @} */ /* End of group A31G31x */
/** @} */ /* End of group ABOV Semiconductor Co., Ltd. */

#ifdef __cplusplus
}
#endif


#endif  /* A31G31x_H */

