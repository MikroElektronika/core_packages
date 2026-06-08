
/****************************************************************************************************//**
 * @file     A31C14x.h
 *
 * @brief    CMSIS Cortex-M0PLUS Peripheral Access Layer Header File for
 *           A31C14x from ABOV Semiconductor Co., Ltd..
 *
 * @version  V1.0
 * @date     4. March 2026
 *
 * @note     Generated with SVDConv V2.87l 
 *           from CMSIS SVD File 'a31c14x.svd' Version 1.0,
 *******************************************************************************************************/



/** @addtogroup ABOV Semiconductor Co., Ltd.
  * @{
  */

/** @addtogroup A31C14x
  * @{
  */

#ifndef A31C14X_H
#define A31C14X_H

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
  PendSV_IRQn                   =  -2,              /*!<  14  Pendable request for system service                              */
  SysTick_IRQn                  =  -1,              /*!<  15  System Tick Timer                                                */
/* ---------------------  A31C14x Specific Interrupt Numbers  --------------------- */
  LVI_IRQn                      =   0,              /*!<   0  LVI                                                              */
  SYSCLKFAIL_IRQn               =   1,              /*!<   1  SYSCLKFAIL                                                       */
  HSEFAIL_IRQn                  =   2,              /*!<   2  HSEFAIL                                                          */
  LSEFAIL_IRQn                  =   3,              /*!<   3  LSEFAIL                                                          */
  WDT_IRQn                      =   4,              /*!<   4  WDT                                                              */
  FRT_IRQn                      =   5,              /*!<   5  FRT                                                              */
  CFMC_IRQn                     =   6,              /*!<   6  CFMC                                                             */
  TIMER0_IRQn                   =   7,              /*!<   7  TIMER0                                                           */
  TIMER1_IRQn                   =   8,              /*!<   8  TIMER1                                                           */
  TIMER2_IRQn                   =   9,              /*!<   9  TIMER2                                                           */
  TIMER3_IRQn                   =  10,              /*!<  10  TIMER3                                                           */
  GPIOAB_IRQn                   =  11,              /*!<  11  GPIOAB                                                           */
  GPIOCD_IRQn                   =  12,              /*!<  12  GPIOCD                                                           */
  GPIOEF_IRQn                   =  13,              /*!<  13  GPIOEF                                                           */
  TIMER4_IRQn                   =  14,              /*!<  14  TIMER4                                                           */
  TIMER5_IRQn                   =  15,              /*!<  15  TIMER5                                                           */
  USART10_IRQn                  =  16,              /*!<  16  USART10                                                          */
  USART11_IRQn                  =  17,              /*!<  17  USART11                                                          */
  USART12_IRQn                  =  18,              /*!<  18  USART12                                                          */
  I2C0_IRQn                     =  19,              /*!<  19  I2C0                                                             */
  UART0_IRQn                    =  20,              /*!<  20  UART0                                                            */
  UART1_IRQn                    =  21,              /*!<  21  UART1                                                            */
  ADC_IRQn                      =  22,              /*!<  22  ADC                                                              */
  CRC_IRQn                      =  23,              /*!<  23  CRC                                                              */
  CMP0_IRQn                     =  24,              /*!<  24  CMP0                                                             */
  CMP1_IRQn                     =  25,              /*!<  25  CMP1                                                             */
  I2C1_IRQn                     =  26,              /*!<  26  I2C1                                                             */
  I2C2_IRQn                     =  27,              /*!<  27  I2C2                                                             */
  TIMER6_IRQn                   =  28,              /*!<  28  TIMER6                                                           */
  TIMER7_IRQn                   =  29,              /*!<  29  TIMER7                                                           */
  TIMER8_IRQn                   =  30,              /*!<  30  TIMER8                                                           */
  TIMER9_IRQn                   =  31               /*!<  31  TIMER9                                                           */
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
//#include "system_a31xxxx.h"                         /*!< A31C14x System                                                        */
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

typedef struct {                                    /*!< CHIPCONFIG Structure                                                  */
  __I  uint32_t  VENDID;                            /*!< Vendor identification bits                                            */
  __I  uint32_t  CHIPID;                            /*!< Chip ID bits                                                          */
  __I  uint8_t   REVNO;                             /*!< Chip revision number                                                  */
} CHIPCONFIG_Type;


/* ================================================================================ */
/* ================                       SCU                      ================ */
/* ================================================================================ */


/**
  * @brief System Control Unit (SCU)
  */

typedef struct {                                    /*!< SCU Structure                                                         */
  __I  uint32_t  RESERVED;
  __IO uint32_t  SMR;                               /*!< System Mode Register                                                  */
  __IO uint32_t  SRCR;                              /*!< System reset control Register                                         */
  __I  uint32_t  RESERVED1;
  __IO uint32_t  WUER;                              /*!< Wake-up Source Enable Register                                        */
  __I  uint32_t  WUSR;                              /*!< Wake-up Source Status Register                                        */
  __IO uint32_t  RSER;                              /*!< Reset Source Enable Register                                          */
  __IO uint32_t  RSSR;                              /*!< Reset Source Status Register                                          */
  __IO uint32_t  PRER1;                             /*!< Peripheral Reset Enable Register1                                     */
  __IO uint32_t  PRER2;                             /*!< Peripheral Reset Setting Register2                                    */
  __IO uint32_t  PER1;                              /*!< Peripheral Enable Register1                                           */
  __IO uint32_t  PER2;                              /*!< Peripheral Enable Register2                                           */
  __IO uint32_t  PCER1;                             /*!< Peripheral Clock Enable Register1                                     */
  __IO uint32_t  PCER2;                             /*!< Peripheral Clock Enable Register2                                     */
  __I  uint32_t  RESERVED2[2];
  __IO uint32_t  CSCR;                              /*!< Clock Source Control Register                                         */
  __IO uint32_t  SCCR;                              /*!< System clock control register                                         */
  __IO uint32_t  CMR;                               /*!< Clock Monitoring Register                                             */
  __I  uint32_t  RESERVED3;
  __IO uint32_t  COR;                               /*!< Clock Output Setting Register                                         */
  __IO uint32_t  NMICR;                             /*!< NMI Control Register                                                  */
  __IO uint32_t  NMISR;                             /*!< NMI Status Register                                                   */
  __I  uint32_t  RESERVED4[2];
  __IO uint32_t  VDCCON;                            /*!< VDC Control Register                                                  */
  __IO uint32_t  LVICR;                             /*!< Low Voltage Indicator Control Register                                */
  __IO uint32_t  LVISR;                             /*!< Low Voltage Indicator Status Register                                 */
  __IO uint32_t  LVRCR;                             /*!< Low Voltage Reset Control Register                                    */
  __I  uint32_t  RESERVED5[3];
  __IO uint32_t  EOSCR;                             /*!< External Oscillator Control Register                                  */
  __I  uint32_t  RESERVED6[3];
  __IO uint32_t  MCCR1;                             /*!< MISC Clock Control Register1                                          */
  __I  uint32_t  RESERVED7;
  __IO uint32_t  MCCR3;                             /*!< MISC Clock Control Register3                                          */
  __IO uint32_t  MCCR4;                             /*!< MISC Clock Control Register4                                          */
  __IO uint32_t  MCCR5;                             /*!< MISC Clock Control Register5                                          */
  __IO uint32_t  MCCR6;                             /*!< MISC Clock Control Register6                                          */
  __IO uint32_t  MCCR7;                             /*!< MISC Clock Control Register7                                          */
  __I  uint32_t  RESERVED8[17];
  __IO uint32_t  SYSTEN;                            /*!< System Access Key Register                                            */
} SCU_Type;


/* ================================================================================ */
/* ================                       PCU                      ================ */
/* ================================================================================ */


/**
  * @brief General Port (PCU)
  */

typedef struct {                                    /*!< PCU Structure                                                         */
  __IO uint32_t  MR1;                               /*!< Port n MUX1 Selection Register                                        */
  __IO uint32_t  MR2;                               /*!< Port n MUX2 Selection Register                                        */
  __IO uint32_t  CR;                                /*!< Port n Type Selection Register                                        */
  __IO uint32_t  PRCR;                              /*!< Port n Pull-up/down Selection Register                                */
  __IO uint32_t  DER;                               /*!< Port n Debounce Enable Register                                       */
  __I  uint32_t  RESERVED[3];
  __IO uint32_t  IER;                               /*!< Port n Interrupt Enable Register                                      */
  __IO uint32_t  ISR;                               /*!< Port n Interrupt Status Register                                      */
  __IO uint32_t  ICR;                               /*!< Port n Interrupt Control Register                                     */
  __I  uint32_t  RESERVED1;
  __IO uint32_t  ODR;                               /*!< Port n Output Data Register                                           */
  __I  uint32_t  IDR;                               /*!< Port n Input Data Register                                            */
  __O  uint32_t  BSR;                               /*!< Port n Bit Set/Clear Register                                         */
  __O  uint32_t  BCR;                               /*!< Port n Bit Reset Register                                             */
} PCU_Type;


/* ================================================================================ */
/* ================                   PORTRSTDBCR                  ================ */
/* ================================================================================ */


/**
  * @brief General Port Reset Debounce Enable (PORTRSTDBCR)
  */

typedef struct {                                    /*!< PORTRSTDBCR Structure                                                 */
  __IO uint32_t  RSTDBCR;                           /*!< Port Reset Debounce Control Register                                  */
} PORTRSTDBCR_Type;


/* ================================================================================ */
/* ================                     PORTEN                     ================ */
/* ================================================================================ */


/**
  * @brief General Port Access Enable (PORTEN)
  */

typedef struct {                                    /*!< PORTEN Structure                                                      */
  __O  uint32_t  EN;                                /*!< Port Access Enable Register                                           */
} PORTEN_Type;


/* ================================================================================ */
/* ================                      CFMC                      ================ */
/* ================================================================================ */


/**
  * @brief CODE FLASH MEMORY CONTROLLER (CFMC)
  */

typedef struct {                                    /*!< CFMC Structure                                                        */
  __IO uint32_t  CONF;                              /*!< code flash control register                                           */
  __IO uint32_t  FLSKEY;                            /*!< code flash access key register                                        */
  __IO uint32_t  INFOKEY;                           /*!< code flash User info access key register                              */
  __IO uint32_t  FLSPROT;                           /*!< code flash protection register                                        */
  __IO uint32_t  INFOPROT;                          /*!< code flash info protection register                                   */
  __IO uint32_t  CTRL;                              /*!< code flash access control register                                    */
  __IO uint32_t  STAT;                              /*!< code flash access status register                                     */
  __IO uint32_t  READPROT;                          /*!< Flash Read Protection Register                                        */
  __O  uint32_t  PWIN;                              /*!< code flash password input register                                    */
  __I  uint32_t  RESERVED[7];
  __IO uint32_t  WTIMEOUT;                          /*!< code flash write time-out register                                    */
  __I  uint32_t  RESERVED1[949];
  __O  uint32_t  PWPRST;                            /*!< code flash password preset register                                   */
} CFMC_Type;


/* ================================================================================ */
/* ================                     HSICMU                     ================ */
/* ================================================================================ */


/**
  * @brief HIGH-SPEED INTERNAL OSC CLOCK MANAGEMENT UNIT (HSICMU)
  */

typedef struct {                                    /*!< HSICMU Structure                                                      */
  __IO uint32_t  CR;                                /*!< High Speed Internal OSC Clock Management Unit Control Register        */
  __IO uint32_t  CFG;                               /*!< High Speed Internal OSC Clock Management Unit Config Register         */
  __I  uint32_t  ISR;                               /*!< High Speed Internal OSC Clock Management Unit Interrupt & Status
                                                         Register                                                              */
  __O  uint32_t  ICR;                               /*!< High Speed Internal OSC Clock Management Unit Interrupt & Status
                                                         Clear Register                                                        */
  __I  uint32_t  RESERVED;
  __I  uint32_t  ATRIM;                             /*!< High Speed Internal OSC Clock Management Unit Auto TRIM Register      */
  __I  uint32_t  CAP;                               /*!< High Speed Internal OSC Clock Management Unit Capture Register        */
  __IO uint32_t  THR;                               /*!< HSICMU Frequency Error rate threshold                                 */
} HSICMU_Type;


/* ================================================================================ */
/* ================                       DMA                      ================ */
/* ================================================================================ */


/**
  * @brief Direct Memory Access Control 0 (DMA)
  */

typedef struct {                                    /*!< DMA Structure                                                         */
  __IO uint32_t  CR;                                /*!< DMA channel n control register                                        */
  __IO uint32_t  SR;                                /*!< DMA channel n status register                                         */
  __IO uint32_t  PAR;                               /*!< DMA channel n peripheral address register                             */
  __IO uint32_t  MAR;                               /*!< DMA channel n memory address register                                 */
} DMA_Type;


/* ================================================================================ */
/* ================                       WDT                      ================ */
/* ================================================================================ */


/**
  * @brief WATCH-DOG TIMER (WDT)
  */

typedef struct {                                    /*!< WDT Structure                                                         */
  __IO uint32_t  LR;                                /*!< WDT load register                                                     */
  __IO uint32_t  CNT;                               /*!< WDT current count register                                            */
  __IO uint32_t  CON;                               /*!< WDT control register                                                  */
  __I  uint32_t  RESERVED[57];
  __IO uint32_t  AEN;                               /*!< WDT access enable register                                            */
} WDT_Type;


/* ================================================================================ */
/* ================                      TIMER                     ================ */
/* ================================================================================ */


/**
  * @brief TIMER COUNTER 0 (TIMER)
  */

typedef struct {                                    /*!< TIMER Structure                                                       */
  __IO uint32_t  CR1;                               /*!< Timer / counter n control register 1                                  */
  __IO uint32_t  CR2;                               /*!< Timer / counter n control register 2                                  */
  __IO uint32_t  PRS;                               /*!< Timer / counter n prescaler register                                  */
  __IO uint32_t  GRA;                               /*!< Timer / counter n general data register A                             */
  __IO uint32_t  GRB;                               /*!< Timer / counter n general data register B                             */
  __IO uint32_t  CNT;                               /*!< Timer / counter n count register                                      */
  __IO uint32_t  SR;                                /*!< Timer / counter n status register                                     */
  __IO uint32_t  IER;                               /*!< Timer / counter n interrupt enable register                           */
  __IO uint32_t  TRGPNT;                            /*!< Timer / counter n trigger point register                              */
  __IO uint32_t  SYNC;                              /*!< Timer / counter n sync configuration register                         */
} TIMER_Type;


/* ================================================================================ */
/* ================                       FRT                      ================ */
/* ================================================================================ */


/**
  * @brief Free Run Timer (FRT)
  */

typedef struct {                                    /*!< FRT Structure                                                         */
  __IO uint32_t  CTRL;                              /*!< FRT control register                                                  */
  __IO uint32_t  MCNT;                              /*!< FRT match counter register                                            */
  __IO uint32_t  CNT;                               /*!< FRT counter register                                                  */
  __IO uint32_t  STAT;                              /*!< FRT status register                                                   */
} FRT_Type;


/* ================================================================================ */
/* ================                      UART                      ================ */
/* ================================================================================ */


/**
  * @brief Universal Asynchronous Receiver/Transmitter 0 (UART)
  */

typedef struct {                                    /*!< UART Structure                                                        */
  
  union {
    __O  uint32_t  THR;                             /*!< UART n transmit data hold register                                    */
    __I  uint32_t  RBR;                             /*!< UART n receive data buffer register                                   */
  };
  __IO uint32_t  IER;                               /*!< UART n interrupt enable register                                      */
  __I  uint32_t  IIR;                               /*!< UART n interrupt ID register                                          */
  __IO uint32_t  LCR;                               /*!< UART n line control register                                          */
  __IO uint32_t  DCR;                               /*!< UART n data control register                                          */
  __IO uint32_t  ELSR;                              /*!< UART n line status register                                           */
  __I  uint32_t  RESERVED[2];
  __IO uint32_t  BDR;                               /*!< UART n baud-rate divisor latch register                               */
  __IO uint32_t  BFR;                               /*!< UART n baud-rate fraction counter register                            */
  __I  uint32_t  RESERVED1[2];
  __IO uint32_t  IDTR;                              /*!< UARTn Inter-frame Delay Time Register                                 */
} UART_Type;


/* ================================================================================ */
/* ================                       I2C                      ================ */
/* ================================================================================ */


/**
  * @brief Inter-Integrated Circuit (I2C)
  */

typedef struct {                                    /*!< I2C Structure                                                         */
  __IO uint32_t  DR;                                /*!< I2C data register                                                     */
  __I  uint32_t  RESERVED;
  __IO uint32_t  SR;                                /*!< I2C status register                                                   */
  __IO uint32_t  SAR;                               /*!< I2C slave address register                                            */
  __I  uint32_t  RESERVED1;
  __IO uint32_t  CR;                                /*!< I2C Control Register                                                  */
  __IO uint32_t  SCLL;                              /*!< I2C SCL low duration register                                         */
  __IO uint32_t  SCLH;                              /*!< I2C SCL high duration register                                        */
  __IO uint32_t  SDH;                               /*!< I2C SDA hold register                                                 */
} I2C_Type;


/* ================================================================================ */
/* ================                      USART                     ================ */
/* ================================================================================ */


/**
  * @brief USART 10 (UART + SPI) (USART)
  */

typedef struct {                                    /*!< USART Structure                                                       */
  __IO uint32_t  CR1;                               /*!< USARTn Control Register 1                                             */
  __IO uint32_t  CR2;                               /*!< USARTn Control Register 2                                             */
  __I  uint32_t  RESERVED;
  __IO uint32_t  ST;                                /*!< USARTn Status Register                                                */
  __IO uint32_t  BDR;                               /*!< USARTn Baud Rate Generation Register                                  */
  __IO uint32_t  DR;                                /*!< USARTn Data Register                                                  */
  __IO uint32_t  BFR;                               /*!< USARTn Baud-Rate Fraction Counter Register                            */
  __IO uint32_t  RTO;                               /*!< USARTn Receive Time Out Register                                      */
} USART_Type;


/* ================================================================================ */
/* ================                       ADC                      ================ */
/* ================================================================================ */


/**
  * @brief 12-BIT A/D CONVERTER (ADC)
  */

typedef struct {                                    /*!< ADC Structure                                                         */
  __IO uint32_t  MR;                                /*!< ADC mode register                                                     */
  __IO uint32_t  CSCR;                              /*!< ADC current sequence/channel register                                 */
  __IO uint32_t  CCR;                               /*!< ADC clock control register                                            */
  __IO uint32_t  TRG;                               /*!< ADC trigger select register                                           */
  __I  uint32_t  RESERVED[2];
  __IO uint32_t  SCSR1;                             /*!< ADC Channel Selection Register 1                                      */
  __IO uint32_t  SCSR2;                             /*!< ADC Channel Selection Register 2                                      */
  __IO uint32_t  CR;                                /*!< ADC control register                                                  */
  __IO uint32_t  SR;                                /*!< ADC Status Register                                                   */
  __IO uint32_t  IER;                               /*!< ADC Interrupt Enable Register                                         */
  __I  uint32_t  DDR;                               /*!< ADC DMA data register                                                 */
  __IO uint32_t  DR0;                               /*!< ADC Data 0 register                                                   */
  __IO uint32_t  DR1;                               /*!< ADC Data 1 register                                                   */
  __IO uint32_t  DR2;                               /*!< ADC Data 2 register                                                   */
  __IO uint32_t  DR3;                               /*!< ADC Data 3 register                                                   */
  __IO uint32_t  DR4;                               /*!< ADC Data 4 register                                                   */
  __IO uint32_t  DR5;                               /*!< ADC Data 5 register                                                   */
  __IO uint32_t  DR6;                               /*!< ADC Data 6 register                                                   */
  __IO uint32_t  DR7;                               /*!< ADC Data 7 register                                                   */
  __I  uint32_t  RESERVED1[4];
  __IO uint32_t  CMP0R;                             /*!< ADC Comparator 0 control Register                                     */
  __IO uint32_t  CMP1R;                             /*!< ADC Comparator 1 control Register                                     */
} ADC_Type;


/* ================================================================================ */
/* ================                       CMP                      ================ */
/* ================================================================================ */


/**
  * @brief Comparator (CMP)
  */

typedef struct {                                    /*!< CMP Structure                                                         */
  __IO uint32_t  CMP0_CONF;                         /*!< Comparator 0 Configure Register                                       */
  __IO uint32_t  CMP0_CTRL;                         /*!< Comparator 0 Control Register                                         */
  __IO uint32_t  CMP0_STAT;                         /*!< Comparator 0 Status Register                                          */
  __I  uint32_t  RESERVED;
  __IO uint32_t  CMP1_CONF;                         /*!< Comparator 1 Configure Register                                       */
  __IO uint32_t  CMP1_CTRL;                         /*!< Comparator 1 Control Register                                         */
  __IO uint32_t  CMP1_STAT;                         /*!< Comparator 1 Status Register                                          */
  __I  uint32_t  RESERVED1[9];
  __IO uint32_t  CMP_DBCR;                          /*!< Comparator Debounce Control Register                                  */
} CMP_Type;


/* ================================================================================ */
/* ================                       CRC                      ================ */
/* ================================================================================ */


/**
  * @brief Cyclic Redundancy Check calculation module (CRC)
  */

typedef struct {                                    /*!< CRC Structure                                                         */
  __IO uint32_t  CTRL;                              /*!< CRC control register                                                  */
  __IO uint32_t  INIT;                              /*!< CRC Init Data Register                                                */
  
  union {
    __I  uint32_t  ODR;                             /*!< CRC Output Data Register                                              */
    __O  uint32_t  IDR;                             /*!< CRC Input Data Register                                               */
  };
  __IO uint32_t  STAT;                              /*!< CRC Status Register                                                   */
} CRC_Type;


/* ================================================================================ */
/* ================                     DBGMCU                     ================ */
/* ================================================================================ */


/**
  * @brief Debug MCU Control Register (DBGMCU)
  */

typedef struct {                                    /*!< DBGMCU Structure                                                      */
  __IO uint32_t  CR;                                /*!< Debug MCU Register                                                    */
} DBGMCU_Type;


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
#define SCU_SMR_VDCAON_Pos                    (8UL)                     /*!< SCU SMR: VDCAON (Bit 8)                                     */
#define SCU_SMR_VDCAON_Msk                    (0x100UL)                 /*!< SCU SMR: VDCAON (Bitfield-Mask: 0x01)                       */
#define SCU_SMR_LSIAON_Pos                    (9UL)                     /*!< SCU SMR: LSIAON (Bit 9)                                     */
#define SCU_SMR_LSIAON_Msk                    (0x200UL)                 /*!< SCU SMR: LSIAON (Bitfield-Mask: 0x01)                       */
#define SCU_SMR_HSIAON_Pos                    (10UL)                    /*!< SCU SMR: HSIAON (Bit 10)                                    */
#define SCU_SMR_HSIAON_Msk                    (0x400UL)                 /*!< SCU SMR: HSIAON (Bitfield-Mask: 0x01)                       */
#define SCU_SMR_HSEAON_Pos                    (12UL)                    /*!< SCU SMR: HSEAON (Bit 12)                                    */
#define SCU_SMR_HSEAON_Msk                    (0x1000UL)                /*!< SCU SMR: HSEAON (Bitfield-Mask: 0x01)                       */
#define SCU_SMR_LSEAON_Pos                    (13UL)                    /*!< SCU SMR: LSEAON (Bit 13)                                    */
#define SCU_SMR_LSEAON_Msk                    (0x2000UL)                /*!< SCU SMR: LSEAON (Bitfield-Mask: 0x01)                       */

/* ----------------------------------  SCU_SRCR  ---------------------------------- */
#define SCU_SRCR_SWRST_Pos                    (0UL)                     /*!< SCU SRCR: SWRST (Bit 0)                                     */
#define SCU_SRCR_SWRST_Msk                    (0x1UL)                   /*!< SCU SRCR: SWRST (Bitfield-Mask: 0x01)                       */
#define SCU_SRCR_STBYO_Pos                    (4UL)                     /*!< SCU SRCR: STBYO (Bit 4)                                     */
#define SCU_SRCR_STBYO_Msk                    (0x10UL)                  /*!< SCU SRCR: STBYO (Bitfield-Mask: 0x01)                       */

/* ----------------------------------  SCU_WUER  ---------------------------------- */
#define SCU_WUER_LVIWUE_Pos                   (0UL)                     /*!< SCU WUER: LVIWUE (Bit 0)                                    */
#define SCU_WUER_LVIWUE_Msk                   (0x1UL)                   /*!< SCU WUER: LVIWUE (Bitfield-Mask: 0x01)                      */
#define SCU_WUER_WDTWUE_Pos                   (1UL)                     /*!< SCU WUER: WDTWUE (Bit 1)                                    */
#define SCU_WUER_WDTWUE_Msk                   (0x2UL)                   /*!< SCU WUER: WDTWUE (Bitfield-Mask: 0x01)                      */
#define SCU_WUER_FRTWUE_Pos                   (2UL)                     /*!< SCU WUER: FRTWUE (Bit 2)                                    */
#define SCU_WUER_FRTWUE_Msk                   (0x4UL)                   /*!< SCU WUER: FRTWUE (Bitfield-Mask: 0x01)                      */
#define SCU_WUER_USART10WUE_Pos               (5UL)                     /*!< SCU WUER: USART10WUE (Bit 5)                                */
#define SCU_WUER_USART10WUE_Msk               (0x20UL)                  /*!< SCU WUER: USART10WUE (Bitfield-Mask: 0x01)                  */
#define SCU_WUER_USART11WUE_Pos               (6UL)                     /*!< SCU WUER: USART11WUE (Bit 6)                                */
#define SCU_WUER_USART11WUE_Msk               (0x40UL)                  /*!< SCU WUER: USART11WUE (Bitfield-Mask: 0x01)                  */
#define SCU_WUER_USART12WUE_Pos               (7UL)                     /*!< SCU WUER: USART12WUE (Bit 7)                                */
#define SCU_WUER_USART12WUE_Msk               (0x80UL)                  /*!< SCU WUER: USART12WUE (Bitfield-Mask: 0x01)                  */
#define SCU_WUER_GPIOAWUE_Pos                 (8UL)                     /*!< SCU WUER: GPIOAWUE (Bit 8)                                  */
#define SCU_WUER_GPIOAWUE_Msk                 (0x100UL)                 /*!< SCU WUER: GPIOAWUE (Bitfield-Mask: 0x01)                    */
#define SCU_WUER_GPIOBWUE_Pos                 (9UL)                     /*!< SCU WUER: GPIOBWUE (Bit 9)                                  */
#define SCU_WUER_GPIOBWUE_Msk                 (0x200UL)                 /*!< SCU WUER: GPIOBWUE (Bitfield-Mask: 0x01)                    */
#define SCU_WUER_GPIOCWUE_Pos                 (10UL)                    /*!< SCU WUER: GPIOCWUE (Bit 10)                                 */
#define SCU_WUER_GPIOCWUE_Msk                 (0x400UL)                 /*!< SCU WUER: GPIOCWUE (Bitfield-Mask: 0x01)                    */
#define SCU_WUER_GPIODWUE_Pos                 (11UL)                    /*!< SCU WUER: GPIODWUE (Bit 11)                                 */
#define SCU_WUER_GPIODWUE_Msk                 (0x800UL)                 /*!< SCU WUER: GPIODWUE (Bitfield-Mask: 0x01)                    */
#define SCU_WUER_GPIOEWUE_Pos                 (12UL)                    /*!< SCU WUER: GPIOEWUE (Bit 12)                                 */
#define SCU_WUER_GPIOEWUE_Msk                 (0x1000UL)                /*!< SCU WUER: GPIOEWUE (Bitfield-Mask: 0x01)                    */
#define SCU_WUER_GPIOFWUE_Pos                 (13UL)                    /*!< SCU WUER: GPIOFWUE (Bit 13)                                 */
#define SCU_WUER_GPIOFWUE_Msk                 (0x2000UL)                /*!< SCU WUER: GPIOFWUE (Bitfield-Mask: 0x01)                    */

/* ----------------------------------  SCU_WUSR  ---------------------------------- */
#define SCU_WUSR_LVIWU_Pos                    (0UL)                     /*!< SCU WUSR: LVIWU (Bit 0)                                     */
#define SCU_WUSR_LVIWU_Msk                    (0x1UL)                   /*!< SCU WUSR: LVIWU (Bitfield-Mask: 0x01)                       */
#define SCU_WUSR_WDTWU_Pos                    (1UL)                     /*!< SCU WUSR: WDTWU (Bit 1)                                     */
#define SCU_WUSR_WDTWU_Msk                    (0x2UL)                   /*!< SCU WUSR: WDTWU (Bitfield-Mask: 0x01)                       */
#define SCU_WUSR_FRTWU_Pos                    (2UL)                     /*!< SCU WUSR: FRTWU (Bit 2)                                     */
#define SCU_WUSR_FRTWU_Msk                    (0x4UL)                   /*!< SCU WUSR: FRTWU (Bitfield-Mask: 0x01)                       */
#define SCU_WUSR_USART10WU_Pos                (5UL)                     /*!< SCU WUSR: USART10WU (Bit 5)                                 */
#define SCU_WUSR_USART10WU_Msk                (0x20UL)                  /*!< SCU WUSR: USART10WU (Bitfield-Mask: 0x01)                   */
#define SCU_WUSR_USART11WU_Pos                (6UL)                     /*!< SCU WUSR: USART11WU (Bit 6)                                 */
#define SCU_WUSR_USART11WU_Msk                (0x40UL)                  /*!< SCU WUSR: USART11WU (Bitfield-Mask: 0x01)                   */
#define SCU_WUSR_USART12WU_Pos                (7UL)                     /*!< SCU WUSR: USART12WU (Bit 7)                                 */
#define SCU_WUSR_USART12WU_Msk                (0x80UL)                  /*!< SCU WUSR: USART12WU (Bitfield-Mask: 0x01)                   */
#define SCU_WUSR_GPIOAWU_Pos                  (8UL)                     /*!< SCU WUSR: GPIOAWU (Bit 8)                                   */
#define SCU_WUSR_GPIOAWU_Msk                  (0x100UL)                 /*!< SCU WUSR: GPIOAWU (Bitfield-Mask: 0x01)                     */
#define SCU_WUSR_GPIOBWU_Pos                  (9UL)                     /*!< SCU WUSR: GPIOBWU (Bit 9)                                   */
#define SCU_WUSR_GPIOBWU_Msk                  (0x200UL)                 /*!< SCU WUSR: GPIOBWU (Bitfield-Mask: 0x01)                     */
#define SCU_WUSR_GPIOCWU_Pos                  (10UL)                    /*!< SCU WUSR: GPIOCWU (Bit 10)                                  */
#define SCU_WUSR_GPIOCWU_Msk                  (0x400UL)                 /*!< SCU WUSR: GPIOCWU (Bitfield-Mask: 0x01)                     */
#define SCU_WUSR_GPIODWU_Pos                  (11UL)                    /*!< SCU WUSR: GPIODWU (Bit 11)                                  */
#define SCU_WUSR_GPIODWU_Msk                  (0x800UL)                 /*!< SCU WUSR: GPIODWU (Bitfield-Mask: 0x01)                     */
#define SCU_WUSR_GPIOEWU_Pos                  (12UL)                    /*!< SCU WUSR: GPIOEWU (Bit 12)                                  */
#define SCU_WUSR_GPIOEWU_Msk                  (0x1000UL)                /*!< SCU WUSR: GPIOEWU (Bitfield-Mask: 0x01)                     */
#define SCU_WUSR_GPIOFWU_Pos                  (13UL)                    /*!< SCU WUSR: GPIOFWU (Bit 13)                                  */
#define SCU_WUSR_GPIOFWU_Msk                  (0x2000UL)                /*!< SCU WUSR: GPIOFWU (Bitfield-Mask: 0x01)                     */

/* ----------------------------------  SCU_RSER  ---------------------------------- */
#define SCU_RSER_LVDRST_Pos                   (0UL)                     /*!< SCU RSER: LVDRST (Bit 0)                                    */
#define SCU_RSER_LVDRST_Msk                   (0x1UL)                   /*!< SCU RSER: LVDRST (Bitfield-Mask: 0x01)                      */
#define SCU_RSER_HSEFRST_Pos                  (1UL)                     /*!< SCU RSER: HSEFRST (Bit 1)                                   */
#define SCU_RSER_HSEFRST_Msk                  (0x2UL)                   /*!< SCU RSER: HSEFRST (Bitfield-Mask: 0x01)                     */
#define SCU_RSER_LSEFRST_Pos                  (2UL)                     /*!< SCU RSER: LSEFRST (Bit 2)                                   */
#define SCU_RSER_LSEFRST_Msk                  (0x4UL)                   /*!< SCU RSER: LSEFRST (Bitfield-Mask: 0x01)                     */
#define SCU_RSER_MCLKFRST_Pos                 (3UL)                     /*!< SCU RSER: MCLKFRST (Bit 3)                                  */
#define SCU_RSER_MCLKFRST_Msk                 (0x8UL)                   /*!< SCU RSER: MCLKFRST (Bitfield-Mask: 0x01)                    */
#define SCU_RSER_WDTRST_Pos                   (4UL)                     /*!< SCU RSER: WDTRST (Bit 4)                                    */
#define SCU_RSER_WDTRST_Msk                   (0x10UL)                  /*!< SCU RSER: WDTRST (Bitfield-Mask: 0x01)                      */
#define SCU_RSER_SWRST_Pos                    (5UL)                     /*!< SCU RSER: SWRST (Bit 5)                                     */
#define SCU_RSER_SWRST_Msk                    (0x20UL)                  /*!< SCU RSER: SWRST (Bitfield-Mask: 0x01)                       */
#define SCU_RSER_CPURST_Pos                   (6UL)                     /*!< SCU RSER: CPURST (Bit 6)                                    */
#define SCU_RSER_CPURST_Msk                   (0x40UL)                  /*!< SCU RSER: CPURST (Bitfield-Mask: 0x01)                      */
#define SCU_RSER_PINRST_Pos                   (7UL)                     /*!< SCU RSER: PINRST (Bit 7)                                    */
#define SCU_RSER_PINRST_Msk                   (0x80UL)                  /*!< SCU RSER: PINRST (Bitfield-Mask: 0x01)                      */
#define SCU_RSER_LOCKUPRST_Pos                (9UL)                     /*!< SCU RSER: LOCKUPRST (Bit 9)                                 */
#define SCU_RSER_LOCKUPRST_Msk                (0x200UL)                 /*!< SCU RSER: LOCKUPRST (Bitfield-Mask: 0x01)                   */

/* ----------------------------------  SCU_RSSR  ---------------------------------- */
#define SCU_RSSR_LVDRST_Pos                   (0UL)                     /*!< SCU RSSR: LVDRST (Bit 0)                                    */
#define SCU_RSSR_LVDRST_Msk                   (0x1UL)                   /*!< SCU RSSR: LVDRST (Bitfield-Mask: 0x01)                      */
#define SCU_RSSR_HSEFRST_Pos                  (1UL)                     /*!< SCU RSSR: HSEFRST (Bit 1)                                   */
#define SCU_RSSR_HSEFRST_Msk                  (0x2UL)                   /*!< SCU RSSR: HSEFRST (Bitfield-Mask: 0x01)                     */
#define SCU_RSSR_LSEFRST_Pos                  (2UL)                     /*!< SCU RSSR: LSEFRST (Bit 2)                                   */
#define SCU_RSSR_LSEFRST_Msk                  (0x4UL)                   /*!< SCU RSSR: LSEFRST (Bitfield-Mask: 0x01)                     */
#define SCU_RSSR_MCLKFRST_Pos                 (3UL)                     /*!< SCU RSSR: MCLKFRST (Bit 3)                                  */
#define SCU_RSSR_MCLKFRST_Msk                 (0x8UL)                   /*!< SCU RSSR: MCLKFRST (Bitfield-Mask: 0x01)                    */
#define SCU_RSSR_WDTRST_Pos                   (4UL)                     /*!< SCU RSSR: WDTRST (Bit 4)                                    */
#define SCU_RSSR_WDTRST_Msk                   (0x10UL)                  /*!< SCU RSSR: WDTRST (Bitfield-Mask: 0x01)                      */
#define SCU_RSSR_SWRST_Pos                    (5UL)                     /*!< SCU RSSR: SWRST (Bit 5)                                     */
#define SCU_RSSR_SWRST_Msk                    (0x20UL)                  /*!< SCU RSSR: SWRST (Bitfield-Mask: 0x01)                       */
#define SCU_RSSR_CPURST_Pos                   (6UL)                     /*!< SCU RSSR: CPURST (Bit 6)                                    */
#define SCU_RSSR_CPURST_Msk                   (0x40UL)                  /*!< SCU RSSR: CPURST (Bitfield-Mask: 0x01)                      */
#define SCU_RSSR_PINRST_Pos                   (7UL)                     /*!< SCU RSSR: PINRST (Bit 7)                                    */
#define SCU_RSSR_PINRST_Msk                   (0x80UL)                  /*!< SCU RSSR: PINRST (Bitfield-Mask: 0x01)                      */
#define SCU_RSSR_PORST_Pos                    (8UL)                     /*!< SCU RSSR: PORST (Bit 8)                                     */
#define SCU_RSSR_PORST_Msk                    (0x100UL)                 /*!< SCU RSSR: PORST (Bitfield-Mask: 0x01)                       */
#define SCU_RSSR_LOCKUPRST_Pos                (9UL)                     /*!< SCU RSSR: LOCKUPRST (Bit 9)                                 */
#define SCU_RSSR_LOCKUPRST_Msk                (0x200UL)                 /*!< SCU RSSR: LOCKUPRST (Bitfield-Mask: 0x01)                   */

/* ----------------------------------  SCU_PRER1  --------------------------------- */
#define SCU_PRER1_SCU_Pos                     (0UL)                     /*!< SCU PRER1: SCU (Bit 0)                                      */
#define SCU_PRER1_SCU_Msk                     (0x1UL)                   /*!< SCU PRER1: SCU (Bitfield-Mask: 0x01)                        */
#define SCU_PRER1_CFMC_Pos                    (1UL)                     /*!< SCU PRER1: CFMC (Bit 1)                                     */
#define SCU_PRER1_CFMC_Msk                    (0x2UL)                   /*!< SCU PRER1: CFMC (Bitfield-Mask: 0x01)                       */
#define SCU_PRER1_WDT_Pos                     (2UL)                     /*!< SCU PRER1: WDT (Bit 2)                                      */
#define SCU_PRER1_WDT_Msk                     (0x4UL)                   /*!< SCU PRER1: WDT (Bitfield-Mask: 0x01)                        */
#define SCU_PRER1_DMA_Pos                     (4UL)                     /*!< SCU PRER1: DMA (Bit 4)                                      */
#define SCU_PRER1_DMA_Msk                     (0x10UL)                  /*!< SCU PRER1: DMA (Bitfield-Mask: 0x01)                        */
#define SCU_PRER1_HSICMU_Pos                  (5UL)                     /*!< SCU PRER1: HSICMU (Bit 5)                                   */
#define SCU_PRER1_HSICMU_Msk                  (0x20UL)                  /*!< SCU PRER1: HSICMU (Bitfield-Mask: 0x01)                     */
#define SCU_PRER1_FRT_Pos                     (6UL)                     /*!< SCU PRER1: FRT (Bit 6)                                      */
#define SCU_PRER1_FRT_Msk                     (0x40UL)                  /*!< SCU PRER1: FRT (Bitfield-Mask: 0x01)                        */
#define SCU_PRER1_GPIOA_Pos                   (8UL)                     /*!< SCU PRER1: GPIOA (Bit 8)                                    */
#define SCU_PRER1_GPIOA_Msk                   (0x100UL)                 /*!< SCU PRER1: GPIOA (Bitfield-Mask: 0x01)                      */
#define SCU_PRER1_GPIOB_Pos                   (9UL)                     /*!< SCU PRER1: GPIOB (Bit 9)                                    */
#define SCU_PRER1_GPIOB_Msk                   (0x200UL)                 /*!< SCU PRER1: GPIOB (Bitfield-Mask: 0x01)                      */
#define SCU_PRER1_GPIOC_Pos                   (10UL)                    /*!< SCU PRER1: GPIOC (Bit 10)                                   */
#define SCU_PRER1_GPIOC_Msk                   (0x400UL)                 /*!< SCU PRER1: GPIOC (Bitfield-Mask: 0x01)                      */
#define SCU_PRER1_GPIOD_Pos                   (11UL)                    /*!< SCU PRER1: GPIOD (Bit 11)                                   */
#define SCU_PRER1_GPIOD_Msk                   (0x800UL)                 /*!< SCU PRER1: GPIOD (Bitfield-Mask: 0x01)                      */
#define SCU_PRER1_GPIOE_Pos                   (12UL)                    /*!< SCU PRER1: GPIOE (Bit 12)                                   */
#define SCU_PRER1_GPIOE_Msk                   (0x1000UL)                /*!< SCU PRER1: GPIOE (Bitfield-Mask: 0x01)                      */
#define SCU_PRER1_GPIOF_Pos                   (13UL)                    /*!< SCU PRER1: GPIOF (Bit 13)                                   */
#define SCU_PRER1_GPIOF_Msk                   (0x2000UL)                /*!< SCU PRER1: GPIOF (Bitfield-Mask: 0x01)                      */
#define SCU_PRER1_TIMER0_Pos                  (16UL)                    /*!< SCU PRER1: TIMER0 (Bit 16)                                  */
#define SCU_PRER1_TIMER0_Msk                  (0x10000UL)               /*!< SCU PRER1: TIMER0 (Bitfield-Mask: 0x01)                     */
#define SCU_PRER1_TIMER1_Pos                  (17UL)                    /*!< SCU PRER1: TIMER1 (Bit 17)                                  */
#define SCU_PRER1_TIMER1_Msk                  (0x20000UL)               /*!< SCU PRER1: TIMER1 (Bitfield-Mask: 0x01)                     */
#define SCU_PRER1_TIMER2_Pos                  (18UL)                    /*!< SCU PRER1: TIMER2 (Bit 18)                                  */
#define SCU_PRER1_TIMER2_Msk                  (0x40000UL)               /*!< SCU PRER1: TIMER2 (Bitfield-Mask: 0x01)                     */
#define SCU_PRER1_TIMER3_Pos                  (19UL)                    /*!< SCU PRER1: TIMER3 (Bit 19)                                  */
#define SCU_PRER1_TIMER3_Msk                  (0x80000UL)               /*!< SCU PRER1: TIMER3 (Bitfield-Mask: 0x01)                     */
#define SCU_PRER1_TIMER4_Pos                  (20UL)                    /*!< SCU PRER1: TIMER4 (Bit 20)                                  */
#define SCU_PRER1_TIMER4_Msk                  (0x100000UL)              /*!< SCU PRER1: TIMER4 (Bitfield-Mask: 0x01)                     */
#define SCU_PRER1_TIMER5_Pos                  (21UL)                    /*!< SCU PRER1: TIMER5 (Bit 21)                                  */
#define SCU_PRER1_TIMER5_Msk                  (0x200000UL)              /*!< SCU PRER1: TIMER5 (Bitfield-Mask: 0x01)                     */
#define SCU_PRER1_TIMER6_Pos                  (22UL)                    /*!< SCU PRER1: TIMER6 (Bit 22)                                  */
#define SCU_PRER1_TIMER6_Msk                  (0x400000UL)              /*!< SCU PRER1: TIMER6 (Bitfield-Mask: 0x01)                     */
#define SCU_PRER1_TIMER7_Pos                  (23UL)                    /*!< SCU PRER1: TIMER7 (Bit 23)                                  */
#define SCU_PRER1_TIMER7_Msk                  (0x800000UL)              /*!< SCU PRER1: TIMER7 (Bitfield-Mask: 0x01)                     */
#define SCU_PRER1_TIMER8_Pos                  (24UL)                    /*!< SCU PRER1: TIMER8 (Bit 24)                                  */
#define SCU_PRER1_TIMER8_Msk                  (0x1000000UL)             /*!< SCU PRER1: TIMER8 (Bitfield-Mask: 0x01)                     */
#define SCU_PRER1_TIMER9_Pos                  (25UL)                    /*!< SCU PRER1: TIMER9 (Bit 25)                                  */
#define SCU_PRER1_TIMER9_Msk                  (0x2000000UL)             /*!< SCU PRER1: TIMER9 (Bitfield-Mask: 0x01)                     */

/* ----------------------------------  SCU_PRER2  --------------------------------- */
#define SCU_PRER2_USART10_Pos                 (0UL)                     /*!< SCU PRER2: USART10 (Bit 0)                                  */
#define SCU_PRER2_USART10_Msk                 (0x1UL)                   /*!< SCU PRER2: USART10 (Bitfield-Mask: 0x01)                    */
#define SCU_PRER2_USART11_Pos                 (1UL)                     /*!< SCU PRER2: USART11 (Bit 1)                                  */
#define SCU_PRER2_USART11_Msk                 (0x2UL)                   /*!< SCU PRER2: USART11 (Bitfield-Mask: 0x01)                    */
#define SCU_PRER2_USART12_Pos                 (2UL)                     /*!< SCU PRER2: USART12 (Bit 2)                                  */
#define SCU_PRER2_USART12_Msk                 (0x4UL)                   /*!< SCU PRER2: USART12 (Bitfield-Mask: 0x01)                    */
#define SCU_PRER2_I2C0_Pos                    (3UL)                     /*!< SCU PRER2: I2C0 (Bit 3)                                     */
#define SCU_PRER2_I2C0_Msk                    (0x8UL)                   /*!< SCU PRER2: I2C0 (Bitfield-Mask: 0x01)                       */
#define SCU_PRER2_I2C1_Pos                    (4UL)                     /*!< SCU PRER2: I2C1 (Bit 4)                                     */
#define SCU_PRER2_I2C1_Msk                    (0x10UL)                  /*!< SCU PRER2: I2C1 (Bitfield-Mask: 0x01)                       */
#define SCU_PRER2_I2C2_Pos                    (5UL)                     /*!< SCU PRER2: I2C2 (Bit 5)                                     */
#define SCU_PRER2_I2C2_Msk                    (0x20UL)                  /*!< SCU PRER2: I2C2 (Bitfield-Mask: 0x01)                       */
#define SCU_PRER2_UART0_Pos                   (8UL)                     /*!< SCU PRER2: UART0 (Bit 8)                                    */
#define SCU_PRER2_UART0_Msk                   (0x100UL)                 /*!< SCU PRER2: UART0 (Bitfield-Mask: 0x01)                      */
#define SCU_PRER2_UART1_Pos                   (9UL)                     /*!< SCU PRER2: UART1 (Bit 9)                                    */
#define SCU_PRER2_UART1_Msk                   (0x200UL)                 /*!< SCU PRER2: UART1 (Bitfield-Mask: 0x01)                      */
#define SCU_PRER2_ADC_Pos                     (20UL)                    /*!< SCU PRER2: ADC (Bit 20)                                     */
#define SCU_PRER2_ADC_Msk                     (0x100000UL)              /*!< SCU PRER2: ADC (Bitfield-Mask: 0x01)                        */
#define SCU_PRER2_CMP_Pos                     (28UL)                    /*!< SCU PRER2: CMP (Bit 28)                                     */
#define SCU_PRER2_CMP_Msk                     (0x10000000UL)            /*!< SCU PRER2: CMP (Bitfield-Mask: 0x01)                        */
#define SCU_PRER2_CRC_Pos                     (29UL)                    /*!< SCU PRER2: CRC (Bit 29)                                     */
#define SCU_PRER2_CRC_Msk                     (0x20000000UL)            /*!< SCU PRER2: CRC (Bitfield-Mask: 0x01)                        */

/* ----------------------------------  SCU_PER1  ---------------------------------- */
#define SCU_PER1_DMA_Pos                      (4UL)                     /*!< SCU PER1: DMA (Bit 4)                                       */
#define SCU_PER1_DMA_Msk                      (0x10UL)                  /*!< SCU PER1: DMA (Bitfield-Mask: 0x01)                         */
#define SCU_PER1_HSICMU_Pos                   (5UL)                     /*!< SCU PER1: HSICMU (Bit 5)                                    */
#define SCU_PER1_HSICMU_Msk                   (0x20UL)                  /*!< SCU PER1: HSICMU (Bitfield-Mask: 0x01)                      */
#define SCU_PER1_FRT_Pos                      (6UL)                     /*!< SCU PER1: FRT (Bit 6)                                       */
#define SCU_PER1_FRT_Msk                      (0x40UL)                  /*!< SCU PER1: FRT (Bitfield-Mask: 0x01)                         */
#define SCU_PER1_GPIOA_Pos                    (8UL)                     /*!< SCU PER1: GPIOA (Bit 8)                                     */
#define SCU_PER1_GPIOA_Msk                    (0x100UL)                 /*!< SCU PER1: GPIOA (Bitfield-Mask: 0x01)                       */
#define SCU_PER1_GPIOB_Pos                    (9UL)                     /*!< SCU PER1: GPIOB (Bit 9)                                     */
#define SCU_PER1_GPIOB_Msk                    (0x200UL)                 /*!< SCU PER1: GPIOB (Bitfield-Mask: 0x01)                       */
#define SCU_PER1_GPIOC_Pos                    (10UL)                    /*!< SCU PER1: GPIOC (Bit 10)                                    */
#define SCU_PER1_GPIOC_Msk                    (0x400UL)                 /*!< SCU PER1: GPIOC (Bitfield-Mask: 0x01)                       */
#define SCU_PER1_GPIOD_Pos                    (11UL)                    /*!< SCU PER1: GPIOD (Bit 11)                                    */
#define SCU_PER1_GPIOD_Msk                    (0x800UL)                 /*!< SCU PER1: GPIOD (Bitfield-Mask: 0x01)                       */
#define SCU_PER1_GPIOE_Pos                    (12UL)                    /*!< SCU PER1: GPIOE (Bit 12)                                    */
#define SCU_PER1_GPIOE_Msk                    (0x1000UL)                /*!< SCU PER1: GPIOE (Bitfield-Mask: 0x01)                       */
#define SCU_PER1_GPIOF_Pos                    (13UL)                    /*!< SCU PER1: GPIOF (Bit 13)                                    */
#define SCU_PER1_GPIOF_Msk                    (0x2000UL)                /*!< SCU PER1: GPIOF (Bitfield-Mask: 0x01)                       */
#define SCU_PER1_TIMER0_Pos                   (16UL)                    /*!< SCU PER1: TIMER0 (Bit 16)                                   */
#define SCU_PER1_TIMER0_Msk                   (0x10000UL)               /*!< SCU PER1: TIMER0 (Bitfield-Mask: 0x01)                      */
#define SCU_PER1_TIMER1_Pos                   (17UL)                    /*!< SCU PER1: TIMER1 (Bit 17)                                   */
#define SCU_PER1_TIMER1_Msk                   (0x20000UL)               /*!< SCU PER1: TIMER1 (Bitfield-Mask: 0x01)                      */
#define SCU_PER1_TIMER2_Pos                   (18UL)                    /*!< SCU PER1: TIMER2 (Bit 18)                                   */
#define SCU_PER1_TIMER2_Msk                   (0x40000UL)               /*!< SCU PER1: TIMER2 (Bitfield-Mask: 0x01)                      */
#define SCU_PER1_TIMER3_Pos                   (19UL)                    /*!< SCU PER1: TIMER3 (Bit 19)                                   */
#define SCU_PER1_TIMER3_Msk                   (0x80000UL)               /*!< SCU PER1: TIMER3 (Bitfield-Mask: 0x01)                      */
#define SCU_PER1_TIMER4_Pos                   (20UL)                    /*!< SCU PER1: TIMER4 (Bit 20)                                   */
#define SCU_PER1_TIMER4_Msk                   (0x100000UL)              /*!< SCU PER1: TIMER4 (Bitfield-Mask: 0x01)                      */
#define SCU_PER1_TIMER5_Pos                   (21UL)                    /*!< SCU PER1: TIMER5 (Bit 21)                                   */
#define SCU_PER1_TIMER5_Msk                   (0x200000UL)              /*!< SCU PER1: TIMER5 (Bitfield-Mask: 0x01)                      */
#define SCU_PER1_TIMER6_Pos                   (22UL)                    /*!< SCU PER1: TIMER6 (Bit 22)                                   */
#define SCU_PER1_TIMER6_Msk                   (0x400000UL)              /*!< SCU PER1: TIMER6 (Bitfield-Mask: 0x01)                      */
#define SCU_PER1_TIMER7_Pos                   (23UL)                    /*!< SCU PER1: TIMER7 (Bit 23)                                   */
#define SCU_PER1_TIMER7_Msk                   (0x800000UL)              /*!< SCU PER1: TIMER7 (Bitfield-Mask: 0x01)                      */
#define SCU_PER1_TIMER8_Pos                   (24UL)                    /*!< SCU PER1: TIMER8 (Bit 24)                                   */
#define SCU_PER1_TIMER8_Msk                   (0x1000000UL)             /*!< SCU PER1: TIMER8 (Bitfield-Mask: 0x01)                      */
#define SCU_PER1_TIMER9_Pos                   (25UL)                    /*!< SCU PER1: TIMER9 (Bit 25)                                   */
#define SCU_PER1_TIMER9_Msk                   (0x2000000UL)             /*!< SCU PER1: TIMER9 (Bitfield-Mask: 0x01)                      */

/* ----------------------------------  SCU_PER2  ---------------------------------- */
#define SCU_PER2_USART10_Pos                  (0UL)                     /*!< SCU PER2: USART10 (Bit 0)                                   */
#define SCU_PER2_USART10_Msk                  (0x1UL)                   /*!< SCU PER2: USART10 (Bitfield-Mask: 0x01)                     */
#define SCU_PER2_USART11_Pos                  (1UL)                     /*!< SCU PER2: USART11 (Bit 1)                                   */
#define SCU_PER2_USART11_Msk                  (0x2UL)                   /*!< SCU PER2: USART11 (Bitfield-Mask: 0x01)                     */
#define SCU_PER2_USART12_Pos                  (2UL)                     /*!< SCU PER2: USART12 (Bit 2)                                   */
#define SCU_PER2_USART12_Msk                  (0x4UL)                   /*!< SCU PER2: USART12 (Bitfield-Mask: 0x01)                     */
#define SCU_PER2_I2C0_Pos                     (3UL)                     /*!< SCU PER2: I2C0 (Bit 3)                                      */
#define SCU_PER2_I2C0_Msk                     (0x8UL)                   /*!< SCU PER2: I2C0 (Bitfield-Mask: 0x01)                        */
#define SCU_PER2_I2C1_Pos                     (4UL)                     /*!< SCU PER2: I2C1 (Bit 4)                                      */
#define SCU_PER2_I2C1_Msk                     (0x10UL)                  /*!< SCU PER2: I2C1 (Bitfield-Mask: 0x01)                        */
#define SCU_PER2_I2C2_Pos                     (5UL)                     /*!< SCU PER2: I2C2 (Bit 5)                                      */
#define SCU_PER2_I2C2_Msk                     (0x20UL)                  /*!< SCU PER2: I2C2 (Bitfield-Mask: 0x01)                        */
#define SCU_PER2_UART0_Pos                    (8UL)                     /*!< SCU PER2: UART0 (Bit 8)                                     */
#define SCU_PER2_UART0_Msk                    (0x100UL)                 /*!< SCU PER2: UART0 (Bitfield-Mask: 0x01)                       */
#define SCU_PER2_UART1_Pos                    (9UL)                     /*!< SCU PER2: UART1 (Bit 9)                                     */
#define SCU_PER2_UART1_Msk                    (0x200UL)                 /*!< SCU PER2: UART1 (Bitfield-Mask: 0x01)                       */
#define SCU_PER2_ADC_Pos                      (20UL)                    /*!< SCU PER2: ADC (Bit 20)                                      */
#define SCU_PER2_ADC_Msk                      (0x100000UL)              /*!< SCU PER2: ADC (Bitfield-Mask: 0x01)                         */
#define SCU_PER2_CMP_Pos                      (28UL)                    /*!< SCU PER2: CMP (Bit 28)                                      */
#define SCU_PER2_CMP_Msk                      (0x10000000UL)            /*!< SCU PER2: CMP (Bitfield-Mask: 0x01)                         */
#define SCU_PER2_CRC_Pos                      (29UL)                    /*!< SCU PER2: CRC (Bit 29)                                      */
#define SCU_PER2_CRC_Msk                      (0x20000000UL)            /*!< SCU PER2: CRC (Bitfield-Mask: 0x01)                         */

/* ----------------------------------  SCU_PCER1  --------------------------------- */
#define SCU_PCER1_DMA_Pos                     (4UL)                     /*!< SCU PCER1: DMA (Bit 4)                                      */
#define SCU_PCER1_DMA_Msk                     (0x10UL)                  /*!< SCU PCER1: DMA (Bitfield-Mask: 0x01)                        */
#define SCU_PCER1_HSICMU_Pos                  (5UL)                     /*!< SCU PCER1: HSICMU (Bit 5)                                   */
#define SCU_PCER1_HSICMU_Msk                  (0x20UL)                  /*!< SCU PCER1: HSICMU (Bitfield-Mask: 0x01)                     */
#define SCU_PCER1_FRT_Pos                     (6UL)                     /*!< SCU PCER1: FRT (Bit 6)                                      */
#define SCU_PCER1_FRT_Msk                     (0x40UL)                  /*!< SCU PCER1: FRT (Bitfield-Mask: 0x01)                        */
#define SCU_PCER1_GPIOA_Pos                   (8UL)                     /*!< SCU PCER1: GPIOA (Bit 8)                                    */
#define SCU_PCER1_GPIOA_Msk                   (0x100UL)                 /*!< SCU PCER1: GPIOA (Bitfield-Mask: 0x01)                      */
#define SCU_PCER1_GPIOB_Pos                   (9UL)                     /*!< SCU PCER1: GPIOB (Bit 9)                                    */
#define SCU_PCER1_GPIOB_Msk                   (0x200UL)                 /*!< SCU PCER1: GPIOB (Bitfield-Mask: 0x01)                      */
#define SCU_PCER1_GPIOC_Pos                   (10UL)                    /*!< SCU PCER1: GPIOC (Bit 10)                                   */
#define SCU_PCER1_GPIOC_Msk                   (0x400UL)                 /*!< SCU PCER1: GPIOC (Bitfield-Mask: 0x01)                      */
#define SCU_PCER1_GPIOD_Pos                   (11UL)                    /*!< SCU PCER1: GPIOD (Bit 11)                                   */
#define SCU_PCER1_GPIOD_Msk                   (0x800UL)                 /*!< SCU PCER1: GPIOD (Bitfield-Mask: 0x01)                      */
#define SCU_PCER1_GPIOE_Pos                   (12UL)                    /*!< SCU PCER1: GPIOE (Bit 12)                                   */
#define SCU_PCER1_GPIOE_Msk                   (0x1000UL)                /*!< SCU PCER1: GPIOE (Bitfield-Mask: 0x01)                      */
#define SCU_PCER1_GPIOF_Pos                   (13UL)                    /*!< SCU PCER1: GPIOF (Bit 13)                                   */
#define SCU_PCER1_GPIOF_Msk                   (0x2000UL)                /*!< SCU PCER1: GPIOF (Bitfield-Mask: 0x01)                      */
#define SCU_PCER1_TIMER0_Pos                  (16UL)                    /*!< SCU PCER1: TIMER0 (Bit 16)                                  */
#define SCU_PCER1_TIMER0_Msk                  (0x10000UL)               /*!< SCU PCER1: TIMER0 (Bitfield-Mask: 0x01)                     */
#define SCU_PCER1_TIMER1_Pos                  (17UL)                    /*!< SCU PCER1: TIMER1 (Bit 17)                                  */
#define SCU_PCER1_TIMER1_Msk                  (0x20000UL)               /*!< SCU PCER1: TIMER1 (Bitfield-Mask: 0x01)                     */
#define SCU_PCER1_TIMER2_Pos                  (18UL)                    /*!< SCU PCER1: TIMER2 (Bit 18)                                  */
#define SCU_PCER1_TIMER2_Msk                  (0x40000UL)               /*!< SCU PCER1: TIMER2 (Bitfield-Mask: 0x01)                     */
#define SCU_PCER1_TIMER3_Pos                  (19UL)                    /*!< SCU PCER1: TIMER3 (Bit 19)                                  */
#define SCU_PCER1_TIMER3_Msk                  (0x80000UL)               /*!< SCU PCER1: TIMER3 (Bitfield-Mask: 0x01)                     */
#define SCU_PCER1_TIMER4_Pos                  (20UL)                    /*!< SCU PCER1: TIMER4 (Bit 20)                                  */
#define SCU_PCER1_TIMER4_Msk                  (0x100000UL)              /*!< SCU PCER1: TIMER4 (Bitfield-Mask: 0x01)                     */
#define SCU_PCER1_TIMER5_Pos                  (21UL)                    /*!< SCU PCER1: TIMER5 (Bit 21)                                  */
#define SCU_PCER1_TIMER5_Msk                  (0x200000UL)              /*!< SCU PCER1: TIMER5 (Bitfield-Mask: 0x01)                     */
#define SCU_PCER1_TIMER6_Pos                  (22UL)                    /*!< SCU PCER1: TIMER6 (Bit 22)                                  */
#define SCU_PCER1_TIMER6_Msk                  (0x400000UL)              /*!< SCU PCER1: TIMER6 (Bitfield-Mask: 0x01)                     */
#define SCU_PCER1_TIMER7_Pos                  (23UL)                    /*!< SCU PCER1: TIMER7 (Bit 23)                                  */
#define SCU_PCER1_TIMER7_Msk                  (0x800000UL)              /*!< SCU PCER1: TIMER7 (Bitfield-Mask: 0x01)                     */
#define SCU_PCER1_TIMER8_Pos                  (24UL)                    /*!< SCU PCER1: TIMER8 (Bit 24)                                  */
#define SCU_PCER1_TIMER8_Msk                  (0x1000000UL)             /*!< SCU PCER1: TIMER8 (Bitfield-Mask: 0x01)                     */
#define SCU_PCER1_TIMER9_Pos                  (25UL)                    /*!< SCU PCER1: TIMER9 (Bit 25)                                  */
#define SCU_PCER1_TIMER9_Msk                  (0x2000000UL)             /*!< SCU PCER1: TIMER9 (Bitfield-Mask: 0x01)                     */

/* ----------------------------------  SCU_PCER2  --------------------------------- */
#define SCU_PCER2_USART10_Pos                 (0UL)                     /*!< SCU PCER2: USART10 (Bit 0)                                  */
#define SCU_PCER2_USART10_Msk                 (0x1UL)                   /*!< SCU PCER2: USART10 (Bitfield-Mask: 0x01)                    */
#define SCU_PCER2_USART11_Pos                 (1UL)                     /*!< SCU PCER2: USART11 (Bit 1)                                  */
#define SCU_PCER2_USART11_Msk                 (0x2UL)                   /*!< SCU PCER2: USART11 (Bitfield-Mask: 0x01)                    */
#define SCU_PCER2_USART12_Pos                 (2UL)                     /*!< SCU PCER2: USART12 (Bit 2)                                  */
#define SCU_PCER2_USART12_Msk                 (0x4UL)                   /*!< SCU PCER2: USART12 (Bitfield-Mask: 0x01)                    */
#define SCU_PCER2_I2C0_Pos                    (3UL)                     /*!< SCU PCER2: I2C0 (Bit 3)                                     */
#define SCU_PCER2_I2C0_Msk                    (0x8UL)                   /*!< SCU PCER2: I2C0 (Bitfield-Mask: 0x01)                       */
#define SCU_PCER2_I2C1_Pos                    (4UL)                     /*!< SCU PCER2: I2C1 (Bit 4)                                     */
#define SCU_PCER2_I2C1_Msk                    (0x10UL)                  /*!< SCU PCER2: I2C1 (Bitfield-Mask: 0x01)                       */
#define SCU_PCER2_I2C2_Pos                    (5UL)                     /*!< SCU PCER2: I2C2 (Bit 5)                                     */
#define SCU_PCER2_I2C2_Msk                    (0x20UL)                  /*!< SCU PCER2: I2C2 (Bitfield-Mask: 0x01)                       */
#define SCU_PCER2_UART0_Pos                   (8UL)                     /*!< SCU PCER2: UART0 (Bit 8)                                    */
#define SCU_PCER2_UART0_Msk                   (0x100UL)                 /*!< SCU PCER2: UART0 (Bitfield-Mask: 0x01)                      */
#define SCU_PCER2_UART1_Pos                   (9UL)                     /*!< SCU PCER2: UART1 (Bit 9)                                    */
#define SCU_PCER2_UART1_Msk                   (0x200UL)                 /*!< SCU PCER2: UART1 (Bitfield-Mask: 0x01)                      */
#define SCU_PCER2_ADC_Pos                     (20UL)                    /*!< SCU PCER2: ADC (Bit 20)                                     */
#define SCU_PCER2_ADC_Msk                     (0x100000UL)              /*!< SCU PCER2: ADC (Bitfield-Mask: 0x01)                        */
#define SCU_PCER2_CMP_Pos                     (28UL)                    /*!< SCU PCER2: CMP (Bit 28)                                     */
#define SCU_PCER2_CMP_Msk                     (0x10000000UL)            /*!< SCU PCER2: CMP (Bitfield-Mask: 0x01)                        */
#define SCU_PCER2_CRC_Pos                     (29UL)                    /*!< SCU PCER2: CRC (Bit 29)                                     */
#define SCU_PCER2_CRC_Msk                     (0x20000000UL)            /*!< SCU PCER2: CRC (Bitfield-Mask: 0x01)                        */

/* ----------------------------------  SCU_CSCR  ---------------------------------- */
#define SCU_CSCR_HSECON_Pos                   (1UL)                     /*!< SCU CSCR: HSECON (Bit 1)                                    */
#define SCU_CSCR_HSECON_Msk                   (0x2UL)                   /*!< SCU CSCR: HSECON (Bitfield-Mask: 0x01)                      */
#define SCU_CSCR_HSICON_Pos                   (3UL)                     /*!< SCU CSCR: HSICON (Bit 3)                                    */
#define SCU_CSCR_HSICON_Msk                   (0x8UL)                   /*!< SCU CSCR: HSICON (Bitfield-Mask: 0x01)                      */
#define SCU_CSCR_LSICON_Pos                   (5UL)                     /*!< SCU CSCR: LSICON (Bit 5)                                    */
#define SCU_CSCR_LSICON_Msk                   (0x20UL)                  /*!< SCU CSCR: LSICON (Bitfield-Mask: 0x01)                      */
#define SCU_CSCR_LSECON_Pos                   (7UL)                     /*!< SCU CSCR: LSECON (Bit 7)                                    */
#define SCU_CSCR_LSECON_Msk                   (0x80UL)                  /*!< SCU CSCR: LSECON (Bitfield-Mask: 0x01)                      */

/* ----------------------------------  SCU_SCCR  ---------------------------------- */
#define SCU_SCCR_MCLKSEL_Pos                  (0UL)                     /*!< SCU SCCR: MCLKSEL (Bit 0)                                   */
#define SCU_SCCR_MCLKSEL_Msk                  (0x7UL)                   /*!< SCU SCCR: MCLKSEL (Bitfield-Mask: 0x07)                     */
#define SCU_SCCR_PCLKDIV_Pos                  (16UL)                    /*!< SCU SCCR: PCLKDIV (Bit 16)                                  */
#define SCU_SCCR_PCLKDIV_Msk                  (0x70000UL)               /*!< SCU SCCR: PCLKDIV (Bitfield-Mask: 0x07)                     */
#define SCU_SCCR_HCLKDIV_Pos                  (24UL)                    /*!< SCU SCCR: HCLKDIV (Bit 24)                                  */
#define SCU_SCCR_HCLKDIV_Msk                  (0xf000000UL)             /*!< SCU SCCR: HCLKDIV (Bitfield-Mask: 0x0f)                     */

/* -----------------------------------  SCU_CMR  ---------------------------------- */
#define SCU_CMR_HSESTS_Pos                    (0UL)                     /*!< SCU CMR: HSESTS (Bit 0)                                     */
#define SCU_CMR_HSESTS_Msk                    (0x1UL)                   /*!< SCU CMR: HSESTS (Bitfield-Mask: 0x01)                       */
#define SCU_CMR_HSEFAIL_Pos                   (1UL)                     /*!< SCU CMR: HSEFAIL (Bit 1)                                    */
#define SCU_CMR_HSEFAIL_Msk                   (0x2UL)                   /*!< SCU CMR: HSEFAIL (Bitfield-Mask: 0x01)                      */
#define SCU_CMR_HSEIE_Pos                     (2UL)                     /*!< SCU CMR: HSEIE (Bit 2)                                      */
#define SCU_CMR_HSEIE_Msk                     (0x4UL)                   /*!< SCU CMR: HSEIE (Bitfield-Mask: 0x01)                        */
#define SCU_CMR_HSEMNT_Pos                    (3UL)                     /*!< SCU CMR: HSEMNT (Bit 3)                                     */
#define SCU_CMR_HSEMNT_Msk                    (0x8UL)                   /*!< SCU CMR: HSEMNT (Bitfield-Mask: 0x01)                       */
#define SCU_CMR_MCLKSTS_Pos                   (4UL)                     /*!< SCU CMR: MCLKSTS (Bit 4)                                    */
#define SCU_CMR_MCLKSTS_Msk                   (0x10UL)                  /*!< SCU CMR: MCLKSTS (Bitfield-Mask: 0x01)                      */
#define SCU_CMR_MCLKFAIL_Pos                  (5UL)                     /*!< SCU CMR: MCLKFAIL (Bit 5)                                   */
#define SCU_CMR_MCLKFAIL_Msk                  (0x20UL)                  /*!< SCU CMR: MCLKFAIL (Bitfield-Mask: 0x01)                     */
#define SCU_CMR_MCLKIE_Pos                    (6UL)                     /*!< SCU CMR: MCLKIE (Bit 6)                                     */
#define SCU_CMR_MCLKIE_Msk                    (0x40UL)                  /*!< SCU CMR: MCLKIE (Bitfield-Mask: 0x01)                       */
#define SCU_CMR_MCLKMNT_Pos                   (7UL)                     /*!< SCU CMR: MCLKMNT (Bit 7)                                    */
#define SCU_CMR_MCLKMNT_Msk                   (0x80UL)                  /*!< SCU CMR: MCLKMNT (Bitfield-Mask: 0x01)                      */
#define SCU_CMR_LSESTS_Pos                    (8UL)                     /*!< SCU CMR: LSESTS (Bit 8)                                     */
#define SCU_CMR_LSESTS_Msk                    (0x100UL)                 /*!< SCU CMR: LSESTS (Bitfield-Mask: 0x01)                       */
#define SCU_CMR_LSEFAIL_Pos                   (9UL)                     /*!< SCU CMR: LSEFAIL (Bit 9)                                    */
#define SCU_CMR_LSEFAIL_Msk                   (0x200UL)                 /*!< SCU CMR: LSEFAIL (Bitfield-Mask: 0x01)                      */
#define SCU_CMR_LSEIE_Pos                     (10UL)                    /*!< SCU CMR: LSEIE (Bit 10)                                     */
#define SCU_CMR_LSEIE_Msk                     (0x400UL)                 /*!< SCU CMR: LSEIE (Bitfield-Mask: 0x01)                        */
#define SCU_CMR_LSEMNT_Pos                    (11UL)                    /*!< SCU CMR: LSEMNT (Bit 11)                                    */
#define SCU_CMR_LSEMNT_Msk                    (0x800UL)                 /*!< SCU CMR: LSEMNT (Bitfield-Mask: 0x01)                       */
#define SCU_CMR_MCLKREC_Pos                   (15UL)                    /*!< SCU CMR: MCLKREC (Bit 15)                                   */
#define SCU_CMR_MCLKREC_Msk                   (0x8000UL)                /*!< SCU CMR: MCLKREC (Bitfield-Mask: 0x01)                      */

/* -----------------------------------  SCU_COR  ---------------------------------- */
#define SCU_COR_CLKODIV_Pos                   (0UL)                     /*!< SCU COR: CLKODIV (Bit 0)                                    */
#define SCU_COR_CLKODIV_Msk                   (0xfUL)                   /*!< SCU COR: CLKODIV (Bitfield-Mask: 0x0f)                      */
#define SCU_COR_CLKOEN_Pos                    (4UL)                     /*!< SCU COR: CLKOEN (Bit 4)                                     */
#define SCU_COR_CLKOEN_Msk                    (0x10UL)                  /*!< SCU COR: CLKOEN (Bitfield-Mask: 0x01)                       */
#define SCU_COR_CLKOINSEL_Pos                 (5UL)                     /*!< SCU COR: CLKOINSEL (Bit 5)                                  */
#define SCU_COR_CLKOINSEL_Msk                 (0xe0UL)                  /*!< SCU COR: CLKOINSEL (Bitfield-Mask: 0x07)                    */

/* ----------------------------------  SCU_NMICR  --------------------------------- */
#define SCU_NMICR_LVIEN_Pos                   (0UL)                     /*!< SCU NMICR: LVIEN (Bit 0)                                    */
#define SCU_NMICR_LVIEN_Msk                   (0x1UL)                   /*!< SCU NMICR: LVIEN (Bitfield-Mask: 0x01)                      */
#define SCU_NMICR_MCLKFAILEN_Pos              (1UL)                     /*!< SCU NMICR: MCLKFAILEN (Bit 1)                               */
#define SCU_NMICR_MCLKFAILEN_Msk              (0x2UL)                   /*!< SCU NMICR: MCLKFAILEN (Bitfield-Mask: 0x01)                 */
#define SCU_NMICR_WDTINTEN_Pos                (2UL)                     /*!< SCU NMICR: WDTINTEN (Bit 2)                                 */
#define SCU_NMICR_WDTINTEN_Msk                (0x4UL)                   /*!< SCU NMICR: WDTINTEN (Bitfield-Mask: 0x01)                   */
#define SCU_NMICR_NMIINEN_Pos                 (15UL)                    /*!< SCU NMICR: NMIINEN (Bit 15)                                 */
#define SCU_NMICR_NMIINEN_Msk                 (0x8000UL)                /*!< SCU NMICR: NMIINEN (Bitfield-Mask: 0x01)                    */
#define SCU_NMICR_NMISRC_Pos                  (16UL)                    /*!< SCU NMICR: NMISRC (Bit 16)                                  */
#define SCU_NMICR_NMISRC_Msk                  (0xff0000UL)              /*!< SCU NMICR: NMISRC (Bitfield-Mask: 0xff)                     */

/* ----------------------------------  SCU_NMISR  --------------------------------- */
#define SCU_NMISR_LVISTS_Pos                  (0UL)                     /*!< SCU NMISR: LVISTS (Bit 0)                                   */
#define SCU_NMISR_LVISTS_Msk                  (0x1UL)                   /*!< SCU NMISR: LVISTS (Bitfield-Mask: 0x01)                     */
#define SCU_NMISR_MCLKFAILSTS_Pos             (1UL)                     /*!< SCU NMISR: MCLKFAILSTS (Bit 1)                              */
#define SCU_NMISR_MCLKFAILSTS_Msk             (0x2UL)                   /*!< SCU NMISR: MCLKFAILSTS (Bitfield-Mask: 0x01)                */
#define SCU_NMISR_WDTINTSTS_Pos               (2UL)                     /*!< SCU NMISR: WDTINTSTS (Bit 2)                                */
#define SCU_NMISR_WDTINTSTS_Msk               (0x4UL)                   /*!< SCU NMISR: WDTINTSTS (Bitfield-Mask: 0x01)                  */
#define SCU_NMISR_NMIINTSTS_Pos               (15UL)                    /*!< SCU NMISR: NMIINTSTS (Bit 15)                               */
#define SCU_NMISR_NMIINTSTS_Msk               (0x8000UL)                /*!< SCU NMISR: NMIINTSTS (Bitfield-Mask: 0x01)                  */
#define SCU_NMISR_WTIDKY_Pos                  (24UL)                    /*!< SCU NMISR: WTIDKY (Bit 24)                                  */
#define SCU_NMISR_WTIDKY_Msk                  (0xff000000UL)            /*!< SCU NMISR: WTIDKY (Bitfield-Mask: 0xff)                     */

/* ---------------------------------  SCU_VDCCON  --------------------------------- */
#define SCU_VDCCON_VDCWDLY_Pos                (0UL)                     /*!< SCU VDCCON: VDCWDLY (Bit 0)                                 */
#define SCU_VDCCON_VDCWDLY_Msk                (0xffUL)                  /*!< SCU VDCCON: VDCWDLY (Bitfield-Mask: 0xff)                   */

/* ----------------------------------  SCU_LVICR  --------------------------------- */
#define SCU_LVICR_LVIVS_Pos                   (0UL)                     /*!< SCU LVICR: LVIVS (Bit 0)                                    */
#define SCU_LVICR_LVIVS_Msk                   (0x3UL)                   /*!< SCU LVICR: LVIVS (Bitfield-Mask: 0x03)                      */
#define SCU_LVICR_LVIAON_Pos                  (4UL)                     /*!< SCU LVICR: LVIAON (Bit 4)                                   */
#define SCU_LVICR_LVIAON_Msk                  (0x10UL)                  /*!< SCU LVICR: LVIAON (Bitfield-Mask: 0x01)                     */
#define SCU_LVICR_LVIINTEN_Pos                (5UL)                     /*!< SCU LVICR: LVIINTEN (Bit 5)                                 */
#define SCU_LVICR_LVIINTEN_Msk                (0x20UL)                  /*!< SCU LVICR: LVIINTEN (Bitfield-Mask: 0x01)                   */
#define SCU_LVICR_LVIEN_Pos                   (7UL)                     /*!< SCU LVICR: LVIEN (Bit 7)                                    */
#define SCU_LVICR_LVIEN_Msk                   (0x80UL)                  /*!< SCU LVICR: LVIEN (Bitfield-Mask: 0x01)                      */

/* ----------------------------------  SCU_LVISR  --------------------------------- */
#define SCU_LVISR_LVIINTSTS_Pos               (0UL)                     /*!< SCU LVISR: LVIINTSTS (Bit 0)                                */
#define SCU_LVISR_LVIINTSTS_Msk               (0x1UL)                   /*!< SCU LVISR: LVIINTSTS (Bitfield-Mask: 0x01)                  */
#define SCU_LVISR_LVIIFLAG_Pos                (5UL)                     /*!< SCU LVISR: LVIIFLAG (Bit 5)                                 */
#define SCU_LVISR_LVIIFLAG_Msk                (0x20UL)                  /*!< SCU LVISR: LVIIFLAG (Bitfield-Mask: 0x01)                   */
#define SCU_LVISR_WTIDKY_Pos                  (24UL)                    /*!< SCU LVISR: WTIDKY (Bit 24)                                  */
#define SCU_LVISR_WTIDKY_Msk                  (0xff000000UL)            /*!< SCU LVISR: WTIDKY (Bitfield-Mask: 0xff)                     */

/* ----------------------------------  SCU_LVRCR  --------------------------------- */
#define SCU_LVRCR_LVRVS_Pos                   (0UL)                     /*!< SCU LVRCR: LVRVS (Bit 0)                                    */
#define SCU_LVRCR_LVRVS_Msk                   (0x3UL)                   /*!< SCU LVRCR: LVRVS (Bitfield-Mask: 0x03)                      */
#define SCU_LVRCR_LVRAON_Pos                  (4UL)                     /*!< SCU LVRCR: LVRAON (Bit 4)                                   */
#define SCU_LVRCR_LVRAON_Msk                  (0x10UL)                  /*!< SCU LVRCR: LVRAON (Bitfield-Mask: 0x01)                     */
#define SCU_LVRCR_LVREN_Pos                   (8UL)                     /*!< SCU LVRCR: LVREN (Bit 8)                                    */
#define SCU_LVRCR_LVREN_Msk                   (0xff00UL)                /*!< SCU LVRCR: LVREN (Bitfield-Mask: 0xff)                      */

/* ----------------------------------  SCU_EOSCR  --------------------------------- */
#define SCU_EOSCR_HSENFSEL_Pos                (0UL)                     /*!< SCU EOSCR: HSENFSEL (Bit 0)                                 */
#define SCU_EOSCR_HSENFSEL_Msk                (0x3UL)                   /*!< SCU EOSCR: HSENFSEL (Bitfield-Mask: 0x03)                   */
#define SCU_EOSCR_HSENFEN_Pos                 (4UL)                     /*!< SCU EOSCR: HSENFEN (Bit 4)                                  */
#define SCU_EOSCR_HSENFEN_Msk                 (0x10UL)                  /*!< SCU EOSCR: HSENFEN (Bitfield-Mask: 0x01)                    */
#define SCU_EOSCR_HSEISEL_Pos                 (8UL)                     /*!< SCU EOSCR: HSEISEL (Bit 8)                                  */
#define SCU_EOSCR_HSEISEL_Msk                 (0x300UL)                 /*!< SCU EOSCR: HSEISEL (Bitfield-Mask: 0x03)                    */
#define SCU_EOSCR_LSENFEN_Pos                 (16UL)                    /*!< SCU EOSCR: LSENFEN (Bit 16)                                 */
#define SCU_EOSCR_LSENFEN_Msk                 (0x10000UL)               /*!< SCU EOSCR: LSENFEN (Bitfield-Mask: 0x01)                    */
#define SCU_EOSCR_LSEISEL_Pos                 (24UL)                    /*!< SCU EOSCR: LSEISEL (Bit 24)                                 */
#define SCU_EOSCR_LSEISEL_Msk                 (0x3000000UL)             /*!< SCU EOSCR: LSEISEL (Bitfield-Mask: 0x03)                    */

/* ----------------------------------  SCU_MCCR1  --------------------------------- */
#define SCU_MCCR1_STCDIV_Pos                  (0UL)                     /*!< SCU MCCR1: STCDIV (Bit 0)                                   */
#define SCU_MCCR1_STCDIV_Msk                  (0xffUL)                  /*!< SCU MCCR1: STCDIV (Bitfield-Mask: 0xff)                     */
#define SCU_MCCR1_STCSEL_Pos                  (8UL)                     /*!< SCU MCCR1: STCSEL (Bit 8)                                   */
#define SCU_MCCR1_STCSEL_Msk                  (0x700UL)                 /*!< SCU MCCR1: STCSEL (Bitfield-Mask: 0x07)                     */
#define SCU_MCCR1_WDTCDIV_Pos                 (16UL)                    /*!< SCU MCCR1: WDTCDIV (Bit 16)                                 */
#define SCU_MCCR1_WDTCDIV_Msk                 (0xff0000UL)              /*!< SCU MCCR1: WDTCDIV (Bitfield-Mask: 0xff)                    */
#define SCU_MCCR1_WDTCSEL_Pos                 (24UL)                    /*!< SCU MCCR1: WDTCSEL (Bit 24)                                 */
#define SCU_MCCR1_WDTCSEL_Msk                 (0x7000000UL)             /*!< SCU MCCR1: WDTCSEL (Bitfield-Mask: 0x07)                    */

/* ----------------------------------  SCU_MCCR3  --------------------------------- */
#define SCU_MCCR3_TIMER04CDIV_Pos             (0UL)                     /*!< SCU MCCR3: TIMER04CDIV (Bit 0)                              */
#define SCU_MCCR3_TIMER04CDIV_Msk             (0xffUL)                  /*!< SCU MCCR3: TIMER04CDIV (Bitfield-Mask: 0xff)                */
#define SCU_MCCR3_TIMER04CSEL_Pos             (8UL)                     /*!< SCU MCCR3: TIMER04CSEL (Bit 8)                              */
#define SCU_MCCR3_TIMER04CSEL_Msk             (0x700UL)                 /*!< SCU MCCR3: TIMER04CSEL (Bitfield-Mask: 0x07)                */
#define SCU_MCCR3_TIMER59CDIV_Pos             (16UL)                    /*!< SCU MCCR3: TIMER59CDIV (Bit 16)                             */
#define SCU_MCCR3_TIMER59CDIV_Msk             (0xff0000UL)              /*!< SCU MCCR3: TIMER59CDIV (Bitfield-Mask: 0xff)                */
#define SCU_MCCR3_TIMER59CSEL_Pos             (24UL)                    /*!< SCU MCCR3: TIMER59CSEL (Bit 24)                             */
#define SCU_MCCR3_TIMER59CSEL_Msk             (0x7000000UL)             /*!< SCU MCCR3: TIMER59CSEL (Bitfield-Mask: 0x07)                */

/* ----------------------------------  SCU_MCCR4  --------------------------------- */
#define SCU_MCCR4_PGADCDIV_Pos                (16UL)                    /*!< SCU MCCR4: PGADCDIV (Bit 16)                                */
#define SCU_MCCR4_PGADCDIV_Msk                (0xff0000UL)              /*!< SCU MCCR4: PGADCDIV (Bitfield-Mask: 0xff)                   */
#define SCU_MCCR4_PGADCSEL_Pos                (24UL)                    /*!< SCU MCCR4: PGADCSEL (Bit 24)                                */
#define SCU_MCCR4_PGADCSEL_Msk                (0x7000000UL)             /*!< SCU MCCR4: PGADCSEL (Bitfield-Mask: 0x07)                   */

/* ----------------------------------  SCU_MCCR5  --------------------------------- */
#define SCU_MCCR5_PGBDCDIV_Pos                (0UL)                     /*!< SCU MCCR5: PGBDCDIV (Bit 0)                                 */
#define SCU_MCCR5_PGBDCDIV_Msk                (0xffUL)                  /*!< SCU MCCR5: PGBDCDIV (Bitfield-Mask: 0xff)                   */
#define SCU_MCCR5_PGBDCSEL_Pos                (8UL)                     /*!< SCU MCCR5: PGBDCSEL (Bit 8)                                 */
#define SCU_MCCR5_PGBDCSEL_Msk                (0x700UL)                 /*!< SCU MCCR5: PGBDCSEL (Bitfield-Mask: 0x07)                   */
#define SCU_MCCR5_PGCDCDIV_Pos                (16UL)                    /*!< SCU MCCR5: PGCDCDIV (Bit 16)                                */
#define SCU_MCCR5_PGCDCDIV_Msk                (0xff0000UL)              /*!< SCU MCCR5: PGCDCDIV (Bitfield-Mask: 0xff)                   */
#define SCU_MCCR5_PGCDCSEL_Pos                (24UL)                    /*!< SCU MCCR5: PGCDCSEL (Bit 24)                                */
#define SCU_MCCR5_PGCDCSEL_Msk                (0x7000000UL)             /*!< SCU MCCR5: PGCDCSEL (Bitfield-Mask: 0x07)                   */

/* ----------------------------------  SCU_MCCR6  --------------------------------- */
#define SCU_MCCR6_FRTCDIV_Pos                 (0UL)                     /*!< SCU MCCR6: FRTCDIV (Bit 0)                                  */
#define SCU_MCCR6_FRTCDIV_Msk                 (0xffUL)                  /*!< SCU MCCR6: FRTCDIV (Bitfield-Mask: 0xff)                    */
#define SCU_MCCR6_FRTCSEL_Pos                 (8UL)                     /*!< SCU MCCR6: FRTCSEL (Bit 8)                                  */
#define SCU_MCCR6_FRTCSEL_Msk                 (0x700UL)                 /*!< SCU MCCR6: FRTCSEL (Bitfield-Mask: 0x07)                    */

/* ----------------------------------  SCU_MCCR7  --------------------------------- */
#define SCU_MCCR7_UARTCDIV_Pos                (16UL)                    /*!< SCU MCCR7: UARTCDIV (Bit 16)                                */
#define SCU_MCCR7_UARTCDIV_Msk                (0xff0000UL)              /*!< SCU MCCR7: UARTCDIV (Bitfield-Mask: 0xff)                   */
#define SCU_MCCR7_UARTCSEL_Pos                (24UL)                    /*!< SCU MCCR7: UARTCSEL (Bit 24)                                */
#define SCU_MCCR7_UARTCSEL_Msk                (0x7000000UL)             /*!< SCU MCCR7: UARTCSEL (Bitfield-Mask: 0x07)                   */

/* ---------------------------------  SCU_SYSTEN  --------------------------------- */
#define SCU_SYSTEN_SYSTEN_Pos                 (0UL)                     /*!< SCU SYSTEN: SYSTEN (Bit 0)                                  */
#define SCU_SYSTEN_SYSTEN_Msk                 (0xffUL)                  /*!< SCU SYSTEN: SYSTEN (Bitfield-Mask: 0xff)                    */
#define SCU_SYSTEN_ENS_Pos                    (8UL)                     /*!< SCU SYSTEN: ENS (Bit 8)                                     */
#define SCU_SYSTEN_ENS_Msk                    (0x100UL)                 /*!< SCU SYSTEN: ENS (Bitfield-Mask: 0x01)                       */


/* ================================================================================ */
/* ================           Group 'PCU' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  PCU_MR1  ---------------------------------- */
#define PCU_MR1_P0MUX_Pos                     (0UL)                     /*!< PCU MR1: P0MUX (Bit 0)                                      */
#define PCU_MR1_P0MUX_Msk                     (0x7UL)                   /*!< PCU MR1: P0MUX (Bitfield-Mask: 0x07)                        */
#define PCU_MR1_P1MUX_Pos                     (4UL)                     /*!< PCU MR1: P1MUX (Bit 4)                                      */
#define PCU_MR1_P1MUX_Msk                     (0x70UL)                  /*!< PCU MR1: P1MUX (Bitfield-Mask: 0x07)                        */
#define PCU_MR1_P2MUX_Pos                     (8UL)                     /*!< PCU MR1: P2MUX (Bit 8)                                      */
#define PCU_MR1_P2MUX_Msk                     (0x700UL)                 /*!< PCU MR1: P2MUX (Bitfield-Mask: 0x07)                        */
#define PCU_MR1_P3MUX_Pos                     (12UL)                    /*!< PCU MR1: P3MUX (Bit 12)                                     */
#define PCU_MR1_P3MUX_Msk                     (0x7000UL)                /*!< PCU MR1: P3MUX (Bitfield-Mask: 0x07)                        */
#define PCU_MR1_P4MUX_Pos                     (16UL)                    /*!< PCU MR1: P4MUX (Bit 16)                                     */
#define PCU_MR1_P4MUX_Msk                     (0x70000UL)               /*!< PCU MR1: P4MUX (Bitfield-Mask: 0x07)                        */
#define PCU_MR1_P5MUX_Pos                     (20UL)                    /*!< PCU MR1: P5MUX (Bit 20)                                     */
#define PCU_MR1_P5MUX_Msk                     (0x700000UL)              /*!< PCU MR1: P5MUX (Bitfield-Mask: 0x07)                        */
#define PCU_MR1_P6MUX_Pos                     (24UL)                    /*!< PCU MR1: P6MUX (Bit 24)                                     */
#define PCU_MR1_P6MUX_Msk                     (0x7000000UL)             /*!< PCU MR1: P6MUX (Bitfield-Mask: 0x07)                        */
#define PCU_MR1_P7MUX_Pos                     (28UL)                    /*!< PCU MR1: P7MUX (Bit 28)                                     */
#define PCU_MR1_P7MUX_Msk                     (0x70000000UL)            /*!< PCU MR1: P7MUX (Bitfield-Mask: 0x07)                        */

/* -----------------------------------  PCU_MR2  ---------------------------------- */
#define PCU_MR2_P8MUX_Pos                     (0UL)                     /*!< PCU MR2: P8MUX (Bit 0)                                      */
#define PCU_MR2_P8MUX_Msk                     (0x7UL)                   /*!< PCU MR2: P8MUX (Bitfield-Mask: 0x07)                        */
#define PCU_MR2_P9MUX_Pos                     (4UL)                     /*!< PCU MR2: P9MUX (Bit 4)                                      */
#define PCU_MR2_P9MUX_Msk                     (0x70UL)                  /*!< PCU MR2: P9MUX (Bitfield-Mask: 0x07)                        */
#define PCU_MR2_P10MUX_Pos                    (8UL)                     /*!< PCU MR2: P10MUX (Bit 8)                                     */
#define PCU_MR2_P10MUX_Msk                    (0x700UL)                 /*!< PCU MR2: P10MUX (Bitfield-Mask: 0x07)                       */
#define PCU_MR2_P11MUX_Pos                    (12UL)                    /*!< PCU MR2: P11MUX (Bit 12)                                    */
#define PCU_MR2_P11MUX_Msk                    (0x7000UL)                /*!< PCU MR2: P11MUX (Bitfield-Mask: 0x07)                       */
#define PCU_MR2_P12MUX_Pos                    (16UL)                    /*!< PCU MR2: P12MUX (Bit 16)                                    */
#define PCU_MR2_P12MUX_Msk                    (0x70000UL)               /*!< PCU MR2: P12MUX (Bitfield-Mask: 0x07)                       */
#define PCU_MR2_P13MUX_Pos                    (20UL)                    /*!< PCU MR2: P13MUX (Bit 20)                                    */
#define PCU_MR2_P13MUX_Msk                    (0x700000UL)              /*!< PCU MR2: P13MUX (Bitfield-Mask: 0x07)                       */
#define PCU_MR2_P14MUX_Pos                    (24UL)                    /*!< PCU MR2: P14MUX (Bit 24)                                    */
#define PCU_MR2_P14MUX_Msk                    (0x7000000UL)             /*!< PCU MR2: P14MUX (Bitfield-Mask: 0x07)                       */
#define PCU_MR2_P15MUX_Pos                    (28UL)                    /*!< PCU MR2: P15MUX (Bit 28)                                    */
#define PCU_MR2_P15MUX_Msk                    (0x70000000UL)            /*!< PCU MR2: P15MUX (Bitfield-Mask: 0x07)                       */

/* -----------------------------------  PCU_CR  ----------------------------------- */
#define PCU_CR_P0_Pos                         (0UL)                     /*!< PCU CR: P0 (Bit 0)                                          */
#define PCU_CR_P0_Msk                         (0x3UL)                   /*!< PCU CR: P0 (Bitfield-Mask: 0x03)                            */
#define PCU_CR_P1_Pos                         (2UL)                     /*!< PCU CR: P1 (Bit 2)                                          */
#define PCU_CR_P1_Msk                         (0xcUL)                   /*!< PCU CR: P1 (Bitfield-Mask: 0x03)                            */
#define PCU_CR_P2_Pos                         (4UL)                     /*!< PCU CR: P2 (Bit 4)                                          */
#define PCU_CR_P2_Msk                         (0x30UL)                  /*!< PCU CR: P2 (Bitfield-Mask: 0x03)                            */
#define PCU_CR_P3_Pos                         (6UL)                     /*!< PCU CR: P3 (Bit 6)                                          */
#define PCU_CR_P3_Msk                         (0xc0UL)                  /*!< PCU CR: P3 (Bitfield-Mask: 0x03)                            */
#define PCU_CR_P4_Pos                         (8UL)                     /*!< PCU CR: P4 (Bit 8)                                          */
#define PCU_CR_P4_Msk                         (0x300UL)                 /*!< PCU CR: P4 (Bitfield-Mask: 0x03)                            */
#define PCU_CR_P5_Pos                         (10UL)                    /*!< PCU CR: P5 (Bit 10)                                         */
#define PCU_CR_P5_Msk                         (0xc00UL)                 /*!< PCU CR: P5 (Bitfield-Mask: 0x03)                            */
#define PCU_CR_P6_Pos                         (12UL)                    /*!< PCU CR: P6 (Bit 12)                                         */
#define PCU_CR_P6_Msk                         (0x3000UL)                /*!< PCU CR: P6 (Bitfield-Mask: 0x03)                            */
#define PCU_CR_P7_Pos                         (14UL)                    /*!< PCU CR: P7 (Bit 14)                                         */
#define PCU_CR_P7_Msk                         (0xc000UL)                /*!< PCU CR: P7 (Bitfield-Mask: 0x03)                            */
#define PCU_CR_P8_Pos                         (16UL)                    /*!< PCU CR: P8 (Bit 16)                                         */
#define PCU_CR_P8_Msk                         (0x30000UL)               /*!< PCU CR: P8 (Bitfield-Mask: 0x03)                            */
#define PCU_CR_P9_Pos                         (18UL)                    /*!< PCU CR: P9 (Bit 18)                                         */
#define PCU_CR_P9_Msk                         (0xc0000UL)               /*!< PCU CR: P9 (Bitfield-Mask: 0x03)                            */
#define PCU_CR_P10_Pos                        (20UL)                    /*!< PCU CR: P10 (Bit 20)                                        */
#define PCU_CR_P10_Msk                        (0x300000UL)              /*!< PCU CR: P10 (Bitfield-Mask: 0x03)                           */
#define PCU_CR_P11_Pos                        (22UL)                    /*!< PCU CR: P11 (Bit 22)                                        */
#define PCU_CR_P11_Msk                        (0xc00000UL)              /*!< PCU CR: P11 (Bitfield-Mask: 0x03)                           */
#define PCU_CR_P12_Pos                        (24UL)                    /*!< PCU CR: P12 (Bit 24)                                        */
#define PCU_CR_P12_Msk                        (0x3000000UL)             /*!< PCU CR: P12 (Bitfield-Mask: 0x03)                           */
#define PCU_CR_P13_Pos                        (26UL)                    /*!< PCU CR: P13 (Bit 26)                                        */
#define PCU_CR_P13_Msk                        (0xc000000UL)             /*!< PCU CR: P13 (Bitfield-Mask: 0x03)                           */
#define PCU_CR_P14_Pos                        (28UL)                    /*!< PCU CR: P14 (Bit 28)                                        */
#define PCU_CR_P14_Msk                        (0x30000000UL)            /*!< PCU CR: P14 (Bitfield-Mask: 0x03)                           */
#define PCU_CR_P15_Pos                        (30UL)                    /*!< PCU CR: P15 (Bit 30)                                        */
#define PCU_CR_P15_Msk                        (0xc0000000UL)            /*!< PCU CR: P15 (Bitfield-Mask: 0x03)                           */

/* ----------------------------------  PCU_PRCR  ---------------------------------- */
#define PCU_PRCR_PUE0_Pos                     (0UL)                     /*!< PCU PRCR: PUE0 (Bit 0)                                      */
#define PCU_PRCR_PUE0_Msk                     (0x3UL)                   /*!< PCU PRCR: PUE0 (Bitfield-Mask: 0x03)                        */
#define PCU_PRCR_PUE1_Pos                     (2UL)                     /*!< PCU PRCR: PUE1 (Bit 2)                                      */
#define PCU_PRCR_PUE1_Msk                     (0xcUL)                   /*!< PCU PRCR: PUE1 (Bitfield-Mask: 0x03)                        */
#define PCU_PRCR_PUE2_Pos                     (4UL)                     /*!< PCU PRCR: PUE2 (Bit 4)                                      */
#define PCU_PRCR_PUE2_Msk                     (0x30UL)                  /*!< PCU PRCR: PUE2 (Bitfield-Mask: 0x03)                        */
#define PCU_PRCR_PUE3_Pos                     (6UL)                     /*!< PCU PRCR: PUE3 (Bit 6)                                      */
#define PCU_PRCR_PUE3_Msk                     (0xc0UL)                  /*!< PCU PRCR: PUE3 (Bitfield-Mask: 0x03)                        */
#define PCU_PRCR_PUE4_Pos                     (8UL)                     /*!< PCU PRCR: PUE4 (Bit 8)                                      */
#define PCU_PRCR_PUE4_Msk                     (0x300UL)                 /*!< PCU PRCR: PUE4 (Bitfield-Mask: 0x03)                        */
#define PCU_PRCR_PUE5_Pos                     (10UL)                    /*!< PCU PRCR: PUE5 (Bit 10)                                     */
#define PCU_PRCR_PUE5_Msk                     (0xc00UL)                 /*!< PCU PRCR: PUE5 (Bitfield-Mask: 0x03)                        */
#define PCU_PRCR_PUE6_Pos                     (12UL)                    /*!< PCU PRCR: PUE6 (Bit 12)                                     */
#define PCU_PRCR_PUE6_Msk                     (0x3000UL)                /*!< PCU PRCR: PUE6 (Bitfield-Mask: 0x03)                        */
#define PCU_PRCR_PUE7_Pos                     (14UL)                    /*!< PCU PRCR: PUE7 (Bit 14)                                     */
#define PCU_PRCR_PUE7_Msk                     (0xc000UL)                /*!< PCU PRCR: PUE7 (Bitfield-Mask: 0x03)                        */
#define PCU_PRCR_PUE8_Pos                     (16UL)                    /*!< PCU PRCR: PUE8 (Bit 16)                                     */
#define PCU_PRCR_PUE8_Msk                     (0x30000UL)               /*!< PCU PRCR: PUE8 (Bitfield-Mask: 0x03)                        */
#define PCU_PRCR_PUE9_Pos                     (18UL)                    /*!< PCU PRCR: PUE9 (Bit 18)                                     */
#define PCU_PRCR_PUE9_Msk                     (0xc0000UL)               /*!< PCU PRCR: PUE9 (Bitfield-Mask: 0x03)                        */
#define PCU_PRCR_PUE10_Pos                    (20UL)                    /*!< PCU PRCR: PUE10 (Bit 20)                                    */
#define PCU_PRCR_PUE10_Msk                    (0x300000UL)              /*!< PCU PRCR: PUE10 (Bitfield-Mask: 0x03)                       */
#define PCU_PRCR_PUE11_Pos                    (22UL)                    /*!< PCU PRCR: PUE11 (Bit 22)                                    */
#define PCU_PRCR_PUE11_Msk                    (0xc00000UL)              /*!< PCU PRCR: PUE11 (Bitfield-Mask: 0x03)                       */
#define PCU_PRCR_PUE12_Pos                    (24UL)                    /*!< PCU PRCR: PUE12 (Bit 24)                                    */
#define PCU_PRCR_PUE12_Msk                    (0x3000000UL)             /*!< PCU PRCR: PUE12 (Bitfield-Mask: 0x03)                       */
#define PCU_PRCR_PUE13_Pos                    (26UL)                    /*!< PCU PRCR: PUE13 (Bit 26)                                    */
#define PCU_PRCR_PUE13_Msk                    (0xc000000UL)             /*!< PCU PRCR: PUE13 (Bitfield-Mask: 0x03)                       */
#define PCU_PRCR_PUE14_Pos                    (28UL)                    /*!< PCU PRCR: PUE14 (Bit 28)                                    */
#define PCU_PRCR_PUE14_Msk                    (0x30000000UL)            /*!< PCU PRCR: PUE14 (Bitfield-Mask: 0x03)                       */
#define PCU_PRCR_PUE15_Pos                    (30UL)                    /*!< PCU PRCR: PUE15 (Bit 30)                                    */
#define PCU_PRCR_PUE15_Msk                    (0xc0000000UL)            /*!< PCU PRCR: PUE15 (Bitfield-Mask: 0x03)                       */

/* -----------------------------------  PCU_DER  ---------------------------------- */
#define PCU_DER_PDE0_Pos                      (0UL)                     /*!< PCU DER: PDE0 (Bit 0)                                       */
#define PCU_DER_PDE0_Msk                      (0x1UL)                   /*!< PCU DER: PDE0 (Bitfield-Mask: 0x01)                         */
#define PCU_DER_PDE1_Pos                      (1UL)                     /*!< PCU DER: PDE1 (Bit 1)                                       */
#define PCU_DER_PDE1_Msk                      (0x2UL)                   /*!< PCU DER: PDE1 (Bitfield-Mask: 0x01)                         */
#define PCU_DER_PDE2_Pos                      (2UL)                     /*!< PCU DER: PDE2 (Bit 2)                                       */
#define PCU_DER_PDE2_Msk                      (0x4UL)                   /*!< PCU DER: PDE2 (Bitfield-Mask: 0x01)                         */
#define PCU_DER_PDE3_Pos                      (3UL)                     /*!< PCU DER: PDE3 (Bit 3)                                       */
#define PCU_DER_PDE3_Msk                      (0x8UL)                   /*!< PCU DER: PDE3 (Bitfield-Mask: 0x01)                         */
#define PCU_DER_PDE4_Pos                      (4UL)                     /*!< PCU DER: PDE4 (Bit 4)                                       */
#define PCU_DER_PDE4_Msk                      (0x10UL)                  /*!< PCU DER: PDE4 (Bitfield-Mask: 0x01)                         */
#define PCU_DER_PDE5_Pos                      (5UL)                     /*!< PCU DER: PDE5 (Bit 5)                                       */
#define PCU_DER_PDE5_Msk                      (0x20UL)                  /*!< PCU DER: PDE5 (Bitfield-Mask: 0x01)                         */
#define PCU_DER_PDE6_Pos                      (6UL)                     /*!< PCU DER: PDE6 (Bit 6)                                       */
#define PCU_DER_PDE6_Msk                      (0x40UL)                  /*!< PCU DER: PDE6 (Bitfield-Mask: 0x01)                         */
#define PCU_DER_PDE7_Pos                      (7UL)                     /*!< PCU DER: PDE7 (Bit 7)                                       */
#define PCU_DER_PDE7_Msk                      (0x80UL)                  /*!< PCU DER: PDE7 (Bitfield-Mask: 0x01)                         */
#define PCU_DER_PDE8_Pos                      (8UL)                     /*!< PCU DER: PDE8 (Bit 8)                                       */
#define PCU_DER_PDE8_Msk                      (0x100UL)                 /*!< PCU DER: PDE8 (Bitfield-Mask: 0x01)                         */
#define PCU_DER_PDE9_Pos                      (9UL)                     /*!< PCU DER: PDE9 (Bit 9)                                       */
#define PCU_DER_PDE9_Msk                      (0x200UL)                 /*!< PCU DER: PDE9 (Bitfield-Mask: 0x01)                         */
#define PCU_DER_PDE10_Pos                     (10UL)                    /*!< PCU DER: PDE10 (Bit 10)                                     */
#define PCU_DER_PDE10_Msk                     (0x400UL)                 /*!< PCU DER: PDE10 (Bitfield-Mask: 0x01)                        */
#define PCU_DER_PDE11_Pos                     (11UL)                    /*!< PCU DER: PDE11 (Bit 11)                                     */
#define PCU_DER_PDE11_Msk                     (0x800UL)                 /*!< PCU DER: PDE11 (Bitfield-Mask: 0x01)                        */
#define PCU_DER_PDE12_Pos                     (12UL)                    /*!< PCU DER: PDE12 (Bit 12)                                     */
#define PCU_DER_PDE12_Msk                     (0x1000UL)                /*!< PCU DER: PDE12 (Bitfield-Mask: 0x01)                        */
#define PCU_DER_PDE13_Pos                     (13UL)                    /*!< PCU DER: PDE13 (Bit 13)                                     */
#define PCU_DER_PDE13_Msk                     (0x2000UL)                /*!< PCU DER: PDE13 (Bitfield-Mask: 0x01)                        */
#define PCU_DER_PDE14_Pos                     (14UL)                    /*!< PCU DER: PDE14 (Bit 14)                                     */
#define PCU_DER_PDE14_Msk                     (0x4000UL)                /*!< PCU DER: PDE14 (Bitfield-Mask: 0x01)                        */
#define PCU_DER_PDE15_Pos                     (15UL)                    /*!< PCU DER: PDE15 (Bit 15)                                     */
#define PCU_DER_PDE15_Msk                     (0x8000UL)                /*!< PCU DER: PDE15 (Bitfield-Mask: 0x01)                        */

/* -----------------------------------  PCU_IER  ---------------------------------- */
#define PCU_IER_PIE0_Pos                      (0UL)                     /*!< PCU IER: PIE0 (Bit 0)                                       */
#define PCU_IER_PIE0_Msk                      (0x3UL)                   /*!< PCU IER: PIE0 (Bitfield-Mask: 0x03)                         */
#define PCU_IER_PIE1_Pos                      (2UL)                     /*!< PCU IER: PIE1 (Bit 2)                                       */
#define PCU_IER_PIE1_Msk                      (0xcUL)                   /*!< PCU IER: PIE1 (Bitfield-Mask: 0x03)                         */
#define PCU_IER_PIE2_Pos                      (4UL)                     /*!< PCU IER: PIE2 (Bit 4)                                       */
#define PCU_IER_PIE2_Msk                      (0x30UL)                  /*!< PCU IER: PIE2 (Bitfield-Mask: 0x03)                         */
#define PCU_IER_PIE3_Pos                      (6UL)                     /*!< PCU IER: PIE3 (Bit 6)                                       */
#define PCU_IER_PIE3_Msk                      (0xc0UL)                  /*!< PCU IER: PIE3 (Bitfield-Mask: 0x03)                         */
#define PCU_IER_PIE4_Pos                      (8UL)                     /*!< PCU IER: PIE4 (Bit 8)                                       */
#define PCU_IER_PIE4_Msk                      (0x300UL)                 /*!< PCU IER: PIE4 (Bitfield-Mask: 0x03)                         */
#define PCU_IER_PIE5_Pos                      (10UL)                    /*!< PCU IER: PIE5 (Bit 10)                                      */
#define PCU_IER_PIE5_Msk                      (0xc00UL)                 /*!< PCU IER: PIE5 (Bitfield-Mask: 0x03)                         */
#define PCU_IER_PIE6_Pos                      (12UL)                    /*!< PCU IER: PIE6 (Bit 12)                                      */
#define PCU_IER_PIE6_Msk                      (0x3000UL)                /*!< PCU IER: PIE6 (Bitfield-Mask: 0x03)                         */
#define PCU_IER_PIE7_Pos                      (14UL)                    /*!< PCU IER: PIE7 (Bit 14)                                      */
#define PCU_IER_PIE7_Msk                      (0xc000UL)                /*!< PCU IER: PIE7 (Bitfield-Mask: 0x03)                         */
#define PCU_IER_PIE8_Pos                      (16UL)                    /*!< PCU IER: PIE8 (Bit 16)                                      */
#define PCU_IER_PIE8_Msk                      (0x30000UL)               /*!< PCU IER: PIE8 (Bitfield-Mask: 0x03)                         */
#define PCU_IER_PIE9_Pos                      (18UL)                    /*!< PCU IER: PIE9 (Bit 18)                                      */
#define PCU_IER_PIE9_Msk                      (0xc0000UL)               /*!< PCU IER: PIE9 (Bitfield-Mask: 0x03)                         */
#define PCU_IER_PIE10_Pos                     (20UL)                    /*!< PCU IER: PIE10 (Bit 20)                                     */
#define PCU_IER_PIE10_Msk                     (0x300000UL)              /*!< PCU IER: PIE10 (Bitfield-Mask: 0x03)                        */
#define PCU_IER_PIE11_Pos                     (22UL)                    /*!< PCU IER: PIE11 (Bit 22)                                     */
#define PCU_IER_PIE11_Msk                     (0xc00000UL)              /*!< PCU IER: PIE11 (Bitfield-Mask: 0x03)                        */
#define PCU_IER_PIE12_Pos                     (24UL)                    /*!< PCU IER: PIE12 (Bit 24)                                     */
#define PCU_IER_PIE12_Msk                     (0x3000000UL)             /*!< PCU IER: PIE12 (Bitfield-Mask: 0x03)                        */
#define PCU_IER_PIE13_Pos                     (26UL)                    /*!< PCU IER: PIE13 (Bit 26)                                     */
#define PCU_IER_PIE13_Msk                     (0xc000000UL)             /*!< PCU IER: PIE13 (Bitfield-Mask: 0x03)                        */
#define PCU_IER_PIE14_Pos                     (28UL)                    /*!< PCU IER: PIE14 (Bit 28)                                     */
#define PCU_IER_PIE14_Msk                     (0x30000000UL)            /*!< PCU IER: PIE14 (Bitfield-Mask: 0x03)                        */
#define PCU_IER_PIE15_Pos                     (30UL)                    /*!< PCU IER: PIE15 (Bit 30)                                     */
#define PCU_IER_PIE15_Msk                     (0xc0000000UL)            /*!< PCU IER: PIE15 (Bitfield-Mask: 0x03)                        */

/* -----------------------------------  PCU_ISR  ---------------------------------- */
#define PCU_ISR_PIS0_Pos                      (0UL)                     /*!< PCU ISR: PIS0 (Bit 0)                                       */
#define PCU_ISR_PIS0_Msk                      (0x3UL)                   /*!< PCU ISR: PIS0 (Bitfield-Mask: 0x03)                         */
#define PCU_ISR_PIS1_Pos                      (2UL)                     /*!< PCU ISR: PIS1 (Bit 2)                                       */
#define PCU_ISR_PIS1_Msk                      (0xcUL)                   /*!< PCU ISR: PIS1 (Bitfield-Mask: 0x03)                         */
#define PCU_ISR_PIS2_Pos                      (4UL)                     /*!< PCU ISR: PIS2 (Bit 4)                                       */
#define PCU_ISR_PIS2_Msk                      (0x30UL)                  /*!< PCU ISR: PIS2 (Bitfield-Mask: 0x03)                         */
#define PCU_ISR_PIS3_Pos                      (6UL)                     /*!< PCU ISR: PIS3 (Bit 6)                                       */
#define PCU_ISR_PIS3_Msk                      (0xc0UL)                  /*!< PCU ISR: PIS3 (Bitfield-Mask: 0x03)                         */
#define PCU_ISR_PIS4_Pos                      (8UL)                     /*!< PCU ISR: PIS4 (Bit 8)                                       */
#define PCU_ISR_PIS4_Msk                      (0x300UL)                 /*!< PCU ISR: PIS4 (Bitfield-Mask: 0x03)                         */
#define PCU_ISR_PIS5_Pos                      (10UL)                    /*!< PCU ISR: PIS5 (Bit 10)                                      */
#define PCU_ISR_PIS5_Msk                      (0xc00UL)                 /*!< PCU ISR: PIS5 (Bitfield-Mask: 0x03)                         */
#define PCU_ISR_PIS6_Pos                      (12UL)                    /*!< PCU ISR: PIS6 (Bit 12)                                      */
#define PCU_ISR_PIS6_Msk                      (0x3000UL)                /*!< PCU ISR: PIS6 (Bitfield-Mask: 0x03)                         */
#define PCU_ISR_PIS7_Pos                      (14UL)                    /*!< PCU ISR: PIS7 (Bit 14)                                      */
#define PCU_ISR_PIS7_Msk                      (0xc000UL)                /*!< PCU ISR: PIS7 (Bitfield-Mask: 0x03)                         */
#define PCU_ISR_PIS8_Pos                      (16UL)                    /*!< PCU ISR: PIS8 (Bit 16)                                      */
#define PCU_ISR_PIS8_Msk                      (0x30000UL)               /*!< PCU ISR: PIS8 (Bitfield-Mask: 0x03)                         */
#define PCU_ISR_PIS9_Pos                      (18UL)                    /*!< PCU ISR: PIS9 (Bit 18)                                      */
#define PCU_ISR_PIS9_Msk                      (0xc0000UL)               /*!< PCU ISR: PIS9 (Bitfield-Mask: 0x03)                         */
#define PCU_ISR_PIS10_Pos                     (20UL)                    /*!< PCU ISR: PIS10 (Bit 20)                                     */
#define PCU_ISR_PIS10_Msk                     (0x300000UL)              /*!< PCU ISR: PIS10 (Bitfield-Mask: 0x03)                        */
#define PCU_ISR_PIS11_Pos                     (22UL)                    /*!< PCU ISR: PIS11 (Bit 22)                                     */
#define PCU_ISR_PIS11_Msk                     (0xc00000UL)              /*!< PCU ISR: PIS11 (Bitfield-Mask: 0x03)                        */
#define PCU_ISR_PIS12_Pos                     (24UL)                    /*!< PCU ISR: PIS12 (Bit 24)                                     */
#define PCU_ISR_PIS12_Msk                     (0x3000000UL)             /*!< PCU ISR: PIS12 (Bitfield-Mask: 0x03)                        */
#define PCU_ISR_PIS13_Pos                     (26UL)                    /*!< PCU ISR: PIS13 (Bit 26)                                     */
#define PCU_ISR_PIS13_Msk                     (0xc000000UL)             /*!< PCU ISR: PIS13 (Bitfield-Mask: 0x03)                        */
#define PCU_ISR_PIS14_Pos                     (28UL)                    /*!< PCU ISR: PIS14 (Bit 28)                                     */
#define PCU_ISR_PIS14_Msk                     (0x30000000UL)            /*!< PCU ISR: PIS14 (Bitfield-Mask: 0x03)                        */
#define PCU_ISR_PIS15_Pos                     (30UL)                    /*!< PCU ISR: PIS15 (Bit 30)                                     */
#define PCU_ISR_PIS15_Msk                     (0xc0000000UL)            /*!< PCU ISR: PIS15 (Bitfield-Mask: 0x03)                        */

/* -----------------------------------  PCU_ICR  ---------------------------------- */
#define PCU_ICR_PIC0_Pos                      (0UL)                     /*!< PCU ICR: PIC0 (Bit 0)                                       */
#define PCU_ICR_PIC0_Msk                      (0x3UL)                   /*!< PCU ICR: PIC0 (Bitfield-Mask: 0x03)                         */
#define PCU_ICR_PIC1_Pos                      (2UL)                     /*!< PCU ICR: PIC1 (Bit 2)                                       */
#define PCU_ICR_PIC1_Msk                      (0xcUL)                   /*!< PCU ICR: PIC1 (Bitfield-Mask: 0x03)                         */
#define PCU_ICR_PIC2_Pos                      (4UL)                     /*!< PCU ICR: PIC2 (Bit 4)                                       */
#define PCU_ICR_PIC2_Msk                      (0x30UL)                  /*!< PCU ICR: PIC2 (Bitfield-Mask: 0x03)                         */
#define PCU_ICR_PIC3_Pos                      (6UL)                     /*!< PCU ICR: PIC3 (Bit 6)                                       */
#define PCU_ICR_PIC3_Msk                      (0xc0UL)                  /*!< PCU ICR: PIC3 (Bitfield-Mask: 0x03)                         */
#define PCU_ICR_PIC4_Pos                      (8UL)                     /*!< PCU ICR: PIC4 (Bit 8)                                       */
#define PCU_ICR_PIC4_Msk                      (0x300UL)                 /*!< PCU ICR: PIC4 (Bitfield-Mask: 0x03)                         */
#define PCU_ICR_PIC5_Pos                      (10UL)                    /*!< PCU ICR: PIC5 (Bit 10)                                      */
#define PCU_ICR_PIC5_Msk                      (0xc00UL)                 /*!< PCU ICR: PIC5 (Bitfield-Mask: 0x03)                         */
#define PCU_ICR_PIC6_Pos                      (12UL)                    /*!< PCU ICR: PIC6 (Bit 12)                                      */
#define PCU_ICR_PIC6_Msk                      (0x3000UL)                /*!< PCU ICR: PIC6 (Bitfield-Mask: 0x03)                         */
#define PCU_ICR_PIC7_Pos                      (14UL)                    /*!< PCU ICR: PIC7 (Bit 14)                                      */
#define PCU_ICR_PIC7_Msk                      (0xc000UL)                /*!< PCU ICR: PIC7 (Bitfield-Mask: 0x03)                         */
#define PCU_ICR_PIC8_Pos                      (16UL)                    /*!< PCU ICR: PIC8 (Bit 16)                                      */
#define PCU_ICR_PIC8_Msk                      (0x30000UL)               /*!< PCU ICR: PIC8 (Bitfield-Mask: 0x03)                         */
#define PCU_ICR_PIC9_Pos                      (18UL)                    /*!< PCU ICR: PIC9 (Bit 18)                                      */
#define PCU_ICR_PIC9_Msk                      (0xc0000UL)               /*!< PCU ICR: PIC9 (Bitfield-Mask: 0x03)                         */
#define PCU_ICR_PIC10_Pos                     (20UL)                    /*!< PCU ICR: PIC10 (Bit 20)                                     */
#define PCU_ICR_PIC10_Msk                     (0x300000UL)              /*!< PCU ICR: PIC10 (Bitfield-Mask: 0x03)                        */
#define PCU_ICR_PIC11_Pos                     (22UL)                    /*!< PCU ICR: PIC11 (Bit 22)                                     */
#define PCU_ICR_PIC11_Msk                     (0xc00000UL)              /*!< PCU ICR: PIC11 (Bitfield-Mask: 0x03)                        */
#define PCU_ICR_PIC12_Pos                     (24UL)                    /*!< PCU ICR: PIC12 (Bit 24)                                     */
#define PCU_ICR_PIC12_Msk                     (0x3000000UL)             /*!< PCU ICR: PIC12 (Bitfield-Mask: 0x03)                        */
#define PCU_ICR_PIC13_Pos                     (26UL)                    /*!< PCU ICR: PIC13 (Bit 26)                                     */
#define PCU_ICR_PIC13_Msk                     (0xc000000UL)             /*!< PCU ICR: PIC13 (Bitfield-Mask: 0x03)                        */
#define PCU_ICR_PIC14_Pos                     (28UL)                    /*!< PCU ICR: PIC14 (Bit 28)                                     */
#define PCU_ICR_PIC14_Msk                     (0x30000000UL)            /*!< PCU ICR: PIC14 (Bitfield-Mask: 0x03)                        */
#define PCU_ICR_PIC15_Pos                     (30UL)                    /*!< PCU ICR: PIC15 (Bit 30)                                     */
#define PCU_ICR_PIC15_Msk                     (0xc0000000UL)            /*!< PCU ICR: PIC15 (Bitfield-Mask: 0x03)                        */

/* -----------------------------------  PCU_ODR  ---------------------------------- */
#define PCU_ODR_POD0_Pos                      (0UL)                     /*!< PCU ODR: POD0 (Bit 0)                                       */
#define PCU_ODR_POD0_Msk                      (0x1UL)                   /*!< PCU ODR: POD0 (Bitfield-Mask: 0x01)                         */
#define PCU_ODR_POD1_Pos                      (1UL)                     /*!< PCU ODR: POD1 (Bit 1)                                       */
#define PCU_ODR_POD1_Msk                      (0x2UL)                   /*!< PCU ODR: POD1 (Bitfield-Mask: 0x01)                         */
#define PCU_ODR_POD2_Pos                      (2UL)                     /*!< PCU ODR: POD2 (Bit 2)                                       */
#define PCU_ODR_POD2_Msk                      (0x4UL)                   /*!< PCU ODR: POD2 (Bitfield-Mask: 0x01)                         */
#define PCU_ODR_POD3_Pos                      (3UL)                     /*!< PCU ODR: POD3 (Bit 3)                                       */
#define PCU_ODR_POD3_Msk                      (0x8UL)                   /*!< PCU ODR: POD3 (Bitfield-Mask: 0x01)                         */
#define PCU_ODR_POD4_Pos                      (4UL)                     /*!< PCU ODR: POD4 (Bit 4)                                       */
#define PCU_ODR_POD4_Msk                      (0x10UL)                  /*!< PCU ODR: POD4 (Bitfield-Mask: 0x01)                         */
#define PCU_ODR_POD5_Pos                      (5UL)                     /*!< PCU ODR: POD5 (Bit 5)                                       */
#define PCU_ODR_POD5_Msk                      (0x20UL)                  /*!< PCU ODR: POD5 (Bitfield-Mask: 0x01)                         */
#define PCU_ODR_POD6_Pos                      (6UL)                     /*!< PCU ODR: POD6 (Bit 6)                                       */
#define PCU_ODR_POD6_Msk                      (0x40UL)                  /*!< PCU ODR: POD6 (Bitfield-Mask: 0x01)                         */
#define PCU_ODR_POD7_Pos                      (7UL)                     /*!< PCU ODR: POD7 (Bit 7)                                       */
#define PCU_ODR_POD7_Msk                      (0x80UL)                  /*!< PCU ODR: POD7 (Bitfield-Mask: 0x01)                         */
#define PCU_ODR_POD8_Pos                      (8UL)                     /*!< PCU ODR: POD8 (Bit 8)                                       */
#define PCU_ODR_POD8_Msk                      (0x100UL)                 /*!< PCU ODR: POD8 (Bitfield-Mask: 0x01)                         */
#define PCU_ODR_POD9_Pos                      (9UL)                     /*!< PCU ODR: POD9 (Bit 9)                                       */
#define PCU_ODR_POD9_Msk                      (0x200UL)                 /*!< PCU ODR: POD9 (Bitfield-Mask: 0x01)                         */
#define PCU_ODR_POD10_Pos                     (10UL)                    /*!< PCU ODR: POD10 (Bit 10)                                     */
#define PCU_ODR_POD10_Msk                     (0x400UL)                 /*!< PCU ODR: POD10 (Bitfield-Mask: 0x01)                        */
#define PCU_ODR_POD11_Pos                     (11UL)                    /*!< PCU ODR: POD11 (Bit 11)                                     */
#define PCU_ODR_POD11_Msk                     (0x800UL)                 /*!< PCU ODR: POD11 (Bitfield-Mask: 0x01)                        */
#define PCU_ODR_POD12_Pos                     (12UL)                    /*!< PCU ODR: POD12 (Bit 12)                                     */
#define PCU_ODR_POD12_Msk                     (0x1000UL)                /*!< PCU ODR: POD12 (Bitfield-Mask: 0x01)                        */
#define PCU_ODR_POD13_Pos                     (13UL)                    /*!< PCU ODR: POD13 (Bit 13)                                     */
#define PCU_ODR_POD13_Msk                     (0x2000UL)                /*!< PCU ODR: POD13 (Bitfield-Mask: 0x01)                        */
#define PCU_ODR_POD14_Pos                     (14UL)                    /*!< PCU ODR: POD14 (Bit 14)                                     */
#define PCU_ODR_POD14_Msk                     (0x4000UL)                /*!< PCU ODR: POD14 (Bitfield-Mask: 0x01)                        */
#define PCU_ODR_POD15_Pos                     (15UL)                    /*!< PCU ODR: POD15 (Bit 15)                                     */
#define PCU_ODR_POD15_Msk                     (0x8000UL)                /*!< PCU ODR: POD15 (Bitfield-Mask: 0x01)                        */

/* -----------------------------------  PCU_IDR  ---------------------------------- */
#define PCU_IDR_PID0_Pos                      (0UL)                     /*!< PCU IDR: PID0 (Bit 0)                                       */
#define PCU_IDR_PID0_Msk                      (0x1UL)                   /*!< PCU IDR: PID0 (Bitfield-Mask: 0x01)                         */
#define PCU_IDR_PID1_Pos                      (1UL)                     /*!< PCU IDR: PID1 (Bit 1)                                       */
#define PCU_IDR_PID1_Msk                      (0x2UL)                   /*!< PCU IDR: PID1 (Bitfield-Mask: 0x01)                         */
#define PCU_IDR_PID2_Pos                      (2UL)                     /*!< PCU IDR: PID2 (Bit 2)                                       */
#define PCU_IDR_PID2_Msk                      (0x4UL)                   /*!< PCU IDR: PID2 (Bitfield-Mask: 0x01)                         */
#define PCU_IDR_PID3_Pos                      (3UL)                     /*!< PCU IDR: PID3 (Bit 3)                                       */
#define PCU_IDR_PID3_Msk                      (0x8UL)                   /*!< PCU IDR: PID3 (Bitfield-Mask: 0x01)                         */
#define PCU_IDR_PID4_Pos                      (4UL)                     /*!< PCU IDR: PID4 (Bit 4)                                       */
#define PCU_IDR_PID4_Msk                      (0x10UL)                  /*!< PCU IDR: PID4 (Bitfield-Mask: 0x01)                         */
#define PCU_IDR_PID5_Pos                      (5UL)                     /*!< PCU IDR: PID5 (Bit 5)                                       */
#define PCU_IDR_PID5_Msk                      (0x20UL)                  /*!< PCU IDR: PID5 (Bitfield-Mask: 0x01)                         */
#define PCU_IDR_PID6_Pos                      (6UL)                     /*!< PCU IDR: PID6 (Bit 6)                                       */
#define PCU_IDR_PID6_Msk                      (0x40UL)                  /*!< PCU IDR: PID6 (Bitfield-Mask: 0x01)                         */
#define PCU_IDR_PID7_Pos                      (7UL)                     /*!< PCU IDR: PID7 (Bit 7)                                       */
#define PCU_IDR_PID7_Msk                      (0x80UL)                  /*!< PCU IDR: PID7 (Bitfield-Mask: 0x01)                         */
#define PCU_IDR_PID8_Pos                      (8UL)                     /*!< PCU IDR: PID8 (Bit 8)                                       */
#define PCU_IDR_PID8_Msk                      (0x100UL)                 /*!< PCU IDR: PID8 (Bitfield-Mask: 0x01)                         */
#define PCU_IDR_PID9_Pos                      (9UL)                     /*!< PCU IDR: PID9 (Bit 9)                                       */
#define PCU_IDR_PID9_Msk                      (0x200UL)                 /*!< PCU IDR: PID9 (Bitfield-Mask: 0x01)                         */
#define PCU_IDR_PID10_Pos                     (10UL)                    /*!< PCU IDR: PID10 (Bit 10)                                     */
#define PCU_IDR_PID10_Msk                     (0x400UL)                 /*!< PCU IDR: PID10 (Bitfield-Mask: 0x01)                        */
#define PCU_IDR_PID11_Pos                     (11UL)                    /*!< PCU IDR: PID11 (Bit 11)                                     */
#define PCU_IDR_PID11_Msk                     (0x800UL)                 /*!< PCU IDR: PID11 (Bitfield-Mask: 0x01)                        */
#define PCU_IDR_PID12_Pos                     (12UL)                    /*!< PCU IDR: PID12 (Bit 12)                                     */
#define PCU_IDR_PID12_Msk                     (0x1000UL)                /*!< PCU IDR: PID12 (Bitfield-Mask: 0x01)                        */
#define PCU_IDR_PID13_Pos                     (13UL)                    /*!< PCU IDR: PID13 (Bit 13)                                     */
#define PCU_IDR_PID13_Msk                     (0x2000UL)                /*!< PCU IDR: PID13 (Bitfield-Mask: 0x01)                        */
#define PCU_IDR_PID14_Pos                     (14UL)                    /*!< PCU IDR: PID14 (Bit 14)                                     */
#define PCU_IDR_PID14_Msk                     (0x4000UL)                /*!< PCU IDR: PID14 (Bitfield-Mask: 0x01)                        */
#define PCU_IDR_PID15_Pos                     (15UL)                    /*!< PCU IDR: PID15 (Bit 15)                                     */
#define PCU_IDR_PID15_Msk                     (0x8000UL)                /*!< PCU IDR: PID15 (Bitfield-Mask: 0x01)                        */

/* -----------------------------------  PCU_BSR  ---------------------------------- */
#define PCU_BSR_BSD0_Pos                      (0UL)                     /*!< PCU BSR: BSD0 (Bit 0)                                       */
#define PCU_BSR_BSD0_Msk                      (0x1UL)                   /*!< PCU BSR: BSD0 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BSD1_Pos                      (1UL)                     /*!< PCU BSR: BSD1 (Bit 1)                                       */
#define PCU_BSR_BSD1_Msk                      (0x2UL)                   /*!< PCU BSR: BSD1 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BSD2_Pos                      (2UL)                     /*!< PCU BSR: BSD2 (Bit 2)                                       */
#define PCU_BSR_BSD2_Msk                      (0x4UL)                   /*!< PCU BSR: BSD2 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BSD3_Pos                      (3UL)                     /*!< PCU BSR: BSD3 (Bit 3)                                       */
#define PCU_BSR_BSD3_Msk                      (0x8UL)                   /*!< PCU BSR: BSD3 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BSD4_Pos                      (4UL)                     /*!< PCU BSR: BSD4 (Bit 4)                                       */
#define PCU_BSR_BSD4_Msk                      (0x10UL)                  /*!< PCU BSR: BSD4 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BSD5_Pos                      (5UL)                     /*!< PCU BSR: BSD5 (Bit 5)                                       */
#define PCU_BSR_BSD5_Msk                      (0x20UL)                  /*!< PCU BSR: BSD5 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BSD6_Pos                      (6UL)                     /*!< PCU BSR: BSD6 (Bit 6)                                       */
#define PCU_BSR_BSD6_Msk                      (0x40UL)                  /*!< PCU BSR: BSD6 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BSD7_Pos                      (7UL)                     /*!< PCU BSR: BSD7 (Bit 7)                                       */
#define PCU_BSR_BSD7_Msk                      (0x80UL)                  /*!< PCU BSR: BSD7 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BSD8_Pos                      (8UL)                     /*!< PCU BSR: BSD8 (Bit 8)                                       */
#define PCU_BSR_BSD8_Msk                      (0x100UL)                 /*!< PCU BSR: BSD8 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BSD9_Pos                      (9UL)                     /*!< PCU BSR: BSD9 (Bit 9)                                       */
#define PCU_BSR_BSD9_Msk                      (0x200UL)                 /*!< PCU BSR: BSD9 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BSD10_Pos                     (10UL)                    /*!< PCU BSR: BSD10 (Bit 10)                                     */
#define PCU_BSR_BSD10_Msk                     (0x400UL)                 /*!< PCU BSR: BSD10 (Bitfield-Mask: 0x01)                        */
#define PCU_BSR_BSD11_Pos                     (11UL)                    /*!< PCU BSR: BSD11 (Bit 11)                                     */
#define PCU_BSR_BSD11_Msk                     (0x800UL)                 /*!< PCU BSR: BSD11 (Bitfield-Mask: 0x01)                        */
#define PCU_BSR_BSD12_Pos                     (12UL)                    /*!< PCU BSR: BSD12 (Bit 12)                                     */
#define PCU_BSR_BSD12_Msk                     (0x1000UL)                /*!< PCU BSR: BSD12 (Bitfield-Mask: 0x01)                        */
#define PCU_BSR_BSD13_Pos                     (13UL)                    /*!< PCU BSR: BSD13 (Bit 13)                                     */
#define PCU_BSR_BSD13_Msk                     (0x2000UL)                /*!< PCU BSR: BSD13 (Bitfield-Mask: 0x01)                        */
#define PCU_BSR_BSD14_Pos                     (14UL)                    /*!< PCU BSR: BSD14 (Bit 14)                                     */
#define PCU_BSR_BSD14_Msk                     (0x4000UL)                /*!< PCU BSR: BSD14 (Bitfield-Mask: 0x01)                        */
#define PCU_BSR_BSD15_Pos                     (15UL)                    /*!< PCU BSR: BSD15 (Bit 15)                                     */
#define PCU_BSR_BSD15_Msk                     (0x8000UL)                /*!< PCU BSR: BSD15 (Bitfield-Mask: 0x01)                        */
#define PCU_BSR_BCD0_Pos                      (16UL)                    /*!< PCU BSR: BCD0 (Bit 16)                                      */
#define PCU_BSR_BCD0_Msk                      (0x10000UL)               /*!< PCU BSR: BCD0 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BCD1_Pos                      (17UL)                    /*!< PCU BSR: BCD1 (Bit 17)                                      */
#define PCU_BSR_BCD1_Msk                      (0x20000UL)               /*!< PCU BSR: BCD1 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BCD2_Pos                      (18UL)                    /*!< PCU BSR: BCD2 (Bit 18)                                      */
#define PCU_BSR_BCD2_Msk                      (0x40000UL)               /*!< PCU BSR: BCD2 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BCD3_Pos                      (19UL)                    /*!< PCU BSR: BCD3 (Bit 19)                                      */
#define PCU_BSR_BCD3_Msk                      (0x80000UL)               /*!< PCU BSR: BCD3 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BCD4_Pos                      (20UL)                    /*!< PCU BSR: BCD4 (Bit 20)                                      */
#define PCU_BSR_BCD4_Msk                      (0x100000UL)              /*!< PCU BSR: BCD4 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BCD5_Pos                      (21UL)                    /*!< PCU BSR: BCD5 (Bit 21)                                      */
#define PCU_BSR_BCD5_Msk                      (0x200000UL)              /*!< PCU BSR: BCD5 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BCD6_Pos                      (22UL)                    /*!< PCU BSR: BCD6 (Bit 22)                                      */
#define PCU_BSR_BCD6_Msk                      (0x400000UL)              /*!< PCU BSR: BCD6 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BCD7_Pos                      (23UL)                    /*!< PCU BSR: BCD7 (Bit 23)                                      */
#define PCU_BSR_BCD7_Msk                      (0x800000UL)              /*!< PCU BSR: BCD7 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BCD8_Pos                      (24UL)                    /*!< PCU BSR: BCD8 (Bit 24)                                      */
#define PCU_BSR_BCD8_Msk                      (0x1000000UL)             /*!< PCU BSR: BCD8 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BCD9_Pos                      (25UL)                    /*!< PCU BSR: BCD9 (Bit 25)                                      */
#define PCU_BSR_BCD9_Msk                      (0x2000000UL)             /*!< PCU BSR: BCD9 (Bitfield-Mask: 0x01)                         */
#define PCU_BSR_BCD10_Pos                     (26UL)                    /*!< PCU BSR: BCD10 (Bit 26)                                     */
#define PCU_BSR_BCD10_Msk                     (0x4000000UL)             /*!< PCU BSR: BCD10 (Bitfield-Mask: 0x01)                        */
#define PCU_BSR_BCD11_Pos                     (27UL)                    /*!< PCU BSR: BCD11 (Bit 27)                                     */
#define PCU_BSR_BCD11_Msk                     (0x8000000UL)             /*!< PCU BSR: BCD11 (Bitfield-Mask: 0x01)                        */
#define PCU_BSR_BCD12_Pos                     (28UL)                    /*!< PCU BSR: BCD12 (Bit 28)                                     */
#define PCU_BSR_BCD12_Msk                     (0x10000000UL)            /*!< PCU BSR: BCD12 (Bitfield-Mask: 0x01)                        */
#define PCU_BSR_BCD13_Pos                     (29UL)                    /*!< PCU BSR: BCD13 (Bit 29)                                     */
#define PCU_BSR_BCD13_Msk                     (0x20000000UL)            /*!< PCU BSR: BCD13 (Bitfield-Mask: 0x01)                        */
#define PCU_BSR_BCD14_Pos                     (30UL)                    /*!< PCU BSR: BCD14 (Bit 30)                                     */
#define PCU_BSR_BCD14_Msk                     (0x40000000UL)            /*!< PCU BSR: BCD14 (Bitfield-Mask: 0x01)                        */
#define PCU_BSR_BCD15_Pos                     (31UL)                    /*!< PCU BSR: BCD15 (Bit 31)                                     */
#define PCU_BSR_BCD15_Msk                     (0x80000000UL)            /*!< PCU BSR: BCD15 (Bitfield-Mask: 0x01)                        */

/* -----------------------------------  PCU_BCR  ---------------------------------- */
#define PCU_BCR_BCD0_Pos                      (0UL)                     /*!< PCU BCR: BCD0 (Bit 0)                                       */
#define PCU_BCR_BCD0_Msk                      (0x1UL)                   /*!< PCU BCR: BCD0 (Bitfield-Mask: 0x01)                         */
#define PCU_BCR_BCD1_Pos                      (1UL)                     /*!< PCU BCR: BCD1 (Bit 1)                                       */
#define PCU_BCR_BCD1_Msk                      (0x2UL)                   /*!< PCU BCR: BCD1 (Bitfield-Mask: 0x01)                         */
#define PCU_BCR_BCD2_Pos                      (2UL)                     /*!< PCU BCR: BCD2 (Bit 2)                                       */
#define PCU_BCR_BCD2_Msk                      (0x4UL)                   /*!< PCU BCR: BCD2 (Bitfield-Mask: 0x01)                         */
#define PCU_BCR_BCD3_Pos                      (3UL)                     /*!< PCU BCR: BCD3 (Bit 3)                                       */
#define PCU_BCR_BCD3_Msk                      (0x8UL)                   /*!< PCU BCR: BCD3 (Bitfield-Mask: 0x01)                         */
#define PCU_BCR_BCD4_Pos                      (4UL)                     /*!< PCU BCR: BCD4 (Bit 4)                                       */
#define PCU_BCR_BCD4_Msk                      (0x10UL)                  /*!< PCU BCR: BCD4 (Bitfield-Mask: 0x01)                         */
#define PCU_BCR_BCD5_Pos                      (5UL)                     /*!< PCU BCR: BCD5 (Bit 5)                                       */
#define PCU_BCR_BCD5_Msk                      (0x20UL)                  /*!< PCU BCR: BCD5 (Bitfield-Mask: 0x01)                         */
#define PCU_BCR_BCD6_Pos                      (6UL)                     /*!< PCU BCR: BCD6 (Bit 6)                                       */
#define PCU_BCR_BCD6_Msk                      (0x40UL)                  /*!< PCU BCR: BCD6 (Bitfield-Mask: 0x01)                         */
#define PCU_BCR_BCD7_Pos                      (7UL)                     /*!< PCU BCR: BCD7 (Bit 7)                                       */
#define PCU_BCR_BCD7_Msk                      (0x80UL)                  /*!< PCU BCR: BCD7 (Bitfield-Mask: 0x01)                         */
#define PCU_BCR_BCD8_Pos                      (8UL)                     /*!< PCU BCR: BCD8 (Bit 8)                                       */
#define PCU_BCR_BCD8_Msk                      (0x100UL)                 /*!< PCU BCR: BCD8 (Bitfield-Mask: 0x01)                         */
#define PCU_BCR_BCD9_Pos                      (9UL)                     /*!< PCU BCR: BCD9 (Bit 9)                                       */
#define PCU_BCR_BCD9_Msk                      (0x200UL)                 /*!< PCU BCR: BCD9 (Bitfield-Mask: 0x01)                         */
#define PCU_BCR_BCD10_Pos                     (10UL)                    /*!< PCU BCR: BCD10 (Bit 10)                                     */
#define PCU_BCR_BCD10_Msk                     (0x400UL)                 /*!< PCU BCR: BCD10 (Bitfield-Mask: 0x01)                        */
#define PCU_BCR_BCD11_Pos                     (11UL)                    /*!< PCU BCR: BCD11 (Bit 11)                                     */
#define PCU_BCR_BCD11_Msk                     (0x800UL)                 /*!< PCU BCR: BCD11 (Bitfield-Mask: 0x01)                        */
#define PCU_BCR_BCD12_Pos                     (12UL)                    /*!< PCU BCR: BCD12 (Bit 12)                                     */
#define PCU_BCR_BCD12_Msk                     (0x1000UL)                /*!< PCU BCR: BCD12 (Bitfield-Mask: 0x01)                        */
#define PCU_BCR_BCD13_Pos                     (13UL)                    /*!< PCU BCR: BCD13 (Bit 13)                                     */
#define PCU_BCR_BCD13_Msk                     (0x2000UL)                /*!< PCU BCR: BCD13 (Bitfield-Mask: 0x01)                        */
#define PCU_BCR_BCD14_Pos                     (14UL)                    /*!< PCU BCR: BCD14 (Bit 14)                                     */
#define PCU_BCR_BCD14_Msk                     (0x4000UL)                /*!< PCU BCR: BCD14 (Bitfield-Mask: 0x01)                        */
#define PCU_BCR_BCD15_Pos                     (15UL)                    /*!< PCU BCR: BCD15 (Bit 15)                                     */
#define PCU_BCR_BCD15_Msk                     (0x8000UL)                /*!< PCU BCR: BCD15 (Bitfield-Mask: 0x01)                        */


/* ================================================================================ */
/* ================           struct 'PA' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  PA_MR1  ----------------------------------- */
#define PA_MR1_P0MUX_Pos                      (0UL)                     /*!< PA MR1: P0MUX (Bit 0)                                       */
#define PA_MR1_P0MUX_Msk                      (0x7UL)                   /*!< PA MR1: P0MUX (Bitfield-Mask: 0x07)                         */
#define PA_MR1_P1MUX_Pos                      (4UL)                     /*!< PA MR1: P1MUX (Bit 4)                                       */
#define PA_MR1_P1MUX_Msk                      (0x70UL)                  /*!< PA MR1: P1MUX (Bitfield-Mask: 0x07)                         */
#define PA_MR1_P2MUX_Pos                      (8UL)                     /*!< PA MR1: P2MUX (Bit 8)                                       */
#define PA_MR1_P2MUX_Msk                      (0x700UL)                 /*!< PA MR1: P2MUX (Bitfield-Mask: 0x07)                         */
#define PA_MR1_P3MUX_Pos                      (12UL)                    /*!< PA MR1: P3MUX (Bit 12)                                      */
#define PA_MR1_P3MUX_Msk                      (0x7000UL)                /*!< PA MR1: P3MUX (Bitfield-Mask: 0x07)                         */
#define PA_MR1_P4MUX_Pos                      (16UL)                    /*!< PA MR1: P4MUX (Bit 16)                                      */
#define PA_MR1_P4MUX_Msk                      (0x70000UL)               /*!< PA MR1: P4MUX (Bitfield-Mask: 0x07)                         */
#define PA_MR1_P5MUX_Pos                      (20UL)                    /*!< PA MR1: P5MUX (Bit 20)                                      */
#define PA_MR1_P5MUX_Msk                      (0x700000UL)              /*!< PA MR1: P5MUX (Bitfield-Mask: 0x07)                         */
#define PA_MR1_P6MUX_Pos                      (24UL)                    /*!< PA MR1: P6MUX (Bit 24)                                      */
#define PA_MR1_P6MUX_Msk                      (0x7000000UL)             /*!< PA MR1: P6MUX (Bitfield-Mask: 0x07)                         */
#define PA_MR1_P7MUX_Pos                      (28UL)                    /*!< PA MR1: P7MUX (Bit 28)                                      */
#define PA_MR1_P7MUX_Msk                      (0x70000000UL)            /*!< PA MR1: P7MUX (Bitfield-Mask: 0x07)                         */

/* -----------------------------------  PA_MR2  ----------------------------------- */
#define PA_MR2_P8MUX_Pos                      (0UL)                     /*!< PA MR2: P8MUX (Bit 0)                                       */
#define PA_MR2_P8MUX_Msk                      (0x7UL)                   /*!< PA MR2: P8MUX (Bitfield-Mask: 0x07)                         */
#define PA_MR2_P9MUX_Pos                      (4UL)                     /*!< PA MR2: P9MUX (Bit 4)                                       */
#define PA_MR2_P9MUX_Msk                      (0x70UL)                  /*!< PA MR2: P9MUX (Bitfield-Mask: 0x07)                         */
#define PA_MR2_P10MUX_Pos                     (8UL)                     /*!< PA MR2: P10MUX (Bit 8)                                      */
#define PA_MR2_P10MUX_Msk                     (0x700UL)                 /*!< PA MR2: P10MUX (Bitfield-Mask: 0x07)                        */
#define PA_MR2_P11MUX_Pos                     (12UL)                    /*!< PA MR2: P11MUX (Bit 12)                                     */
#define PA_MR2_P11MUX_Msk                     (0x7000UL)                /*!< PA MR2: P11MUX (Bitfield-Mask: 0x07)                        */
#define PA_MR2_P12MUX_Pos                     (16UL)                    /*!< PA MR2: P12MUX (Bit 16)                                     */
#define PA_MR2_P12MUX_Msk                     (0x70000UL)               /*!< PA MR2: P12MUX (Bitfield-Mask: 0x07)                        */
#define PA_MR2_P13MUX_Pos                     (20UL)                    /*!< PA MR2: P13MUX (Bit 20)                                     */
#define PA_MR2_P13MUX_Msk                     (0x700000UL)              /*!< PA MR2: P13MUX (Bitfield-Mask: 0x07)                        */
#define PA_MR2_P14MUX_Pos                     (24UL)                    /*!< PA MR2: P14MUX (Bit 24)                                     */
#define PA_MR2_P14MUX_Msk                     (0x7000000UL)             /*!< PA MR2: P14MUX (Bitfield-Mask: 0x07)                        */
#define PA_MR2_P15MUX_Pos                     (28UL)                    /*!< PA MR2: P15MUX (Bit 28)                                     */
#define PA_MR2_P15MUX_Msk                     (0x70000000UL)            /*!< PA MR2: P15MUX (Bitfield-Mask: 0x07)                        */

/* ------------------------------------  PA_CR  ----------------------------------- */
#define PA_CR_P0_Pos                          (0UL)                     /*!< PA CR: P0 (Bit 0)                                           */
#define PA_CR_P0_Msk                          (0x3UL)                   /*!< PA CR: P0 (Bitfield-Mask: 0x03)                             */
#define PA_CR_P1_Pos                          (2UL)                     /*!< PA CR: P1 (Bit 2)                                           */
#define PA_CR_P1_Msk                          (0xcUL)                   /*!< PA CR: P1 (Bitfield-Mask: 0x03)                             */
#define PA_CR_P2_Pos                          (4UL)                     /*!< PA CR: P2 (Bit 4)                                           */
#define PA_CR_P2_Msk                          (0x30UL)                  /*!< PA CR: P2 (Bitfield-Mask: 0x03)                             */
#define PA_CR_P3_Pos                          (6UL)                     /*!< PA CR: P3 (Bit 6)                                           */
#define PA_CR_P3_Msk                          (0xc0UL)                  /*!< PA CR: P3 (Bitfield-Mask: 0x03)                             */
#define PA_CR_P4_Pos                          (8UL)                     /*!< PA CR: P4 (Bit 8)                                           */
#define PA_CR_P4_Msk                          (0x300UL)                 /*!< PA CR: P4 (Bitfield-Mask: 0x03)                             */
#define PA_CR_P5_Pos                          (10UL)                    /*!< PA CR: P5 (Bit 10)                                          */
#define PA_CR_P5_Msk                          (0xc00UL)                 /*!< PA CR: P5 (Bitfield-Mask: 0x03)                             */
#define PA_CR_P6_Pos                          (12UL)                    /*!< PA CR: P6 (Bit 12)                                          */
#define PA_CR_P6_Msk                          (0x3000UL)                /*!< PA CR: P6 (Bitfield-Mask: 0x03)                             */
#define PA_CR_P7_Pos                          (14UL)                    /*!< PA CR: P7 (Bit 14)                                          */
#define PA_CR_P7_Msk                          (0xc000UL)                /*!< PA CR: P7 (Bitfield-Mask: 0x03)                             */
#define PA_CR_P8_Pos                          (16UL)                    /*!< PA CR: P8 (Bit 16)                                          */
#define PA_CR_P8_Msk                          (0x30000UL)               /*!< PA CR: P8 (Bitfield-Mask: 0x03)                             */
#define PA_CR_P9_Pos                          (18UL)                    /*!< PA CR: P9 (Bit 18)                                          */
#define PA_CR_P9_Msk                          (0xc0000UL)               /*!< PA CR: P9 (Bitfield-Mask: 0x03)                             */
#define PA_CR_P10_Pos                         (20UL)                    /*!< PA CR: P10 (Bit 20)                                         */
#define PA_CR_P10_Msk                         (0x300000UL)              /*!< PA CR: P10 (Bitfield-Mask: 0x03)                            */
#define PA_CR_P11_Pos                         (22UL)                    /*!< PA CR: P11 (Bit 22)                                         */
#define PA_CR_P11_Msk                         (0xc00000UL)              /*!< PA CR: P11 (Bitfield-Mask: 0x03)                            */
#define PA_CR_P12_Pos                         (24UL)                    /*!< PA CR: P12 (Bit 24)                                         */
#define PA_CR_P12_Msk                         (0x3000000UL)             /*!< PA CR: P12 (Bitfield-Mask: 0x03)                            */
#define PA_CR_P13_Pos                         (26UL)                    /*!< PA CR: P13 (Bit 26)                                         */
#define PA_CR_P13_Msk                         (0xc000000UL)             /*!< PA CR: P13 (Bitfield-Mask: 0x03)                            */
#define PA_CR_P14_Pos                         (28UL)                    /*!< PA CR: P14 (Bit 28)                                         */
#define PA_CR_P14_Msk                         (0x30000000UL)            /*!< PA CR: P14 (Bitfield-Mask: 0x03)                            */
#define PA_CR_P15_Pos                         (30UL)                    /*!< PA CR: P15 (Bit 30)                                         */
#define PA_CR_P15_Msk                         (0xc0000000UL)            /*!< PA CR: P15 (Bitfield-Mask: 0x03)                            */

/* -----------------------------------  PA_PRCR  ---------------------------------- */
#define PA_PRCR_PUE0_Pos                      (0UL)                     /*!< PA PRCR: PUE0 (Bit 0)                                       */
#define PA_PRCR_PUE0_Msk                      (0x3UL)                   /*!< PA PRCR: PUE0 (Bitfield-Mask: 0x03)                         */
#define PA_PRCR_PUE1_Pos                      (2UL)                     /*!< PA PRCR: PUE1 (Bit 2)                                       */
#define PA_PRCR_PUE1_Msk                      (0xcUL)                   /*!< PA PRCR: PUE1 (Bitfield-Mask: 0x03)                         */
#define PA_PRCR_PUE2_Pos                      (4UL)                     /*!< PA PRCR: PUE2 (Bit 4)                                       */
#define PA_PRCR_PUE2_Msk                      (0x30UL)                  /*!< PA PRCR: PUE2 (Bitfield-Mask: 0x03)                         */
#define PA_PRCR_PUE3_Pos                      (6UL)                     /*!< PA PRCR: PUE3 (Bit 6)                                       */
#define PA_PRCR_PUE3_Msk                      (0xc0UL)                  /*!< PA PRCR: PUE3 (Bitfield-Mask: 0x03)                         */
#define PA_PRCR_PUE4_Pos                      (8UL)                     /*!< PA PRCR: PUE4 (Bit 8)                                       */
#define PA_PRCR_PUE4_Msk                      (0x300UL)                 /*!< PA PRCR: PUE4 (Bitfield-Mask: 0x03)                         */
#define PA_PRCR_PUE5_Pos                      (10UL)                    /*!< PA PRCR: PUE5 (Bit 10)                                      */
#define PA_PRCR_PUE5_Msk                      (0xc00UL)                 /*!< PA PRCR: PUE5 (Bitfield-Mask: 0x03)                         */
#define PA_PRCR_PUE6_Pos                      (12UL)                    /*!< PA PRCR: PUE6 (Bit 12)                                      */
#define PA_PRCR_PUE6_Msk                      (0x3000UL)                /*!< PA PRCR: PUE6 (Bitfield-Mask: 0x03)                         */
#define PA_PRCR_PUE7_Pos                      (14UL)                    /*!< PA PRCR: PUE7 (Bit 14)                                      */
#define PA_PRCR_PUE7_Msk                      (0xc000UL)                /*!< PA PRCR: PUE7 (Bitfield-Mask: 0x03)                         */
#define PA_PRCR_PUE8_Pos                      (16UL)                    /*!< PA PRCR: PUE8 (Bit 16)                                      */
#define PA_PRCR_PUE8_Msk                      (0x30000UL)               /*!< PA PRCR: PUE8 (Bitfield-Mask: 0x03)                         */
#define PA_PRCR_PUE9_Pos                      (18UL)                    /*!< PA PRCR: PUE9 (Bit 18)                                      */
#define PA_PRCR_PUE9_Msk                      (0xc0000UL)               /*!< PA PRCR: PUE9 (Bitfield-Mask: 0x03)                         */
#define PA_PRCR_PUE10_Pos                     (20UL)                    /*!< PA PRCR: PUE10 (Bit 20)                                     */
#define PA_PRCR_PUE10_Msk                     (0x300000UL)              /*!< PA PRCR: PUE10 (Bitfield-Mask: 0x03)                        */
#define PA_PRCR_PUE11_Pos                     (22UL)                    /*!< PA PRCR: PUE11 (Bit 22)                                     */
#define PA_PRCR_PUE11_Msk                     (0xc00000UL)              /*!< PA PRCR: PUE11 (Bitfield-Mask: 0x03)                        */
#define PA_PRCR_PUE12_Pos                     (24UL)                    /*!< PA PRCR: PUE12 (Bit 24)                                     */
#define PA_PRCR_PUE12_Msk                     (0x3000000UL)             /*!< PA PRCR: PUE12 (Bitfield-Mask: 0x03)                        */
#define PA_PRCR_PUE13_Pos                     (26UL)                    /*!< PA PRCR: PUE13 (Bit 26)                                     */
#define PA_PRCR_PUE13_Msk                     (0xc000000UL)             /*!< PA PRCR: PUE13 (Bitfield-Mask: 0x03)                        */
#define PA_PRCR_PUE14_Pos                     (28UL)                    /*!< PA PRCR: PUE14 (Bit 28)                                     */
#define PA_PRCR_PUE14_Msk                     (0x30000000UL)            /*!< PA PRCR: PUE14 (Bitfield-Mask: 0x03)                        */
#define PA_PRCR_PUE15_Pos                     (30UL)                    /*!< PA PRCR: PUE15 (Bit 30)                                     */
#define PA_PRCR_PUE15_Msk                     (0xc0000000UL)            /*!< PA PRCR: PUE15 (Bitfield-Mask: 0x03)                        */

/* -----------------------------------  PA_DER  ----------------------------------- */
#define PA_DER_PDE0_Pos                       (0UL)                     /*!< PA DER: PDE0 (Bit 0)                                        */
#define PA_DER_PDE0_Msk                       (0x1UL)                   /*!< PA DER: PDE0 (Bitfield-Mask: 0x01)                          */
#define PA_DER_PDE1_Pos                       (1UL)                     /*!< PA DER: PDE1 (Bit 1)                                        */
#define PA_DER_PDE1_Msk                       (0x2UL)                   /*!< PA DER: PDE1 (Bitfield-Mask: 0x01)                          */
#define PA_DER_PDE2_Pos                       (2UL)                     /*!< PA DER: PDE2 (Bit 2)                                        */
#define PA_DER_PDE2_Msk                       (0x4UL)                   /*!< PA DER: PDE2 (Bitfield-Mask: 0x01)                          */
#define PA_DER_PDE3_Pos                       (3UL)                     /*!< PA DER: PDE3 (Bit 3)                                        */
#define PA_DER_PDE3_Msk                       (0x8UL)                   /*!< PA DER: PDE3 (Bitfield-Mask: 0x01)                          */
#define PA_DER_PDE4_Pos                       (4UL)                     /*!< PA DER: PDE4 (Bit 4)                                        */
#define PA_DER_PDE4_Msk                       (0x10UL)                  /*!< PA DER: PDE4 (Bitfield-Mask: 0x01)                          */
#define PA_DER_PDE5_Pos                       (5UL)                     /*!< PA DER: PDE5 (Bit 5)                                        */
#define PA_DER_PDE5_Msk                       (0x20UL)                  /*!< PA DER: PDE5 (Bitfield-Mask: 0x01)                          */
#define PA_DER_PDE6_Pos                       (6UL)                     /*!< PA DER: PDE6 (Bit 6)                                        */
#define PA_DER_PDE6_Msk                       (0x40UL)                  /*!< PA DER: PDE6 (Bitfield-Mask: 0x01)                          */
#define PA_DER_PDE7_Pos                       (7UL)                     /*!< PA DER: PDE7 (Bit 7)                                        */
#define PA_DER_PDE7_Msk                       (0x80UL)                  /*!< PA DER: PDE7 (Bitfield-Mask: 0x01)                          */
#define PA_DER_PDE8_Pos                       (8UL)                     /*!< PA DER: PDE8 (Bit 8)                                        */
#define PA_DER_PDE8_Msk                       (0x100UL)                 /*!< PA DER: PDE8 (Bitfield-Mask: 0x01)                          */
#define PA_DER_PDE9_Pos                       (9UL)                     /*!< PA DER: PDE9 (Bit 9)                                        */
#define PA_DER_PDE9_Msk                       (0x200UL)                 /*!< PA DER: PDE9 (Bitfield-Mask: 0x01)                          */
#define PA_DER_PDE10_Pos                      (10UL)                    /*!< PA DER: PDE10 (Bit 10)                                      */
#define PA_DER_PDE10_Msk                      (0x400UL)                 /*!< PA DER: PDE10 (Bitfield-Mask: 0x01)                         */
#define PA_DER_PDE11_Pos                      (11UL)                    /*!< PA DER: PDE11 (Bit 11)                                      */
#define PA_DER_PDE11_Msk                      (0x800UL)                 /*!< PA DER: PDE11 (Bitfield-Mask: 0x01)                         */
#define PA_DER_PDE12_Pos                      (12UL)                    /*!< PA DER: PDE12 (Bit 12)                                      */
#define PA_DER_PDE12_Msk                      (0x1000UL)                /*!< PA DER: PDE12 (Bitfield-Mask: 0x01)                         */
#define PA_DER_PDE13_Pos                      (13UL)                    /*!< PA DER: PDE13 (Bit 13)                                      */
#define PA_DER_PDE13_Msk                      (0x2000UL)                /*!< PA DER: PDE13 (Bitfield-Mask: 0x01)                         */
#define PA_DER_PDE14_Pos                      (14UL)                    /*!< PA DER: PDE14 (Bit 14)                                      */
#define PA_DER_PDE14_Msk                      (0x4000UL)                /*!< PA DER: PDE14 (Bitfield-Mask: 0x01)                         */
#define PA_DER_PDE15_Pos                      (15UL)                    /*!< PA DER: PDE15 (Bit 15)                                      */
#define PA_DER_PDE15_Msk                      (0x8000UL)                /*!< PA DER: PDE15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PA_IER  ----------------------------------- */
#define PA_IER_PIE0_Pos                       (0UL)                     /*!< PA IER: PIE0 (Bit 0)                                        */
#define PA_IER_PIE0_Msk                       (0x3UL)                   /*!< PA IER: PIE0 (Bitfield-Mask: 0x03)                          */
#define PA_IER_PIE1_Pos                       (2UL)                     /*!< PA IER: PIE1 (Bit 2)                                        */
#define PA_IER_PIE1_Msk                       (0xcUL)                   /*!< PA IER: PIE1 (Bitfield-Mask: 0x03)                          */
#define PA_IER_PIE2_Pos                       (4UL)                     /*!< PA IER: PIE2 (Bit 4)                                        */
#define PA_IER_PIE2_Msk                       (0x30UL)                  /*!< PA IER: PIE2 (Bitfield-Mask: 0x03)                          */
#define PA_IER_PIE3_Pos                       (6UL)                     /*!< PA IER: PIE3 (Bit 6)                                        */
#define PA_IER_PIE3_Msk                       (0xc0UL)                  /*!< PA IER: PIE3 (Bitfield-Mask: 0x03)                          */
#define PA_IER_PIE4_Pos                       (8UL)                     /*!< PA IER: PIE4 (Bit 8)                                        */
#define PA_IER_PIE4_Msk                       (0x300UL)                 /*!< PA IER: PIE4 (Bitfield-Mask: 0x03)                          */
#define PA_IER_PIE5_Pos                       (10UL)                    /*!< PA IER: PIE5 (Bit 10)                                       */
#define PA_IER_PIE5_Msk                       (0xc00UL)                 /*!< PA IER: PIE5 (Bitfield-Mask: 0x03)                          */
#define PA_IER_PIE6_Pos                       (12UL)                    /*!< PA IER: PIE6 (Bit 12)                                       */
#define PA_IER_PIE6_Msk                       (0x3000UL)                /*!< PA IER: PIE6 (Bitfield-Mask: 0x03)                          */
#define PA_IER_PIE7_Pos                       (14UL)                    /*!< PA IER: PIE7 (Bit 14)                                       */
#define PA_IER_PIE7_Msk                       (0xc000UL)                /*!< PA IER: PIE7 (Bitfield-Mask: 0x03)                          */
#define PA_IER_PIE8_Pos                       (16UL)                    /*!< PA IER: PIE8 (Bit 16)                                       */
#define PA_IER_PIE8_Msk                       (0x30000UL)               /*!< PA IER: PIE8 (Bitfield-Mask: 0x03)                          */
#define PA_IER_PIE9_Pos                       (18UL)                    /*!< PA IER: PIE9 (Bit 18)                                       */
#define PA_IER_PIE9_Msk                       (0xc0000UL)               /*!< PA IER: PIE9 (Bitfield-Mask: 0x03)                          */
#define PA_IER_PIE10_Pos                      (20UL)                    /*!< PA IER: PIE10 (Bit 20)                                      */
#define PA_IER_PIE10_Msk                      (0x300000UL)              /*!< PA IER: PIE10 (Bitfield-Mask: 0x03)                         */
#define PA_IER_PIE11_Pos                      (22UL)                    /*!< PA IER: PIE11 (Bit 22)                                      */
#define PA_IER_PIE11_Msk                      (0xc00000UL)              /*!< PA IER: PIE11 (Bitfield-Mask: 0x03)                         */
#define PA_IER_PIE12_Pos                      (24UL)                    /*!< PA IER: PIE12 (Bit 24)                                      */
#define PA_IER_PIE12_Msk                      (0x3000000UL)             /*!< PA IER: PIE12 (Bitfield-Mask: 0x03)                         */
#define PA_IER_PIE13_Pos                      (26UL)                    /*!< PA IER: PIE13 (Bit 26)                                      */
#define PA_IER_PIE13_Msk                      (0xc000000UL)             /*!< PA IER: PIE13 (Bitfield-Mask: 0x03)                         */
#define PA_IER_PIE14_Pos                      (28UL)                    /*!< PA IER: PIE14 (Bit 28)                                      */
#define PA_IER_PIE14_Msk                      (0x30000000UL)            /*!< PA IER: PIE14 (Bitfield-Mask: 0x03)                         */
#define PA_IER_PIE15_Pos                      (30UL)                    /*!< PA IER: PIE15 (Bit 30)                                      */
#define PA_IER_PIE15_Msk                      (0xc0000000UL)            /*!< PA IER: PIE15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PA_ISR  ----------------------------------- */
#define PA_ISR_PIS0_Pos                       (0UL)                     /*!< PA ISR: PIS0 (Bit 0)                                        */
#define PA_ISR_PIS0_Msk                       (0x3UL)                   /*!< PA ISR: PIS0 (Bitfield-Mask: 0x03)                          */
#define PA_ISR_PIS1_Pos                       (2UL)                     /*!< PA ISR: PIS1 (Bit 2)                                        */
#define PA_ISR_PIS1_Msk                       (0xcUL)                   /*!< PA ISR: PIS1 (Bitfield-Mask: 0x03)                          */
#define PA_ISR_PIS2_Pos                       (4UL)                     /*!< PA ISR: PIS2 (Bit 4)                                        */
#define PA_ISR_PIS2_Msk                       (0x30UL)                  /*!< PA ISR: PIS2 (Bitfield-Mask: 0x03)                          */
#define PA_ISR_PIS3_Pos                       (6UL)                     /*!< PA ISR: PIS3 (Bit 6)                                        */
#define PA_ISR_PIS3_Msk                       (0xc0UL)                  /*!< PA ISR: PIS3 (Bitfield-Mask: 0x03)                          */
#define PA_ISR_PIS4_Pos                       (8UL)                     /*!< PA ISR: PIS4 (Bit 8)                                        */
#define PA_ISR_PIS4_Msk                       (0x300UL)                 /*!< PA ISR: PIS4 (Bitfield-Mask: 0x03)                          */
#define PA_ISR_PIS5_Pos                       (10UL)                    /*!< PA ISR: PIS5 (Bit 10)                                       */
#define PA_ISR_PIS5_Msk                       (0xc00UL)                 /*!< PA ISR: PIS5 (Bitfield-Mask: 0x03)                          */
#define PA_ISR_PIS6_Pos                       (12UL)                    /*!< PA ISR: PIS6 (Bit 12)                                       */
#define PA_ISR_PIS6_Msk                       (0x3000UL)                /*!< PA ISR: PIS6 (Bitfield-Mask: 0x03)                          */
#define PA_ISR_PIS7_Pos                       (14UL)                    /*!< PA ISR: PIS7 (Bit 14)                                       */
#define PA_ISR_PIS7_Msk                       (0xc000UL)                /*!< PA ISR: PIS7 (Bitfield-Mask: 0x03)                          */
#define PA_ISR_PIS8_Pos                       (16UL)                    /*!< PA ISR: PIS8 (Bit 16)                                       */
#define PA_ISR_PIS8_Msk                       (0x30000UL)               /*!< PA ISR: PIS8 (Bitfield-Mask: 0x03)                          */
#define PA_ISR_PIS9_Pos                       (18UL)                    /*!< PA ISR: PIS9 (Bit 18)                                       */
#define PA_ISR_PIS9_Msk                       (0xc0000UL)               /*!< PA ISR: PIS9 (Bitfield-Mask: 0x03)                          */
#define PA_ISR_PIS10_Pos                      (20UL)                    /*!< PA ISR: PIS10 (Bit 20)                                      */
#define PA_ISR_PIS10_Msk                      (0x300000UL)              /*!< PA ISR: PIS10 (Bitfield-Mask: 0x03)                         */
#define PA_ISR_PIS11_Pos                      (22UL)                    /*!< PA ISR: PIS11 (Bit 22)                                      */
#define PA_ISR_PIS11_Msk                      (0xc00000UL)              /*!< PA ISR: PIS11 (Bitfield-Mask: 0x03)                         */
#define PA_ISR_PIS12_Pos                      (24UL)                    /*!< PA ISR: PIS12 (Bit 24)                                      */
#define PA_ISR_PIS12_Msk                      (0x3000000UL)             /*!< PA ISR: PIS12 (Bitfield-Mask: 0x03)                         */
#define PA_ISR_PIS13_Pos                      (26UL)                    /*!< PA ISR: PIS13 (Bit 26)                                      */
#define PA_ISR_PIS13_Msk                      (0xc000000UL)             /*!< PA ISR: PIS13 (Bitfield-Mask: 0x03)                         */
#define PA_ISR_PIS14_Pos                      (28UL)                    /*!< PA ISR: PIS14 (Bit 28)                                      */
#define PA_ISR_PIS14_Msk                      (0x30000000UL)            /*!< PA ISR: PIS14 (Bitfield-Mask: 0x03)                         */
#define PA_ISR_PIS15_Pos                      (30UL)                    /*!< PA ISR: PIS15 (Bit 30)                                      */
#define PA_ISR_PIS15_Msk                      (0xc0000000UL)            /*!< PA ISR: PIS15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PA_ICR  ----------------------------------- */
#define PA_ICR_PIC0_Pos                       (0UL)                     /*!< PA ICR: PIC0 (Bit 0)                                        */
#define PA_ICR_PIC0_Msk                       (0x3UL)                   /*!< PA ICR: PIC0 (Bitfield-Mask: 0x03)                          */
#define PA_ICR_PIC1_Pos                       (2UL)                     /*!< PA ICR: PIC1 (Bit 2)                                        */
#define PA_ICR_PIC1_Msk                       (0xcUL)                   /*!< PA ICR: PIC1 (Bitfield-Mask: 0x03)                          */
#define PA_ICR_PIC2_Pos                       (4UL)                     /*!< PA ICR: PIC2 (Bit 4)                                        */
#define PA_ICR_PIC2_Msk                       (0x30UL)                  /*!< PA ICR: PIC2 (Bitfield-Mask: 0x03)                          */
#define PA_ICR_PIC3_Pos                       (6UL)                     /*!< PA ICR: PIC3 (Bit 6)                                        */
#define PA_ICR_PIC3_Msk                       (0xc0UL)                  /*!< PA ICR: PIC3 (Bitfield-Mask: 0x03)                          */
#define PA_ICR_PIC4_Pos                       (8UL)                     /*!< PA ICR: PIC4 (Bit 8)                                        */
#define PA_ICR_PIC4_Msk                       (0x300UL)                 /*!< PA ICR: PIC4 (Bitfield-Mask: 0x03)                          */
#define PA_ICR_PIC5_Pos                       (10UL)                    /*!< PA ICR: PIC5 (Bit 10)                                       */
#define PA_ICR_PIC5_Msk                       (0xc00UL)                 /*!< PA ICR: PIC5 (Bitfield-Mask: 0x03)                          */
#define PA_ICR_PIC6_Pos                       (12UL)                    /*!< PA ICR: PIC6 (Bit 12)                                       */
#define PA_ICR_PIC6_Msk                       (0x3000UL)                /*!< PA ICR: PIC6 (Bitfield-Mask: 0x03)                          */
#define PA_ICR_PIC7_Pos                       (14UL)                    /*!< PA ICR: PIC7 (Bit 14)                                       */
#define PA_ICR_PIC7_Msk                       (0xc000UL)                /*!< PA ICR: PIC7 (Bitfield-Mask: 0x03)                          */
#define PA_ICR_PIC8_Pos                       (16UL)                    /*!< PA ICR: PIC8 (Bit 16)                                       */
#define PA_ICR_PIC8_Msk                       (0x30000UL)               /*!< PA ICR: PIC8 (Bitfield-Mask: 0x03)                          */
#define PA_ICR_PIC9_Pos                       (18UL)                    /*!< PA ICR: PIC9 (Bit 18)                                       */
#define PA_ICR_PIC9_Msk                       (0xc0000UL)               /*!< PA ICR: PIC9 (Bitfield-Mask: 0x03)                          */
#define PA_ICR_PIC10_Pos                      (20UL)                    /*!< PA ICR: PIC10 (Bit 20)                                      */
#define PA_ICR_PIC10_Msk                      (0x300000UL)              /*!< PA ICR: PIC10 (Bitfield-Mask: 0x03)                         */
#define PA_ICR_PIC11_Pos                      (22UL)                    /*!< PA ICR: PIC11 (Bit 22)                                      */
#define PA_ICR_PIC11_Msk                      (0xc00000UL)              /*!< PA ICR: PIC11 (Bitfield-Mask: 0x03)                         */
#define PA_ICR_PIC12_Pos                      (24UL)                    /*!< PA ICR: PIC12 (Bit 24)                                      */
#define PA_ICR_PIC12_Msk                      (0x3000000UL)             /*!< PA ICR: PIC12 (Bitfield-Mask: 0x03)                         */
#define PA_ICR_PIC13_Pos                      (26UL)                    /*!< PA ICR: PIC13 (Bit 26)                                      */
#define PA_ICR_PIC13_Msk                      (0xc000000UL)             /*!< PA ICR: PIC13 (Bitfield-Mask: 0x03)                         */
#define PA_ICR_PIC14_Pos                      (28UL)                    /*!< PA ICR: PIC14 (Bit 28)                                      */
#define PA_ICR_PIC14_Msk                      (0x30000000UL)            /*!< PA ICR: PIC14 (Bitfield-Mask: 0x03)                         */
#define PA_ICR_PIC15_Pos                      (30UL)                    /*!< PA ICR: PIC15 (Bit 30)                                      */
#define PA_ICR_PIC15_Msk                      (0xc0000000UL)            /*!< PA ICR: PIC15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PA_ODR  ----------------------------------- */
#define PA_ODR_POD0_Pos                       (0UL)                     /*!< PA ODR: POD0 (Bit 0)                                        */
#define PA_ODR_POD0_Msk                       (0x1UL)                   /*!< PA ODR: POD0 (Bitfield-Mask: 0x01)                          */
#define PA_ODR_POD1_Pos                       (1UL)                     /*!< PA ODR: POD1 (Bit 1)                                        */
#define PA_ODR_POD1_Msk                       (0x2UL)                   /*!< PA ODR: POD1 (Bitfield-Mask: 0x01)                          */
#define PA_ODR_POD2_Pos                       (2UL)                     /*!< PA ODR: POD2 (Bit 2)                                        */
#define PA_ODR_POD2_Msk                       (0x4UL)                   /*!< PA ODR: POD2 (Bitfield-Mask: 0x01)                          */
#define PA_ODR_POD3_Pos                       (3UL)                     /*!< PA ODR: POD3 (Bit 3)                                        */
#define PA_ODR_POD3_Msk                       (0x8UL)                   /*!< PA ODR: POD3 (Bitfield-Mask: 0x01)                          */
#define PA_ODR_POD4_Pos                       (4UL)                     /*!< PA ODR: POD4 (Bit 4)                                        */
#define PA_ODR_POD4_Msk                       (0x10UL)                  /*!< PA ODR: POD4 (Bitfield-Mask: 0x01)                          */
#define PA_ODR_POD5_Pos                       (5UL)                     /*!< PA ODR: POD5 (Bit 5)                                        */
#define PA_ODR_POD5_Msk                       (0x20UL)                  /*!< PA ODR: POD5 (Bitfield-Mask: 0x01)                          */
#define PA_ODR_POD6_Pos                       (6UL)                     /*!< PA ODR: POD6 (Bit 6)                                        */
#define PA_ODR_POD6_Msk                       (0x40UL)                  /*!< PA ODR: POD6 (Bitfield-Mask: 0x01)                          */
#define PA_ODR_POD7_Pos                       (7UL)                     /*!< PA ODR: POD7 (Bit 7)                                        */
#define PA_ODR_POD7_Msk                       (0x80UL)                  /*!< PA ODR: POD7 (Bitfield-Mask: 0x01)                          */
#define PA_ODR_POD8_Pos                       (8UL)                     /*!< PA ODR: POD8 (Bit 8)                                        */
#define PA_ODR_POD8_Msk                       (0x100UL)                 /*!< PA ODR: POD8 (Bitfield-Mask: 0x01)                          */
#define PA_ODR_POD9_Pos                       (9UL)                     /*!< PA ODR: POD9 (Bit 9)                                        */
#define PA_ODR_POD9_Msk                       (0x200UL)                 /*!< PA ODR: POD9 (Bitfield-Mask: 0x01)                          */
#define PA_ODR_POD10_Pos                      (10UL)                    /*!< PA ODR: POD10 (Bit 10)                                      */
#define PA_ODR_POD10_Msk                      (0x400UL)                 /*!< PA ODR: POD10 (Bitfield-Mask: 0x01)                         */
#define PA_ODR_POD11_Pos                      (11UL)                    /*!< PA ODR: POD11 (Bit 11)                                      */
#define PA_ODR_POD11_Msk                      (0x800UL)                 /*!< PA ODR: POD11 (Bitfield-Mask: 0x01)                         */
#define PA_ODR_POD12_Pos                      (12UL)                    /*!< PA ODR: POD12 (Bit 12)                                      */
#define PA_ODR_POD12_Msk                      (0x1000UL)                /*!< PA ODR: POD12 (Bitfield-Mask: 0x01)                         */
#define PA_ODR_POD13_Pos                      (13UL)                    /*!< PA ODR: POD13 (Bit 13)                                      */
#define PA_ODR_POD13_Msk                      (0x2000UL)                /*!< PA ODR: POD13 (Bitfield-Mask: 0x01)                         */
#define PA_ODR_POD14_Pos                      (14UL)                    /*!< PA ODR: POD14 (Bit 14)                                      */
#define PA_ODR_POD14_Msk                      (0x4000UL)                /*!< PA ODR: POD14 (Bitfield-Mask: 0x01)                         */
#define PA_ODR_POD15_Pos                      (15UL)                    /*!< PA ODR: POD15 (Bit 15)                                      */
#define PA_ODR_POD15_Msk                      (0x8000UL)                /*!< PA ODR: POD15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PA_IDR  ----------------------------------- */
#define PA_IDR_PID0_Pos                       (0UL)                     /*!< PA IDR: PID0 (Bit 0)                                        */
#define PA_IDR_PID0_Msk                       (0x1UL)                   /*!< PA IDR: PID0 (Bitfield-Mask: 0x01)                          */
#define PA_IDR_PID1_Pos                       (1UL)                     /*!< PA IDR: PID1 (Bit 1)                                        */
#define PA_IDR_PID1_Msk                       (0x2UL)                   /*!< PA IDR: PID1 (Bitfield-Mask: 0x01)                          */
#define PA_IDR_PID2_Pos                       (2UL)                     /*!< PA IDR: PID2 (Bit 2)                                        */
#define PA_IDR_PID2_Msk                       (0x4UL)                   /*!< PA IDR: PID2 (Bitfield-Mask: 0x01)                          */
#define PA_IDR_PID3_Pos                       (3UL)                     /*!< PA IDR: PID3 (Bit 3)                                        */
#define PA_IDR_PID3_Msk                       (0x8UL)                   /*!< PA IDR: PID3 (Bitfield-Mask: 0x01)                          */
#define PA_IDR_PID4_Pos                       (4UL)                     /*!< PA IDR: PID4 (Bit 4)                                        */
#define PA_IDR_PID4_Msk                       (0x10UL)                  /*!< PA IDR: PID4 (Bitfield-Mask: 0x01)                          */
#define PA_IDR_PID5_Pos                       (5UL)                     /*!< PA IDR: PID5 (Bit 5)                                        */
#define PA_IDR_PID5_Msk                       (0x20UL)                  /*!< PA IDR: PID5 (Bitfield-Mask: 0x01)                          */
#define PA_IDR_PID6_Pos                       (6UL)                     /*!< PA IDR: PID6 (Bit 6)                                        */
#define PA_IDR_PID6_Msk                       (0x40UL)                  /*!< PA IDR: PID6 (Bitfield-Mask: 0x01)                          */
#define PA_IDR_PID7_Pos                       (7UL)                     /*!< PA IDR: PID7 (Bit 7)                                        */
#define PA_IDR_PID7_Msk                       (0x80UL)                  /*!< PA IDR: PID7 (Bitfield-Mask: 0x01)                          */
#define PA_IDR_PID8_Pos                       (8UL)                     /*!< PA IDR: PID8 (Bit 8)                                        */
#define PA_IDR_PID8_Msk                       (0x100UL)                 /*!< PA IDR: PID8 (Bitfield-Mask: 0x01)                          */
#define PA_IDR_PID9_Pos                       (9UL)                     /*!< PA IDR: PID9 (Bit 9)                                        */
#define PA_IDR_PID9_Msk                       (0x200UL)                 /*!< PA IDR: PID9 (Bitfield-Mask: 0x01)                          */
#define PA_IDR_PID10_Pos                      (10UL)                    /*!< PA IDR: PID10 (Bit 10)                                      */
#define PA_IDR_PID10_Msk                      (0x400UL)                 /*!< PA IDR: PID10 (Bitfield-Mask: 0x01)                         */
#define PA_IDR_PID11_Pos                      (11UL)                    /*!< PA IDR: PID11 (Bit 11)                                      */
#define PA_IDR_PID11_Msk                      (0x800UL)                 /*!< PA IDR: PID11 (Bitfield-Mask: 0x01)                         */
#define PA_IDR_PID12_Pos                      (12UL)                    /*!< PA IDR: PID12 (Bit 12)                                      */
#define PA_IDR_PID12_Msk                      (0x1000UL)                /*!< PA IDR: PID12 (Bitfield-Mask: 0x01)                         */
#define PA_IDR_PID13_Pos                      (13UL)                    /*!< PA IDR: PID13 (Bit 13)                                      */
#define PA_IDR_PID13_Msk                      (0x2000UL)                /*!< PA IDR: PID13 (Bitfield-Mask: 0x01)                         */
#define PA_IDR_PID14_Pos                      (14UL)                    /*!< PA IDR: PID14 (Bit 14)                                      */
#define PA_IDR_PID14_Msk                      (0x4000UL)                /*!< PA IDR: PID14 (Bitfield-Mask: 0x01)                         */
#define PA_IDR_PID15_Pos                      (15UL)                    /*!< PA IDR: PID15 (Bit 15)                                      */
#define PA_IDR_PID15_Msk                      (0x8000UL)                /*!< PA IDR: PID15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PA_BSR  ----------------------------------- */
#define PA_BSR_BSD0_Pos                       (0UL)                     /*!< PA BSR: BSD0 (Bit 0)                                        */
#define PA_BSR_BSD0_Msk                       (0x1UL)                   /*!< PA BSR: BSD0 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BSD1_Pos                       (1UL)                     /*!< PA BSR: BSD1 (Bit 1)                                        */
#define PA_BSR_BSD1_Msk                       (0x2UL)                   /*!< PA BSR: BSD1 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BSD2_Pos                       (2UL)                     /*!< PA BSR: BSD2 (Bit 2)                                        */
#define PA_BSR_BSD2_Msk                       (0x4UL)                   /*!< PA BSR: BSD2 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BSD3_Pos                       (3UL)                     /*!< PA BSR: BSD3 (Bit 3)                                        */
#define PA_BSR_BSD3_Msk                       (0x8UL)                   /*!< PA BSR: BSD3 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BSD4_Pos                       (4UL)                     /*!< PA BSR: BSD4 (Bit 4)                                        */
#define PA_BSR_BSD4_Msk                       (0x10UL)                  /*!< PA BSR: BSD4 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BSD5_Pos                       (5UL)                     /*!< PA BSR: BSD5 (Bit 5)                                        */
#define PA_BSR_BSD5_Msk                       (0x20UL)                  /*!< PA BSR: BSD5 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BSD6_Pos                       (6UL)                     /*!< PA BSR: BSD6 (Bit 6)                                        */
#define PA_BSR_BSD6_Msk                       (0x40UL)                  /*!< PA BSR: BSD6 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BSD7_Pos                       (7UL)                     /*!< PA BSR: BSD7 (Bit 7)                                        */
#define PA_BSR_BSD7_Msk                       (0x80UL)                  /*!< PA BSR: BSD7 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BSD8_Pos                       (8UL)                     /*!< PA BSR: BSD8 (Bit 8)                                        */
#define PA_BSR_BSD8_Msk                       (0x100UL)                 /*!< PA BSR: BSD8 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BSD9_Pos                       (9UL)                     /*!< PA BSR: BSD9 (Bit 9)                                        */
#define PA_BSR_BSD9_Msk                       (0x200UL)                 /*!< PA BSR: BSD9 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BSD10_Pos                      (10UL)                    /*!< PA BSR: BSD10 (Bit 10)                                      */
#define PA_BSR_BSD10_Msk                      (0x400UL)                 /*!< PA BSR: BSD10 (Bitfield-Mask: 0x01)                         */
#define PA_BSR_BSD11_Pos                      (11UL)                    /*!< PA BSR: BSD11 (Bit 11)                                      */
#define PA_BSR_BSD11_Msk                      (0x800UL)                 /*!< PA BSR: BSD11 (Bitfield-Mask: 0x01)                         */
#define PA_BSR_BSD12_Pos                      (12UL)                    /*!< PA BSR: BSD12 (Bit 12)                                      */
#define PA_BSR_BSD12_Msk                      (0x1000UL)                /*!< PA BSR: BSD12 (Bitfield-Mask: 0x01)                         */
#define PA_BSR_BSD13_Pos                      (13UL)                    /*!< PA BSR: BSD13 (Bit 13)                                      */
#define PA_BSR_BSD13_Msk                      (0x2000UL)                /*!< PA BSR: BSD13 (Bitfield-Mask: 0x01)                         */
#define PA_BSR_BSD14_Pos                      (14UL)                    /*!< PA BSR: BSD14 (Bit 14)                                      */
#define PA_BSR_BSD14_Msk                      (0x4000UL)                /*!< PA BSR: BSD14 (Bitfield-Mask: 0x01)                         */
#define PA_BSR_BSD15_Pos                      (15UL)                    /*!< PA BSR: BSD15 (Bit 15)                                      */
#define PA_BSR_BSD15_Msk                      (0x8000UL)                /*!< PA BSR: BSD15 (Bitfield-Mask: 0x01)                         */
#define PA_BSR_BCD0_Pos                       (16UL)                    /*!< PA BSR: BCD0 (Bit 16)                                       */
#define PA_BSR_BCD0_Msk                       (0x10000UL)               /*!< PA BSR: BCD0 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BCD1_Pos                       (17UL)                    /*!< PA BSR: BCD1 (Bit 17)                                       */
#define PA_BSR_BCD1_Msk                       (0x20000UL)               /*!< PA BSR: BCD1 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BCD2_Pos                       (18UL)                    /*!< PA BSR: BCD2 (Bit 18)                                       */
#define PA_BSR_BCD2_Msk                       (0x40000UL)               /*!< PA BSR: BCD2 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BCD3_Pos                       (19UL)                    /*!< PA BSR: BCD3 (Bit 19)                                       */
#define PA_BSR_BCD3_Msk                       (0x80000UL)               /*!< PA BSR: BCD3 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BCD4_Pos                       (20UL)                    /*!< PA BSR: BCD4 (Bit 20)                                       */
#define PA_BSR_BCD4_Msk                       (0x100000UL)              /*!< PA BSR: BCD4 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BCD5_Pos                       (21UL)                    /*!< PA BSR: BCD5 (Bit 21)                                       */
#define PA_BSR_BCD5_Msk                       (0x200000UL)              /*!< PA BSR: BCD5 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BCD6_Pos                       (22UL)                    /*!< PA BSR: BCD6 (Bit 22)                                       */
#define PA_BSR_BCD6_Msk                       (0x400000UL)              /*!< PA BSR: BCD6 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BCD7_Pos                       (23UL)                    /*!< PA BSR: BCD7 (Bit 23)                                       */
#define PA_BSR_BCD7_Msk                       (0x800000UL)              /*!< PA BSR: BCD7 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BCD8_Pos                       (24UL)                    /*!< PA BSR: BCD8 (Bit 24)                                       */
#define PA_BSR_BCD8_Msk                       (0x1000000UL)             /*!< PA BSR: BCD8 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BCD9_Pos                       (25UL)                    /*!< PA BSR: BCD9 (Bit 25)                                       */
#define PA_BSR_BCD9_Msk                       (0x2000000UL)             /*!< PA BSR: BCD9 (Bitfield-Mask: 0x01)                          */
#define PA_BSR_BCD10_Pos                      (26UL)                    /*!< PA BSR: BCD10 (Bit 26)                                      */
#define PA_BSR_BCD10_Msk                      (0x4000000UL)             /*!< PA BSR: BCD10 (Bitfield-Mask: 0x01)                         */
#define PA_BSR_BCD11_Pos                      (27UL)                    /*!< PA BSR: BCD11 (Bit 27)                                      */
#define PA_BSR_BCD11_Msk                      (0x8000000UL)             /*!< PA BSR: BCD11 (Bitfield-Mask: 0x01)                         */
#define PA_BSR_BCD12_Pos                      (28UL)                    /*!< PA BSR: BCD12 (Bit 28)                                      */
#define PA_BSR_BCD12_Msk                      (0x10000000UL)            /*!< PA BSR: BCD12 (Bitfield-Mask: 0x01)                         */
#define PA_BSR_BCD13_Pos                      (29UL)                    /*!< PA BSR: BCD13 (Bit 29)                                      */
#define PA_BSR_BCD13_Msk                      (0x20000000UL)            /*!< PA BSR: BCD13 (Bitfield-Mask: 0x01)                         */
#define PA_BSR_BCD14_Pos                      (30UL)                    /*!< PA BSR: BCD14 (Bit 30)                                      */
#define PA_BSR_BCD14_Msk                      (0x40000000UL)            /*!< PA BSR: BCD14 (Bitfield-Mask: 0x01)                         */
#define PA_BSR_BCD15_Pos                      (31UL)                    /*!< PA BSR: BCD15 (Bit 31)                                      */
#define PA_BSR_BCD15_Msk                      (0x80000000UL)            /*!< PA BSR: BCD15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PA_BCR  ----------------------------------- */
#define PA_BCR_BCD0_Pos                       (0UL)                     /*!< PA BCR: BCD0 (Bit 0)                                        */
#define PA_BCR_BCD0_Msk                       (0x1UL)                   /*!< PA BCR: BCD0 (Bitfield-Mask: 0x01)                          */
#define PA_BCR_BCD1_Pos                       (1UL)                     /*!< PA BCR: BCD1 (Bit 1)                                        */
#define PA_BCR_BCD1_Msk                       (0x2UL)                   /*!< PA BCR: BCD1 (Bitfield-Mask: 0x01)                          */
#define PA_BCR_BCD2_Pos                       (2UL)                     /*!< PA BCR: BCD2 (Bit 2)                                        */
#define PA_BCR_BCD2_Msk                       (0x4UL)                   /*!< PA BCR: BCD2 (Bitfield-Mask: 0x01)                          */
#define PA_BCR_BCD3_Pos                       (3UL)                     /*!< PA BCR: BCD3 (Bit 3)                                        */
#define PA_BCR_BCD3_Msk                       (0x8UL)                   /*!< PA BCR: BCD3 (Bitfield-Mask: 0x01)                          */
#define PA_BCR_BCD4_Pos                       (4UL)                     /*!< PA BCR: BCD4 (Bit 4)                                        */
#define PA_BCR_BCD4_Msk                       (0x10UL)                  /*!< PA BCR: BCD4 (Bitfield-Mask: 0x01)                          */
#define PA_BCR_BCD5_Pos                       (5UL)                     /*!< PA BCR: BCD5 (Bit 5)                                        */
#define PA_BCR_BCD5_Msk                       (0x20UL)                  /*!< PA BCR: BCD5 (Bitfield-Mask: 0x01)                          */
#define PA_BCR_BCD6_Pos                       (6UL)                     /*!< PA BCR: BCD6 (Bit 6)                                        */
#define PA_BCR_BCD6_Msk                       (0x40UL)                  /*!< PA BCR: BCD6 (Bitfield-Mask: 0x01)                          */
#define PA_BCR_BCD7_Pos                       (7UL)                     /*!< PA BCR: BCD7 (Bit 7)                                        */
#define PA_BCR_BCD7_Msk                       (0x80UL)                  /*!< PA BCR: BCD7 (Bitfield-Mask: 0x01)                          */
#define PA_BCR_BCD8_Pos                       (8UL)                     /*!< PA BCR: BCD8 (Bit 8)                                        */
#define PA_BCR_BCD8_Msk                       (0x100UL)                 /*!< PA BCR: BCD8 (Bitfield-Mask: 0x01)                          */
#define PA_BCR_BCD9_Pos                       (9UL)                     /*!< PA BCR: BCD9 (Bit 9)                                        */
#define PA_BCR_BCD9_Msk                       (0x200UL)                 /*!< PA BCR: BCD9 (Bitfield-Mask: 0x01)                          */
#define PA_BCR_BCD10_Pos                      (10UL)                    /*!< PA BCR: BCD10 (Bit 10)                                      */
#define PA_BCR_BCD10_Msk                      (0x400UL)                 /*!< PA BCR: BCD10 (Bitfield-Mask: 0x01)                         */
#define PA_BCR_BCD11_Pos                      (11UL)                    /*!< PA BCR: BCD11 (Bit 11)                                      */
#define PA_BCR_BCD11_Msk                      (0x800UL)                 /*!< PA BCR: BCD11 (Bitfield-Mask: 0x01)                         */
#define PA_BCR_BCD12_Pos                      (12UL)                    /*!< PA BCR: BCD12 (Bit 12)                                      */
#define PA_BCR_BCD12_Msk                      (0x1000UL)                /*!< PA BCR: BCD12 (Bitfield-Mask: 0x01)                         */
#define PA_BCR_BCD13_Pos                      (13UL)                    /*!< PA BCR: BCD13 (Bit 13)                                      */
#define PA_BCR_BCD13_Msk                      (0x2000UL)                /*!< PA BCR: BCD13 (Bitfield-Mask: 0x01)                         */
#define PA_BCR_BCD14_Pos                      (14UL)                    /*!< PA BCR: BCD14 (Bit 14)                                      */
#define PA_BCR_BCD14_Msk                      (0x4000UL)                /*!< PA BCR: BCD14 (Bitfield-Mask: 0x01)                         */
#define PA_BCR_BCD15_Pos                      (15UL)                    /*!< PA BCR: BCD15 (Bit 15)                                      */
#define PA_BCR_BCD15_Msk                      (0x8000UL)                /*!< PA BCR: BCD15 (Bitfield-Mask: 0x01)                         */


/* ================================================================================ */
/* ================           struct 'PB' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  PB_MR1  ----------------------------------- */
#define PB_MR1_P0MUX_Pos                      (0UL)                     /*!< PB MR1: P0MUX (Bit 0)                                       */
#define PB_MR1_P0MUX_Msk                      (0x7UL)                   /*!< PB MR1: P0MUX (Bitfield-Mask: 0x07)                         */
#define PB_MR1_P1MUX_Pos                      (4UL)                     /*!< PB MR1: P1MUX (Bit 4)                                       */
#define PB_MR1_P1MUX_Msk                      (0x70UL)                  /*!< PB MR1: P1MUX (Bitfield-Mask: 0x07)                         */
#define PB_MR1_P2MUX_Pos                      (8UL)                     /*!< PB MR1: P2MUX (Bit 8)                                       */
#define PB_MR1_P2MUX_Msk                      (0x700UL)                 /*!< PB MR1: P2MUX (Bitfield-Mask: 0x07)                         */
#define PB_MR1_P3MUX_Pos                      (12UL)                    /*!< PB MR1: P3MUX (Bit 12)                                      */
#define PB_MR1_P3MUX_Msk                      (0x7000UL)                /*!< PB MR1: P3MUX (Bitfield-Mask: 0x07)                         */
#define PB_MR1_P4MUX_Pos                      (16UL)                    /*!< PB MR1: P4MUX (Bit 16)                                      */
#define PB_MR1_P4MUX_Msk                      (0x70000UL)               /*!< PB MR1: P4MUX (Bitfield-Mask: 0x07)                         */
#define PB_MR1_P5MUX_Pos                      (20UL)                    /*!< PB MR1: P5MUX (Bit 20)                                      */
#define PB_MR1_P5MUX_Msk                      (0x700000UL)              /*!< PB MR1: P5MUX (Bitfield-Mask: 0x07)                         */
#define PB_MR1_P6MUX_Pos                      (24UL)                    /*!< PB MR1: P6MUX (Bit 24)                                      */
#define PB_MR1_P6MUX_Msk                      (0x7000000UL)             /*!< PB MR1: P6MUX (Bitfield-Mask: 0x07)                         */
#define PB_MR1_P7MUX_Pos                      (28UL)                    /*!< PB MR1: P7MUX (Bit 28)                                      */
#define PB_MR1_P7MUX_Msk                      (0x70000000UL)            /*!< PB MR1: P7MUX (Bitfield-Mask: 0x07)                         */

/* -----------------------------------  PB_MR2  ----------------------------------- */
#define PB_MR2_P8MUX_Pos                      (0UL)                     /*!< PB MR2: P8MUX (Bit 0)                                       */
#define PB_MR2_P8MUX_Msk                      (0x7UL)                   /*!< PB MR2: P8MUX (Bitfield-Mask: 0x07)                         */
#define PB_MR2_P9MUX_Pos                      (4UL)                     /*!< PB MR2: P9MUX (Bit 4)                                       */
#define PB_MR2_P9MUX_Msk                      (0x70UL)                  /*!< PB MR2: P9MUX (Bitfield-Mask: 0x07)                         */
#define PB_MR2_P10MUX_Pos                     (8UL)                     /*!< PB MR2: P10MUX (Bit 8)                                      */
#define PB_MR2_P10MUX_Msk                     (0x700UL)                 /*!< PB MR2: P10MUX (Bitfield-Mask: 0x07)                        */
#define PB_MR2_P11MUX_Pos                     (12UL)                    /*!< PB MR2: P11MUX (Bit 12)                                     */
#define PB_MR2_P11MUX_Msk                     (0x7000UL)                /*!< PB MR2: P11MUX (Bitfield-Mask: 0x07)                        */
#define PB_MR2_P12MUX_Pos                     (16UL)                    /*!< PB MR2: P12MUX (Bit 16)                                     */
#define PB_MR2_P12MUX_Msk                     (0x70000UL)               /*!< PB MR2: P12MUX (Bitfield-Mask: 0x07)                        */
#define PB_MR2_P13MUX_Pos                     (20UL)                    /*!< PB MR2: P13MUX (Bit 20)                                     */
#define PB_MR2_P13MUX_Msk                     (0x700000UL)              /*!< PB MR2: P13MUX (Bitfield-Mask: 0x07)                        */
#define PB_MR2_P14MUX_Pos                     (24UL)                    /*!< PB MR2: P14MUX (Bit 24)                                     */
#define PB_MR2_P14MUX_Msk                     (0x7000000UL)             /*!< PB MR2: P14MUX (Bitfield-Mask: 0x07)                        */
#define PB_MR2_P15MUX_Pos                     (28UL)                    /*!< PB MR2: P15MUX (Bit 28)                                     */
#define PB_MR2_P15MUX_Msk                     (0x70000000UL)            /*!< PB MR2: P15MUX (Bitfield-Mask: 0x07)                        */

/* ------------------------------------  PB_CR  ----------------------------------- */
#define PB_CR_P0_Pos                          (0UL)                     /*!< PB CR: P0 (Bit 0)                                           */
#define PB_CR_P0_Msk                          (0x3UL)                   /*!< PB CR: P0 (Bitfield-Mask: 0x03)                             */
#define PB_CR_P1_Pos                          (2UL)                     /*!< PB CR: P1 (Bit 2)                                           */
#define PB_CR_P1_Msk                          (0xcUL)                   /*!< PB CR: P1 (Bitfield-Mask: 0x03)                             */
#define PB_CR_P2_Pos                          (4UL)                     /*!< PB CR: P2 (Bit 4)                                           */
#define PB_CR_P2_Msk                          (0x30UL)                  /*!< PB CR: P2 (Bitfield-Mask: 0x03)                             */
#define PB_CR_P3_Pos                          (6UL)                     /*!< PB CR: P3 (Bit 6)                                           */
#define PB_CR_P3_Msk                          (0xc0UL)                  /*!< PB CR: P3 (Bitfield-Mask: 0x03)                             */
#define PB_CR_P4_Pos                          (8UL)                     /*!< PB CR: P4 (Bit 8)                                           */
#define PB_CR_P4_Msk                          (0x300UL)                 /*!< PB CR: P4 (Bitfield-Mask: 0x03)                             */
#define PB_CR_P5_Pos                          (10UL)                    /*!< PB CR: P5 (Bit 10)                                          */
#define PB_CR_P5_Msk                          (0xc00UL)                 /*!< PB CR: P5 (Bitfield-Mask: 0x03)                             */
#define PB_CR_P6_Pos                          (12UL)                    /*!< PB CR: P6 (Bit 12)                                          */
#define PB_CR_P6_Msk                          (0x3000UL)                /*!< PB CR: P6 (Bitfield-Mask: 0x03)                             */
#define PB_CR_P7_Pos                          (14UL)                    /*!< PB CR: P7 (Bit 14)                                          */
#define PB_CR_P7_Msk                          (0xc000UL)                /*!< PB CR: P7 (Bitfield-Mask: 0x03)                             */
#define PB_CR_P8_Pos                          (16UL)                    /*!< PB CR: P8 (Bit 16)                                          */
#define PB_CR_P8_Msk                          (0x30000UL)               /*!< PB CR: P8 (Bitfield-Mask: 0x03)                             */
#define PB_CR_P9_Pos                          (18UL)                    /*!< PB CR: P9 (Bit 18)                                          */
#define PB_CR_P9_Msk                          (0xc0000UL)               /*!< PB CR: P9 (Bitfield-Mask: 0x03)                             */
#define PB_CR_P10_Pos                         (20UL)                    /*!< PB CR: P10 (Bit 20)                                         */
#define PB_CR_P10_Msk                         (0x300000UL)              /*!< PB CR: P10 (Bitfield-Mask: 0x03)                            */
#define PB_CR_P11_Pos                         (22UL)                    /*!< PB CR: P11 (Bit 22)                                         */
#define PB_CR_P11_Msk                         (0xc00000UL)              /*!< PB CR: P11 (Bitfield-Mask: 0x03)                            */
#define PB_CR_P12_Pos                         (24UL)                    /*!< PB CR: P12 (Bit 24)                                         */
#define PB_CR_P12_Msk                         (0x3000000UL)             /*!< PB CR: P12 (Bitfield-Mask: 0x03)                            */
#define PB_CR_P13_Pos                         (26UL)                    /*!< PB CR: P13 (Bit 26)                                         */
#define PB_CR_P13_Msk                         (0xc000000UL)             /*!< PB CR: P13 (Bitfield-Mask: 0x03)                            */
#define PB_CR_P14_Pos                         (28UL)                    /*!< PB CR: P14 (Bit 28)                                         */
#define PB_CR_P14_Msk                         (0x30000000UL)            /*!< PB CR: P14 (Bitfield-Mask: 0x03)                            */
#define PB_CR_P15_Pos                         (30UL)                    /*!< PB CR: P15 (Bit 30)                                         */
#define PB_CR_P15_Msk                         (0xc0000000UL)            /*!< PB CR: P15 (Bitfield-Mask: 0x03)                            */

/* -----------------------------------  PB_PRCR  ---------------------------------- */
#define PB_PRCR_PUE0_Pos                      (0UL)                     /*!< PB PRCR: PUE0 (Bit 0)                                       */
#define PB_PRCR_PUE0_Msk                      (0x3UL)                   /*!< PB PRCR: PUE0 (Bitfield-Mask: 0x03)                         */
#define PB_PRCR_PUE1_Pos                      (2UL)                     /*!< PB PRCR: PUE1 (Bit 2)                                       */
#define PB_PRCR_PUE1_Msk                      (0xcUL)                   /*!< PB PRCR: PUE1 (Bitfield-Mask: 0x03)                         */
#define PB_PRCR_PUE2_Pos                      (4UL)                     /*!< PB PRCR: PUE2 (Bit 4)                                       */
#define PB_PRCR_PUE2_Msk                      (0x30UL)                  /*!< PB PRCR: PUE2 (Bitfield-Mask: 0x03)                         */
#define PB_PRCR_PUE3_Pos                      (6UL)                     /*!< PB PRCR: PUE3 (Bit 6)                                       */
#define PB_PRCR_PUE3_Msk                      (0xc0UL)                  /*!< PB PRCR: PUE3 (Bitfield-Mask: 0x03)                         */
#define PB_PRCR_PUE4_Pos                      (8UL)                     /*!< PB PRCR: PUE4 (Bit 8)                                       */
#define PB_PRCR_PUE4_Msk                      (0x300UL)                 /*!< PB PRCR: PUE4 (Bitfield-Mask: 0x03)                         */
#define PB_PRCR_PUE5_Pos                      (10UL)                    /*!< PB PRCR: PUE5 (Bit 10)                                      */
#define PB_PRCR_PUE5_Msk                      (0xc00UL)                 /*!< PB PRCR: PUE5 (Bitfield-Mask: 0x03)                         */
#define PB_PRCR_PUE6_Pos                      (12UL)                    /*!< PB PRCR: PUE6 (Bit 12)                                      */
#define PB_PRCR_PUE6_Msk                      (0x3000UL)                /*!< PB PRCR: PUE6 (Bitfield-Mask: 0x03)                         */
#define PB_PRCR_PUE7_Pos                      (14UL)                    /*!< PB PRCR: PUE7 (Bit 14)                                      */
#define PB_PRCR_PUE7_Msk                      (0xc000UL)                /*!< PB PRCR: PUE7 (Bitfield-Mask: 0x03)                         */
#define PB_PRCR_PUE8_Pos                      (16UL)                    /*!< PB PRCR: PUE8 (Bit 16)                                      */
#define PB_PRCR_PUE8_Msk                      (0x30000UL)               /*!< PB PRCR: PUE8 (Bitfield-Mask: 0x03)                         */
#define PB_PRCR_PUE9_Pos                      (18UL)                    /*!< PB PRCR: PUE9 (Bit 18)                                      */
#define PB_PRCR_PUE9_Msk                      (0xc0000UL)               /*!< PB PRCR: PUE9 (Bitfield-Mask: 0x03)                         */
#define PB_PRCR_PUE10_Pos                     (20UL)                    /*!< PB PRCR: PUE10 (Bit 20)                                     */
#define PB_PRCR_PUE10_Msk                     (0x300000UL)              /*!< PB PRCR: PUE10 (Bitfield-Mask: 0x03)                        */
#define PB_PRCR_PUE11_Pos                     (22UL)                    /*!< PB PRCR: PUE11 (Bit 22)                                     */
#define PB_PRCR_PUE11_Msk                     (0xc00000UL)              /*!< PB PRCR: PUE11 (Bitfield-Mask: 0x03)                        */
#define PB_PRCR_PUE12_Pos                     (24UL)                    /*!< PB PRCR: PUE12 (Bit 24)                                     */
#define PB_PRCR_PUE12_Msk                     (0x3000000UL)             /*!< PB PRCR: PUE12 (Bitfield-Mask: 0x03)                        */
#define PB_PRCR_PUE13_Pos                     (26UL)                    /*!< PB PRCR: PUE13 (Bit 26)                                     */
#define PB_PRCR_PUE13_Msk                     (0xc000000UL)             /*!< PB PRCR: PUE13 (Bitfield-Mask: 0x03)                        */
#define PB_PRCR_PUE14_Pos                     (28UL)                    /*!< PB PRCR: PUE14 (Bit 28)                                     */
#define PB_PRCR_PUE14_Msk                     (0x30000000UL)            /*!< PB PRCR: PUE14 (Bitfield-Mask: 0x03)                        */
#define PB_PRCR_PUE15_Pos                     (30UL)                    /*!< PB PRCR: PUE15 (Bit 30)                                     */
#define PB_PRCR_PUE15_Msk                     (0xc0000000UL)            /*!< PB PRCR: PUE15 (Bitfield-Mask: 0x03)                        */

/* -----------------------------------  PB_DER  ----------------------------------- */
#define PB_DER_PDE0_Pos                       (0UL)                     /*!< PB DER: PDE0 (Bit 0)                                        */
#define PB_DER_PDE0_Msk                       (0x1UL)                   /*!< PB DER: PDE0 (Bitfield-Mask: 0x01)                          */
#define PB_DER_PDE1_Pos                       (1UL)                     /*!< PB DER: PDE1 (Bit 1)                                        */
#define PB_DER_PDE1_Msk                       (0x2UL)                   /*!< PB DER: PDE1 (Bitfield-Mask: 0x01)                          */
#define PB_DER_PDE2_Pos                       (2UL)                     /*!< PB DER: PDE2 (Bit 2)                                        */
#define PB_DER_PDE2_Msk                       (0x4UL)                   /*!< PB DER: PDE2 (Bitfield-Mask: 0x01)                          */
#define PB_DER_PDE3_Pos                       (3UL)                     /*!< PB DER: PDE3 (Bit 3)                                        */
#define PB_DER_PDE3_Msk                       (0x8UL)                   /*!< PB DER: PDE3 (Bitfield-Mask: 0x01)                          */
#define PB_DER_PDE4_Pos                       (4UL)                     /*!< PB DER: PDE4 (Bit 4)                                        */
#define PB_DER_PDE4_Msk                       (0x10UL)                  /*!< PB DER: PDE4 (Bitfield-Mask: 0x01)                          */
#define PB_DER_PDE5_Pos                       (5UL)                     /*!< PB DER: PDE5 (Bit 5)                                        */
#define PB_DER_PDE5_Msk                       (0x20UL)                  /*!< PB DER: PDE5 (Bitfield-Mask: 0x01)                          */
#define PB_DER_PDE6_Pos                       (6UL)                     /*!< PB DER: PDE6 (Bit 6)                                        */
#define PB_DER_PDE6_Msk                       (0x40UL)                  /*!< PB DER: PDE6 (Bitfield-Mask: 0x01)                          */
#define PB_DER_PDE7_Pos                       (7UL)                     /*!< PB DER: PDE7 (Bit 7)                                        */
#define PB_DER_PDE7_Msk                       (0x80UL)                  /*!< PB DER: PDE7 (Bitfield-Mask: 0x01)                          */
#define PB_DER_PDE8_Pos                       (8UL)                     /*!< PB DER: PDE8 (Bit 8)                                        */
#define PB_DER_PDE8_Msk                       (0x100UL)                 /*!< PB DER: PDE8 (Bitfield-Mask: 0x01)                          */
#define PB_DER_PDE9_Pos                       (9UL)                     /*!< PB DER: PDE9 (Bit 9)                                        */
#define PB_DER_PDE9_Msk                       (0x200UL)                 /*!< PB DER: PDE9 (Bitfield-Mask: 0x01)                          */
#define PB_DER_PDE10_Pos                      (10UL)                    /*!< PB DER: PDE10 (Bit 10)                                      */
#define PB_DER_PDE10_Msk                      (0x400UL)                 /*!< PB DER: PDE10 (Bitfield-Mask: 0x01)                         */
#define PB_DER_PDE11_Pos                      (11UL)                    /*!< PB DER: PDE11 (Bit 11)                                      */
#define PB_DER_PDE11_Msk                      (0x800UL)                 /*!< PB DER: PDE11 (Bitfield-Mask: 0x01)                         */
#define PB_DER_PDE12_Pos                      (12UL)                    /*!< PB DER: PDE12 (Bit 12)                                      */
#define PB_DER_PDE12_Msk                      (0x1000UL)                /*!< PB DER: PDE12 (Bitfield-Mask: 0x01)                         */
#define PB_DER_PDE13_Pos                      (13UL)                    /*!< PB DER: PDE13 (Bit 13)                                      */
#define PB_DER_PDE13_Msk                      (0x2000UL)                /*!< PB DER: PDE13 (Bitfield-Mask: 0x01)                         */
#define PB_DER_PDE14_Pos                      (14UL)                    /*!< PB DER: PDE14 (Bit 14)                                      */
#define PB_DER_PDE14_Msk                      (0x4000UL)                /*!< PB DER: PDE14 (Bitfield-Mask: 0x01)                         */
#define PB_DER_PDE15_Pos                      (15UL)                    /*!< PB DER: PDE15 (Bit 15)                                      */
#define PB_DER_PDE15_Msk                      (0x8000UL)                /*!< PB DER: PDE15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PB_IER  ----------------------------------- */
#define PB_IER_PIE0_Pos                       (0UL)                     /*!< PB IER: PIE0 (Bit 0)                                        */
#define PB_IER_PIE0_Msk                       (0x3UL)                   /*!< PB IER: PIE0 (Bitfield-Mask: 0x03)                          */
#define PB_IER_PIE1_Pos                       (2UL)                     /*!< PB IER: PIE1 (Bit 2)                                        */
#define PB_IER_PIE1_Msk                       (0xcUL)                   /*!< PB IER: PIE1 (Bitfield-Mask: 0x03)                          */
#define PB_IER_PIE2_Pos                       (4UL)                     /*!< PB IER: PIE2 (Bit 4)                                        */
#define PB_IER_PIE2_Msk                       (0x30UL)                  /*!< PB IER: PIE2 (Bitfield-Mask: 0x03)                          */
#define PB_IER_PIE3_Pos                       (6UL)                     /*!< PB IER: PIE3 (Bit 6)                                        */
#define PB_IER_PIE3_Msk                       (0xc0UL)                  /*!< PB IER: PIE3 (Bitfield-Mask: 0x03)                          */
#define PB_IER_PIE4_Pos                       (8UL)                     /*!< PB IER: PIE4 (Bit 8)                                        */
#define PB_IER_PIE4_Msk                       (0x300UL)                 /*!< PB IER: PIE4 (Bitfield-Mask: 0x03)                          */
#define PB_IER_PIE5_Pos                       (10UL)                    /*!< PB IER: PIE5 (Bit 10)                                       */
#define PB_IER_PIE5_Msk                       (0xc00UL)                 /*!< PB IER: PIE5 (Bitfield-Mask: 0x03)                          */
#define PB_IER_PIE6_Pos                       (12UL)                    /*!< PB IER: PIE6 (Bit 12)                                       */
#define PB_IER_PIE6_Msk                       (0x3000UL)                /*!< PB IER: PIE6 (Bitfield-Mask: 0x03)                          */
#define PB_IER_PIE7_Pos                       (14UL)                    /*!< PB IER: PIE7 (Bit 14)                                       */
#define PB_IER_PIE7_Msk                       (0xc000UL)                /*!< PB IER: PIE7 (Bitfield-Mask: 0x03)                          */
#define PB_IER_PIE8_Pos                       (16UL)                    /*!< PB IER: PIE8 (Bit 16)                                       */
#define PB_IER_PIE8_Msk                       (0x30000UL)               /*!< PB IER: PIE8 (Bitfield-Mask: 0x03)                          */
#define PB_IER_PIE9_Pos                       (18UL)                    /*!< PB IER: PIE9 (Bit 18)                                       */
#define PB_IER_PIE9_Msk                       (0xc0000UL)               /*!< PB IER: PIE9 (Bitfield-Mask: 0x03)                          */
#define PB_IER_PIE10_Pos                      (20UL)                    /*!< PB IER: PIE10 (Bit 20)                                      */
#define PB_IER_PIE10_Msk                      (0x300000UL)              /*!< PB IER: PIE10 (Bitfield-Mask: 0x03)                         */
#define PB_IER_PIE11_Pos                      (22UL)                    /*!< PB IER: PIE11 (Bit 22)                                      */
#define PB_IER_PIE11_Msk                      (0xc00000UL)              /*!< PB IER: PIE11 (Bitfield-Mask: 0x03)                         */
#define PB_IER_PIE12_Pos                      (24UL)                    /*!< PB IER: PIE12 (Bit 24)                                      */
#define PB_IER_PIE12_Msk                      (0x3000000UL)             /*!< PB IER: PIE12 (Bitfield-Mask: 0x03)                         */
#define PB_IER_PIE13_Pos                      (26UL)                    /*!< PB IER: PIE13 (Bit 26)                                      */
#define PB_IER_PIE13_Msk                      (0xc000000UL)             /*!< PB IER: PIE13 (Bitfield-Mask: 0x03)                         */
#define PB_IER_PIE14_Pos                      (28UL)                    /*!< PB IER: PIE14 (Bit 28)                                      */
#define PB_IER_PIE14_Msk                      (0x30000000UL)            /*!< PB IER: PIE14 (Bitfield-Mask: 0x03)                         */
#define PB_IER_PIE15_Pos                      (30UL)                    /*!< PB IER: PIE15 (Bit 30)                                      */
#define PB_IER_PIE15_Msk                      (0xc0000000UL)            /*!< PB IER: PIE15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PB_ISR  ----------------------------------- */
#define PB_ISR_PIS0_Pos                       (0UL)                     /*!< PB ISR: PIS0 (Bit 0)                                        */
#define PB_ISR_PIS0_Msk                       (0x3UL)                   /*!< PB ISR: PIS0 (Bitfield-Mask: 0x03)                          */
#define PB_ISR_PIS1_Pos                       (2UL)                     /*!< PB ISR: PIS1 (Bit 2)                                        */
#define PB_ISR_PIS1_Msk                       (0xcUL)                   /*!< PB ISR: PIS1 (Bitfield-Mask: 0x03)                          */
#define PB_ISR_PIS2_Pos                       (4UL)                     /*!< PB ISR: PIS2 (Bit 4)                                        */
#define PB_ISR_PIS2_Msk                       (0x30UL)                  /*!< PB ISR: PIS2 (Bitfield-Mask: 0x03)                          */
#define PB_ISR_PIS3_Pos                       (6UL)                     /*!< PB ISR: PIS3 (Bit 6)                                        */
#define PB_ISR_PIS3_Msk                       (0xc0UL)                  /*!< PB ISR: PIS3 (Bitfield-Mask: 0x03)                          */
#define PB_ISR_PIS4_Pos                       (8UL)                     /*!< PB ISR: PIS4 (Bit 8)                                        */
#define PB_ISR_PIS4_Msk                       (0x300UL)                 /*!< PB ISR: PIS4 (Bitfield-Mask: 0x03)                          */
#define PB_ISR_PIS5_Pos                       (10UL)                    /*!< PB ISR: PIS5 (Bit 10)                                       */
#define PB_ISR_PIS5_Msk                       (0xc00UL)                 /*!< PB ISR: PIS5 (Bitfield-Mask: 0x03)                          */
#define PB_ISR_PIS6_Pos                       (12UL)                    /*!< PB ISR: PIS6 (Bit 12)                                       */
#define PB_ISR_PIS6_Msk                       (0x3000UL)                /*!< PB ISR: PIS6 (Bitfield-Mask: 0x03)                          */
#define PB_ISR_PIS7_Pos                       (14UL)                    /*!< PB ISR: PIS7 (Bit 14)                                       */
#define PB_ISR_PIS7_Msk                       (0xc000UL)                /*!< PB ISR: PIS7 (Bitfield-Mask: 0x03)                          */
#define PB_ISR_PIS8_Pos                       (16UL)                    /*!< PB ISR: PIS8 (Bit 16)                                       */
#define PB_ISR_PIS8_Msk                       (0x30000UL)               /*!< PB ISR: PIS8 (Bitfield-Mask: 0x03)                          */
#define PB_ISR_PIS9_Pos                       (18UL)                    /*!< PB ISR: PIS9 (Bit 18)                                       */
#define PB_ISR_PIS9_Msk                       (0xc0000UL)               /*!< PB ISR: PIS9 (Bitfield-Mask: 0x03)                          */
#define PB_ISR_PIS10_Pos                      (20UL)                    /*!< PB ISR: PIS10 (Bit 20)                                      */
#define PB_ISR_PIS10_Msk                      (0x300000UL)              /*!< PB ISR: PIS10 (Bitfield-Mask: 0x03)                         */
#define PB_ISR_PIS11_Pos                      (22UL)                    /*!< PB ISR: PIS11 (Bit 22)                                      */
#define PB_ISR_PIS11_Msk                      (0xc00000UL)              /*!< PB ISR: PIS11 (Bitfield-Mask: 0x03)                         */
#define PB_ISR_PIS12_Pos                      (24UL)                    /*!< PB ISR: PIS12 (Bit 24)                                      */
#define PB_ISR_PIS12_Msk                      (0x3000000UL)             /*!< PB ISR: PIS12 (Bitfield-Mask: 0x03)                         */
#define PB_ISR_PIS13_Pos                      (26UL)                    /*!< PB ISR: PIS13 (Bit 26)                                      */
#define PB_ISR_PIS13_Msk                      (0xc000000UL)             /*!< PB ISR: PIS13 (Bitfield-Mask: 0x03)                         */
#define PB_ISR_PIS14_Pos                      (28UL)                    /*!< PB ISR: PIS14 (Bit 28)                                      */
#define PB_ISR_PIS14_Msk                      (0x30000000UL)            /*!< PB ISR: PIS14 (Bitfield-Mask: 0x03)                         */
#define PB_ISR_PIS15_Pos                      (30UL)                    /*!< PB ISR: PIS15 (Bit 30)                                      */
#define PB_ISR_PIS15_Msk                      (0xc0000000UL)            /*!< PB ISR: PIS15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PB_ICR  ----------------------------------- */
#define PB_ICR_PIC0_Pos                       (0UL)                     /*!< PB ICR: PIC0 (Bit 0)                                        */
#define PB_ICR_PIC0_Msk                       (0x3UL)                   /*!< PB ICR: PIC0 (Bitfield-Mask: 0x03)                          */
#define PB_ICR_PIC1_Pos                       (2UL)                     /*!< PB ICR: PIC1 (Bit 2)                                        */
#define PB_ICR_PIC1_Msk                       (0xcUL)                   /*!< PB ICR: PIC1 (Bitfield-Mask: 0x03)                          */
#define PB_ICR_PIC2_Pos                       (4UL)                     /*!< PB ICR: PIC2 (Bit 4)                                        */
#define PB_ICR_PIC2_Msk                       (0x30UL)                  /*!< PB ICR: PIC2 (Bitfield-Mask: 0x03)                          */
#define PB_ICR_PIC3_Pos                       (6UL)                     /*!< PB ICR: PIC3 (Bit 6)                                        */
#define PB_ICR_PIC3_Msk                       (0xc0UL)                  /*!< PB ICR: PIC3 (Bitfield-Mask: 0x03)                          */
#define PB_ICR_PIC4_Pos                       (8UL)                     /*!< PB ICR: PIC4 (Bit 8)                                        */
#define PB_ICR_PIC4_Msk                       (0x300UL)                 /*!< PB ICR: PIC4 (Bitfield-Mask: 0x03)                          */
#define PB_ICR_PIC5_Pos                       (10UL)                    /*!< PB ICR: PIC5 (Bit 10)                                       */
#define PB_ICR_PIC5_Msk                       (0xc00UL)                 /*!< PB ICR: PIC5 (Bitfield-Mask: 0x03)                          */
#define PB_ICR_PIC6_Pos                       (12UL)                    /*!< PB ICR: PIC6 (Bit 12)                                       */
#define PB_ICR_PIC6_Msk                       (0x3000UL)                /*!< PB ICR: PIC6 (Bitfield-Mask: 0x03)                          */
#define PB_ICR_PIC7_Pos                       (14UL)                    /*!< PB ICR: PIC7 (Bit 14)                                       */
#define PB_ICR_PIC7_Msk                       (0xc000UL)                /*!< PB ICR: PIC7 (Bitfield-Mask: 0x03)                          */
#define PB_ICR_PIC8_Pos                       (16UL)                    /*!< PB ICR: PIC8 (Bit 16)                                       */
#define PB_ICR_PIC8_Msk                       (0x30000UL)               /*!< PB ICR: PIC8 (Bitfield-Mask: 0x03)                          */
#define PB_ICR_PIC9_Pos                       (18UL)                    /*!< PB ICR: PIC9 (Bit 18)                                       */
#define PB_ICR_PIC9_Msk                       (0xc0000UL)               /*!< PB ICR: PIC9 (Bitfield-Mask: 0x03)                          */
#define PB_ICR_PIC10_Pos                      (20UL)                    /*!< PB ICR: PIC10 (Bit 20)                                      */
#define PB_ICR_PIC10_Msk                      (0x300000UL)              /*!< PB ICR: PIC10 (Bitfield-Mask: 0x03)                         */
#define PB_ICR_PIC11_Pos                      (22UL)                    /*!< PB ICR: PIC11 (Bit 22)                                      */
#define PB_ICR_PIC11_Msk                      (0xc00000UL)              /*!< PB ICR: PIC11 (Bitfield-Mask: 0x03)                         */
#define PB_ICR_PIC12_Pos                      (24UL)                    /*!< PB ICR: PIC12 (Bit 24)                                      */
#define PB_ICR_PIC12_Msk                      (0x3000000UL)             /*!< PB ICR: PIC12 (Bitfield-Mask: 0x03)                         */
#define PB_ICR_PIC13_Pos                      (26UL)                    /*!< PB ICR: PIC13 (Bit 26)                                      */
#define PB_ICR_PIC13_Msk                      (0xc000000UL)             /*!< PB ICR: PIC13 (Bitfield-Mask: 0x03)                         */
#define PB_ICR_PIC14_Pos                      (28UL)                    /*!< PB ICR: PIC14 (Bit 28)                                      */
#define PB_ICR_PIC14_Msk                      (0x30000000UL)            /*!< PB ICR: PIC14 (Bitfield-Mask: 0x03)                         */
#define PB_ICR_PIC15_Pos                      (30UL)                    /*!< PB ICR: PIC15 (Bit 30)                                      */
#define PB_ICR_PIC15_Msk                      (0xc0000000UL)            /*!< PB ICR: PIC15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PB_ODR  ----------------------------------- */
#define PB_ODR_POD0_Pos                       (0UL)                     /*!< PB ODR: POD0 (Bit 0)                                        */
#define PB_ODR_POD0_Msk                       (0x1UL)                   /*!< PB ODR: POD0 (Bitfield-Mask: 0x01)                          */
#define PB_ODR_POD1_Pos                       (1UL)                     /*!< PB ODR: POD1 (Bit 1)                                        */
#define PB_ODR_POD1_Msk                       (0x2UL)                   /*!< PB ODR: POD1 (Bitfield-Mask: 0x01)                          */
#define PB_ODR_POD2_Pos                       (2UL)                     /*!< PB ODR: POD2 (Bit 2)                                        */
#define PB_ODR_POD2_Msk                       (0x4UL)                   /*!< PB ODR: POD2 (Bitfield-Mask: 0x01)                          */
#define PB_ODR_POD3_Pos                       (3UL)                     /*!< PB ODR: POD3 (Bit 3)                                        */
#define PB_ODR_POD3_Msk                       (0x8UL)                   /*!< PB ODR: POD3 (Bitfield-Mask: 0x01)                          */
#define PB_ODR_POD4_Pos                       (4UL)                     /*!< PB ODR: POD4 (Bit 4)                                        */
#define PB_ODR_POD4_Msk                       (0x10UL)                  /*!< PB ODR: POD4 (Bitfield-Mask: 0x01)                          */
#define PB_ODR_POD5_Pos                       (5UL)                     /*!< PB ODR: POD5 (Bit 5)                                        */
#define PB_ODR_POD5_Msk                       (0x20UL)                  /*!< PB ODR: POD5 (Bitfield-Mask: 0x01)                          */
#define PB_ODR_POD6_Pos                       (6UL)                     /*!< PB ODR: POD6 (Bit 6)                                        */
#define PB_ODR_POD6_Msk                       (0x40UL)                  /*!< PB ODR: POD6 (Bitfield-Mask: 0x01)                          */
#define PB_ODR_POD7_Pos                       (7UL)                     /*!< PB ODR: POD7 (Bit 7)                                        */
#define PB_ODR_POD7_Msk                       (0x80UL)                  /*!< PB ODR: POD7 (Bitfield-Mask: 0x01)                          */
#define PB_ODR_POD8_Pos                       (8UL)                     /*!< PB ODR: POD8 (Bit 8)                                        */
#define PB_ODR_POD8_Msk                       (0x100UL)                 /*!< PB ODR: POD8 (Bitfield-Mask: 0x01)                          */
#define PB_ODR_POD9_Pos                       (9UL)                     /*!< PB ODR: POD9 (Bit 9)                                        */
#define PB_ODR_POD9_Msk                       (0x200UL)                 /*!< PB ODR: POD9 (Bitfield-Mask: 0x01)                          */
#define PB_ODR_POD10_Pos                      (10UL)                    /*!< PB ODR: POD10 (Bit 10)                                      */
#define PB_ODR_POD10_Msk                      (0x400UL)                 /*!< PB ODR: POD10 (Bitfield-Mask: 0x01)                         */
#define PB_ODR_POD11_Pos                      (11UL)                    /*!< PB ODR: POD11 (Bit 11)                                      */
#define PB_ODR_POD11_Msk                      (0x800UL)                 /*!< PB ODR: POD11 (Bitfield-Mask: 0x01)                         */
#define PB_ODR_POD12_Pos                      (12UL)                    /*!< PB ODR: POD12 (Bit 12)                                      */
#define PB_ODR_POD12_Msk                      (0x1000UL)                /*!< PB ODR: POD12 (Bitfield-Mask: 0x01)                         */
#define PB_ODR_POD13_Pos                      (13UL)                    /*!< PB ODR: POD13 (Bit 13)                                      */
#define PB_ODR_POD13_Msk                      (0x2000UL)                /*!< PB ODR: POD13 (Bitfield-Mask: 0x01)                         */
#define PB_ODR_POD14_Pos                      (14UL)                    /*!< PB ODR: POD14 (Bit 14)                                      */
#define PB_ODR_POD14_Msk                      (0x4000UL)                /*!< PB ODR: POD14 (Bitfield-Mask: 0x01)                         */
#define PB_ODR_POD15_Pos                      (15UL)                    /*!< PB ODR: POD15 (Bit 15)                                      */
#define PB_ODR_POD15_Msk                      (0x8000UL)                /*!< PB ODR: POD15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PB_IDR  ----------------------------------- */
#define PB_IDR_PID0_Pos                       (0UL)                     /*!< PB IDR: PID0 (Bit 0)                                        */
#define PB_IDR_PID0_Msk                       (0x1UL)                   /*!< PB IDR: PID0 (Bitfield-Mask: 0x01)                          */
#define PB_IDR_PID1_Pos                       (1UL)                     /*!< PB IDR: PID1 (Bit 1)                                        */
#define PB_IDR_PID1_Msk                       (0x2UL)                   /*!< PB IDR: PID1 (Bitfield-Mask: 0x01)                          */
#define PB_IDR_PID2_Pos                       (2UL)                     /*!< PB IDR: PID2 (Bit 2)                                        */
#define PB_IDR_PID2_Msk                       (0x4UL)                   /*!< PB IDR: PID2 (Bitfield-Mask: 0x01)                          */
#define PB_IDR_PID3_Pos                       (3UL)                     /*!< PB IDR: PID3 (Bit 3)                                        */
#define PB_IDR_PID3_Msk                       (0x8UL)                   /*!< PB IDR: PID3 (Bitfield-Mask: 0x01)                          */
#define PB_IDR_PID4_Pos                       (4UL)                     /*!< PB IDR: PID4 (Bit 4)                                        */
#define PB_IDR_PID4_Msk                       (0x10UL)                  /*!< PB IDR: PID4 (Bitfield-Mask: 0x01)                          */
#define PB_IDR_PID5_Pos                       (5UL)                     /*!< PB IDR: PID5 (Bit 5)                                        */
#define PB_IDR_PID5_Msk                       (0x20UL)                  /*!< PB IDR: PID5 (Bitfield-Mask: 0x01)                          */
#define PB_IDR_PID6_Pos                       (6UL)                     /*!< PB IDR: PID6 (Bit 6)                                        */
#define PB_IDR_PID6_Msk                       (0x40UL)                  /*!< PB IDR: PID6 (Bitfield-Mask: 0x01)                          */
#define PB_IDR_PID7_Pos                       (7UL)                     /*!< PB IDR: PID7 (Bit 7)                                        */
#define PB_IDR_PID7_Msk                       (0x80UL)                  /*!< PB IDR: PID7 (Bitfield-Mask: 0x01)                          */
#define PB_IDR_PID8_Pos                       (8UL)                     /*!< PB IDR: PID8 (Bit 8)                                        */
#define PB_IDR_PID8_Msk                       (0x100UL)                 /*!< PB IDR: PID8 (Bitfield-Mask: 0x01)                          */
#define PB_IDR_PID9_Pos                       (9UL)                     /*!< PB IDR: PID9 (Bit 9)                                        */
#define PB_IDR_PID9_Msk                       (0x200UL)                 /*!< PB IDR: PID9 (Bitfield-Mask: 0x01)                          */
#define PB_IDR_PID10_Pos                      (10UL)                    /*!< PB IDR: PID10 (Bit 10)                                      */
#define PB_IDR_PID10_Msk                      (0x400UL)                 /*!< PB IDR: PID10 (Bitfield-Mask: 0x01)                         */
#define PB_IDR_PID11_Pos                      (11UL)                    /*!< PB IDR: PID11 (Bit 11)                                      */
#define PB_IDR_PID11_Msk                      (0x800UL)                 /*!< PB IDR: PID11 (Bitfield-Mask: 0x01)                         */
#define PB_IDR_PID12_Pos                      (12UL)                    /*!< PB IDR: PID12 (Bit 12)                                      */
#define PB_IDR_PID12_Msk                      (0x1000UL)                /*!< PB IDR: PID12 (Bitfield-Mask: 0x01)                         */
#define PB_IDR_PID13_Pos                      (13UL)                    /*!< PB IDR: PID13 (Bit 13)                                      */
#define PB_IDR_PID13_Msk                      (0x2000UL)                /*!< PB IDR: PID13 (Bitfield-Mask: 0x01)                         */
#define PB_IDR_PID14_Pos                      (14UL)                    /*!< PB IDR: PID14 (Bit 14)                                      */
#define PB_IDR_PID14_Msk                      (0x4000UL)                /*!< PB IDR: PID14 (Bitfield-Mask: 0x01)                         */
#define PB_IDR_PID15_Pos                      (15UL)                    /*!< PB IDR: PID15 (Bit 15)                                      */
#define PB_IDR_PID15_Msk                      (0x8000UL)                /*!< PB IDR: PID15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PB_BSR  ----------------------------------- */
#define PB_BSR_BSD0_Pos                       (0UL)                     /*!< PB BSR: BSD0 (Bit 0)                                        */
#define PB_BSR_BSD0_Msk                       (0x1UL)                   /*!< PB BSR: BSD0 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BSD1_Pos                       (1UL)                     /*!< PB BSR: BSD1 (Bit 1)                                        */
#define PB_BSR_BSD1_Msk                       (0x2UL)                   /*!< PB BSR: BSD1 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BSD2_Pos                       (2UL)                     /*!< PB BSR: BSD2 (Bit 2)                                        */
#define PB_BSR_BSD2_Msk                       (0x4UL)                   /*!< PB BSR: BSD2 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BSD3_Pos                       (3UL)                     /*!< PB BSR: BSD3 (Bit 3)                                        */
#define PB_BSR_BSD3_Msk                       (0x8UL)                   /*!< PB BSR: BSD3 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BSD4_Pos                       (4UL)                     /*!< PB BSR: BSD4 (Bit 4)                                        */
#define PB_BSR_BSD4_Msk                       (0x10UL)                  /*!< PB BSR: BSD4 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BSD5_Pos                       (5UL)                     /*!< PB BSR: BSD5 (Bit 5)                                        */
#define PB_BSR_BSD5_Msk                       (0x20UL)                  /*!< PB BSR: BSD5 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BSD6_Pos                       (6UL)                     /*!< PB BSR: BSD6 (Bit 6)                                        */
#define PB_BSR_BSD6_Msk                       (0x40UL)                  /*!< PB BSR: BSD6 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BSD7_Pos                       (7UL)                     /*!< PB BSR: BSD7 (Bit 7)                                        */
#define PB_BSR_BSD7_Msk                       (0x80UL)                  /*!< PB BSR: BSD7 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BSD8_Pos                       (8UL)                     /*!< PB BSR: BSD8 (Bit 8)                                        */
#define PB_BSR_BSD8_Msk                       (0x100UL)                 /*!< PB BSR: BSD8 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BSD9_Pos                       (9UL)                     /*!< PB BSR: BSD9 (Bit 9)                                        */
#define PB_BSR_BSD9_Msk                       (0x200UL)                 /*!< PB BSR: BSD9 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BSD10_Pos                      (10UL)                    /*!< PB BSR: BSD10 (Bit 10)                                      */
#define PB_BSR_BSD10_Msk                      (0x400UL)                 /*!< PB BSR: BSD10 (Bitfield-Mask: 0x01)                         */
#define PB_BSR_BSD11_Pos                      (11UL)                    /*!< PB BSR: BSD11 (Bit 11)                                      */
#define PB_BSR_BSD11_Msk                      (0x800UL)                 /*!< PB BSR: BSD11 (Bitfield-Mask: 0x01)                         */
#define PB_BSR_BSD12_Pos                      (12UL)                    /*!< PB BSR: BSD12 (Bit 12)                                      */
#define PB_BSR_BSD12_Msk                      (0x1000UL)                /*!< PB BSR: BSD12 (Bitfield-Mask: 0x01)                         */
#define PB_BSR_BSD13_Pos                      (13UL)                    /*!< PB BSR: BSD13 (Bit 13)                                      */
#define PB_BSR_BSD13_Msk                      (0x2000UL)                /*!< PB BSR: BSD13 (Bitfield-Mask: 0x01)                         */
#define PB_BSR_BSD14_Pos                      (14UL)                    /*!< PB BSR: BSD14 (Bit 14)                                      */
#define PB_BSR_BSD14_Msk                      (0x4000UL)                /*!< PB BSR: BSD14 (Bitfield-Mask: 0x01)                         */
#define PB_BSR_BSD15_Pos                      (15UL)                    /*!< PB BSR: BSD15 (Bit 15)                                      */
#define PB_BSR_BSD15_Msk                      (0x8000UL)                /*!< PB BSR: BSD15 (Bitfield-Mask: 0x01)                         */
#define PB_BSR_BCD0_Pos                       (16UL)                    /*!< PB BSR: BCD0 (Bit 16)                                       */
#define PB_BSR_BCD0_Msk                       (0x10000UL)               /*!< PB BSR: BCD0 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BCD1_Pos                       (17UL)                    /*!< PB BSR: BCD1 (Bit 17)                                       */
#define PB_BSR_BCD1_Msk                       (0x20000UL)               /*!< PB BSR: BCD1 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BCD2_Pos                       (18UL)                    /*!< PB BSR: BCD2 (Bit 18)                                       */
#define PB_BSR_BCD2_Msk                       (0x40000UL)               /*!< PB BSR: BCD2 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BCD3_Pos                       (19UL)                    /*!< PB BSR: BCD3 (Bit 19)                                       */
#define PB_BSR_BCD3_Msk                       (0x80000UL)               /*!< PB BSR: BCD3 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BCD4_Pos                       (20UL)                    /*!< PB BSR: BCD4 (Bit 20)                                       */
#define PB_BSR_BCD4_Msk                       (0x100000UL)              /*!< PB BSR: BCD4 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BCD5_Pos                       (21UL)                    /*!< PB BSR: BCD5 (Bit 21)                                       */
#define PB_BSR_BCD5_Msk                       (0x200000UL)              /*!< PB BSR: BCD5 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BCD6_Pos                       (22UL)                    /*!< PB BSR: BCD6 (Bit 22)                                       */
#define PB_BSR_BCD6_Msk                       (0x400000UL)              /*!< PB BSR: BCD6 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BCD7_Pos                       (23UL)                    /*!< PB BSR: BCD7 (Bit 23)                                       */
#define PB_BSR_BCD7_Msk                       (0x800000UL)              /*!< PB BSR: BCD7 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BCD8_Pos                       (24UL)                    /*!< PB BSR: BCD8 (Bit 24)                                       */
#define PB_BSR_BCD8_Msk                       (0x1000000UL)             /*!< PB BSR: BCD8 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BCD9_Pos                       (25UL)                    /*!< PB BSR: BCD9 (Bit 25)                                       */
#define PB_BSR_BCD9_Msk                       (0x2000000UL)             /*!< PB BSR: BCD9 (Bitfield-Mask: 0x01)                          */
#define PB_BSR_BCD10_Pos                      (26UL)                    /*!< PB BSR: BCD10 (Bit 26)                                      */
#define PB_BSR_BCD10_Msk                      (0x4000000UL)             /*!< PB BSR: BCD10 (Bitfield-Mask: 0x01)                         */
#define PB_BSR_BCD11_Pos                      (27UL)                    /*!< PB BSR: BCD11 (Bit 27)                                      */
#define PB_BSR_BCD11_Msk                      (0x8000000UL)             /*!< PB BSR: BCD11 (Bitfield-Mask: 0x01)                         */
#define PB_BSR_BCD12_Pos                      (28UL)                    /*!< PB BSR: BCD12 (Bit 28)                                      */
#define PB_BSR_BCD12_Msk                      (0x10000000UL)            /*!< PB BSR: BCD12 (Bitfield-Mask: 0x01)                         */
#define PB_BSR_BCD13_Pos                      (29UL)                    /*!< PB BSR: BCD13 (Bit 29)                                      */
#define PB_BSR_BCD13_Msk                      (0x20000000UL)            /*!< PB BSR: BCD13 (Bitfield-Mask: 0x01)                         */
#define PB_BSR_BCD14_Pos                      (30UL)                    /*!< PB BSR: BCD14 (Bit 30)                                      */
#define PB_BSR_BCD14_Msk                      (0x40000000UL)            /*!< PB BSR: BCD14 (Bitfield-Mask: 0x01)                         */
#define PB_BSR_BCD15_Pos                      (31UL)                    /*!< PB BSR: BCD15 (Bit 31)                                      */
#define PB_BSR_BCD15_Msk                      (0x80000000UL)            /*!< PB BSR: BCD15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PB_BCR  ----------------------------------- */
#define PB_BCR_BCD0_Pos                       (0UL)                     /*!< PB BCR: BCD0 (Bit 0)                                        */
#define PB_BCR_BCD0_Msk                       (0x1UL)                   /*!< PB BCR: BCD0 (Bitfield-Mask: 0x01)                          */
#define PB_BCR_BCD1_Pos                       (1UL)                     /*!< PB BCR: BCD1 (Bit 1)                                        */
#define PB_BCR_BCD1_Msk                       (0x2UL)                   /*!< PB BCR: BCD1 (Bitfield-Mask: 0x01)                          */
#define PB_BCR_BCD2_Pos                       (2UL)                     /*!< PB BCR: BCD2 (Bit 2)                                        */
#define PB_BCR_BCD2_Msk                       (0x4UL)                   /*!< PB BCR: BCD2 (Bitfield-Mask: 0x01)                          */
#define PB_BCR_BCD3_Pos                       (3UL)                     /*!< PB BCR: BCD3 (Bit 3)                                        */
#define PB_BCR_BCD3_Msk                       (0x8UL)                   /*!< PB BCR: BCD3 (Bitfield-Mask: 0x01)                          */
#define PB_BCR_BCD4_Pos                       (4UL)                     /*!< PB BCR: BCD4 (Bit 4)                                        */
#define PB_BCR_BCD4_Msk                       (0x10UL)                  /*!< PB BCR: BCD4 (Bitfield-Mask: 0x01)                          */
#define PB_BCR_BCD5_Pos                       (5UL)                     /*!< PB BCR: BCD5 (Bit 5)                                        */
#define PB_BCR_BCD5_Msk                       (0x20UL)                  /*!< PB BCR: BCD5 (Bitfield-Mask: 0x01)                          */
#define PB_BCR_BCD6_Pos                       (6UL)                     /*!< PB BCR: BCD6 (Bit 6)                                        */
#define PB_BCR_BCD6_Msk                       (0x40UL)                  /*!< PB BCR: BCD6 (Bitfield-Mask: 0x01)                          */
#define PB_BCR_BCD7_Pos                       (7UL)                     /*!< PB BCR: BCD7 (Bit 7)                                        */
#define PB_BCR_BCD7_Msk                       (0x80UL)                  /*!< PB BCR: BCD7 (Bitfield-Mask: 0x01)                          */
#define PB_BCR_BCD8_Pos                       (8UL)                     /*!< PB BCR: BCD8 (Bit 8)                                        */
#define PB_BCR_BCD8_Msk                       (0x100UL)                 /*!< PB BCR: BCD8 (Bitfield-Mask: 0x01)                          */
#define PB_BCR_BCD9_Pos                       (9UL)                     /*!< PB BCR: BCD9 (Bit 9)                                        */
#define PB_BCR_BCD9_Msk                       (0x200UL)                 /*!< PB BCR: BCD9 (Bitfield-Mask: 0x01)                          */
#define PB_BCR_BCD10_Pos                      (10UL)                    /*!< PB BCR: BCD10 (Bit 10)                                      */
#define PB_BCR_BCD10_Msk                      (0x400UL)                 /*!< PB BCR: BCD10 (Bitfield-Mask: 0x01)                         */
#define PB_BCR_BCD11_Pos                      (11UL)                    /*!< PB BCR: BCD11 (Bit 11)                                      */
#define PB_BCR_BCD11_Msk                      (0x800UL)                 /*!< PB BCR: BCD11 (Bitfield-Mask: 0x01)                         */
#define PB_BCR_BCD12_Pos                      (12UL)                    /*!< PB BCR: BCD12 (Bit 12)                                      */
#define PB_BCR_BCD12_Msk                      (0x1000UL)                /*!< PB BCR: BCD12 (Bitfield-Mask: 0x01)                         */
#define PB_BCR_BCD13_Pos                      (13UL)                    /*!< PB BCR: BCD13 (Bit 13)                                      */
#define PB_BCR_BCD13_Msk                      (0x2000UL)                /*!< PB BCR: BCD13 (Bitfield-Mask: 0x01)                         */
#define PB_BCR_BCD14_Pos                      (14UL)                    /*!< PB BCR: BCD14 (Bit 14)                                      */
#define PB_BCR_BCD14_Msk                      (0x4000UL)                /*!< PB BCR: BCD14 (Bitfield-Mask: 0x01)                         */
#define PB_BCR_BCD15_Pos                      (15UL)                    /*!< PB BCR: BCD15 (Bit 15)                                      */
#define PB_BCR_BCD15_Msk                      (0x8000UL)                /*!< PB BCR: BCD15 (Bitfield-Mask: 0x01)                         */


/* ================================================================================ */
/* ================           struct 'PC' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  PC_MR1  ----------------------------------- */
#define PC_MR1_P0MUX_Pos                      (0UL)                     /*!< PC MR1: P0MUX (Bit 0)                                       */
#define PC_MR1_P0MUX_Msk                      (0x7UL)                   /*!< PC MR1: P0MUX (Bitfield-Mask: 0x07)                         */
#define PC_MR1_P1MUX_Pos                      (4UL)                     /*!< PC MR1: P1MUX (Bit 4)                                       */
#define PC_MR1_P1MUX_Msk                      (0x70UL)                  /*!< PC MR1: P1MUX (Bitfield-Mask: 0x07)                         */
#define PC_MR1_P2MUX_Pos                      (8UL)                     /*!< PC MR1: P2MUX (Bit 8)                                       */
#define PC_MR1_P2MUX_Msk                      (0x700UL)                 /*!< PC MR1: P2MUX (Bitfield-Mask: 0x07)                         */
#define PC_MR1_P3MUX_Pos                      (12UL)                    /*!< PC MR1: P3MUX (Bit 12)                                      */
#define PC_MR1_P3MUX_Msk                      (0x7000UL)                /*!< PC MR1: P3MUX (Bitfield-Mask: 0x07)                         */
#define PC_MR1_P4MUX_Pos                      (16UL)                    /*!< PC MR1: P4MUX (Bit 16)                                      */
#define PC_MR1_P4MUX_Msk                      (0x70000UL)               /*!< PC MR1: P4MUX (Bitfield-Mask: 0x07)                         */
#define PC_MR1_P5MUX_Pos                      (20UL)                    /*!< PC MR1: P5MUX (Bit 20)                                      */
#define PC_MR1_P5MUX_Msk                      (0x700000UL)              /*!< PC MR1: P5MUX (Bitfield-Mask: 0x07)                         */
#define PC_MR1_P6MUX_Pos                      (24UL)                    /*!< PC MR1: P6MUX (Bit 24)                                      */
#define PC_MR1_P6MUX_Msk                      (0x7000000UL)             /*!< PC MR1: P6MUX (Bitfield-Mask: 0x07)                         */
#define PC_MR1_P7MUX_Pos                      (28UL)                    /*!< PC MR1: P7MUX (Bit 28)                                      */
#define PC_MR1_P7MUX_Msk                      (0x70000000UL)            /*!< PC MR1: P7MUX (Bitfield-Mask: 0x07)                         */

/* -----------------------------------  PC_MR2  ----------------------------------- */
#define PC_MR2_P8MUX_Pos                      (0UL)                     /*!< PC MR2: P8MUX (Bit 0)                                       */
#define PC_MR2_P8MUX_Msk                      (0x7UL)                   /*!< PC MR2: P8MUX (Bitfield-Mask: 0x07)                         */
#define PC_MR2_P9MUX_Pos                      (4UL)                     /*!< PC MR2: P9MUX (Bit 4)                                       */
#define PC_MR2_P9MUX_Msk                      (0x70UL)                  /*!< PC MR2: P9MUX (Bitfield-Mask: 0x07)                         */
#define PC_MR2_P10MUX_Pos                     (8UL)                     /*!< PC MR2: P10MUX (Bit 8)                                      */
#define PC_MR2_P10MUX_Msk                     (0x700UL)                 /*!< PC MR2: P10MUX (Bitfield-Mask: 0x07)                        */
#define PC_MR2_P11MUX_Pos                     (12UL)                    /*!< PC MR2: P11MUX (Bit 12)                                     */
#define PC_MR2_P11MUX_Msk                     (0x7000UL)                /*!< PC MR2: P11MUX (Bitfield-Mask: 0x07)                        */
#define PC_MR2_P12MUX_Pos                     (16UL)                    /*!< PC MR2: P12MUX (Bit 16)                                     */
#define PC_MR2_P12MUX_Msk                     (0x70000UL)               /*!< PC MR2: P12MUX (Bitfield-Mask: 0x07)                        */
#define PC_MR2_P13MUX_Pos                     (20UL)                    /*!< PC MR2: P13MUX (Bit 20)                                     */
#define PC_MR2_P13MUX_Msk                     (0x700000UL)              /*!< PC MR2: P13MUX (Bitfield-Mask: 0x07)                        */
#define PC_MR2_P14MUX_Pos                     (24UL)                    /*!< PC MR2: P14MUX (Bit 24)                                     */
#define PC_MR2_P14MUX_Msk                     (0x7000000UL)             /*!< PC MR2: P14MUX (Bitfield-Mask: 0x07)                        */
#define PC_MR2_P15MUX_Pos                     (28UL)                    /*!< PC MR2: P15MUX (Bit 28)                                     */
#define PC_MR2_P15MUX_Msk                     (0x70000000UL)            /*!< PC MR2: P15MUX (Bitfield-Mask: 0x07)                        */

/* ------------------------------------  PC_CR  ----------------------------------- */
#define PC_CR_P0_Pos                          (0UL)                     /*!< PC CR: P0 (Bit 0)                                           */
#define PC_CR_P0_Msk                          (0x3UL)                   /*!< PC CR: P0 (Bitfield-Mask: 0x03)                             */
#define PC_CR_P1_Pos                          (2UL)                     /*!< PC CR: P1 (Bit 2)                                           */
#define PC_CR_P1_Msk                          (0xcUL)                   /*!< PC CR: P1 (Bitfield-Mask: 0x03)                             */
#define PC_CR_P2_Pos                          (4UL)                     /*!< PC CR: P2 (Bit 4)                                           */
#define PC_CR_P2_Msk                          (0x30UL)                  /*!< PC CR: P2 (Bitfield-Mask: 0x03)                             */
#define PC_CR_P3_Pos                          (6UL)                     /*!< PC CR: P3 (Bit 6)                                           */
#define PC_CR_P3_Msk                          (0xc0UL)                  /*!< PC CR: P3 (Bitfield-Mask: 0x03)                             */
#define PC_CR_P4_Pos                          (8UL)                     /*!< PC CR: P4 (Bit 8)                                           */
#define PC_CR_P4_Msk                          (0x300UL)                 /*!< PC CR: P4 (Bitfield-Mask: 0x03)                             */
#define PC_CR_P5_Pos                          (10UL)                    /*!< PC CR: P5 (Bit 10)                                          */
#define PC_CR_P5_Msk                          (0xc00UL)                 /*!< PC CR: P5 (Bitfield-Mask: 0x03)                             */
#define PC_CR_P6_Pos                          (12UL)                    /*!< PC CR: P6 (Bit 12)                                          */
#define PC_CR_P6_Msk                          (0x3000UL)                /*!< PC CR: P6 (Bitfield-Mask: 0x03)                             */
#define PC_CR_P7_Pos                          (14UL)                    /*!< PC CR: P7 (Bit 14)                                          */
#define PC_CR_P7_Msk                          (0xc000UL)                /*!< PC CR: P7 (Bitfield-Mask: 0x03)                             */
#define PC_CR_P8_Pos                          (16UL)                    /*!< PC CR: P8 (Bit 16)                                          */
#define PC_CR_P8_Msk                          (0x30000UL)               /*!< PC CR: P8 (Bitfield-Mask: 0x03)                             */
#define PC_CR_P9_Pos                          (18UL)                    /*!< PC CR: P9 (Bit 18)                                          */
#define PC_CR_P9_Msk                          (0xc0000UL)               /*!< PC CR: P9 (Bitfield-Mask: 0x03)                             */
#define PC_CR_P10_Pos                         (20UL)                    /*!< PC CR: P10 (Bit 20)                                         */
#define PC_CR_P10_Msk                         (0x300000UL)              /*!< PC CR: P10 (Bitfield-Mask: 0x03)                            */
#define PC_CR_P11_Pos                         (22UL)                    /*!< PC CR: P11 (Bit 22)                                         */
#define PC_CR_P11_Msk                         (0xc00000UL)              /*!< PC CR: P11 (Bitfield-Mask: 0x03)                            */
#define PC_CR_P12_Pos                         (24UL)                    /*!< PC CR: P12 (Bit 24)                                         */
#define PC_CR_P12_Msk                         (0x3000000UL)             /*!< PC CR: P12 (Bitfield-Mask: 0x03)                            */
#define PC_CR_P13_Pos                         (26UL)                    /*!< PC CR: P13 (Bit 26)                                         */
#define PC_CR_P13_Msk                         (0xc000000UL)             /*!< PC CR: P13 (Bitfield-Mask: 0x03)                            */
#define PC_CR_P14_Pos                         (28UL)                    /*!< PC CR: P14 (Bit 28)                                         */
#define PC_CR_P14_Msk                         (0x30000000UL)            /*!< PC CR: P14 (Bitfield-Mask: 0x03)                            */
#define PC_CR_P15_Pos                         (30UL)                    /*!< PC CR: P15 (Bit 30)                                         */
#define PC_CR_P15_Msk                         (0xc0000000UL)            /*!< PC CR: P15 (Bitfield-Mask: 0x03)                            */

/* -----------------------------------  PC_PRCR  ---------------------------------- */
#define PC_PRCR_PUE0_Pos                      (0UL)                     /*!< PC PRCR: PUE0 (Bit 0)                                       */
#define PC_PRCR_PUE0_Msk                      (0x3UL)                   /*!< PC PRCR: PUE0 (Bitfield-Mask: 0x03)                         */
#define PC_PRCR_PUE1_Pos                      (2UL)                     /*!< PC PRCR: PUE1 (Bit 2)                                       */
#define PC_PRCR_PUE1_Msk                      (0xcUL)                   /*!< PC PRCR: PUE1 (Bitfield-Mask: 0x03)                         */
#define PC_PRCR_PUE2_Pos                      (4UL)                     /*!< PC PRCR: PUE2 (Bit 4)                                       */
#define PC_PRCR_PUE2_Msk                      (0x30UL)                  /*!< PC PRCR: PUE2 (Bitfield-Mask: 0x03)                         */
#define PC_PRCR_PUE3_Pos                      (6UL)                     /*!< PC PRCR: PUE3 (Bit 6)                                       */
#define PC_PRCR_PUE3_Msk                      (0xc0UL)                  /*!< PC PRCR: PUE3 (Bitfield-Mask: 0x03)                         */
#define PC_PRCR_PUE4_Pos                      (8UL)                     /*!< PC PRCR: PUE4 (Bit 8)                                       */
#define PC_PRCR_PUE4_Msk                      (0x300UL)                 /*!< PC PRCR: PUE4 (Bitfield-Mask: 0x03)                         */
#define PC_PRCR_PUE5_Pos                      (10UL)                    /*!< PC PRCR: PUE5 (Bit 10)                                      */
#define PC_PRCR_PUE5_Msk                      (0xc00UL)                 /*!< PC PRCR: PUE5 (Bitfield-Mask: 0x03)                         */
#define PC_PRCR_PUE6_Pos                      (12UL)                    /*!< PC PRCR: PUE6 (Bit 12)                                      */
#define PC_PRCR_PUE6_Msk                      (0x3000UL)                /*!< PC PRCR: PUE6 (Bitfield-Mask: 0x03)                         */
#define PC_PRCR_PUE7_Pos                      (14UL)                    /*!< PC PRCR: PUE7 (Bit 14)                                      */
#define PC_PRCR_PUE7_Msk                      (0xc000UL)                /*!< PC PRCR: PUE7 (Bitfield-Mask: 0x03)                         */
#define PC_PRCR_PUE8_Pos                      (16UL)                    /*!< PC PRCR: PUE8 (Bit 16)                                      */
#define PC_PRCR_PUE8_Msk                      (0x30000UL)               /*!< PC PRCR: PUE8 (Bitfield-Mask: 0x03)                         */
#define PC_PRCR_PUE9_Pos                      (18UL)                    /*!< PC PRCR: PUE9 (Bit 18)                                      */
#define PC_PRCR_PUE9_Msk                      (0xc0000UL)               /*!< PC PRCR: PUE9 (Bitfield-Mask: 0x03)                         */
#define PC_PRCR_PUE10_Pos                     (20UL)                    /*!< PC PRCR: PUE10 (Bit 20)                                     */
#define PC_PRCR_PUE10_Msk                     (0x300000UL)              /*!< PC PRCR: PUE10 (Bitfield-Mask: 0x03)                        */
#define PC_PRCR_PUE11_Pos                     (22UL)                    /*!< PC PRCR: PUE11 (Bit 22)                                     */
#define PC_PRCR_PUE11_Msk                     (0xc00000UL)              /*!< PC PRCR: PUE11 (Bitfield-Mask: 0x03)                        */
#define PC_PRCR_PUE12_Pos                     (24UL)                    /*!< PC PRCR: PUE12 (Bit 24)                                     */
#define PC_PRCR_PUE12_Msk                     (0x3000000UL)             /*!< PC PRCR: PUE12 (Bitfield-Mask: 0x03)                        */
#define PC_PRCR_PUE13_Pos                     (26UL)                    /*!< PC PRCR: PUE13 (Bit 26)                                     */
#define PC_PRCR_PUE13_Msk                     (0xc000000UL)             /*!< PC PRCR: PUE13 (Bitfield-Mask: 0x03)                        */
#define PC_PRCR_PUE14_Pos                     (28UL)                    /*!< PC PRCR: PUE14 (Bit 28)                                     */
#define PC_PRCR_PUE14_Msk                     (0x30000000UL)            /*!< PC PRCR: PUE14 (Bitfield-Mask: 0x03)                        */
#define PC_PRCR_PUE15_Pos                     (30UL)                    /*!< PC PRCR: PUE15 (Bit 30)                                     */
#define PC_PRCR_PUE15_Msk                     (0xc0000000UL)            /*!< PC PRCR: PUE15 (Bitfield-Mask: 0x03)                        */

/* -----------------------------------  PC_DER  ----------------------------------- */
#define PC_DER_PDE0_Pos                       (0UL)                     /*!< PC DER: PDE0 (Bit 0)                                        */
#define PC_DER_PDE0_Msk                       (0x1UL)                   /*!< PC DER: PDE0 (Bitfield-Mask: 0x01)                          */
#define PC_DER_PDE1_Pos                       (1UL)                     /*!< PC DER: PDE1 (Bit 1)                                        */
#define PC_DER_PDE1_Msk                       (0x2UL)                   /*!< PC DER: PDE1 (Bitfield-Mask: 0x01)                          */
#define PC_DER_PDE2_Pos                       (2UL)                     /*!< PC DER: PDE2 (Bit 2)                                        */
#define PC_DER_PDE2_Msk                       (0x4UL)                   /*!< PC DER: PDE2 (Bitfield-Mask: 0x01)                          */
#define PC_DER_PDE3_Pos                       (3UL)                     /*!< PC DER: PDE3 (Bit 3)                                        */
#define PC_DER_PDE3_Msk                       (0x8UL)                   /*!< PC DER: PDE3 (Bitfield-Mask: 0x01)                          */
#define PC_DER_PDE4_Pos                       (4UL)                     /*!< PC DER: PDE4 (Bit 4)                                        */
#define PC_DER_PDE4_Msk                       (0x10UL)                  /*!< PC DER: PDE4 (Bitfield-Mask: 0x01)                          */
#define PC_DER_PDE5_Pos                       (5UL)                     /*!< PC DER: PDE5 (Bit 5)                                        */
#define PC_DER_PDE5_Msk                       (0x20UL)                  /*!< PC DER: PDE5 (Bitfield-Mask: 0x01)                          */
#define PC_DER_PDE6_Pos                       (6UL)                     /*!< PC DER: PDE6 (Bit 6)                                        */
#define PC_DER_PDE6_Msk                       (0x40UL)                  /*!< PC DER: PDE6 (Bitfield-Mask: 0x01)                          */
#define PC_DER_PDE7_Pos                       (7UL)                     /*!< PC DER: PDE7 (Bit 7)                                        */
#define PC_DER_PDE7_Msk                       (0x80UL)                  /*!< PC DER: PDE7 (Bitfield-Mask: 0x01)                          */
#define PC_DER_PDE8_Pos                       (8UL)                     /*!< PC DER: PDE8 (Bit 8)                                        */
#define PC_DER_PDE8_Msk                       (0x100UL)                 /*!< PC DER: PDE8 (Bitfield-Mask: 0x01)                          */
#define PC_DER_PDE9_Pos                       (9UL)                     /*!< PC DER: PDE9 (Bit 9)                                        */
#define PC_DER_PDE9_Msk                       (0x200UL)                 /*!< PC DER: PDE9 (Bitfield-Mask: 0x01)                          */
#define PC_DER_PDE10_Pos                      (10UL)                    /*!< PC DER: PDE10 (Bit 10)                                      */
#define PC_DER_PDE10_Msk                      (0x400UL)                 /*!< PC DER: PDE10 (Bitfield-Mask: 0x01)                         */
#define PC_DER_PDE11_Pos                      (11UL)                    /*!< PC DER: PDE11 (Bit 11)                                      */
#define PC_DER_PDE11_Msk                      (0x800UL)                 /*!< PC DER: PDE11 (Bitfield-Mask: 0x01)                         */
#define PC_DER_PDE12_Pos                      (12UL)                    /*!< PC DER: PDE12 (Bit 12)                                      */
#define PC_DER_PDE12_Msk                      (0x1000UL)                /*!< PC DER: PDE12 (Bitfield-Mask: 0x01)                         */
#define PC_DER_PDE13_Pos                      (13UL)                    /*!< PC DER: PDE13 (Bit 13)                                      */
#define PC_DER_PDE13_Msk                      (0x2000UL)                /*!< PC DER: PDE13 (Bitfield-Mask: 0x01)                         */
#define PC_DER_PDE14_Pos                      (14UL)                    /*!< PC DER: PDE14 (Bit 14)                                      */
#define PC_DER_PDE14_Msk                      (0x4000UL)                /*!< PC DER: PDE14 (Bitfield-Mask: 0x01)                         */
#define PC_DER_PDE15_Pos                      (15UL)                    /*!< PC DER: PDE15 (Bit 15)                                      */
#define PC_DER_PDE15_Msk                      (0x8000UL)                /*!< PC DER: PDE15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PC_IER  ----------------------------------- */
#define PC_IER_PIE0_Pos                       (0UL)                     /*!< PC IER: PIE0 (Bit 0)                                        */
#define PC_IER_PIE0_Msk                       (0x3UL)                   /*!< PC IER: PIE0 (Bitfield-Mask: 0x03)                          */
#define PC_IER_PIE1_Pos                       (2UL)                     /*!< PC IER: PIE1 (Bit 2)                                        */
#define PC_IER_PIE1_Msk                       (0xcUL)                   /*!< PC IER: PIE1 (Bitfield-Mask: 0x03)                          */
#define PC_IER_PIE2_Pos                       (4UL)                     /*!< PC IER: PIE2 (Bit 4)                                        */
#define PC_IER_PIE2_Msk                       (0x30UL)                  /*!< PC IER: PIE2 (Bitfield-Mask: 0x03)                          */
#define PC_IER_PIE3_Pos                       (6UL)                     /*!< PC IER: PIE3 (Bit 6)                                        */
#define PC_IER_PIE3_Msk                       (0xc0UL)                  /*!< PC IER: PIE3 (Bitfield-Mask: 0x03)                          */
#define PC_IER_PIE4_Pos                       (8UL)                     /*!< PC IER: PIE4 (Bit 8)                                        */
#define PC_IER_PIE4_Msk                       (0x300UL)                 /*!< PC IER: PIE4 (Bitfield-Mask: 0x03)                          */
#define PC_IER_PIE5_Pos                       (10UL)                    /*!< PC IER: PIE5 (Bit 10)                                       */
#define PC_IER_PIE5_Msk                       (0xc00UL)                 /*!< PC IER: PIE5 (Bitfield-Mask: 0x03)                          */
#define PC_IER_PIE6_Pos                       (12UL)                    /*!< PC IER: PIE6 (Bit 12)                                       */
#define PC_IER_PIE6_Msk                       (0x3000UL)                /*!< PC IER: PIE6 (Bitfield-Mask: 0x03)                          */
#define PC_IER_PIE7_Pos                       (14UL)                    /*!< PC IER: PIE7 (Bit 14)                                       */
#define PC_IER_PIE7_Msk                       (0xc000UL)                /*!< PC IER: PIE7 (Bitfield-Mask: 0x03)                          */
#define PC_IER_PIE8_Pos                       (16UL)                    /*!< PC IER: PIE8 (Bit 16)                                       */
#define PC_IER_PIE8_Msk                       (0x30000UL)               /*!< PC IER: PIE8 (Bitfield-Mask: 0x03)                          */
#define PC_IER_PIE9_Pos                       (18UL)                    /*!< PC IER: PIE9 (Bit 18)                                       */
#define PC_IER_PIE9_Msk                       (0xc0000UL)               /*!< PC IER: PIE9 (Bitfield-Mask: 0x03)                          */
#define PC_IER_PIE10_Pos                      (20UL)                    /*!< PC IER: PIE10 (Bit 20)                                      */
#define PC_IER_PIE10_Msk                      (0x300000UL)              /*!< PC IER: PIE10 (Bitfield-Mask: 0x03)                         */
#define PC_IER_PIE11_Pos                      (22UL)                    /*!< PC IER: PIE11 (Bit 22)                                      */
#define PC_IER_PIE11_Msk                      (0xc00000UL)              /*!< PC IER: PIE11 (Bitfield-Mask: 0x03)                         */
#define PC_IER_PIE12_Pos                      (24UL)                    /*!< PC IER: PIE12 (Bit 24)                                      */
#define PC_IER_PIE12_Msk                      (0x3000000UL)             /*!< PC IER: PIE12 (Bitfield-Mask: 0x03)                         */
#define PC_IER_PIE13_Pos                      (26UL)                    /*!< PC IER: PIE13 (Bit 26)                                      */
#define PC_IER_PIE13_Msk                      (0xc000000UL)             /*!< PC IER: PIE13 (Bitfield-Mask: 0x03)                         */
#define PC_IER_PIE14_Pos                      (28UL)                    /*!< PC IER: PIE14 (Bit 28)                                      */
#define PC_IER_PIE14_Msk                      (0x30000000UL)            /*!< PC IER: PIE14 (Bitfield-Mask: 0x03)                         */
#define PC_IER_PIE15_Pos                      (30UL)                    /*!< PC IER: PIE15 (Bit 30)                                      */
#define PC_IER_PIE15_Msk                      (0xc0000000UL)            /*!< PC IER: PIE15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PC_ISR  ----------------------------------- */
#define PC_ISR_PIS0_Pos                       (0UL)                     /*!< PC ISR: PIS0 (Bit 0)                                        */
#define PC_ISR_PIS0_Msk                       (0x3UL)                   /*!< PC ISR: PIS0 (Bitfield-Mask: 0x03)                          */
#define PC_ISR_PIS1_Pos                       (2UL)                     /*!< PC ISR: PIS1 (Bit 2)                                        */
#define PC_ISR_PIS1_Msk                       (0xcUL)                   /*!< PC ISR: PIS1 (Bitfield-Mask: 0x03)                          */
#define PC_ISR_PIS2_Pos                       (4UL)                     /*!< PC ISR: PIS2 (Bit 4)                                        */
#define PC_ISR_PIS2_Msk                       (0x30UL)                  /*!< PC ISR: PIS2 (Bitfield-Mask: 0x03)                          */
#define PC_ISR_PIS3_Pos                       (6UL)                     /*!< PC ISR: PIS3 (Bit 6)                                        */
#define PC_ISR_PIS3_Msk                       (0xc0UL)                  /*!< PC ISR: PIS3 (Bitfield-Mask: 0x03)                          */
#define PC_ISR_PIS4_Pos                       (8UL)                     /*!< PC ISR: PIS4 (Bit 8)                                        */
#define PC_ISR_PIS4_Msk                       (0x300UL)                 /*!< PC ISR: PIS4 (Bitfield-Mask: 0x03)                          */
#define PC_ISR_PIS5_Pos                       (10UL)                    /*!< PC ISR: PIS5 (Bit 10)                                       */
#define PC_ISR_PIS5_Msk                       (0xc00UL)                 /*!< PC ISR: PIS5 (Bitfield-Mask: 0x03)                          */
#define PC_ISR_PIS6_Pos                       (12UL)                    /*!< PC ISR: PIS6 (Bit 12)                                       */
#define PC_ISR_PIS6_Msk                       (0x3000UL)                /*!< PC ISR: PIS6 (Bitfield-Mask: 0x03)                          */
#define PC_ISR_PIS7_Pos                       (14UL)                    /*!< PC ISR: PIS7 (Bit 14)                                       */
#define PC_ISR_PIS7_Msk                       (0xc000UL)                /*!< PC ISR: PIS7 (Bitfield-Mask: 0x03)                          */
#define PC_ISR_PIS8_Pos                       (16UL)                    /*!< PC ISR: PIS8 (Bit 16)                                       */
#define PC_ISR_PIS8_Msk                       (0x30000UL)               /*!< PC ISR: PIS8 (Bitfield-Mask: 0x03)                          */
#define PC_ISR_PIS9_Pos                       (18UL)                    /*!< PC ISR: PIS9 (Bit 18)                                       */
#define PC_ISR_PIS9_Msk                       (0xc0000UL)               /*!< PC ISR: PIS9 (Bitfield-Mask: 0x03)                          */
#define PC_ISR_PIS10_Pos                      (20UL)                    /*!< PC ISR: PIS10 (Bit 20)                                      */
#define PC_ISR_PIS10_Msk                      (0x300000UL)              /*!< PC ISR: PIS10 (Bitfield-Mask: 0x03)                         */
#define PC_ISR_PIS11_Pos                      (22UL)                    /*!< PC ISR: PIS11 (Bit 22)                                      */
#define PC_ISR_PIS11_Msk                      (0xc00000UL)              /*!< PC ISR: PIS11 (Bitfield-Mask: 0x03)                         */
#define PC_ISR_PIS12_Pos                      (24UL)                    /*!< PC ISR: PIS12 (Bit 24)                                      */
#define PC_ISR_PIS12_Msk                      (0x3000000UL)             /*!< PC ISR: PIS12 (Bitfield-Mask: 0x03)                         */
#define PC_ISR_PIS13_Pos                      (26UL)                    /*!< PC ISR: PIS13 (Bit 26)                                      */
#define PC_ISR_PIS13_Msk                      (0xc000000UL)             /*!< PC ISR: PIS13 (Bitfield-Mask: 0x03)                         */
#define PC_ISR_PIS14_Pos                      (28UL)                    /*!< PC ISR: PIS14 (Bit 28)                                      */
#define PC_ISR_PIS14_Msk                      (0x30000000UL)            /*!< PC ISR: PIS14 (Bitfield-Mask: 0x03)                         */
#define PC_ISR_PIS15_Pos                      (30UL)                    /*!< PC ISR: PIS15 (Bit 30)                                      */
#define PC_ISR_PIS15_Msk                      (0xc0000000UL)            /*!< PC ISR: PIS15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PC_ICR  ----------------------------------- */
#define PC_ICR_PIC0_Pos                       (0UL)                     /*!< PC ICR: PIC0 (Bit 0)                                        */
#define PC_ICR_PIC0_Msk                       (0x3UL)                   /*!< PC ICR: PIC0 (Bitfield-Mask: 0x03)                          */
#define PC_ICR_PIC1_Pos                       (2UL)                     /*!< PC ICR: PIC1 (Bit 2)                                        */
#define PC_ICR_PIC1_Msk                       (0xcUL)                   /*!< PC ICR: PIC1 (Bitfield-Mask: 0x03)                          */
#define PC_ICR_PIC2_Pos                       (4UL)                     /*!< PC ICR: PIC2 (Bit 4)                                        */
#define PC_ICR_PIC2_Msk                       (0x30UL)                  /*!< PC ICR: PIC2 (Bitfield-Mask: 0x03)                          */
#define PC_ICR_PIC3_Pos                       (6UL)                     /*!< PC ICR: PIC3 (Bit 6)                                        */
#define PC_ICR_PIC3_Msk                       (0xc0UL)                  /*!< PC ICR: PIC3 (Bitfield-Mask: 0x03)                          */
#define PC_ICR_PIC4_Pos                       (8UL)                     /*!< PC ICR: PIC4 (Bit 8)                                        */
#define PC_ICR_PIC4_Msk                       (0x300UL)                 /*!< PC ICR: PIC4 (Bitfield-Mask: 0x03)                          */
#define PC_ICR_PIC5_Pos                       (10UL)                    /*!< PC ICR: PIC5 (Bit 10)                                       */
#define PC_ICR_PIC5_Msk                       (0xc00UL)                 /*!< PC ICR: PIC5 (Bitfield-Mask: 0x03)                          */
#define PC_ICR_PIC6_Pos                       (12UL)                    /*!< PC ICR: PIC6 (Bit 12)                                       */
#define PC_ICR_PIC6_Msk                       (0x3000UL)                /*!< PC ICR: PIC6 (Bitfield-Mask: 0x03)                          */
#define PC_ICR_PIC7_Pos                       (14UL)                    /*!< PC ICR: PIC7 (Bit 14)                                       */
#define PC_ICR_PIC7_Msk                       (0xc000UL)                /*!< PC ICR: PIC7 (Bitfield-Mask: 0x03)                          */
#define PC_ICR_PIC8_Pos                       (16UL)                    /*!< PC ICR: PIC8 (Bit 16)                                       */
#define PC_ICR_PIC8_Msk                       (0x30000UL)               /*!< PC ICR: PIC8 (Bitfield-Mask: 0x03)                          */
#define PC_ICR_PIC9_Pos                       (18UL)                    /*!< PC ICR: PIC9 (Bit 18)                                       */
#define PC_ICR_PIC9_Msk                       (0xc0000UL)               /*!< PC ICR: PIC9 (Bitfield-Mask: 0x03)                          */
#define PC_ICR_PIC10_Pos                      (20UL)                    /*!< PC ICR: PIC10 (Bit 20)                                      */
#define PC_ICR_PIC10_Msk                      (0x300000UL)              /*!< PC ICR: PIC10 (Bitfield-Mask: 0x03)                         */
#define PC_ICR_PIC11_Pos                      (22UL)                    /*!< PC ICR: PIC11 (Bit 22)                                      */
#define PC_ICR_PIC11_Msk                      (0xc00000UL)              /*!< PC ICR: PIC11 (Bitfield-Mask: 0x03)                         */
#define PC_ICR_PIC12_Pos                      (24UL)                    /*!< PC ICR: PIC12 (Bit 24)                                      */
#define PC_ICR_PIC12_Msk                      (0x3000000UL)             /*!< PC ICR: PIC12 (Bitfield-Mask: 0x03)                         */
#define PC_ICR_PIC13_Pos                      (26UL)                    /*!< PC ICR: PIC13 (Bit 26)                                      */
#define PC_ICR_PIC13_Msk                      (0xc000000UL)             /*!< PC ICR: PIC13 (Bitfield-Mask: 0x03)                         */
#define PC_ICR_PIC14_Pos                      (28UL)                    /*!< PC ICR: PIC14 (Bit 28)                                      */
#define PC_ICR_PIC14_Msk                      (0x30000000UL)            /*!< PC ICR: PIC14 (Bitfield-Mask: 0x03)                         */
#define PC_ICR_PIC15_Pos                      (30UL)                    /*!< PC ICR: PIC15 (Bit 30)                                      */
#define PC_ICR_PIC15_Msk                      (0xc0000000UL)            /*!< PC ICR: PIC15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PC_ODR  ----------------------------------- */
#define PC_ODR_POD0_Pos                       (0UL)                     /*!< PC ODR: POD0 (Bit 0)                                        */
#define PC_ODR_POD0_Msk                       (0x1UL)                   /*!< PC ODR: POD0 (Bitfield-Mask: 0x01)                          */
#define PC_ODR_POD1_Pos                       (1UL)                     /*!< PC ODR: POD1 (Bit 1)                                        */
#define PC_ODR_POD1_Msk                       (0x2UL)                   /*!< PC ODR: POD1 (Bitfield-Mask: 0x01)                          */
#define PC_ODR_POD2_Pos                       (2UL)                     /*!< PC ODR: POD2 (Bit 2)                                        */
#define PC_ODR_POD2_Msk                       (0x4UL)                   /*!< PC ODR: POD2 (Bitfield-Mask: 0x01)                          */
#define PC_ODR_POD3_Pos                       (3UL)                     /*!< PC ODR: POD3 (Bit 3)                                        */
#define PC_ODR_POD3_Msk                       (0x8UL)                   /*!< PC ODR: POD3 (Bitfield-Mask: 0x01)                          */
#define PC_ODR_POD4_Pos                       (4UL)                     /*!< PC ODR: POD4 (Bit 4)                                        */
#define PC_ODR_POD4_Msk                       (0x10UL)                  /*!< PC ODR: POD4 (Bitfield-Mask: 0x01)                          */
#define PC_ODR_POD5_Pos                       (5UL)                     /*!< PC ODR: POD5 (Bit 5)                                        */
#define PC_ODR_POD5_Msk                       (0x20UL)                  /*!< PC ODR: POD5 (Bitfield-Mask: 0x01)                          */
#define PC_ODR_POD6_Pos                       (6UL)                     /*!< PC ODR: POD6 (Bit 6)                                        */
#define PC_ODR_POD6_Msk                       (0x40UL)                  /*!< PC ODR: POD6 (Bitfield-Mask: 0x01)                          */
#define PC_ODR_POD7_Pos                       (7UL)                     /*!< PC ODR: POD7 (Bit 7)                                        */
#define PC_ODR_POD7_Msk                       (0x80UL)                  /*!< PC ODR: POD7 (Bitfield-Mask: 0x01)                          */
#define PC_ODR_POD8_Pos                       (8UL)                     /*!< PC ODR: POD8 (Bit 8)                                        */
#define PC_ODR_POD8_Msk                       (0x100UL)                 /*!< PC ODR: POD8 (Bitfield-Mask: 0x01)                          */
#define PC_ODR_POD9_Pos                       (9UL)                     /*!< PC ODR: POD9 (Bit 9)                                        */
#define PC_ODR_POD9_Msk                       (0x200UL)                 /*!< PC ODR: POD9 (Bitfield-Mask: 0x01)                          */
#define PC_ODR_POD10_Pos                      (10UL)                    /*!< PC ODR: POD10 (Bit 10)                                      */
#define PC_ODR_POD10_Msk                      (0x400UL)                 /*!< PC ODR: POD10 (Bitfield-Mask: 0x01)                         */
#define PC_ODR_POD11_Pos                      (11UL)                    /*!< PC ODR: POD11 (Bit 11)                                      */
#define PC_ODR_POD11_Msk                      (0x800UL)                 /*!< PC ODR: POD11 (Bitfield-Mask: 0x01)                         */
#define PC_ODR_POD12_Pos                      (12UL)                    /*!< PC ODR: POD12 (Bit 12)                                      */
#define PC_ODR_POD12_Msk                      (0x1000UL)                /*!< PC ODR: POD12 (Bitfield-Mask: 0x01)                         */
#define PC_ODR_POD13_Pos                      (13UL)                    /*!< PC ODR: POD13 (Bit 13)                                      */
#define PC_ODR_POD13_Msk                      (0x2000UL)                /*!< PC ODR: POD13 (Bitfield-Mask: 0x01)                         */
#define PC_ODR_POD14_Pos                      (14UL)                    /*!< PC ODR: POD14 (Bit 14)                                      */
#define PC_ODR_POD14_Msk                      (0x4000UL)                /*!< PC ODR: POD14 (Bitfield-Mask: 0x01)                         */
#define PC_ODR_POD15_Pos                      (15UL)                    /*!< PC ODR: POD15 (Bit 15)                                      */
#define PC_ODR_POD15_Msk                      (0x8000UL)                /*!< PC ODR: POD15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PC_IDR  ----------------------------------- */
#define PC_IDR_PID0_Pos                       (0UL)                     /*!< PC IDR: PID0 (Bit 0)                                        */
#define PC_IDR_PID0_Msk                       (0x1UL)                   /*!< PC IDR: PID0 (Bitfield-Mask: 0x01)                          */
#define PC_IDR_PID1_Pos                       (1UL)                     /*!< PC IDR: PID1 (Bit 1)                                        */
#define PC_IDR_PID1_Msk                       (0x2UL)                   /*!< PC IDR: PID1 (Bitfield-Mask: 0x01)                          */
#define PC_IDR_PID2_Pos                       (2UL)                     /*!< PC IDR: PID2 (Bit 2)                                        */
#define PC_IDR_PID2_Msk                       (0x4UL)                   /*!< PC IDR: PID2 (Bitfield-Mask: 0x01)                          */
#define PC_IDR_PID3_Pos                       (3UL)                     /*!< PC IDR: PID3 (Bit 3)                                        */
#define PC_IDR_PID3_Msk                       (0x8UL)                   /*!< PC IDR: PID3 (Bitfield-Mask: 0x01)                          */
#define PC_IDR_PID4_Pos                       (4UL)                     /*!< PC IDR: PID4 (Bit 4)                                        */
#define PC_IDR_PID4_Msk                       (0x10UL)                  /*!< PC IDR: PID4 (Bitfield-Mask: 0x01)                          */
#define PC_IDR_PID5_Pos                       (5UL)                     /*!< PC IDR: PID5 (Bit 5)                                        */
#define PC_IDR_PID5_Msk                       (0x20UL)                  /*!< PC IDR: PID5 (Bitfield-Mask: 0x01)                          */
#define PC_IDR_PID6_Pos                       (6UL)                     /*!< PC IDR: PID6 (Bit 6)                                        */
#define PC_IDR_PID6_Msk                       (0x40UL)                  /*!< PC IDR: PID6 (Bitfield-Mask: 0x01)                          */
#define PC_IDR_PID7_Pos                       (7UL)                     /*!< PC IDR: PID7 (Bit 7)                                        */
#define PC_IDR_PID7_Msk                       (0x80UL)                  /*!< PC IDR: PID7 (Bitfield-Mask: 0x01)                          */
#define PC_IDR_PID8_Pos                       (8UL)                     /*!< PC IDR: PID8 (Bit 8)                                        */
#define PC_IDR_PID8_Msk                       (0x100UL)                 /*!< PC IDR: PID8 (Bitfield-Mask: 0x01)                          */
#define PC_IDR_PID9_Pos                       (9UL)                     /*!< PC IDR: PID9 (Bit 9)                                        */
#define PC_IDR_PID9_Msk                       (0x200UL)                 /*!< PC IDR: PID9 (Bitfield-Mask: 0x01)                          */
#define PC_IDR_PID10_Pos                      (10UL)                    /*!< PC IDR: PID10 (Bit 10)                                      */
#define PC_IDR_PID10_Msk                      (0x400UL)                 /*!< PC IDR: PID10 (Bitfield-Mask: 0x01)                         */
#define PC_IDR_PID11_Pos                      (11UL)                    /*!< PC IDR: PID11 (Bit 11)                                      */
#define PC_IDR_PID11_Msk                      (0x800UL)                 /*!< PC IDR: PID11 (Bitfield-Mask: 0x01)                         */
#define PC_IDR_PID12_Pos                      (12UL)                    /*!< PC IDR: PID12 (Bit 12)                                      */
#define PC_IDR_PID12_Msk                      (0x1000UL)                /*!< PC IDR: PID12 (Bitfield-Mask: 0x01)                         */
#define PC_IDR_PID13_Pos                      (13UL)                    /*!< PC IDR: PID13 (Bit 13)                                      */
#define PC_IDR_PID13_Msk                      (0x2000UL)                /*!< PC IDR: PID13 (Bitfield-Mask: 0x01)                         */
#define PC_IDR_PID14_Pos                      (14UL)                    /*!< PC IDR: PID14 (Bit 14)                                      */
#define PC_IDR_PID14_Msk                      (0x4000UL)                /*!< PC IDR: PID14 (Bitfield-Mask: 0x01)                         */
#define PC_IDR_PID15_Pos                      (15UL)                    /*!< PC IDR: PID15 (Bit 15)                                      */
#define PC_IDR_PID15_Msk                      (0x8000UL)                /*!< PC IDR: PID15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PC_BSR  ----------------------------------- */
#define PC_BSR_BSD0_Pos                       (0UL)                     /*!< PC BSR: BSD0 (Bit 0)                                        */
#define PC_BSR_BSD0_Msk                       (0x1UL)                   /*!< PC BSR: BSD0 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BSD1_Pos                       (1UL)                     /*!< PC BSR: BSD1 (Bit 1)                                        */
#define PC_BSR_BSD1_Msk                       (0x2UL)                   /*!< PC BSR: BSD1 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BSD2_Pos                       (2UL)                     /*!< PC BSR: BSD2 (Bit 2)                                        */
#define PC_BSR_BSD2_Msk                       (0x4UL)                   /*!< PC BSR: BSD2 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BSD3_Pos                       (3UL)                     /*!< PC BSR: BSD3 (Bit 3)                                        */
#define PC_BSR_BSD3_Msk                       (0x8UL)                   /*!< PC BSR: BSD3 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BSD4_Pos                       (4UL)                     /*!< PC BSR: BSD4 (Bit 4)                                        */
#define PC_BSR_BSD4_Msk                       (0x10UL)                  /*!< PC BSR: BSD4 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BSD5_Pos                       (5UL)                     /*!< PC BSR: BSD5 (Bit 5)                                        */
#define PC_BSR_BSD5_Msk                       (0x20UL)                  /*!< PC BSR: BSD5 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BSD6_Pos                       (6UL)                     /*!< PC BSR: BSD6 (Bit 6)                                        */
#define PC_BSR_BSD6_Msk                       (0x40UL)                  /*!< PC BSR: BSD6 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BSD7_Pos                       (7UL)                     /*!< PC BSR: BSD7 (Bit 7)                                        */
#define PC_BSR_BSD7_Msk                       (0x80UL)                  /*!< PC BSR: BSD7 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BSD8_Pos                       (8UL)                     /*!< PC BSR: BSD8 (Bit 8)                                        */
#define PC_BSR_BSD8_Msk                       (0x100UL)                 /*!< PC BSR: BSD8 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BSD9_Pos                       (9UL)                     /*!< PC BSR: BSD9 (Bit 9)                                        */
#define PC_BSR_BSD9_Msk                       (0x200UL)                 /*!< PC BSR: BSD9 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BSD10_Pos                      (10UL)                    /*!< PC BSR: BSD10 (Bit 10)                                      */
#define PC_BSR_BSD10_Msk                      (0x400UL)                 /*!< PC BSR: BSD10 (Bitfield-Mask: 0x01)                         */
#define PC_BSR_BSD11_Pos                      (11UL)                    /*!< PC BSR: BSD11 (Bit 11)                                      */
#define PC_BSR_BSD11_Msk                      (0x800UL)                 /*!< PC BSR: BSD11 (Bitfield-Mask: 0x01)                         */
#define PC_BSR_BSD12_Pos                      (12UL)                    /*!< PC BSR: BSD12 (Bit 12)                                      */
#define PC_BSR_BSD12_Msk                      (0x1000UL)                /*!< PC BSR: BSD12 (Bitfield-Mask: 0x01)                         */
#define PC_BSR_BSD13_Pos                      (13UL)                    /*!< PC BSR: BSD13 (Bit 13)                                      */
#define PC_BSR_BSD13_Msk                      (0x2000UL)                /*!< PC BSR: BSD13 (Bitfield-Mask: 0x01)                         */
#define PC_BSR_BSD14_Pos                      (14UL)                    /*!< PC BSR: BSD14 (Bit 14)                                      */
#define PC_BSR_BSD14_Msk                      (0x4000UL)                /*!< PC BSR: BSD14 (Bitfield-Mask: 0x01)                         */
#define PC_BSR_BSD15_Pos                      (15UL)                    /*!< PC BSR: BSD15 (Bit 15)                                      */
#define PC_BSR_BSD15_Msk                      (0x8000UL)                /*!< PC BSR: BSD15 (Bitfield-Mask: 0x01)                         */
#define PC_BSR_BCD0_Pos                       (16UL)                    /*!< PC BSR: BCD0 (Bit 16)                                       */
#define PC_BSR_BCD0_Msk                       (0x10000UL)               /*!< PC BSR: BCD0 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BCD1_Pos                       (17UL)                    /*!< PC BSR: BCD1 (Bit 17)                                       */
#define PC_BSR_BCD1_Msk                       (0x20000UL)               /*!< PC BSR: BCD1 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BCD2_Pos                       (18UL)                    /*!< PC BSR: BCD2 (Bit 18)                                       */
#define PC_BSR_BCD2_Msk                       (0x40000UL)               /*!< PC BSR: BCD2 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BCD3_Pos                       (19UL)                    /*!< PC BSR: BCD3 (Bit 19)                                       */
#define PC_BSR_BCD3_Msk                       (0x80000UL)               /*!< PC BSR: BCD3 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BCD4_Pos                       (20UL)                    /*!< PC BSR: BCD4 (Bit 20)                                       */
#define PC_BSR_BCD4_Msk                       (0x100000UL)              /*!< PC BSR: BCD4 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BCD5_Pos                       (21UL)                    /*!< PC BSR: BCD5 (Bit 21)                                       */
#define PC_BSR_BCD5_Msk                       (0x200000UL)              /*!< PC BSR: BCD5 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BCD6_Pos                       (22UL)                    /*!< PC BSR: BCD6 (Bit 22)                                       */
#define PC_BSR_BCD6_Msk                       (0x400000UL)              /*!< PC BSR: BCD6 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BCD7_Pos                       (23UL)                    /*!< PC BSR: BCD7 (Bit 23)                                       */
#define PC_BSR_BCD7_Msk                       (0x800000UL)              /*!< PC BSR: BCD7 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BCD8_Pos                       (24UL)                    /*!< PC BSR: BCD8 (Bit 24)                                       */
#define PC_BSR_BCD8_Msk                       (0x1000000UL)             /*!< PC BSR: BCD8 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BCD9_Pos                       (25UL)                    /*!< PC BSR: BCD9 (Bit 25)                                       */
#define PC_BSR_BCD9_Msk                       (0x2000000UL)             /*!< PC BSR: BCD9 (Bitfield-Mask: 0x01)                          */
#define PC_BSR_BCD10_Pos                      (26UL)                    /*!< PC BSR: BCD10 (Bit 26)                                      */
#define PC_BSR_BCD10_Msk                      (0x4000000UL)             /*!< PC BSR: BCD10 (Bitfield-Mask: 0x01)                         */
#define PC_BSR_BCD11_Pos                      (27UL)                    /*!< PC BSR: BCD11 (Bit 27)                                      */
#define PC_BSR_BCD11_Msk                      (0x8000000UL)             /*!< PC BSR: BCD11 (Bitfield-Mask: 0x01)                         */
#define PC_BSR_BCD12_Pos                      (28UL)                    /*!< PC BSR: BCD12 (Bit 28)                                      */
#define PC_BSR_BCD12_Msk                      (0x10000000UL)            /*!< PC BSR: BCD12 (Bitfield-Mask: 0x01)                         */
#define PC_BSR_BCD13_Pos                      (29UL)                    /*!< PC BSR: BCD13 (Bit 29)                                      */
#define PC_BSR_BCD13_Msk                      (0x20000000UL)            /*!< PC BSR: BCD13 (Bitfield-Mask: 0x01)                         */
#define PC_BSR_BCD14_Pos                      (30UL)                    /*!< PC BSR: BCD14 (Bit 30)                                      */
#define PC_BSR_BCD14_Msk                      (0x40000000UL)            /*!< PC BSR: BCD14 (Bitfield-Mask: 0x01)                         */
#define PC_BSR_BCD15_Pos                      (31UL)                    /*!< PC BSR: BCD15 (Bit 31)                                      */
#define PC_BSR_BCD15_Msk                      (0x80000000UL)            /*!< PC BSR: BCD15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PC_BCR  ----------------------------------- */
#define PC_BCR_BCD0_Pos                       (0UL)                     /*!< PC BCR: BCD0 (Bit 0)                                        */
#define PC_BCR_BCD0_Msk                       (0x1UL)                   /*!< PC BCR: BCD0 (Bitfield-Mask: 0x01)                          */
#define PC_BCR_BCD1_Pos                       (1UL)                     /*!< PC BCR: BCD1 (Bit 1)                                        */
#define PC_BCR_BCD1_Msk                       (0x2UL)                   /*!< PC BCR: BCD1 (Bitfield-Mask: 0x01)                          */
#define PC_BCR_BCD2_Pos                       (2UL)                     /*!< PC BCR: BCD2 (Bit 2)                                        */
#define PC_BCR_BCD2_Msk                       (0x4UL)                   /*!< PC BCR: BCD2 (Bitfield-Mask: 0x01)                          */
#define PC_BCR_BCD3_Pos                       (3UL)                     /*!< PC BCR: BCD3 (Bit 3)                                        */
#define PC_BCR_BCD3_Msk                       (0x8UL)                   /*!< PC BCR: BCD3 (Bitfield-Mask: 0x01)                          */
#define PC_BCR_BCD4_Pos                       (4UL)                     /*!< PC BCR: BCD4 (Bit 4)                                        */
#define PC_BCR_BCD4_Msk                       (0x10UL)                  /*!< PC BCR: BCD4 (Bitfield-Mask: 0x01)                          */
#define PC_BCR_BCD5_Pos                       (5UL)                     /*!< PC BCR: BCD5 (Bit 5)                                        */
#define PC_BCR_BCD5_Msk                       (0x20UL)                  /*!< PC BCR: BCD5 (Bitfield-Mask: 0x01)                          */
#define PC_BCR_BCD6_Pos                       (6UL)                     /*!< PC BCR: BCD6 (Bit 6)                                        */
#define PC_BCR_BCD6_Msk                       (0x40UL)                  /*!< PC BCR: BCD6 (Bitfield-Mask: 0x01)                          */
#define PC_BCR_BCD7_Pos                       (7UL)                     /*!< PC BCR: BCD7 (Bit 7)                                        */
#define PC_BCR_BCD7_Msk                       (0x80UL)                  /*!< PC BCR: BCD7 (Bitfield-Mask: 0x01)                          */
#define PC_BCR_BCD8_Pos                       (8UL)                     /*!< PC BCR: BCD8 (Bit 8)                                        */
#define PC_BCR_BCD8_Msk                       (0x100UL)                 /*!< PC BCR: BCD8 (Bitfield-Mask: 0x01)                          */
#define PC_BCR_BCD9_Pos                       (9UL)                     /*!< PC BCR: BCD9 (Bit 9)                                        */
#define PC_BCR_BCD9_Msk                       (0x200UL)                 /*!< PC BCR: BCD9 (Bitfield-Mask: 0x01)                          */
#define PC_BCR_BCD10_Pos                      (10UL)                    /*!< PC BCR: BCD10 (Bit 10)                                      */
#define PC_BCR_BCD10_Msk                      (0x400UL)                 /*!< PC BCR: BCD10 (Bitfield-Mask: 0x01)                         */
#define PC_BCR_BCD11_Pos                      (11UL)                    /*!< PC BCR: BCD11 (Bit 11)                                      */
#define PC_BCR_BCD11_Msk                      (0x800UL)                 /*!< PC BCR: BCD11 (Bitfield-Mask: 0x01)                         */
#define PC_BCR_BCD12_Pos                      (12UL)                    /*!< PC BCR: BCD12 (Bit 12)                                      */
#define PC_BCR_BCD12_Msk                      (0x1000UL)                /*!< PC BCR: BCD12 (Bitfield-Mask: 0x01)                         */
#define PC_BCR_BCD13_Pos                      (13UL)                    /*!< PC BCR: BCD13 (Bit 13)                                      */
#define PC_BCR_BCD13_Msk                      (0x2000UL)                /*!< PC BCR: BCD13 (Bitfield-Mask: 0x01)                         */
#define PC_BCR_BCD14_Pos                      (14UL)                    /*!< PC BCR: BCD14 (Bit 14)                                      */
#define PC_BCR_BCD14_Msk                      (0x4000UL)                /*!< PC BCR: BCD14 (Bitfield-Mask: 0x01)                         */
#define PC_BCR_BCD15_Pos                      (15UL)                    /*!< PC BCR: BCD15 (Bit 15)                                      */
#define PC_BCR_BCD15_Msk                      (0x8000UL)                /*!< PC BCR: BCD15 (Bitfield-Mask: 0x01)                         */


/* ================================================================================ */
/* ================           struct 'PD' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  PD_MR1  ----------------------------------- */
#define PD_MR1_P0MUX_Pos                      (0UL)                     /*!< PD MR1: P0MUX (Bit 0)                                       */
#define PD_MR1_P0MUX_Msk                      (0x7UL)                   /*!< PD MR1: P0MUX (Bitfield-Mask: 0x07)                         */
#define PD_MR1_P1MUX_Pos                      (4UL)                     /*!< PD MR1: P1MUX (Bit 4)                                       */
#define PD_MR1_P1MUX_Msk                      (0x70UL)                  /*!< PD MR1: P1MUX (Bitfield-Mask: 0x07)                         */
#define PD_MR1_P2MUX_Pos                      (8UL)                     /*!< PD MR1: P2MUX (Bit 8)                                       */
#define PD_MR1_P2MUX_Msk                      (0x700UL)                 /*!< PD MR1: P2MUX (Bitfield-Mask: 0x07)                         */
#define PD_MR1_P3MUX_Pos                      (12UL)                    /*!< PD MR1: P3MUX (Bit 12)                                      */
#define PD_MR1_P3MUX_Msk                      (0x7000UL)                /*!< PD MR1: P3MUX (Bitfield-Mask: 0x07)                         */
#define PD_MR1_P4MUX_Pos                      (16UL)                    /*!< PD MR1: P4MUX (Bit 16)                                      */
#define PD_MR1_P4MUX_Msk                      (0x70000UL)               /*!< PD MR1: P4MUX (Bitfield-Mask: 0x07)                         */
#define PD_MR1_P5MUX_Pos                      (20UL)                    /*!< PD MR1: P5MUX (Bit 20)                                      */
#define PD_MR1_P5MUX_Msk                      (0x700000UL)              /*!< PD MR1: P5MUX (Bitfield-Mask: 0x07)                         */
#define PD_MR1_P6MUX_Pos                      (24UL)                    /*!< PD MR1: P6MUX (Bit 24)                                      */
#define PD_MR1_P6MUX_Msk                      (0x7000000UL)             /*!< PD MR1: P6MUX (Bitfield-Mask: 0x07)                         */
#define PD_MR1_P7MUX_Pos                      (28UL)                    /*!< PD MR1: P7MUX (Bit 28)                                      */
#define PD_MR1_P7MUX_Msk                      (0x70000000UL)            /*!< PD MR1: P7MUX (Bitfield-Mask: 0x07)                         */

/* -----------------------------------  PD_MR2  ----------------------------------- */
#define PD_MR2_P8MUX_Pos                      (0UL)                     /*!< PD MR2: P8MUX (Bit 0)                                       */
#define PD_MR2_P8MUX_Msk                      (0x7UL)                   /*!< PD MR2: P8MUX (Bitfield-Mask: 0x07)                         */
#define PD_MR2_P9MUX_Pos                      (4UL)                     /*!< PD MR2: P9MUX (Bit 4)                                       */
#define PD_MR2_P9MUX_Msk                      (0x70UL)                  /*!< PD MR2: P9MUX (Bitfield-Mask: 0x07)                         */
#define PD_MR2_P10MUX_Pos                     (8UL)                     /*!< PD MR2: P10MUX (Bit 8)                                      */
#define PD_MR2_P10MUX_Msk                     (0x700UL)                 /*!< PD MR2: P10MUX (Bitfield-Mask: 0x07)                        */
#define PD_MR2_P11MUX_Pos                     (12UL)                    /*!< PD MR2: P11MUX (Bit 12)                                     */
#define PD_MR2_P11MUX_Msk                     (0x7000UL)                /*!< PD MR2: P11MUX (Bitfield-Mask: 0x07)                        */
#define PD_MR2_P12MUX_Pos                     (16UL)                    /*!< PD MR2: P12MUX (Bit 16)                                     */
#define PD_MR2_P12MUX_Msk                     (0x70000UL)               /*!< PD MR2: P12MUX (Bitfield-Mask: 0x07)                        */
#define PD_MR2_P13MUX_Pos                     (20UL)                    /*!< PD MR2: P13MUX (Bit 20)                                     */
#define PD_MR2_P13MUX_Msk                     (0x700000UL)              /*!< PD MR2: P13MUX (Bitfield-Mask: 0x07)                        */
#define PD_MR2_P14MUX_Pos                     (24UL)                    /*!< PD MR2: P14MUX (Bit 24)                                     */
#define PD_MR2_P14MUX_Msk                     (0x7000000UL)             /*!< PD MR2: P14MUX (Bitfield-Mask: 0x07)                        */
#define PD_MR2_P15MUX_Pos                     (28UL)                    /*!< PD MR2: P15MUX (Bit 28)                                     */
#define PD_MR2_P15MUX_Msk                     (0x70000000UL)            /*!< PD MR2: P15MUX (Bitfield-Mask: 0x07)                        */

/* ------------------------------------  PD_CR  ----------------------------------- */
#define PD_CR_P0_Pos                          (0UL)                     /*!< PD CR: P0 (Bit 0)                                           */
#define PD_CR_P0_Msk                          (0x3UL)                   /*!< PD CR: P0 (Bitfield-Mask: 0x03)                             */
#define PD_CR_P1_Pos                          (2UL)                     /*!< PD CR: P1 (Bit 2)                                           */
#define PD_CR_P1_Msk                          (0xcUL)                   /*!< PD CR: P1 (Bitfield-Mask: 0x03)                             */
#define PD_CR_P2_Pos                          (4UL)                     /*!< PD CR: P2 (Bit 4)                                           */
#define PD_CR_P2_Msk                          (0x30UL)                  /*!< PD CR: P2 (Bitfield-Mask: 0x03)                             */
#define PD_CR_P3_Pos                          (6UL)                     /*!< PD CR: P3 (Bit 6)                                           */
#define PD_CR_P3_Msk                          (0xc0UL)                  /*!< PD CR: P3 (Bitfield-Mask: 0x03)                             */
#define PD_CR_P4_Pos                          (8UL)                     /*!< PD CR: P4 (Bit 8)                                           */
#define PD_CR_P4_Msk                          (0x300UL)                 /*!< PD CR: P4 (Bitfield-Mask: 0x03)                             */
#define PD_CR_P5_Pos                          (10UL)                    /*!< PD CR: P5 (Bit 10)                                          */
#define PD_CR_P5_Msk                          (0xc00UL)                 /*!< PD CR: P5 (Bitfield-Mask: 0x03)                             */
#define PD_CR_P6_Pos                          (12UL)                    /*!< PD CR: P6 (Bit 12)                                          */
#define PD_CR_P6_Msk                          (0x3000UL)                /*!< PD CR: P6 (Bitfield-Mask: 0x03)                             */
#define PD_CR_P7_Pos                          (14UL)                    /*!< PD CR: P7 (Bit 14)                                          */
#define PD_CR_P7_Msk                          (0xc000UL)                /*!< PD CR: P7 (Bitfield-Mask: 0x03)                             */
#define PD_CR_P8_Pos                          (16UL)                    /*!< PD CR: P8 (Bit 16)                                          */
#define PD_CR_P8_Msk                          (0x30000UL)               /*!< PD CR: P8 (Bitfield-Mask: 0x03)                             */
#define PD_CR_P9_Pos                          (18UL)                    /*!< PD CR: P9 (Bit 18)                                          */
#define PD_CR_P9_Msk                          (0xc0000UL)               /*!< PD CR: P9 (Bitfield-Mask: 0x03)                             */
#define PD_CR_P10_Pos                         (20UL)                    /*!< PD CR: P10 (Bit 20)                                         */
#define PD_CR_P10_Msk                         (0x300000UL)              /*!< PD CR: P10 (Bitfield-Mask: 0x03)                            */
#define PD_CR_P11_Pos                         (22UL)                    /*!< PD CR: P11 (Bit 22)                                         */
#define PD_CR_P11_Msk                         (0xc00000UL)              /*!< PD CR: P11 (Bitfield-Mask: 0x03)                            */
#define PD_CR_P12_Pos                         (24UL)                    /*!< PD CR: P12 (Bit 24)                                         */
#define PD_CR_P12_Msk                         (0x3000000UL)             /*!< PD CR: P12 (Bitfield-Mask: 0x03)                            */
#define PD_CR_P13_Pos                         (26UL)                    /*!< PD CR: P13 (Bit 26)                                         */
#define PD_CR_P13_Msk                         (0xc000000UL)             /*!< PD CR: P13 (Bitfield-Mask: 0x03)                            */
#define PD_CR_P14_Pos                         (28UL)                    /*!< PD CR: P14 (Bit 28)                                         */
#define PD_CR_P14_Msk                         (0x30000000UL)            /*!< PD CR: P14 (Bitfield-Mask: 0x03)                            */
#define PD_CR_P15_Pos                         (30UL)                    /*!< PD CR: P15 (Bit 30)                                         */
#define PD_CR_P15_Msk                         (0xc0000000UL)            /*!< PD CR: P15 (Bitfield-Mask: 0x03)                            */

/* -----------------------------------  PD_PRCR  ---------------------------------- */
#define PD_PRCR_PUE0_Pos                      (0UL)                     /*!< PD PRCR: PUE0 (Bit 0)                                       */
#define PD_PRCR_PUE0_Msk                      (0x3UL)                   /*!< PD PRCR: PUE0 (Bitfield-Mask: 0x03)                         */
#define PD_PRCR_PUE1_Pos                      (2UL)                     /*!< PD PRCR: PUE1 (Bit 2)                                       */
#define PD_PRCR_PUE1_Msk                      (0xcUL)                   /*!< PD PRCR: PUE1 (Bitfield-Mask: 0x03)                         */
#define PD_PRCR_PUE2_Pos                      (4UL)                     /*!< PD PRCR: PUE2 (Bit 4)                                       */
#define PD_PRCR_PUE2_Msk                      (0x30UL)                  /*!< PD PRCR: PUE2 (Bitfield-Mask: 0x03)                         */
#define PD_PRCR_PUE3_Pos                      (6UL)                     /*!< PD PRCR: PUE3 (Bit 6)                                       */
#define PD_PRCR_PUE3_Msk                      (0xc0UL)                  /*!< PD PRCR: PUE3 (Bitfield-Mask: 0x03)                         */
#define PD_PRCR_PUE4_Pos                      (8UL)                     /*!< PD PRCR: PUE4 (Bit 8)                                       */
#define PD_PRCR_PUE4_Msk                      (0x300UL)                 /*!< PD PRCR: PUE4 (Bitfield-Mask: 0x03)                         */
#define PD_PRCR_PUE5_Pos                      (10UL)                    /*!< PD PRCR: PUE5 (Bit 10)                                      */
#define PD_PRCR_PUE5_Msk                      (0xc00UL)                 /*!< PD PRCR: PUE5 (Bitfield-Mask: 0x03)                         */
#define PD_PRCR_PUE6_Pos                      (12UL)                    /*!< PD PRCR: PUE6 (Bit 12)                                      */
#define PD_PRCR_PUE6_Msk                      (0x3000UL)                /*!< PD PRCR: PUE6 (Bitfield-Mask: 0x03)                         */
#define PD_PRCR_PUE7_Pos                      (14UL)                    /*!< PD PRCR: PUE7 (Bit 14)                                      */
#define PD_PRCR_PUE7_Msk                      (0xc000UL)                /*!< PD PRCR: PUE7 (Bitfield-Mask: 0x03)                         */
#define PD_PRCR_PUE8_Pos                      (16UL)                    /*!< PD PRCR: PUE8 (Bit 16)                                      */
#define PD_PRCR_PUE8_Msk                      (0x30000UL)               /*!< PD PRCR: PUE8 (Bitfield-Mask: 0x03)                         */
#define PD_PRCR_PUE9_Pos                      (18UL)                    /*!< PD PRCR: PUE9 (Bit 18)                                      */
#define PD_PRCR_PUE9_Msk                      (0xc0000UL)               /*!< PD PRCR: PUE9 (Bitfield-Mask: 0x03)                         */
#define PD_PRCR_PUE10_Pos                     (20UL)                    /*!< PD PRCR: PUE10 (Bit 20)                                     */
#define PD_PRCR_PUE10_Msk                     (0x300000UL)              /*!< PD PRCR: PUE10 (Bitfield-Mask: 0x03)                        */
#define PD_PRCR_PUE11_Pos                     (22UL)                    /*!< PD PRCR: PUE11 (Bit 22)                                     */
#define PD_PRCR_PUE11_Msk                     (0xc00000UL)              /*!< PD PRCR: PUE11 (Bitfield-Mask: 0x03)                        */
#define PD_PRCR_PUE12_Pos                     (24UL)                    /*!< PD PRCR: PUE12 (Bit 24)                                     */
#define PD_PRCR_PUE12_Msk                     (0x3000000UL)             /*!< PD PRCR: PUE12 (Bitfield-Mask: 0x03)                        */
#define PD_PRCR_PUE13_Pos                     (26UL)                    /*!< PD PRCR: PUE13 (Bit 26)                                     */
#define PD_PRCR_PUE13_Msk                     (0xc000000UL)             /*!< PD PRCR: PUE13 (Bitfield-Mask: 0x03)                        */
#define PD_PRCR_PUE14_Pos                     (28UL)                    /*!< PD PRCR: PUE14 (Bit 28)                                     */
#define PD_PRCR_PUE14_Msk                     (0x30000000UL)            /*!< PD PRCR: PUE14 (Bitfield-Mask: 0x03)                        */
#define PD_PRCR_PUE15_Pos                     (30UL)                    /*!< PD PRCR: PUE15 (Bit 30)                                     */
#define PD_PRCR_PUE15_Msk                     (0xc0000000UL)            /*!< PD PRCR: PUE15 (Bitfield-Mask: 0x03)                        */

/* -----------------------------------  PD_DER  ----------------------------------- */
#define PD_DER_PDE0_Pos                       (0UL)                     /*!< PD DER: PDE0 (Bit 0)                                        */
#define PD_DER_PDE0_Msk                       (0x1UL)                   /*!< PD DER: PDE0 (Bitfield-Mask: 0x01)                          */
#define PD_DER_PDE1_Pos                       (1UL)                     /*!< PD DER: PDE1 (Bit 1)                                        */
#define PD_DER_PDE1_Msk                       (0x2UL)                   /*!< PD DER: PDE1 (Bitfield-Mask: 0x01)                          */
#define PD_DER_PDE2_Pos                       (2UL)                     /*!< PD DER: PDE2 (Bit 2)                                        */
#define PD_DER_PDE2_Msk                       (0x4UL)                   /*!< PD DER: PDE2 (Bitfield-Mask: 0x01)                          */
#define PD_DER_PDE3_Pos                       (3UL)                     /*!< PD DER: PDE3 (Bit 3)                                        */
#define PD_DER_PDE3_Msk                       (0x8UL)                   /*!< PD DER: PDE3 (Bitfield-Mask: 0x01)                          */
#define PD_DER_PDE4_Pos                       (4UL)                     /*!< PD DER: PDE4 (Bit 4)                                        */
#define PD_DER_PDE4_Msk                       (0x10UL)                  /*!< PD DER: PDE4 (Bitfield-Mask: 0x01)                          */
#define PD_DER_PDE5_Pos                       (5UL)                     /*!< PD DER: PDE5 (Bit 5)                                        */
#define PD_DER_PDE5_Msk                       (0x20UL)                  /*!< PD DER: PDE5 (Bitfield-Mask: 0x01)                          */
#define PD_DER_PDE6_Pos                       (6UL)                     /*!< PD DER: PDE6 (Bit 6)                                        */
#define PD_DER_PDE6_Msk                       (0x40UL)                  /*!< PD DER: PDE6 (Bitfield-Mask: 0x01)                          */
#define PD_DER_PDE7_Pos                       (7UL)                     /*!< PD DER: PDE7 (Bit 7)                                        */
#define PD_DER_PDE7_Msk                       (0x80UL)                  /*!< PD DER: PDE7 (Bitfield-Mask: 0x01)                          */
#define PD_DER_PDE8_Pos                       (8UL)                     /*!< PD DER: PDE8 (Bit 8)                                        */
#define PD_DER_PDE8_Msk                       (0x100UL)                 /*!< PD DER: PDE8 (Bitfield-Mask: 0x01)                          */
#define PD_DER_PDE9_Pos                       (9UL)                     /*!< PD DER: PDE9 (Bit 9)                                        */
#define PD_DER_PDE9_Msk                       (0x200UL)                 /*!< PD DER: PDE9 (Bitfield-Mask: 0x01)                          */
#define PD_DER_PDE10_Pos                      (10UL)                    /*!< PD DER: PDE10 (Bit 10)                                      */
#define PD_DER_PDE10_Msk                      (0x400UL)                 /*!< PD DER: PDE10 (Bitfield-Mask: 0x01)                         */
#define PD_DER_PDE11_Pos                      (11UL)                    /*!< PD DER: PDE11 (Bit 11)                                      */
#define PD_DER_PDE11_Msk                      (0x800UL)                 /*!< PD DER: PDE11 (Bitfield-Mask: 0x01)                         */
#define PD_DER_PDE12_Pos                      (12UL)                    /*!< PD DER: PDE12 (Bit 12)                                      */
#define PD_DER_PDE12_Msk                      (0x1000UL)                /*!< PD DER: PDE12 (Bitfield-Mask: 0x01)                         */
#define PD_DER_PDE13_Pos                      (13UL)                    /*!< PD DER: PDE13 (Bit 13)                                      */
#define PD_DER_PDE13_Msk                      (0x2000UL)                /*!< PD DER: PDE13 (Bitfield-Mask: 0x01)                         */
#define PD_DER_PDE14_Pos                      (14UL)                    /*!< PD DER: PDE14 (Bit 14)                                      */
#define PD_DER_PDE14_Msk                      (0x4000UL)                /*!< PD DER: PDE14 (Bitfield-Mask: 0x01)                         */
#define PD_DER_PDE15_Pos                      (15UL)                    /*!< PD DER: PDE15 (Bit 15)                                      */
#define PD_DER_PDE15_Msk                      (0x8000UL)                /*!< PD DER: PDE15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PD_IER  ----------------------------------- */
#define PD_IER_PIE0_Pos                       (0UL)                     /*!< PD IER: PIE0 (Bit 0)                                        */
#define PD_IER_PIE0_Msk                       (0x3UL)                   /*!< PD IER: PIE0 (Bitfield-Mask: 0x03)                          */
#define PD_IER_PIE1_Pos                       (2UL)                     /*!< PD IER: PIE1 (Bit 2)                                        */
#define PD_IER_PIE1_Msk                       (0xcUL)                   /*!< PD IER: PIE1 (Bitfield-Mask: 0x03)                          */
#define PD_IER_PIE2_Pos                       (4UL)                     /*!< PD IER: PIE2 (Bit 4)                                        */
#define PD_IER_PIE2_Msk                       (0x30UL)                  /*!< PD IER: PIE2 (Bitfield-Mask: 0x03)                          */
#define PD_IER_PIE3_Pos                       (6UL)                     /*!< PD IER: PIE3 (Bit 6)                                        */
#define PD_IER_PIE3_Msk                       (0xc0UL)                  /*!< PD IER: PIE3 (Bitfield-Mask: 0x03)                          */
#define PD_IER_PIE4_Pos                       (8UL)                     /*!< PD IER: PIE4 (Bit 8)                                        */
#define PD_IER_PIE4_Msk                       (0x300UL)                 /*!< PD IER: PIE4 (Bitfield-Mask: 0x03)                          */
#define PD_IER_PIE5_Pos                       (10UL)                    /*!< PD IER: PIE5 (Bit 10)                                       */
#define PD_IER_PIE5_Msk                       (0xc00UL)                 /*!< PD IER: PIE5 (Bitfield-Mask: 0x03)                          */
#define PD_IER_PIE6_Pos                       (12UL)                    /*!< PD IER: PIE6 (Bit 12)                                       */
#define PD_IER_PIE6_Msk                       (0x3000UL)                /*!< PD IER: PIE6 (Bitfield-Mask: 0x03)                          */
#define PD_IER_PIE7_Pos                       (14UL)                    /*!< PD IER: PIE7 (Bit 14)                                       */
#define PD_IER_PIE7_Msk                       (0xc000UL)                /*!< PD IER: PIE7 (Bitfield-Mask: 0x03)                          */
#define PD_IER_PIE8_Pos                       (16UL)                    /*!< PD IER: PIE8 (Bit 16)                                       */
#define PD_IER_PIE8_Msk                       (0x30000UL)               /*!< PD IER: PIE8 (Bitfield-Mask: 0x03)                          */
#define PD_IER_PIE9_Pos                       (18UL)                    /*!< PD IER: PIE9 (Bit 18)                                       */
#define PD_IER_PIE9_Msk                       (0xc0000UL)               /*!< PD IER: PIE9 (Bitfield-Mask: 0x03)                          */
#define PD_IER_PIE10_Pos                      (20UL)                    /*!< PD IER: PIE10 (Bit 20)                                      */
#define PD_IER_PIE10_Msk                      (0x300000UL)              /*!< PD IER: PIE10 (Bitfield-Mask: 0x03)                         */
#define PD_IER_PIE11_Pos                      (22UL)                    /*!< PD IER: PIE11 (Bit 22)                                      */
#define PD_IER_PIE11_Msk                      (0xc00000UL)              /*!< PD IER: PIE11 (Bitfield-Mask: 0x03)                         */
#define PD_IER_PIE12_Pos                      (24UL)                    /*!< PD IER: PIE12 (Bit 24)                                      */
#define PD_IER_PIE12_Msk                      (0x3000000UL)             /*!< PD IER: PIE12 (Bitfield-Mask: 0x03)                         */
#define PD_IER_PIE13_Pos                      (26UL)                    /*!< PD IER: PIE13 (Bit 26)                                      */
#define PD_IER_PIE13_Msk                      (0xc000000UL)             /*!< PD IER: PIE13 (Bitfield-Mask: 0x03)                         */
#define PD_IER_PIE14_Pos                      (28UL)                    /*!< PD IER: PIE14 (Bit 28)                                      */
#define PD_IER_PIE14_Msk                      (0x30000000UL)            /*!< PD IER: PIE14 (Bitfield-Mask: 0x03)                         */
#define PD_IER_PIE15_Pos                      (30UL)                    /*!< PD IER: PIE15 (Bit 30)                                      */
#define PD_IER_PIE15_Msk                      (0xc0000000UL)            /*!< PD IER: PIE15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PD_ISR  ----------------------------------- */
#define PD_ISR_PIS0_Pos                       (0UL)                     /*!< PD ISR: PIS0 (Bit 0)                                        */
#define PD_ISR_PIS0_Msk                       (0x3UL)                   /*!< PD ISR: PIS0 (Bitfield-Mask: 0x03)                          */
#define PD_ISR_PIS1_Pos                       (2UL)                     /*!< PD ISR: PIS1 (Bit 2)                                        */
#define PD_ISR_PIS1_Msk                       (0xcUL)                   /*!< PD ISR: PIS1 (Bitfield-Mask: 0x03)                          */
#define PD_ISR_PIS2_Pos                       (4UL)                     /*!< PD ISR: PIS2 (Bit 4)                                        */
#define PD_ISR_PIS2_Msk                       (0x30UL)                  /*!< PD ISR: PIS2 (Bitfield-Mask: 0x03)                          */
#define PD_ISR_PIS3_Pos                       (6UL)                     /*!< PD ISR: PIS3 (Bit 6)                                        */
#define PD_ISR_PIS3_Msk                       (0xc0UL)                  /*!< PD ISR: PIS3 (Bitfield-Mask: 0x03)                          */
#define PD_ISR_PIS4_Pos                       (8UL)                     /*!< PD ISR: PIS4 (Bit 8)                                        */
#define PD_ISR_PIS4_Msk                       (0x300UL)                 /*!< PD ISR: PIS4 (Bitfield-Mask: 0x03)                          */
#define PD_ISR_PIS5_Pos                       (10UL)                    /*!< PD ISR: PIS5 (Bit 10)                                       */
#define PD_ISR_PIS5_Msk                       (0xc00UL)                 /*!< PD ISR: PIS5 (Bitfield-Mask: 0x03)                          */
#define PD_ISR_PIS6_Pos                       (12UL)                    /*!< PD ISR: PIS6 (Bit 12)                                       */
#define PD_ISR_PIS6_Msk                       (0x3000UL)                /*!< PD ISR: PIS6 (Bitfield-Mask: 0x03)                          */
#define PD_ISR_PIS7_Pos                       (14UL)                    /*!< PD ISR: PIS7 (Bit 14)                                       */
#define PD_ISR_PIS7_Msk                       (0xc000UL)                /*!< PD ISR: PIS7 (Bitfield-Mask: 0x03)                          */
#define PD_ISR_PIS8_Pos                       (16UL)                    /*!< PD ISR: PIS8 (Bit 16)                                       */
#define PD_ISR_PIS8_Msk                       (0x30000UL)               /*!< PD ISR: PIS8 (Bitfield-Mask: 0x03)                          */
#define PD_ISR_PIS9_Pos                       (18UL)                    /*!< PD ISR: PIS9 (Bit 18)                                       */
#define PD_ISR_PIS9_Msk                       (0xc0000UL)               /*!< PD ISR: PIS9 (Bitfield-Mask: 0x03)                          */
#define PD_ISR_PIS10_Pos                      (20UL)                    /*!< PD ISR: PIS10 (Bit 20)                                      */
#define PD_ISR_PIS10_Msk                      (0x300000UL)              /*!< PD ISR: PIS10 (Bitfield-Mask: 0x03)                         */
#define PD_ISR_PIS11_Pos                      (22UL)                    /*!< PD ISR: PIS11 (Bit 22)                                      */
#define PD_ISR_PIS11_Msk                      (0xc00000UL)              /*!< PD ISR: PIS11 (Bitfield-Mask: 0x03)                         */
#define PD_ISR_PIS12_Pos                      (24UL)                    /*!< PD ISR: PIS12 (Bit 24)                                      */
#define PD_ISR_PIS12_Msk                      (0x3000000UL)             /*!< PD ISR: PIS12 (Bitfield-Mask: 0x03)                         */
#define PD_ISR_PIS13_Pos                      (26UL)                    /*!< PD ISR: PIS13 (Bit 26)                                      */
#define PD_ISR_PIS13_Msk                      (0xc000000UL)             /*!< PD ISR: PIS13 (Bitfield-Mask: 0x03)                         */
#define PD_ISR_PIS14_Pos                      (28UL)                    /*!< PD ISR: PIS14 (Bit 28)                                      */
#define PD_ISR_PIS14_Msk                      (0x30000000UL)            /*!< PD ISR: PIS14 (Bitfield-Mask: 0x03)                         */
#define PD_ISR_PIS15_Pos                      (30UL)                    /*!< PD ISR: PIS15 (Bit 30)                                      */
#define PD_ISR_PIS15_Msk                      (0xc0000000UL)            /*!< PD ISR: PIS15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PD_ICR  ----------------------------------- */
#define PD_ICR_PIC0_Pos                       (0UL)                     /*!< PD ICR: PIC0 (Bit 0)                                        */
#define PD_ICR_PIC0_Msk                       (0x3UL)                   /*!< PD ICR: PIC0 (Bitfield-Mask: 0x03)                          */
#define PD_ICR_PIC1_Pos                       (2UL)                     /*!< PD ICR: PIC1 (Bit 2)                                        */
#define PD_ICR_PIC1_Msk                       (0xcUL)                   /*!< PD ICR: PIC1 (Bitfield-Mask: 0x03)                          */
#define PD_ICR_PIC2_Pos                       (4UL)                     /*!< PD ICR: PIC2 (Bit 4)                                        */
#define PD_ICR_PIC2_Msk                       (0x30UL)                  /*!< PD ICR: PIC2 (Bitfield-Mask: 0x03)                          */
#define PD_ICR_PIC3_Pos                       (6UL)                     /*!< PD ICR: PIC3 (Bit 6)                                        */
#define PD_ICR_PIC3_Msk                       (0xc0UL)                  /*!< PD ICR: PIC3 (Bitfield-Mask: 0x03)                          */
#define PD_ICR_PIC4_Pos                       (8UL)                     /*!< PD ICR: PIC4 (Bit 8)                                        */
#define PD_ICR_PIC4_Msk                       (0x300UL)                 /*!< PD ICR: PIC4 (Bitfield-Mask: 0x03)                          */
#define PD_ICR_PIC5_Pos                       (10UL)                    /*!< PD ICR: PIC5 (Bit 10)                                       */
#define PD_ICR_PIC5_Msk                       (0xc00UL)                 /*!< PD ICR: PIC5 (Bitfield-Mask: 0x03)                          */
#define PD_ICR_PIC6_Pos                       (12UL)                    /*!< PD ICR: PIC6 (Bit 12)                                       */
#define PD_ICR_PIC6_Msk                       (0x3000UL)                /*!< PD ICR: PIC6 (Bitfield-Mask: 0x03)                          */
#define PD_ICR_PIC7_Pos                       (14UL)                    /*!< PD ICR: PIC7 (Bit 14)                                       */
#define PD_ICR_PIC7_Msk                       (0xc000UL)                /*!< PD ICR: PIC7 (Bitfield-Mask: 0x03)                          */
#define PD_ICR_PIC8_Pos                       (16UL)                    /*!< PD ICR: PIC8 (Bit 16)                                       */
#define PD_ICR_PIC8_Msk                       (0x30000UL)               /*!< PD ICR: PIC8 (Bitfield-Mask: 0x03)                          */
#define PD_ICR_PIC9_Pos                       (18UL)                    /*!< PD ICR: PIC9 (Bit 18)                                       */
#define PD_ICR_PIC9_Msk                       (0xc0000UL)               /*!< PD ICR: PIC9 (Bitfield-Mask: 0x03)                          */
#define PD_ICR_PIC10_Pos                      (20UL)                    /*!< PD ICR: PIC10 (Bit 20)                                      */
#define PD_ICR_PIC10_Msk                      (0x300000UL)              /*!< PD ICR: PIC10 (Bitfield-Mask: 0x03)                         */
#define PD_ICR_PIC11_Pos                      (22UL)                    /*!< PD ICR: PIC11 (Bit 22)                                      */
#define PD_ICR_PIC11_Msk                      (0xc00000UL)              /*!< PD ICR: PIC11 (Bitfield-Mask: 0x03)                         */
#define PD_ICR_PIC12_Pos                      (24UL)                    /*!< PD ICR: PIC12 (Bit 24)                                      */
#define PD_ICR_PIC12_Msk                      (0x3000000UL)             /*!< PD ICR: PIC12 (Bitfield-Mask: 0x03)                         */
#define PD_ICR_PIC13_Pos                      (26UL)                    /*!< PD ICR: PIC13 (Bit 26)                                      */
#define PD_ICR_PIC13_Msk                      (0xc000000UL)             /*!< PD ICR: PIC13 (Bitfield-Mask: 0x03)                         */
#define PD_ICR_PIC14_Pos                      (28UL)                    /*!< PD ICR: PIC14 (Bit 28)                                      */
#define PD_ICR_PIC14_Msk                      (0x30000000UL)            /*!< PD ICR: PIC14 (Bitfield-Mask: 0x03)                         */
#define PD_ICR_PIC15_Pos                      (30UL)                    /*!< PD ICR: PIC15 (Bit 30)                                      */
#define PD_ICR_PIC15_Msk                      (0xc0000000UL)            /*!< PD ICR: PIC15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PD_ODR  ----------------------------------- */
#define PD_ODR_POD0_Pos                       (0UL)                     /*!< PD ODR: POD0 (Bit 0)                                        */
#define PD_ODR_POD0_Msk                       (0x1UL)                   /*!< PD ODR: POD0 (Bitfield-Mask: 0x01)                          */
#define PD_ODR_POD1_Pos                       (1UL)                     /*!< PD ODR: POD1 (Bit 1)                                        */
#define PD_ODR_POD1_Msk                       (0x2UL)                   /*!< PD ODR: POD1 (Bitfield-Mask: 0x01)                          */
#define PD_ODR_POD2_Pos                       (2UL)                     /*!< PD ODR: POD2 (Bit 2)                                        */
#define PD_ODR_POD2_Msk                       (0x4UL)                   /*!< PD ODR: POD2 (Bitfield-Mask: 0x01)                          */
#define PD_ODR_POD3_Pos                       (3UL)                     /*!< PD ODR: POD3 (Bit 3)                                        */
#define PD_ODR_POD3_Msk                       (0x8UL)                   /*!< PD ODR: POD3 (Bitfield-Mask: 0x01)                          */
#define PD_ODR_POD4_Pos                       (4UL)                     /*!< PD ODR: POD4 (Bit 4)                                        */
#define PD_ODR_POD4_Msk                       (0x10UL)                  /*!< PD ODR: POD4 (Bitfield-Mask: 0x01)                          */
#define PD_ODR_POD5_Pos                       (5UL)                     /*!< PD ODR: POD5 (Bit 5)                                        */
#define PD_ODR_POD5_Msk                       (0x20UL)                  /*!< PD ODR: POD5 (Bitfield-Mask: 0x01)                          */
#define PD_ODR_POD6_Pos                       (6UL)                     /*!< PD ODR: POD6 (Bit 6)                                        */
#define PD_ODR_POD6_Msk                       (0x40UL)                  /*!< PD ODR: POD6 (Bitfield-Mask: 0x01)                          */
#define PD_ODR_POD7_Pos                       (7UL)                     /*!< PD ODR: POD7 (Bit 7)                                        */
#define PD_ODR_POD7_Msk                       (0x80UL)                  /*!< PD ODR: POD7 (Bitfield-Mask: 0x01)                          */
#define PD_ODR_POD8_Pos                       (8UL)                     /*!< PD ODR: POD8 (Bit 8)                                        */
#define PD_ODR_POD8_Msk                       (0x100UL)                 /*!< PD ODR: POD8 (Bitfield-Mask: 0x01)                          */
#define PD_ODR_POD9_Pos                       (9UL)                     /*!< PD ODR: POD9 (Bit 9)                                        */
#define PD_ODR_POD9_Msk                       (0x200UL)                 /*!< PD ODR: POD9 (Bitfield-Mask: 0x01)                          */
#define PD_ODR_POD10_Pos                      (10UL)                    /*!< PD ODR: POD10 (Bit 10)                                      */
#define PD_ODR_POD10_Msk                      (0x400UL)                 /*!< PD ODR: POD10 (Bitfield-Mask: 0x01)                         */
#define PD_ODR_POD11_Pos                      (11UL)                    /*!< PD ODR: POD11 (Bit 11)                                      */
#define PD_ODR_POD11_Msk                      (0x800UL)                 /*!< PD ODR: POD11 (Bitfield-Mask: 0x01)                         */
#define PD_ODR_POD12_Pos                      (12UL)                    /*!< PD ODR: POD12 (Bit 12)                                      */
#define PD_ODR_POD12_Msk                      (0x1000UL)                /*!< PD ODR: POD12 (Bitfield-Mask: 0x01)                         */
#define PD_ODR_POD13_Pos                      (13UL)                    /*!< PD ODR: POD13 (Bit 13)                                      */
#define PD_ODR_POD13_Msk                      (0x2000UL)                /*!< PD ODR: POD13 (Bitfield-Mask: 0x01)                         */
#define PD_ODR_POD14_Pos                      (14UL)                    /*!< PD ODR: POD14 (Bit 14)                                      */
#define PD_ODR_POD14_Msk                      (0x4000UL)                /*!< PD ODR: POD14 (Bitfield-Mask: 0x01)                         */
#define PD_ODR_POD15_Pos                      (15UL)                    /*!< PD ODR: POD15 (Bit 15)                                      */
#define PD_ODR_POD15_Msk                      (0x8000UL)                /*!< PD ODR: POD15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PD_IDR  ----------------------------------- */
#define PD_IDR_PID0_Pos                       (0UL)                     /*!< PD IDR: PID0 (Bit 0)                                        */
#define PD_IDR_PID0_Msk                       (0x1UL)                   /*!< PD IDR: PID0 (Bitfield-Mask: 0x01)                          */
#define PD_IDR_PID1_Pos                       (1UL)                     /*!< PD IDR: PID1 (Bit 1)                                        */
#define PD_IDR_PID1_Msk                       (0x2UL)                   /*!< PD IDR: PID1 (Bitfield-Mask: 0x01)                          */
#define PD_IDR_PID2_Pos                       (2UL)                     /*!< PD IDR: PID2 (Bit 2)                                        */
#define PD_IDR_PID2_Msk                       (0x4UL)                   /*!< PD IDR: PID2 (Bitfield-Mask: 0x01)                          */
#define PD_IDR_PID3_Pos                       (3UL)                     /*!< PD IDR: PID3 (Bit 3)                                        */
#define PD_IDR_PID3_Msk                       (0x8UL)                   /*!< PD IDR: PID3 (Bitfield-Mask: 0x01)                          */
#define PD_IDR_PID4_Pos                       (4UL)                     /*!< PD IDR: PID4 (Bit 4)                                        */
#define PD_IDR_PID4_Msk                       (0x10UL)                  /*!< PD IDR: PID4 (Bitfield-Mask: 0x01)                          */
#define PD_IDR_PID5_Pos                       (5UL)                     /*!< PD IDR: PID5 (Bit 5)                                        */
#define PD_IDR_PID5_Msk                       (0x20UL)                  /*!< PD IDR: PID5 (Bitfield-Mask: 0x01)                          */
#define PD_IDR_PID6_Pos                       (6UL)                     /*!< PD IDR: PID6 (Bit 6)                                        */
#define PD_IDR_PID6_Msk                       (0x40UL)                  /*!< PD IDR: PID6 (Bitfield-Mask: 0x01)                          */
#define PD_IDR_PID7_Pos                       (7UL)                     /*!< PD IDR: PID7 (Bit 7)                                        */
#define PD_IDR_PID7_Msk                       (0x80UL)                  /*!< PD IDR: PID7 (Bitfield-Mask: 0x01)                          */
#define PD_IDR_PID8_Pos                       (8UL)                     /*!< PD IDR: PID8 (Bit 8)                                        */
#define PD_IDR_PID8_Msk                       (0x100UL)                 /*!< PD IDR: PID8 (Bitfield-Mask: 0x01)                          */
#define PD_IDR_PID9_Pos                       (9UL)                     /*!< PD IDR: PID9 (Bit 9)                                        */
#define PD_IDR_PID9_Msk                       (0x200UL)                 /*!< PD IDR: PID9 (Bitfield-Mask: 0x01)                          */
#define PD_IDR_PID10_Pos                      (10UL)                    /*!< PD IDR: PID10 (Bit 10)                                      */
#define PD_IDR_PID10_Msk                      (0x400UL)                 /*!< PD IDR: PID10 (Bitfield-Mask: 0x01)                         */
#define PD_IDR_PID11_Pos                      (11UL)                    /*!< PD IDR: PID11 (Bit 11)                                      */
#define PD_IDR_PID11_Msk                      (0x800UL)                 /*!< PD IDR: PID11 (Bitfield-Mask: 0x01)                         */
#define PD_IDR_PID12_Pos                      (12UL)                    /*!< PD IDR: PID12 (Bit 12)                                      */
#define PD_IDR_PID12_Msk                      (0x1000UL)                /*!< PD IDR: PID12 (Bitfield-Mask: 0x01)                         */
#define PD_IDR_PID13_Pos                      (13UL)                    /*!< PD IDR: PID13 (Bit 13)                                      */
#define PD_IDR_PID13_Msk                      (0x2000UL)                /*!< PD IDR: PID13 (Bitfield-Mask: 0x01)                         */
#define PD_IDR_PID14_Pos                      (14UL)                    /*!< PD IDR: PID14 (Bit 14)                                      */
#define PD_IDR_PID14_Msk                      (0x4000UL)                /*!< PD IDR: PID14 (Bitfield-Mask: 0x01)                         */
#define PD_IDR_PID15_Pos                      (15UL)                    /*!< PD IDR: PID15 (Bit 15)                                      */
#define PD_IDR_PID15_Msk                      (0x8000UL)                /*!< PD IDR: PID15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PD_BSR  ----------------------------------- */
#define PD_BSR_BSD0_Pos                       (0UL)                     /*!< PD BSR: BSD0 (Bit 0)                                        */
#define PD_BSR_BSD0_Msk                       (0x1UL)                   /*!< PD BSR: BSD0 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BSD1_Pos                       (1UL)                     /*!< PD BSR: BSD1 (Bit 1)                                        */
#define PD_BSR_BSD1_Msk                       (0x2UL)                   /*!< PD BSR: BSD1 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BSD2_Pos                       (2UL)                     /*!< PD BSR: BSD2 (Bit 2)                                        */
#define PD_BSR_BSD2_Msk                       (0x4UL)                   /*!< PD BSR: BSD2 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BSD3_Pos                       (3UL)                     /*!< PD BSR: BSD3 (Bit 3)                                        */
#define PD_BSR_BSD3_Msk                       (0x8UL)                   /*!< PD BSR: BSD3 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BSD4_Pos                       (4UL)                     /*!< PD BSR: BSD4 (Bit 4)                                        */
#define PD_BSR_BSD4_Msk                       (0x10UL)                  /*!< PD BSR: BSD4 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BSD5_Pos                       (5UL)                     /*!< PD BSR: BSD5 (Bit 5)                                        */
#define PD_BSR_BSD5_Msk                       (0x20UL)                  /*!< PD BSR: BSD5 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BSD6_Pos                       (6UL)                     /*!< PD BSR: BSD6 (Bit 6)                                        */
#define PD_BSR_BSD6_Msk                       (0x40UL)                  /*!< PD BSR: BSD6 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BSD7_Pos                       (7UL)                     /*!< PD BSR: BSD7 (Bit 7)                                        */
#define PD_BSR_BSD7_Msk                       (0x80UL)                  /*!< PD BSR: BSD7 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BSD8_Pos                       (8UL)                     /*!< PD BSR: BSD8 (Bit 8)                                        */
#define PD_BSR_BSD8_Msk                       (0x100UL)                 /*!< PD BSR: BSD8 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BSD9_Pos                       (9UL)                     /*!< PD BSR: BSD9 (Bit 9)                                        */
#define PD_BSR_BSD9_Msk                       (0x200UL)                 /*!< PD BSR: BSD9 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BSD10_Pos                      (10UL)                    /*!< PD BSR: BSD10 (Bit 10)                                      */
#define PD_BSR_BSD10_Msk                      (0x400UL)                 /*!< PD BSR: BSD10 (Bitfield-Mask: 0x01)                         */
#define PD_BSR_BSD11_Pos                      (11UL)                    /*!< PD BSR: BSD11 (Bit 11)                                      */
#define PD_BSR_BSD11_Msk                      (0x800UL)                 /*!< PD BSR: BSD11 (Bitfield-Mask: 0x01)                         */
#define PD_BSR_BSD12_Pos                      (12UL)                    /*!< PD BSR: BSD12 (Bit 12)                                      */
#define PD_BSR_BSD12_Msk                      (0x1000UL)                /*!< PD BSR: BSD12 (Bitfield-Mask: 0x01)                         */
#define PD_BSR_BSD13_Pos                      (13UL)                    /*!< PD BSR: BSD13 (Bit 13)                                      */
#define PD_BSR_BSD13_Msk                      (0x2000UL)                /*!< PD BSR: BSD13 (Bitfield-Mask: 0x01)                         */
#define PD_BSR_BSD14_Pos                      (14UL)                    /*!< PD BSR: BSD14 (Bit 14)                                      */
#define PD_BSR_BSD14_Msk                      (0x4000UL)                /*!< PD BSR: BSD14 (Bitfield-Mask: 0x01)                         */
#define PD_BSR_BSD15_Pos                      (15UL)                    /*!< PD BSR: BSD15 (Bit 15)                                      */
#define PD_BSR_BSD15_Msk                      (0x8000UL)                /*!< PD BSR: BSD15 (Bitfield-Mask: 0x01)                         */
#define PD_BSR_BCD0_Pos                       (16UL)                    /*!< PD BSR: BCD0 (Bit 16)                                       */
#define PD_BSR_BCD0_Msk                       (0x10000UL)               /*!< PD BSR: BCD0 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BCD1_Pos                       (17UL)                    /*!< PD BSR: BCD1 (Bit 17)                                       */
#define PD_BSR_BCD1_Msk                       (0x20000UL)               /*!< PD BSR: BCD1 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BCD2_Pos                       (18UL)                    /*!< PD BSR: BCD2 (Bit 18)                                       */
#define PD_BSR_BCD2_Msk                       (0x40000UL)               /*!< PD BSR: BCD2 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BCD3_Pos                       (19UL)                    /*!< PD BSR: BCD3 (Bit 19)                                       */
#define PD_BSR_BCD3_Msk                       (0x80000UL)               /*!< PD BSR: BCD3 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BCD4_Pos                       (20UL)                    /*!< PD BSR: BCD4 (Bit 20)                                       */
#define PD_BSR_BCD4_Msk                       (0x100000UL)              /*!< PD BSR: BCD4 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BCD5_Pos                       (21UL)                    /*!< PD BSR: BCD5 (Bit 21)                                       */
#define PD_BSR_BCD5_Msk                       (0x200000UL)              /*!< PD BSR: BCD5 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BCD6_Pos                       (22UL)                    /*!< PD BSR: BCD6 (Bit 22)                                       */
#define PD_BSR_BCD6_Msk                       (0x400000UL)              /*!< PD BSR: BCD6 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BCD7_Pos                       (23UL)                    /*!< PD BSR: BCD7 (Bit 23)                                       */
#define PD_BSR_BCD7_Msk                       (0x800000UL)              /*!< PD BSR: BCD7 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BCD8_Pos                       (24UL)                    /*!< PD BSR: BCD8 (Bit 24)                                       */
#define PD_BSR_BCD8_Msk                       (0x1000000UL)             /*!< PD BSR: BCD8 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BCD9_Pos                       (25UL)                    /*!< PD BSR: BCD9 (Bit 25)                                       */
#define PD_BSR_BCD9_Msk                       (0x2000000UL)             /*!< PD BSR: BCD9 (Bitfield-Mask: 0x01)                          */
#define PD_BSR_BCD10_Pos                      (26UL)                    /*!< PD BSR: BCD10 (Bit 26)                                      */
#define PD_BSR_BCD10_Msk                      (0x4000000UL)             /*!< PD BSR: BCD10 (Bitfield-Mask: 0x01)                         */
#define PD_BSR_BCD11_Pos                      (27UL)                    /*!< PD BSR: BCD11 (Bit 27)                                      */
#define PD_BSR_BCD11_Msk                      (0x8000000UL)             /*!< PD BSR: BCD11 (Bitfield-Mask: 0x01)                         */
#define PD_BSR_BCD12_Pos                      (28UL)                    /*!< PD BSR: BCD12 (Bit 28)                                      */
#define PD_BSR_BCD12_Msk                      (0x10000000UL)            /*!< PD BSR: BCD12 (Bitfield-Mask: 0x01)                         */
#define PD_BSR_BCD13_Pos                      (29UL)                    /*!< PD BSR: BCD13 (Bit 29)                                      */
#define PD_BSR_BCD13_Msk                      (0x20000000UL)            /*!< PD BSR: BCD13 (Bitfield-Mask: 0x01)                         */
#define PD_BSR_BCD14_Pos                      (30UL)                    /*!< PD BSR: BCD14 (Bit 30)                                      */
#define PD_BSR_BCD14_Msk                      (0x40000000UL)            /*!< PD BSR: BCD14 (Bitfield-Mask: 0x01)                         */
#define PD_BSR_BCD15_Pos                      (31UL)                    /*!< PD BSR: BCD15 (Bit 31)                                      */
#define PD_BSR_BCD15_Msk                      (0x80000000UL)            /*!< PD BSR: BCD15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PD_BCR  ----------------------------------- */
#define PD_BCR_BCD0_Pos                       (0UL)                     /*!< PD BCR: BCD0 (Bit 0)                                        */
#define PD_BCR_BCD0_Msk                       (0x1UL)                   /*!< PD BCR: BCD0 (Bitfield-Mask: 0x01)                          */
#define PD_BCR_BCD1_Pos                       (1UL)                     /*!< PD BCR: BCD1 (Bit 1)                                        */
#define PD_BCR_BCD1_Msk                       (0x2UL)                   /*!< PD BCR: BCD1 (Bitfield-Mask: 0x01)                          */
#define PD_BCR_BCD2_Pos                       (2UL)                     /*!< PD BCR: BCD2 (Bit 2)                                        */
#define PD_BCR_BCD2_Msk                       (0x4UL)                   /*!< PD BCR: BCD2 (Bitfield-Mask: 0x01)                          */
#define PD_BCR_BCD3_Pos                       (3UL)                     /*!< PD BCR: BCD3 (Bit 3)                                        */
#define PD_BCR_BCD3_Msk                       (0x8UL)                   /*!< PD BCR: BCD3 (Bitfield-Mask: 0x01)                          */
#define PD_BCR_BCD4_Pos                       (4UL)                     /*!< PD BCR: BCD4 (Bit 4)                                        */
#define PD_BCR_BCD4_Msk                       (0x10UL)                  /*!< PD BCR: BCD4 (Bitfield-Mask: 0x01)                          */
#define PD_BCR_BCD5_Pos                       (5UL)                     /*!< PD BCR: BCD5 (Bit 5)                                        */
#define PD_BCR_BCD5_Msk                       (0x20UL)                  /*!< PD BCR: BCD5 (Bitfield-Mask: 0x01)                          */
#define PD_BCR_BCD6_Pos                       (6UL)                     /*!< PD BCR: BCD6 (Bit 6)                                        */
#define PD_BCR_BCD6_Msk                       (0x40UL)                  /*!< PD BCR: BCD6 (Bitfield-Mask: 0x01)                          */
#define PD_BCR_BCD7_Pos                       (7UL)                     /*!< PD BCR: BCD7 (Bit 7)                                        */
#define PD_BCR_BCD7_Msk                       (0x80UL)                  /*!< PD BCR: BCD7 (Bitfield-Mask: 0x01)                          */
#define PD_BCR_BCD8_Pos                       (8UL)                     /*!< PD BCR: BCD8 (Bit 8)                                        */
#define PD_BCR_BCD8_Msk                       (0x100UL)                 /*!< PD BCR: BCD8 (Bitfield-Mask: 0x01)                          */
#define PD_BCR_BCD9_Pos                       (9UL)                     /*!< PD BCR: BCD9 (Bit 9)                                        */
#define PD_BCR_BCD9_Msk                       (0x200UL)                 /*!< PD BCR: BCD9 (Bitfield-Mask: 0x01)                          */
#define PD_BCR_BCD10_Pos                      (10UL)                    /*!< PD BCR: BCD10 (Bit 10)                                      */
#define PD_BCR_BCD10_Msk                      (0x400UL)                 /*!< PD BCR: BCD10 (Bitfield-Mask: 0x01)                         */
#define PD_BCR_BCD11_Pos                      (11UL)                    /*!< PD BCR: BCD11 (Bit 11)                                      */
#define PD_BCR_BCD11_Msk                      (0x800UL)                 /*!< PD BCR: BCD11 (Bitfield-Mask: 0x01)                         */
#define PD_BCR_BCD12_Pos                      (12UL)                    /*!< PD BCR: BCD12 (Bit 12)                                      */
#define PD_BCR_BCD12_Msk                      (0x1000UL)                /*!< PD BCR: BCD12 (Bitfield-Mask: 0x01)                         */
#define PD_BCR_BCD13_Pos                      (13UL)                    /*!< PD BCR: BCD13 (Bit 13)                                      */
#define PD_BCR_BCD13_Msk                      (0x2000UL)                /*!< PD BCR: BCD13 (Bitfield-Mask: 0x01)                         */
#define PD_BCR_BCD14_Pos                      (14UL)                    /*!< PD BCR: BCD14 (Bit 14)                                      */
#define PD_BCR_BCD14_Msk                      (0x4000UL)                /*!< PD BCR: BCD14 (Bitfield-Mask: 0x01)                         */
#define PD_BCR_BCD15_Pos                      (15UL)                    /*!< PD BCR: BCD15 (Bit 15)                                      */
#define PD_BCR_BCD15_Msk                      (0x8000UL)                /*!< PD BCR: BCD15 (Bitfield-Mask: 0x01)                         */


/* ================================================================================ */
/* ================           struct 'PE' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  PE_MR1  ----------------------------------- */
#define PE_MR1_P0MUX_Pos                      (0UL)                     /*!< PE MR1: P0MUX (Bit 0)                                       */
#define PE_MR1_P0MUX_Msk                      (0x7UL)                   /*!< PE MR1: P0MUX (Bitfield-Mask: 0x07)                         */
#define PE_MR1_P1MUX_Pos                      (4UL)                     /*!< PE MR1: P1MUX (Bit 4)                                       */
#define PE_MR1_P1MUX_Msk                      (0x70UL)                  /*!< PE MR1: P1MUX (Bitfield-Mask: 0x07)                         */
#define PE_MR1_P2MUX_Pos                      (8UL)                     /*!< PE MR1: P2MUX (Bit 8)                                       */
#define PE_MR1_P2MUX_Msk                      (0x700UL)                 /*!< PE MR1: P2MUX (Bitfield-Mask: 0x07)                         */
#define PE_MR1_P3MUX_Pos                      (12UL)                    /*!< PE MR1: P3MUX (Bit 12)                                      */
#define PE_MR1_P3MUX_Msk                      (0x7000UL)                /*!< PE MR1: P3MUX (Bitfield-Mask: 0x07)                         */
#define PE_MR1_P4MUX_Pos                      (16UL)                    /*!< PE MR1: P4MUX (Bit 16)                                      */
#define PE_MR1_P4MUX_Msk                      (0x70000UL)               /*!< PE MR1: P4MUX (Bitfield-Mask: 0x07)                         */
#define PE_MR1_P5MUX_Pos                      (20UL)                    /*!< PE MR1: P5MUX (Bit 20)                                      */
#define PE_MR1_P5MUX_Msk                      (0x700000UL)              /*!< PE MR1: P5MUX (Bitfield-Mask: 0x07)                         */
#define PE_MR1_P6MUX_Pos                      (24UL)                    /*!< PE MR1: P6MUX (Bit 24)                                      */
#define PE_MR1_P6MUX_Msk                      (0x7000000UL)             /*!< PE MR1: P6MUX (Bitfield-Mask: 0x07)                         */
#define PE_MR1_P7MUX_Pos                      (28UL)                    /*!< PE MR1: P7MUX (Bit 28)                                      */
#define PE_MR1_P7MUX_Msk                      (0x70000000UL)            /*!< PE MR1: P7MUX (Bitfield-Mask: 0x07)                         */

/* -----------------------------------  PE_MR2  ----------------------------------- */
#define PE_MR2_P8MUX_Pos                      (0UL)                     /*!< PE MR2: P8MUX (Bit 0)                                       */
#define PE_MR2_P8MUX_Msk                      (0x7UL)                   /*!< PE MR2: P8MUX (Bitfield-Mask: 0x07)                         */
#define PE_MR2_P9MUX_Pos                      (4UL)                     /*!< PE MR2: P9MUX (Bit 4)                                       */
#define PE_MR2_P9MUX_Msk                      (0x70UL)                  /*!< PE MR2: P9MUX (Bitfield-Mask: 0x07)                         */
#define PE_MR2_P10MUX_Pos                     (8UL)                     /*!< PE MR2: P10MUX (Bit 8)                                      */
#define PE_MR2_P10MUX_Msk                     (0x700UL)                 /*!< PE MR2: P10MUX (Bitfield-Mask: 0x07)                        */
#define PE_MR2_P11MUX_Pos                     (12UL)                    /*!< PE MR2: P11MUX (Bit 12)                                     */
#define PE_MR2_P11MUX_Msk                     (0x7000UL)                /*!< PE MR2: P11MUX (Bitfield-Mask: 0x07)                        */
#define PE_MR2_P12MUX_Pos                     (16UL)                    /*!< PE MR2: P12MUX (Bit 16)                                     */
#define PE_MR2_P12MUX_Msk                     (0x70000UL)               /*!< PE MR2: P12MUX (Bitfield-Mask: 0x07)                        */
#define PE_MR2_P13MUX_Pos                     (20UL)                    /*!< PE MR2: P13MUX (Bit 20)                                     */
#define PE_MR2_P13MUX_Msk                     (0x700000UL)              /*!< PE MR2: P13MUX (Bitfield-Mask: 0x07)                        */
#define PE_MR2_P14MUX_Pos                     (24UL)                    /*!< PE MR2: P14MUX (Bit 24)                                     */
#define PE_MR2_P14MUX_Msk                     (0x7000000UL)             /*!< PE MR2: P14MUX (Bitfield-Mask: 0x07)                        */
#define PE_MR2_P15MUX_Pos                     (28UL)                    /*!< PE MR2: P15MUX (Bit 28)                                     */
#define PE_MR2_P15MUX_Msk                     (0x70000000UL)            /*!< PE MR2: P15MUX (Bitfield-Mask: 0x07)                        */

/* ------------------------------------  PE_CR  ----------------------------------- */
#define PE_CR_P0_Pos                          (0UL)                     /*!< PE CR: P0 (Bit 0)                                           */
#define PE_CR_P0_Msk                          (0x3UL)                   /*!< PE CR: P0 (Bitfield-Mask: 0x03)                             */
#define PE_CR_P1_Pos                          (2UL)                     /*!< PE CR: P1 (Bit 2)                                           */
#define PE_CR_P1_Msk                          (0xcUL)                   /*!< PE CR: P1 (Bitfield-Mask: 0x03)                             */
#define PE_CR_P2_Pos                          (4UL)                     /*!< PE CR: P2 (Bit 4)                                           */
#define PE_CR_P2_Msk                          (0x30UL)                  /*!< PE CR: P2 (Bitfield-Mask: 0x03)                             */
#define PE_CR_P3_Pos                          (6UL)                     /*!< PE CR: P3 (Bit 6)                                           */
#define PE_CR_P3_Msk                          (0xc0UL)                  /*!< PE CR: P3 (Bitfield-Mask: 0x03)                             */
#define PE_CR_P4_Pos                          (8UL)                     /*!< PE CR: P4 (Bit 8)                                           */
#define PE_CR_P4_Msk                          (0x300UL)                 /*!< PE CR: P4 (Bitfield-Mask: 0x03)                             */
#define PE_CR_P5_Pos                          (10UL)                    /*!< PE CR: P5 (Bit 10)                                          */
#define PE_CR_P5_Msk                          (0xc00UL)                 /*!< PE CR: P5 (Bitfield-Mask: 0x03)                             */
#define PE_CR_P6_Pos                          (12UL)                    /*!< PE CR: P6 (Bit 12)                                          */
#define PE_CR_P6_Msk                          (0x3000UL)                /*!< PE CR: P6 (Bitfield-Mask: 0x03)                             */
#define PE_CR_P7_Pos                          (14UL)                    /*!< PE CR: P7 (Bit 14)                                          */
#define PE_CR_P7_Msk                          (0xc000UL)                /*!< PE CR: P7 (Bitfield-Mask: 0x03)                             */
#define PE_CR_P8_Pos                          (16UL)                    /*!< PE CR: P8 (Bit 16)                                          */
#define PE_CR_P8_Msk                          (0x30000UL)               /*!< PE CR: P8 (Bitfield-Mask: 0x03)                             */
#define PE_CR_P9_Pos                          (18UL)                    /*!< PE CR: P9 (Bit 18)                                          */
#define PE_CR_P9_Msk                          (0xc0000UL)               /*!< PE CR: P9 (Bitfield-Mask: 0x03)                             */
#define PE_CR_P10_Pos                         (20UL)                    /*!< PE CR: P10 (Bit 20)                                         */
#define PE_CR_P10_Msk                         (0x300000UL)              /*!< PE CR: P10 (Bitfield-Mask: 0x03)                            */
#define PE_CR_P11_Pos                         (22UL)                    /*!< PE CR: P11 (Bit 22)                                         */
#define PE_CR_P11_Msk                         (0xc00000UL)              /*!< PE CR: P11 (Bitfield-Mask: 0x03)                            */
#define PE_CR_P12_Pos                         (24UL)                    /*!< PE CR: P12 (Bit 24)                                         */
#define PE_CR_P12_Msk                         (0x3000000UL)             /*!< PE CR: P12 (Bitfield-Mask: 0x03)                            */
#define PE_CR_P13_Pos                         (26UL)                    /*!< PE CR: P13 (Bit 26)                                         */
#define PE_CR_P13_Msk                         (0xc000000UL)             /*!< PE CR: P13 (Bitfield-Mask: 0x03)                            */
#define PE_CR_P14_Pos                         (28UL)                    /*!< PE CR: P14 (Bit 28)                                         */
#define PE_CR_P14_Msk                         (0x30000000UL)            /*!< PE CR: P14 (Bitfield-Mask: 0x03)                            */
#define PE_CR_P15_Pos                         (30UL)                    /*!< PE CR: P15 (Bit 30)                                         */
#define PE_CR_P15_Msk                         (0xc0000000UL)            /*!< PE CR: P15 (Bitfield-Mask: 0x03)                            */

/* -----------------------------------  PE_PRCR  ---------------------------------- */
#define PE_PRCR_PUE0_Pos                      (0UL)                     /*!< PE PRCR: PUE0 (Bit 0)                                       */
#define PE_PRCR_PUE0_Msk                      (0x3UL)                   /*!< PE PRCR: PUE0 (Bitfield-Mask: 0x03)                         */
#define PE_PRCR_PUE1_Pos                      (2UL)                     /*!< PE PRCR: PUE1 (Bit 2)                                       */
#define PE_PRCR_PUE1_Msk                      (0xcUL)                   /*!< PE PRCR: PUE1 (Bitfield-Mask: 0x03)                         */
#define PE_PRCR_PUE2_Pos                      (4UL)                     /*!< PE PRCR: PUE2 (Bit 4)                                       */
#define PE_PRCR_PUE2_Msk                      (0x30UL)                  /*!< PE PRCR: PUE2 (Bitfield-Mask: 0x03)                         */
#define PE_PRCR_PUE3_Pos                      (6UL)                     /*!< PE PRCR: PUE3 (Bit 6)                                       */
#define PE_PRCR_PUE3_Msk                      (0xc0UL)                  /*!< PE PRCR: PUE3 (Bitfield-Mask: 0x03)                         */
#define PE_PRCR_PUE4_Pos                      (8UL)                     /*!< PE PRCR: PUE4 (Bit 8)                                       */
#define PE_PRCR_PUE4_Msk                      (0x300UL)                 /*!< PE PRCR: PUE4 (Bitfield-Mask: 0x03)                         */
#define PE_PRCR_PUE5_Pos                      (10UL)                    /*!< PE PRCR: PUE5 (Bit 10)                                      */
#define PE_PRCR_PUE5_Msk                      (0xc00UL)                 /*!< PE PRCR: PUE5 (Bitfield-Mask: 0x03)                         */
#define PE_PRCR_PUE6_Pos                      (12UL)                    /*!< PE PRCR: PUE6 (Bit 12)                                      */
#define PE_PRCR_PUE6_Msk                      (0x3000UL)                /*!< PE PRCR: PUE6 (Bitfield-Mask: 0x03)                         */
#define PE_PRCR_PUE7_Pos                      (14UL)                    /*!< PE PRCR: PUE7 (Bit 14)                                      */
#define PE_PRCR_PUE7_Msk                      (0xc000UL)                /*!< PE PRCR: PUE7 (Bitfield-Mask: 0x03)                         */
#define PE_PRCR_PUE8_Pos                      (16UL)                    /*!< PE PRCR: PUE8 (Bit 16)                                      */
#define PE_PRCR_PUE8_Msk                      (0x30000UL)               /*!< PE PRCR: PUE8 (Bitfield-Mask: 0x03)                         */
#define PE_PRCR_PUE9_Pos                      (18UL)                    /*!< PE PRCR: PUE9 (Bit 18)                                      */
#define PE_PRCR_PUE9_Msk                      (0xc0000UL)               /*!< PE PRCR: PUE9 (Bitfield-Mask: 0x03)                         */
#define PE_PRCR_PUE10_Pos                     (20UL)                    /*!< PE PRCR: PUE10 (Bit 20)                                     */
#define PE_PRCR_PUE10_Msk                     (0x300000UL)              /*!< PE PRCR: PUE10 (Bitfield-Mask: 0x03)                        */
#define PE_PRCR_PUE11_Pos                     (22UL)                    /*!< PE PRCR: PUE11 (Bit 22)                                     */
#define PE_PRCR_PUE11_Msk                     (0xc00000UL)              /*!< PE PRCR: PUE11 (Bitfield-Mask: 0x03)                        */
#define PE_PRCR_PUE12_Pos                     (24UL)                    /*!< PE PRCR: PUE12 (Bit 24)                                     */
#define PE_PRCR_PUE12_Msk                     (0x3000000UL)             /*!< PE PRCR: PUE12 (Bitfield-Mask: 0x03)                        */
#define PE_PRCR_PUE13_Pos                     (26UL)                    /*!< PE PRCR: PUE13 (Bit 26)                                     */
#define PE_PRCR_PUE13_Msk                     (0xc000000UL)             /*!< PE PRCR: PUE13 (Bitfield-Mask: 0x03)                        */
#define PE_PRCR_PUE14_Pos                     (28UL)                    /*!< PE PRCR: PUE14 (Bit 28)                                     */
#define PE_PRCR_PUE14_Msk                     (0x30000000UL)            /*!< PE PRCR: PUE14 (Bitfield-Mask: 0x03)                        */
#define PE_PRCR_PUE15_Pos                     (30UL)                    /*!< PE PRCR: PUE15 (Bit 30)                                     */
#define PE_PRCR_PUE15_Msk                     (0xc0000000UL)            /*!< PE PRCR: PUE15 (Bitfield-Mask: 0x03)                        */

/* -----------------------------------  PE_DER  ----------------------------------- */
#define PE_DER_PDE0_Pos                       (0UL)                     /*!< PE DER: PDE0 (Bit 0)                                        */
#define PE_DER_PDE0_Msk                       (0x1UL)                   /*!< PE DER: PDE0 (Bitfield-Mask: 0x01)                          */
#define PE_DER_PDE1_Pos                       (1UL)                     /*!< PE DER: PDE1 (Bit 1)                                        */
#define PE_DER_PDE1_Msk                       (0x2UL)                   /*!< PE DER: PDE1 (Bitfield-Mask: 0x01)                          */
#define PE_DER_PDE2_Pos                       (2UL)                     /*!< PE DER: PDE2 (Bit 2)                                        */
#define PE_DER_PDE2_Msk                       (0x4UL)                   /*!< PE DER: PDE2 (Bitfield-Mask: 0x01)                          */
#define PE_DER_PDE3_Pos                       (3UL)                     /*!< PE DER: PDE3 (Bit 3)                                        */
#define PE_DER_PDE3_Msk                       (0x8UL)                   /*!< PE DER: PDE3 (Bitfield-Mask: 0x01)                          */
#define PE_DER_PDE4_Pos                       (4UL)                     /*!< PE DER: PDE4 (Bit 4)                                        */
#define PE_DER_PDE4_Msk                       (0x10UL)                  /*!< PE DER: PDE4 (Bitfield-Mask: 0x01)                          */
#define PE_DER_PDE5_Pos                       (5UL)                     /*!< PE DER: PDE5 (Bit 5)                                        */
#define PE_DER_PDE5_Msk                       (0x20UL)                  /*!< PE DER: PDE5 (Bitfield-Mask: 0x01)                          */
#define PE_DER_PDE6_Pos                       (6UL)                     /*!< PE DER: PDE6 (Bit 6)                                        */
#define PE_DER_PDE6_Msk                       (0x40UL)                  /*!< PE DER: PDE6 (Bitfield-Mask: 0x01)                          */
#define PE_DER_PDE7_Pos                       (7UL)                     /*!< PE DER: PDE7 (Bit 7)                                        */
#define PE_DER_PDE7_Msk                       (0x80UL)                  /*!< PE DER: PDE7 (Bitfield-Mask: 0x01)                          */
#define PE_DER_PDE8_Pos                       (8UL)                     /*!< PE DER: PDE8 (Bit 8)                                        */
#define PE_DER_PDE8_Msk                       (0x100UL)                 /*!< PE DER: PDE8 (Bitfield-Mask: 0x01)                          */
#define PE_DER_PDE9_Pos                       (9UL)                     /*!< PE DER: PDE9 (Bit 9)                                        */
#define PE_DER_PDE9_Msk                       (0x200UL)                 /*!< PE DER: PDE9 (Bitfield-Mask: 0x01)                          */
#define PE_DER_PDE10_Pos                      (10UL)                    /*!< PE DER: PDE10 (Bit 10)                                      */
#define PE_DER_PDE10_Msk                      (0x400UL)                 /*!< PE DER: PDE10 (Bitfield-Mask: 0x01)                         */
#define PE_DER_PDE11_Pos                      (11UL)                    /*!< PE DER: PDE11 (Bit 11)                                      */
#define PE_DER_PDE11_Msk                      (0x800UL)                 /*!< PE DER: PDE11 (Bitfield-Mask: 0x01)                         */
#define PE_DER_PDE12_Pos                      (12UL)                    /*!< PE DER: PDE12 (Bit 12)                                      */
#define PE_DER_PDE12_Msk                      (0x1000UL)                /*!< PE DER: PDE12 (Bitfield-Mask: 0x01)                         */
#define PE_DER_PDE13_Pos                      (13UL)                    /*!< PE DER: PDE13 (Bit 13)                                      */
#define PE_DER_PDE13_Msk                      (0x2000UL)                /*!< PE DER: PDE13 (Bitfield-Mask: 0x01)                         */
#define PE_DER_PDE14_Pos                      (14UL)                    /*!< PE DER: PDE14 (Bit 14)                                      */
#define PE_DER_PDE14_Msk                      (0x4000UL)                /*!< PE DER: PDE14 (Bitfield-Mask: 0x01)                         */
#define PE_DER_PDE15_Pos                      (15UL)                    /*!< PE DER: PDE15 (Bit 15)                                      */
#define PE_DER_PDE15_Msk                      (0x8000UL)                /*!< PE DER: PDE15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PE_IER  ----------------------------------- */
#define PE_IER_PIE0_Pos                       (0UL)                     /*!< PE IER: PIE0 (Bit 0)                                        */
#define PE_IER_PIE0_Msk                       (0x3UL)                   /*!< PE IER: PIE0 (Bitfield-Mask: 0x03)                          */
#define PE_IER_PIE1_Pos                       (2UL)                     /*!< PE IER: PIE1 (Bit 2)                                        */
#define PE_IER_PIE1_Msk                       (0xcUL)                   /*!< PE IER: PIE1 (Bitfield-Mask: 0x03)                          */
#define PE_IER_PIE2_Pos                       (4UL)                     /*!< PE IER: PIE2 (Bit 4)                                        */
#define PE_IER_PIE2_Msk                       (0x30UL)                  /*!< PE IER: PIE2 (Bitfield-Mask: 0x03)                          */
#define PE_IER_PIE3_Pos                       (6UL)                     /*!< PE IER: PIE3 (Bit 6)                                        */
#define PE_IER_PIE3_Msk                       (0xc0UL)                  /*!< PE IER: PIE3 (Bitfield-Mask: 0x03)                          */
#define PE_IER_PIE4_Pos                       (8UL)                     /*!< PE IER: PIE4 (Bit 8)                                        */
#define PE_IER_PIE4_Msk                       (0x300UL)                 /*!< PE IER: PIE4 (Bitfield-Mask: 0x03)                          */
#define PE_IER_PIE5_Pos                       (10UL)                    /*!< PE IER: PIE5 (Bit 10)                                       */
#define PE_IER_PIE5_Msk                       (0xc00UL)                 /*!< PE IER: PIE5 (Bitfield-Mask: 0x03)                          */
#define PE_IER_PIE6_Pos                       (12UL)                    /*!< PE IER: PIE6 (Bit 12)                                       */
#define PE_IER_PIE6_Msk                       (0x3000UL)                /*!< PE IER: PIE6 (Bitfield-Mask: 0x03)                          */
#define PE_IER_PIE7_Pos                       (14UL)                    /*!< PE IER: PIE7 (Bit 14)                                       */
#define PE_IER_PIE7_Msk                       (0xc000UL)                /*!< PE IER: PIE7 (Bitfield-Mask: 0x03)                          */
#define PE_IER_PIE8_Pos                       (16UL)                    /*!< PE IER: PIE8 (Bit 16)                                       */
#define PE_IER_PIE8_Msk                       (0x30000UL)               /*!< PE IER: PIE8 (Bitfield-Mask: 0x03)                          */
#define PE_IER_PIE9_Pos                       (18UL)                    /*!< PE IER: PIE9 (Bit 18)                                       */
#define PE_IER_PIE9_Msk                       (0xc0000UL)               /*!< PE IER: PIE9 (Bitfield-Mask: 0x03)                          */
#define PE_IER_PIE10_Pos                      (20UL)                    /*!< PE IER: PIE10 (Bit 20)                                      */
#define PE_IER_PIE10_Msk                      (0x300000UL)              /*!< PE IER: PIE10 (Bitfield-Mask: 0x03)                         */
#define PE_IER_PIE11_Pos                      (22UL)                    /*!< PE IER: PIE11 (Bit 22)                                      */
#define PE_IER_PIE11_Msk                      (0xc00000UL)              /*!< PE IER: PIE11 (Bitfield-Mask: 0x03)                         */
#define PE_IER_PIE12_Pos                      (24UL)                    /*!< PE IER: PIE12 (Bit 24)                                      */
#define PE_IER_PIE12_Msk                      (0x3000000UL)             /*!< PE IER: PIE12 (Bitfield-Mask: 0x03)                         */
#define PE_IER_PIE13_Pos                      (26UL)                    /*!< PE IER: PIE13 (Bit 26)                                      */
#define PE_IER_PIE13_Msk                      (0xc000000UL)             /*!< PE IER: PIE13 (Bitfield-Mask: 0x03)                         */
#define PE_IER_PIE14_Pos                      (28UL)                    /*!< PE IER: PIE14 (Bit 28)                                      */
#define PE_IER_PIE14_Msk                      (0x30000000UL)            /*!< PE IER: PIE14 (Bitfield-Mask: 0x03)                         */
#define PE_IER_PIE15_Pos                      (30UL)                    /*!< PE IER: PIE15 (Bit 30)                                      */
#define PE_IER_PIE15_Msk                      (0xc0000000UL)            /*!< PE IER: PIE15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PE_ISR  ----------------------------------- */
#define PE_ISR_PIS0_Pos                       (0UL)                     /*!< PE ISR: PIS0 (Bit 0)                                        */
#define PE_ISR_PIS0_Msk                       (0x3UL)                   /*!< PE ISR: PIS0 (Bitfield-Mask: 0x03)                          */
#define PE_ISR_PIS1_Pos                       (2UL)                     /*!< PE ISR: PIS1 (Bit 2)                                        */
#define PE_ISR_PIS1_Msk                       (0xcUL)                   /*!< PE ISR: PIS1 (Bitfield-Mask: 0x03)                          */
#define PE_ISR_PIS2_Pos                       (4UL)                     /*!< PE ISR: PIS2 (Bit 4)                                        */
#define PE_ISR_PIS2_Msk                       (0x30UL)                  /*!< PE ISR: PIS2 (Bitfield-Mask: 0x03)                          */
#define PE_ISR_PIS3_Pos                       (6UL)                     /*!< PE ISR: PIS3 (Bit 6)                                        */
#define PE_ISR_PIS3_Msk                       (0xc0UL)                  /*!< PE ISR: PIS3 (Bitfield-Mask: 0x03)                          */
#define PE_ISR_PIS4_Pos                       (8UL)                     /*!< PE ISR: PIS4 (Bit 8)                                        */
#define PE_ISR_PIS4_Msk                       (0x300UL)                 /*!< PE ISR: PIS4 (Bitfield-Mask: 0x03)                          */
#define PE_ISR_PIS5_Pos                       (10UL)                    /*!< PE ISR: PIS5 (Bit 10)                                       */
#define PE_ISR_PIS5_Msk                       (0xc00UL)                 /*!< PE ISR: PIS5 (Bitfield-Mask: 0x03)                          */
#define PE_ISR_PIS6_Pos                       (12UL)                    /*!< PE ISR: PIS6 (Bit 12)                                       */
#define PE_ISR_PIS6_Msk                       (0x3000UL)                /*!< PE ISR: PIS6 (Bitfield-Mask: 0x03)                          */
#define PE_ISR_PIS7_Pos                       (14UL)                    /*!< PE ISR: PIS7 (Bit 14)                                       */
#define PE_ISR_PIS7_Msk                       (0xc000UL)                /*!< PE ISR: PIS7 (Bitfield-Mask: 0x03)                          */
#define PE_ISR_PIS8_Pos                       (16UL)                    /*!< PE ISR: PIS8 (Bit 16)                                       */
#define PE_ISR_PIS8_Msk                       (0x30000UL)               /*!< PE ISR: PIS8 (Bitfield-Mask: 0x03)                          */
#define PE_ISR_PIS9_Pos                       (18UL)                    /*!< PE ISR: PIS9 (Bit 18)                                       */
#define PE_ISR_PIS9_Msk                       (0xc0000UL)               /*!< PE ISR: PIS9 (Bitfield-Mask: 0x03)                          */
#define PE_ISR_PIS10_Pos                      (20UL)                    /*!< PE ISR: PIS10 (Bit 20)                                      */
#define PE_ISR_PIS10_Msk                      (0x300000UL)              /*!< PE ISR: PIS10 (Bitfield-Mask: 0x03)                         */
#define PE_ISR_PIS11_Pos                      (22UL)                    /*!< PE ISR: PIS11 (Bit 22)                                      */
#define PE_ISR_PIS11_Msk                      (0xc00000UL)              /*!< PE ISR: PIS11 (Bitfield-Mask: 0x03)                         */
#define PE_ISR_PIS12_Pos                      (24UL)                    /*!< PE ISR: PIS12 (Bit 24)                                      */
#define PE_ISR_PIS12_Msk                      (0x3000000UL)             /*!< PE ISR: PIS12 (Bitfield-Mask: 0x03)                         */
#define PE_ISR_PIS13_Pos                      (26UL)                    /*!< PE ISR: PIS13 (Bit 26)                                      */
#define PE_ISR_PIS13_Msk                      (0xc000000UL)             /*!< PE ISR: PIS13 (Bitfield-Mask: 0x03)                         */
#define PE_ISR_PIS14_Pos                      (28UL)                    /*!< PE ISR: PIS14 (Bit 28)                                      */
#define PE_ISR_PIS14_Msk                      (0x30000000UL)            /*!< PE ISR: PIS14 (Bitfield-Mask: 0x03)                         */
#define PE_ISR_PIS15_Pos                      (30UL)                    /*!< PE ISR: PIS15 (Bit 30)                                      */
#define PE_ISR_PIS15_Msk                      (0xc0000000UL)            /*!< PE ISR: PIS15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PE_ICR  ----------------------------------- */
#define PE_ICR_PIC0_Pos                       (0UL)                     /*!< PE ICR: PIC0 (Bit 0)                                        */
#define PE_ICR_PIC0_Msk                       (0x3UL)                   /*!< PE ICR: PIC0 (Bitfield-Mask: 0x03)                          */
#define PE_ICR_PIC1_Pos                       (2UL)                     /*!< PE ICR: PIC1 (Bit 2)                                        */
#define PE_ICR_PIC1_Msk                       (0xcUL)                   /*!< PE ICR: PIC1 (Bitfield-Mask: 0x03)                          */
#define PE_ICR_PIC2_Pos                       (4UL)                     /*!< PE ICR: PIC2 (Bit 4)                                        */
#define PE_ICR_PIC2_Msk                       (0x30UL)                  /*!< PE ICR: PIC2 (Bitfield-Mask: 0x03)                          */
#define PE_ICR_PIC3_Pos                       (6UL)                     /*!< PE ICR: PIC3 (Bit 6)                                        */
#define PE_ICR_PIC3_Msk                       (0xc0UL)                  /*!< PE ICR: PIC3 (Bitfield-Mask: 0x03)                          */
#define PE_ICR_PIC4_Pos                       (8UL)                     /*!< PE ICR: PIC4 (Bit 8)                                        */
#define PE_ICR_PIC4_Msk                       (0x300UL)                 /*!< PE ICR: PIC4 (Bitfield-Mask: 0x03)                          */
#define PE_ICR_PIC5_Pos                       (10UL)                    /*!< PE ICR: PIC5 (Bit 10)                                       */
#define PE_ICR_PIC5_Msk                       (0xc00UL)                 /*!< PE ICR: PIC5 (Bitfield-Mask: 0x03)                          */
#define PE_ICR_PIC6_Pos                       (12UL)                    /*!< PE ICR: PIC6 (Bit 12)                                       */
#define PE_ICR_PIC6_Msk                       (0x3000UL)                /*!< PE ICR: PIC6 (Bitfield-Mask: 0x03)                          */
#define PE_ICR_PIC7_Pos                       (14UL)                    /*!< PE ICR: PIC7 (Bit 14)                                       */
#define PE_ICR_PIC7_Msk                       (0xc000UL)                /*!< PE ICR: PIC7 (Bitfield-Mask: 0x03)                          */
#define PE_ICR_PIC8_Pos                       (16UL)                    /*!< PE ICR: PIC8 (Bit 16)                                       */
#define PE_ICR_PIC8_Msk                       (0x30000UL)               /*!< PE ICR: PIC8 (Bitfield-Mask: 0x03)                          */
#define PE_ICR_PIC9_Pos                       (18UL)                    /*!< PE ICR: PIC9 (Bit 18)                                       */
#define PE_ICR_PIC9_Msk                       (0xc0000UL)               /*!< PE ICR: PIC9 (Bitfield-Mask: 0x03)                          */
#define PE_ICR_PIC10_Pos                      (20UL)                    /*!< PE ICR: PIC10 (Bit 20)                                      */
#define PE_ICR_PIC10_Msk                      (0x300000UL)              /*!< PE ICR: PIC10 (Bitfield-Mask: 0x03)                         */
#define PE_ICR_PIC11_Pos                      (22UL)                    /*!< PE ICR: PIC11 (Bit 22)                                      */
#define PE_ICR_PIC11_Msk                      (0xc00000UL)              /*!< PE ICR: PIC11 (Bitfield-Mask: 0x03)                         */
#define PE_ICR_PIC12_Pos                      (24UL)                    /*!< PE ICR: PIC12 (Bit 24)                                      */
#define PE_ICR_PIC12_Msk                      (0x3000000UL)             /*!< PE ICR: PIC12 (Bitfield-Mask: 0x03)                         */
#define PE_ICR_PIC13_Pos                      (26UL)                    /*!< PE ICR: PIC13 (Bit 26)                                      */
#define PE_ICR_PIC13_Msk                      (0xc000000UL)             /*!< PE ICR: PIC13 (Bitfield-Mask: 0x03)                         */
#define PE_ICR_PIC14_Pos                      (28UL)                    /*!< PE ICR: PIC14 (Bit 28)                                      */
#define PE_ICR_PIC14_Msk                      (0x30000000UL)            /*!< PE ICR: PIC14 (Bitfield-Mask: 0x03)                         */
#define PE_ICR_PIC15_Pos                      (30UL)                    /*!< PE ICR: PIC15 (Bit 30)                                      */
#define PE_ICR_PIC15_Msk                      (0xc0000000UL)            /*!< PE ICR: PIC15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PE_ODR  ----------------------------------- */
#define PE_ODR_POD0_Pos                       (0UL)                     /*!< PE ODR: POD0 (Bit 0)                                        */
#define PE_ODR_POD0_Msk                       (0x1UL)                   /*!< PE ODR: POD0 (Bitfield-Mask: 0x01)                          */
#define PE_ODR_POD1_Pos                       (1UL)                     /*!< PE ODR: POD1 (Bit 1)                                        */
#define PE_ODR_POD1_Msk                       (0x2UL)                   /*!< PE ODR: POD1 (Bitfield-Mask: 0x01)                          */
#define PE_ODR_POD2_Pos                       (2UL)                     /*!< PE ODR: POD2 (Bit 2)                                        */
#define PE_ODR_POD2_Msk                       (0x4UL)                   /*!< PE ODR: POD2 (Bitfield-Mask: 0x01)                          */
#define PE_ODR_POD3_Pos                       (3UL)                     /*!< PE ODR: POD3 (Bit 3)                                        */
#define PE_ODR_POD3_Msk                       (0x8UL)                   /*!< PE ODR: POD3 (Bitfield-Mask: 0x01)                          */
#define PE_ODR_POD4_Pos                       (4UL)                     /*!< PE ODR: POD4 (Bit 4)                                        */
#define PE_ODR_POD4_Msk                       (0x10UL)                  /*!< PE ODR: POD4 (Bitfield-Mask: 0x01)                          */
#define PE_ODR_POD5_Pos                       (5UL)                     /*!< PE ODR: POD5 (Bit 5)                                        */
#define PE_ODR_POD5_Msk                       (0x20UL)                  /*!< PE ODR: POD5 (Bitfield-Mask: 0x01)                          */
#define PE_ODR_POD6_Pos                       (6UL)                     /*!< PE ODR: POD6 (Bit 6)                                        */
#define PE_ODR_POD6_Msk                       (0x40UL)                  /*!< PE ODR: POD6 (Bitfield-Mask: 0x01)                          */
#define PE_ODR_POD7_Pos                       (7UL)                     /*!< PE ODR: POD7 (Bit 7)                                        */
#define PE_ODR_POD7_Msk                       (0x80UL)                  /*!< PE ODR: POD7 (Bitfield-Mask: 0x01)                          */
#define PE_ODR_POD8_Pos                       (8UL)                     /*!< PE ODR: POD8 (Bit 8)                                        */
#define PE_ODR_POD8_Msk                       (0x100UL)                 /*!< PE ODR: POD8 (Bitfield-Mask: 0x01)                          */
#define PE_ODR_POD9_Pos                       (9UL)                     /*!< PE ODR: POD9 (Bit 9)                                        */
#define PE_ODR_POD9_Msk                       (0x200UL)                 /*!< PE ODR: POD9 (Bitfield-Mask: 0x01)                          */
#define PE_ODR_POD10_Pos                      (10UL)                    /*!< PE ODR: POD10 (Bit 10)                                      */
#define PE_ODR_POD10_Msk                      (0x400UL)                 /*!< PE ODR: POD10 (Bitfield-Mask: 0x01)                         */
#define PE_ODR_POD11_Pos                      (11UL)                    /*!< PE ODR: POD11 (Bit 11)                                      */
#define PE_ODR_POD11_Msk                      (0x800UL)                 /*!< PE ODR: POD11 (Bitfield-Mask: 0x01)                         */
#define PE_ODR_POD12_Pos                      (12UL)                    /*!< PE ODR: POD12 (Bit 12)                                      */
#define PE_ODR_POD12_Msk                      (0x1000UL)                /*!< PE ODR: POD12 (Bitfield-Mask: 0x01)                         */
#define PE_ODR_POD13_Pos                      (13UL)                    /*!< PE ODR: POD13 (Bit 13)                                      */
#define PE_ODR_POD13_Msk                      (0x2000UL)                /*!< PE ODR: POD13 (Bitfield-Mask: 0x01)                         */
#define PE_ODR_POD14_Pos                      (14UL)                    /*!< PE ODR: POD14 (Bit 14)                                      */
#define PE_ODR_POD14_Msk                      (0x4000UL)                /*!< PE ODR: POD14 (Bitfield-Mask: 0x01)                         */
#define PE_ODR_POD15_Pos                      (15UL)                    /*!< PE ODR: POD15 (Bit 15)                                      */
#define PE_ODR_POD15_Msk                      (0x8000UL)                /*!< PE ODR: POD15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PE_IDR  ----------------------------------- */
#define PE_IDR_PID0_Pos                       (0UL)                     /*!< PE IDR: PID0 (Bit 0)                                        */
#define PE_IDR_PID0_Msk                       (0x1UL)                   /*!< PE IDR: PID0 (Bitfield-Mask: 0x01)                          */
#define PE_IDR_PID1_Pos                       (1UL)                     /*!< PE IDR: PID1 (Bit 1)                                        */
#define PE_IDR_PID1_Msk                       (0x2UL)                   /*!< PE IDR: PID1 (Bitfield-Mask: 0x01)                          */
#define PE_IDR_PID2_Pos                       (2UL)                     /*!< PE IDR: PID2 (Bit 2)                                        */
#define PE_IDR_PID2_Msk                       (0x4UL)                   /*!< PE IDR: PID2 (Bitfield-Mask: 0x01)                          */
#define PE_IDR_PID3_Pos                       (3UL)                     /*!< PE IDR: PID3 (Bit 3)                                        */
#define PE_IDR_PID3_Msk                       (0x8UL)                   /*!< PE IDR: PID3 (Bitfield-Mask: 0x01)                          */
#define PE_IDR_PID4_Pos                       (4UL)                     /*!< PE IDR: PID4 (Bit 4)                                        */
#define PE_IDR_PID4_Msk                       (0x10UL)                  /*!< PE IDR: PID4 (Bitfield-Mask: 0x01)                          */
#define PE_IDR_PID5_Pos                       (5UL)                     /*!< PE IDR: PID5 (Bit 5)                                        */
#define PE_IDR_PID5_Msk                       (0x20UL)                  /*!< PE IDR: PID5 (Bitfield-Mask: 0x01)                          */
#define PE_IDR_PID6_Pos                       (6UL)                     /*!< PE IDR: PID6 (Bit 6)                                        */
#define PE_IDR_PID6_Msk                       (0x40UL)                  /*!< PE IDR: PID6 (Bitfield-Mask: 0x01)                          */
#define PE_IDR_PID7_Pos                       (7UL)                     /*!< PE IDR: PID7 (Bit 7)                                        */
#define PE_IDR_PID7_Msk                       (0x80UL)                  /*!< PE IDR: PID7 (Bitfield-Mask: 0x01)                          */
#define PE_IDR_PID8_Pos                       (8UL)                     /*!< PE IDR: PID8 (Bit 8)                                        */
#define PE_IDR_PID8_Msk                       (0x100UL)                 /*!< PE IDR: PID8 (Bitfield-Mask: 0x01)                          */
#define PE_IDR_PID9_Pos                       (9UL)                     /*!< PE IDR: PID9 (Bit 9)                                        */
#define PE_IDR_PID9_Msk                       (0x200UL)                 /*!< PE IDR: PID9 (Bitfield-Mask: 0x01)                          */
#define PE_IDR_PID10_Pos                      (10UL)                    /*!< PE IDR: PID10 (Bit 10)                                      */
#define PE_IDR_PID10_Msk                      (0x400UL)                 /*!< PE IDR: PID10 (Bitfield-Mask: 0x01)                         */
#define PE_IDR_PID11_Pos                      (11UL)                    /*!< PE IDR: PID11 (Bit 11)                                      */
#define PE_IDR_PID11_Msk                      (0x800UL)                 /*!< PE IDR: PID11 (Bitfield-Mask: 0x01)                         */
#define PE_IDR_PID12_Pos                      (12UL)                    /*!< PE IDR: PID12 (Bit 12)                                      */
#define PE_IDR_PID12_Msk                      (0x1000UL)                /*!< PE IDR: PID12 (Bitfield-Mask: 0x01)                         */
#define PE_IDR_PID13_Pos                      (13UL)                    /*!< PE IDR: PID13 (Bit 13)                                      */
#define PE_IDR_PID13_Msk                      (0x2000UL)                /*!< PE IDR: PID13 (Bitfield-Mask: 0x01)                         */
#define PE_IDR_PID14_Pos                      (14UL)                    /*!< PE IDR: PID14 (Bit 14)                                      */
#define PE_IDR_PID14_Msk                      (0x4000UL)                /*!< PE IDR: PID14 (Bitfield-Mask: 0x01)                         */
#define PE_IDR_PID15_Pos                      (15UL)                    /*!< PE IDR: PID15 (Bit 15)                                      */
#define PE_IDR_PID15_Msk                      (0x8000UL)                /*!< PE IDR: PID15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PE_BSR  ----------------------------------- */
#define PE_BSR_BSD0_Pos                       (0UL)                     /*!< PE BSR: BSD0 (Bit 0)                                        */
#define PE_BSR_BSD0_Msk                       (0x1UL)                   /*!< PE BSR: BSD0 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BSD1_Pos                       (1UL)                     /*!< PE BSR: BSD1 (Bit 1)                                        */
#define PE_BSR_BSD1_Msk                       (0x2UL)                   /*!< PE BSR: BSD1 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BSD2_Pos                       (2UL)                     /*!< PE BSR: BSD2 (Bit 2)                                        */
#define PE_BSR_BSD2_Msk                       (0x4UL)                   /*!< PE BSR: BSD2 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BSD3_Pos                       (3UL)                     /*!< PE BSR: BSD3 (Bit 3)                                        */
#define PE_BSR_BSD3_Msk                       (0x8UL)                   /*!< PE BSR: BSD3 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BSD4_Pos                       (4UL)                     /*!< PE BSR: BSD4 (Bit 4)                                        */
#define PE_BSR_BSD4_Msk                       (0x10UL)                  /*!< PE BSR: BSD4 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BSD5_Pos                       (5UL)                     /*!< PE BSR: BSD5 (Bit 5)                                        */
#define PE_BSR_BSD5_Msk                       (0x20UL)                  /*!< PE BSR: BSD5 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BSD6_Pos                       (6UL)                     /*!< PE BSR: BSD6 (Bit 6)                                        */
#define PE_BSR_BSD6_Msk                       (0x40UL)                  /*!< PE BSR: BSD6 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BSD7_Pos                       (7UL)                     /*!< PE BSR: BSD7 (Bit 7)                                        */
#define PE_BSR_BSD7_Msk                       (0x80UL)                  /*!< PE BSR: BSD7 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BSD8_Pos                       (8UL)                     /*!< PE BSR: BSD8 (Bit 8)                                        */
#define PE_BSR_BSD8_Msk                       (0x100UL)                 /*!< PE BSR: BSD8 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BSD9_Pos                       (9UL)                     /*!< PE BSR: BSD9 (Bit 9)                                        */
#define PE_BSR_BSD9_Msk                       (0x200UL)                 /*!< PE BSR: BSD9 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BSD10_Pos                      (10UL)                    /*!< PE BSR: BSD10 (Bit 10)                                      */
#define PE_BSR_BSD10_Msk                      (0x400UL)                 /*!< PE BSR: BSD10 (Bitfield-Mask: 0x01)                         */
#define PE_BSR_BSD11_Pos                      (11UL)                    /*!< PE BSR: BSD11 (Bit 11)                                      */
#define PE_BSR_BSD11_Msk                      (0x800UL)                 /*!< PE BSR: BSD11 (Bitfield-Mask: 0x01)                         */
#define PE_BSR_BSD12_Pos                      (12UL)                    /*!< PE BSR: BSD12 (Bit 12)                                      */
#define PE_BSR_BSD12_Msk                      (0x1000UL)                /*!< PE BSR: BSD12 (Bitfield-Mask: 0x01)                         */
#define PE_BSR_BSD13_Pos                      (13UL)                    /*!< PE BSR: BSD13 (Bit 13)                                      */
#define PE_BSR_BSD13_Msk                      (0x2000UL)                /*!< PE BSR: BSD13 (Bitfield-Mask: 0x01)                         */
#define PE_BSR_BSD14_Pos                      (14UL)                    /*!< PE BSR: BSD14 (Bit 14)                                      */
#define PE_BSR_BSD14_Msk                      (0x4000UL)                /*!< PE BSR: BSD14 (Bitfield-Mask: 0x01)                         */
#define PE_BSR_BSD15_Pos                      (15UL)                    /*!< PE BSR: BSD15 (Bit 15)                                      */
#define PE_BSR_BSD15_Msk                      (0x8000UL)                /*!< PE BSR: BSD15 (Bitfield-Mask: 0x01)                         */
#define PE_BSR_BCD0_Pos                       (16UL)                    /*!< PE BSR: BCD0 (Bit 16)                                       */
#define PE_BSR_BCD0_Msk                       (0x10000UL)               /*!< PE BSR: BCD0 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BCD1_Pos                       (17UL)                    /*!< PE BSR: BCD1 (Bit 17)                                       */
#define PE_BSR_BCD1_Msk                       (0x20000UL)               /*!< PE BSR: BCD1 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BCD2_Pos                       (18UL)                    /*!< PE BSR: BCD2 (Bit 18)                                       */
#define PE_BSR_BCD2_Msk                       (0x40000UL)               /*!< PE BSR: BCD2 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BCD3_Pos                       (19UL)                    /*!< PE BSR: BCD3 (Bit 19)                                       */
#define PE_BSR_BCD3_Msk                       (0x80000UL)               /*!< PE BSR: BCD3 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BCD4_Pos                       (20UL)                    /*!< PE BSR: BCD4 (Bit 20)                                       */
#define PE_BSR_BCD4_Msk                       (0x100000UL)              /*!< PE BSR: BCD4 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BCD5_Pos                       (21UL)                    /*!< PE BSR: BCD5 (Bit 21)                                       */
#define PE_BSR_BCD5_Msk                       (0x200000UL)              /*!< PE BSR: BCD5 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BCD6_Pos                       (22UL)                    /*!< PE BSR: BCD6 (Bit 22)                                       */
#define PE_BSR_BCD6_Msk                       (0x400000UL)              /*!< PE BSR: BCD6 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BCD7_Pos                       (23UL)                    /*!< PE BSR: BCD7 (Bit 23)                                       */
#define PE_BSR_BCD7_Msk                       (0x800000UL)              /*!< PE BSR: BCD7 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BCD8_Pos                       (24UL)                    /*!< PE BSR: BCD8 (Bit 24)                                       */
#define PE_BSR_BCD8_Msk                       (0x1000000UL)             /*!< PE BSR: BCD8 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BCD9_Pos                       (25UL)                    /*!< PE BSR: BCD9 (Bit 25)                                       */
#define PE_BSR_BCD9_Msk                       (0x2000000UL)             /*!< PE BSR: BCD9 (Bitfield-Mask: 0x01)                          */
#define PE_BSR_BCD10_Pos                      (26UL)                    /*!< PE BSR: BCD10 (Bit 26)                                      */
#define PE_BSR_BCD10_Msk                      (0x4000000UL)             /*!< PE BSR: BCD10 (Bitfield-Mask: 0x01)                         */
#define PE_BSR_BCD11_Pos                      (27UL)                    /*!< PE BSR: BCD11 (Bit 27)                                      */
#define PE_BSR_BCD11_Msk                      (0x8000000UL)             /*!< PE BSR: BCD11 (Bitfield-Mask: 0x01)                         */
#define PE_BSR_BCD12_Pos                      (28UL)                    /*!< PE BSR: BCD12 (Bit 28)                                      */
#define PE_BSR_BCD12_Msk                      (0x10000000UL)            /*!< PE BSR: BCD12 (Bitfield-Mask: 0x01)                         */
#define PE_BSR_BCD13_Pos                      (29UL)                    /*!< PE BSR: BCD13 (Bit 29)                                      */
#define PE_BSR_BCD13_Msk                      (0x20000000UL)            /*!< PE BSR: BCD13 (Bitfield-Mask: 0x01)                         */
#define PE_BSR_BCD14_Pos                      (30UL)                    /*!< PE BSR: BCD14 (Bit 30)                                      */
#define PE_BSR_BCD14_Msk                      (0x40000000UL)            /*!< PE BSR: BCD14 (Bitfield-Mask: 0x01)                         */
#define PE_BSR_BCD15_Pos                      (31UL)                    /*!< PE BSR: BCD15 (Bit 31)                                      */
#define PE_BSR_BCD15_Msk                      (0x80000000UL)            /*!< PE BSR: BCD15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PE_BCR  ----------------------------------- */
#define PE_BCR_BCD0_Pos                       (0UL)                     /*!< PE BCR: BCD0 (Bit 0)                                        */
#define PE_BCR_BCD0_Msk                       (0x1UL)                   /*!< PE BCR: BCD0 (Bitfield-Mask: 0x01)                          */
#define PE_BCR_BCD1_Pos                       (1UL)                     /*!< PE BCR: BCD1 (Bit 1)                                        */
#define PE_BCR_BCD1_Msk                       (0x2UL)                   /*!< PE BCR: BCD1 (Bitfield-Mask: 0x01)                          */
#define PE_BCR_BCD2_Pos                       (2UL)                     /*!< PE BCR: BCD2 (Bit 2)                                        */
#define PE_BCR_BCD2_Msk                       (0x4UL)                   /*!< PE BCR: BCD2 (Bitfield-Mask: 0x01)                          */
#define PE_BCR_BCD3_Pos                       (3UL)                     /*!< PE BCR: BCD3 (Bit 3)                                        */
#define PE_BCR_BCD3_Msk                       (0x8UL)                   /*!< PE BCR: BCD3 (Bitfield-Mask: 0x01)                          */
#define PE_BCR_BCD4_Pos                       (4UL)                     /*!< PE BCR: BCD4 (Bit 4)                                        */
#define PE_BCR_BCD4_Msk                       (0x10UL)                  /*!< PE BCR: BCD4 (Bitfield-Mask: 0x01)                          */
#define PE_BCR_BCD5_Pos                       (5UL)                     /*!< PE BCR: BCD5 (Bit 5)                                        */
#define PE_BCR_BCD5_Msk                       (0x20UL)                  /*!< PE BCR: BCD5 (Bitfield-Mask: 0x01)                          */
#define PE_BCR_BCD6_Pos                       (6UL)                     /*!< PE BCR: BCD6 (Bit 6)                                        */
#define PE_BCR_BCD6_Msk                       (0x40UL)                  /*!< PE BCR: BCD6 (Bitfield-Mask: 0x01)                          */
#define PE_BCR_BCD7_Pos                       (7UL)                     /*!< PE BCR: BCD7 (Bit 7)                                        */
#define PE_BCR_BCD7_Msk                       (0x80UL)                  /*!< PE BCR: BCD7 (Bitfield-Mask: 0x01)                          */
#define PE_BCR_BCD8_Pos                       (8UL)                     /*!< PE BCR: BCD8 (Bit 8)                                        */
#define PE_BCR_BCD8_Msk                       (0x100UL)                 /*!< PE BCR: BCD8 (Bitfield-Mask: 0x01)                          */
#define PE_BCR_BCD9_Pos                       (9UL)                     /*!< PE BCR: BCD9 (Bit 9)                                        */
#define PE_BCR_BCD9_Msk                       (0x200UL)                 /*!< PE BCR: BCD9 (Bitfield-Mask: 0x01)                          */
#define PE_BCR_BCD10_Pos                      (10UL)                    /*!< PE BCR: BCD10 (Bit 10)                                      */
#define PE_BCR_BCD10_Msk                      (0x400UL)                 /*!< PE BCR: BCD10 (Bitfield-Mask: 0x01)                         */
#define PE_BCR_BCD11_Pos                      (11UL)                    /*!< PE BCR: BCD11 (Bit 11)                                      */
#define PE_BCR_BCD11_Msk                      (0x800UL)                 /*!< PE BCR: BCD11 (Bitfield-Mask: 0x01)                         */
#define PE_BCR_BCD12_Pos                      (12UL)                    /*!< PE BCR: BCD12 (Bit 12)                                      */
#define PE_BCR_BCD12_Msk                      (0x1000UL)                /*!< PE BCR: BCD12 (Bitfield-Mask: 0x01)                         */
#define PE_BCR_BCD13_Pos                      (13UL)                    /*!< PE BCR: BCD13 (Bit 13)                                      */
#define PE_BCR_BCD13_Msk                      (0x2000UL)                /*!< PE BCR: BCD13 (Bitfield-Mask: 0x01)                         */
#define PE_BCR_BCD14_Pos                      (14UL)                    /*!< PE BCR: BCD14 (Bit 14)                                      */
#define PE_BCR_BCD14_Msk                      (0x4000UL)                /*!< PE BCR: BCD14 (Bitfield-Mask: 0x01)                         */
#define PE_BCR_BCD15_Pos                      (15UL)                    /*!< PE BCR: BCD15 (Bit 15)                                      */
#define PE_BCR_BCD15_Msk                      (0x8000UL)                /*!< PE BCR: BCD15 (Bitfield-Mask: 0x01)                         */


/* ================================================================================ */
/* ================           struct 'PF' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  PF_MR1  ----------------------------------- */
#define PF_MR1_P0MUX_Pos                      (0UL)                     /*!< PF MR1: P0MUX (Bit 0)                                       */
#define PF_MR1_P0MUX_Msk                      (0x7UL)                   /*!< PF MR1: P0MUX (Bitfield-Mask: 0x07)                         */
#define PF_MR1_P1MUX_Pos                      (4UL)                     /*!< PF MR1: P1MUX (Bit 4)                                       */
#define PF_MR1_P1MUX_Msk                      (0x70UL)                  /*!< PF MR1: P1MUX (Bitfield-Mask: 0x07)                         */
#define PF_MR1_P2MUX_Pos                      (8UL)                     /*!< PF MR1: P2MUX (Bit 8)                                       */
#define PF_MR1_P2MUX_Msk                      (0x700UL)                 /*!< PF MR1: P2MUX (Bitfield-Mask: 0x07)                         */
#define PF_MR1_P3MUX_Pos                      (12UL)                    /*!< PF MR1: P3MUX (Bit 12)                                      */
#define PF_MR1_P3MUX_Msk                      (0x7000UL)                /*!< PF MR1: P3MUX (Bitfield-Mask: 0x07)                         */
#define PF_MR1_P4MUX_Pos                      (16UL)                    /*!< PF MR1: P4MUX (Bit 16)                                      */
#define PF_MR1_P4MUX_Msk                      (0x70000UL)               /*!< PF MR1: P4MUX (Bitfield-Mask: 0x07)                         */
#define PF_MR1_P5MUX_Pos                      (20UL)                    /*!< PF MR1: P5MUX (Bit 20)                                      */
#define PF_MR1_P5MUX_Msk                      (0x700000UL)              /*!< PF MR1: P5MUX (Bitfield-Mask: 0x07)                         */
#define PF_MR1_P6MUX_Pos                      (24UL)                    /*!< PF MR1: P6MUX (Bit 24)                                      */
#define PF_MR1_P6MUX_Msk                      (0x7000000UL)             /*!< PF MR1: P6MUX (Bitfield-Mask: 0x07)                         */
#define PF_MR1_P7MUX_Pos                      (28UL)                    /*!< PF MR1: P7MUX (Bit 28)                                      */
#define PF_MR1_P7MUX_Msk                      (0x70000000UL)            /*!< PF MR1: P7MUX (Bitfield-Mask: 0x07)                         */

/* -----------------------------------  PF_MR2  ----------------------------------- */
#define PF_MR2_P8MUX_Pos                      (0UL)                     /*!< PF MR2: P8MUX (Bit 0)                                       */
#define PF_MR2_P8MUX_Msk                      (0x7UL)                   /*!< PF MR2: P8MUX (Bitfield-Mask: 0x07)                         */
#define PF_MR2_P9MUX_Pos                      (4UL)                     /*!< PF MR2: P9MUX (Bit 4)                                       */
#define PF_MR2_P9MUX_Msk                      (0x70UL)                  /*!< PF MR2: P9MUX (Bitfield-Mask: 0x07)                         */
#define PF_MR2_P10MUX_Pos                     (8UL)                     /*!< PF MR2: P10MUX (Bit 8)                                      */
#define PF_MR2_P10MUX_Msk                     (0x700UL)                 /*!< PF MR2: P10MUX (Bitfield-Mask: 0x07)                        */
#define PF_MR2_P11MUX_Pos                     (12UL)                    /*!< PF MR2: P11MUX (Bit 12)                                     */
#define PF_MR2_P11MUX_Msk                     (0x7000UL)                /*!< PF MR2: P11MUX (Bitfield-Mask: 0x07)                        */
#define PF_MR2_P12MUX_Pos                     (16UL)                    /*!< PF MR2: P12MUX (Bit 16)                                     */
#define PF_MR2_P12MUX_Msk                     (0x70000UL)               /*!< PF MR2: P12MUX (Bitfield-Mask: 0x07)                        */
#define PF_MR2_P13MUX_Pos                     (20UL)                    /*!< PF MR2: P13MUX (Bit 20)                                     */
#define PF_MR2_P13MUX_Msk                     (0x700000UL)              /*!< PF MR2: P13MUX (Bitfield-Mask: 0x07)                        */
#define PF_MR2_P14MUX_Pos                     (24UL)                    /*!< PF MR2: P14MUX (Bit 24)                                     */
#define PF_MR2_P14MUX_Msk                     (0x7000000UL)             /*!< PF MR2: P14MUX (Bitfield-Mask: 0x07)                        */
#define PF_MR2_P15MUX_Pos                     (28UL)                    /*!< PF MR2: P15MUX (Bit 28)                                     */
#define PF_MR2_P15MUX_Msk                     (0x70000000UL)            /*!< PF MR2: P15MUX (Bitfield-Mask: 0x07)                        */

/* ------------------------------------  PF_CR  ----------------------------------- */
#define PF_CR_P0_Pos                          (0UL)                     /*!< PF CR: P0 (Bit 0)                                           */
#define PF_CR_P0_Msk                          (0x3UL)                   /*!< PF CR: P0 (Bitfield-Mask: 0x03)                             */
#define PF_CR_P1_Pos                          (2UL)                     /*!< PF CR: P1 (Bit 2)                                           */
#define PF_CR_P1_Msk                          (0xcUL)                   /*!< PF CR: P1 (Bitfield-Mask: 0x03)                             */
#define PF_CR_P2_Pos                          (4UL)                     /*!< PF CR: P2 (Bit 4)                                           */
#define PF_CR_P2_Msk                          (0x30UL)                  /*!< PF CR: P2 (Bitfield-Mask: 0x03)                             */
#define PF_CR_P3_Pos                          (6UL)                     /*!< PF CR: P3 (Bit 6)                                           */
#define PF_CR_P3_Msk                          (0xc0UL)                  /*!< PF CR: P3 (Bitfield-Mask: 0x03)                             */
#define PF_CR_P4_Pos                          (8UL)                     /*!< PF CR: P4 (Bit 8)                                           */
#define PF_CR_P4_Msk                          (0x300UL)                 /*!< PF CR: P4 (Bitfield-Mask: 0x03)                             */
#define PF_CR_P5_Pos                          (10UL)                    /*!< PF CR: P5 (Bit 10)                                          */
#define PF_CR_P5_Msk                          (0xc00UL)                 /*!< PF CR: P5 (Bitfield-Mask: 0x03)                             */
#define PF_CR_P6_Pos                          (12UL)                    /*!< PF CR: P6 (Bit 12)                                          */
#define PF_CR_P6_Msk                          (0x3000UL)                /*!< PF CR: P6 (Bitfield-Mask: 0x03)                             */
#define PF_CR_P7_Pos                          (14UL)                    /*!< PF CR: P7 (Bit 14)                                          */
#define PF_CR_P7_Msk                          (0xc000UL)                /*!< PF CR: P7 (Bitfield-Mask: 0x03)                             */
#define PF_CR_P8_Pos                          (16UL)                    /*!< PF CR: P8 (Bit 16)                                          */
#define PF_CR_P8_Msk                          (0x30000UL)               /*!< PF CR: P8 (Bitfield-Mask: 0x03)                             */
#define PF_CR_P9_Pos                          (18UL)                    /*!< PF CR: P9 (Bit 18)                                          */
#define PF_CR_P9_Msk                          (0xc0000UL)               /*!< PF CR: P9 (Bitfield-Mask: 0x03)                             */
#define PF_CR_P10_Pos                         (20UL)                    /*!< PF CR: P10 (Bit 20)                                         */
#define PF_CR_P10_Msk                         (0x300000UL)              /*!< PF CR: P10 (Bitfield-Mask: 0x03)                            */
#define PF_CR_P11_Pos                         (22UL)                    /*!< PF CR: P11 (Bit 22)                                         */
#define PF_CR_P11_Msk                         (0xc00000UL)              /*!< PF CR: P11 (Bitfield-Mask: 0x03)                            */
#define PF_CR_P12_Pos                         (24UL)                    /*!< PF CR: P12 (Bit 24)                                         */
#define PF_CR_P12_Msk                         (0x3000000UL)             /*!< PF CR: P12 (Bitfield-Mask: 0x03)                            */
#define PF_CR_P13_Pos                         (26UL)                    /*!< PF CR: P13 (Bit 26)                                         */
#define PF_CR_P13_Msk                         (0xc000000UL)             /*!< PF CR: P13 (Bitfield-Mask: 0x03)                            */
#define PF_CR_P14_Pos                         (28UL)                    /*!< PF CR: P14 (Bit 28)                                         */
#define PF_CR_P14_Msk                         (0x30000000UL)            /*!< PF CR: P14 (Bitfield-Mask: 0x03)                            */
#define PF_CR_P15_Pos                         (30UL)                    /*!< PF CR: P15 (Bit 30)                                         */
#define PF_CR_P15_Msk                         (0xc0000000UL)            /*!< PF CR: P15 (Bitfield-Mask: 0x03)                            */

/* -----------------------------------  PF_PRCR  ---------------------------------- */
#define PF_PRCR_PUE0_Pos                      (0UL)                     /*!< PF PRCR: PUE0 (Bit 0)                                       */
#define PF_PRCR_PUE0_Msk                      (0x3UL)                   /*!< PF PRCR: PUE0 (Bitfield-Mask: 0x03)                         */
#define PF_PRCR_PUE1_Pos                      (2UL)                     /*!< PF PRCR: PUE1 (Bit 2)                                       */
#define PF_PRCR_PUE1_Msk                      (0xcUL)                   /*!< PF PRCR: PUE1 (Bitfield-Mask: 0x03)                         */
#define PF_PRCR_PUE2_Pos                      (4UL)                     /*!< PF PRCR: PUE2 (Bit 4)                                       */
#define PF_PRCR_PUE2_Msk                      (0x30UL)                  /*!< PF PRCR: PUE2 (Bitfield-Mask: 0x03)                         */
#define PF_PRCR_PUE3_Pos                      (6UL)                     /*!< PF PRCR: PUE3 (Bit 6)                                       */
#define PF_PRCR_PUE3_Msk                      (0xc0UL)                  /*!< PF PRCR: PUE3 (Bitfield-Mask: 0x03)                         */
#define PF_PRCR_PUE4_Pos                      (8UL)                     /*!< PF PRCR: PUE4 (Bit 8)                                       */
#define PF_PRCR_PUE4_Msk                      (0x300UL)                 /*!< PF PRCR: PUE4 (Bitfield-Mask: 0x03)                         */
#define PF_PRCR_PUE5_Pos                      (10UL)                    /*!< PF PRCR: PUE5 (Bit 10)                                      */
#define PF_PRCR_PUE5_Msk                      (0xc00UL)                 /*!< PF PRCR: PUE5 (Bitfield-Mask: 0x03)                         */
#define PF_PRCR_PUE6_Pos                      (12UL)                    /*!< PF PRCR: PUE6 (Bit 12)                                      */
#define PF_PRCR_PUE6_Msk                      (0x3000UL)                /*!< PF PRCR: PUE6 (Bitfield-Mask: 0x03)                         */
#define PF_PRCR_PUE7_Pos                      (14UL)                    /*!< PF PRCR: PUE7 (Bit 14)                                      */
#define PF_PRCR_PUE7_Msk                      (0xc000UL)                /*!< PF PRCR: PUE7 (Bitfield-Mask: 0x03)                         */
#define PF_PRCR_PUE8_Pos                      (16UL)                    /*!< PF PRCR: PUE8 (Bit 16)                                      */
#define PF_PRCR_PUE8_Msk                      (0x30000UL)               /*!< PF PRCR: PUE8 (Bitfield-Mask: 0x03)                         */
#define PF_PRCR_PUE9_Pos                      (18UL)                    /*!< PF PRCR: PUE9 (Bit 18)                                      */
#define PF_PRCR_PUE9_Msk                      (0xc0000UL)               /*!< PF PRCR: PUE9 (Bitfield-Mask: 0x03)                         */
#define PF_PRCR_PUE10_Pos                     (20UL)                    /*!< PF PRCR: PUE10 (Bit 20)                                     */
#define PF_PRCR_PUE10_Msk                     (0x300000UL)              /*!< PF PRCR: PUE10 (Bitfield-Mask: 0x03)                        */
#define PF_PRCR_PUE11_Pos                     (22UL)                    /*!< PF PRCR: PUE11 (Bit 22)                                     */
#define PF_PRCR_PUE11_Msk                     (0xc00000UL)              /*!< PF PRCR: PUE11 (Bitfield-Mask: 0x03)                        */
#define PF_PRCR_PUE12_Pos                     (24UL)                    /*!< PF PRCR: PUE12 (Bit 24)                                     */
#define PF_PRCR_PUE12_Msk                     (0x3000000UL)             /*!< PF PRCR: PUE12 (Bitfield-Mask: 0x03)                        */
#define PF_PRCR_PUE13_Pos                     (26UL)                    /*!< PF PRCR: PUE13 (Bit 26)                                     */
#define PF_PRCR_PUE13_Msk                     (0xc000000UL)             /*!< PF PRCR: PUE13 (Bitfield-Mask: 0x03)                        */
#define PF_PRCR_PUE14_Pos                     (28UL)                    /*!< PF PRCR: PUE14 (Bit 28)                                     */
#define PF_PRCR_PUE14_Msk                     (0x30000000UL)            /*!< PF PRCR: PUE14 (Bitfield-Mask: 0x03)                        */
#define PF_PRCR_PUE15_Pos                     (30UL)                    /*!< PF PRCR: PUE15 (Bit 30)                                     */
#define PF_PRCR_PUE15_Msk                     (0xc0000000UL)            /*!< PF PRCR: PUE15 (Bitfield-Mask: 0x03)                        */

/* -----------------------------------  PF_DER  ----------------------------------- */
#define PF_DER_PDE0_Pos                       (0UL)                     /*!< PF DER: PDE0 (Bit 0)                                        */
#define PF_DER_PDE0_Msk                       (0x1UL)                   /*!< PF DER: PDE0 (Bitfield-Mask: 0x01)                          */
#define PF_DER_PDE1_Pos                       (1UL)                     /*!< PF DER: PDE1 (Bit 1)                                        */
#define PF_DER_PDE1_Msk                       (0x2UL)                   /*!< PF DER: PDE1 (Bitfield-Mask: 0x01)                          */
#define PF_DER_PDE2_Pos                       (2UL)                     /*!< PF DER: PDE2 (Bit 2)                                        */
#define PF_DER_PDE2_Msk                       (0x4UL)                   /*!< PF DER: PDE2 (Bitfield-Mask: 0x01)                          */
#define PF_DER_PDE3_Pos                       (3UL)                     /*!< PF DER: PDE3 (Bit 3)                                        */
#define PF_DER_PDE3_Msk                       (0x8UL)                   /*!< PF DER: PDE3 (Bitfield-Mask: 0x01)                          */
#define PF_DER_PDE4_Pos                       (4UL)                     /*!< PF DER: PDE4 (Bit 4)                                        */
#define PF_DER_PDE4_Msk                       (0x10UL)                  /*!< PF DER: PDE4 (Bitfield-Mask: 0x01)                          */
#define PF_DER_PDE5_Pos                       (5UL)                     /*!< PF DER: PDE5 (Bit 5)                                        */
#define PF_DER_PDE5_Msk                       (0x20UL)                  /*!< PF DER: PDE5 (Bitfield-Mask: 0x01)                          */
#define PF_DER_PDE6_Pos                       (6UL)                     /*!< PF DER: PDE6 (Bit 6)                                        */
#define PF_DER_PDE6_Msk                       (0x40UL)                  /*!< PF DER: PDE6 (Bitfield-Mask: 0x01)                          */
#define PF_DER_PDE7_Pos                       (7UL)                     /*!< PF DER: PDE7 (Bit 7)                                        */
#define PF_DER_PDE7_Msk                       (0x80UL)                  /*!< PF DER: PDE7 (Bitfield-Mask: 0x01)                          */
#define PF_DER_PDE8_Pos                       (8UL)                     /*!< PF DER: PDE8 (Bit 8)                                        */
#define PF_DER_PDE8_Msk                       (0x100UL)                 /*!< PF DER: PDE8 (Bitfield-Mask: 0x01)                          */
#define PF_DER_PDE9_Pos                       (9UL)                     /*!< PF DER: PDE9 (Bit 9)                                        */
#define PF_DER_PDE9_Msk                       (0x200UL)                 /*!< PF DER: PDE9 (Bitfield-Mask: 0x01)                          */
#define PF_DER_PDE10_Pos                      (10UL)                    /*!< PF DER: PDE10 (Bit 10)                                      */
#define PF_DER_PDE10_Msk                      (0x400UL)                 /*!< PF DER: PDE10 (Bitfield-Mask: 0x01)                         */
#define PF_DER_PDE11_Pos                      (11UL)                    /*!< PF DER: PDE11 (Bit 11)                                      */
#define PF_DER_PDE11_Msk                      (0x800UL)                 /*!< PF DER: PDE11 (Bitfield-Mask: 0x01)                         */
#define PF_DER_PDE12_Pos                      (12UL)                    /*!< PF DER: PDE12 (Bit 12)                                      */
#define PF_DER_PDE12_Msk                      (0x1000UL)                /*!< PF DER: PDE12 (Bitfield-Mask: 0x01)                         */
#define PF_DER_PDE13_Pos                      (13UL)                    /*!< PF DER: PDE13 (Bit 13)                                      */
#define PF_DER_PDE13_Msk                      (0x2000UL)                /*!< PF DER: PDE13 (Bitfield-Mask: 0x01)                         */
#define PF_DER_PDE14_Pos                      (14UL)                    /*!< PF DER: PDE14 (Bit 14)                                      */
#define PF_DER_PDE14_Msk                      (0x4000UL)                /*!< PF DER: PDE14 (Bitfield-Mask: 0x01)                         */
#define PF_DER_PDE15_Pos                      (15UL)                    /*!< PF DER: PDE15 (Bit 15)                                      */
#define PF_DER_PDE15_Msk                      (0x8000UL)                /*!< PF DER: PDE15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PF_IER  ----------------------------------- */
#define PF_IER_PIE0_Pos                       (0UL)                     /*!< PF IER: PIE0 (Bit 0)                                        */
#define PF_IER_PIE0_Msk                       (0x3UL)                   /*!< PF IER: PIE0 (Bitfield-Mask: 0x03)                          */
#define PF_IER_PIE1_Pos                       (2UL)                     /*!< PF IER: PIE1 (Bit 2)                                        */
#define PF_IER_PIE1_Msk                       (0xcUL)                   /*!< PF IER: PIE1 (Bitfield-Mask: 0x03)                          */
#define PF_IER_PIE2_Pos                       (4UL)                     /*!< PF IER: PIE2 (Bit 4)                                        */
#define PF_IER_PIE2_Msk                       (0x30UL)                  /*!< PF IER: PIE2 (Bitfield-Mask: 0x03)                          */
#define PF_IER_PIE3_Pos                       (6UL)                     /*!< PF IER: PIE3 (Bit 6)                                        */
#define PF_IER_PIE3_Msk                       (0xc0UL)                  /*!< PF IER: PIE3 (Bitfield-Mask: 0x03)                          */
#define PF_IER_PIE4_Pos                       (8UL)                     /*!< PF IER: PIE4 (Bit 8)                                        */
#define PF_IER_PIE4_Msk                       (0x300UL)                 /*!< PF IER: PIE4 (Bitfield-Mask: 0x03)                          */
#define PF_IER_PIE5_Pos                       (10UL)                    /*!< PF IER: PIE5 (Bit 10)                                       */
#define PF_IER_PIE5_Msk                       (0xc00UL)                 /*!< PF IER: PIE5 (Bitfield-Mask: 0x03)                          */
#define PF_IER_PIE6_Pos                       (12UL)                    /*!< PF IER: PIE6 (Bit 12)                                       */
#define PF_IER_PIE6_Msk                       (0x3000UL)                /*!< PF IER: PIE6 (Bitfield-Mask: 0x03)                          */
#define PF_IER_PIE7_Pos                       (14UL)                    /*!< PF IER: PIE7 (Bit 14)                                       */
#define PF_IER_PIE7_Msk                       (0xc000UL)                /*!< PF IER: PIE7 (Bitfield-Mask: 0x03)                          */
#define PF_IER_PIE8_Pos                       (16UL)                    /*!< PF IER: PIE8 (Bit 16)                                       */
#define PF_IER_PIE8_Msk                       (0x30000UL)               /*!< PF IER: PIE8 (Bitfield-Mask: 0x03)                          */
#define PF_IER_PIE9_Pos                       (18UL)                    /*!< PF IER: PIE9 (Bit 18)                                       */
#define PF_IER_PIE9_Msk                       (0xc0000UL)               /*!< PF IER: PIE9 (Bitfield-Mask: 0x03)                          */
#define PF_IER_PIE10_Pos                      (20UL)                    /*!< PF IER: PIE10 (Bit 20)                                      */
#define PF_IER_PIE10_Msk                      (0x300000UL)              /*!< PF IER: PIE10 (Bitfield-Mask: 0x03)                         */
#define PF_IER_PIE11_Pos                      (22UL)                    /*!< PF IER: PIE11 (Bit 22)                                      */
#define PF_IER_PIE11_Msk                      (0xc00000UL)              /*!< PF IER: PIE11 (Bitfield-Mask: 0x03)                         */
#define PF_IER_PIE12_Pos                      (24UL)                    /*!< PF IER: PIE12 (Bit 24)                                      */
#define PF_IER_PIE12_Msk                      (0x3000000UL)             /*!< PF IER: PIE12 (Bitfield-Mask: 0x03)                         */
#define PF_IER_PIE13_Pos                      (26UL)                    /*!< PF IER: PIE13 (Bit 26)                                      */
#define PF_IER_PIE13_Msk                      (0xc000000UL)             /*!< PF IER: PIE13 (Bitfield-Mask: 0x03)                         */
#define PF_IER_PIE14_Pos                      (28UL)                    /*!< PF IER: PIE14 (Bit 28)                                      */
#define PF_IER_PIE14_Msk                      (0x30000000UL)            /*!< PF IER: PIE14 (Bitfield-Mask: 0x03)                         */
#define PF_IER_PIE15_Pos                      (30UL)                    /*!< PF IER: PIE15 (Bit 30)                                      */
#define PF_IER_PIE15_Msk                      (0xc0000000UL)            /*!< PF IER: PIE15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PF_ISR  ----------------------------------- */
#define PF_ISR_PIS0_Pos                       (0UL)                     /*!< PF ISR: PIS0 (Bit 0)                                        */
#define PF_ISR_PIS0_Msk                       (0x3UL)                   /*!< PF ISR: PIS0 (Bitfield-Mask: 0x03)                          */
#define PF_ISR_PIS1_Pos                       (2UL)                     /*!< PF ISR: PIS1 (Bit 2)                                        */
#define PF_ISR_PIS1_Msk                       (0xcUL)                   /*!< PF ISR: PIS1 (Bitfield-Mask: 0x03)                          */
#define PF_ISR_PIS2_Pos                       (4UL)                     /*!< PF ISR: PIS2 (Bit 4)                                        */
#define PF_ISR_PIS2_Msk                       (0x30UL)                  /*!< PF ISR: PIS2 (Bitfield-Mask: 0x03)                          */
#define PF_ISR_PIS3_Pos                       (6UL)                     /*!< PF ISR: PIS3 (Bit 6)                                        */
#define PF_ISR_PIS3_Msk                       (0xc0UL)                  /*!< PF ISR: PIS3 (Bitfield-Mask: 0x03)                          */
#define PF_ISR_PIS4_Pos                       (8UL)                     /*!< PF ISR: PIS4 (Bit 8)                                        */
#define PF_ISR_PIS4_Msk                       (0x300UL)                 /*!< PF ISR: PIS4 (Bitfield-Mask: 0x03)                          */
#define PF_ISR_PIS5_Pos                       (10UL)                    /*!< PF ISR: PIS5 (Bit 10)                                       */
#define PF_ISR_PIS5_Msk                       (0xc00UL)                 /*!< PF ISR: PIS5 (Bitfield-Mask: 0x03)                          */
#define PF_ISR_PIS6_Pos                       (12UL)                    /*!< PF ISR: PIS6 (Bit 12)                                       */
#define PF_ISR_PIS6_Msk                       (0x3000UL)                /*!< PF ISR: PIS6 (Bitfield-Mask: 0x03)                          */
#define PF_ISR_PIS7_Pos                       (14UL)                    /*!< PF ISR: PIS7 (Bit 14)                                       */
#define PF_ISR_PIS7_Msk                       (0xc000UL)                /*!< PF ISR: PIS7 (Bitfield-Mask: 0x03)                          */
#define PF_ISR_PIS8_Pos                       (16UL)                    /*!< PF ISR: PIS8 (Bit 16)                                       */
#define PF_ISR_PIS8_Msk                       (0x30000UL)               /*!< PF ISR: PIS8 (Bitfield-Mask: 0x03)                          */
#define PF_ISR_PIS9_Pos                       (18UL)                    /*!< PF ISR: PIS9 (Bit 18)                                       */
#define PF_ISR_PIS9_Msk                       (0xc0000UL)               /*!< PF ISR: PIS9 (Bitfield-Mask: 0x03)                          */
#define PF_ISR_PIS10_Pos                      (20UL)                    /*!< PF ISR: PIS10 (Bit 20)                                      */
#define PF_ISR_PIS10_Msk                      (0x300000UL)              /*!< PF ISR: PIS10 (Bitfield-Mask: 0x03)                         */
#define PF_ISR_PIS11_Pos                      (22UL)                    /*!< PF ISR: PIS11 (Bit 22)                                      */
#define PF_ISR_PIS11_Msk                      (0xc00000UL)              /*!< PF ISR: PIS11 (Bitfield-Mask: 0x03)                         */
#define PF_ISR_PIS12_Pos                      (24UL)                    /*!< PF ISR: PIS12 (Bit 24)                                      */
#define PF_ISR_PIS12_Msk                      (0x3000000UL)             /*!< PF ISR: PIS12 (Bitfield-Mask: 0x03)                         */
#define PF_ISR_PIS13_Pos                      (26UL)                    /*!< PF ISR: PIS13 (Bit 26)                                      */
#define PF_ISR_PIS13_Msk                      (0xc000000UL)             /*!< PF ISR: PIS13 (Bitfield-Mask: 0x03)                         */
#define PF_ISR_PIS14_Pos                      (28UL)                    /*!< PF ISR: PIS14 (Bit 28)                                      */
#define PF_ISR_PIS14_Msk                      (0x30000000UL)            /*!< PF ISR: PIS14 (Bitfield-Mask: 0x03)                         */
#define PF_ISR_PIS15_Pos                      (30UL)                    /*!< PF ISR: PIS15 (Bit 30)                                      */
#define PF_ISR_PIS15_Msk                      (0xc0000000UL)            /*!< PF ISR: PIS15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PF_ICR  ----------------------------------- */
#define PF_ICR_PIC0_Pos                       (0UL)                     /*!< PF ICR: PIC0 (Bit 0)                                        */
#define PF_ICR_PIC0_Msk                       (0x3UL)                   /*!< PF ICR: PIC0 (Bitfield-Mask: 0x03)                          */
#define PF_ICR_PIC1_Pos                       (2UL)                     /*!< PF ICR: PIC1 (Bit 2)                                        */
#define PF_ICR_PIC1_Msk                       (0xcUL)                   /*!< PF ICR: PIC1 (Bitfield-Mask: 0x03)                          */
#define PF_ICR_PIC2_Pos                       (4UL)                     /*!< PF ICR: PIC2 (Bit 4)                                        */
#define PF_ICR_PIC2_Msk                       (0x30UL)                  /*!< PF ICR: PIC2 (Bitfield-Mask: 0x03)                          */
#define PF_ICR_PIC3_Pos                       (6UL)                     /*!< PF ICR: PIC3 (Bit 6)                                        */
#define PF_ICR_PIC3_Msk                       (0xc0UL)                  /*!< PF ICR: PIC3 (Bitfield-Mask: 0x03)                          */
#define PF_ICR_PIC4_Pos                       (8UL)                     /*!< PF ICR: PIC4 (Bit 8)                                        */
#define PF_ICR_PIC4_Msk                       (0x300UL)                 /*!< PF ICR: PIC4 (Bitfield-Mask: 0x03)                          */
#define PF_ICR_PIC5_Pos                       (10UL)                    /*!< PF ICR: PIC5 (Bit 10)                                       */
#define PF_ICR_PIC5_Msk                       (0xc00UL)                 /*!< PF ICR: PIC5 (Bitfield-Mask: 0x03)                          */
#define PF_ICR_PIC6_Pos                       (12UL)                    /*!< PF ICR: PIC6 (Bit 12)                                       */
#define PF_ICR_PIC6_Msk                       (0x3000UL)                /*!< PF ICR: PIC6 (Bitfield-Mask: 0x03)                          */
#define PF_ICR_PIC7_Pos                       (14UL)                    /*!< PF ICR: PIC7 (Bit 14)                                       */
#define PF_ICR_PIC7_Msk                       (0xc000UL)                /*!< PF ICR: PIC7 (Bitfield-Mask: 0x03)                          */
#define PF_ICR_PIC8_Pos                       (16UL)                    /*!< PF ICR: PIC8 (Bit 16)                                       */
#define PF_ICR_PIC8_Msk                       (0x30000UL)               /*!< PF ICR: PIC8 (Bitfield-Mask: 0x03)                          */
#define PF_ICR_PIC9_Pos                       (18UL)                    /*!< PF ICR: PIC9 (Bit 18)                                       */
#define PF_ICR_PIC9_Msk                       (0xc0000UL)               /*!< PF ICR: PIC9 (Bitfield-Mask: 0x03)                          */
#define PF_ICR_PIC10_Pos                      (20UL)                    /*!< PF ICR: PIC10 (Bit 20)                                      */
#define PF_ICR_PIC10_Msk                      (0x300000UL)              /*!< PF ICR: PIC10 (Bitfield-Mask: 0x03)                         */
#define PF_ICR_PIC11_Pos                      (22UL)                    /*!< PF ICR: PIC11 (Bit 22)                                      */
#define PF_ICR_PIC11_Msk                      (0xc00000UL)              /*!< PF ICR: PIC11 (Bitfield-Mask: 0x03)                         */
#define PF_ICR_PIC12_Pos                      (24UL)                    /*!< PF ICR: PIC12 (Bit 24)                                      */
#define PF_ICR_PIC12_Msk                      (0x3000000UL)             /*!< PF ICR: PIC12 (Bitfield-Mask: 0x03)                         */
#define PF_ICR_PIC13_Pos                      (26UL)                    /*!< PF ICR: PIC13 (Bit 26)                                      */
#define PF_ICR_PIC13_Msk                      (0xc000000UL)             /*!< PF ICR: PIC13 (Bitfield-Mask: 0x03)                         */
#define PF_ICR_PIC14_Pos                      (28UL)                    /*!< PF ICR: PIC14 (Bit 28)                                      */
#define PF_ICR_PIC14_Msk                      (0x30000000UL)            /*!< PF ICR: PIC14 (Bitfield-Mask: 0x03)                         */
#define PF_ICR_PIC15_Pos                      (30UL)                    /*!< PF ICR: PIC15 (Bit 30)                                      */
#define PF_ICR_PIC15_Msk                      (0xc0000000UL)            /*!< PF ICR: PIC15 (Bitfield-Mask: 0x03)                         */

/* -----------------------------------  PF_ODR  ----------------------------------- */
#define PF_ODR_POD0_Pos                       (0UL)                     /*!< PF ODR: POD0 (Bit 0)                                        */
#define PF_ODR_POD0_Msk                       (0x1UL)                   /*!< PF ODR: POD0 (Bitfield-Mask: 0x01)                          */
#define PF_ODR_POD1_Pos                       (1UL)                     /*!< PF ODR: POD1 (Bit 1)                                        */
#define PF_ODR_POD1_Msk                       (0x2UL)                   /*!< PF ODR: POD1 (Bitfield-Mask: 0x01)                          */
#define PF_ODR_POD2_Pos                       (2UL)                     /*!< PF ODR: POD2 (Bit 2)                                        */
#define PF_ODR_POD2_Msk                       (0x4UL)                   /*!< PF ODR: POD2 (Bitfield-Mask: 0x01)                          */
#define PF_ODR_POD3_Pos                       (3UL)                     /*!< PF ODR: POD3 (Bit 3)                                        */
#define PF_ODR_POD3_Msk                       (0x8UL)                   /*!< PF ODR: POD3 (Bitfield-Mask: 0x01)                          */
#define PF_ODR_POD4_Pos                       (4UL)                     /*!< PF ODR: POD4 (Bit 4)                                        */
#define PF_ODR_POD4_Msk                       (0x10UL)                  /*!< PF ODR: POD4 (Bitfield-Mask: 0x01)                          */
#define PF_ODR_POD5_Pos                       (5UL)                     /*!< PF ODR: POD5 (Bit 5)                                        */
#define PF_ODR_POD5_Msk                       (0x20UL)                  /*!< PF ODR: POD5 (Bitfield-Mask: 0x01)                          */
#define PF_ODR_POD6_Pos                       (6UL)                     /*!< PF ODR: POD6 (Bit 6)                                        */
#define PF_ODR_POD6_Msk                       (0x40UL)                  /*!< PF ODR: POD6 (Bitfield-Mask: 0x01)                          */
#define PF_ODR_POD7_Pos                       (7UL)                     /*!< PF ODR: POD7 (Bit 7)                                        */
#define PF_ODR_POD7_Msk                       (0x80UL)                  /*!< PF ODR: POD7 (Bitfield-Mask: 0x01)                          */
#define PF_ODR_POD8_Pos                       (8UL)                     /*!< PF ODR: POD8 (Bit 8)                                        */
#define PF_ODR_POD8_Msk                       (0x100UL)                 /*!< PF ODR: POD8 (Bitfield-Mask: 0x01)                          */
#define PF_ODR_POD9_Pos                       (9UL)                     /*!< PF ODR: POD9 (Bit 9)                                        */
#define PF_ODR_POD9_Msk                       (0x200UL)                 /*!< PF ODR: POD9 (Bitfield-Mask: 0x01)                          */
#define PF_ODR_POD10_Pos                      (10UL)                    /*!< PF ODR: POD10 (Bit 10)                                      */
#define PF_ODR_POD10_Msk                      (0x400UL)                 /*!< PF ODR: POD10 (Bitfield-Mask: 0x01)                         */
#define PF_ODR_POD11_Pos                      (11UL)                    /*!< PF ODR: POD11 (Bit 11)                                      */
#define PF_ODR_POD11_Msk                      (0x800UL)                 /*!< PF ODR: POD11 (Bitfield-Mask: 0x01)                         */
#define PF_ODR_POD12_Pos                      (12UL)                    /*!< PF ODR: POD12 (Bit 12)                                      */
#define PF_ODR_POD12_Msk                      (0x1000UL)                /*!< PF ODR: POD12 (Bitfield-Mask: 0x01)                         */
#define PF_ODR_POD13_Pos                      (13UL)                    /*!< PF ODR: POD13 (Bit 13)                                      */
#define PF_ODR_POD13_Msk                      (0x2000UL)                /*!< PF ODR: POD13 (Bitfield-Mask: 0x01)                         */
#define PF_ODR_POD14_Pos                      (14UL)                    /*!< PF ODR: POD14 (Bit 14)                                      */
#define PF_ODR_POD14_Msk                      (0x4000UL)                /*!< PF ODR: POD14 (Bitfield-Mask: 0x01)                         */
#define PF_ODR_POD15_Pos                      (15UL)                    /*!< PF ODR: POD15 (Bit 15)                                      */
#define PF_ODR_POD15_Msk                      (0x8000UL)                /*!< PF ODR: POD15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PF_IDR  ----------------------------------- */
#define PF_IDR_PID0_Pos                       (0UL)                     /*!< PF IDR: PID0 (Bit 0)                                        */
#define PF_IDR_PID0_Msk                       (0x1UL)                   /*!< PF IDR: PID0 (Bitfield-Mask: 0x01)                          */
#define PF_IDR_PID1_Pos                       (1UL)                     /*!< PF IDR: PID1 (Bit 1)                                        */
#define PF_IDR_PID1_Msk                       (0x2UL)                   /*!< PF IDR: PID1 (Bitfield-Mask: 0x01)                          */
#define PF_IDR_PID2_Pos                       (2UL)                     /*!< PF IDR: PID2 (Bit 2)                                        */
#define PF_IDR_PID2_Msk                       (0x4UL)                   /*!< PF IDR: PID2 (Bitfield-Mask: 0x01)                          */
#define PF_IDR_PID3_Pos                       (3UL)                     /*!< PF IDR: PID3 (Bit 3)                                        */
#define PF_IDR_PID3_Msk                       (0x8UL)                   /*!< PF IDR: PID3 (Bitfield-Mask: 0x01)                          */
#define PF_IDR_PID4_Pos                       (4UL)                     /*!< PF IDR: PID4 (Bit 4)                                        */
#define PF_IDR_PID4_Msk                       (0x10UL)                  /*!< PF IDR: PID4 (Bitfield-Mask: 0x01)                          */
#define PF_IDR_PID5_Pos                       (5UL)                     /*!< PF IDR: PID5 (Bit 5)                                        */
#define PF_IDR_PID5_Msk                       (0x20UL)                  /*!< PF IDR: PID5 (Bitfield-Mask: 0x01)                          */
#define PF_IDR_PID6_Pos                       (6UL)                     /*!< PF IDR: PID6 (Bit 6)                                        */
#define PF_IDR_PID6_Msk                       (0x40UL)                  /*!< PF IDR: PID6 (Bitfield-Mask: 0x01)                          */
#define PF_IDR_PID7_Pos                       (7UL)                     /*!< PF IDR: PID7 (Bit 7)                                        */
#define PF_IDR_PID7_Msk                       (0x80UL)                  /*!< PF IDR: PID7 (Bitfield-Mask: 0x01)                          */
#define PF_IDR_PID8_Pos                       (8UL)                     /*!< PF IDR: PID8 (Bit 8)                                        */
#define PF_IDR_PID8_Msk                       (0x100UL)                 /*!< PF IDR: PID8 (Bitfield-Mask: 0x01)                          */
#define PF_IDR_PID9_Pos                       (9UL)                     /*!< PF IDR: PID9 (Bit 9)                                        */
#define PF_IDR_PID9_Msk                       (0x200UL)                 /*!< PF IDR: PID9 (Bitfield-Mask: 0x01)                          */
#define PF_IDR_PID10_Pos                      (10UL)                    /*!< PF IDR: PID10 (Bit 10)                                      */
#define PF_IDR_PID10_Msk                      (0x400UL)                 /*!< PF IDR: PID10 (Bitfield-Mask: 0x01)                         */
#define PF_IDR_PID11_Pos                      (11UL)                    /*!< PF IDR: PID11 (Bit 11)                                      */
#define PF_IDR_PID11_Msk                      (0x800UL)                 /*!< PF IDR: PID11 (Bitfield-Mask: 0x01)                         */
#define PF_IDR_PID12_Pos                      (12UL)                    /*!< PF IDR: PID12 (Bit 12)                                      */
#define PF_IDR_PID12_Msk                      (0x1000UL)                /*!< PF IDR: PID12 (Bitfield-Mask: 0x01)                         */
#define PF_IDR_PID13_Pos                      (13UL)                    /*!< PF IDR: PID13 (Bit 13)                                      */
#define PF_IDR_PID13_Msk                      (0x2000UL)                /*!< PF IDR: PID13 (Bitfield-Mask: 0x01)                         */
#define PF_IDR_PID14_Pos                      (14UL)                    /*!< PF IDR: PID14 (Bit 14)                                      */
#define PF_IDR_PID14_Msk                      (0x4000UL)                /*!< PF IDR: PID14 (Bitfield-Mask: 0x01)                         */
#define PF_IDR_PID15_Pos                      (15UL)                    /*!< PF IDR: PID15 (Bit 15)                                      */
#define PF_IDR_PID15_Msk                      (0x8000UL)                /*!< PF IDR: PID15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PF_BSR  ----------------------------------- */
#define PF_BSR_BSD0_Pos                       (0UL)                     /*!< PF BSR: BSD0 (Bit 0)                                        */
#define PF_BSR_BSD0_Msk                       (0x1UL)                   /*!< PF BSR: BSD0 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BSD1_Pos                       (1UL)                     /*!< PF BSR: BSD1 (Bit 1)                                        */
#define PF_BSR_BSD1_Msk                       (0x2UL)                   /*!< PF BSR: BSD1 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BSD2_Pos                       (2UL)                     /*!< PF BSR: BSD2 (Bit 2)                                        */
#define PF_BSR_BSD2_Msk                       (0x4UL)                   /*!< PF BSR: BSD2 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BSD3_Pos                       (3UL)                     /*!< PF BSR: BSD3 (Bit 3)                                        */
#define PF_BSR_BSD3_Msk                       (0x8UL)                   /*!< PF BSR: BSD3 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BSD4_Pos                       (4UL)                     /*!< PF BSR: BSD4 (Bit 4)                                        */
#define PF_BSR_BSD4_Msk                       (0x10UL)                  /*!< PF BSR: BSD4 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BSD5_Pos                       (5UL)                     /*!< PF BSR: BSD5 (Bit 5)                                        */
#define PF_BSR_BSD5_Msk                       (0x20UL)                  /*!< PF BSR: BSD5 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BSD6_Pos                       (6UL)                     /*!< PF BSR: BSD6 (Bit 6)                                        */
#define PF_BSR_BSD6_Msk                       (0x40UL)                  /*!< PF BSR: BSD6 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BSD7_Pos                       (7UL)                     /*!< PF BSR: BSD7 (Bit 7)                                        */
#define PF_BSR_BSD7_Msk                       (0x80UL)                  /*!< PF BSR: BSD7 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BSD8_Pos                       (8UL)                     /*!< PF BSR: BSD8 (Bit 8)                                        */
#define PF_BSR_BSD8_Msk                       (0x100UL)                 /*!< PF BSR: BSD8 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BSD9_Pos                       (9UL)                     /*!< PF BSR: BSD9 (Bit 9)                                        */
#define PF_BSR_BSD9_Msk                       (0x200UL)                 /*!< PF BSR: BSD9 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BSD10_Pos                      (10UL)                    /*!< PF BSR: BSD10 (Bit 10)                                      */
#define PF_BSR_BSD10_Msk                      (0x400UL)                 /*!< PF BSR: BSD10 (Bitfield-Mask: 0x01)                         */
#define PF_BSR_BSD11_Pos                      (11UL)                    /*!< PF BSR: BSD11 (Bit 11)                                      */
#define PF_BSR_BSD11_Msk                      (0x800UL)                 /*!< PF BSR: BSD11 (Bitfield-Mask: 0x01)                         */
#define PF_BSR_BSD12_Pos                      (12UL)                    /*!< PF BSR: BSD12 (Bit 12)                                      */
#define PF_BSR_BSD12_Msk                      (0x1000UL)                /*!< PF BSR: BSD12 (Bitfield-Mask: 0x01)                         */
#define PF_BSR_BSD13_Pos                      (13UL)                    /*!< PF BSR: BSD13 (Bit 13)                                      */
#define PF_BSR_BSD13_Msk                      (0x2000UL)                /*!< PF BSR: BSD13 (Bitfield-Mask: 0x01)                         */
#define PF_BSR_BSD14_Pos                      (14UL)                    /*!< PF BSR: BSD14 (Bit 14)                                      */
#define PF_BSR_BSD14_Msk                      (0x4000UL)                /*!< PF BSR: BSD14 (Bitfield-Mask: 0x01)                         */
#define PF_BSR_BSD15_Pos                      (15UL)                    /*!< PF BSR: BSD15 (Bit 15)                                      */
#define PF_BSR_BSD15_Msk                      (0x8000UL)                /*!< PF BSR: BSD15 (Bitfield-Mask: 0x01)                         */
#define PF_BSR_BCD0_Pos                       (16UL)                    /*!< PF BSR: BCD0 (Bit 16)                                       */
#define PF_BSR_BCD0_Msk                       (0x10000UL)               /*!< PF BSR: BCD0 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BCD1_Pos                       (17UL)                    /*!< PF BSR: BCD1 (Bit 17)                                       */
#define PF_BSR_BCD1_Msk                       (0x20000UL)               /*!< PF BSR: BCD1 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BCD2_Pos                       (18UL)                    /*!< PF BSR: BCD2 (Bit 18)                                       */
#define PF_BSR_BCD2_Msk                       (0x40000UL)               /*!< PF BSR: BCD2 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BCD3_Pos                       (19UL)                    /*!< PF BSR: BCD3 (Bit 19)                                       */
#define PF_BSR_BCD3_Msk                       (0x80000UL)               /*!< PF BSR: BCD3 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BCD4_Pos                       (20UL)                    /*!< PF BSR: BCD4 (Bit 20)                                       */
#define PF_BSR_BCD4_Msk                       (0x100000UL)              /*!< PF BSR: BCD4 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BCD5_Pos                       (21UL)                    /*!< PF BSR: BCD5 (Bit 21)                                       */
#define PF_BSR_BCD5_Msk                       (0x200000UL)              /*!< PF BSR: BCD5 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BCD6_Pos                       (22UL)                    /*!< PF BSR: BCD6 (Bit 22)                                       */
#define PF_BSR_BCD6_Msk                       (0x400000UL)              /*!< PF BSR: BCD6 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BCD7_Pos                       (23UL)                    /*!< PF BSR: BCD7 (Bit 23)                                       */
#define PF_BSR_BCD7_Msk                       (0x800000UL)              /*!< PF BSR: BCD7 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BCD8_Pos                       (24UL)                    /*!< PF BSR: BCD8 (Bit 24)                                       */
#define PF_BSR_BCD8_Msk                       (0x1000000UL)             /*!< PF BSR: BCD8 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BCD9_Pos                       (25UL)                    /*!< PF BSR: BCD9 (Bit 25)                                       */
#define PF_BSR_BCD9_Msk                       (0x2000000UL)             /*!< PF BSR: BCD9 (Bitfield-Mask: 0x01)                          */
#define PF_BSR_BCD10_Pos                      (26UL)                    /*!< PF BSR: BCD10 (Bit 26)                                      */
#define PF_BSR_BCD10_Msk                      (0x4000000UL)             /*!< PF BSR: BCD10 (Bitfield-Mask: 0x01)                         */
#define PF_BSR_BCD11_Pos                      (27UL)                    /*!< PF BSR: BCD11 (Bit 27)                                      */
#define PF_BSR_BCD11_Msk                      (0x8000000UL)             /*!< PF BSR: BCD11 (Bitfield-Mask: 0x01)                         */
#define PF_BSR_BCD12_Pos                      (28UL)                    /*!< PF BSR: BCD12 (Bit 28)                                      */
#define PF_BSR_BCD12_Msk                      (0x10000000UL)            /*!< PF BSR: BCD12 (Bitfield-Mask: 0x01)                         */
#define PF_BSR_BCD13_Pos                      (29UL)                    /*!< PF BSR: BCD13 (Bit 29)                                      */
#define PF_BSR_BCD13_Msk                      (0x20000000UL)            /*!< PF BSR: BCD13 (Bitfield-Mask: 0x01)                         */
#define PF_BSR_BCD14_Pos                      (30UL)                    /*!< PF BSR: BCD14 (Bit 30)                                      */
#define PF_BSR_BCD14_Msk                      (0x40000000UL)            /*!< PF BSR: BCD14 (Bitfield-Mask: 0x01)                         */
#define PF_BSR_BCD15_Pos                      (31UL)                    /*!< PF BSR: BCD15 (Bit 31)                                      */
#define PF_BSR_BCD15_Msk                      (0x80000000UL)            /*!< PF BSR: BCD15 (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  PF_BCR  ----------------------------------- */
#define PF_BCR_BCD0_Pos                       (0UL)                     /*!< PF BCR: BCD0 (Bit 0)                                        */
#define PF_BCR_BCD0_Msk                       (0x1UL)                   /*!< PF BCR: BCD0 (Bitfield-Mask: 0x01)                          */
#define PF_BCR_BCD1_Pos                       (1UL)                     /*!< PF BCR: BCD1 (Bit 1)                                        */
#define PF_BCR_BCD1_Msk                       (0x2UL)                   /*!< PF BCR: BCD1 (Bitfield-Mask: 0x01)                          */
#define PF_BCR_BCD2_Pos                       (2UL)                     /*!< PF BCR: BCD2 (Bit 2)                                        */
#define PF_BCR_BCD2_Msk                       (0x4UL)                   /*!< PF BCR: BCD2 (Bitfield-Mask: 0x01)                          */
#define PF_BCR_BCD3_Pos                       (3UL)                     /*!< PF BCR: BCD3 (Bit 3)                                        */
#define PF_BCR_BCD3_Msk                       (0x8UL)                   /*!< PF BCR: BCD3 (Bitfield-Mask: 0x01)                          */
#define PF_BCR_BCD4_Pos                       (4UL)                     /*!< PF BCR: BCD4 (Bit 4)                                        */
#define PF_BCR_BCD4_Msk                       (0x10UL)                  /*!< PF BCR: BCD4 (Bitfield-Mask: 0x01)                          */
#define PF_BCR_BCD5_Pos                       (5UL)                     /*!< PF BCR: BCD5 (Bit 5)                                        */
#define PF_BCR_BCD5_Msk                       (0x20UL)                  /*!< PF BCR: BCD5 (Bitfield-Mask: 0x01)                          */
#define PF_BCR_BCD6_Pos                       (6UL)                     /*!< PF BCR: BCD6 (Bit 6)                                        */
#define PF_BCR_BCD6_Msk                       (0x40UL)                  /*!< PF BCR: BCD6 (Bitfield-Mask: 0x01)                          */
#define PF_BCR_BCD7_Pos                       (7UL)                     /*!< PF BCR: BCD7 (Bit 7)                                        */
#define PF_BCR_BCD7_Msk                       (0x80UL)                  /*!< PF BCR: BCD7 (Bitfield-Mask: 0x01)                          */
#define PF_BCR_BCD8_Pos                       (8UL)                     /*!< PF BCR: BCD8 (Bit 8)                                        */
#define PF_BCR_BCD8_Msk                       (0x100UL)                 /*!< PF BCR: BCD8 (Bitfield-Mask: 0x01)                          */
#define PF_BCR_BCD9_Pos                       (9UL)                     /*!< PF BCR: BCD9 (Bit 9)                                        */
#define PF_BCR_BCD9_Msk                       (0x200UL)                 /*!< PF BCR: BCD9 (Bitfield-Mask: 0x01)                          */
#define PF_BCR_BCD10_Pos                      (10UL)                    /*!< PF BCR: BCD10 (Bit 10)                                      */
#define PF_BCR_BCD10_Msk                      (0x400UL)                 /*!< PF BCR: BCD10 (Bitfield-Mask: 0x01)                         */
#define PF_BCR_BCD11_Pos                      (11UL)                    /*!< PF BCR: BCD11 (Bit 11)                                      */
#define PF_BCR_BCD11_Msk                      (0x800UL)                 /*!< PF BCR: BCD11 (Bitfield-Mask: 0x01)                         */
#define PF_BCR_BCD12_Pos                      (12UL)                    /*!< PF BCR: BCD12 (Bit 12)                                      */
#define PF_BCR_BCD12_Msk                      (0x1000UL)                /*!< PF BCR: BCD12 (Bitfield-Mask: 0x01)                         */
#define PF_BCR_BCD13_Pos                      (13UL)                    /*!< PF BCR: BCD13 (Bit 13)                                      */
#define PF_BCR_BCD13_Msk                      (0x2000UL)                /*!< PF BCR: BCD13 (Bitfield-Mask: 0x01)                         */
#define PF_BCR_BCD14_Pos                      (14UL)                    /*!< PF BCR: BCD14 (Bit 14)                                      */
#define PF_BCR_BCD14_Msk                      (0x4000UL)                /*!< PF BCR: BCD14 (Bitfield-Mask: 0x01)                         */
#define PF_BCR_BCD15_Pos                      (15UL)                    /*!< PF BCR: BCD15 (Bit 15)                                      */
#define PF_BCR_BCD15_Msk                      (0x8000UL)                /*!< PF BCR: BCD15 (Bitfield-Mask: 0x01)                         */


/* ================================================================================ */
/* ================      struct 'PORTRSTDBCR' Position & Mask      ================ */
/* ================================================================================ */


/* -----------------------------  PORTRSTDBCR_RSTDBCR  ---------------------------- */
#define PORTRSTDBCR_RSTDBCR_EN_Pos            (0UL)                     /*!< PORTRSTDBCR RSTDBCR: EN (Bit 0)                             */
#define PORTRSTDBCR_RSTDBCR_EN_Msk            (0x1UL)                   /*!< PORTRSTDBCR RSTDBCR: EN (Bitfield-Mask: 0x01)               */
#define PORTRSTDBCR_RSTDBCR_CLK_CNT_Pos       (8UL)                     /*!< PORTRSTDBCR RSTDBCR: CLK_CNT (Bit 8)                        */
#define PORTRSTDBCR_RSTDBCR_CLK_CNT_Msk       (0xff00UL)                /*!< PORTRSTDBCR RSTDBCR: CLK_CNT (Bitfield-Mask: 0xff)          */
#define PORTRSTDBCR_RSTDBCR_WTIDKY_Pos        (16UL)                    /*!< PORTRSTDBCR RSTDBCR: WTIDKY (Bit 16)                        */
#define PORTRSTDBCR_RSTDBCR_WTIDKY_Msk        (0xffff0000UL)            /*!< PORTRSTDBCR RSTDBCR: WTIDKY (Bitfield-Mask: 0xffff)         */


/* ================================================================================ */
/* ================         struct 'PORTEN' Position & Mask        ================ */
/* ================================================================================ */


/* ----------------------------------  PORTEN_EN  --------------------------------- */
#define PORTEN_EN_PORTEN_Pos                  (0UL)                     /*!< PORTEN EN: PORTEN (Bit 0)                                   */
#define PORTEN_EN_PORTEN_Msk                  (0xffUL)                  /*!< PORTEN EN: PORTEN (Bitfield-Mask: 0xff)                     */
#define PORTEN_EN_ENS_Pos                     (8UL)                     /*!< PORTEN EN: ENS (Bit 8)                                      */
#define PORTEN_EN_ENS_Msk                     (0x100UL)                 /*!< PORTEN EN: ENS (Bitfield-Mask: 0x01)                        */


/* ================================================================================ */
/* ================          struct 'CFMC' Position & Mask         ================ */
/* ================================================================================ */


/* ----------------------------------  CFMC_CONF  --------------------------------- */
#define CFMC_CONF_LATENCY_Pos                 (0UL)                     /*!< CFMC CONF: LATENCY (Bit 0)                                  */
#define CFMC_CONF_LATENCY_Msk                 (0xfUL)                   /*!< CFMC CONF: LATENCY (Bitfield-Mask: 0x0f)                    */
#define CFMC_CONF_WRITE_Pos                   (25UL)                    /*!< CFMC CONF: WRITE (Bit 25)                                   */
#define CFMC_CONF_WRITE_Msk                   (0x2000000UL)             /*!< CFMC CONF: WRITE (Bitfield-Mask: 0x01)                      */

/* ---------------------------------  CFMC_FLSKEY  -------------------------------- */
#define CFMC_FLSKEY_FKEY_Pos                  (0UL)                     /*!< CFMC FLSKEY: FKEY (Bit 0)                                   */
#define CFMC_FLSKEY_FKEY_Msk                  (0xffffffffUL)            /*!< CFMC FLSKEY: FKEY (Bitfield-Mask: 0xffffffff)               */

/* --------------------------------  CFMC_INFOKEY  -------------------------------- */
#define CFMC_INFOKEY_INFOKEY_Pos              (0UL)                     /*!< CFMC INFOKEY: INFOKEY (Bit 0)                               */
#define CFMC_INFOKEY_INFOKEY_Msk              (0xffffffffUL)            /*!< CFMC INFOKEY: INFOKEY (Bitfield-Mask: 0xffffffff)           */

/* --------------------------------  CFMC_FLSPROT  -------------------------------- */
#define CFMC_FLSPROT_FPBY16_0_Pos             (0UL)                     /*!< CFMC FLSPROT: FPBY16_0 (Bit 0)                              */
#define CFMC_FLSPROT_FPBY16_0_Msk             (0x1UL)                   /*!< CFMC FLSPROT: FPBY16_0 (Bitfield-Mask: 0x01)                */
#define CFMC_FLSPROT_FPBY16_1_Pos             (1UL)                     /*!< CFMC FLSPROT: FPBY16_1 (Bit 1)                              */
#define CFMC_FLSPROT_FPBY16_1_Msk             (0x2UL)                   /*!< CFMC FLSPROT: FPBY16_1 (Bitfield-Mask: 0x01)                */
#define CFMC_FLSPROT_FPBY16_2_Pos             (2UL)                     /*!< CFMC FLSPROT: FPBY16_2 (Bit 2)                              */
#define CFMC_FLSPROT_FPBY16_2_Msk             (0x4UL)                   /*!< CFMC FLSPROT: FPBY16_2 (Bitfield-Mask: 0x01)                */
#define CFMC_FLSPROT_FPBY16_3_Pos             (3UL)                     /*!< CFMC FLSPROT: FPBY16_3 (Bit 3)                              */
#define CFMC_FLSPROT_FPBY16_3_Msk             (0x8UL)                   /*!< CFMC FLSPROT: FPBY16_3 (Bitfield-Mask: 0x01)                */
#define CFMC_FLSPROT_FPBY16_4_Pos             (4UL)                     /*!< CFMC FLSPROT: FPBY16_4 (Bit 4)                              */
#define CFMC_FLSPROT_FPBY16_4_Msk             (0x10UL)                  /*!< CFMC FLSPROT: FPBY16_4 (Bitfield-Mask: 0x01)                */
#define CFMC_FLSPROT_FPBY16_5_Pos             (5UL)                     /*!< CFMC FLSPROT: FPBY16_5 (Bit 5)                              */
#define CFMC_FLSPROT_FPBY16_5_Msk             (0x20UL)                  /*!< CFMC FLSPROT: FPBY16_5 (Bitfield-Mask: 0x01)                */
#define CFMC_FLSPROT_FPBY16_6_Pos             (6UL)                     /*!< CFMC FLSPROT: FPBY16_6 (Bit 6)                              */
#define CFMC_FLSPROT_FPBY16_6_Msk             (0x40UL)                  /*!< CFMC FLSPROT: FPBY16_6 (Bitfield-Mask: 0x01)                */
#define CFMC_FLSPROT_FPBY16_7_Pos             (7UL)                     /*!< CFMC FLSPROT: FPBY16_7 (Bit 7)                              */
#define CFMC_FLSPROT_FPBY16_7_Msk             (0x80UL)                  /*!< CFMC FLSPROT: FPBY16_7 (Bitfield-Mask: 0x01)                */
#define CFMC_FLSPROT_FPBY16_8_Pos             (8UL)                     /*!< CFMC FLSPROT: FPBY16_8 (Bit 8)                              */
#define CFMC_FLSPROT_FPBY16_8_Msk             (0x100UL)                 /*!< CFMC FLSPROT: FPBY16_8 (Bitfield-Mask: 0x01)                */
#define CFMC_FLSPROT_FPBY16_9_Pos             (9UL)                     /*!< CFMC FLSPROT: FPBY16_9 (Bit 9)                              */
#define CFMC_FLSPROT_FPBY16_9_Msk             (0x200UL)                 /*!< CFMC FLSPROT: FPBY16_9 (Bitfield-Mask: 0x01)                */
#define CFMC_FLSPROT_FPBY16_10_Pos            (10UL)                    /*!< CFMC FLSPROT: FPBY16_10 (Bit 10)                            */
#define CFMC_FLSPROT_FPBY16_10_Msk            (0x400UL)                 /*!< CFMC FLSPROT: FPBY16_10 (Bitfield-Mask: 0x01)               */
#define CFMC_FLSPROT_FPBY16_11_Pos            (11UL)                    /*!< CFMC FLSPROT: FPBY16_11 (Bit 11)                            */
#define CFMC_FLSPROT_FPBY16_11_Msk            (0x800UL)                 /*!< CFMC FLSPROT: FPBY16_11 (Bitfield-Mask: 0x01)               */
#define CFMC_FLSPROT_FPBY16_12_Pos            (12UL)                    /*!< CFMC FLSPROT: FPBY16_12 (Bit 12)                            */
#define CFMC_FLSPROT_FPBY16_12_Msk            (0x1000UL)                /*!< CFMC FLSPROT: FPBY16_12 (Bitfield-Mask: 0x01)               */
#define CFMC_FLSPROT_FPBY16_13_Pos            (13UL)                    /*!< CFMC FLSPROT: FPBY16_13 (Bit 13)                            */
#define CFMC_FLSPROT_FPBY16_13_Msk            (0x2000UL)                /*!< CFMC FLSPROT: FPBY16_13 (Bitfield-Mask: 0x01)               */
#define CFMC_FLSPROT_FPBY16_14_Pos            (14UL)                    /*!< CFMC FLSPROT: FPBY16_14 (Bit 14)                            */
#define CFMC_FLSPROT_FPBY16_14_Msk            (0x4000UL)                /*!< CFMC FLSPROT: FPBY16_14 (Bitfield-Mask: 0x01)               */
#define CFMC_FLSPROT_FPBY16_15_Pos            (15UL)                    /*!< CFMC FLSPROT: FPBY16_15 (Bit 15)                            */
#define CFMC_FLSPROT_FPBY16_15_Msk            (0x8000UL)                /*!< CFMC FLSPROT: FPBY16_15 (Bitfield-Mask: 0x01)               */
#define CFMC_FLSPROT_FUP512B_0_Pos            (24UL)                    /*!< CFMC FLSPROT: FUP512B_0 (Bit 24)                            */
#define CFMC_FLSPROT_FUP512B_0_Msk            (0x1000000UL)             /*!< CFMC FLSPROT: FUP512B_0 (Bitfield-Mask: 0x01)               */
#define CFMC_FLSPROT_FUP512B_1_Pos            (25UL)                    /*!< CFMC FLSPROT: FUP512B_1 (Bit 25)                            */
#define CFMC_FLSPROT_FUP512B_1_Msk            (0x2000000UL)             /*!< CFMC FLSPROT: FUP512B_1 (Bitfield-Mask: 0x01)               */
#define CFMC_FLSPROT_FUP512B_2_Pos            (26UL)                    /*!< CFMC FLSPROT: FUP512B_2 (Bit 26)                            */
#define CFMC_FLSPROT_FUP512B_2_Msk            (0x4000000UL)             /*!< CFMC FLSPROT: FUP512B_2 (Bitfield-Mask: 0x01)               */
#define CFMC_FLSPROT_FUP512B_3_Pos            (27UL)                    /*!< CFMC FLSPROT: FUP512B_3 (Bit 27)                            */
#define CFMC_FLSPROT_FUP512B_3_Msk            (0x8000000UL)             /*!< CFMC FLSPROT: FUP512B_3 (Bitfield-Mask: 0x01)               */
#define CFMC_FLSPROT_FUP512B_4_Pos            (28UL)                    /*!< CFMC FLSPROT: FUP512B_4 (Bit 28)                            */
#define CFMC_FLSPROT_FUP512B_4_Msk            (0x10000000UL)            /*!< CFMC FLSPROT: FUP512B_4 (Bitfield-Mask: 0x01)               */
#define CFMC_FLSPROT_FUP512B_5_Pos            (29UL)                    /*!< CFMC FLSPROT: FUP512B_5 (Bit 29)                            */
#define CFMC_FLSPROT_FUP512B_5_Msk            (0x20000000UL)            /*!< CFMC FLSPROT: FUP512B_5 (Bitfield-Mask: 0x01)               */
#define CFMC_FLSPROT_FUP512B_6_Pos            (30UL)                    /*!< CFMC FLSPROT: FUP512B_6 (Bit 30)                            */
#define CFMC_FLSPROT_FUP512B_6_Msk            (0x40000000UL)            /*!< CFMC FLSPROT: FUP512B_6 (Bitfield-Mask: 0x01)               */
#define CFMC_FLSPROT_FUP512B_7_Pos            (31UL)                    /*!< CFMC FLSPROT: FUP512B_7 (Bit 31)                            */
#define CFMC_FLSPROT_FUP512B_7_Msk            (0x80000000UL)            /*!< CFMC FLSPROT: FUP512B_7 (Bitfield-Mask: 0x01)               */

/* --------------------------------  CFMC_INFOPROT  ------------------------------- */
#define CFMC_INFOPROT_INFO0_Pos               (0UL)                     /*!< CFMC INFOPROT: INFO0 (Bit 0)                                */
#define CFMC_INFOPROT_INFO0_Msk               (0x1UL)                   /*!< CFMC INFOPROT: INFO0 (Bitfield-Mask: 0x01)                  */
#define CFMC_INFOPROT_INFO1_Pos               (1UL)                     /*!< CFMC INFOPROT: INFO1 (Bit 1)                                */
#define CFMC_INFOPROT_INFO1_Msk               (0x2UL)                   /*!< CFMC INFOPROT: INFO1 (Bitfield-Mask: 0x01)                  */
#define CFMC_INFOPROT_INFO2_Pos               (2UL)                     /*!< CFMC INFOPROT: INFO2 (Bit 2)                                */
#define CFMC_INFOPROT_INFO2_Msk               (0x4UL)                   /*!< CFMC INFOPROT: INFO2 (Bitfield-Mask: 0x01)                  */
#define CFMC_INFOPROT_INFO3_Pos               (3UL)                     /*!< CFMC INFOPROT: INFO3 (Bit 3)                                */
#define CFMC_INFOPROT_INFO3_Msk               (0x8UL)                   /*!< CFMC INFOPROT: INFO3 (Bitfield-Mask: 0x01)                  */

/* ----------------------------------  CFMC_CTRL  --------------------------------- */
#define CFMC_CTRL_PGM_Pos                     (0UL)                     /*!< CFMC CTRL: PGM (Bit 0)                                      */
#define CFMC_CTRL_PGM_Msk                     (0x1UL)                   /*!< CFMC CTRL: PGM (Bitfield-Mask: 0x01)                        */
#define CFMC_CTRL_PERS_Pos                    (1UL)                     /*!< CFMC CTRL: PERS (Bit 1)                                     */
#define CFMC_CTRL_PERS_Msk                    (0x2UL)                   /*!< CFMC CTRL: PERS (Bitfield-Mask: 0x01)                       */
#define CFMC_CTRL_SERS_Pos                    (2UL)                     /*!< CFMC CTRL: SERS (Bit 2)                                     */
#define CFMC_CTRL_SERS_Msk                    (0x4UL)                   /*!< CFMC CTRL: SERS (Bitfield-Mask: 0x01)                       */
#define CFMC_CTRL_CERS_Pos                    (3UL)                     /*!< CFMC CTRL: CERS (Bit 3)                                     */
#define CFMC_CTRL_CERS_Msk                    (0x8UL)                   /*!< CFMC CTRL: CERS (Bitfield-Mask: 0x01)                       */
#define CFMC_CTRL_WABORT_Pos                  (7UL)                     /*!< CFMC CTRL: WABORT (Bit 7)                                   */
#define CFMC_CTRL_WABORT_Msk                  (0x80UL)                  /*!< CFMC CTRL: WABORT (Bitfield-Mask: 0x01)                     */
#define CFMC_CTRL_WDIEN_Pos                   (8UL)                     /*!< CFMC CTRL: WDIEN (Bit 8)                                    */
#define CFMC_CTRL_WDIEN_Msk                   (0x100UL)                 /*!< CFMC CTRL: WDIEN (Bitfield-Mask: 0x01)                      */
#define CFMC_CTRL_INFOLOCK_Pos                (30UL)                    /*!< CFMC CTRL: INFOLOCK (Bit 30)                                */
#define CFMC_CTRL_INFOLOCK_Msk                (0x40000000UL)            /*!< CFMC CTRL: INFOLOCK (Bitfield-Mask: 0x01)                   */
#define CFMC_CTRL_FLOCK_Pos                   (31UL)                    /*!< CFMC CTRL: FLOCK (Bit 31)                                   */
#define CFMC_CTRL_FLOCK_Msk                   (0x80000000UL)            /*!< CFMC CTRL: FLOCK (Bitfield-Mask: 0x01)                      */

/* ----------------------------------  CFMC_STAT  --------------------------------- */
#define CFMC_STAT_WBUSY_Pos                   (0UL)                     /*!< CFMC STAT: WBUSY (Bit 0)                                    */
#define CFMC_STAT_WBUSY_Msk                   (0x1UL)                   /*!< CFMC STAT: WBUSY (Bitfield-Mask: 0x01)                      */
#define CFMC_STAT_WDONE_Pos                   (8UL)                     /*!< CFMC STAT: WDONE (Bit 8)                                    */
#define CFMC_STAT_WDONE_Msk                   (0x100UL)                 /*!< CFMC STAT: WDONE (Bitfield-Mask: 0x01)                      */
#define CFMC_STAT_FLERR_Pos                   (16UL)                    /*!< CFMC STAT: FLERR (Bit 16)                                   */
#define CFMC_STAT_FLERR_Msk                   (0x10000UL)               /*!< CFMC STAT: FLERR (Bitfield-Mask: 0x01)                      */
#define CFMC_STAT_INFOLERR_Pos                (17UL)                    /*!< CFMC STAT: INFOLERR (Bit 17)                                */
#define CFMC_STAT_INFOLERR_Msk                (0x20000UL)               /*!< CFMC STAT: INFOLERR (Bitfield-Mask: 0x01)                   */
#define CFMC_STAT_FPERR_Pos                   (18UL)                    /*!< CFMC STAT: FPERR (Bit 18)                                   */
#define CFMC_STAT_FPERR_Msk                   (0x40000UL)               /*!< CFMC STAT: FPERR (Bitfield-Mask: 0x01)                      */
#define CFMC_STAT_INFOPERR_Pos                (19UL)                    /*!< CFMC STAT: INFOPERR (Bit 19)                                */
#define CFMC_STAT_INFOPERR_Msk                (0x80000UL)               /*!< CFMC STAT: INFOPERR (Bitfield-Mask: 0x01)                   */
#define CFMC_STAT_WSERR_Pos                   (20UL)                    /*!< CFMC STAT: WSERR (Bit 20)                                   */
#define CFMC_STAT_WSERR_Msk                   (0x100000UL)              /*!< CFMC STAT: WSERR (Bitfield-Mask: 0x01)                      */
#define CFMC_STAT_RPERR_Pos                   (21UL)                    /*!< CFMC STAT: RPERR (Bit 21)                                   */
#define CFMC_STAT_RPERR_Msk                   (0x200000UL)              /*!< CFMC STAT: RPERR (Bitfield-Mask: 0x01)                      */
#define CFMC_STAT_WTERR_Pos                   (22UL)                    /*!< CFMC STAT: WTERR (Bit 22)                                   */
#define CFMC_STAT_WTERR_Msk                   (0x400000UL)              /*!< CFMC STAT: WTERR (Bitfield-Mask: 0x01)                      */

/* --------------------------------  CFMC_READPROT  ------------------------------- */
#define CFMC_READPROT_RPROT_Pos               (0UL)                     /*!< CFMC READPROT: RPROT (Bit 0)                                */
#define CFMC_READPROT_RPROT_Msk               (0xffUL)                  /*!< CFMC READPROT: RPROT (Bitfield-Mask: 0xff)                  */
#define CFMC_READPROT_LVL1_EN_Pos             (8UL)                     /*!< CFMC READPROT: LVL1_EN (Bit 8)                              */
#define CFMC_READPROT_LVL1_EN_Msk             (0x100UL)                 /*!< CFMC READPROT: LVL1_EN (Bitfield-Mask: 0x01)                */
#define CFMC_READPROT_LVL2_EN_Pos             (9UL)                     /*!< CFMC READPROT: LVL2_EN (Bit 9)                              */
#define CFMC_READPROT_LVL2_EN_Msk             (0x200UL)                 /*!< CFMC READPROT: LVL2_EN (Bitfield-Mask: 0x01)                */
#define CFMC_READPROT_LVL1_STS_Pos            (16UL)                    /*!< CFMC READPROT: LVL1_STS (Bit 16)                            */
#define CFMC_READPROT_LVL1_STS_Msk            (0x10000UL)               /*!< CFMC READPROT: LVL1_STS (Bitfield-Mask: 0x01)               */
#define CFMC_READPROT_LVL2_STS_Pos            (17UL)                    /*!< CFMC READPROT: LVL2_STS (Bit 17)                            */
#define CFMC_READPROT_LVL2_STS_Msk            (0x20000UL)               /*!< CFMC READPROT: LVL2_STS (Bitfield-Mask: 0x01)               */
#define CFMC_READPROT_CERSD_Pos               (24UL)                    /*!< CFMC READPROT: CERSD (Bit 24)                               */
#define CFMC_READPROT_CERSD_Msk               (0x1000000UL)             /*!< CFMC READPROT: CERSD (Bitfield-Mask: 0x01)                  */
#define CFMC_READPROT_INFO0ERSD_Pos           (25UL)                    /*!< CFMC READPROT: INFO0ERSD (Bit 25)                           */
#define CFMC_READPROT_INFO0ERSD_Msk           (0x2000000UL)             /*!< CFMC READPROT: INFO0ERSD (Bitfield-Mask: 0x01)              */
#define CFMC_READPROT_PWMATCH_Pos             (26UL)                    /*!< CFMC READPROT: PWMATCH (Bit 26)                             */
#define CFMC_READPROT_PWMATCH_Msk             (0x4000000UL)             /*!< CFMC READPROT: PWMATCH (Bitfield-Mask: 0x01)                */
#define CFMC_READPROT_SRBOOT_Pos              (30UL)                    /*!< CFMC READPROT: SRBOOT (Bit 30)                              */
#define CFMC_READPROT_SRBOOT_Msk              (0x40000000UL)            /*!< CFMC READPROT: SRBOOT (Bitfield-Mask: 0x01)                 */
#define CFMC_READPROT_DBGMOD_Pos              (31UL)                    /*!< CFMC READPROT: DBGMOD (Bit 31)                              */
#define CFMC_READPROT_DBGMOD_Msk              (0x80000000UL)            /*!< CFMC READPROT: DBGMOD (Bitfield-Mask: 0x01)                 */

/* ----------------------------------  CFMC_PWIN  --------------------------------- */
#define CFMC_PWIN_PWIN_Pos                    (0UL)                     /*!< CFMC PWIN: PWIN (Bit 0)                                     */
#define CFMC_PWIN_PWIN_Msk                    (0xffffffffUL)            /*!< CFMC PWIN: PWIN (Bitfield-Mask: 0xffffffff)                 */

/* --------------------------------  CFMC_WTIMEOUT  ------------------------------- */
#define CFMC_WTIMEOUT_WTIMEOUT_Pos            (0UL)                     /*!< CFMC WTIMEOUT: WTIMEOUT (Bit 0)                             */
#define CFMC_WTIMEOUT_WTIMEOUT_Msk            (0xffffffffUL)            /*!< CFMC WTIMEOUT: WTIMEOUT (Bitfield-Mask: 0xffffffff)         */

/* ---------------------------------  CFMC_PWPRST  -------------------------------- */
#define CFMC_PWPRST_PWPRST_Pos                (0UL)                     /*!< CFMC PWPRST: PWPRST (Bit 0)                                 */
#define CFMC_PWPRST_PWPRST_Msk                (0xffffffffUL)            /*!< CFMC PWPRST: PWPRST (Bitfield-Mask: 0xffffffff)             */


/* ================================================================================ */
/* ================         struct 'HSICMU' Position & Mask        ================ */
/* ================================================================================ */


/* ----------------------------------  HSICMU_CR  --------------------------------- */
#define HSICMU_CR_HSICMU_EN_Pos               (8UL)                     /*!< HSICMU CR: HSICMU_EN (Bit 8)                                */
#define HSICMU_CR_HSICMU_EN_Msk               (0x100UL)                 /*!< HSICMU CR: HSICMU_EN (Bitfield-Mask: 0x01)                  */
#define HSICMU_CR_AUTOTRIM_EN_Pos             (9UL)                     /*!< HSICMU CR: AUTOTRIM_EN (Bit 9)                              */
#define HSICMU_CR_AUTOTRIM_EN_Msk             (0x200UL)                 /*!< HSICMU CR: AUTOTRIM_EN (Bitfield-Mask: 0x01)                */
#define HSICMU_CR_SW_SYNC_Pos                 (10UL)                    /*!< HSICMU CR: SW_SYNC (Bit 10)                                 */
#define HSICMU_CR_SW_SYNC_Msk                 (0x400UL)                 /*!< HSICMU CR: SW_SYNC (Bitfield-Mask: 0x01)                    */
#define HSICMU_CR_SET_TIMER_Pos               (11UL)                    /*!< HSICMU CR: SET_TIMER (Bit 11)                               */
#define HSICMU_CR_SET_TIMER_Msk               (0x800UL)                 /*!< HSICMU CR: SET_TIMER (Bitfield-Mask: 0x01)                  */
#define HSICMU_CR_SYNC_START_Pos              (12UL)                    /*!< HSICMU CR: SYNC_START (Bit 12)                              */
#define HSICMU_CR_SYNC_START_Msk              (0x1000UL)                /*!< HSICMU CR: SYNC_START (Bitfield-Mask: 0x01)                 */
#define HSICMU_CR_SET_TRIMVALUE_Pos           (13UL)                    /*!< HSICMU CR: SET_TRIMVALUE (Bit 13)                           */
#define HSICMU_CR_SET_TRIMVALUE_Msk           (0x2000UL)                /*!< HSICMU CR: SET_TRIMVALUE (Bitfield-Mask: 0x01)              */

/* ---------------------------------  HSICMU_CFG  --------------------------------- */
#define HSICMU_CFG_RELOAD_Pos                 (0UL)                     /*!< HSICMU CFG: RELOAD (Bit 0)                                  */
#define HSICMU_CFG_RELOAD_Msk                 (0xfffffUL)               /*!< HSICMU CFG: RELOAD (Bitfield-Mask: 0xfffff)                 */
#define HSICMU_CFG_PREDIV_Pos                 (20UL)                    /*!< HSICMU CFG: PREDIV (Bit 20)                                 */
#define HSICMU_CFG_PREDIV_Msk                 (0xf00000UL)              /*!< HSICMU CFG: PREDIV (Bitfield-Mask: 0x0f)                    */
#define HSICMU_CFG_SYNCDIV_Pos                (24UL)                    /*!< HSICMU CFG: SYNCDIV (Bit 24)                                */
#define HSICMU_CFG_SYNCDIV_Msk                (0x7000000UL)             /*!< HSICMU CFG: SYNCDIV (Bitfield-Mask: 0x07)                   */
#define HSICMU_CFG_AC_EN_Pos                  (27UL)                    /*!< HSICMU CFG: AC_EN (Bit 27)                                  */
#define HSICMU_CFG_AC_EN_Msk                  (0x8000000UL)             /*!< HSICMU CFG: AC_EN (Bitfield-Mask: 0x01)                     */
#define HSICMU_CFG_SYNCSRC_Pos                (28UL)                    /*!< HSICMU CFG: SYNCSRC (Bit 28)                                */
#define HSICMU_CFG_SYNCSRC_Msk                (0x30000000UL)            /*!< HSICMU CFG: SYNCSRC (Bitfield-Mask: 0x03)                   */
#define HSICMU_CFG_SESYNCPOL_Pos              (30UL)                    /*!< HSICMU CFG: SESYNCPOL (Bit 30)                              */
#define HSICMU_CFG_SESYNCPOL_Msk              (0xc0000000UL)            /*!< HSICMU CFG: SESYNCPOL (Bitfield-Mask: 0x03)                 */

/* ---------------------------------  HSICMU_ISR  --------------------------------- */
#define HSICMU_ISR_SYNCLVL_0_Pos              (0UL)                     /*!< HSICMU ISR: SYNCLVL_0 (Bit 0)                               */
#define HSICMU_ISR_SYNCLVL_0_Msk              (0x1UL)                   /*!< HSICMU ISR: SYNCLVL_0 (Bitfield-Mask: 0x01)                 */
#define HSICMU_ISR_SYNCLVL_1_Pos              (1UL)                     /*!< HSICMU ISR: SYNCLVL_1 (Bit 1)                               */
#define HSICMU_ISR_SYNCLVL_1_Msk              (0x2UL)                   /*!< HSICMU ISR: SYNCLVL_1 (Bitfield-Mask: 0x01)                 */
#define HSICMU_ISR_SYNCLVL_2_Pos              (2UL)                     /*!< HSICMU ISR: SYNCLVL_2 (Bit 2)                               */
#define HSICMU_ISR_SYNCLVL_2_Msk              (0x4UL)                   /*!< HSICMU ISR: SYNCLVL_2 (Bitfield-Mask: 0x01)                 */
#define HSICMU_ISR_SYNCLVL_3_Pos              (3UL)                     /*!< HSICMU ISR: SYNCLVL_3 (Bit 3)                               */
#define HSICMU_ISR_SYNCLVL_3_Msk              (0x8UL)                   /*!< HSICMU ISR: SYNCLVL_3 (Bitfield-Mask: 0x01)                 */
#define HSICMU_ISR_SYNCLVL_4_Pos              (4UL)                     /*!< HSICMU ISR: SYNCLVL_4 (Bit 4)                               */
#define HSICMU_ISR_SYNCLVL_4_Msk              (0x10UL)                  /*!< HSICMU ISR: SYNCLVL_4 (Bitfield-Mask: 0x01)                 */
#define HSICMU_ISR_FECOVF_Pos                 (12UL)                    /*!< HSICMU ISR: FECOVF (Bit 12)                                 */
#define HSICMU_ISR_FECOVF_Msk                 (0x1000UL)                /*!< HSICMU ISR: FECOVF (Bitfield-Mask: 0x01)                    */
#define HSICMU_ISR_TRIMOVF_Pos                (13UL)                    /*!< HSICMU ISR: TRIMOVF (Bit 13)                                */
#define HSICMU_ISR_TRIMOVF_Msk                (0x2000UL)                /*!< HSICMU ISR: TRIMOVF (Bitfield-Mask: 0x01)                   */
#define HSICMU_ISR_SYNC_FLAG_Pos              (14UL)                    /*!< HSICMU ISR: SYNC_FLAG (Bit 14)                              */
#define HSICMU_ISR_SYNC_FLAG_Msk              (0x4000UL)                /*!< HSICMU ISR: SYNC_FLAG (Bitfield-Mask: 0x01)                 */
#define HSICMU_ISR_FECDIR_Pos                 (15UL)                    /*!< HSICMU ISR: FECDIR (Bit 15)                                 */
#define HSICMU_ISR_FECDIR_Msk                 (0x8000UL)                /*!< HSICMU ISR: FECDIR (Bitfield-Mask: 0x01)                    */

/* ---------------------------------  HSICMU_ICR  --------------------------------- */
#define HSICMU_ICR_SYNCLVL_0_Pos              (0UL)                     /*!< HSICMU ICR: SYNCLVL_0 (Bit 0)                               */
#define HSICMU_ICR_SYNCLVL_0_Msk              (0x1UL)                   /*!< HSICMU ICR: SYNCLVL_0 (Bitfield-Mask: 0x01)                 */
#define HSICMU_ICR_SYNCLVL_1_Pos              (1UL)                     /*!< HSICMU ICR: SYNCLVL_1 (Bit 1)                               */
#define HSICMU_ICR_SYNCLVL_1_Msk              (0x2UL)                   /*!< HSICMU ICR: SYNCLVL_1 (Bitfield-Mask: 0x01)                 */
#define HSICMU_ICR_SYNCLVL_2_Pos              (2UL)                     /*!< HSICMU ICR: SYNCLVL_2 (Bit 2)                               */
#define HSICMU_ICR_SYNCLVL_2_Msk              (0x4UL)                   /*!< HSICMU ICR: SYNCLVL_2 (Bitfield-Mask: 0x01)                 */
#define HSICMU_ICR_SYNCLVL_3_Pos              (3UL)                     /*!< HSICMU ICR: SYNCLVL_3 (Bit 3)                               */
#define HSICMU_ICR_SYNCLVL_3_Msk              (0x8UL)                   /*!< HSICMU ICR: SYNCLVL_3 (Bitfield-Mask: 0x01)                 */
#define HSICMU_ICR_SYNCLVL_4_Pos              (4UL)                     /*!< HSICMU ICR: SYNCLVL_4 (Bit 4)                               */
#define HSICMU_ICR_SYNCLVL_4_Msk              (0x10UL)                  /*!< HSICMU ICR: SYNCLVL_4 (Bitfield-Mask: 0x01)                 */
#define HSICMU_ICR_FECOVF_Pos                 (12UL)                    /*!< HSICMU ICR: FECOVF (Bit 12)                                 */
#define HSICMU_ICR_FECOVF_Msk                 (0x1000UL)                /*!< HSICMU ICR: FECOVF (Bitfield-Mask: 0x01)                    */
#define HSICMU_ICR_TRIMOVF_Pos                (13UL)                    /*!< HSICMU ICR: TRIMOVF (Bit 13)                                */
#define HSICMU_ICR_TRIMOVF_Msk                (0x2000UL)                /*!< HSICMU ICR: TRIMOVF (Bitfield-Mask: 0x01)                   */
#define HSICMU_ICR_SYNC_FLAG_Pos              (14UL)                    /*!< HSICMU ICR: SYNC_FLAG (Bit 14)                              */
#define HSICMU_ICR_SYNC_FLAG_Msk              (0x4000UL)                /*!< HSICMU ICR: SYNC_FLAG (Bitfield-Mask: 0x01)                 */

/* --------------------------------  HSICMU_ATRIM  -------------------------------- */
#define HSICMU_ATRIM_ATRIM_Pos                (0UL)                     /*!< HSICMU ATRIM: ATRIM (Bit 0)                                 */
#define HSICMU_ATRIM_ATRIM_Msk                (0x7fUL)                  /*!< HSICMU ATRIM: ATRIM (Bitfield-Mask: 0x7f)                   */

/* ---------------------------------  HSICMU_CAP  --------------------------------- */
#define HSICMU_CAP_CAPTURE_Pos                (0UL)                     /*!< HSICMU CAP: CAPTURE (Bit 0)                                 */
#define HSICMU_CAP_CAPTURE_Msk                (0xfffffUL)               /*!< HSICMU CAP: CAPTURE (Bitfield-Mask: 0xfffff)                */

/* ---------------------------------  HSICMU_THR  --------------------------------- */
#define HSICMU_THR_FETHR_Pos                  (0UL)                     /*!< HSICMU THR: FETHR (Bit 0)                                   */
#define HSICMU_THR_FETHR_Msk                  (0xffffUL)                /*!< HSICMU THR: FETHR (Bitfield-Mask: 0xffff)                   */


/* ================================================================================ */
/* ================           Group 'DMA' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  DMA_CR  ----------------------------------- */
#define DMA_CR_DIR_Pos                        (1UL)                     /*!< DMA CR: DIR (Bit 1)                                         */
#define DMA_CR_DIR_Msk                        (0x2UL)                   /*!< DMA CR: DIR (Bitfield-Mask: 0x01)                           */
#define DMA_CR_SIZE_Pos                       (2UL)                     /*!< DMA CR: SIZE (Bit 2)                                        */
#define DMA_CR_SIZE_Msk                       (0xcUL)                   /*!< DMA CR: SIZE (Bitfield-Mask: 0x03)                          */
#define DMA_CR_PERISEL_Pos                    (8UL)                     /*!< DMA CR: PERISEL (Bit 8)                                     */
#define DMA_CR_PERISEL_Msk                    (0x1f00UL)                /*!< DMA CR: PERISEL (Bitfield-Mask: 0x1f)                       */
#define DMA_CR_TRANSCNT_Pos                   (16UL)                    /*!< DMA CR: TRANSCNT (Bit 16)                                   */
#define DMA_CR_TRANSCNT_Msk                   (0xfff0000UL)             /*!< DMA CR: TRANSCNT (Bitfield-Mask: 0xfff)                     */

/* -----------------------------------  DMA_SR  ----------------------------------- */
#define DMA_SR_DMAEN_Pos                      (0UL)                     /*!< DMA SR: DMAEN (Bit 0)                                       */
#define DMA_SR_DMAEN_Msk                      (0x1UL)                   /*!< DMA SR: DMAEN (Bitfield-Mask: 0x01)                         */
#define DMA_SR_DMARC_Pos                      (4UL)                     /*!< DMA SR: DMARC (Bit 4)                                       */
#define DMA_SR_DMARC_Msk                      (0x10UL)                  /*!< DMA SR: DMARC (Bitfield-Mask: 0x01)                         */
#define DMA_SR_EOT_Pos                        (7UL)                     /*!< DMA SR: EOT (Bit 7)                                         */
#define DMA_SR_EOT_Msk                        (0x80UL)                  /*!< DMA SR: EOT (Bitfield-Mask: 0x01)                           */

/* -----------------------------------  DMA_PAR  ---------------------------------- */
#define DMA_PAR_PAR_Pos                       (0UL)                     /*!< DMA PAR: PAR (Bit 0)                                        */
#define DMA_PAR_PAR_Msk                       (0xffffUL)                /*!< DMA PAR: PAR (Bitfield-Mask: 0xffff)                        */
#define DMA_PAR_PARBASEOFFSET_Pos             (16UL)                    /*!< DMA PAR: PARBASEOFFSET (Bit 16)                             */
#define DMA_PAR_PARBASEOFFSET_Msk             (0xffff0000UL)            /*!< DMA PAR: PARBASEOFFSET (Bitfield-Mask: 0xffff)              */

/* -----------------------------------  DMA_MAR  ---------------------------------- */
#define DMA_MAR_MAR_Pos                       (0UL)                     /*!< DMA MAR: MAR (Bit 0)                                        */
#define DMA_MAR_MAR_Msk                       (0xffffUL)                /*!< DMA MAR: MAR (Bitfield-Mask: 0xffff)                        */
#define DMA_MAR_MEMBASEADDRESS_Pos            (16UL)                    /*!< DMA MAR: MEMBASEADDRESS (Bit 16)                            */
#define DMA_MAR_MEMBASEADDRESS_Msk            (0xffff0000UL)            /*!< DMA MAR: MEMBASEADDRESS (Bitfield-Mask: 0xffff)             */


/* ================================================================================ */
/* ================          struct 'DMA0' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  DMA0_CR  ---------------------------------- */
#define DMA0_CR_DIR_Pos                       (1UL)                     /*!< DMA0 CR: DIR (Bit 1)                                        */
#define DMA0_CR_DIR_Msk                       (0x2UL)                   /*!< DMA0 CR: DIR (Bitfield-Mask: 0x01)                          */
#define DMA0_CR_SIZE_Pos                      (2UL)                     /*!< DMA0 CR: SIZE (Bit 2)                                       */
#define DMA0_CR_SIZE_Msk                      (0xcUL)                   /*!< DMA0 CR: SIZE (Bitfield-Mask: 0x03)                         */
#define DMA0_CR_PERISEL_Pos                   (8UL)                     /*!< DMA0 CR: PERISEL (Bit 8)                                    */
#define DMA0_CR_PERISEL_Msk                   (0x1f00UL)                /*!< DMA0 CR: PERISEL (Bitfield-Mask: 0x1f)                      */
#define DMA0_CR_TRANSCNT_Pos                  (16UL)                    /*!< DMA0 CR: TRANSCNT (Bit 16)                                  */
#define DMA0_CR_TRANSCNT_Msk                  (0xfff0000UL)             /*!< DMA0 CR: TRANSCNT (Bitfield-Mask: 0xfff)                    */

/* -----------------------------------  DMA0_SR  ---------------------------------- */
#define DMA0_SR_DMAEN_Pos                     (0UL)                     /*!< DMA0 SR: DMAEN (Bit 0)                                      */
#define DMA0_SR_DMAEN_Msk                     (0x1UL)                   /*!< DMA0 SR: DMAEN (Bitfield-Mask: 0x01)                        */
#define DMA0_SR_DMARC_Pos                     (4UL)                     /*!< DMA0 SR: DMARC (Bit 4)                                      */
#define DMA0_SR_DMARC_Msk                     (0x10UL)                  /*!< DMA0 SR: DMARC (Bitfield-Mask: 0x01)                        */
#define DMA0_SR_EOT_Pos                       (7UL)                     /*!< DMA0 SR: EOT (Bit 7)                                        */
#define DMA0_SR_EOT_Msk                       (0x80UL)                  /*!< DMA0 SR: EOT (Bitfield-Mask: 0x01)                          */

/* ----------------------------------  DMA0_PAR  ---------------------------------- */
#define DMA0_PAR_PAR_Pos                      (0UL)                     /*!< DMA0 PAR: PAR (Bit 0)                                       */
#define DMA0_PAR_PAR_Msk                      (0xffffUL)                /*!< DMA0 PAR: PAR (Bitfield-Mask: 0xffff)                       */
#define DMA0_PAR_PARBASEOFFSET_Pos            (16UL)                    /*!< DMA0 PAR: PARBASEOFFSET (Bit 16)                            */
#define DMA0_PAR_PARBASEOFFSET_Msk            (0xffff0000UL)            /*!< DMA0 PAR: PARBASEOFFSET (Bitfield-Mask: 0xffff)             */

/* ----------------------------------  DMA0_MAR  ---------------------------------- */
#define DMA0_MAR_MAR_Pos                      (0UL)                     /*!< DMA0 MAR: MAR (Bit 0)                                       */
#define DMA0_MAR_MAR_Msk                      (0xffffUL)                /*!< DMA0 MAR: MAR (Bitfield-Mask: 0xffff)                       */
#define DMA0_MAR_MEMBASEADDRESS_Pos           (16UL)                    /*!< DMA0 MAR: MEMBASEADDRESS (Bit 16)                           */
#define DMA0_MAR_MEMBASEADDRESS_Msk           (0xffff0000UL)            /*!< DMA0 MAR: MEMBASEADDRESS (Bitfield-Mask: 0xffff)            */


/* ================================================================================ */
/* ================          struct 'DMA1' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  DMA1_CR  ---------------------------------- */
#define DMA1_CR_DIR_Pos                       (1UL)                     /*!< DMA1 CR: DIR (Bit 1)                                        */
#define DMA1_CR_DIR_Msk                       (0x2UL)                   /*!< DMA1 CR: DIR (Bitfield-Mask: 0x01)                          */
#define DMA1_CR_SIZE_Pos                      (2UL)                     /*!< DMA1 CR: SIZE (Bit 2)                                       */
#define DMA1_CR_SIZE_Msk                      (0xcUL)                   /*!< DMA1 CR: SIZE (Bitfield-Mask: 0x03)                         */
#define DMA1_CR_PERISEL_Pos                   (8UL)                     /*!< DMA1 CR: PERISEL (Bit 8)                                    */
#define DMA1_CR_PERISEL_Msk                   (0x1f00UL)                /*!< DMA1 CR: PERISEL (Bitfield-Mask: 0x1f)                      */
#define DMA1_CR_TRANSCNT_Pos                  (16UL)                    /*!< DMA1 CR: TRANSCNT (Bit 16)                                  */
#define DMA1_CR_TRANSCNT_Msk                  (0xfff0000UL)             /*!< DMA1 CR: TRANSCNT (Bitfield-Mask: 0xfff)                    */

/* -----------------------------------  DMA1_SR  ---------------------------------- */
#define DMA1_SR_DMAEN_Pos                     (0UL)                     /*!< DMA1 SR: DMAEN (Bit 0)                                      */
#define DMA1_SR_DMAEN_Msk                     (0x1UL)                   /*!< DMA1 SR: DMAEN (Bitfield-Mask: 0x01)                        */
#define DMA1_SR_DMARC_Pos                     (4UL)                     /*!< DMA1 SR: DMARC (Bit 4)                                      */
#define DMA1_SR_DMARC_Msk                     (0x10UL)                  /*!< DMA1 SR: DMARC (Bitfield-Mask: 0x01)                        */
#define DMA1_SR_EOT_Pos                       (7UL)                     /*!< DMA1 SR: EOT (Bit 7)                                        */
#define DMA1_SR_EOT_Msk                       (0x80UL)                  /*!< DMA1 SR: EOT (Bitfield-Mask: 0x01)                          */

/* ----------------------------------  DMA1_PAR  ---------------------------------- */
#define DMA1_PAR_PAR_Pos                      (0UL)                     /*!< DMA1 PAR: PAR (Bit 0)                                       */
#define DMA1_PAR_PAR_Msk                      (0xffffUL)                /*!< DMA1 PAR: PAR (Bitfield-Mask: 0xffff)                       */
#define DMA1_PAR_PARBASEOFFSET_Pos            (16UL)                    /*!< DMA1 PAR: PARBASEOFFSET (Bit 16)                            */
#define DMA1_PAR_PARBASEOFFSET_Msk            (0xffff0000UL)            /*!< DMA1 PAR: PARBASEOFFSET (Bitfield-Mask: 0xffff)             */

/* ----------------------------------  DMA1_MAR  ---------------------------------- */
#define DMA1_MAR_MAR_Pos                      (0UL)                     /*!< DMA1 MAR: MAR (Bit 0)                                       */
#define DMA1_MAR_MAR_Msk                      (0xffffUL)                /*!< DMA1 MAR: MAR (Bitfield-Mask: 0xffff)                       */
#define DMA1_MAR_MEMBASEADDRESS_Pos           (16UL)                    /*!< DMA1 MAR: MEMBASEADDRESS (Bit 16)                           */
#define DMA1_MAR_MEMBASEADDRESS_Msk           (0xffff0000UL)            /*!< DMA1 MAR: MEMBASEADDRESS (Bitfield-Mask: 0xffff)            */


/* ================================================================================ */
/* ================          struct 'DMA2' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  DMA2_CR  ---------------------------------- */
#define DMA2_CR_DIR_Pos                       (1UL)                     /*!< DMA2 CR: DIR (Bit 1)                                        */
#define DMA2_CR_DIR_Msk                       (0x2UL)                   /*!< DMA2 CR: DIR (Bitfield-Mask: 0x01)                          */
#define DMA2_CR_SIZE_Pos                      (2UL)                     /*!< DMA2 CR: SIZE (Bit 2)                                       */
#define DMA2_CR_SIZE_Msk                      (0xcUL)                   /*!< DMA2 CR: SIZE (Bitfield-Mask: 0x03)                         */
#define DMA2_CR_PERISEL_Pos                   (8UL)                     /*!< DMA2 CR: PERISEL (Bit 8)                                    */
#define DMA2_CR_PERISEL_Msk                   (0x1f00UL)                /*!< DMA2 CR: PERISEL (Bitfield-Mask: 0x1f)                      */
#define DMA2_CR_TRANSCNT_Pos                  (16UL)                    /*!< DMA2 CR: TRANSCNT (Bit 16)                                  */
#define DMA2_CR_TRANSCNT_Msk                  (0xfff0000UL)             /*!< DMA2 CR: TRANSCNT (Bitfield-Mask: 0xfff)                    */

/* -----------------------------------  DMA2_SR  ---------------------------------- */
#define DMA2_SR_DMAEN_Pos                     (0UL)                     /*!< DMA2 SR: DMAEN (Bit 0)                                      */
#define DMA2_SR_DMAEN_Msk                     (0x1UL)                   /*!< DMA2 SR: DMAEN (Bitfield-Mask: 0x01)                        */
#define DMA2_SR_DMARC_Pos                     (4UL)                     /*!< DMA2 SR: DMARC (Bit 4)                                      */
#define DMA2_SR_DMARC_Msk                     (0x10UL)                  /*!< DMA2 SR: DMARC (Bitfield-Mask: 0x01)                        */
#define DMA2_SR_EOT_Pos                       (7UL)                     /*!< DMA2 SR: EOT (Bit 7)                                        */
#define DMA2_SR_EOT_Msk                       (0x80UL)                  /*!< DMA2 SR: EOT (Bitfield-Mask: 0x01)                          */

/* ----------------------------------  DMA2_PAR  ---------------------------------- */
#define DMA2_PAR_PAR_Pos                      (0UL)                     /*!< DMA2 PAR: PAR (Bit 0)                                       */
#define DMA2_PAR_PAR_Msk                      (0xffffUL)                /*!< DMA2 PAR: PAR (Bitfield-Mask: 0xffff)                       */
#define DMA2_PAR_PARBASEOFFSET_Pos            (16UL)                    /*!< DMA2 PAR: PARBASEOFFSET (Bit 16)                            */
#define DMA2_PAR_PARBASEOFFSET_Msk            (0xffff0000UL)            /*!< DMA2 PAR: PARBASEOFFSET (Bitfield-Mask: 0xffff)             */

/* ----------------------------------  DMA2_MAR  ---------------------------------- */
#define DMA2_MAR_MAR_Pos                      (0UL)                     /*!< DMA2 MAR: MAR (Bit 0)                                       */
#define DMA2_MAR_MAR_Msk                      (0xffffUL)                /*!< DMA2 MAR: MAR (Bitfield-Mask: 0xffff)                       */
#define DMA2_MAR_MEMBASEADDRESS_Pos           (16UL)                    /*!< DMA2 MAR: MEMBASEADDRESS (Bit 16)                           */
#define DMA2_MAR_MEMBASEADDRESS_Msk           (0xffff0000UL)            /*!< DMA2 MAR: MEMBASEADDRESS (Bitfield-Mask: 0xffff)            */


/* ================================================================================ */
/* ================          struct 'DMA3' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  DMA3_CR  ---------------------------------- */
#define DMA3_CR_DIR_Pos                       (1UL)                     /*!< DMA3 CR: DIR (Bit 1)                                        */
#define DMA3_CR_DIR_Msk                       (0x2UL)                   /*!< DMA3 CR: DIR (Bitfield-Mask: 0x01)                          */
#define DMA3_CR_SIZE_Pos                      (2UL)                     /*!< DMA3 CR: SIZE (Bit 2)                                       */
#define DMA3_CR_SIZE_Msk                      (0xcUL)                   /*!< DMA3 CR: SIZE (Bitfield-Mask: 0x03)                         */
#define DMA3_CR_PERISEL_Pos                   (8UL)                     /*!< DMA3 CR: PERISEL (Bit 8)                                    */
#define DMA3_CR_PERISEL_Msk                   (0x1f00UL)                /*!< DMA3 CR: PERISEL (Bitfield-Mask: 0x1f)                      */
#define DMA3_CR_TRANSCNT_Pos                  (16UL)                    /*!< DMA3 CR: TRANSCNT (Bit 16)                                  */
#define DMA3_CR_TRANSCNT_Msk                  (0xfff0000UL)             /*!< DMA3 CR: TRANSCNT (Bitfield-Mask: 0xfff)                    */

/* -----------------------------------  DMA3_SR  ---------------------------------- */
#define DMA3_SR_DMAEN_Pos                     (0UL)                     /*!< DMA3 SR: DMAEN (Bit 0)                                      */
#define DMA3_SR_DMAEN_Msk                     (0x1UL)                   /*!< DMA3 SR: DMAEN (Bitfield-Mask: 0x01)                        */
#define DMA3_SR_DMARC_Pos                     (4UL)                     /*!< DMA3 SR: DMARC (Bit 4)                                      */
#define DMA3_SR_DMARC_Msk                     (0x10UL)                  /*!< DMA3 SR: DMARC (Bitfield-Mask: 0x01)                        */
#define DMA3_SR_EOT_Pos                       (7UL)                     /*!< DMA3 SR: EOT (Bit 7)                                        */
#define DMA3_SR_EOT_Msk                       (0x80UL)                  /*!< DMA3 SR: EOT (Bitfield-Mask: 0x01)                          */

/* ----------------------------------  DMA3_PAR  ---------------------------------- */
#define DMA3_PAR_PAR_Pos                      (0UL)                     /*!< DMA3 PAR: PAR (Bit 0)                                       */
#define DMA3_PAR_PAR_Msk                      (0xffffUL)                /*!< DMA3 PAR: PAR (Bitfield-Mask: 0xffff)                       */
#define DMA3_PAR_PARBASEOFFSET_Pos            (16UL)                    /*!< DMA3 PAR: PARBASEOFFSET (Bit 16)                            */
#define DMA3_PAR_PARBASEOFFSET_Msk            (0xffff0000UL)            /*!< DMA3 PAR: PARBASEOFFSET (Bitfield-Mask: 0xffff)             */

/* ----------------------------------  DMA3_MAR  ---------------------------------- */
#define DMA3_MAR_MAR_Pos                      (0UL)                     /*!< DMA3 MAR: MAR (Bit 0)                                       */
#define DMA3_MAR_MAR_Msk                      (0xffffUL)                /*!< DMA3 MAR: MAR (Bitfield-Mask: 0xffff)                       */
#define DMA3_MAR_MEMBASEADDRESS_Pos           (16UL)                    /*!< DMA3 MAR: MEMBASEADDRESS (Bit 16)                           */
#define DMA3_MAR_MEMBASEADDRESS_Msk           (0xffff0000UL)            /*!< DMA3 MAR: MEMBASEADDRESS (Bitfield-Mask: 0xffff)            */


/* ================================================================================ */
/* ================          struct 'DMA4' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  DMA4_CR  ---------------------------------- */
#define DMA4_CR_DIR_Pos                       (1UL)                     /*!< DMA4 CR: DIR (Bit 1)                                        */
#define DMA4_CR_DIR_Msk                       (0x2UL)                   /*!< DMA4 CR: DIR (Bitfield-Mask: 0x01)                          */
#define DMA4_CR_SIZE_Pos                      (2UL)                     /*!< DMA4 CR: SIZE (Bit 2)                                       */
#define DMA4_CR_SIZE_Msk                      (0xcUL)                   /*!< DMA4 CR: SIZE (Bitfield-Mask: 0x03)                         */
#define DMA4_CR_PERISEL_Pos                   (8UL)                     /*!< DMA4 CR: PERISEL (Bit 8)                                    */
#define DMA4_CR_PERISEL_Msk                   (0x1f00UL)                /*!< DMA4 CR: PERISEL (Bitfield-Mask: 0x1f)                      */
#define DMA4_CR_TRANSCNT_Pos                  (16UL)                    /*!< DMA4 CR: TRANSCNT (Bit 16)                                  */
#define DMA4_CR_TRANSCNT_Msk                  (0xfff0000UL)             /*!< DMA4 CR: TRANSCNT (Bitfield-Mask: 0xfff)                    */

/* -----------------------------------  DMA4_SR  ---------------------------------- */
#define DMA4_SR_DMAEN_Pos                     (0UL)                     /*!< DMA4 SR: DMAEN (Bit 0)                                      */
#define DMA4_SR_DMAEN_Msk                     (0x1UL)                   /*!< DMA4 SR: DMAEN (Bitfield-Mask: 0x01)                        */
#define DMA4_SR_DMARC_Pos                     (4UL)                     /*!< DMA4 SR: DMARC (Bit 4)                                      */
#define DMA4_SR_DMARC_Msk                     (0x10UL)                  /*!< DMA4 SR: DMARC (Bitfield-Mask: 0x01)                        */
#define DMA4_SR_EOT_Pos                       (7UL)                     /*!< DMA4 SR: EOT (Bit 7)                                        */
#define DMA4_SR_EOT_Msk                       (0x80UL)                  /*!< DMA4 SR: EOT (Bitfield-Mask: 0x01)                          */

/* ----------------------------------  DMA4_PAR  ---------------------------------- */
#define DMA4_PAR_PAR_Pos                      (0UL)                     /*!< DMA4 PAR: PAR (Bit 0)                                       */
#define DMA4_PAR_PAR_Msk                      (0xffffUL)                /*!< DMA4 PAR: PAR (Bitfield-Mask: 0xffff)                       */
#define DMA4_PAR_PARBASEOFFSET_Pos            (16UL)                    /*!< DMA4 PAR: PARBASEOFFSET (Bit 16)                            */
#define DMA4_PAR_PARBASEOFFSET_Msk            (0xffff0000UL)            /*!< DMA4 PAR: PARBASEOFFSET (Bitfield-Mask: 0xffff)             */

/* ----------------------------------  DMA4_MAR  ---------------------------------- */
#define DMA4_MAR_MAR_Pos                      (0UL)                     /*!< DMA4 MAR: MAR (Bit 0)                                       */
#define DMA4_MAR_MAR_Msk                      (0xffffUL)                /*!< DMA4 MAR: MAR (Bitfield-Mask: 0xffff)                       */
#define DMA4_MAR_MEMBASEADDRESS_Pos           (16UL)                    /*!< DMA4 MAR: MEMBASEADDRESS (Bit 16)                           */
#define DMA4_MAR_MEMBASEADDRESS_Msk           (0xffff0000UL)            /*!< DMA4 MAR: MEMBASEADDRESS (Bitfield-Mask: 0xffff)            */


/* ================================================================================ */
/* ================          struct 'DMA5' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  DMA5_CR  ---------------------------------- */
#define DMA5_CR_DIR_Pos                       (1UL)                     /*!< DMA5 CR: DIR (Bit 1)                                        */
#define DMA5_CR_DIR_Msk                       (0x2UL)                   /*!< DMA5 CR: DIR (Bitfield-Mask: 0x01)                          */
#define DMA5_CR_SIZE_Pos                      (2UL)                     /*!< DMA5 CR: SIZE (Bit 2)                                       */
#define DMA5_CR_SIZE_Msk                      (0xcUL)                   /*!< DMA5 CR: SIZE (Bitfield-Mask: 0x03)                         */
#define DMA5_CR_PERISEL_Pos                   (8UL)                     /*!< DMA5 CR: PERISEL (Bit 8)                                    */
#define DMA5_CR_PERISEL_Msk                   (0x1f00UL)                /*!< DMA5 CR: PERISEL (Bitfield-Mask: 0x1f)                      */
#define DMA5_CR_TRANSCNT_Pos                  (16UL)                    /*!< DMA5 CR: TRANSCNT (Bit 16)                                  */
#define DMA5_CR_TRANSCNT_Msk                  (0xfff0000UL)             /*!< DMA5 CR: TRANSCNT (Bitfield-Mask: 0xfff)                    */

/* -----------------------------------  DMA5_SR  ---------------------------------- */
#define DMA5_SR_DMAEN_Pos                     (0UL)                     /*!< DMA5 SR: DMAEN (Bit 0)                                      */
#define DMA5_SR_DMAEN_Msk                     (0x1UL)                   /*!< DMA5 SR: DMAEN (Bitfield-Mask: 0x01)                        */
#define DMA5_SR_DMARC_Pos                     (4UL)                     /*!< DMA5 SR: DMARC (Bit 4)                                      */
#define DMA5_SR_DMARC_Msk                     (0x10UL)                  /*!< DMA5 SR: DMARC (Bitfield-Mask: 0x01)                        */
#define DMA5_SR_EOT_Pos                       (7UL)                     /*!< DMA5 SR: EOT (Bit 7)                                        */
#define DMA5_SR_EOT_Msk                       (0x80UL)                  /*!< DMA5 SR: EOT (Bitfield-Mask: 0x01)                          */

/* ----------------------------------  DMA5_PAR  ---------------------------------- */
#define DMA5_PAR_PAR_Pos                      (0UL)                     /*!< DMA5 PAR: PAR (Bit 0)                                       */
#define DMA5_PAR_PAR_Msk                      (0xffffUL)                /*!< DMA5 PAR: PAR (Bitfield-Mask: 0xffff)                       */
#define DMA5_PAR_PARBASEOFFSET_Pos            (16UL)                    /*!< DMA5 PAR: PARBASEOFFSET (Bit 16)                            */
#define DMA5_PAR_PARBASEOFFSET_Msk            (0xffff0000UL)            /*!< DMA5 PAR: PARBASEOFFSET (Bitfield-Mask: 0xffff)             */

/* ----------------------------------  DMA5_MAR  ---------------------------------- */
#define DMA5_MAR_MAR_Pos                      (0UL)                     /*!< DMA5 MAR: MAR (Bit 0)                                       */
#define DMA5_MAR_MAR_Msk                      (0xffffUL)                /*!< DMA5 MAR: MAR (Bitfield-Mask: 0xffff)                       */
#define DMA5_MAR_MEMBASEADDRESS_Pos           (16UL)                    /*!< DMA5 MAR: MEMBASEADDRESS (Bit 16)                           */
#define DMA5_MAR_MEMBASEADDRESS_Msk           (0xffff0000UL)            /*!< DMA5 MAR: MEMBASEADDRESS (Bitfield-Mask: 0xffff)            */


/* ================================================================================ */
/* ================          struct 'WDT' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  WDT_LR  ----------------------------------- */
#define WDT_LR_LR_Pos                         (0UL)                     /*!< WDT LR: LR (Bit 0)                                          */
#define WDT_LR_LR_Msk                         (0xffffffffUL)            /*!< WDT LR: LR (Bitfield-Mask: 0xffffffff)                      */

/* -----------------------------------  WDT_CNT  ---------------------------------- */
#define WDT_CNT_CNT_Pos                       (0UL)                     /*!< WDT CNT: CNT (Bit 0)                                        */
#define WDT_CNT_CNT_Msk                       (0xffffffffUL)            /*!< WDT CNT: CNT (Bitfield-Mask: 0xffffffff)                    */

/* -----------------------------------  WDT_CON  ---------------------------------- */
#define WDT_CON_WPRS_Pos                      (0UL)                     /*!< WDT CON: WPRS (Bit 0)                                       */
#define WDT_CON_WPRS_Msk                      (0x7UL)                   /*!< WDT CON: WPRS (Bitfield-Mask: 0x07)                         */
#define WDT_CON_WDTEN_Pos                     (4UL)                     /*!< WDT CON: WDTEN (Bit 4)                                      */
#define WDT_CON_WDTEN_Msk                     (0x10UL)                  /*!< WDT CON: WDTEN (Bitfield-Mask: 0x01)                        */
#define WDT_CON_WDTRE_Pos                     (6UL)                     /*!< WDT CON: WDTRE (Bit 6)                                      */
#define WDT_CON_WDTRE_Msk                     (0x40UL)                  /*!< WDT CON: WDTRE (Bitfield-Mask: 0x01)                        */
#define WDT_CON_WDTIE_Pos                     (7UL)                     /*!< WDT CON: WDTIE (Bit 7)                                      */
#define WDT_CON_WDTIE_Msk                     (0x80UL)                  /*!< WDT CON: WDTIE (Bitfield-Mask: 0x01)                        */
#define WDT_CON_WUF_Pos                       (8UL)                     /*!< WDT CON: WUF (Bit 8)                                        */
#define WDT_CON_WUF_Msk                       (0x100UL)                 /*!< WDT CON: WUF (Bitfield-Mask: 0x01)                          */

/* -----------------------------------  WDT_AEN  ---------------------------------- */
#define WDT_AEN_AEN_Pos                       (0UL)                     /*!< WDT AEN: AEN (Bit 0)                                        */
#define WDT_AEN_AEN_Msk                       (0xffffUL)                /*!< WDT AEN: AEN (Bitfield-Mask: 0xffff)                        */
#define WDT_AEN_ENS_Pos                       (16UL)                    /*!< WDT AEN: ENS (Bit 16)                                       */
#define WDT_AEN_ENS_Msk                       (0x10000UL)               /*!< WDT AEN: ENS (Bitfield-Mask: 0x01)                          */


/* ================================================================================ */
/* ================          Group 'TIMER' Position & Mask         ================ */
/* ================================================================================ */


/* ----------------------------------  TIMER_CR1  --------------------------------- */
#define TIMER_CR1_MODE_Pos                    (0UL)                     /*!< TIMER CR1: MODE (Bit 0)                                     */
#define TIMER_CR1_MODE_Msk                    (0x3UL)                   /*!< TIMER CR1: MODE (Bitfield-Mask: 0x03)                       */
#define TIMER_CR1_CLRMOD_Pos                  (2UL)                     /*!< TIMER CR1: CLRMOD (Bit 2)                                   */
#define TIMER_CR1_CLRMOD_Msk                  (0xcUL)                   /*!< TIMER CR1: CLRMOD (Bitfield-Mask: 0x03)                     */
#define TIMER_CR1_CKSEL_Pos                   (4UL)                     /*!< TIMER CR1: CKSEL (Bit 4)                                    */
#define TIMER_CR1_CKSEL_Msk                   (0x70UL)                  /*!< TIMER CR1: CKSEL (Bitfield-Mask: 0x07)                      */
#define TIMER_CR1_STARTLVL_Pos                (7UL)                     /*!< TIMER CR1: STARTLVL (Bit 7)                                 */
#define TIMER_CR1_STARTLVL_Msk                (0x80UL)                  /*!< TIMER CR1: STARTLVL (Bitfield-Mask: 0x01)                   */
#define TIMER_CR1_ADCTRGEN_Pos                (8UL)                     /*!< TIMER CR1: ADCTRGEN (Bit 8)                                 */
#define TIMER_CR1_ADCTRGEN_Msk                (0x100UL)                 /*!< TIMER CR1: ADCTRGEN (Bitfield-Mask: 0x01)                   */
#define TIMER_CR1_IOSEL_Pos                   (11UL)                    /*!< TIMER CR1: IOSEL (Bit 11)                                   */
#define TIMER_CR1_IOSEL_Msk                   (0x800UL)                 /*!< TIMER CR1: IOSEL (Bitfield-Mask: 0x01)                      */
#define TIMER_CR1_OUTPOL_Pos                  (12UL)                    /*!< TIMER CR1: OUTPOL (Bit 12)                                  */
#define TIMER_CR1_OUTPOL_Msk                  (0x1000UL)                /*!< TIMER CR1: OUTPOL (Bitfield-Mask: 0x01)                     */
#define TIMER_CR1_UAO_Pos                     (13UL)                    /*!< TIMER CR1: UAO (Bit 13)                                     */
#define TIMER_CR1_UAO_Msk                     (0x2000UL)                /*!< TIMER CR1: UAO (Bitfield-Mask: 0x01)                        */
#define TIMER_CR1_TRGMOD_Pos                  (14UL)                    /*!< TIMER CR1: TRGMOD (Bit 14)                                  */
#define TIMER_CR1_TRGMOD_Msk                  (0xc000UL)                /*!< TIMER CR1: TRGMOD (Bitfield-Mask: 0x03)                     */

/* ----------------------------------  TIMER_CR2  --------------------------------- */
#define TIMER_CR2_TEN_Pos                     (0UL)                     /*!< TIMER CR2: TEN (Bit 0)                                      */
#define TIMER_CR2_TEN_Msk                     (0x1UL)                   /*!< TIMER CR2: TEN (Bitfield-Mask: 0x01)                        */
#define TIMER_CR2_TCLR_Pos                    (1UL)                     /*!< TIMER CR2: TCLR (Bit 1)                                     */
#define TIMER_CR2_TCLR_Msk                    (0x2UL)                   /*!< TIMER CR2: TCLR (Bitfield-Mask: 0x01)                       */

/* ----------------------------------  TIMER_PRS  --------------------------------- */
#define TIMER_PRS_PRS_Pos                     (0UL)                     /*!< TIMER PRS: PRS (Bit 0)                                      */
#define TIMER_PRS_PRS_Msk                     (0x3ffUL)                 /*!< TIMER PRS: PRS (Bitfield-Mask: 0x3ff)                       */

/* ----------------------------------  TIMER_GRA  --------------------------------- */
#define TIMER_GRA_GRA_Pos                     (0UL)                     /*!< TIMER GRA: GRA (Bit 0)                                      */
#define TIMER_GRA_GRA_Msk                     (0xffffUL)                /*!< TIMER GRA: GRA (Bitfield-Mask: 0xffff)                      */

/* ----------------------------------  TIMER_GRB  --------------------------------- */
#define TIMER_GRB_GRB_Pos                     (0UL)                     /*!< TIMER GRB: GRB (Bit 0)                                      */
#define TIMER_GRB_GRB_Msk                     (0xffffUL)                /*!< TIMER GRB: GRB (Bitfield-Mask: 0xffff)                      */

/* ----------------------------------  TIMER_CNT  --------------------------------- */
#define TIMER_CNT_CNT_Pos                     (0UL)                     /*!< TIMER CNT: CNT (Bit 0)                                      */
#define TIMER_CNT_CNT_Msk                     (0xffffUL)                /*!< TIMER CNT: CNT (Bitfield-Mask: 0xffff)                      */

/* ----------------------------------  TIMER_SR  ---------------------------------- */
#define TIMER_SR_OVF_Pos                      (0UL)                     /*!< TIMER SR: OVF (Bit 0)                                       */
#define TIMER_SR_OVF_Msk                      (0x1UL)                   /*!< TIMER SR: OVF (Bitfield-Mask: 0x01)                         */
#define TIMER_SR_MFB_Pos                      (1UL)                     /*!< TIMER SR: MFB (Bit 1)                                       */
#define TIMER_SR_MFB_Msk                      (0x2UL)                   /*!< TIMER SR: MFB (Bitfield-Mask: 0x01)                         */
#define TIMER_SR_MFA_Pos                      (2UL)                     /*!< TIMER SR: MFA (Bit 2)                                       */
#define TIMER_SR_MFA_Msk                      (0x4UL)                   /*!< TIMER SR: MFA (Bitfield-Mask: 0x01)                         */

/* ----------------------------------  TIMER_IER  --------------------------------- */
#define TIMER_IER_OVIE_Pos                    (0UL)                     /*!< TIMER IER: OVIE (Bit 0)                                     */
#define TIMER_IER_OVIE_Msk                    (0x1UL)                   /*!< TIMER IER: OVIE (Bitfield-Mask: 0x01)                       */
#define TIMER_IER_MBIE_Pos                    (1UL)                     /*!< TIMER IER: MBIE (Bit 1)                                     */
#define TIMER_IER_MBIE_Msk                    (0x2UL)                   /*!< TIMER IER: MBIE (Bitfield-Mask: 0x01)                       */
#define TIMER_IER_MAIE_Pos                    (2UL)                     /*!< TIMER IER: MAIE (Bit 2)                                     */
#define TIMER_IER_MAIE_Msk                    (0x4UL)                   /*!< TIMER IER: MAIE (Bitfield-Mask: 0x01)                       */

/* --------------------------------  TIMER_TRGPNT  -------------------------------- */
#define TIMER_TRGPNT_TRGPNT_Pos               (0UL)                     /*!< TIMER TRGPNT: TRGPNT (Bit 0)                                */
#define TIMER_TRGPNT_TRGPNT_Msk               (0xffffUL)                /*!< TIMER TRGPNT: TRGPNT (Bitfield-Mask: 0xffff)                */

/* ---------------------------------  TIMER_SYNC  --------------------------------- */
#define TIMER_SYNC_SYNCDLY_Pos                (0UL)                     /*!< TIMER SYNC: SYNCDLY (Bit 0)                                 */
#define TIMER_SYNC_SYNCDLY_Msk                (0xffffUL)                /*!< TIMER SYNC: SYNCDLY (Bitfield-Mask: 0xffff)                 */
#define TIMER_SYNC_CSYNC_Pos                  (16UL)                    /*!< TIMER SYNC: CSYNC (Bit 16)                                  */
#define TIMER_SYNC_CSYNC_Msk                  (0x10000UL)               /*!< TIMER SYNC: CSYNC (Bitfield-Mask: 0x01)                     */
#define TIMER_SYNC_SSYNC_Pos                  (17UL)                    /*!< TIMER SYNC: SSYNC (Bit 17)                                  */
#define TIMER_SYNC_SSYNC_Msk                  (0x20000UL)               /*!< TIMER SYNC: SSYNC (Bitfield-Mask: 0x01)                     */
#define TIMER_SYNC_T0SYNCB_Pos                (20UL)                    /*!< TIMER SYNC: T0SYNCB (Bit 20)                                */
#define TIMER_SYNC_T0SYNCB_Msk                (0x100000UL)              /*!< TIMER SYNC: T0SYNCB (Bitfield-Mask: 0x01)                   */
#define TIMER_SYNC_T1SYNCB_Pos                (21UL)                    /*!< TIMER SYNC: T1SYNCB (Bit 21)                                */
#define TIMER_SYNC_T1SYNCB_Msk                (0x200000UL)              /*!< TIMER SYNC: T1SYNCB (Bitfield-Mask: 0x01)                   */
#define TIMER_SYNC_T2SYNCB_Pos                (22UL)                    /*!< TIMER SYNC: T2SYNCB (Bit 22)                                */
#define TIMER_SYNC_T2SYNCB_Msk                (0x400000UL)              /*!< TIMER SYNC: T2SYNCB (Bitfield-Mask: 0x01)                   */
#define TIMER_SYNC_T3SYNCB_Pos                (23UL)                    /*!< TIMER SYNC: T3SYNCB (Bit 23)                                */
#define TIMER_SYNC_T3SYNCB_Msk                (0x800000UL)              /*!< TIMER SYNC: T3SYNCB (Bitfield-Mask: 0x01)                   */
#define TIMER_SYNC_T4SYNCB_Pos                (24UL)                    /*!< TIMER SYNC: T4SYNCB (Bit 24)                                */
#define TIMER_SYNC_T4SYNCB_Msk                (0x1000000UL)             /*!< TIMER SYNC: T4SYNCB (Bitfield-Mask: 0x01)                   */
#define TIMER_SYNC_T5SYNCB_Pos                (25UL)                    /*!< TIMER SYNC: T5SYNCB (Bit 25)                                */
#define TIMER_SYNC_T5SYNCB_Msk                (0x2000000UL)             /*!< TIMER SYNC: T5SYNCB (Bitfield-Mask: 0x01)                   */
#define TIMER_SYNC_T6SYNCB_Pos                (26UL)                    /*!< TIMER SYNC: T6SYNCB (Bit 26)                                */
#define TIMER_SYNC_T6SYNCB_Msk                (0x4000000UL)             /*!< TIMER SYNC: T6SYNCB (Bitfield-Mask: 0x01)                   */
#define TIMER_SYNC_T7SYNCB_Pos                (27UL)                    /*!< TIMER SYNC: T7SYNCB (Bit 27)                                */
#define TIMER_SYNC_T7SYNCB_Msk                (0x8000000UL)             /*!< TIMER SYNC: T7SYNCB (Bitfield-Mask: 0x01)                   */
#define TIMER_SYNC_T8SYNCB_Pos                (28UL)                    /*!< TIMER SYNC: T8SYNCB (Bit 28)                                */
#define TIMER_SYNC_T8SYNCB_Msk                (0x10000000UL)            /*!< TIMER SYNC: T8SYNCB (Bitfield-Mask: 0x01)                   */
#define TIMER_SYNC_T9SYNCB_Pos                (29UL)                    /*!< TIMER SYNC: T9SYNCB (Bit 29)                                */
#define TIMER_SYNC_T9SYNCB_Msk                (0x20000000UL)            /*!< TIMER SYNC: T9SYNCB (Bitfield-Mask: 0x01)                   */


/* ================================================================================ */
/* ================         struct 'TIMER0' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER0_CR1  --------------------------------- */
#define TIMER0_CR1_MODE_Pos                   (0UL)                     /*!< TIMER0 CR1: MODE (Bit 0)                                    */
#define TIMER0_CR1_MODE_Msk                   (0x3UL)                   /*!< TIMER0 CR1: MODE (Bitfield-Mask: 0x03)                      */
#define TIMER0_CR1_CLRMOD_Pos                 (2UL)                     /*!< TIMER0 CR1: CLRMOD (Bit 2)                                  */
#define TIMER0_CR1_CLRMOD_Msk                 (0xcUL)                   /*!< TIMER0 CR1: CLRMOD (Bitfield-Mask: 0x03)                    */
#define TIMER0_CR1_CKSEL_Pos                  (4UL)                     /*!< TIMER0 CR1: CKSEL (Bit 4)                                   */
#define TIMER0_CR1_CKSEL_Msk                  (0x70UL)                  /*!< TIMER0 CR1: CKSEL (Bitfield-Mask: 0x07)                     */
#define TIMER0_CR1_STARTLVL_Pos               (7UL)                     /*!< TIMER0 CR1: STARTLVL (Bit 7)                                */
#define TIMER0_CR1_STARTLVL_Msk               (0x80UL)                  /*!< TIMER0 CR1: STARTLVL (Bitfield-Mask: 0x01)                  */
#define TIMER0_CR1_ADCTRGEN_Pos               (8UL)                     /*!< TIMER0 CR1: ADCTRGEN (Bit 8)                                */
#define TIMER0_CR1_ADCTRGEN_Msk               (0x100UL)                 /*!< TIMER0 CR1: ADCTRGEN (Bitfield-Mask: 0x01)                  */
#define TIMER0_CR1_IOSEL_Pos                  (11UL)                    /*!< TIMER0 CR1: IOSEL (Bit 11)                                  */
#define TIMER0_CR1_IOSEL_Msk                  (0x800UL)                 /*!< TIMER0 CR1: IOSEL (Bitfield-Mask: 0x01)                     */
#define TIMER0_CR1_OUTPOL_Pos                 (12UL)                    /*!< TIMER0 CR1: OUTPOL (Bit 12)                                 */
#define TIMER0_CR1_OUTPOL_Msk                 (0x1000UL)                /*!< TIMER0 CR1: OUTPOL (Bitfield-Mask: 0x01)                    */
#define TIMER0_CR1_UAO_Pos                    (13UL)                    /*!< TIMER0 CR1: UAO (Bit 13)                                    */
#define TIMER0_CR1_UAO_Msk                    (0x2000UL)                /*!< TIMER0 CR1: UAO (Bitfield-Mask: 0x01)                       */
#define TIMER0_CR1_TRGMOD_Pos                 (14UL)                    /*!< TIMER0 CR1: TRGMOD (Bit 14)                                 */
#define TIMER0_CR1_TRGMOD_Msk                 (0xc000UL)                /*!< TIMER0 CR1: TRGMOD (Bitfield-Mask: 0x03)                    */

/* ---------------------------------  TIMER0_CR2  --------------------------------- */
#define TIMER0_CR2_TEN_Pos                    (0UL)                     /*!< TIMER0 CR2: TEN (Bit 0)                                     */
#define TIMER0_CR2_TEN_Msk                    (0x1UL)                   /*!< TIMER0 CR2: TEN (Bitfield-Mask: 0x01)                       */
#define TIMER0_CR2_TCLR_Pos                   (1UL)                     /*!< TIMER0 CR2: TCLR (Bit 1)                                    */
#define TIMER0_CR2_TCLR_Msk                   (0x2UL)                   /*!< TIMER0 CR2: TCLR (Bitfield-Mask: 0x01)                      */

/* ---------------------------------  TIMER0_PRS  --------------------------------- */
#define TIMER0_PRS_PRS_Pos                    (0UL)                     /*!< TIMER0 PRS: PRS (Bit 0)                                     */
#define TIMER0_PRS_PRS_Msk                    (0x3ffUL)                 /*!< TIMER0 PRS: PRS (Bitfield-Mask: 0x3ff)                      */

/* ---------------------------------  TIMER0_GRA  --------------------------------- */
#define TIMER0_GRA_GRA_Pos                    (0UL)                     /*!< TIMER0 GRA: GRA (Bit 0)                                     */
#define TIMER0_GRA_GRA_Msk                    (0xffffUL)                /*!< TIMER0 GRA: GRA (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER0_GRB  --------------------------------- */
#define TIMER0_GRB_GRB_Pos                    (0UL)                     /*!< TIMER0 GRB: GRB (Bit 0)                                     */
#define TIMER0_GRB_GRB_Msk                    (0xffffUL)                /*!< TIMER0 GRB: GRB (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER0_CNT  --------------------------------- */
#define TIMER0_CNT_CNT_Pos                    (0UL)                     /*!< TIMER0 CNT: CNT (Bit 0)                                     */
#define TIMER0_CNT_CNT_Msk                    (0xffffUL)                /*!< TIMER0 CNT: CNT (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  TIMER0_SR  --------------------------------- */
#define TIMER0_SR_OVF_Pos                     (0UL)                     /*!< TIMER0 SR: OVF (Bit 0)                                      */
#define TIMER0_SR_OVF_Msk                     (0x1UL)                   /*!< TIMER0 SR: OVF (Bitfield-Mask: 0x01)                        */
#define TIMER0_SR_MFB_Pos                     (1UL)                     /*!< TIMER0 SR: MFB (Bit 1)                                      */
#define TIMER0_SR_MFB_Msk                     (0x2UL)                   /*!< TIMER0 SR: MFB (Bitfield-Mask: 0x01)                        */
#define TIMER0_SR_MFA_Pos                     (2UL)                     /*!< TIMER0 SR: MFA (Bit 2)                                      */
#define TIMER0_SR_MFA_Msk                     (0x4UL)                   /*!< TIMER0 SR: MFA (Bitfield-Mask: 0x01)                        */

/* ---------------------------------  TIMER0_IER  --------------------------------- */
#define TIMER0_IER_OVIE_Pos                   (0UL)                     /*!< TIMER0 IER: OVIE (Bit 0)                                    */
#define TIMER0_IER_OVIE_Msk                   (0x1UL)                   /*!< TIMER0 IER: OVIE (Bitfield-Mask: 0x01)                      */
#define TIMER0_IER_MBIE_Pos                   (1UL)                     /*!< TIMER0 IER: MBIE (Bit 1)                                    */
#define TIMER0_IER_MBIE_Msk                   (0x2UL)                   /*!< TIMER0 IER: MBIE (Bitfield-Mask: 0x01)                      */
#define TIMER0_IER_MAIE_Pos                   (2UL)                     /*!< TIMER0 IER: MAIE (Bit 2)                                    */
#define TIMER0_IER_MAIE_Msk                   (0x4UL)                   /*!< TIMER0 IER: MAIE (Bitfield-Mask: 0x01)                      */

/* --------------------------------  TIMER0_TRGPNT  ------------------------------- */
#define TIMER0_TRGPNT_TRGPNT_Pos              (0UL)                     /*!< TIMER0 TRGPNT: TRGPNT (Bit 0)                               */
#define TIMER0_TRGPNT_TRGPNT_Msk              (0xffffUL)                /*!< TIMER0 TRGPNT: TRGPNT (Bitfield-Mask: 0xffff)               */

/* ---------------------------------  TIMER0_SYNC  -------------------------------- */
#define TIMER0_SYNC_SYNCDLY_Pos               (0UL)                     /*!< TIMER0 SYNC: SYNCDLY (Bit 0)                                */
#define TIMER0_SYNC_SYNCDLY_Msk               (0xffffUL)                /*!< TIMER0 SYNC: SYNCDLY (Bitfield-Mask: 0xffff)                */
#define TIMER0_SYNC_CSYNC_Pos                 (16UL)                    /*!< TIMER0 SYNC: CSYNC (Bit 16)                                 */
#define TIMER0_SYNC_CSYNC_Msk                 (0x10000UL)               /*!< TIMER0 SYNC: CSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER0_SYNC_SSYNC_Pos                 (17UL)                    /*!< TIMER0 SYNC: SSYNC (Bit 17)                                 */
#define TIMER0_SYNC_SSYNC_Msk                 (0x20000UL)               /*!< TIMER0 SYNC: SSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER0_SYNC_T0SYNCB_Pos               (20UL)                    /*!< TIMER0 SYNC: T0SYNCB (Bit 20)                               */
#define TIMER0_SYNC_T0SYNCB_Msk               (0x100000UL)              /*!< TIMER0 SYNC: T0SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER0_SYNC_T1SYNCB_Pos               (21UL)                    /*!< TIMER0 SYNC: T1SYNCB (Bit 21)                               */
#define TIMER0_SYNC_T1SYNCB_Msk               (0x200000UL)              /*!< TIMER0 SYNC: T1SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER0_SYNC_T2SYNCB_Pos               (22UL)                    /*!< TIMER0 SYNC: T2SYNCB (Bit 22)                               */
#define TIMER0_SYNC_T2SYNCB_Msk               (0x400000UL)              /*!< TIMER0 SYNC: T2SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER0_SYNC_T3SYNCB_Pos               (23UL)                    /*!< TIMER0 SYNC: T3SYNCB (Bit 23)                               */
#define TIMER0_SYNC_T3SYNCB_Msk               (0x800000UL)              /*!< TIMER0 SYNC: T3SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER0_SYNC_T4SYNCB_Pos               (24UL)                    /*!< TIMER0 SYNC: T4SYNCB (Bit 24)                               */
#define TIMER0_SYNC_T4SYNCB_Msk               (0x1000000UL)             /*!< TIMER0 SYNC: T4SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER0_SYNC_T5SYNCB_Pos               (25UL)                    /*!< TIMER0 SYNC: T5SYNCB (Bit 25)                               */
#define TIMER0_SYNC_T5SYNCB_Msk               (0x2000000UL)             /*!< TIMER0 SYNC: T5SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER0_SYNC_T6SYNCB_Pos               (26UL)                    /*!< TIMER0 SYNC: T6SYNCB (Bit 26)                               */
#define TIMER0_SYNC_T6SYNCB_Msk               (0x4000000UL)             /*!< TIMER0 SYNC: T6SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER0_SYNC_T7SYNCB_Pos               (27UL)                    /*!< TIMER0 SYNC: T7SYNCB (Bit 27)                               */
#define TIMER0_SYNC_T7SYNCB_Msk               (0x8000000UL)             /*!< TIMER0 SYNC: T7SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER0_SYNC_T8SYNCB_Pos               (28UL)                    /*!< TIMER0 SYNC: T8SYNCB (Bit 28)                               */
#define TIMER0_SYNC_T8SYNCB_Msk               (0x10000000UL)            /*!< TIMER0 SYNC: T8SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER0_SYNC_T9SYNCB_Pos               (29UL)                    /*!< TIMER0 SYNC: T9SYNCB (Bit 29)                               */
#define TIMER0_SYNC_T9SYNCB_Msk               (0x20000000UL)            /*!< TIMER0 SYNC: T9SYNCB (Bitfield-Mask: 0x01)                  */


/* ================================================================================ */
/* ================         struct 'TIMER1' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER1_CR1  --------------------------------- */
#define TIMER1_CR1_MODE_Pos                   (0UL)                     /*!< TIMER1 CR1: MODE (Bit 0)                                    */
#define TIMER1_CR1_MODE_Msk                   (0x3UL)                   /*!< TIMER1 CR1: MODE (Bitfield-Mask: 0x03)                      */
#define TIMER1_CR1_CLRMOD_Pos                 (2UL)                     /*!< TIMER1 CR1: CLRMOD (Bit 2)                                  */
#define TIMER1_CR1_CLRMOD_Msk                 (0xcUL)                   /*!< TIMER1 CR1: CLRMOD (Bitfield-Mask: 0x03)                    */
#define TIMER1_CR1_CKSEL_Pos                  (4UL)                     /*!< TIMER1 CR1: CKSEL (Bit 4)                                   */
#define TIMER1_CR1_CKSEL_Msk                  (0x70UL)                  /*!< TIMER1 CR1: CKSEL (Bitfield-Mask: 0x07)                     */
#define TIMER1_CR1_STARTLVL_Pos               (7UL)                     /*!< TIMER1 CR1: STARTLVL (Bit 7)                                */
#define TIMER1_CR1_STARTLVL_Msk               (0x80UL)                  /*!< TIMER1 CR1: STARTLVL (Bitfield-Mask: 0x01)                  */
#define TIMER1_CR1_ADCTRGEN_Pos               (8UL)                     /*!< TIMER1 CR1: ADCTRGEN (Bit 8)                                */
#define TIMER1_CR1_ADCTRGEN_Msk               (0x100UL)                 /*!< TIMER1 CR1: ADCTRGEN (Bitfield-Mask: 0x01)                  */
#define TIMER1_CR1_IOSEL_Pos                  (11UL)                    /*!< TIMER1 CR1: IOSEL (Bit 11)                                  */
#define TIMER1_CR1_IOSEL_Msk                  (0x800UL)                 /*!< TIMER1 CR1: IOSEL (Bitfield-Mask: 0x01)                     */
#define TIMER1_CR1_OUTPOL_Pos                 (12UL)                    /*!< TIMER1 CR1: OUTPOL (Bit 12)                                 */
#define TIMER1_CR1_OUTPOL_Msk                 (0x1000UL)                /*!< TIMER1 CR1: OUTPOL (Bitfield-Mask: 0x01)                    */
#define TIMER1_CR1_UAO_Pos                    (13UL)                    /*!< TIMER1 CR1: UAO (Bit 13)                                    */
#define TIMER1_CR1_UAO_Msk                    (0x2000UL)                /*!< TIMER1 CR1: UAO (Bitfield-Mask: 0x01)                       */
#define TIMER1_CR1_TRGMOD_Pos                 (14UL)                    /*!< TIMER1 CR1: TRGMOD (Bit 14)                                 */
#define TIMER1_CR1_TRGMOD_Msk                 (0xc000UL)                /*!< TIMER1 CR1: TRGMOD (Bitfield-Mask: 0x03)                    */

/* ---------------------------------  TIMER1_CR2  --------------------------------- */
#define TIMER1_CR2_TEN_Pos                    (0UL)                     /*!< TIMER1 CR2: TEN (Bit 0)                                     */
#define TIMER1_CR2_TEN_Msk                    (0x1UL)                   /*!< TIMER1 CR2: TEN (Bitfield-Mask: 0x01)                       */
#define TIMER1_CR2_TCLR_Pos                   (1UL)                     /*!< TIMER1 CR2: TCLR (Bit 1)                                    */
#define TIMER1_CR2_TCLR_Msk                   (0x2UL)                   /*!< TIMER1 CR2: TCLR (Bitfield-Mask: 0x01)                      */

/* ---------------------------------  TIMER1_PRS  --------------------------------- */
#define TIMER1_PRS_PRS_Pos                    (0UL)                     /*!< TIMER1 PRS: PRS (Bit 0)                                     */
#define TIMER1_PRS_PRS_Msk                    (0x3ffUL)                 /*!< TIMER1 PRS: PRS (Bitfield-Mask: 0x3ff)                      */

/* ---------------------------------  TIMER1_GRA  --------------------------------- */
#define TIMER1_GRA_GRA_Pos                    (0UL)                     /*!< TIMER1 GRA: GRA (Bit 0)                                     */
#define TIMER1_GRA_GRA_Msk                    (0xffffUL)                /*!< TIMER1 GRA: GRA (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER1_GRB  --------------------------------- */
#define TIMER1_GRB_GRB_Pos                    (0UL)                     /*!< TIMER1 GRB: GRB (Bit 0)                                     */
#define TIMER1_GRB_GRB_Msk                    (0xffffUL)                /*!< TIMER1 GRB: GRB (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER1_CNT  --------------------------------- */
#define TIMER1_CNT_CNT_Pos                    (0UL)                     /*!< TIMER1 CNT: CNT (Bit 0)                                     */
#define TIMER1_CNT_CNT_Msk                    (0xffffUL)                /*!< TIMER1 CNT: CNT (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  TIMER1_SR  --------------------------------- */
#define TIMER1_SR_OVF_Pos                     (0UL)                     /*!< TIMER1 SR: OVF (Bit 0)                                      */
#define TIMER1_SR_OVF_Msk                     (0x1UL)                   /*!< TIMER1 SR: OVF (Bitfield-Mask: 0x01)                        */
#define TIMER1_SR_MFB_Pos                     (1UL)                     /*!< TIMER1 SR: MFB (Bit 1)                                      */
#define TIMER1_SR_MFB_Msk                     (0x2UL)                   /*!< TIMER1 SR: MFB (Bitfield-Mask: 0x01)                        */
#define TIMER1_SR_MFA_Pos                     (2UL)                     /*!< TIMER1 SR: MFA (Bit 2)                                      */
#define TIMER1_SR_MFA_Msk                     (0x4UL)                   /*!< TIMER1 SR: MFA (Bitfield-Mask: 0x01)                        */

/* ---------------------------------  TIMER1_IER  --------------------------------- */
#define TIMER1_IER_OVIE_Pos                   (0UL)                     /*!< TIMER1 IER: OVIE (Bit 0)                                    */
#define TIMER1_IER_OVIE_Msk                   (0x1UL)                   /*!< TIMER1 IER: OVIE (Bitfield-Mask: 0x01)                      */
#define TIMER1_IER_MBIE_Pos                   (1UL)                     /*!< TIMER1 IER: MBIE (Bit 1)                                    */
#define TIMER1_IER_MBIE_Msk                   (0x2UL)                   /*!< TIMER1 IER: MBIE (Bitfield-Mask: 0x01)                      */
#define TIMER1_IER_MAIE_Pos                   (2UL)                     /*!< TIMER1 IER: MAIE (Bit 2)                                    */
#define TIMER1_IER_MAIE_Msk                   (0x4UL)                   /*!< TIMER1 IER: MAIE (Bitfield-Mask: 0x01)                      */

/* --------------------------------  TIMER1_TRGPNT  ------------------------------- */
#define TIMER1_TRGPNT_TRGPNT_Pos              (0UL)                     /*!< TIMER1 TRGPNT: TRGPNT (Bit 0)                               */
#define TIMER1_TRGPNT_TRGPNT_Msk              (0xffffUL)                /*!< TIMER1 TRGPNT: TRGPNT (Bitfield-Mask: 0xffff)               */

/* ---------------------------------  TIMER1_SYNC  -------------------------------- */
#define TIMER1_SYNC_SYNCDLY_Pos               (0UL)                     /*!< TIMER1 SYNC: SYNCDLY (Bit 0)                                */
#define TIMER1_SYNC_SYNCDLY_Msk               (0xffffUL)                /*!< TIMER1 SYNC: SYNCDLY (Bitfield-Mask: 0xffff)                */
#define TIMER1_SYNC_CSYNC_Pos                 (16UL)                    /*!< TIMER1 SYNC: CSYNC (Bit 16)                                 */
#define TIMER1_SYNC_CSYNC_Msk                 (0x10000UL)               /*!< TIMER1 SYNC: CSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER1_SYNC_SSYNC_Pos                 (17UL)                    /*!< TIMER1 SYNC: SSYNC (Bit 17)                                 */
#define TIMER1_SYNC_SSYNC_Msk                 (0x20000UL)               /*!< TIMER1 SYNC: SSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER1_SYNC_T0SYNCB_Pos               (20UL)                    /*!< TIMER1 SYNC: T0SYNCB (Bit 20)                               */
#define TIMER1_SYNC_T0SYNCB_Msk               (0x100000UL)              /*!< TIMER1 SYNC: T0SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER1_SYNC_T1SYNCB_Pos               (21UL)                    /*!< TIMER1 SYNC: T1SYNCB (Bit 21)                               */
#define TIMER1_SYNC_T1SYNCB_Msk               (0x200000UL)              /*!< TIMER1 SYNC: T1SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER1_SYNC_T2SYNCB_Pos               (22UL)                    /*!< TIMER1 SYNC: T2SYNCB (Bit 22)                               */
#define TIMER1_SYNC_T2SYNCB_Msk               (0x400000UL)              /*!< TIMER1 SYNC: T2SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER1_SYNC_T3SYNCB_Pos               (23UL)                    /*!< TIMER1 SYNC: T3SYNCB (Bit 23)                               */
#define TIMER1_SYNC_T3SYNCB_Msk               (0x800000UL)              /*!< TIMER1 SYNC: T3SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER1_SYNC_T4SYNCB_Pos               (24UL)                    /*!< TIMER1 SYNC: T4SYNCB (Bit 24)                               */
#define TIMER1_SYNC_T4SYNCB_Msk               (0x1000000UL)             /*!< TIMER1 SYNC: T4SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER1_SYNC_T5SYNCB_Pos               (25UL)                    /*!< TIMER1 SYNC: T5SYNCB (Bit 25)                               */
#define TIMER1_SYNC_T5SYNCB_Msk               (0x2000000UL)             /*!< TIMER1 SYNC: T5SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER1_SYNC_T6SYNCB_Pos               (26UL)                    /*!< TIMER1 SYNC: T6SYNCB (Bit 26)                               */
#define TIMER1_SYNC_T6SYNCB_Msk               (0x4000000UL)             /*!< TIMER1 SYNC: T6SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER1_SYNC_T7SYNCB_Pos               (27UL)                    /*!< TIMER1 SYNC: T7SYNCB (Bit 27)                               */
#define TIMER1_SYNC_T7SYNCB_Msk               (0x8000000UL)             /*!< TIMER1 SYNC: T7SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER1_SYNC_T8SYNCB_Pos               (28UL)                    /*!< TIMER1 SYNC: T8SYNCB (Bit 28)                               */
#define TIMER1_SYNC_T8SYNCB_Msk               (0x10000000UL)            /*!< TIMER1 SYNC: T8SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER1_SYNC_T9SYNCB_Pos               (29UL)                    /*!< TIMER1 SYNC: T9SYNCB (Bit 29)                               */
#define TIMER1_SYNC_T9SYNCB_Msk               (0x20000000UL)            /*!< TIMER1 SYNC: T9SYNCB (Bitfield-Mask: 0x01)                  */


/* ================================================================================ */
/* ================         struct 'TIMER2' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER2_CR1  --------------------------------- */
#define TIMER2_CR1_MODE_Pos                   (0UL)                     /*!< TIMER2 CR1: MODE (Bit 0)                                    */
#define TIMER2_CR1_MODE_Msk                   (0x3UL)                   /*!< TIMER2 CR1: MODE (Bitfield-Mask: 0x03)                      */
#define TIMER2_CR1_CLRMOD_Pos                 (2UL)                     /*!< TIMER2 CR1: CLRMOD (Bit 2)                                  */
#define TIMER2_CR1_CLRMOD_Msk                 (0xcUL)                   /*!< TIMER2 CR1: CLRMOD (Bitfield-Mask: 0x03)                    */
#define TIMER2_CR1_CKSEL_Pos                  (4UL)                     /*!< TIMER2 CR1: CKSEL (Bit 4)                                   */
#define TIMER2_CR1_CKSEL_Msk                  (0x70UL)                  /*!< TIMER2 CR1: CKSEL (Bitfield-Mask: 0x07)                     */
#define TIMER2_CR1_STARTLVL_Pos               (7UL)                     /*!< TIMER2 CR1: STARTLVL (Bit 7)                                */
#define TIMER2_CR1_STARTLVL_Msk               (0x80UL)                  /*!< TIMER2 CR1: STARTLVL (Bitfield-Mask: 0x01)                  */
#define TIMER2_CR1_ADCTRGEN_Pos               (8UL)                     /*!< TIMER2 CR1: ADCTRGEN (Bit 8)                                */
#define TIMER2_CR1_ADCTRGEN_Msk               (0x100UL)                 /*!< TIMER2 CR1: ADCTRGEN (Bitfield-Mask: 0x01)                  */
#define TIMER2_CR1_IOSEL_Pos                  (11UL)                    /*!< TIMER2 CR1: IOSEL (Bit 11)                                  */
#define TIMER2_CR1_IOSEL_Msk                  (0x800UL)                 /*!< TIMER2 CR1: IOSEL (Bitfield-Mask: 0x01)                     */
#define TIMER2_CR1_OUTPOL_Pos                 (12UL)                    /*!< TIMER2 CR1: OUTPOL (Bit 12)                                 */
#define TIMER2_CR1_OUTPOL_Msk                 (0x1000UL)                /*!< TIMER2 CR1: OUTPOL (Bitfield-Mask: 0x01)                    */
#define TIMER2_CR1_UAO_Pos                    (13UL)                    /*!< TIMER2 CR1: UAO (Bit 13)                                    */
#define TIMER2_CR1_UAO_Msk                    (0x2000UL)                /*!< TIMER2 CR1: UAO (Bitfield-Mask: 0x01)                       */
#define TIMER2_CR1_TRGMOD_Pos                 (14UL)                    /*!< TIMER2 CR1: TRGMOD (Bit 14)                                 */
#define TIMER2_CR1_TRGMOD_Msk                 (0xc000UL)                /*!< TIMER2 CR1: TRGMOD (Bitfield-Mask: 0x03)                    */

/* ---------------------------------  TIMER2_CR2  --------------------------------- */
#define TIMER2_CR2_TEN_Pos                    (0UL)                     /*!< TIMER2 CR2: TEN (Bit 0)                                     */
#define TIMER2_CR2_TEN_Msk                    (0x1UL)                   /*!< TIMER2 CR2: TEN (Bitfield-Mask: 0x01)                       */
#define TIMER2_CR2_TCLR_Pos                   (1UL)                     /*!< TIMER2 CR2: TCLR (Bit 1)                                    */
#define TIMER2_CR2_TCLR_Msk                   (0x2UL)                   /*!< TIMER2 CR2: TCLR (Bitfield-Mask: 0x01)                      */

/* ---------------------------------  TIMER2_PRS  --------------------------------- */
#define TIMER2_PRS_PRS_Pos                    (0UL)                     /*!< TIMER2 PRS: PRS (Bit 0)                                     */
#define TIMER2_PRS_PRS_Msk                    (0x3ffUL)                 /*!< TIMER2 PRS: PRS (Bitfield-Mask: 0x3ff)                      */

/* ---------------------------------  TIMER2_GRA  --------------------------------- */
#define TIMER2_GRA_GRA_Pos                    (0UL)                     /*!< TIMER2 GRA: GRA (Bit 0)                                     */
#define TIMER2_GRA_GRA_Msk                    (0xffffUL)                /*!< TIMER2 GRA: GRA (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER2_GRB  --------------------------------- */
#define TIMER2_GRB_GRB_Pos                    (0UL)                     /*!< TIMER2 GRB: GRB (Bit 0)                                     */
#define TIMER2_GRB_GRB_Msk                    (0xffffUL)                /*!< TIMER2 GRB: GRB (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER2_CNT  --------------------------------- */
#define TIMER2_CNT_CNT_Pos                    (0UL)                     /*!< TIMER2 CNT: CNT (Bit 0)                                     */
#define TIMER2_CNT_CNT_Msk                    (0xffffUL)                /*!< TIMER2 CNT: CNT (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  TIMER2_SR  --------------------------------- */
#define TIMER2_SR_OVF_Pos                     (0UL)                     /*!< TIMER2 SR: OVF (Bit 0)                                      */
#define TIMER2_SR_OVF_Msk                     (0x1UL)                   /*!< TIMER2 SR: OVF (Bitfield-Mask: 0x01)                        */
#define TIMER2_SR_MFB_Pos                     (1UL)                     /*!< TIMER2 SR: MFB (Bit 1)                                      */
#define TIMER2_SR_MFB_Msk                     (0x2UL)                   /*!< TIMER2 SR: MFB (Bitfield-Mask: 0x01)                        */
#define TIMER2_SR_MFA_Pos                     (2UL)                     /*!< TIMER2 SR: MFA (Bit 2)                                      */
#define TIMER2_SR_MFA_Msk                     (0x4UL)                   /*!< TIMER2 SR: MFA (Bitfield-Mask: 0x01)                        */

/* ---------------------------------  TIMER2_IER  --------------------------------- */
#define TIMER2_IER_OVIE_Pos                   (0UL)                     /*!< TIMER2 IER: OVIE (Bit 0)                                    */
#define TIMER2_IER_OVIE_Msk                   (0x1UL)                   /*!< TIMER2 IER: OVIE (Bitfield-Mask: 0x01)                      */
#define TIMER2_IER_MBIE_Pos                   (1UL)                     /*!< TIMER2 IER: MBIE (Bit 1)                                    */
#define TIMER2_IER_MBIE_Msk                   (0x2UL)                   /*!< TIMER2 IER: MBIE (Bitfield-Mask: 0x01)                      */
#define TIMER2_IER_MAIE_Pos                   (2UL)                     /*!< TIMER2 IER: MAIE (Bit 2)                                    */
#define TIMER2_IER_MAIE_Msk                   (0x4UL)                   /*!< TIMER2 IER: MAIE (Bitfield-Mask: 0x01)                      */

/* --------------------------------  TIMER2_TRGPNT  ------------------------------- */
#define TIMER2_TRGPNT_TRGPNT_Pos              (0UL)                     /*!< TIMER2 TRGPNT: TRGPNT (Bit 0)                               */
#define TIMER2_TRGPNT_TRGPNT_Msk              (0xffffUL)                /*!< TIMER2 TRGPNT: TRGPNT (Bitfield-Mask: 0xffff)               */

/* ---------------------------------  TIMER2_SYNC  -------------------------------- */
#define TIMER2_SYNC_SYNCDLY_Pos               (0UL)                     /*!< TIMER2 SYNC: SYNCDLY (Bit 0)                                */
#define TIMER2_SYNC_SYNCDLY_Msk               (0xffffUL)                /*!< TIMER2 SYNC: SYNCDLY (Bitfield-Mask: 0xffff)                */
#define TIMER2_SYNC_CSYNC_Pos                 (16UL)                    /*!< TIMER2 SYNC: CSYNC (Bit 16)                                 */
#define TIMER2_SYNC_CSYNC_Msk                 (0x10000UL)               /*!< TIMER2 SYNC: CSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER2_SYNC_SSYNC_Pos                 (17UL)                    /*!< TIMER2 SYNC: SSYNC (Bit 17)                                 */
#define TIMER2_SYNC_SSYNC_Msk                 (0x20000UL)               /*!< TIMER2 SYNC: SSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER2_SYNC_T0SYNCB_Pos               (20UL)                    /*!< TIMER2 SYNC: T0SYNCB (Bit 20)                               */
#define TIMER2_SYNC_T0SYNCB_Msk               (0x100000UL)              /*!< TIMER2 SYNC: T0SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER2_SYNC_T1SYNCB_Pos               (21UL)                    /*!< TIMER2 SYNC: T1SYNCB (Bit 21)                               */
#define TIMER2_SYNC_T1SYNCB_Msk               (0x200000UL)              /*!< TIMER2 SYNC: T1SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER2_SYNC_T2SYNCB_Pos               (22UL)                    /*!< TIMER2 SYNC: T2SYNCB (Bit 22)                               */
#define TIMER2_SYNC_T2SYNCB_Msk               (0x400000UL)              /*!< TIMER2 SYNC: T2SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER2_SYNC_T3SYNCB_Pos               (23UL)                    /*!< TIMER2 SYNC: T3SYNCB (Bit 23)                               */
#define TIMER2_SYNC_T3SYNCB_Msk               (0x800000UL)              /*!< TIMER2 SYNC: T3SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER2_SYNC_T4SYNCB_Pos               (24UL)                    /*!< TIMER2 SYNC: T4SYNCB (Bit 24)                               */
#define TIMER2_SYNC_T4SYNCB_Msk               (0x1000000UL)             /*!< TIMER2 SYNC: T4SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER2_SYNC_T5SYNCB_Pos               (25UL)                    /*!< TIMER2 SYNC: T5SYNCB (Bit 25)                               */
#define TIMER2_SYNC_T5SYNCB_Msk               (0x2000000UL)             /*!< TIMER2 SYNC: T5SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER2_SYNC_T6SYNCB_Pos               (26UL)                    /*!< TIMER2 SYNC: T6SYNCB (Bit 26)                               */
#define TIMER2_SYNC_T6SYNCB_Msk               (0x4000000UL)             /*!< TIMER2 SYNC: T6SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER2_SYNC_T7SYNCB_Pos               (27UL)                    /*!< TIMER2 SYNC: T7SYNCB (Bit 27)                               */
#define TIMER2_SYNC_T7SYNCB_Msk               (0x8000000UL)             /*!< TIMER2 SYNC: T7SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER2_SYNC_T8SYNCB_Pos               (28UL)                    /*!< TIMER2 SYNC: T8SYNCB (Bit 28)                               */
#define TIMER2_SYNC_T8SYNCB_Msk               (0x10000000UL)            /*!< TIMER2 SYNC: T8SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER2_SYNC_T9SYNCB_Pos               (29UL)                    /*!< TIMER2 SYNC: T9SYNCB (Bit 29)                               */
#define TIMER2_SYNC_T9SYNCB_Msk               (0x20000000UL)            /*!< TIMER2 SYNC: T9SYNCB (Bitfield-Mask: 0x01)                  */


/* ================================================================================ */
/* ================         struct 'TIMER3' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER3_CR1  --------------------------------- */
#define TIMER3_CR1_MODE_Pos                   (0UL)                     /*!< TIMER3 CR1: MODE (Bit 0)                                    */
#define TIMER3_CR1_MODE_Msk                   (0x3UL)                   /*!< TIMER3 CR1: MODE (Bitfield-Mask: 0x03)                      */
#define TIMER3_CR1_CLRMOD_Pos                 (2UL)                     /*!< TIMER3 CR1: CLRMOD (Bit 2)                                  */
#define TIMER3_CR1_CLRMOD_Msk                 (0xcUL)                   /*!< TIMER3 CR1: CLRMOD (Bitfield-Mask: 0x03)                    */
#define TIMER3_CR1_CKSEL_Pos                  (4UL)                     /*!< TIMER3 CR1: CKSEL (Bit 4)                                   */
#define TIMER3_CR1_CKSEL_Msk                  (0x70UL)                  /*!< TIMER3 CR1: CKSEL (Bitfield-Mask: 0x07)                     */
#define TIMER3_CR1_STARTLVL_Pos               (7UL)                     /*!< TIMER3 CR1: STARTLVL (Bit 7)                                */
#define TIMER3_CR1_STARTLVL_Msk               (0x80UL)                  /*!< TIMER3 CR1: STARTLVL (Bitfield-Mask: 0x01)                  */
#define TIMER3_CR1_ADCTRGEN_Pos               (8UL)                     /*!< TIMER3 CR1: ADCTRGEN (Bit 8)                                */
#define TIMER3_CR1_ADCTRGEN_Msk               (0x100UL)                 /*!< TIMER3 CR1: ADCTRGEN (Bitfield-Mask: 0x01)                  */
#define TIMER3_CR1_IOSEL_Pos                  (11UL)                    /*!< TIMER3 CR1: IOSEL (Bit 11)                                  */
#define TIMER3_CR1_IOSEL_Msk                  (0x800UL)                 /*!< TIMER3 CR1: IOSEL (Bitfield-Mask: 0x01)                     */
#define TIMER3_CR1_OUTPOL_Pos                 (12UL)                    /*!< TIMER3 CR1: OUTPOL (Bit 12)                                 */
#define TIMER3_CR1_OUTPOL_Msk                 (0x1000UL)                /*!< TIMER3 CR1: OUTPOL (Bitfield-Mask: 0x01)                    */
#define TIMER3_CR1_UAO_Pos                    (13UL)                    /*!< TIMER3 CR1: UAO (Bit 13)                                    */
#define TIMER3_CR1_UAO_Msk                    (0x2000UL)                /*!< TIMER3 CR1: UAO (Bitfield-Mask: 0x01)                       */
#define TIMER3_CR1_TRGMOD_Pos                 (14UL)                    /*!< TIMER3 CR1: TRGMOD (Bit 14)                                 */
#define TIMER3_CR1_TRGMOD_Msk                 (0xc000UL)                /*!< TIMER3 CR1: TRGMOD (Bitfield-Mask: 0x03)                    */

/* ---------------------------------  TIMER3_CR2  --------------------------------- */
#define TIMER3_CR2_TEN_Pos                    (0UL)                     /*!< TIMER3 CR2: TEN (Bit 0)                                     */
#define TIMER3_CR2_TEN_Msk                    (0x1UL)                   /*!< TIMER3 CR2: TEN (Bitfield-Mask: 0x01)                       */
#define TIMER3_CR2_TCLR_Pos                   (1UL)                     /*!< TIMER3 CR2: TCLR (Bit 1)                                    */
#define TIMER3_CR2_TCLR_Msk                   (0x2UL)                   /*!< TIMER3 CR2: TCLR (Bitfield-Mask: 0x01)                      */

/* ---------------------------------  TIMER3_PRS  --------------------------------- */
#define TIMER3_PRS_PRS_Pos                    (0UL)                     /*!< TIMER3 PRS: PRS (Bit 0)                                     */
#define TIMER3_PRS_PRS_Msk                    (0x3ffUL)                 /*!< TIMER3 PRS: PRS (Bitfield-Mask: 0x3ff)                      */

/* ---------------------------------  TIMER3_GRA  --------------------------------- */
#define TIMER3_GRA_GRA_Pos                    (0UL)                     /*!< TIMER3 GRA: GRA (Bit 0)                                     */
#define TIMER3_GRA_GRA_Msk                    (0xffffUL)                /*!< TIMER3 GRA: GRA (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER3_GRB  --------------------------------- */
#define TIMER3_GRB_GRB_Pos                    (0UL)                     /*!< TIMER3 GRB: GRB (Bit 0)                                     */
#define TIMER3_GRB_GRB_Msk                    (0xffffUL)                /*!< TIMER3 GRB: GRB (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER3_CNT  --------------------------------- */
#define TIMER3_CNT_CNT_Pos                    (0UL)                     /*!< TIMER3 CNT: CNT (Bit 0)                                     */
#define TIMER3_CNT_CNT_Msk                    (0xffffUL)                /*!< TIMER3 CNT: CNT (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  TIMER3_SR  --------------------------------- */
#define TIMER3_SR_OVF_Pos                     (0UL)                     /*!< TIMER3 SR: OVF (Bit 0)                                      */
#define TIMER3_SR_OVF_Msk                     (0x1UL)                   /*!< TIMER3 SR: OVF (Bitfield-Mask: 0x01)                        */
#define TIMER3_SR_MFB_Pos                     (1UL)                     /*!< TIMER3 SR: MFB (Bit 1)                                      */
#define TIMER3_SR_MFB_Msk                     (0x2UL)                   /*!< TIMER3 SR: MFB (Bitfield-Mask: 0x01)                        */
#define TIMER3_SR_MFA_Pos                     (2UL)                     /*!< TIMER3 SR: MFA (Bit 2)                                      */
#define TIMER3_SR_MFA_Msk                     (0x4UL)                   /*!< TIMER3 SR: MFA (Bitfield-Mask: 0x01)                        */

/* ---------------------------------  TIMER3_IER  --------------------------------- */
#define TIMER3_IER_OVIE_Pos                   (0UL)                     /*!< TIMER3 IER: OVIE (Bit 0)                                    */
#define TIMER3_IER_OVIE_Msk                   (0x1UL)                   /*!< TIMER3 IER: OVIE (Bitfield-Mask: 0x01)                      */
#define TIMER3_IER_MBIE_Pos                   (1UL)                     /*!< TIMER3 IER: MBIE (Bit 1)                                    */
#define TIMER3_IER_MBIE_Msk                   (0x2UL)                   /*!< TIMER3 IER: MBIE (Bitfield-Mask: 0x01)                      */
#define TIMER3_IER_MAIE_Pos                   (2UL)                     /*!< TIMER3 IER: MAIE (Bit 2)                                    */
#define TIMER3_IER_MAIE_Msk                   (0x4UL)                   /*!< TIMER3 IER: MAIE (Bitfield-Mask: 0x01)                      */

/* --------------------------------  TIMER3_TRGPNT  ------------------------------- */
#define TIMER3_TRGPNT_TRGPNT_Pos              (0UL)                     /*!< TIMER3 TRGPNT: TRGPNT (Bit 0)                               */
#define TIMER3_TRGPNT_TRGPNT_Msk              (0xffffUL)                /*!< TIMER3 TRGPNT: TRGPNT (Bitfield-Mask: 0xffff)               */

/* ---------------------------------  TIMER3_SYNC  -------------------------------- */
#define TIMER3_SYNC_SYNCDLY_Pos               (0UL)                     /*!< TIMER3 SYNC: SYNCDLY (Bit 0)                                */
#define TIMER3_SYNC_SYNCDLY_Msk               (0xffffUL)                /*!< TIMER3 SYNC: SYNCDLY (Bitfield-Mask: 0xffff)                */
#define TIMER3_SYNC_CSYNC_Pos                 (16UL)                    /*!< TIMER3 SYNC: CSYNC (Bit 16)                                 */
#define TIMER3_SYNC_CSYNC_Msk                 (0x10000UL)               /*!< TIMER3 SYNC: CSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER3_SYNC_SSYNC_Pos                 (17UL)                    /*!< TIMER3 SYNC: SSYNC (Bit 17)                                 */
#define TIMER3_SYNC_SSYNC_Msk                 (0x20000UL)               /*!< TIMER3 SYNC: SSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER3_SYNC_T0SYNCB_Pos               (20UL)                    /*!< TIMER3 SYNC: T0SYNCB (Bit 20)                               */
#define TIMER3_SYNC_T0SYNCB_Msk               (0x100000UL)              /*!< TIMER3 SYNC: T0SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER3_SYNC_T1SYNCB_Pos               (21UL)                    /*!< TIMER3 SYNC: T1SYNCB (Bit 21)                               */
#define TIMER3_SYNC_T1SYNCB_Msk               (0x200000UL)              /*!< TIMER3 SYNC: T1SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER3_SYNC_T2SYNCB_Pos               (22UL)                    /*!< TIMER3 SYNC: T2SYNCB (Bit 22)                               */
#define TIMER3_SYNC_T2SYNCB_Msk               (0x400000UL)              /*!< TIMER3 SYNC: T2SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER3_SYNC_T3SYNCB_Pos               (23UL)                    /*!< TIMER3 SYNC: T3SYNCB (Bit 23)                               */
#define TIMER3_SYNC_T3SYNCB_Msk               (0x800000UL)              /*!< TIMER3 SYNC: T3SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER3_SYNC_T4SYNCB_Pos               (24UL)                    /*!< TIMER3 SYNC: T4SYNCB (Bit 24)                               */
#define TIMER3_SYNC_T4SYNCB_Msk               (0x1000000UL)             /*!< TIMER3 SYNC: T4SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER3_SYNC_T5SYNCB_Pos               (25UL)                    /*!< TIMER3 SYNC: T5SYNCB (Bit 25)                               */
#define TIMER3_SYNC_T5SYNCB_Msk               (0x2000000UL)             /*!< TIMER3 SYNC: T5SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER3_SYNC_T6SYNCB_Pos               (26UL)                    /*!< TIMER3 SYNC: T6SYNCB (Bit 26)                               */
#define TIMER3_SYNC_T6SYNCB_Msk               (0x4000000UL)             /*!< TIMER3 SYNC: T6SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER3_SYNC_T7SYNCB_Pos               (27UL)                    /*!< TIMER3 SYNC: T7SYNCB (Bit 27)                               */
#define TIMER3_SYNC_T7SYNCB_Msk               (0x8000000UL)             /*!< TIMER3 SYNC: T7SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER3_SYNC_T8SYNCB_Pos               (28UL)                    /*!< TIMER3 SYNC: T8SYNCB (Bit 28)                               */
#define TIMER3_SYNC_T8SYNCB_Msk               (0x10000000UL)            /*!< TIMER3 SYNC: T8SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER3_SYNC_T9SYNCB_Pos               (29UL)                    /*!< TIMER3 SYNC: T9SYNCB (Bit 29)                               */
#define TIMER3_SYNC_T9SYNCB_Msk               (0x20000000UL)            /*!< TIMER3 SYNC: T9SYNCB (Bitfield-Mask: 0x01)                  */


/* ================================================================================ */
/* ================         struct 'TIMER4' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER4_CR1  --------------------------------- */
#define TIMER4_CR1_MODE_Pos                   (0UL)                     /*!< TIMER4 CR1: MODE (Bit 0)                                    */
#define TIMER4_CR1_MODE_Msk                   (0x3UL)                   /*!< TIMER4 CR1: MODE (Bitfield-Mask: 0x03)                      */
#define TIMER4_CR1_CLRMOD_Pos                 (2UL)                     /*!< TIMER4 CR1: CLRMOD (Bit 2)                                  */
#define TIMER4_CR1_CLRMOD_Msk                 (0xcUL)                   /*!< TIMER4 CR1: CLRMOD (Bitfield-Mask: 0x03)                    */
#define TIMER4_CR1_CKSEL_Pos                  (4UL)                     /*!< TIMER4 CR1: CKSEL (Bit 4)                                   */
#define TIMER4_CR1_CKSEL_Msk                  (0x70UL)                  /*!< TIMER4 CR1: CKSEL (Bitfield-Mask: 0x07)                     */
#define TIMER4_CR1_STARTLVL_Pos               (7UL)                     /*!< TIMER4 CR1: STARTLVL (Bit 7)                                */
#define TIMER4_CR1_STARTLVL_Msk               (0x80UL)                  /*!< TIMER4 CR1: STARTLVL (Bitfield-Mask: 0x01)                  */
#define TIMER4_CR1_ADCTRGEN_Pos               (8UL)                     /*!< TIMER4 CR1: ADCTRGEN (Bit 8)                                */
#define TIMER4_CR1_ADCTRGEN_Msk               (0x100UL)                 /*!< TIMER4 CR1: ADCTRGEN (Bitfield-Mask: 0x01)                  */
#define TIMER4_CR1_IOSEL_Pos                  (11UL)                    /*!< TIMER4 CR1: IOSEL (Bit 11)                                  */
#define TIMER4_CR1_IOSEL_Msk                  (0x800UL)                 /*!< TIMER4 CR1: IOSEL (Bitfield-Mask: 0x01)                     */
#define TIMER4_CR1_OUTPOL_Pos                 (12UL)                    /*!< TIMER4 CR1: OUTPOL (Bit 12)                                 */
#define TIMER4_CR1_OUTPOL_Msk                 (0x1000UL)                /*!< TIMER4 CR1: OUTPOL (Bitfield-Mask: 0x01)                    */
#define TIMER4_CR1_UAO_Pos                    (13UL)                    /*!< TIMER4 CR1: UAO (Bit 13)                                    */
#define TIMER4_CR1_UAO_Msk                    (0x2000UL)                /*!< TIMER4 CR1: UAO (Bitfield-Mask: 0x01)                       */
#define TIMER4_CR1_TRGMOD_Pos                 (14UL)                    /*!< TIMER4 CR1: TRGMOD (Bit 14)                                 */
#define TIMER4_CR1_TRGMOD_Msk                 (0xc000UL)                /*!< TIMER4 CR1: TRGMOD (Bitfield-Mask: 0x03)                    */

/* ---------------------------------  TIMER4_CR2  --------------------------------- */
#define TIMER4_CR2_TEN_Pos                    (0UL)                     /*!< TIMER4 CR2: TEN (Bit 0)                                     */
#define TIMER4_CR2_TEN_Msk                    (0x1UL)                   /*!< TIMER4 CR2: TEN (Bitfield-Mask: 0x01)                       */
#define TIMER4_CR2_TCLR_Pos                   (1UL)                     /*!< TIMER4 CR2: TCLR (Bit 1)                                    */
#define TIMER4_CR2_TCLR_Msk                   (0x2UL)                   /*!< TIMER4 CR2: TCLR (Bitfield-Mask: 0x01)                      */

/* ---------------------------------  TIMER4_PRS  --------------------------------- */
#define TIMER4_PRS_PRS_Pos                    (0UL)                     /*!< TIMER4 PRS: PRS (Bit 0)                                     */
#define TIMER4_PRS_PRS_Msk                    (0x3ffUL)                 /*!< TIMER4 PRS: PRS (Bitfield-Mask: 0x3ff)                      */

/* ---------------------------------  TIMER4_GRA  --------------------------------- */
#define TIMER4_GRA_GRA_Pos                    (0UL)                     /*!< TIMER4 GRA: GRA (Bit 0)                                     */
#define TIMER4_GRA_GRA_Msk                    (0xffffUL)                /*!< TIMER4 GRA: GRA (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER4_GRB  --------------------------------- */
#define TIMER4_GRB_GRB_Pos                    (0UL)                     /*!< TIMER4 GRB: GRB (Bit 0)                                     */
#define TIMER4_GRB_GRB_Msk                    (0xffffUL)                /*!< TIMER4 GRB: GRB (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER4_CNT  --------------------------------- */
#define TIMER4_CNT_CNT_Pos                    (0UL)                     /*!< TIMER4 CNT: CNT (Bit 0)                                     */
#define TIMER4_CNT_CNT_Msk                    (0xffffUL)                /*!< TIMER4 CNT: CNT (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  TIMER4_SR  --------------------------------- */
#define TIMER4_SR_OVF_Pos                     (0UL)                     /*!< TIMER4 SR: OVF (Bit 0)                                      */
#define TIMER4_SR_OVF_Msk                     (0x1UL)                   /*!< TIMER4 SR: OVF (Bitfield-Mask: 0x01)                        */
#define TIMER4_SR_MFB_Pos                     (1UL)                     /*!< TIMER4 SR: MFB (Bit 1)                                      */
#define TIMER4_SR_MFB_Msk                     (0x2UL)                   /*!< TIMER4 SR: MFB (Bitfield-Mask: 0x01)                        */
#define TIMER4_SR_MFA_Pos                     (2UL)                     /*!< TIMER4 SR: MFA (Bit 2)                                      */
#define TIMER4_SR_MFA_Msk                     (0x4UL)                   /*!< TIMER4 SR: MFA (Bitfield-Mask: 0x01)                        */

/* ---------------------------------  TIMER4_IER  --------------------------------- */
#define TIMER4_IER_OVIE_Pos                   (0UL)                     /*!< TIMER4 IER: OVIE (Bit 0)                                    */
#define TIMER4_IER_OVIE_Msk                   (0x1UL)                   /*!< TIMER4 IER: OVIE (Bitfield-Mask: 0x01)                      */
#define TIMER4_IER_MBIE_Pos                   (1UL)                     /*!< TIMER4 IER: MBIE (Bit 1)                                    */
#define TIMER4_IER_MBIE_Msk                   (0x2UL)                   /*!< TIMER4 IER: MBIE (Bitfield-Mask: 0x01)                      */
#define TIMER4_IER_MAIE_Pos                   (2UL)                     /*!< TIMER4 IER: MAIE (Bit 2)                                    */
#define TIMER4_IER_MAIE_Msk                   (0x4UL)                   /*!< TIMER4 IER: MAIE (Bitfield-Mask: 0x01)                      */

/* --------------------------------  TIMER4_TRGPNT  ------------------------------- */
#define TIMER4_TRGPNT_TRGPNT_Pos              (0UL)                     /*!< TIMER4 TRGPNT: TRGPNT (Bit 0)                               */
#define TIMER4_TRGPNT_TRGPNT_Msk              (0xffffUL)                /*!< TIMER4 TRGPNT: TRGPNT (Bitfield-Mask: 0xffff)               */

/* ---------------------------------  TIMER4_SYNC  -------------------------------- */
#define TIMER4_SYNC_SYNCDLY_Pos               (0UL)                     /*!< TIMER4 SYNC: SYNCDLY (Bit 0)                                */
#define TIMER4_SYNC_SYNCDLY_Msk               (0xffffUL)                /*!< TIMER4 SYNC: SYNCDLY (Bitfield-Mask: 0xffff)                */
#define TIMER4_SYNC_CSYNC_Pos                 (16UL)                    /*!< TIMER4 SYNC: CSYNC (Bit 16)                                 */
#define TIMER4_SYNC_CSYNC_Msk                 (0x10000UL)               /*!< TIMER4 SYNC: CSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER4_SYNC_SSYNC_Pos                 (17UL)                    /*!< TIMER4 SYNC: SSYNC (Bit 17)                                 */
#define TIMER4_SYNC_SSYNC_Msk                 (0x20000UL)               /*!< TIMER4 SYNC: SSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER4_SYNC_T0SYNCB_Pos               (20UL)                    /*!< TIMER4 SYNC: T0SYNCB (Bit 20)                               */
#define TIMER4_SYNC_T0SYNCB_Msk               (0x100000UL)              /*!< TIMER4 SYNC: T0SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER4_SYNC_T1SYNCB_Pos               (21UL)                    /*!< TIMER4 SYNC: T1SYNCB (Bit 21)                               */
#define TIMER4_SYNC_T1SYNCB_Msk               (0x200000UL)              /*!< TIMER4 SYNC: T1SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER4_SYNC_T2SYNCB_Pos               (22UL)                    /*!< TIMER4 SYNC: T2SYNCB (Bit 22)                               */
#define TIMER4_SYNC_T2SYNCB_Msk               (0x400000UL)              /*!< TIMER4 SYNC: T2SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER4_SYNC_T3SYNCB_Pos               (23UL)                    /*!< TIMER4 SYNC: T3SYNCB (Bit 23)                               */
#define TIMER4_SYNC_T3SYNCB_Msk               (0x800000UL)              /*!< TIMER4 SYNC: T3SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER4_SYNC_T4SYNCB_Pos               (24UL)                    /*!< TIMER4 SYNC: T4SYNCB (Bit 24)                               */
#define TIMER4_SYNC_T4SYNCB_Msk               (0x1000000UL)             /*!< TIMER4 SYNC: T4SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER4_SYNC_T5SYNCB_Pos               (25UL)                    /*!< TIMER4 SYNC: T5SYNCB (Bit 25)                               */
#define TIMER4_SYNC_T5SYNCB_Msk               (0x2000000UL)             /*!< TIMER4 SYNC: T5SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER4_SYNC_T6SYNCB_Pos               (26UL)                    /*!< TIMER4 SYNC: T6SYNCB (Bit 26)                               */
#define TIMER4_SYNC_T6SYNCB_Msk               (0x4000000UL)             /*!< TIMER4 SYNC: T6SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER4_SYNC_T7SYNCB_Pos               (27UL)                    /*!< TIMER4 SYNC: T7SYNCB (Bit 27)                               */
#define TIMER4_SYNC_T7SYNCB_Msk               (0x8000000UL)             /*!< TIMER4 SYNC: T7SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER4_SYNC_T8SYNCB_Pos               (28UL)                    /*!< TIMER4 SYNC: T8SYNCB (Bit 28)                               */
#define TIMER4_SYNC_T8SYNCB_Msk               (0x10000000UL)            /*!< TIMER4 SYNC: T8SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER4_SYNC_T9SYNCB_Pos               (29UL)                    /*!< TIMER4 SYNC: T9SYNCB (Bit 29)                               */
#define TIMER4_SYNC_T9SYNCB_Msk               (0x20000000UL)            /*!< TIMER4 SYNC: T9SYNCB (Bitfield-Mask: 0x01)                  */


/* ================================================================================ */
/* ================         struct 'TIMER5' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER5_CR1  --------------------------------- */
#define TIMER5_CR1_MODE_Pos                   (0UL)                     /*!< TIMER5 CR1: MODE (Bit 0)                                    */
#define TIMER5_CR1_MODE_Msk                   (0x3UL)                   /*!< TIMER5 CR1: MODE (Bitfield-Mask: 0x03)                      */
#define TIMER5_CR1_CLRMOD_Pos                 (2UL)                     /*!< TIMER5 CR1: CLRMOD (Bit 2)                                  */
#define TIMER5_CR1_CLRMOD_Msk                 (0xcUL)                   /*!< TIMER5 CR1: CLRMOD (Bitfield-Mask: 0x03)                    */
#define TIMER5_CR1_CKSEL_Pos                  (4UL)                     /*!< TIMER5 CR1: CKSEL (Bit 4)                                   */
#define TIMER5_CR1_CKSEL_Msk                  (0x70UL)                  /*!< TIMER5 CR1: CKSEL (Bitfield-Mask: 0x07)                     */
#define TIMER5_CR1_STARTLVL_Pos               (7UL)                     /*!< TIMER5 CR1: STARTLVL (Bit 7)                                */
#define TIMER5_CR1_STARTLVL_Msk               (0x80UL)                  /*!< TIMER5 CR1: STARTLVL (Bitfield-Mask: 0x01)                  */
#define TIMER5_CR1_ADCTRGEN_Pos               (8UL)                     /*!< TIMER5 CR1: ADCTRGEN (Bit 8)                                */
#define TIMER5_CR1_ADCTRGEN_Msk               (0x100UL)                 /*!< TIMER5 CR1: ADCTRGEN (Bitfield-Mask: 0x01)                  */
#define TIMER5_CR1_IOSEL_Pos                  (11UL)                    /*!< TIMER5 CR1: IOSEL (Bit 11)                                  */
#define TIMER5_CR1_IOSEL_Msk                  (0x800UL)                 /*!< TIMER5 CR1: IOSEL (Bitfield-Mask: 0x01)                     */
#define TIMER5_CR1_OUTPOL_Pos                 (12UL)                    /*!< TIMER5 CR1: OUTPOL (Bit 12)                                 */
#define TIMER5_CR1_OUTPOL_Msk                 (0x1000UL)                /*!< TIMER5 CR1: OUTPOL (Bitfield-Mask: 0x01)                    */
#define TIMER5_CR1_UAO_Pos                    (13UL)                    /*!< TIMER5 CR1: UAO (Bit 13)                                    */
#define TIMER5_CR1_UAO_Msk                    (0x2000UL)                /*!< TIMER5 CR1: UAO (Bitfield-Mask: 0x01)                       */
#define TIMER5_CR1_TRGMOD_Pos                 (14UL)                    /*!< TIMER5 CR1: TRGMOD (Bit 14)                                 */
#define TIMER5_CR1_TRGMOD_Msk                 (0xc000UL)                /*!< TIMER5 CR1: TRGMOD (Bitfield-Mask: 0x03)                    */

/* ---------------------------------  TIMER5_CR2  --------------------------------- */
#define TIMER5_CR2_TEN_Pos                    (0UL)                     /*!< TIMER5 CR2: TEN (Bit 0)                                     */
#define TIMER5_CR2_TEN_Msk                    (0x1UL)                   /*!< TIMER5 CR2: TEN (Bitfield-Mask: 0x01)                       */
#define TIMER5_CR2_TCLR_Pos                   (1UL)                     /*!< TIMER5 CR2: TCLR (Bit 1)                                    */
#define TIMER5_CR2_TCLR_Msk                   (0x2UL)                   /*!< TIMER5 CR2: TCLR (Bitfield-Mask: 0x01)                      */

/* ---------------------------------  TIMER5_PRS  --------------------------------- */
#define TIMER5_PRS_PRS_Pos                    (0UL)                     /*!< TIMER5 PRS: PRS (Bit 0)                                     */
#define TIMER5_PRS_PRS_Msk                    (0x3ffUL)                 /*!< TIMER5 PRS: PRS (Bitfield-Mask: 0x3ff)                      */

/* ---------------------------------  TIMER5_GRA  --------------------------------- */
#define TIMER5_GRA_GRA_Pos                    (0UL)                     /*!< TIMER5 GRA: GRA (Bit 0)                                     */
#define TIMER5_GRA_GRA_Msk                    (0xffffUL)                /*!< TIMER5 GRA: GRA (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER5_GRB  --------------------------------- */
#define TIMER5_GRB_GRB_Pos                    (0UL)                     /*!< TIMER5 GRB: GRB (Bit 0)                                     */
#define TIMER5_GRB_GRB_Msk                    (0xffffUL)                /*!< TIMER5 GRB: GRB (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER5_CNT  --------------------------------- */
#define TIMER5_CNT_CNT_Pos                    (0UL)                     /*!< TIMER5 CNT: CNT (Bit 0)                                     */
#define TIMER5_CNT_CNT_Msk                    (0xffffUL)                /*!< TIMER5 CNT: CNT (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  TIMER5_SR  --------------------------------- */
#define TIMER5_SR_OVF_Pos                     (0UL)                     /*!< TIMER5 SR: OVF (Bit 0)                                      */
#define TIMER5_SR_OVF_Msk                     (0x1UL)                   /*!< TIMER5 SR: OVF (Bitfield-Mask: 0x01)                        */
#define TIMER5_SR_MFB_Pos                     (1UL)                     /*!< TIMER5 SR: MFB (Bit 1)                                      */
#define TIMER5_SR_MFB_Msk                     (0x2UL)                   /*!< TIMER5 SR: MFB (Bitfield-Mask: 0x01)                        */
#define TIMER5_SR_MFA_Pos                     (2UL)                     /*!< TIMER5 SR: MFA (Bit 2)                                      */
#define TIMER5_SR_MFA_Msk                     (0x4UL)                   /*!< TIMER5 SR: MFA (Bitfield-Mask: 0x01)                        */

/* ---------------------------------  TIMER5_IER  --------------------------------- */
#define TIMER5_IER_OVIE_Pos                   (0UL)                     /*!< TIMER5 IER: OVIE (Bit 0)                                    */
#define TIMER5_IER_OVIE_Msk                   (0x1UL)                   /*!< TIMER5 IER: OVIE (Bitfield-Mask: 0x01)                      */
#define TIMER5_IER_MBIE_Pos                   (1UL)                     /*!< TIMER5 IER: MBIE (Bit 1)                                    */
#define TIMER5_IER_MBIE_Msk                   (0x2UL)                   /*!< TIMER5 IER: MBIE (Bitfield-Mask: 0x01)                      */
#define TIMER5_IER_MAIE_Pos                   (2UL)                     /*!< TIMER5 IER: MAIE (Bit 2)                                    */
#define TIMER5_IER_MAIE_Msk                   (0x4UL)                   /*!< TIMER5 IER: MAIE (Bitfield-Mask: 0x01)                      */

/* --------------------------------  TIMER5_TRGPNT  ------------------------------- */
#define TIMER5_TRGPNT_TRGPNT_Pos              (0UL)                     /*!< TIMER5 TRGPNT: TRGPNT (Bit 0)                               */
#define TIMER5_TRGPNT_TRGPNT_Msk              (0xffffUL)                /*!< TIMER5 TRGPNT: TRGPNT (Bitfield-Mask: 0xffff)               */

/* ---------------------------------  TIMER5_SYNC  -------------------------------- */
#define TIMER5_SYNC_SYNCDLY_Pos               (0UL)                     /*!< TIMER5 SYNC: SYNCDLY (Bit 0)                                */
#define TIMER5_SYNC_SYNCDLY_Msk               (0xffffUL)                /*!< TIMER5 SYNC: SYNCDLY (Bitfield-Mask: 0xffff)                */
#define TIMER5_SYNC_CSYNC_Pos                 (16UL)                    /*!< TIMER5 SYNC: CSYNC (Bit 16)                                 */
#define TIMER5_SYNC_CSYNC_Msk                 (0x10000UL)               /*!< TIMER5 SYNC: CSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER5_SYNC_SSYNC_Pos                 (17UL)                    /*!< TIMER5 SYNC: SSYNC (Bit 17)                                 */
#define TIMER5_SYNC_SSYNC_Msk                 (0x20000UL)               /*!< TIMER5 SYNC: SSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER5_SYNC_T0SYNCB_Pos               (20UL)                    /*!< TIMER5 SYNC: T0SYNCB (Bit 20)                               */
#define TIMER5_SYNC_T0SYNCB_Msk               (0x100000UL)              /*!< TIMER5 SYNC: T0SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER5_SYNC_T1SYNCB_Pos               (21UL)                    /*!< TIMER5 SYNC: T1SYNCB (Bit 21)                               */
#define TIMER5_SYNC_T1SYNCB_Msk               (0x200000UL)              /*!< TIMER5 SYNC: T1SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER5_SYNC_T2SYNCB_Pos               (22UL)                    /*!< TIMER5 SYNC: T2SYNCB (Bit 22)                               */
#define TIMER5_SYNC_T2SYNCB_Msk               (0x400000UL)              /*!< TIMER5 SYNC: T2SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER5_SYNC_T3SYNCB_Pos               (23UL)                    /*!< TIMER5 SYNC: T3SYNCB (Bit 23)                               */
#define TIMER5_SYNC_T3SYNCB_Msk               (0x800000UL)              /*!< TIMER5 SYNC: T3SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER5_SYNC_T4SYNCB_Pos               (24UL)                    /*!< TIMER5 SYNC: T4SYNCB (Bit 24)                               */
#define TIMER5_SYNC_T4SYNCB_Msk               (0x1000000UL)             /*!< TIMER5 SYNC: T4SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER5_SYNC_T5SYNCB_Pos               (25UL)                    /*!< TIMER5 SYNC: T5SYNCB (Bit 25)                               */
#define TIMER5_SYNC_T5SYNCB_Msk               (0x2000000UL)             /*!< TIMER5 SYNC: T5SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER5_SYNC_T6SYNCB_Pos               (26UL)                    /*!< TIMER5 SYNC: T6SYNCB (Bit 26)                               */
#define TIMER5_SYNC_T6SYNCB_Msk               (0x4000000UL)             /*!< TIMER5 SYNC: T6SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER5_SYNC_T7SYNCB_Pos               (27UL)                    /*!< TIMER5 SYNC: T7SYNCB (Bit 27)                               */
#define TIMER5_SYNC_T7SYNCB_Msk               (0x8000000UL)             /*!< TIMER5 SYNC: T7SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER5_SYNC_T8SYNCB_Pos               (28UL)                    /*!< TIMER5 SYNC: T8SYNCB (Bit 28)                               */
#define TIMER5_SYNC_T8SYNCB_Msk               (0x10000000UL)            /*!< TIMER5 SYNC: T8SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER5_SYNC_T9SYNCB_Pos               (29UL)                    /*!< TIMER5 SYNC: T9SYNCB (Bit 29)                               */
#define TIMER5_SYNC_T9SYNCB_Msk               (0x20000000UL)            /*!< TIMER5 SYNC: T9SYNCB (Bitfield-Mask: 0x01)                  */


/* ================================================================================ */
/* ================         struct 'TIMER6' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER6_CR1  --------------------------------- */
#define TIMER6_CR1_MODE_Pos                   (0UL)                     /*!< TIMER6 CR1: MODE (Bit 0)                                    */
#define TIMER6_CR1_MODE_Msk                   (0x3UL)                   /*!< TIMER6 CR1: MODE (Bitfield-Mask: 0x03)                      */
#define TIMER6_CR1_CLRMOD_Pos                 (2UL)                     /*!< TIMER6 CR1: CLRMOD (Bit 2)                                  */
#define TIMER6_CR1_CLRMOD_Msk                 (0xcUL)                   /*!< TIMER6 CR1: CLRMOD (Bitfield-Mask: 0x03)                    */
#define TIMER6_CR1_CKSEL_Pos                  (4UL)                     /*!< TIMER6 CR1: CKSEL (Bit 4)                                   */
#define TIMER6_CR1_CKSEL_Msk                  (0x70UL)                  /*!< TIMER6 CR1: CKSEL (Bitfield-Mask: 0x07)                     */
#define TIMER6_CR1_STARTLVL_Pos               (7UL)                     /*!< TIMER6 CR1: STARTLVL (Bit 7)                                */
#define TIMER6_CR1_STARTLVL_Msk               (0x80UL)                  /*!< TIMER6 CR1: STARTLVL (Bitfield-Mask: 0x01)                  */
#define TIMER6_CR1_ADCTRGEN_Pos               (8UL)                     /*!< TIMER6 CR1: ADCTRGEN (Bit 8)                                */
#define TIMER6_CR1_ADCTRGEN_Msk               (0x100UL)                 /*!< TIMER6 CR1: ADCTRGEN (Bitfield-Mask: 0x01)                  */
#define TIMER6_CR1_IOSEL_Pos                  (11UL)                    /*!< TIMER6 CR1: IOSEL (Bit 11)                                  */
#define TIMER6_CR1_IOSEL_Msk                  (0x800UL)                 /*!< TIMER6 CR1: IOSEL (Bitfield-Mask: 0x01)                     */
#define TIMER6_CR1_OUTPOL_Pos                 (12UL)                    /*!< TIMER6 CR1: OUTPOL (Bit 12)                                 */
#define TIMER6_CR1_OUTPOL_Msk                 (0x1000UL)                /*!< TIMER6 CR1: OUTPOL (Bitfield-Mask: 0x01)                    */
#define TIMER6_CR1_UAO_Pos                    (13UL)                    /*!< TIMER6 CR1: UAO (Bit 13)                                    */
#define TIMER6_CR1_UAO_Msk                    (0x2000UL)                /*!< TIMER6 CR1: UAO (Bitfield-Mask: 0x01)                       */
#define TIMER6_CR1_TRGMOD_Pos                 (14UL)                    /*!< TIMER6 CR1: TRGMOD (Bit 14)                                 */
#define TIMER6_CR1_TRGMOD_Msk                 (0xc000UL)                /*!< TIMER6 CR1: TRGMOD (Bitfield-Mask: 0x03)                    */

/* ---------------------------------  TIMER6_CR2  --------------------------------- */
#define TIMER6_CR2_TEN_Pos                    (0UL)                     /*!< TIMER6 CR2: TEN (Bit 0)                                     */
#define TIMER6_CR2_TEN_Msk                    (0x1UL)                   /*!< TIMER6 CR2: TEN (Bitfield-Mask: 0x01)                       */
#define TIMER6_CR2_TCLR_Pos                   (1UL)                     /*!< TIMER6 CR2: TCLR (Bit 1)                                    */
#define TIMER6_CR2_TCLR_Msk                   (0x2UL)                   /*!< TIMER6 CR2: TCLR (Bitfield-Mask: 0x01)                      */

/* ---------------------------------  TIMER6_PRS  --------------------------------- */
#define TIMER6_PRS_PRS_Pos                    (0UL)                     /*!< TIMER6 PRS: PRS (Bit 0)                                     */
#define TIMER6_PRS_PRS_Msk                    (0x3ffUL)                 /*!< TIMER6 PRS: PRS (Bitfield-Mask: 0x3ff)                      */

/* ---------------------------------  TIMER6_GRA  --------------------------------- */
#define TIMER6_GRA_GRA_Pos                    (0UL)                     /*!< TIMER6 GRA: GRA (Bit 0)                                     */
#define TIMER6_GRA_GRA_Msk                    (0xffffUL)                /*!< TIMER6 GRA: GRA (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER6_GRB  --------------------------------- */
#define TIMER6_GRB_GRB_Pos                    (0UL)                     /*!< TIMER6 GRB: GRB (Bit 0)                                     */
#define TIMER6_GRB_GRB_Msk                    (0xffffUL)                /*!< TIMER6 GRB: GRB (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER6_CNT  --------------------------------- */
#define TIMER6_CNT_CNT_Pos                    (0UL)                     /*!< TIMER6 CNT: CNT (Bit 0)                                     */
#define TIMER6_CNT_CNT_Msk                    (0xffffUL)                /*!< TIMER6 CNT: CNT (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  TIMER6_SR  --------------------------------- */
#define TIMER6_SR_OVF_Pos                     (0UL)                     /*!< TIMER6 SR: OVF (Bit 0)                                      */
#define TIMER6_SR_OVF_Msk                     (0x1UL)                   /*!< TIMER6 SR: OVF (Bitfield-Mask: 0x01)                        */
#define TIMER6_SR_MFB_Pos                     (1UL)                     /*!< TIMER6 SR: MFB (Bit 1)                                      */
#define TIMER6_SR_MFB_Msk                     (0x2UL)                   /*!< TIMER6 SR: MFB (Bitfield-Mask: 0x01)                        */
#define TIMER6_SR_MFA_Pos                     (2UL)                     /*!< TIMER6 SR: MFA (Bit 2)                                      */
#define TIMER6_SR_MFA_Msk                     (0x4UL)                   /*!< TIMER6 SR: MFA (Bitfield-Mask: 0x01)                        */

/* ---------------------------------  TIMER6_IER  --------------------------------- */
#define TIMER6_IER_OVIE_Pos                   (0UL)                     /*!< TIMER6 IER: OVIE (Bit 0)                                    */
#define TIMER6_IER_OVIE_Msk                   (0x1UL)                   /*!< TIMER6 IER: OVIE (Bitfield-Mask: 0x01)                      */
#define TIMER6_IER_MBIE_Pos                   (1UL)                     /*!< TIMER6 IER: MBIE (Bit 1)                                    */
#define TIMER6_IER_MBIE_Msk                   (0x2UL)                   /*!< TIMER6 IER: MBIE (Bitfield-Mask: 0x01)                      */
#define TIMER6_IER_MAIE_Pos                   (2UL)                     /*!< TIMER6 IER: MAIE (Bit 2)                                    */
#define TIMER6_IER_MAIE_Msk                   (0x4UL)                   /*!< TIMER6 IER: MAIE (Bitfield-Mask: 0x01)                      */

/* --------------------------------  TIMER6_TRGPNT  ------------------------------- */
#define TIMER6_TRGPNT_TRGPNT_Pos              (0UL)                     /*!< TIMER6 TRGPNT: TRGPNT (Bit 0)                               */
#define TIMER6_TRGPNT_TRGPNT_Msk              (0xffffUL)                /*!< TIMER6 TRGPNT: TRGPNT (Bitfield-Mask: 0xffff)               */

/* ---------------------------------  TIMER6_SYNC  -------------------------------- */
#define TIMER6_SYNC_SYNCDLY_Pos               (0UL)                     /*!< TIMER6 SYNC: SYNCDLY (Bit 0)                                */
#define TIMER6_SYNC_SYNCDLY_Msk               (0xffffUL)                /*!< TIMER6 SYNC: SYNCDLY (Bitfield-Mask: 0xffff)                */
#define TIMER6_SYNC_CSYNC_Pos                 (16UL)                    /*!< TIMER6 SYNC: CSYNC (Bit 16)                                 */
#define TIMER6_SYNC_CSYNC_Msk                 (0x10000UL)               /*!< TIMER6 SYNC: CSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER6_SYNC_SSYNC_Pos                 (17UL)                    /*!< TIMER6 SYNC: SSYNC (Bit 17)                                 */
#define TIMER6_SYNC_SSYNC_Msk                 (0x20000UL)               /*!< TIMER6 SYNC: SSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER6_SYNC_T0SYNCB_Pos               (20UL)                    /*!< TIMER6 SYNC: T0SYNCB (Bit 20)                               */
#define TIMER6_SYNC_T0SYNCB_Msk               (0x100000UL)              /*!< TIMER6 SYNC: T0SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER6_SYNC_T1SYNCB_Pos               (21UL)                    /*!< TIMER6 SYNC: T1SYNCB (Bit 21)                               */
#define TIMER6_SYNC_T1SYNCB_Msk               (0x200000UL)              /*!< TIMER6 SYNC: T1SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER6_SYNC_T2SYNCB_Pos               (22UL)                    /*!< TIMER6 SYNC: T2SYNCB (Bit 22)                               */
#define TIMER6_SYNC_T2SYNCB_Msk               (0x400000UL)              /*!< TIMER6 SYNC: T2SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER6_SYNC_T3SYNCB_Pos               (23UL)                    /*!< TIMER6 SYNC: T3SYNCB (Bit 23)                               */
#define TIMER6_SYNC_T3SYNCB_Msk               (0x800000UL)              /*!< TIMER6 SYNC: T3SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER6_SYNC_T4SYNCB_Pos               (24UL)                    /*!< TIMER6 SYNC: T4SYNCB (Bit 24)                               */
#define TIMER6_SYNC_T4SYNCB_Msk               (0x1000000UL)             /*!< TIMER6 SYNC: T4SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER6_SYNC_T5SYNCB_Pos               (25UL)                    /*!< TIMER6 SYNC: T5SYNCB (Bit 25)                               */
#define TIMER6_SYNC_T5SYNCB_Msk               (0x2000000UL)             /*!< TIMER6 SYNC: T5SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER6_SYNC_T6SYNCB_Pos               (26UL)                    /*!< TIMER6 SYNC: T6SYNCB (Bit 26)                               */
#define TIMER6_SYNC_T6SYNCB_Msk               (0x4000000UL)             /*!< TIMER6 SYNC: T6SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER6_SYNC_T7SYNCB_Pos               (27UL)                    /*!< TIMER6 SYNC: T7SYNCB (Bit 27)                               */
#define TIMER6_SYNC_T7SYNCB_Msk               (0x8000000UL)             /*!< TIMER6 SYNC: T7SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER6_SYNC_T8SYNCB_Pos               (28UL)                    /*!< TIMER6 SYNC: T8SYNCB (Bit 28)                               */
#define TIMER6_SYNC_T8SYNCB_Msk               (0x10000000UL)            /*!< TIMER6 SYNC: T8SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER6_SYNC_T9SYNCB_Pos               (29UL)                    /*!< TIMER6 SYNC: T9SYNCB (Bit 29)                               */
#define TIMER6_SYNC_T9SYNCB_Msk               (0x20000000UL)            /*!< TIMER6 SYNC: T9SYNCB (Bitfield-Mask: 0x01)                  */


/* ================================================================================ */
/* ================         struct 'TIMER7' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER7_CR1  --------------------------------- */
#define TIMER7_CR1_MODE_Pos                   (0UL)                     /*!< TIMER7 CR1: MODE (Bit 0)                                    */
#define TIMER7_CR1_MODE_Msk                   (0x3UL)                   /*!< TIMER7 CR1: MODE (Bitfield-Mask: 0x03)                      */
#define TIMER7_CR1_CLRMOD_Pos                 (2UL)                     /*!< TIMER7 CR1: CLRMOD (Bit 2)                                  */
#define TIMER7_CR1_CLRMOD_Msk                 (0xcUL)                   /*!< TIMER7 CR1: CLRMOD (Bitfield-Mask: 0x03)                    */
#define TIMER7_CR1_CKSEL_Pos                  (4UL)                     /*!< TIMER7 CR1: CKSEL (Bit 4)                                   */
#define TIMER7_CR1_CKSEL_Msk                  (0x70UL)                  /*!< TIMER7 CR1: CKSEL (Bitfield-Mask: 0x07)                     */
#define TIMER7_CR1_STARTLVL_Pos               (7UL)                     /*!< TIMER7 CR1: STARTLVL (Bit 7)                                */
#define TIMER7_CR1_STARTLVL_Msk               (0x80UL)                  /*!< TIMER7 CR1: STARTLVL (Bitfield-Mask: 0x01)                  */
#define TIMER7_CR1_ADCTRGEN_Pos               (8UL)                     /*!< TIMER7 CR1: ADCTRGEN (Bit 8)                                */
#define TIMER7_CR1_ADCTRGEN_Msk               (0x100UL)                 /*!< TIMER7 CR1: ADCTRGEN (Bitfield-Mask: 0x01)                  */
#define TIMER7_CR1_IOSEL_Pos                  (11UL)                    /*!< TIMER7 CR1: IOSEL (Bit 11)                                  */
#define TIMER7_CR1_IOSEL_Msk                  (0x800UL)                 /*!< TIMER7 CR1: IOSEL (Bitfield-Mask: 0x01)                     */
#define TIMER7_CR1_OUTPOL_Pos                 (12UL)                    /*!< TIMER7 CR1: OUTPOL (Bit 12)                                 */
#define TIMER7_CR1_OUTPOL_Msk                 (0x1000UL)                /*!< TIMER7 CR1: OUTPOL (Bitfield-Mask: 0x01)                    */
#define TIMER7_CR1_UAO_Pos                    (13UL)                    /*!< TIMER7 CR1: UAO (Bit 13)                                    */
#define TIMER7_CR1_UAO_Msk                    (0x2000UL)                /*!< TIMER7 CR1: UAO (Bitfield-Mask: 0x01)                       */
#define TIMER7_CR1_TRGMOD_Pos                 (14UL)                    /*!< TIMER7 CR1: TRGMOD (Bit 14)                                 */
#define TIMER7_CR1_TRGMOD_Msk                 (0xc000UL)                /*!< TIMER7 CR1: TRGMOD (Bitfield-Mask: 0x03)                    */

/* ---------------------------------  TIMER7_CR2  --------------------------------- */
#define TIMER7_CR2_TEN_Pos                    (0UL)                     /*!< TIMER7 CR2: TEN (Bit 0)                                     */
#define TIMER7_CR2_TEN_Msk                    (0x1UL)                   /*!< TIMER7 CR2: TEN (Bitfield-Mask: 0x01)                       */
#define TIMER7_CR2_TCLR_Pos                   (1UL)                     /*!< TIMER7 CR2: TCLR (Bit 1)                                    */
#define TIMER7_CR2_TCLR_Msk                   (0x2UL)                   /*!< TIMER7 CR2: TCLR (Bitfield-Mask: 0x01)                      */

/* ---------------------------------  TIMER7_PRS  --------------------------------- */
#define TIMER7_PRS_PRS_Pos                    (0UL)                     /*!< TIMER7 PRS: PRS (Bit 0)                                     */
#define TIMER7_PRS_PRS_Msk                    (0x3ffUL)                 /*!< TIMER7 PRS: PRS (Bitfield-Mask: 0x3ff)                      */

/* ---------------------------------  TIMER7_GRA  --------------------------------- */
#define TIMER7_GRA_GRA_Pos                    (0UL)                     /*!< TIMER7 GRA: GRA (Bit 0)                                     */
#define TIMER7_GRA_GRA_Msk                    (0xffffUL)                /*!< TIMER7 GRA: GRA (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER7_GRB  --------------------------------- */
#define TIMER7_GRB_GRB_Pos                    (0UL)                     /*!< TIMER7 GRB: GRB (Bit 0)                                     */
#define TIMER7_GRB_GRB_Msk                    (0xffffUL)                /*!< TIMER7 GRB: GRB (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER7_CNT  --------------------------------- */
#define TIMER7_CNT_CNT_Pos                    (0UL)                     /*!< TIMER7 CNT: CNT (Bit 0)                                     */
#define TIMER7_CNT_CNT_Msk                    (0xffffUL)                /*!< TIMER7 CNT: CNT (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  TIMER7_SR  --------------------------------- */
#define TIMER7_SR_OVF_Pos                     (0UL)                     /*!< TIMER7 SR: OVF (Bit 0)                                      */
#define TIMER7_SR_OVF_Msk                     (0x1UL)                   /*!< TIMER7 SR: OVF (Bitfield-Mask: 0x01)                        */
#define TIMER7_SR_MFB_Pos                     (1UL)                     /*!< TIMER7 SR: MFB (Bit 1)                                      */
#define TIMER7_SR_MFB_Msk                     (0x2UL)                   /*!< TIMER7 SR: MFB (Bitfield-Mask: 0x01)                        */
#define TIMER7_SR_MFA_Pos                     (2UL)                     /*!< TIMER7 SR: MFA (Bit 2)                                      */
#define TIMER7_SR_MFA_Msk                     (0x4UL)                   /*!< TIMER7 SR: MFA (Bitfield-Mask: 0x01)                        */

/* ---------------------------------  TIMER7_IER  --------------------------------- */
#define TIMER7_IER_OVIE_Pos                   (0UL)                     /*!< TIMER7 IER: OVIE (Bit 0)                                    */
#define TIMER7_IER_OVIE_Msk                   (0x1UL)                   /*!< TIMER7 IER: OVIE (Bitfield-Mask: 0x01)                      */
#define TIMER7_IER_MBIE_Pos                   (1UL)                     /*!< TIMER7 IER: MBIE (Bit 1)                                    */
#define TIMER7_IER_MBIE_Msk                   (0x2UL)                   /*!< TIMER7 IER: MBIE (Bitfield-Mask: 0x01)                      */
#define TIMER7_IER_MAIE_Pos                   (2UL)                     /*!< TIMER7 IER: MAIE (Bit 2)                                    */
#define TIMER7_IER_MAIE_Msk                   (0x4UL)                   /*!< TIMER7 IER: MAIE (Bitfield-Mask: 0x01)                      */

/* --------------------------------  TIMER7_TRGPNT  ------------------------------- */
#define TIMER7_TRGPNT_TRGPNT_Pos              (0UL)                     /*!< TIMER7 TRGPNT: TRGPNT (Bit 0)                               */
#define TIMER7_TRGPNT_TRGPNT_Msk              (0xffffUL)                /*!< TIMER7 TRGPNT: TRGPNT (Bitfield-Mask: 0xffff)               */

/* ---------------------------------  TIMER7_SYNC  -------------------------------- */
#define TIMER7_SYNC_SYNCDLY_Pos               (0UL)                     /*!< TIMER7 SYNC: SYNCDLY (Bit 0)                                */
#define TIMER7_SYNC_SYNCDLY_Msk               (0xffffUL)                /*!< TIMER7 SYNC: SYNCDLY (Bitfield-Mask: 0xffff)                */
#define TIMER7_SYNC_CSYNC_Pos                 (16UL)                    /*!< TIMER7 SYNC: CSYNC (Bit 16)                                 */
#define TIMER7_SYNC_CSYNC_Msk                 (0x10000UL)               /*!< TIMER7 SYNC: CSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER7_SYNC_SSYNC_Pos                 (17UL)                    /*!< TIMER7 SYNC: SSYNC (Bit 17)                                 */
#define TIMER7_SYNC_SSYNC_Msk                 (0x20000UL)               /*!< TIMER7 SYNC: SSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER7_SYNC_T0SYNCB_Pos               (20UL)                    /*!< TIMER7 SYNC: T0SYNCB (Bit 20)                               */
#define TIMER7_SYNC_T0SYNCB_Msk               (0x100000UL)              /*!< TIMER7 SYNC: T0SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER7_SYNC_T1SYNCB_Pos               (21UL)                    /*!< TIMER7 SYNC: T1SYNCB (Bit 21)                               */
#define TIMER7_SYNC_T1SYNCB_Msk               (0x200000UL)              /*!< TIMER7 SYNC: T1SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER7_SYNC_T2SYNCB_Pos               (22UL)                    /*!< TIMER7 SYNC: T2SYNCB (Bit 22)                               */
#define TIMER7_SYNC_T2SYNCB_Msk               (0x400000UL)              /*!< TIMER7 SYNC: T2SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER7_SYNC_T3SYNCB_Pos               (23UL)                    /*!< TIMER7 SYNC: T3SYNCB (Bit 23)                               */
#define TIMER7_SYNC_T3SYNCB_Msk               (0x800000UL)              /*!< TIMER7 SYNC: T3SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER7_SYNC_T4SYNCB_Pos               (24UL)                    /*!< TIMER7 SYNC: T4SYNCB (Bit 24)                               */
#define TIMER7_SYNC_T4SYNCB_Msk               (0x1000000UL)             /*!< TIMER7 SYNC: T4SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER7_SYNC_T5SYNCB_Pos               (25UL)                    /*!< TIMER7 SYNC: T5SYNCB (Bit 25)                               */
#define TIMER7_SYNC_T5SYNCB_Msk               (0x2000000UL)             /*!< TIMER7 SYNC: T5SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER7_SYNC_T6SYNCB_Pos               (26UL)                    /*!< TIMER7 SYNC: T6SYNCB (Bit 26)                               */
#define TIMER7_SYNC_T6SYNCB_Msk               (0x4000000UL)             /*!< TIMER7 SYNC: T6SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER7_SYNC_T7SYNCB_Pos               (27UL)                    /*!< TIMER7 SYNC: T7SYNCB (Bit 27)                               */
#define TIMER7_SYNC_T7SYNCB_Msk               (0x8000000UL)             /*!< TIMER7 SYNC: T7SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER7_SYNC_T8SYNCB_Pos               (28UL)                    /*!< TIMER7 SYNC: T8SYNCB (Bit 28)                               */
#define TIMER7_SYNC_T8SYNCB_Msk               (0x10000000UL)            /*!< TIMER7 SYNC: T8SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER7_SYNC_T9SYNCB_Pos               (29UL)                    /*!< TIMER7 SYNC: T9SYNCB (Bit 29)                               */
#define TIMER7_SYNC_T9SYNCB_Msk               (0x20000000UL)            /*!< TIMER7 SYNC: T9SYNCB (Bitfield-Mask: 0x01)                  */


/* ================================================================================ */
/* ================         struct 'TIMER8' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER8_CR1  --------------------------------- */
#define TIMER8_CR1_MODE_Pos                   (0UL)                     /*!< TIMER8 CR1: MODE (Bit 0)                                    */
#define TIMER8_CR1_MODE_Msk                   (0x3UL)                   /*!< TIMER8 CR1: MODE (Bitfield-Mask: 0x03)                      */
#define TIMER8_CR1_CLRMOD_Pos                 (2UL)                     /*!< TIMER8 CR1: CLRMOD (Bit 2)                                  */
#define TIMER8_CR1_CLRMOD_Msk                 (0xcUL)                   /*!< TIMER8 CR1: CLRMOD (Bitfield-Mask: 0x03)                    */
#define TIMER8_CR1_CKSEL_Pos                  (4UL)                     /*!< TIMER8 CR1: CKSEL (Bit 4)                                   */
#define TIMER8_CR1_CKSEL_Msk                  (0x70UL)                  /*!< TIMER8 CR1: CKSEL (Bitfield-Mask: 0x07)                     */
#define TIMER8_CR1_STARTLVL_Pos               (7UL)                     /*!< TIMER8 CR1: STARTLVL (Bit 7)                                */
#define TIMER8_CR1_STARTLVL_Msk               (0x80UL)                  /*!< TIMER8 CR1: STARTLVL (Bitfield-Mask: 0x01)                  */
#define TIMER8_CR1_ADCTRGEN_Pos               (8UL)                     /*!< TIMER8 CR1: ADCTRGEN (Bit 8)                                */
#define TIMER8_CR1_ADCTRGEN_Msk               (0x100UL)                 /*!< TIMER8 CR1: ADCTRGEN (Bitfield-Mask: 0x01)                  */
#define TIMER8_CR1_IOSEL_Pos                  (11UL)                    /*!< TIMER8 CR1: IOSEL (Bit 11)                                  */
#define TIMER8_CR1_IOSEL_Msk                  (0x800UL)                 /*!< TIMER8 CR1: IOSEL (Bitfield-Mask: 0x01)                     */
#define TIMER8_CR1_OUTPOL_Pos                 (12UL)                    /*!< TIMER8 CR1: OUTPOL (Bit 12)                                 */
#define TIMER8_CR1_OUTPOL_Msk                 (0x1000UL)                /*!< TIMER8 CR1: OUTPOL (Bitfield-Mask: 0x01)                    */
#define TIMER8_CR1_UAO_Pos                    (13UL)                    /*!< TIMER8 CR1: UAO (Bit 13)                                    */
#define TIMER8_CR1_UAO_Msk                    (0x2000UL)                /*!< TIMER8 CR1: UAO (Bitfield-Mask: 0x01)                       */
#define TIMER8_CR1_TRGMOD_Pos                 (14UL)                    /*!< TIMER8 CR1: TRGMOD (Bit 14)                                 */
#define TIMER8_CR1_TRGMOD_Msk                 (0xc000UL)                /*!< TIMER8 CR1: TRGMOD (Bitfield-Mask: 0x03)                    */

/* ---------------------------------  TIMER8_CR2  --------------------------------- */
#define TIMER8_CR2_TEN_Pos                    (0UL)                     /*!< TIMER8 CR2: TEN (Bit 0)                                     */
#define TIMER8_CR2_TEN_Msk                    (0x1UL)                   /*!< TIMER8 CR2: TEN (Bitfield-Mask: 0x01)                       */
#define TIMER8_CR2_TCLR_Pos                   (1UL)                     /*!< TIMER8 CR2: TCLR (Bit 1)                                    */
#define TIMER8_CR2_TCLR_Msk                   (0x2UL)                   /*!< TIMER8 CR2: TCLR (Bitfield-Mask: 0x01)                      */

/* ---------------------------------  TIMER8_PRS  --------------------------------- */
#define TIMER8_PRS_PRS_Pos                    (0UL)                     /*!< TIMER8 PRS: PRS (Bit 0)                                     */
#define TIMER8_PRS_PRS_Msk                    (0x3ffUL)                 /*!< TIMER8 PRS: PRS (Bitfield-Mask: 0x3ff)                      */

/* ---------------------------------  TIMER8_GRA  --------------------------------- */
#define TIMER8_GRA_GRA_Pos                    (0UL)                     /*!< TIMER8 GRA: GRA (Bit 0)                                     */
#define TIMER8_GRA_GRA_Msk                    (0xffffUL)                /*!< TIMER8 GRA: GRA (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER8_GRB  --------------------------------- */
#define TIMER8_GRB_GRB_Pos                    (0UL)                     /*!< TIMER8 GRB: GRB (Bit 0)                                     */
#define TIMER8_GRB_GRB_Msk                    (0xffffUL)                /*!< TIMER8 GRB: GRB (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER8_CNT  --------------------------------- */
#define TIMER8_CNT_CNT_Pos                    (0UL)                     /*!< TIMER8 CNT: CNT (Bit 0)                                     */
#define TIMER8_CNT_CNT_Msk                    (0xffffUL)                /*!< TIMER8 CNT: CNT (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  TIMER8_SR  --------------------------------- */
#define TIMER8_SR_OVF_Pos                     (0UL)                     /*!< TIMER8 SR: OVF (Bit 0)                                      */
#define TIMER8_SR_OVF_Msk                     (0x1UL)                   /*!< TIMER8 SR: OVF (Bitfield-Mask: 0x01)                        */
#define TIMER8_SR_MFB_Pos                     (1UL)                     /*!< TIMER8 SR: MFB (Bit 1)                                      */
#define TIMER8_SR_MFB_Msk                     (0x2UL)                   /*!< TIMER8 SR: MFB (Bitfield-Mask: 0x01)                        */
#define TIMER8_SR_MFA_Pos                     (2UL)                     /*!< TIMER8 SR: MFA (Bit 2)                                      */
#define TIMER8_SR_MFA_Msk                     (0x4UL)                   /*!< TIMER8 SR: MFA (Bitfield-Mask: 0x01)                        */

/* ---------------------------------  TIMER8_IER  --------------------------------- */
#define TIMER8_IER_OVIE_Pos                   (0UL)                     /*!< TIMER8 IER: OVIE (Bit 0)                                    */
#define TIMER8_IER_OVIE_Msk                   (0x1UL)                   /*!< TIMER8 IER: OVIE (Bitfield-Mask: 0x01)                      */
#define TIMER8_IER_MBIE_Pos                   (1UL)                     /*!< TIMER8 IER: MBIE (Bit 1)                                    */
#define TIMER8_IER_MBIE_Msk                   (0x2UL)                   /*!< TIMER8 IER: MBIE (Bitfield-Mask: 0x01)                      */
#define TIMER8_IER_MAIE_Pos                   (2UL)                     /*!< TIMER8 IER: MAIE (Bit 2)                                    */
#define TIMER8_IER_MAIE_Msk                   (0x4UL)                   /*!< TIMER8 IER: MAIE (Bitfield-Mask: 0x01)                      */

/* --------------------------------  TIMER8_TRGPNT  ------------------------------- */
#define TIMER8_TRGPNT_TRGPNT_Pos              (0UL)                     /*!< TIMER8 TRGPNT: TRGPNT (Bit 0)                               */
#define TIMER8_TRGPNT_TRGPNT_Msk              (0xffffUL)                /*!< TIMER8 TRGPNT: TRGPNT (Bitfield-Mask: 0xffff)               */

/* ---------------------------------  TIMER8_SYNC  -------------------------------- */
#define TIMER8_SYNC_SYNCDLY_Pos               (0UL)                     /*!< TIMER8 SYNC: SYNCDLY (Bit 0)                                */
#define TIMER8_SYNC_SYNCDLY_Msk               (0xffffUL)                /*!< TIMER8 SYNC: SYNCDLY (Bitfield-Mask: 0xffff)                */
#define TIMER8_SYNC_CSYNC_Pos                 (16UL)                    /*!< TIMER8 SYNC: CSYNC (Bit 16)                                 */
#define TIMER8_SYNC_CSYNC_Msk                 (0x10000UL)               /*!< TIMER8 SYNC: CSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER8_SYNC_SSYNC_Pos                 (17UL)                    /*!< TIMER8 SYNC: SSYNC (Bit 17)                                 */
#define TIMER8_SYNC_SSYNC_Msk                 (0x20000UL)               /*!< TIMER8 SYNC: SSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER8_SYNC_T0SYNCB_Pos               (20UL)                    /*!< TIMER8 SYNC: T0SYNCB (Bit 20)                               */
#define TIMER8_SYNC_T0SYNCB_Msk               (0x100000UL)              /*!< TIMER8 SYNC: T0SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER8_SYNC_T1SYNCB_Pos               (21UL)                    /*!< TIMER8 SYNC: T1SYNCB (Bit 21)                               */
#define TIMER8_SYNC_T1SYNCB_Msk               (0x200000UL)              /*!< TIMER8 SYNC: T1SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER8_SYNC_T2SYNCB_Pos               (22UL)                    /*!< TIMER8 SYNC: T2SYNCB (Bit 22)                               */
#define TIMER8_SYNC_T2SYNCB_Msk               (0x400000UL)              /*!< TIMER8 SYNC: T2SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER8_SYNC_T3SYNCB_Pos               (23UL)                    /*!< TIMER8 SYNC: T3SYNCB (Bit 23)                               */
#define TIMER8_SYNC_T3SYNCB_Msk               (0x800000UL)              /*!< TIMER8 SYNC: T3SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER8_SYNC_T4SYNCB_Pos               (24UL)                    /*!< TIMER8 SYNC: T4SYNCB (Bit 24)                               */
#define TIMER8_SYNC_T4SYNCB_Msk               (0x1000000UL)             /*!< TIMER8 SYNC: T4SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER8_SYNC_T5SYNCB_Pos               (25UL)                    /*!< TIMER8 SYNC: T5SYNCB (Bit 25)                               */
#define TIMER8_SYNC_T5SYNCB_Msk               (0x2000000UL)             /*!< TIMER8 SYNC: T5SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER8_SYNC_T6SYNCB_Pos               (26UL)                    /*!< TIMER8 SYNC: T6SYNCB (Bit 26)                               */
#define TIMER8_SYNC_T6SYNCB_Msk               (0x4000000UL)             /*!< TIMER8 SYNC: T6SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER8_SYNC_T7SYNCB_Pos               (27UL)                    /*!< TIMER8 SYNC: T7SYNCB (Bit 27)                               */
#define TIMER8_SYNC_T7SYNCB_Msk               (0x8000000UL)             /*!< TIMER8 SYNC: T7SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER8_SYNC_T8SYNCB_Pos               (28UL)                    /*!< TIMER8 SYNC: T8SYNCB (Bit 28)                               */
#define TIMER8_SYNC_T8SYNCB_Msk               (0x10000000UL)            /*!< TIMER8 SYNC: T8SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER8_SYNC_T9SYNCB_Pos               (29UL)                    /*!< TIMER8 SYNC: T9SYNCB (Bit 29)                               */
#define TIMER8_SYNC_T9SYNCB_Msk               (0x20000000UL)            /*!< TIMER8 SYNC: T9SYNCB (Bitfield-Mask: 0x01)                  */


/* ================================================================================ */
/* ================         struct 'TIMER9' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  TIMER9_CR1  --------------------------------- */
#define TIMER9_CR1_MODE_Pos                   (0UL)                     /*!< TIMER9 CR1: MODE (Bit 0)                                    */
#define TIMER9_CR1_MODE_Msk                   (0x3UL)                   /*!< TIMER9 CR1: MODE (Bitfield-Mask: 0x03)                      */
#define TIMER9_CR1_CLRMOD_Pos                 (2UL)                     /*!< TIMER9 CR1: CLRMOD (Bit 2)                                  */
#define TIMER9_CR1_CLRMOD_Msk                 (0xcUL)                   /*!< TIMER9 CR1: CLRMOD (Bitfield-Mask: 0x03)                    */
#define TIMER9_CR1_CKSEL_Pos                  (4UL)                     /*!< TIMER9 CR1: CKSEL (Bit 4)                                   */
#define TIMER9_CR1_CKSEL_Msk                  (0x70UL)                  /*!< TIMER9 CR1: CKSEL (Bitfield-Mask: 0x07)                     */
#define TIMER9_CR1_STARTLVL_Pos               (7UL)                     /*!< TIMER9 CR1: STARTLVL (Bit 7)                                */
#define TIMER9_CR1_STARTLVL_Msk               (0x80UL)                  /*!< TIMER9 CR1: STARTLVL (Bitfield-Mask: 0x01)                  */
#define TIMER9_CR1_ADCTRGEN_Pos               (8UL)                     /*!< TIMER9 CR1: ADCTRGEN (Bit 8)                                */
#define TIMER9_CR1_ADCTRGEN_Msk               (0x100UL)                 /*!< TIMER9 CR1: ADCTRGEN (Bitfield-Mask: 0x01)                  */
#define TIMER9_CR1_IOSEL_Pos                  (11UL)                    /*!< TIMER9 CR1: IOSEL (Bit 11)                                  */
#define TIMER9_CR1_IOSEL_Msk                  (0x800UL)                 /*!< TIMER9 CR1: IOSEL (Bitfield-Mask: 0x01)                     */
#define TIMER9_CR1_OUTPOL_Pos                 (12UL)                    /*!< TIMER9 CR1: OUTPOL (Bit 12)                                 */
#define TIMER9_CR1_OUTPOL_Msk                 (0x1000UL)                /*!< TIMER9 CR1: OUTPOL (Bitfield-Mask: 0x01)                    */
#define TIMER9_CR1_UAO_Pos                    (13UL)                    /*!< TIMER9 CR1: UAO (Bit 13)                                    */
#define TIMER9_CR1_UAO_Msk                    (0x2000UL)                /*!< TIMER9 CR1: UAO (Bitfield-Mask: 0x01)                       */
#define TIMER9_CR1_TRGMOD_Pos                 (14UL)                    /*!< TIMER9 CR1: TRGMOD (Bit 14)                                 */
#define TIMER9_CR1_TRGMOD_Msk                 (0xc000UL)                /*!< TIMER9 CR1: TRGMOD (Bitfield-Mask: 0x03)                    */

/* ---------------------------------  TIMER9_CR2  --------------------------------- */
#define TIMER9_CR2_TEN_Pos                    (0UL)                     /*!< TIMER9 CR2: TEN (Bit 0)                                     */
#define TIMER9_CR2_TEN_Msk                    (0x1UL)                   /*!< TIMER9 CR2: TEN (Bitfield-Mask: 0x01)                       */
#define TIMER9_CR2_TCLR_Pos                   (1UL)                     /*!< TIMER9 CR2: TCLR (Bit 1)                                    */
#define TIMER9_CR2_TCLR_Msk                   (0x2UL)                   /*!< TIMER9 CR2: TCLR (Bitfield-Mask: 0x01)                      */

/* ---------------------------------  TIMER9_PRS  --------------------------------- */
#define TIMER9_PRS_PRS_Pos                    (0UL)                     /*!< TIMER9 PRS: PRS (Bit 0)                                     */
#define TIMER9_PRS_PRS_Msk                    (0x3ffUL)                 /*!< TIMER9 PRS: PRS (Bitfield-Mask: 0x3ff)                      */

/* ---------------------------------  TIMER9_GRA  --------------------------------- */
#define TIMER9_GRA_GRA_Pos                    (0UL)                     /*!< TIMER9 GRA: GRA (Bit 0)                                     */
#define TIMER9_GRA_GRA_Msk                    (0xffffUL)                /*!< TIMER9 GRA: GRA (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER9_GRB  --------------------------------- */
#define TIMER9_GRB_GRB_Pos                    (0UL)                     /*!< TIMER9 GRB: GRB (Bit 0)                                     */
#define TIMER9_GRB_GRB_Msk                    (0xffffUL)                /*!< TIMER9 GRB: GRB (Bitfield-Mask: 0xffff)                     */

/* ---------------------------------  TIMER9_CNT  --------------------------------- */
#define TIMER9_CNT_CNT_Pos                    (0UL)                     /*!< TIMER9 CNT: CNT (Bit 0)                                     */
#define TIMER9_CNT_CNT_Msk                    (0xffffUL)                /*!< TIMER9 CNT: CNT (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  TIMER9_SR  --------------------------------- */
#define TIMER9_SR_OVF_Pos                     (0UL)                     /*!< TIMER9 SR: OVF (Bit 0)                                      */
#define TIMER9_SR_OVF_Msk                     (0x1UL)                   /*!< TIMER9 SR: OVF (Bitfield-Mask: 0x01)                        */
#define TIMER9_SR_MFB_Pos                     (1UL)                     /*!< TIMER9 SR: MFB (Bit 1)                                      */
#define TIMER9_SR_MFB_Msk                     (0x2UL)                   /*!< TIMER9 SR: MFB (Bitfield-Mask: 0x01)                        */
#define TIMER9_SR_MFA_Pos                     (2UL)                     /*!< TIMER9 SR: MFA (Bit 2)                                      */
#define TIMER9_SR_MFA_Msk                     (0x4UL)                   /*!< TIMER9 SR: MFA (Bitfield-Mask: 0x01)                        */

/* ---------------------------------  TIMER9_IER  --------------------------------- */
#define TIMER9_IER_OVIE_Pos                   (0UL)                     /*!< TIMER9 IER: OVIE (Bit 0)                                    */
#define TIMER9_IER_OVIE_Msk                   (0x1UL)                   /*!< TIMER9 IER: OVIE (Bitfield-Mask: 0x01)                      */
#define TIMER9_IER_MBIE_Pos                   (1UL)                     /*!< TIMER9 IER: MBIE (Bit 1)                                    */
#define TIMER9_IER_MBIE_Msk                   (0x2UL)                   /*!< TIMER9 IER: MBIE (Bitfield-Mask: 0x01)                      */
#define TIMER9_IER_MAIE_Pos                   (2UL)                     /*!< TIMER9 IER: MAIE (Bit 2)                                    */
#define TIMER9_IER_MAIE_Msk                   (0x4UL)                   /*!< TIMER9 IER: MAIE (Bitfield-Mask: 0x01)                      */

/* --------------------------------  TIMER9_TRGPNT  ------------------------------- */
#define TIMER9_TRGPNT_TRGPNT_Pos              (0UL)                     /*!< TIMER9 TRGPNT: TRGPNT (Bit 0)                               */
#define TIMER9_TRGPNT_TRGPNT_Msk              (0xffffUL)                /*!< TIMER9 TRGPNT: TRGPNT (Bitfield-Mask: 0xffff)               */

/* ---------------------------------  TIMER9_SYNC  -------------------------------- */
#define TIMER9_SYNC_SYNCDLY_Pos               (0UL)                     /*!< TIMER9 SYNC: SYNCDLY (Bit 0)                                */
#define TIMER9_SYNC_SYNCDLY_Msk               (0xffffUL)                /*!< TIMER9 SYNC: SYNCDLY (Bitfield-Mask: 0xffff)                */
#define TIMER9_SYNC_CSYNC_Pos                 (16UL)                    /*!< TIMER9 SYNC: CSYNC (Bit 16)                                 */
#define TIMER9_SYNC_CSYNC_Msk                 (0x10000UL)               /*!< TIMER9 SYNC: CSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER9_SYNC_SSYNC_Pos                 (17UL)                    /*!< TIMER9 SYNC: SSYNC (Bit 17)                                 */
#define TIMER9_SYNC_SSYNC_Msk                 (0x20000UL)               /*!< TIMER9 SYNC: SSYNC (Bitfield-Mask: 0x01)                    */
#define TIMER9_SYNC_T0SYNCB_Pos               (20UL)                    /*!< TIMER9 SYNC: T0SYNCB (Bit 20)                               */
#define TIMER9_SYNC_T0SYNCB_Msk               (0x100000UL)              /*!< TIMER9 SYNC: T0SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER9_SYNC_T1SYNCB_Pos               (21UL)                    /*!< TIMER9 SYNC: T1SYNCB (Bit 21)                               */
#define TIMER9_SYNC_T1SYNCB_Msk               (0x200000UL)              /*!< TIMER9 SYNC: T1SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER9_SYNC_T2SYNCB_Pos               (22UL)                    /*!< TIMER9 SYNC: T2SYNCB (Bit 22)                               */
#define TIMER9_SYNC_T2SYNCB_Msk               (0x400000UL)              /*!< TIMER9 SYNC: T2SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER9_SYNC_T3SYNCB_Pos               (23UL)                    /*!< TIMER9 SYNC: T3SYNCB (Bit 23)                               */
#define TIMER9_SYNC_T3SYNCB_Msk               (0x800000UL)              /*!< TIMER9 SYNC: T3SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER9_SYNC_T4SYNCB_Pos               (24UL)                    /*!< TIMER9 SYNC: T4SYNCB (Bit 24)                               */
#define TIMER9_SYNC_T4SYNCB_Msk               (0x1000000UL)             /*!< TIMER9 SYNC: T4SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER9_SYNC_T5SYNCB_Pos               (25UL)                    /*!< TIMER9 SYNC: T5SYNCB (Bit 25)                               */
#define TIMER9_SYNC_T5SYNCB_Msk               (0x2000000UL)             /*!< TIMER9 SYNC: T5SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER9_SYNC_T6SYNCB_Pos               (26UL)                    /*!< TIMER9 SYNC: T6SYNCB (Bit 26)                               */
#define TIMER9_SYNC_T6SYNCB_Msk               (0x4000000UL)             /*!< TIMER9 SYNC: T6SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER9_SYNC_T7SYNCB_Pos               (27UL)                    /*!< TIMER9 SYNC: T7SYNCB (Bit 27)                               */
#define TIMER9_SYNC_T7SYNCB_Msk               (0x8000000UL)             /*!< TIMER9 SYNC: T7SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER9_SYNC_T8SYNCB_Pos               (28UL)                    /*!< TIMER9 SYNC: T8SYNCB (Bit 28)                               */
#define TIMER9_SYNC_T8SYNCB_Msk               (0x10000000UL)            /*!< TIMER9 SYNC: T8SYNCB (Bitfield-Mask: 0x01)                  */
#define TIMER9_SYNC_T9SYNCB_Pos               (29UL)                    /*!< TIMER9 SYNC: T9SYNCB (Bit 29)                               */
#define TIMER9_SYNC_T9SYNCB_Msk               (0x20000000UL)            /*!< TIMER9 SYNC: T9SYNCB (Bitfield-Mask: 0x01)                  */


/* ================================================================================ */
/* ================          struct 'FRT' Position & Mask          ================ */
/* ================================================================================ */


/* ----------------------------------  FRT_CTRL  ---------------------------------- */
#define FRT_CTRL_EN_Pos                       (0UL)                     /*!< FRT CTRL: EN (Bit 0)                                        */
#define FRT_CTRL_EN_Msk                       (0x1UL)                   /*!< FRT CTRL: EN (Bitfield-Mask: 0x01)                          */
#define FRT_CTRL_MODE_Pos                     (1UL)                     /*!< FRT CTRL: MODE (Bit 1)                                      */
#define FRT_CTRL_MODE_Msk                     (0x2UL)                   /*!< FRT CTRL: MODE (Bitfield-Mask: 0x01)                        */
#define FRT_CTRL_MATCHIE_Pos                  (8UL)                     /*!< FRT CTRL: MATCHIE (Bit 8)                                   */
#define FRT_CTRL_MATCHIE_Msk                  (0x100UL)                 /*!< FRT CTRL: MATCHIE (Bitfield-Mask: 0x01)                     */
#define FRT_CTRL_OVFIE_Pos                    (9UL)                     /*!< FRT CTRL: OVFIE (Bit 9)                                     */
#define FRT_CTRL_OVFIE_Msk                    (0x200UL)                 /*!< FRT CTRL: OVFIE (Bitfield-Mask: 0x01)                       */

/* ----------------------------------  FRT_MCNT  ---------------------------------- */
#define FRT_MCNT_MCNT_Pos                     (0UL)                     /*!< FRT MCNT: MCNT (Bit 0)                                      */
#define FRT_MCNT_MCNT_Msk                     (0xffffffffUL)            /*!< FRT MCNT: MCNT (Bitfield-Mask: 0xffffffff)                  */

/* -----------------------------------  FRT_CNT  ---------------------------------- */
#define FRT_CNT_CNT_Pos                       (0UL)                     /*!< FRT CNT: CNT (Bit 0)                                        */
#define FRT_CNT_CNT_Msk                       (0xffffffffUL)            /*!< FRT CNT: CNT (Bitfield-Mask: 0xffffffff)                    */

/* ----------------------------------  FRT_STAT  ---------------------------------- */
#define FRT_STAT_MATCHIF_Pos                  (8UL)                     /*!< FRT STAT: MATCHIF (Bit 8)                                   */
#define FRT_STAT_MATCHIF_Msk                  (0x100UL)                 /*!< FRT STAT: MATCHIF (Bitfield-Mask: 0x01)                     */
#define FRT_STAT_OVFIF_Pos                    (9UL)                     /*!< FRT STAT: OVFIF (Bit 9)                                     */
#define FRT_STAT_OVFIF_Msk                    (0x200UL)                 /*!< FRT STAT: OVFIF (Bitfield-Mask: 0x01)                       */


/* ================================================================================ */
/* ================          Group 'UART' Position & Mask          ================ */
/* ================================================================================ */


/* ----------------------------------  UART_RBR  ---------------------------------- */
#define UART_RBR_RBR_Pos                      (0UL)                     /*!< UART RBR: RBR (Bit 0)                                       */
#define UART_RBR_RBR_Msk                      (0xffUL)                  /*!< UART RBR: RBR (Bitfield-Mask: 0xff)                         */

/* ----------------------------------  UART_THR  ---------------------------------- */
#define UART_THR_THR_Pos                      (0UL)                     /*!< UART THR: THR (Bit 0)                                       */
#define UART_THR_THR_Msk                      (0xffUL)                  /*!< UART THR: THR (Bitfield-Mask: 0xff)                         */

/* ----------------------------------  UART_IER  ---------------------------------- */
#define UART_IER_DRIE_Pos                     (0UL)                     /*!< UART IER: DRIE (Bit 0)                                      */
#define UART_IER_DRIE_Msk                     (0x1UL)                   /*!< UART IER: DRIE (Bitfield-Mask: 0x01)                        */
#define UART_IER_THREIE_Pos                   (1UL)                     /*!< UART IER: THREIE (Bit 1)                                    */
#define UART_IER_THREIE_Msk                   (0x2UL)                   /*!< UART IER: THREIE (Bitfield-Mask: 0x01)                      */
#define UART_IER_RLSIE_Pos                    (2UL)                     /*!< UART IER: RLSIE (Bit 2)                                     */
#define UART_IER_RLSIE_Msk                    (0x4UL)                   /*!< UART IER: RLSIE (Bitfield-Mask: 0x01)                       */
#define UART_IER_TXEIE_Pos                    (3UL)                     /*!< UART IER: TXEIE (Bit 3)                                     */
#define UART_IER_TXEIE_Msk                    (0x8UL)                   /*!< UART IER: TXEIE (Bitfield-Mask: 0x01)                       */
#define UART_IER_DRXIEN_Pos                   (4UL)                     /*!< UART IER: DRXIEN (Bit 4)                                    */
#define UART_IER_DRXIEN_Msk                   (0x10UL)                  /*!< UART IER: DRXIEN (Bitfield-Mask: 0x01)                      */
#define UART_IER_DTXIEN_Pos                   (5UL)                     /*!< UART IER: DTXIEN (Bit 5)                                    */
#define UART_IER_DTXIEN_Msk                   (0x20UL)                  /*!< UART IER: DTXIEN (Bitfield-Mask: 0x01)                      */
#define UART_IER_KEY_Pos                      (12UL)                    /*!< UART IER: KEY (Bit 12)                                      */
#define UART_IER_KEY_Msk                      (0x7000UL)                /*!< UART IER: KEY (Bitfield-Mask: 0x07)                         */
#define UART_IER_MODE_Pos                     (15UL)                    /*!< UART IER: MODE (Bit 15)                                     */
#define UART_IER_MODE_Msk                     (0x8000UL)                /*!< UART IER: MODE (Bitfield-Mask: 0x01)                        */

/* ----------------------------------  UART_IIR  ---------------------------------- */
#define UART_IIR_IPEN_Pos                     (0UL)                     /*!< UART IIR: IPEN (Bit 0)                                      */
#define UART_IIR_IPEN_Msk                     (0x1UL)                   /*!< UART IIR: IPEN (Bitfield-Mask: 0x01)                        */
#define UART_IIR_IID_Pos                      (1UL)                     /*!< UART IIR: IID (Bit 1)                                       */
#define UART_IIR_IID_Msk                      (0xeUL)                   /*!< UART IIR: IID (Bitfield-Mask: 0x07)                         */
#define UART_IIR_TXE_Pos                      (4UL)                     /*!< UART IIR: TXE (Bit 4)                                       */
#define UART_IIR_TXE_Msk                      (0x10UL)                  /*!< UART IIR: TXE (Bitfield-Mask: 0x01)                         */

/* ----------------------------------  UART_LCR  ---------------------------------- */
#define UART_LCR_DLEN_Pos                     (0UL)                     /*!< UART LCR: DLEN (Bit 0)                                      */
#define UART_LCR_DLEN_Msk                     (0x3UL)                   /*!< UART LCR: DLEN (Bitfield-Mask: 0x03)                        */
#define UART_LCR_STOPBIT_Pos                  (2UL)                     /*!< UART LCR: STOPBIT (Bit 2)                                   */
#define UART_LCR_STOPBIT_Msk                  (0x4UL)                   /*!< UART LCR: STOPBIT (Bitfield-Mask: 0x01)                     */
#define UART_LCR_PEN_Pos                      (3UL)                     /*!< UART LCR: PEN (Bit 3)                                       */
#define UART_LCR_PEN_Msk                      (0x8UL)                   /*!< UART LCR: PEN (Bitfield-Mask: 0x01)                         */
#define UART_LCR_PARITY_Pos                   (4UL)                     /*!< UART LCR: PARITY (Bit 4)                                    */
#define UART_LCR_PARITY_Msk                   (0x10UL)                  /*!< UART LCR: PARITY (Bitfield-Mask: 0x01)                      */
#define UART_LCR_STICKP_Pos                   (5UL)                     /*!< UART LCR: STICKP (Bit 5)                                    */
#define UART_LCR_STICKP_Msk                   (0x20UL)                  /*!< UART LCR: STICKP (Bitfield-Mask: 0x01)                      */
#define UART_LCR_BREAK_Pos                    (6UL)                     /*!< UART LCR: BREAK (Bit 6)                                     */
#define UART_LCR_BREAK_Msk                    (0x40UL)                  /*!< UART LCR: BREAK (Bitfield-Mask: 0x01)                       */

/* ----------------------------------  UART_DCR  ---------------------------------- */
#define UART_DCR_TXINV_Pos                    (2UL)                     /*!< UART DCR: TXINV (Bit 2)                                     */
#define UART_DCR_TXINV_Msk                    (0x4UL)                   /*!< UART DCR: TXINV (Bitfield-Mask: 0x01)                       */
#define UART_DCR_RXINV_Pos                    (3UL)                     /*!< UART DCR: RXINV (Bit 3)                                     */
#define UART_DCR_RXINV_Msk                    (0x8UL)                   /*!< UART DCR: RXINV (Bitfield-Mask: 0x01)                       */

/* ----------------------------------  UART_ELSR  --------------------------------- */
#define UART_ELSR_DR_Pos                      (0UL)                     /*!< UART ELSR: DR (Bit 0)                                       */
#define UART_ELSR_DR_Msk                      (0x1UL)                   /*!< UART ELSR: DR (Bitfield-Mask: 0x01)                         */
#define UART_ELSR_OEIF_Pos                    (1UL)                     /*!< UART ELSR: OEIF (Bit 1)                                     */
#define UART_ELSR_OEIF_Msk                    (0x2UL)                   /*!< UART ELSR: OEIF (Bitfield-Mask: 0x01)                       */
#define UART_ELSR_PEIF_Pos                    (2UL)                     /*!< UART ELSR: PEIF (Bit 2)                                     */
#define UART_ELSR_PEIF_Msk                    (0x4UL)                   /*!< UART ELSR: PEIF (Bitfield-Mask: 0x01)                       */
#define UART_ELSR_FEIF_Pos                    (3UL)                     /*!< UART ELSR: FEIF (Bit 3)                                     */
#define UART_ELSR_FEIF_Msk                    (0x8UL)                   /*!< UART ELSR: FEIF (Bitfield-Mask: 0x01)                       */
#define UART_ELSR_BIIF_Pos                    (4UL)                     /*!< UART ELSR: BIIF (Bit 4)                                     */
#define UART_ELSR_BIIF_Msk                    (0x10UL)                  /*!< UART ELSR: BIIF (Bitfield-Mask: 0x01)                       */
#define UART_ELSR_THRE_Pos                    (5UL)                     /*!< UART ELSR: THRE (Bit 5)                                     */
#define UART_ELSR_THRE_Msk                    (0x20UL)                  /*!< UART ELSR: THRE (Bitfield-Mask: 0x01)                       */
#define UART_ELSR_TEMT_Pos                    (6UL)                     /*!< UART ELSR: TEMT (Bit 6)                                     */
#define UART_ELSR_TEMT_Msk                    (0x40UL)                  /*!< UART ELSR: TEMT (Bitfield-Mask: 0x01)                       */
#define UART_ELSR_THREIF_Pos                  (7UL)                     /*!< UART ELSR: THREIF (Bit 7)                                   */
#define UART_ELSR_THREIF_Msk                  (0x80UL)                  /*!< UART ELSR: THREIF (Bitfield-Mask: 0x01)                     */
#define UART_ELSR_TEMTIF_Pos                  (8UL)                     /*!< UART ELSR: TEMTIF (Bit 8)                                   */
#define UART_ELSR_TEMTIF_Msk                  (0x100UL)                 /*!< UART ELSR: TEMTIF (Bitfield-Mask: 0x01)                     */
#define UART_ELSR_DRXBUSY_Pos                 (9UL)                     /*!< UART ELSR: DRXBUSY (Bit 9)                                  */
#define UART_ELSR_DRXBUSY_Msk                 (0x200UL)                 /*!< UART ELSR: DRXBUSY (Bitfield-Mask: 0x01)                    */
#define UART_ELSR_DTXBUSY_Pos                 (10UL)                    /*!< UART ELSR: DTXBUSY (Bit 10)                                 */
#define UART_ELSR_DTXBUSY_Msk                 (0x400UL)                 /*!< UART ELSR: DTXBUSY (Bitfield-Mask: 0x01)                    */
#define UART_ELSR_DRXIF_Pos                   (11UL)                    /*!< UART ELSR: DRXIF (Bit 11)                                   */
#define UART_ELSR_DRXIF_Msk                   (0x800UL)                 /*!< UART ELSR: DRXIF (Bitfield-Mask: 0x01)                      */
#define UART_ELSR_DTXIF_Pos                   (12UL)                    /*!< UART ELSR: DTXIF (Bit 12)                                   */
#define UART_ELSR_DTXIF_Msk                   (0x1000UL)                /*!< UART ELSR: DTXIF (Bitfield-Mask: 0x01)                      */

/* ----------------------------------  UART_BDR  ---------------------------------- */
#define UART_BDR_BDR_Pos                      (0UL)                     /*!< UART BDR: BDR (Bit 0)                                       */
#define UART_BDR_BDR_Msk                      (0xffffUL)                /*!< UART BDR: BDR (Bitfield-Mask: 0xffff)                       */

/* ----------------------------------  UART_BFR  ---------------------------------- */
#define UART_BFR_BFR_Pos                      (0UL)                     /*!< UART BFR: BFR (Bit 0)                                       */
#define UART_BFR_BFR_Msk                      (0xffUL)                  /*!< UART BFR: BFR (Bitfield-Mask: 0xff)                         */

/* ----------------------------------  UART_IDTR  --------------------------------- */
#define UART_IDTR_WAITVAL_Pos                 (0UL)                     /*!< UART IDTR: WAITVAL (Bit 0)                                  */
#define UART_IDTR_WAITVAL_Msk                 (0x7UL)                   /*!< UART IDTR: WAITVAL (Bitfield-Mask: 0x07)                    */
#define UART_IDTR_DMS_Pos                     (6UL)                     /*!< UART IDTR: DMS (Bit 6)                                      */
#define UART_IDTR_DMS_Msk                     (0x40UL)                  /*!< UART IDTR: DMS (Bitfield-Mask: 0x01)                        */
#define UART_IDTR_SMS_Pos                     (7UL)                     /*!< UART IDTR: SMS (Bit 7)                                      */
#define UART_IDTR_SMS_Msk                     (0x80UL)                  /*!< UART IDTR: SMS (Bitfield-Mask: 0x01)                        */


/* ================================================================================ */
/* ================         struct 'UART0' Position & Mask         ================ */
/* ================================================================================ */


/* ----------------------------------  UART0_RBR  --------------------------------- */
#define UART0_RBR_RBR_Pos                     (0UL)                     /*!< UART0 RBR: RBR (Bit 0)                                      */
#define UART0_RBR_RBR_Msk                     (0xffUL)                  /*!< UART0 RBR: RBR (Bitfield-Mask: 0xff)                        */

/* ----------------------------------  UART0_THR  --------------------------------- */
#define UART0_THR_THR_Pos                     (0UL)                     /*!< UART0 THR: THR (Bit 0)                                      */
#define UART0_THR_THR_Msk                     (0xffUL)                  /*!< UART0 THR: THR (Bitfield-Mask: 0xff)                        */

/* ----------------------------------  UART0_IER  --------------------------------- */
#define UART0_IER_DRIE_Pos                    (0UL)                     /*!< UART0 IER: DRIE (Bit 0)                                     */
#define UART0_IER_DRIE_Msk                    (0x1UL)                   /*!< UART0 IER: DRIE (Bitfield-Mask: 0x01)                       */
#define UART0_IER_THREIE_Pos                  (1UL)                     /*!< UART0 IER: THREIE (Bit 1)                                   */
#define UART0_IER_THREIE_Msk                  (0x2UL)                   /*!< UART0 IER: THREIE (Bitfield-Mask: 0x01)                     */
#define UART0_IER_RLSIE_Pos                   (2UL)                     /*!< UART0 IER: RLSIE (Bit 2)                                    */
#define UART0_IER_RLSIE_Msk                   (0x4UL)                   /*!< UART0 IER: RLSIE (Bitfield-Mask: 0x01)                      */
#define UART0_IER_TXEIE_Pos                   (3UL)                     /*!< UART0 IER: TXEIE (Bit 3)                                    */
#define UART0_IER_TXEIE_Msk                   (0x8UL)                   /*!< UART0 IER: TXEIE (Bitfield-Mask: 0x01)                      */
#define UART0_IER_DRXIEN_Pos                  (4UL)                     /*!< UART0 IER: DRXIEN (Bit 4)                                   */
#define UART0_IER_DRXIEN_Msk                  (0x10UL)                  /*!< UART0 IER: DRXIEN (Bitfield-Mask: 0x01)                     */
#define UART0_IER_DTXIEN_Pos                  (5UL)                     /*!< UART0 IER: DTXIEN (Bit 5)                                   */
#define UART0_IER_DTXIEN_Msk                  (0x20UL)                  /*!< UART0 IER: DTXIEN (Bitfield-Mask: 0x01)                     */
#define UART0_IER_KEY_Pos                     (12UL)                    /*!< UART0 IER: KEY (Bit 12)                                     */
#define UART0_IER_KEY_Msk                     (0x7000UL)                /*!< UART0 IER: KEY (Bitfield-Mask: 0x07)                        */
#define UART0_IER_MODE_Pos                    (15UL)                    /*!< UART0 IER: MODE (Bit 15)                                    */
#define UART0_IER_MODE_Msk                    (0x8000UL)                /*!< UART0 IER: MODE (Bitfield-Mask: 0x01)                       */

/* ----------------------------------  UART0_IIR  --------------------------------- */
#define UART0_IIR_IPEN_Pos                    (0UL)                     /*!< UART0 IIR: IPEN (Bit 0)                                     */
#define UART0_IIR_IPEN_Msk                    (0x1UL)                   /*!< UART0 IIR: IPEN (Bitfield-Mask: 0x01)                       */
#define UART0_IIR_IID_Pos                     (1UL)                     /*!< UART0 IIR: IID (Bit 1)                                      */
#define UART0_IIR_IID_Msk                     (0xeUL)                   /*!< UART0 IIR: IID (Bitfield-Mask: 0x07)                        */
#define UART0_IIR_TXE_Pos                     (4UL)                     /*!< UART0 IIR: TXE (Bit 4)                                      */
#define UART0_IIR_TXE_Msk                     (0x10UL)                  /*!< UART0 IIR: TXE (Bitfield-Mask: 0x01)                        */

/* ----------------------------------  UART0_LCR  --------------------------------- */
#define UART0_LCR_DLEN_Pos                    (0UL)                     /*!< UART0 LCR: DLEN (Bit 0)                                     */
#define UART0_LCR_DLEN_Msk                    (0x3UL)                   /*!< UART0 LCR: DLEN (Bitfield-Mask: 0x03)                       */
#define UART0_LCR_STOPBIT_Pos                 (2UL)                     /*!< UART0 LCR: STOPBIT (Bit 2)                                  */
#define UART0_LCR_STOPBIT_Msk                 (0x4UL)                   /*!< UART0 LCR: STOPBIT (Bitfield-Mask: 0x01)                    */
#define UART0_LCR_PEN_Pos                     (3UL)                     /*!< UART0 LCR: PEN (Bit 3)                                      */
#define UART0_LCR_PEN_Msk                     (0x8UL)                   /*!< UART0 LCR: PEN (Bitfield-Mask: 0x01)                        */
#define UART0_LCR_PARITY_Pos                  (4UL)                     /*!< UART0 LCR: PARITY (Bit 4)                                   */
#define UART0_LCR_PARITY_Msk                  (0x10UL)                  /*!< UART0 LCR: PARITY (Bitfield-Mask: 0x01)                     */
#define UART0_LCR_STICKP_Pos                  (5UL)                     /*!< UART0 LCR: STICKP (Bit 5)                                   */
#define UART0_LCR_STICKP_Msk                  (0x20UL)                  /*!< UART0 LCR: STICKP (Bitfield-Mask: 0x01)                     */
#define UART0_LCR_BREAK_Pos                   (6UL)                     /*!< UART0 LCR: BREAK (Bit 6)                                    */
#define UART0_LCR_BREAK_Msk                   (0x40UL)                  /*!< UART0 LCR: BREAK (Bitfield-Mask: 0x01)                      */

/* ----------------------------------  UART0_DCR  --------------------------------- */
#define UART0_DCR_TXINV_Pos                   (2UL)                     /*!< UART0 DCR: TXINV (Bit 2)                                    */
#define UART0_DCR_TXINV_Msk                   (0x4UL)                   /*!< UART0 DCR: TXINV (Bitfield-Mask: 0x01)                      */
#define UART0_DCR_RXINV_Pos                   (3UL)                     /*!< UART0 DCR: RXINV (Bit 3)                                    */
#define UART0_DCR_RXINV_Msk                   (0x8UL)                   /*!< UART0 DCR: RXINV (Bitfield-Mask: 0x01)                      */

/* ---------------------------------  UART0_ELSR  --------------------------------- */
#define UART0_ELSR_DR_Pos                     (0UL)                     /*!< UART0 ELSR: DR (Bit 0)                                      */
#define UART0_ELSR_DR_Msk                     (0x1UL)                   /*!< UART0 ELSR: DR (Bitfield-Mask: 0x01)                        */
#define UART0_ELSR_OEIF_Pos                   (1UL)                     /*!< UART0 ELSR: OEIF (Bit 1)                                    */
#define UART0_ELSR_OEIF_Msk                   (0x2UL)                   /*!< UART0 ELSR: OEIF (Bitfield-Mask: 0x01)                      */
#define UART0_ELSR_PEIF_Pos                   (2UL)                     /*!< UART0 ELSR: PEIF (Bit 2)                                    */
#define UART0_ELSR_PEIF_Msk                   (0x4UL)                   /*!< UART0 ELSR: PEIF (Bitfield-Mask: 0x01)                      */
#define UART0_ELSR_FEIF_Pos                   (3UL)                     /*!< UART0 ELSR: FEIF (Bit 3)                                    */
#define UART0_ELSR_FEIF_Msk                   (0x8UL)                   /*!< UART0 ELSR: FEIF (Bitfield-Mask: 0x01)                      */
#define UART0_ELSR_BIIF_Pos                   (4UL)                     /*!< UART0 ELSR: BIIF (Bit 4)                                    */
#define UART0_ELSR_BIIF_Msk                   (0x10UL)                  /*!< UART0 ELSR: BIIF (Bitfield-Mask: 0x01)                      */
#define UART0_ELSR_THRE_Pos                   (5UL)                     /*!< UART0 ELSR: THRE (Bit 5)                                    */
#define UART0_ELSR_THRE_Msk                   (0x20UL)                  /*!< UART0 ELSR: THRE (Bitfield-Mask: 0x01)                      */
#define UART0_ELSR_TEMT_Pos                   (6UL)                     /*!< UART0 ELSR: TEMT (Bit 6)                                    */
#define UART0_ELSR_TEMT_Msk                   (0x40UL)                  /*!< UART0 ELSR: TEMT (Bitfield-Mask: 0x01)                      */
#define UART0_ELSR_THREIF_Pos                 (7UL)                     /*!< UART0 ELSR: THREIF (Bit 7)                                  */
#define UART0_ELSR_THREIF_Msk                 (0x80UL)                  /*!< UART0 ELSR: THREIF (Bitfield-Mask: 0x01)                    */
#define UART0_ELSR_TEMTIF_Pos                 (8UL)                     /*!< UART0 ELSR: TEMTIF (Bit 8)                                  */
#define UART0_ELSR_TEMTIF_Msk                 (0x100UL)                 /*!< UART0 ELSR: TEMTIF (Bitfield-Mask: 0x01)                    */
#define UART0_ELSR_DRXBUSY_Pos                (9UL)                     /*!< UART0 ELSR: DRXBUSY (Bit 9)                                 */
#define UART0_ELSR_DRXBUSY_Msk                (0x200UL)                 /*!< UART0 ELSR: DRXBUSY (Bitfield-Mask: 0x01)                   */
#define UART0_ELSR_DTXBUSY_Pos                (10UL)                    /*!< UART0 ELSR: DTXBUSY (Bit 10)                                */
#define UART0_ELSR_DTXBUSY_Msk                (0x400UL)                 /*!< UART0 ELSR: DTXBUSY (Bitfield-Mask: 0x01)                   */
#define UART0_ELSR_DRXIF_Pos                  (11UL)                    /*!< UART0 ELSR: DRXIF (Bit 11)                                  */
#define UART0_ELSR_DRXIF_Msk                  (0x800UL)                 /*!< UART0 ELSR: DRXIF (Bitfield-Mask: 0x01)                     */
#define UART0_ELSR_DTXIF_Pos                  (12UL)                    /*!< UART0 ELSR: DTXIF (Bit 12)                                  */
#define UART0_ELSR_DTXIF_Msk                  (0x1000UL)                /*!< UART0 ELSR: DTXIF (Bitfield-Mask: 0x01)                     */

/* ----------------------------------  UART0_BDR  --------------------------------- */
#define UART0_BDR_BDR_Pos                     (0UL)                     /*!< UART0 BDR: BDR (Bit 0)                                      */
#define UART0_BDR_BDR_Msk                     (0xffffUL)                /*!< UART0 BDR: BDR (Bitfield-Mask: 0xffff)                      */

/* ----------------------------------  UART0_BFR  --------------------------------- */
#define UART0_BFR_BFR_Pos                     (0UL)                     /*!< UART0 BFR: BFR (Bit 0)                                      */
#define UART0_BFR_BFR_Msk                     (0xffUL)                  /*!< UART0 BFR: BFR (Bitfield-Mask: 0xff)                        */

/* ---------------------------------  UART0_IDTR  --------------------------------- */
#define UART0_IDTR_WAITVAL_Pos                (0UL)                     /*!< UART0 IDTR: WAITVAL (Bit 0)                                 */
#define UART0_IDTR_WAITVAL_Msk                (0x7UL)                   /*!< UART0 IDTR: WAITVAL (Bitfield-Mask: 0x07)                   */
#define UART0_IDTR_DMS_Pos                    (6UL)                     /*!< UART0 IDTR: DMS (Bit 6)                                     */
#define UART0_IDTR_DMS_Msk                    (0x40UL)                  /*!< UART0 IDTR: DMS (Bitfield-Mask: 0x01)                       */
#define UART0_IDTR_SMS_Pos                    (7UL)                     /*!< UART0 IDTR: SMS (Bit 7)                                     */
#define UART0_IDTR_SMS_Msk                    (0x80UL)                  /*!< UART0 IDTR: SMS (Bitfield-Mask: 0x01)                       */


/* ================================================================================ */
/* ================         struct 'UART1' Position & Mask         ================ */
/* ================================================================================ */


/* ----------------------------------  UART1_THR  --------------------------------- */
#define UART1_THR_THR_Pos                     (0UL)                     /*!< UART1 THR: THR (Bit 0)                                      */
#define UART1_THR_THR_Msk                     (0xffUL)                  /*!< UART1 THR: THR (Bitfield-Mask: 0xff)                        */

/* ----------------------------------  UART1_RBR  --------------------------------- */
#define UART1_RBR_RBR_Pos                     (0UL)                     /*!< UART1 RBR: RBR (Bit 0)                                      */
#define UART1_RBR_RBR_Msk                     (0xffUL)                  /*!< UART1 RBR: RBR (Bitfield-Mask: 0xff)                        */

/* ----------------------------------  UART1_IER  --------------------------------- */
#define UART1_IER_DRIE_Pos                    (0UL)                     /*!< UART1 IER: DRIE (Bit 0)                                     */
#define UART1_IER_DRIE_Msk                    (0x1UL)                   /*!< UART1 IER: DRIE (Bitfield-Mask: 0x01)                       */
#define UART1_IER_THREIE_Pos                  (1UL)                     /*!< UART1 IER: THREIE (Bit 1)                                   */
#define UART1_IER_THREIE_Msk                  (0x2UL)                   /*!< UART1 IER: THREIE (Bitfield-Mask: 0x01)                     */
#define UART1_IER_RLSIE_Pos                   (2UL)                     /*!< UART1 IER: RLSIE (Bit 2)                                    */
#define UART1_IER_RLSIE_Msk                   (0x4UL)                   /*!< UART1 IER: RLSIE (Bitfield-Mask: 0x01)                      */
#define UART1_IER_TXEIE_Pos                   (3UL)                     /*!< UART1 IER: TXEIE (Bit 3)                                    */
#define UART1_IER_TXEIE_Msk                   (0x8UL)                   /*!< UART1 IER: TXEIE (Bitfield-Mask: 0x01)                      */
#define UART1_IER_DRXIEN_Pos                  (4UL)                     /*!< UART1 IER: DRXIEN (Bit 4)                                   */
#define UART1_IER_DRXIEN_Msk                  (0x10UL)                  /*!< UART1 IER: DRXIEN (Bitfield-Mask: 0x01)                     */
#define UART1_IER_DTXIEN_Pos                  (5UL)                     /*!< UART1 IER: DTXIEN (Bit 5)                                   */
#define UART1_IER_DTXIEN_Msk                  (0x20UL)                  /*!< UART1 IER: DTXIEN (Bitfield-Mask: 0x01)                     */
#define UART1_IER_KEY_Pos                     (12UL)                    /*!< UART1 IER: KEY (Bit 12)                                     */
#define UART1_IER_KEY_Msk                     (0x7000UL)                /*!< UART1 IER: KEY (Bitfield-Mask: 0x07)                        */
#define UART1_IER_MODE_Pos                    (15UL)                    /*!< UART1 IER: MODE (Bit 15)                                    */
#define UART1_IER_MODE_Msk                    (0x8000UL)                /*!< UART1 IER: MODE (Bitfield-Mask: 0x01)                       */

/* ----------------------------------  UART1_IIR  --------------------------------- */
#define UART1_IIR_IPEN_Pos                    (0UL)                     /*!< UART1 IIR: IPEN (Bit 0)                                     */
#define UART1_IIR_IPEN_Msk                    (0x1UL)                   /*!< UART1 IIR: IPEN (Bitfield-Mask: 0x01)                       */
#define UART1_IIR_IID_Pos                     (1UL)                     /*!< UART1 IIR: IID (Bit 1)                                      */
#define UART1_IIR_IID_Msk                     (0xeUL)                   /*!< UART1 IIR: IID (Bitfield-Mask: 0x07)                        */
#define UART1_IIR_TXE_Pos                     (4UL)                     /*!< UART1 IIR: TXE (Bit 4)                                      */
#define UART1_IIR_TXE_Msk                     (0x10UL)                  /*!< UART1 IIR: TXE (Bitfield-Mask: 0x01)                        */

/* ----------------------------------  UART1_LCR  --------------------------------- */
#define UART1_LCR_DLEN_Pos                    (0UL)                     /*!< UART1 LCR: DLEN (Bit 0)                                     */
#define UART1_LCR_DLEN_Msk                    (0x3UL)                   /*!< UART1 LCR: DLEN (Bitfield-Mask: 0x03)                       */
#define UART1_LCR_STOPBIT_Pos                 (2UL)                     /*!< UART1 LCR: STOPBIT (Bit 2)                                  */
#define UART1_LCR_STOPBIT_Msk                 (0x4UL)                   /*!< UART1 LCR: STOPBIT (Bitfield-Mask: 0x01)                    */
#define UART1_LCR_PEN_Pos                     (3UL)                     /*!< UART1 LCR: PEN (Bit 3)                                      */
#define UART1_LCR_PEN_Msk                     (0x8UL)                   /*!< UART1 LCR: PEN (Bitfield-Mask: 0x01)                        */
#define UART1_LCR_PARITY_Pos                  (4UL)                     /*!< UART1 LCR: PARITY (Bit 4)                                   */
#define UART1_LCR_PARITY_Msk                  (0x10UL)                  /*!< UART1 LCR: PARITY (Bitfield-Mask: 0x01)                     */
#define UART1_LCR_STICKP_Pos                  (5UL)                     /*!< UART1 LCR: STICKP (Bit 5)                                   */
#define UART1_LCR_STICKP_Msk                  (0x20UL)                  /*!< UART1 LCR: STICKP (Bitfield-Mask: 0x01)                     */
#define UART1_LCR_BREAK_Pos                   (6UL)                     /*!< UART1 LCR: BREAK (Bit 6)                                    */
#define UART1_LCR_BREAK_Msk                   (0x40UL)                  /*!< UART1 LCR: BREAK (Bitfield-Mask: 0x01)                      */

/* ----------------------------------  UART1_DCR  --------------------------------- */
#define UART1_DCR_TXINV_Pos                   (2UL)                     /*!< UART1 DCR: TXINV (Bit 2)                                    */
#define UART1_DCR_TXINV_Msk                   (0x4UL)                   /*!< UART1 DCR: TXINV (Bitfield-Mask: 0x01)                      */
#define UART1_DCR_RXINV_Pos                   (3UL)                     /*!< UART1 DCR: RXINV (Bit 3)                                    */
#define UART1_DCR_RXINV_Msk                   (0x8UL)                   /*!< UART1 DCR: RXINV (Bitfield-Mask: 0x01)                      */

/* ---------------------------------  UART1_ELSR  --------------------------------- */
#define UART1_ELSR_DR_Pos                     (0UL)                     /*!< UART1 ELSR: DR (Bit 0)                                      */
#define UART1_ELSR_DR_Msk                     (0x1UL)                   /*!< UART1 ELSR: DR (Bitfield-Mask: 0x01)                        */
#define UART1_ELSR_OEIF_Pos                   (1UL)                     /*!< UART1 ELSR: OEIF (Bit 1)                                    */
#define UART1_ELSR_OEIF_Msk                   (0x2UL)                   /*!< UART1 ELSR: OEIF (Bitfield-Mask: 0x01)                      */
#define UART1_ELSR_PEIF_Pos                   (2UL)                     /*!< UART1 ELSR: PEIF (Bit 2)                                    */
#define UART1_ELSR_PEIF_Msk                   (0x4UL)                   /*!< UART1 ELSR: PEIF (Bitfield-Mask: 0x01)                      */
#define UART1_ELSR_FEIF_Pos                   (3UL)                     /*!< UART1 ELSR: FEIF (Bit 3)                                    */
#define UART1_ELSR_FEIF_Msk                   (0x8UL)                   /*!< UART1 ELSR: FEIF (Bitfield-Mask: 0x01)                      */
#define UART1_ELSR_BIIF_Pos                   (4UL)                     /*!< UART1 ELSR: BIIF (Bit 4)                                    */
#define UART1_ELSR_BIIF_Msk                   (0x10UL)                  /*!< UART1 ELSR: BIIF (Bitfield-Mask: 0x01)                      */
#define UART1_ELSR_THRE_Pos                   (5UL)                     /*!< UART1 ELSR: THRE (Bit 5)                                    */
#define UART1_ELSR_THRE_Msk                   (0x20UL)                  /*!< UART1 ELSR: THRE (Bitfield-Mask: 0x01)                      */
#define UART1_ELSR_TEMT_Pos                   (6UL)                     /*!< UART1 ELSR: TEMT (Bit 6)                                    */
#define UART1_ELSR_TEMT_Msk                   (0x40UL)                  /*!< UART1 ELSR: TEMT (Bitfield-Mask: 0x01)                      */
#define UART1_ELSR_THREIF_Pos                 (7UL)                     /*!< UART1 ELSR: THREIF (Bit 7)                                  */
#define UART1_ELSR_THREIF_Msk                 (0x80UL)                  /*!< UART1 ELSR: THREIF (Bitfield-Mask: 0x01)                    */
#define UART1_ELSR_TEMTIF_Pos                 (8UL)                     /*!< UART1 ELSR: TEMTIF (Bit 8)                                  */
#define UART1_ELSR_TEMTIF_Msk                 (0x100UL)                 /*!< UART1 ELSR: TEMTIF (Bitfield-Mask: 0x01)                    */
#define UART1_ELSR_DRXBUSY_Pos                (9UL)                     /*!< UART1 ELSR: DRXBUSY (Bit 9)                                 */
#define UART1_ELSR_DRXBUSY_Msk                (0x200UL)                 /*!< UART1 ELSR: DRXBUSY (Bitfield-Mask: 0x01)                   */
#define UART1_ELSR_DTXBUSY_Pos                (10UL)                    /*!< UART1 ELSR: DTXBUSY (Bit 10)                                */
#define UART1_ELSR_DTXBUSY_Msk                (0x400UL)                 /*!< UART1 ELSR: DTXBUSY (Bitfield-Mask: 0x01)                   */
#define UART1_ELSR_DRXIF_Pos                  (11UL)                    /*!< UART1 ELSR: DRXIF (Bit 11)                                  */
#define UART1_ELSR_DRXIF_Msk                  (0x800UL)                 /*!< UART1 ELSR: DRXIF (Bitfield-Mask: 0x01)                     */
#define UART1_ELSR_DTXIF_Pos                  (12UL)                    /*!< UART1 ELSR: DTXIF (Bit 12)                                  */
#define UART1_ELSR_DTXIF_Msk                  (0x1000UL)                /*!< UART1 ELSR: DTXIF (Bitfield-Mask: 0x01)                     */

/* ----------------------------------  UART1_BDR  --------------------------------- */
#define UART1_BDR_BDR_Pos                     (0UL)                     /*!< UART1 BDR: BDR (Bit 0)                                      */
#define UART1_BDR_BDR_Msk                     (0xffffUL)                /*!< UART1 BDR: BDR (Bitfield-Mask: 0xffff)                      */

/* ----------------------------------  UART1_BFR  --------------------------------- */
#define UART1_BFR_BFR_Pos                     (0UL)                     /*!< UART1 BFR: BFR (Bit 0)                                      */
#define UART1_BFR_BFR_Msk                     (0xffUL)                  /*!< UART1 BFR: BFR (Bitfield-Mask: 0xff)                        */

/* ---------------------------------  UART1_IDTR  --------------------------------- */
#define UART1_IDTR_WAITVAL_Pos                (0UL)                     /*!< UART1 IDTR: WAITVAL (Bit 0)                                 */
#define UART1_IDTR_WAITVAL_Msk                (0x7UL)                   /*!< UART1 IDTR: WAITVAL (Bitfield-Mask: 0x07)                   */
#define UART1_IDTR_DMS_Pos                    (6UL)                     /*!< UART1 IDTR: DMS (Bit 6)                                     */
#define UART1_IDTR_DMS_Msk                    (0x40UL)                  /*!< UART1 IDTR: DMS (Bitfield-Mask: 0x01)                       */
#define UART1_IDTR_SMS_Pos                    (7UL)                     /*!< UART1 IDTR: SMS (Bit 7)                                     */
#define UART1_IDTR_SMS_Msk                    (0x80UL)                  /*!< UART1 IDTR: SMS (Bitfield-Mask: 0x01)                       */


/* ================================================================================ */
/* ================           Group 'I2C' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  I2C_DR  ----------------------------------- */
#define I2C_DR_ICDR_Pos                       (0UL)                     /*!< I2C DR: ICDR (Bit 0)                                        */
#define I2C_DR_ICDR_Msk                       (0xffUL)                  /*!< I2C DR: ICDR (Bitfield-Mask: 0xff)                          */

/* -----------------------------------  I2C_SR  ----------------------------------- */
#define I2C_SR_RXACK_Pos                      (0UL)                     /*!< I2C SR: RXACK (Bit 0)                                       */
#define I2C_SR_RXACK_Msk                      (0x1UL)                   /*!< I2C SR: RXACK (Bitfield-Mask: 0x01)                         */
#define I2C_SR_TMOD_Pos                       (1UL)                     /*!< I2C SR: TMOD (Bit 1)                                        */
#define I2C_SR_TMOD_Msk                       (0x2UL)                   /*!< I2C SR: TMOD (Bitfield-Mask: 0x01)                          */
#define I2C_SR_BUSY_Pos                       (2UL)                     /*!< I2C SR: BUSY (Bit 2)                                        */
#define I2C_SR_BUSY_Msk                       (0x4UL)                   /*!< I2C SR: BUSY (Bitfield-Mask: 0x01)                          */
#define I2C_SR_MLOST_Pos                      (3UL)                     /*!< I2C SR: MLOST (Bit 3)                                       */
#define I2C_SR_MLOST_Msk                      (0x8UL)                   /*!< I2C SR: MLOST (Bitfield-Mask: 0x01)                         */
#define I2C_SR_SSEL_Pos                       (4UL)                     /*!< I2C SR: SSEL (Bit 4)                                        */
#define I2C_SR_SSEL_Msk                       (0x10UL)                  /*!< I2C SR: SSEL (Bitfield-Mask: 0x01)                          */
#define I2C_SR_STOP_Pos                       (5UL)                     /*!< I2C SR: STOP (Bit 5)                                        */
#define I2C_SR_STOP_Msk                       (0x20UL)                  /*!< I2C SR: STOP (Bitfield-Mask: 0x01)                          */
#define I2C_SR_TEND_Pos                       (6UL)                     /*!< I2C SR: TEND (Bit 6)                                        */
#define I2C_SR_TEND_Msk                       (0x40UL)                  /*!< I2C SR: TEND (Bitfield-Mask: 0x01)                          */
#define I2C_SR_GCALL_Pos                      (7UL)                     /*!< I2C SR: GCALL (Bit 7)                                       */
#define I2C_SR_GCALL_Msk                      (0x80UL)                  /*!< I2C SR: GCALL (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  I2C_SAR  ---------------------------------- */
#define I2C_SAR_GCEN_Pos                      (0UL)                     /*!< I2C SAR: GCEN (Bit 0)                                       */
#define I2C_SAR_GCEN_Msk                      (0x1UL)                   /*!< I2C SAR: GCEN (Bitfield-Mask: 0x01)                         */
#define I2C_SAR_SVAD_Pos                      (1UL)                     /*!< I2C SAR: SVAD (Bit 1)                                       */
#define I2C_SAR_SVAD_Msk                      (0xfeUL)                  /*!< I2C SAR: SVAD (Bitfield-Mask: 0x7f)                         */

/* -----------------------------------  I2C_CR  ----------------------------------- */
#define I2C_CR_START_Pos                      (0UL)                     /*!< I2C CR: START (Bit 0)                                       */
#define I2C_CR_START_Msk                      (0x1UL)                   /*!< I2C CR: START (Bitfield-Mask: 0x01)                         */
#define I2C_CR_STOP_Pos                       (1UL)                     /*!< I2C CR: STOP (Bit 1)                                        */
#define I2C_CR_STOP_Msk                       (0x2UL)                   /*!< I2C CR: STOP (Bitfield-Mask: 0x01)                          */
#define I2C_CR_ACKEN_Pos                      (3UL)                     /*!< I2C CR: ACKEN (Bit 3)                                       */
#define I2C_CR_ACKEN_Msk                      (0x8UL)                   /*!< I2C CR: ACKEN (Bitfield-Mask: 0x01)                         */
#define I2C_CR_INTEN_Pos                      (4UL)                     /*!< I2C CR: INTEN (Bit 4)                                       */
#define I2C_CR_INTEN_Msk                      (0x10UL)                  /*!< I2C CR: INTEN (Bitfield-Mask: 0x01)                         */
#define I2C_CR_IIF_Pos                        (7UL)                     /*!< I2C CR: IIF (Bit 7)                                         */
#define I2C_CR_IIF_Msk                        (0x80UL)                  /*!< I2C CR: IIF (Bitfield-Mask: 0x01)                           */
#define I2C_CR_INTDEL_Pos                     (8UL)                     /*!< I2C CR: INTDEL (Bit 8)                                      */
#define I2C_CR_INTDEL_Msk                     (0x300UL)                 /*!< I2C CR: INTDEL (Bitfield-Mask: 0x03)                        */

/* ----------------------------------  I2C_SCLL  ---------------------------------- */
#define I2C_SCLL_SCLL_Pos                     (0UL)                     /*!< I2C SCLL: SCLL (Bit 0)                                      */
#define I2C_SCLL_SCLL_Msk                     (0xffffUL)                /*!< I2C SCLL: SCLL (Bitfield-Mask: 0xffff)                      */

/* ----------------------------------  I2C_SCLH  ---------------------------------- */
#define I2C_SCLH_SCLH_Pos                     (0UL)                     /*!< I2C SCLH: SCLH (Bit 0)                                      */
#define I2C_SCLH_SCLH_Msk                     (0xffffUL)                /*!< I2C SCLH: SCLH (Bitfield-Mask: 0xffff)                      */

/* -----------------------------------  I2C_SDH  ---------------------------------- */
#define I2C_SDH_SDH_Pos                       (0UL)                     /*!< I2C SDH: SDH (Bit 0)                                        */
#define I2C_SDH_SDH_Msk                       (0x7fffUL)                /*!< I2C SDH: SDH (Bitfield-Mask: 0x7fff)                        */


/* ================================================================================ */
/* ================          struct 'I2C0' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  I2C0_DR  ---------------------------------- */
#define I2C0_DR_ICDR_Pos                      (0UL)                     /*!< I2C0 DR: ICDR (Bit 0)                                       */
#define I2C0_DR_ICDR_Msk                      (0xffUL)                  /*!< I2C0 DR: ICDR (Bitfield-Mask: 0xff)                         */

/* -----------------------------------  I2C0_SR  ---------------------------------- */
#define I2C0_SR_RXACK_Pos                     (0UL)                     /*!< I2C0 SR: RXACK (Bit 0)                                      */
#define I2C0_SR_RXACK_Msk                     (0x1UL)                   /*!< I2C0 SR: RXACK (Bitfield-Mask: 0x01)                        */
#define I2C0_SR_TMOD_Pos                      (1UL)                     /*!< I2C0 SR: TMOD (Bit 1)                                       */
#define I2C0_SR_TMOD_Msk                      (0x2UL)                   /*!< I2C0 SR: TMOD (Bitfield-Mask: 0x01)                         */
#define I2C0_SR_BUSY_Pos                      (2UL)                     /*!< I2C0 SR: BUSY (Bit 2)                                       */
#define I2C0_SR_BUSY_Msk                      (0x4UL)                   /*!< I2C0 SR: BUSY (Bitfield-Mask: 0x01)                         */
#define I2C0_SR_MLOST_Pos                     (3UL)                     /*!< I2C0 SR: MLOST (Bit 3)                                      */
#define I2C0_SR_MLOST_Msk                     (0x8UL)                   /*!< I2C0 SR: MLOST (Bitfield-Mask: 0x01)                        */
#define I2C0_SR_SSEL_Pos                      (4UL)                     /*!< I2C0 SR: SSEL (Bit 4)                                       */
#define I2C0_SR_SSEL_Msk                      (0x10UL)                  /*!< I2C0 SR: SSEL (Bitfield-Mask: 0x01)                         */
#define I2C0_SR_STOP_Pos                      (5UL)                     /*!< I2C0 SR: STOP (Bit 5)                                       */
#define I2C0_SR_STOP_Msk                      (0x20UL)                  /*!< I2C0 SR: STOP (Bitfield-Mask: 0x01)                         */
#define I2C0_SR_TEND_Pos                      (6UL)                     /*!< I2C0 SR: TEND (Bit 6)                                       */
#define I2C0_SR_TEND_Msk                      (0x40UL)                  /*!< I2C0 SR: TEND (Bitfield-Mask: 0x01)                         */
#define I2C0_SR_GCALL_Pos                     (7UL)                     /*!< I2C0 SR: GCALL (Bit 7)                                      */
#define I2C0_SR_GCALL_Msk                     (0x80UL)                  /*!< I2C0 SR: GCALL (Bitfield-Mask: 0x01)                        */

/* ----------------------------------  I2C0_SAR  ---------------------------------- */
#define I2C0_SAR_GCEN_Pos                     (0UL)                     /*!< I2C0 SAR: GCEN (Bit 0)                                      */
#define I2C0_SAR_GCEN_Msk                     (0x1UL)                   /*!< I2C0 SAR: GCEN (Bitfield-Mask: 0x01)                        */
#define I2C0_SAR_SVAD_Pos                     (1UL)                     /*!< I2C0 SAR: SVAD (Bit 1)                                      */
#define I2C0_SAR_SVAD_Msk                     (0xfeUL)                  /*!< I2C0 SAR: SVAD (Bitfield-Mask: 0x7f)                        */

/* -----------------------------------  I2C0_CR  ---------------------------------- */
#define I2C0_CR_START_Pos                     (0UL)                     /*!< I2C0 CR: START (Bit 0)                                      */
#define I2C0_CR_START_Msk                     (0x1UL)                   /*!< I2C0 CR: START (Bitfield-Mask: 0x01)                        */
#define I2C0_CR_STOP_Pos                      (1UL)                     /*!< I2C0 CR: STOP (Bit 1)                                       */
#define I2C0_CR_STOP_Msk                      (0x2UL)                   /*!< I2C0 CR: STOP (Bitfield-Mask: 0x01)                         */
#define I2C0_CR_ACKEN_Pos                     (3UL)                     /*!< I2C0 CR: ACKEN (Bit 3)                                      */
#define I2C0_CR_ACKEN_Msk                     (0x8UL)                   /*!< I2C0 CR: ACKEN (Bitfield-Mask: 0x01)                        */
#define I2C0_CR_INTEN_Pos                     (4UL)                     /*!< I2C0 CR: INTEN (Bit 4)                                      */
#define I2C0_CR_INTEN_Msk                     (0x10UL)                  /*!< I2C0 CR: INTEN (Bitfield-Mask: 0x01)                        */
#define I2C0_CR_IIF_Pos                       (7UL)                     /*!< I2C0 CR: IIF (Bit 7)                                        */
#define I2C0_CR_IIF_Msk                       (0x80UL)                  /*!< I2C0 CR: IIF (Bitfield-Mask: 0x01)                          */
#define I2C0_CR_INTDEL_Pos                    (8UL)                     /*!< I2C0 CR: INTDEL (Bit 8)                                     */
#define I2C0_CR_INTDEL_Msk                    (0x300UL)                 /*!< I2C0 CR: INTDEL (Bitfield-Mask: 0x03)                       */

/* ----------------------------------  I2C0_SCLL  --------------------------------- */
#define I2C0_SCLL_SCLL_Pos                    (0UL)                     /*!< I2C0 SCLL: SCLL (Bit 0)                                     */
#define I2C0_SCLL_SCLL_Msk                    (0xffffUL)                /*!< I2C0 SCLL: SCLL (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  I2C0_SCLH  --------------------------------- */
#define I2C0_SCLH_SCLH_Pos                    (0UL)                     /*!< I2C0 SCLH: SCLH (Bit 0)                                     */
#define I2C0_SCLH_SCLH_Msk                    (0xffffUL)                /*!< I2C0 SCLH: SCLH (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  I2C0_SDH  ---------------------------------- */
#define I2C0_SDH_SDH_Pos                      (0UL)                     /*!< I2C0 SDH: SDH (Bit 0)                                       */
#define I2C0_SDH_SDH_Msk                      (0x7fffUL)                /*!< I2C0 SDH: SDH (Bitfield-Mask: 0x7fff)                       */


/* ================================================================================ */
/* ================          struct 'I2C1' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  I2C1_DR  ---------------------------------- */
#define I2C1_DR_ICDR_Pos                      (0UL)                     /*!< I2C1 DR: ICDR (Bit 0)                                       */
#define I2C1_DR_ICDR_Msk                      (0xffUL)                  /*!< I2C1 DR: ICDR (Bitfield-Mask: 0xff)                         */

/* -----------------------------------  I2C1_SR  ---------------------------------- */
#define I2C1_SR_RXACK_Pos                     (0UL)                     /*!< I2C1 SR: RXACK (Bit 0)                                      */
#define I2C1_SR_RXACK_Msk                     (0x1UL)                   /*!< I2C1 SR: RXACK (Bitfield-Mask: 0x01)                        */
#define I2C1_SR_TMOD_Pos                      (1UL)                     /*!< I2C1 SR: TMOD (Bit 1)                                       */
#define I2C1_SR_TMOD_Msk                      (0x2UL)                   /*!< I2C1 SR: TMOD (Bitfield-Mask: 0x01)                         */
#define I2C1_SR_BUSY_Pos                      (2UL)                     /*!< I2C1 SR: BUSY (Bit 2)                                       */
#define I2C1_SR_BUSY_Msk                      (0x4UL)                   /*!< I2C1 SR: BUSY (Bitfield-Mask: 0x01)                         */
#define I2C1_SR_MLOST_Pos                     (3UL)                     /*!< I2C1 SR: MLOST (Bit 3)                                      */
#define I2C1_SR_MLOST_Msk                     (0x8UL)                   /*!< I2C1 SR: MLOST (Bitfield-Mask: 0x01)                        */
#define I2C1_SR_SSEL_Pos                      (4UL)                     /*!< I2C1 SR: SSEL (Bit 4)                                       */
#define I2C1_SR_SSEL_Msk                      (0x10UL)                  /*!< I2C1 SR: SSEL (Bitfield-Mask: 0x01)                         */
#define I2C1_SR_STOP_Pos                      (5UL)                     /*!< I2C1 SR: STOP (Bit 5)                                       */
#define I2C1_SR_STOP_Msk                      (0x20UL)                  /*!< I2C1 SR: STOP (Bitfield-Mask: 0x01)                         */
#define I2C1_SR_TEND_Pos                      (6UL)                     /*!< I2C1 SR: TEND (Bit 6)                                       */
#define I2C1_SR_TEND_Msk                      (0x40UL)                  /*!< I2C1 SR: TEND (Bitfield-Mask: 0x01)                         */
#define I2C1_SR_GCALL_Pos                     (7UL)                     /*!< I2C1 SR: GCALL (Bit 7)                                      */
#define I2C1_SR_GCALL_Msk                     (0x80UL)                  /*!< I2C1 SR: GCALL (Bitfield-Mask: 0x01)                        */

/* ----------------------------------  I2C1_SAR  ---------------------------------- */
#define I2C1_SAR_GCEN_Pos                     (0UL)                     /*!< I2C1 SAR: GCEN (Bit 0)                                      */
#define I2C1_SAR_GCEN_Msk                     (0x1UL)                   /*!< I2C1 SAR: GCEN (Bitfield-Mask: 0x01)                        */
#define I2C1_SAR_SVAD_Pos                     (1UL)                     /*!< I2C1 SAR: SVAD (Bit 1)                                      */
#define I2C1_SAR_SVAD_Msk                     (0xfeUL)                  /*!< I2C1 SAR: SVAD (Bitfield-Mask: 0x7f)                        */

/* -----------------------------------  I2C1_CR  ---------------------------------- */
#define I2C1_CR_START_Pos                     (0UL)                     /*!< I2C1 CR: START (Bit 0)                                      */
#define I2C1_CR_START_Msk                     (0x1UL)                   /*!< I2C1 CR: START (Bitfield-Mask: 0x01)                        */
#define I2C1_CR_STOP_Pos                      (1UL)                     /*!< I2C1 CR: STOP (Bit 1)                                       */
#define I2C1_CR_STOP_Msk                      (0x2UL)                   /*!< I2C1 CR: STOP (Bitfield-Mask: 0x01)                         */
#define I2C1_CR_ACKEN_Pos                     (3UL)                     /*!< I2C1 CR: ACKEN (Bit 3)                                      */
#define I2C1_CR_ACKEN_Msk                     (0x8UL)                   /*!< I2C1 CR: ACKEN (Bitfield-Mask: 0x01)                        */
#define I2C1_CR_INTEN_Pos                     (4UL)                     /*!< I2C1 CR: INTEN (Bit 4)                                      */
#define I2C1_CR_INTEN_Msk                     (0x10UL)                  /*!< I2C1 CR: INTEN (Bitfield-Mask: 0x01)                        */
#define I2C1_CR_IIF_Pos                       (7UL)                     /*!< I2C1 CR: IIF (Bit 7)                                        */
#define I2C1_CR_IIF_Msk                       (0x80UL)                  /*!< I2C1 CR: IIF (Bitfield-Mask: 0x01)                          */
#define I2C1_CR_INTDEL_Pos                    (8UL)                     /*!< I2C1 CR: INTDEL (Bit 8)                                     */
#define I2C1_CR_INTDEL_Msk                    (0x300UL)                 /*!< I2C1 CR: INTDEL (Bitfield-Mask: 0x03)                       */

/* ----------------------------------  I2C1_SCLL  --------------------------------- */
#define I2C1_SCLL_SCLL_Pos                    (0UL)                     /*!< I2C1 SCLL: SCLL (Bit 0)                                     */
#define I2C1_SCLL_SCLL_Msk                    (0xffffUL)                /*!< I2C1 SCLL: SCLL (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  I2C1_SCLH  --------------------------------- */
#define I2C1_SCLH_SCLH_Pos                    (0UL)                     /*!< I2C1 SCLH: SCLH (Bit 0)                                     */
#define I2C1_SCLH_SCLH_Msk                    (0xffffUL)                /*!< I2C1 SCLH: SCLH (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  I2C1_SDH  ---------------------------------- */
#define I2C1_SDH_SDH_Pos                      (0UL)                     /*!< I2C1 SDH: SDH (Bit 0)                                       */
#define I2C1_SDH_SDH_Msk                      (0x7fffUL)                /*!< I2C1 SDH: SDH (Bitfield-Mask: 0x7fff)                       */


/* ================================================================================ */
/* ================          struct 'I2C2' Position & Mask         ================ */
/* ================================================================================ */


/* -----------------------------------  I2C2_DR  ---------------------------------- */
#define I2C2_DR_ICDR_Pos                      (0UL)                     /*!< I2C2 DR: ICDR (Bit 0)                                       */
#define I2C2_DR_ICDR_Msk                      (0xffUL)                  /*!< I2C2 DR: ICDR (Bitfield-Mask: 0xff)                         */

/* -----------------------------------  I2C2_SR  ---------------------------------- */
#define I2C2_SR_RXACK_Pos                     (0UL)                     /*!< I2C2 SR: RXACK (Bit 0)                                      */
#define I2C2_SR_RXACK_Msk                     (0x1UL)                   /*!< I2C2 SR: RXACK (Bitfield-Mask: 0x01)                        */
#define I2C2_SR_TMOD_Pos                      (1UL)                     /*!< I2C2 SR: TMOD (Bit 1)                                       */
#define I2C2_SR_TMOD_Msk                      (0x2UL)                   /*!< I2C2 SR: TMOD (Bitfield-Mask: 0x01)                         */
#define I2C2_SR_BUSY_Pos                      (2UL)                     /*!< I2C2 SR: BUSY (Bit 2)                                       */
#define I2C2_SR_BUSY_Msk                      (0x4UL)                   /*!< I2C2 SR: BUSY (Bitfield-Mask: 0x01)                         */
#define I2C2_SR_MLOST_Pos                     (3UL)                     /*!< I2C2 SR: MLOST (Bit 3)                                      */
#define I2C2_SR_MLOST_Msk                     (0x8UL)                   /*!< I2C2 SR: MLOST (Bitfield-Mask: 0x01)                        */
#define I2C2_SR_SSEL_Pos                      (4UL)                     /*!< I2C2 SR: SSEL (Bit 4)                                       */
#define I2C2_SR_SSEL_Msk                      (0x10UL)                  /*!< I2C2 SR: SSEL (Bitfield-Mask: 0x01)                         */
#define I2C2_SR_STOP_Pos                      (5UL)                     /*!< I2C2 SR: STOP (Bit 5)                                       */
#define I2C2_SR_STOP_Msk                      (0x20UL)                  /*!< I2C2 SR: STOP (Bitfield-Mask: 0x01)                         */
#define I2C2_SR_TEND_Pos                      (6UL)                     /*!< I2C2 SR: TEND (Bit 6)                                       */
#define I2C2_SR_TEND_Msk                      (0x40UL)                  /*!< I2C2 SR: TEND (Bitfield-Mask: 0x01)                         */
#define I2C2_SR_GCALL_Pos                     (7UL)                     /*!< I2C2 SR: GCALL (Bit 7)                                      */
#define I2C2_SR_GCALL_Msk                     (0x80UL)                  /*!< I2C2 SR: GCALL (Bitfield-Mask: 0x01)                        */

/* ----------------------------------  I2C2_SAR  ---------------------------------- */
#define I2C2_SAR_GCEN_Pos                     (0UL)                     /*!< I2C2 SAR: GCEN (Bit 0)                                      */
#define I2C2_SAR_GCEN_Msk                     (0x1UL)                   /*!< I2C2 SAR: GCEN (Bitfield-Mask: 0x01)                        */
#define I2C2_SAR_SVAD_Pos                     (1UL)                     /*!< I2C2 SAR: SVAD (Bit 1)                                      */
#define I2C2_SAR_SVAD_Msk                     (0xfeUL)                  /*!< I2C2 SAR: SVAD (Bitfield-Mask: 0x7f)                        */

/* -----------------------------------  I2C2_CR  ---------------------------------- */
#define I2C2_CR_START_Pos                     (0UL)                     /*!< I2C2 CR: START (Bit 0)                                      */
#define I2C2_CR_START_Msk                     (0x1UL)                   /*!< I2C2 CR: START (Bitfield-Mask: 0x01)                        */
#define I2C2_CR_STOP_Pos                      (1UL)                     /*!< I2C2 CR: STOP (Bit 1)                                       */
#define I2C2_CR_STOP_Msk                      (0x2UL)                   /*!< I2C2 CR: STOP (Bitfield-Mask: 0x01)                         */
#define I2C2_CR_ACKEN_Pos                     (3UL)                     /*!< I2C2 CR: ACKEN (Bit 3)                                      */
#define I2C2_CR_ACKEN_Msk                     (0x8UL)                   /*!< I2C2 CR: ACKEN (Bitfield-Mask: 0x01)                        */
#define I2C2_CR_INTEN_Pos                     (4UL)                     /*!< I2C2 CR: INTEN (Bit 4)                                      */
#define I2C2_CR_INTEN_Msk                     (0x10UL)                  /*!< I2C2 CR: INTEN (Bitfield-Mask: 0x01)                        */
#define I2C2_CR_IIF_Pos                       (7UL)                     /*!< I2C2 CR: IIF (Bit 7)                                        */
#define I2C2_CR_IIF_Msk                       (0x80UL)                  /*!< I2C2 CR: IIF (Bitfield-Mask: 0x01)                          */
#define I2C2_CR_INTDEL_Pos                    (8UL)                     /*!< I2C2 CR: INTDEL (Bit 8)                                     */
#define I2C2_CR_INTDEL_Msk                    (0x300UL)                 /*!< I2C2 CR: INTDEL (Bitfield-Mask: 0x03)                       */

/* ----------------------------------  I2C2_SCLL  --------------------------------- */
#define I2C2_SCLL_SCLL_Pos                    (0UL)                     /*!< I2C2 SCLL: SCLL (Bit 0)                                     */
#define I2C2_SCLL_SCLL_Msk                    (0xffffUL)                /*!< I2C2 SCLL: SCLL (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  I2C2_SCLH  --------------------------------- */
#define I2C2_SCLH_SCLH_Pos                    (0UL)                     /*!< I2C2 SCLH: SCLH (Bit 0)                                     */
#define I2C2_SCLH_SCLH_Msk                    (0xffffUL)                /*!< I2C2 SCLH: SCLH (Bitfield-Mask: 0xffff)                     */

/* ----------------------------------  I2C2_SDH  ---------------------------------- */
#define I2C2_SDH_SDH_Pos                      (0UL)                     /*!< I2C2 SDH: SDH (Bit 0)                                       */
#define I2C2_SDH_SDH_Msk                      (0x7fffUL)                /*!< I2C2 SDH: SDH (Bitfield-Mask: 0x7fff)                       */


/* ================================================================================ */
/* ================          Group 'USART' Position & Mask         ================ */
/* ================================================================================ */


/* ----------------------------------  USART_CR1  --------------------------------- */
#define USART_CR1_RXE_Pos                     (0UL)                     /*!< USART CR1: RXE (Bit 0)                                      */
#define USART_CR1_RXE_Msk                     (0x1UL)                   /*!< USART CR1: RXE (Bitfield-Mask: 0x01)                        */
#define USART_CR1_TXE_Pos                     (1UL)                     /*!< USART CR1: TXE (Bit 1)                                      */
#define USART_CR1_TXE_Msk                     (0x2UL)                   /*!< USART CR1: TXE (Bitfield-Mask: 0x01)                        */
#define USART_CR1_WAKEIE_Pos                  (2UL)                     /*!< USART CR1: WAKEIE (Bit 2)                                   */
#define USART_CR1_WAKEIE_Msk                  (0x4UL)                   /*!< USART CR1: WAKEIE (Bitfield-Mask: 0x01)                     */
#define USART_CR1_RXCIE_Pos                   (3UL)                     /*!< USART CR1: RXCIE (Bit 3)                                    */
#define USART_CR1_RXCIE_Msk                   (0x8UL)                   /*!< USART CR1: RXCIE (Bitfield-Mask: 0x01)                      */
#define USART_CR1_TXCIE_Pos                   (4UL)                     /*!< USART CR1: TXCIE (Bit 4)                                    */
#define USART_CR1_TXCIE_Msk                   (0x10UL)                  /*!< USART CR1: TXCIE (Bitfield-Mask: 0x01)                      */
#define USART_CR1_DRIE_Pos                    (5UL)                     /*!< USART CR1: DRIE (Bit 5)                                     */
#define USART_CR1_DRIE_Msk                    (0x20UL)                  /*!< USART CR1: DRIE (Bitfield-Mask: 0x01)                       */
#define USART_CR1_CPHA_Pos                    (6UL)                     /*!< USART CR1: CPHA (Bit 6)                                     */
#define USART_CR1_CPHA_Msk                    (0x40UL)                  /*!< USART CR1: CPHA (Bitfield-Mask: 0x01)                       */
#define USART_CR1_CPOL_Pos                    (7UL)                     /*!< USART CR1: CPOL (Bit 7)                                     */
#define USART_CR1_CPOL_Msk                    (0x80UL)                  /*!< USART CR1: CPOL (Bitfield-Mask: 0x01)                       */
#define USART_CR1_ORD_Pos                     (8UL)                     /*!< USART CR1: ORD (Bit 8)                                      */
#define USART_CR1_ORD_Msk                     (0x100UL)                 /*!< USART CR1: ORD (Bitfield-Mask: 0x01)                        */
#define USART_CR1_DLEN_Pos                    (9UL)                     /*!< USART CR1: DLEN (Bit 9)                                     */
#define USART_CR1_DLEN_Msk                    (0xe00UL)                 /*!< USART CR1: DLEN (Bitfield-Mask: 0x07)                       */
#define USART_CR1_PG_Pos                      (12UL)                    /*!< USART CR1: PG (Bit 12)                                      */
#define USART_CR1_PG_Msk                      (0x3000UL)                /*!< USART CR1: PG (Bitfield-Mask: 0x03)                         */
#define USART_CR1_MS_Pos                      (14UL)                    /*!< USART CR1: MS (Bit 14)                                      */
#define USART_CR1_MS_Msk                      (0xc000UL)                /*!< USART CR1: MS (Bitfield-Mask: 0x03)                         */

/* ----------------------------------  USART_CR2  --------------------------------- */
#define USART_CR2_RX8_Pos                     (0UL)                     /*!< USART CR2: RX8 (Bit 0)                                      */
#define USART_CR2_RX8_Msk                     (0x1UL)                   /*!< USART CR2: RX8 (Bitfield-Mask: 0x01)                        */
#define USART_CR2_TX8_Pos                     (1UL)                     /*!< USART CR2: TX8 (Bit 1)                                      */
#define USART_CR2_TX8_Msk                     (0x2UL)                   /*!< USART CR2: TX8 (Bitfield-Mask: 0x01)                        */
#define USART_CR2_SB_Pos                      (2UL)                     /*!< USART CR2: SB (Bit 2)                                       */
#define USART_CR2_SB_Msk                      (0x4UL)                   /*!< USART CR2: SB (Bitfield-Mask: 0x01)                         */
#define USART_CR2_FXCH_Pos                    (3UL)                     /*!< USART CR2: FXCH (Bit 3)                                     */
#define USART_CR2_FXCH_Msk                    (0x8UL)                   /*!< USART CR2: FXCH (Bitfield-Mask: 0x01)                       */
#define USART_CR2_SREN_Pos                    (4UL)                     /*!< USART CR2: SREN (Bit 4)                                     */
#define USART_CR2_SREN_Msk                    (0x10UL)                  /*!< USART CR2: SREN (Bitfield-Mask: 0x01)                       */
#define USART_CR2_DISSCK_Pos                  (5UL)                     /*!< USART CR2: DISSCK (Bit 5)                                   */
#define USART_CR2_DISSCK_Msk                  (0x20UL)                  /*!< USART CR2: DISSCK (Bitfield-Mask: 0x01)                     */
#define USART_CR2_LOOPS_Pos                   (6UL)                     /*!< USART CR2: LOOPS (Bit 6)                                    */
#define USART_CR2_LOOPS_Msk                   (0x40UL)                  /*!< USART CR2: LOOPS (Bitfield-Mask: 0x01)                      */
#define USART_CR2_MASTER_Pos                  (7UL)                     /*!< USART CR2: MASTER (Bit 7)                                   */
#define USART_CR2_MASTER_Msk                  (0x80UL)                  /*!< USART CR2: MASTER (Bitfield-Mask: 0x01)                     */
#define USART_CR2_DBLS_Pos                    (8UL)                     /*!< USART CR2: DBLS (Bit 8)                                     */
#define USART_CR2_DBLS_Msk                    (0x100UL)                 /*!< USART CR2: DBLS (Bitfield-Mask: 0x01)                       */
#define USART_CR2_EN_Pos                      (9UL)                     /*!< USART CR2: EN (Bit 9)                                       */
#define USART_CR2_EN_Msk                      (0x200UL)                 /*!< USART CR2: EN (Bitfield-Mask: 0x01)                         */
#define USART_CR2_BFREN_Pos                   (10UL)                    /*!< USART CR2: BFREN (Bit 10)                                   */
#define USART_CR2_BFREN_Msk                   (0x400UL)                 /*!< USART CR2: BFREN (Bitfield-Mask: 0x01)                      */
#define USART_CR2_RTOEN_Pos                   (11UL)                    /*!< USART CR2: RTOEN (Bit 11)                                   */
#define USART_CR2_RTOEN_Msk                   (0x800UL)                 /*!< USART CR2: RTOEN (Bitfield-Mask: 0x01)                      */
#define USART_CR2_RTOIE_Pos                   (12UL)                    /*!< USART CR2: RTOIE (Bit 12)                                   */
#define USART_CR2_RTOIE_Msk                   (0x1000UL)                /*!< USART CR2: RTOIE (Bitfield-Mask: 0x01)                      */
#define USART_CR2_DMARXIE_Pos                 (13UL)                    /*!< USART CR2: DMARXIE (Bit 13)                                 */
#define USART_CR2_DMARXIE_Msk                 (0x2000UL)                /*!< USART CR2: DMARXIE (Bitfield-Mask: 0x01)                    */
#define USART_CR2_DMATXIE_Pos                 (14UL)                    /*!< USART CR2: DMATXIE (Bit 14)                                 */
#define USART_CR2_DMATXIE_Msk                 (0x4000UL)                /*!< USART CR2: DMATXIE (Bitfield-Mask: 0x01)                    */

/* ----------------------------------  USART_ST  ---------------------------------- */
#define USART_ST_PE_Pos                       (0UL)                     /*!< USART ST: PE (Bit 0)                                        */
#define USART_ST_PE_Msk                       (0x1UL)                   /*!< USART ST: PE (Bitfield-Mask: 0x01)                          */
#define USART_ST_FE_Pos                       (1UL)                     /*!< USART ST: FE (Bit 1)                                        */
#define USART_ST_FE_Msk                       (0x2UL)                   /*!< USART ST: FE (Bitfield-Mask: 0x01)                          */
#define USART_ST_DOR_Pos                      (2UL)                     /*!< USART ST: DOR (Bit 2)                                       */
#define USART_ST_DOR_Msk                      (0x4UL)                   /*!< USART ST: DOR (Bitfield-Mask: 0x01)                         */
#define USART_ST_RTOF_Pos                     (3UL)                     /*!< USART ST: RTOF (Bit 3)                                      */
#define USART_ST_RTOF_Msk                     (0x8UL)                   /*!< USART ST: RTOF (Bitfield-Mask: 0x01)                        */
#define USART_ST_WAKE_Pos                     (4UL)                     /*!< USART ST: WAKE (Bit 4)                                      */
#define USART_ST_WAKE_Msk                     (0x10UL)                  /*!< USART ST: WAKE (Bitfield-Mask: 0x01)                        */
#define USART_ST_RXC_Pos                      (5UL)                     /*!< USART ST: RXC (Bit 5)                                       */
#define USART_ST_RXC_Msk                      (0x20UL)                  /*!< USART ST: RXC (Bitfield-Mask: 0x01)                         */
#define USART_ST_TXC_Pos                      (6UL)                     /*!< USART ST: TXC (Bit 6)                                       */
#define USART_ST_TXC_Msk                      (0x40UL)                  /*!< USART ST: TXC (Bitfield-Mask: 0x01)                         */
#define USART_ST_DRE_Pos                      (7UL)                     /*!< USART ST: DRE (Bit 7)                                       */
#define USART_ST_DRE_Msk                      (0x80UL)                  /*!< USART ST: DRE (Bitfield-Mask: 0x01)                         */
#define USART_ST_DMARXF_Pos                   (8UL)                     /*!< USART ST: DMARXF (Bit 8)                                    */
#define USART_ST_DMARXF_Msk                   (0x100UL)                 /*!< USART ST: DMARXF (Bitfield-Mask: 0x01)                      */
#define USART_ST_DMATXF_Pos                   (9UL)                     /*!< USART ST: DMATXF (Bit 9)                                    */
#define USART_ST_DMATXF_Msk                   (0x200UL)                 /*!< USART ST: DMATXF (Bitfield-Mask: 0x01)                      */

/* ----------------------------------  USART_BDR  --------------------------------- */
#define USART_BDR_BDATA_Pos                   (0UL)                     /*!< USART BDR: BDATA (Bit 0)                                    */
#define USART_BDR_BDATA_Msk                   (0xfffUL)                 /*!< USART BDR: BDATA (Bitfield-Mask: 0xfff)                     */

/* ----------------------------------  USART_DR  ---------------------------------- */
#define USART_DR_DATA_Pos                     (0UL)                     /*!< USART DR: DATA (Bit 0)                                      */
#define USART_DR_DATA_Msk                     (0xffUL)                  /*!< USART DR: DATA (Bitfield-Mask: 0xff)                        */

/* ----------------------------------  USART_BFR  --------------------------------- */
#define USART_BFR_BFC_Pos                     (0UL)                     /*!< USART BFR: BFC (Bit 0)                                      */
#define USART_BFR_BFC_Msk                     (0xffUL)                  /*!< USART BFR: BFC (Bitfield-Mask: 0xff)                        */

/* ----------------------------------  USART_RTO  --------------------------------- */
#define USART_RTO_DATA_Pos                    (0UL)                     /*!< USART RTO: DATA (Bit 0)                                     */
#define USART_RTO_DATA_Msk                    (0xffffffUL)              /*!< USART RTO: DATA (Bitfield-Mask: 0xffffff)                   */


/* ================================================================================ */
/* ================        struct 'USART10' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  USART10_CR1  -------------------------------- */
#define USART10_CR1_RXE_Pos                   (0UL)                     /*!< USART10 CR1: RXE (Bit 0)                                    */
#define USART10_CR1_RXE_Msk                   (0x1UL)                   /*!< USART10 CR1: RXE (Bitfield-Mask: 0x01)                      */
#define USART10_CR1_TXE_Pos                   (1UL)                     /*!< USART10 CR1: TXE (Bit 1)                                    */
#define USART10_CR1_TXE_Msk                   (0x2UL)                   /*!< USART10 CR1: TXE (Bitfield-Mask: 0x01)                      */
#define USART10_CR1_WAKEIE_Pos                (2UL)                     /*!< USART10 CR1: WAKEIE (Bit 2)                                 */
#define USART10_CR1_WAKEIE_Msk                (0x4UL)                   /*!< USART10 CR1: WAKEIE (Bitfield-Mask: 0x01)                   */
#define USART10_CR1_RXCIE_Pos                 (3UL)                     /*!< USART10 CR1: RXCIE (Bit 3)                                  */
#define USART10_CR1_RXCIE_Msk                 (0x8UL)                   /*!< USART10 CR1: RXCIE (Bitfield-Mask: 0x01)                    */
#define USART10_CR1_TXCIE_Pos                 (4UL)                     /*!< USART10 CR1: TXCIE (Bit 4)                                  */
#define USART10_CR1_TXCIE_Msk                 (0x10UL)                  /*!< USART10 CR1: TXCIE (Bitfield-Mask: 0x01)                    */
#define USART10_CR1_DRIE_Pos                  (5UL)                     /*!< USART10 CR1: DRIE (Bit 5)                                   */
#define USART10_CR1_DRIE_Msk                  (0x20UL)                  /*!< USART10 CR1: DRIE (Bitfield-Mask: 0x01)                     */
#define USART10_CR1_CPHA_Pos                  (6UL)                     /*!< USART10 CR1: CPHA (Bit 6)                                   */
#define USART10_CR1_CPHA_Msk                  (0x40UL)                  /*!< USART10 CR1: CPHA (Bitfield-Mask: 0x01)                     */
#define USART10_CR1_CPOL_Pos                  (7UL)                     /*!< USART10 CR1: CPOL (Bit 7)                                   */
#define USART10_CR1_CPOL_Msk                  (0x80UL)                  /*!< USART10 CR1: CPOL (Bitfield-Mask: 0x01)                     */
#define USART10_CR1_ORD_Pos                   (8UL)                     /*!< USART10 CR1: ORD (Bit 8)                                    */
#define USART10_CR1_ORD_Msk                   (0x100UL)                 /*!< USART10 CR1: ORD (Bitfield-Mask: 0x01)                      */
#define USART10_CR1_DLEN_Pos                  (9UL)                     /*!< USART10 CR1: DLEN (Bit 9)                                   */
#define USART10_CR1_DLEN_Msk                  (0xe00UL)                 /*!< USART10 CR1: DLEN (Bitfield-Mask: 0x07)                     */
#define USART10_CR1_PG_Pos                    (12UL)                    /*!< USART10 CR1: PG (Bit 12)                                    */
#define USART10_CR1_PG_Msk                    (0x3000UL)                /*!< USART10 CR1: PG (Bitfield-Mask: 0x03)                       */
#define USART10_CR1_MS_Pos                    (14UL)                    /*!< USART10 CR1: MS (Bit 14)                                    */
#define USART10_CR1_MS_Msk                    (0xc000UL)                /*!< USART10 CR1: MS (Bitfield-Mask: 0x03)                       */

/* ---------------------------------  USART10_CR2  -------------------------------- */
#define USART10_CR2_RX8_Pos                   (0UL)                     /*!< USART10 CR2: RX8 (Bit 0)                                    */
#define USART10_CR2_RX8_Msk                   (0x1UL)                   /*!< USART10 CR2: RX8 (Bitfield-Mask: 0x01)                      */
#define USART10_CR2_TX8_Pos                   (1UL)                     /*!< USART10 CR2: TX8 (Bit 1)                                    */
#define USART10_CR2_TX8_Msk                   (0x2UL)                   /*!< USART10 CR2: TX8 (Bitfield-Mask: 0x01)                      */
#define USART10_CR2_SB_Pos                    (2UL)                     /*!< USART10 CR2: SB (Bit 2)                                     */
#define USART10_CR2_SB_Msk                    (0x4UL)                   /*!< USART10 CR2: SB (Bitfield-Mask: 0x01)                       */
#define USART10_CR2_FXCH_Pos                  (3UL)                     /*!< USART10 CR2: FXCH (Bit 3)                                   */
#define USART10_CR2_FXCH_Msk                  (0x8UL)                   /*!< USART10 CR2: FXCH (Bitfield-Mask: 0x01)                     */
#define USART10_CR2_SREN_Pos                  (4UL)                     /*!< USART10 CR2: SREN (Bit 4)                                   */
#define USART10_CR2_SREN_Msk                  (0x10UL)                  /*!< USART10 CR2: SREN (Bitfield-Mask: 0x01)                     */
#define USART10_CR2_DISSCK_Pos                (5UL)                     /*!< USART10 CR2: DISSCK (Bit 5)                                 */
#define USART10_CR2_DISSCK_Msk                (0x20UL)                  /*!< USART10 CR2: DISSCK (Bitfield-Mask: 0x01)                   */
#define USART10_CR2_LOOPS_Pos                 (6UL)                     /*!< USART10 CR2: LOOPS (Bit 6)                                  */
#define USART10_CR2_LOOPS_Msk                 (0x40UL)                  /*!< USART10 CR2: LOOPS (Bitfield-Mask: 0x01)                    */
#define USART10_CR2_MASTER_Pos                (7UL)                     /*!< USART10 CR2: MASTER (Bit 7)                                 */
#define USART10_CR2_MASTER_Msk                (0x80UL)                  /*!< USART10 CR2: MASTER (Bitfield-Mask: 0x01)                   */
#define USART10_CR2_DBLS_Pos                  (8UL)                     /*!< USART10 CR2: DBLS (Bit 8)                                   */
#define USART10_CR2_DBLS_Msk                  (0x100UL)                 /*!< USART10 CR2: DBLS (Bitfield-Mask: 0x01)                     */
#define USART10_CR2_EN_Pos                    (9UL)                     /*!< USART10 CR2: EN (Bit 9)                                     */
#define USART10_CR2_EN_Msk                    (0x200UL)                 /*!< USART10 CR2: EN (Bitfield-Mask: 0x01)                       */
#define USART10_CR2_BFREN_Pos                 (10UL)                    /*!< USART10 CR2: BFREN (Bit 10)                                 */
#define USART10_CR2_BFREN_Msk                 (0x400UL)                 /*!< USART10 CR2: BFREN (Bitfield-Mask: 0x01)                    */
#define USART10_CR2_RTOEN_Pos                 (11UL)                    /*!< USART10 CR2: RTOEN (Bit 11)                                 */
#define USART10_CR2_RTOEN_Msk                 (0x800UL)                 /*!< USART10 CR2: RTOEN (Bitfield-Mask: 0x01)                    */
#define USART10_CR2_RTOIE_Pos                 (12UL)                    /*!< USART10 CR2: RTOIE (Bit 12)                                 */
#define USART10_CR2_RTOIE_Msk                 (0x1000UL)                /*!< USART10 CR2: RTOIE (Bitfield-Mask: 0x01)                    */
#define USART10_CR2_DMARXIE_Pos               (13UL)                    /*!< USART10 CR2: DMARXIE (Bit 13)                               */
#define USART10_CR2_DMARXIE_Msk               (0x2000UL)                /*!< USART10 CR2: DMARXIE (Bitfield-Mask: 0x01)                  */
#define USART10_CR2_DMATXIE_Pos               (14UL)                    /*!< USART10 CR2: DMATXIE (Bit 14)                               */
#define USART10_CR2_DMATXIE_Msk               (0x4000UL)                /*!< USART10 CR2: DMATXIE (Bitfield-Mask: 0x01)                  */

/* ---------------------------------  USART10_ST  --------------------------------- */
#define USART10_ST_PE_Pos                     (0UL)                     /*!< USART10 ST: PE (Bit 0)                                      */
#define USART10_ST_PE_Msk                     (0x1UL)                   /*!< USART10 ST: PE (Bitfield-Mask: 0x01)                        */
#define USART10_ST_FE_Pos                     (1UL)                     /*!< USART10 ST: FE (Bit 1)                                      */
#define USART10_ST_FE_Msk                     (0x2UL)                   /*!< USART10 ST: FE (Bitfield-Mask: 0x01)                        */
#define USART10_ST_DOR_Pos                    (2UL)                     /*!< USART10 ST: DOR (Bit 2)                                     */
#define USART10_ST_DOR_Msk                    (0x4UL)                   /*!< USART10 ST: DOR (Bitfield-Mask: 0x01)                       */
#define USART10_ST_RTOF_Pos                   (3UL)                     /*!< USART10 ST: RTOF (Bit 3)                                    */
#define USART10_ST_RTOF_Msk                   (0x8UL)                   /*!< USART10 ST: RTOF (Bitfield-Mask: 0x01)                      */
#define USART10_ST_WAKE_Pos                   (4UL)                     /*!< USART10 ST: WAKE (Bit 4)                                    */
#define USART10_ST_WAKE_Msk                   (0x10UL)                  /*!< USART10 ST: WAKE (Bitfield-Mask: 0x01)                      */
#define USART10_ST_RXC_Pos                    (5UL)                     /*!< USART10 ST: RXC (Bit 5)                                     */
#define USART10_ST_RXC_Msk                    (0x20UL)                  /*!< USART10 ST: RXC (Bitfield-Mask: 0x01)                       */
#define USART10_ST_TXC_Pos                    (6UL)                     /*!< USART10 ST: TXC (Bit 6)                                     */
#define USART10_ST_TXC_Msk                    (0x40UL)                  /*!< USART10 ST: TXC (Bitfield-Mask: 0x01)                       */
#define USART10_ST_DRE_Pos                    (7UL)                     /*!< USART10 ST: DRE (Bit 7)                                     */
#define USART10_ST_DRE_Msk                    (0x80UL)                  /*!< USART10 ST: DRE (Bitfield-Mask: 0x01)                       */
#define USART10_ST_DMARXF_Pos                 (8UL)                     /*!< USART10 ST: DMARXF (Bit 8)                                  */
#define USART10_ST_DMARXF_Msk                 (0x100UL)                 /*!< USART10 ST: DMARXF (Bitfield-Mask: 0x01)                    */
#define USART10_ST_DMATXF_Pos                 (9UL)                     /*!< USART10 ST: DMATXF (Bit 9)                                  */
#define USART10_ST_DMATXF_Msk                 (0x200UL)                 /*!< USART10 ST: DMATXF (Bitfield-Mask: 0x01)                    */

/* ---------------------------------  USART10_BDR  -------------------------------- */
#define USART10_BDR_BDATA_Pos                 (0UL)                     /*!< USART10 BDR: BDATA (Bit 0)                                  */
#define USART10_BDR_BDATA_Msk                 (0xfffUL)                 /*!< USART10 BDR: BDATA (Bitfield-Mask: 0xfff)                   */

/* ---------------------------------  USART10_DR  --------------------------------- */
#define USART10_DR_DATA_Pos                   (0UL)                     /*!< USART10 DR: DATA (Bit 0)                                    */
#define USART10_DR_DATA_Msk                   (0xffUL)                  /*!< USART10 DR: DATA (Bitfield-Mask: 0xff)                      */

/* ---------------------------------  USART10_BFR  -------------------------------- */
#define USART10_BFR_BFC_Pos                   (0UL)                     /*!< USART10 BFR: BFC (Bit 0)                                    */
#define USART10_BFR_BFC_Msk                   (0xffUL)                  /*!< USART10 BFR: BFC (Bitfield-Mask: 0xff)                      */

/* ---------------------------------  USART10_RTO  -------------------------------- */
#define USART10_RTO_DATA_Pos                  (0UL)                     /*!< USART10 RTO: DATA (Bit 0)                                   */
#define USART10_RTO_DATA_Msk                  (0xffffffUL)              /*!< USART10 RTO: DATA (Bitfield-Mask: 0xffffff)                 */


/* ================================================================================ */
/* ================        struct 'USART11' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  USART11_CR1  -------------------------------- */
#define USART11_CR1_RXE_Pos                   (0UL)                     /*!< USART11 CR1: RXE (Bit 0)                                    */
#define USART11_CR1_RXE_Msk                   (0x1UL)                   /*!< USART11 CR1: RXE (Bitfield-Mask: 0x01)                      */
#define USART11_CR1_TXE_Pos                   (1UL)                     /*!< USART11 CR1: TXE (Bit 1)                                    */
#define USART11_CR1_TXE_Msk                   (0x2UL)                   /*!< USART11 CR1: TXE (Bitfield-Mask: 0x01)                      */
#define USART11_CR1_WAKEIE_Pos                (2UL)                     /*!< USART11 CR1: WAKEIE (Bit 2)                                 */
#define USART11_CR1_WAKEIE_Msk                (0x4UL)                   /*!< USART11 CR1: WAKEIE (Bitfield-Mask: 0x01)                   */
#define USART11_CR1_RXCIE_Pos                 (3UL)                     /*!< USART11 CR1: RXCIE (Bit 3)                                  */
#define USART11_CR1_RXCIE_Msk                 (0x8UL)                   /*!< USART11 CR1: RXCIE (Bitfield-Mask: 0x01)                    */
#define USART11_CR1_TXCIE_Pos                 (4UL)                     /*!< USART11 CR1: TXCIE (Bit 4)                                  */
#define USART11_CR1_TXCIE_Msk                 (0x10UL)                  /*!< USART11 CR1: TXCIE (Bitfield-Mask: 0x01)                    */
#define USART11_CR1_DRIE_Pos                  (5UL)                     /*!< USART11 CR1: DRIE (Bit 5)                                   */
#define USART11_CR1_DRIE_Msk                  (0x20UL)                  /*!< USART11 CR1: DRIE (Bitfield-Mask: 0x01)                     */
#define USART11_CR1_CPHA_Pos                  (6UL)                     /*!< USART11 CR1: CPHA (Bit 6)                                   */
#define USART11_CR1_CPHA_Msk                  (0x40UL)                  /*!< USART11 CR1: CPHA (Bitfield-Mask: 0x01)                     */
#define USART11_CR1_CPOL_Pos                  (7UL)                     /*!< USART11 CR1: CPOL (Bit 7)                                   */
#define USART11_CR1_CPOL_Msk                  (0x80UL)                  /*!< USART11 CR1: CPOL (Bitfield-Mask: 0x01)                     */
#define USART11_CR1_ORD_Pos                   (8UL)                     /*!< USART11 CR1: ORD (Bit 8)                                    */
#define USART11_CR1_ORD_Msk                   (0x100UL)                 /*!< USART11 CR1: ORD (Bitfield-Mask: 0x01)                      */
#define USART11_CR1_DLEN_Pos                  (9UL)                     /*!< USART11 CR1: DLEN (Bit 9)                                   */
#define USART11_CR1_DLEN_Msk                  (0xe00UL)                 /*!< USART11 CR1: DLEN (Bitfield-Mask: 0x07)                     */
#define USART11_CR1_PG_Pos                    (12UL)                    /*!< USART11 CR1: PG (Bit 12)                                    */
#define USART11_CR1_PG_Msk                    (0x3000UL)                /*!< USART11 CR1: PG (Bitfield-Mask: 0x03)                       */
#define USART11_CR1_MS_Pos                    (14UL)                    /*!< USART11 CR1: MS (Bit 14)                                    */
#define USART11_CR1_MS_Msk                    (0xc000UL)                /*!< USART11 CR1: MS (Bitfield-Mask: 0x03)                       */

/* ---------------------------------  USART11_CR2  -------------------------------- */
#define USART11_CR2_RX8_Pos                   (0UL)                     /*!< USART11 CR2: RX8 (Bit 0)                                    */
#define USART11_CR2_RX8_Msk                   (0x1UL)                   /*!< USART11 CR2: RX8 (Bitfield-Mask: 0x01)                      */
#define USART11_CR2_TX8_Pos                   (1UL)                     /*!< USART11 CR2: TX8 (Bit 1)                                    */
#define USART11_CR2_TX8_Msk                   (0x2UL)                   /*!< USART11 CR2: TX8 (Bitfield-Mask: 0x01)                      */
#define USART11_CR2_SB_Pos                    (2UL)                     /*!< USART11 CR2: SB (Bit 2)                                     */
#define USART11_CR2_SB_Msk                    (0x4UL)                   /*!< USART11 CR2: SB (Bitfield-Mask: 0x01)                       */
#define USART11_CR2_FXCH_Pos                  (3UL)                     /*!< USART11 CR2: FXCH (Bit 3)                                   */
#define USART11_CR2_FXCH_Msk                  (0x8UL)                   /*!< USART11 CR2: FXCH (Bitfield-Mask: 0x01)                     */
#define USART11_CR2_SREN_Pos                  (4UL)                     /*!< USART11 CR2: SREN (Bit 4)                                   */
#define USART11_CR2_SREN_Msk                  (0x10UL)                  /*!< USART11 CR2: SREN (Bitfield-Mask: 0x01)                     */
#define USART11_CR2_DISSCK_Pos                (5UL)                     /*!< USART11 CR2: DISSCK (Bit 5)                                 */
#define USART11_CR2_DISSCK_Msk                (0x20UL)                  /*!< USART11 CR2: DISSCK (Bitfield-Mask: 0x01)                   */
#define USART11_CR2_LOOPS_Pos                 (6UL)                     /*!< USART11 CR2: LOOPS (Bit 6)                                  */
#define USART11_CR2_LOOPS_Msk                 (0x40UL)                  /*!< USART11 CR2: LOOPS (Bitfield-Mask: 0x01)                    */
#define USART11_CR2_MASTER_Pos                (7UL)                     /*!< USART11 CR2: MASTER (Bit 7)                                 */
#define USART11_CR2_MASTER_Msk                (0x80UL)                  /*!< USART11 CR2: MASTER (Bitfield-Mask: 0x01)                   */
#define USART11_CR2_DBLS_Pos                  (8UL)                     /*!< USART11 CR2: DBLS (Bit 8)                                   */
#define USART11_CR2_DBLS_Msk                  (0x100UL)                 /*!< USART11 CR2: DBLS (Bitfield-Mask: 0x01)                     */
#define USART11_CR2_EN_Pos                    (9UL)                     /*!< USART11 CR2: EN (Bit 9)                                     */
#define USART11_CR2_EN_Msk                    (0x200UL)                 /*!< USART11 CR2: EN (Bitfield-Mask: 0x01)                       */
#define USART11_CR2_BFREN_Pos                 (10UL)                    /*!< USART11 CR2: BFREN (Bit 10)                                 */
#define USART11_CR2_BFREN_Msk                 (0x400UL)                 /*!< USART11 CR2: BFREN (Bitfield-Mask: 0x01)                    */
#define USART11_CR2_RTOEN_Pos                 (11UL)                    /*!< USART11 CR2: RTOEN (Bit 11)                                 */
#define USART11_CR2_RTOEN_Msk                 (0x800UL)                 /*!< USART11 CR2: RTOEN (Bitfield-Mask: 0x01)                    */
#define USART11_CR2_RTOIE_Pos                 (12UL)                    /*!< USART11 CR2: RTOIE (Bit 12)                                 */
#define USART11_CR2_RTOIE_Msk                 (0x1000UL)                /*!< USART11 CR2: RTOIE (Bitfield-Mask: 0x01)                    */
#define USART11_CR2_DMARXIE_Pos               (13UL)                    /*!< USART11 CR2: DMARXIE (Bit 13)                               */
#define USART11_CR2_DMARXIE_Msk               (0x2000UL)                /*!< USART11 CR2: DMARXIE (Bitfield-Mask: 0x01)                  */
#define USART11_CR2_DMATXIE_Pos               (14UL)                    /*!< USART11 CR2: DMATXIE (Bit 14)                               */
#define USART11_CR2_DMATXIE_Msk               (0x4000UL)                /*!< USART11 CR2: DMATXIE (Bitfield-Mask: 0x01)                  */

/* ---------------------------------  USART11_ST  --------------------------------- */
#define USART11_ST_PE_Pos                     (0UL)                     /*!< USART11 ST: PE (Bit 0)                                      */
#define USART11_ST_PE_Msk                     (0x1UL)                   /*!< USART11 ST: PE (Bitfield-Mask: 0x01)                        */
#define USART11_ST_FE_Pos                     (1UL)                     /*!< USART11 ST: FE (Bit 1)                                      */
#define USART11_ST_FE_Msk                     (0x2UL)                   /*!< USART11 ST: FE (Bitfield-Mask: 0x01)                        */
#define USART11_ST_DOR_Pos                    (2UL)                     /*!< USART11 ST: DOR (Bit 2)                                     */
#define USART11_ST_DOR_Msk                    (0x4UL)                   /*!< USART11 ST: DOR (Bitfield-Mask: 0x01)                       */
#define USART11_ST_RTOF_Pos                   (3UL)                     /*!< USART11 ST: RTOF (Bit 3)                                    */
#define USART11_ST_RTOF_Msk                   (0x8UL)                   /*!< USART11 ST: RTOF (Bitfield-Mask: 0x01)                      */
#define USART11_ST_WAKE_Pos                   (4UL)                     /*!< USART11 ST: WAKE (Bit 4)                                    */
#define USART11_ST_WAKE_Msk                   (0x10UL)                  /*!< USART11 ST: WAKE (Bitfield-Mask: 0x01)                      */
#define USART11_ST_RXC_Pos                    (5UL)                     /*!< USART11 ST: RXC (Bit 5)                                     */
#define USART11_ST_RXC_Msk                    (0x20UL)                  /*!< USART11 ST: RXC (Bitfield-Mask: 0x01)                       */
#define USART11_ST_TXC_Pos                    (6UL)                     /*!< USART11 ST: TXC (Bit 6)                                     */
#define USART11_ST_TXC_Msk                    (0x40UL)                  /*!< USART11 ST: TXC (Bitfield-Mask: 0x01)                       */
#define USART11_ST_DRE_Pos                    (7UL)                     /*!< USART11 ST: DRE (Bit 7)                                     */
#define USART11_ST_DRE_Msk                    (0x80UL)                  /*!< USART11 ST: DRE (Bitfield-Mask: 0x01)                       */
#define USART11_ST_DMARXF_Pos                 (8UL)                     /*!< USART11 ST: DMARXF (Bit 8)                                  */
#define USART11_ST_DMARXF_Msk                 (0x100UL)                 /*!< USART11 ST: DMARXF (Bitfield-Mask: 0x01)                    */
#define USART11_ST_DMATXF_Pos                 (9UL)                     /*!< USART11 ST: DMATXF (Bit 9)                                  */
#define USART11_ST_DMATXF_Msk                 (0x200UL)                 /*!< USART11 ST: DMATXF (Bitfield-Mask: 0x01)                    */

/* ---------------------------------  USART11_BDR  -------------------------------- */
#define USART11_BDR_BDATA_Pos                 (0UL)                     /*!< USART11 BDR: BDATA (Bit 0)                                  */
#define USART11_BDR_BDATA_Msk                 (0xfffUL)                 /*!< USART11 BDR: BDATA (Bitfield-Mask: 0xfff)                   */

/* ---------------------------------  USART11_DR  --------------------------------- */
#define USART11_DR_DATA_Pos                   (0UL)                     /*!< USART11 DR: DATA (Bit 0)                                    */
#define USART11_DR_DATA_Msk                   (0xffUL)                  /*!< USART11 DR: DATA (Bitfield-Mask: 0xff)                      */

/* ---------------------------------  USART11_BFR  -------------------------------- */
#define USART11_BFR_BFC_Pos                   (0UL)                     /*!< USART11 BFR: BFC (Bit 0)                                    */
#define USART11_BFR_BFC_Msk                   (0xffUL)                  /*!< USART11 BFR: BFC (Bitfield-Mask: 0xff)                      */

/* ---------------------------------  USART11_RTO  -------------------------------- */
#define USART11_RTO_DATA_Pos                  (0UL)                     /*!< USART11 RTO: DATA (Bit 0)                                   */
#define USART11_RTO_DATA_Msk                  (0xffffffUL)              /*!< USART11 RTO: DATA (Bitfield-Mask: 0xffffff)                 */


/* ================================================================================ */
/* ================        struct 'USART12' Position & Mask        ================ */
/* ================================================================================ */


/* ---------------------------------  USART12_CR1  -------------------------------- */
#define USART12_CR1_RXE_Pos                   (0UL)                     /*!< USART12 CR1: RXE (Bit 0)                                    */
#define USART12_CR1_RXE_Msk                   (0x1UL)                   /*!< USART12 CR1: RXE (Bitfield-Mask: 0x01)                      */
#define USART12_CR1_TXE_Pos                   (1UL)                     /*!< USART12 CR1: TXE (Bit 1)                                    */
#define USART12_CR1_TXE_Msk                   (0x2UL)                   /*!< USART12 CR1: TXE (Bitfield-Mask: 0x01)                      */
#define USART12_CR1_WAKEIE_Pos                (2UL)                     /*!< USART12 CR1: WAKEIE (Bit 2)                                 */
#define USART12_CR1_WAKEIE_Msk                (0x4UL)                   /*!< USART12 CR1: WAKEIE (Bitfield-Mask: 0x01)                   */
#define USART12_CR1_RXCIE_Pos                 (3UL)                     /*!< USART12 CR1: RXCIE (Bit 3)                                  */
#define USART12_CR1_RXCIE_Msk                 (0x8UL)                   /*!< USART12 CR1: RXCIE (Bitfield-Mask: 0x01)                    */
#define USART12_CR1_TXCIE_Pos                 (4UL)                     /*!< USART12 CR1: TXCIE (Bit 4)                                  */
#define USART12_CR1_TXCIE_Msk                 (0x10UL)                  /*!< USART12 CR1: TXCIE (Bitfield-Mask: 0x01)                    */
#define USART12_CR1_DRIE_Pos                  (5UL)                     /*!< USART12 CR1: DRIE (Bit 5)                                   */
#define USART12_CR1_DRIE_Msk                  (0x20UL)                  /*!< USART12 CR1: DRIE (Bitfield-Mask: 0x01)                     */
#define USART12_CR1_CPHA_Pos                  (6UL)                     /*!< USART12 CR1: CPHA (Bit 6)                                   */
#define USART12_CR1_CPHA_Msk                  (0x40UL)                  /*!< USART12 CR1: CPHA (Bitfield-Mask: 0x01)                     */
#define USART12_CR1_CPOL_Pos                  (7UL)                     /*!< USART12 CR1: CPOL (Bit 7)                                   */
#define USART12_CR1_CPOL_Msk                  (0x80UL)                  /*!< USART12 CR1: CPOL (Bitfield-Mask: 0x01)                     */
#define USART12_CR1_ORD_Pos                   (8UL)                     /*!< USART12 CR1: ORD (Bit 8)                                    */
#define USART12_CR1_ORD_Msk                   (0x100UL)                 /*!< USART12 CR1: ORD (Bitfield-Mask: 0x01)                      */
#define USART12_CR1_DLEN_Pos                  (9UL)                     /*!< USART12 CR1: DLEN (Bit 9)                                   */
#define USART12_CR1_DLEN_Msk                  (0xe00UL)                 /*!< USART12 CR1: DLEN (Bitfield-Mask: 0x07)                     */
#define USART12_CR1_PG_Pos                    (12UL)                    /*!< USART12 CR1: PG (Bit 12)                                    */
#define USART12_CR1_PG_Msk                    (0x3000UL)                /*!< USART12 CR1: PG (Bitfield-Mask: 0x03)                       */
#define USART12_CR1_MS_Pos                    (14UL)                    /*!< USART12 CR1: MS (Bit 14)                                    */
#define USART12_CR1_MS_Msk                    (0xc000UL)                /*!< USART12 CR1: MS (Bitfield-Mask: 0x03)                       */

/* ---------------------------------  USART12_CR2  -------------------------------- */
#define USART12_CR2_RX8_Pos                   (0UL)                     /*!< USART12 CR2: RX8 (Bit 0)                                    */
#define USART12_CR2_RX8_Msk                   (0x1UL)                   /*!< USART12 CR2: RX8 (Bitfield-Mask: 0x01)                      */
#define USART12_CR2_TX8_Pos                   (1UL)                     /*!< USART12 CR2: TX8 (Bit 1)                                    */
#define USART12_CR2_TX8_Msk                   (0x2UL)                   /*!< USART12 CR2: TX8 (Bitfield-Mask: 0x01)                      */
#define USART12_CR2_SB_Pos                    (2UL)                     /*!< USART12 CR2: SB (Bit 2)                                     */
#define USART12_CR2_SB_Msk                    (0x4UL)                   /*!< USART12 CR2: SB (Bitfield-Mask: 0x01)                       */
#define USART12_CR2_FXCH_Pos                  (3UL)                     /*!< USART12 CR2: FXCH (Bit 3)                                   */
#define USART12_CR2_FXCH_Msk                  (0x8UL)                   /*!< USART12 CR2: FXCH (Bitfield-Mask: 0x01)                     */
#define USART12_CR2_SREN_Pos                  (4UL)                     /*!< USART12 CR2: SREN (Bit 4)                                   */
#define USART12_CR2_SREN_Msk                  (0x10UL)                  /*!< USART12 CR2: SREN (Bitfield-Mask: 0x01)                     */
#define USART12_CR2_DISSCK_Pos                (5UL)                     /*!< USART12 CR2: DISSCK (Bit 5)                                 */
#define USART12_CR2_DISSCK_Msk                (0x20UL)                  /*!< USART12 CR2: DISSCK (Bitfield-Mask: 0x01)                   */
#define USART12_CR2_LOOPS_Pos                 (6UL)                     /*!< USART12 CR2: LOOPS (Bit 6)                                  */
#define USART12_CR2_LOOPS_Msk                 (0x40UL)                  /*!< USART12 CR2: LOOPS (Bitfield-Mask: 0x01)                    */
#define USART12_CR2_MASTER_Pos                (7UL)                     /*!< USART12 CR2: MASTER (Bit 7)                                 */
#define USART12_CR2_MASTER_Msk                (0x80UL)                  /*!< USART12 CR2: MASTER (Bitfield-Mask: 0x01)                   */
#define USART12_CR2_DBLS_Pos                  (8UL)                     /*!< USART12 CR2: DBLS (Bit 8)                                   */
#define USART12_CR2_DBLS_Msk                  (0x100UL)                 /*!< USART12 CR2: DBLS (Bitfield-Mask: 0x01)                     */
#define USART12_CR2_EN_Pos                    (9UL)                     /*!< USART12 CR2: EN (Bit 9)                                     */
#define USART12_CR2_EN_Msk                    (0x200UL)                 /*!< USART12 CR2: EN (Bitfield-Mask: 0x01)                       */
#define USART12_CR2_BFREN_Pos                 (10UL)                    /*!< USART12 CR2: BFREN (Bit 10)                                 */
#define USART12_CR2_BFREN_Msk                 (0x400UL)                 /*!< USART12 CR2: BFREN (Bitfield-Mask: 0x01)                    */
#define USART12_CR2_RTOEN_Pos                 (11UL)                    /*!< USART12 CR2: RTOEN (Bit 11)                                 */
#define USART12_CR2_RTOEN_Msk                 (0x800UL)                 /*!< USART12 CR2: RTOEN (Bitfield-Mask: 0x01)                    */
#define USART12_CR2_RTOIE_Pos                 (12UL)                    /*!< USART12 CR2: RTOIE (Bit 12)                                 */
#define USART12_CR2_RTOIE_Msk                 (0x1000UL)                /*!< USART12 CR2: RTOIE (Bitfield-Mask: 0x01)                    */
#define USART12_CR2_DMARXIE_Pos               (13UL)                    /*!< USART12 CR2: DMARXIE (Bit 13)                               */
#define USART12_CR2_DMARXIE_Msk               (0x2000UL)                /*!< USART12 CR2: DMARXIE (Bitfield-Mask: 0x01)                  */
#define USART12_CR2_DMATXIE_Pos               (14UL)                    /*!< USART12 CR2: DMATXIE (Bit 14)                               */
#define USART12_CR2_DMATXIE_Msk               (0x4000UL)                /*!< USART12 CR2: DMATXIE (Bitfield-Mask: 0x01)                  */

/* ---------------------------------  USART12_ST  --------------------------------- */
#define USART12_ST_PE_Pos                     (0UL)                     /*!< USART12 ST: PE (Bit 0)                                      */
#define USART12_ST_PE_Msk                     (0x1UL)                   /*!< USART12 ST: PE (Bitfield-Mask: 0x01)                        */
#define USART12_ST_FE_Pos                     (1UL)                     /*!< USART12 ST: FE (Bit 1)                                      */
#define USART12_ST_FE_Msk                     (0x2UL)                   /*!< USART12 ST: FE (Bitfield-Mask: 0x01)                        */
#define USART12_ST_DOR_Pos                    (2UL)                     /*!< USART12 ST: DOR (Bit 2)                                     */
#define USART12_ST_DOR_Msk                    (0x4UL)                   /*!< USART12 ST: DOR (Bitfield-Mask: 0x01)                       */
#define USART12_ST_RTOF_Pos                   (3UL)                     /*!< USART12 ST: RTOF (Bit 3)                                    */
#define USART12_ST_RTOF_Msk                   (0x8UL)                   /*!< USART12 ST: RTOF (Bitfield-Mask: 0x01)                      */
#define USART12_ST_WAKE_Pos                   (4UL)                     /*!< USART12 ST: WAKE (Bit 4)                                    */
#define USART12_ST_WAKE_Msk                   (0x10UL)                  /*!< USART12 ST: WAKE (Bitfield-Mask: 0x01)                      */
#define USART12_ST_RXC_Pos                    (5UL)                     /*!< USART12 ST: RXC (Bit 5)                                     */
#define USART12_ST_RXC_Msk                    (0x20UL)                  /*!< USART12 ST: RXC (Bitfield-Mask: 0x01)                       */
#define USART12_ST_TXC_Pos                    (6UL)                     /*!< USART12 ST: TXC (Bit 6)                                     */
#define USART12_ST_TXC_Msk                    (0x40UL)                  /*!< USART12 ST: TXC (Bitfield-Mask: 0x01)                       */
#define USART12_ST_DRE_Pos                    (7UL)                     /*!< USART12 ST: DRE (Bit 7)                                     */
#define USART12_ST_DRE_Msk                    (0x80UL)                  /*!< USART12 ST: DRE (Bitfield-Mask: 0x01)                       */
#define USART12_ST_DMARXF_Pos                 (8UL)                     /*!< USART12 ST: DMARXF (Bit 8)                                  */
#define USART12_ST_DMARXF_Msk                 (0x100UL)                 /*!< USART12 ST: DMARXF (Bitfield-Mask: 0x01)                    */
#define USART12_ST_DMATXF_Pos                 (9UL)                     /*!< USART12 ST: DMATXF (Bit 9)                                  */
#define USART12_ST_DMATXF_Msk                 (0x200UL)                 /*!< USART12 ST: DMATXF (Bitfield-Mask: 0x01)                    */

/* ---------------------------------  USART12_BDR  -------------------------------- */
#define USART12_BDR_BDATA_Pos                 (0UL)                     /*!< USART12 BDR: BDATA (Bit 0)                                  */
#define USART12_BDR_BDATA_Msk                 (0xfffUL)                 /*!< USART12 BDR: BDATA (Bitfield-Mask: 0xfff)                   */

/* ---------------------------------  USART12_DR  --------------------------------- */
#define USART12_DR_DATA_Pos                   (0UL)                     /*!< USART12 DR: DATA (Bit 0)                                    */
#define USART12_DR_DATA_Msk                   (0xffUL)                  /*!< USART12 DR: DATA (Bitfield-Mask: 0xff)                      */

/* ---------------------------------  USART12_BFR  -------------------------------- */
#define USART12_BFR_BFC_Pos                   (0UL)                     /*!< USART12 BFR: BFC (Bit 0)                                    */
#define USART12_BFR_BFC_Msk                   (0xffUL)                  /*!< USART12 BFR: BFC (Bitfield-Mask: 0xff)                      */

/* ---------------------------------  USART12_RTO  -------------------------------- */
#define USART12_RTO_DATA_Pos                  (0UL)                     /*!< USART12 RTO: DATA (Bit 0)                                   */
#define USART12_RTO_DATA_Msk                  (0xffffffUL)              /*!< USART12 RTO: DATA (Bitfield-Mask: 0xffffff)                 */


/* ================================================================================ */
/* ================          struct 'ADC' Position & Mask          ================ */
/* ================================================================================ */


/* -----------------------------------  ADC_MR  ----------------------------------- */
#define ADC_MR_TRGSEL_Pos                     (0UL)                     /*!< ADC MR: TRGSEL (Bit 0)                                      */
#define ADC_MR_TRGSEL_Msk                     (0x7UL)                   /*!< ADC MR: TRGSEL (Bitfield-Mask: 0x07)                        */
#define ADC_MR_ADMOD_Pos                      (4UL)                     /*!< ADC MR: ADMOD (Bit 4)                                       */
#define ADC_MR_ADMOD_Msk                      (0x30UL)                  /*!< ADC MR: ADMOD (Bitfield-Mask: 0x03)                         */
#define ADC_MR_ARST_Pos                       (6UL)                     /*!< ADC MR: ARST (Bit 6)                                        */
#define ADC_MR_ARST_Msk                       (0x40UL)                  /*!< ADC MR: ARST (Bitfield-Mask: 0x01)                          */
#define ADC_MR_ADEN_Pos                       (7UL)                     /*!< ADC MR: ADEN (Bit 7)                                        */
#define ADC_MR_ADEN_Msk                       (0x80UL)                  /*!< ADC MR: ADEN (Bitfield-Mask: 0x01)                          */
#define ADC_MR_SEQCNT_Pos                     (8UL)                     /*!< ADC MR: SEQCNT (Bit 8)                                      */
#define ADC_MR_SEQCNT_Msk                     (0x700UL)                 /*!< ADC MR: SEQCNT (Bitfield-Mask: 0x07)                        */
#define ADC_MR_SEQTRGT_Pos                    (11UL)                    /*!< ADC MR: SEQTRGT (Bit 11)                                    */
#define ADC_MR_SEQTRGT_Msk                    (0x800UL)                 /*!< ADC MR: SEQTRGT (Bitfield-Mask: 0x01)                       */
#define ADC_MR_DMAEN_Pos                      (17UL)                    /*!< ADC MR: DMAEN (Bit 17)                                      */
#define ADC_MR_DMAEN_Msk                      (0x20000UL)               /*!< ADC MR: DMAEN (Bitfield-Mask: 0x01)                         */
#define ADC_MR_DMAIDE_Pos                     (18UL)                    /*!< ADC MR: DMAIDE (Bit 18)                                     */
#define ADC_MR_DMAIDE_Msk                     (0x40000UL)               /*!< ADC MR: DMAIDE (Bitfield-Mask: 0x01)                        */
#define ADC_MR_CDATAT_Pos                     (19UL)                    /*!< ADC MR: CDATAT (Bit 19)                                     */
#define ADC_MR_CDATAT_Msk                     (0x80000UL)               /*!< ADC MR: CDATAT (Bitfield-Mask: 0x01)                        */
#define ADC_MR_SEL_REF_Pos                    (27UL)                    /*!< ADC MR: SEL_REF (Bit 27)                                    */
#define ADC_MR_SEL_REF_Msk                    (0x8000000UL)             /*!< ADC MR: SEL_REF (Bitfield-Mask: 0x01)                       */

/* ----------------------------------  ADC_CSCR  ---------------------------------- */
#define ADC_CSCR_CACH_Pos                     (0UL)                     /*!< ADC CSCR: CACH (Bit 0)                                      */
#define ADC_CSCR_CACH_Msk                     (0x1fUL)                  /*!< ADC CSCR: CACH (Bitfield-Mask: 0x1f)                        */
#define ADC_CSCR_CSEQN_Pos                    (8UL)                     /*!< ADC CSCR: CSEQN (Bit 8)                                     */
#define ADC_CSCR_CSEQN_Msk                    (0x700UL)                 /*!< ADC CSCR: CSEQN (Bitfield-Mask: 0x07)                       */

/* -----------------------------------  ADC_CCR  ---------------------------------- */
#define ADC_CCR_CLKDIV_Pos                    (8UL)                     /*!< ADC CCR: CLKDIV (Bit 8)                                     */
#define ADC_CCR_CLKDIV_Msk                    (0x7f00UL)                /*!< ADC CCR: CLKDIV (Bitfield-Mask: 0x7f)                       */

/* -----------------------------------  ADC_TRG  ---------------------------------- */
#define ADC_TRG_SEQTRG0_BSTTRG_Pos            (0UL)                     /*!< ADC TRG: SEQTRG0_BSTTRG (Bit 0)                             */
#define ADC_TRG_SEQTRG0_BSTTRG_Msk            (0xfUL)                   /*!< ADC TRG: SEQTRG0_BSTTRG (Bitfield-Mask: 0x0f)               */
#define ADC_TRG_SEQTRG1_Pos                   (4UL)                     /*!< ADC TRG: SEQTRG1 (Bit 4)                                    */
#define ADC_TRG_SEQTRG1_Msk                   (0xf0UL)                  /*!< ADC TRG: SEQTRG1 (Bitfield-Mask: 0x0f)                      */
#define ADC_TRG_SEQTRG2_Pos                   (8UL)                     /*!< ADC TRG: SEQTRG2 (Bit 8)                                    */
#define ADC_TRG_SEQTRG2_Msk                   (0xf00UL)                 /*!< ADC TRG: SEQTRG2 (Bitfield-Mask: 0x0f)                      */
#define ADC_TRG_SEQTRG3_Pos                   (12UL)                    /*!< ADC TRG: SEQTRG3 (Bit 12)                                   */
#define ADC_TRG_SEQTRG3_Msk                   (0xf000UL)                /*!< ADC TRG: SEQTRG3 (Bitfield-Mask: 0x0f)                      */
#define ADC_TRG_SEQTRG4_Pos                   (16UL)                    /*!< ADC TRG: SEQTRG4 (Bit 16)                                   */
#define ADC_TRG_SEQTRG4_Msk                   (0xf0000UL)               /*!< ADC TRG: SEQTRG4 (Bitfield-Mask: 0x0f)                      */
#define ADC_TRG_SEQTRG5_Pos                   (20UL)                    /*!< ADC TRG: SEQTRG5 (Bit 20)                                   */
#define ADC_TRG_SEQTRG5_Msk                   (0xf00000UL)              /*!< ADC TRG: SEQTRG5 (Bitfield-Mask: 0x0f)                      */
#define ADC_TRG_SEQTRG6_Pos                   (24UL)                    /*!< ADC TRG: SEQTRG6 (Bit 24)                                   */
#define ADC_TRG_SEQTRG6_Msk                   (0xf000000UL)             /*!< ADC TRG: SEQTRG6 (Bitfield-Mask: 0x0f)                      */
#define ADC_TRG_SEQTRG7_Pos                   (28UL)                    /*!< ADC TRG: SEQTRG7 (Bit 28)                                   */
#define ADC_TRG_SEQTRG7_Msk                   (0xf0000000UL)            /*!< ADC TRG: SEQTRG7 (Bitfield-Mask: 0x0f)                      */

/* ----------------------------------  ADC_SCSR1  --------------------------------- */
#define ADC_SCSR1_SEQ0CH_Pos                  (0UL)                     /*!< ADC SCSR1: SEQ0CH (Bit 0)                                   */
#define ADC_SCSR1_SEQ0CH_Msk                  (0x1fUL)                  /*!< ADC SCSR1: SEQ0CH (Bitfield-Mask: 0x1f)                     */
#define ADC_SCSR1_SEQ1CH_Pos                  (8UL)                     /*!< ADC SCSR1: SEQ1CH (Bit 8)                                   */
#define ADC_SCSR1_SEQ1CH_Msk                  (0x1f00UL)                /*!< ADC SCSR1: SEQ1CH (Bitfield-Mask: 0x1f)                     */
#define ADC_SCSR1_SEQ2CH_Pos                  (16UL)                    /*!< ADC SCSR1: SEQ2CH (Bit 16)                                  */
#define ADC_SCSR1_SEQ2CH_Msk                  (0x1f0000UL)              /*!< ADC SCSR1: SEQ2CH (Bitfield-Mask: 0x1f)                     */
#define ADC_SCSR1_SEQ3CH_Pos                  (24UL)                    /*!< ADC SCSR1: SEQ3CH (Bit 24)                                  */
#define ADC_SCSR1_SEQ3CH_Msk                  (0x1f000000UL)            /*!< ADC SCSR1: SEQ3CH (Bitfield-Mask: 0x1f)                     */

/* ----------------------------------  ADC_SCSR2  --------------------------------- */
#define ADC_SCSR2_SEQ4CH_Pos                  (0UL)                     /*!< ADC SCSR2: SEQ4CH (Bit 0)                                   */
#define ADC_SCSR2_SEQ4CH_Msk                  (0x1fUL)                  /*!< ADC SCSR2: SEQ4CH (Bitfield-Mask: 0x1f)                     */
#define ADC_SCSR2_SEQ5CH_Pos                  (8UL)                     /*!< ADC SCSR2: SEQ5CH (Bit 8)                                   */
#define ADC_SCSR2_SEQ5CH_Msk                  (0x1f00UL)                /*!< ADC SCSR2: SEQ5CH (Bitfield-Mask: 0x1f)                     */
#define ADC_SCSR2_SEQ6CH_Pos                  (16UL)                    /*!< ADC SCSR2: SEQ6CH (Bit 16)                                  */
#define ADC_SCSR2_SEQ6CH_Msk                  (0x1f0000UL)              /*!< ADC SCSR2: SEQ6CH (Bitfield-Mask: 0x1f)                     */
#define ADC_SCSR2_SEQ7CH_Pos                  (24UL)                    /*!< ADC SCSR2: SEQ7CH (Bit 24)                                  */
#define ADC_SCSR2_SEQ7CH_Msk                  (0x1f000000UL)            /*!< ADC SCSR2: SEQ7CH (Bitfield-Mask: 0x1f)                     */

/* -----------------------------------  ADC_CR  ----------------------------------- */
#define ADC_CR_ASTART_Pos                     (0UL)                     /*!< ADC CR: ASTART (Bit 0)                                      */
#define ADC_CR_ASTART_Msk                     (0x1UL)                   /*!< ADC CR: ASTART (Bitfield-Mask: 0x01)                        */
#define ADC_CR_TRGCLR_Pos                     (1UL)                     /*!< ADC CR: TRGCLR (Bit 1)                                      */
#define ADC_CR_TRGCLR_Msk                     (0x2UL)                   /*!< ADC CR: TRGCLR (Bitfield-Mask: 0x01)                        */
#define ADC_CR_ASTOP_Pos                      (7UL)                     /*!< ADC CR: ASTOP (Bit 7)                                       */
#define ADC_CR_ASTOP_Msk                      (0x80UL)                  /*!< ADC CR: ASTOP (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  ADC_SR  ----------------------------------- */
#define ADC_SR_EOCIF_Pos                      (0UL)                     /*!< ADC SR: EOCIF (Bit 0)                                       */
#define ADC_SR_EOCIF_Msk                      (0x1UL)                   /*!< ADC SR: EOCIF (Bitfield-Mask: 0x01)                         */
#define ADC_SR_EOSIF_Pos                      (2UL)                     /*!< ADC SR: EOSIF (Bit 2)                                       */
#define ADC_SR_EOSIF_Msk                      (0x4UL)                   /*!< ADC SR: EOSIF (Bitfield-Mask: 0x01)                         */
#define ADC_SR_TRGIF_Pos                      (3UL)                     /*!< ADC SR: TRGIF (Bit 3)                                       */
#define ADC_SR_TRGIF_Msk                      (0x8UL)                   /*!< ADC SR: TRGIF (Bitfield-Mask: 0x01)                         */
#define ADC_SR_DMAF_Pos                       (4UL)                     /*!< ADC SR: DMAF (Bit 4)                                        */
#define ADC_SR_DMAF_Msk                       (0x10UL)                  /*!< ADC SR: DMAF (Bitfield-Mask: 0x01)                          */
#define ADC_SR_DOVRUN_Pos                     (5UL)                     /*!< ADC SR: DOVRUN (Bit 5)                                      */
#define ADC_SR_DOVRUN_Msk                     (0x20UL)                  /*!< ADC SR: DOVRUN (Bitfield-Mask: 0x01)                        */
#define ADC_SR_CMP0IF_Pos                     (8UL)                     /*!< ADC SR: CMP0IF (Bit 8)                                      */
#define ADC_SR_CMP0IF_Msk                     (0x100UL)                 /*!< ADC SR: CMP0IF (Bitfield-Mask: 0x01)                        */
#define ADC_SR_CMP1IF_Pos                     (9UL)                     /*!< ADC SR: CMP1IF (Bit 9)                                      */
#define ADC_SR_CMP1IF_Msk                     (0x200UL)                 /*!< ADC SR: CMP1IF (Bitfield-Mask: 0x01)                        */
#define ADC_SR_ABUSY_Pos                      (31UL)                    /*!< ADC SR: ABUSY (Bit 31)                                      */
#define ADC_SR_ABUSY_Msk                      (0x80000000UL)            /*!< ADC SR: ABUSY (Bitfield-Mask: 0x01)                         */

/* -----------------------------------  ADC_IER  ---------------------------------- */
#define ADC_IER_EOCIE_Pos                     (0UL)                     /*!< ADC IER: EOCIE (Bit 0)                                      */
#define ADC_IER_EOCIE_Msk                     (0x1UL)                   /*!< ADC IER: EOCIE (Bitfield-Mask: 0x01)                        */
#define ADC_IER_EOSIE_Pos                     (2UL)                     /*!< ADC IER: EOSIE (Bit 2)                                      */
#define ADC_IER_EOSIE_Msk                     (0x4UL)                   /*!< ADC IER: EOSIE (Bitfield-Mask: 0x01)                        */
#define ADC_IER_TRGIE_Pos                     (3UL)                     /*!< ADC IER: TRGIE (Bit 3)                                      */
#define ADC_IER_TRGIE_Msk                     (0x8UL)                   /*!< ADC IER: TRGIE (Bitfield-Mask: 0x01)                        */
#define ADC_IER_DMAIE_Pos                     (4UL)                     /*!< ADC IER: DMAIE (Bit 4)                                      */
#define ADC_IER_DMAIE_Msk                     (0x10UL)                  /*!< ADC IER: DMAIE (Bitfield-Mask: 0x01)                        */
#define ADC_IER_DMAOE_Pos                     (5UL)                     /*!< ADC IER: DMAOE (Bit 5)                                      */
#define ADC_IER_DMAOE_Msk                     (0x20UL)                  /*!< ADC IER: DMAOE (Bitfield-Mask: 0x01)                        */
#define ADC_IER_CMP0IE_Pos                    (8UL)                     /*!< ADC IER: CMP0IE (Bit 8)                                     */
#define ADC_IER_CMP0IE_Msk                    (0x100UL)                 /*!< ADC IER: CMP0IE (Bitfield-Mask: 0x01)                       */
#define ADC_IER_CMP1IE_Pos                    (9UL)                     /*!< ADC IER: CMP1IE (Bit 9)                                     */
#define ADC_IER_CMP1IE_Msk                    (0x200UL)                 /*!< ADC IER: CMP1IE (Bitfield-Mask: 0x01)                       */

/* -----------------------------------  ADC_DDR  ---------------------------------- */
#define ADC_DDR_ADDMAR_Pos                    (0UL)                     /*!< ADC DDR: ADDMAR (Bit 0)                                     */
#define ADC_DDR_ADDMAR_Msk                    (0xffffUL)                /*!< ADC DDR: ADDMAR (Bitfield-Mask: 0xffff)                     */
#define ADC_DDR_ADMACH_Pos                    (16UL)                    /*!< ADC DDR: ADMACH (Bit 16)                                    */
#define ADC_DDR_ADMACH_Msk                    (0x1f0000UL)              /*!< ADC DDR: ADMACH (Bitfield-Mask: 0x1f)                       */
#define ADC_DDR_TRGINFO0_Pos                  (24UL)                    /*!< ADC DDR: TRGINFO0 (Bit 24)                                  */
#define ADC_DDR_TRGINFO0_Msk                  (0x1000000UL)             /*!< ADC DDR: TRGINFO0 (Bitfield-Mask: 0x01)                     */
#define ADC_DDR_TRGINFO1_Pos                  (25UL)                    /*!< ADC DDR: TRGINFO1 (Bit 25)                                  */
#define ADC_DDR_TRGINFO1_Msk                  (0x2000000UL)             /*!< ADC DDR: TRGINFO1 (Bitfield-Mask: 0x01)                     */
#define ADC_DDR_TRGINFO2_Pos                  (26UL)                    /*!< ADC DDR: TRGINFO2 (Bit 26)                                  */
#define ADC_DDR_TRGINFO2_Msk                  (0x4000000UL)             /*!< ADC DDR: TRGINFO2 (Bitfield-Mask: 0x01)                     */
#define ADC_DDR_TRGINFO3_Pos                  (27UL)                    /*!< ADC DDR: TRGINFO3 (Bit 27)                                  */
#define ADC_DDR_TRGINFO3_Msk                  (0x8000000UL)             /*!< ADC DDR: TRGINFO3 (Bitfield-Mask: 0x01)                     */
#define ADC_DDR_TRGINFO4_Pos                  (28UL)                    /*!< ADC DDR: TRGINFO4 (Bit 28)                                  */
#define ADC_DDR_TRGINFO4_Msk                  (0x10000000UL)            /*!< ADC DDR: TRGINFO4 (Bitfield-Mask: 0x01)                     */
#define ADC_DDR_TRGINFO5_Pos                  (29UL)                    /*!< ADC DDR: TRGINFO5 (Bit 29)                                  */
#define ADC_DDR_TRGINFO5_Msk                  (0x20000000UL)            /*!< ADC DDR: TRGINFO5 (Bitfield-Mask: 0x01)                     */
#define ADC_DDR_TRGINFO6_Pos                  (30UL)                    /*!< ADC DDR: TRGINFO6 (Bit 30)                                  */
#define ADC_DDR_TRGINFO6_Msk                  (0x40000000UL)            /*!< ADC DDR: TRGINFO6 (Bitfield-Mask: 0x01)                     */
#define ADC_DDR_TRGINFO7_Pos                  (31UL)                    /*!< ADC DDR: TRGINFO7 (Bit 31)                                  */
#define ADC_DDR_TRGINFO7_Msk                  (0x80000000UL)            /*!< ADC DDR: TRGINFO7 (Bitfield-Mask: 0x01)                     */

/* -----------------------------------  ADC_DR0  ---------------------------------- */
#define ADC_DR0_ADDATA_Pos                    (4UL)                     /*!< ADC DR0: ADDATA (Bit 4)                                     */
#define ADC_DR0_ADDATA_Msk                    (0xfff0UL)                /*!< ADC DR0: ADDATA (Bitfield-Mask: 0xfff)                      */
#define ADC_DR0_ACH_Pos                       (16UL)                    /*!< ADC DR0: ACH (Bit 16)                                       */
#define ADC_DR0_ACH_Msk                       (0x1f0000UL)              /*!< ADC DR0: ACH (Bitfield-Mask: 0x1f)                          */
#define ADC_DR0_TRGINFO0_Pos                  (24UL)                    /*!< ADC DR0: TRGINFO0 (Bit 24)                                  */
#define ADC_DR0_TRGINFO0_Msk                  (0x1000000UL)             /*!< ADC DR0: TRGINFO0 (Bitfield-Mask: 0x01)                     */
#define ADC_DR0_TRGINFO1_Pos                  (25UL)                    /*!< ADC DR0: TRGINFO1 (Bit 25)                                  */
#define ADC_DR0_TRGINFO1_Msk                  (0x2000000UL)             /*!< ADC DR0: TRGINFO1 (Bitfield-Mask: 0x01)                     */
#define ADC_DR0_TRGINFO2_Pos                  (26UL)                    /*!< ADC DR0: TRGINFO2 (Bit 26)                                  */
#define ADC_DR0_TRGINFO2_Msk                  (0x4000000UL)             /*!< ADC DR0: TRGINFO2 (Bitfield-Mask: 0x01)                     */
#define ADC_DR0_TRGINFO3_Pos                  (27UL)                    /*!< ADC DR0: TRGINFO3 (Bit 27)                                  */
#define ADC_DR0_TRGINFO3_Msk                  (0x8000000UL)             /*!< ADC DR0: TRGINFO3 (Bitfield-Mask: 0x01)                     */
#define ADC_DR0_TRGINFO4_Pos                  (28UL)                    /*!< ADC DR0: TRGINFO4 (Bit 28)                                  */
#define ADC_DR0_TRGINFO4_Msk                  (0x10000000UL)            /*!< ADC DR0: TRGINFO4 (Bitfield-Mask: 0x01)                     */
#define ADC_DR0_TRGINFO5_Pos                  (29UL)                    /*!< ADC DR0: TRGINFO5 (Bit 29)                                  */
#define ADC_DR0_TRGINFO5_Msk                  (0x20000000UL)            /*!< ADC DR0: TRGINFO5 (Bitfield-Mask: 0x01)                     */
#define ADC_DR0_TRGINFO6_Pos                  (30UL)                    /*!< ADC DR0: TRGINFO6 (Bit 30)                                  */
#define ADC_DR0_TRGINFO6_Msk                  (0x40000000UL)            /*!< ADC DR0: TRGINFO6 (Bitfield-Mask: 0x01)                     */
#define ADC_DR0_TRGINFO7_Pos                  (31UL)                    /*!< ADC DR0: TRGINFO7 (Bit 31)                                  */
#define ADC_DR0_TRGINFO7_Msk                  (0x80000000UL)            /*!< ADC DR0: TRGINFO7 (Bitfield-Mask: 0x01)                     */

/* -----------------------------------  ADC_DR1  ---------------------------------- */
#define ADC_DR1_ADDATA_Pos                    (0UL)                     /*!< ADC DR1: ADDATA (Bit 0)                                     */
#define ADC_DR1_ADDATA_Msk                    (0xffffUL)                /*!< ADC DR1: ADDATA (Bitfield-Mask: 0xffff)                     */
#define ADC_DR1_ACH_Pos                       (16UL)                    /*!< ADC DR1: ACH (Bit 16)                                       */
#define ADC_DR1_ACH_Msk                       (0x1f0000UL)              /*!< ADC DR1: ACH (Bitfield-Mask: 0x1f)                          */
#define ADC_DR1_TRGINFO0_Pos                  (24UL)                    /*!< ADC DR1: TRGINFO0 (Bit 24)                                  */
#define ADC_DR1_TRGINFO0_Msk                  (0x1000000UL)             /*!< ADC DR1: TRGINFO0 (Bitfield-Mask: 0x01)                     */
#define ADC_DR1_TRGINFO1_Pos                  (25UL)                    /*!< ADC DR1: TRGINFO1 (Bit 25)                                  */
#define ADC_DR1_TRGINFO1_Msk                  (0x2000000UL)             /*!< ADC DR1: TRGINFO1 (Bitfield-Mask: 0x01)                     */
#define ADC_DR1_TRGINFO2_Pos                  (26UL)                    /*!< ADC DR1: TRGINFO2 (Bit 26)                                  */
#define ADC_DR1_TRGINFO2_Msk                  (0x4000000UL)             /*!< ADC DR1: TRGINFO2 (Bitfield-Mask: 0x01)                     */
#define ADC_DR1_TRGINFO3_Pos                  (27UL)                    /*!< ADC DR1: TRGINFO3 (Bit 27)                                  */
#define ADC_DR1_TRGINFO3_Msk                  (0x8000000UL)             /*!< ADC DR1: TRGINFO3 (Bitfield-Mask: 0x01)                     */
#define ADC_DR1_TRGINFO4_Pos                  (28UL)                    /*!< ADC DR1: TRGINFO4 (Bit 28)                                  */
#define ADC_DR1_TRGINFO4_Msk                  (0x10000000UL)            /*!< ADC DR1: TRGINFO4 (Bitfield-Mask: 0x01)                     */
#define ADC_DR1_TRGINFO5_Pos                  (29UL)                    /*!< ADC DR1: TRGINFO5 (Bit 29)                                  */
#define ADC_DR1_TRGINFO5_Msk                  (0x20000000UL)            /*!< ADC DR1: TRGINFO5 (Bitfield-Mask: 0x01)                     */
#define ADC_DR1_TRGINFO6_Pos                  (30UL)                    /*!< ADC DR1: TRGINFO6 (Bit 30)                                  */
#define ADC_DR1_TRGINFO6_Msk                  (0x40000000UL)            /*!< ADC DR1: TRGINFO6 (Bitfield-Mask: 0x01)                     */
#define ADC_DR1_TRGINFO7_Pos                  (31UL)                    /*!< ADC DR1: TRGINFO7 (Bit 31)                                  */
#define ADC_DR1_TRGINFO7_Msk                  (0x80000000UL)            /*!< ADC DR1: TRGINFO7 (Bitfield-Mask: 0x01)                     */

/* -----------------------------------  ADC_DR2  ---------------------------------- */
#define ADC_DR2_ADDATA_Pos                    (0UL)                     /*!< ADC DR2: ADDATA (Bit 0)                                     */
#define ADC_DR2_ADDATA_Msk                    (0xffffUL)                /*!< ADC DR2: ADDATA (Bitfield-Mask: 0xffff)                     */
#define ADC_DR2_ACH_Pos                       (16UL)                    /*!< ADC DR2: ACH (Bit 16)                                       */
#define ADC_DR2_ACH_Msk                       (0x1f0000UL)              /*!< ADC DR2: ACH (Bitfield-Mask: 0x1f)                          */
#define ADC_DR2_TRGINFO0_Pos                  (24UL)                    /*!< ADC DR2: TRGINFO0 (Bit 24)                                  */
#define ADC_DR2_TRGINFO0_Msk                  (0x1000000UL)             /*!< ADC DR2: TRGINFO0 (Bitfield-Mask: 0x01)                     */
#define ADC_DR2_TRGINFO1_Pos                  (25UL)                    /*!< ADC DR2: TRGINFO1 (Bit 25)                                  */
#define ADC_DR2_TRGINFO1_Msk                  (0x2000000UL)             /*!< ADC DR2: TRGINFO1 (Bitfield-Mask: 0x01)                     */
#define ADC_DR2_TRGINFO2_Pos                  (26UL)                    /*!< ADC DR2: TRGINFO2 (Bit 26)                                  */
#define ADC_DR2_TRGINFO2_Msk                  (0x4000000UL)             /*!< ADC DR2: TRGINFO2 (Bitfield-Mask: 0x01)                     */
#define ADC_DR2_TRGINFO3_Pos                  (27UL)                    /*!< ADC DR2: TRGINFO3 (Bit 27)                                  */
#define ADC_DR2_TRGINFO3_Msk                  (0x8000000UL)             /*!< ADC DR2: TRGINFO3 (Bitfield-Mask: 0x01)                     */
#define ADC_DR2_TRGINFO4_Pos                  (28UL)                    /*!< ADC DR2: TRGINFO4 (Bit 28)                                  */
#define ADC_DR2_TRGINFO4_Msk                  (0x10000000UL)            /*!< ADC DR2: TRGINFO4 (Bitfield-Mask: 0x01)                     */
#define ADC_DR2_TRGINFO5_Pos                  (29UL)                    /*!< ADC DR2: TRGINFO5 (Bit 29)                                  */
#define ADC_DR2_TRGINFO5_Msk                  (0x20000000UL)            /*!< ADC DR2: TRGINFO5 (Bitfield-Mask: 0x01)                     */
#define ADC_DR2_TRGINFO6_Pos                  (30UL)                    /*!< ADC DR2: TRGINFO6 (Bit 30)                                  */
#define ADC_DR2_TRGINFO6_Msk                  (0x40000000UL)            /*!< ADC DR2: TRGINFO6 (Bitfield-Mask: 0x01)                     */
#define ADC_DR2_TRGINFO7_Pos                  (31UL)                    /*!< ADC DR2: TRGINFO7 (Bit 31)                                  */
#define ADC_DR2_TRGINFO7_Msk                  (0x80000000UL)            /*!< ADC DR2: TRGINFO7 (Bitfield-Mask: 0x01)                     */

/* -----------------------------------  ADC_DR3  ---------------------------------- */
#define ADC_DR3_ADDATA_Pos                    (0UL)                     /*!< ADC DR3: ADDATA (Bit 0)                                     */
#define ADC_DR3_ADDATA_Msk                    (0xffffUL)                /*!< ADC DR3: ADDATA (Bitfield-Mask: 0xffff)                     */
#define ADC_DR3_ACH_Pos                       (16UL)                    /*!< ADC DR3: ACH (Bit 16)                                       */
#define ADC_DR3_ACH_Msk                       (0x1f0000UL)              /*!< ADC DR3: ACH (Bitfield-Mask: 0x1f)                          */
#define ADC_DR3_TRGINFO0_Pos                  (24UL)                    /*!< ADC DR3: TRGINFO0 (Bit 24)                                  */
#define ADC_DR3_TRGINFO0_Msk                  (0x1000000UL)             /*!< ADC DR3: TRGINFO0 (Bitfield-Mask: 0x01)                     */
#define ADC_DR3_TRGINFO1_Pos                  (25UL)                    /*!< ADC DR3: TRGINFO1 (Bit 25)                                  */
#define ADC_DR3_TRGINFO1_Msk                  (0x2000000UL)             /*!< ADC DR3: TRGINFO1 (Bitfield-Mask: 0x01)                     */
#define ADC_DR3_TRGINFO2_Pos                  (26UL)                    /*!< ADC DR3: TRGINFO2 (Bit 26)                                  */
#define ADC_DR3_TRGINFO2_Msk                  (0x4000000UL)             /*!< ADC DR3: TRGINFO2 (Bitfield-Mask: 0x01)                     */
#define ADC_DR3_TRGINFO3_Pos                  (27UL)                    /*!< ADC DR3: TRGINFO3 (Bit 27)                                  */
#define ADC_DR3_TRGINFO3_Msk                  (0x8000000UL)             /*!< ADC DR3: TRGINFO3 (Bitfield-Mask: 0x01)                     */
#define ADC_DR3_TRGINFO4_Pos                  (28UL)                    /*!< ADC DR3: TRGINFO4 (Bit 28)                                  */
#define ADC_DR3_TRGINFO4_Msk                  (0x10000000UL)            /*!< ADC DR3: TRGINFO4 (Bitfield-Mask: 0x01)                     */
#define ADC_DR3_TRGINFO5_Pos                  (29UL)                    /*!< ADC DR3: TRGINFO5 (Bit 29)                                  */
#define ADC_DR3_TRGINFO5_Msk                  (0x20000000UL)            /*!< ADC DR3: TRGINFO5 (Bitfield-Mask: 0x01)                     */
#define ADC_DR3_TRGINFO6_Pos                  (30UL)                    /*!< ADC DR3: TRGINFO6 (Bit 30)                                  */
#define ADC_DR3_TRGINFO6_Msk                  (0x40000000UL)            /*!< ADC DR3: TRGINFO6 (Bitfield-Mask: 0x01)                     */
#define ADC_DR3_TRGINFO7_Pos                  (31UL)                    /*!< ADC DR3: TRGINFO7 (Bit 31)                                  */
#define ADC_DR3_TRGINFO7_Msk                  (0x80000000UL)            /*!< ADC DR3: TRGINFO7 (Bitfield-Mask: 0x01)                     */

/* -----------------------------------  ADC_DR4  ---------------------------------- */
#define ADC_DR4_ADDATA_Pos                    (0UL)                     /*!< ADC DR4: ADDATA (Bit 0)                                     */
#define ADC_DR4_ADDATA_Msk                    (0xffffUL)                /*!< ADC DR4: ADDATA (Bitfield-Mask: 0xffff)                     */
#define ADC_DR4_ACH_Pos                       (16UL)                    /*!< ADC DR4: ACH (Bit 16)                                       */
#define ADC_DR4_ACH_Msk                       (0x1f0000UL)              /*!< ADC DR4: ACH (Bitfield-Mask: 0x1f)                          */
#define ADC_DR4_TRGINFO0_Pos                  (24UL)                    /*!< ADC DR4: TRGINFO0 (Bit 24)                                  */
#define ADC_DR4_TRGINFO0_Msk                  (0x1000000UL)             /*!< ADC DR4: TRGINFO0 (Bitfield-Mask: 0x01)                     */
#define ADC_DR4_TRGINFO1_Pos                  (25UL)                    /*!< ADC DR4: TRGINFO1 (Bit 25)                                  */
#define ADC_DR4_TRGINFO1_Msk                  (0x2000000UL)             /*!< ADC DR4: TRGINFO1 (Bitfield-Mask: 0x01)                     */
#define ADC_DR4_TRGINFO2_Pos                  (26UL)                    /*!< ADC DR4: TRGINFO2 (Bit 26)                                  */
#define ADC_DR4_TRGINFO2_Msk                  (0x4000000UL)             /*!< ADC DR4: TRGINFO2 (Bitfield-Mask: 0x01)                     */
#define ADC_DR4_TRGINFO3_Pos                  (27UL)                    /*!< ADC DR4: TRGINFO3 (Bit 27)                                  */
#define ADC_DR4_TRGINFO3_Msk                  (0x8000000UL)             /*!< ADC DR4: TRGINFO3 (Bitfield-Mask: 0x01)                     */
#define ADC_DR4_TRGINFO4_Pos                  (28UL)                    /*!< ADC DR4: TRGINFO4 (Bit 28)                                  */
#define ADC_DR4_TRGINFO4_Msk                  (0x10000000UL)            /*!< ADC DR4: TRGINFO4 (Bitfield-Mask: 0x01)                     */
#define ADC_DR4_TRGINFO5_Pos                  (29UL)                    /*!< ADC DR4: TRGINFO5 (Bit 29)                                  */
#define ADC_DR4_TRGINFO5_Msk                  (0x20000000UL)            /*!< ADC DR4: TRGINFO5 (Bitfield-Mask: 0x01)                     */
#define ADC_DR4_TRGINFO6_Pos                  (30UL)                    /*!< ADC DR4: TRGINFO6 (Bit 30)                                  */
#define ADC_DR4_TRGINFO6_Msk                  (0x40000000UL)            /*!< ADC DR4: TRGINFO6 (Bitfield-Mask: 0x01)                     */
#define ADC_DR4_TRGINFO7_Pos                  (31UL)                    /*!< ADC DR4: TRGINFO7 (Bit 31)                                  */
#define ADC_DR4_TRGINFO7_Msk                  (0x80000000UL)            /*!< ADC DR4: TRGINFO7 (Bitfield-Mask: 0x01)                     */

/* -----------------------------------  ADC_DR5  ---------------------------------- */
#define ADC_DR5_ADDATA_Pos                    (0UL)                     /*!< ADC DR5: ADDATA (Bit 0)                                     */
#define ADC_DR5_ADDATA_Msk                    (0xffffUL)                /*!< ADC DR5: ADDATA (Bitfield-Mask: 0xffff)                     */
#define ADC_DR5_ACH_Pos                       (16UL)                    /*!< ADC DR5: ACH (Bit 16)                                       */
#define ADC_DR5_ACH_Msk                       (0x1f0000UL)              /*!< ADC DR5: ACH (Bitfield-Mask: 0x1f)                          */
#define ADC_DR5_TRGINFO0_Pos                  (24UL)                    /*!< ADC DR5: TRGINFO0 (Bit 24)                                  */
#define ADC_DR5_TRGINFO0_Msk                  (0x1000000UL)             /*!< ADC DR5: TRGINFO0 (Bitfield-Mask: 0x01)                     */
#define ADC_DR5_TRGINFO1_Pos                  (25UL)                    /*!< ADC DR5: TRGINFO1 (Bit 25)                                  */
#define ADC_DR5_TRGINFO1_Msk                  (0x2000000UL)             /*!< ADC DR5: TRGINFO1 (Bitfield-Mask: 0x01)                     */
#define ADC_DR5_TRGINFO2_Pos                  (26UL)                    /*!< ADC DR5: TRGINFO2 (Bit 26)                                  */
#define ADC_DR5_TRGINFO2_Msk                  (0x4000000UL)             /*!< ADC DR5: TRGINFO2 (Bitfield-Mask: 0x01)                     */
#define ADC_DR5_TRGINFO3_Pos                  (27UL)                    /*!< ADC DR5: TRGINFO3 (Bit 27)                                  */
#define ADC_DR5_TRGINFO3_Msk                  (0x8000000UL)             /*!< ADC DR5: TRGINFO3 (Bitfield-Mask: 0x01)                     */
#define ADC_DR5_TRGINFO4_Pos                  (28UL)                    /*!< ADC DR5: TRGINFO4 (Bit 28)                                  */
#define ADC_DR5_TRGINFO4_Msk                  (0x10000000UL)            /*!< ADC DR5: TRGINFO4 (Bitfield-Mask: 0x01)                     */
#define ADC_DR5_TRGINFO5_Pos                  (29UL)                    /*!< ADC DR5: TRGINFO5 (Bit 29)                                  */
#define ADC_DR5_TRGINFO5_Msk                  (0x20000000UL)            /*!< ADC DR5: TRGINFO5 (Bitfield-Mask: 0x01)                     */
#define ADC_DR5_TRGINFO6_Pos                  (30UL)                    /*!< ADC DR5: TRGINFO6 (Bit 30)                                  */
#define ADC_DR5_TRGINFO6_Msk                  (0x40000000UL)            /*!< ADC DR5: TRGINFO6 (Bitfield-Mask: 0x01)                     */
#define ADC_DR5_TRGINFO7_Pos                  (31UL)                    /*!< ADC DR5: TRGINFO7 (Bit 31)                                  */
#define ADC_DR5_TRGINFO7_Msk                  (0x80000000UL)            /*!< ADC DR5: TRGINFO7 (Bitfield-Mask: 0x01)                     */

/* -----------------------------------  ADC_DR6  ---------------------------------- */
#define ADC_DR6_ADDATA_Pos                    (0UL)                     /*!< ADC DR6: ADDATA (Bit 0)                                     */
#define ADC_DR6_ADDATA_Msk                    (0xffffUL)                /*!< ADC DR6: ADDATA (Bitfield-Mask: 0xffff)                     */
#define ADC_DR6_ACH_Pos                       (16UL)                    /*!< ADC DR6: ACH (Bit 16)                                       */
#define ADC_DR6_ACH_Msk                       (0x1f0000UL)              /*!< ADC DR6: ACH (Bitfield-Mask: 0x1f)                          */
#define ADC_DR6_TRGINFO0_Pos                  (24UL)                    /*!< ADC DR6: TRGINFO0 (Bit 24)                                  */
#define ADC_DR6_TRGINFO0_Msk                  (0x1000000UL)             /*!< ADC DR6: TRGINFO0 (Bitfield-Mask: 0x01)                     */
#define ADC_DR6_TRGINFO1_Pos                  (25UL)                    /*!< ADC DR6: TRGINFO1 (Bit 25)                                  */
#define ADC_DR6_TRGINFO1_Msk                  (0x2000000UL)             /*!< ADC DR6: TRGINFO1 (Bitfield-Mask: 0x01)                     */
#define ADC_DR6_TRGINFO2_Pos                  (26UL)                    /*!< ADC DR6: TRGINFO2 (Bit 26)                                  */
#define ADC_DR6_TRGINFO2_Msk                  (0x4000000UL)             /*!< ADC DR6: TRGINFO2 (Bitfield-Mask: 0x01)                     */
#define ADC_DR6_TRGINFO3_Pos                  (27UL)                    /*!< ADC DR6: TRGINFO3 (Bit 27)                                  */
#define ADC_DR6_TRGINFO3_Msk                  (0x8000000UL)             /*!< ADC DR6: TRGINFO3 (Bitfield-Mask: 0x01)                     */
#define ADC_DR6_TRGINFO4_Pos                  (28UL)                    /*!< ADC DR6: TRGINFO4 (Bit 28)                                  */
#define ADC_DR6_TRGINFO4_Msk                  (0x10000000UL)            /*!< ADC DR6: TRGINFO4 (Bitfield-Mask: 0x01)                     */
#define ADC_DR6_TRGINFO5_Pos                  (29UL)                    /*!< ADC DR6: TRGINFO5 (Bit 29)                                  */
#define ADC_DR6_TRGINFO5_Msk                  (0x20000000UL)            /*!< ADC DR6: TRGINFO5 (Bitfield-Mask: 0x01)                     */
#define ADC_DR6_TRGINFO6_Pos                  (30UL)                    /*!< ADC DR6: TRGINFO6 (Bit 30)                                  */
#define ADC_DR6_TRGINFO6_Msk                  (0x40000000UL)            /*!< ADC DR6: TRGINFO6 (Bitfield-Mask: 0x01)                     */
#define ADC_DR6_TRGINFO7_Pos                  (31UL)                    /*!< ADC DR6: TRGINFO7 (Bit 31)                                  */
#define ADC_DR6_TRGINFO7_Msk                  (0x80000000UL)            /*!< ADC DR6: TRGINFO7 (Bitfield-Mask: 0x01)                     */

/* -----------------------------------  ADC_DR7  ---------------------------------- */
#define ADC_DR7_ADDATA_Pos                    (0UL)                     /*!< ADC DR7: ADDATA (Bit 0)                                     */
#define ADC_DR7_ADDATA_Msk                    (0xffffUL)                /*!< ADC DR7: ADDATA (Bitfield-Mask: 0xffff)                     */
#define ADC_DR7_ACH_Pos                       (16UL)                    /*!< ADC DR7: ACH (Bit 16)                                       */
#define ADC_DR7_ACH_Msk                       (0x1f0000UL)              /*!< ADC DR7: ACH (Bitfield-Mask: 0x1f)                          */
#define ADC_DR7_TRGINFO0_Pos                  (24UL)                    /*!< ADC DR7: TRGINFO0 (Bit 24)                                  */
#define ADC_DR7_TRGINFO0_Msk                  (0x1000000UL)             /*!< ADC DR7: TRGINFO0 (Bitfield-Mask: 0x01)                     */
#define ADC_DR7_TRGINFO1_Pos                  (25UL)                    /*!< ADC DR7: TRGINFO1 (Bit 25)                                  */
#define ADC_DR7_TRGINFO1_Msk                  (0x2000000UL)             /*!< ADC DR7: TRGINFO1 (Bitfield-Mask: 0x01)                     */
#define ADC_DR7_TRGINFO2_Pos                  (26UL)                    /*!< ADC DR7: TRGINFO2 (Bit 26)                                  */
#define ADC_DR7_TRGINFO2_Msk                  (0x4000000UL)             /*!< ADC DR7: TRGINFO2 (Bitfield-Mask: 0x01)                     */
#define ADC_DR7_TRGINFO3_Pos                  (27UL)                    /*!< ADC DR7: TRGINFO3 (Bit 27)                                  */
#define ADC_DR7_TRGINFO3_Msk                  (0x8000000UL)             /*!< ADC DR7: TRGINFO3 (Bitfield-Mask: 0x01)                     */
#define ADC_DR7_TRGINFO4_Pos                  (28UL)                    /*!< ADC DR7: TRGINFO4 (Bit 28)                                  */
#define ADC_DR7_TRGINFO4_Msk                  (0x10000000UL)            /*!< ADC DR7: TRGINFO4 (Bitfield-Mask: 0x01)                     */
#define ADC_DR7_TRGINFO5_Pos                  (29UL)                    /*!< ADC DR7: TRGINFO5 (Bit 29)                                  */
#define ADC_DR7_TRGINFO5_Msk                  (0x20000000UL)            /*!< ADC DR7: TRGINFO5 (Bitfield-Mask: 0x01)                     */
#define ADC_DR7_TRGINFO6_Pos                  (30UL)                    /*!< ADC DR7: TRGINFO6 (Bit 30)                                  */
#define ADC_DR7_TRGINFO6_Msk                  (0x40000000UL)            /*!< ADC DR7: TRGINFO6 (Bitfield-Mask: 0x01)                     */
#define ADC_DR7_TRGINFO7_Pos                  (31UL)                    /*!< ADC DR7: TRGINFO7 (Bit 31)                                  */
#define ADC_DR7_TRGINFO7_Msk                  (0x80000000UL)            /*!< ADC DR7: TRGINFO7 (Bitfield-Mask: 0x01)                     */

/* ----------------------------------  ADC_CMP0R  --------------------------------- */
#define ADC_CMP0R_CVAL_Pos                    (4UL)                     /*!< ADC CMP0R: CVAL (Bit 4)                                     */
#define ADC_CMP0R_CVAL_Msk                    (0xfff0UL)                /*!< ADC CMP0R: CVAL (Bitfield-Mask: 0xfff)                      */
#define ADC_CMP0R_CCH_Pos                     (16UL)                    /*!< ADC CMP0R: CCH (Bit 16)                                     */
#define ADC_CMP0R_CCH_Msk                     (0x1f0000UL)              /*!< ADC CMP0R: CCH (Bitfield-Mask: 0x1f)                        */
#define ADC_CMP0R_CMPM_Pos                    (21UL)                    /*!< ADC CMP0R: CMPM (Bit 21)                                    */
#define ADC_CMP0R_CMPM_Msk                    (0x200000UL)              /*!< ADC CMP0R: CMPM (Bitfield-Mask: 0x01)                       */
#define ADC_CMP0R_CMPEN_Pos                   (23UL)                    /*!< ADC CMP0R: CMPEN (Bit 23)                                   */
#define ADC_CMP0R_CMPEN_Msk                   (0x800000UL)              /*!< ADC CMP0R: CMPEN (Bitfield-Mask: 0x01)                      */
#define ADC_CMP0R_MATCH_CNT_Pos               (26UL)                    /*!< ADC CMP0R: MATCH_CNT (Bit 26)                               */
#define ADC_CMP0R_MATCH_CNT_Msk               (0xfc000000UL)            /*!< ADC CMP0R: MATCH_CNT (Bitfield-Mask: 0x3f)                  */

/* ----------------------------------  ADC_CMP1R  --------------------------------- */
#define ADC_CMP1R_CVAL_Pos                    (4UL)                     /*!< ADC CMP1R: CVAL (Bit 4)                                     */
#define ADC_CMP1R_CVAL_Msk                    (0xfff0UL)                /*!< ADC CMP1R: CVAL (Bitfield-Mask: 0xfff)                      */
#define ADC_CMP1R_CCH_Pos                     (16UL)                    /*!< ADC CMP1R: CCH (Bit 16)                                     */
#define ADC_CMP1R_CCH_Msk                     (0x1f0000UL)              /*!< ADC CMP1R: CCH (Bitfield-Mask: 0x1f)                        */
#define ADC_CMP1R_CMPM_Pos                    (21UL)                    /*!< ADC CMP1R: CMPM (Bit 21)                                    */
#define ADC_CMP1R_CMPM_Msk                    (0x200000UL)              /*!< ADC CMP1R: CMPM (Bitfield-Mask: 0x01)                       */
#define ADC_CMP1R_CMPEN_Pos                   (23UL)                    /*!< ADC CMP1R: CMPEN (Bit 23)                                   */
#define ADC_CMP1R_CMPEN_Msk                   (0x800000UL)              /*!< ADC CMP1R: CMPEN (Bitfield-Mask: 0x01)                      */
#define ADC_CMP1R_MATCH_CNT_Pos               (26UL)                    /*!< ADC CMP1R: MATCH_CNT (Bit 26)                               */
#define ADC_CMP1R_MATCH_CNT_Msk               (0xfc000000UL)            /*!< ADC CMP1R: MATCH_CNT (Bitfield-Mask: 0x3f)                  */


/* ================================================================================ */
/* ================          struct 'CMP' Position & Mask          ================ */
/* ================================================================================ */


/* --------------------------------  CMP_CMP0_CONF  ------------------------------- */
#define CMP_CMP0_CONF_CINPSEL_Pos             (0UL)                     /*!< CMP CMP0_CONF: CINPSEL (Bit 0)                              */
#define CMP_CMP0_CONF_CINPSEL_Msk             (0x3UL)                   /*!< CMP CMP0_CONF: CINPSEL (Bitfield-Mask: 0x03)                */
#define CMP_CMP0_CONF_CINNSEL_Pos             (4UL)                     /*!< CMP CMP0_CONF: CINNSEL (Bit 4)                              */
#define CMP_CMP0_CONF_CINNSEL_Msk             (0x30UL)                  /*!< CMP CMP0_CONF: CINNSEL (Bitfield-Mask: 0x03)                */
#define CMP_CMP0_CONF_INTTYPE_Pos             (8UL)                     /*!< CMP CMP0_CONF: INTTYPE (Bit 8)                              */
#define CMP_CMP0_CONF_INTTYPE_Msk             (0x300UL)                 /*!< CMP CMP0_CONF: INTTYPE (Bitfield-Mask: 0x03)                */
#define CMP_CMP0_CONF_INTPOL_Pos              (10UL)                    /*!< CMP CMP0_CONF: INTPOL (Bit 10)                              */
#define CMP_CMP0_CONF_INTPOL_Msk              (0x400UL)                 /*!< CMP CMP0_CONF: INTPOL (Bitfield-Mask: 0x01)                 */
#define CMP_CMP0_CONF_HYSSEL_Pos              (16UL)                    /*!< CMP CMP0_CONF: HYSSEL (Bit 16)                              */
#define CMP_CMP0_CONF_HYSSEL_Msk              (0x30000UL)               /*!< CMP CMP0_CONF: HYSSEL (Bitfield-Mask: 0x03)                 */
#define CMP_CMP0_CONF_HYSEN_Pos               (20UL)                    /*!< CMP CMP0_CONF: HYSEN (Bit 20)                               */
#define CMP_CMP0_CONF_HYSEN_Msk               (0x100000UL)              /*!< CMP CMP0_CONF: HYSEN (Bitfield-Mask: 0x01)                  */
#define CMP_CMP0_CONF_FLTSEL_Pos              (24UL)                    /*!< CMP CMP0_CONF: FLTSEL (Bit 24)                              */
#define CMP_CMP0_CONF_FLTSEL_Msk              (0x3f000000UL)            /*!< CMP CMP0_CONF: FLTSEL (Bitfield-Mask: 0x3f)                 */
#define CMP_CMP0_CONF_FLTDIV_Pos              (30UL)                    /*!< CMP CMP0_CONF: FLTDIV (Bit 30)                              */
#define CMP_CMP0_CONF_FLTDIV_Msk              (0xc0000000UL)            /*!< CMP CMP0_CONF: FLTDIV (Bitfield-Mask: 0x03)                 */

/* --------------------------------  CMP_CMP0_CTRL  ------------------------------- */
#define CMP_CMP0_CTRL_CMPEN_Pos               (0UL)                     /*!< CMP CMP0_CTRL: CMPEN (Bit 0)                                */
#define CMP_CMP0_CTRL_CMPEN_Msk               (0x1UL)                   /*!< CMP CMP0_CTRL: CMPEN (Bitfield-Mask: 0x01)                  */
#define CMP_CMP0_CTRL_CMPINTEN_Pos            (8UL)                     /*!< CMP CMP0_CTRL: CMPINTEN (Bit 8)                             */
#define CMP_CMP0_CTRL_CMPINTEN_Msk            (0x100UL)                 /*!< CMP CMP0_CTRL: CMPINTEN (Bitfield-Mask: 0x01)               */

/* --------------------------------  CMP_CMP0_STAT  ------------------------------- */
#define CMP_CMP0_STAT_CMPFLAG_Pos             (0UL)                     /*!< CMP CMP0_STAT: CMPFLAG (Bit 0)                              */
#define CMP_CMP0_STAT_CMPFLAG_Msk             (0x1UL)                   /*!< CMP CMP0_STAT: CMPFLAG (Bitfield-Mask: 0x01)                */
#define CMP_CMP0_STAT_CMPINTF_Pos             (8UL)                     /*!< CMP CMP0_STAT: CMPINTF (Bit 8)                              */
#define CMP_CMP0_STAT_CMPINTF_Msk             (0x100UL)                 /*!< CMP CMP0_STAT: CMPINTF (Bitfield-Mask: 0x01)                */

/* --------------------------------  CMP_CMP1_CONF  ------------------------------- */
#define CMP_CMP1_CONF_CINPSEL_Pos             (0UL)                     /*!< CMP CMP1_CONF: CINPSEL (Bit 0)                              */
#define CMP_CMP1_CONF_CINPSEL_Msk             (0x3UL)                   /*!< CMP CMP1_CONF: CINPSEL (Bitfield-Mask: 0x03)                */
#define CMP_CMP1_CONF_CINNSEL_Pos             (4UL)                     /*!< CMP CMP1_CONF: CINNSEL (Bit 4)                              */
#define CMP_CMP1_CONF_CINNSEL_Msk             (0x30UL)                  /*!< CMP CMP1_CONF: CINNSEL (Bitfield-Mask: 0x03)                */
#define CMP_CMP1_CONF_INTTYPE_Pos             (8UL)                     /*!< CMP CMP1_CONF: INTTYPE (Bit 8)                              */
#define CMP_CMP1_CONF_INTTYPE_Msk             (0x300UL)                 /*!< CMP CMP1_CONF: INTTYPE (Bitfield-Mask: 0x03)                */
#define CMP_CMP1_CONF_INTPOL_Pos              (10UL)                    /*!< CMP CMP1_CONF: INTPOL (Bit 10)                              */
#define CMP_CMP1_CONF_INTPOL_Msk              (0x400UL)                 /*!< CMP CMP1_CONF: INTPOL (Bitfield-Mask: 0x01)                 */
#define CMP_CMP1_CONF_HYSSEL_Pos              (16UL)                    /*!< CMP CMP1_CONF: HYSSEL (Bit 16)                              */
#define CMP_CMP1_CONF_HYSSEL_Msk              (0x30000UL)               /*!< CMP CMP1_CONF: HYSSEL (Bitfield-Mask: 0x03)                 */
#define CMP_CMP1_CONF_HYSEN_Pos               (20UL)                    /*!< CMP CMP1_CONF: HYSEN (Bit 20)                               */
#define CMP_CMP1_CONF_HYSEN_Msk               (0x100000UL)              /*!< CMP CMP1_CONF: HYSEN (Bitfield-Mask: 0x01)                  */
#define CMP_CMP1_CONF_FLTSEL_Pos              (24UL)                    /*!< CMP CMP1_CONF: FLTSEL (Bit 24)                              */
#define CMP_CMP1_CONF_FLTSEL_Msk              (0x3f000000UL)            /*!< CMP CMP1_CONF: FLTSEL (Bitfield-Mask: 0x3f)                 */
#define CMP_CMP1_CONF_FLTDIV_Pos              (30UL)                    /*!< CMP CMP1_CONF: FLTDIV (Bit 30)                              */
#define CMP_CMP1_CONF_FLTDIV_Msk              (0xc0000000UL)            /*!< CMP CMP1_CONF: FLTDIV (Bitfield-Mask: 0x03)                 */

/* --------------------------------  CMP_CMP1_CTRL  ------------------------------- */
#define CMP_CMP1_CTRL_CMPEN_Pos               (0UL)                     /*!< CMP CMP1_CTRL: CMPEN (Bit 0)                                */
#define CMP_CMP1_CTRL_CMPEN_Msk               (0x1UL)                   /*!< CMP CMP1_CTRL: CMPEN (Bitfield-Mask: 0x01)                  */
#define CMP_CMP1_CTRL_CMPINTEN_Pos            (8UL)                     /*!< CMP CMP1_CTRL: CMPINTEN (Bit 8)                             */
#define CMP_CMP1_CTRL_CMPINTEN_Msk            (0x100UL)                 /*!< CMP CMP1_CTRL: CMPINTEN (Bitfield-Mask: 0x01)               */

/* --------------------------------  CMP_CMP1_STAT  ------------------------------- */
#define CMP_CMP1_STAT_CMPFLAG_Pos             (0UL)                     /*!< CMP CMP1_STAT: CMPFLAG (Bit 0)                              */
#define CMP_CMP1_STAT_CMPFLAG_Msk             (0x1UL)                   /*!< CMP CMP1_STAT: CMPFLAG (Bitfield-Mask: 0x01)                */
#define CMP_CMP1_STAT_CMPINTF_Pos             (8UL)                     /*!< CMP CMP1_STAT: CMPINTF (Bit 8)                              */
#define CMP_CMP1_STAT_CMPINTF_Msk             (0x100UL)                 /*!< CMP CMP1_STAT: CMPINTF (Bitfield-Mask: 0x01)                */

/* --------------------------------  CMP_CMP_DBCR  -------------------------------- */
#define CMP_CMP_DBCR_DBEN_Pos                 (0UL)                     /*!< CMP CMP_DBCR: DBEN (Bit 0)                                  */
#define CMP_CMP_DBCR_DBEN_Msk                 (0x1UL)                   /*!< CMP CMP_DBCR: DBEN (Bitfield-Mask: 0x01)                    */


/* ================================================================================ */
/* ================          struct 'CRC' Position & Mask          ================ */
/* ================================================================================ */


/* ----------------------------------  CRC_CTRL  ---------------------------------- */
#define CRC_CTRL_INIT_EN_Pos                  (0UL)                     /*!< CRC CTRL: INIT_EN (Bit 0)                                   */
#define CRC_CTRL_INIT_EN_Msk                  (0x1UL)                   /*!< CRC CTRL: INIT_EN (Bitfield-Mask: 0x01)                     */
#define CRC_CTRL_POLY_Pos                     (1UL)                     /*!< CRC CTRL: POLY (Bit 1)                                      */
#define CRC_CTRL_POLY_Msk                     (0x6UL)                   /*!< CRC CTRL: POLY (Bitfield-Mask: 0x03)                        */
#define CRC_CTRL_DMADINTEN_Pos                (8UL)                     /*!< CRC CTRL: DMADINTEN (Bit 8)                                 */
#define CRC_CTRL_DMADINTEN_Msk                (0x100UL)                 /*!< CRC CTRL: DMADINTEN (Bitfield-Mask: 0x01)                   */
#define CRC_CTRL_IN_REV_Pos                   (16UL)                    /*!< CRC CTRL: IN_REV (Bit 16)                                   */
#define CRC_CTRL_IN_REV_Msk                   (0x10000UL)               /*!< CRC CTRL: IN_REV (Bitfield-Mask: 0x01)                      */
#define CRC_CTRL_OUT_REV_Pos                  (20UL)                    /*!< CRC CTRL: OUT_REV (Bit 20)                                  */
#define CRC_CTRL_OUT_REV_Msk                  (0x100000UL)              /*!< CRC CTRL: OUT_REV (Bitfield-Mask: 0x01)                     */
#define CRC_CTRL_OUT_INV_Pos                  (21UL)                    /*!< CRC CTRL: OUT_INV (Bit 21)                                  */
#define CRC_CTRL_OUT_INV_Msk                  (0x200000UL)              /*!< CRC CTRL: OUT_INV (Bitfield-Mask: 0x01)                     */

/* ----------------------------------  CRC_INIT  ---------------------------------- */
#define CRC_INIT_INIT_EN_Pos                  (0UL)                     /*!< CRC INIT: INIT_EN (Bit 0)                                   */
#define CRC_INIT_INIT_EN_Msk                  (0xffffffffUL)            /*!< CRC INIT: INIT_EN (Bitfield-Mask: 0xffffffff)               */

/* -----------------------------------  CRC_IDR  ---------------------------------- */
#define CRC_IDR_IDR_Pos                       (0UL)                     /*!< CRC IDR: IDR (Bit 0)                                        */
#define CRC_IDR_IDR_Msk                       (0xffffffffUL)            /*!< CRC IDR: IDR (Bitfield-Mask: 0xffffffff)                    */

/* -----------------------------------  CRC_ODR  ---------------------------------- */
#define CRC_ODR_ODR_Pos                       (0UL)                     /*!< CRC ODR: ODR (Bit 0)                                        */
#define CRC_ODR_ODR_Msk                       (0xffffffffUL)            /*!< CRC ODR: ODR (Bitfield-Mask: 0xffffffff)                    */

/* ----------------------------------  CRC_STAT  ---------------------------------- */
#define CRC_STAT_DMADINT_Pos                  (8UL)                     /*!< CRC STAT: DMADINT (Bit 8)                                   */
#define CRC_STAT_DMADINT_Msk                  (0x100UL)                 /*!< CRC STAT: DMADINT (Bitfield-Mask: 0x01)                     */


/* ================================================================================ */
/* ================         struct 'DBGMCU' Position & Mask        ================ */
/* ================================================================================ */


/* ----------------------------------  DBGMCU_CR  --------------------------------- */
#define DBGMCU_CR_DBG_STOP_Pos                (1UL)                     /*!< DBGMCU CR: DBG_STOP (Bit 1)                                 */
#define DBGMCU_CR_DBG_STOP_Msk                (0x2UL)                   /*!< DBGMCU CR: DBG_STOP (Bitfield-Mask: 0x01)                   */
#define DBGMCU_CR_DBG_IWDT_STOP_Pos           (8UL)                     /*!< DBGMCU CR: DBG_IWDT_STOP (Bit 8)                            */
#define DBGMCU_CR_DBG_IWDT_STOP_Msk           (0x100UL)                 /*!< DBGMCU CR: DBG_IWDT_STOP (Bitfield-Mask: 0x01)              */
#define DBGMCU_CR_DBG_FRT_STOP_Pos            (10UL)                    /*!< DBGMCU CR: DBG_FRT_STOP (Bit 10)                            */
#define DBGMCU_CR_DBG_FRT_STOP_Msk            (0x400UL)                 /*!< DBGMCU CR: DBG_FRT_STOP (Bitfield-Mask: 0x01)               */
#define DBGMCU_CR_DBG_TIMER0_STOP_Pos         (12UL)                    /*!< DBGMCU CR: DBG_TIMER0_STOP (Bit 12)                         */
#define DBGMCU_CR_DBG_TIMER0_STOP_Msk         (0x1000UL)                /*!< DBGMCU CR: DBG_TIMER0_STOP (Bitfield-Mask: 0x01)            */
#define DBGMCU_CR_DBG_TIMER1_STOP_Pos         (13UL)                    /*!< DBGMCU CR: DBG_TIMER1_STOP (Bit 13)                         */
#define DBGMCU_CR_DBG_TIMER1_STOP_Msk         (0x2000UL)                /*!< DBGMCU CR: DBG_TIMER1_STOP (Bitfield-Mask: 0x01)            */
#define DBGMCU_CR_DBG_TIMER2_STOP_Pos         (14UL)                    /*!< DBGMCU CR: DBG_TIMER2_STOP (Bit 14)                         */
#define DBGMCU_CR_DBG_TIMER2_STOP_Msk         (0x4000UL)                /*!< DBGMCU CR: DBG_TIMER2_STOP (Bitfield-Mask: 0x01)            */
#define DBGMCU_CR_DBG_TIMER3_STOP_Pos         (15UL)                    /*!< DBGMCU CR: DBG_TIMER3_STOP (Bit 15)                         */
#define DBGMCU_CR_DBG_TIMER3_STOP_Msk         (0x8000UL)                /*!< DBGMCU CR: DBG_TIMER3_STOP (Bitfield-Mask: 0x01)            */
#define DBGMCU_CR_DBG_TIMER4_STOP_Pos         (16UL)                    /*!< DBGMCU CR: DBG_TIMER4_STOP (Bit 16)                         */
#define DBGMCU_CR_DBG_TIMER4_STOP_Msk         (0x10000UL)               /*!< DBGMCU CR: DBG_TIMER4_STOP (Bitfield-Mask: 0x01)            */
#define DBGMCU_CR_DBG_TIMER5_STOP_Pos         (17UL)                    /*!< DBGMCU CR: DBG_TIMER5_STOP (Bit 17)                         */
#define DBGMCU_CR_DBG_TIMER5_STOP_Msk         (0x20000UL)               /*!< DBGMCU CR: DBG_TIMER5_STOP (Bitfield-Mask: 0x01)            */
#define DBGMCU_CR_DBG_TIMER6_STOP_Pos         (18UL)                    /*!< DBGMCU CR: DBG_TIMER6_STOP (Bit 18)                         */
#define DBGMCU_CR_DBG_TIMER6_STOP_Msk         (0x40000UL)               /*!< DBGMCU CR: DBG_TIMER6_STOP (Bitfield-Mask: 0x01)            */
#define DBGMCU_CR_DBG_TIMER7_STOP_Pos         (19UL)                    /*!< DBGMCU CR: DBG_TIMER7_STOP (Bit 19)                         */
#define DBGMCU_CR_DBG_TIMER7_STOP_Msk         (0x80000UL)               /*!< DBGMCU CR: DBG_TIMER7_STOP (Bitfield-Mask: 0x01)            */
#define DBGMCU_CR_DBG_TIMER8_STOP_Pos         (20UL)                    /*!< DBGMCU CR: DBG_TIMER8_STOP (Bit 20)                         */
#define DBGMCU_CR_DBG_TIMER8_STOP_Msk         (0x100000UL)              /*!< DBGMCU CR: DBG_TIMER8_STOP (Bitfield-Mask: 0x01)            */
#define DBGMCU_CR_DBG_TIMER9_STOP_Pos         (21UL)                    /*!< DBGMCU CR: DBG_TIMER9_STOP (Bit 21)                         */
#define DBGMCU_CR_DBG_TIMER9_STOP_Msk         (0x200000UL)              /*!< DBGMCU CR: DBG_TIMER9_STOP (Bitfield-Mask: 0x01)            */



/* ================================================================================ */
/* ================              Peripheral memory map             ================ */
/* ================================================================================ */

#define CHIPCONFIG_BASE                 0x4000F000UL
#define SCU_BASE                        0x40000000UL
#define PA_BASE                         0x40090000UL
#define PB_BASE                         0x40090100UL
#define PC_BASE                         0x40090200UL
#define PD_BASE                         0x40090300UL
#define PE_BASE                         0x40090400UL
#define PF_BASE                         0x40090500UL
#define PORTRSTDBCR_BASE                0x40090F0CUL
#define PORTEN_BASE                     0x40090FF0UL
#define CFMC_BASE                       0x40080000UL
#define HSICMU_BASE                     0x40004000UL
#define DMA0_BASE                       0x40000400UL
#define DMA1_BASE                       0x40000410UL
#define DMA2_BASE                       0x40000420UL
#define DMA3_BASE                       0x40000430UL
#define DMA4_BASE                       0x40000440UL
#define DMA5_BASE                       0x40000450UL
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
#define FRT_BASE                        0x40000600UL
#define UART0_BASE                      0x40008000UL
#define UART1_BASE                      0x40008100UL
#define I2C0_BASE                       0x4000A000UL
#define I2C1_BASE                       0x4000A100UL
#define I2C2_BASE                       0x4000A200UL
#define USART10_BASE                    0x40001000UL
#define USART11_BASE                    0x40001100UL
#define USART12_BASE                    0x40001200UL
#define ADC_BASE                        0x40092000UL
#define CMP_BASE                        0x4000B380UL
#define CRC_BASE                        0x40082000UL
#define DBGMCU_BASE                     0x4000F020UL


/* ================================================================================ */
/* ================             Peripheral declaration             ================ */
/* ================================================================================ */

#define CHIPCONFIG                      ((CHIPCONFIG_Type         *) CHIPCONFIG_BASE)
#define SCU                             ((SCU_Type                *) SCU_BASE)
#define PA                              ((PCU_Type                *) PA_BASE)
#define PB                              ((PCU_Type                *) PB_BASE)
#define PC                              ((PCU_Type                *) PC_BASE)
#define PD                              ((PCU_Type                *) PD_BASE)
#define PE                              ((PCU_Type                *) PE_BASE)
#define PF                              ((PCU_Type                *) PF_BASE)
#define PORTRSTDBCR                     ((PORTRSTDBCR_Type        *) PORTRSTDBCR_BASE)
#define PORTEN                          ((PORTEN_Type             *) PORTEN_BASE)
#define CFMC                            ((CFMC_Type               *) CFMC_BASE)
#define HSICMU                          ((HSICMU_Type             *) HSICMU_BASE)
#define DMA0                            ((DMA_Type                *) DMA0_BASE)
#define DMA1                            ((DMA_Type                *) DMA1_BASE)
#define DMA2                            ((DMA_Type                *) DMA2_BASE)
#define DMA3                            ((DMA_Type                *) DMA3_BASE)
#define DMA4                            ((DMA_Type                *) DMA4_BASE)
#define DMA5                            ((DMA_Type                *) DMA5_BASE)
#define WDT                             ((WDT_Type                *) WDT_BASE)
#define TIMER0                          ((TIMER_Type              *) TIMER0_BASE)
#define TIMER1                          ((TIMER_Type              *) TIMER1_BASE)
#define TIMER2                          ((TIMER_Type              *) TIMER2_BASE)
#define TIMER3                          ((TIMER_Type              *) TIMER3_BASE)
#define TIMER4                          ((TIMER_Type              *) TIMER4_BASE)
#define TIMER5                          ((TIMER_Type              *) TIMER5_BASE)
#define TIMER6                          ((TIMER_Type              *) TIMER6_BASE)
#define TIMER7                          ((TIMER_Type              *) TIMER7_BASE)
#define TIMER8                          ((TIMER_Type              *) TIMER8_BASE)
#define TIMER9                          ((TIMER_Type              *) TIMER9_BASE)
#define FRT                             ((FRT_Type                *) FRT_BASE)
#define UART0                           ((UART_Type               *) UART0_BASE)
#define UART1                           ((UART_Type               *) UART1_BASE)
#define I2C0                            ((I2C_Type                *) I2C0_BASE)
#define I2C1                            ((I2C_Type                *) I2C1_BASE)
#define I2C2                            ((I2C_Type                *) I2C2_BASE)
#define USART10                         ((USART_Type              *) USART10_BASE)
#define USART11                         ((USART_Type              *) USART11_BASE)
#define USART12                         ((USART_Type              *) USART12_BASE)
#define ADC                             ((ADC_Type                *) ADC_BASE)
#define CMP                             ((CMP_Type                *) CMP_BASE)
#define CRC                             ((CRC_Type                *) CRC_BASE)
#define DBGMCU                          ((DBGMCU_Type             *) DBGMCU_BASE)


/** @} */ /* End of group Device_Peripheral_Registers */
/** @} */ /* End of group A31C14x */
/** @} */ /* End of group ABOV Semiconductor Co., Ltd. */

#ifdef __cplusplus
}
#endif


#endif  /* A31C14x_H */

