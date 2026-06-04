
/****************************************************************************************************//**
 * @file     A34M41x.h
 *
 * @brief    CMSIS Cortex-M4 Peripheral Access Layer Header File for
 *           A34M41x from ABOV Semiconductor Co., Ltd..
 *
 * @version  V1.0
 * @date     7. May 2019
 *
 * @note     Generated with SVDConv V2.85b 
 *           from CMSIS SVD File 'A34M41x.svd' Version 1.0,
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

/** @addtogroup A34M41x
  * @{
  */

#ifndef A34M41x_H
#define A34M41x_H

#ifdef __cplusplus
extern "C" {
#endif


/* -------------------------  Interrupt Number Definition  ------------------------ */

typedef enum {
/* -------------------  Cortex-M4 Processor Exceptions Numbers  ------------------- */
  Reset_IRQn                    = -15,              /*!<   1  Reset Vector, invoked on Power up and warm reset                 */
  NonMaskableInt_IRQn           = -14,              /*!<   2  Non maskable Interrupt, cannot be stopped or preempted           */
  HardFault_IRQn                = -13,              /*!<   3  Hard Fault, all classes of Fault                                 */
  MemoryManagement_IRQn         = -12,              /*!<   4  Memory Management, MPU mismatch, including Access Violation
                                                         and No Match                                                          */
  BusFault_IRQn                 = -11,              /*!<   5  Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory
                                                         related Fault                                                         */
  UsageFault_IRQn               = -10,              /*!<   6  Usage Fault, i.e. Undef Instruction, Illegal State Transition    */
  SVCall_IRQn                   =  -5,              /*!<  11  System Service Call via SVC instruction                          */
  DebugMonitor_IRQn             =  -4,              /*!<  12  Debug Monitor                                                    */
  PendSV_IRQn                   =  -2,              /*!<  14  Pendable request for system service                              */
  SysTick_IRQn                  =  -1,              /*!<  15  System Tick Timer                                                */
/* ---------------------  A34M41x Specific Interrupt Numbers  --------------------- */
  LVI_IRQn                      =   0,              /*!<   0  LVI                                                              */
  SYSCLKFAIL_IRQn               =   1,              /*!<   1  SYSCLKFAIL                                                       */
  HSEFAIL_IRQn                  =   2,              /*!<   2  HSEFAIL                                                          */
  LSEFAIL_IRQn                  =   3,              /*!<   3  LSEFAIL                                                          */
  WDT_IRQn                      =   6,              /*!<   6  WDT                                                              */
  FRT0_IRQn                     =   8,              /*!<   8  FRT0                                                             */
  FRT1_IRQn                     =   9,              /*!<   9  FRT1                                                             */
  CFMC_IRQn                     =  11,              /*!<  11  CFMC                                                             */
  DFMC_IRQn                     =  12,              /*!<  12  DFMC                                                             */
  TIMER0_IRQn                   =  15,              /*!<  15  TIMER0                                                           */
  TIMER1_IRQn                   =  16,              /*!<  16  TIMER1                                                           */
  TIMER2_IRQn                   =  17,              /*!<  17  TIMER2                                                           */
  TIMER3_IRQn                   =  18,              /*!<  18  TIMER3                                                           */
  TIMER4_IRQn                   =  19,              /*!<  19  TIMER4                                                           */
  TIMER5_IRQn                   =  20,              /*!<  20  TIMER5                                                           */
  TIMER6_IRQn                   =  21,              /*!<  21  TIMER6                                                           */
  TIMER7_IRQn                   =  22,              /*!<  22  TIMER7                                                           */
  TIMER8_IRQn                   =  23,              /*!<  23  TIMER8                                                           */
  TIMER9_IRQn                   =  24,              /*!<  24  TIMER9                                                           */
  RNG_IRQn                      =  27,              /*!<  27  RNG                                                              */
  AES128_IRQn                   =  28,              /*!<  28  AES128                                                           */
  QEI0_IRQn                     =  31,              /*!<  31  QEI0                                                             */
  QEI1_IRQn                     =  32,              /*!<  32  QEI1                                                             */
  GPIOA_IRQn                    =  36,              /*!<  36  GPIOA                                                            */
  GPIOB_IRQn                    =  37,              /*!<  37  GPIOB                                                            */
  GPIOC_IRQn                    =  38,              /*!<  38  GPIOC                                                            */
  GPIOD_IRQn                    =  39,              /*!<  39  GPIOD                                                            */
  GPIOE_IRQn                    =  40,              /*!<  40  GPIOE                                                            */
  GPIOF_IRQn                    =  41,              /*!<  41  GPIOF                                                            */
  GPIOG_IRQn                    =  42,              /*!<  42  GPIOG                                                            */
  MPWM0PROT_IRQn                =  45,              /*!<  45  MPWM0PROT                                                        */
  MPWM0OVV_IRQn                 =  46,              /*!<  46  MPWM0OVV                                                         */
  MPWM0U_IRQn                   =  47,              /*!<  47  MPWM0U                                                           */
  MPWM0V_IRQn                   =  48,              /*!<  48  MPWM0V                                                           */
  MPWM0W_IRQn                   =  49,              /*!<  49  MPWM0W                                                           */
  MPWM1PROT_IRQn                =  50,              /*!<  50  MPWM1PROT                                                        */
  MPWM1OVV_IRQn                 =  51,              /*!<  51  MPWM1OVV                                                         */
  MPWM1U_IRQn                   =  52,              /*!<  52  MPWM1U                                                           */
  MPWM1V_IRQn                   =  53,              /*!<  53  MPWM1V                                                           */
  MPWM1W_IRQn                   =  54,              /*!<  54  MPWM1W                                                           */
  SPI0_IRQn                     =  55,              /*!<  55  SPI0                                                             */
  SPI1_IRQn                     =  56,              /*!<  56  SPI1                                                             */
  SPI2_IRQn                     =  57,              /*!<  57  SPI2                                                             */
  I2C0_IRQn                     =  60,              /*!<  60  I2C0                                                             */
  I2C1_IRQn                     =  61,              /*!<  61  I2C1                                                             */
  UART0_IRQn                    =  63,              /*!<  63  UART0                                                            */
  UART1_IRQn                    =  64,              /*!<  64  UART1                                                            */
  UART2_IRQn                    =  65,              /*!<  65  UART2                                                            */
  UART3_IRQn                    =  66,              /*!<  66  UART3                                                            */
  UART4_IRQn                    =  67,              /*!<  67  UART4                                                            */
  UART5_IRQn                    =  68,              /*!<  68  UART5                                                            */
  CAN_IRQn                      =  71,              /*!<  71  CAN                                                              */
  ADC0_IRQn                     =  74,              /*!<  74  ADC0                                                             */
  ADC1_IRQn                     =  75,              /*!<  75  ADC1                                                             */
  ADC2_IRQn                     =  76,              /*!<  76  ADC2                                                             */
  COMP0_IRQn                    =  79,              /*!<  79  COMP0                                                            */
  COMP1_IRQn                    =  80,              /*!<  80  COMP1                                                            */
  COMP2_IRQn                    =  81,              /*!<  81  COMP2                                                            */
  COMP3_IRQn                    =  82,              /*!<  82  COMP3                                                            */
  CRC_IRQn                      =  85               /*!<  85  CRC                                                              */
} IRQn_Type;


/** @addtogroup Configuration_of_CMSIS
  * @{
  */


/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

/* ----------------Configuration of the Cortex-M4 Processor and Core Peripherals---------------- */
#define __CM4_REV                 0x0001            /*!< Cortex-M4 Core Revision                                               */
#define __MPU_PRESENT                  1            /*!< MPU present or not                                                    */
#define __NVIC_PRIO_BITS               4            /*!< Number of Bits used for Priority Levels                               */
#define __Vendor_SysTickConfig         0            /*!< Set to 1 if different SysTick Config is used                          */
#define __FPU_PRESENT                  1            /*!< FPU present or not                                                    */
/** @} */ /* End of group Configuration_of_CMSIS */

#include "core_cm4.h"                               /*!< Cortex-M4 processor and core peripherals                              */
// Note: Changed for MikroE implementation.
//#include "system_A34M41x.h"                         /*!< A34M41x System                                                        */
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
/* ================                   CHIPCONFIG                   ================ */
/* ================================================================================ */


/**
  * @brief Chip Configuration Data (CHIPCONFIG)
  */

typedef struct {                                    /*!< (@ 0x4000F000) CHIPCONFIG Structure                                   */
  __I  uint32_t  VENDORID;                          /*!< (@ 0x4000F000) Vendor ID Register                                     */
  __I  uint32_t  CHIPID;                            /*!< (@ 0x4000F004) Chip ID Register                                       */
  __I  uint32_t  REVNR;                             /*!< (@ 0x4000F008) Revision Number Register                               */
} CHIPCONFIG_Type;


/* ================================================================================ */
/* ================                       SCU                      ================ */
/* ================================================================================ */


/**
  * @brief System Control Unit (SCU)
  */

typedef struct {                                    /*!< (@ 0x40000000) SCU Structure                                          */
  __I  uint32_t  RESERVED;
  __IO uint32_t  SMR;                               /*!< (@ 0x40000004) System Mode Register                                   */
  __IO uint32_t  SRCR;                              /*!< (@ 0x40000008) System reset control Register                          */
  __I  uint32_t  RESERVED1;
  __IO uint32_t  WUER;                              /*!< (@ 0x40000010) Wake-up Source Setting Register                        */
  __I  uint32_t  WUSR;                              /*!< (@ 0x40000014) Wake-up Source Status Register                         */
  __IO uint32_t  RSER;                              /*!< (@ 0x40000018) Reset Source Setting Register                          */
  __IO uint32_t  RSSR;                              /*!< (@ 0x4000001C) Reset Source Status Register                           */
  __IO uint32_t  PRER1;                             /*!< (@ 0x40000020) Peripheral Reset Setting Register1                     */
  __IO uint32_t  PRER2;                             /*!< (@ 0x40000024) Peripheral Reset Setting Register2                     */
  __IO uint32_t  PER1;                              /*!< (@ 0x40000028) Peripheral Enable Register1                            */
  __IO uint32_t  PER2;                              /*!< (@ 0x4000002C) Peripheral Enable Register2                            */
  __IO uint32_t  PCER1;                             /*!< (@ 0x40000030) Peripheral Clock Enable Register1                      */
  __IO uint32_t  PCER2;                             /*!< (@ 0x40000034) Peripheral Clock Enable Register2                      */
  __I  uint32_t  RESERVED2[2];
  __IO uint32_t  CSCR;                              /*!< (@ 0x40000040) Clock Source Control Register                          */
  __IO uint32_t  SCCR;                              /*!< (@ 0x40000044) System clock control register                          */
  __IO uint32_t  CMR;                               /*!< (@ 0x40000048) Clock Monitoring Register                              */
  __I  uint32_t  RESERVED3;
  __IO uint32_t  COR;                               /*!< (@ 0x40000050) Clock Output Setting Register                          */
  __IO uint32_t  NMICR;                             /*!< (@ 0x40000054) NMI Control Register                                   */
  __IO uint32_t  NMISR;                             /*!< (@ 0x40000058) NMI Status Register                                    */
  __I  uint32_t  RESERVED4;
  __IO uint32_t  PLLCON;                            /*!< (@ 0x40000060) PLL Control Register                                   */
  __IO uint32_t  VDCCON;                            /*!< (@ 0x40000064) VDC Control Register                                   */
  __IO uint32_t  LVICR;                             /*!< (@ 0x40000068) Low Voltage Indicator Control Register                 */
  __IO uint32_t  LVISR;                             /*!< (@ 0x4000006C) Low Voltage Indicator Status Register                  */
  __IO uint32_t  LVRCR;                             /*!< (@ 0x40000070) Low Voltage Reset Control Register                     */
  __I  uint32_t  RESERVED5[3];
  __IO uint32_t  EOSCR;                             /*!< (@ 0x40000080) External Oscillator Control Register                   */
  __I  uint32_t  RESERVED6[3];
  __IO uint32_t  MCCR1;                             /*!< (@ 0x40000090) MISC Clock Control Register1                           */
  __IO uint32_t  MCCR2;                             /*!< (@ 0x40000094) MISC Clock Control Register2                           */
  __IO uint32_t  MCCR3;                             /*!< (@ 0x40000098) MISC Clock Control Register3                           */
  __IO uint32_t  MCCR4;                             /*!< (@ 0x4000009C) MISC Clock Control Register4                           */
  __IO uint32_t  MCCR5;                             /*!< (@ 0x400000A0) MISC Clock Control Register5                           */
  __IO uint32_t  MCCR6;                             /*!< (@ 0x400000A4) MISC Clock Control Register6                           */
  __IO uint32_t  MCCR7;                             /*!< (@ 0x400000A8) MISC Clock Control Register7                           */
  __I  uint32_t  RESERVED7[17];
  __IO uint32_t  SYSTEN;                            /*!< (@ 0x400000F0) System Access Key Register                             */
} SCU_Type;


/* ================================================================================ */
/* ================                       PCU                       ================ */
/* ================================================================================ */


/**
  * @brief General Port A (PCU)
  */

typedef struct {                                    /*!< (@ 0x40001000) PA Structure                                           */
  __IO uint32_t  MR1;                               /*!< (@ 0x40001000) Port n MUX1 Selection Register                         */
  __IO uint32_t  MR2;                               /*!< (@ 0x40001004) Port n MUX2 Selection Register                         */
  __IO uint32_t  CR;                                /*!< (@ 0x40001008) Port n Type Selection Register                         */
  __IO uint32_t  PRCR;                              /*!< (@ 0x4000100C) Port n Pull-up/down Selection Register                 */
  __IO uint32_t  DER;                               /*!< (@ 0x40001010) Port n Debounce Enable Register                        */
  __IO uint32_t  STR;                               /*!< (@ 0x40001014) Port n Strength Selection Register                     */
  __I  uint32_t  RESERVED[2];
  __IO uint32_t  IER;                               /*!< (@ 0x40001020) Port n Interrupt Enable Register                       */
  __IO uint32_t  ISR;                               /*!< (@ 0x40001024) Port n Interrupt Status Register                       */
  __IO uint32_t  ICR;                               /*!< (@ 0x40001028) Port n Interrupt Control Register                      */
  __I  uint32_t  RESERVED1;
  __IO uint32_t  ODR;                               /*!< (@ 0x40001030) Port n Output Data Register                            */
  __I  uint32_t  IDR;                               /*!< (@ 0x40001034) Port n Input Data Register                             */
  __O  uint32_t  PSR;                               /*!< (@ 0x40001038) Port n Bit Set Register                                */
  __O  uint32_t  PCR;                               /*!< (@ 0x4000103C) Port n Bit Clear Register                              */
} PCU_Type;


/* ================================================================================ */
/* ================                     PORTEN                     ================ */
/* ================================================================================ */


/**
  * @brief General Port Access Enable (PORTEN)
  */

typedef struct {                                    /*!< (@ 0x40001FF0) PORTEN Structure                                       */
  __O  uint32_t  EN;                                /*!< (@ 0x40001FF0) Port Access Enable Register                            */
} PORTEN_Type;


/* ================================================================================ */
/* ================                      CFMC                      ================ */
/* ================================================================================ */


/**
  * @brief CODE FLASH MEMORY CONTROLLER (CFMC)
  */

typedef struct {                                    /*!< (@ 0x41000000) CFMC Structure                                         */
  __IO uint32_t  CONF;                              /*!< (@ 0x41000000) Flash Memory Control Register                          */
  __IO uint32_t  FLSKEY;                            /*!< (@ 0x41000004) Flash Memory Access Key Register                       */
  __IO uint32_t  OTPKEY;                            /*!< (@ 0x41000008) Flash OTP Access Key Register                          */
  __IO uint32_t  FLSPROT;                           /*!< (@ 0x4100000C) Flash Memory Protection Register                       */
  __IO uint32_t  OTPPROT;                           /*!< (@ 0x41000010) Flash OTP Protection Register                          */
  __IO uint32_t  CTRL;                              /*!< (@ 0x41000014) Flash Access Control Register                          */
  __IO uint32_t  STAT;                              /*!< (@ 0x41000018) Flash Access Status Register                           */
  __IO uint32_t  READPROT;                          /*!< (@ 0x4100001C) Flash Read Protection Register                         */
  __O  uint32_t  PWIN;                              /*!< (@ 0x41000020) Flash Read Protection Password Input Register          */
  __I  uint32_t  RESERVED[3];
  __IO uint32_t  CHKCTRL;                           /*!< (@ 0x41000030) Flash Checksum Control Register                        */
  __IO uint32_t  CHKDOUT;                           /*!< (@ 0x41000034) Flash Checksum Data Output Register                    */
  __IO uint32_t  CHKSADDR;                          /*!< (@ 0x41000038) Flash Checksum Start Address Resgister                 */
  __IO uint32_t  CHKEADDR;                          /*!< (@ 0x4100003C) Flash Checksum End Address Register                    */
  __I  uint32_t  RESERVED1[950];
  __O  uint32_t  PWPRST;                            /*!< (@ 0x41000F18) Flash Read Protection Password Preset Register         */
} CFMC_Type;


/* ================================================================================ */
/* ================                      DFMC                      ================ */
/* ================================================================================ */


/**
  * @brief DATA FLASH MEMORY CONTROLLER (DFMC)
  */

typedef struct {                                    /*!< (@ 0x41001000) DFMC Structure                                         */
  __IO uint32_t  CONF;                              /*!< (@ 0x41001000) Flash Memory Control Register                          */
  __IO uint32_t  FLSKEY;                            /*!< (@ 0x41001004) Flash Memory Access Key Register                       */
  __I  uint32_t  RESERVED;
  __IO uint32_t  FLSPROT;                           /*!< (@ 0x4100100C) Flash Memory Protection Register                       */
  __I  uint32_t  RESERVED1;
  __IO uint32_t  CTRL;                              /*!< (@ 0x41001014) Flash Access Control Register                          */
  __IO uint32_t  STAT;                              /*!< (@ 0x41001018) Flash Access Status Register                           */
  __I  uint32_t  RESERVED2[5];
  __IO uint32_t  CHKCTRL;                           /*!< (@ 0x41001030) Flash Checksum Control Register                        */
  __IO uint32_t  CHKDOUT;                           /*!< (@ 0x41001034) Flash Checksum Data Output Register                    */
  __IO uint32_t  CHKSADDR;                          /*!< (@ 0x41001038) Flash Checksum Start Address Resgister                 */
  __IO uint32_t  CHKEADDR;                          /*!< (@ 0x4100103C) Flash Checksum End Address Register                    */
} DFMC_Type;


/* ================================================================================ */
/* ================                      DMA                      ================ */
/* ================================================================================ */


/**
  * @brief Direct Memory Access Control (DMA)
  */

typedef struct {                                    /*!< (@ 0x40000400) DMA Structure                                         */
  __IO uint32_t  CR;                                /*!< (@ 0x40000400) DMA Control Register                                   */
  __IO uint32_t  SR;                                /*!< (@ 0x40000404) DMA Status Register                                    */
  __IO uint32_t  PAR;                               /*!< (@ 0x40000408) DMA Peripheral address register                        */
  __IO uint32_t  MAR;                               /*!< (@ 0x4000040C) DMA Memory address register                            */
} DMA_Type;


/* ================================================================================ */
/* ================                       WDT                      ================ */
/* ================================================================================ */


/**
  * @brief WATCH-DOG TIMER (WDT)
  */

typedef struct {                                    /*!< (@ 0x40000200) WDT Structure                                          */
  __IO uint32_t  LR;                                /*!< (@ 0x40000200) Watch-dog Timer Load Register                          */
  __IO uint32_t  CNT;                               /*!< (@ 0x40000204) Watch-dog Timer Counter Register                       */
  __IO uint32_t  CON;                               /*!< (@ 0x40000208) Watch-dog Timer Control Register                       */
  __I  uint32_t  RESERVED[57];
  __IO uint32_t  AEN;                               /*!< (@ 0x400002F0) Watch-dog Timer Master Lock/Reload Register            */
} WDT_Type;


/* ================================================================================ */
/* ================                     TIMER                     ================ */
/* ================================================================================ */


/**
  * @brief TIMER COUNTER 0 (TIMER)
  */

typedef struct {                                    /*!< (@ 0x40003000) TIMER Structure                                       */
  __IO uint32_t  CR1;                               /*!< (@ 0x40003000) Timer Control Register1                                */
  __IO uint32_t  CR2;                               /*!< (@ 0x40003004) Timer Control Register2                                */
  __IO uint32_t  PRS;                               /*!< (@ 0x40003008) Timer Prescaler Register                               */
  __IO uint32_t  GRA;                               /*!< (@ 0x4000300C) Timer General Data Register A                          */
  __IO uint32_t  GRB;                               /*!< (@ 0x40003010) Timer General Data Register B                          */
  __IO uint32_t  CNT;                               /*!< (@ 0x40003014) Timer Counter Register                                 */
  __IO uint32_t  SR;                                /*!< (@ 0x40003018) Timer Status Register                                  */
  __IO uint32_t  IER;                               /*!< (@ 0x4000301C) Timer Interrupt Enable Register                        */
  __IO uint32_t  TRGPNT;                            /*!< (@ 0x40003020) Timer Trigger Point Register                           */
  __IO uint32_t  SYNC;                              /*!< (@ 0x40003024) Timer Sync Setting Register                            */
} TIMER_Type;


/* ================================================================================ */
/* ================                      FRT                      ================ */
/* ================================================================================ */


/**
  * @brief Free Run Timer (FRT)
  */

typedef struct {                                    /*!< (@ 0x40000600) FRT Structure                                         */
  __IO uint32_t  CTRL;                              /*!< (@ 0x40000600) FRT n Control Register                                 */
  __IO uint32_t  MCNT;                              /*!< (@ 0x40000604) FRT n Match Counter Register                           */
  __IO uint32_t  CNT;                               /*!< (@ 0x40000608) FRT n Counter Register                                 */
  __IO uint32_t  STAT;                              /*!< (@ 0x4000060C) FRT n Status Register                                  */
} FRT_Type;


/* ================================================================================ */
/* ================                      UART                     ================ */
/* ================================================================================ */


/**
  * @brief Universal Asynchronous Receiver/Transmitter (UART)
  */

typedef struct {                                    /*!< (@ 0x40008000) UART Structure                                        */
  
  union {
    __O  uint32_t  THR;                             /*!< (@ 0x40008000) UARTn Transmit Data Hold Register                      */
    __I  uint32_t  RBR;                             /*!< (@ 0x40008000) UARTn Receive Data Buffer Register                     */
  };
  __IO uint32_t  IER;                               /*!< (@ 0x40008004) UARTn Interrupt Enable Register                        */
  __I  uint32_t  IIR;                               /*!< (@ 0x40008008) UARTn Interrupt ID Register                            */
  __IO uint32_t  LCR;                               /*!< (@ 0x4000800C) UARTn Line Control Register                            */
  __IO uint32_t  DCR;                               /*!< (@ 0x40008010) UARTn Data Control Register                            */
  __I  uint32_t  LSR;                               /*!< (@ 0x40008014) UARTn Line Status Register                             */
  __I  uint32_t  RESERVED[2];
  __IO uint32_t  BDR;                               /*!< (@ 0x40008020) UARTn Baud Rate Divisor Latch Register                 */
  __IO uint32_t  BFR;                               /*!< (@ 0x40008024) UARTn Baud Rate Fractional Counter Value               */
  __I  uint32_t  RESERVED1[2];
  __IO uint32_t  IDTR;                              /*!< (@ 0x40008030) UARTn Inter-frame Delay Time Register                  */
} UART_Type;


/* ================================================================================ */
/* ================                      SPI                      ================ */
/* ================================================================================ */


/**
  * @brief Serial Peripheral Interface Bus (SPI)
  */

typedef struct {                                    /*!< (@ 0x40009000) SPI Structure                                         */
  
  union {
    __I  uint32_t  RDR;                             /*!< (@ 0x40009000) SPI n Received Data Register                           */
    __O  uint32_t  TDR;                             /*!< (@ 0x40009000) SPI n Transmit Data Register                           */
  };
  __IO uint32_t  CR;                                /*!< (@ 0x40009004) SPI Control Register                                   */
  __IO uint32_t  SR;                                /*!< (@ 0x40009008) SPI n Status Register                                  */
  __IO uint32_t  BR;                                /*!< (@ 0x4000900C) SPI n Baud Rate Register                               */
  __IO uint32_t  EN;                                /*!< (@ 0x40009010) SPI n Enable Register                                  */
  __IO uint32_t  LR;                                /*!< (@ 0x40009014) SPI n Delay Length Register                            */
} SPI_Type;


/* ================================================================================ */
/* ================                      I2C                      ================ */
/* ================================================================================ */


/**
  * @brief Inter-Integrated Circuit (I2C)
  */

typedef struct {                                    /*!< (@ 0x4000A000) I2C Structure                                         */
  __IO uint32_t  DR;                                /*!< (@ 0x4000A000) I2Cn Data Register                                     */
  __I  uint32_t  RESERVED;
  __IO uint32_t  SR;                                /*!< (@ 0x4000A008) I2Cn Status Register                                   */
  __IO uint32_t  SAR;                               /*!< (@ 0x4000A00C) I2Cn Slave Address Register                            */
  __I  uint32_t  RESERVED1;
  __IO uint32_t  CR;                                /*!< (@ 0x4000A014) I2Cn Control Register                                  */
  __IO uint32_t  SCLL;                              /*!< (@ 0x4000A018) I2Cn SCL Low Period Register                           */
  __IO uint32_t  SCLH;                              /*!< (@ 0x4000A01C) I2Cn SCL High Period Register                          */
  __IO uint32_t  SDH;                               /*!< (@ 0x4000A020) I2Cn SCL Hold Time Register                            */
} I2C_Type;


/* ================================================================================ */
/* ================                       CAN                      ================ */
/* ================================================================================ */


/**
  * @brief Controller Area Network (CAN)
  */

typedef struct {                                    /*!< (@ 0x40007000) CAN Structure                                          */
  __IO uint32_t  CR;                                /*!< (@ 0x40007000) CAN Control Register                                   */
  __I  uint32_t  SR;                                /*!< (@ 0x40007004) CAN Status Register                                    */
  __I  uint32_t  ERRCNT;                            /*!< (@ 0x40007008) CAN Error Counter Register                             */
  __IO uint32_t  BTR;                               /*!< (@ 0x4000700C) CAN Bit Timing Register                                */
  __IO uint32_t  IER;                               /*!< (@ 0x40007010) CAN Interrupt Enable Register                          */
  __IO uint32_t  TEST;                              /*!< (@ 0x40007014) CAN Test Register                                      */
  __O  uint32_t  BRPEXT;                            /*!< (@ 0x40007018) CAN BRP Extend Register                                */
  __IO uint32_t  EN;                                /*!< (@ 0x4000701C) CAN Enable Register                                    */
  __IO uint32_t  I1COMR;                            /*!< (@ 0x40007020) CAN Interface 1 Command Request Register               */
  __IO uint32_t  I1COMM;                            /*!< (@ 0x40007024) CAN Interface1 Command Mask Register                   */
  __IO uint32_t  I1MSK1;                            /*!< (@ 0x40007028) CAN Interface1 Mask1 Register                          */
  __IO uint32_t  I1MSK2;                            /*!< (@ 0x4000702C) CAN Interface1 Mask2 Register                          */
  __IO uint32_t  I1ARB1;                            /*!< (@ 0x40007030) CAN Interface1 Arbitration1 Register                   */
  __IO uint32_t  I1ARB2;                            /*!< (@ 0x40007034) CAN Interface1 Arbitration2 Register                   */
  __IO uint32_t  I1MCR;                             /*!< (@ 0x40007038) CAN Interface1 Message Control Register                */
  __IO uint32_t  I1DA1;                             /*!< (@ 0x4000703C) CAN Interface1 Data A1 Register                        */
  __IO uint32_t  I1DA2;                             /*!< (@ 0x40007040) CAN Interface1 Data A2 Register                        */
  __IO uint32_t  I1DB1;                             /*!< (@ 0x40007044) CAN Interface1 Data B1 Register                        */
  __IO uint32_t  I1DB2;                             /*!< (@ 0x40007048) CAN Interface1 Data B2 Register                        */
  __I  uint32_t  RESERVED[13];
  __IO uint32_t  I2COMR;                            /*!< (@ 0x40007080) CAN Interface 2 Command Request Register               */
  __IO uint32_t  I2COMM;                            /*!< (@ 0x40007084) CAN Interface2 Command Mask Register                   */
  __IO uint32_t  I2MSK1;                            /*!< (@ 0x40007088) CAN Interface2 Mask1 Register                          */
  __IO uint32_t  I2MSK2;                            /*!< (@ 0x4000708C) CAN Interface2 Mask2 Register                          */
  __IO uint32_t  I2ARB1;                            /*!< (@ 0x40007090) CAN Interface2 Arbitration1 Register                   */
  __IO uint32_t  I2ARB2;                            /*!< (@ 0x40007094) CAN Interface2 Arbitration2 Register                   */
  __IO uint32_t  I2MCR;                             /*!< (@ 0x40007098) CAN Interface2 Message Control Register                */
  __IO uint32_t  I2DA1;                             /*!< (@ 0x4000709C) CAN Interface2 Data A1 Register                        */
  __IO uint32_t  I2DA2;                             /*!< (@ 0x400070A0) CAN Interface2 Data A2 Register                        */
  __IO uint32_t  I2DB1;                             /*!< (@ 0x400070A4) CAN Interface2 Data B1 Register                        */
  __IO uint32_t  I2DB2;                             /*!< (@ 0x400070A8) CAN Interface2 Data B2 Register                        */
  __I  uint32_t  RESERVED1[21];
  __I  uint32_t  TXR1;                              /*!< (@ 0x40007100) CAN transmission Request Bit (n=16~1)                  */
  __I  uint32_t  TXR2;                              /*!< (@ 0x40007104) CAN transmission Request Bit (n=32~17)                 */
  __I  uint32_t  RESERVED2[6];
  __I  uint32_t  ND1;                               /*!< (@ 0x40007120) CAN New Data Register (n=16~1)                         */
  __I  uint32_t  ND2;                               /*!< (@ 0x40007124) CAN New Data Register (n=32~17)                        */
  __I  uint32_t  RESERVED3[6];
  __I  uint32_t  ISR1;                              /*!< (@ 0x40007140) CAN Interrupt Status Register (n=16~1)                 */
  __I  uint32_t  ISR2;                              /*!< (@ 0x40007144) CAN Interrupt Status Register (n=32~17)                */
  __I  uint32_t  RESERVED4[6];
  __I  uint32_t  MVR1;                              /*!< (@ 0x40007160) CAN Message Validation Register (n=16~1)               */
  __I  uint32_t  MVR2;                              /*!< (@ 0x40007164) CAN Message Validation Register (n=32~17)              */
} CAN_Type;


/* ================================================================================ */
/* ================                      MPWM                     ================ */
/* ================================================================================ */


/**
  * @brief Motor Pulse Width Modulation (MPWM)
  */

typedef struct {                                    /*!< (@ 0x40004000) MPWM Structure                                        */
  __IO uint32_t  MR;                                /*!< (@ 0x40004000) MPWM n Mode Register                                   */
  __IO uint32_t  OLR;                               /*!< (@ 0x40004004) MPWM n Output Level Register                           */
  __IO uint32_t  FOLR;                              /*!< (@ 0x40004008) MPWM n compulsion Output Register                      */
  __IO uint32_t  PRD;                               /*!< (@ 0x4000400C) MPWM n Period Register                                 */
  __IO uint32_t  DUH;                               /*!< (@ 0x40004010) MPWM n DUTY x Register                                 */
  __IO uint32_t  DVH;                               /*!< (@ 0x40004014) MPWM n DUTY x Register                                 */
  __IO uint32_t  DWH;                               /*!< (@ 0x40004018) MPWM n DUTY x Register                                 */
  __IO uint32_t  DUL;                               /*!< (@ 0x4000401C) MPWM n DUTY x Register                                 */
  __IO uint32_t  DVL;                               /*!< (@ 0x40004020) MPWM n DUTY x Register                                 */
  __IO uint32_t  DWL;                               /*!< (@ 0x40004024) MPWM n DUTY x Register                                 */
  __IO uint32_t  CR1;                               /*!< (@ 0x40004028) MPWM n Control Register 1                              */
  __IO uint32_t  CR2;                               /*!< (@ 0x4000402C) MPWM n Control Register 2                              */
  __IO uint32_t  SR;                                /*!< (@ 0x40004030) MPWM n Status Register                                 */
  __IO uint32_t  IER;                               /*!< (@ 0x40004034) MPWM n Interrupt Enable Register                       */
  __IO uint32_t  CNT;                               /*!< (@ 0x40004038) MPWM n Counter Register                                */
  __IO uint32_t  DTR;                               /*!< (@ 0x4000403C) MPWM n Dead-Time Register                              */
  __IO uint32_t  PCR;                               /*!< (@ 0x40004040) MPWM n Protection Control Register                     */
  __IO uint32_t  PSR;                               /*!< (@ 0x40004044) MPWM n Protection Status Register                      */
  __IO uint32_t  OCR;                               /*!< (@ 0x40004048) MPWM n Overvoltage Control Register                    */
  __IO uint32_t  OSR;                               /*!< (@ 0x4000404C) MPWM n Overvoltage Status Register                     */
  __I  uint32_t  RESERVED[2];
  __IO uint32_t  ATR1;                              /*!< (@ 0x40004058) MPWM n ADC Trigger Counter m Register                  */
  __IO uint32_t  ATR2;                              /*!< (@ 0x4000405C) MPWM n ADC Trigger Counter m Register                  */
  __IO uint32_t  ATR3;                              /*!< (@ 0x40004060) MPWM n ADC Trigger Counter m Register                  */
  __IO uint32_t  ATR4;                              /*!< (@ 0x40004064) MPWM n ADC Trigger Counter m Register                  */
  __IO uint32_t  ATR5;                              /*!< (@ 0x40004068) MPWM n ADC Trigger Counter m Register                  */
  __IO uint32_t  ATR6;                              /*!< (@ 0x4000406C) MPWM n ADC Trigger Counter m Register                  */
  __I  uint32_t  RESERVED1[4];
  __IO uint32_t  CR3;                               /*!< (@ 0x40004080) MPWM n Control Register 3                              */
  __IO uint32_t  CR4;                               /*!< (@ 0x40004084) MPWM n Control Register 4                              */
  __I  uint32_t  RESERVED2[2];
  __IO uint32_t  PRDU;                              /*!< (@ 0x40004090) MPWM n Phase U Period Register                         */
  __IO uint32_t  PRDV;                              /*!< (@ 0x40004094) MPWM n Phase V Period Register                         */
  __IO uint32_t  PRDW;                              /*!< (@ 0x40004098) MPWM n Phase W Period Register                         */
  __I  uint32_t  RESERVED3;
  __IO uint32_t  CNTU;                              /*!< (@ 0x400040A0) MPWM n Counter U Register                              */
  __IO uint32_t  CNTV;                              /*!< (@ 0x400040A4) MPWM n Counter V Register                              */
  __IO uint32_t  CNTW;                              /*!< (@ 0x400040A8) MPWM n Counter W Register                              */
  __I  uint32_t  RESERVED4;
  __IO uint32_t  DTRU;                              /*!< (@ 0x400040B0) MPWM n Dead-Time Register                              */
  __IO uint32_t  DTRV;                              /*!< (@ 0x400040B4) MPWM n Dead-Time Register                              */
  __IO uint32_t  DTRW;                              /*!< (@ 0x400040B8) MPWM n Dead-Time Register                              */
  __I  uint32_t  RESERVED5;
  __IO uint32_t  CAPCNTU;                           /*!< (@ 0x400040C0) MPWM n Capture Counter Register (Ph-U)                 */
  __IO uint32_t  CAPCNTV;                           /*!< (@ 0x400040C4) MPWM n Capture Counter Register (Ph-V)                 */
  __IO uint32_t  CAPCNTW;                           /*!< (@ 0x400040C8) MPWM n Capture Counter Register (Ph-W)                 */
  __I  uint32_t  RESERVED6;
  __IO uint32_t  RCAPU;                             /*!< (@ 0x400040D0) MPWM n Capture Rising Value Register (Ph-U)            */
  __IO uint32_t  RCAPV;                             /*!< (@ 0x400040D4) MPWM n Capture Rising Value Register (Ph-V)            */
  __IO uint32_t  RCAPW;                             /*!< (@ 0x400040D8) MPWM n Capture Rising Value Register (Ph-W)            */
  __I  uint32_t  RESERVED7;
  __IO uint32_t  FCAPU;                             /*!< (@ 0x400040E0) MPWM n Capture Falling Value Register (Ph-U)           */
  __IO uint32_t  FCAPV;                             /*!< (@ 0x400040E4) MPWM n Capture Falling Value Register (Ph-V)           */
  __IO uint32_t  FCAPW;                             /*!< (@ 0x400040E8) MPWM n Capture Falling Value Register (Ph-W)           */
  __I  uint32_t  RESERVED8;
  __IO uint32_t  SCAPU;                             /*!< (@ 0x400040F0) MPWM n Sub Capture Value Register (Ph-U)               */
  __IO uint32_t  SCAPV;                             /*!< (@ 0x400040F4) MPWM n Sub Capture Value Register (Ph-V)               */
  __IO uint32_t  SCAPW;                             /*!< (@ 0x400040F8) MPWM n Sub Capture Value Register (Ph-W)               */
} MPWM_Type;


/* ================================================================================ */
/* ================                      QEI                      ================ */
/* ================================================================================ */


/**
  * @brief Quadurature Encoder Interface (QEI)
  */

typedef struct {                                    /*!< (@ 0x4000B400) QEI Structure                                         */
  __IO uint32_t  MR;                                /*!< (@ 0x4000B400) QEI n Mode Register                                    */
  __IO uint32_t  CON;                               /*!< (@ 0x4000B404) QEI n Control Register                                 */
  __IO uint32_t  SR;                                /*!< (@ 0x4000B408) QEI n Status Register                                  */
  __IO uint32_t  POS;                               /*!< (@ 0x4000B40C) QEI n Position Counter Register                        */
  __IO uint32_t  MAX;                               /*!< (@ 0x4000B410) QEI n Position Counter Maximum Register                */
  __IO uint32_t  CMP0;                              /*!< (@ 0x4000B414) QEI n Position Counter Compare0 Register               */
  __IO uint32_t  CMP1;                              /*!< (@ 0x4000B418) QEI n Position Counter Compare1 Register               */
  __IO uint32_t  CMP2;                              /*!< (@ 0x4000B41C) QEI n Position Counter Compare2 Register               */
  __IO uint32_t  IDX;                               /*!< (@ 0x4000B420) QEI n Index Counter Register                           */
  __IO uint32_t  CMPI;                              /*!< (@ 0x4000B424) QEI n Index Comapre Register                           */
  __I  uint32_t  RESERVED[2];
  __IO uint32_t  VLR;                               /*!< (@ 0x4000B430) QEI n Velocity Reload Register                         */
  __IO uint32_t  VLT;                               /*!< (@ 0x4000B434) QEI n Velocity Timer Register                          */
  __IO uint32_t  VLP;                               /*!< (@ 0x4000B438) QEI n Velocity Pulse Counter Register                  */
  __IO uint32_t  VLC;                               /*!< (@ 0x4000B43C) QEI n Velocity Capture Register                        */
  __IO uint32_t  VLCOM;                             /*!< (@ 0x4000B440) QEI n Velocity Compare Value Register                  */
  __I  uint32_t  RESERVED1[3];
  __IO uint32_t  IER;                               /*!< (@ 0x4000B450) QEI n Interrupt Enable Register                        */
  __I  uint32_t  ISR;                               /*!< (@ 0x4000B454) QEI n Interrupt Status Register                        */
  __O  uint32_t  ISCR;                              /*!< (@ 0x4000B458) QEI n Interrupt Status Clear Register                  */
} QEI_Type;


/* ================================================================================ */
/* ================                      ADC                      ================ */
/* ================================================================================ */


/**
  * @brief 12-BIT A/D CONVERTER (ADC)
  */

typedef struct {                                    /*!< (@ 0x4000B000) ADC Structure                                         */
  __IO uint32_t  MR;                                /*!< (@ 0x4000B000) ADC Mode Register                                      */
  __IO uint32_t  CSCR;                              /*!< (@ 0x4000B004) ADC Current Sequence_Channel Register                  */
  __IO uint32_t  CCR;                               /*!< (@ 0x4000B008) ADC Clock Control Register                             */
  __IO uint32_t  TRG;                               /*!< (@ 0x4000B00C) ADC Trigger Selection Register                         */
  __I  uint32_t  RESERVED[2];
  __IO uint32_t  SCSR1;                             /*!< (@ 0x4000B018) ADC Channel Selection Register 1                       */
  __IO uint32_t  SCSR2;                             /*!< (@ 0x4000B01C) ADC Channel Selection Register 2                       */
  __IO uint32_t  CR;                                /*!< (@ 0x4000B020) ADC Control Register                                   */
  __IO uint32_t  SR;                                /*!< (@ 0x4000B024) ADC Status Register                                    */
  __IO uint32_t  IER;                               /*!< (@ 0x4000B028) ADC Interrupt Enable Register                          */
  __I  uint32_t  DDR;                               /*!< (@ 0x4000B02C) ADC DMA Data Register                                  */
  __IO uint32_t  DR0;                               /*!< (@ 0x4000B030) ADC Sequence Data Register0                            */
  __IO uint32_t  DR1;                               /*!< (@ 0x4000B034) ADC Sequence Data Register1                            */
  __IO uint32_t  DR2;                               /*!< (@ 0x4000B038) ADC Sequence Data Register2                            */
  __IO uint32_t  DR3;                               /*!< (@ 0x4000B03C) ADC Sequence Data Register3                            */
  __IO uint32_t  DR4;                               /*!< (@ 0x4000B040) ADC Sequence Data Register4                            */
  __IO uint32_t  DR5;                               /*!< (@ 0x4000B044) ADC Sequence Data Register5                            */
  __IO uint32_t  DR6;                               /*!< (@ 0x4000B048) ADC Sequence Data Register6                            */
  __IO uint32_t  DR7;                               /*!< (@ 0x4000B04C) ADC Sequence Data Register7                            */
  __I  uint32_t  RESERVED1[8];
  __IO uint32_t  CMPR;                              /*!< (@ 0x4000B070) ADC Channel Compare Register                           */
} ADC_Type;


/* ================================================================================ */
/* ================                      PGA                      ================ */
/* ================================================================================ */


/**
  * @brief Programmable Gain Amplifier (PGA)
  */

typedef struct {                                    /*!< (@ 0x4000B300) PGA Structure                                         */
  __IO uint32_t  CR;                                /*!< (@ 0x4000B300) PGA Control Register                                   */
} PGA_Type;


/* ================================================================================ */
/* ================                      COMP                     ================ */
/* ================================================================================ */


/**
  * @brief Comparator (COMP)
  */

typedef struct {                                    /*!< (@ 0x4000B380) COMP Structure                                        */
  __IO uint32_t  CONF;                              /*!< (@ 0x4000B380) Comparator 0 Configuration Register                    */
  __IO uint32_t  CTRL;                              /*!< (@ 0x4000B384) Comparator 0 Control Register                          */
  __IO uint32_t  STAT;                              /*!< (@ 0x4000B388) Comparator 0 Status Register                           */
} COMP_Type;


/* ================================================================================ */
/* ================                     AES128                     ================ */
/* ================================================================================ */


/**
  * @brief Advanced Encryption Standard 128 (AES128)
  */

typedef struct {                                    /*!< (@ 0x40000500) AES128 Structure                                       */
  __IO uint32_t  CTRL;                              /*!< (@ 0x40000500) AES Control Register                                   */
  __IO uint32_t  STAT;                              /*!< (@ 0x40000504) AES Status Register                                    */
  __O  uint32_t  INFIFO;                            /*!< (@ 0x40000508) AES Input FIFO Register                                */
  __I  uint32_t  OUTFIFO;                           /*!< (@ 0x4000050C) AES Output FIFO Register                               */
  __IO uint32_t  KEYIN0;                            /*!< (@ 0x40000510) AES KEY IN Register 0                                  */
  __IO uint32_t  KEYIN1;                            /*!< (@ 0x40000514) AES KEY IN Register 1                                  */
  __IO uint32_t  KEYIN2;                            /*!< (@ 0x40000518) AES KEY IN Register 2                                  */
  __IO uint32_t  KEYIN3;                            /*!< (@ 0x4000051C) AES KEY IN Register 3                                  */
  __I  uint32_t  TEXTIN0;                           /*!< (@ 0x40000520) AES TEXT IN 0 Register                                 */
  __I  uint32_t  TEXTIN1;                           /*!< (@ 0x40000524) AES TEXT IN 1 Register                                 */
  __I  uint32_t  TEXTIN2;                           /*!< (@ 0x40000528) AES TEXT IN 2 Register                                 */
  __I  uint32_t  TEXTIN3;                           /*!< (@ 0x4000052C) AES TEXT IN 3 Register                                 */
  __I  uint32_t  TEXTOUT0;                          /*!< (@ 0x40000530) AES TEXT OUT Register 0                                */
  __I  uint32_t  TEXTOUT1;                          /*!< (@ 0x40000534) AES TEXT OUT Register 1                                */
  __I  uint32_t  TEXTOUT2;                          /*!< (@ 0x40000538) AES TEXT OUT Register 2                                */
  __I  uint32_t  TEXTOUT3;                          /*!< (@ 0x4000053C) AES TEXT OUT Register 3                                */
} AES128_Type;


/* ================================================================================ */
/* ================                       RNG                      ================ */
/* ================================================================================ */


/**
  * @brief Random Number Generator (RNG)
  */

typedef struct {                                    /*!< (@ 0x40000A00) RNG Structure                                          */
  __IO uint32_t  CTRL;                              /*!< (@ 0x40000A00) RNG Control Register                                   */
  __IO uint32_t  SEED;                              /*!< (@ 0x40000A04) RNG SEED Register                                      */
  __I  uint32_t  RNGD;                              /*!< (@ 0x40000A08) RNG Random number data register                        */
  __IO uint32_t  STAT;                              /*!< (@ 0x40000A0C) RNG Status Register                                    */
} RNG_Type;


/* ================================================================================ */
/* ================                       CRC                      ================ */
/* ================================================================================ */


/**
  * @brief CYCLIC REDUNDANCY CHECK AND CHECKSUM (CRC)
  */

typedef struct {                                    /*!< (@ 0x41002000) CRC Structure                                          */
  __IO uint32_t  CTRL;                              /*!< (@ 0x41002000) CRC Control Register                                   */
  __IO uint32_t  INIT;                              /*!< (@ 0x41002004) CRC Init value Register                                */
  
  union {
	__O  uint8_t   IDR;                             /*!< (@ 0x40000308) CRC Input Data Register                                */
    __I  uint32_t  ODR;                             /*!< (@ 0x40000308) CRC Output Data Register                               */		
  };
  __IO uint32_t  STAT;                              /*!< (@ 0x4100200C) CRC Status Register                                    */
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
/* ================              Peripheral memory map             ================ */
/* ================================================================================ */

#define CHIPCONFIG_BASE                 0x4000F000UL
#define SCU_BASE                        0x40000000UL
#define PA_BASE                         0x40001000UL
#define PB_BASE                         0x40001100UL
#define PC_BASE                         0x40001200UL
#define PD_BASE                         0x40001300UL
#define PE_BASE                         0x40001400UL
#define PF_BASE                         0x40001500UL
#define PG_BASE                         0x40001600UL
#define PORTEN_BASE                     0x40001FF0UL
#define CFMC_BASE                       0x41000000UL
#define DFMC_BASE                       0x41001000UL
#define DMA0_BASE                       0x40000400UL
#define DMA1_BASE                       0x40000410UL
#define DMA2_BASE                       0x40000420UL
#define DMA3_BASE                       0x40000430UL
#define DMA4_BASE                       0x40000440UL
#define DMA5_BASE                       0x40000450UL
#define DMA6_BASE                       0x40000460UL
#define DMA7_BASE                       0x40000470UL
#define DMA8_BASE                       0x40000480UL
#define DMA9_BASE                       0x40000490UL
#define DMA10_BASE                      0x400004A0UL
#define DMA11_BASE                      0x400004B0UL
#define DMA12_BASE                      0x400004C0UL
#define DMA13_BASE                      0x400004D0UL
#define DMA14_BASE                      0x400004E0UL
#define DMA15_BASE                      0x400004F0UL
#define WDT_BASE                        0x40000200UL
#define TIMER0_BASE                     0x40003000UL
#define TIMER1_BASE                     0x40003040UL
#define TIMER2_BASE                     0x40003080UL
#define TIMER3_BASE                     0x400030C0UL
#define TIMER4_BASE                     0x40003100UL
#define TIMER5_BASE                     0x40003140UL
#define TIMER6_BASE                     0x40003180UL
#define TIMER7_BASE                     0x400031C0UL
#define TIMER8_BASE                     0x40003200UL
#define TIMER9_BASE                     0x40003240UL
#define FRT0_BASE                       0x40000600UL
#define FRT1_BASE                       0x40000700UL
#define UART0_BASE                      0x40008000UL
#define UART1_BASE                      0x40008100UL
#define UART2_BASE                      0x40008200UL
#define UART3_BASE                      0x40008300UL
#define UART4_BASE                      0x40008400UL
#define UART5_BASE                      0x40008500UL
#define SPI0_BASE                       0x40009000UL
#define SPI1_BASE                       0x40009100UL
#define SPI2_BASE                       0x40009200UL
#define I2C0_BASE                       0x4000A000UL
#define I2C1_BASE                       0x4000A100UL
#define CAN_BASE                        0x40007000UL
#define MPWM0_BASE                      0x40004000UL
#define MPWM1_BASE                      0x40005000UL
#define QEI0_BASE                       0x4000B400UL
#define QEI1_BASE                       0x4000B500UL
#define ADC0_BASE                       0x4000B000UL
#define ADC1_BASE                       0x4000B100UL
#define ADC2_BASE                       0x4000B200UL
#define PGA0_BASE                       0x4000B300UL
#define PGA1_BASE                       0x4000B304UL
#define PGA2_BASE                       0x4000B308UL
#define COMP0_BASE                      0x4000B380UL
#define COMP1_BASE                      0x4000B38CUL
#define COMP2_BASE                      0x4000B398UL
#define COMP3_BASE                      0x4000B3A4UL
#define AES128_BASE                     0x40000500UL
#define RNG_BASE                        0x40000A00UL
#define CRC_BASE                        0x41002000UL


/* ================================================================================ */
/* ================             Peripheral declaration             ================ */
/* ================================================================================ */

#define CHIPCONFIG                      ((CHIPCONFIG_Type        *) CHIPCONFIG_BASE)
#define SCU                             ((SCU_Type               *) SCU_BASE)
#define PA                              ((PCU_Type               *) PA_BASE)
#define PB                              ((PCU_Type               *) PB_BASE)
#define PC                              ((PCU_Type               *) PC_BASE)
#define PD                              ((PCU_Type               *) PD_BASE)
#define PE                              ((PCU_Type               *) PE_BASE)
#define PF                              ((PCU_Type               *) PF_BASE)
#define PG                              ((PCU_Type               *) PG_BASE)
#define PORTEN                          ((PORTEN_Type            *) PORTEN_BASE)
#define CFMC                            ((CFMC_Type              *) CFMC_BASE)
#define DFMC                            ((DFMC_Type              *) DFMC_BASE)
#define DMA0                            ((DMA_Type               *) DMA0_BASE)
#define DMA1                            ((DMA_Type               *) DMA1_BASE)
#define DMA2                            ((DMA_Type               *) DMA2_BASE)
#define DMA3                            ((DMA_Type               *) DMA3_BASE)
#define DMA4                            ((DMA_Type               *) DMA4_BASE)
#define DMA5                            ((DMA_Type               *) DMA5_BASE)
#define DMA6                            ((DMA_Type               *) DMA6_BASE)
#define DMA7                            ((DMA_Type               *) DMA7_BASE)
#define DMA8                            ((DMA_Type               *) DMA8_BASE)
#define DMA9                            ((DMA_Type               *) DMA9_BASE)
#define DMA10                           ((DMA_Type               *) DMA10_BASE)
#define DMA11                           ((DMA_Type               *) DMA11_BASE)
#define DMA12                           ((DMA_Type               *) DMA12_BASE)
#define DMA13                           ((DMA_Type               *) DMA13_BASE)
#define DMA14                           ((DMA_Type               *) DMA14_BASE)
#define DMA15                           ((DMA_Type               *) DMA15_BASE)
#define WDT                             ((WDT_Type               *) WDT_BASE)
#define TIMER0                          ((TIMER_Type             *) TIMER0_BASE)
#define TIMER1                          ((TIMER_Type             *) TIMER1_BASE)
#define TIMER2                          ((TIMER_Type             *) TIMER2_BASE)
#define TIMER3                          ((TIMER_Type             *) TIMER3_BASE)
#define TIMER4                          ((TIMER_Type             *) TIMER4_BASE)
#define TIMER5                          ((TIMER_Type             *) TIMER5_BASE)
#define TIMER6                          ((TIMER_Type             *) TIMER6_BASE)
#define TIMER7                          ((TIMER_Type             *) TIMER7_BASE)
#define TIMER8                          ((TIMER_Type             *) TIMER8_BASE)
#define TIMER9                          ((TIMER_Type             *) TIMER9_BASE)
#define FRT0                            ((FRT_Type               *) FRT0_BASE)
#define FRT1                            ((FRT_Type               *) FRT1_BASE)
#define UART0                           ((UART_Type              *) UART0_BASE)
#define UART1                           ((UART_Type              *) UART1_BASE)
#define UART2                           ((UART_Type              *) UART2_BASE)
#define UART3                           ((UART_Type              *) UART3_BASE)
#define UART4                           ((UART_Type              *) UART4_BASE)
#define UART5                           ((UART_Type              *) UART5_BASE)
#define SPI0                            ((SPI_Type               *) SPI0_BASE)
#define SPI1                            ((SPI_Type               *) SPI1_BASE)
#define SPI2                            ((SPI_Type               *) SPI2_BASE)
#define I2C0                            ((I2C_Type               *) I2C0_BASE)
#define I2C1                            ((I2C_Type               *) I2C1_BASE)
#define CAN                             ((CAN_Type               *) CAN_BASE)
#define MPWM0                           ((MPWM_Type              *) MPWM0_BASE)
#define MPWM1                           ((MPWM_Type              *) MPWM1_BASE)
#define QEI0                            ((QEI_Type               *) QEI0_BASE)
#define QEI1                            ((QEI_Type               *) QEI1_BASE)
#define ADC0                            ((ADC_Type               *) ADC0_BASE)
#define ADC1                            ((ADC_Type               *) ADC1_BASE)
#define ADC2                            ((ADC_Type               *) ADC2_BASE)
#define PGA0                            ((PGA_Type               *) PGA0_BASE)
#define PGA1                            ((PGA_Type               *) PGA1_BASE)
#define PGA2                            ((PGA_Type               *) PGA2_BASE)
#define COMP0                           ((COMP_Type              *) COMP0_BASE)
#define COMP1                           ((COMP_Type              *) COMP1_BASE)
#define COMP2                           ((COMP_Type              *) COMP2_BASE)
#define COMP3                           ((COMP_Type              *) COMP3_BASE)
#define AES128                          ((AES128_Type            *) AES128_BASE)
#define RNG                             ((RNG_Type               *) RNG_BASE)
#define CRC                             ((CRC_Type               *) CRC_BASE)





/** @} */ /* End of group Device_Peripheral_Registers */
/** @} */ /* End of group A34M41x */
/** @} */ /* End of group ABOV Semiconductor Co., Ltd. */

#ifdef __cplusplus
}
#endif


#endif  /* A34M41x_H */

