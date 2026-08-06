/**
 *******************************************************************************
 * @file    TMPM390.h
 * @brief   CMSIS Cortex-M3 Core Peripheral Access Layer Header File for the
 *          TOSHIBA 'TMPM390' Device Series
 * @version V2.0.2.2 (Tentative)
 * @date    2011/01/14
 * 
 * THE SOURCE CODE AND ITS RELATED DOCUMENTATION IS PROVIDED "AS IS". TOSHIBA
 * CORPORATION MAKES NO OTHER WARRANTY OF ANY KIND, WHETHER EXPRESS, IMPLIED OR,
 * STATUTORY AND DISCLAIMS ANY AND ALL IMPLIED WARRANTIES OF MERCHANTABILITY,
 * SATISFACTORY QUALITY, NON INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
 * 
 * THE SOURCE CODE AND DOCUMENTATION MAY INCLUDE ERRORS. TOSHIBA CORPORATION
 * RESERVES THE RIGHT TO INCORPORATE MODIFICATIONS TO THE SOURCE CODE IN LATER
 * REVISIONS OF IT, AND TO MAKE IMPROVEMENTS OR CHANGES IN THE DOCUMENTATION OR
 * THE PRODUCTS OR TECHNOLOGIES DESCRIBED THEREIN AT ANY TIME.
 * 
 * TOSHIBA CORPORATION SHALL NOT BE LIABLE FOR ANY DIRECT, INDIRECT OR
 * CONSEQUENTIAL DAMAGE OR LIABILITY ARISING FROM YOUR USE OF THE SOURCE CODE OR
 * ANY DOCUMENTATION, INCLUDING BUT NOT LIMITED TO, LOST REVENUES, DATA OR
 * PROFITS, DAMAGES OF ANY SPECIAL, INCIDENTAL OR CONSEQUENTIAL NATURE, PUNITIVE
 * DAMAGES, LOSS OF PROPERTY OR LOSS OF PROFITS ARISING OUT OF OR IN CONNECTION
 * WITH THIS AGREEMENT, OR BEING UNUSABLE, EVEN IF ADVISED OF THE POSSIBILITY OR
 * PROBABILITY OF SUCH DAMAGES AND WHETHER A CLAIM FOR SUCH DAMAGE IS BASED UPON
 * WARRANTY, CONTRACT, TORT, NEGLIGENCE OR OTHERWISE.
 * 
 * (C)Copyright TOSHIBA CORPORATION 2011 All rights reserved
 *******************************************************************************
 */

/** @addtogroup TOSHIBA_TX03_MICROCONTROLLER
  * @{
  */

/** @addtogroup TMPM390
  * @{
  */

#ifndef __TMPM390_H__
#define __TMPM390_H__

#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup Configuration_of_CMSIS
  * @{
  */

/** Interrupt Number Definition */
typedef enum IRQn
{
/******  Cortex-M3 Processor Exceptions Numbers ***************************************************************/
  NonMaskableInt_IRQn           = -14,       /*!< 2 Non Maskable Interrupt                                    */
  HardFault_IRQn                = -13,       /*!< 3 Cortex-M3 Hard Fault Interrupt                            */
  MemoryManagement_IRQn         = -12,       /*!< 4 Cortex-M3 Memory Management Interrupt                     */
  BusFault_IRQn                 = -11,       /*!< 5 Cortex-M3 Bus Fault Interrupt                             */
  UsageFault_IRQn               = -10,       /*!< 6 Cortex-M3 Usage Fault Interrupt                           */
  SVCall_IRQn                   = -5,        /*!< 11 Cortex-M3 SV Call Interrupt                              */
  DebugMonitor_IRQn             = -4,        /*!< 12 Cortex-M3 Debug Monitor Interrupt                        */
  PendSV_IRQn                   = -2,        /*!< 14 Cortex-M3 Pend SV Interrupt                              */
  SysTick_IRQn                  = -1,        /*!< 15 Cortex-M3 System Tick Interrupt                          */

/******  TMPM390 Specific Interrupt Numbers *******************************************************************/
  INT0_IRQn                     = 0,         /*!< Interrupt pin 0                                             */
  INT1_IRQn                     = 1,         /*!< Interrupt pin 1                                             */
  INT2_IRQn                     = 2,         /*!< Interrupt pin 2                                             */
  INT3_IRQn                     = 3,         /*!< Interrupt pin 3                                             */
  INT4_IRQn                     = 4,         /*!< Interrupt pin 4                                             */
  INT5_IRQn                     = 5,         /*!< Interrupt pin 5                                             */
  INTRX0_IRQn                   = 6,         /*!< Serial reception (channel.0)                                */
  INTTX0_IRQn                   = 7,         /*!< Serial transmission (channel.0)                             */
  INTRX1_IRQn                   = 8,         /*!< Serial reception (channel.1)                                */
  INTTX1_IRQn                   = 9,         /*!< Serial transmission (channel.1)                             */
  I2CINT0_IRQn                  = 10,        /*!< Serial bus interface0                                       */
  INTSBI1_IRQn                  = 11,        /*!< Serial bus interface 1                                      */
  INTCECRX_IRQn                 = 12,        /*!< CEC reception                                               */
  INTCECTX_IRQn                 = 13,        /*!< CEC transmission                                            */
  INTRMCRX0_IRQn                = 14,        /*!< Remote control signal reception channel.0                   */
  INTADHP_IRQn                  = 15,        /*!< Highest priority AD conversion complete interrupt           */
  INTADM0_IRQn                  = 16,        /*!< AD conversion monitoring function interrupt 0               */
  INTADM1_IRQn                  = 17,        /*!< AD conversion monitoring function interrupt 1               */
  INTTB0_IRQn                   = 18,        /*!< 16-bit TMRB match detection 0                               */
  INTTB1_IRQn                   = 19,        /*!< 16-bit TMRB match detection 1                               */
  INTTB2_IRQn                   = 20,        /*!< 16-bit TMRB match detection 2                               */
  INTTB3_IRQn                   = 21,        /*!< 16-bit TMRB match detection 3                               */
  INTTB4_IRQn                   = 22,        /*!< 16-bit TMRB match detection 4                               */
  INTTB5_IRQn                   = 23,        /*!< 16-bit TMRB match detection 5                               */
  INTTB6_IRQn                   = 24,        /*!< 16-bit TMRB match detection 6                               */
  INTRTC_IRQn                   = 25,        /*!< RTC(Real time clock) interrupt                              */
  INTCAP00_IRQn                 = 26,        /*!< 16-bit TMRB input capture 00                                */
  INTCAP01_IRQn                 = 27,        /*!< 16-bit TMRB input capture 01                                */
  INTCAP10_IRQn                 = 28,        /*!< 16-bit TMRB input capture 10                                */
  INTCAP11_IRQn                 = 29,        /*!< 16-bit TMRB input capture 11                                */
  INTCAP50_IRQn                 = 30,        /*!< 16-bit TMRB input capture 50                                */
  INTCAP51_IRQn                 = 31,        /*!< 16-bit TMRB input capture 51                                */
  INTCAP60_IRQn                 = 32,        /*!< 16-bit TMRB input capture 60                                */
  INTCAP61_IRQn                 = 33,        /*!< 16-bit TMRB input capture 61                                */
  INT6_IRQn                     = 34,        /*!< Interrupt pin 6                                             */
  INT7_IRQn                     = 35,        /*!< Interrupt pin 7                                             */
  INTRX2_IRQn                   = 36,        /*!< Serial reception (channel.2)                                */
  INTTX2_IRQn                   = 37,        /*!< Serial transmission (channel.2)                             */
  INTLVD_IRQn                   = 38,        /*!< Low voltage detection                                       */
  INTRMCRX1_IRQn                = 39,        /*!< Remote control signal reception channel.1                   */
  INTTB7_IRQn                   = 40,        /*!< 16-bit TMRB match detection 7                               */
  INTTB8_IRQn                   = 41,        /*!< 16-bit TMRB match detection 8                               */
  INTPHT_IRQn                   = 42,        /*!< 16-bit TMRB 2phase-puls counter                             */
  INTCAP20_IRQn                 = 43,        /*!< 16-bit TMRB input capture 20                                */
  INTCAP21_IRQn                 = 44,        /*!< 16-bit TMRB input capture 21                                */
  INTCAP30_IRQn                 = 45,        /*!< 16-bit TMRB input capture 30                                */
  INTCAP31_IRQn                 = 46,        /*!< 16-bit TMRB input capture 31                                */
  INTCAP40_IRQn                 = 47,        /*!< 16-bit TMRB input capture 40                                */
  INTCAP41_IRQn                 = 48,        /*!< 16-bit TMRB input capture 41                                */
  INTAD_IRQn                    = 49,        /*!< AD conversion completion                                    */
  INT8_IRQn                     = 50,        /*!< Interrupt pin PK3                                           */
  INT9_IRQn                     = 51,        /*!< Interrupt pin PK4                                           */
  INT10_IRQn                    = 52,        /*!< Interrupt pin PK5                                           */
  INTSPI0_IRQn                  = 53,        /*!< SPI serial interface(Channel.0)                             */
  INTSPI1_IRQn                  = 54,        /*!< SPI serial interface(Channel.1)                             */
  INTSPI2_IRQn                  = 55,        /*!< SPI serial interface(Channel.2)                             */
  INTSPI3_IRQn                  = 56         /*!< SPI serial interface(Channel.3)                             */
} IRQn_Type;

/** Processor and Core Peripheral Section */

/* Configuration of the Cortex-M3 Processor and Core Peripherals */
#define __CM3_REV              0x0200       /*!< Cortex-M3 Core Revision                           */
#define __MPU_PRESENT             0         /*!< MPU present or not                                */
#define __NVIC_PRIO_BITS          3         /*!< Number of Bits used for Priority Levels           */
#define __Vendor_SysTickConfig    0         /*!< Set to 1 if different SysTick Config is used      */

/** @} */ /* End of group Configuration_of_CMSIS */

#include "core_cm3.h"                       /* Cortex-M3 processor and core peripherals            */
// Note: Changed for MikroE implementation.
// #include "system_TMPM390.h"                 /* TMPM390 System                                      */

/** @addtogroup Device_Peripheral_registers
  * @{
  */

/** Device Specific Peripheral registers structures */

/**
  * @brief Synchronous Serial Port
  */
typedef struct
{
  __IO uint32_t CR0;               /*!< SSP Control Register 0                       */
  __IO uint32_t CR1;               /*!< SSP Control Register 1                       */
  __IO uint32_t DR;                /*!< SSP Data Register                            */
  __I  uint32_t SR;                /*!< SSP Status Register                          */
  __IO uint32_t CPSR;              /*!< SSP Clock Prescaler Register                 */
  __IO uint32_t IMSC;              /*!< SSP Interrupt Mask Set and Clear Register    */
  __I  uint32_t RIS;               /*!< SSP Raw Interrupt Status Register            */
  __I  uint32_t MIS;               /*!< SSP Masked Interrupt Status Register         */
  __O  uint32_t ICR;               /*!< SSP Interrupt Clear Register                 */
} TSB_SSP_TypeDef;

#if defined ( __CC_ARM   )           /* RealView Compiler */
#pragma anon_unions
#elif (defined (__ICCARM__))         /*  ICC Compiler     */
#pragma language=extended
#endif

/**
  * @brief I2C Serial Port
  */
typedef struct
{
  __IO uint32_t CR1;               /*!< I2C Control register 1                       */
  __IO uint32_t DBR;               /*!< I2C Data buffer register                     */
  __IO uint32_t AR;                /*!< I2C Address register                         */
union {
  __IO uint32_t CR2;               /*!< I2C Control register 2                       */
  __I  uint32_t SR;                /*!< I2C status register                          */
  };
  __IO uint32_t PRS;               /*!< I2C Prescaler clcok set register             */
  __IO uint32_t IE;                /*!< I2C Interrupt enable register                */
  __IO uint32_t IR;                /*!< I2C interrupt register                       */
} TSB_I2C_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PA)
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< PA Data Register                             */
  __IO uint32_t CR;                /*!< PA Control Register                          */
  __IO uint32_t FR1;               /*!< PA Function Register 1                       */
       uint32_t RESERVED0[8];
  __IO uint32_t PUP;               /*!< PA Pull-Up Control Register                  */
  __IO uint32_t PDN;               /*!< PA Pull-Down control Register                */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< PA Input Enable Control Register             */
} TSB_PA_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PB)
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< PB Data Register                             */
  __IO uint32_t CR;                /*!< PB Control Register                          */
  __IO uint32_t FR1;               /*!< PB Function Register 1                       */
       uint32_t RESERVED0[8];
  __IO uint32_t PUP;               /*!< PB Pull-Up Control Register                  */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< PB Input Enable Control Register             */
} TSB_PB_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PC)
  */
typedef struct
{
  __I  uint32_t DATA;              /*!< PC Data Register                             */
       uint32_t RESERVED0[10];
  __IO uint32_t PUP;               /*!< PC Pull-Up Control Register                  */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< PC Input Enable Control Register             */
} TSB_PC_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PD)
  */
typedef struct
{
  __I  uint32_t DATA;              /*!< PD Data Register                             */
       uint32_t RESERVED0;
  __IO uint32_t FR1;               /*!< PD Function Register 1                       */
       uint32_t RESERVED1[8];
  __IO uint32_t PUP;               /*!< PD Pull-Up Control Register                  */
       uint32_t RESERVED2[2];
  __IO uint32_t IE;                /*!< PD Input Enable Control Register             */
} TSB_PD_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PE)
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< PE Data Register                             */
  __IO uint32_t CR;                /*!< PE Control Register                          */
  __IO uint32_t FR1;               /*!< PE Function Register 1                       */
  __IO uint32_t FR2;               /*!< PE Function Register 2                       */
       uint32_t RESERVED0[6];
  __IO uint32_t OD;                /*!< PE Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PE Pull-Up Control Register                  */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< PE Input Enable Control Register             */
} TSB_PE_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PF)
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< PF Data Register                             */
  __IO uint32_t CR;                /*!< PF Control Register                          */
  __IO uint32_t FR1;               /*!< PF Function Register 1                       */
  __IO uint32_t FR2;               /*!< PF Function Register 2                       */
       uint32_t RESERVED0[6];
  __IO uint32_t OD;                /*!< PF Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PF Pull-Up Control Register                  */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< PF Input Enable Control Register             */
} TSB_PF_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PG)
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< PG Data Register                             */
  __IO uint32_t CR;                /*!< PG Control Register                          */
  __IO uint32_t FR1;               /*!< PG Function Register 1                       */
       uint32_t RESERVED0[7];
  __IO uint32_t OD;                /*!< PG Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PG Pull-Up Control Register                  */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< PG Input Enable Control Register             */
} TSB_PG_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PH)
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< PH Data Register                             */
  __IO uint32_t CR;                /*!< PH Control Register                          */
  __IO uint32_t FR1;               /*!< PH Function Register 1                       */
       uint32_t RESERVED0[7];
  __IO uint32_t OD;                /*!< PH Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PH Pull-Up Control Register                  */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< PH Input Enable Control Register             */
} TSB_PH_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PI)
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< PI Data Register                             */
  __IO uint32_t CR;                /*!< PI Control Register                          */
  __IO uint32_t FR1;               /*!< PI Function Register 1                       */
       uint32_t RESERVED0[7];
  __IO uint32_t OD;                /*!< PI Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PI Pull-Up Control Register                  */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< PI Input Enable Control Register             */
} TSB_PI_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PJ)
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< PJ Data Register                             */
  __IO uint32_t CR;                /*!< PJ Control Register                          */
  __IO uint32_t FR1;               /*!< PJ Function Register 1                       */
       uint32_t RESERVED0[8];
  __IO uint32_t PUP;               /*!< PJ Pull-Up Control Register                  */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< PJ Input Enable Control Register             */
} TSB_PJ_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PK)
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< PK Data Register                             */
  __IO uint32_t CR;                /*!< PK Control Register                          */
  __IO uint32_t FR1;               /*!< PK Function Register 1                       */
  __IO uint32_t FR2;               /*!< PK Function Register 2                       */
  __IO uint32_t FR3;               /*!< PK Function Register 3                       */
       uint32_t RESERVED0[6];
  __IO uint32_t PUP;               /*!< PK Pull-Up Control Register                  */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< PK Input Enable Control Register             */
} TSB_PK_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PL)
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< PL Data Register                             */
  __IO uint32_t CR;                /*!< PL Control Register                          */
  __IO uint32_t FR1;               /*!< PL Function Register 1                       */
       uint32_t RESERVED0[7];
  __IO uint32_t OD;                /*!< PL Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PL Pull-Up Control Register                  */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< PL Input Enable Control Register             */
} TSB_PL_TypeDef;


/**
  * @brief 16-bit Timer/Event Counter (TB)
  */
typedef struct
{
  __IO uint32_t EN;                /*!< TB Enable Register                           */
  __IO uint32_t RUN;               /*!< TB RUN Register                              */
  __IO uint32_t CR;                /*!< TB Control Register                          */
  __IO uint32_t MOD;               /*!< TB Mode Register                             */
  __IO uint32_t FFCR;              /*!< TB Flip-Flop Control Register                */
  __I  uint32_t ST;                /*!< TB Status Register                           */
  __IO uint32_t IM;                /*!< TB Interrupt Mask Register                   */
  __I  uint32_t UC;                /*!< TB Read Capture Register                     */
  __IO uint32_t RG0;               /*!< TB RG0 Timer Register                        */
  __IO uint32_t RG1;               /*!< TB RG1 Timer Register                        */
  __I  uint32_t CP0;               /*!< TB CP0 Capture Register                      */
  __I  uint32_t CP1;               /*!< TB CP1 Capture Register                      */
} TSB_TB_TypeDef;

/**
  * @brief Two-phase Pulse Input Count
  */
typedef struct
{
  __IO uint32_t RUN;               /*!< Two-phase Pulse Input Count Run Register     */
  __IO uint32_t CR;                /*!< Two-phase Pulse Input Count Control Register */
  __IO uint32_t EN;                /*!< Two-phase Pulse Input Count Timer Enable Register */
  __IO uint32_t FLG;               /*!< Two-phase Pulse Input Count Status Register  */
  __IO uint32_t CMP0;              /*!< Two-phase Pulse Input Count Compare Register 0 */
  __IO uint32_t CMP1;              /*!< Two-phase Pulse Input Count Compare Register 1*/
  __I  uint32_t CNT;               /*!< Two-phase Pulse Input Count Counter Read Register*/
} TSB_PHC_TypeDef;

/**
  * @brief Serial Bus Interface (SBI)
  */
typedef struct
{
  __IO uint32_t CR0;               /*!< SBI Control Register 0                       */
  __IO uint32_t CR1;               /*!< SBI Control Register 1 (I2C Mode)            */
  __IO uint32_t DBR;               /*!< SBI Data Buffer Register                     */
  __IO uint32_t I2CAR;             /*!< SBI I2C Bus Address Register                 */
union {
  __O  uint32_t CR2;               /*!< SBI Control Register 2 (I2C Mode)            */
  __I  uint32_t SR;                /*!< SBI Status Register (I2C Mode)               */
  };
  __IO uint32_t BR0;               /*!< SBI Baud Rate Register 0                     */
} TSB_SBI_TypeDef;

/**
  * @brief SBI Interrupt selection register
  */
typedef struct
{
  __IO uint32_t SBISEL;            /*!< I2C_SIO interrupt selection register         */
} TSB_IS2_TypeDef;

/**
  * @brief Serial Channel (SC)
  */
typedef struct
{
  __IO uint32_t EN;                /*!< SC Enable Register                           */
  __IO uint32_t BUF;               /*!< SC Buffer Register                           */
  __IO uint32_t CR;                /*!< SC Control Register                          */
  __IO uint32_t MOD0;              /*!< SC Mode Control Register 0                   */
  __IO uint32_t BRCR;              /*!< SC Baud Rate Generator Control Register      */
  __IO uint32_t BRADD;             /*!< SC Baud Rate Generator Control Register 2    */
  __IO uint32_t MOD1;              /*!< SC Mode Control Register 1                   */
  __IO uint32_t MOD2;              /*!< SC Mode Control Register 2                   */
  __IO uint32_t RFC;               /*!< SC RX FIFO Configuration Register            */
  __IO uint32_t TFC;               /*!< SC TX FIFO Configuration Register            */
  __I  uint32_t RST;               /*!< SC RX FIFO Status Register                   */
  __I  uint32_t TST;               /*!< SC TX FIFO Status Register                   */
  __IO uint32_t FCNF;              /*!< SC FIFO Configuration Register               */
} TSB_SC_TypeDef;

/**
  * @brief SSP Interrupt selection register
  */
typedef struct
{
  __IO uint32_t SSPSEL;            /*!< SSP interrupt selection register             */
} TSB_IS1_TypeDef;

/**
  * @brief 10bit ADC control register
  */
typedef struct
{
  __IO uint32_t CLK;               /*!< AD conversion clock setting register         */
  __IO uint32_t MOD0;              /*!< AD mode control register0                    */
  __IO uint32_t MOD1;              /*!< AD mode control register1                    */
  __IO uint32_t MOD2;              /*!< AD mode control register2                    */
  __IO uint32_t MOD3;              /*!< AD mode control register3                    */
  __IO uint32_t MOD4;              /*!< AD mode control register4                    */
  __IO uint32_t MOD5;              /*!< AD mode control register5                    */
       uint32_t RESERVED0[5];
  __I  uint32_t REG08;             /*!< AD conversion result data register 08        */
  __I  uint32_t REG19;             /*!< AD conversion result data register 19        */
  __I  uint32_t REG2A;             /*!< AD conversion result data register 2A        */
  __I  uint32_t REG3B;             /*!< AD conversion result data register 3B        */
  __I  uint32_t REG4C;             /*!< AD conversion result data register 4C        */
  __I  uint32_t REG5D;             /*!< AD conversion result data register 5D        */
  __I  uint32_t REG6E;             /*!< AD conversion result data register 6E        */
  __I  uint32_t REG7F;             /*!< AD conversion result data register 7F        */
  __I  uint32_t REG88;             /*!< AD conversion result data register 88        */
  __I  uint32_t REG99;             /*!< AD conversion result data register 99        */
  __I  uint32_t REGAA;             /*!< AD conversion result data register AA        */
  __I  uint32_t REGBB;             /*!< AD conversion result data register BB        */
  __I  uint32_t REGSP;             /*!< AD conversion result data register SP        */
  __IO uint32_t CMP0;              /*!< AD conversion result compare register 1      */
  __IO uint32_t CMP1;              /*!< AD conversion result compare register 2      */
} TSB_AD_TypeDef;

/**
  * @brief Watchdog Timer (WD)
  */
typedef struct
{
  __IO uint32_t MOD;               /*!< WD Mode Register                             */
  __O  uint32_t CR;                /*!< WD Control Register                          */
} TSB_WD_TypeDef;

/**
  * @brief RTC control register
  */
typedef struct
{
  __IO uint8_t  SECR;              /*!< RTC Sec setting register                     */
  __IO uint8_t  MINR;              /*!< RTC Min settging register                    */
  __IO uint8_t  HOURR;             /*!< RTC Hour setting register                    */
       uint8_t  RESERVED0;
  __IO uint8_t  DAYR;              /*!< RTC Day setting register                     */
  __IO uint8_t  DATER;             /*!< RTC Date setting register                    */
  __IO uint8_t  MONTHR;            /*!< RTC Month settging register                  */
  __IO uint8_t  YEARR;             /*!< RTC Year setting register                    */
  __IO uint8_t  PAGER;             /*!< RTC Page register                            */
  __IO uint8_t  STA;               /*!< RTC Status Register                          */
       uint8_t  RESERVED1[2];
  __IO uint8_t  RESTR;             /*!< RTC Reset register                           */
       uint8_t  RESERVED2;
  __IO uint8_t  ADJCTL;            /*!< RTC clock adjust control register            */
  __IO uint8_t  ADJDAT;            /*!< RTC clock adjust data register               */
} TSB_RTC_TypeDef;

/**
  * @brief Clock Generator (CG)
  */
typedef struct
{
  __IO uint32_t SYSCR;             /*!< System Control Register                      */
  __IO uint32_t OSCCR;             /*!< Oscillation Control Register                 */
  __IO uint32_t STBYCR;            /*!< Standby Control Register                     */
       uint32_t RESERVED0;
  __IO uint32_t CKSEL;             /*!< System Clock Selection Register              */
  __IO uint32_t ICRCG;             /*!< Timer D Clock Setting Registe                */
  __I  uint32_t NMIFLG;            /*!< NMI status flag register                     */
  __IO uint32_t RSTFLG;            /*!< Reset Flash register                         */
  __IO uint32_t IMCGA;             /*!< CG Interrupt Mode Control Register A         */
  __IO uint32_t IMCGB;             /*!< CG Interrupt Mode Control Register B         */
  __IO uint32_t IMCGC;             /*!< CG Interrupt Mode Control Register C         */
  __IO uint32_t IMCGD;             /*!< CG Interrupt Mode Control Register D         */
  __IO uint32_t IMCGE;             /*!< CG Interrupt Mode Control Register E         */
} TSB_CG_TypeDef;

/**
  * @brief CEC control register
  */
typedef struct
{
  __IO uint32_t EN;                /*!< CEC enable register                          */
  __IO uint32_t ADD;               /*!< CEC Local address register                   */
  __IO uint32_t RESET;             /*!< CEC software reset register                  */
  __IO uint32_t REN;               /*!< CEC reception enable register                */
  __I  uint32_t RBUF;              /*!< CEC reception buffer register                */
  __IO uint32_t RCR1;              /*!< CEC reception control register1              */
  __IO uint32_t RCR2;              /*!< CEC reception control register2              */
  __IO uint32_t RCR3;              /*!< CEC reception control register3              */
  __IO uint32_t TEN;               /*!< CEC Transfer enable register                 */
  __IO uint32_t TBUF;              /*!< CEC Transfer buffer register                 */
  __IO uint32_t TCR;               /*!< CEC Transfter control register               */
  __I  uint32_t RSTAT;             /*!< CEC reception interrupt status register      */
  __I  uint32_t TSTAT;             /*!< CEC transfer interrupt status register       */
} TSB_CEC_TypeDef;

/**
  * @brief Remote signal reception register
  */
typedef struct
{
  __IO uint32_t EN;                /*!< RMC Enable Register                          */
  __IO uint32_t REN;               /*!< RMC Receive Enable Register                  */
  __I  uint32_t RBUF1;             /*!< RMC Receive Data Buffer Register 1           */
  __I  uint32_t RBUF2;             /*!< RMC Receive Data Buffer Register 2           */
  __I  uint32_t RBUF3;             /*!< RMC Receive Data Buffer Register 3           */
  __IO uint32_t RCR1;              /*!< RMC Receive Control Register 1               */
  __IO uint32_t RCR2;              /*!< RMC Receive Control Register 2               */
  __IO uint32_t RCR3;              /*!< RMC Receive Control Register 3               */
  __IO uint32_t RCR4;              /*!< RMC Receive Control Register 4               */
  __I  uint32_t RSTAT;             /*!< RMC Receive Status Register                  */
  __IO uint32_t END1;              /*!< RMC Receive End Bit Number Register 1        */
  __IO uint32_t END2;              /*!< RMC Receive End Bit Number Register 2        */
  __IO uint32_t END3;              /*!< RMC Receive End Bit Number Register 3        */
} TSB_RMC_TypeDef;

/**
  * @brief Low Voltage detector control register
  */
typedef struct
{
  __IO uint32_t CR1;               /*!< LVD control register 1                       */
  __I  uint32_t ST1;               /*!< LVD status register                          */
} TSB_LVD_TypeDef;

/**
  * @brief Oscillation Frequency Detector (OFD)
  */
typedef struct
{
  __IO uint32_t CR1;               /*!< OFD Control Register 1                       */
  __IO uint32_t CR2;               /*!< OFD Control Register 2                       */
  __IO uint32_t MN;                /*!< OFD Lower Detection Frequency Setting Register*/
       uint32_t RESERVED0;
  __IO uint32_t MX;                /*!< OFD Higher Detection Frequency Setting Register*/
} TSB_OFD_TypeDef;

/**
  * @brief Flash Control (FC)
  */
typedef struct
{
  __IO uint32_t SECBIT;            /*!< FC Security Bit Register                     */
       uint32_t RESERVED0[3];
  __I  uint32_t FLCS;              /*!< FC Flash Control Register                    */
} TSB_FC_TypeDef;


/* Memory map */
#define FLASH_BASE            (0x00000000UL)
#define RAM_BASE              (0x20000000UL)
#define PERI_BASE             (0x40000000UL)


#define TSB_SSP0_BASE              (PERI_BASE  + 0x0060000UL)
#define TSB_I2C_BASE               (PERI_BASE  + 0x0070000UL)
#define TSB_PA_BASE                (PERI_BASE  + 0x00C0000UL)
#define TSB_PB_BASE                (PERI_BASE  + 0x00C0040UL)
#define TSB_PC_BASE                (PERI_BASE  + 0x00C0080UL)
#define TSB_PD_BASE                (PERI_BASE  + 0x00C00C0UL)
#define TSB_PE_BASE                (PERI_BASE  + 0x00C0100UL)
#define TSB_PF_BASE                (PERI_BASE  + 0x00C0140UL)
#define TSB_PG_BASE                (PERI_BASE  + 0x00C0180UL)
#define TSB_PH_BASE                (PERI_BASE  + 0x00C01CUL)
#define TSB_PI_BASE                (PERI_BASE  + 0x00C0200UL)
#define TSB_PJ_BASE                (PERI_BASE  + 0x00C0240UL)
#define TSB_PK_BASE                (PERI_BASE  + 0x00C0280UL)
#define TSB_PL_BASE                (PERI_BASE  + 0x00C02C0UL)
#define TSB_PM_BASE                (PERI_BASE  + 0x00C0300UL)
#define TSB_TB0_BASE               (PERI_BASE  + 0x00D0000UL)
#define TSB_TB1_BASE               (PERI_BASE  + 0x00D0040UL)
#define TSB_TB2_BASE               (PERI_BASE  + 0x00D0080UL)
#define TSB_TB3_BASE               (PERI_BASE  + 0x00D00C0UL)
#define TSB_TB4_BASE               (PERI_BASE  + 0x00D0100UL)
#define TSB_TB5_BASE               (PERI_BASE  + 0x00D0140UL)
#define TSB_TB6_BASE               (PERI_BASE  + 0x00D0180UL)
#define TSB_TB7_BASE               (PERI_BASE  + 0x00D01C0UL)
#define TSB_TB8_BASE               (PERI_BASE  + 0x00D0200UL)
#define TSB_PHC_BASE               (PERI_BASE  + 0x00D0240UL)
#define TSB_SBI_BASE               (PERI_BASE  + 0x00E0000UL)
#define TSB_IS2_BASE               (PERI_BASE  + 0x00E1400UL)
#define TSB_SC0_BASE               (PERI_BASE  + 0x00E0080UL)
#define TSB_SC1_BASE               (PERI_BASE  + 0x00E00C0UL)
#define TSB_SC2_BASE               (PERI_BASE  + 0x00E0100UL)
#define TSB_IS10_BASE              (PERI_BASE  + 0x00E1000UL)
#define TSB_AD_BASE                (PERI_BASE  + 0x00F0000UL)
#define TSB_WD_BASE                (PERI_BASE  + 0x00F0080UL)
#define TSB_RTC_BASE               (PERI_BASE  + 0x00F0100UL)
#define TSB_CG_BASE                (PERI_BASE  + 0x00F0200UL)
#define TSB_CEC_BASE               (PERI_BASE  + 0x00F0300UL)
#define TSB_RMC0_BASE              (PERI_BASE  + 0x00F0400UL)
#define TSB_RMC1_BASE              (PERI_BASE  + 0x00F0440UL)
#define TSB_LVD_BASE               (PERI_BASE  + 0x00F0500UL)
#define TSB_OFD_BASE               (PERI_BASE  + 0x00F0600UL)
#define TSB_FC_BASE                (PERI_BASE  + 0x1FFF010UL)


/* Peripheral declaration */
#define TSB_SSP0                   ((    TSB_SSP_TypeDef *)  TSB_SSP0_BASE)
#define TSB_I2C                    ((    TSB_I2C_TypeDef *)   TSB_I2C_BASE)
#define TSB_PA                     ((     TSB_PA_TypeDef *)    TSB_PA_BASE)
#define TSB_PB                     ((     TSB_PB_TypeDef *)    TSB_PB_BASE)
#define TSB_PC                     ((     TSB_PC_TypeDef *)    TSB_PC_BASE)
#define TSB_PD                     ((     TSB_PD_TypeDef *)    TSB_PD_BASE)
#define TSB_PE                     ((     TSB_PE_TypeDef *)    TSB_PE_BASE)
#define TSB_PF                     ((     TSB_PF_TypeDef *)    TSB_PF_BASE)
#define TSB_PG                     ((     TSB_PG_TypeDef *)    TSB_PG_BASE)
#define TSB_PH                     ((     TSB_PH_TypeDef *)    TSB_PH_BASE)
#define TSB_PI                     ((     TSB_PI_TypeDef *)    TSB_PI_BASE)
#define TSB_PJ                     ((     TSB_PJ_TypeDef *)    TSB_PJ_BASE)
#define TSB_PK                     ((     TSB_PK_TypeDef *)    TSB_PK_BASE)
#define TSB_PL                     ((     TSB_PL_TypeDef *)    TSB_PL_BASE)
#define TSB_PM                     ((     TSB_PM_TypeDef *)    TSB_PM_BASE)
#define TSB_TB0                    ((     TSB_TB_TypeDef *)   TSB_TB0_BASE)
#define TSB_TB1                    ((     TSB_TB_TypeDef *)   TSB_TB1_BASE)
#define TSB_TB2                    ((     TSB_TB_TypeDef *)   TSB_TB2_BASE)
#define TSB_TB3                    ((     TSB_TB_TypeDef *)   TSB_TB3_BASE)
#define TSB_TB4                    ((     TSB_TB_TypeDef *)   TSB_TB4_BASE)
#define TSB_TB5                    ((     TSB_TB_TypeDef *)   TSB_TB5_BASE)
#define TSB_TB6                    ((     TSB_TB_TypeDef *)   TSB_TB6_BASE)
#define TSB_TB7                    ((     TSB_TB_TypeDef *)   TSB_TB7_BASE)
#define TSB_TB8                    ((     TSB_TB_TypeDef *)   TSB_TB8_BASE)
#define TSB_PHC                    ((    TSB_PHC_TypeDef *)   TSB_PHC_BASE)
#define TSB_SBI                    ((    TSB_SBI_TypeDef *)   TSB_SBI_BASE)
#define TSB_IS2                    ((    TSB_IS2_TypeDef *)   TSB_IS2_BASE)
#define TSB_SC0                    ((     TSB_SC_TypeDef *)   TSB_SC0_BASE)
#define TSB_SC1                    ((     TSB_SC_TypeDef *)   TSB_SC1_BASE)
#define TSB_SC2                    ((     TSB_SC_TypeDef *)   TSB_SC2_BASE)
#define TSB_IS10                   ((    TSB_IS1_TypeDef *)  TSB_IS10_BASE)
#define TSB_AD                     ((     TSB_AD_TypeDef *)    TSB_AD_BASE)
#define TSB_WD                     ((     TSB_WD_TypeDef *)    TSB_WD_BASE)
#define TSB_RTC                    ((    TSB_RTC_TypeDef *)   TSB_RTC_BASE)
#define TSB_CG                     ((     TSB_CG_TypeDef *)    TSB_CG_BASE)
#define TSB_CEC                    ((    TSB_CEC_TypeDef *)   TSB_CEC_BASE)
#define TSB_RMC0                   ((    TSB_RMC_TypeDef *)  TSB_RMC0_BASE)
#define TSB_RMC1                   ((    TSB_RMC_TypeDef *)  TSB_RMC1_BASE)
#define TSB_LVD                    ((    TSB_LVD_TypeDef *)   TSB_LVD_BASE)
#define TSB_OFD                    ((    TSB_OFD_TypeDef *)   TSB_OFD_BASE)
#define TSB_FC                     ((     TSB_FC_TypeDef *)    TSB_FC_BASE)


/* Bit-Band for Device Specific Peripheral Registers */
#define BITBAND_OFFSET (0x02000000UL)
#define BITBAND_PERI_BASE (PERI_BASE + BITBAND_OFFSET)
#define BITBAND_PERI(addr, bitnum) (BITBAND_PERI_BASE + (((uint32_t)(addr) - PERI_BASE) << 5) + ((uint32_t)(bitnum) << 2))



/* Synchronous Serial Port */
#define TSB_SSP0_SR_TFE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->SR,0)))
#define TSB_SSP0_SR_TNF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->SR,1)))
#define TSB_SSP0_SR_RNE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->SR,2)))
#define TSB_SSP0_SR_RFF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->SR,3)))
#define TSB_SSP0_SR_BSY                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->SR,4)))
#define TSB_SSP0_RIS_RORRIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->RIS,0)))
#define TSB_SSP0_RIS_RTRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->RIS,1)))
#define TSB_SSP0_RIS_RXRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->RIS,2)))
#define TSB_SSP0_RIS_TXRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->RIS,3)))
#define TSB_SSP0_MIS_RORMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->MIS,0)))
#define TSB_SSP0_MIS_RTMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->MIS,1)))
#define TSB_SSP0_MIS_RXMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->MIS,2)))
#define TSB_SSP0_MIS_TXMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->MIS,3)))


/* I2C Serial Port */
#define TSB_I2C_AR_ALS                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C->AR,0)))
#define TSB_I2C_SR_LRB                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C->SR,0)))
#define TSB_I2C_SR_AD0                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C->SR,1)))
#define TSB_I2C_SR_AAS                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C->SR,2)))
#define TSB_I2C_SR_AL                             (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C->SR,3)))
#define TSB_I2C_SR_PIN                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C->SR,4)))
#define TSB_I2C_SR_BB                             (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C->SR,5)))
#define TSB_I2C_SR_TRX                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C->SR,6)))
#define TSB_I2C_SR_MST                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C->SR,7)))
#define TSB_I2C_IE_IE                             (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C->IE,0)))


/* General Purpose Input/Output Port (PA) */
#define TSB_PA_DATA_PA0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,0)))
#define TSB_PA_DATA_PA1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,1)))
#define TSB_PA_DATA_PA2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,2)))
#define TSB_PA_DATA_PA3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,3)))
#define TSB_PA_DATA_PA4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,4)))
#define TSB_PA_DATA_PA5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,5)))
#define TSB_PA_DATA_PA6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,6)))
#define TSB_PA_DATA_PA7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,7)))
#define TSB_PA_CR_PA0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,0)))
#define TSB_PA_CR_PA1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,1)))
#define TSB_PA_CR_PA2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,2)))
#define TSB_PA_CR_PA3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,3)))
#define TSB_PA_CR_PA4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,4)))
#define TSB_PA_CR_PA5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,5)))
#define TSB_PA_CR_PA6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,6)))
#define TSB_PA_CR_PA7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,7)))
#define TSB_PA_FR1_PA0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,0)))
#define TSB_PA_FR1_PA1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,1)))
#define TSB_PA_FR1_PA2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,2)))
#define TSB_PA_FR1_PA3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,3)))
#define TSB_PA_FR1_PA4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,4)))
#define TSB_PA_FR1_PA5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,5)))
#define TSB_PA_FR1_PA6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,6)))
#define TSB_PA_PUP_PA0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,0)))
#define TSB_PA_PUP_PA2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,2)))
#define TSB_PA_PUP_PA3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,3)))
#define TSB_PA_PUP_PA4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,4)))
#define TSB_PA_PUP_PA5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,5)))
#define TSB_PA_PUP_PA6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,6)))
#define TSB_PA_PUP_PA7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,7)))
#define TSB_PA_PDN_PA1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,1)))
#define TSB_PA_IE_PA0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,0)))
#define TSB_PA_IE_PA1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,1)))
#define TSB_PA_IE_PA2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,2)))
#define TSB_PA_IE_PA3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,3)))
#define TSB_PA_IE_PA4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,4)))
#define TSB_PA_IE_PA5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,5)))
#define TSB_PA_IE_PA6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,6)))
#define TSB_PA_IE_PA7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,7)))


/* General Purpose Input/Output Port (PB) */
#define TSB_PB_DATA_PB0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,0)))
#define TSB_PB_DATA_PB1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,1)))
#define TSB_PB_DATA_PB2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,2)))
#define TSB_PB_DATA_PB3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,3)))
#define TSB_PB_CR_PB0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,0)))
#define TSB_PB_CR_PB1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,1)))
#define TSB_PB_CR_PB2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,2)))
#define TSB_PB_CR_PB3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,3)))
#define TSB_PB_FR1_PB0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,0)))
#define TSB_PB_FR1_PB1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,1)))
#define TSB_PB_FR1_PB2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,2)))
#define TSB_PB_FR1_PB3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,3)))
#define TSB_PB_PUP_PB0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,0)))
#define TSB_PB_PUP_PB1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,1)))
#define TSB_PB_PUP_PB2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,2)))
#define TSB_PB_IE_PB0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,0)))
#define TSB_PB_IE_PB1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,1)))
#define TSB_PB_IE_PB2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,2)))
#define TSB_PB_IE_PB3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,3)))


/* General Purpose Input/Output Port (PC) */
#define TSB_PC_DATA_PC0                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_PC->DATA,0)))
#define TSB_PC_DATA_PC1                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_PC->DATA,1)))
#define TSB_PC_DATA_PC2                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_PC->DATA,2)))
#define TSB_PC_DATA_PC3                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_PC->DATA,3)))
#define TSB_PC_PUP_PC0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,0)))
#define TSB_PC_PUP_PC1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,1)))
#define TSB_PC_PUP_PC2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,2)))
#define TSB_PC_PUP_PC3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,3)))
#define TSB_PC_IE_PC0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,0)))
#define TSB_PC_IE_PC1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,1)))
#define TSB_PC_IE_PC2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,2)))
#define TSB_PC_IE_PC3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,3)))


/* General Purpose Input/Output Port (PD) */
#define TSB_PD_DATA_PD0                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_PD->DATA,0)))
#define TSB_PD_DATA_PD1                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_PD->DATA,1)))
#define TSB_PD_DATA_PD2                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_PD->DATA,2)))
#define TSB_PD_DATA_PD3                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_PD->DATA,3)))
#define TSB_PD_FR1_PD0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,0)))
#define TSB_PD_FR1_PD1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,1)))
#define TSB_PD_FR1_PD2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,2)))
#define TSB_PD_FR1_PD3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,3)))
#define TSB_PD_PUP_PD0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,0)))
#define TSB_PD_PUP_PD1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,1)))
#define TSB_PD_PUP_PD2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,2)))
#define TSB_PD_PUP_PD3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,3)))
#define TSB_PD_PUP_PD4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,4)))
#define TSB_PD_PUP_PD5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,5)))
#define TSB_PD_PUP_PD6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,6)))
#define TSB_PD_PUP_PD7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,7)))
#define TSB_PD_IE_PD0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,0)))
#define TSB_PD_IE_PD1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,1)))
#define TSB_PD_IE_PD2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,2)))
#define TSB_PD_IE_PD3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,3)))
#define TSB_PD_IE_PD4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,4)))
#define TSB_PD_IE_PD5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,5)))
#define TSB_PD_IE_PD6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,6)))


/* General Purpose Input/Output Port (PE) */
#define TSB_PE_DATA_PE0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,0)))
#define TSB_PE_DATA_PE1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,1)))
#define TSB_PE_DATA_PE2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,2)))
#define TSB_PE_DATA_PE3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,3)))
#define TSB_PE_DATA_PE4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,4)))
#define TSB_PE_DATA_PE5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,5)))
#define TSB_PE_DATA_PE6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,6)))
#define TSB_PE_CR_PE0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,0)))
#define TSB_PE_CR_PE1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,1)))
#define TSB_PE_CR_PE2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,2)))
#define TSB_PE_CR_PE3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,3)))
#define TSB_PE_CR_PE4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,4)))
#define TSB_PE_CR_PE5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,5)))
#define TSB_PE_CR_PE6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,6)))
#define TSB_PE_FR1_PE0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,0)))
#define TSB_PE_FR1_PE1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,1)))
#define TSB_PE_FR1_PE2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,2)))
#define TSB_PE_FR1_PE3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,3)))
#define TSB_PE_FR1_PE4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,4)))
#define TSB_PE_FR1_PE5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,5)))
#define TSB_PE_FR1_PE6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,6)))
#define TSB_PE_FR2_PE2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR2,2)))
#define TSB_PE_FR2_PE6F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR2,6)))
#define TSB_PE_OD_PE0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,0)))
#define TSB_PE_OD_PE1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,1)))
#define TSB_PE_OD_PE2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,2)))
#define TSB_PE_OD_PE3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,3)))
#define TSB_PE_PUP_PE0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,0)))
#define TSB_PE_PUP_PE1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,1)))
#define TSB_PE_PUP_PE2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,2)))
#define TSB_PE_PUP_PE3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,3)))
#define TSB_PE_IE_PE0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,0)))
#define TSB_PE_IE_PE1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,1)))
#define TSB_PE_IE_PE2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,2)))
#define TSB_PE_IE_PE3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,3)))
#define TSB_PE_IE_PE4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,4)))
#define TSB_PE_IE_PE5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,5)))
#define TSB_PE_IE_PE6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,6)))


/* General Purpose Input/Output Port (PF) */
#define TSB_PF_DATA_PF0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,0)))
#define TSB_PF_DATA_PF1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,1)))
#define TSB_PF_DATA_PF2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,2)))
#define TSB_PF_DATA_PF3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,3)))
#define TSB_PF_DATA_PF4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,4)))
#define TSB_PF_DATA_PF5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,5)))
#define TSB_PF_DATA_PF6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,6)))
#define TSB_PF_DATA_PF7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,7)))
#define TSB_PF_CR_PF0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->CR,0)))
#define TSB_PF_CR_PF1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->CR,1)))
#define TSB_PF_CR_PF2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->CR,2)))
#define TSB_PF_CR_PF3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->CR,3)))
#define TSB_PF_CR_PF4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->CR,4)))
#define TSB_PF_CR_PF5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->CR,5)))
#define TSB_PF_CR_PF6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->CR,6)))
#define TSB_PF_CR_PF7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->CR,7)))
#define TSB_PF_FR1_PF0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR1,0)))
#define TSB_PF_FR1_PF1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR1,1)))
#define TSB_PF_FR1_PF2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR1,2)))
#define TSB_PF_FR1_PF3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR1,3)))
#define TSB_PF_FR1_PF4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR1,4)))
#define TSB_PF_FR1_PF5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR1,5)))
#define TSB_PF_FR1_PF6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR1,6)))
#define TSB_PF_FR1_PF7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR1,7)))
#define TSB_PF_FR2_PF2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR2,2)))
#define TSB_PF_OD_PF0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->OD,0)))
#define TSB_PF_OD_PF1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->OD,1)))
#define TSB_PF_OD_PF2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->OD,2)))
#define TSB_PF_OD_PF3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->OD,3)))
#define TSB_PF_OD_PF4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->OD,4)))
#define TSB_PF_OD_PF5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->OD,5)))
#define TSB_PF_OD_PF6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->OD,6)))
#define TSB_PF_OD_PF7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->OD,7)))
#define TSB_PF_PUP_PF0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,0)))
#define TSB_PF_PUP_PF1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,1)))
#define TSB_PF_PUP_PF2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,2)))
#define TSB_PF_PUP_PF3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,3)))
#define TSB_PF_PUP_PF4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,4)))
#define TSB_PF_PUP_PF5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,5)))
#define TSB_PF_PUP_PF6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,6)))
#define TSB_PF_PUP_PF7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,7)))
#define TSB_PF_IE_PF01E                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,0)))
#define TSB_PF_IE_PF1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,1)))
#define TSB_PF_IE_PF2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,2)))
#define TSB_PF_IE_PF3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,3)))
#define TSB_PF_IE_PF4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,4)))
#define TSB_PF_IE_PF5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,5)))
#define TSB_PF_IE_PF6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,6)))
#define TSB_PF_IE_PF7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,7)))


/* General Purpose Input/Output Port (PG) */
#define TSB_PG_DATA_PG0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,0)))
#define TSB_PG_DATA_PG1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,1)))
#define TSB_PG_DATA_PG2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,2)))
#define TSB_PG_DATA_PG3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,3)))
#define TSB_PG_CR_PG0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,0)))
#define TSB_PG_CR_PG1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,1)))
#define TSB_PG_CR_PG2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,2)))
#define TSB_PG_CR_PG3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,3)))
#define TSB_PG_FR1_PG0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,0)))
#define TSB_PG_FR1_PG1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,1)))
#define TSB_PG_FR1_PG3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,3)))
#define TSB_PG_OD_PG0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,0)))
#define TSB_PG_OD_PG1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,1)))
#define TSB_PG_PUP_PG0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,0)))
#define TSB_PG_PUP_PG1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,1)))
#define TSB_PG_PUP_PG3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,3)))
#define TSB_PG_IE_PG0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,0)))
#define TSB_PG_IE_PG1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,1)))
#define TSB_PG_IE_PG2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,2)))
#define TSB_PG_IE_PG3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,3)))


/* General Purpose Input/Output Port (PH) */
#define TSB_PH_DATA_PH0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,0)))
#define TSB_PH_DATA_PH1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,1)))
#define TSB_PH_DATA_PH2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,2)))
#define TSB_PH_DATA_PH3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,3)))
#define TSB_PH_DATA_PH4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,4)))
#define TSB_PH_DATA_PH5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,5)))
#define TSB_PH_DATA_PH6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,6)))
#define TSB_PH_CR_PH0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,0)))
#define TSB_PH_CR_PH1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,1)))
#define TSB_PH_CR_PH2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,2)))
#define TSB_PH_CR_PH3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,3)))
#define TSB_PH_CR_PH4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,4)))
#define TSB_PH_CR_PH5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,5)))
#define TSB_PH_CR_PH6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,6)))
#define TSB_PH_FR1_PH0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,0)))
#define TSB_PH_FR1_PH1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,1)))
#define TSB_PH_FR1_PH2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,2)))
#define TSB_PH_FR1_PH3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,3)))
#define TSB_PH_FR1_PH4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,3)))
#define TSB_PH_FR1_PH5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,5)))
#define TSB_PH_FR1_PH6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,6)))
#define TSB_PH_OD_PH2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->OD,2)))
#define TSB_PH_OD_PH5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->OD,5)))
#define TSB_PH_OD_PH6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->OD,6)))
#define TSB_PH_PUP_PH0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,0)))
#define TSB_PH_PUP_PH1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,1)))
#define TSB_PH_PUP_PH2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,2)))
#define TSB_PH_PUP_PH3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,3)))
#define TSB_PH_PUP_PH4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,4)))
#define TSB_PH_PUP_PH5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,5)))
#define TSB_PH_PUP_PH6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,6)))
#define TSB_PH_IE_PH0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,0)))
#define TSB_PH_IE_PH1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,1)))
#define TSB_PH_IE_PH2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,2)))
#define TSB_PH_IE_PH3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,3)))
#define TSB_PH_IE_PH4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,4)))
#define TSB_PH_IE_PH5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,5)))
#define TSB_PH_IE_PH6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,6)))


/* General Purpose Input/Output Port (PI) */
#define TSB_PI_DATA_PI0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->DATA,0)))
#define TSB_PI_DATA_PI1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->DATA,1)))
#define TSB_PI_DATA_PI2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->DATA,2)))
#define TSB_PI_DATA_PI3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->DATA,3)))
#define TSB_PI_DATA_PI4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->DATA,4)))
#define TSB_PI_DATA_PI5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->DATA,5)))
#define TSB_PI_DATA_PI6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->DATA,6)))
#define TSB_PI_DATA_PI7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->DATA,7)))
#define TSB_PI_CR_PI0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->CR,0)))
#define TSB_PI_CR_PI1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->CR,1)))
#define TSB_PI_CR_PI2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->CR,2)))
#define TSB_PI_CR_PI3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->CR,3)))
#define TSB_PI_CR_PI4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->CR,4)))
#define TSB_PI_CR_PI5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->CR,5)))
#define TSB_PI_CR_PI6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->CR,6)))
#define TSB_PI_CR_PI7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->CR,7)))
#define TSB_PI_FR1_PI0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->FR1,0)))
#define TSB_PI_FR1_PI1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->FR1,1)))
#define TSB_PI_FR1_PI2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->FR1,2)))
#define TSB_PI_FR1_PI3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->FR1,3)))
#define TSB_PI_FR1_PI4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->FR1,4)))
#define TSB_PI_FR1_PI5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->FR1,5)))
#define TSB_PI_FR1_PI6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->FR1,6)))
#define TSB_PI_FR1_PI7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->FR1,7)))
#define TSB_PI_OD_PI2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->OD,2)))
#define TSB_PI_OD_PI5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->OD,5)))
#define TSB_PI_PUP_PI0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,0)))
#define TSB_PI_PUP_PI1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,1)))
#define TSB_PI_PUP_PI2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,2)))
#define TSB_PI_PUP_PI3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,3)))
#define TSB_PI_PUP_PI4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,4)))
#define TSB_PI_PUP_PI5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,5)))
#define TSB_PI_PUP_PI6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,6)))
#define TSB_PI_PUP_PI7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,7)))
#define TSB_PI_IE_PI0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->IE,0)))
#define TSB_PI_IE_PI1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->IE,1)))
#define TSB_PI_IE_PI2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->IE,2)))
#define TSB_PI_IE_PI3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->IE,3)))
#define TSB_PI_IE_PI4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->IE,4)))
#define TSB_PI_IE_PI5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->IE,5)))
#define TSB_PI_IE_PI6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->IE,6)))
#define TSB_PI_IE_PI7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->IE,7)))


/* General Purpose Input/Output Port (PJ) */
#define TSB_PJ_DATA_PJ0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,0)))
#define TSB_PJ_DATA_PJ1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,1)))
#define TSB_PJ_DATA_PJ2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,2)))
#define TSB_PJ_DATA_PJ3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,3)))
#define TSB_PJ_DATA_PJ4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,4)))
#define TSB_PJ_DATA_PJ5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,5)))
#define TSB_PJ_DATA_PJ6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,6)))
#define TSB_PJ_DATA_PJ7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,7)))
#define TSB_PJ_CR_PJ0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,0)))
#define TSB_PJ_CR_PJ1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,1)))
#define TSB_PJ_CR_PJ2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,2)))
#define TSB_PJ_CR_PJ3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,3)))
#define TSB_PJ_CR_PJ4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,4)))
#define TSB_PJ_CR_PJ5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,5)))
#define TSB_PJ_CR_PJ6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,6)))
#define TSB_PJ_CR_PJ7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,7)))
#define TSB_PJ_FR1_PJ0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->FR1,0)))
#define TSB_PJ_FR1_PJ1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->FR1,1)))
#define TSB_PJ_FR1_PJ2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->FR1,2)))
#define TSB_PJ_FR1_PJ3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->FR1,3)))
#define TSB_PJ_FR1_PJ4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->FR1,4)))
#define TSB_PJ_FR1_PJ5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->FR1,5)))
#define TSB_PJ_FR1_PJ6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->FR1,6)))
#define TSB_PJ_FR1_PJ7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->FR1,7)))
#define TSB_PJ_PUP_PJ0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,0)))
#define TSB_PJ_PUP_PJ1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,1)))
#define TSB_PJ_PUP_PJ2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,2)))
#define TSB_PJ_PUP_PJ3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,3)))
#define TSB_PJ_PUP_PJ4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,4)))
#define TSB_PJ_PUP_PJ5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,5)))
#define TSB_PJ_PUP_PJ6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,6)))
#define TSB_PJ_PUP_PJ7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,7)))
#define TSB_PJ_IE_PJ0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,0)))
#define TSB_PJ_IE_PJ1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,1)))
#define TSB_PJ_IE_PJ2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,2)))
#define TSB_PJ_IE_PJ3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,3)))
#define TSB_PJ_IE_PJ4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,4)))
#define TSB_PJ_IE_PJ5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,5)))
#define TSB_PJ_IE_PJ6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,6)))
#define TSB_PJ_IE_PJ7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,7)))


/* General Purpose Input/Output Port (PK) */
#define TSB_PK_DATA_PK0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,0)))
#define TSB_PK_DATA_PK1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,1)))
#define TSB_PK_CR_PK0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,0)))
#define TSB_PK_CR_PK1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,1)))
#define TSB_PK_FR1_PK0F1                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_PK->FR1,0)))
#define TSB_PK_FR1_PK1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR1,1)))
#define TSB_PK_FR2_PK1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR2,1)))
#define TSB_PK_FR3_PK1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR3,1)))
#define TSB_PK_PUP_PK1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,1)))
#define TSB_PK_IE_PK0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,0)))
#define TSB_PK_IE_PK1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,1)))


/* General Purpose Input/Output Port (PL) */
#define TSB_PL_DATA_PL0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,0)))
#define TSB_PL_DATA_PL1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,1)))
#define TSB_PL_DATA_PL2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,2)))
#define TSB_PL_DATA_PL3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,3)))
#define TSB_PL_DATA_PL4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,4)))
#define TSB_PL_DATA_PL5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,5)))
#define TSB_PL_CR_PL0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,0)))
#define TSB_PL_CR_PL1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,1)))
#define TSB_PL_CR_PL2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,2)))
#define TSB_PL_CR_PL3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,3)))
#define TSB_PL_CR_PL4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,4)))
#define TSB_PL_CR_PL5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,5)))
#define TSB_PL_FR1_PL0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,0)))
#define TSB_PL_FR1_PL1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,1)))
#define TSB_PL_FR1_PL2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,2)))
#define TSB_PL_FR1_PL3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,3)))
#define TSB_PL_FR1_PL4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,4)))
#define TSB_PL_OD_PL0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,0)))
#define TSB_PL_OD_PL1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,1)))
#define TSB_PL_OD_PL2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,2)))
#define TSB_PL_OD_PL3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,3)))
#define TSB_PL_OD_PL4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,4)))
#define TSB_PL_PUP_PL0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,0)))
#define TSB_PL_PUP_PL1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,1)))
#define TSB_PL_PUP_PL2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,2)))
#define TSB_PL_PUP_PL3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,3)))
#define TSB_PL_PUP_PL4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,4)))
#define TSB_PL_IE_PL0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,0)))
#define TSB_PL_IE_PL1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,1)))
#define TSB_PL_IE_PL2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,2)))
#define TSB_PL_IE_PL3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,3)))
#define TSB_PL_IE_PL4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,4)))


/* 16-bit Timer/Event Counter (TB) */
#define TSB_TB0_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->EN,7)))
#define TSB_TB0_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->RUN,0)))
#define TSB_TB0_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->RUN,2)))
#define TSB_TB0_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,0)))
#define TSB_TB0_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,1)))
#define TSB_TB0_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,3)))
#define TSB_TB0_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,5)))
#define TSB_TB0_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,7)))
#define TSB_TB0_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->MOD,2)))
#define TSB_TB0_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB0->MOD,5)))
#define TSB_TB0_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,2)))
#define TSB_TB0_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,3)))
#define TSB_TB0_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,4)))
#define TSB_TB0_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,5)))
#define TSB_TB0_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->IM,0)))
#define TSB_TB0_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->IM,1)))
#define TSB_TB0_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->IM,2)))

#define TSB_TB1_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->EN,7)))
#define TSB_TB1_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->RUN,0)))
#define TSB_TB1_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->RUN,2)))
#define TSB_TB1_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,0)))
#define TSB_TB1_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,1)))
#define TSB_TB1_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,3)))
#define TSB_TB1_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,5)))
#define TSB_TB1_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,7)))
#define TSB_TB1_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->MOD,2)))
#define TSB_TB1_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB1->MOD,5)))
#define TSB_TB1_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,2)))
#define TSB_TB1_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,3)))
#define TSB_TB1_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,4)))
#define TSB_TB1_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,5)))
#define TSB_TB1_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->IM,0)))
#define TSB_TB1_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->IM,1)))
#define TSB_TB1_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->IM,2)))

#define TSB_TB2_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->EN,7)))
#define TSB_TB2_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->RUN,0)))
#define TSB_TB2_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->RUN,2)))
#define TSB_TB2_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,0)))
#define TSB_TB2_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,1)))
#define TSB_TB2_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,3)))
#define TSB_TB2_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,5)))
#define TSB_TB2_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,7)))
#define TSB_TB2_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->MOD,2)))
#define TSB_TB2_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB2->MOD,5)))
#define TSB_TB2_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,2)))
#define TSB_TB2_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,3)))
#define TSB_TB2_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,4)))
#define TSB_TB2_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,5)))
#define TSB_TB2_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->IM,0)))
#define TSB_TB2_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->IM,1)))
#define TSB_TB2_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->IM,2)))

#define TSB_TB3_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->EN,7)))
#define TSB_TB3_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->RUN,0)))
#define TSB_TB3_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->RUN,2)))
#define TSB_TB3_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,0)))
#define TSB_TB3_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,1)))
#define TSB_TB3_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,3)))
#define TSB_TB3_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,5)))
#define TSB_TB3_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,7)))
#define TSB_TB3_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->MOD,2)))
#define TSB_TB3_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB3->MOD,5)))
#define TSB_TB3_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,2)))
#define TSB_TB3_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,3)))
#define TSB_TB3_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,4)))
#define TSB_TB3_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,5)))
#define TSB_TB3_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->IM,0)))
#define TSB_TB3_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->IM,1)))
#define TSB_TB3_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->IM,2)))

#define TSB_TB4_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->EN,7)))
#define TSB_TB4_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->RUN,0)))
#define TSB_TB4_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->RUN,2)))
#define TSB_TB4_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,0)))
#define TSB_TB4_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,1)))
#define TSB_TB4_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,3)))
#define TSB_TB4_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,5)))
#define TSB_TB4_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,7)))
#define TSB_TB4_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->MOD,2)))
#define TSB_TB4_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB4->MOD,5)))
#define TSB_TB4_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,2)))
#define TSB_TB4_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,3)))
#define TSB_TB4_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,4)))
#define TSB_TB4_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,5)))
#define TSB_TB4_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->IM,0)))
#define TSB_TB4_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->IM,1)))
#define TSB_TB4_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->IM,2)))

#define TSB_TB5_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->EN,7)))
#define TSB_TB5_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->RUN,0)))
#define TSB_TB5_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->RUN,2)))
#define TSB_TB5_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,0)))
#define TSB_TB5_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,1)))
#define TSB_TB5_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,3)))
#define TSB_TB5_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,5)))
#define TSB_TB5_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,7)))
#define TSB_TB5_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->MOD,2)))
#define TSB_TB5_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB5->MOD,5)))
#define TSB_TB5_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,2)))
#define TSB_TB5_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,3)))
#define TSB_TB5_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,4)))
#define TSB_TB5_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,5)))
#define TSB_TB5_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->IM,0)))
#define TSB_TB5_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->IM,1)))
#define TSB_TB5_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->IM,2)))

#define TSB_TB6_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->EN,7)))
#define TSB_TB6_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->RUN,0)))
#define TSB_TB6_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->RUN,2)))
#define TSB_TB6_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,0)))
#define TSB_TB6_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,1)))
#define TSB_TB6_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,3)))
#define TSB_TB6_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,5)))
#define TSB_TB6_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,7)))
#define TSB_TB6_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->MOD,2)))
#define TSB_TB6_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB6->MOD,5)))
#define TSB_TB6_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,2)))
#define TSB_TB6_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,3)))
#define TSB_TB6_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,4)))
#define TSB_TB6_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,5)))
#define TSB_TB6_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->IM,0)))
#define TSB_TB6_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->IM,1)))
#define TSB_TB6_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->IM,2)))

#define TSB_TB7_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->EN,7)))
#define TSB_TB7_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->RUN,0)))
#define TSB_TB7_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->RUN,2)))
#define TSB_TB7_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,0)))
#define TSB_TB7_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,1)))
#define TSB_TB7_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,3)))
#define TSB_TB7_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,5)))
#define TSB_TB7_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,7)))
#define TSB_TB7_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->MOD,2)))
#define TSB_TB7_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB7->MOD,5)))
#define TSB_TB7_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,2)))
#define TSB_TB7_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,3)))
#define TSB_TB7_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,4)))
#define TSB_TB7_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,5)))
#define TSB_TB7_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->IM,0)))
#define TSB_TB7_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->IM,1)))
#define TSB_TB7_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->IM,2)))

#define TSB_TB8_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->EN,7)))
#define TSB_TB8_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->RUN,0)))
#define TSB_TB8_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->RUN,2)))
#define TSB_TB8_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->CR,0)))
#define TSB_TB8_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->CR,1)))
#define TSB_TB8_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->CR,3)))
#define TSB_TB8_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->CR,5)))
#define TSB_TB8_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->CR,7)))
#define TSB_TB8_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->MOD,2)))
#define TSB_TB8_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB8->MOD,5)))
#define TSB_TB8_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->FFCR,2)))
#define TSB_TB8_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->FFCR,3)))
#define TSB_TB8_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->FFCR,4)))
#define TSB_TB8_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->FFCR,5)))
#define TSB_TB8_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->IM,0)))
#define TSB_TB8_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->IM,1)))
#define TSB_TB8_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->IM,2)))


/* Two-phase Pulse Input Count */
#define TSB_PHC_RUN_PHCRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PHC->RUN,0)))
#define TSB_PHC_CR_PHCMD                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PHC->CR,0)))
#define TSB_PHC_CR_NFOFF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PHC->CR,1)))
#define TSB_PHC_CR_CMP0EN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PHC->CR,2)))
#define TSB_PHC_CR_CMP1EN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PHC->CR,3)))
#define TSB_PHC_CR_EVRYINT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PHC->CR,4)))
#define TSB_PHC_EN_PHCEN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PHC->EN,0)))
#define TSB_PHC_FLG_CMP0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PHC->FLG,0)))
#define TSB_PHC_FLG_CMP1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PHC->FLG,1)))
#define TSB_PHC_FLG_OVF                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PHC->FLG,2)))
#define TSB_PHC_FLG_UDF                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PHC->FLG,3)))


/* Serial Bus Interface (SBI) */
#define TSB_SBI_CR0_SBIEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI->CR0,7)))
#define TSB_SBI_CR1_SWRMON                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI->CR1,0)))
#define TSB_SBI_CR1_ACK                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI->CR1,4)))
#define TSB_SBI_I2CAR_ALS                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI->I2CAR,0)))
#define TSB_SBI_SR_LRB                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI->SR,0)))
#define TSB_SBI_SR_ADO                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI->SR,1)))
#define TSB_SBI_SR_AAS                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI->SR,2)))
#define TSB_SBI_SR_AL                             (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI->SR,3)))
#define TSB_SBI_SR_PIN                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI->SR,4)))
#define TSB_SBI_SR_BB                             (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI->SR,5)))
#define TSB_SBI_SR_TRX                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI->SR,6)))
#define TSB_SBI_SR_MST                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI->SR,7)))
#define TSB_SBI_SR_SEF                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI->SR,2)))
#define TSB_SBI_SR_SIOF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI->SR,3)))
#define TSB_SBI_BR0_I2SBI                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI->BR0,6)))


/* SBI Interrupt selection register */
#define TSB_IS2_SBISEL_INTSEL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_IS2->SBISEL,0)))


/* Serial Channel (SC) */
#define TSB_SC0_EN_SIOE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->EN,0)))
#define TSB_SC0_EN_INTSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->EN,1)))
#define TSB_SC0_EN_SCLKR                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->EN,2)))
#define TSB_SC0_EN_TXRUN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->EN,3)))
#define TSB_SC0_EN_BRCKSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->EN,4)))
#define TSB_SC0_MOD0_WU                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD0,4)))
#define TSB_SC0_MOD0_RXE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD0,5)))
#define TSB_SC0_MOD0_CTSE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD0,6)))
#define TSB_SC0_MOD0_TB8                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD0,7)))
#define TSB_SC0_BRCR_BRADDE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->BRCR,6)))
#define TSB_SC0_MOD1_TXE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD1,4)))
#define TSB_SC0_MOD1_I2SC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD1,7)))
#define TSB_SC0_MOD2_WBUF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD2,2)))
#define TSB_SC0_MOD2_DRCHG                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD2,3)))
#define TSB_SC0_MOD2_SBLEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->MOD2,4)))
#define TSB_SC0_MOD2_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC0->MOD2,5)))
#define TSB_SC0_MOD2_RBFLL                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC0->MOD2,6)))
#define TSB_SC0_MOD2_TBEMP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC0->MOD2,7)))
#define TSB_SC0_RFC_RFIS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->RFC,6)))
#define TSB_SC0_RFC_RFCS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SC0->RFC,7)))
#define TSB_SC0_TFC_TFIS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->TFC,6)))
#define TSB_SC0_TFC_TFCS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SC0->TFC,7)))
#define TSB_SC0_RST_ROR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC0->RST,7)))
#define TSB_SC0_TST_TUR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC0->TST,7)))
#define TSB_SC0_FCNF_CNFG                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->FCNF,0)))
#define TSB_SC0_FCNF_RXTXCNT                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->FCNF,1)))
#define TSB_SC0_FCNF_RFIE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->FCNF,2)))
#define TSB_SC0_FCNF_TFIE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->FCNF,3)))
#define TSB_SC0_FCNF_RFST                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->FCNF,4)))

#define TSB_SC1_EN_SIOE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->EN,0)))
#define TSB_SC1_EN_INTSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->EN,1)))
#define TSB_SC1_EN_SCLKR                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->EN,2)))
#define TSB_SC1_EN_TXRUN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->EN,3)))
#define TSB_SC1_EN_BRCKSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->EN,4)))
#define TSB_SC1_MOD0_WU                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->MOD0,4)))
#define TSB_SC1_MOD0_RXE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->MOD0,5)))
#define TSB_SC1_MOD0_CTSE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->MOD0,6)))
#define TSB_SC1_MOD0_TB8                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->MOD0,7)))
#define TSB_SC1_BRCR_BRADDE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->BRCR,6)))
#define TSB_SC1_MOD1_TXE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->MOD1,4)))
#define TSB_SC1_MOD1_I2SC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->MOD1,7)))
#define TSB_SC1_MOD2_WBUF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->MOD2,2)))
#define TSB_SC1_MOD2_DRCHG                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->MOD2,3)))
#define TSB_SC1_MOD2_SBLEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->MOD2,4)))
#define TSB_SC1_MOD2_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC1->MOD2,5)))
#define TSB_SC1_MOD2_RBFLL                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC1->MOD2,6)))
#define TSB_SC1_MOD2_TBEMP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC1->MOD2,7)))
#define TSB_SC1_RFC_RFIS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->RFC,6)))
#define TSB_SC1_RFC_RFCS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SC1->RFC,7)))
#define TSB_SC1_TFC_TFIS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->TFC,6)))
#define TSB_SC1_TFC_TFCS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SC1->TFC,7)))
#define TSB_SC1_RST_ROR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC1->RST,7)))
#define TSB_SC1_TST_TUR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC1->TST,7)))
#define TSB_SC1_FCNF_CNFG                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->FCNF,0)))
#define TSB_SC1_FCNF_RXTXCNT                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->FCNF,1)))
#define TSB_SC1_FCNF_RFIE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->FCNF,2)))
#define TSB_SC1_FCNF_TFIE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->FCNF,3)))
#define TSB_SC1_FCNF_RFST                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->FCNF,4)))

#define TSB_SC2_EN_SIOE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->EN,0)))
#define TSB_SC2_EN_INTSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->EN,1)))
#define TSB_SC2_EN_SCLKR                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->EN,2)))
#define TSB_SC2_EN_TXRUN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->EN,3)))
#define TSB_SC2_EN_BRCKSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->EN,4)))
#define TSB_SC2_MOD0_WU                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->MOD0,4)))
#define TSB_SC2_MOD0_RXE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->MOD0,5)))
#define TSB_SC2_MOD0_CTSE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->MOD0,6)))
#define TSB_SC2_MOD0_TB8                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->MOD0,7)))
#define TSB_SC2_BRCR_BRADDE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->BRCR,6)))
#define TSB_SC2_MOD1_TXE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->MOD1,4)))
#define TSB_SC2_MOD1_I2SC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->MOD1,7)))
#define TSB_SC2_MOD2_WBUF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->MOD2,2)))
#define TSB_SC2_MOD2_DRCHG                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->MOD2,3)))
#define TSB_SC2_MOD2_SBLEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->MOD2,4)))
#define TSB_SC2_MOD2_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC2->MOD2,5)))
#define TSB_SC2_MOD2_RBFLL                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC2->MOD2,6)))
#define TSB_SC2_MOD2_TBEMP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC2->MOD2,7)))
#define TSB_SC2_RFC_RFIS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->RFC,6)))
#define TSB_SC2_RFC_RFCS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SC2->RFC,7)))
#define TSB_SC2_TFC_TFIS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->TFC,6)))
#define TSB_SC2_TFC_TFCS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SC2->TFC,7)))
#define TSB_SC2_RST_ROR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC2->RST,7)))
#define TSB_SC2_TST_TUR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC2->TST,7)))
#define TSB_SC2_FCNF_CNFG                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->FCNF,0)))
#define TSB_SC2_FCNF_RXTXCNT                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->FCNF,1)))
#define TSB_SC2_FCNF_RFIE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->FCNF,2)))
#define TSB_SC2_FCNF_TFIE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->FCNF,3)))
#define TSB_SC2_FCNF_RFST                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->FCNF,4)))


/* SSP Interrupt selection register */
#define TSB_IS10_SSPSEL_INTSEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_IS10->SSPSEL,0)))
#define TSB_IS10_SSPSEL_FSSSEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_IS10->SSPSEL,1)))


/* 10bit ADC control register */
#define TSB_AD_MOD0_ADS                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD0,0)))
#define TSB_AD_MOD0_SCAN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD0,1)))
#define TSB_AD_MOD0_REPEAT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD0,2)))
#define TSB_AD_MOD0_ADBFN                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->MOD0,6)))
#define TSB_AD_MOD0_EOCFN                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->MOD0,7)))
#define TSB_AD_MOD1_I2AD                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD1,6)))
#define TSB_AD_MOD1_VREFON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD1,7)))
#define TSB_AD_MOD2_HPADCE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD2,5)))
#define TSB_AD_MOD2_ADBFHP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->MOD2,6)))
#define TSB_AD_MOD2_EOCFHP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->MOD2,7)))
#define TSB_AD_MOD3_ADOBSV                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD3,0)))
#define TSB_AD_MOD3_ADOBIC                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD3,5)))
#define TSB_AD_MOD5_ADOBSV                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD5,0)))
#define TSB_AD_MOD5_ADOBIC                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD5,5)))


/* Watchdog Timer (WD) */
#define TSB_WD_MOD_RESCR                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_WD->MOD,1)))
#define TSB_WD_MOD_I2WDT                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_WD->MOD,2)))
#define TSB_WD_MOD_WDTE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_WD->MOD,7)))


/* RTC control register */
#define TSB_RTC_MONTHR_MO0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->MONTHR,0)))
#define TSB_RTC_ADJCTL_AJEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->ADJCTL,0)))
#define TSB_RTC_ADJCTL_AJSEL                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->ADJCTL,1)))


/* Clock Generator (CG) */
#define TSB_CG_SYSCR_FPSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SYSCR,12)))
#define TSB_CG_OSCCR_WUEON                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,0)))
#define TSB_CG_OSCCR_WUEF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,1)))
#define TSB_CG_OSCCR_WUPSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,3)))
#define TSB_CG_OSCCR_XEN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,8)))
#define TSB_CG_OSCCR_XEN2                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,16)))
#define TSB_CG_OSCCR_OSCSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,17)))
#define TSB_CG_STBYCR_RXEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->STBYCR,8)))
#define TSB_CG_STBYCR_DRVE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->STBYCR,16)))
#define TSB_CG_STBYCR_SDFLASH                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->STBYCR,18)))
#define TSB_CG_STBYCR_ISOFLASH                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->STBYCR,19)))
#define TSB_CG_CKSEL_SYSCKFLG                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_CG->CKSEL,0)))
#define TSB_CG_CKSEL_SYSCK                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->CKSEL,1)))
#define TSB_CG_RSTFLG_PONRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,0)))
#define TSB_CG_RSTFLG_PINRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,1)))
#define TSB_CG_RSTFLG_WDTRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,2)))
#define TSB_CG_RSTFLG_SYSRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,4)))
#define TSB_CG_RSTFLG_OFDRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,5)))
#define TSB_CG_IMCGA_INT0EN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGA,0)))
#define TSB_CG_IMCGA_INT1EN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGA,8)))
#define TSB_CG_IMCGA_INT2EN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGA,16)))
#define TSB_CG_IMCGA_INT3EN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGA,24)))
#define TSB_CG_IMCGB_INT4EN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGB,0)))
#define TSB_CG_IMCGB_INT5EN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGB,8)))
#define TSB_CG_IMCGB_INT6EN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGB,16)))
#define TSB_CG_IMCGB_INT7EN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGB,24)))
#define TSB_CG_IMCGC_INT8EN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGC,0)))
#define TSB_CG_IMCGC_INT9EN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGC,8)))
#define TSB_CG_IMCGC_INTAEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGC,16)))
#define TSB_CG_IMCGC_INTBEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGC,24)))
#define TSB_CG_IMCGD_INTCEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGD,0)))
#define TSB_CG_IMCGD_INTDEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGD,8)))
#define TSB_CG_IMCGD_INTEEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGD,16)))
#define TSB_CG_IMCGD_INTFEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGD,24)))
#define TSB_CG_IMCGE_INT10EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGE,0)))


/* CEC control register */
#define TSB_CEC_EN_CECEN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CEC->EN,0)))
#define TSB_CEC_EN_I2CEC                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CEC->EN,1)))
#define TSB_CEC_RESET_CECRESET                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_CEC->RESET,0)))
#define TSB_CEC_REN_CECREN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CEC->REN,0)))
#define TSB_CEC_RBUF_CECEOM                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_CEC->RBUF,8)))
#define TSB_CEC_RBUF_CECACK                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_CEC->RBUF,9)))
#define TSB_CEC_RCR1_CECOTH                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CEC->RCR1,0)))
#define TSB_CEC_RCR1_CECRIHLD                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CEC->RCR1,1)))
#define TSB_CEC_RCR1_CECACKDIS                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CEC->RCR1,24)))
#define TSB_CEC_RCR3_CECWAVEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CEC->RCR3,0)))
#define TSB_CEC_RCR3_CECRSTAEN                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CEC->RCR3,1)))
#define TSB_CEC_TEN_CECTEN                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_CEC->TEN,0)))
#define TSB_CEC_TEN_CECTRANS                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_CEC->TEN,1)))
#define TSB_CEC_TBUF_CECTEOM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CEC->TBUF,8)))
#define TSB_CEC_TCR_CECBRD                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CEC->TCR,4)))
#define TSB_CEC_RSTAT_CECRIEND                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_CEC->RSTAT,0)))
#define TSB_CEC_RSTAT_CECRISTA                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_CEC->RSTAT,1)))
#define TSB_CEC_RSTAT_CECRIMAX                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_CEC->RSTAT,2)))
#define TSB_CEC_RSTAT_CECRIMIN                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_CEC->RSTAT,3)))
#define TSB_CEC_RSTAT_CECRIACK                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_CEC->RSTAT,4)))
#define TSB_CEC_RSTAT_CECRIOR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_CEC->RSTAT,5)))
#define TSB_CEC_RSTAT_CECRIWAV                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_CEC->RSTAT,6)))
#define TSB_CEC_TSTAT_CECTISTA                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_CEC->TSTAT,0)))
#define TSB_CEC_TSTAT_CECTIEND                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_CEC->TSTAT,1)))
#define TSB_CEC_TSTAT_CECTIAL                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_CEC->TSTAT,2)))
#define TSB_CEC_TSTAT_CECTIACK                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_CEC->TSTAT,3)))
#define TSB_CEC_TSTAT_CECTIUR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_CEC->TSTAT,4)))


/* Remote signal reception register */
#define TSB_RMC0_EN_RMCEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC0->EN,0)))
#define TSB_RMC0_EN_I2RMC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC0->EN,1)))
#define TSB_RMC0_REN_RMCREN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC0->REN,0)))
#define TSB_RMC0_RCR2_RMCPHM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC0->RCR2,24)))
#define TSB_RMC0_RCR2_RMCLD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC0->RCR2,25)))
#define TSB_RMC0_RCR2_RMCEDIEN                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC0->RCR2,30)))
#define TSB_RMC0_RCR2_RMCLIEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC0->RCR2,31)))
#define TSB_RMC0_RCR4_RMCPO                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC0->RCR4,7)))
#define TSB_RMC0_RSTAT_RMCRLDR                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_RMC0->RSTAT,7)))
#define TSB_RMC0_RSTAT_RMCEDIF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_RMC0->RSTAT,12)))
#define TSB_RMC0_RSTAT_RMCDMAXIF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_RMC0->RSTAT,13)))
#define TSB_RMC0_RSTAT_RMCLOIF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_RMC0->RSTAT,14)))
#define TSB_RMC0_RSTAT_RMCRLIF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_RMC0->RSTAT,15)))

#define TSB_RMC1_EN_RMCEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC1->EN,0)))
#define TSB_RMC1_EN_I2RMC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC1->EN,1)))
#define TSB_RMC1_REN_RMCREN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC1->REN,0)))
#define TSB_RMC1_RCR2_RMCPHM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC1->RCR2,24)))
#define TSB_RMC1_RCR2_RMCLD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC1->RCR2,25)))
#define TSB_RMC1_RCR2_RMCEDIEN                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC1->RCR2,30)))
#define TSB_RMC1_RCR2_RMCLIEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC1->RCR2,31)))
#define TSB_RMC1_RCR4_RMCPO                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC1->RCR4,7)))
#define TSB_RMC1_RSTAT_RMCRLDR                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_RMC1->RSTAT,7)))
#define TSB_RMC1_RSTAT_RMCEDIF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_RMC1->RSTAT,12)))
#define TSB_RMC1_RSTAT_RMCDMAXIF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_RMC1->RSTAT,13)))
#define TSB_RMC1_RSTAT_RMCLOIF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_RMC1->RSTAT,14)))
#define TSB_RMC1_RSTAT_RMCRLIF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_RMC1->RSTAT,15)))


/* Low Voltage detector control register */
#define TSB_LVD_CR1_VD1EN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_LVD->CR1,8)))
#define TSB_LVD_CR1_VD2EN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_LVD->CR1,9)))
#define TSB_LVD_CR1_VD1MOD                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_LVD->CR1,10)))
#define TSB_LVD_CR1_VD2MOD                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_LVD->CR1,11)))



/** @} */ /* End of group Device_Peripheral_registers */

#ifdef __cplusplus
}
#endif

#endif  /* __TMPM390_H__ */

/** @} */ /* End of group TMPM390 */
/** @} */ /* End of group TOSHIBA_TX03_MICROCONTROLLER */
