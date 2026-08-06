/**
 *******************************************************************************
 * @file    TMPM36B.h
 * @brief   CMSIS Cortex-M3 Core Peripheral Access Layer Header File for the
 *          TOSHIBA 'TMPM36B' Device Series
 * @version V2.0.2.1 (Tentative)
 * @date    2013/02/27
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
 * (C)Copyright TOSHIBA CORPORATION 2013 All rights reserved
 *******************************************************************************
 */

/** @addtogroup TOSHIBA_TX03_MICROCONTROLLER
  * @{
  */
  
/** @addtogroup TMPM36B
  * @{
  */

#ifndef __TMPM36B_H__
#define __TMPM36B_H__

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

/******  TMPM36B Specific Interrupt Numbers *******************************************************************/
  INT0_IRQn                     = 0,         /*!< Interrupt pin 0                                             */
  INT1_IRQn                     = 1,         /*!< Interrupt pin 1                                             */
  INT2_IRQn                     = 2,         /*!< Interrupt pin 2                                             */
  INT3_IRQn                     = 3,         /*!< Interrupt pin 3                                             */
  INT4_IRQn                     = 4,         /*!< Interrupt pin 4                                             */
  INT5_IRQn                     = 5,         /*!< Interrupt pin 5                                             */
  INT6_IRQn                     = 6,         /*!< Interrupt pin 6                                             */
  INT7_IRQn                     = 7,         /*!< Interrupt pin 7                                             */
  INT8_IRQn                     = 8,         /*!< Interrupt pin 8                                             */
  INT9_IRQn                     = 9,         /*!< Interrupt pin 9                                             */
  INTA_IRQn                     = 10,        /*!< Interrupt pin A                                             */
  INTB_IRQn                     = 11,        /*!< Interrupt pin B                                             */
  INTC_IRQn                     = 12,        /*!< Interrupt pin C                                             */
  INTD_IRQn                     = 13,        /*!< Interrupt pin D                                             */
  INTE_IRQn                     = 14,        /*!< Interrupt pin E                                             */
  INTF_IRQn                     = 15,        /*!< Interrupt pin F                                             */
  INTRX0_IRQn                   = 16,        /*!< Serial reception (channel.0)                                */
  INTTX0_IRQn                   = 17,        /*!< Serial transmission (channel.0)                             */
  INTRX1_IRQn                   = 18,        /*!< Serial reception (channel.1)                                */
  INTTX1_IRQn                   = 19,        /*!< Serial transmission (channel.1)                             */
  INTRX2_IRQn                   = 20,        /*!< Serial reception (channel.2)                                */
  INTTX2_IRQn                   = 21,        /*!< Serial transmission (channel.2)                             */
  INTRX3_IRQn                   = 22,        /*!< Serial reception (channel.3)                                */
  INTTX3_IRQn                   = 23,        /*!< Serial transmission (channel.3)                             */
  INTUART4_IRQn                 = 24,        /*!< FULL UART(channel.4)                                        */
  INTUART5_IRQn                 = 25,        /*!< FULL UART(channel.5)                                        */
  INTSBI0_IRQn                  = 26,        /*!< Serial bus interface 0                                      */
  INTSBI1_IRQn                  = 27,        /*!< Serial bus interface 1                                      */
  INTSBI2_IRQn                  = 28,        /*!< Serial bus interface 2                                      */
  INTSSP0_IRQn                  = 29,        /*!< SPI serial interface 0                                      */
  INTSSP1_IRQn                  = 30,        /*!< SPI serial interface 1                                      */
  INTSSP2_IRQn                  = 31,        /*!< SPI serial interface 2                                      */
  INTADHP_IRQn                  = 40,        /*!< Highest priority AD conversion complete interrupt           */
  INTADM0_IRQn                  = 41,        /*!< AD conversion monitoring function interrupt 0               */
  INTADM1_IRQn                  = 42,        /*!< AD conversion monitoring function interrupt 1               */
  INTAD_IRQn                    = 43,        /*!< AD conversion interrupt                                     */
  INTEMG0_IRQn                  = 48,        /*!< PMD0 EMG interrupt (MPT0)                                   */
  INTPMD0_IRQn                  = 49,        /*!< PMD0 PWM interrupt (MPT0)                                   */
  INTENC0_IRQn                  = 50,        /*!< PMD0 Encoder input interrupt (MPT0)                         */
  INTMTEMG0_IRQn                = 54,        /*!< 16-bit MPT0 IGBT EMG interrupt                              */
  INTMTPTB00_IRQn               = 55,        /*!< 16-bit MPT0 IGBT period/ TMRB compare match detection 0     */
  INTMTTTB01_IRQn               = 56,        /*!< 16-bit MPT0 IGBT trigger/ TMRB compare match detection 1    */
  INTMTCAP00_IRQn               = 57,        /*!< 16-bit MPT0 input capture 0                                 */
  INTMTCAP01_IRQn               = 58,        /*!< 16-bit MPT0 input capture 1                                 */
  INTMTEMG1_IRQn                = 59,        /*!< 16-bit MPT1 IGBT EMG interrupt                              */
  INTMTPTB10_IRQn               = 60,        /*!< 16-bit MPT1 IGBT period/ TMRB compare match detection 0     */
  INTMTTTB11_IRQn               = 61,        /*!< 16-bit MPT1 IGBT trigger/ TMRB compare match detection 1    */
  INTMTCAP10_IRQn               = 62,        /*!< 16-bit MPT1 input capture 0                                 */
  INTMTCAP11_IRQn               = 63,        /*!< 16-bit MPT1 input capture 1                                 */
  INTMTEMG2_IRQn                = 64,        /*!< 16-bit MPT2 IGBT EMG interrupt                              */
  INTMTPTB20_IRQn               = 65,        /*!< 16-bit MPT2 IGBT period/ TMRB compare match detection 0     */
  INTMTTTB21_IRQn               = 66,        /*!< 16-bit MPT2 IGBT trigger/ TMRB compare match detection 1    */
  INTMTCAP20_IRQn               = 67,        /*!< 16-bit MPT2 input capture 0                                 */
  INTMTCAP21_IRQn               = 68,        /*!< 16-bit MPT2 input capture 1                                 */
  INTMTEMG3_IRQn                = 69,        /*!< 16-bit MPT3 IGBT EMG interrupt                              */
  INTMTPTB30_IRQn               = 70,        /*!< 16-bit MPT3 IGBT period/ TMRB compare match detection 0     */
  INTMTTTB31_IRQn               = 71,        /*!< 16-bit MPT3 IGBT trigger/ TMRB compare match detection 1    */
  INTMTCAP30_IRQn               = 72,        /*!< 16-bit MPT3 input capture 0                                 */
  INTMTCAP31_IRQn               = 73,        /*!< 16-bit MPT3 input capture 1                                 */
  INTRMCRX_IRQn                 = 74,        /*!< Remote Controller reception interrupt                       */
  INTTB0_IRQn                   = 75,        /*!< 16-bit TMRB_0 match detection 0                             */
  INTCAP00_IRQn                 = 76,        /*!< 16-bit TMRB_0 input capture 00                              */
  INTCAP01_IRQn                 = 77,        /*!< 16-bit TMRB_0 input capture 01                              */
  INTTB1_IRQn                   = 78,        /*!< 16-bit TMRB_1 match detection 1                             */
  INTCAP10_IRQn                 = 79,        /*!< 16-bit TMRB_1 input capture 10                              */
  INTCAP11_IRQn                 = 80,        /*!< 16-bit TMRB_1 input capture 11                              */
  INTTB2_IRQn                   = 81,        /*!< 16-bit TMRB_2 match detection 2                             */
  INTCAP20_IRQn                 = 82,        /*!< 16-bit TMRB_2 input capture 20                              */
  INTCAP21_IRQn                 = 83,        /*!< 16-bit TMRB_2 input capture 21                              */
  INTTB3_IRQn                   = 84,        /*!< 16-bit TMRB_3 match detection 3                             */
  INTCAP30_IRQn                 = 85,        /*!< 16-bit TMRB_3 input capture 30                              */
  INTCAP31_IRQn                 = 86,        /*!< 16-bit TMRB_3 input capture 31                              */
  INTTB4_IRQn                   = 87,        /*!< 16-bit TMRB_4 match detection 4                             */
  INTCAP40_IRQn                 = 88,        /*!< 16-bit TMRB_4 input capture 40                              */
  INTCAP41_IRQn                 = 89,        /*!< 16-bit TMRB_4 input capture 41                              */
  INTTB5_IRQn                   = 90,        /*!< 16-bit TMRB_5 match detection 5                             */
  INTCAP50_IRQn                 = 91,        /*!< 16-bit TMRB_5 input capture 50                              */
  INTCAP51_IRQn                 = 92,        /*!< 16-bit TMRB_5 input capture 51                              */
  INTTB6_IRQn                   = 93,        /*!< 16-bit TMRB_6 match detection 6                             */
  INTCAP60_IRQn                 = 94,        /*!< 16-bit TMRB_6 input capture 60                              */
  INTCAP61_IRQn                 = 95,        /*!< 16-bit TMRB_6 input capture 61                              */
  INTTB7_IRQn                   = 96,        /*!< 16-bit TMRB_7 match detection 7                             */
  INTCAP70_IRQn                 = 97,        /*!< 16-bit TMRB_7 input capture 70                              */
  INTCAP71_IRQn                 = 98,        /*!< 16-bit TMRB_7 input capture 71                              */
  INTRTC_IRQn                   = 99,        /*!< RTC(Real time clock) interrupt                              */
  INTDMAAD_IRQn                 = 100,       /*!< DMA_ADC conversion end                                      */
  INTDMASPR0_IRQn               = 104,       /*!< DMA_SSP_0 reception / DMA_I2C SIO_0                         */
  INTDMASPT0_IRQn               = 105,       /*!< DMA_SSP_0 transmission                                      */
  INTDMASPR1_IRQn               = 106,       /*!< DMA_SSP_1 reception                                         */
  INTDMASPT1_IRQn               = 107,       /*!< DMA_SSP_1 transmission                                      */
  INTDMASPR2_IRQn               = 108,       /*!< DMA_SSP_2 reception                                         */
  INTDMASPT2_IRQn               = 109,       /*!< DMA_SSP_2 transmission                                      */
  INTDMAUTR4_IRQn               = 110,       /*!< DMA_FUART_4 reception                                       */
  INTDMAUTT4_IRQn               = 111,       /*!< DMA_FUART_4 transmission                                    */
  INTDMAUTR5_IRQn               = 112,       /*!< DMA_FUART_5 reception                                       */
  INTDMAUTT5_IRQn               = 113,       /*!< DMA_FUART_5 transmission                                    */
  INTDMARX0_IRQn                = 114,       /*!< DMA_SIO/ UART_0 reception                                   */
  INTDMATX0_IRQn                = 115,       /*!< DMA_SIO/ UART_0 transmission                                */
  INTDMARX1_IRQn                = 116,       /*!< DMA_SIO/ UART_1 reception                                   */
  INTDMATX1_IRQn                = 117,       /*!< DMA_SIO/ UART_1 transmission                                */
  INTDMARX2_IRQn                = 118,       /*!< DMA_SIO/ UART_2 reception                                   */
  INTDMATX2_IRQn                = 119,       /*!< DMA_SIO/ UART_2 transmission                                */
  INTDMARX3_IRQn                = 120,       /*!< DMA_SIO/ UART_3 reception                                   */
  INTDMATX3_IRQn                = 121,       /*!< DMA_SIO/ UART_3 transmission                                */
  INTDMASBI1_IRQn               = 122,       /*!< DMA_I2C/ SIO_1                                              */
  INTDMASBI2_IRQn               = 123,       /*!< DMA_I2C/ SIO_2                                              */
  INTDMATB_IRQn                 = 124,       /*!< 16-bit TMRB_0-4 match detection                             */
  INTDMARQ_IRQn                 = 125,       /*!< DMA request pin                                             */
  INTDMAAERR_IRQn               = 126,       /*!< DMA_A error transfer interrupt                              */
  INTDMABERR_IRQn               = 127        /*!< DMA_B error transfer interrupt                              */
} IRQn_Type;

/** Processor and Core Peripheral Section */

/* Configuration of the Cortex-M3 Processor and Core Peripherals */
#define __CM3_REV              0x0201       /*!< Cortex-M3 Core Revision                           */
#define __MPU_PRESENT             0         /*!< MPU present or not                                */
#define __NVIC_PRIO_BITS          3         /*!< Number of Bits used for Priority Levels           */
#define __Vendor_SysTickConfig    0         /*!< Set to 1 if different SysTick Config is used      */

/** @} */ /* End of group Configuration_of_CMSIS */

#include "core_cm3.h"                       /* Cortex-M3 processor and core peripherals            */
// Note: Changed for MikroE implementation.
// #include "system_TMPM36B.h"                 /* TMPM36B System                                      */

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
  __IO uint32_t DMACR;             /*!< SSP DMA Control Register                     */
} TSB_SSP_TypeDef;

#if defined ( __CC_ARM   )           /* RealView Compiler */
#pragma anon_unions
#elif (defined (__ICCARM__))         /*  ICC Compiler     */
#pragma language=extended
#endif

/**
  * @brief ARM Prime Cell PL011
  */
typedef struct
{
  __IO uint32_t DR;                /*!< Data Register                                */
union {
  __I  uint32_t RSR;               /*!< Receive Status Register                      */
  __O  uint32_t ECR;               /*!< Error Clear Register                         */
  };
       uint32_t RESERVED0[4];
  __I  uint32_t FR;                /*!< Flag Register                                */
       uint32_t RESERVED1;
  __IO uint32_t ILPR;              /*!< IrDA Low-power Counter register              */
  __IO uint32_t IBDR;              /*!< Integer Baud Rate Register                   */
  __IO uint32_t FBDR;              /*!< Fractional Baud Rate Register                */
  __IO uint32_t LCR_H;             /*!< Line Control Register                        */
  __IO uint32_t CR;                /*!< Cntrol Register                              */
  __IO uint32_t IFLS;              /*!< Interrupt FIFO Level Select Register         */
  __IO uint32_t IMSC;              /*!< Interrupt Mask set/Clear Register            */
  __I  uint32_t RIS;               /*!< Raw Interrupt Status Register                */
  __I  uint32_t MIS;               /*!< Masked Interrupt Status Register             */
  __O  uint32_t ICR;               /*!< Interrupt Clear Register                     */
  __IO uint32_t DMACR;             /*!< DMA Control Register                         */
} TSB_UART_TypeDef;

/**
  * @brief DMA Controller
  */
typedef struct
{
  __I  uint32_t STATUS;            /*!< DMA Status Register                          */
  __O  uint32_t CFG;               /*!< DMA Configuration Register                   */
  __IO uint32_t CTRLBASEPTR;       /*!< DMA Control Data Base Pointer Register       */
  __I  uint32_t ALTCTRLBASEPTR;    /*!< DMA Channel Alternate Control Data Base Pointer Register*/
       uint32_t RESERVED0;
  __O  uint32_t CHNLSWREQUEST;     /*!< DMA Channel Software Request Register        */
  __IO uint32_t CHNLUSEBURSTSET;   /*!< DMA Channel Useburst Set Register            */
  __O  uint32_t CHNLUSEBURSTCLR;   /*!< DMA Channel Useburst Clear Register          */
  __IO uint32_t CHNLREQMASKSET;    /*!< DMA Channel Request Mask Set Register        */
  __O  uint32_t CHNLREQMASKCLR;    /*!< DMA Channel Request Mask Clear Register      */
  __IO uint32_t CHNLENABLESET;     /*!< DMA Channel Enable Set Register              */
  __O  uint32_t CHNLENABLECLR;     /*!< DMA Channel Enable Clear Register            */
  __IO uint32_t CHNLPRIALTSET;     /*!< DMA Channel Primary-Alternate Set Register   */
  __O  uint32_t CHNLPRIALTCLR;     /*!< DMA Channel Primary-Alternate Clear Register */
  __IO uint32_t CHNLPRIORITYSET;   /*!< DMA Channel Priority Set Register            */
  __O  uint32_t CHNLPRIORITYCLR;   /*!< DMA Channel Priority Clear Register          */
       uint32_t RESERVED1[3];
  __IO uint32_t ERRCLR;            /*!< DMA Bus Error Clear Register                 */
} TSB_DMA_TypeDef;

/**
  * @brief Analog-to-Digital Converter (AD)
  */
typedef struct
{
  __IO uint32_t CLK;               /*!< AD Conversion Clock Setting Register         */
  __O  uint32_t MOD0;              /*!< AD Mode Control Register 0                   */
  __IO uint32_t MOD1;              /*!< AD Mode Control Register 1                   */
  __IO uint32_t MOD2;              /*!< AD Mode Control Register 2                   */
  __IO uint32_t MOD3;              /*!< AD Mode Control Register 3                   */
  __IO uint32_t MOD4;              /*!< AD Mode Control Register 4                   */
  __I  uint32_t MOD5;              /*!< AD Mode Control Register 5                   */
  __O  uint32_t MOD6;              /*!< AD Mode Control Register 6                   */
       uint32_t RESERVED0;
  __IO uint32_t CMPCR0;            /*!< AD Monitoring Setting Register 0             */
  __IO uint32_t CMPCR1;            /*!< AD Monitoring Setting Register 1             */
  __IO uint32_t CMP0;              /*!< AD Conversion Result Comparison Register 0   */
  __IO uint32_t CMP1;              /*!< AD Conversion Result Comparison Register 1   */
  __I  uint32_t REG00;             /*!< AD Conversion Result Register 00             */
  __I  uint32_t REG01;             /*!< AD Conversion Result Register 01             */
  __I  uint32_t REG02;             /*!< AD Conversion Result Register 02             */
  __I  uint32_t REG03;             /*!< AD Conversion Result Register 03             */
  __I  uint32_t REG04;             /*!< AD Conversion Result Register 04             */
  __I  uint32_t REG05;             /*!< AD Conversion Result Register 05             */
  __I  uint32_t REG06;             /*!< AD Conversion Result Register 06             */
  __I  uint32_t REG07;             /*!< AD Conversion Result Register 07             */
  __I  uint32_t REG08;             /*!< AD Conversion Result Register 08             */
  __I  uint32_t REG09;             /*!< AD Conversion Result Register 09             */
  __I  uint32_t REG10;             /*!< AD Conversion Result Register 10             */
  __I  uint32_t REG11;             /*!< AD Conversion Result Register 11             */
  __I  uint32_t REG12;             /*!< AD Conversion Result Register 12             */
  __I  uint32_t REG13;             /*!< AD Conversion Result Register 13             */
  __I  uint32_t REG14;             /*!< AD Conversion Result Register 14             */
  __I  uint32_t REG15;             /*!< AD Conversion Result Register 15             */
  __I  uint32_t REGSP;             /*!< AD Conversion Result Register SP             */
} TSB_AD_TypeDef;

/**
  * @brief External Bus Interface(EXB)
  */
typedef struct
{
  __IO uint32_t MOD;               /*!< External Bus Mode Register                   */
       uint32_t RESERVED0[3];
  __IO uint32_t AS0;               /*!< External Bus Base Address and CS Space setting Register 0*/
  __IO uint32_t AS1;               /*!< External Bus Base Address and CS Space setting Register 1 */
  __IO uint32_t AS2;               /*!< External Bus Base Address and CS Space setting Register 2*/
  __IO uint32_t AS3;               /*!< External Bus Base Address and CS Space setting Register 3*/
       uint32_t RESERVED1[8];
  __IO uint32_t CS0;               /*!< Chip Select and Wait Controller Register 0   */
  __IO uint32_t CS1;               /*!< Chip Select and Wait Controller Register 1   */
  __IO uint32_t CS2;               /*!< Chip Select and Wait Controller Register 2   */
  __IO uint32_t CS3;               /*!< Chip Select and Wait Controller Register 3   */
} TSB_EXB_TypeDef;

/**
  * @brief ADC
  */
typedef struct
{
       uint32_t RESERVED0[4];
  __IO uint32_t TRGSEL;            /*!< Trigger Select Register                      */
} TSB_ADILV_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PA)
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< PA Data Register                             */
  __IO uint32_t CR;                /*!< PA Control Register                          */
  __IO uint32_t FR1;               /*!< PA Function Register 1                       */
  __IO uint32_t FR2;               /*!< PA Function Register 2                       */
  __IO uint32_t FR3;               /*!< PA Function Register 3                       */
  __IO uint32_t FR4;               /*!< PA Function Register 4                       */
  __IO uint32_t FR5;               /*!< PA Function Register 5                       */
       uint32_t RESERVED0[3];
  __IO uint32_t OD;                /*!< PA Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PA Pull-Up Control Register                  */
  __IO uint32_t PDN;               /*!< PA Pull-Down Control Register                */
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
  __IO uint32_t FR2;               /*!< PB Function Register 2                       */
  __IO uint32_t FR3;               /*!< PB Function Register 3                       */
  __IO uint32_t FR4;               /*!< PB Function Register 4                       */
       uint32_t RESERVED0[4];
  __IO uint32_t OD;                /*!< PB Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PB Pull-Up Control Register                  */
  __IO uint32_t PDN;               /*!< PB Pull-Down Control Register                */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< PB Input Enable Control Register             */
} TSB_PB_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PC)
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< PC Data Register                             */
  __IO uint32_t CR;                /*!< PC Control Register                          */
  __IO uint32_t FR1;               /*!< PC Function Register 1                       */
  __IO uint32_t FR2;               /*!< PC Function Register 2                       */
       uint32_t RESERVED0[6];
  __IO uint32_t OD;                /*!< PC Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PC Pull-Up Control Register                  */
  __IO uint32_t PDN;               /*!< PC Pull-Down Control Register                */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< PC Input Enable Control Register             */
} TSB_PC_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PE)
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< PE Data Register                             */
  __IO uint32_t CR;                /*!< PE Control Register                          */
  __IO uint32_t FR1;               /*!< PE Function Register 1                       */
       uint32_t RESERVED0;
  __IO uint32_t FR3;               /*!< PE Function Register 3                       */
  __IO uint32_t FR4;               /*!< PE Function Register 4                       */
  __IO uint32_t FR5;               /*!< PE Function Register 5                       */
       uint32_t RESERVED1[3];
  __IO uint32_t OD;                /*!< PE Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PE Pull-Up Control Register                  */
  __IO uint32_t PDN;               /*!< PE Pull-Down Control Register                */
       uint32_t RESERVED2;
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
  __IO uint32_t FR3;               /*!< PF Function Register 3                       */
  __IO uint32_t FR4;               /*!< PF Function Register 4                       */
       uint32_t RESERVED0[4];
  __IO uint32_t OD;                /*!< PF Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PF Pull-Up Control Register                  */
  __IO uint32_t PDN;               /*!< PF Pull-Down Control Register                */
       uint32_t RESERVED1;
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
  __IO uint32_t FR2;               /*!< PG Function Register 2                       */
  __IO uint32_t FR3;               /*!< PG Function Register 3                       */
  __IO uint32_t FR4;               /*!< PG Function Register 4                       */
       uint32_t RESERVED0[4];
  __IO uint32_t OD;                /*!< PG Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PG Pull-Up Control Register                  */
  __IO uint32_t PDN;               /*!< PG Pull-Down Control Register                */
       uint32_t RESERVED1;
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
  __IO uint32_t FR2;               /*!< PH Function Register 2                       */
  __IO uint32_t FR3;               /*!< PH Function Register 3                       */
  __IO uint32_t FR4;               /*!< PH Function Register 4                       */
  __IO uint32_t FR5;               /*!< PH Function Register 5                       */
       uint32_t RESERVED0[3];
  __IO uint32_t OD;                /*!< PH Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PH Pull-Up Control Register                  */
  __IO uint32_t PDN;               /*!< PH Pull-Down Control Register                */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< PH Input Enable Control Register             */
} TSB_PH_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PI)
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< PI Data Register                             */
  __IO uint32_t CR;                /*!< PI Control Register                          */
       uint32_t RESERVED0[8];
  __IO uint32_t OD;                /*!< PI Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PI Pull-Up Control Register                  */
  __IO uint32_t PDN;               /*!< PI Pull-Down Control Register                */
       uint32_t RESERVED1;
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
  __IO uint32_t FR2;               /*!< PJ Function Register 2                       */
       uint32_t RESERVED0[6];
  __IO uint32_t OD;                /*!< PJ Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PJ Pull-Up Control Register                  */
  __IO uint32_t PDN;               /*!< PJ Pull-Down Control Register                */
       uint32_t RESERVED1;
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
  __IO uint32_t FR4;               /*!< PK Function Register 4                       */
       uint32_t RESERVED0[4];
  __IO uint32_t OD;                /*!< PK Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PK Pull-Up Control Register                  */
  __IO uint32_t PDN;               /*!< PK Pull-Down Control Register                */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< PK Input Enable Control Register             */
} TSB_PK_TypeDef;

/**
  * @brief General Purpose Input/Output Port (PL)
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< PL Data Register                             */
  __IO uint32_t CR;                /*!< PL Control Register                          */
       uint32_t RESERVED0;
  __IO uint32_t FR2;               /*!< PL Function Register 2                       */
  __IO uint32_t FR3;               /*!< PL Function Register 3                       */
  __IO uint32_t FR4;               /*!< PL Function Register 4                       */
  __IO uint32_t FR5;               /*!< PL Function Register 5                       */
  __IO uint32_t FR6;               /*!< PL Function Register 6                       */
       uint32_t RESERVED1[2];
  __IO uint32_t OD;                /*!< PL Open Drain Control Register               */
  __IO uint32_t PUP;               /*!< PL Pull-Up Control Register                  */
  __IO uint32_t PDN;               /*!< PL Pull-Down Control Register                */
       uint32_t RESERVED2;
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
  * @brief 16-bit Multi-Purpose Timer (MPT-TMR/IGBT)
  */
typedef struct
{
  __IO uint32_t EN;                /*!< MPT Enable Register                          */
  __IO uint32_t RUN;               /*!< MPT RUN Register                             */
  __IO uint32_t TBCR;              /*!< MPT Control Register                         */
  __IO uint32_t TBMOD;             /*!< MPT Mode Register                            */
  __IO uint32_t TBFFCR;            /*!< MPT Flip-Flop Control Register               */
  __I  uint32_t TBST;              /*!< MPT Status Register                          */
  __IO uint32_t TBIM;              /*!< MPT Interrupt Mask Register                  */
  __I  uint32_t TBUC;              /*!< MPT Read Capture Register                    */
  __IO uint32_t RG0;               /*!< MPT RG0 Timer Register                       */
  __IO uint32_t RG1;               /*!< MPT RG1 Timer Register                       */
  __I  uint32_t CP0;               /*!< MPT CP0 Capture Register                     */
  __I  uint32_t CP1;               /*!< MPT CP1 Capture Register                     */
  __IO uint32_t IGCR;              /*!< IGBT Control Register                        */
  __O  uint32_t IGRESTA;           /*!< IGBT Timer Restart Register                  */
  __I  uint32_t IGST;              /*!< IGBT Timer Status Register                   */
  __IO uint32_t IGICR;             /*!< IGBT Input Control Register                  */
  __IO uint32_t IGOCR;             /*!< IGBT Output Control Register                 */
  __IO uint32_t IGRG2;             /*!< IGBT RG2 Timer Register                      */
  __IO uint32_t IGRG3;             /*!< IGBT RG3 Timer Register                      */
  __IO uint32_t IGRG4;             /*!< IGBT RG4 Timer Register                      */
  __IO uint32_t IGEMGCR;           /*!< IGBT EMG Control Register                    */
  __I  uint32_t IGEMGST;           /*!< IGBT EMG Status Register                     */
  __IO uint32_t IGTRG;             /*!< IGBT Trigger Register                        */
} TSB_MT_TypeDef;

/**
  * @brief Real Time Clock (RTC)
  */
typedef struct
{
  __IO uint8_t  SECR;              /*!< RTC Second Column Register                   */
  __IO uint8_t  MINR;              /*!< RTC Minute Column Register                   */
  __IO uint8_t  HOURR;             /*!< RTC Hour Column Register                     */
       uint8_t  RESERVED0;
  __IO uint8_t  DAYR;              /*!< RTC Day of the Week Column Register          */
  __IO uint8_t  DATER;             /*!< RTC Day Column Register                      */
  __IO uint8_t  MONTHR;            /*!< RTC Month Column Register                    */
  __IO uint8_t  YEARR;             /*!< RTC Year Column Register                     */
  __IO uint8_t  PAGER;             /*!< RTC PAGE Register                            */
       uint8_t  RESERVED1[3];
  __IO uint8_t  RESTR;             /*!< RTC Reset Register                           */
       uint8_t  RESERVED2;
  __IO uint8_t  PROTECT;           /*!< RTC PROTECT Register                         */
  __IO uint8_t  ADJCTL;            /*!< RTC ADJCTL Register                          */
  __IO uint16_t ADJDAT;            /*!< RTC ADJDAT Register                          */
} TSB_RTC_TypeDef;

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
  * @brief Remote Control Signal Preprocessor (RMC)
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
  __IO uint32_t FSSEL;             /*!< RMC Frequency Selection Register             */
} TSB_RMC_TypeDef;

/**
  * @brief Oscillation Frequency Detector (OFD)
  */
typedef struct
{
  __IO uint32_t CR1;               /*!< OFD Control Register 1                       */
  __IO uint32_t CR2;               /*!< OFD Control Register 2                       */
  __IO uint32_t MN0;               /*!< OFD Lower Detection Frequency Setting Register*/
  __IO uint32_t MN1;               /*!< OFD Lower Detection Frequency Setting Register*/
  __IO uint32_t MX0;               /*!< OFD Higher Detection Frequency Setting Register*/
  __IO uint32_t MX1;               /*!< OFD Higher Detection Frequency Setting Register*/
  __IO uint32_t RST;               /*!< OFD Reset Enable Control Register            */
  __I  uint32_t STAT;              /*!< OFD Status Register                          */
  __IO uint32_t MON;               /*!< OFD                                          */
} TSB_OFD_TypeDef;

/**
  * @brief Watchdog Timer (WD)
  */
typedef struct
{
  __IO uint32_t MOD;               /*!< WD Mode Register                             */
  __O  uint32_t CR;                /*!< WD Control Register                          */
} TSB_WD_TypeDef;

/**
  * @brief Clock Generator (CG)
  */
typedef struct
{
  __IO uint32_t SYSCR;             /*!< System Control Register                      */
  __IO uint32_t OSCCR;             /*!< Oscillation Control Register                 */
  __IO uint32_t STBYCR;            /*!< Standby Control Register                     */
  __IO uint32_t PLLSEL;            /*!< PLL Selection Register                       */
       uint32_t RESERVED0[4];
  __IO uint32_t FSYSMSK;           /*!< Peripheral Clock Stop Register               */
       uint32_t RESERVED1[6];
  __IO uint32_t PROTECT;           /*!< Protect Register                             */
  __IO uint32_t IMCGA;             /*!< CG Interrupt Mode Control Register A         */
  __IO uint32_t IMCGB;             /*!< CG Interrupt Mode Control Register B         */
  __IO uint32_t IMCGC;             /*!< CG Interrupt Mode Control Register C         */
  __IO uint32_t IMCGD;             /*!< CG Interrupt Mode Control Register D         */
       uint32_t RESERVED2[4];
  __O  uint32_t ICRCG;             /*!< CG Interrupt Request Clear Register          */
  __IO uint32_t RSTFLG;            /*!< Reset Flag Register                          */
  __I  uint32_t NMIFLG;            /*!< NMI Flag Register                            */
} TSB_CG_TypeDef;

/**
  * @brief Internal High-speed Oscillation Adjustment
  */
typedef struct
{
  __IO uint32_t PRO;               /*!< Protection Register                          */
  __IO uint32_t EN;                /*!< Enable Register                              */
  __I  uint32_t INIT;              /*!< Initial Trimming Level Monitor Register      */
  __IO uint32_t SET;               /*!< Trimming Level Setting Register              */
} TSB_TRMOSC_TypeDef;

/**
  * @brief Low Voltage detector control register
  */
typedef struct
{
  __IO uint32_t RCR;               /*!< LVD-RESET Control Register                   */
  __IO uint32_t ICR;               /*!< LVD-NMI Control Register                     */
  __IO uint32_t SR;                /*!< LVD Status Control Register                  */
} TSB_LVD_TypeDef;

/**
  * @brief 16-bit Multi-Purpose Timer (MPT-PMD)
  */
typedef struct
{
  __IO uint32_t MDEN;              /*!< PMD Enable Register                          */
  __IO uint32_t PORTMD;            /*!< Port Output Mode Register                    */
  __IO uint32_t MDCR;              /*!< PMD Control Register                         */
  __I  uint32_t CNTSTA;            /*!< PWM Counter Status Register                  */
  __I  uint32_t MDCNT;             /*!< PWM Counter Register                         */
  __IO uint32_t MDPRD;             /*!< PWM Period Register                          */
  __IO uint32_t CMPU;              /*!< PWM Compare Register                         */
  __IO uint32_t CMPV;              /*!< PWM Compare Register                         */
  __IO uint32_t CMPW;              /*!< PWM Compare Register                         */
       uint32_t RESERVED0;
  __IO uint32_t MDOUT;             /*!< PMD Output Control Register                  */
  __IO uint32_t MDPOT;             /*!< PMD Output Setting Register                  */
  __O  uint32_t EMGREL;            /*!< EMG Release Register                         */
  __IO uint32_t EMGCR;             /*!< EMG Control Register                         */
  __I  uint32_t EMGSTA;            /*!< EMG Status Register                          */
       uint32_t RESERVED1[2];
  __IO uint32_t DTR;               /*!< Dead Time Register                           */
  __IO uint32_t TRGCMP0;           /*!< Trigger Compare Register0                    */
       uint32_t RESERVED2[3];
  __IO uint32_t TRGCR;             /*!< Trigger Register                             */
  __IO uint32_t TRGMD;             /*!< Trigger mode Register                        */
} TSB_MTPD_TypeDef;

/**
  * @brief Encoder Input (ENC)
  */
typedef struct
{
  __IO uint32_t TNCR;              /*!< Encoder Input Control Register               */
  __IO uint32_t RELOAD;            /*!< Encoder Counter Reload Register              */
  __IO uint32_t INT;               /*!< Encoder Compare Register                     */
  __IO uint32_t CNT;               /*!< Encoder Counter Register                     */
} TSB_EN_TypeDef;

/**
  * @brief Flash Control (FC)
  */
typedef struct
{
       uint32_t RESERVED0[4];
  __IO uint32_t SECBIT;            /*!< FC Security Bit Register                     */
       uint32_t RESERVED1[3];
  __I  uint32_t FLCS;              /*!< FC Flash Control Register                    */
} TSB_FC_TypeDef;


/* Memory map */
#define FLASH_BASE            (0x00000000UL)
#define RAM_BASE              (0x20000000UL)
#define PERI_BASE             (0x40000000UL)


#define TSB_SSP0_BASE              (PERI_BASE  + 0x0040000UL)
#define TSB_SSP1_BASE              (PERI_BASE  + 0x0041000UL)
#define TSB_SSP2_BASE              (PERI_BASE  + 0x0042000UL)
#define TSB_UART4_BASE             (PERI_BASE  + 0x0048000UL)
#define TSB_UART5_BASE             (PERI_BASE  + 0x0049000UL)
#define TSB_DMAA_BASE              (PERI_BASE  + 0x004C000UL)
#define TSB_DMAB_BASE              (PERI_BASE  + 0x004D000UL)
#define TSB_AD_BASE                (PERI_BASE  + 0x0050000UL)
#define TSB_EXB_BASE               (PERI_BASE  + 0x005C000UL)
#define TSB_ADILV_BASE             (PERI_BASE  + 0x0066000UL)
#define TSB_PA_BASE                (PERI_BASE  + 0x00C0000UL)
#define TSB_PB_BASE                (PERI_BASE  + 0x00C0100UL)
#define TSB_PC_BASE                (PERI_BASE  + 0x00C0200UL)
#define TSB_PE_BASE                (PERI_BASE  + 0x00C0400UL)
#define TSB_PF_BASE                (PERI_BASE  + 0x00C0500UL)
#define TSB_PG_BASE                (PERI_BASE  + 0x00C0600UL)
#define TSB_PH_BASE                (PERI_BASE  + 0x00C0700UL)
#define TSB_PI_BASE                (PERI_BASE  + 0x00C0800UL)
#define TSB_PJ_BASE                (PERI_BASE  + 0x00C0900UL)
#define TSB_PK_BASE                (PERI_BASE  + 0x00C0A00UL)
#define TSB_PL_BASE                (PERI_BASE  + 0x00C0B00UL)
#define TSB_TB0_BASE               (PERI_BASE  + 0x00C4000UL)
#define TSB_TB1_BASE               (PERI_BASE  + 0x00C4100UL)
#define TSB_TB2_BASE               (PERI_BASE  + 0x00C4200UL)
#define TSB_TB3_BASE               (PERI_BASE  + 0x00C4300UL)
#define TSB_TB4_BASE               (PERI_BASE  + 0x00C4400UL)
#define TSB_TB5_BASE               (PERI_BASE  + 0x00C4500UL)
#define TSB_TB6_BASE               (PERI_BASE  + 0x00C4600UL)
#define TSB_TB7_BASE               (PERI_BASE  + 0x00C4700UL)
#define TSB_MT0_BASE               (PERI_BASE  + 0x00C7000UL)
#define TSB_MT1_BASE               (PERI_BASE  + 0x00C7100UL)
#define TSB_MT2_BASE               (PERI_BASE  + 0x00C7200UL)
#define TSB_MT3_BASE               (PERI_BASE  + 0x00C7300UL)
#define TSB_RTC_BASE               (PERI_BASE  + 0x00CC000UL)
#define TSB_SBI0_BASE              (PERI_BASE  + 0x00E0000UL)
#define TSB_SBI1_BASE              (PERI_BASE  + 0x00E0100UL)
#define TSB_SBI2_BASE              (PERI_BASE  + 0x00E0200UL)
#define TSB_SC0_BASE               (PERI_BASE  + 0x00E1000UL)
#define TSB_SC1_BASE               (PERI_BASE  + 0x00E1100UL)
#define TSB_SC2_BASE               (PERI_BASE  + 0x00E1200UL)
#define TSB_SC3_BASE               (PERI_BASE  + 0x00E1300UL)
#define TSB_RMC_BASE               (PERI_BASE  + 0x00E7000UL)
#define TSB_OFD_BASE               (PERI_BASE  + 0x00F1000UL)
#define TSB_WD_BASE                (PERI_BASE  + 0x00F2000UL)
#define TSB_CG_BASE                (PERI_BASE  + 0x00F3000UL)
#define TSB_TRMOSC_BASE            (PERI_BASE  + 0x00F3200UL)
#define TSB_LVD_BASE               (PERI_BASE  + 0x00F4000UL)
#define TSB_MTPD0_BASE             (PERI_BASE  + 0x00F6000UL)
#define TSB_EN0_BASE               (PERI_BASE  + 0x00F7000UL)
#define TSB_FC_BASE                (PERI_BASE  + 0x1FFF000UL)


/* Peripheral declaration */
#define TSB_SSP0                   ((    TSB_SSP_TypeDef *)  TSB_SSP0_BASE)
#define TSB_SSP1                   ((    TSB_SSP_TypeDef *)  TSB_SSP1_BASE)
#define TSB_SSP2                   ((    TSB_SSP_TypeDef *)  TSB_SSP2_BASE)
#define TSB_UART4                  ((   TSB_UART_TypeDef *) TSB_UART4_BASE)
#define TSB_UART5                  ((   TSB_UART_TypeDef *) TSB_UART5_BASE)
#define TSB_DMAA                   ((    TSB_DMA_TypeDef *)  TSB_DMAA_BASE)
#define TSB_DMAB                   ((    TSB_DMA_TypeDef *)  TSB_DMAB_BASE)
#define TSB_AD                     ((     TSB_AD_TypeDef *)    TSB_AD_BASE)
#define TSB_EXB                    ((    TSB_EXB_TypeDef *)   TSB_EXB_BASE)
#define TSB_ADILV                  ((  TSB_ADILV_TypeDef *) TSB_ADILV_BASE)
#define TSB_PA                     ((     TSB_PA_TypeDef *)    TSB_PA_BASE)
#define TSB_PB                     ((     TSB_PB_TypeDef *)    TSB_PB_BASE)
#define TSB_PC                     ((     TSB_PC_TypeDef *)    TSB_PC_BASE)
#define TSB_PE                     ((     TSB_PE_TypeDef *)    TSB_PE_BASE)
#define TSB_PF                     ((     TSB_PF_TypeDef *)    TSB_PF_BASE)
#define TSB_PG                     ((     TSB_PG_TypeDef *)    TSB_PG_BASE)
#define TSB_PH                     ((     TSB_PH_TypeDef *)    TSB_PH_BASE)
#define TSB_PI                     ((     TSB_PI_TypeDef *)    TSB_PI_BASE)
#define TSB_PJ                     ((     TSB_PJ_TypeDef *)    TSB_PJ_BASE)
#define TSB_PK                     ((     TSB_PK_TypeDef *)    TSB_PK_BASE)
#define TSB_PL                     ((     TSB_PL_TypeDef *)    TSB_PL_BASE)
#define TSB_TB0                    ((     TSB_TB_TypeDef *)   TSB_TB0_BASE)
#define TSB_TB1                    ((     TSB_TB_TypeDef *)   TSB_TB1_BASE)
#define TSB_TB2                    ((     TSB_TB_TypeDef *)   TSB_TB2_BASE)
#define TSB_TB3                    ((     TSB_TB_TypeDef *)   TSB_TB3_BASE)
#define TSB_TB4                    ((     TSB_TB_TypeDef *)   TSB_TB4_BASE)
#define TSB_TB5                    ((     TSB_TB_TypeDef *)   TSB_TB5_BASE)
#define TSB_TB6                    ((     TSB_TB_TypeDef *)   TSB_TB6_BASE)
#define TSB_TB7                    ((     TSB_TB_TypeDef *)   TSB_TB7_BASE)
#define TSB_MT0                    ((     TSB_MT_TypeDef *)   TSB_MT0_BASE)
#define TSB_MT1                    ((     TSB_MT_TypeDef *)   TSB_MT1_BASE)
#define TSB_MT2                    ((     TSB_MT_TypeDef *)   TSB_MT2_BASE)
#define TSB_MT3                    ((     TSB_MT_TypeDef *)   TSB_MT3_BASE)
#define TSB_RTC                    ((    TSB_RTC_TypeDef *)   TSB_RTC_BASE)
#define TSB_SBI0                   ((    TSB_SBI_TypeDef *)  TSB_SBI0_BASE)
#define TSB_SBI1                   ((    TSB_SBI_TypeDef *)  TSB_SBI1_BASE)
#define TSB_SBI2                   ((    TSB_SBI_TypeDef *)  TSB_SBI2_BASE)
#define TSB_SC0                    ((     TSB_SC_TypeDef *)   TSB_SC0_BASE)
#define TSB_SC1                    ((     TSB_SC_TypeDef *)   TSB_SC1_BASE)
#define TSB_SC2                    ((     TSB_SC_TypeDef *)   TSB_SC2_BASE)
#define TSB_SC3                    ((     TSB_SC_TypeDef *)   TSB_SC3_BASE)
#define TSB_RMC                    ((    TSB_RMC_TypeDef *)   TSB_RMC_BASE)
#define TSB_OFD                    ((    TSB_OFD_TypeDef *)   TSB_OFD_BASE)
#define TSB_WD                     ((     TSB_WD_TypeDef *)    TSB_WD_BASE)
#define TSB_CG                     ((     TSB_CG_TypeDef *)    TSB_CG_BASE)
#define TSB_TRMOSC                 (( TSB_TRMOSC_TypeDef *)TSB_TRMOSC_BASE)
#define TSB_LVD                    ((    TSB_LVD_TypeDef *)   TSB_LVD_BASE)
#define TSB_MTPD0                  ((   TSB_MTPD_TypeDef *) TSB_MTPD0_BASE)
#define TSB_EN0                    ((     TSB_EN_TypeDef *)   TSB_EN0_BASE)
#define TSB_FC                     ((     TSB_FC_TypeDef *)    TSB_FC_BASE)


/* Bit-Band for Device Specific Peripheral Registers */
#define BITBAND_OFFSET (0x02000000UL)
#define BITBAND_PERI_BASE (PERI_BASE + BITBAND_OFFSET)
#define BITBAND_PERI(addr, bitnum) (BITBAND_PERI_BASE + (((uint32_t)(addr) - PERI_BASE) << 5) + ((uint32_t)(bitnum) << 2))



/* Synchronous Serial Port */
#define TSB_SSP0_CR0_SPO                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP0->CR0,6)))
#define TSB_SSP0_CR0_SPH                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP0->CR0,7)))
#define TSB_SSP0_CR1_LBM                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP0->CR1,0)))
#define TSB_SSP0_CR1_SSE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP0->CR1,1)))
#define TSB_SSP0_CR1_MS                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP0->CR1,2)))
#define TSB_SSP0_CR1_SOD                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP0->CR1,3)))
#define TSB_SSP0_SR_TFE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->SR,0)))
#define TSB_SSP0_SR_TNF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->SR,1)))
#define TSB_SSP0_SR_RNE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->SR,2)))
#define TSB_SSP0_SR_RFF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->SR,3)))
#define TSB_SSP0_SR_BSY                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->SR,4)))
#define TSB_SSP0_IMSC_RORIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP0->IMSC,0)))
#define TSB_SSP0_IMSC_RTIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP0->IMSC,1)))
#define TSB_SSP0_IMSC_RXIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP0->IMSC,2)))
#define TSB_SSP0_IMSC_TXIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP0->IMSC,3)))
#define TSB_SSP0_RIS_RORRIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->RIS,0)))
#define TSB_SSP0_RIS_RTRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->RIS,1)))
#define TSB_SSP0_RIS_RXRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->RIS,2)))
#define TSB_SSP0_RIS_TXRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->RIS,3)))
#define TSB_SSP0_MIS_RORMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->MIS,0)))
#define TSB_SSP0_MIS_RTMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->MIS,1)))
#define TSB_SSP0_MIS_RXMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->MIS,2)))
#define TSB_SSP0_MIS_TXMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP0->MIS,3)))
#define TSB_SSP0_ICR_RORIC                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_SSP0->ICR,0)))
#define TSB_SSP0_ICR_RTIC                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_SSP0->ICR,1)))
#define TSB_SSP0_DMACR_RXDMAE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP0->DMACR,0)))
#define TSB_SSP0_DMACR_TXDMAE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP0->DMACR,1)))

#define TSB_SSP1_CR0_SPO                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP1->CR0,6)))
#define TSB_SSP1_CR0_SPH                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP1->CR0,7)))
#define TSB_SSP1_CR1_LBM                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP1->CR1,0)))
#define TSB_SSP1_CR1_SSE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP1->CR1,1)))
#define TSB_SSP1_CR1_MS                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP1->CR1,2)))
#define TSB_SSP1_CR1_SOD                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP1->CR1,3)))
#define TSB_SSP1_SR_TFE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP1->SR,0)))
#define TSB_SSP1_SR_TNF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP1->SR,1)))
#define TSB_SSP1_SR_RNE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP1->SR,2)))
#define TSB_SSP1_SR_RFF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP1->SR,3)))
#define TSB_SSP1_SR_BSY                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP1->SR,4)))
#define TSB_SSP1_IMSC_RORIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP1->IMSC,0)))
#define TSB_SSP1_IMSC_RTIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP1->IMSC,1)))
#define TSB_SSP1_IMSC_RXIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP1->IMSC,2)))
#define TSB_SSP1_IMSC_TXIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP1->IMSC,3)))
#define TSB_SSP1_RIS_RORRIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP1->RIS,0)))
#define TSB_SSP1_RIS_RTRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP1->RIS,1)))
#define TSB_SSP1_RIS_RXRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP1->RIS,2)))
#define TSB_SSP1_RIS_TXRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP1->RIS,3)))
#define TSB_SSP1_MIS_RORMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP1->MIS,0)))
#define TSB_SSP1_MIS_RTMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP1->MIS,1)))
#define TSB_SSP1_MIS_RXMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP1->MIS,2)))
#define TSB_SSP1_MIS_TXMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP1->MIS,3)))
#define TSB_SSP1_ICR_RORIC                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_SSP1->ICR,0)))
#define TSB_SSP1_ICR_RTIC                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_SSP1->ICR,1)))
#define TSB_SSP1_DMACR_RXDMAE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP1->DMACR,0)))
#define TSB_SSP1_DMACR_TXDMAE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP1->DMACR,1)))

#define TSB_SSP2_CR0_SPO                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP2->CR0,6)))
#define TSB_SSP2_CR0_SPH                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP2->CR0,7)))
#define TSB_SSP2_CR1_LBM                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP2->CR1,0)))
#define TSB_SSP2_CR1_SSE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP2->CR1,1)))
#define TSB_SSP2_CR1_MS                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP2->CR1,2)))
#define TSB_SSP2_CR1_SOD                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP2->CR1,3)))
#define TSB_SSP2_SR_TFE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP2->SR,0)))
#define TSB_SSP2_SR_TNF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP2->SR,1)))
#define TSB_SSP2_SR_RNE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP2->SR,2)))
#define TSB_SSP2_SR_RFF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP2->SR,3)))
#define TSB_SSP2_SR_BSY                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP2->SR,4)))
#define TSB_SSP2_IMSC_RORIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP2->IMSC,0)))
#define TSB_SSP2_IMSC_RTIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP2->IMSC,1)))
#define TSB_SSP2_IMSC_RXIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP2->IMSC,2)))
#define TSB_SSP2_IMSC_TXIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP2->IMSC,3)))
#define TSB_SSP2_RIS_RORRIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP2->RIS,0)))
#define TSB_SSP2_RIS_RTRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP2->RIS,1)))
#define TSB_SSP2_RIS_RXRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP2->RIS,2)))
#define TSB_SSP2_RIS_TXRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP2->RIS,3)))
#define TSB_SSP2_MIS_RORMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP2->MIS,0)))
#define TSB_SSP2_MIS_RTMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP2->MIS,1)))
#define TSB_SSP2_MIS_RXMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP2->MIS,2)))
#define TSB_SSP2_MIS_TXMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP2->MIS,3)))
#define TSB_SSP2_ICR_RORIC                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_SSP2->ICR,0)))
#define TSB_SSP2_ICR_RTIC                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_SSP2->ICR,1)))
#define TSB_SSP2_DMACR_RXDMAE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP2->DMACR,0)))
#define TSB_SSP2_DMACR_TXDMAE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP2->DMACR,1)))


/* ARM Prime Cell PL011 */
#define TSB_UART4_DR_FE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->DR,8)))
#define TSB_UART4_DR_PE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->DR,9)))
#define TSB_UART4_DR_BE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->DR,10)))
#define TSB_UART4_DR_OE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->DR,11)))
#define TSB_UART4_RSR_FE                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->RSR,0)))
#define TSB_UART4_RSR_PE                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->RSR,1)))
#define TSB_UART4_RSR_BE                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->RSR,2)))
#define TSB_UART4_RSR_OE                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->RSR,3)))
#define TSB_UART4_FR_CTS                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->FR,0)))
#define TSB_UART4_FR_DSR                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->FR,1)))
#define TSB_UART4_FR_DCD                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->FR,2)))
#define TSB_UART4_FR_BUSY                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->FR,3)))
#define TSB_UART4_FR_RXFE                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->FR,4)))
#define TSB_UART4_FR_TXFF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->FR,5)))
#define TSB_UART4_FR_RXFF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->FR,6)))
#define TSB_UART4_FR_TXFE                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->FR,7)))
#define TSB_UART4_FR_RI                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->FR,8)))
#define TSB_UART4_LCR_H_BRK                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->LCR_H,0)))
#define TSB_UART4_LCR_H_PEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->LCR_H,1)))
#define TSB_UART4_LCR_H_EPS                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->LCR_H,2)))
#define TSB_UART4_LCR_H_STP2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->LCR_H,3)))
#define TSB_UART4_LCR_H_FEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->LCR_H,4)))
#define TSB_UART4_LCR_H_SPS                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->LCR_H,7)))
#define TSB_UART4_CR_UARTEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->CR,0)))
#define TSB_UART4_CR_SIREN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->CR,1)))
#define TSB_UART4_CR_SIRLP                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->CR,2)))
#define TSB_UART4_CR_TXE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->CR,8)))
#define TSB_UART4_CR_RXE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->CR,9)))
#define TSB_UART4_CR_DTR                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->CR,10)))
#define TSB_UART4_CR_RTS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->CR,11)))
#define TSB_UART4_CR_RTSEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->CR,14)))
#define TSB_UART4_CR_CTSEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->CR,15)))
#define TSB_UART4_IMSC_RIMIM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->IMSC,0)))
#define TSB_UART4_IMSC_CTSMIM                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->IMSC,1)))
#define TSB_UART4_IMSC_DCDMIM                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->IMSC,2)))
#define TSB_UART4_IMSC_DSRMIM                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->IMSC,3)))
#define TSB_UART4_IMSC_RXIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->IMSC,4)))
#define TSB_UART4_IMSC_TXIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->IMSC,5)))
#define TSB_UART4_IMSC_RTIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->IMSC,6)))
#define TSB_UART4_IMSC_FEIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->IMSC,7)))
#define TSB_UART4_IMSC_PEIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->IMSC,8)))
#define TSB_UART4_IMSC_BEIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->IMSC,9)))
#define TSB_UART4_IMSC_OEIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->IMSC,10)))
#define TSB_UART4_RIS_RIRMIS                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->RIS,0)))
#define TSB_UART4_RIS_CTSRMIS                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->RIS,1)))
#define TSB_UART4_RIS_DCDRMIS                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->RIS,2)))
#define TSB_UART4_RIS_DSRRMIS                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->RIS,3)))
#define TSB_UART4_RIS_RXRIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->RIS,4)))
#define TSB_UART4_RIS_TXRIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->RIS,5)))
#define TSB_UART4_RIS_RTRIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->RIS,6)))
#define TSB_UART4_RIS_FERIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->RIS,7)))
#define TSB_UART4_RIS_PERIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->RIS,8)))
#define TSB_UART4_RIS_BERIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->RIS,9)))
#define TSB_UART4_RIS_OERIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->RIS,10)))
#define TSB_UART4_MIS_RIMMIS                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->MIS,0)))
#define TSB_UART4_MIS_CTSMMIS                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->MIS,1)))
#define TSB_UART4_MIS_DCDMMIS                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->MIS,2)))
#define TSB_UART4_MIS_DSRMMIS                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->MIS,3)))
#define TSB_UART4_MIS_RXMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->MIS,4)))
#define TSB_UART4_MIS_TXMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->MIS,5)))
#define TSB_UART4_MIS_RTMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->MIS,6)))
#define TSB_UART4_MIS_FEMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->MIS,7)))
#define TSB_UART4_MIS_PEMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->MIS,8)))
#define TSB_UART4_MIS_BEMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->MIS,9)))
#define TSB_UART4_MIS_OEMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART4->MIS,10)))
#define TSB_UART4_DMACR_RXDMAE                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->DMACR,0)))
#define TSB_UART4_DMACR_TXDMAE                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->DMACR,1)))
#define TSB_UART4_DMACR_DMAONERR                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART4->DMACR,2)))

#define TSB_UART5_DR_FE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->DR,8)))
#define TSB_UART5_DR_PE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->DR,9)))
#define TSB_UART5_DR_BE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->DR,10)))
#define TSB_UART5_DR_OE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->DR,11)))
#define TSB_UART5_RSR_FE                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->RSR,0)))
#define TSB_UART5_RSR_PE                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->RSR,1)))
#define TSB_UART5_RSR_BE                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->RSR,2)))
#define TSB_UART5_RSR_OE                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->RSR,3)))
#define TSB_UART5_FR_CTS                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->FR,0)))
#define TSB_UART5_FR_DSR                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->FR,1)))
#define TSB_UART5_FR_DCD                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->FR,2)))
#define TSB_UART5_FR_BUSY                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->FR,3)))
#define TSB_UART5_FR_RXFE                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->FR,4)))
#define TSB_UART5_FR_TXFF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->FR,5)))
#define TSB_UART5_FR_RXFF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->FR,6)))
#define TSB_UART5_FR_TXFE                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->FR,7)))
#define TSB_UART5_FR_RI                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->FR,8)))
#define TSB_UART5_LCR_H_BRK                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->LCR_H,0)))
#define TSB_UART5_LCR_H_PEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->LCR_H,1)))
#define TSB_UART5_LCR_H_EPS                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->LCR_H,2)))
#define TSB_UART5_LCR_H_STP2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->LCR_H,3)))
#define TSB_UART5_LCR_H_FEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->LCR_H,4)))
#define TSB_UART5_LCR_H_SPS                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->LCR_H,7)))
#define TSB_UART5_CR_UARTEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->CR,0)))
#define TSB_UART5_CR_SIREN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->CR,1)))
#define TSB_UART5_CR_SIRLP                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->CR,2)))
#define TSB_UART5_CR_TXE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->CR,8)))
#define TSB_UART5_CR_RXE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->CR,9)))
#define TSB_UART5_CR_DTR                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->CR,10)))
#define TSB_UART5_CR_RTS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->CR,11)))
#define TSB_UART5_CR_RTSEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->CR,14)))
#define TSB_UART5_CR_CTSEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->CR,15)))
#define TSB_UART5_IMSC_RIMIM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->IMSC,0)))
#define TSB_UART5_IMSC_CTSMIM                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->IMSC,1)))
#define TSB_UART5_IMSC_DCDMIM                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->IMSC,2)))
#define TSB_UART5_IMSC_DSRMIM                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->IMSC,3)))
#define TSB_UART5_IMSC_RXIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->IMSC,4)))
#define TSB_UART5_IMSC_TXIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->IMSC,5)))
#define TSB_UART5_IMSC_RTIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->IMSC,6)))
#define TSB_UART5_IMSC_FEIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->IMSC,7)))
#define TSB_UART5_IMSC_PEIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->IMSC,8)))
#define TSB_UART5_IMSC_BEIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->IMSC,9)))
#define TSB_UART5_IMSC_OEIM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->IMSC,10)))
#define TSB_UART5_RIS_RIRMIS                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->RIS,0)))
#define TSB_UART5_RIS_CTSRMIS                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->RIS,1)))
#define TSB_UART5_RIS_DCDRMIS                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->RIS,2)))
#define TSB_UART5_RIS_DSRRMIS                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->RIS,3)))
#define TSB_UART5_RIS_RXRIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->RIS,4)))
#define TSB_UART5_RIS_TXRIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->RIS,5)))
#define TSB_UART5_RIS_RTRIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->RIS,6)))
#define TSB_UART5_RIS_FERIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->RIS,7)))
#define TSB_UART5_RIS_PERIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->RIS,8)))
#define TSB_UART5_RIS_BERIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->RIS,9)))
#define TSB_UART5_RIS_OERIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->RIS,10)))
#define TSB_UART5_MIS_RIMMIS                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->MIS,0)))
#define TSB_UART5_MIS_CTSMMIS                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->MIS,1)))
#define TSB_UART5_MIS_DCDMMIS                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->MIS,2)))
#define TSB_UART5_MIS_DSRMMIS                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->MIS,3)))
#define TSB_UART5_MIS_RXMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->MIS,4)))
#define TSB_UART5_MIS_TXMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->MIS,5)))
#define TSB_UART5_MIS_RTMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->MIS,6)))
#define TSB_UART5_MIS_FEMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->MIS,7)))
#define TSB_UART5_MIS_PEMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->MIS,8)))
#define TSB_UART5_MIS_BEMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->MIS,9)))
#define TSB_UART5_MIS_OEMIS                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART5->MIS,10)))
#define TSB_UART5_DMACR_RXDMAE                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->DMACR,0)))
#define TSB_UART5_DMACR_TXDMAE                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->DMACR,1)))
#define TSB_UART5_DMACR_DMAONERR                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART5->DMACR,2)))


/* DMA Controller */
#define TSB_DMAA_STATUS_MASTER_ENABLE             (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMAA->STATUS,0)))
#define TSB_DMAA_CFG_MASTER_ENABLE                (*((__O  uint32_t *)BITBAND_PERI(&TSB_DMAA->CFG,0)))
#define TSB_DMAA_ERRCLR_ERR_CLR                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMAA->ERRCLR,0)))

#define TSB_DMAB_STATUS_MASTER_ENABLE             (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMAB->STATUS,0)))
#define TSB_DMAB_CFG_MASTER_ENABLE                (*((__O  uint32_t *)BITBAND_PERI(&TSB_DMAB->CFG,0)))
#define TSB_DMAB_ERRCLR_ERR_CLR                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMAB->ERRCLR,0)))


/* Analog-to-Digital Converter (AD) */
#define TSB_AD_MOD0_ADS                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_AD->MOD0,0)))
#define TSB_AD_MOD0_HPADS                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_AD->MOD0,1)))
#define TSB_AD_MOD1_ADHWE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD1,0)))
#define TSB_AD_MOD1_ADHWS                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD1,1)))
#define TSB_AD_MOD1_HPADHWE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD1,2)))
#define TSB_AD_MOD1_HPADHWS                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD1,3)))
#define TSB_AD_MOD1_RCUT                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD1,5)))
#define TSB_AD_MOD1_I2AD                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD1,6)))
#define TSB_AD_MOD1_DACON                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD1,7)))
#define TSB_AD_MOD3_SCAN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD3,0)))
#define TSB_AD_MOD3_REPEAT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->MOD3,1)))
#define TSB_AD_MOD5_ADBF                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->MOD5,0)))
#define TSB_AD_MOD5_EOCF                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->MOD5,1)))
#define TSB_AD_MOD5_HPADBF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->MOD5,2)))
#define TSB_AD_MOD5_HPEOCF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->MOD5,3)))
#define TSB_AD_CMPCR0_ADBIG0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->CMPCR0,4)))
#define TSB_AD_CMPCR0_CMPCOND0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->CMPCR0,5)))
#define TSB_AD_CMPCR0_CMP0EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->CMPCR0,7)))
#define TSB_AD_CMPCR1_ADBIG1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->CMPCR1,4)))
#define TSB_AD_CMPCR1_CMPCOND1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->CMPCR1,5)))
#define TSB_AD_CMPCR1_CMP1EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_AD->CMPCR1,7)))
#define TSB_AD_REG00_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG00,12)))
#define TSB_AD_REG00_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG00,13)))
#define TSB_AD_REG00_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG00,16)))
#define TSB_AD_REG00_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG00,17)))
#define TSB_AD_REG01_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG01,12)))
#define TSB_AD_REG01_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG01,13)))
#define TSB_AD_REG01_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG01,16)))
#define TSB_AD_REG01_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG01,17)))
#define TSB_AD_REG02_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG02,12)))
#define TSB_AD_REG02_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG02,13)))
#define TSB_AD_REG02_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG02,16)))
#define TSB_AD_REG02_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG02,17)))
#define TSB_AD_REG03_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG03,12)))
#define TSB_AD_REG03_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG03,13)))
#define TSB_AD_REG03_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG03,16)))
#define TSB_AD_REG03_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG03,17)))
#define TSB_AD_REG04_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG04,12)))
#define TSB_AD_REG04_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG04,13)))
#define TSB_AD_REG04_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG04,16)))
#define TSB_AD_REG04_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG04,17)))
#define TSB_AD_REG05_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG05,12)))
#define TSB_AD_REG05_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG05,13)))
#define TSB_AD_REG05_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG05,16)))
#define TSB_AD_REG05_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG05,17)))
#define TSB_AD_REG06_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG06,12)))
#define TSB_AD_REG06_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG06,13)))
#define TSB_AD_REG06_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG06,16)))
#define TSB_AD_REG06_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG06,17)))
#define TSB_AD_REG07_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG07,12)))
#define TSB_AD_REG07_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG07,13)))
#define TSB_AD_REG07_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG07,16)))
#define TSB_AD_REG07_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG07,17)))
#define TSB_AD_REG08_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG08,12)))
#define TSB_AD_REG08_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG08,13)))
#define TSB_AD_REG08_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG08,16)))
#define TSB_AD_REG08_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG08,17)))
#define TSB_AD_REG09_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG09,12)))
#define TSB_AD_REG09_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG09,13)))
#define TSB_AD_REG09_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG09,16)))
#define TSB_AD_REG09_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG09,17)))
#define TSB_AD_REG10_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG10,12)))
#define TSB_AD_REG10_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG10,13)))
#define TSB_AD_REG10_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG10,16)))
#define TSB_AD_REG10_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG10,17)))
#define TSB_AD_REG11_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG11,12)))
#define TSB_AD_REG11_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG11,13)))
#define TSB_AD_REG11_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG11,16)))
#define TSB_AD_REG11_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG11,17)))
#define TSB_AD_REG12_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG12,12)))
#define TSB_AD_REG12_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG12,13)))
#define TSB_AD_REG12_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG12,16)))
#define TSB_AD_REG12_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG12,17)))
#define TSB_AD_REG13_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG13,12)))
#define TSB_AD_REG13_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG13,13)))
#define TSB_AD_REG13_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG13,16)))
#define TSB_AD_REG13_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG13,17)))
#define TSB_AD_REG14_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG14,12)))
#define TSB_AD_REG14_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG14,13)))
#define TSB_AD_REG14_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG14,16)))
#define TSB_AD_REG14_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG14,17)))
#define TSB_AD_REG15_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG15,12)))
#define TSB_AD_REG15_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG15,13)))
#define TSB_AD_REG15_ADRF_MIR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG15,16)))
#define TSB_AD_REG15_ADOVRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REG15,17)))
#define TSB_AD_REGSP_ADSPRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REGSP,12)))
#define TSB_AD_REGSP_ADOVRSPF                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REGSP,13)))
#define TSB_AD_REGSP_ADSPRF_MIR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REGSP,16)))
#define TSB_AD_REGSP_ADOVRSPF_MIR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_AD->REGSP,17)))


/* External Bus Interface(EXB) */
#define TSB_EXB_MOD_EXBSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EXB->MOD,0)))
#define TSB_EXB_CS0_CSW0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EXB->CS0,0)))
#define TSB_EXB_CS0_CSW1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EXB->CS0,1)))
#define TSB_EXB_CS0_CSW2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EXB->CS0,2)))
#define TSB_EXB_CS1_CSW0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EXB->CS1,0)))
#define TSB_EXB_CS1_CSW1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EXB->CS1,1)))
#define TSB_EXB_CS1_CSW2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EXB->CS1,2)))
#define TSB_EXB_CS2_CSW0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EXB->CS2,0)))
#define TSB_EXB_CS2_CSW1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EXB->CS2,1)))
#define TSB_EXB_CS2_CSW2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EXB->CS2,2)))
#define TSB_EXB_CS3_CSW0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EXB->CS3,0)))
#define TSB_EXB_CS3_CSW1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EXB->CS3,1)))
#define TSB_EXB_CS3_CSW2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EXB->CS3,2)))


/* ADC */
#define TSB_ADILV_TRGSEL_TRGSELEN                 (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADILV->TRGSEL,0)))


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
#define TSB_PA_FR1_PA7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,7)))
#define TSB_PA_FR2_PA0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR2,0)))
#define TSB_PA_FR2_PA1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR2,1)))
#define TSB_PA_FR2_PA2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR2,2)))
#define TSB_PA_FR2_PA3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR2,3)))
#define TSB_PA_FR2_PA4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR2,4)))
#define TSB_PA_FR2_PA5F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR2,5)))
#define TSB_PA_FR2_PA6F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR2,6)))
#define TSB_PA_FR2_PA7F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR2,7)))
#define TSB_PA_FR3_PA3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR3,3)))
#define TSB_PA_FR3_PA5F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR3,5)))
#define TSB_PA_FR3_PA6F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR3,6)))
#define TSB_PA_FR3_PA7F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR3,7)))
#define TSB_PA_FR4_PA7F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR4,7)))
#define TSB_PA_FR5_PA7F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR5,7)))
#define TSB_PA_OD_PA0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,0)))
#define TSB_PA_OD_PA1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,1)))
#define TSB_PA_OD_PA2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,2)))
#define TSB_PA_OD_PA3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,3)))
#define TSB_PA_OD_PA4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,4)))
#define TSB_PA_OD_PA5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,5)))
#define TSB_PA_OD_PA6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,6)))
#define TSB_PA_OD_PA7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,7)))
#define TSB_PA_PUP_PA0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,0)))
#define TSB_PA_PUP_PA1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,1)))
#define TSB_PA_PUP_PA2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,2)))
#define TSB_PA_PUP_PA3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,3)))
#define TSB_PA_PUP_PA4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,4)))
#define TSB_PA_PUP_PA5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,5)))
#define TSB_PA_PUP_PA6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,6)))
#define TSB_PA_PUP_PA7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,7)))
#define TSB_PA_PDN_PA0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,0)))
#define TSB_PA_PDN_PA1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,1)))
#define TSB_PA_PDN_PA2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,2)))
#define TSB_PA_PDN_PA3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,3)))
#define TSB_PA_PDN_PA4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,4)))
#define TSB_PA_PDN_PA5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,5)))
#define TSB_PA_PDN_PA6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,6)))
#define TSB_PA_PDN_PA7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,7)))
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
#define TSB_PB_DATA_PB4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,4)))
#define TSB_PB_DATA_PB5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,5)))
#define TSB_PB_DATA_PB6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,6)))
#define TSB_PB_CR_PB0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,0)))
#define TSB_PB_CR_PB1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,1)))
#define TSB_PB_CR_PB2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,2)))
#define TSB_PB_CR_PB3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,3)))
#define TSB_PB_CR_PB4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,4)))
#define TSB_PB_CR_PB5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,5)))
#define TSB_PB_CR_PB6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,6)))
#define TSB_PB_FR1_PB0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,0)))
#define TSB_PB_FR1_PB1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,1)))
#define TSB_PB_FR1_PB2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,2)))
#define TSB_PB_FR1_PB3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,3)))
#define TSB_PB_FR1_PB4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,4)))
#define TSB_PB_FR1_PB5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,5)))
#define TSB_PB_FR1_PB6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,6)))
#define TSB_PB_FR2_PB2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,2)))
#define TSB_PB_FR2_PB3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,3)))
#define TSB_PB_FR2_PB4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,4)))
#define TSB_PB_FR2_PB5F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,5)))
#define TSB_PB_FR2_PB6F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,6)))
#define TSB_PB_FR3_PB0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR3,0)))
#define TSB_PB_FR3_PB1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR3,1)))
#define TSB_PB_FR3_PB2F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR3,2)))
#define TSB_PB_FR3_PB3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR3,3)))
#define TSB_PB_FR3_PB4F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR3,4)))
#define TSB_PB_FR3_PB5F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR3,5)))
#define TSB_PB_FR4_PB2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,2)))
#define TSB_PB_FR4_PB3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,3)))
#define TSB_PB_FR4_PB4F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,4)))
#define TSB_PB_FR4_PB5F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,5)))
#define TSB_PB_FR4_PB6F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,6)))
#define TSB_PB_OD_PB0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,0)))
#define TSB_PB_OD_PB1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,1)))
#define TSB_PB_OD_PB2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,2)))
#define TSB_PB_OD_PB3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,3)))
#define TSB_PB_OD_PB4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,4)))
#define TSB_PB_OD_PB5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,5)))
#define TSB_PB_OD_PB6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,6)))
#define TSB_PB_PUP_PB0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,0)))
#define TSB_PB_PUP_PB1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,1)))
#define TSB_PB_PUP_PB2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,2)))
#define TSB_PB_PUP_PB3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,3)))
#define TSB_PB_PUP_PB4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,4)))
#define TSB_PB_PUP_PB5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,5)))
#define TSB_PB_PUP_PB6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,6)))
#define TSB_PB_PDN_PB0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,0)))
#define TSB_PB_PDN_PB1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,1)))
#define TSB_PB_PDN_PB2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,2)))
#define TSB_PB_PDN_PB3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,3)))
#define TSB_PB_PDN_PB4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,4)))
#define TSB_PB_PDN_PB5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,5)))
#define TSB_PB_PDN_PB6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,6)))
#define TSB_PB_IE_PB0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,0)))
#define TSB_PB_IE_PB1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,1)))
#define TSB_PB_IE_PB2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,2)))
#define TSB_PB_IE_PB3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,3)))
#define TSB_PB_IE_PB4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,4)))
#define TSB_PB_IE_PB5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,5)))


/* General Purpose Input/Output Port (PC) */
#define TSB_PC_DATA_PC0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->DATA,0)))
#define TSB_PC_DATA_PC1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->DATA,1)))
#define TSB_PC_DATA_PC2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->DATA,2)))
#define TSB_PC_DATA_PC3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->DATA,3)))
#define TSB_PC_DATA_PC4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->DATA,4)))
#define TSB_PC_DATA_PC5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->DATA,5)))
#define TSB_PC_CR_PC0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->CR,0)))
#define TSB_PC_CR_PC1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->CR,1)))
#define TSB_PC_CR_PC2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->CR,2)))
#define TSB_PC_CR_PC3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->CR,3)))
#define TSB_PC_CR_PC4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->CR,4)))
#define TSB_PC_CR_PC5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->CR,5)))
#define TSB_PC_FR1_PC0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,0)))
#define TSB_PC_FR1_PC1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,1)))
#define TSB_PC_FR1_PC2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,2)))
#define TSB_PC_FR1_PC3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,3)))
#define TSB_PC_FR1_PC4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,4)))
#define TSB_PC_FR1_PC5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,5)))
#define TSB_PC_FR2_PC5F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,5)))
#define TSB_PC_OD_PC0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,0)))
#define TSB_PC_OD_PC1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,1)))
#define TSB_PC_OD_PC2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,2)))
#define TSB_PC_OD_PC3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,3)))
#define TSB_PC_OD_PC4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,4)))
#define TSB_PC_OD_PC5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,5)))
#define TSB_PC_PUP_PC0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,0)))
#define TSB_PC_PUP_PC1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,1)))
#define TSB_PC_PUP_PC2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,2)))
#define TSB_PC_PUP_PC3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,3)))
#define TSB_PC_PUP_PC4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,4)))
#define TSB_PC_PUP_PC5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,5)))
#define TSB_PC_PDN_PC0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PDN,0)))
#define TSB_PC_PDN_PC1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PDN,1)))
#define TSB_PC_PDN_PC2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PDN,2)))
#define TSB_PC_PDN_PC3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PDN,3)))
#define TSB_PC_PDN_PC4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PDN,4)))
#define TSB_PC_PDN_PC5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PDN,5)))
#define TSB_PC_IE_PC0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,0)))
#define TSB_PC_IE_PC1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,1)))
#define TSB_PC_IE_PC2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,2)))
#define TSB_PC_IE_PC3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,3)))
#define TSB_PC_IE_PC4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,4)))
#define TSB_PC_IE_PC5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,5)))


/* General Purpose Input/Output Port (PE) */
#define TSB_PE_DATA_PE0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,0)))
#define TSB_PE_DATA_PE1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,1)))
#define TSB_PE_DATA_PE2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,2)))
#define TSB_PE_DATA_PE3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,3)))
#define TSB_PE_DATA_PE4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,4)))
#define TSB_PE_DATA_PE5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,5)))
#define TSB_PE_DATA_PE6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,6)))
#define TSB_PE_DATA_PE7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,7)))
#define TSB_PE_CR_PE0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,0)))
#define TSB_PE_CR_PE1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,1)))
#define TSB_PE_CR_PE2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,2)))
#define TSB_PE_CR_PE3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,3)))
#define TSB_PE_CR_PE4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,4)))
#define TSB_PE_CR_PE5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,5)))
#define TSB_PE_CR_PE6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,6)))
#define TSB_PE_CR_PE7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,7)))
#define TSB_PE_FR1_PE1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,1)))
#define TSB_PE_FR1_PE2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,2)))
#define TSB_PE_FR1_PE3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,3)))
#define TSB_PE_FR1_PE4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,4)))
#define TSB_PE_FR1_PE5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,5)))
#define TSB_PE_FR1_PE6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,6)))
#define TSB_PE_FR3_PE0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR3,0)))
#define TSB_PE_FR3_PE1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR3,1)))
#define TSB_PE_FR3_PE2F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR3,2)))
#define TSB_PE_FR3_PE3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR3,3)))
#define TSB_PE_FR3_PE4F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR3,4)))
#define TSB_PE_FR3_PE5F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR3,5)))
#define TSB_PE_FR3_PE6F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR3,6)))
#define TSB_PE_FR3_PE7F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR3,7)))
#define TSB_PE_FR4_PE0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,0)))
#define TSB_PE_FR4_PE1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,1)))
#define TSB_PE_FR4_PE3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,3)))
#define TSB_PE_FR4_PE4F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,4)))
#define TSB_PE_FR4_PE7F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,7)))
#define TSB_PE_FR5_PE0F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR5,0)))
#define TSB_PE_FR5_PE1F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR5,1)))
#define TSB_PE_FR5_PE2F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR5,2)))
#define TSB_PE_FR5_PE3F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR5,3)))
#define TSB_PE_FR5_PE4F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR5,4)))
#define TSB_PE_FR5_PE7F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR5,7)))
#define TSB_PE_OD_PE0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,0)))
#define TSB_PE_OD_PE1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,1)))
#define TSB_PE_OD_PE2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,2)))
#define TSB_PE_OD_PE3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,3)))
#define TSB_PE_OD_PE4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,4)))
#define TSB_PE_OD_PE5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,5)))
#define TSB_PE_OD_PE6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,6)))
#define TSB_PE_OD_PE7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,7)))
#define TSB_PE_PUP_PE0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,0)))
#define TSB_PE_PUP_PE1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,1)))
#define TSB_PE_PUP_PE2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,2)))
#define TSB_PE_PUP_PE3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,3)))
#define TSB_PE_PUP_PE4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,4)))
#define TSB_PE_PUP_PE5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,5)))
#define TSB_PE_PUP_PE6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,6)))
#define TSB_PE_PUP_PE7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,7)))
#define TSB_PE_PDN_PE0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PDN,0)))
#define TSB_PE_PDN_PE1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PDN,1)))
#define TSB_PE_PDN_PE2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PDN,2)))
#define TSB_PE_PDN_PE3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PDN,3)))
#define TSB_PE_PDN_PE4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PDN,4)))
#define TSB_PE_PDN_PE5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PDN,5)))
#define TSB_PE_PDN_PE6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PDN,6)))
#define TSB_PE_PDN_PE7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PDN,7)))
#define TSB_PE_IE_PE0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,0)))
#define TSB_PE_IE_PE1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,1)))
#define TSB_PE_IE_PE2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,2)))
#define TSB_PE_IE_PE3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,3)))
#define TSB_PE_IE_PE4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,4)))
#define TSB_PE_IE_PE5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,5)))
#define TSB_PE_IE_PE6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,6)))
#define TSB_PE_IE_PE7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,7)))


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
#define TSB_PF_FR2_PF4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR2,4)))
#define TSB_PF_FR2_PF5F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR2,5)))
#define TSB_PF_FR2_PF6F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR2,6)))
#define TSB_PF_FR2_PF7F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR2,7)))
#define TSB_PF_FR3_PF0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR3,0)))
#define TSB_PF_FR3_PF1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR3,1)))
#define TSB_PF_FR3_PF2F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR3,2)))
#define TSB_PF_FR3_PF3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR3,3)))
#define TSB_PF_FR3_PF4F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR3,4)))
#define TSB_PF_FR3_PF5F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR3,5)))
#define TSB_PF_FR3_PF6F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR3,6)))
#define TSB_PF_FR3_PF7F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR3,7)))
#define TSB_PF_FR4_PF1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR4,1)))
#define TSB_PF_FR4_PF2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR4,2)))
#define TSB_PF_FR4_PF5F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR4,5)))
#define TSB_PF_FR4_PF6F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR4,6)))
#define TSB_PF_FR4_PF7F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR4,7)))
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
#define TSB_PF_PDN_PF0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PDN,0)))
#define TSB_PF_PDN_PF1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PDN,1)))
#define TSB_PF_PDN_PF2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PDN,2)))
#define TSB_PF_PDN_PF3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PDN,3)))
#define TSB_PF_PDN_PF4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PDN,4)))
#define TSB_PF_PDN_PF5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PDN,5)))
#define TSB_PF_PDN_PF6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PDN,6)))
#define TSB_PF_PDN_PF7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PDN,7)))
#define TSB_PF_IE_PF0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,0)))
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
#define TSB_PG_DATA_PG4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,4)))
#define TSB_PG_DATA_PG5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,5)))
#define TSB_PG_DATA_PG6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,6)))
#define TSB_PG_DATA_PG7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,7)))
#define TSB_PG_CR_PG0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,0)))
#define TSB_PG_CR_PG1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,1)))
#define TSB_PG_CR_PG2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,2)))
#define TSB_PG_CR_PG3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,3)))
#define TSB_PG_CR_PG4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,4)))
#define TSB_PG_CR_PG5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,5)))
#define TSB_PG_CR_PG6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,6)))
#define TSB_PG_CR_PG7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,7)))
#define TSB_PG_FR1_PG0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,0)))
#define TSB_PG_FR1_PG1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,1)))
#define TSB_PG_FR1_PG2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,2)))
#define TSB_PG_FR1_PG3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,3)))
#define TSB_PG_FR1_PG4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,4)))
#define TSB_PG_FR1_PG5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,5)))
#define TSB_PG_FR1_PG6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,6)))
#define TSB_PG_FR1_PG7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,7)))
#define TSB_PG_FR2_PG1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR2,1)))
#define TSB_PG_FR2_PG2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR2,2)))
#define TSB_PG_FR2_PG3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR2,3)))
#define TSB_PG_FR2_PG4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR2,4)))
#define TSB_PG_FR2_PG5F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR2,5)))
#define TSB_PG_FR2_PG6F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR2,6)))
#define TSB_PG_FR2_PG7F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR2,7)))
#define TSB_PG_FR3_PG0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR3,0)))
#define TSB_PG_FR3_PG1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR3,1)))
#define TSB_PG_FR3_PG2F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR3,2)))
#define TSB_PG_FR3_PG3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR3,3)))
#define TSB_PG_FR3_PG4F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR3,4)))
#define TSB_PG_FR3_PG5F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR3,5)))
#define TSB_PG_FR3_PG6F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR3,6)))
#define TSB_PG_FR3_PG7F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR3,7)))
#define TSB_PG_FR4_PG2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR4,2)))
#define TSB_PG_FR4_PG3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR4,3)))
#define TSB_PG_OD_PG0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,0)))
#define TSB_PG_OD_PG1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,1)))
#define TSB_PG_OD_PG2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,2)))
#define TSB_PG_OD_PG3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,3)))
#define TSB_PG_OD_PG4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,4)))
#define TSB_PG_OD_PG5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,5)))
#define TSB_PG_OD_PG6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,6)))
#define TSB_PG_OD_PG7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,7)))
#define TSB_PG_PUP_PG0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,0)))
#define TSB_PG_PUP_PG1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,1)))
#define TSB_PG_PUP_PG2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,2)))
#define TSB_PG_PUP_PG3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,3)))
#define TSB_PG_PUP_PG4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,4)))
#define TSB_PG_PUP_PG5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,5)))
#define TSB_PG_PUP_PG6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,6)))
#define TSB_PG_PUP_PG7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,7)))
#define TSB_PG_PDN_PG0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,0)))
#define TSB_PG_PDN_PG1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,1)))
#define TSB_PG_PDN_PG2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,2)))
#define TSB_PG_PDN_PG3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,3)))
#define TSB_PG_PDN_PG4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,4)))
#define TSB_PG_PDN_PG5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,5)))
#define TSB_PG_PDN_PG6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,6)))
#define TSB_PG_PDN_PG7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,7)))
#define TSB_PG_IE_PG0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,0)))
#define TSB_PG_IE_PG1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,1)))
#define TSB_PG_IE_PG2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,2)))
#define TSB_PG_IE_PG3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,3)))
#define TSB_PG_IE_PG4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,4)))
#define TSB_PG_IE_PG5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,5)))
#define TSB_PG_IE_PG6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,6)))
#define TSB_PG_IE_PG7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,7)))


/* General Purpose Input/Output Port (PH) */
#define TSB_PH_DATA_PH0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,0)))
#define TSB_PH_DATA_PH1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,1)))
#define TSB_PH_DATA_PH2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,2)))
#define TSB_PH_DATA_PH3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,3)))
#define TSB_PH_CR_PH0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,0)))
#define TSB_PH_CR_PH1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,1)))
#define TSB_PH_CR_PH2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,2)))
#define TSB_PH_CR_PH3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,3)))
#define TSB_PH_FR1_PH0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,0)))
#define TSB_PH_FR1_PH1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,1)))
#define TSB_PH_FR1_PH2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,2)))
#define TSB_PH_FR1_PH3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,3)))
#define TSB_PH_FR2_PH0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR2,0)))
#define TSB_PH_FR2_PH1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR2,1)))
#define TSB_PH_FR3_PH0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR3,0)))
#define TSB_PH_FR3_PH1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR3,1)))
#define TSB_PH_FR3_PH2F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR3,2)))
#define TSB_PH_FR3_PH3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR3,3)))
#define TSB_PH_FR4_PH2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR4,2)))
#define TSB_PH_FR4_PH3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR4,3)))
#define TSB_PH_FR5_PH0F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR5,0)))
#define TSB_PH_FR5_PH1F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR5,1)))
#define TSB_PH_FR5_PH2F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR5,2)))
#define TSB_PH_OD_PH0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->OD,0)))
#define TSB_PH_OD_PH1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->OD,1)))
#define TSB_PH_OD_PH2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->OD,2)))
#define TSB_PH_OD_PH3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->OD,3)))
#define TSB_PH_PUP_PH0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,0)))
#define TSB_PH_PUP_PH1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,1)))
#define TSB_PH_PUP_PH2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,2)))
#define TSB_PH_PUP_PH3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,3)))
#define TSB_PH_PDN_PH0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PDN,0)))
#define TSB_PH_PDN_PH1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PDN,1)))
#define TSB_PH_PDN_PH2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PDN,2)))
#define TSB_PH_PDN_PH3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PDN,3)))
#define TSB_PH_IE_PH0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,0)))
#define TSB_PH_IE_PH1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,1)))
#define TSB_PH_IE_PH2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,2)))


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
#define TSB_PI_OD_PI0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->OD,0)))
#define TSB_PI_OD_PI1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->OD,1)))
#define TSB_PI_OD_PI2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->OD,2)))
#define TSB_PI_OD_PI3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->OD,3)))
#define TSB_PI_OD_PI4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->OD,4)))
#define TSB_PI_OD_PI5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->OD,5)))
#define TSB_PI_OD_PI6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->OD,6)))
#define TSB_PI_OD_PI7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->OD,7)))
#define TSB_PI_PUP_PI0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,0)))
#define TSB_PI_PUP_PI1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,1)))
#define TSB_PI_PUP_PI2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,2)))
#define TSB_PI_PUP_PI3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,3)))
#define TSB_PI_PUP_PI4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,4)))
#define TSB_PI_PUP_PI5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,5)))
#define TSB_PI_PUP_PI6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,6)))
#define TSB_PI_PUP_PI7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PUP,7)))
#define TSB_PI_PDN_PI0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PDN,0)))
#define TSB_PI_PDN_PI1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PDN,1)))
#define TSB_PI_PDN_PI2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PDN,2)))
#define TSB_PI_PDN_PI3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PDN,3)))
#define TSB_PI_PDN_PI4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PDN,4)))
#define TSB_PI_PDN_PI5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PDN,5)))
#define TSB_PI_PDN_PI6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PDN,6)))
#define TSB_PI_PDN_PI7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PI->PDN,7)))
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
#define TSB_PJ_FR2_PJ3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->FR2,3)))
#define TSB_PJ_OD_PJ0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->OD,0)))
#define TSB_PJ_OD_PJ1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->OD,1)))
#define TSB_PJ_OD_PJ2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->OD,2)))
#define TSB_PJ_OD_PJ3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->OD,3)))
#define TSB_PJ_OD_PJ4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->OD,4)))
#define TSB_PJ_OD_PJ5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->OD,5)))
#define TSB_PJ_OD_PJ6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->OD,6)))
#define TSB_PJ_OD_PJ7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->OD,7)))
#define TSB_PJ_PUP_PJ0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,0)))
#define TSB_PJ_PUP_PJ1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,1)))
#define TSB_PJ_PUP_PJ2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,2)))
#define TSB_PJ_PUP_PJ3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,3)))
#define TSB_PJ_PUP_PJ4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,4)))
#define TSB_PJ_PUP_PJ5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,5)))
#define TSB_PJ_PUP_PJ6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,6)))
#define TSB_PJ_PUP_PJ7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,7)))
#define TSB_PJ_PDN_PJ0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PDN,0)))
#define TSB_PJ_PDN_PJ1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PDN,1)))
#define TSB_PJ_PDN_PJ2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PDN,2)))
#define TSB_PJ_PDN_PJ3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PDN,3)))
#define TSB_PJ_PDN_PJ4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PDN,4)))
#define TSB_PJ_PDN_PJ5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PDN,5)))
#define TSB_PJ_PDN_PJ6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PDN,6)))
#define TSB_PJ_PDN_PJ7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PDN,7)))
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
#define TSB_PK_DATA_PK2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,2)))
#define TSB_PK_DATA_PK3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,3)))
#define TSB_PK_DATA_PK4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,4)))
#define TSB_PK_CR_PK0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,0)))
#define TSB_PK_CR_PK1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,1)))
#define TSB_PK_CR_PK2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,2)))
#define TSB_PK_CR_PK3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,3)))
#define TSB_PK_CR_PK4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,4)))
#define TSB_PK_FR1_PK0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR1,0)))
#define TSB_PK_FR1_PK4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR1,4)))
#define TSB_PK_FR2_PK1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR2,1)))
#define TSB_PK_FR2_PK2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR2,2)))
#define TSB_PK_FR2_PK3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR2,3)))
#define TSB_PK_FR2_PK4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR2,4)))
#define TSB_PK_FR3_PK1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR3,1)))
#define TSB_PK_FR3_PK2F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR3,2)))
#define TSB_PK_FR3_PK3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR3,3)))
#define TSB_PK_FR3_PK4F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR3,4)))
#define TSB_PK_FR4_PK1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR4,1)))
#define TSB_PK_OD_PK0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,0)))
#define TSB_PK_OD_PK1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,1)))
#define TSB_PK_OD_PK2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,2)))
#define TSB_PK_OD_PK3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,3)))
#define TSB_PK_OD_PK4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,4)))
#define TSB_PK_PUP_PK0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,0)))
#define TSB_PK_PUP_PK1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,1)))
#define TSB_PK_PUP_PK2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,2)))
#define TSB_PK_PUP_PK3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,3)))
#define TSB_PK_PUP_PK4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,4)))
#define TSB_PK_PDN_PK0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,0)))
#define TSB_PK_PDN_PK1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,1)))
#define TSB_PK_PDN_PK2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,2)))
#define TSB_PK_PDN_PK3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,3)))
#define TSB_PK_PDN_PK4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,4)))
#define TSB_PK_IE_PK0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,0)))
#define TSB_PK_IE_PK1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,1)))
#define TSB_PK_IE_PK2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,2)))
#define TSB_PK_IE_PK3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,3)))
#define TSB_PK_IE_PK4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,4)))


/* General Purpose Input/Output Port (PL) */
#define TSB_PL_DATA_PL0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,0)))
#define TSB_PL_DATA_PL1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,1)))
#define TSB_PL_DATA_PL2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,2)))
#define TSB_PL_DATA_PL3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,3)))
#define TSB_PL_CR_PL0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,0)))
#define TSB_PL_CR_PL1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,1)))
#define TSB_PL_CR_PL2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,2)))
#define TSB_PL_CR_PL3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,3)))
#define TSB_PL_FR2_PL0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR2,0)))
#define TSB_PL_FR3_PL0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR3,0)))
#define TSB_PL_FR3_PL1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR3,1)))
#define TSB_PL_FR3_PL2F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR3,2)))
#define TSB_PL_FR3_PL3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR3,3)))
#define TSB_PL_FR4_PL0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR4,0)))
#define TSB_PL_FR4_PL2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR4,2)))
#define TSB_PL_FR4_PL3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR4,3)))
#define TSB_PL_FR5_PL1F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR5,1)))
#define TSB_PL_FR5_PL2F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR5,2)))
#define TSB_PL_FR5_PL3F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR5,3)))
#define TSB_PL_FR6_PL3F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR6,3)))
#define TSB_PL_OD_PL0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,0)))
#define TSB_PL_OD_PL1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,1)))
#define TSB_PL_OD_PL2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,2)))
#define TSB_PL_OD_PL3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,3)))
#define TSB_PL_PUP_PL0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,0)))
#define TSB_PL_PUP_PL1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,1)))
#define TSB_PL_PUP_PL2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,2)))
#define TSB_PL_PUP_PL3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,3)))
#define TSB_PL_PDN_PL0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PDN,0)))
#define TSB_PL_PDN_PL1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PDN,1)))
#define TSB_PL_PDN_PL2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PDN,2)))
#define TSB_PL_PDN_PL3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PDN,3)))
#define TSB_PL_IE_PL0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,0)))
#define TSB_PL_IE_PL1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,1)))
#define TSB_PL_IE_PL2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,2)))
#define TSB_PL_IE_PL3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,3)))


/* 16-bit Timer/Event Counter (TB) */
#define TSB_TB0_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->EN,6)))
#define TSB_TB0_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->EN,7)))
#define TSB_TB0_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->RUN,0)))
#define TSB_TB0_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->RUN,2)))
#define TSB_TB0_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,0)))
#define TSB_TB0_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,1)))
#define TSB_TB0_CR_TBINSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,2)))
#define TSB_TB0_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,3)))
#define TSB_TB0_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,5)))
#define TSB_TB0_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,7)))
#define TSB_TB0_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->MOD,3)))
#define TSB_TB0_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB0->MOD,6)))
#define TSB_TB0_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,2)))
#define TSB_TB0_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,3)))
#define TSB_TB0_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,4)))
#define TSB_TB0_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,5)))
#define TSB_TB0_ST_INTTB0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB0->ST,0)))
#define TSB_TB0_ST_INTTB1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB0->ST,1)))
#define TSB_TB0_ST_INTTBOF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB0->ST,2)))
#define TSB_TB0_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->IM,0)))
#define TSB_TB0_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->IM,1)))
#define TSB_TB0_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->IM,2)))

#define TSB_TB1_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->EN,6)))
#define TSB_TB1_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->EN,7)))
#define TSB_TB1_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->RUN,0)))
#define TSB_TB1_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->RUN,2)))
#define TSB_TB1_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,0)))
#define TSB_TB1_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,1)))
#define TSB_TB1_CR_TBINSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,2)))
#define TSB_TB1_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,3)))
#define TSB_TB1_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,5)))
#define TSB_TB1_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,7)))
#define TSB_TB1_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->MOD,3)))
#define TSB_TB1_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB1->MOD,6)))
#define TSB_TB1_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,2)))
#define TSB_TB1_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,3)))
#define TSB_TB1_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,4)))
#define TSB_TB1_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,5)))
#define TSB_TB1_ST_INTTB0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB1->ST,0)))
#define TSB_TB1_ST_INTTB1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB1->ST,1)))
#define TSB_TB1_ST_INTTBOF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB1->ST,2)))
#define TSB_TB1_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->IM,0)))
#define TSB_TB1_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->IM,1)))
#define TSB_TB1_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->IM,2)))

#define TSB_TB2_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->EN,6)))
#define TSB_TB2_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->EN,7)))
#define TSB_TB2_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->RUN,0)))
#define TSB_TB2_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->RUN,2)))
#define TSB_TB2_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,0)))
#define TSB_TB2_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,1)))
#define TSB_TB2_CR_TBINSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,2)))
#define TSB_TB2_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,3)))
#define TSB_TB2_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,5)))
#define TSB_TB2_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,7)))
#define TSB_TB2_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->MOD,3)))
#define TSB_TB2_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB2->MOD,6)))
#define TSB_TB2_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,2)))
#define TSB_TB2_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,3)))
#define TSB_TB2_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,4)))
#define TSB_TB2_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,5)))
#define TSB_TB2_ST_INTTB0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB2->ST,0)))
#define TSB_TB2_ST_INTTB1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB2->ST,1)))
#define TSB_TB2_ST_INTTBOF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB2->ST,2)))
#define TSB_TB2_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->IM,0)))
#define TSB_TB2_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->IM,1)))
#define TSB_TB2_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->IM,2)))

#define TSB_TB3_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->EN,6)))
#define TSB_TB3_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->EN,7)))
#define TSB_TB3_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->RUN,0)))
#define TSB_TB3_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->RUN,2)))
#define TSB_TB3_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,0)))
#define TSB_TB3_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,1)))
#define TSB_TB3_CR_TBINSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,2)))
#define TSB_TB3_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,3)))
#define TSB_TB3_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,5)))
#define TSB_TB3_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,7)))
#define TSB_TB3_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->MOD,3)))
#define TSB_TB3_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB3->MOD,6)))
#define TSB_TB3_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,2)))
#define TSB_TB3_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,3)))
#define TSB_TB3_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,4)))
#define TSB_TB3_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,5)))
#define TSB_TB3_ST_INTTB0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB3->ST,0)))
#define TSB_TB3_ST_INTTB1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB3->ST,1)))
#define TSB_TB3_ST_INTTBOF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB3->ST,2)))
#define TSB_TB3_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->IM,0)))
#define TSB_TB3_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->IM,1)))
#define TSB_TB3_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->IM,2)))

#define TSB_TB4_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->EN,6)))
#define TSB_TB4_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->EN,7)))
#define TSB_TB4_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->RUN,0)))
#define TSB_TB4_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->RUN,2)))
#define TSB_TB4_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,0)))
#define TSB_TB4_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,1)))
#define TSB_TB4_CR_TBINSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,2)))
#define TSB_TB4_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,3)))
#define TSB_TB4_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,5)))
#define TSB_TB4_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,7)))
#define TSB_TB4_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->MOD,3)))
#define TSB_TB4_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB4->MOD,6)))
#define TSB_TB4_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,2)))
#define TSB_TB4_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,3)))
#define TSB_TB4_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,4)))
#define TSB_TB4_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,5)))
#define TSB_TB4_ST_INTTB0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB4->ST,0)))
#define TSB_TB4_ST_INTTB1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB4->ST,1)))
#define TSB_TB4_ST_INTTBOF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB4->ST,2)))
#define TSB_TB4_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->IM,0)))
#define TSB_TB4_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->IM,1)))
#define TSB_TB4_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->IM,2)))

#define TSB_TB5_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->EN,6)))
#define TSB_TB5_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->EN,7)))
#define TSB_TB5_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->RUN,0)))
#define TSB_TB5_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->RUN,2)))
#define TSB_TB5_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,0)))
#define TSB_TB5_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,1)))
#define TSB_TB5_CR_TBINSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,2)))
#define TSB_TB5_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,3)))
#define TSB_TB5_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,5)))
#define TSB_TB5_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,7)))
#define TSB_TB5_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->MOD,3)))
#define TSB_TB5_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB5->MOD,6)))
#define TSB_TB5_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,2)))
#define TSB_TB5_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,3)))
#define TSB_TB5_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,4)))
#define TSB_TB5_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,5)))
#define TSB_TB5_ST_INTTB0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB5->ST,0)))
#define TSB_TB5_ST_INTTB1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB5->ST,1)))
#define TSB_TB5_ST_INTTBOF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB5->ST,2)))
#define TSB_TB5_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->IM,0)))
#define TSB_TB5_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->IM,1)))
#define TSB_TB5_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->IM,2)))

#define TSB_TB6_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->EN,6)))
#define TSB_TB6_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->EN,7)))
#define TSB_TB6_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->RUN,0)))
#define TSB_TB6_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->RUN,2)))
#define TSB_TB6_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,0)))
#define TSB_TB6_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,1)))
#define TSB_TB6_CR_TBINSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,2)))
#define TSB_TB6_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,3)))
#define TSB_TB6_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,5)))
#define TSB_TB6_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,7)))
#define TSB_TB6_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->MOD,3)))
#define TSB_TB6_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB6->MOD,6)))
#define TSB_TB6_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,2)))
#define TSB_TB6_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,3)))
#define TSB_TB6_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,4)))
#define TSB_TB6_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,5)))
#define TSB_TB6_ST_INTTB0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB6->ST,0)))
#define TSB_TB6_ST_INTTB1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB6->ST,1)))
#define TSB_TB6_ST_INTTBOF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB6->ST,2)))
#define TSB_TB6_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->IM,0)))
#define TSB_TB6_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->IM,1)))
#define TSB_TB6_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->IM,2)))

#define TSB_TB7_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->EN,6)))
#define TSB_TB7_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->EN,7)))
#define TSB_TB7_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->RUN,0)))
#define TSB_TB7_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->RUN,2)))
#define TSB_TB7_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,0)))
#define TSB_TB7_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,1)))
#define TSB_TB7_CR_TBINSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,2)))
#define TSB_TB7_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,3)))
#define TSB_TB7_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,5)))
#define TSB_TB7_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,7)))
#define TSB_TB7_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->MOD,3)))
#define TSB_TB7_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB7->MOD,6)))
#define TSB_TB7_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,2)))
#define TSB_TB7_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,3)))
#define TSB_TB7_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,4)))
#define TSB_TB7_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,5)))
#define TSB_TB7_ST_INTTB0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB7->ST,0)))
#define TSB_TB7_ST_INTTB1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB7->ST,1)))
#define TSB_TB7_ST_INTTBOF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB7->ST,2)))
#define TSB_TB7_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->IM,0)))
#define TSB_TB7_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->IM,1)))
#define TSB_TB7_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->IM,2)))


/* 16-bit Multi-Purpose Timer (MPT-TMR/IGBT) */
#define TSB_MT0_EN_MTMODE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->EN,0)))
#define TSB_MT0_EN_MTHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->EN,6)))
#define TSB_MT0_EN_MTEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->EN,7)))
#define TSB_MT0_RUN_MTRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->RUN,0)))
#define TSB_MT0_RUN_MTPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->RUN,2)))
#define TSB_MT0_TBCR_MTTBCSSEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->TBCR,0)))
#define TSB_MT0_TBCR_MTTBTRGSEL                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->TBCR,1)))
#define TSB_MT0_TBCR_MTI2TB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->TBCR,3)))
#define TSB_MT0_TBCR_MTTBWBF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->TBCR,7)))
#define TSB_MT0_TBMOD_MTTBCLE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->TBMOD,2)))
#define TSB_MT0_TBMOD_MTTBCP                      (*((__O  uint32_t *)BITBAND_PERI(&TSB_MT0->TBMOD,5)))
#define TSB_MT0_TBMOD_MTTBRSWR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->TBMOD,6)))
#define TSB_MT0_TBFFCR_MTTBE0T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->TBFFCR,2)))
#define TSB_MT0_TBFFCR_MTTBE1T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->TBFFCR,3)))
#define TSB_MT0_TBFFCR_MTTBC0T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->TBFFCR,4)))
#define TSB_MT0_TBFFCR_MTTBC1T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->TBFFCR,5)))
#define TSB_MT0_TBST_MTTBINTTB0                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT0->TBST,0)))
#define TSB_MT0_TBST_MTTBINTTB1                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT0->TBST,1)))
#define TSB_MT0_TBST_MTTBINTTBOF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT0->TBST,2)))
#define TSB_MT0_TBIM_MTTBIM0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->TBIM,0)))
#define TSB_MT0_TBIM_MTTBIM1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->TBIM,1)))
#define TSB_MT0_TBIM_MTTBIMOF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->TBIM,2)))
#define TSB_MT0_IGCR_IGSNGL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->IGCR,6)))
#define TSB_MT0_IGCR_IGCLSYNC                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->IGCR,7)))
#define TSB_MT0_IGCR_IGIDIS                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->IGCR,10)))
#define TSB_MT0_IGRESTA_IGRESTA                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_MT0->IGRESTA,0)))
#define TSB_MT0_IGST_IGST                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT0->IGST,0)))
#define TSB_MT0_IGICR_IGTRGSEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->IGICR,6)))
#define TSB_MT0_IGICR_IGTRGM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->IGICR,7)))
#define TSB_MT0_IGOCR_IGOEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->IGOCR,0)))
#define TSB_MT0_IGOCR_IGOEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->IGOCR,1)))
#define TSB_MT0_IGOCR_IGPOL0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->IGOCR,4)))
#define TSB_MT0_IGOCR_IGPOL1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->IGOCR,5)))
#define TSB_MT0_IGEMGCR_IGEMGEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->IGEMGCR,0)))
#define TSB_MT0_IGEMGCR_IGEMGOC                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT0->IGEMGCR,1)))
#define TSB_MT0_IGEMGCR_IGEMGRS                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_MT0->IGEMGCR,2)))
#define TSB_MT0_IGEMGST_IGEMGST                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT0->IGEMGST,0)))
#define TSB_MT0_IGEMGST_IGEMGIN                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT0->IGEMGST,1)))

#define TSB_MT1_EN_MTMODE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->EN,0)))
#define TSB_MT1_EN_MTHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->EN,6)))
#define TSB_MT1_EN_MTEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->EN,7)))
#define TSB_MT1_RUN_MTRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->RUN,0)))
#define TSB_MT1_RUN_MTPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->RUN,2)))
#define TSB_MT1_TBCR_MTTBCSSEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->TBCR,0)))
#define TSB_MT1_TBCR_MTTBTRGSEL                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->TBCR,1)))
#define TSB_MT1_TBCR_MTI2TB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->TBCR,3)))
#define TSB_MT1_TBCR_MTTBWBF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->TBCR,7)))
#define TSB_MT1_TBMOD_MTTBCLE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->TBMOD,2)))
#define TSB_MT1_TBMOD_MTTBCP                      (*((__O  uint32_t *)BITBAND_PERI(&TSB_MT1->TBMOD,5)))
#define TSB_MT1_TBMOD_MTTBRSWR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->TBMOD,6)))
#define TSB_MT1_TBFFCR_MTTBE0T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->TBFFCR,2)))
#define TSB_MT1_TBFFCR_MTTBE1T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->TBFFCR,3)))
#define TSB_MT1_TBFFCR_MTTBC0T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->TBFFCR,4)))
#define TSB_MT1_TBFFCR_MTTBC1T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->TBFFCR,5)))
#define TSB_MT1_TBST_MTTBINTTB0                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT1->TBST,0)))
#define TSB_MT1_TBST_MTTBINTTB1                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT1->TBST,1)))
#define TSB_MT1_TBST_MTTBINTTBOF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT1->TBST,2)))
#define TSB_MT1_TBIM_MTTBIM0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->TBIM,0)))
#define TSB_MT1_TBIM_MTTBIM1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->TBIM,1)))
#define TSB_MT1_TBIM_MTTBIMOF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->TBIM,2)))
#define TSB_MT1_IGCR_IGSNGL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->IGCR,6)))
#define TSB_MT1_IGCR_IGCLSYNC                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->IGCR,7)))
#define TSB_MT1_IGCR_IGIDIS                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->IGCR,10)))
#define TSB_MT1_IGRESTA_IGRESTA                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_MT1->IGRESTA,0)))
#define TSB_MT1_IGST_IGST                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT1->IGST,0)))
#define TSB_MT1_IGICR_IGTRGSEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->IGICR,6)))
#define TSB_MT1_IGICR_IGTRGM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->IGICR,7)))
#define TSB_MT1_IGOCR_IGOEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->IGOCR,0)))
#define TSB_MT1_IGOCR_IGOEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->IGOCR,1)))
#define TSB_MT1_IGOCR_IGPOL0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->IGOCR,4)))
#define TSB_MT1_IGOCR_IGPOL1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->IGOCR,5)))
#define TSB_MT1_IGEMGCR_IGEMGEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->IGEMGCR,0)))
#define TSB_MT1_IGEMGCR_IGEMGOC                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT1->IGEMGCR,1)))
#define TSB_MT1_IGEMGCR_IGEMGRS                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_MT1->IGEMGCR,2)))
#define TSB_MT1_IGEMGST_IGEMGST                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT1->IGEMGST,0)))
#define TSB_MT1_IGEMGST_IGEMGIN                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT1->IGEMGST,1)))

#define TSB_MT2_EN_MTMODE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->EN,0)))
#define TSB_MT2_EN_MTHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->EN,6)))
#define TSB_MT2_EN_MTEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->EN,7)))
#define TSB_MT2_RUN_MTRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->RUN,0)))
#define TSB_MT2_RUN_MTPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->RUN,2)))
#define TSB_MT2_TBCR_MTTBCSSEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->TBCR,0)))
#define TSB_MT2_TBCR_MTTBTRGSEL                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->TBCR,1)))
#define TSB_MT2_TBCR_MTI2TB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->TBCR,3)))
#define TSB_MT2_TBCR_MTTBWBF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->TBCR,7)))
#define TSB_MT2_TBMOD_MTTBCLE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->TBMOD,2)))
#define TSB_MT2_TBMOD_MTTBCP                      (*((__O  uint32_t *)BITBAND_PERI(&TSB_MT2->TBMOD,5)))
#define TSB_MT2_TBMOD_MTTBRSWR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->TBMOD,6)))
#define TSB_MT2_TBFFCR_MTTBE0T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->TBFFCR,2)))
#define TSB_MT2_TBFFCR_MTTBE1T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->TBFFCR,3)))
#define TSB_MT2_TBFFCR_MTTBC0T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->TBFFCR,4)))
#define TSB_MT2_TBFFCR_MTTBC1T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->TBFFCR,5)))
#define TSB_MT2_TBST_MTTBINTTB0                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT2->TBST,0)))
#define TSB_MT2_TBST_MTTBINTTB1                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT2->TBST,1)))
#define TSB_MT2_TBST_MTTBINTTBOF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT2->TBST,2)))
#define TSB_MT2_TBIM_MTTBIM0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->TBIM,0)))
#define TSB_MT2_TBIM_MTTBIM1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->TBIM,1)))
#define TSB_MT2_TBIM_MTTBIMOF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->TBIM,2)))
#define TSB_MT2_IGCR_IGSNGL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->IGCR,6)))
#define TSB_MT2_IGCR_IGCLSYNC                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->IGCR,7)))
#define TSB_MT2_IGCR_IGIDIS                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->IGCR,10)))
#define TSB_MT2_IGRESTA_IGRESTA                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_MT2->IGRESTA,0)))
#define TSB_MT2_IGST_IGST                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT2->IGST,0)))
#define TSB_MT2_IGICR_IGTRGSEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->IGICR,6)))
#define TSB_MT2_IGICR_IGTRGM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->IGICR,7)))
#define TSB_MT2_IGOCR_IGOEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->IGOCR,0)))
#define TSB_MT2_IGOCR_IGOEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->IGOCR,1)))
#define TSB_MT2_IGOCR_IGPOL0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->IGOCR,4)))
#define TSB_MT2_IGOCR_IGPOL1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->IGOCR,5)))
#define TSB_MT2_IGEMGCR_IGEMGEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->IGEMGCR,0)))
#define TSB_MT2_IGEMGCR_IGEMGOC                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT2->IGEMGCR,1)))
#define TSB_MT2_IGEMGCR_IGEMGRS                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_MT2->IGEMGCR,2)))
#define TSB_MT2_IGEMGST_IGEMGST                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT2->IGEMGST,0)))
#define TSB_MT2_IGEMGST_IGEMGIN                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT2->IGEMGST,1)))

#define TSB_MT3_EN_MTMODE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->EN,0)))
#define TSB_MT3_EN_MTHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->EN,6)))
#define TSB_MT3_EN_MTEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->EN,7)))
#define TSB_MT3_RUN_MTRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->RUN,0)))
#define TSB_MT3_RUN_MTPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->RUN,2)))
#define TSB_MT3_TBCR_MTTBCSSEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->TBCR,0)))
#define TSB_MT3_TBCR_MTTBTRGSEL                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->TBCR,1)))
#define TSB_MT3_TBCR_MTI2TB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->TBCR,3)))
#define TSB_MT3_TBCR_MTTBWBF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->TBCR,7)))
#define TSB_MT3_TBMOD_MTTBCLE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->TBMOD,2)))
#define TSB_MT3_TBMOD_MTTBCP                      (*((__O  uint32_t *)BITBAND_PERI(&TSB_MT3->TBMOD,5)))
#define TSB_MT3_TBMOD_MTTBRSWR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->TBMOD,6)))
#define TSB_MT3_TBFFCR_MTTBE0T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->TBFFCR,2)))
#define TSB_MT3_TBFFCR_MTTBE1T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->TBFFCR,3)))
#define TSB_MT3_TBFFCR_MTTBC0T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->TBFFCR,4)))
#define TSB_MT3_TBFFCR_MTTBC1T1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->TBFFCR,5)))
#define TSB_MT3_TBST_MTTBINTTB0                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT3->TBST,0)))
#define TSB_MT3_TBST_MTTBINTTB1                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT3->TBST,1)))
#define TSB_MT3_TBST_MTTBINTTBOF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT3->TBST,2)))
#define TSB_MT3_TBIM_MTTBIM0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->TBIM,0)))
#define TSB_MT3_TBIM_MTTBIM1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->TBIM,1)))
#define TSB_MT3_TBIM_MTTBIMOF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->TBIM,2)))
#define TSB_MT3_IGCR_IGSNGL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->IGCR,6)))
#define TSB_MT3_IGCR_IGCLSYNC                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->IGCR,7)))
#define TSB_MT3_IGCR_IGIDIS                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->IGCR,10)))
#define TSB_MT3_IGRESTA_IGRESTA                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_MT3->IGRESTA,0)))
#define TSB_MT3_IGST_IGST                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT3->IGST,0)))
#define TSB_MT3_IGICR_IGTRGSEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->IGICR,6)))
#define TSB_MT3_IGICR_IGTRGM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->IGICR,7)))
#define TSB_MT3_IGOCR_IGOEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->IGOCR,0)))
#define TSB_MT3_IGOCR_IGOEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->IGOCR,1)))
#define TSB_MT3_IGOCR_IGPOL0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->IGOCR,4)))
#define TSB_MT3_IGOCR_IGPOL1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->IGOCR,5)))
#define TSB_MT3_IGEMGCR_IGEMGEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->IGEMGCR,0)))
#define TSB_MT3_IGEMGCR_IGEMGOC                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MT3->IGEMGCR,1)))
#define TSB_MT3_IGEMGCR_IGEMGRS                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_MT3->IGEMGCR,2)))
#define TSB_MT3_IGEMGST_IGEMGST                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT3->IGEMGST,0)))
#define TSB_MT3_IGEMGST_IGEMGIN                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_MT3->IGEMGST,1)))


/* Real Time Clock (RTC) */
#define TSB_RTC_MONTHR_MO0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->MONTHR,0)))
#define TSB_RTC_PAGER_PAGE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->PAGER,0)))
#define TSB_RTC_PAGER_ENAALM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->PAGER,2)))
#define TSB_RTC_PAGER_ENATMR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->PAGER,3)))
#define TSB_RTC_PAGER_ADJUST                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->PAGER,4)))
#define TSB_RTC_PAGER_INTENA                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->PAGER,7)))
#define TSB_RTC_RESTR_DIS8HZ                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->RESTR,0)))
#define TSB_RTC_RESTR_DIS4HZ                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->RESTR,1)))
#define TSB_RTC_RESTR_DIS2HZ                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->RESTR,2)))
#define TSB_RTC_RESTR_RSTALM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->RESTR,4)))
#define TSB_RTC_RESTR_RSTTMR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->RESTR,5)))
#define TSB_RTC_RESTR_DIS16HZ                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->RESTR,6)))
#define TSB_RTC_RESTR_DIS1HZ                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->RESTR,7)))
#define TSB_RTC_ADJCTL_AJEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_RTC->ADJCTL,0)))


/* Serial Bus Interface (SBI) */
#define TSB_SBI0_CR0_SBIEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI0->CR0,7)))
#define TSB_SBI0_CR1_SWRMON                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->CR1,0)))
#define TSB_SBI0_CR1_ACK                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI0->CR1,4)))
#define TSB_SBI0_CR1_SIOINH                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI0->CR1,6)))
#define TSB_SBI0_CR1_SIOS                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI0->CR1,7)))
#define TSB_SBI0_I2CAR_ALS                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI0->I2CAR,0)))
#define TSB_SBI0_CR2_PIN                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI0->CR2,4)))
#define TSB_SBI0_CR2_BB                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI0->CR2,5)))
#define TSB_SBI0_CR2_TRX                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI0->CR2,6)))
#define TSB_SBI0_CR2_MST                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI0->CR2,7)))
#define TSB_SBI0_SR_LRB                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,0)))
#define TSB_SBI0_SR_ADO                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,1)))
#define TSB_SBI0_SR_AAS                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,2)))
#define TSB_SBI0_SR_AL                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,3)))
#define TSB_SBI0_SR_PIN                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,4)))
#define TSB_SBI0_SR_BB                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,5)))
#define TSB_SBI0_SR_TRX                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,6)))
#define TSB_SBI0_SR_MST                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,7)))
#define TSB_SBI0_SR_SEF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,2)))
#define TSB_SBI0_SR_SIOF                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI0->SR,3)))
#define TSB_SBI0_BR0_I2SBI                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI0->BR0,6)))

#define TSB_SBI1_CR0_SBIEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI1->CR0,7)))
#define TSB_SBI1_CR1_SWRMON                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI1->CR1,0)))
#define TSB_SBI1_CR1_ACK                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI1->CR1,4)))
#define TSB_SBI1_CR1_SIOINH                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI1->CR1,6)))
#define TSB_SBI1_CR1_SIOS                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI1->CR1,7)))
#define TSB_SBI1_I2CAR_ALS                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI1->I2CAR,0)))
#define TSB_SBI1_CR2_PIN                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI1->CR2,4)))
#define TSB_SBI1_CR2_BB                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI1->CR2,5)))
#define TSB_SBI1_CR2_TRX                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI1->CR2,6)))
#define TSB_SBI1_CR2_MST                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI1->CR2,7)))
#define TSB_SBI1_SR_LRB                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI1->SR,0)))
#define TSB_SBI1_SR_ADO                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI1->SR,1)))
#define TSB_SBI1_SR_AAS                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI1->SR,2)))
#define TSB_SBI1_SR_AL                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI1->SR,3)))
#define TSB_SBI1_SR_PIN                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI1->SR,4)))
#define TSB_SBI1_SR_BB                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI1->SR,5)))
#define TSB_SBI1_SR_TRX                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI1->SR,6)))
#define TSB_SBI1_SR_MST                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI1->SR,7)))
#define TSB_SBI1_SR_SEF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI1->SR,2)))
#define TSB_SBI1_SR_SIOF                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI1->SR,3)))
#define TSB_SBI1_BR0_I2SBI                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI1->BR0,6)))

#define TSB_SBI2_CR0_SBIEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI2->CR0,7)))
#define TSB_SBI2_CR1_SWRMON                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI2->CR1,0)))
#define TSB_SBI2_CR1_ACK                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI2->CR1,4)))
#define TSB_SBI2_CR1_SIOINH                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI2->CR1,6)))
#define TSB_SBI2_CR1_SIOS                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI2->CR1,7)))
#define TSB_SBI2_I2CAR_ALS                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI2->I2CAR,0)))
#define TSB_SBI2_CR2_PIN                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI2->CR2,4)))
#define TSB_SBI2_CR2_BB                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI2->CR2,5)))
#define TSB_SBI2_CR2_TRX                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI2->CR2,6)))
#define TSB_SBI2_CR2_MST                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI2->CR2,7)))
#define TSB_SBI2_SR_LRB                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI2->SR,0)))
#define TSB_SBI2_SR_ADO                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI2->SR,1)))
#define TSB_SBI2_SR_AAS                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI2->SR,2)))
#define TSB_SBI2_SR_AL                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI2->SR,3)))
#define TSB_SBI2_SR_PIN                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI2->SR,4)))
#define TSB_SBI2_SR_BB                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI2->SR,5)))
#define TSB_SBI2_SR_TRX                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI2->SR,6)))
#define TSB_SBI2_SR_MST                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI2->SR,7)))
#define TSB_SBI2_SR_SEF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI2->SR,2)))
#define TSB_SBI2_SR_SIOF                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI2->SR,3)))
#define TSB_SBI2_BR0_I2SBI                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI2->BR0,6)))


/* Serial Channel (SC) */
#define TSB_SC0_EN_SIOE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->EN,0)))
#define TSB_SC0_CR_IOC                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->CR,0)))
#define TSB_SC0_CR_SCLKS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->CR,1)))
#define TSB_SC0_CR_FERR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC0->CR,2)))
#define TSB_SC0_CR_PERR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC0->CR,3)))
#define TSB_SC0_CR_OERR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC0->CR,4)))
#define TSB_SC0_CR_PE                             (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->CR,5)))
#define TSB_SC0_CR_EVEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->CR,6)))
#define TSB_SC0_CR_RB8                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC0->CR,7)))
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
#define TSB_SC1_CR_IOC                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->CR,0)))
#define TSB_SC1_CR_SCLKS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->CR,1)))
#define TSB_SC1_CR_FERR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC1->CR,2)))
#define TSB_SC1_CR_PERR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC1->CR,3)))
#define TSB_SC1_CR_OERR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC1->CR,4)))
#define TSB_SC1_CR_PE                             (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->CR,5)))
#define TSB_SC1_CR_EVEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC1->CR,6)))
#define TSB_SC1_CR_RB8                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC1->CR,7)))
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
#define TSB_SC2_CR_IOC                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->CR,0)))
#define TSB_SC2_CR_SCLKS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->CR,1)))
#define TSB_SC2_CR_FERR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC2->CR,2)))
#define TSB_SC2_CR_PERR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC2->CR,3)))
#define TSB_SC2_CR_OERR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC2->CR,4)))
#define TSB_SC2_CR_PE                             (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->CR,5)))
#define TSB_SC2_CR_EVEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->CR,6)))
#define TSB_SC2_CR_RB8                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC2->CR,7)))
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

#define TSB_SC3_EN_SIOE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->EN,0)))
#define TSB_SC3_CR_IOC                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->CR,0)))
#define TSB_SC3_CR_SCLKS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->CR,1)))
#define TSB_SC3_CR_FERR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC3->CR,2)))
#define TSB_SC3_CR_PERR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC3->CR,3)))
#define TSB_SC3_CR_OERR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC3->CR,4)))
#define TSB_SC3_CR_PE                             (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->CR,5)))
#define TSB_SC3_CR_EVEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->CR,6)))
#define TSB_SC3_CR_RB8                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC3->CR,7)))
#define TSB_SC3_MOD0_WU                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->MOD0,4)))
#define TSB_SC3_MOD0_RXE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->MOD0,5)))
#define TSB_SC3_MOD0_CTSE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->MOD0,6)))
#define TSB_SC3_MOD0_TB8                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->MOD0,7)))
#define TSB_SC3_BRCR_BRADDE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->BRCR,6)))
#define TSB_SC3_MOD1_TXE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->MOD1,4)))
#define TSB_SC3_MOD1_I2SC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->MOD1,7)))
#define TSB_SC3_MOD2_WBUF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->MOD2,2)))
#define TSB_SC3_MOD2_DRCHG                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->MOD2,3)))
#define TSB_SC3_MOD2_SBLEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->MOD2,4)))
#define TSB_SC3_MOD2_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC3->MOD2,5)))
#define TSB_SC3_MOD2_RBFLL                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC3->MOD2,6)))
#define TSB_SC3_MOD2_TBEMP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC3->MOD2,7)))
#define TSB_SC3_RFC_RFIS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->RFC,6)))
#define TSB_SC3_RFC_RFCS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SC3->RFC,7)))
#define TSB_SC3_TFC_TFIS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->TFC,6)))
#define TSB_SC3_TFC_TFCS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SC3->TFC,7)))
#define TSB_SC3_RST_ROR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC3->RST,7)))
#define TSB_SC3_TST_TUR                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC3->TST,7)))
#define TSB_SC3_FCNF_CNFG                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->FCNF,0)))
#define TSB_SC3_FCNF_RXTXCNT                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->FCNF,1)))
#define TSB_SC3_FCNF_RFIE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->FCNF,2)))
#define TSB_SC3_FCNF_TFIE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->FCNF,3)))
#define TSB_SC3_FCNF_RFST                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->FCNF,4)))


/* Remote Control Signal Preprocessor (RMC) */
#define TSB_RMC_EN_RMCEN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC->EN,0)))
#define TSB_RMC_REN_RMCREN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC->REN,0)))
#define TSB_RMC_RCR2_RMCPHM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC->RCR2,24)))
#define TSB_RMC_RCR2_RMCLD                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC->RCR2,25)))
#define TSB_RMC_RCR2_RMCEDIEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC->RCR2,30)))
#define TSB_RMC_RCR2_RMCLIEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC->RCR2,31)))
#define TSB_RMC_RCR4_RMCPO                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC->RCR4,7)))
#define TSB_RMC_RSTAT_RMCRLDR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_RMC->RSTAT,7)))
#define TSB_RMC_RSTAT_RMCEDIF                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_RMC->RSTAT,12)))
#define TSB_RMC_RSTAT_RMCDMAXIF                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_RMC->RSTAT,13)))
#define TSB_RMC_RSTAT_RMCLOIF                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_RMC->RSTAT,14)))
#define TSB_RMC_RSTAT_RMCRLIF                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_RMC->RSTAT,15)))
#define TSB_RMC_FSSEL_RMCCLK                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RMC->FSSEL,0)))


/* Oscillation Frequency Detector (OFD) */
#define TSB_OFD_RST_OFDRSTEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_OFD->RST,0)))
#define TSB_OFD_STAT_FRQERR                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_OFD->STAT,0)))
#define TSB_OFD_STAT_OFDBUSY                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_OFD->STAT,1)))
#define TSB_OFD_MON_OFDMON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_OFD->MON,0)))


/* Watchdog Timer (WD) */
#define TSB_WD_MOD_RESCR                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_WD->MOD,1)))
#define TSB_WD_MOD_I2WDT                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_WD->MOD,2)))
#define TSB_WD_MOD_WDTE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_WD->MOD,7)))


/* Clock Generator (CG) */
#define TSB_CG_SYSCR_FPSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SYSCR,12)))
#define TSB_CG_SYSCR_FCSTOP                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SYSCR,20)))
#define TSB_CG_OSCCR_WUEON                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,0)))
#define TSB_CG_OSCCR_WUEF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,1)))
#define TSB_CG_OSCCR_PLLON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,2)))
#define TSB_CG_OSCCR_WUPSEL1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,3)))
#define TSB_CG_OSCCR_XEN1                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,8)))
#define TSB_CG_OSCCR_XTEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,9)))
#define TSB_CG_OSCCR_XEN3                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,10)))
#define TSB_CG_OSCCR_XEN2                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,16)))
#define TSB_CG_OSCCR_OSCSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,17)))
#define TSB_CG_OSCCR_EHOSCSEL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,18)))
#define TSB_CG_OSCCR_WUPSEL2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,19)))
#define TSB_CG_STBYCR_DRVE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->STBYCR,16)))
#define TSB_CG_STBYCR_PTKEEP                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->STBYCR,17)))
#define TSB_CG_PLLSEL_PLLSEL                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->PLLSEL,0)))
#define TSB_CG_FSYSMSK_MSK0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,0)))
#define TSB_CG_FSYSMSK_MSK1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,1)))
#define TSB_CG_FSYSMSK_MSK2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,2)))
#define TSB_CG_FSYSMSK_MSK3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,3)))
#define TSB_CG_FSYSMSK_MSK4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,4)))
#define TSB_CG_FSYSMSK_MSK5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,5)))
#define TSB_CG_FSYSMSK_MSK6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,6)))
#define TSB_CG_FSYSMSK_MSK7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,7)))
#define TSB_CG_FSYSMSK_MSK8                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,8)))
#define TSB_CG_FSYSMSK_MSK9                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,9)))
#define TSB_CG_FSYSMSK_MSK10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,10)))
#define TSB_CG_FSYSMSK_MSK11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,11)))
#define TSB_CG_FSYSMSK_MSK12                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,12)))
#define TSB_CG_FSYSMSK_MSK13                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,13)))
#define TSB_CG_FSYSMSK_MSK14                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,14)))
#define TSB_CG_FSYSMSK_MSK15                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,15)))
#define TSB_CG_FSYSMSK_MSK16                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,16)))
#define TSB_CG_FSYSMSK_MSK17                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,17)))
#define TSB_CG_FSYSMSK_MSK18                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,18)))
#define TSB_CG_FSYSMSK_MSK19                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,19)))
#define TSB_CG_FSYSMSK_MSK20                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,20)))
#define TSB_CG_FSYSMSK_MSK21                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,21)))
#define TSB_CG_FSYSMSK_MSK22                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,22)))
#define TSB_CG_FSYSMSK_MSK23                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,23)))
#define TSB_CG_FSYSMSK_MSK24                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,24)))
#define TSB_CG_FSYSMSK_MSK25                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,25)))
#define TSB_CG_FSYSMSK_MSK26                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,26)))
#define TSB_CG_FSYSMSK_MSK27                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,27)))
#define TSB_CG_FSYSMSK_MSK28                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,28)))
#define TSB_CG_FSYSMSK_MSK29                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,29)))
#define TSB_CG_FSYSMSK_MSK30                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,30)))
#define TSB_CG_FSYSMSK_MSK31                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMSK,31)))
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
#define TSB_CG_IMCGD_INTRTCEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGD,16)))
#define TSB_CG_IMCGD_INTRMCRXEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGD,24)))


/* Internal High-speed Oscillation Adjustment */
#define TSB_TRMOSC_EN_TRIMEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TRMOSC->EN,0)))


/* Low Voltage detector control register */
#define TSB_LVD_RCR_LVDEN1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_LVD->RCR,0)))
#define TSB_LVD_RCR_LVDRSTEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_LVD->RCR,5)))
#define TSB_LVD_ICR_LVDEN2                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_LVD->ICR,0)))
#define TSB_LVD_ICR_INTSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_LVD->ICR,4)))
#define TSB_LVD_ICR_LVDINTEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_LVD->ICR,5)))
#define TSB_LVD_SR_LVDST1                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_LVD->SR,0)))
#define TSB_LVD_SR_LVDST2                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_LVD->SR,1)))


/* 16-bit Multi-Purpose Timer (MPT-PMD) */
#define TSB_MTPD0_MDEN_PWMEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->MDEN,0)))
#define TSB_MTPD0_PORTMD_PORTMD                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->PORTMD,0)))
#define TSB_MTPD0_MDCR_PWMMD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->MDCR,0)))
#define TSB_MTPD0_MDCR_PINT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->MDCR,3)))
#define TSB_MTPD0_MDCR_DTYMD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->MDCR,4)))
#define TSB_MTPD0_MDCR_SYNTMD                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->MDCR,5)))
#define TSB_MTPD0_MDCR_PWMCK                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->MDCR,6)))
#define TSB_MTPD0_CNTSTA_UPDWN                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_MTPD0->CNTSTA,0)))
#define TSB_MTPD0_MDOUT_UPWM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->MDOUT,8)))
#define TSB_MTPD0_MDOUT_VPWM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->MDOUT,9)))
#define TSB_MTPD0_MDOUT_WPWM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->MDOUT,10)))
#define TSB_MTPD0_MDPOT_POLL                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->MDPOT,2)))
#define TSB_MTPD0_MDPOT_POLH                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->MDPOT,3)))
#define TSB_MTPD0_EMGCR_EMGEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->EMGCR,0)))
#define TSB_MTPD0_EMGCR_EMGRS                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_MTPD0->EMGCR,1)))
#define TSB_MTPD0_EMGCR_INHEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->EMGCR,5)))
#define TSB_MTPD0_EMGSTA_EMGST                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_MTPD0->EMGSTA,0)))
#define TSB_MTPD0_EMGSTA_EMGI                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_MTPD0->EMGSTA,1)))
#define TSB_MTPD0_TRGCR_TRG0BE                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->TRGCR,3)))
#define TSB_MTPD0_TRGMD_EMGTGE                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_MTPD0->TRGMD,0)))


/* Encoder Input (ENC) */
#define TSB_EN0_TNCR_INTEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,3)))
#define TSB_EN0_TNCR_ENRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,6)))
#define TSB_EN0_TNCR_ZEN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,7)))
#define TSB_EN0_TNCR_CMPEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,8)))
#define TSB_EN0_TNCR_ZESEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,9)))
#define TSB_EN0_TNCR_ENCLR                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,10)))
#define TSB_EN0_TNCR_SFTCAP                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,11)))
#define TSB_EN0_TNCR_ZDET                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,12)))
#define TSB_EN0_TNCR_UD                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,13)))
#define TSB_EN0_TNCR_REVERR                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,14)))
#define TSB_EN0_TNCR_CMP                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,15)))
#define TSB_EN0_TNCR_P3EN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,16)))


/* Flash Control (FC) */
#define TSB_FC_SECBIT_SECBIT                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_FC->SECBIT,0)))
#define TSB_FC_FLCS_RDY_BSY                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->FLCS,0)))

/** @} */ /* End of group Device_Peripheral_registers */

#ifdef __cplusplus
}
#endif

#endif  /* __TMPM36B_H__ */

/** @} */ /* End of group TMPM36B */
/** @} */ /* End of group TOSHIBA_TX03_MICROCONTROLLER */
