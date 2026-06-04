
/****************************************************************************************************//**
 * @file     a31g32x.h
 *
 * @brief    CMSIS Cortex-M0PLUS Peripheral Access Layer Header File for
 *           A31G32x from ABOV Semiconductor Co., Ltd..
 *
 * @version  V1.0
 * @date     16. February 2022
 *
 * @note     Generated with SVDConv V2.85b 
 *           from CMSIS SVD File 'a31g32x.svd' Version 1.0,
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



/** @addtogroup VENDOR ABOV Semiconductor Co., Ltd.
  * @{
  */

/** @addtogroup A31G32x
  * @{
  */

#ifndef A31G32X_H
#define A31G32X_H

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
/* ---------------------  A31G324 Specific Interrupt Numbers  --------------------- */
  LVI_IRQn                      =   0,              /*!<   0  LVI                                                              */
  SYSCLKFAIL_IRQn               =   1,              /*!<   1  SYSCLKFAIL                                                       */
  WDT_IRQn                      =   2,              /*!<   2  WDT                                                              */
  GPIOAB_IRQn                   =   3,              /*!<   3  GPIOAB                                                           */
  GPIOCF_IRQn                   =   4,              /*!<   4  GPIOCF                                                           */
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
  SPI20_IRQn                    =  19,              /*!<  19  SPI20                                                            */
  SPI21_IRQn                    =  20,              /*!<  20  SPI21                                                            */
  TIMER13_IRQn                  =  21,              /*!<  21  TIMER13                                                          */
  TIMER40_IRQn                  =  22,              /*!<  22  TIMER40                                                          */
  RTC_IRQn                      =  23,              /*!<  23  RTC                                                              */
  USART12_IRQn                  =  26,              /*!<  26  USART12                                                          */
  USART13_IRQn                  =  27,              /*!<  27  USART13                                                          */
  TEMPERATURE_IRQn              =  28,              /*!<  28  TEMPERATURE                                                      */
  COMP_IRQn                     =  29,              /*!<  29  COMP                                                             */
  USB_IRQn                      =  30,              /*!<  30  USB                                                              */
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
//#include "system_a31xxxx.h"                         /*!< A31x System                                                        */
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

typedef struct {                                    /*!< SCU Structure                                                         */
  __I  uint32_t  RESERVED;
  __IO uint32_t  SMR;                               /*!< System Mode Register                                                  */
  __IO uint32_t  SCR;                               /*!< System Control Register                                               */
  __I  uint32_t  RESERVED1;
  __IO uint32_t  WUER;                              /*!< Wake up source enable register                                        */
  __IO uint32_t  WUSR;                              /*!< Wake up source status register                                        */
  __IO uint32_t  RSER;                              /*!< Reset source enable register                                          */
  __IO uint32_t  RSSR;                              /*!< Reset source status register                                          */
  __IO uint32_t  PRER1;                             /*!< Peripheral reset enable register 1                                    */
  __IO uint32_t  PRER2;                             /*!< Peripheral reset enable register 2                                    */
  __IO uint32_t  PER1;                              /*!< Peripheral enable register 1                                          */
  __IO uint32_t  PER2;                              /*!< Peripheral enable register 2                                          */
  __IO uint32_t  PCER1;                             /*!< Peripheral clock enable register 1                                    */
  __IO uint32_t  PCER2;                             /*!< Peripheral clock enable register 2                                    */
  __IO uint32_t  PPCLKSR;                           /*!< Peripheral clock selection register                                   */
  __I  uint32_t  RESERVED2;
  __IO uint32_t  CSCR;                              /*!< Clock Source Control register                                         */
  __IO uint32_t  SCCR;                              /*!< System Clock Control register                                         */
  __IO uint32_t  CMR;                               /*!< Clock Monitoring register                                             */
  __IO uint32_t  NMIR;                              /*!< NMI control register                                                  */
  __IO uint32_t  COR;                               /*!< Clock Output Control register                                         */
  __I  uint32_t  RESERVED3[3];
  __IO uint32_t  PLLCON;                            /*!< PLL Control register                                                  */
  __IO uint32_t  VDCCON;                            /*!< VDC Control register                                                  */
  __IO uint32_t  PDRCON;                            /*!< PDR Control register                                                  */
  __IO uint32_t  LSICON;                            /*!< Low Speed Internal OSC Control Register                               */
  __I  uint32_t  RESERVED4[4];
  __IO uint32_t  EOSCR;                             /*!< External Oscillator control register                                  */
  __IO uint32_t  EMODR;                             /*!< External mode pin read register                                       */
  __IO uint32_t  RSTDBCR;                           /*!< Pin Reset Debounce Control register                                   */
  __I  uint32_t  RESERVED5;
  __IO uint32_t  MCCR1;                             /*!< Miscellaneous Clock Control Register 1                                */
  __IO uint32_t  MCCR2;                             /*!< Miscellaneous Clock Control Register 2                                */
  __IO uint32_t  MCCR3;                             /*!< Miscellaneous Clock Control Register 3                                */
  __IO uint32_t  MCCR4;                             /*!< Miscellaneous Clock Control Register 4                                */
  __IO uint32_t  MCCR5;                             /*!< Miscellaneous Clock Control Register 5                                */
  __IO uint32_t  MCCR6;                             /*!< Miscellaneous Clock Control Register 6                                */
} SCU_Type;


/* ================================================================================ */
/* ================                      SCUCC                     ================ */
/* ================================================================================ */


/**
  * @brief CHIP CONFIGURATION (SCUCC)
  */

typedef struct {                                    /*!< SCUCC Structure                                                       */
  __I  uint32_t  VENDORID;                          /*!< Vendor Identification Register                                        */
  __I  uint32_t  CHIPID;                            /*!< Chip Identification Register                                          */
  __I  uint32_t  REVNR;                             /*!< Revision Number Register                                              */
} SCUCC_Type;


/* ================================================================================ */
/* ================                      SCULV                     ================ */
/* ================================================================================ */


/**
  * @brief LOW VOLTAGE INDICATOR(LVI) AND LOW VOLTAGE RESET(LVR) (SCULV)
  */

typedef struct {                                    /*!< SCULV Structure                                                       */
  __IO uint32_t  LVICR;                             /*!< Low Voltage Indicator Control Register                                */
  __IO uint32_t  LVRCR;                             /*!< Low Voltage Reset Control Register                                    */
  __IO uint32_t  LVRCNFIG;                          /*!< Configuration for Low Voltage Reset                                   */
} SCULV_Type;


/* ================================================================================ */
/* ================                      PORT                      ================ */
/* ================================================================================ */


/**
  * @brief General Port A (PORT)
  */

typedef struct {                                    /*!< PORT Structure                                                        */
  __IO uint32_t  MOD;                               /*!< Port n Mode Register                                                  */
  __IO uint32_t  TYP;                               /*!< Port n Output Type Selection Register                                 */
  __IO uint32_t  AFSR1;                             /*!< Port n Alternative Function Selection Register 1                      */
  __IO uint32_t  AFSR2;                             /*!< Port n Alternative Function Selection Register 2                      */
  __IO uint32_t  PUPD;                              /*!< Port n Pull-up/down Resistor Selection Register                       */
  __I  uint32_t  INDR;                              /*!< Port n Input Data Register                                            */
  __IO uint32_t  OUTDR;                             /*!< Port n Output Data Register                                           */
  __O  uint32_t  BSR;                               /*!< Port n Output Bit Set Register                                        */
  __O  uint32_t  BCR;                               /*!< Port n Output Bit Clear Register                                      */
  __IO uint32_t  OUTDMSK;                           /*!< Port n Output Data Mask Register                                      */
  __IO uint32_t  DBCR;                              /*!< Port n Debounce Control Register                                      */
  __IO uint32_t  IER;                               /*!< Port n interrupt enable register                                      */
  __IO uint32_t  ISR;                               /*!< Port n interrupt status register                                      */
  __IO uint32_t  ICR;                               /*!< Port n interrupt control register                                     */
} PORT_Type;


/* ================================================================================ */
/* ================                       PF                       ================ */
/* ================================================================================ */


/**
  * @brief General Port A (PF)
  */

typedef struct {                                    /*!< PF Structure                                                          */
  __IO uint32_t  MOD;                               /*!< Port n Mode Register                                                  */
  __IO uint32_t  TYP;                               /*!< Port n Output Type Selection Register                                 */
  __IO uint32_t  AFSR1;                             /*!< Port n Alternative Function Selection Register 1                      */
  __IO uint32_t  AFSR2;                             /*!< Port n Alternative Function Selection Register 2                      */
  __IO uint32_t  PUPD;                              /*!< Port n Pull-up/down Resistor Selection Register                       */
  __I  uint32_t  INDR;                              /*!< Port n Input Data Register                                            */
  __IO uint32_t  OUTDR;                             /*!< Port n Output Data Register                                           */
  __O  uint32_t  BSR;                               /*!< Port n Output Bit Set Register                                        */
  __O  uint32_t  BCR;                               /*!< Port n Output Bit Clear Register                                      */
  __IO uint32_t  OUTDMSK;                           /*!< Port n Output Data Mask Register                                      */
  __IO uint32_t  DBCR;                              /*!< Port n Debounce Control Register                                      */
  __IO uint32_t  IER;                               /*!< Port n interrupt enable register                                      */
  __IO uint32_t  ISR;                               /*!< Port n interrupt status register                                      */
  __IO uint32_t  ICR;                               /*!< Port n interrupt control register                                     */
  __IO uint32_t  PLSR;                              /*!< PORT F level select register                                          */
  __I  uint32_t  RESERVED;
  __IO uint32_t  USBCON;                            /*!< USB CONTROL Register                                                  */
} PF_Type;


/* ================================================================================ */
/* ================                       PCU                      ================ */
/* ================================================================================ */


/**
  * @brief Port Control Mode Enable Register (PCU)
  */

typedef struct {                                    /*!< PCU Structure                                                         */
  __O  uint32_t  PORTEN;                            /*!< Port Access Enable 0x15, 0x51                                         */
} PCU_Type;


/* ================================================================================ */
/* ================                       FMC                      ================ */
/* ================================================================================ */


/**
  * @brief FLASH MEMORY CONTROLLER (FMC)
  */

typedef struct {                                    /*!< FMC Structure                                                         */
  __I  uint32_t  RESERVED;
  __IO uint32_t  MR;                                /*!< Flash Memory Mode Select register                                     */
  __IO uint32_t  CR;                                /*!< Flash Memory Control register                                         */
  __IO uint32_t  AR;                                /*!< Flash Memory Address register                                         */
  __IO uint32_t  DR;                                /*!< Flash Memory Data register                                            */
  __I  uint32_t  RESERVED1;
  __IO uint32_t  BUSY;                              /*!< Flash Write Busy Status Register                                      */
  __I  uint32_t  RESERVED2;
  __IO uint32_t  CRC;                               /*!< Flash CRC16 check value                                               */
  __I  uint32_t  RESERVED3[3];
  __IO uint32_t  CFG;                               /*!< Flash Memory Config Register                                          */
  __IO uint32_t  WPROT;                             /*!< Write Protection Register                                             */
  __I  uint32_t  RESERVED4;
  __IO uint32_t  LOCK;                              /*!< Flash LOCK register                                                   */
} FMC_Type;


/* ================================================================================ */
/* ================                      DMAC0                     ================ */
/* ================================================================================ */


/**
  * @brief DIRECT MEMORY ACCESS CONTROLLER (DMAC0)
  */

typedef struct {                                    /*!< DMAC0 Structure                                                       */
  __IO uint32_t  CR;                                /*!< DMA Controller Configuration Register                                 */
  __IO uint32_t  SR;                                /*!< DMA Controller Status Register                                        */
  __IO uint32_t  PAR;                               /*!< DMA Channel n Peripheral Address                                      */
  __IO uint32_t  MAR;                               /*!< DMA Channel n Memory Address                                          */
} DMAC0_Type;


/* ================================================================================ */
/* ================                       EBI                      ================ */
/* ================================================================================ */


/**
  * @brief Static memory controller (EBI)
  */

typedef struct {                                    /*!< EBI Structure                                                         */
  __IO uint32_t  SMIBCR0;                           /*!< Memory area configuration Register 0                                  */
  __IO uint32_t  SMIBCR1;                           /*!< Memory area configuration Register 1                                  */
  __IO uint32_t  SMIBCR2;                           /*!< Memory area configuration Register 2                                  */
  __IO uint32_t  SMIBCR3;                           /*!< Memory area configuration Register 3                                  */
} EBI_Type;


/* ================================================================================ */
/* ================                       WDT                      ================ */
/* ================================================================================ */


/**
  * @brief WATCH-DOG TIMER (WDT)
  */

typedef struct {                                    /*!< WDT Structure                                                         */
  __IO uint32_t  CR;                                /*!< Watch-dog Timer Control Register                                      */
  __IO uint32_t  SR;                                /*!< Watch-dog Timer Status Register                                       */
  __IO uint32_t  DR;                                /*!< Watch-dog Timer Data Register                                         */
  __I  uint32_t  CNT;                               /*!< Watch-dog Timer Counter Register                                      */
  __IO uint32_t  WINDR;                             /*!< Watch-dog Timer Window Data Register (Note: Once any value is
                                                         written to this window data register, the register can't be
                                                          changed until a system reset.)                                       */
  __O  uint32_t  CNTR;                              /*!< Watch-dog Timer Counter Reload Register                               */
} WDT_Type;


/* ================================================================================ */
/* ================                       WT                       ================ */
/* ================================================================================ */


/**
  * @brief WATCH TIMER (WT)
  */

typedef struct {                                    /*!< WT Structure                                                          */
  __IO uint32_t  CR;                                /*!< Watch Timer Control Register                                          */
  __IO uint32_t  DR;                                /*!< Watch Timer Data Register                                             */
  __I  uint32_t  CNT;                               /*!< Watch Timer Counter Register                                          */
} WT_Type;


/* ================================================================================ */
/* ================                     TIMER1n                    ================ */
/* ================================================================================ */


/**
  * @brief TIMER COUNTER 10/11/12/13 (TIMER1n)
  */

typedef struct {                                    /*!< TIMER1n Structure                                                     */
  __IO uint32_t  CR;                                /*!< Timer/Counter n Control Register                                      */
  __IO uint32_t  ADR;                               /*!< Timer/Counter n A Data Register                                       */
  __IO uint32_t  BDR;                               /*!< Timer/Counter n B Data Register                                       */
  __I  uint32_t  CAPDR;                             /*!< Timer/Counter n Capture Data Register                                 */
  __IO uint32_t  PREDR;                             /*!< Timer/Counter n Prescaler Data Register                               */
  __I  uint32_t  CNT;                               /*!< Timer/Counter n Counter Register                                      */
} TIMER1n_Type;


/* ================================================================================ */
/* ================                     TIMER20                    ================ */
/* ================================================================================ */


/**
  * @brief TIMER COUNTER 20/21 (TIMER20)
  */

typedef struct {                                    /*!< TIMER20 Structure                                                     */
  __IO uint32_t  CR;                                /*!< Timer/Counter n Control Register                                      */
  __IO uint32_t  ADR;                               /*!< Timer/Counter n A Data Register                                       */
  __IO uint32_t  BDR;                               /*!< Timer/Counter n B Data Register                                       */
  __I  uint32_t  CAPDR;                             /*!< Timer/Counter n Capture Data Register                                 */
  __IO uint32_t  PREDR;                             /*!< Timer/Counter n Prescaler Data Register                               */
  __I  uint32_t  CNT;                               /*!< Timer/Counter n Counter Register                                      */
} TIMER20_Type;


/* ================================================================================ */
/* ================                     TIMER30                    ================ */
/* ================================================================================ */


/**
  * @brief TIMER COUNTER 30 (TIMER30)
  */

typedef struct {                                    /*!< TIMER30 Structure                                                     */
  __IO uint32_t  CR;                                /*!< Timer/Counter 30 Control Register                                     */
  __IO uint32_t  PDR;                               /*!< Timer/Counter 30 Period Data Register                                 */
  __IO uint32_t  ADR;                               /*!< Timer/Counter 30 A Data Register                                      */
  __IO uint32_t  BDR;                               /*!< Timer/Counter 30 B Data Register                                      */
  __IO uint32_t  CDR;                               /*!< Timer/Counter 30 C Data Register                                      */
  __I  uint32_t  CAPDR;                             /*!< Timer/Counter 30 Capture Data Register                                */
  __IO uint32_t  PREDR;                             /*!< Timer/Counter 30 Prescaler Data Register                              */
  __I  uint32_t  CNT;                               /*!< Timer/Counter 30 Counter Register                                     */
  __IO uint32_t  OUTCR;                             /*!< Timer/Counter 30 Output Control Register                              */
  __IO uint32_t  DLY;                               /*!< Timer/Counter 30 PWM Output Delay Data Register                       */
  __IO uint32_t  INTCR;                             /*!< Timer/Counter 30 Interrupt Control Register                           */
  __IO uint32_t  INTFLAG;                           /*!< Timer/Counter 30 Interrupt Flag Register                              */
  __IO uint32_t  HIZCR;                             /*!< Timer/Counter 30 High-Impedance Control Register                      */
  __IO uint32_t  ADTCR;                             /*!< Timer/Counter 30 A/DC Trigger Control Register                        */
  __IO uint32_t  ADTDR;                             /*!< Timer/Counter 30 A/DC Trigger Generator Data Register                 */
} TIMER30_Type;


/* ================================================================================ */
/* ================                     TIMER40                    ================ */
/* ================================================================================ */


/**
  * @brief TIMER COUNTER 40 (TIMER40)
  */

typedef struct {                                    /*!< TIMER40 Structure                                                     */
  __IO uint32_t  CR;                                /*!< Timer/Counter 40 Control Register                                     */
  __IO uint32_t  ADR;                               /*!< Timer/Counter 40 A Data Register                                      */
  __IO uint32_t  BDR;                               /*!< Timer/Counter 40 B Data Register                                      */
  __I  uint32_t  CAPDR;                             /*!< Timer/Counter 40 Capture Data Register                                */
  __IO uint32_t  PREDR;                             /*!< Timer/Counter 40 Prescaler Data Register                              */
  __IO uint32_t  PREDR2;                            /*!< Timer/Counter 40 Prescaler Data Register 2                            */
  __I  uint32_t  CNT;                               /*!< Timer/Counter 40 Counter Register                                     */
} TIMER40_Type;


/* ================================================================================ */
/* ================                      USART                     ================ */
/* ================================================================================ */


/**
  * @brief USART 10 (UART + SPI) (USART)
  */

typedef struct {                                    /*!< USART Structure                                                       */
  __IO uint32_t  CR1;                               /*!< USART1n Control Register 1                                            */
  __IO uint32_t  CR2;                               /*!< USART1n Control Register 2                                            */
  __I  uint32_t  RESERVED;
  __IO uint32_t  ST;                                /*!< USART1n Status Register                                               */
  __IO uint32_t  BDR;                               /*!< USARTn Baud Rate Generation Register                                  */
  __IO uint32_t  DR;                                /*!< USART1n Data Register                                                 */
  __IO uint32_t  FPCR;                              /*!< USART1n Floating Point Count Register                                 */
  __IO uint32_t  RTO;                               /*!< USART1n RTO Register                                                  */
} USART_Type;


/* ================================================================================ */
/* ================                      I2C0                      ================ */
/* ================================================================================ */


/**
  * @brief I2C0 (I2C0)
  */

typedef struct {                                    /*!< I2C0 Structure                                                        */
  __IO uint32_t  CR;                                /*!< I2Cn Control Register                                                 */
  __IO uint32_t  ST;                                /*!< I2Cn Status Register                                                  */
  __IO uint32_t  SAR1;                              /*!< I2Cn Slave Address Register 1                                         */
  __IO uint32_t  SAR2;                              /*!< I2Cn Slave Address Register 2                                         */
  __IO uint32_t  DR;                                /*!< I2Cn Data Register                                                    */
  __IO uint32_t  SDHR;                              /*!< I2Cn SDA Hold Time Register                                           */
  __IO uint32_t  SCLR;                              /*!< I2Cn SCL Low Period Register                                          */
  __IO uint32_t  SCHR;                              /*!< I2Cn SCL High Period Register                                         */
  __IO uint32_t  MR;                                /*!< I2Cn Mode Control Register                                            */
} I2C0_Type;


/* ================================================================================ */
/* ================                      SPI20                     ================ */
/* ================================================================================ */


/**
  * @brief Serial Peripheral Interface (SPI20)
  */

typedef struct {                                    /*!< SPI20 Structure                                                       */
  
  union {
    __I  uint32_t  RDR;                             /*!< SPI n Received Data Register                                          */
    __O  uint32_t  TDR;                             /*!< SPI2 n Transmit Data Register                                         */
  };
  __IO uint32_t  CR;                                /*!< SPI Control Register                                                  */
  __IO uint32_t  SR;                                /*!< SPI Status Register                                                   */
  __IO uint32_t  BR;                                /*!< SPI Baud Rate Register                                                */
  __IO uint32_t  EN;                                /*!< SPI Enable Register                                                   */
  __IO uint32_t  LR;                                /*!< SPI Delay Length Register                                             */
} SPI20_Type;


/* ================================================================================ */
/* ================                       ADC                      ================ */
/* ================================================================================ */


/**
  * @brief 12-BIT A/D CONVERTER (ADC)
  */

typedef struct {                                    /*!< ADC Structure                                                         */
  __IO uint32_t  MR;                                /*!< A/D Converter Mode Register                                           */
  __IO uint32_t  CSCR;                              /*!< A/D Converter Current Sequence/Channel Register                       */
  __IO uint32_t  CCR;                               /*!< A/D Converter Clock Register                                          */
  __IO uint32_t  TRG;                               /*!< A/D Converter Trigger Selection Register                              */
  __I  uint32_t  RESERVED[2];
  __IO uint32_t  SCSR1;                             /*!< A/D Converter Channel Selection 1 Register                            */
  __IO uint32_t  SCSR2;                             /*!< A/D Converter Channel Selection 2 Register                            */
  __IO uint32_t  CR;                                /*!< A/D Converter Control Register                                        */
  __IO uint32_t  SR;                                /*!< A/D Converter State Register                                          */
  __IO uint32_t  IER;                               /*!< A/D Converter Interrupt Enable Register                               */
  __I  uint32_t  DDR;                               /*!< A/D Converter DMA Data Register                                       */
  __I  uint32_t  DR0;                               /*!< A/D Converter Sequence 0~7 Data Register                              */
  __I  uint32_t  DR1;                               /*!< A/D Converter Sequence 0~7 Data Register                              */
  __I  uint32_t  DR2;                               /*!< A/D Converter Sequence 0~7 Data Register                              */
  __I  uint32_t  DR3;                               /*!< A/D Converter Sequence 0~7 Data Register                              */
  __I  uint32_t  DR4;                               /*!< A/D Converter Sequence 0~7 Data Register                              */
  __I  uint32_t  DR5;                               /*!< A/D Converter Sequence 0~7 Data Register                              */
  __I  uint32_t  DR6;                               /*!< A/D Converter Sequence 0~7 Data Register                              */
  __I  uint32_t  DR7;                               /*!< A/D Converter Sequence 0~7 Data Register                              */
  __I  uint32_t  RESERVED1[8];
  __IO uint32_t  CMPR;                              /*!< A/D Converter Channel Compare Register                                */
} ADC_Type;


/* ================================================================================ */
/* ================                       DAC                      ================ */
/* ================================================================================ */


/**
  * @brief 12-BIT D/A CONVERTER (DAC)
  */

typedef struct {                                    /*!< DAC Structure                                                         */
  __IO uint32_t  DR;                                /*!< D/A Converter Data Register                                           */
  __I  uint32_t  BR;                                /*!< D/A Converter Buffer Register                                         */
  __IO uint32_t  CR;                                /*!< D/A Converter Control Register                                        */
  __IO uint32_t  PGSR;                              /*!< Programmable Gain Control Register                                    */
  __IO uint32_t  OFSCR;                             /*!< D/A Converter Offset Control Register                                 */
} DAC_Type;


/* ================================================================================ */
/* ================                      COMP                      ================ */
/* ================================================================================ */


/**
  * @brief COMPARATOR (COMP)
  */

typedef struct {                                    /*!< COMP Structure                                                        */
  __IO uint32_t  COMP0CR;                           /*!< Comparator 0 Control Register                                         */
  __IO uint32_t  COMP1CR;                           /*!< Comparator 1 Control Register                                         */
  __I  uint32_t  RESERVED[2];
  __IO uint32_t  COMPDBNC;                          /*!< Comparator Debounce Register                                          */
  __IO uint32_t  COMPICON;                          /*!< Comparator Interrupt Control Register                                 */
  __IO uint32_t  COMPIEN;                           /*!< Comparator Interrupt Enable Register                                  */
  __I  uint32_t  COMPIST;                           /*!< Comparator Interrupt Status Register                                  */
  __IO uint32_t  COMPICLR;                          /*!< Comparator Interrupt Clear Register                                   */
} COMP_Type;


/* ================================================================================ */
/* ================                       CRC                      ================ */
/* ================================================================================ */


/**
  * @brief CYCLIC REDUNDANCY CHECK AND CHECKSUM (CRC)
  */

typedef struct {                                    /*!< CRC Structure                                                         */
  __IO uint32_t  CR;                                /*!< CRC/Checksum Control Register. Notes: 1. The CRCRLT register
                                                         and the CRC/Checksum block should be initialized by writing
                                                          "1b" to the RLTCLR bit before a new CRC/Checksum calculation.
                                                          2. The CRCRUN bit should be set to "1b" last time after setting
                                                          appropriate values to the registers. 3. On the user mode, it
                                                          will be calculated every writing data to the CRCIN register
                                                          during CRCRUN==1. 4. On the user mode with SARINC==0, the block
                                                          is finished by writing "0b" to the CRCRUN bit. 4. It is prohibited
                                                          writing any                                                          */
  __IO uint32_t  IN;                                /*!< CRC/Checksum Input Data Register                                      */
  __I  uint32_t  RLT;                               /*!< CRC/Checksum Result Data Register                                     */
  __IO uint32_t  INIT;                              /*!< CRC/Checksum Initial Data Register                                    */
} CRC_Type;


/* ================================================================================ */
/* ================                     HSICMU                     ================ */
/* ================================================================================ */


/**
  * @brief HSICMU (HSICMU)
  */

typedef struct {                                    /*!< HSICMU Structure                                                      */
  __IO uint32_t  CR;                                /*!< High Speed Internal OSC Clock Management Unit Control Register        */
  __IO uint32_t  CFG;                               /*!< High Speed Internal OSC Clock Management Unit Config Register         */
  __I  uint32_t  ISR;                               /*!< High Speed Internal OSC Clock Management Unit Interrupt & Status
                                                         Register                                                              */
  __O  uint32_t  ICR;                               /*!< High Speed Internal OSC Clock Management Unit Interrupt & Status
                                                         Clear Register                                                        */
  __IO uint32_t  TRIM;                              /*!< High Speed Internal OSC Clock Management Unit TRIM Register           */
  __I  uint32_t  ATRIM;                             /*!< High Speed Internal OSC Clock Management Unit Auto TRIM Register      */
  __I  uint32_t  CAP;                               /*!< High Speed Internal OSC Clock Management Unit Capture Register        */
} HSICMU_Type;


/* ================================================================================ */
/* ================                       USB                      ================ */
/* ================================================================================ */


/**
  * @brief USB (USB)
  */

typedef struct {                                    /*!< USB Structure                                                         */
  __IO uint32_t  GOTGCTL;                           /*!< Interrupt Source Mask Register                                        */
  __IO uint32_t  GOTGINT;                           /*!< Interrupt Register                                                    */
  __IO uint32_t  GAHBCFG;                           /*!< AHB Configuration Register                                            */
  __IO uint32_t  GUSBCFG;                           /*!< USB Configuration Register                                            */
  __IO uint32_t  GRSTCTL;                           /*!< Reset Register                                                        */
  __IO uint32_t  GINTSTS;                           /*!< Interrupt Register                                                    */
  __IO uint32_t  GINTMSK;                           /*!< Interrupt Mask Register                                               */
  __IO uint32_t  GRXSTSR;                           /*!< Receive Status Debug Read Register                                    */
  __IO uint32_t  GRXSTSP;                           /*!< Receive Status Read/Pop Register                                      */
  __IO uint32_t  GRXFSIZ;                           /*!< Receive FIFO Size Register                                            */
  __IO uint32_t  GNPTXFSIZ;                         /*!< Non-periodic Transmit FIFO Size Register                              */
  __I  uint32_t  RESERVED[5];
  __IO uint32_t  GSNPSID;                           /*!< Synopsys ID Register                                                  */
  __IO uint32_t  GHWCFG1;                           /*!< User HW Config1 Register                                              */
  __IO uint32_t  GHWCFG2;                           /*!< User HW Config2 Register                                              */
  __IO uint32_t  GHWCFG3;                           /*!< User HW Config3 Register                                              */
  __IO uint32_t  GHWCFG4;                           /*!< User HW Config4 Register                                              */
  __IO uint32_t  GLPMCFG;                           /*!< LPM Config Register                                                   */
  __IO uint32_t  GPWRDN;                            /*!< Global Power Down register                                            */
  __IO uint32_t  GDFIFOCFG;                         /*!< Global DFIFO Configuration Register                                   */
  __I  uint32_t  RESERVED1[55];
  __IO uint32_t  DIEPTXF1;                          /*!< Device IN Endpoint Transmit FIFO Size Register i                      */
  __IO uint32_t  DIEPTXF2;                          /*!< Device IN Endpoint Transmit FIFO Size Register i                      */
  __IO uint32_t  DIEPTXF3;                          /*!< Device IN Endpoint Transmit FIFO Size Register i                      */
  __IO uint32_t  DIEPTXF4;                          /*!< Device IN Endpoint Transmit FIFO Size Register i                      */
  __I  uint32_t  RESERVED2[429];
  __IO uint32_t  DCFG;                              /*!< Device Configuration Register                                         */
  __IO uint32_t  DCTL;                              /*!< Device Control Register                                               */
  __I  uint32_t  DSTS;                              /*!< Device Status Register                                                */
  __I  uint32_t  RESERVED3;
  __IO uint32_t  DIEPMSK;                           /*!< Device IN Endpoint Common Interrupt Mask Register                     */
  __IO uint32_t  DOEPMSK;                           /*!< Device OUT Endpoint Common Interrupt Mask Register                    */
  __I  uint32_t  DAINT;                             /*!< Device All Endpoints Interrupt Register                               */
  __IO uint32_t  DAINTMSK;                          /*!< Device All Endpoints Interrupt Mask Register                          */
  __I  uint32_t  RESERVED4[4];
  __IO uint32_t  DTHRCTL;                           /*!< Device Threshold Control Register                                     */
  __IO uint32_t  DIEPEMPMSK;                        /*!< Device IN Endpoint FIFO Empty Interrupt Mask Register                 */
  __I  uint32_t  RESERVED5[50];
  __IO uint32_t  DIEPCTL0;                          /*!< Device Control IN Endpoint 0 Control Register                         */
  __I  uint32_t  RESERVED6;
  __IO uint32_t  DIEPINT0;                          /*!< Device IN Endpoint 0 Interrupt Register                               */
  __I  uint32_t  RESERVED7[2];
  __IO uint32_t  DIEPDMA0;                          /*!< Device IN Endpoint 0 DMA Address Register                             */
  __IO uint32_t  DTXFSTS0;                          /*!< Device IN Endpoint Transmit FIFO Status Register 0                    */
  __IO uint32_t  DIEPDMAB0;                         /*!< Device IN Endpoint 16 Buffer Address Register                         */
  __IO uint32_t  DIEPCTL1;                          /*!< Device Control IN Endpoint 1 Control Register                         */
  __I  uint32_t  RESERVED8;
  __IO uint32_t  DIEPINT1;                          /*!< Device IN Endpoint 1 Interrupt Register                               */
  __I  uint32_t  RESERVED9[2];
  __IO uint32_t  DIEPDMA1;                          /*!< Device IN Endpoint 1 DMA Address Register                             */
  __IO uint32_t  DTXFSTS1;                          /*!< Device IN Endpoint Transmit FIFO Status Register 1                    */
  __IO uint32_t  DIEPDMAB1;                         /*!< Device IN Endpoint 16 Buffer Address Register                         */
  __IO uint32_t  DIEPCTL2;                          /*!< Device Control IN Endpoint 1 Control Register                         */
  __I  uint32_t  RESERVED10;
  __IO uint32_t  DIEPINT2;                          /*!< Device IN Endpoint 1 Interrupt Register                               */
  __I  uint32_t  RESERVED11[2];
  __IO uint32_t  DIEPDMA2;                          /*!< Device IN Endpoint 1 DMA Address Register                             */
  __IO uint32_t  DTXFSTS2;                          /*!< Device IN Endpoint Transmit FIFO Status Register 1                    */
  __IO uint32_t  DIEPDMAB2;                         /*!< Device IN Endpoint 16 Buffer Address Register                         */
  __IO uint32_t  DIEPCTL3;                          /*!< Device Control IN Endpoint 1 Control Register                         */
  __I  uint32_t  RESERVED12;
  __IO uint32_t  DIEPINT3;                          /*!< Device IN Endpoint 1 Interrupt Register                               */
  __I  uint32_t  RESERVED13[2];
  __IO uint32_t  DIEPDMA3;                          /*!< Device IN Endpoint 1 DMA Address Register                             */
  __IO uint32_t  DTXFSTS3;                          /*!< Device IN Endpoint Transmit FIFO Status Register 1                    */
  __IO uint32_t  DIEPDMAB3;                         /*!< Device IN Endpoint 16 Buffer Address Register                         */
  __IO uint32_t  DIEPCTL4;                          /*!< Device Control IN Endpoint 4 Control Register                         */
  __I  uint32_t  RESERVED14;
  __IO uint32_t  DIEPINT4;                          /*!< Device IN Endpoint 4 Interrupt Register                               */
  __I  uint32_t  RESERVED15[2];
  __IO uint32_t  DIEPDMA4;                          /*!< Device IN Endpoint 4 DMA Address Register                             */
  __IO uint32_t  DTXFSTS4;                          /*!< Device IN Endpoint Transmit FIFO Status Register 4                    */
  __IO uint32_t  DIEPDMAB4;                         /*!< Device IN Endpoint 16 Buffer Address Register                         */
  __I  uint32_t  RESERVED16[88];
  __IO uint32_t  DOEPCTL0;                          /*!< Device Control OUT Endpoint 0 Control Register                        */
  __I  uint32_t  RESERVED17;
  __IO uint32_t  DOEPINT0;                          /*!< Device OUT Endpoint 0 Interrupt Register                              */
  __I  uint32_t  RESERVED18[2];
  __IO uint32_t  DOEPDMA0;                          /*!< Device OUT Endpoint 0 DMA Address Register                            */
  __I  uint32_t  RESERVED19;
  __IO uint32_t  DOEPDMAB0;                         /*!< Device OUT Endpoint 16 Buffer Address Register                        */
  __IO uint32_t  DOEPCTL1;                          /*!< Device Control OUT Endpoint 1 Control Register                        */
  __I  uint32_t  RESERVED20;
  __IO uint32_t  DOEPINT1;                          /*!< Device OUT Endpoint 1 Interrupt Register                              */
  __I  uint32_t  RESERVED21[2];
  __IO uint32_t  DOEPDMA1;                          /*!< Device OUT Endpoint 1 DMA Address Register                            */
  __I  uint32_t  RESERVED22;
  __IO uint32_t  DOEPDMAB1;                         /*!< Device OUT Endpoint 16 Buffer Address Register                        */
  __IO uint32_t  DOEPCTL2;                          /*!< Device Control OUT Endpoint 2 Control Register                        */
  __I  uint32_t  RESERVED23;
  __IO uint32_t  DOEPINT2;                          /*!< Device OUT Endpoint 2 Interrupt Register                              */
  __I  uint32_t  RESERVED24[2];
  __IO uint32_t  DOEPDMA2;                          /*!< Device OUT Endpoint 2 DMA Address Register                            */
  __I  uint32_t  RESERVED25;
  __IO uint32_t  DOEPDMAB2;                         /*!< Device OUT Endpoint 16 Buffer Address Register                        */
  __IO uint32_t  DOEPCTL3;                          /*!< Device Control OUT Endpoint 3 Control Register                        */
  __I  uint32_t  RESERVED26;
  __IO uint32_t  DOEPINT3;                          /*!< Device OUT Endpoint 3 Interrupt Register                              */
  __I  uint32_t  RESERVED27[2];
  __IO uint32_t  DOEPDMA3;                          /*!< Device OUT Endpoint 3 DMA Address Register                            */
  __I  uint32_t  RESERVED28;
  __IO uint32_t  DOEPDMAB3;                         /*!< Device OUT Endpoint 16 Buffer Address Register                        */
  __IO uint32_t  DOEPCTL4;                          /*!< Device Control OUT Endpoint 4 Control Register                        */
  __I  uint32_t  RESERVED29;
  __IO uint32_t  DOEPINT4;                          /*!< Device OUT Endpoint 4 Interrupt Register                              */
  __I  uint32_t  RESERVED30[2];
  __IO uint32_t  DOEPDMA4;                          /*!< Device OUT Endpoint 4 DMA Address Register                            */
  __I  uint32_t  RESERVED31;
  __IO uint32_t  DOEPDMAB4;                         /*!< Device OUT Endpoint 16 Buffer Address Register                        */
  __I  uint32_t  RESERVED32[152];
  __IO uint32_t  PCGCCTL;                           /*!< Power and Clock Gating Control Register                               */
} USB_Type;


/* ================================================================================ */
/* ================                       RTC                      ================ */
/* ================================================================================ */


/**
  * @brief Real-time clock (RTC)
  */

typedef struct {                                    /*!< RTC Structure                                                         */
  __IO uint32_t  RTCCR;                             /*!< RTC Control Register                                                  */
  __I  uint32_t  RESERVED;
  __IO uint32_t  ERRCOR;                            /*!< Error Correction Register                                             */
  __IO uint32_t  SEC;                               /*!< Second Count Register                                                 */
  __IO uint32_t  MIN;                               /*!< Minute Count Register                                                 */
  __IO uint32_t  HOUR;                              /*!< Hour Count Register                                                   */
  __IO uint32_t  DAY;                               /*!< Day Count Register                                                    */
  __IO uint32_t  WEEK;                              /*!< Week Count Register                                                   */
  __IO uint32_t  MONTH;                             /*!< Month Count Register                                                  */
  __IO uint32_t  YEAR;                              /*!< Year Count Register                                                   */
  __IO uint32_t  ALARMWM;                           /*!< Alarm Register                                                        */
  __IO uint32_t  SUBDR;                             /*!< Sub-second counter Compare Reigster                                   */
  __IO uint32_t  TIME_TS;                           /*!< TimeStamp Time Reigster                                               */
  __IO uint32_t  DATE_TS;                           /*!< TimeStamp Date Reigster                                               */
  __IO uint32_t  BKUPDR1;                           /*!< Backup Register 1                                                     */
  __IO uint32_t  BKUPDR2;                           /*!< Backup Register 2                                                     */
  __IO uint32_t  BKUPDR3;                           /*!< Backup Register 3                                                     */
  __IO uint32_t  BKUPDR4;                           /*!< Backup Register 4                                                     */
  __IO uint32_t  RTCPFCR;                           /*!< RTC Pin Function Configuration Register                               */
} RTC_Type;


/* ================================================================================ */
/* ================                      TEMP                      ================ */
/* ================================================================================ */


/**
  * @brief Temp Sensor (TEMP)
  */

typedef struct {                                    /*!< TEMP Structure                                                        */
  __IO uint32_t  TSENSECON;                         /*!< Temp Sensor Control Register                                          */
  __IO uint32_t  TSREFPEROID;                       /*!< Temp Sensor Reference Clock Period Register                           */
  __I  uint32_t  TSSENSECNT;                        /*!< Temp Sensor Sense Clock Count Register                                */
} TEMP_Type;


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
#define SCU_SMR_PREVMODE_Msk                  (0x07UL << SCU_SMR_PREVMODE_Pos)                        /*!< SCU SMR: PREVMODE Mask                  */
#define SCU_SMR_VDCAON_Pos                    8                                                       /*!< SCU SMR: VDCAON Position                */
#define SCU_SMR_VDCAON_Msk                    (0x01UL << SCU_SMR_VDCAON_Pos)                          /*!< SCU SMR: VDCAON Mask                    */
#define SCU_SMR_BGRAON_Pos                    9                                                       /*!< SCU SMR: BGRAON Position                */
#define SCU_SMR_BGRAON_Msk                    (0x01UL << SCU_SMR_BGRAON_Pos)                          /*!< SCU SMR: BGRAON Mask                    */
#define SCU_SMR_LSIAON_Pos                    10                                                      /*!< SCU SMR: LSIAON Position                */
#define SCU_SMR_LSIAON_Msk                    (0x01UL << SCU_SMR_LSIAON_Pos)                          /*!< SCU SMR: LSIAON Mask                    */

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
#define SCU_WUER_USART10_Pos                  3                                                       /*!< SCU WUER: USART10 Position              */
#define SCU_WUER_USART10_Msk                  (0x01UL << SCU_WUER_USART10_Pos)                        /*!< SCU WUER: USART10 Mask                  */
#define SCU_WUER_USART11_Pos                  4                                                       /*!< SCU WUER: USART11 Position              */
#define SCU_WUER_USART11_Msk                  (0x01UL << SCU_WUER_USART11_Pos)                        /*!< SCU WUER: USART11 Mask                  */
#define SCU_WUER_RTC_Pos                      5                                                       /*!< SCU WUER: RTC Position                  */
#define SCU_WUER_RTC_Msk                      (0x01UL << SCU_WUER_RTC_Pos)                            /*!< SCU WUER: RTC Mask                      */
#define SCU_WUER_COMP_Pos                     6                                                       /*!< SCU WUER: COMP Position                 */
#define SCU_WUER_COMP_Msk                     (0x01UL << SCU_WUER_COMP_Pos)                           /*!< SCU WUER: COMP Mask                     */
#define SCU_WUER_GPIOAWUE_Pos                 8                                                       /*!< SCU WUER: GPIOAWUE Position             */
#define SCU_WUER_GPIOAWUE_Msk                 (0x01UL << SCU_WUER_GPIOAWUE_Pos)                       /*!< SCU WUER: GPIOAWUE Mask                 */
#define SCU_WUER_GPIOBWUE_Pos                 9                                                       /*!< SCU WUER: GPIOBWUE Position             */
#define SCU_WUER_GPIOBWUE_Msk                 (0x01UL << SCU_WUER_GPIOBWUE_Pos)                       /*!< SCU WUER: GPIOBWUE Mask                 */
#define SCU_WUER_GPIOCWUE_Pos                 10                                                      /*!< SCU WUER: GPIOCWUE Position             */
#define SCU_WUER_GPIOCWUE_Msk                 (0x01UL << SCU_WUER_GPIOCWUE_Pos)                       /*!< SCU WUER: GPIOCWUE Mask                 */
#define SCU_WUER_USART12_Pos                  11                                                      /*!< SCU WUER: USART12 Position              */
#define SCU_WUER_USART12_Msk                  (0x01UL << SCU_WUER_USART12_Pos)                        /*!< SCU WUER: USART12 Mask                  */
#define SCU_WUER_USART13_Pos                  12                                                      /*!< SCU WUER: USART13 Position              */
#define SCU_WUER_USART13_Msk                  (0x01UL << SCU_WUER_USART13_Pos)                        /*!< SCU WUER: USART13 Mask                  */
#define SCU_WUER_GPIOFWUE_Pos                 13                                                      /*!< SCU WUER: GPIOFWUE Position             */
#define SCU_WUER_GPIOFWUE_Msk                 (0x01UL << SCU_WUER_GPIOFWUE_Pos)                       /*!< SCU WUER: GPIOFWUE Mask                 */
#define SCU_WUER_I2C0WUE_Pos                  14                                                      /*!< SCU WUER: I2C0WUE Position              */
#define SCU_WUER_I2C0WUE_Msk                  (0x01UL << SCU_WUER_I2C0WUE_Pos)                        /*!< SCU WUER: I2C0WUE Mask                  */
#define SCU_WUER_I2C1WUE_Pos                  15                                                      /*!< SCU WUER: I2C1WUE Position              */
#define SCU_WUER_I2C1WUE_Msk                  (0x01UL << SCU_WUER_I2C1WUE_Pos)                        /*!< SCU WUER: I2C1WUE Mask                  */

/* ----------------------------------  SCU_WUSR  ---------------------------------- */
#define SCU_WUSR_LVDWU_Pos                    0                                                       /*!< SCU WUSR: LVDWU Position                */
#define SCU_WUSR_LVDWU_Msk                    (0x01UL << SCU_WUSR_LVDWU_Pos)                          /*!< SCU WUSR: LVDWU Mask                    */
#define SCU_WUSR_WDTWU_Pos                    1                                                       /*!< SCU WUSR: WDTWU Position                */
#define SCU_WUSR_WDTWU_Msk                    (0x01UL << SCU_WUSR_WDTWU_Pos)                          /*!< SCU WUSR: WDTWU Mask                    */
#define SCU_WUSR_WTWU_Pos                     2                                                       /*!< SCU WUSR: WTWU Position                 */
#define SCU_WUSR_WTWU_Msk                     (0x01UL << SCU_WUSR_WTWU_Pos)                           /*!< SCU WUSR: WTWU Mask                     */
#define SCU_WUSR_USART10_Pos                  3                                                       /*!< SCU WUSR: USART10 Position              */
#define SCU_WUSR_USART10_Msk                  (0x01UL << SCU_WUSR_USART10_Pos)                        /*!< SCU WUSR: USART10 Mask                  */
#define SCU_WUSR_USART11_Pos                  4                                                       /*!< SCU WUSR: USART11 Position              */
#define SCU_WUSR_USART11_Msk                  (0x01UL << SCU_WUSR_USART11_Pos)                        /*!< SCU WUSR: USART11 Mask                  */
#define SCU_WUSR_RTC_Pos                      5                                                       /*!< SCU WUSR: RTC Position                  */
#define SCU_WUSR_RTC_Msk                      (0x01UL << SCU_WUSR_RTC_Pos)                            /*!< SCU WUSR: RTC Mask                      */
#define SCU_WUSR_COMP_Pos                     6                                                       /*!< SCU WUSR: COMP Position                 */
#define SCU_WUSR_COMP_Msk                     (0x01UL << SCU_WUSR_COMP_Pos)                           /*!< SCU WUSR: COMP Mask                     */
#define SCU_WUSR_GPIOAWU_Pos                  8                                                       /*!< SCU WUSR: GPIOAWU Position              */
#define SCU_WUSR_GPIOAWU_Msk                  (0x01UL << SCU_WUSR_GPIOAWU_Pos)                        /*!< SCU WUSR: GPIOAWU Mask                  */
#define SCU_WUSR_GPIOBWU_Pos                  9                                                       /*!< SCU WUSR: GPIOBWU Position              */
#define SCU_WUSR_GPIOBWU_Msk                  (0x01UL << SCU_WUSR_GPIOBWU_Pos)                        /*!< SCU WUSR: GPIOBWU Mask                  */
#define SCU_WUSR_GPIOCWU_Pos                  10                                                      /*!< SCU WUSR: GPIOCWU Position              */
#define SCU_WUSR_GPIOCWU_Msk                  (0x01UL << SCU_WUSR_GPIOCWU_Pos)                        /*!< SCU WUSR: GPIOCWU Mask                  */
#define SCU_WUSR_USART12_Pos                  11                                                      /*!< SCU WUSR: USART12 Position              */
#define SCU_WUSR_USART12_Msk                  (0x01UL << SCU_WUSR_USART12_Pos)                        /*!< SCU WUSR: USART12 Mask                  */
#define SCU_WUSR_USART13_Pos                  12                                                      /*!< SCU WUSR: USART13 Position              */
#define SCU_WUSR_USART13_Msk                  (0x01UL << SCU_WUSR_USART13_Pos)                        /*!< SCU WUSR: USART13 Mask                  */
#define SCU_WUSR_GPIOFWU_Pos                  13                                                      /*!< SCU WUSR: GPIOFWU Position              */
#define SCU_WUSR_GPIOFWU_Msk                  (0x01UL << SCU_WUSR_GPIOFWU_Pos)                        /*!< SCU WUSR: GPIOFWU Mask                  */
#define SCU_WUSR_I2C0WU_Pos                   14                                                      /*!< SCU WUSR: I2C0WU Position               */
#define SCU_WUSR_I2C0WU_Msk                   (0x01UL << SCU_WUSR_I2C0WU_Pos)                         /*!< SCU WUSR: I2C0WU Mask                   */
#define SCU_WUSR_I2C1WU_Pos                   15                                                      /*!< SCU WUSR: I2C1WU Position               */
#define SCU_WUSR_I2C1WU_Msk                   (0x01UL << SCU_WUSR_I2C1WU_Pos)                         /*!< SCU WUSR: I2C1WU Mask                   */

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
#define SCU_PRER1_EBI_Pos                     5                                                       /*!< SCU PRER1: EBI Position                 */
#define SCU_PRER1_EBI_Msk                     (0x01UL << SCU_PRER1_EBI_Pos)                           /*!< SCU PRER1: EBI Mask                     */
#define SCU_PRER1_GPIOA_Pos                   8                                                       /*!< SCU PRER1: GPIOA Position               */
#define SCU_PRER1_GPIOA_Msk                   (0x01UL << SCU_PRER1_GPIOA_Pos)                         /*!< SCU PRER1: GPIOA Mask                   */
#define SCU_PRER1_GPIOB_Pos                   9                                                       /*!< SCU PRER1: GPIOB Position               */
#define SCU_PRER1_GPIOB_Msk                   (0x01UL << SCU_PRER1_GPIOB_Pos)                         /*!< SCU PRER1: GPIOB Mask                   */
#define SCU_PRER1_GPIOC_Pos                   10                                                      /*!< SCU PRER1: GPIOC Position               */
#define SCU_PRER1_GPIOC_Msk                   (0x01UL << SCU_PRER1_GPIOC_Pos)                         /*!< SCU PRER1: GPIOC Mask                   */
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
#define SCU_PRER1_TIMER40_Pos                 20                                                      /*!< SCU PRER1: TIMER40 Position             */
#define SCU_PRER1_TIMER40_Msk                 (0x01UL << SCU_PRER1_TIMER40_Pos)                       /*!< SCU PRER1: TIMER40 Mask                 */
#define SCU_PRER1_TIMER30_Pos                 24                                                      /*!< SCU PRER1: TIMER30 Position             */
#define SCU_PRER1_TIMER30_Msk                 (0x01UL << SCU_PRER1_TIMER30_Pos)                       /*!< SCU PRER1: TIMER30 Mask                 */
#define SCU_PRER1_TIMER20_Pos                 25                                                      /*!< SCU PRER1: TIMER20 Position             */
#define SCU_PRER1_TIMER20_Msk                 (0x01UL << SCU_PRER1_TIMER20_Pos)                       /*!< SCU PRER1: TIMER20 Mask                 */
#define SCU_PRER1_TIMER21_Pos                 26                                                      /*!< SCU PRER1: TIMER21 Position             */
#define SCU_PRER1_TIMER21_Msk                 (0x01UL << SCU_PRER1_TIMER21_Pos)                       /*!< SCU PRER1: TIMER21 Mask                 */
#define SCU_PRER1_WT_Pos                      31                                                      /*!< SCU PRER1: WT Position                  */
#define SCU_PRER1_WT_Msk                      (0x01UL << SCU_PRER1_WT_Pos)                            /*!< SCU PRER1: WT Mask                      */

/* ----------------------------------  SCU_PRER2  --------------------------------- */
#define SCU_PRER2_SPI20_Pos                   2                                                       /*!< SCU PRER2: SPI20 Position               */
#define SCU_PRER2_SPI20_Msk                   (0x01UL << SCU_PRER2_SPI20_Pos)                         /*!< SCU PRER2: SPI20 Mask                   */
#define SCU_PRER2_SPI21_Pos                   3                                                       /*!< SCU PRER2: SPI21 Position               */
#define SCU_PRER2_SPI21_Msk                   (0x01UL << SCU_PRER2_SPI21_Pos)                         /*!< SCU PRER2: SPI21 Mask                   */
#define SCU_PRER2_I2C0_Pos                    4                                                       /*!< SCU PRER2: I2C0 Position                */
#define SCU_PRER2_I2C0_Msk                    (0x01UL << SCU_PRER2_I2C0_Pos)                          /*!< SCU PRER2: I2C0 Mask                    */
#define SCU_PRER2_I2C1_Pos                    5                                                       /*!< SCU PRER2: I2C1 Position                */
#define SCU_PRER2_I2C1_Msk                    (0x01UL << SCU_PRER2_I2C1_Pos)                          /*!< SCU PRER2: I2C1 Mask                    */
#define SCU_PRER2_USART10_Pos                 8                                                       /*!< SCU PRER2: USART10 Position             */
#define SCU_PRER2_USART10_Msk                 (0x01UL << SCU_PRER2_USART10_Pos)                       /*!< SCU PRER2: USART10 Mask                 */
#define SCU_PRER2_USART11_Pos                 9                                                       /*!< SCU PRER2: USART11 Position             */
#define SCU_PRER2_USART11_Msk                 (0x01UL << SCU_PRER2_USART11_Pos)                       /*!< SCU PRER2: USART11 Mask                 */
#define SCU_PRER2_USART12_Pos                 10                                                      /*!< SCU PRER2: USART12 Position             */
#define SCU_PRER2_USART12_Msk                 (0x01UL << SCU_PRER2_USART12_Pos)                       /*!< SCU PRER2: USART12 Mask                 */
#define SCU_PRER2_USART13_Pos                 11                                                      /*!< SCU PRER2: USART13 Position             */
#define SCU_PRER2_USART13_Msk                 (0x01UL << SCU_PRER2_USART13_Pos)                       /*!< SCU PRER2: USART13 Mask                 */
#define SCU_PRER2_USB_Pos                     16                                                      /*!< SCU PRER2: USB Position                 */
#define SCU_PRER2_USB_Msk                     (0x01UL << SCU_PRER2_USB_Pos)                           /*!< SCU PRER2: USB Mask                     */
#define SCU_PRER2_HSICMU_Pos                  17                                                      /*!< SCU PRER2: HSICMU Position              */
#define SCU_PRER2_HSICMU_Msk                  (0x01UL << SCU_PRER2_HSICMU_Pos)                        /*!< SCU PRER2: HSICMU Mask                  */
#define SCU_PRER2_ADC_Pos                     20                                                      /*!< SCU PRER2: ADC Position                 */
#define SCU_PRER2_ADC_Msk                     (0x01UL << SCU_PRER2_ADC_Pos)                           /*!< SCU PRER2: ADC Mask                     */
#define SCU_PRER2_DAC_Pos                     22                                                      /*!< SCU PRER2: DAC Position                 */
#define SCU_PRER2_DAC_Msk                     (0x01UL << SCU_PRER2_DAC_Pos)                           /*!< SCU PRER2: DAC Mask                     */
#define SCU_PRER2_COMP_Pos                    23                                                      /*!< SCU PRER2: COMP Position                */
#define SCU_PRER2_COMP_Msk                    (0x01UL << SCU_PRER2_COMP_Pos)                          /*!< SCU PRER2: COMP Mask                    */
#define SCU_PRER2_TSENSE_Pos                  27                                                      /*!< SCU PRER2: TSENSE Position              */
#define SCU_PRER2_TSENSE_Msk                  (0x01UL << SCU_PRER2_TSENSE_Pos)                        /*!< SCU PRER2: TSENSE Mask                  */
#define SCU_PRER2_RTC_Pos                     29                                                      /*!< SCU PRER2: RTC Position                 */
#define SCU_PRER2_RTC_Msk                     (0x01UL << SCU_PRER2_RTC_Pos)                           /*!< SCU PRER2: RTC Mask                     */
#define SCU_PRER2_CRC_Pos                     31                                                      /*!< SCU PRER2: CRC Position                 */
#define SCU_PRER2_CRC_Msk                     (0x01UL << SCU_PRER2_CRC_Pos)                           /*!< SCU PRER2: CRC Mask                     */

/* ----------------------------------  SCU_PER1  ---------------------------------- */
#define SCU_PER1_DMA_Pos                      4                                                       /*!< SCU PER1: DMA Position                  */
#define SCU_PER1_DMA_Msk                      (0x01UL << SCU_PER1_DMA_Pos)                            /*!< SCU PER1: DMA Mask                      */
#define SCU_PER1_EBI_Pos                      5                                                       /*!< SCU PER1: EBI Position                  */
#define SCU_PER1_EBI_Msk                      (0x01UL << SCU_PER1_EBI_Pos)                            /*!< SCU PER1: EBI Mask                      */
#define SCU_PER1_GPIOA_Pos                    8                                                       /*!< SCU PER1: GPIOA Position                */
#define SCU_PER1_GPIOA_Msk                    (0x01UL << SCU_PER1_GPIOA_Pos)                          /*!< SCU PER1: GPIOA Mask                    */
#define SCU_PER1_GPIOB_Pos                    9                                                       /*!< SCU PER1: GPIOB Position                */
#define SCU_PER1_GPIOB_Msk                    (0x01UL << SCU_PER1_GPIOB_Pos)                          /*!< SCU PER1: GPIOB Mask                    */
#define SCU_PER1_GPIOC_Pos                    10                                                      /*!< SCU PER1: GPIOC Position                */
#define SCU_PER1_GPIOC_Msk                    (0x01UL << SCU_PER1_GPIOC_Pos)                          /*!< SCU PER1: GPIOC Mask                    */
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
#define SCU_PER1_TIMER40_Pos                  20                                                      /*!< SCU PER1: TIMER40 Position              */
#define SCU_PER1_TIMER40_Msk                  (0x01UL << SCU_PER1_TIMER40_Pos)                        /*!< SCU PER1: TIMER40 Mask                  */
#define SCU_PER1_TIMER30_Pos                  24                                                      /*!< SCU PER1: TIMER30 Position              */
#define SCU_PER1_TIMER30_Msk                  (0x01UL << SCU_PER1_TIMER30_Pos)                        /*!< SCU PER1: TIMER30 Mask                  */
#define SCU_PER1_TIMER20_Pos                  25                                                      /*!< SCU PER1: TIMER20 Position              */
#define SCU_PER1_TIMER20_Msk                  (0x01UL << SCU_PER1_TIMER20_Pos)                        /*!< SCU PER1: TIMER20 Mask                  */
#define SCU_PER1_TIMER21_Pos                  26                                                      /*!< SCU PER1: TIMER21 Position              */
#define SCU_PER1_TIMER21_Msk                  (0x01UL << SCU_PER1_TIMER21_Pos)                        /*!< SCU PER1: TIMER21 Mask                  */
#define SCU_PER1_WT_Pos                       31                                                      /*!< SCU PER1: WT Position                   */
#define SCU_PER1_WT_Msk                       (0x01UL << SCU_PER1_WT_Pos)                             /*!< SCU PER1: WT Mask                       */

/* ----------------------------------  SCU_PER2  ---------------------------------- */
#define SCU_PER2_SPI20_Pos                    2                                                       /*!< SCU PER2: SPI20 Position                */
#define SCU_PER2_SPI20_Msk                    (0x01UL << SCU_PER2_SPI20_Pos)                          /*!< SCU PER2: SPI20 Mask                    */
#define SCU_PER2_SPI21_Pos                    3                                                       /*!< SCU PER2: SPI21 Position                */
#define SCU_PER2_SPI21_Msk                    (0x01UL << SCU_PER2_SPI21_Pos)                          /*!< SCU PER2: SPI21 Mask                    */
#define SCU_PER2_I2C0_Pos                     4                                                       /*!< SCU PER2: I2C0 Position                 */
#define SCU_PER2_I2C0_Msk                     (0x01UL << SCU_PER2_I2C0_Pos)                           /*!< SCU PER2: I2C0 Mask                     */
#define SCU_PER2_I2C1_Pos                     5                                                       /*!< SCU PER2: I2C1 Position                 */
#define SCU_PER2_I2C1_Msk                     (0x01UL << SCU_PER2_I2C1_Pos)                           /*!< SCU PER2: I2C1 Mask                     */
#define SCU_PER2_USART10_Pos                  8                                                       /*!< SCU PER2: USART10 Position              */
#define SCU_PER2_USART10_Msk                  (0x01UL << SCU_PER2_USART10_Pos)                        /*!< SCU PER2: USART10 Mask                  */
#define SCU_PER2_USART11_Pos                  9                                                       /*!< SCU PER2: USART11 Position              */
#define SCU_PER2_USART11_Msk                  (0x01UL << SCU_PER2_USART11_Pos)                        /*!< SCU PER2: USART11 Mask                  */
#define SCU_PER2_USART12_Pos                  10                                                      /*!< SCU PER2: USART12 Position              */
#define SCU_PER2_USART12_Msk                  (0x01UL << SCU_PER2_USART12_Pos)                        /*!< SCU PER2: USART12 Mask                  */
#define SCU_PER2_USART13_Pos                  11                                                      /*!< SCU PER2: USART13 Position              */
#define SCU_PER2_USART13_Msk                  (0x01UL << SCU_PER2_USART13_Pos)                        /*!< SCU PER2: USART13 Mask                  */
#define SCU_PER2_USB_Pos                      16                                                      /*!< SCU PER2: USB Position                  */
#define SCU_PER2_USB_Msk                      (0x01UL << SCU_PER2_USB_Pos)                            /*!< SCU PER2: USB Mask                      */
#define SCU_PER2_HSICMU_Pos                   17                                                      /*!< SCU PER2: HSICMU Position               */
#define SCU_PER2_HSICMU_Msk                   (0x01UL << SCU_PER2_HSICMU_Pos)                         /*!< SCU PER2: HSICMU Mask                   */
#define SCU_PER2_ADC_Pos                      20                                                      /*!< SCU PER2: ADC Position                  */
#define SCU_PER2_ADC_Msk                      (0x01UL << SCU_PER2_ADC_Pos)                            /*!< SCU PER2: ADC Mask                      */
#define SCU_PER2_DAC_Pos                      22                                                      /*!< SCU PER2: DAC Position                  */
#define SCU_PER2_DAC_Msk                      (0x01UL << SCU_PER2_DAC_Pos)                            /*!< SCU PER2: DAC Mask                      */
#define SCU_PER2_COMP_Pos                     23                                                      /*!< SCU PER2: COMP Position                 */
#define SCU_PER2_COMP_Msk                     (0x01UL << SCU_PER2_COMP_Pos)                           /*!< SCU PER2: COMP Mask                     */
#define SCU_PER2_TSENSE_Pos                   27                                                      /*!< SCU PER2: TSENSE Position               */
#define SCU_PER2_TSENSE_Msk                   (0x01UL << SCU_PER2_TSENSE_Pos)                         /*!< SCU PER2: TSENSE Mask                   */
#define SCU_PER2_RTC_Pos                      29                                                      /*!< SCU PER2: RTC Position                  */
#define SCU_PER2_RTC_Msk                      (0x01UL << SCU_PER2_RTC_Pos)                            /*!< SCU PER2: RTC Mask                      */
#define SCU_PER2_CRC_Pos                      31                                                      /*!< SCU PER2: CRC Position                  */
#define SCU_PER2_CRC_Msk                      (0x01UL << SCU_PER2_CRC_Pos)                            /*!< SCU PER2: CRC Mask                      */

/* ----------------------------------  SCU_PCER1  --------------------------------- */
#define SCU_PCER1_DMA_Pos                     4                                                       /*!< SCU PCER1: DMA Position                 */
#define SCU_PCER1_DMA_Msk                     (0x01UL << SCU_PCER1_DMA_Pos)                           /*!< SCU PCER1: DMA Mask                     */
#define SCU_PCER1_EBI_Pos                     5                                                       /*!< SCU PCER1: EBI Position                 */
#define SCU_PCER1_EBI_Msk                     (0x01UL << SCU_PCER1_EBI_Pos)                           /*!< SCU PCER1: EBI Mask                     */
#define SCU_PCER1_GPIOA_Pos                   8                                                       /*!< SCU PCER1: GPIOA Position               */
#define SCU_PCER1_GPIOA_Msk                   (0x01UL << SCU_PCER1_GPIOA_Pos)                         /*!< SCU PCER1: GPIOA Mask                   */
#define SCU_PCER1_GPIOB_Pos                   9                                                       /*!< SCU PCER1: GPIOB Position               */
#define SCU_PCER1_GPIOB_Msk                   (0x01UL << SCU_PCER1_GPIOB_Pos)                         /*!< SCU PCER1: GPIOB Mask                   */
#define SCU_PCER1_GPIOC_Pos                   10                                                      /*!< SCU PCER1: GPIOC Position               */
#define SCU_PCER1_GPIOC_Msk                   (0x01UL << SCU_PCER1_GPIOC_Pos)                         /*!< SCU PCER1: GPIOC Mask                   */
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
#define SCU_PCER1_TIMER40_Pos                 20                                                      /*!< SCU PCER1: TIMER40 Position             */
#define SCU_PCER1_TIMER40_Msk                 (0x01UL << SCU_PCER1_TIMER40_Pos)                       /*!< SCU PCER1: TIMER40 Mask                 */
#define SCU_PCER1_TIMER30_Pos                 24                                                      /*!< SCU PCER1: TIMER30 Position             */
#define SCU_PCER1_TIMER30_Msk                 (0x01UL << SCU_PCER1_TIMER30_Pos)                       /*!< SCU PCER1: TIMER30 Mask                 */
#define SCU_PCER1_TIMER20_Pos                 25                                                      /*!< SCU PCER1: TIMER20 Position             */
#define SCU_PCER1_TIMER20_Msk                 (0x01UL << SCU_PCER1_TIMER20_Pos)                       /*!< SCU PCER1: TIMER20 Mask                 */
#define SCU_PCER1_TIMER21_Pos                 26                                                      /*!< SCU PCER1: TIMER21 Position             */
#define SCU_PCER1_TIMER21_Msk                 (0x01UL << SCU_PCER1_TIMER21_Pos)                       /*!< SCU PCER1: TIMER21 Mask                 */
#define SCU_PCER1_WT_Pos                      31                                                      /*!< SCU PCER1: WT Position                  */
#define SCU_PCER1_WT_Msk                      (0x01UL << SCU_PCER1_WT_Pos)                            /*!< SCU PCER1: WT Mask                      */

/* ----------------------------------  SCU_PCER2  --------------------------------- */
#define SCU_PCER2_SPI20_Pos                   2                                                       /*!< SCU PCER2: SPI20 Position               */
#define SCU_PCER2_SPI20_Msk                   (0x01UL << SCU_PCER2_SPI20_Pos)                         /*!< SCU PCER2: SPI20 Mask                   */
#define SCU_PCER2_SPI21_Pos                   3                                                       /*!< SCU PCER2: SPI21 Position               */
#define SCU_PCER2_SPI21_Msk                   (0x01UL << SCU_PCER2_SPI21_Pos)                         /*!< SCU PCER2: SPI21 Mask                   */
#define SCU_PCER2_I2C0_Pos                    4                                                       /*!< SCU PCER2: I2C0 Position                */
#define SCU_PCER2_I2C0_Msk                    (0x01UL << SCU_PCER2_I2C0_Pos)                          /*!< SCU PCER2: I2C0 Mask                    */
#define SCU_PCER2_I2C1_Pos                    5                                                       /*!< SCU PCER2: I2C1 Position                */
#define SCU_PCER2_I2C1_Msk                    (0x01UL << SCU_PCER2_I2C1_Pos)                          /*!< SCU PCER2: I2C1 Mask                    */
#define SCU_PCER2_USART10_Pos                 8                                                       /*!< SCU PCER2: USART10 Position             */
#define SCU_PCER2_USART10_Msk                 (0x01UL << SCU_PCER2_USART10_Pos)                       /*!< SCU PCER2: USART10 Mask                 */
#define SCU_PCER2_USART11_Pos                 9                                                       /*!< SCU PCER2: USART11 Position             */
#define SCU_PCER2_USART11_Msk                 (0x01UL << SCU_PCER2_USART11_Pos)                       /*!< SCU PCER2: USART11 Mask                 */
#define SCU_PCER2_USART12_Pos                 10                                                      /*!< SCU PCER2: USART12 Position             */
#define SCU_PCER2_USART12_Msk                 (0x01UL << SCU_PCER2_USART12_Pos)                       /*!< SCU PCER2: USART12 Mask                 */
#define SCU_PCER2_USART13_Pos                 11                                                      /*!< SCU PCER2: USART13 Position             */
#define SCU_PCER2_USART13_Msk                 (0x01UL << SCU_PCER2_USART13_Pos)                       /*!< SCU PCER2: USART13 Mask                 */
#define SCU_PCER2_USB_Pos                     16                                                      /*!< SCU PCER2: USB Position                 */
#define SCU_PCER2_USB_Msk                     (0x01UL << SCU_PCER2_USB_Pos)                           /*!< SCU PCER2: USB Mask                     */
#define SCU_PCER2_HSICMU_Pos                  17                                                      /*!< SCU PCER2: HSICMU Position              */
#define SCU_PCER2_HSICMU_Msk                  (0x01UL << SCU_PCER2_HSICMU_Pos)                        /*!< SCU PCER2: HSICMU Mask                  */
#define SCU_PCER2_ADC_Pos                     20                                                      /*!< SCU PCER2: ADC Position                 */
#define SCU_PCER2_ADC_Msk                     (0x01UL << SCU_PCER2_ADC_Pos)                           /*!< SCU PCER2: ADC Mask                     */
#define SCU_PCER2_DAC_Pos                     22                                                      /*!< SCU PCER2: DAC Position                 */
#define SCU_PCER2_DAC_Msk                     (0x01UL << SCU_PCER2_DAC_Pos)                           /*!< SCU PCER2: DAC Mask                     */
#define SCU_PCER2_COMP_Pos                    23                                                      /*!< SCU PCER2: COMP Position                */
#define SCU_PCER2_COMP_Msk                    (0x01UL << SCU_PCER2_COMP_Pos)                          /*!< SCU PCER2: COMP Mask                    */
#define SCU_PCER2_TSENSE_Pos                  27                                                      /*!< SCU PCER2: TSENSE Position              */
#define SCU_PCER2_TSENSE_Msk                  (0x01UL << SCU_PCER2_TSENSE_Pos)                        /*!< SCU PCER2: TSENSE Mask                  */
#define SCU_PCER2_RTC_Pos                     29                                                      /*!< SCU PCER2: RTC Position                 */
#define SCU_PCER2_RTC_Msk                     (0x01UL << SCU_PCER2_RTC_Pos)                           /*!< SCU PCER2: RTC Mask                     */
#define SCU_PCER2_CRC_Pos                     31                                                      /*!< SCU PCER2: CRC Position                 */
#define SCU_PCER2_CRC_Msk                     (0x01UL << SCU_PCER2_CRC_Pos)                           /*!< SCU PCER2: CRC Mask                     */

/* ---------------------------------  SCU_PPCLKSR  -------------------------------- */
#define SCU_PPCLKSR_WDTCLK_Pos                0                                                       /*!< SCU PPCLKSR: WDTCLK Position            */
#define SCU_PPCLKSR_WDTCLK_Msk                (0x01UL << SCU_PPCLKSR_WDTCLK_Pos)                      /*!< SCU PPCLKSR: WDTCLK Mask                */
#define SCU_PPCLKSR_WTCLK_Pos                 3                                                       /*!< SCU PPCLKSR: WTCLK Position             */
#define SCU_PPCLKSR_WTCLK_Msk                 (0x03UL << SCU_PPCLKSR_WTCLK_Pos)                       /*!< SCU PPCLKSR: WTCLK Mask                 */
#define SCU_PPCLKSR_RTCCLK_Pos                5                                                       /*!< SCU PPCLKSR: RTCCLK Position            */
#define SCU_PPCLKSR_RTCCLK_Msk                (0x01UL << SCU_PPCLKSR_RTCCLK_Pos)                      /*!< SCU PPCLKSR: RTCCLK Mask                */
#define SCU_PPCLKSR_USBCLK_Pos                9                                                       /*!< SCU PPCLKSR: USBCLK Position            */
#define SCU_PPCLKSR_USBCLK_Msk                (0x01UL << SCU_PPCLKSR_USBCLK_Pos)                      /*!< SCU PPCLKSR: USBCLK Mask                */
#define SCU_PPCLKSR_T40CLK_Pos                16                                                      /*!< SCU PPCLKSR: T40CLK Position            */
#define SCU_PPCLKSR_T40CLK_Msk                (0x01UL << SCU_PPCLKSR_T40CLK_Pos)                      /*!< SCU PPCLKSR: T40CLK Mask                */
#define SCU_PPCLKSR_T30CLK_Pos                17                                                      /*!< SCU PPCLKSR: T30CLK Position            */
#define SCU_PPCLKSR_T30CLK_Msk                (0x01UL << SCU_PPCLKSR_T30CLK_Pos)                      /*!< SCU PPCLKSR: T30CLK Mask                */
#define SCU_PPCLKSR_T21CLK_Pos                19                                                      /*!< SCU PPCLKSR: T21CLK Position            */
#define SCU_PPCLKSR_T21CLK_Msk                (0x01UL << SCU_PPCLKSR_T21CLK_Pos)                      /*!< SCU PPCLKSR: T21CLK Mask                */
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
#define SCU_VDCCON_VDC15_STOP_Pos             18                                                      /*!< SCU VDCCON: VDC15_STOP Position         */
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

/* ---------------------------------  SCU_PDRCON  --------------------------------- */
#define SCU_PDRCON_PDR_DEBOUNCE_Pos           0                                                       /*!< SCU PDRCON: PDR_DEBOUNCE Position       */
#define SCU_PDRCON_PDR_DEBOUNCE_Msk           (0x0fUL << SCU_PDRCON_PDR_DEBOUNCE_Pos)                 /*!< SCU PDRCON: PDR_DEBOUNCE Mask           */
#define SCU_PDRCON_BPMC_SYNC_EN_Pos           5                                                       /*!< SCU PDRCON: BPMC_SYNC_EN Position       */
#define SCU_PDRCON_BPMC_SYNC_EN_Msk           (0x01UL << SCU_PDRCON_BPMC_SYNC_EN_Pos)                 /*!< SCU PDRCON: BPMC_SYNC_EN Mask           */
#define SCU_PDRCON_PDR_SYNC_EN_Pos            6                                                       /*!< SCU PDRCON: PDR_SYNC_EN Position        */
#define SCU_PDRCON_PDR_SYNC_EN_Msk            (0x01UL << SCU_PDRCON_PDR_SYNC_EN_Pos)                  /*!< SCU PDRCON: PDR_SYNC_EN Mask            */
#define SCU_PDRCON_PDREN_Pos                  7                                                       /*!< SCU PDRCON: PDREN Position              */
#define SCU_PDRCON_PDREN_Msk                  (0x01UL << SCU_PDRCON_PDREN_Pos)                        /*!< SCU PDRCON: PDREN Mask                  */
#define SCU_PDRCON_PDRCON_WTIDKY_Pos          8                                                       /*!< SCU PDRCON: PDRCON_WTIDKY Position      */
#define SCU_PDRCON_PDRCON_WTIDKY_Msk          (0x0fUL << SCU_PDRCON_PDRCON_WTIDKY_Pos)                /*!< SCU PDRCON: PDRCON_WTIDKY Mask          */

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

/* ---------------------------------  SCU_RSTDBCR  -------------------------------- */
#define SCU_RSTDBCR_EN_Pos                    0                                                       /*!< SCU RSTDBCR: EN Position                */
#define SCU_RSTDBCR_EN_Msk                    (0x01UL << SCU_RSTDBCR_EN_Pos)                          /*!< SCU RSTDBCR: EN Mask                    */
#define SCU_RSTDBCR_CLKCNT_Pos                8                                                       /*!< SCU RSTDBCR: CLKCNT Position            */
#define SCU_RSTDBCR_CLKCNT_Msk                (0x3fUL << SCU_RSTDBCR_CLKCNT_Pos)                      /*!< SCU RSTDBCR: CLKCNT Mask                */
#define SCU_RSTDBCR_WTIDKY_Pos                16                                                      /*!< SCU RSTDBCR: WTIDKY Position            */
#define SCU_RSTDBCR_WTIDKY_Msk                (0x0000ffffUL << SCU_RSTDBCR_WTIDKY_Pos)                /*!< SCU RSTDBCR: WTIDKY Mask                */

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
#define SCU_MCCR3_LSI40kHz_Pos                11                                                      /*!< SCU MCCR3: LSI40kHz Position            */
#define SCU_MCCR3_LSI40kHz_Msk                (0x01UL << SCU_MCCR3_LSI40kHz_Pos)                      /*!< SCU MCCR3: LSI40kHz Mask                */
#define SCU_MCCR3_WTEXTCDIV_Pos               16                                                      /*!< SCU MCCR3: WTEXTCDIV Position           */
#define SCU_MCCR3_WTEXTCDIV_Msk               (0x000000ffUL << SCU_MCCR3_WTEXTCDIV_Pos)               /*!< SCU MCCR3: WTEXTCDIV Mask               */
#define SCU_MCCR3_WTEXTCSEL_Pos               24                                                      /*!< SCU MCCR3: WTEXTCSEL Position           */
#define SCU_MCCR3_WTEXTCSEL_Msk               (0x07UL << SCU_MCCR3_WTEXTCSEL_Pos)                     /*!< SCU MCCR3: WTEXTCSEL Mask               */

/* ----------------------------------  SCU_MCCR4  --------------------------------- */
#define SCU_MCCR4_PD0DIV_Pos                  0                                                       /*!< SCU MCCR4: PD0DIV Position              */
#define SCU_MCCR4_PD0DIV_Msk                  (0x000000ffUL << SCU_MCCR4_PD0DIV_Pos)                  /*!< SCU MCCR4: PD0DIV Mask                  */
#define SCU_MCCR4_PD0CSEL_Pos                 8                                                       /*!< SCU MCCR4: PD0CSEL Position             */
#define SCU_MCCR4_PD0CSEL_Msk                 (0x07UL << SCU_MCCR4_PD0CSEL_Pos)                       /*!< SCU MCCR4: PD0CSEL Mask                 */

/* ----------------------------------  SCU_MCCR5  --------------------------------- */
#define SCU_MCCR5_RTCDIV_Pos                  0                                                       /*!< SCU MCCR5: RTCDIV Position              */
#define SCU_MCCR5_RTCDIV_Msk                  (0x000000ffUL << SCU_MCCR5_RTCDIV_Pos)                  /*!< SCU MCCR5: RTCDIV Mask                  */
#define SCU_MCCR5_RTCCSEL_Pos                 8                                                       /*!< SCU MCCR5: RTCCSEL Position             */
#define SCU_MCCR5_RTCCSEL_Msk                 (0x07UL << SCU_MCCR5_RTCCSEL_Pos)                       /*!< SCU MCCR5: RTCCSEL Mask                 */
#define SCU_MCCR5_LSITS_EN_Pos                11                                                      /*!< SCU MCCR5: LSITS_EN Position            */
#define SCU_MCCR5_LSITS_EN_Msk                (0x01UL << SCU_MCCR5_LSITS_EN_Pos)                      /*!< SCU MCCR5: LSITS_EN Mask                */
#define SCU_MCCR5_TSSENSECLK_SEL_Pos          12                                                      /*!< SCU MCCR5: TSSENSECLK_SEL Position      */
#define SCU_MCCR5_TSSENSECLK_SEL_Msk          (0x03UL << SCU_MCCR5_TSSENSECLK_SEL_Pos)                /*!< SCU MCCR5: TSSENSECLK_SEL Mask          */
#define SCU_MCCR5_TSREFCLK_SEL_Pos            14                                                      /*!< SCU MCCR5: TSREFCLK_SEL Position        */
#define SCU_MCCR5_TSREFCLK_SEL_Msk            (0x03UL << SCU_MCCR5_TSREFCLK_SEL_Pos)                  /*!< SCU MCCR5: TSREFCLK_SEL Mask            */
#define SCU_MCCR5_USBCDIV_Pos                 16                                                      /*!< SCU MCCR5: USBCDIV Position             */
#define SCU_MCCR5_USBCDIV_Msk                 (0x01UL << SCU_MCCR5_USBCDIV_Pos)                       /*!< SCU MCCR5: USBCDIV Mask                 */
#define SCU_MCCR5_USBCSEL_Pos                 24                                                      /*!< SCU MCCR5: USBCSEL Position             */
#define SCU_MCCR5_USBCSEL_Msk                 (0x07UL << SCU_MCCR5_USBCSEL_Pos)                       /*!< SCU MCCR5: USBCSEL Mask                 */

/* ----------------------------------  SCU_MCCR6  --------------------------------- */
#define SCU_MCCR6_TEXT4DIV_Pos                0                                                       /*!< SCU MCCR6: TEXT4DIV Position            */
#define SCU_MCCR6_TEXT4DIV_Msk                (0x000000ffUL << SCU_MCCR6_TEXT4DIV_Pos)                /*!< SCU MCCR6: TEXT4DIV Mask                */
#define SCU_MCCR6_TEXT4CSEL_Pos               8                                                       /*!< SCU MCCR6: TEXT4CSEL Position           */
#define SCU_MCCR6_TEXT4CSEL_Msk               (0x07UL << SCU_MCCR6_TEXT4CSEL_Pos)                     /*!< SCU MCCR6: TEXT4CSEL Mask               */
#define SCU_MCCR6_TEXT21DIV_Pos               16                                                      /*!< SCU MCCR6: TEXT21DIV Position           */
#define SCU_MCCR6_TEXT21DIV_Msk               (0x000000ffUL << SCU_MCCR6_TEXT21DIV_Pos)               /*!< SCU MCCR6: TEXT21DIV Mask               */
#define SCU_MCCR6_TEXT21CSEL_Pos              24                                                      /*!< SCU MCCR6: TEXT21CSEL Position          */
#define SCU_MCCR6_TEXT21CSEL_Msk              (0x07UL << SCU_MCCR6_TEXT21CSEL_Pos)                    /*!< SCU MCCR6: TEXT21CSEL Mask              */


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
/* ================          Group 'PORT' Position & Mask          ================ */
/* ================================================================================ */


/* ----------------------------------  PORT_MOD  ---------------------------------- */
#define PORT_MOD_MODE0_Pos                    0                                                       /*!< PORT MOD: MODE0 Position                */
#define PORT_MOD_MODE0_Msk                    (0x03UL << PORT_MOD_MODE0_Pos)                          /*!< PORT MOD: MODE0 Mask                    */
#define PORT_MOD_MODE1_Pos                    2                                                       /*!< PORT MOD: MODE1 Position                */
#define PORT_MOD_MODE1_Msk                    (0x03UL << PORT_MOD_MODE1_Pos)                          /*!< PORT MOD: MODE1 Mask                    */
#define PORT_MOD_MODE2_Pos                    4                                                       /*!< PORT MOD: MODE2 Position                */
#define PORT_MOD_MODE2_Msk                    (0x03UL << PORT_MOD_MODE2_Pos)                          /*!< PORT MOD: MODE2 Mask                    */
#define PORT_MOD_MODE3_Pos                    6                                                       /*!< PORT MOD: MODE3 Position                */
#define PORT_MOD_MODE3_Msk                    (0x03UL << PORT_MOD_MODE3_Pos)                          /*!< PORT MOD: MODE3 Mask                    */
#define PORT_MOD_MODE4_Pos                    8                                                       /*!< PORT MOD: MODE4 Position                */
#define PORT_MOD_MODE4_Msk                    (0x03UL << PORT_MOD_MODE4_Pos)                          /*!< PORT MOD: MODE4 Mask                    */
#define PORT_MOD_MODE5_Pos                    10                                                      /*!< PORT MOD: MODE5 Position                */
#define PORT_MOD_MODE5_Msk                    (0x03UL << PORT_MOD_MODE5_Pos)                          /*!< PORT MOD: MODE5 Mask                    */
#define PORT_MOD_MODE6_Pos                    12                                                      /*!< PORT MOD: MODE6 Position                */
#define PORT_MOD_MODE6_Msk                    (0x03UL << PORT_MOD_MODE6_Pos)                          /*!< PORT MOD: MODE6 Mask                    */
#define PORT_MOD_MODE7_Pos                    14                                                      /*!< PORT MOD: MODE7 Position                */
#define PORT_MOD_MODE7_Msk                    (0x03UL << PORT_MOD_MODE7_Pos)                          /*!< PORT MOD: MODE7 Mask                    */
#define PORT_MOD_MODE8_Pos                    16                                                      /*!< PORT MOD: MODE8 Position                */
#define PORT_MOD_MODE8_Msk                    (0x03UL << PORT_MOD_MODE8_Pos)                          /*!< PORT MOD: MODE8 Mask                    */
#define PORT_MOD_MODE9_Pos                    18                                                      /*!< PORT MOD: MODE9 Position                */
#define PORT_MOD_MODE9_Msk                    (0x03UL << PORT_MOD_MODE9_Pos)                          /*!< PORT MOD: MODE9 Mask                    */
#define PORT_MOD_MODE10_Pos                   20                                                      /*!< PORT MOD: MODE10 Position               */
#define PORT_MOD_MODE10_Msk                   (0x03UL << PORT_MOD_MODE10_Pos)                         /*!< PORT MOD: MODE10 Mask                   */
#define PORT_MOD_MODE11_Pos                   22                                                      /*!< PORT MOD: MODE11 Position               */
#define PORT_MOD_MODE11_Msk                   (0x03UL << PORT_MOD_MODE11_Pos)                         /*!< PORT MOD: MODE11 Mask                   */
#define PORT_MOD_MODE12_Pos                   24                                                      /*!< PORT MOD: MODE12 Position               */
#define PORT_MOD_MODE12_Msk                   (0x03UL << PORT_MOD_MODE12_Pos)                         /*!< PORT MOD: MODE12 Mask                   */
#define PORT_MOD_MODE13_Pos                   26                                                      /*!< PORT MOD: MODE13 Position               */
#define PORT_MOD_MODE13_Msk                   (0x03UL << PORT_MOD_MODE13_Pos)                         /*!< PORT MOD: MODE13 Mask                   */
#define PORT_MOD_MODE14_Pos                   28                                                      /*!< PORT MOD: MODE14 Position               */
#define PORT_MOD_MODE14_Msk                   (0x03UL << PORT_MOD_MODE14_Pos)                         /*!< PORT MOD: MODE14 Mask                   */
#define PORT_MOD_MODE15_Pos                   30                                                      /*!< PORT MOD: MODE15 Position               */
#define PORT_MOD_MODE15_Msk                   (0x03UL << PORT_MOD_MODE15_Pos)                         /*!< PORT MOD: MODE15 Mask                   */

/* ----------------------------------  PORT_TYP  ---------------------------------- */
#define PORT_TYP_TYP0_Pos                     0                                                       /*!< PORT TYP: TYP0 Position                 */
#define PORT_TYP_TYP0_Msk                     (0x01UL << PORT_TYP_TYP0_Pos)                           /*!< PORT TYP: TYP0 Mask                     */
#define PORT_TYP_TYP1_Pos                     1                                                       /*!< PORT TYP: TYP1 Position                 */
#define PORT_TYP_TYP1_Msk                     (0x01UL << PORT_TYP_TYP1_Pos)                           /*!< PORT TYP: TYP1 Mask                     */
#define PORT_TYP_TYP2_Pos                     2                                                       /*!< PORT TYP: TYP2 Position                 */
#define PORT_TYP_TYP2_Msk                     (0x01UL << PORT_TYP_TYP2_Pos)                           /*!< PORT TYP: TYP2 Mask                     */
#define PORT_TYP_TYP3_Pos                     3                                                       /*!< PORT TYP: TYP3 Position                 */
#define PORT_TYP_TYP3_Msk                     (0x01UL << PORT_TYP_TYP3_Pos)                           /*!< PORT TYP: TYP3 Mask                     */
#define PORT_TYP_TYP4_Pos                     4                                                       /*!< PORT TYP: TYP4 Position                 */
#define PORT_TYP_TYP4_Msk                     (0x01UL << PORT_TYP_TYP4_Pos)                           /*!< PORT TYP: TYP4 Mask                     */
#define PORT_TYP_TYP5_Pos                     5                                                       /*!< PORT TYP: TYP5 Position                 */
#define PORT_TYP_TYP5_Msk                     (0x01UL << PORT_TYP_TYP5_Pos)                           /*!< PORT TYP: TYP5 Mask                     */
#define PORT_TYP_TYP6_Pos                     6                                                       /*!< PORT TYP: TYP6 Position                 */
#define PORT_TYP_TYP6_Msk                     (0x01UL << PORT_TYP_TYP6_Pos)                           /*!< PORT TYP: TYP6 Mask                     */
#define PORT_TYP_TYP7_Pos                     7                                                       /*!< PORT TYP: TYP7 Position                 */
#define PORT_TYP_TYP7_Msk                     (0x01UL << PORT_TYP_TYP7_Pos)                           /*!< PORT TYP: TYP7 Mask                     */
#define PORT_TYP_TYP8_Pos                     8                                                       /*!< PORT TYP: TYP8 Position                 */
#define PORT_TYP_TYP8_Msk                     (0x01UL << PORT_TYP_TYP8_Pos)                           /*!< PORT TYP: TYP8 Mask                     */
#define PORT_TYP_TYP9_Pos                     9                                                       /*!< PORT TYP: TYP9 Position                 */
#define PORT_TYP_TYP9_Msk                     (0x01UL << PORT_TYP_TYP9_Pos)                           /*!< PORT TYP: TYP9 Mask                     */
#define PORT_TYP_TYP10_Pos                    10                                                      /*!< PORT TYP: TYP10 Position                */
#define PORT_TYP_TYP10_Msk                    (0x01UL << PORT_TYP_TYP10_Pos)                          /*!< PORT TYP: TYP10 Mask                    */
#define PORT_TYP_TYP11_Pos                    11                                                      /*!< PORT TYP: TYP11 Position                */
#define PORT_TYP_TYP11_Msk                    (0x01UL << PORT_TYP_TYP11_Pos)                          /*!< PORT TYP: TYP11 Mask                    */
#define PORT_TYP_TYP12_Pos                    12                                                      /*!< PORT TYP: TYP12 Position                */
#define PORT_TYP_TYP12_Msk                    (0x01UL << PORT_TYP_TYP12_Pos)                          /*!< PORT TYP: TYP12 Mask                    */
#define PORT_TYP_TYP13_Pos                    13                                                      /*!< PORT TYP: TYP13 Position                */
#define PORT_TYP_TYP13_Msk                    (0x01UL << PORT_TYP_TYP13_Pos)                          /*!< PORT TYP: TYP13 Mask                    */
#define PORT_TYP_TYP14_Pos                    14                                                      /*!< PORT TYP: TYP14 Position                */
#define PORT_TYP_TYP14_Msk                    (0x01UL << PORT_TYP_TYP14_Pos)                          /*!< PORT TYP: TYP14 Mask                    */
#define PORT_TYP_TYP15_Pos                    15                                                      /*!< PORT TYP: TYP15 Position                */
#define PORT_TYP_TYP15_Msk                    (0x01UL << PORT_TYP_TYP15_Pos)                          /*!< PORT TYP: TYP15 Mask                    */

/* ---------------------------------  PORT_AFSR1  --------------------------------- */
#define PORT_AFSR1_AFSR0_Pos                  0                                                       /*!< PORT AFSR1: AFSR0 Position              */
#define PORT_AFSR1_AFSR0_Msk                  (0x0fUL << PORT_AFSR1_AFSR0_Pos)                        /*!< PORT AFSR1: AFSR0 Mask                  */
#define PORT_AFSR1_AFSR1_Pos                  4                                                       /*!< PORT AFSR1: AFSR1 Position              */
#define PORT_AFSR1_AFSR1_Msk                  (0x0fUL << PORT_AFSR1_AFSR1_Pos)                        /*!< PORT AFSR1: AFSR1 Mask                  */
#define PORT_AFSR1_AFSR2_Pos                  8                                                       /*!< PORT AFSR1: AFSR2 Position              */
#define PORT_AFSR1_AFSR2_Msk                  (0x0fUL << PORT_AFSR1_AFSR2_Pos)                        /*!< PORT AFSR1: AFSR2 Mask                  */
#define PORT_AFSR1_AFSR3_Pos                  12                                                      /*!< PORT AFSR1: AFSR3 Position              */
#define PORT_AFSR1_AFSR3_Msk                  (0x0fUL << PORT_AFSR1_AFSR3_Pos)                        /*!< PORT AFSR1: AFSR3 Mask                  */
#define PORT_AFSR1_AFSR4_Pos                  16                                                      /*!< PORT AFSR1: AFSR4 Position              */
#define PORT_AFSR1_AFSR4_Msk                  (0x0fUL << PORT_AFSR1_AFSR4_Pos)                        /*!< PORT AFSR1: AFSR4 Mask                  */
#define PORT_AFSR1_AFSR5_Pos                  20                                                      /*!< PORT AFSR1: AFSR5 Position              */
#define PORT_AFSR1_AFSR5_Msk                  (0x0fUL << PORT_AFSR1_AFSR5_Pos)                        /*!< PORT AFSR1: AFSR5 Mask                  */
#define PORT_AFSR1_AFSR6_Pos                  24                                                      /*!< PORT AFSR1: AFSR6 Position              */
#define PORT_AFSR1_AFSR6_Msk                  (0x0fUL << PORT_AFSR1_AFSR6_Pos)                        /*!< PORT AFSR1: AFSR6 Mask                  */
#define PORT_AFSR1_AFSR7_Pos                  28                                                      /*!< PORT AFSR1: AFSR7 Position              */
#define PORT_AFSR1_AFSR7_Msk                  (0x0fUL << PORT_AFSR1_AFSR7_Pos)                        /*!< PORT AFSR1: AFSR7 Mask                  */

/* ---------------------------------  PORT_AFSR2  --------------------------------- */
#define PORT_AFSR2_AFSR8_Pos                  0                                                       /*!< PORT AFSR2: AFSR8 Position              */
#define PORT_AFSR2_AFSR8_Msk                  (0x0fUL << PORT_AFSR2_AFSR8_Pos)                        /*!< PORT AFSR2: AFSR8 Mask                  */
#define PORT_AFSR2_AFSR9_Pos                  4                                                       /*!< PORT AFSR2: AFSR9 Position              */
#define PORT_AFSR2_AFSR9_Msk                  (0x0fUL << PORT_AFSR2_AFSR9_Pos)                        /*!< PORT AFSR2: AFSR9 Mask                  */
#define PORT_AFSR2_AFSR10_Pos                 8                                                       /*!< PORT AFSR2: AFSR10 Position             */
#define PORT_AFSR2_AFSR10_Msk                 (0x0fUL << PORT_AFSR2_AFSR10_Pos)                       /*!< PORT AFSR2: AFSR10 Mask                 */
#define PORT_AFSR2_AFSR11_Pos                 12                                                      /*!< PORT AFSR2: AFSR11 Position             */
#define PORT_AFSR2_AFSR11_Msk                 (0x0fUL << PORT_AFSR2_AFSR11_Pos)                       /*!< PORT AFSR2: AFSR11 Mask                 */
#define PORT_AFSR2_AFSR12_Pos                 16                                                      /*!< PORT AFSR2: AFSR12 Position             */
#define PORT_AFSR2_AFSR12_Msk                 (0x0fUL << PORT_AFSR2_AFSR12_Pos)                       /*!< PORT AFSR2: AFSR12 Mask                 */
#define PORT_AFSR2_AFSR13_Pos                 20                                                      /*!< PORT AFSR2: AFSR13 Position             */
#define PORT_AFSR2_AFSR13_Msk                 (0x0fUL << PORT_AFSR2_AFSR13_Pos)                       /*!< PORT AFSR2: AFSR13 Mask                 */
#define PORT_AFSR2_AFSR14_Pos                 24                                                      /*!< PORT AFSR2: AFSR14 Position             */
#define PORT_AFSR2_AFSR14_Msk                 (0x0fUL << PORT_AFSR2_AFSR14_Pos)                       /*!< PORT AFSR2: AFSR14 Mask                 */
#define PORT_AFSR2_AFSR15_Pos                 28                                                      /*!< PORT AFSR2: AFSR15 Position             */
#define PORT_AFSR2_AFSR15_Msk                 (0x0fUL << PORT_AFSR2_AFSR15_Pos)                       /*!< PORT AFSR2: AFSR15 Mask                 */

/* ----------------------------------  PORT_PUPD  --------------------------------- */
#define PORT_PUPD_PUPD0_Pos                   0                                                       /*!< PORT PUPD: PUPD0 Position               */
#define PORT_PUPD_PUPD0_Msk                   (0x03UL << PORT_PUPD_PUPD0_Pos)                         /*!< PORT PUPD: PUPD0 Mask                   */
#define PORT_PUPD_PUPD1_Pos                   2                                                       /*!< PORT PUPD: PUPD1 Position               */
#define PORT_PUPD_PUPD1_Msk                   (0x03UL << PORT_PUPD_PUPD1_Pos)                         /*!< PORT PUPD: PUPD1 Mask                   */
#define PORT_PUPD_PUPD2_Pos                   4                                                       /*!< PORT PUPD: PUPD2 Position               */
#define PORT_PUPD_PUPD2_Msk                   (0x03UL << PORT_PUPD_PUPD2_Pos)                         /*!< PORT PUPD: PUPD2 Mask                   */
#define PORT_PUPD_PUPD3_Pos                   6                                                       /*!< PORT PUPD: PUPD3 Position               */
#define PORT_PUPD_PUPD3_Msk                   (0x03UL << PORT_PUPD_PUPD3_Pos)                         /*!< PORT PUPD: PUPD3 Mask                   */
#define PORT_PUPD_PUPD4_Pos                   8                                                       /*!< PORT PUPD: PUPD4 Position               */
#define PORT_PUPD_PUPD4_Msk                   (0x03UL << PORT_PUPD_PUPD4_Pos)                         /*!< PORT PUPD: PUPD4 Mask                   */
#define PORT_PUPD_PUPD5_Pos                   10                                                      /*!< PORT PUPD: PUPD5 Position               */
#define PORT_PUPD_PUPD5_Msk                   (0x03UL << PORT_PUPD_PUPD5_Pos)                         /*!< PORT PUPD: PUPD5 Mask                   */
#define PORT_PUPD_PUPD6_Pos                   12                                                      /*!< PORT PUPD: PUPD6 Position               */
#define PORT_PUPD_PUPD6_Msk                   (0x03UL << PORT_PUPD_PUPD6_Pos)                         /*!< PORT PUPD: PUPD6 Mask                   */
#define PORT_PUPD_PUPD7_Pos                   14                                                      /*!< PORT PUPD: PUPD7 Position               */
#define PORT_PUPD_PUPD7_Msk                   (0x03UL << PORT_PUPD_PUPD7_Pos)                         /*!< PORT PUPD: PUPD7 Mask                   */
#define PORT_PUPD_PUPD8_Pos                   16                                                      /*!< PORT PUPD: PUPD8 Position               */
#define PORT_PUPD_PUPD8_Msk                   (0x03UL << PORT_PUPD_PUPD8_Pos)                         /*!< PORT PUPD: PUPD8 Mask                   */
#define PORT_PUPD_PUPD9_Pos                   18                                                      /*!< PORT PUPD: PUPD9 Position               */
#define PORT_PUPD_PUPD9_Msk                   (0x03UL << PORT_PUPD_PUPD9_Pos)                         /*!< PORT PUPD: PUPD9 Mask                   */
#define PORT_PUPD_PUPD10_Pos                  20                                                      /*!< PORT PUPD: PUPD10 Position              */
#define PORT_PUPD_PUPD10_Msk                  (0x03UL << PORT_PUPD_PUPD10_Pos)                        /*!< PORT PUPD: PUPD10 Mask                  */
#define PORT_PUPD_PUPD11_Pos                  22                                                      /*!< PORT PUPD: PUPD11 Position              */
#define PORT_PUPD_PUPD11_Msk                  (0x03UL << PORT_PUPD_PUPD11_Pos)                        /*!< PORT PUPD: PUPD11 Mask                  */
#define PORT_PUPD_PUPD12_Pos                  24                                                      /*!< PORT PUPD: PUPD12 Position              */
#define PORT_PUPD_PUPD12_Msk                  (0x03UL << PORT_PUPD_PUPD12_Pos)                        /*!< PORT PUPD: PUPD12 Mask                  */
#define PORT_PUPD_PUPD13_Pos                  26                                                      /*!< PORT PUPD: PUPD13 Position              */
#define PORT_PUPD_PUPD13_Msk                  (0x03UL << PORT_PUPD_PUPD13_Pos)                        /*!< PORT PUPD: PUPD13 Mask                  */
#define PORT_PUPD_PUPD14_Pos                  28                                                      /*!< PORT PUPD: PUPD14 Position              */
#define PORT_PUPD_PUPD14_Msk                  (0x03UL << PORT_PUPD_PUPD14_Pos)                        /*!< PORT PUPD: PUPD14 Mask                  */
#define PORT_PUPD_PUPD15_Pos                  30                                                      /*!< PORT PUPD: PUPD15 Position              */
#define PORT_PUPD_PUPD15_Msk                  (0x03UL << PORT_PUPD_PUPD15_Pos)                        /*!< PORT PUPD: PUPD15 Mask                  */

/* ----------------------------------  PORT_INDR  --------------------------------- */
#define PORT_INDR_INDR0_Pos                   0                                                       /*!< PORT INDR: INDR0 Position               */
#define PORT_INDR_INDR0_Msk                   (0x01UL << PORT_INDR_INDR0_Pos)                         /*!< PORT INDR: INDR0 Mask                   */
#define PORT_INDR_INDR1_Pos                   1                                                       /*!< PORT INDR: INDR1 Position               */
#define PORT_INDR_INDR1_Msk                   (0x01UL << PORT_INDR_INDR1_Pos)                         /*!< PORT INDR: INDR1 Mask                   */
#define PORT_INDR_INDR2_Pos                   2                                                       /*!< PORT INDR: INDR2 Position               */
#define PORT_INDR_INDR2_Msk                   (0x01UL << PORT_INDR_INDR2_Pos)                         /*!< PORT INDR: INDR2 Mask                   */
#define PORT_INDR_INDR3_Pos                   3                                                       /*!< PORT INDR: INDR3 Position               */
#define PORT_INDR_INDR3_Msk                   (0x01UL << PORT_INDR_INDR3_Pos)                         /*!< PORT INDR: INDR3 Mask                   */
#define PORT_INDR_INDR4_Pos                   4                                                       /*!< PORT INDR: INDR4 Position               */
#define PORT_INDR_INDR4_Msk                   (0x01UL << PORT_INDR_INDR4_Pos)                         /*!< PORT INDR: INDR4 Mask                   */
#define PORT_INDR_INDR5_Pos                   5                                                       /*!< PORT INDR: INDR5 Position               */
#define PORT_INDR_INDR5_Msk                   (0x01UL << PORT_INDR_INDR5_Pos)                         /*!< PORT INDR: INDR5 Mask                   */
#define PORT_INDR_INDR6_Pos                   6                                                       /*!< PORT INDR: INDR6 Position               */
#define PORT_INDR_INDR6_Msk                   (0x01UL << PORT_INDR_INDR6_Pos)                         /*!< PORT INDR: INDR6 Mask                   */
#define PORT_INDR_INDR7_Pos                   7                                                       /*!< PORT INDR: INDR7 Position               */
#define PORT_INDR_INDR7_Msk                   (0x01UL << PORT_INDR_INDR7_Pos)                         /*!< PORT INDR: INDR7 Mask                   */
#define PORT_INDR_INDR8_Pos                   8                                                       /*!< PORT INDR: INDR8 Position               */
#define PORT_INDR_INDR8_Msk                   (0x01UL << PORT_INDR_INDR8_Pos)                         /*!< PORT INDR: INDR8 Mask                   */
#define PORT_INDR_INDR9_Pos                   9                                                       /*!< PORT INDR: INDR9 Position               */
#define PORT_INDR_INDR9_Msk                   (0x01UL << PORT_INDR_INDR9_Pos)                         /*!< PORT INDR: INDR9 Mask                   */
#define PORT_INDR_INDR10_Pos                  10                                                      /*!< PORT INDR: INDR10 Position              */
#define PORT_INDR_INDR10_Msk                  (0x01UL << PORT_INDR_INDR10_Pos)                        /*!< PORT INDR: INDR10 Mask                  */
#define PORT_INDR_INDR11_Pos                  11                                                      /*!< PORT INDR: INDR11 Position              */
#define PORT_INDR_INDR11_Msk                  (0x01UL << PORT_INDR_INDR11_Pos)                        /*!< PORT INDR: INDR11 Mask                  */
#define PORT_INDR_INDR12_Pos                  12                                                      /*!< PORT INDR: INDR12 Position              */
#define PORT_INDR_INDR12_Msk                  (0x01UL << PORT_INDR_INDR12_Pos)                        /*!< PORT INDR: INDR12 Mask                  */
#define PORT_INDR_INDR13_Pos                  13                                                      /*!< PORT INDR: INDR13 Position              */
#define PORT_INDR_INDR13_Msk                  (0x01UL << PORT_INDR_INDR13_Pos)                        /*!< PORT INDR: INDR13 Mask                  */
#define PORT_INDR_INDR14_Pos                  14                                                      /*!< PORT INDR: INDR14 Position              */
#define PORT_INDR_INDR14_Msk                  (0x01UL << PORT_INDR_INDR14_Pos)                        /*!< PORT INDR: INDR14 Mask                  */
#define PORT_INDR_INDR15_Pos                  15                                                      /*!< PORT INDR: INDR15 Position              */
#define PORT_INDR_INDR15_Msk                  (0x01UL << PORT_INDR_INDR15_Pos)                        /*!< PORT INDR: INDR15 Mask                  */

/* ---------------------------------  PORT_OUTDR  --------------------------------- */
#define PORT_OUTDR_OUTDR0_Pos                 0                                                       /*!< PORT OUTDR: OUTDR0 Position             */
#define PORT_OUTDR_OUTDR0_Msk                 (0x01UL << PORT_OUTDR_OUTDR0_Pos)                       /*!< PORT OUTDR: OUTDR0 Mask                 */
#define PORT_OUTDR_OUTDR1_Pos                 1                                                       /*!< PORT OUTDR: OUTDR1 Position             */
#define PORT_OUTDR_OUTDR1_Msk                 (0x01UL << PORT_OUTDR_OUTDR1_Pos)                       /*!< PORT OUTDR: OUTDR1 Mask                 */
#define PORT_OUTDR_OUTDR2_Pos                 2                                                       /*!< PORT OUTDR: OUTDR2 Position             */
#define PORT_OUTDR_OUTDR2_Msk                 (0x01UL << PORT_OUTDR_OUTDR2_Pos)                       /*!< PORT OUTDR: OUTDR2 Mask                 */
#define PORT_OUTDR_OUTDR3_Pos                 3                                                       /*!< PORT OUTDR: OUTDR3 Position             */
#define PORT_OUTDR_OUTDR3_Msk                 (0x01UL << PORT_OUTDR_OUTDR3_Pos)                       /*!< PORT OUTDR: OUTDR3 Mask                 */
#define PORT_OUTDR_OUTDR4_Pos                 4                                                       /*!< PORT OUTDR: OUTDR4 Position             */
#define PORT_OUTDR_OUTDR4_Msk                 (0x01UL << PORT_OUTDR_OUTDR4_Pos)                       /*!< PORT OUTDR: OUTDR4 Mask                 */
#define PORT_OUTDR_OUTDR5_Pos                 5                                                       /*!< PORT OUTDR: OUTDR5 Position             */
#define PORT_OUTDR_OUTDR5_Msk                 (0x01UL << PORT_OUTDR_OUTDR5_Pos)                       /*!< PORT OUTDR: OUTDR5 Mask                 */
#define PORT_OUTDR_OUTDR6_Pos                 6                                                       /*!< PORT OUTDR: OUTDR6 Position             */
#define PORT_OUTDR_OUTDR6_Msk                 (0x01UL << PORT_OUTDR_OUTDR6_Pos)                       /*!< PORT OUTDR: OUTDR6 Mask                 */
#define PORT_OUTDR_OUTDR7_Pos                 7                                                       /*!< PORT OUTDR: OUTDR7 Position             */
#define PORT_OUTDR_OUTDR7_Msk                 (0x01UL << PORT_OUTDR_OUTDR7_Pos)                       /*!< PORT OUTDR: OUTDR7 Mask                 */
#define PORT_OUTDR_OUTDR8_Pos                 8                                                       /*!< PORT OUTDR: OUTDR8 Position             */
#define PORT_OUTDR_OUTDR8_Msk                 (0x01UL << PORT_OUTDR_OUTDR8_Pos)                       /*!< PORT OUTDR: OUTDR8 Mask                 */
#define PORT_OUTDR_OUTDR9_Pos                 9                                                       /*!< PORT OUTDR: OUTDR9 Position             */
#define PORT_OUTDR_OUTDR9_Msk                 (0x01UL << PORT_OUTDR_OUTDR9_Pos)                       /*!< PORT OUTDR: OUTDR9 Mask                 */
#define PORT_OUTDR_OUTDR10_Pos                10                                                      /*!< PORT OUTDR: OUTDR10 Position            */
#define PORT_OUTDR_OUTDR10_Msk                (0x01UL << PORT_OUTDR_OUTDR10_Pos)                      /*!< PORT OUTDR: OUTDR10 Mask                */
#define PORT_OUTDR_OUTDR11_Pos                11                                                      /*!< PORT OUTDR: OUTDR11 Position            */
#define PORT_OUTDR_OUTDR11_Msk                (0x01UL << PORT_OUTDR_OUTDR11_Pos)                      /*!< PORT OUTDR: OUTDR11 Mask                */
#define PORT_OUTDR_OUTDR12_Pos                12                                                      /*!< PORT OUTDR: OUTDR12 Position            */
#define PORT_OUTDR_OUTDR12_Msk                (0x01UL << PORT_OUTDR_OUTDR12_Pos)                      /*!< PORT OUTDR: OUTDR12 Mask                */
#define PORT_OUTDR_OUTDR13_Pos                13                                                      /*!< PORT OUTDR: OUTDR13 Position            */
#define PORT_OUTDR_OUTDR13_Msk                (0x01UL << PORT_OUTDR_OUTDR13_Pos)                      /*!< PORT OUTDR: OUTDR13 Mask                */
#define PORT_OUTDR_OUTDR14_Pos                14                                                      /*!< PORT OUTDR: OUTDR14 Position            */
#define PORT_OUTDR_OUTDR14_Msk                (0x01UL << PORT_OUTDR_OUTDR14_Pos)                      /*!< PORT OUTDR: OUTDR14 Mask                */
#define PORT_OUTDR_OUTDR15_Pos                15                                                      /*!< PORT OUTDR: OUTDR15 Position            */
#define PORT_OUTDR_OUTDR15_Msk                (0x01UL << PORT_OUTDR_OUTDR15_Pos)                      /*!< PORT OUTDR: OUTDR15 Mask                */

/* ----------------------------------  PORT_BSR  ---------------------------------- */
#define PORT_BSR_BSR0_Pos                     0                                                       /*!< PORT BSR: BSR0 Position                 */
#define PORT_BSR_BSR0_Msk                     (0x01UL << PORT_BSR_BSR0_Pos)                           /*!< PORT BSR: BSR0 Mask                     */
#define PORT_BSR_BSR1_Pos                     1                                                       /*!< PORT BSR: BSR1 Position                 */
#define PORT_BSR_BSR1_Msk                     (0x01UL << PORT_BSR_BSR1_Pos)                           /*!< PORT BSR: BSR1 Mask                     */
#define PORT_BSR_BSR2_Pos                     2                                                       /*!< PORT BSR: BSR2 Position                 */
#define PORT_BSR_BSR2_Msk                     (0x01UL << PORT_BSR_BSR2_Pos)                           /*!< PORT BSR: BSR2 Mask                     */
#define PORT_BSR_BSR3_Pos                     3                                                       /*!< PORT BSR: BSR3 Position                 */
#define PORT_BSR_BSR3_Msk                     (0x01UL << PORT_BSR_BSR3_Pos)                           /*!< PORT BSR: BSR3 Mask                     */
#define PORT_BSR_BSR4_Pos                     4                                                       /*!< PORT BSR: BSR4 Position                 */
#define PORT_BSR_BSR4_Msk                     (0x01UL << PORT_BSR_BSR4_Pos)                           /*!< PORT BSR: BSR4 Mask                     */
#define PORT_BSR_BSR5_Pos                     5                                                       /*!< PORT BSR: BSR5 Position                 */
#define PORT_BSR_BSR5_Msk                     (0x01UL << PORT_BSR_BSR5_Pos)                           /*!< PORT BSR: BSR5 Mask                     */
#define PORT_BSR_BSR6_Pos                     6                                                       /*!< PORT BSR: BSR6 Position                 */
#define PORT_BSR_BSR6_Msk                     (0x01UL << PORT_BSR_BSR6_Pos)                           /*!< PORT BSR: BSR6 Mask                     */
#define PORT_BSR_BSR7_Pos                     7                                                       /*!< PORT BSR: BSR7 Position                 */
#define PORT_BSR_BSR7_Msk                     (0x01UL << PORT_BSR_BSR7_Pos)                           /*!< PORT BSR: BSR7 Mask                     */
#define PORT_BSR_BSR8_Pos                     8                                                       /*!< PORT BSR: BSR8 Position                 */
#define PORT_BSR_BSR8_Msk                     (0x01UL << PORT_BSR_BSR8_Pos)                           /*!< PORT BSR: BSR8 Mask                     */
#define PORT_BSR_BSR9_Pos                     9                                                       /*!< PORT BSR: BSR9 Position                 */
#define PORT_BSR_BSR9_Msk                     (0x01UL << PORT_BSR_BSR9_Pos)                           /*!< PORT BSR: BSR9 Mask                     */
#define PORT_BSR_BSR10_Pos                    10                                                      /*!< PORT BSR: BSR10 Position                */
#define PORT_BSR_BSR10_Msk                    (0x01UL << PORT_BSR_BSR10_Pos)                          /*!< PORT BSR: BSR10 Mask                    */
#define PORT_BSR_BSR11_Pos                    11                                                      /*!< PORT BSR: BSR11 Position                */
#define PORT_BSR_BSR11_Msk                    (0x01UL << PORT_BSR_BSR11_Pos)                          /*!< PORT BSR: BSR11 Mask                    */
#define PORT_BSR_BSR12_Pos                    12                                                      /*!< PORT BSR: BSR12 Position                */
#define PORT_BSR_BSR12_Msk                    (0x01UL << PORT_BSR_BSR12_Pos)                          /*!< PORT BSR: BSR12 Mask                    */
#define PORT_BSR_BSR13_Pos                    13                                                      /*!< PORT BSR: BSR13 Position                */
#define PORT_BSR_BSR13_Msk                    (0x01UL << PORT_BSR_BSR13_Pos)                          /*!< PORT BSR: BSR13 Mask                    */
#define PORT_BSR_BSR14_Pos                    14                                                      /*!< PORT BSR: BSR14 Position                */
#define PORT_BSR_BSR14_Msk                    (0x01UL << PORT_BSR_BSR14_Pos)                          /*!< PORT BSR: BSR14 Mask                    */
#define PORT_BSR_BSR15_Pos                    15                                                      /*!< PORT BSR: BSR15 Position                */
#define PORT_BSR_BSR15_Msk                    (0x01UL << PORT_BSR_BSR15_Pos)                          /*!< PORT BSR: BSR15 Mask                    */

/* ----------------------------------  PORT_BCR  ---------------------------------- */
#define PORT_BCR_BCR0_Pos                     0                                                       /*!< PORT BCR: BCR0 Position                 */
#define PORT_BCR_BCR0_Msk                     (0x01UL << PORT_BCR_BCR0_Pos)                           /*!< PORT BCR: BCR0 Mask                     */
#define PORT_BCR_BCR1_Pos                     1                                                       /*!< PORT BCR: BCR1 Position                 */
#define PORT_BCR_BCR1_Msk                     (0x01UL << PORT_BCR_BCR1_Pos)                           /*!< PORT BCR: BCR1 Mask                     */
#define PORT_BCR_BCR2_Pos                     2                                                       /*!< PORT BCR: BCR2 Position                 */
#define PORT_BCR_BCR2_Msk                     (0x01UL << PORT_BCR_BCR2_Pos)                           /*!< PORT BCR: BCR2 Mask                     */
#define PORT_BCR_BCR3_Pos                     3                                                       /*!< PORT BCR: BCR3 Position                 */
#define PORT_BCR_BCR3_Msk                     (0x01UL << PORT_BCR_BCR3_Pos)                           /*!< PORT BCR: BCR3 Mask                     */
#define PORT_BCR_BCR4_Pos                     4                                                       /*!< PORT BCR: BCR4 Position                 */
#define PORT_BCR_BCR4_Msk                     (0x01UL << PORT_BCR_BCR4_Pos)                           /*!< PORT BCR: BCR4 Mask                     */
#define PORT_BCR_BCR5_Pos                     5                                                       /*!< PORT BCR: BCR5 Position                 */
#define PORT_BCR_BCR5_Msk                     (0x01UL << PORT_BCR_BCR5_Pos)                           /*!< PORT BCR: BCR5 Mask                     */
#define PORT_BCR_BCR6_Pos                     6                                                       /*!< PORT BCR: BCR6 Position                 */
#define PORT_BCR_BCR6_Msk                     (0x01UL << PORT_BCR_BCR6_Pos)                           /*!< PORT BCR: BCR6 Mask                     */
#define PORT_BCR_BCR7_Pos                     7                                                       /*!< PORT BCR: BCR7 Position                 */
#define PORT_BCR_BCR7_Msk                     (0x01UL << PORT_BCR_BCR7_Pos)                           /*!< PORT BCR: BCR7 Mask                     */
#define PORT_BCR_BCR8_Pos                     8                                                       /*!< PORT BCR: BCR8 Position                 */
#define PORT_BCR_BCR8_Msk                     (0x01UL << PORT_BCR_BCR8_Pos)                           /*!< PORT BCR: BCR8 Mask                     */
#define PORT_BCR_BCR9_Pos                     9                                                       /*!< PORT BCR: BCR9 Position                 */
#define PORT_BCR_BCR9_Msk                     (0x01UL << PORT_BCR_BCR9_Pos)                           /*!< PORT BCR: BCR9 Mask                     */
#define PORT_BCR_BCR10_Pos                    10                                                      /*!< PORT BCR: BCR10 Position                */
#define PORT_BCR_BCR10_Msk                    (0x01UL << PORT_BCR_BCR10_Pos)                          /*!< PORT BCR: BCR10 Mask                    */
#define PORT_BCR_BCR11_Pos                    11                                                      /*!< PORT BCR: BCR11 Position                */
#define PORT_BCR_BCR11_Msk                    (0x01UL << PORT_BCR_BCR11_Pos)                          /*!< PORT BCR: BCR11 Mask                    */
#define PORT_BCR_BCR12_Pos                    12                                                      /*!< PORT BCR: BCR12 Position                */
#define PORT_BCR_BCR12_Msk                    (0x01UL << PORT_BCR_BCR12_Pos)                          /*!< PORT BCR: BCR12 Mask                    */
#define PORT_BCR_BCR13_Pos                    13                                                      /*!< PORT BCR: BCR13 Position                */
#define PORT_BCR_BCR13_Msk                    (0x01UL << PORT_BCR_BCR13_Pos)                          /*!< PORT BCR: BCR13 Mask                    */
#define PORT_BCR_BCR14_Pos                    14                                                      /*!< PORT BCR: BCR14 Position                */
#define PORT_BCR_BCR14_Msk                    (0x01UL << PORT_BCR_BCR14_Pos)                          /*!< PORT BCR: BCR14 Mask                    */
#define PORT_BCR_BCR15_Pos                    15                                                      /*!< PORT BCR: BCR15 Position                */
#define PORT_BCR_BCR15_Msk                    (0x01UL << PORT_BCR_BCR15_Pos)                          /*!< PORT BCR: BCR15 Mask                    */

/* --------------------------------  PORT_OUTDMSK  -------------------------------- */
#define PORT_OUTDMSK_OUTDMSK0_Pos             0                                                       /*!< PORT OUTDMSK: OUTDMSK0 Position         */
#define PORT_OUTDMSK_OUTDMSK0_Msk             (0x01UL << PORT_OUTDMSK_OUTDMSK0_Pos)                   /*!< PORT OUTDMSK: OUTDMSK0 Mask             */
#define PORT_OUTDMSK_OUTDMSK1_Pos             1                                                       /*!< PORT OUTDMSK: OUTDMSK1 Position         */
#define PORT_OUTDMSK_OUTDMSK1_Msk             (0x01UL << PORT_OUTDMSK_OUTDMSK1_Pos)                   /*!< PORT OUTDMSK: OUTDMSK1 Mask             */
#define PORT_OUTDMSK_OUTDMSK2_Pos             2                                                       /*!< PORT OUTDMSK: OUTDMSK2 Position         */
#define PORT_OUTDMSK_OUTDMSK2_Msk             (0x01UL << PORT_OUTDMSK_OUTDMSK2_Pos)                   /*!< PORT OUTDMSK: OUTDMSK2 Mask             */
#define PORT_OUTDMSK_OUTDMSK3_Pos             3                                                       /*!< PORT OUTDMSK: OUTDMSK3 Position         */
#define PORT_OUTDMSK_OUTDMSK3_Msk             (0x01UL << PORT_OUTDMSK_OUTDMSK3_Pos)                   /*!< PORT OUTDMSK: OUTDMSK3 Mask             */
#define PORT_OUTDMSK_OUTDMSK4_Pos             4                                                       /*!< PORT OUTDMSK: OUTDMSK4 Position         */
#define PORT_OUTDMSK_OUTDMSK4_Msk             (0x01UL << PORT_OUTDMSK_OUTDMSK4_Pos)                   /*!< PORT OUTDMSK: OUTDMSK4 Mask             */
#define PORT_OUTDMSK_OUTDMSK5_Pos             5                                                       /*!< PORT OUTDMSK: OUTDMSK5 Position         */
#define PORT_OUTDMSK_OUTDMSK5_Msk             (0x01UL << PORT_OUTDMSK_OUTDMSK5_Pos)                   /*!< PORT OUTDMSK: OUTDMSK5 Mask             */
#define PORT_OUTDMSK_OUTDMSK6_Pos             6                                                       /*!< PORT OUTDMSK: OUTDMSK6 Position         */
#define PORT_OUTDMSK_OUTDMSK6_Msk             (0x01UL << PORT_OUTDMSK_OUTDMSK6_Pos)                   /*!< PORT OUTDMSK: OUTDMSK6 Mask             */
#define PORT_OUTDMSK_OUTDMSK7_Pos             7                                                       /*!< PORT OUTDMSK: OUTDMSK7 Position         */
#define PORT_OUTDMSK_OUTDMSK7_Msk             (0x01UL << PORT_OUTDMSK_OUTDMSK7_Pos)                   /*!< PORT OUTDMSK: OUTDMSK7 Mask             */
#define PORT_OUTDMSK_OUTDMSK8_Pos             8                                                       /*!< PORT OUTDMSK: OUTDMSK8 Position         */
#define PORT_OUTDMSK_OUTDMSK8_Msk             (0x01UL << PORT_OUTDMSK_OUTDMSK8_Pos)                   /*!< PORT OUTDMSK: OUTDMSK8 Mask             */
#define PORT_OUTDMSK_OUTDMSK9_Pos             9                                                       /*!< PORT OUTDMSK: OUTDMSK9 Position         */
#define PORT_OUTDMSK_OUTDMSK9_Msk             (0x01UL << PORT_OUTDMSK_OUTDMSK9_Pos)                   /*!< PORT OUTDMSK: OUTDMSK9 Mask             */
#define PORT_OUTDMSK_OUTDMSK10_Pos            10                                                      /*!< PORT OUTDMSK: OUTDMSK10 Position        */
#define PORT_OUTDMSK_OUTDMSK10_Msk            (0x01UL << PORT_OUTDMSK_OUTDMSK10_Pos)                  /*!< PORT OUTDMSK: OUTDMSK10 Mask            */
#define PORT_OUTDMSK_OUTDMSK11_Pos            11                                                      /*!< PORT OUTDMSK: OUTDMSK11 Position        */
#define PORT_OUTDMSK_OUTDMSK11_Msk            (0x01UL << PORT_OUTDMSK_OUTDMSK11_Pos)                  /*!< PORT OUTDMSK: OUTDMSK11 Mask            */
#define PORT_OUTDMSK_OUTDMSK12_Pos            12                                                      /*!< PORT OUTDMSK: OUTDMSK12 Position        */
#define PORT_OUTDMSK_OUTDMSK12_Msk            (0x01UL << PORT_OUTDMSK_OUTDMSK12_Pos)                  /*!< PORT OUTDMSK: OUTDMSK12 Mask            */
#define PORT_OUTDMSK_OUTDMSK13_Pos            13                                                      /*!< PORT OUTDMSK: OUTDMSK13 Position        */
#define PORT_OUTDMSK_OUTDMSK13_Msk            (0x01UL << PORT_OUTDMSK_OUTDMSK13_Pos)                  /*!< PORT OUTDMSK: OUTDMSK13 Mask            */
#define PORT_OUTDMSK_OUTDMSK14_Pos            14                                                      /*!< PORT OUTDMSK: OUTDMSK14 Position        */
#define PORT_OUTDMSK_OUTDMSK14_Msk            (0x01UL << PORT_OUTDMSK_OUTDMSK14_Pos)                  /*!< PORT OUTDMSK: OUTDMSK14 Mask            */
#define PORT_OUTDMSK_OUTDMSK15_Pos            15                                                      /*!< PORT OUTDMSK: OUTDMSK15 Position        */
#define PORT_OUTDMSK_OUTDMSK15_Msk            (0x01UL << PORT_OUTDMSK_OUTDMSK15_Pos)                  /*!< PORT OUTDMSK: OUTDMSK15 Mask            */

/* ----------------------------------  PORT_DBCR  --------------------------------- */
#define PORT_DBCR_DBEN0_Pos                   0                                                       /*!< PORT DBCR: DBEN0 Position               */
#define PORT_DBCR_DBEN0_Msk                   (0x01UL << PORT_DBCR_DBEN0_Pos)                         /*!< PORT DBCR: DBEN0 Mask                   */
#define PORT_DBCR_DBEN1_Pos                   1                                                       /*!< PORT DBCR: DBEN1 Position               */
#define PORT_DBCR_DBEN1_Msk                   (0x01UL << PORT_DBCR_DBEN1_Pos)                         /*!< PORT DBCR: DBEN1 Mask                   */
#define PORT_DBCR_DBEN2_Pos                   2                                                       /*!< PORT DBCR: DBEN2 Position               */
#define PORT_DBCR_DBEN2_Msk                   (0x01UL << PORT_DBCR_DBEN2_Pos)                         /*!< PORT DBCR: DBEN2 Mask                   */
#define PORT_DBCR_DBEN3_Pos                   3                                                       /*!< PORT DBCR: DBEN3 Position               */
#define PORT_DBCR_DBEN3_Msk                   (0x01UL << PORT_DBCR_DBEN3_Pos)                         /*!< PORT DBCR: DBEN3 Mask                   */
#define PORT_DBCR_DBEN4_Pos                   4                                                       /*!< PORT DBCR: DBEN4 Position               */
#define PORT_DBCR_DBEN4_Msk                   (0x01UL << PORT_DBCR_DBEN4_Pos)                         /*!< PORT DBCR: DBEN4 Mask                   */
#define PORT_DBCR_DBEN5_Pos                   5                                                       /*!< PORT DBCR: DBEN5 Position               */
#define PORT_DBCR_DBEN5_Msk                   (0x01UL << PORT_DBCR_DBEN5_Pos)                         /*!< PORT DBCR: DBEN5 Mask                   */
#define PORT_DBCR_DBEN6_Pos                   6                                                       /*!< PORT DBCR: DBEN6 Position               */
#define PORT_DBCR_DBEN6_Msk                   (0x01UL << PORT_DBCR_DBEN6_Pos)                         /*!< PORT DBCR: DBEN6 Mask                   */
#define PORT_DBCR_DBEN7_Pos                   7                                                       /*!< PORT DBCR: DBEN7 Position               */
#define PORT_DBCR_DBEN7_Msk                   (0x01UL << PORT_DBCR_DBEN7_Pos)                         /*!< PORT DBCR: DBEN7 Mask                   */
#define PORT_DBCR_DBEN8_Pos                   8                                                       /*!< PORT DBCR: DBEN8 Position               */
#define PORT_DBCR_DBEN8_Msk                   (0x01UL << PORT_DBCR_DBEN8_Pos)                         /*!< PORT DBCR: DBEN8 Mask                   */
#define PORT_DBCR_DBEN9_Pos                   9                                                       /*!< PORT DBCR: DBEN9 Position               */
#define PORT_DBCR_DBEN9_Msk                   (0x01UL << PORT_DBCR_DBEN9_Pos)                         /*!< PORT DBCR: DBEN9 Mask                   */
#define PORT_DBCR_DBEN10_Pos                  10                                                      /*!< PORT DBCR: DBEN10 Position              */
#define PORT_DBCR_DBEN10_Msk                  (0x01UL << PORT_DBCR_DBEN10_Pos)                        /*!< PORT DBCR: DBEN10 Mask                  */
#define PORT_DBCR_DBEN11_Pos                  11                                                      /*!< PORT DBCR: DBEN11 Position              */
#define PORT_DBCR_DBEN11_Msk                  (0x01UL << PORT_DBCR_DBEN11_Pos)                        /*!< PORT DBCR: DBEN11 Mask                  */
#define PORT_DBCR_DBEN12_Pos                  12                                                      /*!< PORT DBCR: DBEN12 Position              */
#define PORT_DBCR_DBEN12_Msk                  (0x01UL << PORT_DBCR_DBEN12_Pos)                        /*!< PORT DBCR: DBEN12 Mask                  */
#define PORT_DBCR_DBEN13_Pos                  13                                                      /*!< PORT DBCR: DBEN13 Position              */
#define PORT_DBCR_DBEN13_Msk                  (0x01UL << PORT_DBCR_DBEN13_Pos)                        /*!< PORT DBCR: DBEN13 Mask                  */
#define PORT_DBCR_DBEN14_Pos                  14                                                      /*!< PORT DBCR: DBEN14 Position              */
#define PORT_DBCR_DBEN14_Msk                  (0x01UL << PORT_DBCR_DBEN14_Pos)                        /*!< PORT DBCR: DBEN14 Mask                  */
#define PORT_DBCR_DBEN15_Pos                  15                                                      /*!< PORT DBCR: DBEN15 Position              */
#define PORT_DBCR_DBEN15_Msk                  (0x01UL << PORT_DBCR_DBEN15_Pos)                        /*!< PORT DBCR: DBEN15 Mask                  */

/* ----------------------------------  PORT_IER  ---------------------------------- */
#define PORT_IER_P0_Pos                       0                                                       /*!< PORT IER: P0 Position                   */
#define PORT_IER_P0_Msk                       (0x03UL << PORT_IER_P0_Pos)                             /*!< PORT IER: P0 Mask                       */
#define PORT_IER_P1_Pos                       2                                                       /*!< PORT IER: P1 Position                   */
#define PORT_IER_P1_Msk                       (0x03UL << PORT_IER_P1_Pos)                             /*!< PORT IER: P1 Mask                       */
#define PORT_IER_P2_Pos                       4                                                       /*!< PORT IER: P2 Position                   */
#define PORT_IER_P2_Msk                       (0x03UL << PORT_IER_P2_Pos)                             /*!< PORT IER: P2 Mask                       */
#define PORT_IER_P3_Pos                       6                                                       /*!< PORT IER: P3 Position                   */
#define PORT_IER_P3_Msk                       (0x03UL << PORT_IER_P3_Pos)                             /*!< PORT IER: P3 Mask                       */
#define PORT_IER_P4_Pos                       8                                                       /*!< PORT IER: P4 Position                   */
#define PORT_IER_P4_Msk                       (0x03UL << PORT_IER_P4_Pos)                             /*!< PORT IER: P4 Mask                       */
#define PORT_IER_P5_Pos                       10                                                      /*!< PORT IER: P5 Position                   */
#define PORT_IER_P5_Msk                       (0x03UL << PORT_IER_P5_Pos)                             /*!< PORT IER: P5 Mask                       */
#define PORT_IER_P6_Pos                       12                                                      /*!< PORT IER: P6 Position                   */
#define PORT_IER_P6_Msk                       (0x03UL << PORT_IER_P6_Pos)                             /*!< PORT IER: P6 Mask                       */
#define PORT_IER_P7_Pos                       14                                                      /*!< PORT IER: P7 Position                   */
#define PORT_IER_P7_Msk                       (0x03UL << PORT_IER_P7_Pos)                             /*!< PORT IER: P7 Mask                       */
#define PORT_IER_P8_Pos                       16                                                      /*!< PORT IER: P8 Position                   */
#define PORT_IER_P8_Msk                       (0x03UL << PORT_IER_P8_Pos)                             /*!< PORT IER: P8 Mask                       */
#define PORT_IER_P9_Pos                       18                                                      /*!< PORT IER: P9 Position                   */
#define PORT_IER_P9_Msk                       (0x03UL << PORT_IER_P9_Pos)                             /*!< PORT IER: P9 Mask                       */
#define PORT_IER_P10_Pos                      20                                                      /*!< PORT IER: P10 Position                  */
#define PORT_IER_P10_Msk                      (0x03UL << PORT_IER_P10_Pos)                            /*!< PORT IER: P10 Mask                      */
#define PORT_IER_P11_Pos                      22                                                      /*!< PORT IER: P11 Position                  */
#define PORT_IER_P11_Msk                      (0x03UL << PORT_IER_P11_Pos)                            /*!< PORT IER: P11 Mask                      */
#define PORT_IER_P12_Pos                      24                                                      /*!< PORT IER: P12 Position                  */
#define PORT_IER_P12_Msk                      (0x03UL << PORT_IER_P12_Pos)                            /*!< PORT IER: P12 Mask                      */
#define PORT_IER_P13_Pos                      26                                                      /*!< PORT IER: P13 Position                  */
#define PORT_IER_P13_Msk                      (0x03UL << PORT_IER_P13_Pos)                            /*!< PORT IER: P13 Mask                      */
#define PORT_IER_P14_Pos                      28                                                      /*!< PORT IER: P14 Position                  */
#define PORT_IER_P14_Msk                      (0x03UL << PORT_IER_P14_Pos)                            /*!< PORT IER: P14 Mask                      */
#define PORT_IER_P15_Pos                      30                                                      /*!< PORT IER: P15 Position                  */
#define PORT_IER_P15_Msk                      (0x03UL << PORT_IER_P15_Pos)                            /*!< PORT IER: P15 Mask                      */

/* ----------------------------------  PORT_ISR  ---------------------------------- */
#define PORT_ISR_P0_Pos                       0                                                       /*!< PORT ISR: P0 Position                   */
#define PORT_ISR_P0_Msk                       (0x03UL << PORT_ISR_P0_Pos)                             /*!< PORT ISR: P0 Mask                       */
#define PORT_ISR_P1_Pos                       2                                                       /*!< PORT ISR: P1 Position                   */
#define PORT_ISR_P1_Msk                       (0x03UL << PORT_ISR_P1_Pos)                             /*!< PORT ISR: P1 Mask                       */
#define PORT_ISR_P2_Pos                       4                                                       /*!< PORT ISR: P2 Position                   */
#define PORT_ISR_P2_Msk                       (0x03UL << PORT_ISR_P2_Pos)                             /*!< PORT ISR: P2 Mask                       */
#define PORT_ISR_P3_Pos                       6                                                       /*!< PORT ISR: P3 Position                   */
#define PORT_ISR_P3_Msk                       (0x03UL << PORT_ISR_P3_Pos)                             /*!< PORT ISR: P3 Mask                       */
#define PORT_ISR_P4_Pos                       8                                                       /*!< PORT ISR: P4 Position                   */
#define PORT_ISR_P4_Msk                       (0x03UL << PORT_ISR_P4_Pos)                             /*!< PORT ISR: P4 Mask                       */
#define PORT_ISR_P5_Pos                       10                                                      /*!< PORT ISR: P5 Position                   */
#define PORT_ISR_P5_Msk                       (0x03UL << PORT_ISR_P5_Pos)                             /*!< PORT ISR: P5 Mask                       */
#define PORT_ISR_P6_Pos                       12                                                      /*!< PORT ISR: P6 Position                   */
#define PORT_ISR_P6_Msk                       (0x03UL << PORT_ISR_P6_Pos)                             /*!< PORT ISR: P6 Mask                       */
#define PORT_ISR_P7_Pos                       14                                                      /*!< PORT ISR: P7 Position                   */
#define PORT_ISR_P7_Msk                       (0x03UL << PORT_ISR_P7_Pos)                             /*!< PORT ISR: P7 Mask                       */
#define PORT_ISR_P8_Pos                       16                                                      /*!< PORT ISR: P8 Position                   */
#define PORT_ISR_P8_Msk                       (0x03UL << PORT_ISR_P8_Pos)                             /*!< PORT ISR: P8 Mask                       */
#define PORT_ISR_P9_Pos                       18                                                      /*!< PORT ISR: P9 Position                   */
#define PORT_ISR_P9_Msk                       (0x03UL << PORT_ISR_P9_Pos)                             /*!< PORT ISR: P9 Mask                       */
#define PORT_ISR_P10_Pos                      20                                                      /*!< PORT ISR: P10 Position                  */
#define PORT_ISR_P10_Msk                      (0x03UL << PORT_ISR_P10_Pos)                            /*!< PORT ISR: P10 Mask                      */
#define PORT_ISR_P11_Pos                      22                                                      /*!< PORT ISR: P11 Position                  */
#define PORT_ISR_P11_Msk                      (0x03UL << PORT_ISR_P11_Pos)                            /*!< PORT ISR: P11 Mask                      */
#define PORT_ISR_P12_Pos                      24                                                      /*!< PORT ISR: P12 Position                  */
#define PORT_ISR_P12_Msk                      (0x03UL << PORT_ISR_P12_Pos)                            /*!< PORT ISR: P12 Mask                      */
#define PORT_ISR_P13_Pos                      26                                                      /*!< PORT ISR: P13 Position                  */
#define PORT_ISR_P13_Msk                      (0x03UL << PORT_ISR_P13_Pos)                            /*!< PORT ISR: P13 Mask                      */
#define PORT_ISR_P14_Pos                      28                                                      /*!< PORT ISR: P14 Position                  */
#define PORT_ISR_P14_Msk                      (0x03UL << PORT_ISR_P14_Pos)                            /*!< PORT ISR: P14 Mask                      */
#define PORT_ISR_P15_Pos                      30                                                      /*!< PORT ISR: P15 Position                  */
#define PORT_ISR_P15_Msk                      (0x03UL << PORT_ISR_P15_Pos)                            /*!< PORT ISR: P15 Mask                      */

/* ----------------------------------  PORT_ICR  ---------------------------------- */
#define PORT_ICR_P0_Pos                       0                                                       /*!< PORT ICR: P0 Position                   */
#define PORT_ICR_P0_Msk                       (0x03UL << PORT_ICR_P0_Pos)                             /*!< PORT ICR: P0 Mask                       */
#define PORT_ICR_P1_Pos                       2                                                       /*!< PORT ICR: P1 Position                   */
#define PORT_ICR_P1_Msk                       (0x03UL << PORT_ICR_P1_Pos)                             /*!< PORT ICR: P1 Mask                       */
#define PORT_ICR_P2_Pos                       4                                                       /*!< PORT ICR: P2 Position                   */
#define PORT_ICR_P2_Msk                       (0x03UL << PORT_ICR_P2_Pos)                             /*!< PORT ICR: P2 Mask                       */
#define PORT_ICR_P3_Pos                       6                                                       /*!< PORT ICR: P3 Position                   */
#define PORT_ICR_P3_Msk                       (0x03UL << PORT_ICR_P3_Pos)                             /*!< PORT ICR: P3 Mask                       */
#define PORT_ICR_P4_Pos                       8                                                       /*!< PORT ICR: P4 Position                   */
#define PORT_ICR_P4_Msk                       (0x03UL << PORT_ICR_P4_Pos)                             /*!< PORT ICR: P4 Mask                       */
#define PORT_ICR_P5_Pos                       10                                                      /*!< PORT ICR: P5 Position                   */
#define PORT_ICR_P5_Msk                       (0x03UL << PORT_ICR_P5_Pos)                             /*!< PORT ICR: P5 Mask                       */
#define PORT_ICR_P6_Pos                       12                                                      /*!< PORT ICR: P6 Position                   */
#define PORT_ICR_P6_Msk                       (0x03UL << PORT_ICR_P6_Pos)                             /*!< PORT ICR: P6 Mask                       */
#define PORT_ICR_P7_Pos                       14                                                      /*!< PORT ICR: P7 Position                   */
#define PORT_ICR_P7_Msk                       (0x03UL << PORT_ICR_P7_Pos)                             /*!< PORT ICR: P7 Mask                       */
#define PORT_ICR_P8_Pos                       16                                                      /*!< PORT ICR: P8 Position                   */
#define PORT_ICR_P8_Msk                       (0x03UL << PORT_ICR_P8_Pos)                             /*!< PORT ICR: P8 Mask                       */
#define PORT_ICR_P9_Pos                       18                                                      /*!< PORT ICR: P9 Position                   */
#define PORT_ICR_P9_Msk                       (0x03UL << PORT_ICR_P9_Pos)                             /*!< PORT ICR: P9 Mask                       */
#define PORT_ICR_P10_Pos                      20                                                      /*!< PORT ICR: P10 Position                  */
#define PORT_ICR_P10_Msk                      (0x03UL << PORT_ICR_P10_Pos)                            /*!< PORT ICR: P10 Mask                      */
#define PORT_ICR_P11_Pos                      22                                                      /*!< PORT ICR: P11 Position                  */
#define PORT_ICR_P11_Msk                      (0x03UL << PORT_ICR_P11_Pos)                            /*!< PORT ICR: P11 Mask                      */
#define PORT_ICR_P12_Pos                      24                                                      /*!< PORT ICR: P12 Position                  */
#define PORT_ICR_P12_Msk                      (0x03UL << PORT_ICR_P12_Pos)                            /*!< PORT ICR: P12 Mask                      */
#define PORT_ICR_P13_Pos                      26                                                      /*!< PORT ICR: P13 Position                  */
#define PORT_ICR_P13_Msk                      (0x03UL << PORT_ICR_P13_Pos)                            /*!< PORT ICR: P13 Mask                      */
#define PORT_ICR_P14_Pos                      28                                                      /*!< PORT ICR: P14 Position                  */
#define PORT_ICR_P14_Msk                      (0x03UL << PORT_ICR_P14_Pos)                            /*!< PORT ICR: P14 Mask                      */
#define PORT_ICR_P15_Pos                      30                                                      /*!< PORT ICR: P15 Position                  */
#define PORT_ICR_P15_Msk                      (0x03UL << PORT_ICR_P15_Pos)                            /*!< PORT ICR: P15 Mask                      */


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
/* ================          struct 'PCU' Position & Mask          ================ */
/* ================================================================================ */


/* ---------------------------------  PCU_PORTEN  --------------------------------- */
#define PCU_PORTEN_PORTEN_Pos                 0                                                       /*!< PCU PORTEN: PORTEN Position             */
#define PCU_PORTEN_PORTEN_Msk                 (0x000000ffUL << PCU_PORTEN_PORTEN_Pos)                 /*!< PCU PORTEN: PORTEN Mask                 */


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
#define FMC_LOCK_RPROT_Msk                    (0x000000ffUL << FMC_LOCK_RPROT_Pos)                    /*!< FMC LOCK: RPROT Mask                    */


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
/* ================          struct 'EBI' Position & Mask          ================ */
/* ================================================================================ */


/* ---------------------------------  EBI_SMIBCR0  -------------------------------- */
#define EBI_SMIBCR0_NORMWAIT_Pos              0                                                       /*!< EBI SMIBCR0: NORMWAIT Position          */
#define EBI_SMIBCR0_NORMWAIT_Msk              (0x3fUL << EBI_SMIBCR0_NORMWAIT_Pos)                    /*!< EBI SMIBCR0: NORMWAIT Mask              */
#define EBI_SMIBCR0_MWIDTH_Pos                16                                                      /*!< EBI SMIBCR0: MWIDTH Position            */
#define EBI_SMIBCR0_MWIDTH_Msk                (0x03UL << EBI_SMIBCR0_MWIDTH_Pos)                      /*!< EBI SMIBCR0: MWIDTH Mask                */
#define EBI_SMIBCR0_AH_Pos                    18                                                      /*!< EBI SMIBCR0: AH Position                */
#define EBI_SMIBCR0_AH_Msk                    (0x03UL << EBI_SMIBCR0_AH_Pos)                          /*!< EBI SMIBCR0: AH Mask                    */
#define EBI_SMIBCR0_BLEN_Pos                  20                                                      /*!< EBI SMIBCR0: BLEN Position              */
#define EBI_SMIBCR0_BLEN_Msk                  (0x01UL << EBI_SMIBCR0_BLEN_Pos)                        /*!< EBI SMIBCR0: BLEN Mask                  */
#define EBI_SMIBCR0_IOE_Pos                   21                                                      /*!< EBI SMIBCR0: IOE Position               */
#define EBI_SMIBCR0_IOE_Msk                   (0x01UL << EBI_SMIBCR0_IOE_Pos)                         /*!< EBI SMIBCR0: IOE Mask                   */
#define EBI_SMIBCR0_EWP_Pos                   22                                                      /*!< EBI SMIBCR0: EWP Position               */
#define EBI_SMIBCR0_EWP_Msk                   (0x01UL << EBI_SMIBCR0_EWP_Pos)                         /*!< EBI SMIBCR0: EWP Mask                   */
#define EBI_SMIBCR0_EWEN_Pos                  23                                                      /*!< EBI SMIBCR0: EWEN Position              */
#define EBI_SMIBCR0_EWEN_Msk                  (0x01UL << EBI_SMIBCR0_EWEN_Pos)                        /*!< EBI SMIBCR0: EWEN Mask                  */
#define EBI_SMIBCR0_PREIDL_Pos                26                                                      /*!< EBI SMIBCR0: PREIDL Position            */
#define EBI_SMIBCR0_PREIDL_Msk                (0x03UL << EBI_SMIBCR0_PREIDL_Pos)                      /*!< EBI SMIBCR0: PREIDL Mask                */
#define EBI_SMIBCR0_IDLE_Pos                  30                                                      /*!< EBI SMIBCR0: IDLE Position              */
#define EBI_SMIBCR0_IDLE_Msk                  (0x03UL << EBI_SMIBCR0_IDLE_Pos)                        /*!< EBI SMIBCR0: IDLE Mask                  */

/* ---------------------------------  EBI_SMIBCR1  -------------------------------- */
#define EBI_SMIBCR1_NORMWAIT_Pos              0                                                       /*!< EBI SMIBCR1: NORMWAIT Position          */
#define EBI_SMIBCR1_NORMWAIT_Msk              (0x3fUL << EBI_SMIBCR1_NORMWAIT_Pos)                    /*!< EBI SMIBCR1: NORMWAIT Mask              */
#define EBI_SMIBCR1_MWIDTH_Pos                16                                                      /*!< EBI SMIBCR1: MWIDTH Position            */
#define EBI_SMIBCR1_MWIDTH_Msk                (0x03UL << EBI_SMIBCR1_MWIDTH_Pos)                      /*!< EBI SMIBCR1: MWIDTH Mask                */
#define EBI_SMIBCR1_AH_Pos                    18                                                      /*!< EBI SMIBCR1: AH Position                */
#define EBI_SMIBCR1_AH_Msk                    (0x03UL << EBI_SMIBCR1_AH_Pos)                          /*!< EBI SMIBCR1: AH Mask                    */
#define EBI_SMIBCR1_BLEN_Pos                  20                                                      /*!< EBI SMIBCR1: BLEN Position              */
#define EBI_SMIBCR1_BLEN_Msk                  (0x01UL << EBI_SMIBCR1_BLEN_Pos)                        /*!< EBI SMIBCR1: BLEN Mask                  */
#define EBI_SMIBCR1_IOE_Pos                   21                                                      /*!< EBI SMIBCR1: IOE Position               */
#define EBI_SMIBCR1_IOE_Msk                   (0x01UL << EBI_SMIBCR1_IOE_Pos)                         /*!< EBI SMIBCR1: IOE Mask                   */
#define EBI_SMIBCR1_EWP_Pos                   22                                                      /*!< EBI SMIBCR1: EWP Position               */
#define EBI_SMIBCR1_EWP_Msk                   (0x01UL << EBI_SMIBCR1_EWP_Pos)                         /*!< EBI SMIBCR1: EWP Mask                   */
#define EBI_SMIBCR1_EWEN_Pos                  23                                                      /*!< EBI SMIBCR1: EWEN Position              */
#define EBI_SMIBCR1_EWEN_Msk                  (0x01UL << EBI_SMIBCR1_EWEN_Pos)                        /*!< EBI SMIBCR1: EWEN Mask                  */
#define EBI_SMIBCR1_PREIDL_Pos                26                                                      /*!< EBI SMIBCR1: PREIDL Position            */
#define EBI_SMIBCR1_PREIDL_Msk                (0x03UL << EBI_SMIBCR1_PREIDL_Pos)                      /*!< EBI SMIBCR1: PREIDL Mask                */
#define EBI_SMIBCR1_IDLE_Pos                  30                                                      /*!< EBI SMIBCR1: IDLE Position              */
#define EBI_SMIBCR1_IDLE_Msk                  (0x03UL << EBI_SMIBCR1_IDLE_Pos)                        /*!< EBI SMIBCR1: IDLE Mask                  */

/* ---------------------------------  EBI_SMIBCR2  -------------------------------- */
#define EBI_SMIBCR2_NORMWAIT_Pos              0                                                       /*!< EBI SMIBCR2: NORMWAIT Position          */
#define EBI_SMIBCR2_NORMWAIT_Msk              (0x3fUL << EBI_SMIBCR2_NORMWAIT_Pos)                    /*!< EBI SMIBCR2: NORMWAIT Mask              */
#define EBI_SMIBCR2_MWIDTH_Pos                16                                                      /*!< EBI SMIBCR2: MWIDTH Position            */
#define EBI_SMIBCR2_MWIDTH_Msk                (0x03UL << EBI_SMIBCR2_MWIDTH_Pos)                      /*!< EBI SMIBCR2: MWIDTH Mask                */
#define EBI_SMIBCR2_AH_Pos                    18                                                      /*!< EBI SMIBCR2: AH Position                */
#define EBI_SMIBCR2_AH_Msk                    (0x03UL << EBI_SMIBCR2_AH_Pos)                          /*!< EBI SMIBCR2: AH Mask                    */
#define EBI_SMIBCR2_BLEN_Pos                  20                                                      /*!< EBI SMIBCR2: BLEN Position              */
#define EBI_SMIBCR2_BLEN_Msk                  (0x01UL << EBI_SMIBCR2_BLEN_Pos)                        /*!< EBI SMIBCR2: BLEN Mask                  */
#define EBI_SMIBCR2_IOE_Pos                   21                                                      /*!< EBI SMIBCR2: IOE Position               */
#define EBI_SMIBCR2_IOE_Msk                   (0x01UL << EBI_SMIBCR2_IOE_Pos)                         /*!< EBI SMIBCR2: IOE Mask                   */
#define EBI_SMIBCR2_EWP_Pos                   22                                                      /*!< EBI SMIBCR2: EWP Position               */
#define EBI_SMIBCR2_EWP_Msk                   (0x01UL << EBI_SMIBCR2_EWP_Pos)                         /*!< EBI SMIBCR2: EWP Mask                   */
#define EBI_SMIBCR2_EWEN_Pos                  23                                                      /*!< EBI SMIBCR2: EWEN Position              */
#define EBI_SMIBCR2_EWEN_Msk                  (0x01UL << EBI_SMIBCR2_EWEN_Pos)                        /*!< EBI SMIBCR2: EWEN Mask                  */
#define EBI_SMIBCR2_PREIDL_Pos                26                                                      /*!< EBI SMIBCR2: PREIDL Position            */
#define EBI_SMIBCR2_PREIDL_Msk                (0x03UL << EBI_SMIBCR2_PREIDL_Pos)                      /*!< EBI SMIBCR2: PREIDL Mask                */
#define EBI_SMIBCR2_IDLE_Pos                  30                                                      /*!< EBI SMIBCR2: IDLE Position              */
#define EBI_SMIBCR2_IDLE_Msk                  (0x03UL << EBI_SMIBCR2_IDLE_Pos)                        /*!< EBI SMIBCR2: IDLE Mask                  */

/* ---------------------------------  EBI_SMIBCR3  -------------------------------- */
#define EBI_SMIBCR3_NORMWAIT_Pos              0                                                       /*!< EBI SMIBCR3: NORMWAIT Position          */
#define EBI_SMIBCR3_NORMWAIT_Msk              (0x3fUL << EBI_SMIBCR3_NORMWAIT_Pos)                    /*!< EBI SMIBCR3: NORMWAIT Mask              */
#define EBI_SMIBCR3_MWIDTH_Pos                16                                                      /*!< EBI SMIBCR3: MWIDTH Position            */
#define EBI_SMIBCR3_MWIDTH_Msk                (0x03UL << EBI_SMIBCR3_MWIDTH_Pos)                      /*!< EBI SMIBCR3: MWIDTH Mask                */
#define EBI_SMIBCR3_AH_Pos                    18                                                      /*!< EBI SMIBCR3: AH Position                */
#define EBI_SMIBCR3_AH_Msk                    (0x03UL << EBI_SMIBCR3_AH_Pos)                          /*!< EBI SMIBCR3: AH Mask                    */
#define EBI_SMIBCR3_BLEN_Pos                  20                                                      /*!< EBI SMIBCR3: BLEN Position              */
#define EBI_SMIBCR3_BLEN_Msk                  (0x01UL << EBI_SMIBCR3_BLEN_Pos)                        /*!< EBI SMIBCR3: BLEN Mask                  */
#define EBI_SMIBCR3_IOE_Pos                   21                                                      /*!< EBI SMIBCR3: IOE Position               */
#define EBI_SMIBCR3_IOE_Msk                   (0x01UL << EBI_SMIBCR3_IOE_Pos)                         /*!< EBI SMIBCR3: IOE Mask                   */
#define EBI_SMIBCR3_EWP_Pos                   22                                                      /*!< EBI SMIBCR3: EWP Position               */
#define EBI_SMIBCR3_EWP_Msk                   (0x01UL << EBI_SMIBCR3_EWP_Pos)                         /*!< EBI SMIBCR3: EWP Mask                   */
#define EBI_SMIBCR3_EWEN_Pos                  23                                                      /*!< EBI SMIBCR3: EWEN Position              */
#define EBI_SMIBCR3_EWEN_Msk                  (0x01UL << EBI_SMIBCR3_EWEN_Pos)                        /*!< EBI SMIBCR3: EWEN Mask                  */
#define EBI_SMIBCR3_PREIDL_Pos                26                                                      /*!< EBI SMIBCR3: PREIDL Position            */
#define EBI_SMIBCR3_PREIDL_Msk                (0x03UL << EBI_SMIBCR3_PREIDL_Pos)                      /*!< EBI SMIBCR3: PREIDL Mask                */
#define EBI_SMIBCR3_IDLE_Pos                  30                                                      /*!< EBI SMIBCR3: IDLE Position              */
#define EBI_SMIBCR3_IDLE_Msk                  (0x03UL << EBI_SMIBCR3_IDLE_Pos)                        /*!< EBI SMIBCR3: IDLE Mask                  */


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
/* ================         Group 'TIMER1n' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER1n_CR  --------------------------------- */
#define TIMER1n_CR_TnCLR_Pos                  0                                                       /*!< TIMER1n CR: TnCLR Position              */
#define TIMER1n_CR_TnCLR_Msk                  (0x01UL << TIMER1n_CR_TnCLR_Pos)                        /*!< TIMER1n CR: TnCLR Mask                  */
#define TIMER1n_CR_TnPAU_Pos                  1                                                       /*!< TIMER1n CR: TnPAU Position              */
#define TIMER1n_CR_TnPAU_Msk                  (0x01UL << TIMER1n_CR_TnPAU_Pos)                        /*!< TIMER1n CR: TnPAU Mask                  */
#define TIMER1n_CR_TnCIFLAG_Pos               2                                                       /*!< TIMER1n CR: TnCIFLAG Position           */
#define TIMER1n_CR_TnCIFLAG_Msk               (0x01UL << TIMER1n_CR_TnCIFLAG_Pos)                     /*!< TIMER1n CR: TnCIFLAG Mask               */
#define TIMER1n_CR_TnMIFLAG_Pos               3                                                       /*!< TIMER1n CR: TnMIFLAG Position           */
#define TIMER1n_CR_TnMIFLAG_Msk               (0x01UL << TIMER1n_CR_TnMIFLAG_Pos)                     /*!< TIMER1n CR: TnMIFLAG Mask               */
#define TIMER1n_CR_TnCIEN_Pos                 4                                                       /*!< TIMER1n CR: TnCIEN Position             */
#define TIMER1n_CR_TnCIEN_Msk                 (0x01UL << TIMER1n_CR_TnCIEN_Pos)                       /*!< TIMER1n CR: TnCIEN Mask                 */
#define TIMER1n_CR_TnMIEN_Pos                 5                                                       /*!< TIMER1n CR: TnMIEN Position             */
#define TIMER1n_CR_TnMIEN_Msk                 (0x01UL << TIMER1n_CR_TnMIEN_Pos)                       /*!< TIMER1n CR: TnMIEN Mask                 */
#define TIMER1n_CR_TnCPOL_Pos                 6                                                       /*!< TIMER1n CR: TnCPOL Position             */
#define TIMER1n_CR_TnCPOL_Msk                 (0x03UL << TIMER1n_CR_TnCPOL_Pos)                       /*!< TIMER1n CR: TnCPOL Mask                 */
#define TIMER1n_CR_TnOPOL_Pos                 8                                                       /*!< TIMER1n CR: TnOPOL Position             */
#define TIMER1n_CR_TnOPOL_Msk                 (0x01UL << TIMER1n_CR_TnOPOL_Pos)                       /*!< TIMER1n CR: TnOPOL Mask                 */
#define TIMER1n_CR_TnECE_Pos                  11                                                      /*!< TIMER1n CR: TnECE Position              */
#define TIMER1n_CR_TnECE_Msk                  (0x01UL << TIMER1n_CR_TnECE_Pos)                        /*!< TIMER1n CR: TnECE Mask                  */
#define TIMER1n_CR_TnMS_Pos                   12                                                      /*!< TIMER1n CR: TnMS Position               */
#define TIMER1n_CR_TnMS_Msk                   (0x03UL << TIMER1n_CR_TnMS_Pos)                         /*!< TIMER1n CR: TnMS Mask                   */
#define TIMER1n_CR_TnCLK_Pos                  14                                                      /*!< TIMER1n CR: TnCLK Position              */
#define TIMER1n_CR_TnCLK_Msk                  (0x01UL << TIMER1n_CR_TnCLK_Pos)                        /*!< TIMER1n CR: TnCLK Mask                  */
#define TIMER1n_CR_TnEN_Pos                   15                                                      /*!< TIMER1n CR: TnEN Position               */
#define TIMER1n_CR_TnEN_Msk                   (0x01UL << TIMER1n_CR_TnEN_Pos)                         /*!< TIMER1n CR: TnEN Mask                   */

/* ---------------------------------  TIMER1n_ADR  -------------------------------- */
#define TIMER1n_ADR_ADATA_Pos                 0                                                       /*!< TIMER1n ADR: ADATA Position             */
#define TIMER1n_ADR_ADATA_Msk                 (0x0000ffffUL << TIMER1n_ADR_ADATA_Pos)                 /*!< TIMER1n ADR: ADATA Mask                 */

/* ---------------------------------  TIMER1n_BDR  -------------------------------- */
#define TIMER1n_BDR_BDATA_Pos                 0                                                       /*!< TIMER1n BDR: BDATA Position             */
#define TIMER1n_BDR_BDATA_Msk                 (0x0000ffffUL << TIMER1n_BDR_BDATA_Pos)                 /*!< TIMER1n BDR: BDATA Mask                 */

/* --------------------------------  TIMER1n_CAPDR  ------------------------------- */
#define TIMER1n_CAPDR_CAPD_Pos                0                                                       /*!< TIMER1n CAPDR: CAPD Position            */
#define TIMER1n_CAPDR_CAPD_Msk                (0x0000ffffUL << TIMER1n_CAPDR_CAPD_Pos)                /*!< TIMER1n CAPDR: CAPD Mask                */

/* --------------------------------  TIMER1n_PREDR  ------------------------------- */
#define TIMER1n_PREDR_PRED_Pos                0                                                       /*!< TIMER1n PREDR: PRED Position            */
#define TIMER1n_PREDR_PRED_Msk                (0x00000fffUL << TIMER1n_PREDR_PRED_Pos)                /*!< TIMER1n PREDR: PRED Mask                */

/* ---------------------------------  TIMER1n_CNT  -------------------------------- */
#define TIMER1n_CNT_CNT_Pos                   0                                                       /*!< TIMER1n CNT: CNT Position               */
#define TIMER1n_CNT_CNT_Msk                   (0x0000ffffUL << TIMER1n_CNT_CNT_Pos)                   /*!< TIMER1n CNT: CNT Mask                   */


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
#define TIMER20_CR_CLR_Pos                    0                                                       /*!< TIMER20 CR: CLR Position                */
#define TIMER20_CR_CLR_Msk                    (0x01UL << TIMER20_CR_CLR_Pos)                          /*!< TIMER20 CR: CLR Mask                    */
#define TIMER20_CR_PAU_Pos                    1                                                       /*!< TIMER20 CR: PAU Position                */
#define TIMER20_CR_PAU_Msk                    (0x01UL << TIMER20_CR_PAU_Pos)                          /*!< TIMER20 CR: PAU Mask                    */
#define TIMER20_CR_CIFLAG_Pos                 2                                                       /*!< TIMER20 CR: CIFLAG Position             */
#define TIMER20_CR_CIFLAG_Msk                 (0x01UL << TIMER20_CR_CIFLAG_Pos)                       /*!< TIMER20 CR: CIFLAG Mask                 */
#define TIMER20_CR_MIFLAG_Pos                 3                                                       /*!< TIMER20 CR: MIFLAG Position             */
#define TIMER20_CR_MIFLAG_Msk                 (0x01UL << TIMER20_CR_MIFLAG_Pos)                       /*!< TIMER20 CR: MIFLAG Mask                 */
#define TIMER20_CR_CIEN_Pos                   4                                                       /*!< TIMER20 CR: CIEN Position               */
#define TIMER20_CR_CIEN_Msk                   (0x01UL << TIMER20_CR_CIEN_Pos)                         /*!< TIMER20 CR: CIEN Mask                   */
#define TIMER20_CR_MIEN_Pos                   5                                                       /*!< TIMER20 CR: MIEN Position               */
#define TIMER20_CR_MIEN_Msk                   (0x01UL << TIMER20_CR_MIEN_Pos)                         /*!< TIMER20 CR: MIEN Mask                   */
#define TIMER20_CR_CPOL_Pos                   6                                                       /*!< TIMER20 CR: CPOL Position               */
#define TIMER20_CR_CPOL_Msk                   (0x03UL << TIMER20_CR_CPOL_Pos)                         /*!< TIMER20 CR: CPOL Mask                   */
#define TIMER20_CR_OPOL_Pos                   8                                                       /*!< TIMER20 CR: OPOL Position               */
#define TIMER20_CR_OPOL_Msk                   (0x01UL << TIMER20_CR_OPOL_Pos)                         /*!< TIMER20 CR: OPOL Mask                   */
#define TIMER20_CR_ECE_Pos                    11                                                      /*!< TIMER20 CR: ECE Position                */
#define TIMER20_CR_ECE_Msk                    (0x01UL << TIMER20_CR_ECE_Pos)                          /*!< TIMER20 CR: ECE Mask                    */
#define TIMER20_CR_MS_Pos                     12                                                      /*!< TIMER20 CR: MS Position                 */
#define TIMER20_CR_MS_Msk                     (0x03UL << TIMER20_CR_MS_Pos)                           /*!< TIMER20 CR: MS Mask                     */
#define TIMER20_CR_CLK_Pos                    14                                                      /*!< TIMER20 CR: CLK Position                */
#define TIMER20_CR_CLK_Msk                    (0x01UL << TIMER20_CR_CLK_Pos)                          /*!< TIMER20 CR: CLK Mask                    */
#define TIMER20_CR_EN_Pos                     15                                                      /*!< TIMER20 CR: EN Position                 */
#define TIMER20_CR_EN_Msk                     (0x01UL << TIMER20_CR_EN_Pos)                           /*!< TIMER20 CR: EN Mask                     */
#define TIMER20_CR_CNCLR_Pos                  16                                                      /*!< TIMER20 CR: CNCLR Position              */
#define TIMER20_CR_CNCLR_Msk                  (0x01UL << TIMER20_CR_CNCLR_Pos)                        /*!< TIMER20 CR: CNCLR Mask                  */

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
#define TIMER21_CR_CLR_Pos                    0                                                       /*!< TIMER21 CR: CLR Position                */
#define TIMER21_CR_CLR_Msk                    (0x01UL << TIMER21_CR_CLR_Pos)                          /*!< TIMER21 CR: CLR Mask                    */
#define TIMER21_CR_PAU_Pos                    1                                                       /*!< TIMER21 CR: PAU Position                */
#define TIMER21_CR_PAU_Msk                    (0x01UL << TIMER21_CR_PAU_Pos)                          /*!< TIMER21 CR: PAU Mask                    */
#define TIMER21_CR_CIFLAG_Pos                 2                                                       /*!< TIMER21 CR: CIFLAG Position             */
#define TIMER21_CR_CIFLAG_Msk                 (0x01UL << TIMER21_CR_CIFLAG_Pos)                       /*!< TIMER21 CR: CIFLAG Mask                 */
#define TIMER21_CR_MIFLAG_Pos                 3                                                       /*!< TIMER21 CR: MIFLAG Position             */
#define TIMER21_CR_MIFLAG_Msk                 (0x01UL << TIMER21_CR_MIFLAG_Pos)                       /*!< TIMER21 CR: MIFLAG Mask                 */
#define TIMER21_CR_CIEN_Pos                   4                                                       /*!< TIMER21 CR: CIEN Position               */
#define TIMER21_CR_CIEN_Msk                   (0x01UL << TIMER21_CR_CIEN_Pos)                         /*!< TIMER21 CR: CIEN Mask                   */
#define TIMER21_CR_MIEN_Pos                   5                                                       /*!< TIMER21 CR: MIEN Position               */
#define TIMER21_CR_MIEN_Msk                   (0x01UL << TIMER21_CR_MIEN_Pos)                         /*!< TIMER21 CR: MIEN Mask                   */
#define TIMER21_CR_CPOL_Pos                   6                                                       /*!< TIMER21 CR: CPOL Position               */
#define TIMER21_CR_CPOL_Msk                   (0x03UL << TIMER21_CR_CPOL_Pos)                         /*!< TIMER21 CR: CPOL Mask                   */
#define TIMER21_CR_OPOL_Pos                   8                                                       /*!< TIMER21 CR: OPOL Position               */
#define TIMER21_CR_OPOL_Msk                   (0x01UL << TIMER21_CR_OPOL_Pos)                         /*!< TIMER21 CR: OPOL Mask                   */
#define TIMER21_CR_ECE_Pos                    11                                                      /*!< TIMER21 CR: ECE Position                */
#define TIMER21_CR_ECE_Msk                    (0x01UL << TIMER21_CR_ECE_Pos)                          /*!< TIMER21 CR: ECE Mask                    */
#define TIMER21_CR_MS_Pos                     12                                                      /*!< TIMER21 CR: MS Position                 */
#define TIMER21_CR_MS_Msk                     (0x03UL << TIMER21_CR_MS_Pos)                           /*!< TIMER21 CR: MS Mask                     */
#define TIMER21_CR_CLK_Pos                    14                                                      /*!< TIMER21 CR: CLK Position                */
#define TIMER21_CR_CLK_Msk                    (0x01UL << TIMER21_CR_CLK_Pos)                          /*!< TIMER21 CR: CLK Mask                    */
#define TIMER21_CR_EN_Pos                     15                                                      /*!< TIMER21 CR: EN Position                 */
#define TIMER21_CR_EN_Msk                     (0x01UL << TIMER21_CR_EN_Pos)                           /*!< TIMER21 CR: EN Mask                     */
#define TIMER21_CR_CNCLR_Pos                  16                                                      /*!< TIMER21 CR: CNCLR Position              */
#define TIMER21_CR_CNCLR_Msk                  (0x01UL << TIMER21_CR_CNCLR_Pos)                        /*!< TIMER21 CR: CNCLR Mask                  */

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
#define TIMER30_HIZCR_HIZCSSEL_Pos            8                                                       /*!< TIMER30 HIZCR: HIZCSSEL Position        */
#define TIMER30_HIZCR_HIZCSSEL_Msk            (0x01UL << TIMER30_HIZCR_HIZCSSEL_Pos)                  /*!< TIMER30 HIZCR: HIZCSSEL Mask            */

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
/* ================        struct 'TIMER40' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER40_CR  --------------------------------- */
#define TIMER40_CR_T40CLR_Pos                 0                                                       /*!< TIMER40 CR: T40CLR Position             */
#define TIMER40_CR_T40CLR_Msk                 (0x01UL << TIMER40_CR_T40CLR_Pos)                       /*!< TIMER40 CR: T40CLR Mask                 */
#define TIMER40_CR_T40PAU_Pos                 1                                                       /*!< TIMER40 CR: T40PAU Position             */
#define TIMER40_CR_T40PAU_Msk                 (0x01UL << TIMER40_CR_T40PAU_Pos)                       /*!< TIMER40 CR: T40PAU Mask                 */
#define TIMER40_CR_T40CIFLAG_Pos              2                                                       /*!< TIMER40 CR: T40CIFLAG Position          */
#define TIMER40_CR_T40CIFLAG_Msk              (0x01UL << TIMER40_CR_T40CIFLAG_Pos)                    /*!< TIMER40 CR: T40CIFLAG Mask              */
#define TIMER40_CR_T40MIFLAG_Pos              3                                                       /*!< TIMER40 CR: T40MIFLAG Position          */
#define TIMER40_CR_T40MIFLAG_Msk              (0x01UL << TIMER40_CR_T40MIFLAG_Pos)                    /*!< TIMER40 CR: T40MIFLAG Mask              */
#define TIMER40_CR_T40CIEN_Pos                4                                                       /*!< TIMER40 CR: T40CIEN Position            */
#define TIMER40_CR_T40CIEN_Msk                (0x01UL << TIMER40_CR_T40CIEN_Pos)                      /*!< TIMER40 CR: T40CIEN Mask                */
#define TIMER40_CR_T40MIEN_Pos                5                                                       /*!< TIMER40 CR: T40MIEN Position            */
#define TIMER40_CR_T40MIEN_Msk                (0x01UL << TIMER40_CR_T40MIEN_Pos)                      /*!< TIMER40 CR: T40MIEN Mask                */
#define TIMER40_CR_T40CPOL_Pos                6                                                       /*!< TIMER40 CR: T40CPOL Position            */
#define TIMER40_CR_T40CPOL_Msk                (0x03UL << TIMER40_CR_T40CPOL_Pos)                      /*!< TIMER40 CR: T40CPOL Mask                */
#define TIMER40_CR_T40OPOL_Pos                8                                                       /*!< TIMER40 CR: T40OPOL Position            */
#define TIMER40_CR_T40OPOL_Msk                (0x01UL << TIMER40_CR_T40OPOL_Pos)                      /*!< TIMER40 CR: T40OPOL Mask                */
#define TIMER40_CR_T40CAPCHSEL_Pos            9                                                       /*!< TIMER40 CR: T40CAPCHSEL Position        */
#define TIMER40_CR_T40CAPCHSEL_Msk            (0x03UL << TIMER40_CR_T40CAPCHSEL_Pos)                  /*!< TIMER40 CR: T40CAPCHSEL Mask            */
#define TIMER40_CR_T40ECE_Pos                 11                                                      /*!< TIMER40 CR: T40ECE Position             */
#define TIMER40_CR_T40ECE_Msk                 (0x01UL << TIMER40_CR_T40ECE_Pos)                       /*!< TIMER40 CR: T40ECE Mask                 */
#define TIMER40_CR_T40MS_Pos                  12                                                      /*!< TIMER40 CR: T40MS Position              */
#define TIMER40_CR_T40MS_Msk                  (0x03UL << TIMER40_CR_T40MS_Pos)                        /*!< TIMER40 CR: T40MS Mask                  */
#define TIMER40_CR_T40CLK_Pos                 14                                                      /*!< TIMER40 CR: T40CLK Position             */
#define TIMER40_CR_T40CLK_Msk                 (0x01UL << TIMER40_CR_T40CLK_Pos)                       /*!< TIMER40 CR: T40CLK Mask                 */
#define TIMER40_CR_T40EN_Pos                  15                                                      /*!< TIMER40 CR: T40EN Position              */
#define TIMER40_CR_T40EN_Msk                  (0x01UL << TIMER40_CR_T40EN_Pos)                        /*!< TIMER40 CR: T40EN Mask                  */

/* ---------------------------------  TIMER40_ADR  -------------------------------- */
#define TIMER40_ADR_ADATA_Pos                 0                                                       /*!< TIMER40 ADR: ADATA Position             */
#define TIMER40_ADR_ADATA_Msk                 (0x0000ffffUL << TIMER40_ADR_ADATA_Pos)                 /*!< TIMER40 ADR: ADATA Mask                 */

/* ---------------------------------  TIMER40_BDR  -------------------------------- */
#define TIMER40_BDR_BDATA_Pos                 0                                                       /*!< TIMER40 BDR: BDATA Position             */
#define TIMER40_BDR_BDATA_Msk                 (0x0000ffffUL << TIMER40_BDR_BDATA_Pos)                 /*!< TIMER40 BDR: BDATA Mask                 */

/* --------------------------------  TIMER40_CAPDR  ------------------------------- */
#define TIMER40_CAPDR_CAPD_Pos                0                                                       /*!< TIMER40 CAPDR: CAPD Position            */
#define TIMER40_CAPDR_CAPD_Msk                (0x0000ffffUL << TIMER40_CAPDR_CAPD_Pos)                /*!< TIMER40 CAPDR: CAPD Mask                */

/* --------------------------------  TIMER40_PREDR  ------------------------------- */
#define TIMER40_PREDR_PRED_Pos                0                                                       /*!< TIMER40 PREDR: PRED Position            */
#define TIMER40_PREDR_PRED_Msk                (0x00000fffUL << TIMER40_PREDR_PRED_Pos)                /*!< TIMER40 PREDR: PRED Mask                */

/* -------------------------------  TIMER40_PREDR2  ------------------------------- */
#define TIMER40_PREDR2_PRED_Pos               0                                                       /*!< TIMER40 PREDR2: PRED Position           */
#define TIMER40_PREDR2_PRED_Msk               (0x00000fffUL << TIMER40_PREDR2_PRED_Pos)               /*!< TIMER40 PREDR2: PRED Mask               */

/* ---------------------------------  TIMER40_CNT  -------------------------------- */
#define TIMER40_CNT_CNT_Pos                   0                                                       /*!< TIMER40 CNT: CNT Position               */
#define TIMER40_CNT_CNT_Msk                   (0xffffffffUL << TIMER40_CNT_CNT_Pos)                   /*!< TIMER40 CNT: CNT Mask                   */


/* ================================================================================ */
/* ================          Group 'USART' Position & Mask         ================ */
/* ================================================================================ */


/* ----------------------------------  USART_CR1  --------------------------------- */
#define USART_CR1_RXEn_Pos                    0                                                       /*!< USART CR1: RXEn Position                */
#define USART_CR1_RXEn_Msk                    (0x01UL << USART_CR1_RXEn_Pos)                          /*!< USART CR1: RXEn Mask                    */
#define USART_CR1_TXEn_Pos                    1                                                       /*!< USART CR1: TXEn Position                */
#define USART_CR1_TXEn_Msk                    (0x01UL << USART_CR1_TXEn_Pos)                          /*!< USART CR1: TXEn Mask                    */
#define USART_CR1_WAKEIEn_Pos                 2                                                       /*!< USART CR1: WAKEIEn Position             */
#define USART_CR1_WAKEIEn_Msk                 (0x01UL << USART_CR1_WAKEIEn_Pos)                       /*!< USART CR1: WAKEIEn Mask                 */
#define USART_CR1_RXCIEn_Pos                  3                                                       /*!< USART CR1: RXCIEn Position              */
#define USART_CR1_RXCIEn_Msk                  (0x01UL << USART_CR1_RXCIEn_Pos)                        /*!< USART CR1: RXCIEn Mask                  */
#define USART_CR1_TXCIEn_Pos                  4                                                       /*!< USART CR1: TXCIEn Position              */
#define USART_CR1_TXCIEn_Msk                  (0x01UL << USART_CR1_TXCIEn_Pos)                        /*!< USART CR1: TXCIEn Mask                  */
#define USART_CR1_DRIEn_Pos                   5                                                       /*!< USART CR1: DRIEn Position               */
#define USART_CR1_DRIEn_Msk                   (0x01UL << USART_CR1_DRIEn_Pos)                         /*!< USART CR1: DRIEn Mask                   */
#define USART_CR1_CPHAn_Pos                   6                                                       /*!< USART CR1: CPHAn Position               */
#define USART_CR1_CPHAn_Msk                   (0x01UL << USART_CR1_CPHAn_Pos)                         /*!< USART CR1: CPHAn Mask                   */
#define USART_CR1_CPOLn_Pos                   7                                                       /*!< USART CR1: CPOLn Position               */
#define USART_CR1_CPOLn_Msk                   (0x01UL << USART_CR1_CPOLn_Pos)                         /*!< USART CR1: CPOLn Mask                   */
#define USART_CR1_ORDn_Pos                    8                                                       /*!< USART CR1: ORDn Position                */
#define USART_CR1_ORDn_Msk                    (0x01UL << USART_CR1_ORDn_Pos)                          /*!< USART CR1: ORDn Mask                    */
#define USART_CR1_USTnS_Pos                   9                                                       /*!< USART CR1: USTnS Position               */
#define USART_CR1_USTnS_Msk                   (0x07UL << USART_CR1_USTnS_Pos)                         /*!< USART CR1: USTnS Mask                   */
#define USART_CR1_USTnP_Pos                   12                                                      /*!< USART CR1: USTnP Position               */
#define USART_CR1_USTnP_Msk                   (0x03UL << USART_CR1_USTnP_Pos)                         /*!< USART CR1: USTnP Mask                   */
#define USART_CR1_USTnMS_Pos                  14                                                      /*!< USART CR1: USTnMS Position              */
#define USART_CR1_USTnMS_Msk                  (0x03UL << USART_CR1_USTnMS_Pos)                        /*!< USART CR1: USTnMS Mask                  */

/* ----------------------------------  USART_CR2  --------------------------------- */
#define USART_CR2_USTnRX8_Pos                 0                                                       /*!< USART CR2: USTnRX8 Position             */
#define USART_CR2_USTnRX8_Msk                 (0x01UL << USART_CR2_USTnRX8_Pos)                       /*!< USART CR2: USTnRX8 Mask                 */
#define USART_CR2_USTnTX8_Pos                 1                                                       /*!< USART CR2: USTnTX8 Position             */
#define USART_CR2_USTnTX8_Msk                 (0x01UL << USART_CR2_USTnTX8_Pos)                       /*!< USART CR2: USTnTX8 Mask                 */
#define USART_CR2_USTnSB_Pos                  2                                                       /*!< USART CR2: USTnSB Position              */
#define USART_CR2_USTnSB_Msk                  (0x01UL << USART_CR2_USTnSB_Pos)                        /*!< USART CR2: USTnSB Mask                  */
#define USART_CR2_FXCHn_Pos                   3                                                       /*!< USART CR2: FXCHn Position               */
#define USART_CR2_FXCHn_Msk                   (0x01UL << USART_CR2_FXCHn_Pos)                         /*!< USART CR2: FXCHn Mask                   */
#define USART_CR2_USTnSSEN_Pos                4                                                       /*!< USART CR2: USTnSSEN Position            */
#define USART_CR2_USTnSSEN_Msk                (0x01UL << USART_CR2_USTnSSEN_Pos)                      /*!< USART CR2: USTnSSEN Mask                */
#define USART_CR2_DISSCKn_Pos                 5                                                       /*!< USART CR2: DISSCKn Position             */
#define USART_CR2_DISSCKn_Msk                 (0x01UL << USART_CR2_DISSCKn_Pos)                       /*!< USART CR2: DISSCKn Mask                 */
#define USART_CR2_LOOPSn_Pos                  6                                                       /*!< USART CR2: LOOPSn Position              */
#define USART_CR2_LOOPSn_Msk                  (0x01UL << USART_CR2_LOOPSn_Pos)                        /*!< USART CR2: LOOPSn Mask                  */
#define USART_CR2_MASTERn_Pos                 7                                                       /*!< USART CR2: MASTERn Position             */
#define USART_CR2_MASTERn_Msk                 (0x01UL << USART_CR2_MASTERn_Pos)                       /*!< USART CR2: MASTERn Mask                 */
#define USART_CR2_DBLSn_Pos                   8                                                       /*!< USART CR2: DBLSn Position               */
#define USART_CR2_DBLSn_Msk                   (0x01UL << USART_CR2_DBLSn_Pos)                         /*!< USART CR2: DBLSn Mask                   */
#define USART_CR2_USTnEN_Pos                  9                                                       /*!< USART CR2: USTnEN Position              */
#define USART_CR2_USTnEN_Msk                  (0x01UL << USART_CR2_USTnEN_Pos)                        /*!< USART CR2: USTnEN Mask                  */
#define USART_CR2_FPCREN_Pos                  10                                                      /*!< USART CR2: FPCREN Position              */
#define USART_CR2_FPCREN_Msk                  (0x01UL << USART_CR2_FPCREN_Pos)                        /*!< USART CR2: FPCREN Mask                  */
#define USART_CR2_RTOEN_Pos                   11                                                      /*!< USART CR2: RTOEN Position               */
#define USART_CR2_RTOEN_Msk                   (0x01UL << USART_CR2_RTOEN_Pos)                         /*!< USART CR2: RTOEN Mask                   */
#define USART_CR2_RTOIE_Pos                   12                                                      /*!< USART CR2: RTOIE Position               */
#define USART_CR2_RTOIE_Msk                   (0x01UL << USART_CR2_RTOIE_Pos)                         /*!< USART CR2: RTOIE Mask                   */
#define USART_CR2_DMARXIE_Pos                 13                                                      /*!< USART CR2: DMARXIE Position             */
#define USART_CR2_DMARXIE_Msk                 (0x01UL << USART_CR2_DMARXIE_Pos)                       /*!< USART CR2: DMARXIE Mask                 */
#define USART_CR2_DMATXIE_Pos                 14                                                      /*!< USART CR2: DMATXIE Position             */
#define USART_CR2_DMATXIE_Msk                 (0x01UL << USART_CR2_DMATXIE_Pos)                       /*!< USART CR2: DMATXIE Mask                 */

/* ----------------------------------  USART_ST  ---------------------------------- */
#define USART_ST_PEn_Pos                      0                                                       /*!< USART ST: PEn Position                  */
#define USART_ST_PEn_Msk                      (0x01UL << USART_ST_PEn_Pos)                            /*!< USART ST: PEn Mask                      */
#define USART_ST_FEn_Pos                      1                                                       /*!< USART ST: FEn Position                  */
#define USART_ST_FEn_Msk                      (0x01UL << USART_ST_FEn_Pos)                            /*!< USART ST: FEn Mask                      */
#define USART_ST_DORn_Pos                     2                                                       /*!< USART ST: DORn Position                 */
#define USART_ST_DORn_Msk                     (0x01UL << USART_ST_DORn_Pos)                           /*!< USART ST: DORn Mask                     */
#define USART_ST_RTOF_Pos                     3                                                       /*!< USART ST: RTOF Position                 */
#define USART_ST_RTOF_Msk                     (0x01UL << USART_ST_RTOF_Pos)                           /*!< USART ST: RTOF Mask                     */
#define USART_ST_WAKEn_Pos                    4                                                       /*!< USART ST: WAKEn Position                */
#define USART_ST_WAKEn_Msk                    (0x01UL << USART_ST_WAKEn_Pos)                          /*!< USART ST: WAKEn Mask                    */
#define USART_ST_RXCn_Pos                     5                                                       /*!< USART ST: RXCn Position                 */
#define USART_ST_RXCn_Msk                     (0x01UL << USART_ST_RXCn_Pos)                           /*!< USART ST: RXCn Mask                     */
#define USART_ST_TXCn_Pos                     6                                                       /*!< USART ST: TXCn Position                 */
#define USART_ST_TXCn_Msk                     (0x01UL << USART_ST_TXCn_Pos)                           /*!< USART ST: TXCn Mask                     */
#define USART_ST_DREn_Pos                     7                                                       /*!< USART ST: DREn Position                 */
#define USART_ST_DREn_Msk                     (0x01UL << USART_ST_DREn_Pos)                           /*!< USART ST: DREn Mask                     */
#define USART_ST_DMARXF_Pos                   8                                                       /*!< USART ST: DMARXF Position               */
#define USART_ST_DMARXF_Msk                   (0x01UL << USART_ST_DMARXF_Pos)                         /*!< USART ST: DMARXF Mask                   */
#define USART_ST_DMATXF_Pos                   9                                                       /*!< USART ST: DMATXF Position               */
#define USART_ST_DMATXF_Msk                   (0x01UL << USART_ST_DMATXF_Pos)                         /*!< USART ST: DMATXF Mask                   */

/* ----------------------------------  USART_BDR  --------------------------------- */
#define USART_BDR_BDATA_Pos                   0                                                       /*!< USART BDR: BDATA Position               */
#define USART_BDR_BDATA_Msk                   (0x00000fffUL << USART_BDR_BDATA_Pos)                   /*!< USART BDR: BDATA Mask                   */

/* ----------------------------------  USART_DR  ---------------------------------- */
#define USART_DR_DATA_Pos                     0                                                       /*!< USART DR: DATA Position                 */
#define USART_DR_DATA_Msk                     (0x000000ffUL << USART_DR_DATA_Pos)                     /*!< USART DR: DATA Mask                     */

/* ---------------------------------  USART_FPCR  --------------------------------- */
#define USART_FPCR_FPCR_Pos                   0                                                       /*!< USART FPCR: FPCR Position               */
#define USART_FPCR_FPCR_Msk                   (0x000000ffUL << USART_FPCR_FPCR_Pos)                   /*!< USART FPCR: FPCR Mask                   */

/* ----------------------------------  USART_RTO  --------------------------------- */
#define USART_RTO_RTO_Pos                     0                                                       /*!< USART RTO: RTO Position                 */
#define USART_RTO_RTO_Msk                     (0x00ffffffUL << USART_RTO_RTO_Pos)                     /*!< USART RTO: RTO Mask                     */


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
#define USART10_CR2_FPCREN_Pos                10                                                      /*!< USART10 CR2: FPCREN Position            */
#define USART10_CR2_FPCREN_Msk                (0x01UL << USART10_CR2_FPCREN_Pos)                      /*!< USART10 CR2: FPCREN Mask                */
#define USART10_CR2_RTOEN_Pos                 11                                                      /*!< USART10 CR2: RTOEN Position             */
#define USART10_CR2_RTOEN_Msk                 (0x01UL << USART10_CR2_RTOEN_Pos)                       /*!< USART10 CR2: RTOEN Mask                 */
#define USART10_CR2_RTOIE_Pos                 12                                                      /*!< USART10 CR2: RTOIE Position             */
#define USART10_CR2_RTOIE_Msk                 (0x01UL << USART10_CR2_RTOIE_Pos)                       /*!< USART10 CR2: RTOIE Mask                 */
#define USART10_CR2_DMARXIE_Pos               13                                                      /*!< USART10 CR2: DMARXIE Position           */
#define USART10_CR2_DMARXIE_Msk               (0x01UL << USART10_CR2_DMARXIE_Pos)                     /*!< USART10 CR2: DMARXIE Mask               */
#define USART10_CR2_DMATXIE_Pos               14                                                      /*!< USART10 CR2: DMATXIE Position           */
#define USART10_CR2_DMATXIE_Msk               (0x01UL << USART10_CR2_DMATXIE_Pos)                     /*!< USART10 CR2: DMATXIE Mask               */

/* ---------------------------------  USART10_ST  --------------------------------- */
#define USART10_ST_PEn_Pos                    0                                                       /*!< USART10 ST: PEn Position                */
#define USART10_ST_PEn_Msk                    (0x01UL << USART10_ST_PEn_Pos)                          /*!< USART10 ST: PEn Mask                    */
#define USART10_ST_FEn_Pos                    1                                                       /*!< USART10 ST: FEn Position                */
#define USART10_ST_FEn_Msk                    (0x01UL << USART10_ST_FEn_Pos)                          /*!< USART10 ST: FEn Mask                    */
#define USART10_ST_DORn_Pos                   2                                                       /*!< USART10 ST: DORn Position               */
#define USART10_ST_DORn_Msk                   (0x01UL << USART10_ST_DORn_Pos)                         /*!< USART10 ST: DORn Mask                   */
#define USART10_ST_RTOF_Pos                   3                                                       /*!< USART10 ST: RTOF Position               */
#define USART10_ST_RTOF_Msk                   (0x01UL << USART10_ST_RTOF_Pos)                         /*!< USART10 ST: RTOF Mask                   */
#define USART10_ST_WAKEn_Pos                  4                                                       /*!< USART10 ST: WAKEn Position              */
#define USART10_ST_WAKEn_Msk                  (0x01UL << USART10_ST_WAKEn_Pos)                        /*!< USART10 ST: WAKEn Mask                  */
#define USART10_ST_RXCn_Pos                   5                                                       /*!< USART10 ST: RXCn Position               */
#define USART10_ST_RXCn_Msk                   (0x01UL << USART10_ST_RXCn_Pos)                         /*!< USART10 ST: RXCn Mask                   */
#define USART10_ST_TXCn_Pos                   6                                                       /*!< USART10 ST: TXCn Position               */
#define USART10_ST_TXCn_Msk                   (0x01UL << USART10_ST_TXCn_Pos)                         /*!< USART10 ST: TXCn Mask                   */
#define USART10_ST_DREn_Pos                   7                                                       /*!< USART10 ST: DREn Position               */
#define USART10_ST_DREn_Msk                   (0x01UL << USART10_ST_DREn_Pos)                         /*!< USART10 ST: DREn Mask                   */
#define USART10_ST_DMARXF_Pos                 8                                                       /*!< USART10 ST: DMARXF Position             */
#define USART10_ST_DMARXF_Msk                 (0x01UL << USART10_ST_DMARXF_Pos)                       /*!< USART10 ST: DMARXF Mask                 */
#define USART10_ST_DMATXF_Pos                 9                                                       /*!< USART10 ST: DMATXF Position             */
#define USART10_ST_DMATXF_Msk                 (0x01UL << USART10_ST_DMATXF_Pos)                       /*!< USART10 ST: DMATXF Mask                 */

/* ---------------------------------  USART10_BDR  -------------------------------- */
#define USART10_BDR_BDATA_Pos                 0                                                       /*!< USART10 BDR: BDATA Position             */
#define USART10_BDR_BDATA_Msk                 (0x00000fffUL << USART10_BDR_BDATA_Pos)                 /*!< USART10 BDR: BDATA Mask                 */

/* ---------------------------------  USART10_DR  --------------------------------- */
#define USART10_DR_DATA_Pos                   0                                                       /*!< USART10 DR: DATA Position               */
#define USART10_DR_DATA_Msk                   (0x000000ffUL << USART10_DR_DATA_Pos)                   /*!< USART10 DR: DATA Mask                   */

/* --------------------------------  USART10_FPCR  -------------------------------- */
#define USART10_FPCR_FPCR_Pos                 0                                                       /*!< USART10 FPCR: FPCR Position             */
#define USART10_FPCR_FPCR_Msk                 (0x000000ffUL << USART10_FPCR_FPCR_Pos)                 /*!< USART10 FPCR: FPCR Mask                 */

/* ---------------------------------  USART10_RTO  -------------------------------- */
#define USART10_RTO_RTO_Pos                   0                                                       /*!< USART10 RTO: RTO Position               */
#define USART10_RTO_RTO_Msk                   (0x00ffffffUL << USART10_RTO_RTO_Pos)                   /*!< USART10 RTO: RTO Mask                   */


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
#define USART11_CR2_FPCREN_Pos                10                                                      /*!< USART11 CR2: FPCREN Position            */
#define USART11_CR2_FPCREN_Msk                (0x01UL << USART11_CR2_FPCREN_Pos)                      /*!< USART11 CR2: FPCREN Mask                */
#define USART11_CR2_RTOEN_Pos                 11                                                      /*!< USART11 CR2: RTOEN Position             */
#define USART11_CR2_RTOEN_Msk                 (0x01UL << USART11_CR2_RTOEN_Pos)                       /*!< USART11 CR2: RTOEN Mask                 */
#define USART11_CR2_RTOIE_Pos                 12                                                      /*!< USART11 CR2: RTOIE Position             */
#define USART11_CR2_RTOIE_Msk                 (0x01UL << USART11_CR2_RTOIE_Pos)                       /*!< USART11 CR2: RTOIE Mask                 */
#define USART11_CR2_DMARXIE_Pos               13                                                      /*!< USART11 CR2: DMARXIE Position           */
#define USART11_CR2_DMARXIE_Msk               (0x01UL << USART11_CR2_DMARXIE_Pos)                     /*!< USART11 CR2: DMARXIE Mask               */
#define USART11_CR2_DMATXIE_Pos               14                                                      /*!< USART11 CR2: DMATXIE Position           */
#define USART11_CR2_DMATXIE_Msk               (0x01UL << USART11_CR2_DMATXIE_Pos)                     /*!< USART11 CR2: DMATXIE Mask               */

/* ---------------------------------  USART11_ST  --------------------------------- */
#define USART11_ST_PEn_Pos                    0                                                       /*!< USART11 ST: PEn Position                */
#define USART11_ST_PEn_Msk                    (0x01UL << USART11_ST_PEn_Pos)                          /*!< USART11 ST: PEn Mask                    */
#define USART11_ST_FEn_Pos                    1                                                       /*!< USART11 ST: FEn Position                */
#define USART11_ST_FEn_Msk                    (0x01UL << USART11_ST_FEn_Pos)                          /*!< USART11 ST: FEn Mask                    */
#define USART11_ST_DORn_Pos                   2                                                       /*!< USART11 ST: DORn Position               */
#define USART11_ST_DORn_Msk                   (0x01UL << USART11_ST_DORn_Pos)                         /*!< USART11 ST: DORn Mask                   */
#define USART11_ST_RTOF_Pos                   3                                                       /*!< USART11 ST: RTOF Position               */
#define USART11_ST_RTOF_Msk                   (0x01UL << USART11_ST_RTOF_Pos)                         /*!< USART11 ST: RTOF Mask                   */
#define USART11_ST_WAKEn_Pos                  4                                                       /*!< USART11 ST: WAKEn Position              */
#define USART11_ST_WAKEn_Msk                  (0x01UL << USART11_ST_WAKEn_Pos)                        /*!< USART11 ST: WAKEn Mask                  */
#define USART11_ST_RXCn_Pos                   5                                                       /*!< USART11 ST: RXCn Position               */
#define USART11_ST_RXCn_Msk                   (0x01UL << USART11_ST_RXCn_Pos)                         /*!< USART11 ST: RXCn Mask                   */
#define USART11_ST_TXCn_Pos                   6                                                       /*!< USART11 ST: TXCn Position               */
#define USART11_ST_TXCn_Msk                   (0x01UL << USART11_ST_TXCn_Pos)                         /*!< USART11 ST: TXCn Mask                   */
#define USART11_ST_DREn_Pos                   7                                                       /*!< USART11 ST: DREn Position               */
#define USART11_ST_DREn_Msk                   (0x01UL << USART11_ST_DREn_Pos)                         /*!< USART11 ST: DREn Mask                   */
#define USART11_ST_DMARXF_Pos                 8                                                       /*!< USART11 ST: DMARXF Position             */
#define USART11_ST_DMARXF_Msk                 (0x01UL << USART11_ST_DMARXF_Pos)                       /*!< USART11 ST: DMARXF Mask                 */
#define USART11_ST_DMATXF_Pos                 9                                                       /*!< USART11 ST: DMATXF Position             */
#define USART11_ST_DMATXF_Msk                 (0x01UL << USART11_ST_DMATXF_Pos)                       /*!< USART11 ST: DMATXF Mask                 */

/* ---------------------------------  USART11_BDR  -------------------------------- */
#define USART11_BDR_BDATA_Pos                 0                                                       /*!< USART11 BDR: BDATA Position             */
#define USART11_BDR_BDATA_Msk                 (0x00000fffUL << USART11_BDR_BDATA_Pos)                 /*!< USART11 BDR: BDATA Mask                 */

/* ---------------------------------  USART11_DR  --------------------------------- */
#define USART11_DR_DATA_Pos                   0                                                       /*!< USART11 DR: DATA Position               */
#define USART11_DR_DATA_Msk                   (0x000000ffUL << USART11_DR_DATA_Pos)                   /*!< USART11 DR: DATA Mask                   */

/* --------------------------------  USART11_FPCR  -------------------------------- */
#define USART11_FPCR_FPCR_Pos                 0                                                       /*!< USART11 FPCR: FPCR Position             */
#define USART11_FPCR_FPCR_Msk                 (0x000000ffUL << USART11_FPCR_FPCR_Pos)                 /*!< USART11 FPCR: FPCR Mask                 */

/* ---------------------------------  USART11_RTO  -------------------------------- */
#define USART11_RTO_RTO_Pos                   0                                                       /*!< USART11 RTO: RTO Position               */
#define USART11_RTO_RTO_Msk                   (0x00ffffffUL << USART11_RTO_RTO_Pos)                   /*!< USART11 RTO: RTO Mask                   */


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
#define USART12_CR2_FPCREN_Pos                10                                                      /*!< USART12 CR2: FPCREN Position            */
#define USART12_CR2_FPCREN_Msk                (0x01UL << USART12_CR2_FPCREN_Pos)                      /*!< USART12 CR2: FPCREN Mask                */
#define USART12_CR2_RTOEN_Pos                 11                                                      /*!< USART12 CR2: RTOEN Position             */
#define USART12_CR2_RTOEN_Msk                 (0x01UL << USART12_CR2_RTOEN_Pos)                       /*!< USART12 CR2: RTOEN Mask                 */
#define USART12_CR2_RTOIE_Pos                 12                                                      /*!< USART12 CR2: RTOIE Position             */
#define USART12_CR2_RTOIE_Msk                 (0x01UL << USART12_CR2_RTOIE_Pos)                       /*!< USART12 CR2: RTOIE Mask                 */
#define USART12_CR2_DMARXIE_Pos               13                                                      /*!< USART12 CR2: DMARXIE Position           */
#define USART12_CR2_DMARXIE_Msk               (0x01UL << USART12_CR2_DMARXIE_Pos)                     /*!< USART12 CR2: DMARXIE Mask               */
#define USART12_CR2_DMATXIE_Pos               14                                                      /*!< USART12 CR2: DMATXIE Position           */
#define USART12_CR2_DMATXIE_Msk               (0x01UL << USART12_CR2_DMATXIE_Pos)                     /*!< USART12 CR2: DMATXIE Mask               */

/* ---------------------------------  USART12_ST  --------------------------------- */
#define USART12_ST_PEn_Pos                    0                                                       /*!< USART12 ST: PEn Position                */
#define USART12_ST_PEn_Msk                    (0x01UL << USART12_ST_PEn_Pos)                          /*!< USART12 ST: PEn Mask                    */
#define USART12_ST_FEn_Pos                    1                                                       /*!< USART12 ST: FEn Position                */
#define USART12_ST_FEn_Msk                    (0x01UL << USART12_ST_FEn_Pos)                          /*!< USART12 ST: FEn Mask                    */
#define USART12_ST_DORn_Pos                   2                                                       /*!< USART12 ST: DORn Position               */
#define USART12_ST_DORn_Msk                   (0x01UL << USART12_ST_DORn_Pos)                         /*!< USART12 ST: DORn Mask                   */
#define USART12_ST_RTOF_Pos                   3                                                       /*!< USART12 ST: RTOF Position               */
#define USART12_ST_RTOF_Msk                   (0x01UL << USART12_ST_RTOF_Pos)                         /*!< USART12 ST: RTOF Mask                   */
#define USART12_ST_WAKEn_Pos                  4                                                       /*!< USART12 ST: WAKEn Position              */
#define USART12_ST_WAKEn_Msk                  (0x01UL << USART12_ST_WAKEn_Pos)                        /*!< USART12 ST: WAKEn Mask                  */
#define USART12_ST_RXCn_Pos                   5                                                       /*!< USART12 ST: RXCn Position               */
#define USART12_ST_RXCn_Msk                   (0x01UL << USART12_ST_RXCn_Pos)                         /*!< USART12 ST: RXCn Mask                   */
#define USART12_ST_TXCn_Pos                   6                                                       /*!< USART12 ST: TXCn Position               */
#define USART12_ST_TXCn_Msk                   (0x01UL << USART12_ST_TXCn_Pos)                         /*!< USART12 ST: TXCn Mask                   */
#define USART12_ST_DREn_Pos                   7                                                       /*!< USART12 ST: DREn Position               */
#define USART12_ST_DREn_Msk                   (0x01UL << USART12_ST_DREn_Pos)                         /*!< USART12 ST: DREn Mask                   */
#define USART12_ST_DMARXF_Pos                 8                                                       /*!< USART12 ST: DMARXF Position             */
#define USART12_ST_DMARXF_Msk                 (0x01UL << USART12_ST_DMARXF_Pos)                       /*!< USART12 ST: DMARXF Mask                 */
#define USART12_ST_DMATXF_Pos                 9                                                       /*!< USART12 ST: DMATXF Position             */
#define USART12_ST_DMATXF_Msk                 (0x01UL << USART12_ST_DMATXF_Pos)                       /*!< USART12 ST: DMATXF Mask                 */

/* ---------------------------------  USART12_BDR  -------------------------------- */
#define USART12_BDR_BDATA_Pos                 0                                                       /*!< USART12 BDR: BDATA Position             */
#define USART12_BDR_BDATA_Msk                 (0x00000fffUL << USART12_BDR_BDATA_Pos)                 /*!< USART12 BDR: BDATA Mask                 */

/* ---------------------------------  USART12_DR  --------------------------------- */
#define USART12_DR_DATA_Pos                   0                                                       /*!< USART12 DR: DATA Position               */
#define USART12_DR_DATA_Msk                   (0x000000ffUL << USART12_DR_DATA_Pos)                   /*!< USART12 DR: DATA Mask                   */

/* --------------------------------  USART12_FPCR  -------------------------------- */
#define USART12_FPCR_FPCR_Pos                 0                                                       /*!< USART12 FPCR: FPCR Position             */
#define USART12_FPCR_FPCR_Msk                 (0x000000ffUL << USART12_FPCR_FPCR_Pos)                 /*!< USART12 FPCR: FPCR Mask                 */

/* ---------------------------------  USART12_RTO  -------------------------------- */
#define USART12_RTO_RTO_Pos                   0                                                       /*!< USART12 RTO: RTO Position               */
#define USART12_RTO_RTO_Msk                   (0x00ffffffUL << USART12_RTO_RTO_Pos)                   /*!< USART12 RTO: RTO Mask                   */


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
#define USART13_CR2_FPCREN_Pos                10                                                      /*!< USART13 CR2: FPCREN Position            */
#define USART13_CR2_FPCREN_Msk                (0x01UL << USART13_CR2_FPCREN_Pos)                      /*!< USART13 CR2: FPCREN Mask                */
#define USART13_CR2_RTOEN_Pos                 11                                                      /*!< USART13 CR2: RTOEN Position             */
#define USART13_CR2_RTOEN_Msk                 (0x01UL << USART13_CR2_RTOEN_Pos)                       /*!< USART13 CR2: RTOEN Mask                 */
#define USART13_CR2_RTOIE_Pos                 12                                                      /*!< USART13 CR2: RTOIE Position             */
#define USART13_CR2_RTOIE_Msk                 (0x01UL << USART13_CR2_RTOIE_Pos)                       /*!< USART13 CR2: RTOIE Mask                 */
#define USART13_CR2_DMARXIE_Pos               13                                                      /*!< USART13 CR2: DMARXIE Position           */
#define USART13_CR2_DMARXIE_Msk               (0x01UL << USART13_CR2_DMARXIE_Pos)                     /*!< USART13 CR2: DMARXIE Mask               */
#define USART13_CR2_DMATXIE_Pos               14                                                      /*!< USART13 CR2: DMATXIE Position           */
#define USART13_CR2_DMATXIE_Msk               (0x01UL << USART13_CR2_DMATXIE_Pos)                     /*!< USART13 CR2: DMATXIE Mask               */

/* ---------------------------------  USART13_ST  --------------------------------- */
#define USART13_ST_PEn_Pos                    0                                                       /*!< USART13 ST: PEn Position                */
#define USART13_ST_PEn_Msk                    (0x01UL << USART13_ST_PEn_Pos)                          /*!< USART13 ST: PEn Mask                    */
#define USART13_ST_FEn_Pos                    1                                                       /*!< USART13 ST: FEn Position                */
#define USART13_ST_FEn_Msk                    (0x01UL << USART13_ST_FEn_Pos)                          /*!< USART13 ST: FEn Mask                    */
#define USART13_ST_DORn_Pos                   2                                                       /*!< USART13 ST: DORn Position               */
#define USART13_ST_DORn_Msk                   (0x01UL << USART13_ST_DORn_Pos)                         /*!< USART13 ST: DORn Mask                   */
#define USART13_ST_RTOF_Pos                   3                                                       /*!< USART13 ST: RTOF Position               */
#define USART13_ST_RTOF_Msk                   (0x01UL << USART13_ST_RTOF_Pos)                         /*!< USART13 ST: RTOF Mask                   */
#define USART13_ST_WAKEn_Pos                  4                                                       /*!< USART13 ST: WAKEn Position              */
#define USART13_ST_WAKEn_Msk                  (0x01UL << USART13_ST_WAKEn_Pos)                        /*!< USART13 ST: WAKEn Mask                  */
#define USART13_ST_RXCn_Pos                   5                                                       /*!< USART13 ST: RXCn Position               */
#define USART13_ST_RXCn_Msk                   (0x01UL << USART13_ST_RXCn_Pos)                         /*!< USART13 ST: RXCn Mask                   */
#define USART13_ST_TXCn_Pos                   6                                                       /*!< USART13 ST: TXCn Position               */
#define USART13_ST_TXCn_Msk                   (0x01UL << USART13_ST_TXCn_Pos)                         /*!< USART13 ST: TXCn Mask                   */
#define USART13_ST_DREn_Pos                   7                                                       /*!< USART13 ST: DREn Position               */
#define USART13_ST_DREn_Msk                   (0x01UL << USART13_ST_DREn_Pos)                         /*!< USART13 ST: DREn Mask                   */
#define USART13_ST_DMARXF_Pos                 8                                                       /*!< USART13 ST: DMARXF Position             */
#define USART13_ST_DMARXF_Msk                 (0x01UL << USART13_ST_DMARXF_Pos)                       /*!< USART13 ST: DMARXF Mask                 */
#define USART13_ST_DMATXF_Pos                 9                                                       /*!< USART13 ST: DMATXF Position             */
#define USART13_ST_DMATXF_Msk                 (0x01UL << USART13_ST_DMATXF_Pos)                       /*!< USART13 ST: DMATXF Mask                 */

/* ---------------------------------  USART13_BDR  -------------------------------- */
#define USART13_BDR_BDATA_Pos                 0                                                       /*!< USART13 BDR: BDATA Position             */
#define USART13_BDR_BDATA_Msk                 (0x00000fffUL << USART13_BDR_BDATA_Pos)                 /*!< USART13 BDR: BDATA Mask                 */

/* ---------------------------------  USART13_DR  --------------------------------- */
#define USART13_DR_DATA_Pos                   0                                                       /*!< USART13 DR: DATA Position               */
#define USART13_DR_DATA_Msk                   (0x000000ffUL << USART13_DR_DATA_Pos)                   /*!< USART13 DR: DATA Mask                   */

/* --------------------------------  USART13_FPCR  -------------------------------- */
#define USART13_FPCR_FPCR_Pos                 0                                                       /*!< USART13 FPCR: FPCR Position             */
#define USART13_FPCR_FPCR_Msk                 (0x000000ffUL << USART13_FPCR_FPCR_Pos)                 /*!< USART13 FPCR: FPCR Mask                 */

/* ---------------------------------  USART13_RTO  -------------------------------- */
#define USART13_RTO_RTO_Pos                   0                                                       /*!< USART13 RTO: RTO Position               */
#define USART13_RTO_RTO_Msk                   (0x00ffffffUL << USART13_RTO_RTO_Pos)                   /*!< USART13 RTO: RTO Mask                   */


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
#define I2C0_CR_I2CnIEN_Pos                   4                                                       /*!< I2C0 CR: I2CnIEN Position               */
#define I2C0_CR_I2CnIEN_Msk                   (0x01UL << I2C0_CR_I2CnIEN_Pos)                         /*!< I2C0 CR: I2CnIEN Mask                   */
#define I2C0_CR_RESET_Pos                     5                                                       /*!< I2C0 CR: RESET Position                 */
#define I2C0_CR_RESET_Msk                     (0x01UL << I2C0_CR_RESET_Pos)                           /*!< I2C0 CR: RESET Mask                     */
#define I2C0_CR_I2CnEN_Pos                    6                                                       /*!< I2C0 CR: I2CnEN Position                */
#define I2C0_CR_I2CnEN_Msk                    (0x01UL << I2C0_CR_I2CnEN_Pos)                          /*!< I2C0 CR: I2CnEN Mask                    */
#define I2C0_CR_I2CnIFLAG_Pos                 7                                                       /*!< I2C0 CR: I2CnIFLAG Position             */
#define I2C0_CR_I2CnIFLAG_Msk                 (0x01UL << I2C0_CR_I2CnIFLAG_Pos)                       /*!< I2C0 CR: I2CnIFLAG Mask                 */

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

/* -----------------------------------  I2C0_MR  ---------------------------------- */
#define I2C0_MR_DIS_SDAH_Pos                  0                                                       /*!< I2C0 MR: DIS_SDAH Position              */
#define I2C0_MR_DIS_SDAH_Msk                  (0x01UL << I2C0_MR_DIS_SDAH_Pos)                        /*!< I2C0 MR: DIS_SDAH Mask                  */


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
#define I2C1_CR_I2CnIEN_Pos                   4                                                       /*!< I2C1 CR: I2CnIEN Position               */
#define I2C1_CR_I2CnIEN_Msk                   (0x01UL << I2C1_CR_I2CnIEN_Pos)                         /*!< I2C1 CR: I2CnIEN Mask                   */
#define I2C1_CR_RESET_Pos                     5                                                       /*!< I2C1 CR: RESET Position                 */
#define I2C1_CR_RESET_Msk                     (0x01UL << I2C1_CR_RESET_Pos)                           /*!< I2C1 CR: RESET Mask                     */
#define I2C1_CR_I2CnEN_Pos                    6                                                       /*!< I2C1 CR: I2CnEN Position                */
#define I2C1_CR_I2CnEN_Msk                    (0x01UL << I2C1_CR_I2CnEN_Pos)                          /*!< I2C1 CR: I2CnEN Mask                    */
#define I2C1_CR_I2CnIFLAG_Pos                 7                                                       /*!< I2C1 CR: I2CnIFLAG Position             */
#define I2C1_CR_I2CnIFLAG_Msk                 (0x01UL << I2C1_CR_I2CnIFLAG_Pos)                       /*!< I2C1 CR: I2CnIFLAG Mask                 */

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

/* -----------------------------------  I2C1_MR  ---------------------------------- */
#define I2C1_MR_DIS_SDAH_Pos                  0                                                       /*!< I2C1 MR: DIS_SDAH Position              */
#define I2C1_MR_DIS_SDAH_Msk                  (0x01UL << I2C1_MR_DIS_SDAH_Pos)                        /*!< I2C1 MR: DIS_SDAH Mask                  */


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


/* -----------------------------------  ADC_MR  ----------------------------------- */
#define ADC_MR_TRGSEL_Pos                     0                                                       /*!< ADC MR: TRGSEL Position                 */
#define ADC_MR_TRGSEL_Msk                     (0x03UL << ADC_MR_TRGSEL_Pos)                           /*!< ADC MR: TRGSEL Mask                     */
#define ADC_MR_ADMOD_Pos                      4                                                       /*!< ADC MR: ADMOD Position                  */
#define ADC_MR_ADMOD_Msk                      (0x03UL << ADC_MR_ADMOD_Pos)                            /*!< ADC MR: ADMOD Mask                      */
#define ADC_MR_ARST_Pos                       6                                                       /*!< ADC MR: ARST Position                   */
#define ADC_MR_ARST_Msk                       (0x01UL << ADC_MR_ARST_Pos)                             /*!< ADC MR: ARST Mask                       */
#define ADC_MR_ADEN_Pos                       7                                                       /*!< ADC MR: ADEN Position                   */
#define ADC_MR_ADEN_Msk                       (0x01UL << ADC_MR_ADEN_Pos)                             /*!< ADC MR: ADEN Mask                       */
#define ADC_MR_SEQCNT_Pos                     8                                                       /*!< ADC MR: SEQCNT Position                 */
#define ADC_MR_SEQCNT_Msk                     (0x07UL << ADC_MR_SEQCNT_Pos)                           /*!< ADC MR: SEQCNT Mask                     */
#define ADC_MR_STSEL_Pos                      12                                                      /*!< ADC MR: STSEL Position                  */
#define ADC_MR_STSEL_Msk                      (0x1fUL << ADC_MR_STSEL_Pos)                            /*!< ADC MR: STSEL Mask                      */
#define ADC_MR_DMAEN_Pos                      17                                                      /*!< ADC MR: DMAEN Position                  */
#define ADC_MR_DMAEN_Msk                      (0x01UL << ADC_MR_DMAEN_Pos)                            /*!< ADC MR: DMAEN Mask                      */
#define ADC_MR_CHINFO_Pos                     20                                                      /*!< ADC MR: CHINFO Position                 */
#define ADC_MR_CHINFO_Msk                     (0x01UL << ADC_MR_CHINFO_Pos)                           /*!< ADC MR: CHINFO Mask                     */
#define ADC_MR_TRGINFO_Pos                    21                                                      /*!< ADC MR: TRGINFO Position                */
#define ADC_MR_TRGINFO_Msk                    (0x01UL << ADC_MR_TRGINFO_Pos)                          /*!< ADC MR: TRGINFO Mask                    */

/* ----------------------------------  ADC_CSCR  ---------------------------------- */
#define ADC_CSCR_CACH_Pos                     0                                                       /*!< ADC CSCR: CACH Position                 */
#define ADC_CSCR_CACH_Msk                     (0x1fUL << ADC_CSCR_CACH_Pos)                           /*!< ADC CSCR: CACH Mask                     */
#define ADC_CSCR_CSEQN_Pos                    8                                                       /*!< ADC CSCR: CSEQN Position                */
#define ADC_CSCR_CSEQN_Msk                    (0x07UL << ADC_CSCR_CSEQN_Pos)                          /*!< ADC CSCR: CSEQN Mask                    */

/* -----------------------------------  ADC_CCR  ---------------------------------- */
#define ADC_CCR_CLKINIVT_Pos                  5                                                       /*!< ADC CCR: CLKINIVT Position              */
#define ADC_CCR_CLKINIVT_Msk                  (0x01UL << ADC_CCR_CLKINIVT_Pos)                        /*!< ADC CCR: CLKINIVT Mask                  */
#define ADC_CCR_EXTCLK_Pos                    6                                                       /*!< ADC CCR: EXTCLK Position                */
#define ADC_CCR_EXTCLK_Msk                    (0x01UL << ADC_CCR_EXTCLK_Pos)                          /*!< ADC CCR: EXTCLK Mask                    */
#define ADC_CCR_ADCPD_Pos                     7                                                       /*!< ADC CCR: ADCPD Position                 */
#define ADC_CCR_ADCPD_Msk                     (0x01UL << ADC_CCR_ADCPD_Pos)                           /*!< ADC CCR: ADCPD Mask                     */
#define ADC_CCR_CLKDIV_Pos                    8                                                       /*!< ADC CCR: CLKDIV Position                */
#define ADC_CCR_CLKDIV_Msk                    (0x7fUL << ADC_CCR_CLKDIV_Pos)                          /*!< ADC CCR: CLKDIV Mask                    */
#define ADC_CCR_ADCPDA_Pos                    15                                                      /*!< ADC CCR: ADCPDA Position                */
#define ADC_CCR_ADCPDA_Msk                    (0x01UL << ADC_CCR_ADCPDA_Pos)                          /*!< ADC CCR: ADCPDA Mask                    */

/* -----------------------------------  ADC_TRG  ---------------------------------- */
#define ADC_TRG_SEQTRG0_Pos                   0                                                       /*!< ADC TRG: SEQTRG0 Position               */
#define ADC_TRG_SEQTRG0_Msk                   (0x0fUL << ADC_TRG_SEQTRG0_Pos)                         /*!< ADC TRG: SEQTRG0 Mask                   */
#define ADC_TRG_SEQTRG1_Pos                   4                                                       /*!< ADC TRG: SEQTRG1 Position               */
#define ADC_TRG_SEQTRG1_Msk                   (0x0fUL << ADC_TRG_SEQTRG1_Pos)                         /*!< ADC TRG: SEQTRG1 Mask                   */
#define ADC_TRG_SEQTRG2_Pos                   8                                                       /*!< ADC TRG: SEQTRG2 Position               */
#define ADC_TRG_SEQTRG2_Msk                   (0x0fUL << ADC_TRG_SEQTRG2_Pos)                         /*!< ADC TRG: SEQTRG2 Mask                   */
#define ADC_TRG_SEQTRG3_Pos                   12                                                      /*!< ADC TRG: SEQTRG3 Position               */
#define ADC_TRG_SEQTRG3_Msk                   (0x0fUL << ADC_TRG_SEQTRG3_Pos)                         /*!< ADC TRG: SEQTRG3 Mask                   */
#define ADC_TRG_SEQTRG4_Pos                   16                                                      /*!< ADC TRG: SEQTRG4 Position               */
#define ADC_TRG_SEQTRG4_Msk                   (0x0fUL << ADC_TRG_SEQTRG4_Pos)                         /*!< ADC TRG: SEQTRG4 Mask                   */
#define ADC_TRG_SEQTRG5_Pos                   20                                                      /*!< ADC TRG: SEQTRG5 Position               */
#define ADC_TRG_SEQTRG5_Msk                   (0x0fUL << ADC_TRG_SEQTRG5_Pos)                         /*!< ADC TRG: SEQTRG5 Mask                   */
#define ADC_TRG_SEQTRG6_Pos                   24                                                      /*!< ADC TRG: SEQTRG6 Position               */
#define ADC_TRG_SEQTRG6_Msk                   (0x0fUL << ADC_TRG_SEQTRG6_Pos)                         /*!< ADC TRG: SEQTRG6 Mask                   */
#define ADC_TRG_SEQTRG7_Pos                   28                                                      /*!< ADC TRG: SEQTRG7 Position               */
#define ADC_TRG_SEQTRG7_Msk                   (0x0fUL << ADC_TRG_SEQTRG7_Pos)                         /*!< ADC TRG: SEQTRG7 Mask                   */

/* ----------------------------------  ADC_SCSR1  --------------------------------- */
#define ADC_SCSR1_SEQ0CH_Pos                  0                                                       /*!< ADC SCSR1: SEQ0CH Position              */
#define ADC_SCSR1_SEQ0CH_Msk                  (0x1fUL << ADC_SCSR1_SEQ0CH_Pos)                        /*!< ADC SCSR1: SEQ0CH Mask                  */
#define ADC_SCSR1_SEQ1CH_Pos                  8                                                       /*!< ADC SCSR1: SEQ1CH Position              */
#define ADC_SCSR1_SEQ1CH_Msk                  (0x1fUL << ADC_SCSR1_SEQ1CH_Pos)                        /*!< ADC SCSR1: SEQ1CH Mask                  */
#define ADC_SCSR1_SEQ2CH_Pos                  16                                                      /*!< ADC SCSR1: SEQ2CH Position              */
#define ADC_SCSR1_SEQ2CH_Msk                  (0x1fUL << ADC_SCSR1_SEQ2CH_Pos)                        /*!< ADC SCSR1: SEQ2CH Mask                  */
#define ADC_SCSR1_SEQ3CH_Pos                  24                                                      /*!< ADC SCSR1: SEQ3CH Position              */
#define ADC_SCSR1_SEQ3CH_Msk                  (0x1fUL << ADC_SCSR1_SEQ3CH_Pos)                        /*!< ADC SCSR1: SEQ3CH Mask                  */

/* ----------------------------------  ADC_SCSR2  --------------------------------- */
#define ADC_SCSR2_SEQ4CH_Pos                  0                                                       /*!< ADC SCSR2: SEQ4CH Position              */
#define ADC_SCSR2_SEQ4CH_Msk                  (0x1fUL << ADC_SCSR2_SEQ4CH_Pos)                        /*!< ADC SCSR2: SEQ4CH Mask                  */
#define ADC_SCSR2_SEQ5CH_Pos                  8                                                       /*!< ADC SCSR2: SEQ5CH Position              */
#define ADC_SCSR2_SEQ5CH_Msk                  (0x1fUL << ADC_SCSR2_SEQ5CH_Pos)                        /*!< ADC SCSR2: SEQ5CH Mask                  */
#define ADC_SCSR2_SEQ6CH_Pos                  16                                                      /*!< ADC SCSR2: SEQ6CH Position              */
#define ADC_SCSR2_SEQ6CH_Msk                  (0x1fUL << ADC_SCSR2_SEQ6CH_Pos)                        /*!< ADC SCSR2: SEQ6CH Mask                  */
#define ADC_SCSR2_SEQ7CH_Pos                  24                                                      /*!< ADC SCSR2: SEQ7CH Position              */
#define ADC_SCSR2_SEQ7CH_Msk                  (0x1fUL << ADC_SCSR2_SEQ7CH_Pos)                        /*!< ADC SCSR2: SEQ7CH Mask                  */

/* -----------------------------------  ADC_CR  ----------------------------------- */
#define ADC_CR_ASTART_Pos                     0                                                       /*!< ADC CR: ASTART Position                 */
#define ADC_CR_ASTART_Msk                     (0x01UL << ADC_CR_ASTART_Pos)                           /*!< ADC CR: ASTART Mask                     */
#define ADC_CR_TRGCLR_Pos                     1                                                       /*!< ADC CR: TRGCLR Position                 */
#define ADC_CR_TRGCLR_Msk                     (0x01UL << ADC_CR_TRGCLR_Pos)                           /*!< ADC CR: TRGCLR Mask                     */
#define ADC_CR_ASTOP_Pos                      7                                                       /*!< ADC CR: ASTOP Position                  */
#define ADC_CR_ASTOP_Msk                      (0x01UL << ADC_CR_ASTOP_Pos)                            /*!< ADC CR: ASTOP Mask                      */

/* -----------------------------------  ADC_SR  ----------------------------------- */
#define ADC_SR_EOCIF_Pos                      0                                                       /*!< ADC SR: EOCIF Position                  */
#define ADC_SR_EOCIF_Msk                      (0x01UL << ADC_SR_EOCIF_Pos)                            /*!< ADC SR: EOCIF Mask                      */
#define ADC_SR_EOSIF_Pos                      2                                                       /*!< ADC SR: EOSIF Position                  */
#define ADC_SR_EOSIF_Msk                      (0x01UL << ADC_SR_EOSIF_Pos)                            /*!< ADC SR: EOSIF Mask                      */
#define ADC_SR_TRGIF_Pos                      3                                                       /*!< ADC SR: TRGIF Position                  */
#define ADC_SR_TRGIF_Msk                      (0x01UL << ADC_SR_TRGIF_Pos)                            /*!< ADC SR: TRGIF Mask                      */
#define ADC_SR_DMAF_Pos                       4                                                       /*!< ADC SR: DMAF Position                   */
#define ADC_SR_DMAF_Msk                       (0x01UL << ADC_SR_DMAF_Pos)                             /*!< ADC SR: DMAF Mask                       */
#define ADC_SR_DOVRUN_Pos                     5                                                       /*!< ADC SR: DOVRUN Position                 */
#define ADC_SR_DOVRUN_Msk                     (0x01UL << ADC_SR_DOVRUN_Pos)                           /*!< ADC SR: DOVRUN Mask                     */
#define ADC_SR_COMPIFLG_Pos                   8                                                       /*!< ADC SR: COMPIFLG Position               */
#define ADC_SR_COMPIFLG_Msk                   (0x01UL << ADC_SR_COMPIFLG_Pos)                         /*!< ADC SR: COMPIFLG Mask                   */

/* -----------------------------------  ADC_IER  ---------------------------------- */
#define ADC_IER_EOCIE_Pos                     0                                                       /*!< ADC IER: EOCIE Position                 */
#define ADC_IER_EOCIE_Msk                     (0x01UL << ADC_IER_EOCIE_Pos)                           /*!< ADC IER: EOCIE Mask                     */
#define ADC_IER_EOSIE_Pos                     2                                                       /*!< ADC IER: EOSIE Position                 */
#define ADC_IER_EOSIE_Msk                     (0x01UL << ADC_IER_EOSIE_Pos)                           /*!< ADC IER: EOSIE Mask                     */
#define ADC_IER_TRGIE_Pos                     3                                                       /*!< ADC IER: TRGIE Position                 */
#define ADC_IER_TRGIE_Msk                     (0x01UL << ADC_IER_TRGIE_Pos)                           /*!< ADC IER: TRGIE Mask                     */
#define ADC_IER_DMAIE_Pos                     4                                                       /*!< ADC IER: DMAIE Position                 */
#define ADC_IER_DMAIE_Msk                     (0x01UL << ADC_IER_DMAIE_Pos)                           /*!< ADC IER: DMAIE Mask                     */

/* -----------------------------------  ADC_DDR  ---------------------------------- */
#define ADC_DDR_ADDMAR_Pos                    4                                                       /*!< ADC DDR: ADDMAR Position                */
#define ADC_DDR_ADDMAR_Msk                    (0x00000fffUL << ADC_DDR_ADDMAR_Pos)                    /*!< ADC DDR: ADDMAR Mask                    */
#define ADC_DDR_ADMACH_Pos                    16                                                      /*!< ADC DDR: ADMACH Position                */
#define ADC_DDR_ADMACH_Msk                    (0x1fUL << ADC_DDR_ADMACH_Pos)                          /*!< ADC DDR: ADMACH Mask                    */
#define ADC_DDR_TRGINFO0_Pos                  24                                                      /*!< ADC DDR: TRGINFO0 Position              */
#define ADC_DDR_TRGINFO0_Msk                  (0x01UL << ADC_DDR_TRGINFO0_Pos)                        /*!< ADC DDR: TRGINFO0 Mask                  */
#define ADC_DDR_TRGINFO1_Pos                  25                                                      /*!< ADC DDR: TRGINFO1 Position              */
#define ADC_DDR_TRGINFO1_Msk                  (0x01UL << ADC_DDR_TRGINFO1_Pos)                        /*!< ADC DDR: TRGINFO1 Mask                  */
#define ADC_DDR_TRGINFO2_Pos                  26                                                      /*!< ADC DDR: TRGINFO2 Position              */
#define ADC_DDR_TRGINFO2_Msk                  (0x01UL << ADC_DDR_TRGINFO2_Pos)                        /*!< ADC DDR: TRGINFO2 Mask                  */
#define ADC_DDR_TRGINFO3_Pos                  27                                                      /*!< ADC DDR: TRGINFO3 Position              */
#define ADC_DDR_TRGINFO3_Msk                  (0x01UL << ADC_DDR_TRGINFO3_Pos)                        /*!< ADC DDR: TRGINFO3 Mask                  */
#define ADC_DDR_TRGINFO4_Pos                  28                                                      /*!< ADC DDR: TRGINFO4 Position              */
#define ADC_DDR_TRGINFO4_Msk                  (0x01UL << ADC_DDR_TRGINFO4_Pos)                        /*!< ADC DDR: TRGINFO4 Mask                  */
#define ADC_DDR_TRGINFO5_Pos                  29                                                      /*!< ADC DDR: TRGINFO5 Position              */
#define ADC_DDR_TRGINFO5_Msk                  (0x01UL << ADC_DDR_TRGINFO5_Pos)                        /*!< ADC DDR: TRGINFO5 Mask                  */
#define ADC_DDR_TRGINFO6_Pos                  30                                                      /*!< ADC DDR: TRGINFO6 Position              */
#define ADC_DDR_TRGINFO6_Msk                  (0x01UL << ADC_DDR_TRGINFO6_Pos)                        /*!< ADC DDR: TRGINFO6 Mask                  */
#define ADC_DDR_TRGINFO7_Pos                  31                                                      /*!< ADC DDR: TRGINFO7 Position              */
#define ADC_DDR_TRGINFO7_Msk                  (0x01UL << ADC_DDR_TRGINFO7_Pos)                        /*!< ADC DDR: TRGINFO7 Mask                  */

/* -----------------------------------  ADC_DR0  ---------------------------------- */
#define ADC_DR0_ADDATA_Pos                    4                                                       /*!< ADC DR0: ADDATA Position                */
#define ADC_DR0_ADDATA_Msk                    (0x00000fffUL << ADC_DR0_ADDATA_Pos)                    /*!< ADC DR0: ADDATA Mask                    */
#define ADC_DR0_ACH_Pos                       16                                                      /*!< ADC DR0: ACH Position                   */
#define ADC_DR0_ACH_Msk                       (0x1fUL << ADC_DR0_ACH_Pos)                             /*!< ADC DR0: ACH Mask                       */
#define ADC_DR0_TRGINFO0_Pos                  24                                                      /*!< ADC DR0: TRGINFO0 Position              */
#define ADC_DR0_TRGINFO0_Msk                  (0x01UL << ADC_DR0_TRGINFO0_Pos)                        /*!< ADC DR0: TRGINFO0 Mask                  */
#define ADC_DR0_TRGINFO1_Pos                  25                                                      /*!< ADC DR0: TRGINFO1 Position              */
#define ADC_DR0_TRGINFO1_Msk                  (0x01UL << ADC_DR0_TRGINFO1_Pos)                        /*!< ADC DR0: TRGINFO1 Mask                  */
#define ADC_DR0_TRGINFO2_Pos                  26                                                      /*!< ADC DR0: TRGINFO2 Position              */
#define ADC_DR0_TRGINFO2_Msk                  (0x01UL << ADC_DR0_TRGINFO2_Pos)                        /*!< ADC DR0: TRGINFO2 Mask                  */
#define ADC_DR0_TRGINFO3_Pos                  27                                                      /*!< ADC DR0: TRGINFO3 Position              */
#define ADC_DR0_TRGINFO3_Msk                  (0x01UL << ADC_DR0_TRGINFO3_Pos)                        /*!< ADC DR0: TRGINFO3 Mask                  */
#define ADC_DR0_TRGINFO4_Pos                  28                                                      /*!< ADC DR0: TRGINFO4 Position              */
#define ADC_DR0_TRGINFO4_Msk                  (0x01UL << ADC_DR0_TRGINFO4_Pos)                        /*!< ADC DR0: TRGINFO4 Mask                  */
#define ADC_DR0_TRGINFO5_Pos                  29                                                      /*!< ADC DR0: TRGINFO5 Position              */
#define ADC_DR0_TRGINFO5_Msk                  (0x01UL << ADC_DR0_TRGINFO5_Pos)                        /*!< ADC DR0: TRGINFO5 Mask                  */
#define ADC_DR0_TRGINFO6_Pos                  30                                                      /*!< ADC DR0: TRGINFO6 Position              */
#define ADC_DR0_TRGINFO6_Msk                  (0x01UL << ADC_DR0_TRGINFO6_Pos)                        /*!< ADC DR0: TRGINFO6 Mask                  */
#define ADC_DR0_TRGINFO7_Pos                  31                                                      /*!< ADC DR0: TRGINFO7 Position              */
#define ADC_DR0_TRGINFO7_Msk                  (0x01UL << ADC_DR0_TRGINFO7_Pos)                        /*!< ADC DR0: TRGINFO7 Mask                  */

/* -----------------------------------  ADC_DR1  ---------------------------------- */
#define ADC_DR1_ADDATA_Pos                    4                                                       /*!< ADC DR1: ADDATA Position                */
#define ADC_DR1_ADDATA_Msk                    (0x00000fffUL << ADC_DR1_ADDATA_Pos)                    /*!< ADC DR1: ADDATA Mask                    */
#define ADC_DR1_ACH_Pos                       16                                                      /*!< ADC DR1: ACH Position                   */
#define ADC_DR1_ACH_Msk                       (0x1fUL << ADC_DR1_ACH_Pos)                             /*!< ADC DR1: ACH Mask                       */
#define ADC_DR1_TRGINFO0_Pos                  24                                                      /*!< ADC DR1: TRGINFO0 Position              */
#define ADC_DR1_TRGINFO0_Msk                  (0x01UL << ADC_DR1_TRGINFO0_Pos)                        /*!< ADC DR1: TRGINFO0 Mask                  */
#define ADC_DR1_TRGINFO1_Pos                  25                                                      /*!< ADC DR1: TRGINFO1 Position              */
#define ADC_DR1_TRGINFO1_Msk                  (0x01UL << ADC_DR1_TRGINFO1_Pos)                        /*!< ADC DR1: TRGINFO1 Mask                  */
#define ADC_DR1_TRGINFO2_Pos                  26                                                      /*!< ADC DR1: TRGINFO2 Position              */
#define ADC_DR1_TRGINFO2_Msk                  (0x01UL << ADC_DR1_TRGINFO2_Pos)                        /*!< ADC DR1: TRGINFO2 Mask                  */
#define ADC_DR1_TRGINFO3_Pos                  27                                                      /*!< ADC DR1: TRGINFO3 Position              */
#define ADC_DR1_TRGINFO3_Msk                  (0x01UL << ADC_DR1_TRGINFO3_Pos)                        /*!< ADC DR1: TRGINFO3 Mask                  */
#define ADC_DR1_TRGINFO4_Pos                  28                                                      /*!< ADC DR1: TRGINFO4 Position              */
#define ADC_DR1_TRGINFO4_Msk                  (0x01UL << ADC_DR1_TRGINFO4_Pos)                        /*!< ADC DR1: TRGINFO4 Mask                  */
#define ADC_DR1_TRGINFO5_Pos                  29                                                      /*!< ADC DR1: TRGINFO5 Position              */
#define ADC_DR1_TRGINFO5_Msk                  (0x01UL << ADC_DR1_TRGINFO5_Pos)                        /*!< ADC DR1: TRGINFO5 Mask                  */
#define ADC_DR1_TRGINFO6_Pos                  30                                                      /*!< ADC DR1: TRGINFO6 Position              */
#define ADC_DR1_TRGINFO6_Msk                  (0x01UL << ADC_DR1_TRGINFO6_Pos)                        /*!< ADC DR1: TRGINFO6 Mask                  */
#define ADC_DR1_TRGINFO7_Pos                  31                                                      /*!< ADC DR1: TRGINFO7 Position              */
#define ADC_DR1_TRGINFO7_Msk                  (0x01UL << ADC_DR1_TRGINFO7_Pos)                        /*!< ADC DR1: TRGINFO7 Mask                  */

/* -----------------------------------  ADC_DR2  ---------------------------------- */
#define ADC_DR2_ADDATA_Pos                    4                                                       /*!< ADC DR2: ADDATA Position                */
#define ADC_DR2_ADDATA_Msk                    (0x00000fffUL << ADC_DR2_ADDATA_Pos)                    /*!< ADC DR2: ADDATA Mask                    */
#define ADC_DR2_ACH_Pos                       16                                                      /*!< ADC DR2: ACH Position                   */
#define ADC_DR2_ACH_Msk                       (0x1fUL << ADC_DR2_ACH_Pos)                             /*!< ADC DR2: ACH Mask                       */
#define ADC_DR2_TRGINFO0_Pos                  24                                                      /*!< ADC DR2: TRGINFO0 Position              */
#define ADC_DR2_TRGINFO0_Msk                  (0x01UL << ADC_DR2_TRGINFO0_Pos)                        /*!< ADC DR2: TRGINFO0 Mask                  */
#define ADC_DR2_TRGINFO1_Pos                  25                                                      /*!< ADC DR2: TRGINFO1 Position              */
#define ADC_DR2_TRGINFO1_Msk                  (0x01UL << ADC_DR2_TRGINFO1_Pos)                        /*!< ADC DR2: TRGINFO1 Mask                  */
#define ADC_DR2_TRGINFO2_Pos                  26                                                      /*!< ADC DR2: TRGINFO2 Position              */
#define ADC_DR2_TRGINFO2_Msk                  (0x01UL << ADC_DR2_TRGINFO2_Pos)                        /*!< ADC DR2: TRGINFO2 Mask                  */
#define ADC_DR2_TRGINFO3_Pos                  27                                                      /*!< ADC DR2: TRGINFO3 Position              */
#define ADC_DR2_TRGINFO3_Msk                  (0x01UL << ADC_DR2_TRGINFO3_Pos)                        /*!< ADC DR2: TRGINFO3 Mask                  */
#define ADC_DR2_TRGINFO4_Pos                  28                                                      /*!< ADC DR2: TRGINFO4 Position              */
#define ADC_DR2_TRGINFO4_Msk                  (0x01UL << ADC_DR2_TRGINFO4_Pos)                        /*!< ADC DR2: TRGINFO4 Mask                  */
#define ADC_DR2_TRGINFO5_Pos                  29                                                      /*!< ADC DR2: TRGINFO5 Position              */
#define ADC_DR2_TRGINFO5_Msk                  (0x01UL << ADC_DR2_TRGINFO5_Pos)                        /*!< ADC DR2: TRGINFO5 Mask                  */
#define ADC_DR2_TRGINFO6_Pos                  30                                                      /*!< ADC DR2: TRGINFO6 Position              */
#define ADC_DR2_TRGINFO6_Msk                  (0x01UL << ADC_DR2_TRGINFO6_Pos)                        /*!< ADC DR2: TRGINFO6 Mask                  */
#define ADC_DR2_TRGINFO7_Pos                  31                                                      /*!< ADC DR2: TRGINFO7 Position              */
#define ADC_DR2_TRGINFO7_Msk                  (0x01UL << ADC_DR2_TRGINFO7_Pos)                        /*!< ADC DR2: TRGINFO7 Mask                  */

/* -----------------------------------  ADC_DR3  ---------------------------------- */
#define ADC_DR3_ADDATA_Pos                    4                                                       /*!< ADC DR3: ADDATA Position                */
#define ADC_DR3_ADDATA_Msk                    (0x00000fffUL << ADC_DR3_ADDATA_Pos)                    /*!< ADC DR3: ADDATA Mask                    */
#define ADC_DR3_ACH_Pos                       16                                                      /*!< ADC DR3: ACH Position                   */
#define ADC_DR3_ACH_Msk                       (0x1fUL << ADC_DR3_ACH_Pos)                             /*!< ADC DR3: ACH Mask                       */
#define ADC_DR3_TRGINFO0_Pos                  24                                                      /*!< ADC DR3: TRGINFO0 Position              */
#define ADC_DR3_TRGINFO0_Msk                  (0x01UL << ADC_DR3_TRGINFO0_Pos)                        /*!< ADC DR3: TRGINFO0 Mask                  */
#define ADC_DR3_TRGINFO1_Pos                  25                                                      /*!< ADC DR3: TRGINFO1 Position              */
#define ADC_DR3_TRGINFO1_Msk                  (0x01UL << ADC_DR3_TRGINFO1_Pos)                        /*!< ADC DR3: TRGINFO1 Mask                  */
#define ADC_DR3_TRGINFO2_Pos                  26                                                      /*!< ADC DR3: TRGINFO2 Position              */
#define ADC_DR3_TRGINFO2_Msk                  (0x01UL << ADC_DR3_TRGINFO2_Pos)                        /*!< ADC DR3: TRGINFO2 Mask                  */
#define ADC_DR3_TRGINFO3_Pos                  27                                                      /*!< ADC DR3: TRGINFO3 Position              */
#define ADC_DR3_TRGINFO3_Msk                  (0x01UL << ADC_DR3_TRGINFO3_Pos)                        /*!< ADC DR3: TRGINFO3 Mask                  */
#define ADC_DR3_TRGINFO4_Pos                  28                                                      /*!< ADC DR3: TRGINFO4 Position              */
#define ADC_DR3_TRGINFO4_Msk                  (0x01UL << ADC_DR3_TRGINFO4_Pos)                        /*!< ADC DR3: TRGINFO4 Mask                  */
#define ADC_DR3_TRGINFO5_Pos                  29                                                      /*!< ADC DR3: TRGINFO5 Position              */
#define ADC_DR3_TRGINFO5_Msk                  (0x01UL << ADC_DR3_TRGINFO5_Pos)                        /*!< ADC DR3: TRGINFO5 Mask                  */
#define ADC_DR3_TRGINFO6_Pos                  30                                                      /*!< ADC DR3: TRGINFO6 Position              */
#define ADC_DR3_TRGINFO6_Msk                  (0x01UL << ADC_DR3_TRGINFO6_Pos)                        /*!< ADC DR3: TRGINFO6 Mask                  */
#define ADC_DR3_TRGINFO7_Pos                  31                                                      /*!< ADC DR3: TRGINFO7 Position              */
#define ADC_DR3_TRGINFO7_Msk                  (0x01UL << ADC_DR3_TRGINFO7_Pos)                        /*!< ADC DR3: TRGINFO7 Mask                  */

/* -----------------------------------  ADC_DR4  ---------------------------------- */
#define ADC_DR4_ADDATA_Pos                    4                                                       /*!< ADC DR4: ADDATA Position                */
#define ADC_DR4_ADDATA_Msk                    (0x00000fffUL << ADC_DR4_ADDATA_Pos)                    /*!< ADC DR4: ADDATA Mask                    */
#define ADC_DR4_ACH_Pos                       16                                                      /*!< ADC DR4: ACH Position                   */
#define ADC_DR4_ACH_Msk                       (0x1fUL << ADC_DR4_ACH_Pos)                             /*!< ADC DR4: ACH Mask                       */
#define ADC_DR4_TRGINFO0_Pos                  24                                                      /*!< ADC DR4: TRGINFO0 Position              */
#define ADC_DR4_TRGINFO0_Msk                  (0x01UL << ADC_DR4_TRGINFO0_Pos)                        /*!< ADC DR4: TRGINFO0 Mask                  */
#define ADC_DR4_TRGINFO1_Pos                  25                                                      /*!< ADC DR4: TRGINFO1 Position              */
#define ADC_DR4_TRGINFO1_Msk                  (0x01UL << ADC_DR4_TRGINFO1_Pos)                        /*!< ADC DR4: TRGINFO1 Mask                  */
#define ADC_DR4_TRGINFO2_Pos                  26                                                      /*!< ADC DR4: TRGINFO2 Position              */
#define ADC_DR4_TRGINFO2_Msk                  (0x01UL << ADC_DR4_TRGINFO2_Pos)                        /*!< ADC DR4: TRGINFO2 Mask                  */
#define ADC_DR4_TRGINFO3_Pos                  27                                                      /*!< ADC DR4: TRGINFO3 Position              */
#define ADC_DR4_TRGINFO3_Msk                  (0x01UL << ADC_DR4_TRGINFO3_Pos)                        /*!< ADC DR4: TRGINFO3 Mask                  */
#define ADC_DR4_TRGINFO4_Pos                  28                                                      /*!< ADC DR4: TRGINFO4 Position              */
#define ADC_DR4_TRGINFO4_Msk                  (0x01UL << ADC_DR4_TRGINFO4_Pos)                        /*!< ADC DR4: TRGINFO4 Mask                  */
#define ADC_DR4_TRGINFO5_Pos                  29                                                      /*!< ADC DR4: TRGINFO5 Position              */
#define ADC_DR4_TRGINFO5_Msk                  (0x01UL << ADC_DR4_TRGINFO5_Pos)                        /*!< ADC DR4: TRGINFO5 Mask                  */
#define ADC_DR4_TRGINFO6_Pos                  30                                                      /*!< ADC DR4: TRGINFO6 Position              */
#define ADC_DR4_TRGINFO6_Msk                  (0x01UL << ADC_DR4_TRGINFO6_Pos)                        /*!< ADC DR4: TRGINFO6 Mask                  */
#define ADC_DR4_TRGINFO7_Pos                  31                                                      /*!< ADC DR4: TRGINFO7 Position              */
#define ADC_DR4_TRGINFO7_Msk                  (0x01UL << ADC_DR4_TRGINFO7_Pos)                        /*!< ADC DR4: TRGINFO7 Mask                  */

/* -----------------------------------  ADC_DR5  ---------------------------------- */
#define ADC_DR5_ADDATA_Pos                    4                                                       /*!< ADC DR5: ADDATA Position                */
#define ADC_DR5_ADDATA_Msk                    (0x00000fffUL << ADC_DR5_ADDATA_Pos)                    /*!< ADC DR5: ADDATA Mask                    */
#define ADC_DR5_ACH_Pos                       16                                                      /*!< ADC DR5: ACH Position                   */
#define ADC_DR5_ACH_Msk                       (0x1fUL << ADC_DR5_ACH_Pos)                             /*!< ADC DR5: ACH Mask                       */
#define ADC_DR5_TRGINFO0_Pos                  24                                                      /*!< ADC DR5: TRGINFO0 Position              */
#define ADC_DR5_TRGINFO0_Msk                  (0x01UL << ADC_DR5_TRGINFO0_Pos)                        /*!< ADC DR5: TRGINFO0 Mask                  */
#define ADC_DR5_TRGINFO1_Pos                  25                                                      /*!< ADC DR5: TRGINFO1 Position              */
#define ADC_DR5_TRGINFO1_Msk                  (0x01UL << ADC_DR5_TRGINFO1_Pos)                        /*!< ADC DR5: TRGINFO1 Mask                  */
#define ADC_DR5_TRGINFO2_Pos                  26                                                      /*!< ADC DR5: TRGINFO2 Position              */
#define ADC_DR5_TRGINFO2_Msk                  (0x01UL << ADC_DR5_TRGINFO2_Pos)                        /*!< ADC DR5: TRGINFO2 Mask                  */
#define ADC_DR5_TRGINFO3_Pos                  27                                                      /*!< ADC DR5: TRGINFO3 Position              */
#define ADC_DR5_TRGINFO3_Msk                  (0x01UL << ADC_DR5_TRGINFO3_Pos)                        /*!< ADC DR5: TRGINFO3 Mask                  */
#define ADC_DR5_TRGINFO4_Pos                  28                                                      /*!< ADC DR5: TRGINFO4 Position              */
#define ADC_DR5_TRGINFO4_Msk                  (0x01UL << ADC_DR5_TRGINFO4_Pos)                        /*!< ADC DR5: TRGINFO4 Mask                  */
#define ADC_DR5_TRGINFO5_Pos                  29                                                      /*!< ADC DR5: TRGINFO5 Position              */
#define ADC_DR5_TRGINFO5_Msk                  (0x01UL << ADC_DR5_TRGINFO5_Pos)                        /*!< ADC DR5: TRGINFO5 Mask                  */
#define ADC_DR5_TRGINFO6_Pos                  30                                                      /*!< ADC DR5: TRGINFO6 Position              */
#define ADC_DR5_TRGINFO6_Msk                  (0x01UL << ADC_DR5_TRGINFO6_Pos)                        /*!< ADC DR5: TRGINFO6 Mask                  */
#define ADC_DR5_TRGINFO7_Pos                  31                                                      /*!< ADC DR5: TRGINFO7 Position              */
#define ADC_DR5_TRGINFO7_Msk                  (0x01UL << ADC_DR5_TRGINFO7_Pos)                        /*!< ADC DR5: TRGINFO7 Mask                  */

/* -----------------------------------  ADC_DR6  ---------------------------------- */
#define ADC_DR6_ADDATA_Pos                    4                                                       /*!< ADC DR6: ADDATA Position                */
#define ADC_DR6_ADDATA_Msk                    (0x00000fffUL << ADC_DR6_ADDATA_Pos)                    /*!< ADC DR6: ADDATA Mask                    */
#define ADC_DR6_ACH_Pos                       16                                                      /*!< ADC DR6: ACH Position                   */
#define ADC_DR6_ACH_Msk                       (0x1fUL << ADC_DR6_ACH_Pos)                             /*!< ADC DR6: ACH Mask                       */
#define ADC_DR6_TRGINFO0_Pos                  24                                                      /*!< ADC DR6: TRGINFO0 Position              */
#define ADC_DR6_TRGINFO0_Msk                  (0x01UL << ADC_DR6_TRGINFO0_Pos)                        /*!< ADC DR6: TRGINFO0 Mask                  */
#define ADC_DR6_TRGINFO1_Pos                  25                                                      /*!< ADC DR6: TRGINFO1 Position              */
#define ADC_DR6_TRGINFO1_Msk                  (0x01UL << ADC_DR6_TRGINFO1_Pos)                        /*!< ADC DR6: TRGINFO1 Mask                  */
#define ADC_DR6_TRGINFO2_Pos                  26                                                      /*!< ADC DR6: TRGINFO2 Position              */
#define ADC_DR6_TRGINFO2_Msk                  (0x01UL << ADC_DR6_TRGINFO2_Pos)                        /*!< ADC DR6: TRGINFO2 Mask                  */
#define ADC_DR6_TRGINFO3_Pos                  27                                                      /*!< ADC DR6: TRGINFO3 Position              */
#define ADC_DR6_TRGINFO3_Msk                  (0x01UL << ADC_DR6_TRGINFO3_Pos)                        /*!< ADC DR6: TRGINFO3 Mask                  */
#define ADC_DR6_TRGINFO4_Pos                  28                                                      /*!< ADC DR6: TRGINFO4 Position              */
#define ADC_DR6_TRGINFO4_Msk                  (0x01UL << ADC_DR6_TRGINFO4_Pos)                        /*!< ADC DR6: TRGINFO4 Mask                  */
#define ADC_DR6_TRGINFO5_Pos                  29                                                      /*!< ADC DR6: TRGINFO5 Position              */
#define ADC_DR6_TRGINFO5_Msk                  (0x01UL << ADC_DR6_TRGINFO5_Pos)                        /*!< ADC DR6: TRGINFO5 Mask                  */
#define ADC_DR6_TRGINFO6_Pos                  30                                                      /*!< ADC DR6: TRGINFO6 Position              */
#define ADC_DR6_TRGINFO6_Msk                  (0x01UL << ADC_DR6_TRGINFO6_Pos)                        /*!< ADC DR6: TRGINFO6 Mask                  */
#define ADC_DR6_TRGINFO7_Pos                  31                                                      /*!< ADC DR6: TRGINFO7 Position              */
#define ADC_DR6_TRGINFO7_Msk                  (0x01UL << ADC_DR6_TRGINFO7_Pos)                        /*!< ADC DR6: TRGINFO7 Mask                  */

/* -----------------------------------  ADC_DR7  ---------------------------------- */
#define ADC_DR7_ADDATA_Pos                    4                                                       /*!< ADC DR7: ADDATA Position                */
#define ADC_DR7_ADDATA_Msk                    (0x00000fffUL << ADC_DR7_ADDATA_Pos)                    /*!< ADC DR7: ADDATA Mask                    */
#define ADC_DR7_ACH_Pos                       16                                                      /*!< ADC DR7: ACH Position                   */
#define ADC_DR7_ACH_Msk                       (0x1fUL << ADC_DR7_ACH_Pos)                             /*!< ADC DR7: ACH Mask                       */
#define ADC_DR7_TRGINFO0_Pos                  24                                                      /*!< ADC DR7: TRGINFO0 Position              */
#define ADC_DR7_TRGINFO0_Msk                  (0x01UL << ADC_DR7_TRGINFO0_Pos)                        /*!< ADC DR7: TRGINFO0 Mask                  */
#define ADC_DR7_TRGINFO1_Pos                  25                                                      /*!< ADC DR7: TRGINFO1 Position              */
#define ADC_DR7_TRGINFO1_Msk                  (0x01UL << ADC_DR7_TRGINFO1_Pos)                        /*!< ADC DR7: TRGINFO1 Mask                  */
#define ADC_DR7_TRGINFO2_Pos                  26                                                      /*!< ADC DR7: TRGINFO2 Position              */
#define ADC_DR7_TRGINFO2_Msk                  (0x01UL << ADC_DR7_TRGINFO2_Pos)                        /*!< ADC DR7: TRGINFO2 Mask                  */
#define ADC_DR7_TRGINFO3_Pos                  27                                                      /*!< ADC DR7: TRGINFO3 Position              */
#define ADC_DR7_TRGINFO3_Msk                  (0x01UL << ADC_DR7_TRGINFO3_Pos)                        /*!< ADC DR7: TRGINFO3 Mask                  */
#define ADC_DR7_TRGINFO4_Pos                  28                                                      /*!< ADC DR7: TRGINFO4 Position              */
#define ADC_DR7_TRGINFO4_Msk                  (0x01UL << ADC_DR7_TRGINFO4_Pos)                        /*!< ADC DR7: TRGINFO4 Mask                  */
#define ADC_DR7_TRGINFO5_Pos                  29                                                      /*!< ADC DR7: TRGINFO5 Position              */
#define ADC_DR7_TRGINFO5_Msk                  (0x01UL << ADC_DR7_TRGINFO5_Pos)                        /*!< ADC DR7: TRGINFO5 Mask                  */
#define ADC_DR7_TRGINFO6_Pos                  30                                                      /*!< ADC DR7: TRGINFO6 Position              */
#define ADC_DR7_TRGINFO6_Msk                  (0x01UL << ADC_DR7_TRGINFO6_Pos)                        /*!< ADC DR7: TRGINFO6 Mask                  */
#define ADC_DR7_TRGINFO7_Pos                  31                                                      /*!< ADC DR7: TRGINFO7 Position              */
#define ADC_DR7_TRGINFO7_Msk                  (0x01UL << ADC_DR7_TRGINFO7_Pos)                        /*!< ADC DR7: TRGINFO7 Mask                  */

/* ----------------------------------  ADC_CMPR  ---------------------------------- */
#define ADC_CMPR_CVAL_Pos                     4                                                       /*!< ADC CMPR: CVAL Position                 */
#define ADC_CMPR_CVAL_Msk                     (0x00000fffUL << ADC_CMPR_CVAL_Pos)                     /*!< ADC CMPR: CVAL Mask                     */
#define ADC_CMPR_CCH_Pos                      16                                                      /*!< ADC CMPR: CCH Position                  */
#define ADC_CMPR_CCH_Msk                      (0x1fUL << ADC_CMPR_CCH_Pos)                            /*!< ADC CMPR: CCH Mask                      */
#define ADC_CMPR_LTE_Pos                      21                                                      /*!< ADC CMPR: LTE Position                  */
#define ADC_CMPR_LTE_Msk                      (0x01UL << ADC_CMPR_LTE_Pos)                            /*!< ADC CMPR: LTE Mask                      */
#define ADC_CMPR_COMPEN_Pos                   23                                                      /*!< ADC CMPR: COMPEN Position               */
#define ADC_CMPR_COMPEN_Msk                   (0x01UL << ADC_CMPR_COMPEN_Pos)                         /*!< ADC CMPR: COMPEN Mask                   */
#define ADC_CMPR_COMPIEN_Pos                  24                                                      /*!< ADC CMPR: COMPIEN Position              */
#define ADC_CMPR_COMPIEN_Msk                  (0x01UL << ADC_CMPR_COMPIEN_Pos)                        /*!< ADC CMPR: COMPIEN Mask                  */


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
#define DAC_CR_DAC_BUF_EN_Pos                 10                                                      /*!< DAC CR: DAC_BUF_EN Position             */
#define DAC_CR_DAC_BUF_EN_Msk                 (0x01UL << DAC_CR_DAC_BUF_EN_Pos)                       /*!< DAC CR: DAC_BUF_EN Mask                 */
#define DAC_CR_DAC_OUT1_EN_Pos                11                                                      /*!< DAC CR: DAC_OUT1_EN Position            */
#define DAC_CR_DAC_OUT1_EN_Msk                (0x01UL << DAC_CR_DAC_OUT1_EN_Pos)                      /*!< DAC CR: DAC_OUT1_EN Mask                */
#define DAC_CR_DAC_OUT2_EN_Pos                12                                                      /*!< DAC CR: DAC_OUT2_EN Position            */
#define DAC_CR_DAC_OUT2_EN_Msk                (0x01UL << DAC_CR_DAC_OUT2_EN_Pos)                      /*!< DAC CR: DAC_OUT2_EN Mask                */
#define DAC_CR_DAC_OUT3_EN_Pos                13                                                      /*!< DAC CR: DAC_OUT3_EN Position            */
#define DAC_CR_DAC_OUT3_EN_Msk                (0x01UL << DAC_CR_DAC_OUT3_EN_Pos)                      /*!< DAC CR: DAC_OUT3_EN Mask                */

/* ----------------------------------  DAC_PGSR  ---------------------------------- */
#define DAC_PGSR_DACPGSR_Pos                  0                                                       /*!< DAC PGSR: DACPGSR Position              */
#define DAC_PGSR_DACPGSR_Msk                  (0x0fUL << DAC_PGSR_DACPGSR_Pos)                        /*!< DAC PGSR: DACPGSR Mask                  */

/* ----------------------------------  DAC_OFSCR  --------------------------------- */
#define DAC_OFSCR_OFS_Pos                     0                                                       /*!< DAC OFSCR: OFS Position                 */
#define DAC_OFSCR_OFS_Msk                     (0x0fUL << DAC_OFSCR_OFS_Pos)                           /*!< DAC OFSCR: OFS Mask                     */
#define DAC_OFSCR_OFSDIR_Pos                  6                                                       /*!< DAC OFSCR: OFSDIR Position              */
#define DAC_OFSCR_OFSDIR_Msk                  (0x01UL << DAC_OFSCR_OFSDIR_Pos)                        /*!< DAC OFSCR: OFSDIR Mask                  */
#define DAC_OFSCR_OFSEN_Pos                   7                                                       /*!< DAC OFSCR: OFSEN Position               */
#define DAC_OFSCR_OFSEN_Msk                   (0x01UL << DAC_OFSCR_OFSEN_Pos)                         /*!< DAC OFSCR: OFSEN Mask                   */


/* ================================================================================ */
/* ================          struct 'COMP' Position & Mask         ================ */
/* ================================================================================ */


/* --------------------------------  COMP_COMP0CR  -------------------------------- */
#define COMP_COMP0CR_INNSEL0_Pos              4                                                       /*!< COMP COMP0CR: INNSEL0 Position          */
#define COMP_COMP0CR_INNSEL0_Msk              (0x07UL << COMP_COMP0CR_INNSEL0_Pos)                    /*!< COMP COMP0CR: INNSEL0 Mask              */
#define COMP_COMP0CR_COMP0EN_Pos              12                                                      /*!< COMP COMP0CR: COMP0EN Position          */
#define COMP_COMP0CR_COMP0EN_Msk              (0x01UL << COMP_COMP0CR_COMP0EN_Pos)                    /*!< COMP COMP0CR: COMP0EN Mask              */
#define COMP_COMP0CR_HYSSEL_Pos               16                                                      /*!< COMP COMP0CR: HYSSEL Position           */
#define COMP_COMP0CR_HYSSEL_Msk               (0x03UL << COMP_COMP0CR_HYSSEL_Pos)                     /*!< COMP COMP0CR: HYSSEL Mask               */
#define COMP_COMP0CR_MODE0_Pos                20                                                      /*!< COMP COMP0CR: MODE0 Position            */
#define COMP_COMP0CR_MODE0_Msk                (0x03UL << COMP_COMP0CR_MODE0_Pos)                      /*!< COMP COMP0CR: MODE0 Mask                */
#define COMP_COMP0CR_WINDEN_Pos               24                                                      /*!< COMP COMP0CR: WINDEN Position           */
#define COMP_COMP0CR_WINDEN_Msk               (0x01UL << COMP_COMP0CR_WINDEN_Pos)                     /*!< COMP COMP0CR: WINDEN Mask               */
#define COMP_COMP0CR_COMPREFEN_Pos            25                                                      /*!< COMP COMP0CR: COMPREFEN Position        */
#define COMP_COMP0CR_COMPREFEN_Msk            (0x01UL << COMP_COMP0CR_COMPREFEN_Pos)                  /*!< COMP COMP0CR: COMPREFEN Mask            */

/* --------------------------------  COMP_COMP1CR  -------------------------------- */
#define COMP_COMP1CR_INNSEL1_Pos              4                                                       /*!< COMP COMP1CR: INNSEL1 Position          */
#define COMP_COMP1CR_INNSEL1_Msk              (0x03UL << COMP_COMP1CR_INNSEL1_Pos)                    /*!< COMP COMP1CR: INNSEL1 Mask              */
#define COMP_COMP1CR_COMP1EN_Pos              12                                                      /*!< COMP COMP1CR: COMP1EN Position          */
#define COMP_COMP1CR_COMP1EN_Msk              (0x01UL << COMP_COMP1CR_COMP1EN_Pos)                    /*!< COMP COMP1CR: COMP1EN Mask              */
#define COMP_COMP1CR_HYSSEL1_Pos              16                                                      /*!< COMP COMP1CR: HYSSEL1 Position          */
#define COMP_COMP1CR_HYSSEL1_Msk              (0x03UL << COMP_COMP1CR_HYSSEL1_Pos)                    /*!< COMP COMP1CR: HYSSEL1 Mask              */
#define COMP_COMP1CR_MODE1_Pos                20                                                      /*!< COMP COMP1CR: MODE1 Position            */
#define COMP_COMP1CR_MODE1_Msk                (0x03UL << COMP_COMP1CR_MODE1_Pos)                      /*!< COMP COMP1CR: MODE1 Mask                */

/* --------------------------------  COMP_COMPDBNC  ------------------------------- */
#define COMP_COMPDBNC_C0DBNC_Pos              0                                                       /*!< COMP COMPDBNC: C0DBNC Position          */
#define COMP_COMPDBNC_C0DBNC_Msk              (0x0fUL << COMP_COMPDBNC_C0DBNC_Pos)                    /*!< COMP COMPDBNC: C0DBNC Mask              */
#define COMP_COMPDBNC_C1DBNC_Pos              4                                                       /*!< COMP COMPDBNC: C1DBNC Position          */
#define COMP_COMPDBNC_C1DBNC_Msk              (0x0fUL << COMP_COMPDBNC_C1DBNC_Pos)                    /*!< COMP COMPDBNC: C1DBNC Mask              */
#define COMP_COMPDBNC_DBCSEL_Pos              8                                                       /*!< COMP COMPDBNC: DBCSEL Position          */
#define COMP_COMPDBNC_DBCSEL_Msk              (0x01UL << COMP_COMPDBNC_DBCSEL_Pos)                    /*!< COMP COMPDBNC: DBCSEL Mask              */
#define COMP_COMPDBNC_DBINCTB_Pos             16                                                      /*!< COMP COMPDBNC: DBINCTB Position         */
#define COMP_COMPDBNC_DBINCTB_Msk             (0x0000ffffUL << COMP_COMPDBNC_DBINCTB_Pos)             /*!< COMP COMPDBNC: DBINCTB Mask             */

/* --------------------------------  COMP_COMPICON  ------------------------------- */
#define COMP_COMPICON_C0IMODE_Pos             0                                                       /*!< COMP COMPICON: C0IMODE Position         */
#define COMP_COMPICON_C0IMODE_Msk             (0x03UL << COMP_COMPICON_C0IMODE_Pos)                   /*!< COMP COMPICON: C0IMODE Mask             */
#define COMP_COMPICON_C1IMODE_Pos             2                                                       /*!< COMP COMPICON: C1IMODE Position         */
#define COMP_COMPICON_C1IMODE_Msk             (0x03UL << COMP_COMPICON_C1IMODE_Pos)                   /*!< COMP COMPICON: C1IMODE Mask             */
#define COMP_COMPICON_IPOL0_Pos               8                                                       /*!< COMP COMPICON: IPOL0 Position           */
#define COMP_COMPICON_IPOL0_Msk               (0x01UL << COMP_COMPICON_IPOL0_Pos)                     /*!< COMP COMPICON: IPOL0 Mask               */
#define COMP_COMPICON_IPOL1_Pos               9                                                       /*!< COMP COMPICON: IPOL1 Position           */
#define COMP_COMPICON_IPOL1_Msk               (0x01UL << COMP_COMPICON_IPOL1_Pos)                     /*!< COMP COMPICON: IPOL1 Mask               */
#define COMP_COMPICON_TPOL0_Pos               12                                                      /*!< COMP COMPICON: TPOL0 Position           */
#define COMP_COMPICON_TPOL0_Msk               (0x01UL << COMP_COMPICON_TPOL0_Pos)                     /*!< COMP COMPICON: TPOL0 Mask               */
#define COMP_COMPICON_TPOL1_Pos               13                                                      /*!< COMP COMPICON: TPOL1 Position           */
#define COMP_COMPICON_TPOL1_Msk               (0x01UL << COMP_COMPICON_TPOL1_Pos)                     /*!< COMP COMPICON: TPOL1 Mask               */

/* --------------------------------  COMP_COMPIEN  -------------------------------- */
#define COMP_COMPIEN_C0IEN_Pos                0                                                       /*!< COMP COMPIEN: C0IEN Position            */
#define COMP_COMPIEN_C0IEN_Msk                (0x01UL << COMP_COMPIEN_C0IEN_Pos)                      /*!< COMP COMPIEN: C0IEN Mask                */
#define COMP_COMPIEN_C1IEN_Pos                1                                                       /*!< COMP COMPIEN: C1IEN Position            */
#define COMP_COMPIEN_C1IEN_Msk                (0x01UL << COMP_COMPIEN_C1IEN_Pos)                      /*!< COMP COMPIEN: C1IEN Mask                */

/* --------------------------------  COMP_COMPIST  -------------------------------- */
#define COMP_COMPIST_C0IRQ_Pos                0                                                       /*!< COMP COMPIST: C0IRQ Position            */
#define COMP_COMPIST_C0IRQ_Msk                (0x01UL << COMP_COMPIST_C0IRQ_Pos)                      /*!< COMP COMPIST: C0IRQ Mask                */
#define COMP_COMPIST_C1IRQ_Pos                1                                                       /*!< COMP COMPIST: C1IRQ Position            */
#define COMP_COMPIST_C1IRQ_Msk                (0x01UL << COMP_COMPIST_C1IRQ_Pos)                      /*!< COMP COMPIST: C1IRQ Mask                */

/* --------------------------------  COMP_COMPICLR  ------------------------------- */
#define COMP_COMPICLR_C0ICLR_Pos              0                                                       /*!< COMP COMPICLR: C0ICLR Position          */
#define COMP_COMPICLR_C0ICLR_Msk              (0x01UL << COMP_COMPICLR_C0ICLR_Pos)                    /*!< COMP COMPICLR: C0ICLR Mask              */
#define COMP_COMPICLR_C1ICLR_Pos              1                                                       /*!< COMP COMPICLR: C1ICLR Position          */
#define COMP_COMPICLR_C1ICLR_Msk              (0x01UL << COMP_COMPICLR_C1ICLR_Pos)                    /*!< COMP COMPICLR: C1ICLR Mask              */


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
/* ================         struct 'HSICMU' Position & Mask        ================ */
/* ================================================================================ */


/* ----------------------------------  HSICMU_CR  --------------------------------- */
#define HSICMU_CR_SYNCLVL_0_EN_Pos            0                                                       /*!< HSICMU CR: SYNCLVL_0_EN Position        */
#define HSICMU_CR_SYNCLVL_0_EN_Msk            (0x01UL << HSICMU_CR_SYNCLVL_0_EN_Pos)                  /*!< HSICMU CR: SYNCLVL_0_EN Mask            */
#define HSICMU_CR_SYNCLVL_1_EN_Pos            1                                                       /*!< HSICMU CR: SYNCLVL_1_EN Position        */
#define HSICMU_CR_SYNCLVL_1_EN_Msk            (0x01UL << HSICMU_CR_SYNCLVL_1_EN_Pos)                  /*!< HSICMU CR: SYNCLVL_1_EN Mask            */
#define HSICMU_CR_SYNCLVL_2_EN_Pos            2                                                       /*!< HSICMU CR: SYNCLVL_2_EN Position        */
#define HSICMU_CR_SYNCLVL_2_EN_Msk            (0x01UL << HSICMU_CR_SYNCLVL_2_EN_Pos)                  /*!< HSICMU CR: SYNCLVL_2_EN Mask            */
#define HSICMU_CR_SYNCLVL_3_EN_Pos            3                                                       /*!< HSICMU CR: SYNCLVL_3_EN Position        */
#define HSICMU_CR_SYNCLVL_3_EN_Msk            (0x01UL << HSICMU_CR_SYNCLVL_3_EN_Pos)                  /*!< HSICMU CR: SYNCLVL_3_EN Mask            */
#define HSICMU_CR_SYNCLVL_4_EN_Pos            4                                                       /*!< HSICMU CR: SYNCLVL_4_EN Position        */
#define HSICMU_CR_SYNCLVL_4_EN_Msk            (0x01UL << HSICMU_CR_SYNCLVL_4_EN_Pos)                  /*!< HSICMU CR: SYNCLVL_4_EN Mask            */
#define HSICMU_CR_FERRCNT_EN_Pos              8                                                       /*!< HSICMU CR: FERRCNT_EN Position          */
#define HSICMU_CR_FERRCNT_EN_Msk              (0x01UL << HSICMU_CR_FERRCNT_EN_Pos)                    /*!< HSICMU CR: FERRCNT_EN Mask              */
#define HSICMU_CR_AUTOTRIM_EN_Pos             9                                                       /*!< HSICMU CR: AUTOTRIM_EN Position         */
#define HSICMU_CR_AUTOTRIM_EN_Msk             (0x01UL << HSICMU_CR_AUTOTRIM_EN_Pos)                   /*!< HSICMU CR: AUTOTRIM_EN Mask             */
#define HSICMU_CR_SW_SYNC_Pos                 10                                                      /*!< HSICMU CR: SW_SYNC Position             */
#define HSICMU_CR_SW_SYNC_Msk                 (0x01UL << HSICMU_CR_SW_SYNC_Pos)                       /*!< HSICMU CR: SW_SYNC Mask                 */
#define HSICMU_CR_SET_TIMER_Pos               11                                                      /*!< HSICMU CR: SET_TIMER Position           */
#define HSICMU_CR_SET_TIMER_Msk               (0x01UL << HSICMU_CR_SET_TIMER_Pos)                     /*!< HSICMU CR: SET_TIMER Mask               */
#define HSICMU_CR_SYNC_START_Pos              12                                                      /*!< HSICMU CR: SYNC_START Position          */
#define HSICMU_CR_SYNC_START_Msk              (0x01UL << HSICMU_CR_SYNC_START_Pos)                    /*!< HSICMU CR: SYNC_START Mask              */
#define HSICMU_CR_SET_TRIMVALUE_Pos           13                                                      /*!< HSICMU CR: SET_TRIMVALUE Position       */
#define HSICMU_CR_SET_TRIMVALUE_Msk           (0x01UL << HSICMU_CR_SET_TRIMVALUE_Pos)                 /*!< HSICMU CR: SET_TRIMVALUE Mask           */

/* ---------------------------------  HSICMU_CFG  --------------------------------- */
#define HSICMU_CFG_RELOAD_Pos                 0                                                       /*!< HSICMU CFG: RELOAD Position             */
#define HSICMU_CFG_RELOAD_Msk                 (0x0000ffffUL << HSICMU_CFG_RELOAD_Pos)                 /*!< HSICMU CFG: RELOAD Mask                 */
#define HSICMU_CFG_FETHR_Pos                  16                                                      /*!< HSICMU CFG: FETHR Position              */
#define HSICMU_CFG_FETHR_Msk                  (0x000000ffUL << HSICMU_CFG_FETHR_Pos)                  /*!< HSICMU CFG: FETHR Mask                  */
#define HSICMU_CFG_SYNCDIV_Pos                24                                                      /*!< HSICMU CFG: SYNCDIV Position            */
#define HSICMU_CFG_SYNCDIV_Msk                (0x07UL << HSICMU_CFG_SYNCDIV_Pos)                      /*!< HSICMU CFG: SYNCDIV Mask                */
#define HSICMU_CFG_AC_EN_Pos                  27                                                      /*!< HSICMU CFG: AC_EN Position              */
#define HSICMU_CFG_AC_EN_Msk                  (0x01UL << HSICMU_CFG_AC_EN_Pos)                        /*!< HSICMU CFG: AC_EN Mask                  */
#define HSICMU_CFG_SYNCSRC_Pos                28                                                      /*!< HSICMU CFG: SYNCSRC Position            */
#define HSICMU_CFG_SYNCSRC_Msk                (0x03UL << HSICMU_CFG_SYNCSRC_Pos)                      /*!< HSICMU CFG: SYNCSRC Mask                */
#define HSICMU_CFG_SESYNCPOL_Pos              30                                                      /*!< HSICMU CFG: SESYNCPOL Position          */
#define HSICMU_CFG_SESYNCPOL_Msk              (0x03UL << HSICMU_CFG_SESYNCPOL_Pos)                    /*!< HSICMU CFG: SESYNCPOL Mask              */

/* ---------------------------------  HSICMU_ISR  --------------------------------- */
#define HSICMU_ISR_SYNCLVL_0_Pos              0                                                       /*!< HSICMU ISR: SYNCLVL_0 Position          */
#define HSICMU_ISR_SYNCLVL_0_Msk              (0x01UL << HSICMU_ISR_SYNCLVL_0_Pos)                    /*!< HSICMU ISR: SYNCLVL_0 Mask              */
#define HSICMU_ISR_SYNCLVL_1_Pos              1                                                       /*!< HSICMU ISR: SYNCLVL_1 Position          */
#define HSICMU_ISR_SYNCLVL_1_Msk              (0x01UL << HSICMU_ISR_SYNCLVL_1_Pos)                    /*!< HSICMU ISR: SYNCLVL_1 Mask              */
#define HSICMU_ISR_SYNCLVL_2_Pos              2                                                       /*!< HSICMU ISR: SYNCLVL_2 Position          */
#define HSICMU_ISR_SYNCLVL_2_Msk              (0x01UL << HSICMU_ISR_SYNCLVL_2_Pos)                    /*!< HSICMU ISR: SYNCLVL_2 Mask              */
#define HSICMU_ISR_SYNCLVL_3_Pos              3                                                       /*!< HSICMU ISR: SYNCLVL_3 Position          */
#define HSICMU_ISR_SYNCLVL_3_Msk              (0x01UL << HSICMU_ISR_SYNCLVL_3_Pos)                    /*!< HSICMU ISR: SYNCLVL_3 Mask              */
#define HSICMU_ISR_SYNCLVL_4_Pos              4                                                       /*!< HSICMU ISR: SYNCLVL_4 Position          */
#define HSICMU_ISR_SYNCLVL_4_Msk              (0x01UL << HSICMU_ISR_SYNCLVL_4_Pos)                    /*!< HSICMU ISR: SYNCLVL_4 Mask              */
#define HSICMU_ISR_FECOVF_Pos                 12                                                      /*!< HSICMU ISR: FECOVF Position             */
#define HSICMU_ISR_FECOVF_Msk                 (0x01UL << HSICMU_ISR_FECOVF_Pos)                       /*!< HSICMU ISR: FECOVF Mask                 */
#define HSICMU_ISR_TRIMOVF_Pos                13                                                      /*!< HSICMU ISR: TRIMOVF Position            */
#define HSICMU_ISR_TRIMOVF_Msk                (0x01UL << HSICMU_ISR_TRIMOVF_Pos)                      /*!< HSICMU ISR: TRIMOVF Mask                */
#define HSICMU_ISR_SYNC_FLAG_Pos              14                                                      /*!< HSICMU ISR: SYNC_FLAG Position          */
#define HSICMU_ISR_SYNC_FLAG_Msk              (0x01UL << HSICMU_ISR_SYNC_FLAG_Pos)                    /*!< HSICMU ISR: SYNC_FLAG Mask              */
#define HSICMU_ISR_FECDIR_Pos                 15                                                      /*!< HSICMU ISR: FECDIR Position             */
#define HSICMU_ISR_FECDIR_Msk                 (0x01UL << HSICMU_ISR_FECDIR_Pos)                       /*!< HSICMU ISR: FECDIR Mask                 */

/* ---------------------------------  HSICMU_ICR  --------------------------------- */
#define HSICMU_ICR_SYNCLVL_0_Pos              0                                                       /*!< HSICMU ICR: SYNCLVL_0 Position          */
#define HSICMU_ICR_SYNCLVL_0_Msk              (0x01UL << HSICMU_ICR_SYNCLVL_0_Pos)                    /*!< HSICMU ICR: SYNCLVL_0 Mask              */
#define HSICMU_ICR_SYNCLVL_1_Pos              1                                                       /*!< HSICMU ICR: SYNCLVL_1 Position          */
#define HSICMU_ICR_SYNCLVL_1_Msk              (0x01UL << HSICMU_ICR_SYNCLVL_1_Pos)                    /*!< HSICMU ICR: SYNCLVL_1 Mask              */
#define HSICMU_ICR_SYNCLVL_2_Pos              2                                                       /*!< HSICMU ICR: SYNCLVL_2 Position          */
#define HSICMU_ICR_SYNCLVL_2_Msk              (0x01UL << HSICMU_ICR_SYNCLVL_2_Pos)                    /*!< HSICMU ICR: SYNCLVL_2 Mask              */
#define HSICMU_ICR_SYNCLVL_3_Pos              3                                                       /*!< HSICMU ICR: SYNCLVL_3 Position          */
#define HSICMU_ICR_SYNCLVL_3_Msk              (0x01UL << HSICMU_ICR_SYNCLVL_3_Pos)                    /*!< HSICMU ICR: SYNCLVL_3 Mask              */
#define HSICMU_ICR_SYNCLVL_4_Pos              4                                                       /*!< HSICMU ICR: SYNCLVL_4 Position          */
#define HSICMU_ICR_SYNCLVL_4_Msk              (0x01UL << HSICMU_ICR_SYNCLVL_4_Pos)                    /*!< HSICMU ICR: SYNCLVL_4 Mask              */
#define HSICMU_ICR_SYNC_FLAG_Pos              14                                                      /*!< HSICMU ICR: SYNC_FLAG Position          */
#define HSICMU_ICR_SYNC_FLAG_Msk              (0x01UL << HSICMU_ICR_SYNC_FLAG_Pos)                    /*!< HSICMU ICR: SYNC_FLAG Mask              */

/* ---------------------------------  HSICMU_TRIM  -------------------------------- */
#define HSICMU_TRIM_TRIM_Pos                  0                                                       /*!< HSICMU TRIM: TRIM Position              */
#define HSICMU_TRIM_TRIM_Msk                  (0x000000ffUL << HSICMU_TRIM_TRIM_Pos)                  /*!< HSICMU TRIM: TRIM Mask                  */

/* --------------------------------  HSICMU_ATRIM  -------------------------------- */
#define HSICMU_ATRIM_ATRIM_Pos                0                                                       /*!< HSICMU ATRIM: ATRIM Position            */
#define HSICMU_ATRIM_ATRIM_Msk                (0x000000ffUL << HSICMU_ATRIM_ATRIM_Pos)                /*!< HSICMU ATRIM: ATRIM Mask                */

/* ---------------------------------  HSICMU_CAP  --------------------------------- */
#define HSICMU_CAP_CAP_Pos                    0                                                       /*!< HSICMU CAP: CAP Position                */
#define HSICMU_CAP_CAP_Msk                    (0x0000ffffUL << HSICMU_CAP_CAP_Pos)                    /*!< HSICMU CAP: CAP Mask                    */


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
/* ================          struct 'RTC' Position & Mask          ================ */
/* ================================================================================ */


/* ----------------------------------  RTC_RTCCR  --------------------------------- */
#define RTC_RTCCR_RWAIT_Pos                   0                                                       /*!< RTC RTCCR: RWAIT Position               */
#define RTC_RTCCR_RWAIT_Msk                   (0x01UL << RTC_RTCCR_RWAIT_Pos)                         /*!< RTC RTCCR: RWAIT Mask                   */
#define RTC_RTCCR_RWST_Pos                    1                                                       /*!< RTC RTCCR: RWST Position                */
#define RTC_RTCCR_RWST_Msk                    (0x01UL << RTC_RTCCR_RWST_Pos)                          /*!< RTC RTCCR: RWST Mask                    */
#define RTC_RTCCR_WAFG_Pos                    8                                                       /*!< RTC RTCCR: WAFG Position                */
#define RTC_RTCCR_WAFG_Msk                    (0x01UL << RTC_RTCCR_WAFG_Pos)                          /*!< RTC RTCCR: WAFG Mask                    */
#define RTC_RTCCR_WAIE_Pos                    11                                                      /*!< RTC RTCCR: WAIE Position                */
#define RTC_RTCCR_WAIE_Msk                    (0x01UL << RTC_RTCCR_WAIE_Pos)                          /*!< RTC RTCCR: WAIE Mask                    */
#define RTC_RTCCR_TSFG_Pos                    12                                                      /*!< RTC RTCCR: TSFG Position                */
#define RTC_RTCCR_TSFG_Msk                    (0x01UL << RTC_RTCCR_TSFG_Pos)                          /*!< RTC RTCCR: TSFG Mask                    */
#define RTC_RTCCR_TS_EDGE_SEL_Pos             13                                                      /*!< RTC RTCCR: TS_EDGE_SEL Position         */
#define RTC_RTCCR_TS_EDGE_SEL_Msk             (0x03UL << RTC_RTCCR_TS_EDGE_SEL_Pos)                   /*!< RTC RTCCR: TS_EDGE_SEL Mask             */
#define RTC_RTCCR_TSEN_Pos                    15                                                      /*!< RTC RTCCR: TSEN Position                */
#define RTC_RTCCR_TSEN_Msk                    (0x01UL << RTC_RTCCR_TSEN_Pos)                          /*!< RTC RTCCR: TSEN Mask                    */
#define RTC_RTCCR_RIFG_Pos                    16                                                      /*!< RTC RTCCR: RIFG Position                */
#define RTC_RTCCR_RIFG_Msk                    (0x01UL << RTC_RTCCR_RIFG_Pos)                          /*!< RTC RTCCR: RIFG Mask                    */
#define RTC_RTCCR_CT_Pos                      17                                                      /*!< RTC RTCCR: CT Position                  */
#define RTC_RTCCR_CT_Msk                      (0x07UL << RTC_RTCCR_CT_Pos)                            /*!< RTC RTCCR: CT Mask                      */
#define RTC_RTCCR_AMPM_Pos                    20                                                      /*!< RTC RTCCR: AMPM Position                */
#define RTC_RTCCR_AMPM_Msk                    (0x01UL << RTC_RTCCR_AMPM_Pos)                          /*!< RTC RTCCR: AMPM Mask                    */
#define RTC_RTCCR_RTCE_Pos                    30                                                      /*!< RTC RTCCR: RTCE Position                */
#define RTC_RTCCR_RTCE_Msk                    (0x01UL << RTC_RTCCR_RTCE_Pos)                          /*!< RTC RTCCR: RTCE Mask                    */
#define RTC_RTCCR_RTCEN_Pos                   31                                                      /*!< RTC RTCCR: RTCEN Position               */
#define RTC_RTCCR_RTCEN_Msk                   (0x01UL << RTC_RTCCR_RTCEN_Pos)                         /*!< RTC RTCCR: RTCEN Mask                   */

/* ---------------------------------  RTC_ERRCOR  --------------------------------- */
#define RTC_ERRCOR_CORDATA_Pos                0                                                       /*!< RTC ERRCOR: CORDATA Position            */
#define RTC_ERRCOR_CORDATA_Msk                (0x0fffffffUL << RTC_ERRCOR_CORDATA_Pos)                /*!< RTC ERRCOR: CORDATA Mask                */
#define RTC_ERRCOR_COREN_Pos                  28                                                      /*!< RTC ERRCOR: COREN Position              */
#define RTC_ERRCOR_COREN_Msk                  (0x01UL << RTC_ERRCOR_COREN_Pos)                        /*!< RTC ERRCOR: COREN Mask                  */
#define RTC_ERRCOR_DIR_Pos                    30                                                      /*!< RTC ERRCOR: DIR Position                */
#define RTC_ERRCOR_DIR_Msk                    (0x01UL << RTC_ERRCOR_DIR_Pos)                          /*!< RTC ERRCOR: DIR Mask                    */
#define RTC_ERRCOR_DEV_Pos                    31                                                      /*!< RTC ERRCOR: DEV Position                */
#define RTC_ERRCOR_DEV_Msk                    (0x01UL << RTC_ERRCOR_DEV_Pos)                          /*!< RTC ERRCOR: DEV Mask                    */

/* -----------------------------------  RTC_SEC  ---------------------------------- */
#define RTC_SEC_SEC_Pos                       0                                                       /*!< RTC SEC: SEC Position                   */
#define RTC_SEC_SEC_Msk                       (0x7fUL << RTC_SEC_SEC_Pos)                             /*!< RTC SEC: SEC Mask                       */

/* -----------------------------------  RTC_MIN  ---------------------------------- */
#define RTC_MIN_MIN_Pos                       0                                                       /*!< RTC MIN: MIN Position                   */
#define RTC_MIN_MIN_Msk                       (0x7fUL << RTC_MIN_MIN_Pos)                             /*!< RTC MIN: MIN Mask                       */

/* ----------------------------------  RTC_HOUR  ---------------------------------- */
#define RTC_HOUR_HOUR_Pos                     0                                                       /*!< RTC HOUR: HOUR Position                 */
#define RTC_HOUR_HOUR_Msk                     (0x3fUL << RTC_HOUR_HOUR_Pos)                           /*!< RTC HOUR: HOUR Mask                     */

/* -----------------------------------  RTC_DAY  ---------------------------------- */
#define RTC_DAY_DAY_Pos                       0                                                       /*!< RTC DAY: DAY Position                   */
#define RTC_DAY_DAY_Msk                       (0x3fUL << RTC_DAY_DAY_Pos)                             /*!< RTC DAY: DAY Mask                       */

/* ----------------------------------  RTC_WEEK  ---------------------------------- */
#define RTC_WEEK_WEEK_Pos                     0                                                       /*!< RTC WEEK: WEEK Position                 */
#define RTC_WEEK_WEEK_Msk                     (0x07UL << RTC_WEEK_WEEK_Pos)                           /*!< RTC WEEK: WEEK Mask                     */

/* ----------------------------------  RTC_MONTH  --------------------------------- */
#define RTC_MONTH_MONTH_Pos                   0                                                       /*!< RTC MONTH: MONTH Position               */
#define RTC_MONTH_MONTH_Msk                   (0x1fUL << RTC_MONTH_MONTH_Pos)                         /*!< RTC MONTH: MONTH Mask                   */

/* ----------------------------------  RTC_YEAR  ---------------------------------- */
#define RTC_YEAR_YEAR_Pos                     0                                                       /*!< RTC YEAR: YEAR Position                 */
#define RTC_YEAR_YEAR_Msk                     (0x000000ffUL << RTC_YEAR_YEAR_Pos)                     /*!< RTC YEAR: YEAR Mask                     */

/* ---------------------------------  RTC_ALARMWM  -------------------------------- */
#define RTC_ALARMWM_ALARMWM_Pos               0                                                       /*!< RTC ALARMWM: ALARMWM Position           */
#define RTC_ALARMWM_ALARMWM_Msk               (0x7fUL << RTC_ALARMWM_ALARMWM_Pos)                     /*!< RTC ALARMWM: ALARMWM Mask               */
#define RTC_ALARMWM_ALARMWH_Pos               8                                                       /*!< RTC ALARMWM: ALARMWH Position           */
#define RTC_ALARMWM_ALARMWH_Msk               (0x3fUL << RTC_ALARMWM_ALARMWH_Pos)                     /*!< RTC ALARMWM: ALARMWH Mask               */
#define RTC_ALARMWM_ALARMWW_Pos               16                                                      /*!< RTC ALARMWM: ALARMWW Position           */
#define RTC_ALARMWM_ALARMWW_Msk               (0x7fUL << RTC_ALARMWM_ALARMWW_Pos)                     /*!< RTC ALARMWM: ALARMWW Mask               */

/* ----------------------------------  RTC_SUBDR  --------------------------------- */
#define RTC_SUBDR_SUBDR_Pos                   0                                                       /*!< RTC SUBDR: SUBDR Position               */
#define RTC_SUBDR_SUBDR_Msk                   (0xffffffffUL << RTC_SUBDR_SUBDR_Pos)                   /*!< RTC SUBDR: SUBDR Mask                   */

/* ---------------------------------  RTC_TIME_TS  -------------------------------- */
#define RTC_TIME_TS_SEC_TS_Pos                0                                                       /*!< RTC TIME_TS: SEC_TS Position            */
#define RTC_TIME_TS_SEC_TS_Msk                (0x000000ffUL << RTC_TIME_TS_SEC_TS_Pos)                /*!< RTC TIME_TS: SEC_TS Mask                */
#define RTC_TIME_TS_MIN_TS_Pos                8                                                       /*!< RTC TIME_TS: MIN_TS Position            */
#define RTC_TIME_TS_MIN_TS_Msk                (0x000000ffUL << RTC_TIME_TS_MIN_TS_Pos)                /*!< RTC TIME_TS: MIN_TS Mask                */
#define RTC_TIME_TS_HOUR_TS_Pos               16                                                      /*!< RTC TIME_TS: HOUR_TS Position           */
#define RTC_TIME_TS_HOUR_TS_Msk               (0x000000ffUL << RTC_TIME_TS_HOUR_TS_Pos)               /*!< RTC TIME_TS: HOUR_TS Mask               */

/* ---------------------------------  RTC_DATE_TS  -------------------------------- */
#define RTC_DATE_TS_DAY_TS_Pos                0                                                       /*!< RTC DATE_TS: DAY_TS Position            */
#define RTC_DATE_TS_DAY_TS_Msk                (0x000000ffUL << RTC_DATE_TS_DAY_TS_Pos)                /*!< RTC DATE_TS: DAY_TS Mask                */
#define RTC_DATE_TS_WEEK_TS_Pos               8                                                       /*!< RTC DATE_TS: WEEK_TS Position           */
#define RTC_DATE_TS_WEEK_TS_Msk               (0x000000ffUL << RTC_DATE_TS_WEEK_TS_Pos)               /*!< RTC DATE_TS: WEEK_TS Mask               */
#define RTC_DATE_TS_MONTH_TS_Pos              16                                                      /*!< RTC DATE_TS: MONTH_TS Position          */
#define RTC_DATE_TS_MONTH_TS_Msk              (0x000000ffUL << RTC_DATE_TS_MONTH_TS_Pos)              /*!< RTC DATE_TS: MONTH_TS Mask              */
#define RTC_DATE_TS_YEAR_TS_Pos               24                                                      /*!< RTC DATE_TS: YEAR_TS Position           */
#define RTC_DATE_TS_YEAR_TS_Msk               (0x000000ffUL << RTC_DATE_TS_YEAR_TS_Pos)               /*!< RTC DATE_TS: YEAR_TS Mask               */

/* ---------------------------------  RTC_BKUPDR1  -------------------------------- */
#define RTC_BKUPDR1_BKUPDR_Pos                0                                                       /*!< RTC BKUPDR1: BKUPDR Position            */
#define RTC_BKUPDR1_BKUPDR_Msk                (0xffffffffUL << RTC_BKUPDR1_BKUPDR_Pos)                /*!< RTC BKUPDR1: BKUPDR Mask                */

/* ---------------------------------  RTC_BKUPDR2  -------------------------------- */
#define RTC_BKUPDR2_BKUPDR_Pos                0                                                       /*!< RTC BKUPDR2: BKUPDR Position            */
#define RTC_BKUPDR2_BKUPDR_Msk                (0xffffffffUL << RTC_BKUPDR2_BKUPDR_Pos)                /*!< RTC BKUPDR2: BKUPDR Mask                */

/* ---------------------------------  RTC_BKUPDR3  -------------------------------- */
#define RTC_BKUPDR3_BKUPDR_Pos                0                                                       /*!< RTC BKUPDR3: BKUPDR Position            */
#define RTC_BKUPDR3_BKUPDR_Msk                (0xffffffffUL << RTC_BKUPDR3_BKUPDR_Pos)                /*!< RTC BKUPDR3: BKUPDR Mask                */

/* ---------------------------------  RTC_BKUPDR4  -------------------------------- */
#define RTC_BKUPDR4_BKUPDR_Pos                0                                                       /*!< RTC BKUPDR4: BKUPDR Position            */
#define RTC_BKUPDR4_BKUPDR_Msk                (0xffffffffUL << RTC_BKUPDR4_BKUPDR_Pos)                /*!< RTC BKUPDR4: BKUPDR Mask                */

/* ---------------------------------  RTC_RTCPFCR  -------------------------------- */
#define RTC_RTCPFCR_PC13WKUEN_Pos             0                                                       /*!< RTC RTCPFCR: PC13WKUEN Position         */
#define RTC_RTCPFCR_PC13WKUEN_Msk             (0x01UL << RTC_RTCPFCR_PC13WKUEN_Pos)                   /*!< RTC RTCPFCR: PC13WKUEN Mask             */
#define RTC_RTCPFCR_PC13VALUE_Pos             1                                                       /*!< RTC RTCPFCR: PC13VALUE Position         */
#define RTC_RTCPFCR_PC13VALUE_Msk             (0x01UL << RTC_RTCPFCR_PC13VALUE_Pos)                   /*!< RTC RTCPFCR: PC13VALUE Mask             */
#define RTC_RTCPFCR_PC13MODE_Pos              2                                                       /*!< RTC RTCPFCR: PC13MODE Position          */
#define RTC_RTCPFCR_PC13MODE_Msk              (0x03UL << RTC_RTCPFCR_PC13MODE_Pos)                    /*!< RTC RTCPFCR: PC13MODE Mask              */
#define RTC_RTCPFCR_PC14VALUE_Pos             4                                                       /*!< RTC RTCPFCR: PC14VALUE Position         */
#define RTC_RTCPFCR_PC14VALUE_Msk             (0x01UL << RTC_RTCPFCR_PC14VALUE_Pos)                   /*!< RTC RTCPFCR: PC14VALUE Mask             */
#define RTC_RTCPFCR_PC14MODE_Pos              5                                                       /*!< RTC RTCPFCR: PC14MODE Position          */
#define RTC_RTCPFCR_PC14MODE_Msk              (0x01UL << RTC_RTCPFCR_PC14MODE_Pos)                    /*!< RTC RTCPFCR: PC14MODE Mask              */
#define RTC_RTCPFCR_PC15VALUE_Pos             6                                                       /*!< RTC RTCPFCR: PC15VALUE Position         */
#define RTC_RTCPFCR_PC15VALUE_Msk             (0x01UL << RTC_RTCPFCR_PC15VALUE_Pos)                   /*!< RTC RTCPFCR: PC15VALUE Mask             */
#define RTC_RTCPFCR_PC15MODE_Pos              7                                                       /*!< RTC RTCPFCR: PC15MODE Position          */
#define RTC_RTCPFCR_PC15MODE_Msk              (0x01UL << RTC_RTCPFCR_PC15MODE_Pos)                    /*!< RTC RTCPFCR: PC15MODE Mask              */
#define RTC_RTCPFCR_PC13WKPOL_Pos             9                                                       /*!< RTC RTCPFCR: PC13WKPOL Position         */
#define RTC_RTCPFCR_PC13WKPOL_Msk             (0x03UL << RTC_RTCPFCR_PC13WKPOL_Pos)                   /*!< RTC RTCPFCR: PC13WKPOL Mask             */
#define RTC_RTCPFCR_PC13WK_EDGE_Pos           10                                                      /*!< RTC RTCPFCR: PC13WK_EDGE Position       */
#define RTC_RTCPFCR_PC13WK_EDGE_Msk           (0x01UL << RTC_RTCPFCR_PC13WK_EDGE_Pos)                 /*!< RTC RTCPFCR: PC13WK_EDGE Mask           */


/* ================================================================================ */
/* ================          struct 'TEMP' Position & Mask         ================ */
/* ================================================================================ */


/* -------------------------------  TEMP_TSENSECON  ------------------------------- */
#define TEMP_TSENSECON_TSSEN_Pos              0                                                       /*!< TEMP TSENSECON: TSSEN Position          */
#define TEMP_TSENSECON_TSSEN_Msk              (0x01UL << TEMP_TSENSECON_TSSEN_Pos)                    /*!< TEMP TSENSECON: TSSEN Mask              */
#define TEMP_TSENSECON_TSSTART_Pos            1                                                       /*!< TEMP TSENSECON: TSSTART Position        */
#define TEMP_TSENSECON_TSSTART_Msk            (0x01UL << TEMP_TSENSECON_TSSTART_Pos)                  /*!< TEMP TSENSECON: TSSTART Mask            */
#define TEMP_TSENSECON_TSSFLAG_Pos            2                                                       /*!< TEMP TSENSECON: TSSFLAG Position        */
#define TEMP_TSENSECON_TSSFLAG_Msk            (0x01UL << TEMP_TSENSECON_TSSFLAG_Pos)                  /*!< TEMP TSENSECON: TSSFLAG Mask            */
#define TEMP_TSENSECON_TSSINTEN_Pos           3                                                       /*!< TEMP TSENSECON: TSSINTEN Position       */
#define TEMP_TSENSECON_TSSINTEN_Msk           (0x01UL << TEMP_TSENSECON_TSSINTEN_Pos)                 /*!< TEMP TSENSECON: TSSINTEN Mask           */

/* ------------------------------  TEMP_TSREFPEROID  ------------------------------ */
#define TEMP_TSREFPEROID_TSREFPERIOD_Pos      0                                                       /*!< TEMP TSREFPEROID: TSREFPERIOD Position  */
#define TEMP_TSREFPEROID_TSREFPERIOD_Msk      (0x000fffffUL << TEMP_TSREFPEROID_TSREFPERIOD_Pos)      /*!< TEMP TSREFPEROID: TSREFPERIOD Mask      */

/* -------------------------------  TEMP_TSSENSECNT  ------------------------------ */
#define TEMP_TSSENSECNT_TSSENSECNT_Pos        0                                                       /*!< TEMP TSSENSECNT: TSSENSECNT Position    */
#define TEMP_TSSENSECNT_TSSENSECNT_Msk        (0x0000ffffUL << TEMP_TSSENSECNT_TSSENSECNT_Pos)        /*!< TEMP TSSENSECNT: TSSENSECNT Mask        */



/* ================================================================================ */
/* ================              Peripheral memory map             ================ */
/* ================================================================================ */

#define SCU_BASE                        0x40000000UL
#define SCUCC_BASE                      0x4000F000UL
#define SCULV_BASE                      0x40005100UL
#define PA_BASE                         0x40001000UL
#define PB_BASE                         0x40001100UL
#define PC_BASE                         0x40001200UL
#define PF_BASE                         0x40001500UL
#define PCU_BASE                        0x40001FF0UL
#define FMC_BASE                        0x40000100UL
#define DMAC0_BASE                      0x40000400UL
#define DMAC1_BASE                      0x40000410UL
#define DMAC2_BASE                      0x40000420UL
#define DMAC3_BASE                      0x40000430UL
#define EBI_BASE                        0x40006200UL
#define WDT_BASE                        0x40001A00UL
#define WT_BASE                         0x40002000UL
#define TIMER10_BASE                    0x40002100UL
#define TIMER11_BASE                    0x40002200UL
#define TIMER12_BASE                    0x40002300UL
#define TIMER13_BASE                    0x40002700UL
#define TIMER20_BASE                    0x40002500UL
#define TIMER21_BASE                    0x40002600UL
#define TIMER30_BASE                    0x40002400UL
#define TIMER40_BASE                    0x40002800UL
#define USART10_BASE                    0x40003800UL
#define USART11_BASE                    0x40003900UL
#define USART12_BASE                    0x40003A00UL
#define USART13_BASE                    0x40003B00UL
#define I2C0_BASE                       0x40004800UL
#define I2C1_BASE                       0x40004900UL
#define SPI20_BASE                      0x40004C00UL
#define SPI21_BASE                      0x40004D00UL
#define ADC_BASE                        0x40003000UL
#define DAC_BASE                        0x40003500UL
#define COMP_BASE                       0x40003420UL
#define CRC_BASE                        0x40000300UL
#define HSICMU_BASE                     0x40002B00UL
#define USB_BASE                        0x50000000UL
#define RTC_BASE                        0x40006100UL
#define TEMP_BASE                       0x40006300UL


/* ================================================================================ */
/* ================             Peripheral declaration             ================ */
/* ================================================================================ */

#define SCU                             ((SCU_Type                *) SCU_BASE)
#define SCUCC                           ((SCUCC_Type              *) SCUCC_BASE)
#define SCULV                           ((SCULV_Type              *) SCULV_BASE)
#define PA                              ((PORT_Type               *) PA_BASE)
#define PB                              ((PORT_Type               *) PB_BASE)
#define PC                              ((PORT_Type               *) PC_BASE)
#define PF                              ((PF_Type                 *) PF_BASE)
#define PCU                             ((PCU_Type                *) PCU_BASE)
#define FMC                             ((FMC_Type                *) FMC_BASE)
#define DMAC0                           ((DMAC0_Type              *) DMAC0_BASE)
#define DMAC1                           ((DMAC0_Type              *) DMAC1_BASE)
#define DMAC2                           ((DMAC0_Type              *) DMAC2_BASE)
#define DMAC3                           ((DMAC0_Type              *) DMAC3_BASE)
#define EBI                             ((EBI_Type                *) EBI_BASE)
#define WDT                             ((WDT_Type                *) WDT_BASE)
#define WT                              ((WT_Type                 *) WT_BASE)
#define TIMER10                         ((TIMER1n_Type            *) TIMER10_BASE)
#define TIMER11                         ((TIMER1n_Type            *) TIMER11_BASE)
#define TIMER12                         ((TIMER1n_Type            *) TIMER12_BASE)
#define TIMER13                         ((TIMER1n_Type            *) TIMER13_BASE)
#define TIMER20                         ((TIMER20_Type            *) TIMER20_BASE)
#define TIMER21                         ((TIMER20_Type            *) TIMER21_BASE)
#define TIMER30                         ((TIMER30_Type            *) TIMER30_BASE)
#define TIMER40                         ((TIMER40_Type            *) TIMER40_BASE)
#define USART10                         ((USART_Type              *) USART10_BASE)
#define USART11                         ((USART_Type              *) USART11_BASE)
#define USART12                         ((USART_Type              *) USART12_BASE)
#define USART13                         ((USART_Type              *) USART13_BASE)
#define I2C0                            ((I2C0_Type               *) I2C0_BASE)
#define I2C1                            ((I2C0_Type               *) I2C1_BASE)
#define SPI20                           ((SPI20_Type              *) SPI20_BASE)
#define SPI21                           ((SPI20_Type              *) SPI21_BASE)
#define ADC                             ((ADC_Type                *) ADC_BASE)
#define DAC                             ((DAC_Type                *) DAC_BASE)
#define COMP                            ((COMP_Type               *) COMP_BASE)
#define CRC                             ((CRC_Type                *) CRC_BASE)
#define HSICMU                          ((HSICMU_Type             *) HSICMU_BASE)
#define USB                             ((USB_Type                *) USB_BASE)
#define RTC                             ((RTC_Type                *) RTC_BASE)
#define TEMP                            ((TEMP_Type               *) TEMP_BASE)


/** @} */ /* End of group Device_Peripheral_Registers */
/** @} */ /* End of group A31G32x */
/** @} */ /* End of group VENDOR ABOV Semiconductor Co., Ltd. */

#ifdef __cplusplus
}
#endif


#endif  /* A31G32X_H */

