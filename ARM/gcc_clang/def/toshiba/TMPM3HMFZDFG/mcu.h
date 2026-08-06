/**
 *******************************************************************************
 * @file    TMPM321.h
 * @brief   CMSIS Cortex-M3 Core Peripheral Access Layer Header File for the 
 *          TOSHIBA 'TMPM321' Device Series 
 * @version V2.0.0
 * @date    2010/10/05
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
 * (C)Copyright TOSHIBA CORPORATION 2010 All rights reserved
 *******************************************************************************
 */

/** @addtogroup TOSHIBA_TX03_MICROCONTROLLER
  * @{
  */

/** @addtogroup TMPM321
  * @{
  */

#ifndef __TMPM321_H__
#define __TMPM321_H__

#ifdef __cplusplus
extern "C" {
#endif 

/** @addtogroup Configuration_of_CMSIS
  * @{
  */

/** Interrupt Number Definition */
typedef enum IRQn
{
/******  Cortex-M3 Processor Exceptions Numbers ****************************************************/
  NonMaskableInt_IRQn           = -14,      /*!< 2 Non Maskable Interrupt                          */
  HardFault_IRQn                = -13,      /*!< 3 Cortex-M3 Hard Fault Interrupt                  */
  MemoryManagement_IRQn         = -12,      /*!< 4 Cortex-M3 Memory Management Interrupt           */
  BusFault_IRQn                 = -11,      /*!< 5 Cortex-M3 Bus Fault Interrupt                   */
  UsageFault_IRQn               = -10,      /*!< 6 Cortex-M3 Usage Fault Interrupt                 */
  SVCall_IRQn                   = -5,       /*!< 11 Cortex-M3 SV Call Interrupt                    */
  DebugMonitor_IRQn             = -4,       /*!< 12 Cortex-M3 Debug Monitor Interrupt              */
  PendSV_IRQn                   = -2,       /*!< 14 Cortex-M3 Pend SV Interrupt                    */
  SysTick_IRQn                  = -1,       /*!< 15 Cortex-M3 System Tick Interrupt                */

/******  TMPM321 Specific Interrupt Numbers ********************************************************/
  INT0_IRQn                     =  0,       /*!< Interrupt Pin INT0                                */
  INT1_IRQn                     =  1,       /*!< Interrupt Pin INT1                                */
  INT2_IRQn                     =  2,       /*!< Interrupt Pin INT2                                */
  INT3_IRQn                     =  3,       /*!< Interrupt Pin INT3                                */
  INT4_IRQn                     =  4,       /*!< Interrupt Pin INT4                                */
  INT5_IRQn                     =  5,       /*!< Interrupt Pin INT5                                */
  INT6_IRQn                     =  6,       /*!< Interrupt Pin INT6                                */
  INT7_IRQn                     =  7,       /*!< Interrupt Pin INT7                                */

  INTRX0_IRQn                   = 16,       /*!< Serial Reception (Ch 0)                           */
  INTTX0_IRQn                   = 17,       /*!< Serial Transmit (Ch 0)                            */
  INTRX1_IRQn                   = 18,       /*!< Serial Reception (Ch 1)                           */
  INTTX1_IRQn                   = 19,       /*!< Serial Transmit (Ch 1)                            */
  INTRX2_IRQn                   = 20,       /*!< Serial Reception (Ch 2)                           */
  INTTX2_IRQn                   = 21,       /*!< Serial Transmit (Ch 2)                            */
  INTRX3_IRQn                   = 22,       /*!< Serial Reception (Ch 3)                           */
  INTTX3_IRQn                   = 23,       /*!< Serial Transmit (Ch 3)                            */
  INTRX4_IRQn                   = 24,       /*!< Serial Reception (Ch 4)                           */
  INTTX4_IRQn                   = 25,       /*!< Serial Transmit (Ch 4)                            */
  INTSBI0_IRQn                  = 26,       /*!< Serial Bus Interface 0                            */
  INTSBI1_IRQn                  = 27,       /*!< Serial Bus Interface 1                            */
  INTCECRX_IRQn                 = 28,       /*!< CEC Reception                                     */
  INTCECTX_IRQn                 = 29,       /*!< CEC Transmission                                  */
  INTRMCRX0_IRQn                = 30,       /*!< Remote Control Reception 0                        */

  INTRTC_IRQn                   = 32,       /*!< Real Time Clock                                   */
  INTKWUP_IRQn                  = 33,       /*!< Key on wake up                                    */
  INTSBI2_IRQn                  = 34,       /*!< Serial Bus Interface 2                            */
  INTSBI3_IRQn                  = 35,       /*!< Serial Bus Interface 3                            */

  INTADHP_IRQn                  = 37,       /*!< AD Conversion Complete High. Priority             */
  INTADM0_IRQn                  = 38,       /*!< AD Conversion Monitor 0                           */
  INTADM1_IRQn                  = 39,       /*!< AD Conversion Monitor 1                           */
  INTTB0_IRQn                   = 40,       /*!< TMRB Match Detection 0                            */
  INTTB1_IRQn                   = 41,       /*!< TMRB Match Detection 1                            */
  INTTB2_IRQn                   = 42,       /*!< TMRB Match Detection 2                            */
  INTTB3_IRQn                   = 43,       /*!< TMRB Match Detection 3                            */
  INTTB4_IRQn                   = 44,       /*!< TMRB Match Detection 4                            */
  INTTB5_IRQn                   = 45,       /*!< TMRB Match Detection 5                            */
  INTTB6_IRQn                   = 46,       /*!< TMRB Match Detection 6                            */
  INTTB7_IRQn                   = 47,       /*!< TMRB Match Detection 7                            */

  INTUSB_IRQn                   = 56,       /*!< USB Interrupt                                     */

  INTAD_IRQn                    = 58,       /*!< AD Conversion Complete                            */
  INTSSP_IRQn                   = 59,       /*!< Synchronous serial port 0                         */

  INTCAP10_IRQn                 = 74,       /*!< TMRB Input Capture 10                             */
  INTCAP11_IRQn                 = 75,       /*!< TMRB Input Capture 11                             */
  INTCAP20_IRQn                 = 76,       /*!< TMRB Input Capture 20                             */
  INTCAP21_IRQn                 = 77,       /*!< TMRB Input Capture 21                             */

  INTCAP50_IRQn                 = 80,       /*!< TMRB Input Capture 50                             */
  INTCAP51_IRQn                 = 81,       /*!< TMRB Input Capture 51                             */
  INTCAP60_IRQn                 = 82,       /*!< TMRB Input Capture 60                             */
  INTCAP61_IRQn                 = 83,       /*!< TMRB Input Capture 61                             */
  INTCAP70_IRQn                 = 84,       /*!< TMRB Input Capture 70                             */
  INTCAP71_IRQn                 = 85,       /*!< TMRB Input Capture 71                             */

  INTDMACERR_IRQn               = 98,       /*!< DMAC transfer Error                               */
  INTDMACTC0_IRQn               = 99        /*!< DMAC transfer Complete                            */
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
// #include "system_TMPM321.h"                 /* TMPM321 System                                      */

/** @addtogroup Device_Peripheral_registers
  * @{
  */

/** Device Specific Peripheral registers structures */

#if defined ( __CC_ARM   )      /* RealView Compiler */
#pragma anon_unions 
#elif (defined (__ICCARM__)) 	/*ICC Compiler       */
#pragma language=extended
#endif

/**
  * @brief Single Master DMAC (DMAC)
  */
typedef struct
{
  __I  uint32_t INTSTATUS;             /*!< DMAC Interrupt Status                             */
  __I  uint32_t INTTCSTATUS;           /*!< DMAC Interrupt Terminal Count Status              */
  __O  uint32_t INTTCCLEAR;            /*!< DMAC Interrupt Terminal Count Clear               */
  __I  uint32_t INTERRORSTATUS;        /*!< DMAC Interrupt Error Status                       */
  __O  uint32_t INTERRCLR;             /*!< DMAC Interrupt Error Clear                        */
  __I  uint32_t RAWINTTCSTATUS;        /*!< DMAC Raw Interrupt Terminal Count Status Register */
  __I  uint32_t RAWINTERRORSTATUS;     /*!< DMAC Raw Error Interrupt Status Register          */
  __I  uint32_t ENBLDCHNS;             /*!< DMAC Enabled Channe Register                      */
  __IO uint32_t SOFTBREQ;              /*!< DMAC Software Burst Request Register              */
  __IO uint32_t SOFTSREQ;              /*!< DMAC Software Single Request Register             */
       uint32_t RESERVED0[2];
  __IO uint32_t CONFIGURATION;         /*!< DMAC Configuration Register                       */
       uint32_t RESERVED1[51];
  __IO uint32_t C0SRCADDR;             /*!< DMAC Channel0 Source Address Register             */
  __IO uint32_t C0DESTADDR;            /*!< DMAC Channel0 Destination Address Register        */
  __IO uint32_t C0LLI;                 /*!< DMAC Channel0 Linked List Item Register           */
  __IO uint32_t C0CONTROL;             /*!< DMAC Channel0 Control Register                    */
  __IO uint32_t C0CONFIGURATION;       /*!< DMAC Channel0 Configuration Register              */
       uint32_t RESERVED2[3];
  __IO uint32_t C1SRCADDR;             /*!< DMAC Channel1 Source Address Register             */
  __IO uint32_t C1DESTADDR;            /*!< DMAC Channel1 Destination Address Register        */
  __IO uint32_t C1LLI;                 /*!< DMAC Channel1 Linked List Item Register           */
  __IO uint32_t C1CONTROL;             /*!< DMAC Channel1 Control Register                    */
  __IO uint32_t C1CONFIGURATION;       /*!< DMAC Channel1 Configuration Register              */
} TSB_DMAC_TypeDef;

/**
  * @brief Synchronous Serial Port(SSP)
  */
typedef struct
{
  __IO uint32_t CR0;                /*!< SSP Control Register 0                    */ 
  __IO uint32_t CR1;                /*!< SSP Control Register 1                    */ 
  __IO uint32_t DR;                 /*!< SSP Data Register                         */ 
  __I  uint32_t SR;                 /*!< SSP Status Register                       */ 
  __IO uint32_t CPSR;               /*!< SSP Clock Prescaler Register              */ 
  __IO uint32_t IMSC;               /*!< SSP Interrupt Mask Set and Clear Register */ 
  __I  uint32_t RIS;                /*!< SSP Raw Interrupt Status Register         */ 
  __I  uint32_t MIS;                /*!< SSP Masked Interrupt Status Register      */ 
  __O  uint32_t ICR;                /*!< SSP Interrupt Clear Register              */ 
  __IO uint32_t DMACR;              /*!< SSP DMA Control Register                  */
} TSB_SSP_TypeDef;


/**
  * @brief General Purpose Input/Output Port (PORT)
  */
typedef struct
{
  __IO uint32_t DATA;               /*!< Port Data Register                 */
  __IO uint32_t CR;                 /*!< Port Control Register              */
  __IO uint32_t FR1;                /*!< Port Function Register 1           */
  __IO uint32_t FR2;                /*!< Port Function Register 2           */
  __IO uint32_t FR3;                /*!< Port Function Register 3           */
       uint32_t RESERVED0[5];
  __IO uint32_t OD;                 /*!< Port Open drain control Register   */
  __IO uint32_t PUP;                /*!< Port Pull up control Register      */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                 /*!< Port Input control enable Register */
} TSB_PORT_TypeDef;

/**
  * @brief 16-bit Timer/Event Counter (TB)
  */
typedef struct
{
  __IO uint32_t EN;                 /*!< TB Enable Register            */
  __IO uint32_t RUN;                /*!< TB RUN Register               */
  __IO uint32_t CR;                 /*!< TB Control Register           */
  __IO uint32_t MOD;                /*!< TB Mode Register              */
  __IO uint32_t FFCR;               /*!< TB Flip-Flop Control Register */
  __I  uint32_t ST;                 /*!< TB Status Register            */
  __IO uint32_t IM;                 /*!< TB Interrupt Mask Register    */
  __I  uint32_t UC;                 /*!< TB Up Counter Register        */
  __IO uint32_t RG0;                /*!< TB Register 0                 */
  __IO uint32_t RG1;                /*!< TB Register 1                 */
  __I  uint32_t CP0;                /*!< TB Capture register 0         */
  __I  uint32_t CP1;                /*!< TB Capture register 1         */
} TSB_TB_TypeDef;

/**
  * @brief Serial Bus Interface (SBI)
  */
typedef struct
{
  __IO uint32_t CR0;                /*!< SBI Control Register 0       */
  __IO uint32_t CR1;                /*!< SBI Control Register 1       */
  __IO uint32_t DBR;                /*!< SBI Data Buffer Register     */
  __IO uint32_t I2CAR;              /*!< SBI I2C bus Address Register */
  union {
  __O  uint32_t CR2;                /*!< SBI Control Register 2       */
  __I  uint32_t SR;                 /*!< SBI Status Register          */
  };
  __IO uint32_t BR0;                /*!< SBI Baud Rate Register 0     */
} TSB_SBI_TypeDef;

/**
  * @brief General-purpose Serial Interface (SC)
  */
typedef struct
{
  __IO uint32_t EN;                 /*!< SC Enable Register                      */
  __IO uint32_t BUF;                /*!< SC Transmit/ Receive Buffer Register    */
  __IO uint32_t CR;                 /*!< SC Control Register                     */
  __IO uint32_t MOD0;               /*!< SC Mode Control Register 0              */
  __IO uint32_t BRCR;               /*!< SC Baud Rate Generator Control          */
  __IO uint32_t BRADD;              /*!< SC Baud rate Generator Control 2        */
  __IO uint32_t MOD1;               /*!< SC Mode Control Register 1              */
  __IO uint32_t MOD2;               /*!< SC Mode Control Register 2              */
  __IO uint32_t RFC;                /*!< SC Receive FIFO Configuration Register  */
  __IO uint32_t TFC;                /*!< SC Transmit FIFO Configuration Register */
  __I  uint32_t RST;                /*!< SC Receive FIFO Status Register         */
  __I  uint32_t TST;                /*!< SC Transmit FIFO Status Register        */
  __IO uint32_t FCNF;               /*!< SC FIFO Configuration Register          */
} TSB_SC_TypeDef;

/**
  * @brief Consumer Electronics Control (CEC)
  */
typedef struct
{
  __IO uint32_t EN;                 /*!< CEC Enable Register                    */
  __IO uint32_t ADD;                /*!< CEC Logical Address Register           */
  __O  uint32_t RESET;              /*!< CEC Software Reset Register            */
  __IO uint32_t REN;                /*!< CEC Receive Enable Register            */
  __I  uint32_t RBUF;               /*!< CEC Receive Buffer Register            */
  __IO uint32_t RCR1;               /*!< CEC Control Register 1                 */
  __IO uint32_t RCR2;               /*!< CEC Control Register 2                 */
  __IO uint32_t RCR3;               /*!< CEC Control Register 3                 */
  __IO uint32_t TEN;                /*!< CEC Transmit Enable Register           */
  __IO uint32_t TBUF;               /*!< CEC Transmit Buffer Register           */
  __IO uint32_t TCR;                /*!< CEC Transmit Control Register          */
  __I  uint32_t RSTAT;              /*!< CEC Receive Interrupt Status Register  */
  __I  uint32_t TSTAT;              /*!< CEC Transmit Interrupt Status Register */
  __IO uint32_t FSSEL;              /*!< CEC Frequency Select Register          */
} TSB_CEC_TypeDef;

/**
  * @brief Remote Control Signal Preprocessor (RMC)
  */
typedef struct
{
  __IO uint32_t EN;                 /*!< RMC Enable Register                */
  __IO uint32_t REN;                /*!< RMC Receive Enable Register        */
  __I  uint32_t RBUF1;              /*!< RMC Receive Data Buffer Register 1 */
  __I  uint32_t RBUF2;              /*!< RMC Receive Data Buffer Register 2 */
  __I  uint32_t RBUF3;              /*!< RMC Receive Data Buffer Register 3 */
  __IO uint32_t RCR1;               /*!< RMC Control Register 1             */
  __IO uint32_t RCR2;               /*!< RMC Control Register 2             */
  __IO uint32_t RCR3;               /*!< RMC Control Register 3             */
  __IO uint32_t RCR4;               /*!< RMC Control Register 4             */
  __I  uint32_t RSTAT;              /*!< RMC Status Register                */
       uint32_t RESERVED0[3];
  __IO uint32_t FSSEL;              /*!< RMC Frequency Selection Register   */
} TSB_RMC_TypeDef;

/**
  * @brief 10-bit A/D Converter (AD)
  */
typedef struct
{
  __IO uint32_t CLK;                /*!< AD Conversion Clock Setting Register       */
  __IO uint32_t MOD0;               /*!< AD Mode Control Register 0                 */
  __IO uint32_t MOD1;               /*!< AD Mode Control Register 1                 */
  __IO uint32_t MOD2;               /*!< AD Mode Control Register 2                 */
  __IO uint32_t MOD3;               /*!< AD Mode Control Register 3                 */
  __IO uint32_t MOD4;               /*!< AD Mode Control Register 4                 */
  __IO uint32_t MOD5;               /*!< AD Mode Control Register 5                 */
       uint32_t RESERVED0;
  __IO uint32_t CBAS;               /*!< AD Conversion Accuracy Setting Register    */
       uint32_t RESERVED1[3];
  __I  uint32_t REG08;              /*!< AD Conversion Result Register 08L          */
  __I  uint32_t REG19;              /*!< AD Conversion Result Register 19L          */
  __I  uint32_t REG2A;              /*!< AD Conversion Result Register 2AL          */
  __I  uint32_t REG3B;              /*!< AD Conversion Result Register 3BL          */
  __I  uint32_t REG4C;              /*!< AD Conversion Result Register 4CL          */
  __I  uint32_t REG5D;              /*!< AD Conversion Result Register 5DL          */
  __I  uint32_t REG6E;              /*!< AD Conversion Result Register 6EL          */
  __I  uint32_t REG7F;              /*!< AD Conversion Result Register 7FL          */
  __I  uint32_t REGSP;              /*!< AD Conversion Result Register SP           */
  __IO uint32_t CMP0;               /*!< AD Conversion Result Comparison Register 0 */
  __IO uint32_t CMP1;               /*!< AD Conversion Result Comparison Register 1 */
} TSB_AD_TypeDef;

/**
  * @brief Key on Wake Up (KWUP)
  */
typedef struct
{
  __IO uint32_t CR0;                /*!< KWUP Control Register 0           */
  __IO uint32_t CR1;                /*!< KWUP Control Register 1           */
  __IO uint32_t CR2;                /*!< KWUP Control Register 2           */
  __IO uint32_t CR3;                /*!< KWUP Control Register 3           */
       uint32_t RESERVED0[28];
  __I  uint32_t PKEY;               /*!< KWUP Port Monitor Register        */
  __IO uint32_t CNT;                /*!< KWUP Control Register             */
  __O  uint32_t CLR;                /*!< KWUP Interrupt All Clear Register */
  __I  uint32_t INT;                /*!< KWUP Interrupt Monitor Register   */
} TSB_KWUP_TypeDef;

/**
  * @brief Watchdog Timer (WD)
  */
typedef struct
{
  __IO uint32_t MOD;                /*!< WD Mode Register    */
  __O  uint32_t CR;                 /*!< WD Control Register */
} TSB_WD_TypeDef;

/**
  * @brief Real Time Clock (RTC)
  */
typedef struct
{
  __IO uint8_t SECR;               /*!< RTC Second Column Register          */
  __IO uint8_t MINR;               /*!< RTC Minute Column Register          */
  __IO uint8_t HOURR;              /*!< RTC Hour Column Register            */
       uint8_t RESERVED0;
  __IO uint8_t DAYR;               /*!< RTC Day of the Week Column Register */
  __IO uint8_t DATER;              /*!< RTC Day Column Register             */
  __IO uint8_t MONTHR;             /*!< RTC Month Column Register           */
  __IO uint8_t YEARR;              /*!< RTC Year Column Register            */
  __IO uint8_t PAGER;              /*!< RTC PAGE Register                   */
       uint8_t RESERVED1[3];
  __IO uint8_t RESTR;              /*!< RTC Reset Register                  */
} TSB_RTC_TypeDef;

/**
  * @brief Clock Generator (CG)
  */
typedef struct
{
  __IO uint32_t SYSCR;              /*!< System Control Register                  */
  __IO uint32_t OSCCR;              /*!< Oscillation Control Register             */
  __IO uint32_t STBYCR;             /*!< Standby Control Register                 */
  __IO uint32_t PLLSEL;             /*!< PLL Selection Register                   */
  __IO uint32_t CKSEL;              /*!< System Clock Selection Register          */
  __O  uint32_t ICRCG;              /*!< CG Interrupt Request Clear Register      */
  __I  uint32_t NMIFLG;             /*!< NMI Flag Register                        */
  __IO uint32_t RSTFLG;             /*!< Reset Flag Register                      */
  __IO uint32_t IMCGA;              /*!< CG Interrupt Mode Control Register A     */
  __IO uint32_t IMCGB;              /*!< CG Interrupt Mode Control Register B     */
  __IO uint32_t IMCGC;              /*!< CG Interrupt Mode Control Register C     */
  __IO uint32_t IMCGD;              /*!< CG Interrupt Mode Control Register D     */
  __IO uint32_t IMCGE;              /*!< CG Interrupt Mode Control Register E     */
  __IO uint32_t IMCGF;              /*!< CG Interrupt Mode Control Register F     */
} TSB_CG_TypeDef;

/**
  * @brief FLASH Interface (FC)
  */
typedef struct
{
  __IO uint32_t SECBIT;           /*!< Security Bit Register 0  */
       uint32_t RESERVED0[3];
  __I  uint32_t FLCS;             /*!< FLASH Control Register 0 */
} TSB_FC_TypeDef;

#if defined ( __CC_ARM   )     /* RealView Compiler  */
#pragma no_anon_unions
#elif (defined (__ICCARM__))   /* ICC Compiler 	     */
#pragma language=default
#endif

/* Memory map */
#define FLASH_BASE            (0x00000000UL)
#define RAM_BASE              (0x20000000UL)
#define PERI_BASE             (0x40000000UL)

#define TSB_DMAC_BASE             (PERI_BASE  + 0x00000UL)
#define TSB_SSP_BASE              (PERI_BASE  + 0x40000UL)
#define TSB_PA_BASE               (PERI_BASE  + 0xC0000UL)
#define TSB_PB_BASE               (PERI_BASE  + 0xC0100UL)
#define TSB_PE_BASE               (PERI_BASE  + 0xC0400UL)
#define TSB_PF_BASE               (PERI_BASE  + 0xC0500UL)
#define TSB_PG_BASE               (PERI_BASE  + 0xC0600UL)
#define TSB_PI_BASE               (PERI_BASE  + 0xC0800UL)
#define TSB_PJ_BASE               (PERI_BASE  + 0xC0900UL)
#define TSB_PL_BASE               (PERI_BASE  + 0xC0B00UL)
#define TSB_PM_BASE               (PERI_BASE  + 0xC0C00UL)
#define TSB_PN_BASE               (PERI_BASE  + 0xC0D00UL)
#define TSB_PP_BASE               (PERI_BASE  + 0xC0F00UL)
#define TSB_TB0_BASE              (PERI_BASE  + 0xD0000UL)
#define TSB_TB1_BASE              (PERI_BASE  + 0xD0100UL)
#define TSB_TB2_BASE              (PERI_BASE  + 0xD0200UL)
#define TSB_TB3_BASE              (PERI_BASE  + 0xD0300UL)
#define TSB_TB4_BASE              (PERI_BASE  + 0xD0400UL)
#define TSB_TB5_BASE              (PERI_BASE  + 0xD0500UL)
#define TSB_TB6_BASE              (PERI_BASE  + 0xD0600UL)
#define TSB_TB7_BASE              (PERI_BASE  + 0xD0700UL)
#define TSB_SBI0_BASE             (PERI_BASE  + 0xE0000UL)
#define TSB_SBI1_BASE             (PERI_BASE  + 0xE0100UL)
#define TSB_SBI2_BASE             (PERI_BASE  + 0xE0200UL)
#define TSB_SBI3_BASE             (PERI_BASE  + 0xE0300UL)
#define TSB_SC0_BASE              (PERI_BASE  + 0xE1000UL)
#define TSB_SC1_BASE              (PERI_BASE  + 0xE1100UL)
#define TSB_SC2_BASE              (PERI_BASE  + 0xE1200UL)
#define TSB_SC3_BASE              (PERI_BASE  + 0xE1300UL)
#define TSB_SC4_BASE              (PERI_BASE  + 0xE1400UL)
#define TSB_CEC_BASE              (PERI_BASE  + 0xE2000UL)
#define TSB_RMC0_BASE             (PERI_BASE  + 0xE3000UL)
#define TSB_AD_BASE               (PERI_BASE  + 0xF0000UL)
#define TSB_KWUP_BASE             (PERI_BASE  + 0xF1000UL)
#define TSB_WD_BASE               (PERI_BASE  + 0xF2000UL)
#define TSB_RTC_BASE              (PERI_BASE  + 0xF3000UL)
#define TSB_CG_BASE               (PERI_BASE  + 0xF4000UL)
#define TSB_FC_BASE               (PERI_BASE  + 0x1FFF010UL)



/* Peripheral declaration */
#define TSB_DMAC                  ((   TSB_DMAC_TypeDef *)     TSB_DMAC_BASE)
#define TSB_SSP                   ((    TSB_SSP_TypeDef *)      TSB_SSP_BASE)
#define TSB_PA                    ((   TSB_PORT_TypeDef *)       TSB_PA_BASE)
#define TSB_PB                    ((   TSB_PORT_TypeDef *)       TSB_PB_BASE)
#define TSB_PE                    ((   TSB_PORT_TypeDef *)       TSB_PE_BASE)
#define TSB_PF                    ((   TSB_PORT_TypeDef *)       TSB_PF_BASE)
#define TSB_PG                    ((   TSB_PORT_TypeDef *)       TSB_PG_BASE)
#define TSB_PI                    ((   TSB_PORT_TypeDef *)       TSB_PI_BASE)
#define TSB_PJ                    ((   TSB_PORT_TypeDef *)       TSB_PJ_BASE)
#define TSB_PL                    ((   TSB_PORT_TypeDef *)       TSB_PL_BASE)
#define TSB_PM                    ((   TSB_PORT_TypeDef *)       TSB_PM_BASE)
#define TSB_PN                    ((   TSB_PORT_TypeDef *)       TSB_PN_BASE)
#define TSB_PP                    ((   TSB_PORT_TypeDef *)       TSB_PP_BASE)
#define TSB_TB0                   ((     TSB_TB_TypeDef *)      TSB_TB0_BASE)
#define TSB_TB1                   ((     TSB_TB_TypeDef *)      TSB_TB1_BASE)
#define TSB_TB2                   ((     TSB_TB_TypeDef *)      TSB_TB2_BASE)
#define TSB_TB3                   ((     TSB_TB_TypeDef *)      TSB_TB3_BASE)
#define TSB_TB4                   ((     TSB_TB_TypeDef *)      TSB_TB4_BASE)
#define TSB_TB5                   ((     TSB_TB_TypeDef *)      TSB_TB5_BASE)
#define TSB_TB6                   ((     TSB_TB_TypeDef *)      TSB_TB6_BASE)
#define TSB_TB7                   ((     TSB_TB_TypeDef *)      TSB_TB7_BASE)
#define TSB_SBI0                  ((    TSB_SBI_TypeDef *)     TSB_SBI0_BASE)
#define TSB_SBI1                  ((    TSB_SBI_TypeDef *)     TSB_SBI1_BASE)
#define TSB_SBI2                  ((    TSB_SBI_TypeDef *)     TSB_SBI2_BASE)
#define TSB_SBI3                  ((    TSB_SBI_TypeDef *)     TSB_SBI3_BASE)
#define TSB_SC0                   ((     TSB_SC_TypeDef *)      TSB_SC0_BASE)
#define TSB_SC1                   ((     TSB_SC_TypeDef *)      TSB_SC1_BASE)
#define TSB_SC2                   ((     TSB_SC_TypeDef *)      TSB_SC2_BASE)
#define TSB_SC3                   ((     TSB_SC_TypeDef *)      TSB_SC3_BASE)
#define TSB_SC4                   ((     TSB_SC_TypeDef *)      TSB_SC4_BASE)
#define TSB_CEC                   ((    TSB_CEC_TypeDef *)      TSB_CEC_BASE)
#define TSB_RMC0                  ((    TSB_RMC_TypeDef *)     TSB_RMC0_BASE)
#define TSB_AD                    ((     TSB_AD_TypeDef *)       TSB_AD_BASE)
#define TSB_KWUP                  ((   TSB_KWUP_TypeDef *)     TSB_KWUP_BASE)
#define TSB_WD                    ((     TSB_WD_TypeDef *)       TSB_WD_BASE)
#define TSB_RTC                   ((    TSB_RTC_TypeDef *)      TSB_RTC_BASE)
#define TSB_CG                    ((     TSB_CG_TypeDef *)       TSB_CG_BASE)
#define TSB_FC                    ((     TSB_FC_TypeDef *)       TSB_FC_BASE)

/** @} */ /* End of group Device_Peripheral_registers */

#ifdef __cplusplus
}
#endif

#endif  /* __TMPM321_H__ */

/** @} */ /* End of group TMPM321 */
/** @} */ /* End of group TOSHIBA_TX03_MICROCONTROLLER */
