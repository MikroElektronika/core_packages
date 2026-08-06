/**
 *******************************************************************************
 * @file    TMPM343.h
 * @brief   CMSIS Cortex-M3 Core Peripheral Access Layer Header File for the
 *          TOSHIBA 'TMPM343' Device Series
 * @version V2.0.2.1 (Tentative)
 * @date    2013/03/29
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
 *
 *                                                              modified by KEIL
 *******************************************************************************
 */

/** @addtogroup TOSHIBA_TX03_MICROCONTROLLER
  * @{
  */
  
/** @addtogroup TMPM343
  * @{
  */

#ifndef __TMPM343_H__
#define __TMPM343_H__

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

/******  TMPM343 Specific Interrupt Numbers *******************************************************************/
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
  INTPSCASTOP_IRQn              = 16,        /*!< PSC end interrupt (unitA)                                   */
  INTPSCABRK_IRQn               = 17,        /*!< PSC break interrupt (unitA)                                 */
  INTPSCASTEP_IRQn              = 18,        /*!< PSC step interrupt (unitA)                                  */
  INTPSCAII_IRQn                = 19,        /*!< PSC unjustified instruction interrupt (unitA)               */
  INTPSCAIA_IRQn                = 20,        /*!< PSC unjustified address interrupt (unitA)                   */
  INTPSCBSTOP_IRQn              = 21,        /*!< PSC end interrupt (unitB)                                   */
  INTPSCBBRK_IRQn               = 22,        /*!< PSC break interrupt (unitB)                                 */
  INTPSCBSTEP_IRQn              = 23,        /*!< PSC step interrupt (unitB)                                  */
  INTPSCBII_IRQn                = 24,        /*!< PSC unjustified instruction interrupt (unitB)               */
  INTPSCBIA_IRQn                = 25,        /*!< PSC unjustified address interrupt (unitB)                   */
  INTPSCCSTOP_IRQn              = 26,        /*!< PSC end interrupt (unitC)                                   */
  INTPSCCBRK_IRQn               = 27,        /*!< PSC break interrupt (unitC)                                 */
  INTPSCCSTEP_IRQn              = 28,        /*!< PSC step interrupt (unitC)                                  */
  INTPSCCII_IRQn                = 29,        /*!< PSC unjustified instruction interrupt (unitC)               */
  INTPSCCIA_IRQn                = 30,        /*!< PSC unjustified address interrupt (unitC)                   */
  INTPSCDSTOP_IRQn              = 31,        /*!< PSC end interrupt (unitD)                                   */
  INTPSCDBRK_IRQn               = 32,        /*!< PSC break interrupt (unitD)                                 */
  INTPSCDSTEP_IRQn              = 33,        /*!< PSC step interrupt (unitD)                                  */
  INTPSCDII_IRQn                = 34,        /*!< PSC unjustified instruction interrupt (unitD)               */
  INTPSCDIA_IRQn                = 35,        /*!< PSC unjustified address interrupt (unitD)                   */
  INTT0RX_IRQn                  = 36,        /*!< TSPI0 reception interrupt                                   */
  INTT0TX_IRQn                  = 37,        /*!< TSPI0 transmission interrupt                                */
  INTT0ERR_IRQn                 = 38,        /*!< TSPI0 error interrupt                                       */
  INTT1RX_IRQn                  = 39,        /*!< TSPI1 reception interrupt                                   */
  INTT1TX_IRQn                  = 40,        /*!< TSPI1 transmission interrupt                                */
  INTT1ERR_IRQn                 = 41,        /*!< TSPI1 error interrupt                                       */
  INTT2RX_IRQn                  = 42,        /*!< TSPI2 reception interrupt                                   */
  INTT2TX_IRQn                  = 43,        /*!< TSPI2 transmission interrupt                                */
  INTT2ERR_IRQn                 = 44,        /*!< TSPI2 error interrupt                                       */
  INTT3RX_IRQn                  = 45,        /*!< TSPI3 reception interrupt                                   */
  INTT3TX_IRQn                  = 46,        /*!< TSPI3 transmission interrupt                                */
  INTT3ERR_IRQn                 = 47,        /*!< TSPI3 error interrupt                                       */
  INTT4RX_IRQn                  = 48,        /*!< TSPI4 reception interrupt                                   */
  INTT4TX_IRQn                  = 49,        /*!< TSPI4 transmission interrupt                                */
  INTT4ERR_IRQn                 = 50,        /*!< TSPI4 error interrupt                                       */
  INTUART0_IRQn                 = 51,        /*!< Full UART0 transmission and reception interrupt             */
  INTRX0_IRQn                   = 52,        /*!< Serial0 reception interrupt                                 */
  INTTX0_IRQn                   = 53,        /*!< Serial0 transmission interrupt                              */
  INTI2C_IRQn                   = 54,        /*!< I2C interrupt                                               */
  INTADA_IRQn                   = 55,        /*!< AD conversion interrupt (unitA)                             */
  INTADB_IRQn                   = 56,        /*!< AD conversion interrupt (unitB)                             */
  INTADC_IRQn                   = 57,        /*!< AD conversion interrupt (unitC)                             */
  INTADAHP_IRQn                 = 58,        /*!< High Priority AD conversion interrupt (unitA)               */
  INTADBHP_IRQn                 = 59,        /*!< High Priority AD conversion interrupt (unitB)               */
  INTADCHP_IRQn                 = 60,        /*!< High Priority AD conversion interrupt (unitC)               */
  INTEPHC0_IRQn                 = 61,        /*!< Two-phase pulse input counter 0 interrupt                   */
  INTPHCP0OVF_IRQn              = 62,        /*!< EPHC0 overflow interrupt                                    */
  INTPHCP0PHE_IRQn              = 63,        /*!< EPHC0 phase error interrupt                                 */
  INTPHCP0CY0_IRQn              = 64,        /*!< EPHC0 cycle interrupt 0                                     */
  INTPHCP0CY1_IRQn              = 65,        /*!< EPHC0 cycle interrupt 1                                     */
  INTPHCP0CY2_IRQn              = 66,        /*!< EPHC0 cycle interrupt 2                                     */
  INTPHCP0CY3_IRQn              = 67,        /*!< EPHC0 cycle interrupt 3                                     */
  INTPHCP0LMT_IRQn              = 68,        /*!< EPHC0 cycle outrange interrupt                              */
  INTEPHC1_IRQn                 = 69,        /*!< Two-phase pulse input counter 1 interrupt                   */
  INTPHCP1OVF_IRQn              = 70,        /*!< EPHC1 overflow interrupt                                    */
  INTPHCP1PHE_IRQn              = 71,        /*!< EPHC1 phase error interrupt                                 */
  INTPHCP1CY0_IRQn              = 72,        /*!< EPHC1 cycle interrupt 0                                     */
  INTPHCP1CY1_IRQn              = 73,        /*!< EPHC1 cycle interrupt 1                                     */
  INTPHCP1CY2_IRQn              = 74,        /*!< EPHC1 cycle interrupt 2                                     */
  INTPHCP1CY3_IRQn              = 75,        /*!< EPHC1 cycle interrupt 3                                     */
  INTPHCP1LMT_IRQn              = 76,        /*!< EPHC1 cycle outrange interrupt                              */
  INTEPHC2_IRQn                 = 77,        /*!< Two-phase pulse input counter 2 interrupt                   */
  INTPHCP2OVF_IRQn              = 78,        /*!< EPHC2 overflow interrupt                                    */
  INTPHCP2PHE_IRQn              = 79,        /*!< EPHC2 phase error interrupt                                 */
  INTPHCP2CY0_IRQn              = 80,        /*!< EPHC2 cycle interrupt 0                                     */
  INTPHCP2CY1_IRQn              = 81,        /*!< EPHC2 cycle interrupt 1                                     */
  INTPHCP2CY2_IRQn              = 82,        /*!< EPHC2 cycle interrupt 2                                     */
  INTPHCP2CY3_IRQn              = 83,        /*!< EPHC2 cycle interrupt 3                                     */
  INTPHCP2LMT_IRQn              = 84,        /*!< EPHC2 cycle outrange interrupt                              */
  INTTDA0CMP0_IRQn              = 85,        /*!< TMRD0 compare match detection interrupt 0 (blockA)          */
  INTTDA0CMP1_IRQn              = 86,        /*!< TMRD0 compare match detection interrupt 1 (blockA)          */
  INTTDA0CMP2_IRQn              = 87,        /*!< TMRD0 compare match detection interrupt 2 (blockA)          */
  INTTDA0CMP3_IRQn              = 88,        /*!< TMRD0 compare match detection interrupt 3 (blockA)          */
  INTTDA0CMP4_IRQn              = 89,        /*!< TMRD0 compare match detection interrupt 4 (blockA)          */
  INTTDA1CMP0_IRQn              = 90,        /*!< TMRD1 compare match detection interrupt 0 (blockA)          */
  INTTDA1CMP1_IRQn              = 91,        /*!< TMRD1 compare match detection interrupt 1 (blockA)          */
  INTTDA1CMP2_IRQn              = 92,        /*!< TMRD1 compare match detection interrupt 2 (blockA)          */
  INTTDA1CMP3_IRQn              = 93,        /*!< TMRD1 compare match detection interrupt 3 (blockA)          */
  INTTDA1CMP4_IRQn              = 94,        /*!< TMRD1 compare match detection interrupt 4 (blockA)          */
  INTTDB0CMP0_IRQn              = 95,        /*!< TMRD0 compare match detection interrupt 0 (blockB)          */
  INTTDB0CMP1_IRQn              = 96,        /*!< TMRD0 compare match detection interrupt 1 (blockB)          */
  INTTDB0CMP2_IRQn              = 97,        /*!< TMRD0 compare match detection interrupt 2 (blockB)          */
  INTTDB0CMP3_IRQn              = 98,        /*!< TMRD0 compare match detection interrupt 3 (blockB)          */
  INTTDB0CMP4_IRQn              = 99,        /*!< TMRD0 compare match detection interrupt 4 (blockB)          */
  INTTDB1CMP0_IRQn              = 100,       /*!< TMRD1 compare match detection interrupt 0 (blockB)          */
  INTTDB1CMP1_IRQn              = 101,       /*!< TMRD1 compare match detection interrupt 1 (blockB)          */
  INTTDB1CMP2_IRQn              = 102,       /*!< TMRD1 compare match detection interrupt 2 (blockB)          */
  INTTDB1CMP3_IRQn              = 103,       /*!< TMRD1 compare match detection interrupt 3 (blockB)          */
  INTTDB1CMP4_IRQn              = 104,       /*!< TMRD1 compare match detection interrupt 4 (blockB)          */
  INTTB0_IRQn                   = 105,       /*!< TMRB0 compare match detection interrupt                     */
  INTTB1_IRQn                   = 106,       /*!< TMRB1 compare match detection interrupt                     */
  INTTB2_IRQn                   = 107,       /*!< TMRB2 compare match detection interrupt                     */
  INTTB3_IRQn                   = 108,       /*!< TMRB3 compare match detection interrupt                     */
  INTTB4_IRQn                   = 109,       /*!< TMRB4 compare match detection interrupt                     */
  INTTB5_IRQn                   = 110,       /*!< TMRB5 compare match detection interrupt                     */
  INTTB6_IRQn                   = 111,       /*!< TMRB6 compare match detection interrupt                     */
  INTTB7_IRQn                   = 112,       /*!< TMRB7 compare match detection interrupt                     */
  INTTB8_IRQn                   = 113,       /*!< TMRB8 compare match detection interrupt                     */
  INTTB9_IRQn                   = 114,       /*!< TMRB9 compare match detection interrupt                     */
  INTTBA_IRQn                   = 115,       /*!< TMRBA compare match detection interrupt                     */
  INTTBB_IRQn                   = 116,       /*!< TMRBB compare match detection interrupt                     */
  INTTBC_IRQn                   = 117,       /*!< TMRBC compare match detection interrupt                     */
  INTTBD_IRQn                   = 118,       /*!< TMRBD compare match detection interrupt                     */
  INTTBE_IRQn                   = 119,       /*!< TMRBE compare match detection interrupt                     */
  INTTBF_IRQn                   = 120,       /*!< TMRBF compare match detection interrupt                     */
  INTTBCCAP0_IRQn               = 121,       /*!< TMRBC input capture 0 detection interrupt                   */
  INTTBCCAP1_IRQn               = 122,       /*!< TMRBC input capture 1 detection interrupt                   */
  INTTBDCAP0_IRQn               = 123,       /*!< TMRBD input capture 0 detection interrupt                   */
  INTTBDCAP1_IRQn               = 124,       /*!< TMRBD input capture 1 detection interrupt                   */
  INTTBECAP0_IRQn               = 125,       /*!< TMRBE input capture 0 detection interrupt                   */
  INTTBECAP1_IRQn               = 126,       /*!< TMRBE input capture 1 detection interrupt                   */
  INTTBFCAP0_IRQn               = 127,       /*!< TMRBF input capture 0 detection interrupt                   */
  INTTBFCAP1_IRQn               = 128,       /*!< TMRBF input capture 1 detection interrupt                   */
  INTADAM0_IRQn                 = 129,       /*!< SAR ADC monitor 0 interrupt (unitA)                         */
  INTADAM1_IRQn                 = 130,       /*!< SAR ADC monitor 1 interrupt (unitA)                         */
  INTADBM0_IRQn                 = 131,       /*!< SAR ADC monitor 0 interrupt (unitB)                         */
  INTADBM1_IRQn                 = 132,       /*!< SAR ADC monitor 1 interrupt (unitB)                         */
  INTADCM0_IRQn                 = 133,       /*!< SAR ADC monitor 0 interrupt (unitC)                         */
  INTADCM1_IRQn                 = 134,       /*!< SAR ADC monitor 1 interrupt (unitC)                         */
  INTDMACATC_IRQn               = 135,       /*!< DMA terminal count status interrupt (unitA)                 */
  INTDMACAERR_IRQn              = 136,       /*!< DMA error status interrupt (unitA)                          */
  INTDMACBTC_IRQn               = 137,       /*!< DMA terminal count status interrupt (unitB)                 */
  INTDMACBERR_IRQn              = 138,       /*!< DMA error status interrupt (unitB)                          */
  INTDMACCTC_IRQn               = 139,       /*!< DMA terminal count status interrupt (unitC)                 */
  INTDMACCERR_IRQn              = 140        /*!< DMA error status interrupt (unitC)                          */
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
// #include "system_TMPM343.h"                 /* TMPM343 System                                      */

/** @addtogroup Device_Peripheral_registers
  * @{
  */

/** Device Specific Peripheral registers structures */

/**
  * @brief DMA Controller
  */
typedef struct
{
  __I  uint32_t INTSTATUS;         /*!< DMAC Interrupt Status Register               */
  __I  uint32_t INTTCSTATUS;       /*!< DMAC Interrupt Terminal Count Status Register*/
  __O  uint32_t INTTCCLEAR;        /*!< DMAC Interrupt Terminal Count Clear Register */
  __I  uint32_t INTERRORSTATUS;    /*!< DMAC Interrupt Error Status Register         */
  __O  uint32_t INTERRCLR;         /*!< DMAC Interrupt Error Clear Register          */
  __I  uint32_t RAWINTTCSTATUS;    /*!< DMAC Raw Interrupt Terminal Count Status Register*/
  __I  uint32_t RAWINTERRORSTATUS; /*!< DMAC Raw Error Interrupt Status Register     */
  __I  uint32_t ENBLDCHNS;         /*!< DMAC Enabled Channel Register                */
  __IO uint32_t SOFTBREQ;          /*!< DMAC Software Burst Request Register         */
  __IO uint32_t SOFTSREQ;          /*!< DMAC Software Single Request Register        */
       uint32_t RESERVED0[2];
  __IO uint32_t CONFIGURATION;     /*!< DMAC Configuration Register                  */
       uint32_t RESERVED1[51];
  __IO uint32_t C0SRCADDR;         /*!< DMAC Channel 0 Source Address Register       */
  __IO uint32_t C0DESTADDR;        /*!< DMAC Channel 0 Destination Address Register  */
  __IO uint32_t C0LLI;             /*!< DMAC Channel 0 Linked List Item Register     */
  __IO uint32_t C0CONTROL;         /*!< DMAC Channel 0 Control Register              */
  __IO uint32_t C0CONFIGURATION;   /*!< DMAC Channel 0 Configuration Register        */
       uint32_t RESERVED2[3];
  __IO uint32_t C1SRCADDR;         /*!< DMAC Channel 1 Source Address Register       */
  __IO uint32_t C1DESTADDR;        /*!< DMAC Channel 1 Destination Address Register  */
  __IO uint32_t C1LLI;             /*!< DMAC Channel 1 Linked List Item Register     */
  __IO uint32_t C1CONTROL;         /*!< DMAC Channel 1 Control Register              */
  __IO uint32_t C1CONFIGURATION;   /*!< DMAC Channel 1 Configuration Register        */
} TSB_DMAC_TypeDef;

/**
  * @brief Programmable Servo Controller 
  */
typedef struct
{
  __IO uint32_t UA0;               /*!< Accumulator                                  */
  __IO uint32_t UM0;               /*!< Multiplier Register                          */
  __IO uint32_t UM1;               /*!< Shift Count Register                         */
  __IO uint32_t UL0;               /*!< Upper Limit Value Register                   */
  __IO uint32_t UL1;               /*!< Lower Limit Value Register                   */
  __IO uint32_t UR0;               /*!< Add Sub Value Register 0                     */
  __IO uint32_t UR1;               /*!< Add Sub Value Register 1                     */
  __IO uint32_t SGN;               /*!< Arithmetic Parameter with Signed Register    */
  __IO uint32_t AP0;               /*!< Address Pointer 0                            */
  __IO uint32_t AP1;               /*!< Address Pointer 1                            */
  __IO uint32_t AP2;               /*!< Address Pointer 2                            */
  __IO uint32_t AP3;               /*!< Address Pointer 3                            */
  __IO uint32_t BR0;               /*!< Break Pointer                                */
  __IO uint32_t PG0;               /*!< Program Counter                              */
  __IO uint32_t VG0;               /*!< Repeat Processing Vector Pointer             */
       uint32_t RESERVED0[49];
  __IO uint32_t CNT;               /*!< Control Register                             */
  __IO uint32_t FLG;               /*!< Flag Register                                */
       uint32_t RESERVED1[7102];
  __IO uint32_t REN;               /*!< Run Trigger Enable Register                  */
  __I  uint32_t RFLG;              /*!< Run Trigger Flag Register                    */
  __O  uint32_t RCLR;              /*!< Run Trigger Clear Register                   */
  __O  uint32_t RSET;              /*!< Run Trigger Clear Register                   */
       uint32_t RESERVED2[60];
  __IO uint32_t PTOUT;             /*!< Port Output Enable Register for PSC          */
  __IO uint32_t PTCR;              /*!< Port Control Register for PSC                */
  __I  uint32_t PTIN;              /*!< Port Input Enable Register for PSC           */
} TSB_PSC_TypeDef;

#if defined ( __CC_ARM   )           /* RealView Compiler */
#pragma anon_unions
#elif (defined (__ICCARM__))         /*  ICC Compiler     */
#pragma language=extended
#endif

/**
  * @brief UART
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
       uint32_t RESERVED1[2];
  __IO uint32_t IBRD;              /*!< Integer Baud Rate Register                   */
  __IO uint32_t FBRD;              /*!< Fractional Baud Rate Register                */
  __IO uint32_t LCR_H;             /*!< Line Control Register                        */
  __IO uint32_t CR;                /*!< Control Register                             */
  __IO uint32_t IFLS;              /*!< Interrupt FIFO Level Select Register         */
  __IO uint32_t IMSC;              /*!< Interrupt Mask Set/Clear Register            */
  __I  uint32_t RIS;               /*!< Raw Interrupt Status Register                */
  __I  uint32_t MIS;               /*!< Masked Interrupt Status Register             */
  __O  uint32_t ICR;               /*!< Interrupt Clear Register                     */
  __IO uint32_t DMACR;             /*!< DMA Control Register                         */
} TSB_UART_TypeDef;

/**
  * @brief 12bit A/D Converter
  */
typedef struct
{
  __IO uint32_t CLK;               /*!< Conversion Clock Setting Register            */
  __O  uint32_t MOD0;              /*!< Mode Control Register0                       */
  __IO uint32_t MOD1;              /*!< Mode Control Register1                       */
  __IO uint32_t MOD2;              /*!< Mode Control Register2                       */
  __IO uint32_t MOD3;              /*!< Mode Control Register3                       */
  __IO uint32_t MOD4;              /*!< Mode Control Register4                       */
  __I  uint32_t MOD5;              /*!< Mode Control Register5                       */
  __IO uint32_t MOD6;              /*!< Mode Control Register6                       */
       uint32_t RESERVED0;
  __IO uint32_t CMPCR0;            /*!< Monitoring Interrupt Control Register0       */
  __IO uint32_t CMPCR1;            /*!< Monitoring Interrupt Control Register1       */
  __IO uint32_t CMP0;              /*!< Conversion Result Compare Register0          */
  __IO uint32_t CMP1;              /*!< Conversion Result Compare Register1          */
  __I  uint32_t REG00;             /*!< Conversion Result Store Register0            */
  __I  uint32_t REG01;             /*!< Conversion Result Store Register1            */
  __I  uint32_t REG02;             /*!< Conversion Result Store Register2            */
  __I  uint32_t REG03;             /*!< Conversion Result Store Register3            */
  __I  uint32_t REG04;             /*!< Conversion Result Store Register4            */
  __I  uint32_t REG05;             /*!< Conversion Result Store Register5            */
  __I  uint32_t REG06;             /*!< Conversion Result Store Register6            */
  __I  uint32_t REG07;             /*!< Conversion Result Store Register7            */
       uint32_t RESERVED1[8];
  __I  uint32_t REGSP;             /*!< Highest Priority Conversion Result Store Register*/
  __I  uint32_t CREG;              /*!< Conversion Result Store Common Register      */
} TSB_AD_TypeDef;

/**
  * @brief 12-bit AD converter(UnitB) Mirror
  */
typedef struct
{
       uint32_t RESERVED0[13];
  __I  uint32_t REG00;             /*!< Conversion Result Store Register0            */
  __I  uint32_t REG01;             /*!< Conversion Result Store Register1            */
  __I  uint32_t REG02;             /*!< Conversion Result Store Register2            */
  __I  uint32_t REG03;             /*!< Conversion Result Store Register3            */
  __I  uint32_t REG04;             /*!< Conversion Result Store Register4            */
  __I  uint32_t REG05;             /*!< Conversion Result Store Register5            */
  __I  uint32_t REG06;             /*!< Conversion Result Store Register6            */
  __I  uint32_t REG07;             /*!< Conversion Result Store Register7            */
       uint32_t RESERVED1[8];
  __I  uint32_t REGSP;             /*!< Highest Priority Conversion Result Store Register*/
  __I  uint32_t CREG;              /*!< Conversion Result Store Common Register      */
} TSB_ADB_PSC_TypeDef;

/**
  * @brief 12-bit AD converter(UnitC) Mirror
  */
typedef struct
{
       uint32_t RESERVED0[13];
  __I  uint32_t REG00;             /*!< Conversion Result Store Register0            */
  __I  uint32_t REG01;             /*!< Conversion Result Store Register1            */
  __I  uint32_t REG02;             /*!< Conversion Result Store Register2            */
  __I  uint32_t REG03;             /*!< Conversion Result Store Register3            */
  __I  uint32_t REG04;             /*!< Conversion Result Store Register4            */
  __I  uint32_t REG05;             /*!< Conversion Result Store Register5            */
  __I  uint32_t REG06;             /*!< Conversion Result Store Register6            */
  __I  uint32_t REG07;             /*!< Conversion Result Store Register7            */
       uint32_t RESERVED1[8];
  __I  uint32_t REGSP;             /*!< Highest Priority Conversion Result Store Register*/
  __I  uint32_t CREG;              /*!< Conversion Result Store Common Register      */
} TSB_ADC_PSC_TypeDef;

/**
  * @brief 12-bit AD converter(UnitA) Mirror
  */
typedef struct
{
       uint32_t RESERVED0[13];
  __I  uint32_t REG00;             /*!< Conversion Result Store Register0            */
  __I  uint32_t REG01;             /*!< Conversion Result Store Register1            */
  __I  uint32_t REG02;             /*!< Conversion Result Store Register2            */
  __I  uint32_t REG03;             /*!< Conversion Result Store Register3            */
  __I  uint32_t REG04;             /*!< Conversion Result Store Register4            */
  __I  uint32_t REG05;             /*!< Conversion Result Store Register5            */
  __I  uint32_t REG06;             /*!< Conversion Result Store Register6            */
  __I  uint32_t REG07;             /*!< Conversion Result Store Register7            */
       uint32_t RESERVED1[8];
  __I  uint32_t REGSP;             /*!< Highest Priority Conversion Result Store Register*/
  __I  uint32_t CREG;              /*!< Conversion Result Store Common Register      */
} TSB_ADA_PSC_TypeDef;

/**
  * @brief Timer D (Unit0 in BlockA)
  */
typedef struct
{
  __O  uint32_t RUN;               /*!< Timer Run Register (Unit0 in BlockA)         */
  __IO uint32_t CR;                /*!< Timer Control Register (Unit0 in BlockA)     */
  __IO uint32_t MOD;               /*!< Timer Mode Register (Unit0 in BlockA)        */
  __IO uint32_t DMA;               /*!< DMA Request Enable Register (Unit0 in BlockA)*/
       uint32_t RESERVED0;
  __IO uint32_t RG0;               /*!< Timer Register0 (Unit0 in BlockA)            */
  __IO uint32_t RG1;               /*!< Timer Register1 (Unit0 in BlockA)            */
  __IO uint32_t RG2;               /*!< Timer Register2 (Unit0 in BlockA)            */
  __IO uint32_t RG3;               /*!< Timer Register3 (Unit0 in BlockA)            */
  __IO uint32_t RG4;               /*!< Timer Register4 (Unit0 in BlockA)            */
  __IO uint32_t RG5;               /*!< Timer Register5 (Unit0 in BlockA)            */
       uint32_t RESERVED1[13];
  __IO uint32_t HSWB0;             /*!< H-SW Control Circuit Register Buffer0 (Unit0 in BlockA)*/
  __IO uint32_t HSWB1;             /*!< H-SW Control Circuit Register Buffer1 (Unit0 in BlockA)*/
       uint32_t RESERVED2[43];
  __I  uint32_t CP0;               /*!< Compare Register0 (Unit0 in BlockA)          */
  __I  uint32_t CP1;               /*!< Compare Register1 (Unit0 in BlockA)          */
  __I  uint32_t CP2;               /*!< Compare Register2 (Unit0 in BlockA)          */
  __I  uint32_t CP3;               /*!< Compare Register3 (Unit0 in BlockA)          */
  __I  uint32_t CP4;               /*!< Compare Register4 (Unit0 in BlockA)          */
  __I  uint32_t CP5;               /*!< Compare Register5 (Unit0 in BlockA)          */
       uint32_t RESERVED3[13];
  __I  uint32_t HSW0;              /*!< H-SW Control Circuit Register (Unit0 in BlockA)*/
  __I  uint32_t HSW1;              /*!< H-SW Control Circuit Register (Unit0 in BlockA)*/
} TSB_TDA0_TypeDef;

/**
  * @brief Timer D common (BlockA)
  */
typedef struct
{
  __IO uint32_t BCR;               /*!< Update Flag Setting Register (BlockA)        */
       uint32_t RESERVED0[3];
  __IO uint32_t EN;                /*!< Timer Enable Register (BlockA)               */
  __IO uint32_t CONF;              /*!< Timer Configuration Register (BlockA)        */
} TSB_TDA_TypeDef;

/**
  * @brief Timer D (Unit1 in BlockA)
  */
typedef struct
{
  __IO uint32_t RG0;               /*!< Timer Register0 (Unit1 in BlockA)            */
  __IO uint32_t RG1;               /*!< Timer Register1 (Unit1 in BlockA)            */
  __IO uint32_t RG2;               /*!< Timer Register2 (Unit1 in BlockA)            */
  __IO uint32_t RG3;               /*!< Timer Register3 (Unit1 in BlockA)            */
  __IO uint32_t RG4;               /*!< Timer Register4 (Unit1 in BlockA)            */
       uint32_t RESERVED0[10];
  __IO uint32_t HSWB0;             /*!< H-SW Control Circuit Register Buffer0 (Unit1 in BlockA)*/
  __IO uint32_t HSWB1;             /*!< H-SW Control Circuit Register Buffer1 (Unit1 in BlockA)*/
       uint32_t RESERVED1[36];
  __O  uint32_t RUN;               /*!< Timer Run Register (Unit1 in BlockA)         */
  __IO uint32_t CR;                /*!< Timer Control Register (Unit1 in BlockA)     */
  __IO uint32_t MOD;               /*!< Timer Mode Register (Unit1 in BlockA)        */
  __IO uint32_t DMA;               /*!< DMA Request Enable Register (Unit1 in BlockA)*/
       uint32_t RESERVED2[7];
  __I  uint32_t CP0;               /*!< Compare Register0 (Unit1 in BlockA)          */
  __I  uint32_t CP1;               /*!< Compare Register1 (Unit1 in BlockA)          */
  __I  uint32_t CP2;               /*!< Compare Register2 (Unit1 in BlockA)          */
  __I  uint32_t CP3;               /*!< Compare Register3 (Unit1 in BlockA)          */
  __I  uint32_t CP4;               /*!< Compare Register4 (Unit1 in BlockA)          */
       uint32_t RESERVED3[19];
  __I  uint32_t HSW0;              /*!< H-SW Control Circuit Register (Unit1 in BlockA)*/
  __I  uint32_t HSW1;              /*!< H-SW Control Circuit Register (Unit1 in BlockA)*/
} TSB_TDA1_TypeDef;

/**
  * @brief Timer D (Unit0 in BlockB)
  */
typedef struct
{
  __O  uint32_t RUN;               /*!< Timer Run Register (Unit0 in BlockB)         */
  __IO uint32_t CR;                /*!< Timer Control Register (Unit0 in BlockB)     */
  __IO uint32_t MOD;               /*!< Timer Mode Register (Unit0 in BlockB)        */
  __IO uint32_t DMA;               /*!< DMA Request Enable Register (Unit0 in BlockB)*/
       uint32_t RESERVED0;
  __IO uint32_t RG0;               /*!< Timer Register0 (Unit0 in BlockB)            */
  __IO uint32_t RG1;               /*!< Timer Register1 (Unit0 in BlockB)            */
  __IO uint32_t RG2;               /*!< Timer Register2 (Unit0 in BlockB)            */
  __IO uint32_t RG3;               /*!< Timer Register3 (Unit0 in BlockB)            */
  __IO uint32_t RG4;               /*!< Timer Register4 (Unit0 in BlockB)            */
  __IO uint32_t RG5;               /*!< Timer Register5 (Unit0 in BlockB)            */
       uint32_t RESERVED1[13];
  __IO uint32_t HSWB0;             /*!< H-SW Control Circuit Register Buffer0 (Unit0 in BlockB)*/
  __IO uint32_t HSWB1;             /*!< H-SW Control Circuit Register Buffer1 (Unit0 in BlockB)*/
       uint32_t RESERVED2[43];
  __I  uint32_t CP0;               /*!< Compare Register0 (Unit0 in BlockB)          */
  __I  uint32_t CP1;               /*!< Compare Register1 (Unit0 in BlockB)          */
  __I  uint32_t CP2;               /*!< Compare Register2 (Unit0 in BlockB)          */
  __I  uint32_t CP3;               /*!< Compare Register3 (Unit0 in BlockB)          */
  __I  uint32_t CP4;               /*!< Compare Register4 (Unit0 in BlockB)          */
  __I  uint32_t CP5;               /*!< Compare Register5 (Unit0 in BlockB)          */
       uint32_t RESERVED3[13];
  __I  uint32_t HSW0;              /*!< H-SW Control Circuit Register (Unit0 in BlockB)*/
  __I  uint32_t HSW1;              /*!< H-SW Control Circuit Register (Unit0 in BlockB)*/
} TSB_TDB0_TypeDef;

/**
  * @brief Timer D common (BlockB)
  */
typedef struct
{
  __IO uint32_t BCR;               /*!< Update Flag Setting Register (BlockB)        */
       uint32_t RESERVED0[3];
  __IO uint32_t EN;                /*!< Timer Enable Register (BlockB)               */
  __IO uint32_t CONF;              /*!< Timer Configuration Register (BlockB)        */
} TSB_TDB_TypeDef;

/**
  * @brief Timer D (Unit1 in BlockB)
  */
typedef struct
{
  __IO uint32_t RG0;               /*!< Timer Register0 (Unit1 in BlockB)            */
  __IO uint32_t RG1;               /*!< Timer Register1 (Unit1 in BlockB)            */
  __IO uint32_t RG2;               /*!< Timer Register2 (Unit1 in BlockB)            */
  __IO uint32_t RG3;               /*!< Timer Register3 (Unit1 in BlockB)            */
  __IO uint32_t RG4;               /*!< Timer Register4 (Unit1 in BlockB)            */
       uint32_t RESERVED0[10];
  __IO uint32_t HSWB0;             /*!< H-SW Control Circuit Register Buffer0 (Unit1 in BlockB)*/
  __IO uint32_t HSWB1;             /*!< H-SW Control Circuit Register Buffer1 (Unit1 in BlockB)*/
       uint32_t RESERVED1[36];
  __O  uint32_t RUN;               /*!< Timer Run Register (Unit1 in BlockB)         */
  __IO uint32_t CR;                /*!< Timer Control Register (Unit1 in BlockB)     */
  __IO uint32_t MOD;               /*!< Timer Mode Register (Unit1 in BlockB)        */
  __IO uint32_t DMA;               /*!< DMA Request Enable Register (Unit1 in BlockB)*/
       uint32_t RESERVED2[7];
  __I  uint32_t CP0;               /*!< Compare Register0 (Unit1 in BlockB)          */
  __I  uint32_t CP1;               /*!< Compare Register1 (Unit1 in BlockB)          */
  __I  uint32_t CP2;               /*!< Compare Register2 (Unit1 in BlockB)          */
  __I  uint32_t CP3;               /*!< Compare Register3 (Unit1 in BlockB)          */
  __I  uint32_t CP4;               /*!< Compare Register4 (Unit1 in BlockB)          */
       uint32_t RESERVED3[19];
  __I  uint32_t HSW0;              /*!< H-SW Control Circuit Register (Unit1 in BlockB)*/
  __I  uint32_t HSW1;              /*!< H-SW Control Circuit Register (Unit1 in BlockB)*/
} TSB_TDB1_TypeDef;

/**
  * @brief Enhannced two aspect pulse input counter (EPHC)
  */
typedef struct
{
  __IO uint32_t EN;                /*!< EPHC Enable Register                         */
  __IO uint32_t CNT;               /*!< EPHC Control Register                        */
  __IO uint32_t IE;                /*!< EPHC Interrupt Enable Register               */
  __IO uint32_t FLG;               /*!< EPHC Status Register                         */
  __IO uint32_t ARUN;              /*!< EPHC 16-bit Counter Run Register             */
  __IO uint32_t ACP0;              /*!< EPHC Pulse Counter Compare 0 Register        */
  __IO uint32_t ACP1;              /*!< EPHC Pulse Counter Compare 1 Register        */
  __IO uint32_t ADAT;              /*!< EPHC 16-bit Counter Read Register            */
  __IO uint32_t BRUN;              /*!< EPHC 24-bit Counter Run Register             */
  __IO uint32_t BDMA;              /*!< EPHC DMAE Request Enable Register            */
  __I  uint32_t BUC;               /*!< EPHC 24-bit Counter Read Register            */
       uint32_t RESERVED0;
  __I  uint32_t BCAP00;            /*!< EPHC Capture 00 Register                     */
  __I  uint32_t BCAP10;            /*!< EPHC Capture 10 Register                     */
  __I  uint32_t BCAP20;            /*!< EPHC Capture 20 Register                     */
  __I  uint32_t BCAP30;            /*!< EPHC Capture 30 Register                     */
  __I  uint32_t B0DAT;             /*!< EPHC Cycle 0 Register                        */
  __I  uint32_t B1DAT;             /*!< EPHC Cycle 1 Register                        */
  __I  uint32_t B2DAT;             /*!< EPHC Cycle 2 Register                        */
  __I  uint32_t B3DAT;             /*!< EPHC Cycle 3 Register                        */
  __I  uint32_t BCDAT;             /*!< EPHC Cycle Common Register                   */
       uint32_t RESERVED1[3];
  __I  uint32_t B0PDT;             /*!< EPHC Phase DifferEPHCe 0 Register            */
  __I  uint32_t B1PDT;             /*!< EPHC Phase DifferEPHCe 1 Register            */
  __I  uint32_t B2PDT;             /*!< EPHC Phase DifferEPHCe 2 Register            */
  __I  uint32_t B3PDT;             /*!< EPHC Phase DifferEPHCe 3 Register            */
  __IO uint32_t UPLMT;             /*!< EPHC Upper Cycle Limit Value Register        */
  __IO uint32_t LWLMT;             /*!< EPHC Lower Cycle Limit Value Register        */
} TSB_EPHC_TypeDef;

/**
  * @brief Enhannced two aspect pulse input counter (EPHC) Mirror
  */
typedef struct
{
       uint32_t RESERVED0[7];
  __IO uint32_t ADAT;              /*!< EPHC 16-bit Counter Read Register            */
       uint32_t RESERVED1[2];
  __I  uint32_t BUC;               /*!< EPHC 24-bit Counter Read Register            */
       uint32_t RESERVED2;
  __I  uint32_t BCAP00;            /*!< EPHC Capture 00 Register                     */
  __I  uint32_t BCAP10;            /*!< EPHC Capture 10 Register                     */
  __I  uint32_t BCAP20;            /*!< EPHC Capture 20 Register                     */
  __I  uint32_t BCAP30;            /*!< EPHC Capture 30 Register                     */
  __I  uint32_t B0DAT;             /*!< EPHC Cycle 0 Register                        */
  __I  uint32_t B1DAT;             /*!< EPHC Cycle 1 Register                        */
  __I  uint32_t B2DAT;             /*!< EPHC Cycle 2 Register                        */
  __I  uint32_t B3DAT;             /*!< EPHC Cycle 3 Register                        */
  __I  uint32_t BCDAT;             /*!< EPHC Cycle Common Register                   */
       uint32_t RESERVED3[3];
  __I  uint32_t B0PDT;             /*!< EPHC Phase DifferEPHCe 0 Register            */
  __I  uint32_t B1PDT;             /*!< EPHC Phase DifferEPHCe 1 Register            */
  __I  uint32_t B2PDT;             /*!< EPHC Phase DifferEPHCe 2 Register            */
  __I  uint32_t B3PDT;             /*!< EPHC Phase DifferEPHCe 3 Register            */
} TSB_EPHC0_PSC_TypeDef;

/**
  * @brief Enhannced two aspect pulse input counter (EPHC) Mirror
  */
typedef struct
{
       uint32_t RESERVED0[7];
  __IO uint32_t ADAT;              /*!< EPHC 16-bit Counter Read Register            */
       uint32_t RESERVED1[2];
  __I  uint32_t BUC;               /*!< EPHC 24-bit Counter Read Register            */
       uint32_t RESERVED2;
  __I  uint32_t BCAP00;            /*!< EPHC Capture 00 Register                     */
  __I  uint32_t BCAP10;            /*!< EPHC Capture 10 Register                     */
  __I  uint32_t BCAP20;            /*!< EPHC Capture 20 Register                     */
  __I  uint32_t BCAP30;            /*!< EPHC Capture 30 Register                     */
  __I  uint32_t B0DAT;             /*!< EPHC Cycle 0 Register                        */
  __I  uint32_t B1DAT;             /*!< EPHC Cycle 1 Register                        */
  __I  uint32_t B2DAT;             /*!< EPHC Cycle 2 Register                        */
  __I  uint32_t B3DAT;             /*!< EPHC Cycle 3 Register                        */
  __I  uint32_t BCDAT;             /*!< EPHC Cycle Common Register                   */
       uint32_t RESERVED3[3];
  __I  uint32_t B0PDT;             /*!< EPHC Phase DifferEPHCe 0 Register            */
  __I  uint32_t B1PDT;             /*!< EPHC Phase DifferEPHCe 1 Register            */
  __I  uint32_t B2PDT;             /*!< EPHC Phase DifferEPHCe 2 Register            */
  __I  uint32_t B3PDT;             /*!< EPHC Phase DifferEPHCe 3 Register            */
} TSB_EPHC2_PSC_TypeDef;

/**
  * @brief Enhannced two aspect pulse input counter (EPHC) Mirror
  */
typedef struct
{
       uint32_t RESERVED0[7];
  __IO uint32_t ADAT;              /*!< EPHC 16-bit Counter Read Register            */
       uint32_t RESERVED1[2];
  __I  uint32_t BUC;               /*!< EPHC 24-bit Counter Read Register            */
       uint32_t RESERVED2;
  __I  uint32_t BCAP00;            /*!< EPHC Capture 00 Register                     */
  __I  uint32_t BCAP10;            /*!< EPHC Capture 10 Register                     */
  __I  uint32_t BCAP20;            /*!< EPHC Capture 20 Register                     */
  __I  uint32_t BCAP30;            /*!< EPHC Capture 30 Register                     */
  __I  uint32_t B0DAT;             /*!< EPHC Cycle 0 Register                        */
  __I  uint32_t B1DAT;             /*!< EPHC Cycle 1 Register                        */
  __I  uint32_t B2DAT;             /*!< EPHC Cycle 2 Register                        */
  __I  uint32_t B3DAT;             /*!< EPHC Cycle 3 Register                        */
  __I  uint32_t BCDAT;             /*!< EPHC Cycle Common Register                   */
       uint32_t RESERVED3[3];
  __I  uint32_t B0PDT;             /*!< EPHC Phase DifferEPHCe 0 Register            */
  __I  uint32_t B1PDT;             /*!< EPHC Phase DifferEPHCe 1 Register            */
  __I  uint32_t B2PDT;             /*!< EPHC Phase DifferEPHCe 2 Register            */
  __I  uint32_t B3PDT;             /*!< EPHC Phase DifferEPHCe 3 Register            */
} TSB_EPHC1_PSC_TypeDef;

/**
  * @brief Serial Interface (TSPI)
  */
typedef struct
{
  __IO uint32_t CR0;               /*!< TSPI Control Register 0                      */
  __IO uint32_t CR1;               /*!< TSPI Control Register 1                      */
  __IO uint32_t CR2;               /*!< TSPI Control Register 2                      */
  __IO uint32_t CR3;               /*!< TSPI Control Register 3                      */
  __IO uint32_t BR;                /*!< TSPI Baud Rate Generator Control Register    */
  __IO uint32_t FMTR0;             /*!< TSPI Format Control Register 0               */
  __IO uint32_t FMTR1;             /*!< TSPI Format Control Register 1               */
       uint32_t RESERVED0[57];
  __IO uint32_t DR;                /*!< TSPI Data Register                           */
       uint32_t RESERVED1[63];
  __IO uint32_t SR;                /*!< TSPI Status Register                         */
  __IO uint32_t ERR;               /*!< TSPI Parity Error Flag Register              */
} TSB_TSPI_TypeDef;

/**
  * @brief Port A
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port A Data Register                         */
  __IO uint32_t CR;                /*!< Port A Output Control Register               */
  __IO uint32_t FR1;               /*!< Port A Function Register 1                   */
  __IO uint32_t FR2;               /*!< Port A Function Register 2                   */
  __IO uint32_t FR3;               /*!< Port A Function Register 3                   */
       uint32_t RESERVED0[6];
  __IO uint32_t PUP;               /*!< Port A Pull-up Control Register              */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< Port A Input Control Register                */
} TSB_PA_TypeDef;

/**
  * @brief Port B
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port B Data Register                         */
  __IO uint32_t CR;                /*!< Port B Output Control Register               */
  __IO uint32_t FR1;               /*!< Port B Function Register 1                   */
  __IO uint32_t FR2;               /*!< Port B Function Register 2                   */
  __IO uint32_t FR3;               /*!< Port B Function Register 3                   */
  __IO uint32_t FR4;               /*!< Port B Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port B Function Register 5                   */
  __IO uint32_t FR6;               /*!< Port B Function Register 6                   */
  __IO uint32_t FR7;               /*!< Port B Function Register 7                   */
       uint32_t RESERVED0;
  __IO uint32_t OD;                /*!< Port B Open Drain Control Register           */
       uint32_t RESERVED1[3];
  __IO uint32_t IE;                /*!< Port B Input Control Register                */
} TSB_PB_TypeDef;

/**
  * @brief Port C
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port C Data Register                         */
  __IO uint32_t CR;                /*!< Port C Output Control Register               */
  __IO uint32_t FR1;               /*!< Port C Function Register 1                   */
  __IO uint32_t FR2;               /*!< Port C Function Register 2                   */
  __IO uint32_t FR3;               /*!< Port C Function Register 3                   */
       uint32_t RESERVED0[5];
  __IO uint32_t OD;                /*!< Port C Open Drain Control Register           */
       uint32_t RESERVED1[3];
  __IO uint32_t IE;                /*!< Port C Input Control Register                */
} TSB_PC_TypeDef;

/**
  * @brief Port D
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port D Data Register                         */
  __IO uint32_t CR;                /*!< Port D Output Control Register               */
  __IO uint32_t FR1;               /*!< Port D Function Register 1                   */
  __IO uint32_t FR2;               /*!< Port D Function Register 2                   */
  __IO uint32_t FR3;               /*!< Port D Function Register 3                   */
  __IO uint32_t FR4;               /*!< Port D Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port D Function Register 5                   */
  __IO uint32_t FR6;               /*!< Port D Function Register 6                   */
  __IO uint32_t FR7;               /*!< Port D Function Register 7                   */
       uint32_t RESERVED0;
  __IO uint32_t OD;                /*!< Port D Open Drain Control Register           */
       uint32_t RESERVED1[3];
  __IO uint32_t IE;                /*!< Port D Input Control Register                */
} TSB_PD_TypeDef;

/**
  * @brief Port E
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port E Data Register                         */
  __IO uint32_t CR;                /*!< Port E Output Control Register               */
  __IO uint32_t FR1;               /*!< Port E Function Register 1                   */
  __IO uint32_t FR2;               /*!< Port E Function Register 2                   */
  __IO uint32_t FR3;               /*!< Port E Function Register 3                   */
  __IO uint32_t FR4;               /*!< Port E Function Register 4                   */
       uint32_t RESERVED0[4];
  __IO uint32_t OD;                /*!< Port E Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port E Pull-up Control Register              */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< Port E Input Control Register                */
} TSB_PE_TypeDef;

/**
  * @brief Port F
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port F Data Register                         */
       uint32_t RESERVED0[10];
  __IO uint32_t PUP;               /*!< Port F Pull-up Control Register              */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< Port F Input Control Register                */
} TSB_PF_TypeDef;

/**
  * @brief Port G
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port G Data Register                         */
       uint32_t RESERVED0[10];
  __IO uint32_t PUP;               /*!< Port G Pull-up Control Register              */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< Port G Input Control Register                */
} TSB_PG_TypeDef;

/**
  * @brief Port H
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port H Data Register                         */
       uint32_t RESERVED0[10];
  __IO uint32_t PUP;               /*!< Port H Pull-up Control Register              */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< Port H Input Control Register                */
} TSB_PH_TypeDef;

/**
  * @brief Port J
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port J Data Register                         */
  __IO uint32_t CR;                /*!< Port J Output Control Register               */
  __IO uint32_t FR1;               /*!< Port J Function Register 1                   */
       uint32_t RESERVED0[8];
  __IO uint32_t PUP;               /*!< Port J Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port J Pull-down Control Register            */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< Port J Input Control Register                */
} TSB_PJ_TypeDef;

/**
  * @brief Port K
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port K Data Register                         */
  __IO uint32_t CR;                /*!< Port K Output Control Register               */
  __IO uint32_t FR1;               /*!< Port K Function Register 1                   */
  __IO uint32_t FR2;               /*!< Port K Function Register 2                   */
  __IO uint32_t FR3;               /*!< Port K Function Register 3                   */
} TSB_PK_TypeDef;

/**
  * @brief Port L
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port L Data Register                         */
  __IO uint32_t CR;                /*!< Port L Output Control Register               */
  __IO uint32_t FR1;               /*!< Port L Function Register 1                   */
  __IO uint32_t FR2;               /*!< Port L Function Register 2                   */
  __IO uint32_t FR3;               /*!< Port L Function Register 3                   */
} TSB_PL_TypeDef;

/**
  * @brief Port M
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port M Data Register                         */
  __IO uint32_t CR;                /*!< Port M Output Control Register               */
  __IO uint32_t FR1;               /*!< Port M Function Register 1                   */
       uint32_t RESERVED0[7];
  __IO uint32_t OD;                /*!< Port M Open Drain Register                   */
  __IO uint32_t PUP;               /*!< Port M Pull-up Control Register              */
} TSB_PM_TypeDef;

/**
  * @brief Port N
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port N Data Register                         */
  __IO uint32_t CR;                /*!< Port N Output Control Register               */
  __IO uint32_t FR1;               /*!< Port N Function Register 1                   */
  __IO uint32_t FR2;               /*!< Port N Function Register 2                   */
       uint32_t RESERVED0[7];
  __IO uint32_t PUP;               /*!< Port N Pull-up Control Register              */
       uint32_t RESERVED1[2];
  __IO uint32_t IE;                /*!< Port N Input Control Register                */
} TSB_PN_TypeDef;

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
  __IO uint32_t DMA;               /*!< TB DMA Enable Register                       */
} TSB_TB_TypeDef;

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
  __IO uint32_t DMA;               /*!< SC DMA Request Enable Register               */
} TSB_SC_TypeDef;

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
       uint32_t RESERVED0;
  __IO uint32_t PWMGEAR;           /*!< Timer D Clock Setting Register               */
       uint32_t RESERVED1[2];
  __IO uint32_t FCLKMSKA;          /*!< fclk Supply Stop Register A                  */
       uint32_t RESERVED2;
  __IO uint32_t FCMSKA;            /*!< fc Supply Stop Register A                    */
       uint32_t RESERVED3[4];
  __IO uint32_t PROTECT;           /*!< Protect Register                             */
  __IO uint32_t IMCGA;             /*!< CG Interrupt Mode Control Register A         */
  __IO uint32_t IMCGB;             /*!< CG Interrupt Mode Control Register B         */
  __IO uint32_t IMCGC;             /*!< CG Interrupt Mode Control Register C         */
  __IO uint32_t IMCGD;             /*!< CG Interrupt Mode Control Register D         */
       uint32_t RESERVED4[4];
  __O  uint32_t ICRCG;             /*!< CG Interrupt Request Clear Register          */
  __IO uint32_t RSTFLG;            /*!< Reset Flag Register                          */
  __I  uint32_t NMIFLG;            /*!< NMI Flag Register                            */
} TSB_CG_TypeDef;

/**
  * @brief Flash Control (FC)
  */
typedef struct
{
       uint32_t RESERVED0[4];
  __IO uint32_t SECBIT;            /*!< Security Bit Register                        */
       uint32_t RESERVED1[3];
  __I  uint32_t PSR0;              /*!< Protect Status Register 0                    */
       uint32_t RESERVED2[3];
  __I  uint32_t PSR1;              /*!< Protect Status Register 1                    */
       uint32_t RESERVED3[51];
  __I  uint32_t SR;                /*!< Status Register                              */
  __I  uint32_t SWPSR;             /*!< Swap Status Register                         */
       uint32_t RESERVED4[14];
  __IO uint32_t AREASEL;           /*!< Area Selection Register                      */
       uint32_t RESERVED5;
  __IO uint32_t CR;                /*!< Control Register                             */
  __IO uint32_t STSCLR;            /*!< Status Clear Register                        */
  __IO uint32_t WCLKCR;            /*!< WCLK Configuration Register                  */
  __IO uint32_t PROGCR;            /*!< Program Counter Configuration Register       */
  __IO uint32_t ERASECR;           /*!< Erase Counter Configuration Register         */
} TSB_FC_TypeDef;


/* Memory map */
#define FLASH_BASE            (0x00000000UL)
#define RAM_BASE              (0x20000000UL)
#define PERI_BASE             (0x40000000UL)


#define TSB_DMACA_BASE             (PERI_BASE  + 0x0000000UL)
#define TSB_DMACB_BASE             (PERI_BASE  + 0x0001000UL)
#define TSB_DMACC_BASE             (PERI_BASE  + 0x0002000UL)
#define TSB_PSCA_BASE              (PERI_BASE  + 0x0118000UL)
#define TSB_PSCB_BASE              (PERI_BASE  + 0x0218000UL)
#define TSB_PSCC_BASE              (PERI_BASE  + 0x0318000UL)
#define TSB_PSCD_BASE              (PERI_BASE  + 0x0418000UL)
#define TSB_UART_BASE              (PERI_BASE  + 0x0448000UL)
#define TSB_ADA_BASE               (PERI_BASE  + 0x0050000UL)
#define TSB_ADB_BASE               (PERI_BASE  + 0x0051000UL)
#define TSB_ADC_BASE               (PERI_BASE  + 0x0052000UL)
#define TSB_ADB_PSC_BASE           (PERI_BASE  + 0x0179000UL)
#define TSB_ADC_PSC_BASE           (PERI_BASE  + 0x027A000UL)
#define TSB_ADA_PSC_BASE           (PERI_BASE  + 0x0374000UL)
#define TSB_TDA0_BASE              (PERI_BASE  + 0x0158000UL)
#define TSB_TDA_BASE               (PERI_BASE  + 0x0158040UL)
#define TSB_TDA1_BASE              (PERI_BASE  + 0x015802CUL)
#define TSB_TDB0_BASE              (PERI_BASE  + 0x0359000UL)
#define TSB_TDB_BASE               (PERI_BASE  + 0x0359040UL)
#define TSB_TDB1_BASE              (PERI_BASE  + 0x035902CUL)
#define TSB_EPHC0_BASE             (PERI_BASE  + 0x0060000UL)
#define TSB_EPHC1_BASE             (PERI_BASE  + 0x0061000UL)
#define TSB_EPHC2_BASE             (PERI_BASE  + 0x007E000UL)
#define TSB_EPHC0_PSC_BASE         (PERI_BASE  + 0x0175000UL)
#define TSB_EPHC2_PSC_BASE         (PERI_BASE  + 0x017C000UL)
#define TSB_EPHC1_PSC_BASE         (PERI_BASE  + 0x0276000UL)
#define TSB_TSPI3_BASE             (PERI_BASE  + 0x009B000UL)
#define TSB_TSPI4_BASE             (PERI_BASE  + 0x009C000UL)
#define TSB_TSPI1_BASE             (PERI_BASE  + 0x0299000UL)
#define TSB_TSPI2_BASE             (PERI_BASE  + 0x039A000UL)
#define TSB_TSPI0_BASE             (PERI_BASE  + 0x0498000UL)
#define TSB_PA_BASE                (PERI_BASE  + 0x00C0000UL)
#define TSB_PB_BASE                (PERI_BASE  + 0x00C0100UL)
#define TSB_PC_BASE                (PERI_BASE  + 0x00C0200UL)
#define TSB_PD_BASE                (PERI_BASE  + 0x00C0300UL)
#define TSB_PE_BASE                (PERI_BASE  + 0x00C0400UL)
#define TSB_PF_BASE                (PERI_BASE  + 0x00C0500UL)
#define TSB_PG_BASE                (PERI_BASE  + 0x00C0600UL)
#define TSB_PH_BASE                (PERI_BASE  + 0x00C0700UL)
#define TSB_PJ_BASE                (PERI_BASE  + 0x00C0800UL)
#define TSB_PK_BASE                (PERI_BASE  + 0x00C0900UL)
#define TSB_PL_BASE                (PERI_BASE  + 0x00C0A00UL)
#define TSB_PM_BASE                (PERI_BASE  + 0x00C0B00UL)
#define TSB_PN_BASE                (PERI_BASE  + 0x00C0C00UL)
#define TSB_TBC_BASE               (PERI_BASE  + 0x01C4C00UL)
#define TSB_TBD_BASE               (PERI_BASE  + 0x01C4D00UL)
#define TSB_TBE_BASE               (PERI_BASE  + 0x02C4E00UL)
#define TSB_TBF_BASE               (PERI_BASE  + 0x02C4F00UL)
#define TSB_TB0_BASE               (PERI_BASE  + 0x03C4000UL)
#define TSB_TB1_BASE               (PERI_BASE  + 0x03C4100UL)
#define TSB_TB2_BASE               (PERI_BASE  + 0x03C4200UL)
#define TSB_TB3_BASE               (PERI_BASE  + 0x03C4300UL)
#define TSB_TB4_BASE               (PERI_BASE  + 0x03C4400UL)
#define TSB_TB5_BASE               (PERI_BASE  + 0x03C4500UL)
#define TSB_TB6_BASE               (PERI_BASE  + 0x03C4600UL)
#define TSB_TB7_BASE               (PERI_BASE  + 0x03C4700UL)
#define TSB_TB8_BASE               (PERI_BASE  + 0x03C4800UL)
#define TSB_TB9_BASE               (PERI_BASE  + 0x03C4900UL)
#define TSB_TBA_BASE               (PERI_BASE  + 0x03C4A00UL)
#define TSB_TBB_BASE               (PERI_BASE  + 0x03C4B00UL)
#define TSB_SBI_BASE               (PERI_BASE  + 0x00E0000UL)
#define TSB_SC_BASE                (PERI_BASE  + 0x00E1000UL)
#define TSB_WD_BASE                (PERI_BASE  + 0x00F2000UL)
#define TSB_CG_BASE                (PERI_BASE  + 0x00F3000UL)
#define TSB_FC_BASE                (PERI_BASE  + 0x1DFF0000UL)


/* Peripheral declaration */
#define TSB_DMACA                  ((   TSB_DMAC_TypeDef *) TSB_DMACA_BASE)
#define TSB_DMACB                  ((   TSB_DMAC_TypeDef *) TSB_DMACB_BASE)
#define TSB_DMACC                  ((   TSB_DMAC_TypeDef *) TSB_DMACC_BASE)
#define TSB_PSCA                   ((    TSB_PSC_TypeDef *)  TSB_PSCA_BASE)
#define TSB_PSCB                   ((    TSB_PSC_TypeDef *)  TSB_PSCB_BASE)
#define TSB_PSCC                   ((    TSB_PSC_TypeDef *)  TSB_PSCC_BASE)
#define TSB_PSCD                   ((    TSB_PSC_TypeDef *)  TSB_PSCD_BASE)
#define TSB_UART                   ((   TSB_UART_TypeDef *)  TSB_UART_BASE)
#define TSB_ADA                    ((     TSB_AD_TypeDef *)   TSB_ADA_BASE)
#define TSB_ADB                    ((     TSB_AD_TypeDef *)   TSB_ADB_BASE)
#define TSB_ADC                    ((     TSB_AD_TypeDef *)   TSB_ADC_BASE)
#define TSB_ADB_PSC                ((TSB_ADB_PSC_TypeDef *)TSB_ADB_PSC_BASE)
#define TSB_ADC_PSC                ((TSB_ADC_PSC_TypeDef *)TSB_ADC_PSC_BASE)
#define TSB_ADA_PSC                ((TSB_ADA_PSC_TypeDef *)TSB_ADA_PSC_BASE)
#define TSB_TDA0                   ((   TSB_TDA0_TypeDef *)  TSB_TDA0_BASE)
#define TSB_TDA                    ((    TSB_TDA_TypeDef *)   TSB_TDA_BASE)
#define TSB_TDA1                   ((   TSB_TDA1_TypeDef *)  TSB_TDA1_BASE)
#define TSB_TDB0                   ((   TSB_TDB0_TypeDef *)  TSB_TDB0_BASE)
#define TSB_TDB                    ((    TSB_TDB_TypeDef *)   TSB_TDB_BASE)
#define TSB_TDB1                   ((   TSB_TDB1_TypeDef *)  TSB_TDB1_BASE)
#define TSB_EPHC0                  ((   TSB_EPHC_TypeDef *) TSB_EPHC0_BASE)
#define TSB_EPHC1                  ((   TSB_EPHC_TypeDef *) TSB_EPHC1_BASE)
#define TSB_EPHC2                  ((   TSB_EPHC_TypeDef *) TSB_EPHC2_BASE)
#define TSB_EPHC0_PSC              ((TSB_EPHC0_PSC_TypeDef *)TSB_EPHC0_PSC_BASE)
#define TSB_EPHC2_PSC              ((TSB_EPHC2_PSC_TypeDef *)TSB_EPHC2_PSC_BASE)
#define TSB_EPHC1_PSC              ((TSB_EPHC1_PSC_TypeDef *)TSB_EPHC1_PSC_BASE)
#define TSB_TSPI3                  ((   TSB_TSPI_TypeDef *) TSB_TSPI3_BASE)
#define TSB_TSPI4                  ((   TSB_TSPI_TypeDef *) TSB_TSPI4_BASE)
#define TSB_TSPI1                  ((   TSB_TSPI_TypeDef *) TSB_TSPI1_BASE)
#define TSB_TSPI2                  ((   TSB_TSPI_TypeDef *) TSB_TSPI2_BASE)
#define TSB_TSPI0                  ((   TSB_TSPI_TypeDef *) TSB_TSPI0_BASE)
#define TSB_PA                     ((     TSB_PA_TypeDef *)    TSB_PA_BASE)
#define TSB_PB                     ((     TSB_PB_TypeDef *)    TSB_PB_BASE)
#define TSB_PC                     ((     TSB_PC_TypeDef *)    TSB_PC_BASE)
#define TSB_PD                     ((     TSB_PD_TypeDef *)    TSB_PD_BASE)
#define TSB_PE                     ((     TSB_PE_TypeDef *)    TSB_PE_BASE)
#define TSB_PF                     ((     TSB_PF_TypeDef *)    TSB_PF_BASE)
#define TSB_PG                     ((     TSB_PG_TypeDef *)    TSB_PG_BASE)
#define TSB_PH                     ((     TSB_PH_TypeDef *)    TSB_PH_BASE)
#define TSB_PJ                     ((     TSB_PJ_TypeDef *)    TSB_PJ_BASE)
#define TSB_PK                     ((     TSB_PK_TypeDef *)    TSB_PK_BASE)
#define TSB_PL                     ((     TSB_PL_TypeDef *)    TSB_PL_BASE)
#define TSB_PM                     ((     TSB_PM_TypeDef *)    TSB_PM_BASE)
#define TSB_PN                     ((     TSB_PN_TypeDef *)    TSB_PN_BASE)
#define TSB_TBC                    ((     TSB_TB_TypeDef *)   TSB_TBC_BASE)
#define TSB_TBD                    ((     TSB_TB_TypeDef *)   TSB_TBD_BASE)
#define TSB_TBE                    ((     TSB_TB_TypeDef *)   TSB_TBE_BASE)
#define TSB_TBF                    ((     TSB_TB_TypeDef *)   TSB_TBF_BASE)
#define TSB_TB0                    ((     TSB_TB_TypeDef *)   TSB_TB0_BASE)
#define TSB_TB1                    ((     TSB_TB_TypeDef *)   TSB_TB1_BASE)
#define TSB_TB2                    ((     TSB_TB_TypeDef *)   TSB_TB2_BASE)
#define TSB_TB3                    ((     TSB_TB_TypeDef *)   TSB_TB3_BASE)
#define TSB_TB4                    ((     TSB_TB_TypeDef *)   TSB_TB4_BASE)
#define TSB_TB5                    ((     TSB_TB_TypeDef *)   TSB_TB5_BASE)
#define TSB_TB6                    ((     TSB_TB_TypeDef *)   TSB_TB6_BASE)
#define TSB_TB7                    ((     TSB_TB_TypeDef *)   TSB_TB7_BASE)
#define TSB_TB8                    ((     TSB_TB_TypeDef *)   TSB_TB8_BASE)
#define TSB_TB9                    ((     TSB_TB_TypeDef *)   TSB_TB9_BASE)
#define TSB_TBA                    ((     TSB_TB_TypeDef *)   TSB_TBA_BASE)
#define TSB_TBB                    ((     TSB_TB_TypeDef *)   TSB_TBB_BASE)
#define TSB_SBI                    ((    TSB_SBI_TypeDef *)   TSB_SBI_BASE)
#define TSB_SC                     ((     TSB_SC_TypeDef *)    TSB_SC_BASE)
#define TSB_WD                     ((     TSB_WD_TypeDef *)    TSB_WD_BASE)
#define TSB_CG                     ((     TSB_CG_TypeDef *)    TSB_CG_BASE)
#define TSB_FC                     ((     TSB_FC_TypeDef *)    TSB_FC_BASE)


/* Bit-Band for Device Specific Peripheral Registers */
#define BITBAND_OFFSET (0x02000000UL)
#define BITBAND_PERI_BASE (PERI_BASE + BITBAND_OFFSET)
#define BITBAND_PERI(addr, bitnum) (BITBAND_PERI_BASE + (((uint32_t)(addr) - PERI_BASE) << 5) + ((uint32_t)(bitnum) << 2))



/* DMA Controller */
#define TSB_DMACA_INTSTATUS_INTSTATUS0            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->INTSTATUS,0)))
#define TSB_DMACA_INTSTATUS_INTSTATUS1            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->INTSTATUS,1)))
#define TSB_DMACA_INTTCSTATUS_INTTCSTATUS0        (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->INTTCSTATUS,0)))
#define TSB_DMACA_INTTCSTATUS_INTTCSTATUS1        (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->INTTCSTATUS,1)))
#define TSB_DMACA_INTERRORSTATUS_INTERRSTATUS0    (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->INTERRORSTATUS,0)))
#define TSB_DMACA_INTERRORSTATUS_INTERRSTATUS1    (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->INTERRORSTATUS,1)))
#define TSB_DMACA_RAWINTTCSTATUS_RAWINTTCS0       (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->RAWINTTCSTATUS,0)))
#define TSB_DMACA_RAWINTTCSTATUS_RAWINTTCS1       (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->RAWINTTCSTATUS,1)))
#define TSB_DMACA_RAWINTERRORSTATUS_RAWINTERRS0   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->RAWINTERRORSTATUS,0)))
#define TSB_DMACA_RAWINTERRORSTATUS_RAWINTERRS1   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->RAWINTERRORSTATUS,1)))
#define TSB_DMACA_ENBLDCHNS_ENABLEDCH0            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->ENBLDCHNS,0)))
#define TSB_DMACA_ENBLDCHNS_ENABLEDCH1            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->ENBLDCHNS,1)))
#define TSB_DMACA_CONFIGURATION_E                 (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->CONFIGURATION,0)))
#define TSB_DMACA_CONFIGURATION_M                 (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->CONFIGURATION,1)))
#define TSB_DMACA_C0CONTROL_SI                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C0CONTROL,26)))
#define TSB_DMACA_C0CONTROL_DI                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C0CONTROL,27)))
#define TSB_DMACA_C0CONTROL_I                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C0CONTROL,31)))
#define TSB_DMACA_C0CONFIGURATION_E               (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C0CONFIGURATION,0)))
#define TSB_DMACA_C0CONFIGURATION_IE              (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C0CONFIGURATION,14)))
#define TSB_DMACA_C0CONFIGURATION_ITC             (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C0CONFIGURATION,15)))
#define TSB_DMACA_C0CONFIGURATION_LOCK            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C0CONFIGURATION,16)))
#define TSB_DMACA_C0CONFIGURATION_ACTIVE          (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->C0CONFIGURATION,17)))
#define TSB_DMACA_C0CONFIGURATION_HALT            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C0CONFIGURATION,18)))
#define TSB_DMACA_C1CONTROL_SI                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C1CONTROL,26)))
#define TSB_DMACA_C1CONTROL_DI                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C1CONTROL,27)))
#define TSB_DMACA_C1CONTROL_I                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C1CONTROL,31)))
#define TSB_DMACA_C1CONFIGURATION_E               (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C1CONFIGURATION,0)))
#define TSB_DMACA_C1CONFIGURATION_IE              (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C1CONFIGURATION,14)))
#define TSB_DMACA_C1CONFIGURATION_ITC             (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C1CONFIGURATION,15)))
#define TSB_DMACA_C1CONFIGURATION_LOCK            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C1CONFIGURATION,16)))
#define TSB_DMACA_C1CONFIGURATION_ACTIVE          (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->C1CONFIGURATION,17)))
#define TSB_DMACA_C1CONFIGURATION_HALT            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C1CONFIGURATION,18)))

#define TSB_DMACB_INTSTATUS_INTSTATUS0            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTSTATUS,0)))
#define TSB_DMACB_INTSTATUS_INTSTATUS1            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTSTATUS,1)))
#define TSB_DMACB_INTTCSTATUS_INTTCSTATUS0        (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTTCSTATUS,0)))
#define TSB_DMACB_INTTCSTATUS_INTTCSTATUS1        (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTTCSTATUS,1)))
#define TSB_DMACB_INTERRORSTATUS_INTERRSTATUS0    (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTERRORSTATUS,0)))
#define TSB_DMACB_INTERRORSTATUS_INTERRSTATUS1    (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTERRORSTATUS,1)))
#define TSB_DMACB_RAWINTTCSTATUS_RAWINTTCS0       (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->RAWINTTCSTATUS,0)))
#define TSB_DMACB_RAWINTTCSTATUS_RAWINTTCS1       (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->RAWINTTCSTATUS,1)))
#define TSB_DMACB_RAWINTERRORSTATUS_RAWINTERRS0   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->RAWINTERRORSTATUS,0)))
#define TSB_DMACB_RAWINTERRORSTATUS_RAWINTERRS1   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->RAWINTERRORSTATUS,1)))
#define TSB_DMACB_ENBLDCHNS_ENABLEDCH0            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->ENBLDCHNS,0)))
#define TSB_DMACB_ENBLDCHNS_ENABLEDCH1            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->ENBLDCHNS,1)))
#define TSB_DMACB_CONFIGURATION_E                 (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->CONFIGURATION,0)))
#define TSB_DMACB_CONFIGURATION_M                 (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->CONFIGURATION,1)))
#define TSB_DMACB_C0CONTROL_SI                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C0CONTROL,26)))
#define TSB_DMACB_C0CONTROL_DI                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C0CONTROL,27)))
#define TSB_DMACB_C0CONTROL_I                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C0CONTROL,31)))
#define TSB_DMACB_C0CONFIGURATION_E               (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C0CONFIGURATION,0)))
#define TSB_DMACB_C0CONFIGURATION_IE              (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C0CONFIGURATION,14)))
#define TSB_DMACB_C0CONFIGURATION_ITC             (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C0CONFIGURATION,15)))
#define TSB_DMACB_C0CONFIGURATION_LOCK            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C0CONFIGURATION,16)))
#define TSB_DMACB_C0CONFIGURATION_ACTIVE          (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->C0CONFIGURATION,17)))
#define TSB_DMACB_C0CONFIGURATION_HALT            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C0CONFIGURATION,18)))
#define TSB_DMACB_C1CONTROL_SI                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C1CONTROL,26)))
#define TSB_DMACB_C1CONTROL_DI                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C1CONTROL,27)))
#define TSB_DMACB_C1CONTROL_I                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C1CONTROL,31)))
#define TSB_DMACB_C1CONFIGURATION_E               (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C1CONFIGURATION,0)))
#define TSB_DMACB_C1CONFIGURATION_IE              (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C1CONFIGURATION,14)))
#define TSB_DMACB_C1CONFIGURATION_ITC             (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C1CONFIGURATION,15)))
#define TSB_DMACB_C1CONFIGURATION_LOCK            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C1CONFIGURATION,16)))
#define TSB_DMACB_C1CONFIGURATION_ACTIVE          (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->C1CONFIGURATION,17)))
#define TSB_DMACB_C1CONFIGURATION_HALT            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C1CONFIGURATION,18)))

#define TSB_DMACC_INTSTATUS_INTSTATUS0            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACC->INTSTATUS,0)))
#define TSB_DMACC_INTSTATUS_INTSTATUS1            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACC->INTSTATUS,1)))
#define TSB_DMACC_INTTCSTATUS_INTTCSTATUS0        (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACC->INTTCSTATUS,0)))
#define TSB_DMACC_INTTCSTATUS_INTTCSTATUS1        (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACC->INTTCSTATUS,1)))
#define TSB_DMACC_INTERRORSTATUS_INTERRSTATUS0    (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACC->INTERRORSTATUS,0)))
#define TSB_DMACC_INTERRORSTATUS_INTERRSTATUS1    (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACC->INTERRORSTATUS,1)))
#define TSB_DMACC_RAWINTTCSTATUS_RAWINTTCS0       (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACC->RAWINTTCSTATUS,0)))
#define TSB_DMACC_RAWINTTCSTATUS_RAWINTTCS1       (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACC->RAWINTTCSTATUS,1)))
#define TSB_DMACC_RAWINTERRORSTATUS_RAWINTERRS0   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACC->RAWINTERRORSTATUS,0)))
#define TSB_DMACC_RAWINTERRORSTATUS_RAWINTERRS1   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACC->RAWINTERRORSTATUS,1)))
#define TSB_DMACC_ENBLDCHNS_ENABLEDCH0            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACC->ENBLDCHNS,0)))
#define TSB_DMACC_ENBLDCHNS_ENABLEDCH1            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACC->ENBLDCHNS,1)))
#define TSB_DMACC_CONFIGURATION_E                 (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->CONFIGURATION,0)))
#define TSB_DMACC_CONFIGURATION_M                 (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->CONFIGURATION,1)))
#define TSB_DMACC_C0CONTROL_SI                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C0CONTROL,26)))
#define TSB_DMACC_C0CONTROL_DI                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C0CONTROL,27)))
#define TSB_DMACC_C0CONTROL_I                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C0CONTROL,31)))
#define TSB_DMACC_C0CONFIGURATION_E               (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C0CONFIGURATION,0)))
#define TSB_DMACC_C0CONFIGURATION_IE              (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C0CONFIGURATION,14)))
#define TSB_DMACC_C0CONFIGURATION_ITC             (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C0CONFIGURATION,15)))
#define TSB_DMACC_C0CONFIGURATION_LOCK            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C0CONFIGURATION,16)))
#define TSB_DMACC_C0CONFIGURATION_ACTIVE          (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACC->C0CONFIGURATION,17)))
#define TSB_DMACC_C0CONFIGURATION_HALT            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C0CONFIGURATION,18)))
#define TSB_DMACC_C1CONTROL_SI                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C1CONTROL,26)))
#define TSB_DMACC_C1CONTROL_DI                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C1CONTROL,27)))
#define TSB_DMACC_C1CONTROL_I                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C1CONTROL,31)))
#define TSB_DMACC_C1CONFIGURATION_E               (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C1CONFIGURATION,0)))
#define TSB_DMACC_C1CONFIGURATION_IE              (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C1CONFIGURATION,14)))
#define TSB_DMACC_C1CONFIGURATION_ITC             (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C1CONFIGURATION,15)))
#define TSB_DMACC_C1CONFIGURATION_LOCK            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C1CONFIGURATION,16)))
#define TSB_DMACC_C1CONFIGURATION_ACTIVE          (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACC->C1CONFIGURATION,17)))
#define TSB_DMACC_C1CONFIGURATION_HALT            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACC->C1CONFIGURATION,18)))


/* Programmable Servo Controller  */
#define TSB_PSCA_SGN_SA0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->SGN,16)))
#define TSB_PSCA_SGN_SM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->SGN,17)))
#define TSB_PSCA_SGN_SM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->SGN,18)))
#define TSB_PSCA_SGN_SL0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->SGN,19)))
#define TSB_PSCA_SGN_SL1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->SGN,20)))
#define TSB_PSCA_SGN_SR0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->SGN,21)))
#define TSB_PSCA_SGN_SR1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->SGN,22)))
#define TSB_PSCA_CNT_START                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->CNT,16)))
#define TSB_PSCA_CNT_STEP                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->CNT,24)))
#define TSB_PSCA_CNT_BRK                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->CNT,25)))
#define TSB_PSCA_FLG_OVER                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->FLG,16)))
#define TSB_PSCA_FLG_UNDER                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->FLG,17)))
#define TSB_PSCA_FLG_ZERO                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->FLG,24)))
#define TSB_PSCA_REN_INTEN0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,0)))
#define TSB_PSCA_REN_INTEN1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,1)))
#define TSB_PSCA_REN_INTEN2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,2)))
#define TSB_PSCA_REN_INTEN3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,3)))
#define TSB_PSCA_REN_INTEN4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,4)))
#define TSB_PSCA_REN_INTEN5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,5)))
#define TSB_PSCA_REN_INTEN6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,6)))
#define TSB_PSCA_REN_INTEN7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,7)))
#define TSB_PSCA_REN_INTEN8                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,8)))
#define TSB_PSCA_REN_INTEN9                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,9)))
#define TSB_PSCA_REN_INTEN10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,10)))
#define TSB_PSCA_REN_INTEN11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,11)))
#define TSB_PSCA_REN_INTEN12                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,12)))
#define TSB_PSCA_REN_INTEN13                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,13)))
#define TSB_PSCA_REN_INTEN14                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,14)))
#define TSB_PSCA_REN_INTEN15                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,15)))
#define TSB_PSCA_REN_INTEG0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,16)))
#define TSB_PSCA_REN_INTEG1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,17)))
#define TSB_PSCA_REN_INTEG2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,18)))
#define TSB_PSCA_REN_INTEG3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCA->REN,19)))
#define TSB_PSCA_RFLG_INTFLG0                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,0)))
#define TSB_PSCA_RFLG_INTFLG1                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,1)))
#define TSB_PSCA_RFLG_INTFLG2                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,2)))
#define TSB_PSCA_RFLG_INTFLG3                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,3)))
#define TSB_PSCA_RFLG_INTFLG4                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,4)))
#define TSB_PSCA_RFLG_INTFLG5                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,5)))
#define TSB_PSCA_RFLG_INTFLG6                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,6)))
#define TSB_PSCA_RFLG_INTFLG7                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,7)))
#define TSB_PSCA_RFLG_INTFLG8                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,8)))
#define TSB_PSCA_RFLG_INTFLG9                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,9)))
#define TSB_PSCA_RFLG_INTFLG10                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,10)))
#define TSB_PSCA_RFLG_INTFLG11                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,11)))
#define TSB_PSCA_RFLG_INTFLG12                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,12)))
#define TSB_PSCA_RFLG_INTFLG13                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,13)))
#define TSB_PSCA_RFLG_INTFLG14                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,14)))
#define TSB_PSCA_RFLG_INTFLG15                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,15)))
#define TSB_PSCA_RFLG_INTOVRF0                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,16)))
#define TSB_PSCA_RFLG_INTOVRF1                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,17)))
#define TSB_PSCA_RFLG_INTOVRF2                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,18)))
#define TSB_PSCA_RFLG_INTOVRF3                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,19)))
#define TSB_PSCA_RFLG_INTOVRF4                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,20)))
#define TSB_PSCA_RFLG_INTOVRF5                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,21)))
#define TSB_PSCA_RFLG_INTOVRF6                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,22)))
#define TSB_PSCA_RFLG_INTOVRF7                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,23)))
#define TSB_PSCA_RFLG_INTOVRF8                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,24)))
#define TSB_PSCA_RFLG_INTOVRF9                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,25)))
#define TSB_PSCA_RFLG_INTOVRF10                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,26)))
#define TSB_PSCA_RFLG_INTOVRF11                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,27)))
#define TSB_PSCA_RFLG_INTOVRF12                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,28)))
#define TSB_PSCA_RFLG_INTOVRF13                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,29)))
#define TSB_PSCA_RFLG_INTOVRF14                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,30)))
#define TSB_PSCA_RFLG_INTOVRF15                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCA->RFLG,31)))
#define TSB_PSCA_RCLR_INTCLR0                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,0)))
#define TSB_PSCA_RCLR_INTCLR1                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,1)))
#define TSB_PSCA_RCLR_INTCLR2                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,2)))
#define TSB_PSCA_RCLR_INTCLR3                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,3)))
#define TSB_PSCA_RCLR_INTCLR4                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,4)))
#define TSB_PSCA_RCLR_INTCLR5                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,5)))
#define TSB_PSCA_RCLR_INTCLR6                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,6)))
#define TSB_PSCA_RCLR_INTCLR7                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,7)))
#define TSB_PSCA_RCLR_INTCLR8                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,8)))
#define TSB_PSCA_RCLR_INTCLR9                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,9)))
#define TSB_PSCA_RCLR_INTCLR10                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,10)))
#define TSB_PSCA_RCLR_INTCLR11                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,11)))
#define TSB_PSCA_RCLR_INTCLR12                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,12)))
#define TSB_PSCA_RCLR_INTCLR13                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,13)))
#define TSB_PSCA_RCLR_INTCLR14                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,14)))
#define TSB_PSCA_RCLR_INTCLR15                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RCLR,15)))
#define TSB_PSCA_RSET_INTSET0                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,0)))
#define TSB_PSCA_RSET_INTSET1                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,1)))
#define TSB_PSCA_RSET_INTSET2                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,2)))
#define TSB_PSCA_RSET_INTSET3                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,3)))
#define TSB_PSCA_RSET_INTSET4                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,4)))
#define TSB_PSCA_RSET_INTSET5                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,5)))
#define TSB_PSCA_RSET_INTSET6                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,6)))
#define TSB_PSCA_RSET_INTSET7                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,7)))
#define TSB_PSCA_RSET_INTSET8                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,8)))
#define TSB_PSCA_RSET_INTSET9                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,9)))
#define TSB_PSCA_RSET_INTSET10                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,10)))
#define TSB_PSCA_RSET_INTSET11                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,11)))
#define TSB_PSCA_RSET_INTSET12                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,12)))
#define TSB_PSCA_RSET_INTSET13                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,13)))
#define TSB_PSCA_RSET_INTSET14                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,14)))
#define TSB_PSCA_RSET_INTSET15                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCA->RSET,15)))

#define TSB_PSCB_SGN_SA0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->SGN,16)))
#define TSB_PSCB_SGN_SM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->SGN,17)))
#define TSB_PSCB_SGN_SM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->SGN,18)))
#define TSB_PSCB_SGN_SL0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->SGN,19)))
#define TSB_PSCB_SGN_SL1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->SGN,20)))
#define TSB_PSCB_SGN_SR0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->SGN,21)))
#define TSB_PSCB_SGN_SR1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->SGN,22)))
#define TSB_PSCB_CNT_START                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->CNT,16)))
#define TSB_PSCB_CNT_STEP                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->CNT,24)))
#define TSB_PSCB_CNT_BRK                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->CNT,25)))
#define TSB_PSCB_FLG_OVER                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->FLG,16)))
#define TSB_PSCB_FLG_UNDER                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->FLG,17)))
#define TSB_PSCB_FLG_ZERO                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->FLG,24)))
#define TSB_PSCB_REN_INTEN0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,0)))
#define TSB_PSCB_REN_INTEN1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,1)))
#define TSB_PSCB_REN_INTEN2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,2)))
#define TSB_PSCB_REN_INTEN3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,3)))
#define TSB_PSCB_REN_INTEN4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,4)))
#define TSB_PSCB_REN_INTEN5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,5)))
#define TSB_PSCB_REN_INTEN6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,6)))
#define TSB_PSCB_REN_INTEN7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,7)))
#define TSB_PSCB_REN_INTEN8                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,8)))
#define TSB_PSCB_REN_INTEN9                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,9)))
#define TSB_PSCB_REN_INTEN10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,10)))
#define TSB_PSCB_REN_INTEN11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,11)))
#define TSB_PSCB_REN_INTEN12                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,12)))
#define TSB_PSCB_REN_INTEN13                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,13)))
#define TSB_PSCB_REN_INTEN14                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,14)))
#define TSB_PSCB_REN_INTEN15                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,15)))
#define TSB_PSCB_REN_INTEG0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,16)))
#define TSB_PSCB_REN_INTEG1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,17)))
#define TSB_PSCB_REN_INTEG2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,18)))
#define TSB_PSCB_REN_INTEG3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCB->REN,19)))
#define TSB_PSCB_RFLG_INTFLG0                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,0)))
#define TSB_PSCB_RFLG_INTFLG1                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,1)))
#define TSB_PSCB_RFLG_INTFLG2                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,2)))
#define TSB_PSCB_RFLG_INTFLG3                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,3)))
#define TSB_PSCB_RFLG_INTFLG4                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,4)))
#define TSB_PSCB_RFLG_INTFLG5                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,5)))
#define TSB_PSCB_RFLG_INTFLG6                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,6)))
#define TSB_PSCB_RFLG_INTFLG7                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,7)))
#define TSB_PSCB_RFLG_INTFLG8                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,8)))
#define TSB_PSCB_RFLG_INTFLG9                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,9)))
#define TSB_PSCB_RFLG_INTFLG10                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,10)))
#define TSB_PSCB_RFLG_INTFLG11                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,11)))
#define TSB_PSCB_RFLG_INTFLG12                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,12)))
#define TSB_PSCB_RFLG_INTFLG13                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,13)))
#define TSB_PSCB_RFLG_INTFLG14                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,14)))
#define TSB_PSCB_RFLG_INTFLG15                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,15)))
#define TSB_PSCB_RFLG_INTOVRF0                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,16)))
#define TSB_PSCB_RFLG_INTOVRF1                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,17)))
#define TSB_PSCB_RFLG_INTOVRF2                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,18)))
#define TSB_PSCB_RFLG_INTOVRF3                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,19)))
#define TSB_PSCB_RFLG_INTOVRF4                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,20)))
#define TSB_PSCB_RFLG_INTOVRF5                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,21)))
#define TSB_PSCB_RFLG_INTOVRF6                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,22)))
#define TSB_PSCB_RFLG_INTOVRF7                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,23)))
#define TSB_PSCB_RFLG_INTOVRF8                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,24)))
#define TSB_PSCB_RFLG_INTOVRF9                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,25)))
#define TSB_PSCB_RFLG_INTOVRF10                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,26)))
#define TSB_PSCB_RFLG_INTOVRF11                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,27)))
#define TSB_PSCB_RFLG_INTOVRF12                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,28)))
#define TSB_PSCB_RFLG_INTOVRF13                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,29)))
#define TSB_PSCB_RFLG_INTOVRF14                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,30)))
#define TSB_PSCB_RFLG_INTOVRF15                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCB->RFLG,31)))
#define TSB_PSCB_RCLR_INTCLR0                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,0)))
#define TSB_PSCB_RCLR_INTCLR1                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,1)))
#define TSB_PSCB_RCLR_INTCLR2                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,2)))
#define TSB_PSCB_RCLR_INTCLR3                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,3)))
#define TSB_PSCB_RCLR_INTCLR4                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,4)))
#define TSB_PSCB_RCLR_INTCLR5                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,5)))
#define TSB_PSCB_RCLR_INTCLR6                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,6)))
#define TSB_PSCB_RCLR_INTCLR7                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,7)))
#define TSB_PSCB_RCLR_INTCLR8                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,8)))
#define TSB_PSCB_RCLR_INTCLR9                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,9)))
#define TSB_PSCB_RCLR_INTCLR10                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,10)))
#define TSB_PSCB_RCLR_INTCLR11                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,11)))
#define TSB_PSCB_RCLR_INTCLR12                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,12)))
#define TSB_PSCB_RCLR_INTCLR13                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,13)))
#define TSB_PSCB_RCLR_INTCLR14                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,14)))
#define TSB_PSCB_RCLR_INTCLR15                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RCLR,15)))
#define TSB_PSCB_RSET_INTSET0                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,0)))
#define TSB_PSCB_RSET_INTSET1                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,1)))
#define TSB_PSCB_RSET_INTSET2                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,2)))
#define TSB_PSCB_RSET_INTSET3                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,3)))
#define TSB_PSCB_RSET_INTSET4                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,4)))
#define TSB_PSCB_RSET_INTSET5                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,5)))
#define TSB_PSCB_RSET_INTSET6                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,6)))
#define TSB_PSCB_RSET_INTSET7                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,7)))
#define TSB_PSCB_RSET_INTSET8                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,8)))
#define TSB_PSCB_RSET_INTSET9                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,9)))
#define TSB_PSCB_RSET_INTSET10                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,10)))
#define TSB_PSCB_RSET_INTSET11                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,11)))
#define TSB_PSCB_RSET_INTSET12                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,12)))
#define TSB_PSCB_RSET_INTSET13                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,13)))
#define TSB_PSCB_RSET_INTSET14                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,14)))
#define TSB_PSCB_RSET_INTSET15                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCB->RSET,15)))

#define TSB_PSCC_SGN_SA0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->SGN,16)))
#define TSB_PSCC_SGN_SM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->SGN,17)))
#define TSB_PSCC_SGN_SM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->SGN,18)))
#define TSB_PSCC_SGN_SL0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->SGN,19)))
#define TSB_PSCC_SGN_SL1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->SGN,20)))
#define TSB_PSCC_SGN_SR0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->SGN,21)))
#define TSB_PSCC_SGN_SR1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->SGN,22)))
#define TSB_PSCC_CNT_START                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->CNT,16)))
#define TSB_PSCC_CNT_STEP                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->CNT,24)))
#define TSB_PSCC_CNT_BRK                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->CNT,25)))
#define TSB_PSCC_FLG_OVER                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->FLG,16)))
#define TSB_PSCC_FLG_UNDER                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->FLG,17)))
#define TSB_PSCC_FLG_ZERO                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->FLG,24)))
#define TSB_PSCC_REN_INTEN0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,0)))
#define TSB_PSCC_REN_INTEN1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,1)))
#define TSB_PSCC_REN_INTEN2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,2)))
#define TSB_PSCC_REN_INTEN3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,3)))
#define TSB_PSCC_REN_INTEN4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,4)))
#define TSB_PSCC_REN_INTEN5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,5)))
#define TSB_PSCC_REN_INTEN6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,6)))
#define TSB_PSCC_REN_INTEN7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,7)))
#define TSB_PSCC_REN_INTEN8                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,8)))
#define TSB_PSCC_REN_INTEN9                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,9)))
#define TSB_PSCC_REN_INTEN10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,10)))
#define TSB_PSCC_REN_INTEN11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,11)))
#define TSB_PSCC_REN_INTEN12                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,12)))
#define TSB_PSCC_REN_INTEN13                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,13)))
#define TSB_PSCC_REN_INTEN14                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,14)))
#define TSB_PSCC_REN_INTEN15                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,15)))
#define TSB_PSCC_REN_INTEG0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,16)))
#define TSB_PSCC_REN_INTEG1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,17)))
#define TSB_PSCC_REN_INTEG2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,18)))
#define TSB_PSCC_REN_INTEG3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCC->REN,19)))
#define TSB_PSCC_RFLG_INTFLG0                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,0)))
#define TSB_PSCC_RFLG_INTFLG1                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,1)))
#define TSB_PSCC_RFLG_INTFLG2                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,2)))
#define TSB_PSCC_RFLG_INTFLG3                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,3)))
#define TSB_PSCC_RFLG_INTFLG4                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,4)))
#define TSB_PSCC_RFLG_INTFLG5                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,5)))
#define TSB_PSCC_RFLG_INTFLG6                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,6)))
#define TSB_PSCC_RFLG_INTFLG7                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,7)))
#define TSB_PSCC_RFLG_INTFLG8                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,8)))
#define TSB_PSCC_RFLG_INTFLG9                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,9)))
#define TSB_PSCC_RFLG_INTFLG10                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,10)))
#define TSB_PSCC_RFLG_INTFLG11                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,11)))
#define TSB_PSCC_RFLG_INTFLG12                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,12)))
#define TSB_PSCC_RFLG_INTFLG13                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,13)))
#define TSB_PSCC_RFLG_INTFLG14                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,14)))
#define TSB_PSCC_RFLG_INTFLG15                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,15)))
#define TSB_PSCC_RFLG_INTOVRF0                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,16)))
#define TSB_PSCC_RFLG_INTOVRF1                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,17)))
#define TSB_PSCC_RFLG_INTOVRF2                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,18)))
#define TSB_PSCC_RFLG_INTOVRF3                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,19)))
#define TSB_PSCC_RFLG_INTOVRF4                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,20)))
#define TSB_PSCC_RFLG_INTOVRF5                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,21)))
#define TSB_PSCC_RFLG_INTOVRF6                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,22)))
#define TSB_PSCC_RFLG_INTOVRF7                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,23)))
#define TSB_PSCC_RFLG_INTOVRF8                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,24)))
#define TSB_PSCC_RFLG_INTOVRF9                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,25)))
#define TSB_PSCC_RFLG_INTOVRF10                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,26)))
#define TSB_PSCC_RFLG_INTOVRF11                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,27)))
#define TSB_PSCC_RFLG_INTOVRF12                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,28)))
#define TSB_PSCC_RFLG_INTOVRF13                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,29)))
#define TSB_PSCC_RFLG_INTOVRF14                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,30)))
#define TSB_PSCC_RFLG_INTOVRF15                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCC->RFLG,31)))
#define TSB_PSCC_RCLR_INTCLR0                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,0)))
#define TSB_PSCC_RCLR_INTCLR1                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,1)))
#define TSB_PSCC_RCLR_INTCLR2                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,2)))
#define TSB_PSCC_RCLR_INTCLR3                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,3)))
#define TSB_PSCC_RCLR_INTCLR4                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,4)))
#define TSB_PSCC_RCLR_INTCLR5                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,5)))
#define TSB_PSCC_RCLR_INTCLR6                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,6)))
#define TSB_PSCC_RCLR_INTCLR7                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,7)))
#define TSB_PSCC_RCLR_INTCLR8                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,8)))
#define TSB_PSCC_RCLR_INTCLR9                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,9)))
#define TSB_PSCC_RCLR_INTCLR10                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,10)))
#define TSB_PSCC_RCLR_INTCLR11                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,11)))
#define TSB_PSCC_RCLR_INTCLR12                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,12)))
#define TSB_PSCC_RCLR_INTCLR13                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,13)))
#define TSB_PSCC_RCLR_INTCLR14                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,14)))
#define TSB_PSCC_RCLR_INTCLR15                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RCLR,15)))
#define TSB_PSCC_RSET_INTSET0                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,0)))
#define TSB_PSCC_RSET_INTSET1                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,1)))
#define TSB_PSCC_RSET_INTSET2                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,2)))
#define TSB_PSCC_RSET_INTSET3                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,3)))
#define TSB_PSCC_RSET_INTSET4                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,4)))
#define TSB_PSCC_RSET_INTSET5                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,5)))
#define TSB_PSCC_RSET_INTSET6                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,6)))
#define TSB_PSCC_RSET_INTSET7                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,7)))
#define TSB_PSCC_RSET_INTSET8                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,8)))
#define TSB_PSCC_RSET_INTSET9                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,9)))
#define TSB_PSCC_RSET_INTSET10                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,10)))
#define TSB_PSCC_RSET_INTSET11                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,11)))
#define TSB_PSCC_RSET_INTSET12                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,12)))
#define TSB_PSCC_RSET_INTSET13                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,13)))
#define TSB_PSCC_RSET_INTSET14                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,14)))
#define TSB_PSCC_RSET_INTSET15                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCC->RSET,15)))

#define TSB_PSCD_SGN_SA0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->SGN,16)))
#define TSB_PSCD_SGN_SM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->SGN,17)))
#define TSB_PSCD_SGN_SM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->SGN,18)))
#define TSB_PSCD_SGN_SL0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->SGN,19)))
#define TSB_PSCD_SGN_SL1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->SGN,20)))
#define TSB_PSCD_SGN_SR0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->SGN,21)))
#define TSB_PSCD_SGN_SR1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->SGN,22)))
#define TSB_PSCD_CNT_START                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->CNT,16)))
#define TSB_PSCD_CNT_STEP                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->CNT,24)))
#define TSB_PSCD_CNT_BRK                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->CNT,25)))
#define TSB_PSCD_FLG_OVER                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->FLG,16)))
#define TSB_PSCD_FLG_UNDER                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->FLG,17)))
#define TSB_PSCD_FLG_ZERO                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->FLG,24)))
#define TSB_PSCD_REN_INTEN0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,0)))
#define TSB_PSCD_REN_INTEN1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,1)))
#define TSB_PSCD_REN_INTEN2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,2)))
#define TSB_PSCD_REN_INTEN3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,3)))
#define TSB_PSCD_REN_INTEN4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,4)))
#define TSB_PSCD_REN_INTEN5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,5)))
#define TSB_PSCD_REN_INTEN6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,6)))
#define TSB_PSCD_REN_INTEN7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,7)))
#define TSB_PSCD_REN_INTEN8                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,8)))
#define TSB_PSCD_REN_INTEN9                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,9)))
#define TSB_PSCD_REN_INTEN10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,10)))
#define TSB_PSCD_REN_INTEN11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,11)))
#define TSB_PSCD_REN_INTEN12                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,12)))
#define TSB_PSCD_REN_INTEN13                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,13)))
#define TSB_PSCD_REN_INTEN14                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,14)))
#define TSB_PSCD_REN_INTEN15                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,15)))
#define TSB_PSCD_REN_INTEG0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,16)))
#define TSB_PSCD_REN_INTEG1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,17)))
#define TSB_PSCD_REN_INTEG2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,18)))
#define TSB_PSCD_REN_INTEG3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSCD->REN,19)))
#define TSB_PSCD_RFLG_INTFLG0                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,0)))
#define TSB_PSCD_RFLG_INTFLG1                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,1)))
#define TSB_PSCD_RFLG_INTFLG2                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,2)))
#define TSB_PSCD_RFLG_INTFLG3                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,3)))
#define TSB_PSCD_RFLG_INTFLG4                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,4)))
#define TSB_PSCD_RFLG_INTFLG5                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,5)))
#define TSB_PSCD_RFLG_INTFLG6                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,6)))
#define TSB_PSCD_RFLG_INTFLG7                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,7)))
#define TSB_PSCD_RFLG_INTFLG8                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,8)))
#define TSB_PSCD_RFLG_INTFLG9                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,9)))
#define TSB_PSCD_RFLG_INTFLG10                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,10)))
#define TSB_PSCD_RFLG_INTFLG11                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,11)))
#define TSB_PSCD_RFLG_INTFLG12                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,12)))
#define TSB_PSCD_RFLG_INTFLG13                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,13)))
#define TSB_PSCD_RFLG_INTFLG14                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,14)))
#define TSB_PSCD_RFLG_INTFLG15                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,15)))
#define TSB_PSCD_RFLG_INTOVRF0                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,16)))
#define TSB_PSCD_RFLG_INTOVRF1                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,17)))
#define TSB_PSCD_RFLG_INTOVRF2                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,18)))
#define TSB_PSCD_RFLG_INTOVRF3                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,19)))
#define TSB_PSCD_RFLG_INTOVRF4                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,20)))
#define TSB_PSCD_RFLG_INTOVRF5                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,21)))
#define TSB_PSCD_RFLG_INTOVRF6                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,22)))
#define TSB_PSCD_RFLG_INTOVRF7                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,23)))
#define TSB_PSCD_RFLG_INTOVRF8                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,24)))
#define TSB_PSCD_RFLG_INTOVRF9                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,25)))
#define TSB_PSCD_RFLG_INTOVRF10                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,26)))
#define TSB_PSCD_RFLG_INTOVRF11                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,27)))
#define TSB_PSCD_RFLG_INTOVRF12                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,28)))
#define TSB_PSCD_RFLG_INTOVRF13                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,29)))
#define TSB_PSCD_RFLG_INTOVRF14                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,30)))
#define TSB_PSCD_RFLG_INTOVRF15                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_PSCD->RFLG,31)))
#define TSB_PSCD_RCLR_INTCLR0                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,0)))
#define TSB_PSCD_RCLR_INTCLR1                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,1)))
#define TSB_PSCD_RCLR_INTCLR2                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,2)))
#define TSB_PSCD_RCLR_INTCLR3                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,3)))
#define TSB_PSCD_RCLR_INTCLR4                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,4)))
#define TSB_PSCD_RCLR_INTCLR5                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,5)))
#define TSB_PSCD_RCLR_INTCLR6                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,6)))
#define TSB_PSCD_RCLR_INTCLR7                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,7)))
#define TSB_PSCD_RCLR_INTCLR8                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,8)))
#define TSB_PSCD_RCLR_INTCLR9                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,9)))
#define TSB_PSCD_RCLR_INTCLR10                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,10)))
#define TSB_PSCD_RCLR_INTCLR11                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,11)))
#define TSB_PSCD_RCLR_INTCLR12                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,12)))
#define TSB_PSCD_RCLR_INTCLR13                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,13)))
#define TSB_PSCD_RCLR_INTCLR14                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,14)))
#define TSB_PSCD_RCLR_INTCLR15                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RCLR,15)))
#define TSB_PSCD_RSET_INTSET0                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,0)))
#define TSB_PSCD_RSET_INTSET1                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,1)))
#define TSB_PSCD_RSET_INTSET2                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,2)))
#define TSB_PSCD_RSET_INTSET3                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,3)))
#define TSB_PSCD_RSET_INTSET4                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,4)))
#define TSB_PSCD_RSET_INTSET5                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,5)))
#define TSB_PSCD_RSET_INTSET6                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,6)))
#define TSB_PSCD_RSET_INTSET7                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,7)))
#define TSB_PSCD_RSET_INTSET8                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,8)))
#define TSB_PSCD_RSET_INTSET9                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,9)))
#define TSB_PSCD_RSET_INTSET10                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,10)))
#define TSB_PSCD_RSET_INTSET11                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,11)))
#define TSB_PSCD_RSET_INTSET12                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,12)))
#define TSB_PSCD_RSET_INTSET13                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,13)))
#define TSB_PSCD_RSET_INTSET14                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,14)))
#define TSB_PSCD_RSET_INTSET15                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_PSCD->RSET,15)))


/* UART */
#define TSB_UART_DR_FE                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->DR,8)))
#define TSB_UART_DR_PE                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->DR,9)))
#define TSB_UART_DR_BE                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->DR,10)))
#define TSB_UART_DR_OE                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->DR,11)))
#define TSB_UART_RSR_FE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->RSR,0)))
#define TSB_UART_RSR_PE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->RSR,1)))
#define TSB_UART_RSR_BE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->RSR,2)))
#define TSB_UART_RSR_OE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->RSR,3)))
#define TSB_UART_ECR_FE                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART->ECR,0)))
#define TSB_UART_ECR_PE                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART->ECR,1)))
#define TSB_UART_ECR_BE                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART->ECR,2)))
#define TSB_UART_ECR_OE                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART->ECR,3)))
#define TSB_UART_FR_CTS                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->FR,0)))
#define TSB_UART_FR_BUSY                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->FR,3)))
#define TSB_UART_FR_RXFE                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->FR,4)))
#define TSB_UART_FR_TXFF                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->FR,5)))
#define TSB_UART_FR_RXFF                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->FR,6)))
#define TSB_UART_FR_TXFE                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->FR,7)))
#define TSB_UART_LCR_H_BRK                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->LCR_H,0)))
#define TSB_UART_LCR_H_PEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->LCR_H,1)))
#define TSB_UART_LCR_H_EPS                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->LCR_H,2)))
#define TSB_UART_LCR_H_STP2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->LCR_H,3)))
#define TSB_UART_LCR_H_FEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->LCR_H,4)))
#define TSB_UART_LCR_H_SPS                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->LCR_H,7)))
#define TSB_UART_CR_UARTEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->CR,0)))
#define TSB_UART_CR_TXE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->CR,8)))
#define TSB_UART_CR_RXE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->CR,9)))
#define TSB_UART_CR_RTSEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->CR,14)))
#define TSB_UART_CR_CTSEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->CR,15)))
#define TSB_UART_IMSC_CTSMIM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->IMSC,1)))
#define TSB_UART_IMSC_RXIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->IMSC,4)))
#define TSB_UART_IMSC_TXIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->IMSC,5)))
#define TSB_UART_IMSC_RTIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->IMSC,6)))
#define TSB_UART_IMSC_FEIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->IMSC,7)))
#define TSB_UART_IMSC_PEIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->IMSC,8)))
#define TSB_UART_IMSC_BEIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->IMSC,9)))
#define TSB_UART_IMSC_OEIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->IMSC,10)))
#define TSB_UART_RIS_CTSRMIS                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->RIS,1)))
#define TSB_UART_RIS_RXRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->RIS,4)))
#define TSB_UART_RIS_TXRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->RIS,5)))
#define TSB_UART_RIS_RTRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->RIS,6)))
#define TSB_UART_RIS_FERIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->RIS,7)))
#define TSB_UART_RIS_PERIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->RIS,8)))
#define TSB_UART_RIS_BERIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->RIS,9)))
#define TSB_UART_RIS_OERIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->RIS,10)))
#define TSB_UART_MIS_CTSMMIS                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->MIS,1)))
#define TSB_UART_MIS_RXMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->MIS,4)))
#define TSB_UART_MIS_TXMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->MIS,5)))
#define TSB_UART_MIS_RTMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->MIS,6)))
#define TSB_UART_MIS_FEMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->MIS,7)))
#define TSB_UART_MIS_PEMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->MIS,8)))
#define TSB_UART_MIS_BEMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->MIS,9)))
#define TSB_UART_MIS_OEMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->MIS,10)))
#define TSB_UART_ICR_CTSMIC                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART->ICR,1)))
#define TSB_UART_ICR_RXIC                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART->ICR,4)))
#define TSB_UART_ICR_TXIC                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART->ICR,5)))
#define TSB_UART_ICR_RTIC                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART->ICR,6)))
#define TSB_UART_ICR_FEIC                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART->ICR,7)))
#define TSB_UART_ICR_PEIC                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART->ICR,8)))
#define TSB_UART_ICR_BEIC                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART->ICR,9)))
#define TSB_UART_ICR_OEIC                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART->ICR,10)))
#define TSB_UART_DMACR_RXDMAE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->DMACR,0)))
#define TSB_UART_DMACR_TXDMAE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->DMACR,1)))
#define TSB_UART_DMACR_DMAONERR                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->DMACR,2)))


/* 12bit A/D Converter */
#define TSB_ADA_MOD0_ADS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_ADA->MOD0,0)))
#define TSB_ADA_MOD0_HPADS                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_ADA->MOD0,1)))
#define TSB_ADA_MOD1_ADHWE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD1,0)))
#define TSB_ADA_MOD1_HPADHWE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD1,2)))
#define TSB_ADA_MOD1_RCUT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD1,5)))
#define TSB_ADA_MOD1_I2AD                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD1,6)))
#define TSB_ADA_MOD1_DACON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD1,7)))
#define TSB_ADA_MOD3_SCAN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD3,0)))
#define TSB_ADA_MOD3_REPEAT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD3,1)))
#define TSB_ADA_MOD3_AUTO                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD3,2)))
#define TSB_ADA_MOD5_ADBF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->MOD5,0)))
#define TSB_ADA_MOD5_EOCF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->MOD5,1)))
#define TSB_ADA_MOD5_HPADBF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->MOD5,2)))
#define TSB_ADA_MOD5_HPEOCF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->MOD5,3)))
#define TSB_ADA_CMPCR0_ADBIG0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR0,4)))
#define TSB_ADA_CMPCR0_CMPCOND0                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR0,5)))
#define TSB_ADA_CMPCR0_CMP0EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR0,7)))
#define TSB_ADA_CMPCR1_ADBIG1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR1,4)))
#define TSB_ADA_CMPCR1_CMPCOND1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR1,5)))
#define TSB_ADA_CMPCR1_CMP1EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR1,7)))
#define TSB_ADA_REG00_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG00,12)))
#define TSB_ADA_REG00_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG00,13)))
#define TSB_ADA_REG00_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG00,14)))
#define TSB_ADA_REG00_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG00,16)))
#define TSB_ADA_REG00_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG00,17)))
#define TSB_ADA_REG00_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG00,18)))
#define TSB_ADA_REG01_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG01,12)))
#define TSB_ADA_REG01_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG01,13)))
#define TSB_ADA_REG01_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG01,14)))
#define TSB_ADA_REG01_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG01,16)))
#define TSB_ADA_REG01_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG01,17)))
#define TSB_ADA_REG01_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG01,18)))
#define TSB_ADA_REG02_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG02,12)))
#define TSB_ADA_REG02_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG02,13)))
#define TSB_ADA_REG02_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG02,14)))
#define TSB_ADA_REG02_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG02,16)))
#define TSB_ADA_REG02_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG02,17)))
#define TSB_ADA_REG02_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG02,18)))
#define TSB_ADA_REG03_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG03,12)))
#define TSB_ADA_REG03_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG03,13)))
#define TSB_ADA_REG03_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG03,14)))
#define TSB_ADA_REG03_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG03,16)))
#define TSB_ADA_REG03_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG03,17)))
#define TSB_ADA_REG03_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG03,18)))
#define TSB_ADA_REG04_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG04,12)))
#define TSB_ADA_REG04_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG04,13)))
#define TSB_ADA_REG04_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG04,14)))
#define TSB_ADA_REG04_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG04,16)))
#define TSB_ADA_REG04_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG04,17)))
#define TSB_ADA_REG04_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG04,18)))
#define TSB_ADA_REG05_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG05,12)))
#define TSB_ADA_REG05_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG05,13)))
#define TSB_ADA_REG05_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG05,14)))
#define TSB_ADA_REG05_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG05,16)))
#define TSB_ADA_REG05_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG05,17)))
#define TSB_ADA_REG05_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG05,18)))
#define TSB_ADA_REG06_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG06,12)))
#define TSB_ADA_REG06_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG06,13)))
#define TSB_ADA_REG06_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG06,14)))
#define TSB_ADA_REG06_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG06,16)))
#define TSB_ADA_REG06_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG06,17)))
#define TSB_ADA_REG06_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG06,18)))
#define TSB_ADA_REG07_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG07,12)))
#define TSB_ADA_REG07_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG07,13)))
#define TSB_ADA_REG07_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG07,14)))
#define TSB_ADA_REG07_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG07,16)))
#define TSB_ADA_REG07_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG07,17)))
#define TSB_ADA_REG07_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG07,18)))
#define TSB_ADA_REGSP_ADSPRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REGSP,12)))
#define TSB_ADA_REGSP_ADOVRSPF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REGSP,13)))
#define TSB_ADA_REGSP_ADSPRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REGSP,16)))
#define TSB_ADA_REGSP_ADOVRSPF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REGSP,17)))
#define TSB_ADA_CREG_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->CREG,12)))
#define TSB_ADA_CREG_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->CREG,13)))
#define TSB_ADA_CREG_INVALID                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->CREG,14)))
#define TSB_ADA_CREG_ADRF_MR                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->CREG,16)))
#define TSB_ADA_CREG_ADOVRF_MR                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->CREG,17)))
#define TSB_ADA_CREG_INVALID_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->CREG,18)))

#define TSB_ADB_MOD0_ADS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_ADB->MOD0,0)))
#define TSB_ADB_MOD0_HPADS                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_ADB->MOD0,1)))
#define TSB_ADB_MOD1_ADHWE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD1,0)))
#define TSB_ADB_MOD1_HPADHWE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD1,2)))
#define TSB_ADB_MOD1_RCUT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD1,5)))
#define TSB_ADB_MOD1_I2AD                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD1,6)))
#define TSB_ADB_MOD1_DACON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD1,7)))
#define TSB_ADB_MOD3_SCAN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD3,0)))
#define TSB_ADB_MOD3_REPEAT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD3,1)))
#define TSB_ADB_MOD3_AUTO                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD3,2)))
#define TSB_ADB_MOD5_ADBF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->MOD5,0)))
#define TSB_ADB_MOD5_EOCF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->MOD5,1)))
#define TSB_ADB_MOD5_HPADBF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->MOD5,2)))
#define TSB_ADB_MOD5_HPEOCF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->MOD5,3)))
#define TSB_ADB_CMPCR0_ADBIG0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR0,4)))
#define TSB_ADB_CMPCR0_CMPCOND0                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR0,5)))
#define TSB_ADB_CMPCR0_CMP0EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR0,7)))
#define TSB_ADB_CMPCR1_ADBIG1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR1,4)))
#define TSB_ADB_CMPCR1_CMPCOND1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR1,5)))
#define TSB_ADB_CMPCR1_CMP1EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR1,7)))
#define TSB_ADB_REG00_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG00,12)))
#define TSB_ADB_REG00_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG00,13)))
#define TSB_ADB_REG00_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG00,14)))
#define TSB_ADB_REG00_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG00,16)))
#define TSB_ADB_REG00_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG00,17)))
#define TSB_ADB_REG00_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG00,18)))
#define TSB_ADB_REG01_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG01,12)))
#define TSB_ADB_REG01_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG01,13)))
#define TSB_ADB_REG01_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG01,14)))
#define TSB_ADB_REG01_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG01,16)))
#define TSB_ADB_REG01_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG01,17)))
#define TSB_ADB_REG01_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG01,18)))
#define TSB_ADB_REG02_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG02,12)))
#define TSB_ADB_REG02_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG02,13)))
#define TSB_ADB_REG02_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG02,14)))
#define TSB_ADB_REG02_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG02,16)))
#define TSB_ADB_REG02_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG02,17)))
#define TSB_ADB_REG02_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG02,18)))
#define TSB_ADB_REG03_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG03,12)))
#define TSB_ADB_REG03_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG03,13)))
#define TSB_ADB_REG03_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG03,14)))
#define TSB_ADB_REG03_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG03,16)))
#define TSB_ADB_REG03_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG03,17)))
#define TSB_ADB_REG03_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG03,18)))
#define TSB_ADB_REG04_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG04,12)))
#define TSB_ADB_REG04_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG04,13)))
#define TSB_ADB_REG04_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG04,14)))
#define TSB_ADB_REG04_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG04,16)))
#define TSB_ADB_REG04_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG04,17)))
#define TSB_ADB_REG04_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG04,18)))
#define TSB_ADB_REG05_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG05,12)))
#define TSB_ADB_REG05_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG05,13)))
#define TSB_ADB_REG05_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG05,14)))
#define TSB_ADB_REG05_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG05,16)))
#define TSB_ADB_REG05_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG05,17)))
#define TSB_ADB_REG05_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG05,18)))
#define TSB_ADB_REG06_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG06,12)))
#define TSB_ADB_REG06_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG06,13)))
#define TSB_ADB_REG06_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG06,14)))
#define TSB_ADB_REG06_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG06,16)))
#define TSB_ADB_REG06_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG06,17)))
#define TSB_ADB_REG06_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG06,18)))
#define TSB_ADB_REG07_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG07,12)))
#define TSB_ADB_REG07_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG07,13)))
#define TSB_ADB_REG07_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG07,14)))
#define TSB_ADB_REG07_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG07,16)))
#define TSB_ADB_REG07_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG07,17)))
#define TSB_ADB_REG07_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG07,18)))
#define TSB_ADB_REGSP_ADSPRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REGSP,12)))
#define TSB_ADB_REGSP_ADOVRSPF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REGSP,13)))
#define TSB_ADB_REGSP_ADSPRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REGSP,16)))
#define TSB_ADB_REGSP_ADOVRSPF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REGSP,17)))
#define TSB_ADB_CREG_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->CREG,12)))
#define TSB_ADB_CREG_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->CREG,13)))
#define TSB_ADB_CREG_INVALID                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->CREG,14)))
#define TSB_ADB_CREG_ADRF_MR                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->CREG,16)))
#define TSB_ADB_CREG_ADOVRF_MR                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->CREG,17)))
#define TSB_ADB_CREG_INVALID_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->CREG,18)))

#define TSB_ADC_MOD0_ADS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_ADC->MOD0,0)))
#define TSB_ADC_MOD0_HPADS                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_ADC->MOD0,1)))
#define TSB_ADC_MOD1_ADHWE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->MOD1,0)))
#define TSB_ADC_MOD1_HPADHWE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->MOD1,2)))
#define TSB_ADC_MOD1_RCUT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->MOD1,5)))
#define TSB_ADC_MOD1_I2AD                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->MOD1,6)))
#define TSB_ADC_MOD1_DACON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->MOD1,7)))
#define TSB_ADC_MOD3_SCAN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->MOD3,0)))
#define TSB_ADC_MOD3_REPEAT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->MOD3,1)))
#define TSB_ADC_MOD3_AUTO                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->MOD3,2)))
#define TSB_ADC_MOD5_ADBF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->MOD5,0)))
#define TSB_ADC_MOD5_EOCF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->MOD5,1)))
#define TSB_ADC_MOD5_HPADBF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->MOD5,2)))
#define TSB_ADC_MOD5_HPEOCF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->MOD5,3)))
#define TSB_ADC_CMPCR0_ADBIG0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CMPCR0,4)))
#define TSB_ADC_CMPCR0_CMPCOND0                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CMPCR0,5)))
#define TSB_ADC_CMPCR0_CMP0EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CMPCR0,7)))
#define TSB_ADC_CMPCR1_ADBIG1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CMPCR1,4)))
#define TSB_ADC_CMPCR1_CMPCOND1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CMPCR1,5)))
#define TSB_ADC_CMPCR1_CMP1EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CMPCR1,7)))
#define TSB_ADC_REG00_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG00,12)))
#define TSB_ADC_REG00_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG00,13)))
#define TSB_ADC_REG00_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG00,14)))
#define TSB_ADC_REG00_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG00,16)))
#define TSB_ADC_REG00_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG00,17)))
#define TSB_ADC_REG00_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG00,18)))
#define TSB_ADC_REG01_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG01,12)))
#define TSB_ADC_REG01_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG01,13)))
#define TSB_ADC_REG01_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG01,14)))
#define TSB_ADC_REG01_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG01,16)))
#define TSB_ADC_REG01_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG01,17)))
#define TSB_ADC_REG01_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG01,18)))
#define TSB_ADC_REG02_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG02,12)))
#define TSB_ADC_REG02_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG02,13)))
#define TSB_ADC_REG02_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG02,14)))
#define TSB_ADC_REG02_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG02,16)))
#define TSB_ADC_REG02_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG02,17)))
#define TSB_ADC_REG02_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG02,18)))
#define TSB_ADC_REG03_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG03,12)))
#define TSB_ADC_REG03_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG03,13)))
#define TSB_ADC_REG03_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG03,14)))
#define TSB_ADC_REG03_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG03,16)))
#define TSB_ADC_REG03_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG03,17)))
#define TSB_ADC_REG03_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG03,18)))
#define TSB_ADC_REG04_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG04,12)))
#define TSB_ADC_REG04_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG04,13)))
#define TSB_ADC_REG04_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG04,14)))
#define TSB_ADC_REG04_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG04,16)))
#define TSB_ADC_REG04_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG04,17)))
#define TSB_ADC_REG04_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG04,18)))
#define TSB_ADC_REG05_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG05,12)))
#define TSB_ADC_REG05_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG05,13)))
#define TSB_ADC_REG05_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG05,14)))
#define TSB_ADC_REG05_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG05,16)))
#define TSB_ADC_REG05_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG05,17)))
#define TSB_ADC_REG05_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG05,18)))
#define TSB_ADC_REG06_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG06,12)))
#define TSB_ADC_REG06_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG06,13)))
#define TSB_ADC_REG06_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG06,14)))
#define TSB_ADC_REG06_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG06,16)))
#define TSB_ADC_REG06_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG06,17)))
#define TSB_ADC_REG06_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG06,18)))
#define TSB_ADC_REG07_ADRF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG07,12)))
#define TSB_ADC_REG07_ADOVRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG07,13)))
#define TSB_ADC_REG07_INVALID                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG07,14)))
#define TSB_ADC_REG07_ADRF_MR                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG07,16)))
#define TSB_ADC_REG07_ADOVRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG07,17)))
#define TSB_ADC_REG07_INVALID_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG07,18)))
#define TSB_ADC_REGSP_ADSPRF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REGSP,12)))
#define TSB_ADC_REGSP_ADOVRSPF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REGSP,13)))
#define TSB_ADC_REGSP_ADSPRF_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REGSP,16)))
#define TSB_ADC_REGSP_ADOVRSPF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REGSP,17)))
#define TSB_ADC_CREG_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->CREG,12)))
#define TSB_ADC_CREG_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->CREG,13)))
#define TSB_ADC_CREG_INVALID                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->CREG,14)))
#define TSB_ADC_CREG_ADRF_MR                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->CREG,16)))
#define TSB_ADC_CREG_ADOVRF_MR                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->CREG,17)))
#define TSB_ADC_CREG_INVALID_MR                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->CREG,18)))


/* 12-bit AD converter(UnitB) Mirror */
#define TSB_ADB_PSC_REG00_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG00,12)))
#define TSB_ADB_PSC_REG00_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG00,13)))
#define TSB_ADB_PSC_REG00_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG00,14)))
#define TSB_ADB_PSC_REG00_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG00,16)))
#define TSB_ADB_PSC_REG00_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG00,17)))
#define TSB_ADB_PSC_REG00_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG00,18)))
#define TSB_ADB_PSC_REG01_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG01,12)))
#define TSB_ADB_PSC_REG01_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG01,13)))
#define TSB_ADB_PSC_REG01_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG01,14)))
#define TSB_ADB_PSC_REG01_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG01,16)))
#define TSB_ADB_PSC_REG01_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG01,17)))
#define TSB_ADB_PSC_REG01_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG01,18)))
#define TSB_ADB_PSC_REG02_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG02,12)))
#define TSB_ADB_PSC_REG02_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG02,13)))
#define TSB_ADB_PSC_REG02_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG02,14)))
#define TSB_ADB_PSC_REG02_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG02,16)))
#define TSB_ADB_PSC_REG02_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG02,17)))
#define TSB_ADB_PSC_REG02_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG02,18)))
#define TSB_ADB_PSC_REG03_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG03,12)))
#define TSB_ADB_PSC_REG03_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG03,13)))
#define TSB_ADB_PSC_REG03_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG03,14)))
#define TSB_ADB_PSC_REG03_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG03,16)))
#define TSB_ADB_PSC_REG03_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG03,17)))
#define TSB_ADB_PSC_REG03_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG03,18)))
#define TSB_ADB_PSC_REG04_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG04,12)))
#define TSB_ADB_PSC_REG04_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG04,13)))
#define TSB_ADB_PSC_REG04_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG04,14)))
#define TSB_ADB_PSC_REG04_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG04,16)))
#define TSB_ADB_PSC_REG04_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG04,17)))
#define TSB_ADB_PSC_REG04_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG04,18)))
#define TSB_ADB_PSC_REG05_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG05,12)))
#define TSB_ADB_PSC_REG05_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG05,13)))
#define TSB_ADB_PSC_REG05_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG05,14)))
#define TSB_ADB_PSC_REG05_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG05,16)))
#define TSB_ADB_PSC_REG05_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG05,17)))
#define TSB_ADB_PSC_REG05_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG05,18)))
#define TSB_ADB_PSC_REG06_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG06,12)))
#define TSB_ADB_PSC_REG06_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG06,13)))
#define TSB_ADB_PSC_REG06_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG06,14)))
#define TSB_ADB_PSC_REG06_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG06,16)))
#define TSB_ADB_PSC_REG06_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG06,17)))
#define TSB_ADB_PSC_REG06_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG06,18)))
#define TSB_ADB_PSC_REG07_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG07,12)))
#define TSB_ADB_PSC_REG07_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG07,13)))
#define TSB_ADB_PSC_REG07_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG07,14)))
#define TSB_ADB_PSC_REG07_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG07,16)))
#define TSB_ADB_PSC_REG07_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG07,17)))
#define TSB_ADB_PSC_REG07_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REG07,18)))
#define TSB_ADB_PSC_REGSP_ADSPRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REGSP,12)))
#define TSB_ADB_PSC_REGSP_ADOVRSPF                (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REGSP,13)))
#define TSB_ADB_PSC_REGSP_ADSPRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REGSP,16)))
#define TSB_ADB_PSC_REGSP_ADOVRSPF_MR             (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->REGSP,17)))
#define TSB_ADB_PSC_CREG_ADRF                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->CREG,12)))
#define TSB_ADB_PSC_CREG_ADOVRF                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->CREG,13)))
#define TSB_ADB_PSC_CREG_INVALID                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->CREG,14)))
#define TSB_ADB_PSC_CREG_ADRF_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->CREG,16)))
#define TSB_ADB_PSC_CREG_ADOVRF_MR                (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->CREG,17)))
#define TSB_ADB_PSC_CREG_INVALID_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB_PSC->CREG,18)))


/* 12-bit AD converter(UnitC) Mirror */
#define TSB_ADC_PSC_REG00_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG00,12)))
#define TSB_ADC_PSC_REG00_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG00,13)))
#define TSB_ADC_PSC_REG00_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG00,14)))
#define TSB_ADC_PSC_REG00_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG00,16)))
#define TSB_ADC_PSC_REG00_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG00,17)))
#define TSB_ADC_PSC_REG00_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG00,18)))
#define TSB_ADC_PSC_REG01_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG01,12)))
#define TSB_ADC_PSC_REG01_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG01,13)))
#define TSB_ADC_PSC_REG01_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG01,14)))
#define TSB_ADC_PSC_REG01_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG01,16)))
#define TSB_ADC_PSC_REG01_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG01,17)))
#define TSB_ADC_PSC_REG01_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG01,18)))
#define TSB_ADC_PSC_REG02_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG02,12)))
#define TSB_ADC_PSC_REG02_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG02,13)))
#define TSB_ADC_PSC_REG02_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG02,14)))
#define TSB_ADC_PSC_REG02_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG02,16)))
#define TSB_ADC_PSC_REG02_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG02,17)))
#define TSB_ADC_PSC_REG02_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG02,18)))
#define TSB_ADC_PSC_REG03_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG03,12)))
#define TSB_ADC_PSC_REG03_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG03,13)))
#define TSB_ADC_PSC_REG03_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG03,14)))
#define TSB_ADC_PSC_REG03_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG03,16)))
#define TSB_ADC_PSC_REG03_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG03,17)))
#define TSB_ADC_PSC_REG03_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG03,18)))
#define TSB_ADC_PSC_REG04_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG04,12)))
#define TSB_ADC_PSC_REG04_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG04,13)))
#define TSB_ADC_PSC_REG04_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG04,14)))
#define TSB_ADC_PSC_REG04_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG04,16)))
#define TSB_ADC_PSC_REG04_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG04,17)))
#define TSB_ADC_PSC_REG04_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG04,18)))
#define TSB_ADC_PSC_REG05_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG05,12)))
#define TSB_ADC_PSC_REG05_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG05,13)))
#define TSB_ADC_PSC_REG05_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG05,14)))
#define TSB_ADC_PSC_REG05_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG05,16)))
#define TSB_ADC_PSC_REG05_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG05,17)))
#define TSB_ADC_PSC_REG05_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG05,18)))
#define TSB_ADC_PSC_REG06_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG06,12)))
#define TSB_ADC_PSC_REG06_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG06,13)))
#define TSB_ADC_PSC_REG06_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG06,14)))
#define TSB_ADC_PSC_REG06_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG06,16)))
#define TSB_ADC_PSC_REG06_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG06,17)))
#define TSB_ADC_PSC_REG06_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG06,18)))
#define TSB_ADC_PSC_REG07_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG07,12)))
#define TSB_ADC_PSC_REG07_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG07,13)))
#define TSB_ADC_PSC_REG07_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG07,14)))
#define TSB_ADC_PSC_REG07_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG07,16)))
#define TSB_ADC_PSC_REG07_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG07,17)))
#define TSB_ADC_PSC_REG07_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REG07,18)))
#define TSB_ADC_PSC_REGSP_ADSPRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REGSP,12)))
#define TSB_ADC_PSC_REGSP_ADOVRSPF                (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REGSP,13)))
#define TSB_ADC_PSC_REGSP_ADSPRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REGSP,16)))
#define TSB_ADC_PSC_REGSP_ADOVRSPF_MR             (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->REGSP,17)))
#define TSB_ADC_PSC_CREG_ADRF                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->CREG,12)))
#define TSB_ADC_PSC_CREG_ADOVRF                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->CREG,13)))
#define TSB_ADC_PSC_CREG_INVALID                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->CREG,14)))
#define TSB_ADC_PSC_CREG_ADRF_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->CREG,16)))
#define TSB_ADC_PSC_CREG_ADOVRF_MR                (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->CREG,17)))
#define TSB_ADC_PSC_CREG_INVALID_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC_PSC->CREG,18)))


/* 12-bit AD converter(UnitA) Mirror */
#define TSB_ADA_PSC_REG00_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG00,12)))
#define TSB_ADA_PSC_REG00_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG00,13)))
#define TSB_ADA_PSC_REG00_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG00,14)))
#define TSB_ADA_PSC_REG00_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG00,16)))
#define TSB_ADA_PSC_REG00_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG00,17)))
#define TSB_ADA_PSC_REG00_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG00,18)))
#define TSB_ADA_PSC_REG01_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG01,12)))
#define TSB_ADA_PSC_REG01_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG01,13)))
#define TSB_ADA_PSC_REG01_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG01,14)))
#define TSB_ADA_PSC_REG01_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG01,16)))
#define TSB_ADA_PSC_REG01_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG01,17)))
#define TSB_ADA_PSC_REG01_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG01,18)))
#define TSB_ADA_PSC_REG02_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG02,12)))
#define TSB_ADA_PSC_REG02_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG02,13)))
#define TSB_ADA_PSC_REG02_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG02,14)))
#define TSB_ADA_PSC_REG02_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG02,16)))
#define TSB_ADA_PSC_REG02_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG02,17)))
#define TSB_ADA_PSC_REG02_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG02,18)))
#define TSB_ADA_PSC_REG03_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG03,12)))
#define TSB_ADA_PSC_REG03_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG03,13)))
#define TSB_ADA_PSC_REG03_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG03,14)))
#define TSB_ADA_PSC_REG03_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG03,16)))
#define TSB_ADA_PSC_REG03_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG03,17)))
#define TSB_ADA_PSC_REG03_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG03,18)))
#define TSB_ADA_PSC_REG04_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG04,12)))
#define TSB_ADA_PSC_REG04_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG04,13)))
#define TSB_ADA_PSC_REG04_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG04,14)))
#define TSB_ADA_PSC_REG04_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG04,16)))
#define TSB_ADA_PSC_REG04_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG04,17)))
#define TSB_ADA_PSC_REG04_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG04,18)))
#define TSB_ADA_PSC_REG05_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG05,12)))
#define TSB_ADA_PSC_REG05_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG05,13)))
#define TSB_ADA_PSC_REG05_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG05,14)))
#define TSB_ADA_PSC_REG05_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG05,16)))
#define TSB_ADA_PSC_REG05_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG05,17)))
#define TSB_ADA_PSC_REG05_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG05,18)))
#define TSB_ADA_PSC_REG06_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG06,12)))
#define TSB_ADA_PSC_REG06_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG06,13)))
#define TSB_ADA_PSC_REG06_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG06,14)))
#define TSB_ADA_PSC_REG06_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG06,16)))
#define TSB_ADA_PSC_REG06_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG06,17)))
#define TSB_ADA_PSC_REG06_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG06,18)))
#define TSB_ADA_PSC_REG07_ADRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG07,12)))
#define TSB_ADA_PSC_REG07_ADOVRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG07,13)))
#define TSB_ADA_PSC_REG07_INVALID                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG07,14)))
#define TSB_ADA_PSC_REG07_ADRF_MR                 (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG07,16)))
#define TSB_ADA_PSC_REG07_ADOVRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG07,17)))
#define TSB_ADA_PSC_REG07_INVALID_MR              (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REG07,18)))
#define TSB_ADA_PSC_REGSP_ADSPRF                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REGSP,12)))
#define TSB_ADA_PSC_REGSP_ADOVRSPF                (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REGSP,13)))
#define TSB_ADA_PSC_REGSP_ADSPRF_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REGSP,16)))
#define TSB_ADA_PSC_REGSP_ADOVRSPF_MR             (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->REGSP,17)))
#define TSB_ADA_PSC_CREG_ADRF                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->CREG,12)))
#define TSB_ADA_PSC_CREG_ADOVRF                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->CREG,13)))
#define TSB_ADA_PSC_CREG_INVALID                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->CREG,14)))
#define TSB_ADA_PSC_CREG_ADRF_MR                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->CREG,16)))
#define TSB_ADA_PSC_CREG_ADOVRF_MR                (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->CREG,17)))
#define TSB_ADA_PSC_CREG_INVALID_MR               (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA_PSC->CREG,18)))


/* Timer D (Unit0 in BlockA) */
#define TSB_TDA0_RUN_TDRUN                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_TDA0->RUN,0)))
#define TSB_TDA0_CR_TDRDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA0->CR,2)))
#define TSB_TDA0_CR_TDMDPT00                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA0->CR,4)))
#define TSB_TDA0_CR_TDMDPT01                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA0->CR,8)))
#define TSB_TDA0_MOD_TDCLE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA0->MOD,4)))
#define TSB_TDA0_MOD_TDIV0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA0->MOD,6)))
#define TSB_TDA0_MOD_TDIV1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA0->MOD,7)))
#define TSB_TDA0_DMA_DMAEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA0->DMA,0)))
#define TSB_TDA0_HSWB0_OUTV0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA0->HSWB0,2)))
#define TSB_TDA0_HSWB1_OUTV1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA0->HSWB1,2)))
#define TSB_TDA0_HSW0_OUTV0                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_TDA0->HSW0,2)))
#define TSB_TDA0_HSW1_OUTV1                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_TDA0->HSW1,2)))


/* Timer D common (BlockA) */
#define TSB_TDA_BCR_TDSFT00                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->BCR,0)))
#define TSB_TDA_BCR_TDSFT01                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->BCR,1)))
#define TSB_TDA_BCR_TDSFT10                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->BCR,2)))
#define TSB_TDA_BCR_TDSFT11                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->BCR,3)))
#define TSB_TDA_BCR_PHSCHG                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->BCR,4)))
#define TSB_TDA_EN_TDHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->EN,5)))
#define TSB_TDA_EN_TDEN0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->EN,6)))
#define TSB_TDA_EN_TDEN1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->EN,7)))
#define TSB_TDA_CONF_TDI2TD0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->CONF,6)))
#define TSB_TDA_CONF_TDI2TD1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->CONF,7)))


/* Timer D (Unit1 in BlockA) */
#define TSB_TDA1_HSWB0_OUTV0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA1->HSWB0,2)))
#define TSB_TDA1_HSWB1_OUTV1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA1->HSWB1,2)))
#define TSB_TDA1_RUN_TDRUN                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_TDA1->RUN,0)))
#define TSB_TDA1_CR_TDRDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA1->CR,2)))
#define TSB_TDA1_CR_TDMDPT10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA1->CR,4)))
#define TSB_TDA1_CR_TDMDPT11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA1->CR,8)))
#define TSB_TDA1_MOD_TDCLE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA1->MOD,4)))
#define TSB_TDA1_MOD_TDIV0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA1->MOD,6)))
#define TSB_TDA1_MOD_TDIV1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA1->MOD,7)))
#define TSB_TDA1_DMA_DMAEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA1->DMA,0)))
#define TSB_TDA1_HSW0_OUTV0                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_TDA1->HSW0,2)))
#define TSB_TDA1_HSW1_OUTV1                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_TDA1->HSW1,2)))


/* Timer D (Unit0 in BlockB) */
#define TSB_TDB0_RUN_TDRUN                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_TDB0->RUN,0)))
#define TSB_TDB0_CR_TDRDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB0->CR,2)))
#define TSB_TDB0_CR_TDMDPT00                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB0->CR,4)))
#define TSB_TDB0_CR_TDMDPT01                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB0->CR,8)))
#define TSB_TDB0_MOD_TDCLE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB0->MOD,4)))
#define TSB_TDB0_MOD_TDIV0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB0->MOD,6)))
#define TSB_TDB0_MOD_TDIV1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB0->MOD,7)))
#define TSB_TDB0_DMA_DMAEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB0->DMA,0)))
#define TSB_TDB0_HSWB0_OUTV0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB0->HSWB0,2)))
#define TSB_TDB0_HSWB1_OUTV1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB0->HSWB1,2)))
#define TSB_TDB0_HSW0_OUTV0                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_TDB0->HSW0,2)))
#define TSB_TDB0_HSW1_OUTV1                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_TDB0->HSW1,2)))


/* Timer D common (BlockB) */
#define TSB_TDB_BCR_TDSFT00                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->BCR,0)))
#define TSB_TDB_BCR_TDSFT01                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->BCR,1)))
#define TSB_TDB_BCR_TDSFT10                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->BCR,2)))
#define TSB_TDB_BCR_TDSFT11                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->BCR,3)))
#define TSB_TDB_BCR_PHSCHG                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->BCR,4)))
#define TSB_TDB_EN_TDHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->EN,5)))
#define TSB_TDB_EN_TDEN0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->EN,6)))
#define TSB_TDB_EN_TDEN1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->EN,7)))
#define TSB_TDB_CONF_TDI2TD0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->CONF,6)))
#define TSB_TDB_CONF_TDI2TD1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->CONF,7)))


/* Timer D (Unit1 in BlockB) */
#define TSB_TDB1_HSWB0_OUTV0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB1->HSWB0,2)))
#define TSB_TDB1_HSWB1_OUTV1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB1->HSWB1,2)))
#define TSB_TDB1_RUN_TDRUN                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_TDB1->RUN,0)))
#define TSB_TDB1_CR_TDRDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB1->CR,2)))
#define TSB_TDB1_CR_TDMDPT10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB1->CR,4)))
#define TSB_TDB1_CR_TDMDPT11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB1->CR,8)))
#define TSB_TDB1_MOD_TDCLE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB1->MOD,4)))
#define TSB_TDB1_MOD_TDIV0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB1->MOD,6)))
#define TSB_TDB1_MOD_TDIV1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB1->MOD,7)))
#define TSB_TDB1_DMA_DMAEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB1->DMA,0)))
#define TSB_TDB1_HSW0_OUTV0                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_TDB1->HSW0,2)))
#define TSB_TDB1_HSW1_OUTV1                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_TDB1->HSW1,2)))


/* Enhannced two aspect pulse input counter (EPHC) */
#define TSB_EPHC0_EN_EN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->EN,0)))
#define TSB_EPHC0_CNT_PBMOD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->CNT,10)))
#define TSB_EPHC0_CNT_PBDIR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->CNT,11)))
#define TSB_EPHC0_CNT_MA12                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->CNT,12)))
#define TSB_EPHC0_CNT_MA2DIR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->CNT,13)))
#define TSB_EPHC0_CNT_LWLMEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->CNT,18)))
#define TSB_EPHC0_CNT_UPLMEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->CNT,19)))
#define TSB_EPHC0_CNT_LOADLMT                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_EPHC0->CNT,20)))
#define TSB_EPHC0_IE_INTPCCP0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->IE,0)))
#define TSB_EPHC0_IE_INTPCCP1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->IE,1)))
#define TSB_EPHC0_IE_INTPCOVF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->IE,2)))
#define TSB_EPHC0_IE_INTPCUDF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->IE,3)))
#define TSB_EPHC0_IE_INTPCDT0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->IE,4)))
#define TSB_EPHC0_IE_INTPCDT1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->IE,5)))
#define TSB_EPHC0_IE_INTPCDT2                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->IE,6)))
#define TSB_EPHC0_IE_INTPCDT3                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->IE,7)))
#define TSB_EPHC0_IE_INTPCDIR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->IE,8)))
#define TSB_EPHC0_IE_INTPCUOVF                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->IE,9)))
#define TSB_EPHC0_IE_INTLWLMT                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->IE,10)))
#define TSB_EPHC0_IE_INTUPLMT                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->IE,11)))
#define TSB_EPHC0_FLG_CMP0F                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->FLG,0)))
#define TSB_EPHC0_FLG_CMP1F                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->FLG,1)))
#define TSB_EPHC0_FLG_OVFF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->FLG,2)))
#define TSB_EPHC0_FLG_UDFF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->FLG,3)))
#define TSB_EPHC0_FLG_SB0F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->FLG,4)))
#define TSB_EPHC0_FLG_SB1F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->FLG,5)))
#define TSB_EPHC0_FLG_SB2F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->FLG,6)))
#define TSB_EPHC0_FLG_SB3F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->FLG,7)))
#define TSB_EPHC0_FLG_DIRF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->FLG,8)))
#define TSB_EPHC0_FLG_LWLMT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->FLG,9)))
#define TSB_EPHC0_FLG_UPLMT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->FLG,10)))
#define TSB_EPHC0_ARUN_RUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->ARUN,0)))
#define TSB_EPHC0_ARUN_CLR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->ARUN,1)))
#define TSB_EPHC0_ADAT_PMF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC0->ADAT,30)))
#define TSB_EPHC0_ADAT_PHCDIRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC0->ADAT,31)))
#define TSB_EPHC0_BRUN_T24RUN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->BRUN,0)))
#define TSB_EPHC0_BDMA_DMADT0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->BDMA,0)))
#define TSB_EPHC0_BDMA_DMADT1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC0->BDMA,1)))
#define TSB_EPHC0_BCAP00_OVF00                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC0->BCAP00,24)))
#define TSB_EPHC0_BCAP10_OVF10                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC0->BCAP10,24)))
#define TSB_EPHC0_BCAP20_OVF20                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC0->BCAP20,24)))
#define TSB_EPHC0_BCAP30_OVF30                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC0->BCAP30,24)))

#define TSB_EPHC1_EN_EN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->EN,0)))
#define TSB_EPHC1_CNT_PBMOD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->CNT,10)))
#define TSB_EPHC1_CNT_PBDIR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->CNT,11)))
#define TSB_EPHC1_CNT_MA12                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->CNT,12)))
#define TSB_EPHC1_CNT_MA2DIR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->CNT,13)))
#define TSB_EPHC1_CNT_LWLMEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->CNT,18)))
#define TSB_EPHC1_CNT_UPLMEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->CNT,19)))
#define TSB_EPHC1_CNT_LOADLMT                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_EPHC1->CNT,20)))
#define TSB_EPHC1_IE_INTPCCP0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->IE,0)))
#define TSB_EPHC1_IE_INTPCCP1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->IE,1)))
#define TSB_EPHC1_IE_INTPCOVF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->IE,2)))
#define TSB_EPHC1_IE_INTPCUDF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->IE,3)))
#define TSB_EPHC1_IE_INTPCDT0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->IE,4)))
#define TSB_EPHC1_IE_INTPCDT1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->IE,5)))
#define TSB_EPHC1_IE_INTPCDT2                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->IE,6)))
#define TSB_EPHC1_IE_INTPCDT3                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->IE,7)))
#define TSB_EPHC1_IE_INTPCDIR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->IE,8)))
#define TSB_EPHC1_IE_INTPCUOVF                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->IE,9)))
#define TSB_EPHC1_IE_INTLWLMT                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->IE,10)))
#define TSB_EPHC1_IE_INTUPLMT                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->IE,11)))
#define TSB_EPHC1_FLG_CMP0F                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->FLG,0)))
#define TSB_EPHC1_FLG_CMP1F                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->FLG,1)))
#define TSB_EPHC1_FLG_OVFF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->FLG,2)))
#define TSB_EPHC1_FLG_UDFF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->FLG,3)))
#define TSB_EPHC1_FLG_SB0F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->FLG,4)))
#define TSB_EPHC1_FLG_SB1F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->FLG,5)))
#define TSB_EPHC1_FLG_SB2F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->FLG,6)))
#define TSB_EPHC1_FLG_SB3F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->FLG,7)))
#define TSB_EPHC1_FLG_DIRF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->FLG,8)))
#define TSB_EPHC1_FLG_LWLMT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->FLG,9)))
#define TSB_EPHC1_FLG_UPLMT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->FLG,10)))
#define TSB_EPHC1_ARUN_RUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->ARUN,0)))
#define TSB_EPHC1_ARUN_CLR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->ARUN,1)))
#define TSB_EPHC1_ADAT_PMF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC1->ADAT,30)))
#define TSB_EPHC1_ADAT_PHCDIRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC1->ADAT,31)))
#define TSB_EPHC1_BRUN_T24RUN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->BRUN,0)))
#define TSB_EPHC1_BDMA_DMADT0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->BDMA,0)))
#define TSB_EPHC1_BDMA_DMADT1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC1->BDMA,1)))
#define TSB_EPHC1_BCAP00_OVF00                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC1->BCAP00,24)))
#define TSB_EPHC1_BCAP10_OVF10                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC1->BCAP10,24)))
#define TSB_EPHC1_BCAP20_OVF20                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC1->BCAP20,24)))
#define TSB_EPHC1_BCAP30_OVF30                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC1->BCAP30,24)))

#define TSB_EPHC2_EN_EN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->EN,0)))
#define TSB_EPHC2_CNT_PBMOD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->CNT,10)))
#define TSB_EPHC2_CNT_PBDIR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->CNT,11)))
#define TSB_EPHC2_CNT_MA12                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->CNT,12)))
#define TSB_EPHC2_CNT_MA2DIR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->CNT,13)))
#define TSB_EPHC2_CNT_LWLMEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->CNT,18)))
#define TSB_EPHC2_CNT_UPLMEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->CNT,19)))
#define TSB_EPHC2_CNT_LOADLMT                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_EPHC2->CNT,20)))
#define TSB_EPHC2_IE_INTPCCP0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->IE,0)))
#define TSB_EPHC2_IE_INTPCCP1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->IE,1)))
#define TSB_EPHC2_IE_INTPCOVF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->IE,2)))
#define TSB_EPHC2_IE_INTPCUDF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->IE,3)))
#define TSB_EPHC2_IE_INTPCDT0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->IE,4)))
#define TSB_EPHC2_IE_INTPCDT1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->IE,5)))
#define TSB_EPHC2_IE_INTPCDT2                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->IE,6)))
#define TSB_EPHC2_IE_INTPCDT3                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->IE,7)))
#define TSB_EPHC2_IE_INTPCDIR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->IE,8)))
#define TSB_EPHC2_IE_INTPCUOVF                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->IE,9)))
#define TSB_EPHC2_IE_INTLWLMT                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->IE,10)))
#define TSB_EPHC2_IE_INTUPLMT                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->IE,11)))
#define TSB_EPHC2_FLG_CMP0F                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->FLG,0)))
#define TSB_EPHC2_FLG_CMP1F                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->FLG,1)))
#define TSB_EPHC2_FLG_OVFF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->FLG,2)))
#define TSB_EPHC2_FLG_UDFF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->FLG,3)))
#define TSB_EPHC2_FLG_SB0F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->FLG,4)))
#define TSB_EPHC2_FLG_SB1F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->FLG,5)))
#define TSB_EPHC2_FLG_SB2F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->FLG,6)))
#define TSB_EPHC2_FLG_SB3F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->FLG,7)))
#define TSB_EPHC2_FLG_DIRF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->FLG,8)))
#define TSB_EPHC2_FLG_LWLMT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->FLG,9)))
#define TSB_EPHC2_FLG_UPLMT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->FLG,10)))
#define TSB_EPHC2_ARUN_RUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->ARUN,0)))
#define TSB_EPHC2_ARUN_CLR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->ARUN,1)))
#define TSB_EPHC2_ADAT_PMF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC2->ADAT,30)))
#define TSB_EPHC2_ADAT_PHCDIRF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC2->ADAT,31)))
#define TSB_EPHC2_BRUN_T24RUN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->BRUN,0)))
#define TSB_EPHC2_BDMA_DMADT0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->BDMA,0)))
#define TSB_EPHC2_BDMA_DMADT1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EPHC2->BDMA,1)))
#define TSB_EPHC2_BCAP00_OVF00                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC2->BCAP00,24)))
#define TSB_EPHC2_BCAP10_OVF10                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC2->BCAP10,24)))
#define TSB_EPHC2_BCAP20_OVF20                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC2->BCAP20,24)))
#define TSB_EPHC2_BCAP30_OVF30                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC2->BCAP30,24)))


/* Enhannced two aspect pulse input counter (EPHC) Mirror */
#define TSB_EPHC0_PSC_ADAT_PMF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC0_PSC->ADAT,30)))
#define TSB_EPHC0_PSC_ADAT_PHCDIRF                (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC0_PSC->ADAT,31)))
#define TSB_EPHC0_PSC_BCAP00_OVF00                (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC0_PSC->BCAP00,24)))
#define TSB_EPHC0_PSC_BCAP10_OVF10                (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC0_PSC->BCAP10,24)))
#define TSB_EPHC0_PSC_BCAP20_OVF20                (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC0_PSC->BCAP20,24)))
#define TSB_EPHC0_PSC_BCAP30_OVF30                (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC0_PSC->BCAP30,24)))


/* Enhannced two aspect pulse input counter (EPHC) Mirror */
#define TSB_EPHC2_PSC_ADAT_PMF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC2_PSC->ADAT,30)))
#define TSB_EPHC2_PSC_ADAT_PHCDIRF                (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC2_PSC->ADAT,31)))
#define TSB_EPHC2_PSC_BCAP00_OVF00                (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC2_PSC->BCAP00,24)))
#define TSB_EPHC2_PSC_BCAP10_OVF10                (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC2_PSC->BCAP10,24)))
#define TSB_EPHC2_PSC_BCAP20_OVF20                (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC2_PSC->BCAP20,24)))
#define TSB_EPHC2_PSC_BCAP30_OVF30                (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC2_PSC->BCAP30,24)))


/* Enhannced two aspect pulse input counter (EPHC) Mirror */
#define TSB_EPHC1_PSC_ADAT_PMF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC1_PSC->ADAT,30)))
#define TSB_EPHC1_PSC_ADAT_PHCDIRF                (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC1_PSC->ADAT,31)))
#define TSB_EPHC1_PSC_BCAP00_OVF00                (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC1_PSC->BCAP00,24)))
#define TSB_EPHC1_PSC_BCAP10_OVF10                (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC1_PSC->BCAP10,24)))
#define TSB_EPHC1_PSC_BCAP20_OVF20                (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC1_PSC->BCAP20,24)))
#define TSB_EPHC1_PSC_BCAP30_OVF30                (*((__I  uint32_t *)BITBAND_PERI(&TSB_EPHC1_PSC->BCAP30,24)))


/* Serial Interface (TSPI) */
#define TSB_TSPI3_CR0_TSPIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->CR0,0)))
#define TSB_TSPI3_CR1_CSSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->CR1,8)))
#define TSB_TSPI3_CR1_MSTR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->CR1,12)))
#define TSB_TSPI3_CR1_TSPIMS                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->CR1,13)))
#define TSB_TSPI3_CR1_TRXE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->CR1,14)))
#define TSB_TSPI3_CR2_DMARE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->CR2,0)))
#define TSB_TSPI3_CR2_DMATE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->CR2,1)))
#define TSB_TSPI3_CR2_INTERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->CR2,2)))
#define TSB_TSPI3_CR2_INTRXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->CR2,4)))
#define TSB_TSPI3_CR2_INTRXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->CR2,5)))
#define TSB_TSPI3_CR2_INTTXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->CR2,6)))
#define TSB_TSPI3_CR2_INTTXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->CR2,7)))
#define TSB_TSPI3_CR2_TXDEMP                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->CR2,21)))
#define TSB_TSPI3_CR3_RFFLLCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI3->CR3,0)))
#define TSB_TSPI3_CR3_TFEMPCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI3->CR3,1)))
#define TSB_TSPI3_FMTR0_CS0POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->FMTR0,8)))
#define TSB_TSPI3_FMTR0_CS1POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->FMTR0,9)))
#define TSB_TSPI3_FMTR0_CKPOL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->FMTR0,14)))
#define TSB_TSPI3_FMTR0_DIR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->FMTR0,31)))
#define TSB_TSPI3_FMTR1_VPM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->FMTR1,0)))
#define TSB_TSPI3_FMTR1_VPE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->FMTR1,1)))
#define TSB_TSPI3_SR_RFFLL                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI3->SR,4)))
#define TSB_TSPI3_SR_INTRXFF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->SR,5)))
#define TSB_TSPI3_SR_RXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->SR,6)))
#define TSB_TSPI3_SR_RXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI3->SR,7)))
#define TSB_TSPI3_SR_TFEMP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI3->SR,20)))
#define TSB_TSPI3_SR_INTTXFF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->SR,21)))
#define TSB_TSPI3_SR_TXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->SR,22)))
#define TSB_TSPI3_SR_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI3->SR,23)))
#define TSB_TSPI3_SR_TSPISUE                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI3->SR,31)))
#define TSB_TSPI3_ERR_VPERR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->ERR,9)))
#define TSB_TSPI3_ERR_OVRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->ERR,10)))
#define TSB_TSPI3_ERR_UDRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI3->ERR,11)))

#define TSB_TSPI4_CR0_TSPIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->CR0,0)))
#define TSB_TSPI4_CR1_CSSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->CR1,8)))
#define TSB_TSPI4_CR1_MSTR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->CR1,12)))
#define TSB_TSPI4_CR1_TSPIMS                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->CR1,13)))
#define TSB_TSPI4_CR1_TRXE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->CR1,14)))
#define TSB_TSPI4_CR2_DMARE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->CR2,0)))
#define TSB_TSPI4_CR2_DMATE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->CR2,1)))
#define TSB_TSPI4_CR2_INTERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->CR2,2)))
#define TSB_TSPI4_CR2_INTRXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->CR2,4)))
#define TSB_TSPI4_CR2_INTRXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->CR2,5)))
#define TSB_TSPI4_CR2_INTTXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->CR2,6)))
#define TSB_TSPI4_CR2_INTTXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->CR2,7)))
#define TSB_TSPI4_CR2_TXDEMP                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->CR2,21)))
#define TSB_TSPI4_CR3_RFFLLCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI4->CR3,0)))
#define TSB_TSPI4_CR3_TFEMPCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI4->CR3,1)))
#define TSB_TSPI4_FMTR0_CS0POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->FMTR0,8)))
#define TSB_TSPI4_FMTR0_CS1POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->FMTR0,9)))
#define TSB_TSPI4_FMTR0_CKPOL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->FMTR0,14)))
#define TSB_TSPI4_FMTR0_DIR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->FMTR0,31)))
#define TSB_TSPI4_FMTR1_VPM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->FMTR1,0)))
#define TSB_TSPI4_FMTR1_VPE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->FMTR1,1)))
#define TSB_TSPI4_SR_RFFLL                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI4->SR,4)))
#define TSB_TSPI4_SR_INTRXFF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->SR,5)))
#define TSB_TSPI4_SR_RXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->SR,6)))
#define TSB_TSPI4_SR_RXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI4->SR,7)))
#define TSB_TSPI4_SR_TFEMP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI4->SR,20)))
#define TSB_TSPI4_SR_INTTXFF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->SR,21)))
#define TSB_TSPI4_SR_TXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->SR,22)))
#define TSB_TSPI4_SR_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI4->SR,23)))
#define TSB_TSPI4_SR_TSPISUE                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI4->SR,31)))
#define TSB_TSPI4_ERR_VPERR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->ERR,9)))
#define TSB_TSPI4_ERR_OVRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->ERR,10)))
#define TSB_TSPI4_ERR_UDRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI4->ERR,11)))

#define TSB_TSPI1_CR0_TSPIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR0,0)))
#define TSB_TSPI1_CR1_CSSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR1,8)))
#define TSB_TSPI1_CR1_MSTR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR1,12)))
#define TSB_TSPI1_CR1_TSPIMS                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR1,13)))
#define TSB_TSPI1_CR1_TRXE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR1,14)))
#define TSB_TSPI1_CR2_DMARE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,0)))
#define TSB_TSPI1_CR2_DMATE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,1)))
#define TSB_TSPI1_CR2_INTERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,2)))
#define TSB_TSPI1_CR2_INTRXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,4)))
#define TSB_TSPI1_CR2_INTRXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,5)))
#define TSB_TSPI1_CR2_INTTXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,6)))
#define TSB_TSPI1_CR2_INTTXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,7)))
#define TSB_TSPI1_CR2_TXDEMP                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,21)))
#define TSB_TSPI1_CR3_RFFLLCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR3,0)))
#define TSB_TSPI1_CR3_TFEMPCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR3,1)))
#define TSB_TSPI1_FMTR0_CS0POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->FMTR0,8)))
#define TSB_TSPI1_FMTR0_CS1POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->FMTR0,9)))
#define TSB_TSPI1_FMTR0_CKPOL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->FMTR0,14)))
#define TSB_TSPI1_FMTR0_DIR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->FMTR0,31)))
#define TSB_TSPI1_FMTR1_VPM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->FMTR1,0)))
#define TSB_TSPI1_FMTR1_VPE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->FMTR1,1)))
#define TSB_TSPI1_SR_RFFLL                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,4)))
#define TSB_TSPI1_SR_INTRXFF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,5)))
#define TSB_TSPI1_SR_RXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,6)))
#define TSB_TSPI1_SR_RXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,7)))
#define TSB_TSPI1_SR_TFEMP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,20)))
#define TSB_TSPI1_SR_INTTXFF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,21)))
#define TSB_TSPI1_SR_TXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,22)))
#define TSB_TSPI1_SR_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,23)))
#define TSB_TSPI1_SR_TSPISUE                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,31)))
#define TSB_TSPI1_ERR_VPERR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->ERR,9)))
#define TSB_TSPI1_ERR_OVRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->ERR,10)))
#define TSB_TSPI1_ERR_UDRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->ERR,11)))

#define TSB_TSPI2_CR0_TSPIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR0,0)))
#define TSB_TSPI2_CR1_CSSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR1,8)))
#define TSB_TSPI2_CR1_MSTR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR1,12)))
#define TSB_TSPI2_CR1_TSPIMS                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR1,13)))
#define TSB_TSPI2_CR1_TRXE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR1,14)))
#define TSB_TSPI2_CR2_DMARE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,0)))
#define TSB_TSPI2_CR2_DMATE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,1)))
#define TSB_TSPI2_CR2_INTERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,2)))
#define TSB_TSPI2_CR2_INTRXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,4)))
#define TSB_TSPI2_CR2_INTRXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,5)))
#define TSB_TSPI2_CR2_INTTXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,6)))
#define TSB_TSPI2_CR2_INTTXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,7)))
#define TSB_TSPI2_CR2_TXDEMP                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,21)))
#define TSB_TSPI2_CR3_RFFLLCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR3,0)))
#define TSB_TSPI2_CR3_TFEMPCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR3,1)))
#define TSB_TSPI2_FMTR0_CS0POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->FMTR0,8)))
#define TSB_TSPI2_FMTR0_CS1POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->FMTR0,9)))
#define TSB_TSPI2_FMTR0_CKPOL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->FMTR0,14)))
#define TSB_TSPI2_FMTR0_DIR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->FMTR0,31)))
#define TSB_TSPI2_FMTR1_VPM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->FMTR1,0)))
#define TSB_TSPI2_FMTR1_VPE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->FMTR1,1)))
#define TSB_TSPI2_SR_RFFLL                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,4)))
#define TSB_TSPI2_SR_INTRXFF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,5)))
#define TSB_TSPI2_SR_RXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,6)))
#define TSB_TSPI2_SR_RXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,7)))
#define TSB_TSPI2_SR_TFEMP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,20)))
#define TSB_TSPI2_SR_INTTXFF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,21)))
#define TSB_TSPI2_SR_TXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,22)))
#define TSB_TSPI2_SR_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,23)))
#define TSB_TSPI2_SR_TSPISUE                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,31)))
#define TSB_TSPI2_ERR_VPERR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->ERR,9)))
#define TSB_TSPI2_ERR_OVRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->ERR,10)))
#define TSB_TSPI2_ERR_UDRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->ERR,11)))

#define TSB_TSPI0_CR0_TSPIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR0,0)))
#define TSB_TSPI0_CR1_CSSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR1,8)))
#define TSB_TSPI0_CR1_MSTR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR1,12)))
#define TSB_TSPI0_CR1_TSPIMS                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR1,13)))
#define TSB_TSPI0_CR1_TRXE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR1,14)))
#define TSB_TSPI0_CR2_DMARE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,0)))
#define TSB_TSPI0_CR2_DMATE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,1)))
#define TSB_TSPI0_CR2_INTERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,2)))
#define TSB_TSPI0_CR2_INTRXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,4)))
#define TSB_TSPI0_CR2_INTRXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,5)))
#define TSB_TSPI0_CR2_INTTXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,6)))
#define TSB_TSPI0_CR2_INTTXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,7)))
#define TSB_TSPI0_CR2_TXDEMP                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,21)))
#define TSB_TSPI0_CR3_RFFLLCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR3,0)))
#define TSB_TSPI0_CR3_TFEMPCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR3,1)))
#define TSB_TSPI0_FMTR0_CS0POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->FMTR0,8)))
#define TSB_TSPI0_FMTR0_CS1POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->FMTR0,9)))
#define TSB_TSPI0_FMTR0_CKPOL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->FMTR0,14)))
#define TSB_TSPI0_FMTR0_DIR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->FMTR0,31)))
#define TSB_TSPI0_FMTR1_VPM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->FMTR1,0)))
#define TSB_TSPI0_FMTR1_VPE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->FMTR1,1)))
#define TSB_TSPI0_SR_RFFLL                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,4)))
#define TSB_TSPI0_SR_INTRXFF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,5)))
#define TSB_TSPI0_SR_RXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,6)))
#define TSB_TSPI0_SR_RXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,7)))
#define TSB_TSPI0_SR_TFEMP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,20)))
#define TSB_TSPI0_SR_INTTXFF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,21)))
#define TSB_TSPI0_SR_TXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,22)))
#define TSB_TSPI0_SR_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,23)))
#define TSB_TSPI0_SR_TSPISUE                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,31)))
#define TSB_TSPI0_ERR_VPERR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->ERR,9)))
#define TSB_TSPI0_ERR_OVRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->ERR,10)))
#define TSB_TSPI0_ERR_UDRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->ERR,11)))


/* Port A */
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
#define TSB_PA_FR3_PA0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR3,0)))
#define TSB_PA_FR3_PA1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR3,1)))
#define TSB_PA_FR3_PA2F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR3,2)))
#define TSB_PA_FR3_PA3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR3,3)))
#define TSB_PA_FR3_PA4F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR3,4)))
#define TSB_PA_FR3_PA5F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR3,5)))
#define TSB_PA_FR3_PA6F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR3,6)))
#define TSB_PA_FR3_PA7F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR3,7)))
#define TSB_PA_PUP_PA0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,0)))
#define TSB_PA_PUP_PA1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,1)))
#define TSB_PA_PUP_PA2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,2)))
#define TSB_PA_PUP_PA3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,3)))
#define TSB_PA_PUP_PA4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,4)))
#define TSB_PA_PUP_PA5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,5)))
#define TSB_PA_PUP_PA6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,6)))
#define TSB_PA_PUP_PA7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,7)))
#define TSB_PA_IE_PA0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,0)))
#define TSB_PA_IE_PA1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,1)))
#define TSB_PA_IE_PA2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,2)))
#define TSB_PA_IE_PA3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,3)))
#define TSB_PA_IE_PA4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,4)))
#define TSB_PA_IE_PA5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,5)))
#define TSB_PA_IE_PA6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,6)))
#define TSB_PA_IE_PA7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,7)))


/* Port B */
#define TSB_PB_DATA_PB0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,0)))
#define TSB_PB_DATA_PB1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,1)))
#define TSB_PB_DATA_PB2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,2)))
#define TSB_PB_DATA_PB3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,3)))
#define TSB_PB_DATA_PB4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,4)))
#define TSB_PB_DATA_PB5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,5)))
#define TSB_PB_DATA_PB6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,6)))
#define TSB_PB_DATA_PB7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->DATA,7)))
#define TSB_PB_CR_PB0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,0)))
#define TSB_PB_CR_PB1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,1)))
#define TSB_PB_CR_PB2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,2)))
#define TSB_PB_CR_PB3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,3)))
#define TSB_PB_CR_PB4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,4)))
#define TSB_PB_CR_PB5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,5)))
#define TSB_PB_CR_PB6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,6)))
#define TSB_PB_CR_PB7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->CR,7)))
#define TSB_PB_FR1_PB0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,0)))
#define TSB_PB_FR1_PB1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,1)))
#define TSB_PB_FR1_PB2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,2)))
#define TSB_PB_FR1_PB3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,3)))
#define TSB_PB_FR1_PB4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,4)))
#define TSB_PB_FR1_PB5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,5)))
#define TSB_PB_FR1_PB6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,6)))
#define TSB_PB_FR1_PB7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR1,7)))
#define TSB_PB_FR2_PB0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,0)))
#define TSB_PB_FR2_PB1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,1)))
#define TSB_PB_FR2_PB2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,2)))
#define TSB_PB_FR2_PB3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,3)))
#define TSB_PB_FR2_PB4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,4)))
#define TSB_PB_FR2_PB5F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,5)))
#define TSB_PB_FR2_PB6F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,6)))
#define TSB_PB_FR2_PB7F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,7)))
#define TSB_PB_FR3_PB6F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR3,6)))
#define TSB_PB_FR4_PB3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,3)))
#define TSB_PB_FR4_PB4F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,4)))
#define TSB_PB_FR4_PB5F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,5)))
#define TSB_PB_FR4_PB6F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,6)))
#define TSB_PB_FR4_PB7F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,7)))
#define TSB_PB_FR5_PB3F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR5,3)))
#define TSB_PB_FR5_PB4F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR5,4)))
#define TSB_PB_FR5_PB5F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR5,5)))
#define TSB_PB_FR5_PB6F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR5,6)))
#define TSB_PB_FR5_PB7F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR5,7)))
#define TSB_PB_FR6_PB3F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR6,3)))
#define TSB_PB_FR6_PB4F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR6,4)))
#define TSB_PB_FR6_PB5F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR6,5)))
#define TSB_PB_FR6_PB6F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR6,6)))
#define TSB_PB_FR6_PB7F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR6,7)))
#define TSB_PB_FR7_PB3F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR7,3)))
#define TSB_PB_FR7_PB4F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR7,4)))
#define TSB_PB_FR7_PB5F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR7,5)))
#define TSB_PB_FR7_PB6F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR7,6)))
#define TSB_PB_FR7_PB7F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR7,7)))
#define TSB_PB_OD_PB0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,0)))
#define TSB_PB_OD_PB2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,2)))
#define TSB_PB_OD_PB6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,6)))
#define TSB_PB_OD_PB7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,7)))
#define TSB_PB_IE_PB0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,0)))
#define TSB_PB_IE_PB1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,1)))
#define TSB_PB_IE_PB2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,2)))
#define TSB_PB_IE_PB3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,3)))
#define TSB_PB_IE_PB4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,4)))
#define TSB_PB_IE_PB5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,5)))
#define TSB_PB_IE_PB6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,6)))
#define TSB_PB_IE_PB7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,7)))


/* Port C */
#define TSB_PC_DATA_PC0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->DATA,0)))
#define TSB_PC_DATA_PC1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->DATA,1)))
#define TSB_PC_DATA_PC2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->DATA,2)))
#define TSB_PC_DATA_PC3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->DATA,3)))
#define TSB_PC_DATA_PC4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->DATA,4)))
#define TSB_PC_DATA_PC5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->DATA,5)))
#define TSB_PC_DATA_PC6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->DATA,6)))
#define TSB_PC_DATA_PC7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->DATA,7)))
#define TSB_PC_CR_PC0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->CR,0)))
#define TSB_PC_CR_PC1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->CR,1)))
#define TSB_PC_CR_PC2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->CR,2)))
#define TSB_PC_CR_PC3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->CR,3)))
#define TSB_PC_CR_PC4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->CR,4)))
#define TSB_PC_CR_PC5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->CR,5)))
#define TSB_PC_CR_PC6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->CR,6)))
#define TSB_PC_CR_PC7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->CR,7)))
#define TSB_PC_FR1_PC0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,0)))
#define TSB_PC_FR1_PC1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,1)))
#define TSB_PC_FR1_PC2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,2)))
#define TSB_PC_FR1_PC3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,3)))
#define TSB_PC_FR1_PC4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,4)))
#define TSB_PC_FR1_PC6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,6)))
#define TSB_PC_FR1_PC7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,7)))
#define TSB_PC_FR2_PC3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,3)))
#define TSB_PC_FR2_PC4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,4)))
#define TSB_PC_FR2_PC5F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,5)))
#define TSB_PC_FR2_PC6F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,6)))
#define TSB_PC_FR2_PC7F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,7)))
#define TSB_PC_FR3_PC3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,3)))
#define TSB_PC_FR3_PC4F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,4)))
#define TSB_PC_FR3_PC5F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,5)))
#define TSB_PC_FR3_PC6F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,6)))
#define TSB_PC_FR3_PC7F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,7)))
#define TSB_PC_OD_PC0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,0)))
#define TSB_PC_OD_PC2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,2)))
#define TSB_PC_OD_PC3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,3)))
#define TSB_PC_OD_PC4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,4)))
#define TSB_PC_IE_PC0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,0)))
#define TSB_PC_IE_PC1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,1)))
#define TSB_PC_IE_PC2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,2)))
#define TSB_PC_IE_PC3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,3)))
#define TSB_PC_IE_PC4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,4)))
#define TSB_PC_IE_PC5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,5)))
#define TSB_PC_IE_PC6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,6)))
#define TSB_PC_IE_PC7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->IE,7)))


/* Port D */
#define TSB_PD_DATA_PD0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->DATA,0)))
#define TSB_PD_DATA_PD1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->DATA,1)))
#define TSB_PD_DATA_PD2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->DATA,2)))
#define TSB_PD_DATA_PD3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->DATA,3)))
#define TSB_PD_DATA_PD4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->DATA,4)))
#define TSB_PD_DATA_PD5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->DATA,5)))
#define TSB_PD_DATA_PD6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->DATA,6)))
#define TSB_PD_DATA_PD7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->DATA,7)))
#define TSB_PD_CR_PD0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,0)))
#define TSB_PD_CR_PD1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,1)))
#define TSB_PD_CR_PD2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,2)))
#define TSB_PD_CR_PD3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,3)))
#define TSB_PD_CR_PD4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,4)))
#define TSB_PD_CR_PD5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,5)))
#define TSB_PD_CR_PD6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,6)))
#define TSB_PD_CR_PD7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,7)))
#define TSB_PD_FR1_PD0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,0)))
#define TSB_PD_FR1_PD1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,1)))
#define TSB_PD_FR1_PD2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,2)))
#define TSB_PD_FR1_PD3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,3)))
#define TSB_PD_FR1_PD4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,4)))
#define TSB_PD_FR1_PD6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,6)))
#define TSB_PD_FR1_PD7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,7)))
#define TSB_PD_FR2_PD0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,0)))
#define TSB_PD_FR2_PD1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,1)))
#define TSB_PD_FR2_PD3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,3)))
#define TSB_PD_FR2_PD4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,4)))
#define TSB_PD_FR2_PD5F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,5)))
#define TSB_PD_FR2_PD6F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,6)))
#define TSB_PD_FR2_PD7F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,7)))
#define TSB_PD_FR3_PD0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR3,0)))
#define TSB_PD_FR3_PD1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR3,1)))
#define TSB_PD_FR3_PD2F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR3,2)))
#define TSB_PD_FR3_PD3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR3,3)))
#define TSB_PD_FR3_PD4F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR3,4)))
#define TSB_PD_FR3_PD5F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR3,5)))
#define TSB_PD_FR3_PD6F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR3,6)))
#define TSB_PD_FR3_PD7F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR3,7)))
#define TSB_PD_FR4_PD3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR4,3)))
#define TSB_PD_FR4_PD5F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR4,5)))
#define TSB_PD_FR4_PD6F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR4,6)))
#define TSB_PD_FR4_PD7F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR4,7)))
#define TSB_PD_FR5_PD5F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR5,5)))
#define TSB_PD_FR5_PD6F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR5,6)))
#define TSB_PD_FR5_PD7F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR5,7)))
#define TSB_PD_FR6_PD5F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR6,5)))
#define TSB_PD_FR6_PD6F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR6,6)))
#define TSB_PD_FR6_PD7F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR6,7)))
#define TSB_PD_FR7_PD5F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR7,5)))
#define TSB_PD_FR7_PD6F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR7,6)))
#define TSB_PD_FR7_PD7F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR7,7)))
#define TSB_PD_OD_PD0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,0)))
#define TSB_PD_OD_PD2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,2)))
#define TSB_PD_OD_PD3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,3)))
#define TSB_PD_OD_PD4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,4)))
#define TSB_PD_OD_PD6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,6)))
#define TSB_PD_OD_PD7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,7)))
#define TSB_PD_IE_PD0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,0)))
#define TSB_PD_IE_PD1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,1)))
#define TSB_PD_IE_PD2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,2)))
#define TSB_PD_IE_PD3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,3)))
#define TSB_PD_IE_PD4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,4)))
#define TSB_PD_IE_PD5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,5)))
#define TSB_PD_IE_PD6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,6)))
#define TSB_PD_IE_PD7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,7)))


/* Port E */
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
#define TSB_PE_FR1_PE0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,0)))
#define TSB_PE_FR1_PE1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,1)))
#define TSB_PE_FR1_PE2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,2)))
#define TSB_PE_FR1_PE3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,3)))
#define TSB_PE_FR1_PE4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,4)))
#define TSB_PE_FR1_PE5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,5)))
#define TSB_PE_FR1_PE6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,6)))
#define TSB_PE_FR1_PE7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,7)))
#define TSB_PE_FR2_PE0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR2,0)))
#define TSB_PE_FR2_PE1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR2,1)))
#define TSB_PE_FR2_PE2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR2,2)))
#define TSB_PE_FR2_PE3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR2,3)))
#define TSB_PE_FR2_PE4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR2,4)))
#define TSB_PE_FR3_PE0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR3,0)))
#define TSB_PE_FR3_PE1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR3,1)))
#define TSB_PE_FR3_PE2F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR3,2)))
#define TSB_PE_FR3_PE3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR3,3)))
#define TSB_PE_FR3_PE4F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR3,4)))
#define TSB_PE_FR4_PE0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,0)))
#define TSB_PE_FR4_PE1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,1)))
#define TSB_PE_FR4_PE2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,2)))
#define TSB_PE_FR4_PE3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,3)))
#define TSB_PE_OD_PE0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,0)))
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
#define TSB_PE_IE_PE0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,0)))
#define TSB_PE_IE_PE1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,1)))
#define TSB_PE_IE_PE2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,2)))
#define TSB_PE_IE_PE3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,3)))
#define TSB_PE_IE_PE4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,4)))
#define TSB_PE_IE_PE5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,5)))
#define TSB_PE_IE_PE6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,6)))
#define TSB_PE_IE_PE7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,7)))


/* Port F */
#define TSB_PF_DATA_PF0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,0)))
#define TSB_PF_DATA_PF1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,1)))
#define TSB_PF_DATA_PF2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,2)))
#define TSB_PF_DATA_PF3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,3)))
#define TSB_PF_DATA_PF4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,4)))
#define TSB_PF_DATA_PF5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,5)))
#define TSB_PF_DATA_PF6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,6)))
#define TSB_PF_DATA_PF7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,7)))
#define TSB_PF_PUP_PF0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,0)))
#define TSB_PF_PUP_PF1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,1)))
#define TSB_PF_PUP_PF2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,2)))
#define TSB_PF_PUP_PF3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,3)))
#define TSB_PF_PUP_PF4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,4)))
#define TSB_PF_PUP_PF5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,5)))
#define TSB_PF_PUP_PF6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,6)))
#define TSB_PF_PUP_PF7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,7)))
#define TSB_PF_IE_PF0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,0)))
#define TSB_PF_IE_PF1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,1)))
#define TSB_PF_IE_PF2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,2)))
#define TSB_PF_IE_PF3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,3)))
#define TSB_PF_IE_PF4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,4)))
#define TSB_PF_IE_PF5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,5)))
#define TSB_PF_IE_PF6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,6)))
#define TSB_PF_IE_PF7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,7)))


/* Port G */
#define TSB_PG_DATA_PG0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,0)))
#define TSB_PG_DATA_PG1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,1)))
#define TSB_PG_DATA_PG2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,2)))
#define TSB_PG_DATA_PG3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,3)))
#define TSB_PG_DATA_PG4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,4)))
#define TSB_PG_DATA_PG5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,5)))
#define TSB_PG_PUP_PG0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,0)))
#define TSB_PG_PUP_PG1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,1)))
#define TSB_PG_PUP_PG2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,2)))
#define TSB_PG_PUP_PG3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,3)))
#define TSB_PG_PUP_PG4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,4)))
#define TSB_PG_PUP_PG5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,5)))
#define TSB_PG_IE_PG0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,0)))
#define TSB_PG_IE_PG1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,1)))
#define TSB_PG_IE_PG2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,2)))
#define TSB_PG_IE_PG3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,3)))
#define TSB_PG_IE_PG4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,4)))
#define TSB_PG_IE_PG5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,5)))


/* Port H */
#define TSB_PH_DATA_PH0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,0)))
#define TSB_PH_DATA_PH1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,1)))
#define TSB_PH_DATA_PH2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,2)))
#define TSB_PH_DATA_PH3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,3)))
#define TSB_PH_PUP_PH0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,0)))
#define TSB_PH_PUP_PH1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,1)))
#define TSB_PH_PUP_PH2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,2)))
#define TSB_PH_PUP_PH3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,3)))
#define TSB_PH_IE_PH0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,0)))
#define TSB_PH_IE_PH1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,1)))
#define TSB_PH_IE_PH2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,2)))
#define TSB_PH_IE_PH3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,3)))


/* Port J */
#define TSB_PJ_DATA_PJ0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,0)))
#define TSB_PJ_DATA_PJ1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,1)))
#define TSB_PJ_DATA_PJ2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,2)))
#define TSB_PJ_DATA_PJ3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,3)))
#define TSB_PJ_DATA_PJ4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,4)))
#define TSB_PJ_DATA_PJ5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,5)))
#define TSB_PJ_CR_PJ0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,0)))
#define TSB_PJ_CR_PJ1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,1)))
#define TSB_PJ_CR_PJ2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,2)))
#define TSB_PJ_CR_PJ3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,3)))
#define TSB_PJ_CR_PJ4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,4)))
#define TSB_PJ_CR_PJ5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->CR,5)))
#define TSB_PJ_FR1_PJ0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->FR1,0)))
#define TSB_PJ_FR1_PJ1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->FR1,1)))
#define TSB_PJ_FR1_PJ2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->FR1,2)))
#define TSB_PJ_FR1_PJ3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->FR1,3)))
#define TSB_PJ_FR1_PJ4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->FR1,4)))
#define TSB_PJ_PUP_PJ0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,0)))
#define TSB_PJ_PUP_PJ2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,2)))
#define TSB_PJ_PUP_PJ3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,3)))
#define TSB_PJ_PUP_PJ4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,4)))
#define TSB_PJ_PUP_PJ5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PUP,5)))
#define TSB_PJ_PDN_PJ1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PDN,1)))
#define TSB_PJ_IE_PJ0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,0)))
#define TSB_PJ_IE_PJ1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,1)))
#define TSB_PJ_IE_PJ2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,2)))
#define TSB_PJ_IE_PJ3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,3)))
#define TSB_PJ_IE_PJ4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,4)))


/* Port K */
#define TSB_PK_DATA_PK0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,0)))
#define TSB_PK_DATA_PK1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,1)))
#define TSB_PK_DATA_PK2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,2)))
#define TSB_PK_DATA_PK3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,3)))
#define TSB_PK_DATA_PK4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,4)))
#define TSB_PK_DATA_PK5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,5)))
#define TSB_PK_DATA_PK6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,6)))
#define TSB_PK_DATA_PK7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,7)))
#define TSB_PK_CR_PK0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,0)))
#define TSB_PK_CR_PK1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,1)))
#define TSB_PK_CR_PK2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,2)))
#define TSB_PK_CR_PK3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,3)))
#define TSB_PK_CR_PK4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,4)))
#define TSB_PK_CR_PK5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,5)))
#define TSB_PK_CR_PK6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,6)))
#define TSB_PK_CR_PK7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,7)))
#define TSB_PK_FR1_PK0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR1,0)))
#define TSB_PK_FR1_PK1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR1,1)))
#define TSB_PK_FR1_PK2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR1,2)))
#define TSB_PK_FR1_PK3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR1,3)))
#define TSB_PK_FR1_PK4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR1,4)))
#define TSB_PK_FR1_PK5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR1,5)))
#define TSB_PK_FR1_PK6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR1,6)))
#define TSB_PK_FR1_PK7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR1,7)))
#define TSB_PK_FR2_PK0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR2,0)))
#define TSB_PK_FR2_PK1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR2,1)))
#define TSB_PK_FR2_PK2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR2,2)))
#define TSB_PK_FR2_PK3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR2,3)))
#define TSB_PK_FR3_PK0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR3,0)))
#define TSB_PK_FR3_PK1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR3,1)))
#define TSB_PK_FR3_PK2F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR3,2)))
#define TSB_PK_FR3_PK3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR3,3)))


/* Port L */
#define TSB_PL_DATA_PL0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,0)))
#define TSB_PL_DATA_PL1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,1)))
#define TSB_PL_DATA_PL2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,2)))
#define TSB_PL_DATA_PL3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,3)))
#define TSB_PL_DATA_PL4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,4)))
#define TSB_PL_DATA_PL5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,5)))
#define TSB_PL_DATA_PL6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,6)))
#define TSB_PL_DATA_PL7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->DATA,7)))
#define TSB_PL_CR_PL0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,0)))
#define TSB_PL_CR_PL1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,1)))
#define TSB_PL_CR_PL2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,2)))
#define TSB_PL_CR_PL3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,3)))
#define TSB_PL_CR_PL4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,4)))
#define TSB_PL_CR_PL5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,5)))
#define TSB_PL_CR_PL6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,6)))
#define TSB_PL_CR_PL7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,7)))
#define TSB_PL_FR1_PL0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,0)))
#define TSB_PL_FR1_PL1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,1)))
#define TSB_PL_FR1_PL2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,2)))
#define TSB_PL_FR1_PL3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,3)))
#define TSB_PL_FR1_PL4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,4)))
#define TSB_PL_FR1_PL5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,5)))
#define TSB_PL_FR1_PL6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,6)))
#define TSB_PL_FR1_PL7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,7)))
#define TSB_PL_FR2_PL0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR2,0)))
#define TSB_PL_FR2_PL1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR2,1)))
#define TSB_PL_FR2_PL2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR2,2)))
#define TSB_PL_FR2_PL3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR2,3)))
#define TSB_PL_FR3_PL0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR3,0)))
#define TSB_PL_FR3_PL1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR3,1)))
#define TSB_PL_FR3_PL2F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR3,2)))
#define TSB_PL_FR3_PL3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR3,3)))


/* Port M */
#define TSB_PM_DATA_PM0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->DATA,0)))
#define TSB_PM_DATA_PM1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->DATA,1)))
#define TSB_PM_DATA_PM2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->DATA,2)))
#define TSB_PM_DATA_PM3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->DATA,3)))
#define TSB_PM_DATA_PM4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->DATA,4)))
#define TSB_PM_DATA_PM5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->DATA,5)))
#define TSB_PM_DATA_PM6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->DATA,6)))
#define TSB_PM_DATA_PM7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->DATA,7)))
#define TSB_PM_CR_PM0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->CR,0)))
#define TSB_PM_CR_PM1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->CR,1)))
#define TSB_PM_CR_PM2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->CR,2)))
#define TSB_PM_CR_PM3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->CR,3)))
#define TSB_PM_CR_PM4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->CR,4)))
#define TSB_PM_CR_PM5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->CR,5)))
#define TSB_PM_CR_PM6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->CR,6)))
#define TSB_PM_CR_PM7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->CR,7)))
#define TSB_PM_FR1_PM0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->FR1,0)))
#define TSB_PM_FR1_PM1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->FR1,1)))
#define TSB_PM_FR1_PM2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->FR1,2)))
#define TSB_PM_FR1_PM3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->FR1,3)))
#define TSB_PM_FR1_PM4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->FR1,4)))
#define TSB_PM_OD_PM0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->OD,0)))
#define TSB_PM_OD_PM2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->OD,2)))
#define TSB_PM_OD_PM3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->OD,3)))
#define TSB_PM_PUP_PM0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,0)))
#define TSB_PM_PUP_PM1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,1)))
#define TSB_PM_PUP_PM2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,2)))
#define TSB_PM_PUP_PM3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,3)))


/* Port N */
#define TSB_PN_DATA_PN0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->DATA,0)))
#define TSB_PN_DATA_PN1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->DATA,1)))
#define TSB_PN_DATA_PN2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->DATA,2)))
#define TSB_PN_DATA_PN3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->DATA,3)))
#define TSB_PN_DATA_PN4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->DATA,4)))
#define TSB_PN_DATA_PN5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->DATA,5)))
#define TSB_PN_DATA_PN6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->DATA,6)))
#define TSB_PN_DATA_PN7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->DATA,7)))
#define TSB_PN_CR_PN0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->CR,0)))
#define TSB_PN_CR_PN1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->CR,1)))
#define TSB_PN_CR_PN2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->CR,2)))
#define TSB_PN_CR_PN3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->CR,3)))
#define TSB_PN_CR_PN4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->CR,4)))
#define TSB_PN_CR_PN5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->CR,5)))
#define TSB_PN_CR_PN6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->CR,6)))
#define TSB_PN_CR_PN7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->CR,7)))
#define TSB_PN_FR1_PN0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR1,0)))
#define TSB_PN_FR1_PN1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR1,1)))
#define TSB_PN_FR1_PN2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR1,2)))
#define TSB_PN_FR1_PN3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR1,3)))
#define TSB_PN_FR1_PN4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR1,4)))
#define TSB_PN_FR1_PN5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR1,5)))
#define TSB_PN_FR1_PN6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR1,6)))
#define TSB_PN_FR2_PN0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR2,0)))
#define TSB_PN_FR2_PN1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR2,1)))
#define TSB_PN_FR2_PN2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR2,2)))
#define TSB_PN_FR2_PN6F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR2,6)))
#define TSB_PN_FR2_PN7F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR2,7)))
#define TSB_PN_PUP_PN0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->PUP,0)))
#define TSB_PN_PUP_PN1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->PUP,1)))
#define TSB_PN_PUP_PN2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->PUP,2)))
#define TSB_PN_PUP_PN3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->PUP,3)))
#define TSB_PN_PUP_PN4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->PUP,4)))
#define TSB_PN_PUP_PN5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->PUP,5)))
#define TSB_PN_PUP_PN6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->PUP,6)))
#define TSB_PN_PUP_PN7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->PUP,7)))
#define TSB_PN_IE_PN0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->IE,0)))
#define TSB_PN_IE_PN1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->IE,1)))
#define TSB_PN_IE_PN2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->IE,2)))
#define TSB_PN_IE_PN3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->IE,3)))
#define TSB_PN_IE_PN4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->IE,4)))
#define TSB_PN_IE_PN5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->IE,5)))
#define TSB_PN_IE_PN6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->IE,6)))
#define TSB_PN_IE_PN7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->IE,7)))


/* 16-bit Timer/Event Counter (TB) */
#define TSB_TBC_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->EN,6)))
#define TSB_TBC_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->EN,7)))
#define TSB_TBC_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->RUN,0)))
#define TSB_TBC_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->RUN,2)))
#define TSB_TBC_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->CR,0)))
#define TSB_TBC_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->CR,1)))
#define TSB_TBC_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->CR,3)))
#define TSB_TBC_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->CR,5)))
#define TSB_TBC_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->CR,7)))
#define TSB_TBC_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->MOD,3)))
#define TSB_TBC_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TBC->MOD,6)))
#define TSB_TBC_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->FFCR,2)))
#define TSB_TBC_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->FFCR,3)))
#define TSB_TBC_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->FFCR,4)))
#define TSB_TBC_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->FFCR,5)))
#define TSB_TBC_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->IM,0)))
#define TSB_TBC_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->IM,1)))
#define TSB_TBC_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->IM,2)))
#define TSB_TBC_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->DMA,0)))
#define TSB_TBC_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->DMA,1)))
#define TSB_TBC_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBC->DMA,2)))

#define TSB_TBD_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->EN,6)))
#define TSB_TBD_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->EN,7)))
#define TSB_TBD_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->RUN,0)))
#define TSB_TBD_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->RUN,2)))
#define TSB_TBD_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->CR,0)))
#define TSB_TBD_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->CR,1)))
#define TSB_TBD_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->CR,3)))
#define TSB_TBD_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->CR,5)))
#define TSB_TBD_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->CR,7)))
#define TSB_TBD_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->MOD,3)))
#define TSB_TBD_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TBD->MOD,6)))
#define TSB_TBD_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->FFCR,2)))
#define TSB_TBD_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->FFCR,3)))
#define TSB_TBD_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->FFCR,4)))
#define TSB_TBD_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->FFCR,5)))
#define TSB_TBD_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->IM,0)))
#define TSB_TBD_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->IM,1)))
#define TSB_TBD_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->IM,2)))
#define TSB_TBD_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->DMA,0)))
#define TSB_TBD_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->DMA,1)))
#define TSB_TBD_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBD->DMA,2)))

#define TSB_TBE_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->EN,6)))
#define TSB_TBE_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->EN,7)))
#define TSB_TBE_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->RUN,0)))
#define TSB_TBE_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->RUN,2)))
#define TSB_TBE_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->CR,0)))
#define TSB_TBE_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->CR,1)))
#define TSB_TBE_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->CR,3)))
#define TSB_TBE_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->CR,5)))
#define TSB_TBE_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->CR,7)))
#define TSB_TBE_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->MOD,3)))
#define TSB_TBE_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TBE->MOD,6)))
#define TSB_TBE_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->FFCR,2)))
#define TSB_TBE_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->FFCR,3)))
#define TSB_TBE_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->FFCR,4)))
#define TSB_TBE_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->FFCR,5)))
#define TSB_TBE_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->IM,0)))
#define TSB_TBE_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->IM,1)))
#define TSB_TBE_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->IM,2)))
#define TSB_TBE_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->DMA,0)))
#define TSB_TBE_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->DMA,1)))
#define TSB_TBE_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBE->DMA,2)))

#define TSB_TBF_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->EN,6)))
#define TSB_TBF_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->EN,7)))
#define TSB_TBF_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->RUN,0)))
#define TSB_TBF_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->RUN,2)))
#define TSB_TBF_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->CR,0)))
#define TSB_TBF_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->CR,1)))
#define TSB_TBF_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->CR,3)))
#define TSB_TBF_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->CR,5)))
#define TSB_TBF_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->CR,7)))
#define TSB_TBF_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->MOD,3)))
#define TSB_TBF_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TBF->MOD,6)))
#define TSB_TBF_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->FFCR,2)))
#define TSB_TBF_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->FFCR,3)))
#define TSB_TBF_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->FFCR,4)))
#define TSB_TBF_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->FFCR,5)))
#define TSB_TBF_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->IM,0)))
#define TSB_TBF_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->IM,1)))
#define TSB_TBF_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->IM,2)))
#define TSB_TBF_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->DMA,0)))
#define TSB_TBF_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->DMA,1)))
#define TSB_TBF_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBF->DMA,2)))

#define TSB_TB0_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->EN,6)))
#define TSB_TB0_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->EN,7)))
#define TSB_TB0_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->RUN,0)))
#define TSB_TB0_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->RUN,2)))
#define TSB_TB0_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,0)))
#define TSB_TB0_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,1)))
#define TSB_TB0_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,3)))
#define TSB_TB0_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,5)))
#define TSB_TB0_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,7)))
#define TSB_TB0_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->MOD,3)))
#define TSB_TB0_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB0->MOD,6)))
#define TSB_TB0_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,2)))
#define TSB_TB0_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,3)))
#define TSB_TB0_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,4)))
#define TSB_TB0_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,5)))
#define TSB_TB0_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->IM,0)))
#define TSB_TB0_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->IM,1)))
#define TSB_TB0_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->IM,2)))
#define TSB_TB0_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->DMA,0)))
#define TSB_TB0_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->DMA,1)))
#define TSB_TB0_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->DMA,2)))

#define TSB_TB1_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->EN,6)))
#define TSB_TB1_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->EN,7)))
#define TSB_TB1_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->RUN,0)))
#define TSB_TB1_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->RUN,2)))
#define TSB_TB1_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,0)))
#define TSB_TB1_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,1)))
#define TSB_TB1_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,3)))
#define TSB_TB1_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,5)))
#define TSB_TB1_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,7)))
#define TSB_TB1_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->MOD,3)))
#define TSB_TB1_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB1->MOD,6)))
#define TSB_TB1_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,2)))
#define TSB_TB1_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,3)))
#define TSB_TB1_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,4)))
#define TSB_TB1_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,5)))
#define TSB_TB1_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->IM,0)))
#define TSB_TB1_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->IM,1)))
#define TSB_TB1_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->IM,2)))
#define TSB_TB1_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->DMA,0)))
#define TSB_TB1_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->DMA,1)))
#define TSB_TB1_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->DMA,2)))

#define TSB_TB2_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->EN,6)))
#define TSB_TB2_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->EN,7)))
#define TSB_TB2_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->RUN,0)))
#define TSB_TB2_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->RUN,2)))
#define TSB_TB2_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,0)))
#define TSB_TB2_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,1)))
#define TSB_TB2_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,3)))
#define TSB_TB2_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,5)))
#define TSB_TB2_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,7)))
#define TSB_TB2_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->MOD,3)))
#define TSB_TB2_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB2->MOD,6)))
#define TSB_TB2_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,2)))
#define TSB_TB2_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,3)))
#define TSB_TB2_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,4)))
#define TSB_TB2_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,5)))
#define TSB_TB2_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->IM,0)))
#define TSB_TB2_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->IM,1)))
#define TSB_TB2_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->IM,2)))
#define TSB_TB2_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->DMA,0)))
#define TSB_TB2_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->DMA,1)))
#define TSB_TB2_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->DMA,2)))

#define TSB_TB3_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->EN,6)))
#define TSB_TB3_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->EN,7)))
#define TSB_TB3_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->RUN,0)))
#define TSB_TB3_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->RUN,2)))
#define TSB_TB3_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,0)))
#define TSB_TB3_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,1)))
#define TSB_TB3_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,3)))
#define TSB_TB3_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,5)))
#define TSB_TB3_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,7)))
#define TSB_TB3_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->MOD,3)))
#define TSB_TB3_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB3->MOD,6)))
#define TSB_TB3_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,2)))
#define TSB_TB3_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,3)))
#define TSB_TB3_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,4)))
#define TSB_TB3_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,5)))
#define TSB_TB3_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->IM,0)))
#define TSB_TB3_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->IM,1)))
#define TSB_TB3_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->IM,2)))
#define TSB_TB3_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->DMA,0)))
#define TSB_TB3_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->DMA,1)))
#define TSB_TB3_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->DMA,2)))

#define TSB_TB4_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->EN,6)))
#define TSB_TB4_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->EN,7)))
#define TSB_TB4_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->RUN,0)))
#define TSB_TB4_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->RUN,2)))
#define TSB_TB4_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,0)))
#define TSB_TB4_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,1)))
#define TSB_TB4_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,3)))
#define TSB_TB4_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,5)))
#define TSB_TB4_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,7)))
#define TSB_TB4_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->MOD,3)))
#define TSB_TB4_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB4->MOD,6)))
#define TSB_TB4_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,2)))
#define TSB_TB4_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,3)))
#define TSB_TB4_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,4)))
#define TSB_TB4_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,5)))
#define TSB_TB4_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->IM,0)))
#define TSB_TB4_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->IM,1)))
#define TSB_TB4_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->IM,2)))
#define TSB_TB4_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->DMA,0)))
#define TSB_TB4_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->DMA,1)))
#define TSB_TB4_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->DMA,2)))

#define TSB_TB5_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->EN,6)))
#define TSB_TB5_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->EN,7)))
#define TSB_TB5_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->RUN,0)))
#define TSB_TB5_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->RUN,2)))
#define TSB_TB5_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,0)))
#define TSB_TB5_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,1)))
#define TSB_TB5_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,3)))
#define TSB_TB5_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,5)))
#define TSB_TB5_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,7)))
#define TSB_TB5_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->MOD,3)))
#define TSB_TB5_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB5->MOD,6)))
#define TSB_TB5_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,2)))
#define TSB_TB5_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,3)))
#define TSB_TB5_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,4)))
#define TSB_TB5_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,5)))
#define TSB_TB5_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->IM,0)))
#define TSB_TB5_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->IM,1)))
#define TSB_TB5_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->IM,2)))
#define TSB_TB5_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->DMA,0)))
#define TSB_TB5_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->DMA,1)))
#define TSB_TB5_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->DMA,2)))

#define TSB_TB6_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->EN,6)))
#define TSB_TB6_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->EN,7)))
#define TSB_TB6_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->RUN,0)))
#define TSB_TB6_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->RUN,2)))
#define TSB_TB6_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,0)))
#define TSB_TB6_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,1)))
#define TSB_TB6_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,3)))
#define TSB_TB6_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,5)))
#define TSB_TB6_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,7)))
#define TSB_TB6_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->MOD,3)))
#define TSB_TB6_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB6->MOD,6)))
#define TSB_TB6_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,2)))
#define TSB_TB6_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,3)))
#define TSB_TB6_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,4)))
#define TSB_TB6_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,5)))
#define TSB_TB6_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->IM,0)))
#define TSB_TB6_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->IM,1)))
#define TSB_TB6_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->IM,2)))
#define TSB_TB6_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->DMA,0)))
#define TSB_TB6_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->DMA,1)))
#define TSB_TB6_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->DMA,2)))

#define TSB_TB7_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->EN,6)))
#define TSB_TB7_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->EN,7)))
#define TSB_TB7_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->RUN,0)))
#define TSB_TB7_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->RUN,2)))
#define TSB_TB7_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,0)))
#define TSB_TB7_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,1)))
#define TSB_TB7_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,3)))
#define TSB_TB7_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,5)))
#define TSB_TB7_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,7)))
#define TSB_TB7_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->MOD,3)))
#define TSB_TB7_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB7->MOD,6)))
#define TSB_TB7_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,2)))
#define TSB_TB7_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,3)))
#define TSB_TB7_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,4)))
#define TSB_TB7_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,5)))
#define TSB_TB7_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->IM,0)))
#define TSB_TB7_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->IM,1)))
#define TSB_TB7_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->IM,2)))
#define TSB_TB7_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->DMA,0)))
#define TSB_TB7_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->DMA,1)))
#define TSB_TB7_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->DMA,2)))

#define TSB_TB8_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->EN,6)))
#define TSB_TB8_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->EN,7)))
#define TSB_TB8_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->RUN,0)))
#define TSB_TB8_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->RUN,2)))
#define TSB_TB8_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->CR,0)))
#define TSB_TB8_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->CR,1)))
#define TSB_TB8_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->CR,3)))
#define TSB_TB8_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->CR,5)))
#define TSB_TB8_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->CR,7)))
#define TSB_TB8_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->MOD,3)))
#define TSB_TB8_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB8->MOD,6)))
#define TSB_TB8_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->FFCR,2)))
#define TSB_TB8_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->FFCR,3)))
#define TSB_TB8_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->FFCR,4)))
#define TSB_TB8_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->FFCR,5)))
#define TSB_TB8_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->IM,0)))
#define TSB_TB8_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->IM,1)))
#define TSB_TB8_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->IM,2)))
#define TSB_TB8_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->DMA,0)))
#define TSB_TB8_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->DMA,1)))
#define TSB_TB8_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->DMA,2)))

#define TSB_TB9_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->EN,6)))
#define TSB_TB9_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->EN,7)))
#define TSB_TB9_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->RUN,0)))
#define TSB_TB9_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->RUN,2)))
#define TSB_TB9_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->CR,0)))
#define TSB_TB9_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->CR,1)))
#define TSB_TB9_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->CR,3)))
#define TSB_TB9_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->CR,5)))
#define TSB_TB9_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->CR,7)))
#define TSB_TB9_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->MOD,3)))
#define TSB_TB9_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TB9->MOD,6)))
#define TSB_TB9_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->FFCR,2)))
#define TSB_TB9_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->FFCR,3)))
#define TSB_TB9_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->FFCR,4)))
#define TSB_TB9_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->FFCR,5)))
#define TSB_TB9_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->IM,0)))
#define TSB_TB9_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->IM,1)))
#define TSB_TB9_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->IM,2)))
#define TSB_TB9_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->DMA,0)))
#define TSB_TB9_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->DMA,1)))
#define TSB_TB9_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->DMA,2)))

#define TSB_TBA_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->EN,6)))
#define TSB_TBA_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->EN,7)))
#define TSB_TBA_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->RUN,0)))
#define TSB_TBA_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->RUN,2)))
#define TSB_TBA_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->CR,0)))
#define TSB_TBA_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->CR,1)))
#define TSB_TBA_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->CR,3)))
#define TSB_TBA_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->CR,5)))
#define TSB_TBA_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->CR,7)))
#define TSB_TBA_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->MOD,3)))
#define TSB_TBA_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TBA->MOD,6)))
#define TSB_TBA_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->FFCR,2)))
#define TSB_TBA_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->FFCR,3)))
#define TSB_TBA_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->FFCR,4)))
#define TSB_TBA_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->FFCR,5)))
#define TSB_TBA_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->IM,0)))
#define TSB_TBA_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->IM,1)))
#define TSB_TBA_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->IM,2)))
#define TSB_TBA_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->DMA,0)))
#define TSB_TBA_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->DMA,1)))
#define TSB_TBA_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBA->DMA,2)))

#define TSB_TBB_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->EN,6)))
#define TSB_TBB_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->EN,7)))
#define TSB_TBB_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->RUN,0)))
#define TSB_TBB_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->RUN,2)))
#define TSB_TBB_CR_CSSEL                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->CR,0)))
#define TSB_TBB_CR_TRGSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->CR,1)))
#define TSB_TBB_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->CR,3)))
#define TSB_TBB_CR_TBSYNC                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->CR,5)))
#define TSB_TBB_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->CR,7)))
#define TSB_TBB_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->MOD,3)))
#define TSB_TBB_MOD_TBCP                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_TBB->MOD,6)))
#define TSB_TBB_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->FFCR,2)))
#define TSB_TBB_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->FFCR,3)))
#define TSB_TBB_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->FFCR,4)))
#define TSB_TBB_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->FFCR,5)))
#define TSB_TBB_IM_TBIM0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->IM,0)))
#define TSB_TBB_IM_TBIM1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->IM,1)))
#define TSB_TBB_IM_TBIMOF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->IM,2)))
#define TSB_TBB_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->DMA,0)))
#define TSB_TBB_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->DMA,1)))
#define TSB_TBB_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TBB->DMA,2)))


/* Serial Bus Interface (SBI) */
#define TSB_SBI_CR0_SBIEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI->CR0,7)))
#define TSB_SBI_CR1_SWRMON                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SBI->CR1,0)))
#define TSB_SBI_CR1_ACK                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI->CR1,4)))
#define TSB_SBI_CR1_SIOINH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI->CR1,6)))
#define TSB_SBI_CR1_SIOS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI->CR1,7)))
#define TSB_SBI_I2CAR_ALS                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI->I2CAR,0)))
#define TSB_SBI_CR2_PIN                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI->CR2,4)))
#define TSB_SBI_CR2_BB                            (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI->CR2,5)))
#define TSB_SBI_CR2_TRX                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI->CR2,6)))
#define TSB_SBI_CR2_MST                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_SBI->CR2,7)))
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


/* Serial Channel (SC) */
#define TSB_SC_EN_SIOE                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->EN,0)))
#define TSB_SC_EN_BRCKSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->EN,1)))
#define TSB_SC_CR_IOC                             (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->CR,0)))
#define TSB_SC_CR_SCLKS                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->CR,1)))
#define TSB_SC_CR_PE                              (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->CR,5)))
#define TSB_SC_CR_EVEN                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->CR,6)))
#define TSB_SC_CR_RB8                             (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC->CR,7)))
#define TSB_SC_CR_TXDEMP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->CR,10)))
#define TSB_SC_MOD0_WU                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->MOD0,4)))
#define TSB_SC_MOD0_RXE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->MOD0,5)))
#define TSB_SC_MOD0_CTSE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->MOD0,6)))
#define TSB_SC_MOD0_TB8                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->MOD0,7)))
#define TSB_SC_BRCR_BRADDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->BRCR,6)))
#define TSB_SC_MOD1_TXE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->MOD1,4)))
#define TSB_SC_MOD1_I2SC                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->MOD1,7)))
#define TSB_SC_MOD2_WBUF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->MOD2,2)))
#define TSB_SC_MOD2_DRCHG                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->MOD2,3)))
#define TSB_SC_MOD2_SBLEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->MOD2,4)))
#define TSB_SC_MOD2_TXRUN                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC->MOD2,5)))
#define TSB_SC_MOD2_RBFLL                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC->MOD2,6)))
#define TSB_SC_MOD2_TBEMP                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC->MOD2,7)))
#define TSB_SC_RFC_RFIS                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->RFC,6)))
#define TSB_SC_RFC_RFCS                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_SC->RFC,7)))
#define TSB_SC_TFC_TFIS                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->TFC,6)))
#define TSB_SC_TFC_TFCS                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->TFC,7)))
#define TSB_SC_TFC_TBCLR                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->TFC,8)))
#define TSB_SC_RST_ROR                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC->RST,7)))
#define TSB_SC_TST_TUR                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC->TST,7)))
#define TSB_SC_FCNF_CNFG                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->FCNF,0)))
#define TSB_SC_FCNF_RXTXCNT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->FCNF,1)))
#define TSB_SC_FCNF_RFIE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->FCNF,2)))
#define TSB_SC_FCNF_TFIE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->FCNF,3)))
#define TSB_SC_FCNF_RFST                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->FCNF,4)))
#define TSB_SC_DMA_DMAEN0                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->DMA,0)))
#define TSB_SC_DMA_DMAEN1                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC->DMA,1)))


/* Watchdog Timer (WD) */
#define TSB_WD_MOD_RESCR                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_WD->MOD,1)))
#define TSB_WD_MOD_I2WDT                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_WD->MOD,2)))
#define TSB_WD_MOD_WDTE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_WD->MOD,7)))


/* Clock Generator (CG) */
#define TSB_CG_SYSCR_FPSEL0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SYSCR,12)))
#define TSB_CG_SYSCR_FCSTOP0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SYSCR,18)))
#define TSB_CG_SYSCR_FCSTOP1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SYSCR,19)))
#define TSB_CG_SYSCR_FCSTOP2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SYSCR,20)))
#define TSB_CG_SYSCR_PSCSTOP0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SYSCR,21)))
#define TSB_CG_SYSCR_PSCSTOP1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SYSCR,22)))
#define TSB_CG_SYSCR_PSCSTOP2                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SYSCR,23)))
#define TSB_CG_SYSCR_PSCSTOP3                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SYSCR,24)))
#define TSB_CG_OSCCR_WUEON                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,0)))
#define TSB_CG_OSCCR_WUEF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,1)))
#define TSB_CG_OSCCR_PLL0ON                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,2)))
#define TSB_CG_OSCCR_XEN1                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,8)))
#define TSB_CG_OSCCR_PLL1ON                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,10)))
#define TSB_CG_OSCCR_XEN2                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,16)))
#define TSB_CG_OSCCR_OSCSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,17)))
#define TSB_CG_OSCCR_EHOSCSEL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,18)))
#define TSB_CG_OSCCR_WUPSEL2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,19)))
#define TSB_CG_STBYCR_PTKEEP                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->STBYCR,17)))
#define TSB_CG_PLLSEL_PLL0SEL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->PLLSEL,0)))
#define TSB_CG_PLLSEL_PLL1SEL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->PLLSEL,16)))
#define TSB_CG_PWMGEAR_TMRDACLKEN                 (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->PWMGEAR,0)))
#define TSB_CG_PWMGEAR_TMRDBCLKEN                 (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->PWMGEAR,1)))
#define TSB_CG_FCLKMSKA_PORTA                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,0)))
#define TSB_CG_FCLKMSKA_PORTB                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,1)))
#define TSB_CG_FCLKMSKA_PORTC                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,2)))
#define TSB_CG_FCLKMSKA_PORTD                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,3)))
#define TSB_CG_FCLKMSKA_PORTE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,4)))
#define TSB_CG_FCLKMSKA_PORTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,5)))
#define TSB_CG_FCLKMSKA_PORTG                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,6)))
#define TSB_CG_FCLKMSKA_PORTH                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,7)))
#define TSB_CG_FCLKMSKA_PORTJ                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,8)))
#define TSB_CG_FCLKMSKA_PORTK                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,9)))
#define TSB_CG_FCLKMSKA_PORTL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,10)))
#define TSB_CG_FCLKMSKA_PORTM                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,11)))
#define TSB_CG_FCLKMSKA_PORTN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,12)))
#define TSB_CG_FCLKMSKA_DMACA                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,13)))
#define TSB_CG_FCLKMSKA_DMACB                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,14)))
#define TSB_CG_FCLKMSKA_DMACC                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,15)))
#define TSB_CG_FCLKMSKA_ADCA                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,16)))
#define TSB_CG_FCLKMSKA_ADCB                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,17)))
#define TSB_CG_FCLKMSKA_ADCC                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,18)))
#define TSB_CG_FCLKMSKA_WDT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,19)))
#define TSB_CG_FCLKMSKA_SIO_UART                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,20)))
#define TSB_CG_FCLKMSKA_I2C                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,21)))
#define TSB_CG_FCLKMSKA_EPHC0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,23)))
#define TSB_CG_FCLKMSKA_EPHC1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,24)))
#define TSB_CG_FCLKMSKA_EPHC2                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCLKMSKA,25)))
#define TSB_CG_FCMSKA_TMRB0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,0)))
#define TSB_CG_FCMSKA_TMRB1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,1)))
#define TSB_CG_FCMSKA_TMRB2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,2)))
#define TSB_CG_FCMSKA_TMRB3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,3)))
#define TSB_CG_FCMSKA_TMRB4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,4)))
#define TSB_CG_FCMSKA_TMRB5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,5)))
#define TSB_CG_FCMSKA_TMRB6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,6)))
#define TSB_CG_FCMSKA_TMRB7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,7)))
#define TSB_CG_FCMSKA_TMRB8                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,8)))
#define TSB_CG_FCMSKA_TMRB9                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,9)))
#define TSB_CG_FCMSKA_TMRBA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,10)))
#define TSB_CG_FCMSKA_TMRBB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,11)))
#define TSB_CG_FCMSKA_TMRBC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,12)))
#define TSB_CG_FCMSKA_TMRBD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,13)))
#define TSB_CG_FCMSKA_TMRBE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,14)))
#define TSB_CG_FCMSKA_TMRBF                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,15)))
#define TSB_CG_FCMSKA_TSPI0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,16)))
#define TSB_CG_FCMSKA_TSPI1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,17)))
#define TSB_CG_FCMSKA_TSPI2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,18)))
#define TSB_CG_FCMSKA_TSPI3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,19)))
#define TSB_CG_FCMSKA_TSPI4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,20)))
#define TSB_CG_FCMSKA_EPHC0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,21)))
#define TSB_CG_FCMSKA_EPHC1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,22)))
#define TSB_CG_FCMSKA_EPHC2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,23)))
#define TSB_CG_FCMSKA_FUART                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCMSKA,24)))
#define TSB_CG_IMCGA_INT00EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGA,0)))
#define TSB_CG_IMCGA_INT01EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGA,8)))
#define TSB_CG_IMCGA_INT02EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGA,16)))
#define TSB_CG_IMCGA_INT03EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGA,24)))
#define TSB_CG_IMCGB_INT04EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGB,0)))
#define TSB_CG_IMCGB_INT05EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGB,8)))
#define TSB_CG_IMCGB_INT06EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGB,16)))
#define TSB_CG_IMCGB_INT07EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGB,24)))
#define TSB_CG_IMCGC_INT08EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGC,0)))
#define TSB_CG_IMCGC_INT09EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGC,8)))
#define TSB_CG_IMCGC_INT0AEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGC,16)))
#define TSB_CG_IMCGC_INT0BEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGC,24)))
#define TSB_CG_IMCGD_INT0CEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGD,0)))
#define TSB_CG_IMCGD_INT0DEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGD,8)))
#define TSB_CG_IMCGD_INT0EEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGD,16)))
#define TSB_CG_IMCGD_INT0FEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->IMCGD,24)))
#define TSB_CG_RSTFLG_PINRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,0)))
#define TSB_CG_RSTFLG_WDTRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,2)))
#define TSB_CG_RSTFLG_BUPRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,3)))
#define TSB_CG_RSTFLG_SYSRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,4)))


/* Flash Control (FC) */
#define TSB_FC_SECBIT_SECBIT                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_FC->SECBIT,0)))
#define TSB_FC_PSR0_RDY_BSY                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,0)))
#define TSB_FC_PSR0_PG0                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,8)))
#define TSB_FC_PSR0_PG1                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,9)))
#define TSB_FC_PSR0_PG2                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,10)))
#define TSB_FC_PSR0_PG3                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,11)))
#define TSB_FC_PSR0_PG4                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,12)))
#define TSB_FC_PSR0_PG5                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,13)))
#define TSB_FC_PSR0_PG6                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,14)))
#define TSB_FC_PSR0_PG7                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,15)))
#define TSB_FC_PSR0_BLK1                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,17)))
#define TSB_FC_PSR0_BLK2                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,18)))
#define TSB_FC_PSR0_BLK3                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,19)))
#define TSB_FC_PSR0_BLK4                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,20)))
#define TSB_FC_PSR0_BLK5                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,21)))
#define TSB_FC_PSR0_BLK6                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,22)))
#define TSB_FC_PSR0_BLK7                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,23)))
#define TSB_FC_PSR0_BLK8                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,24)))
#define TSB_FC_PSR0_BLK9                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,25)))
#define TSB_FC_PSR0_BLK10                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,26)))
#define TSB_FC_PSR0_BLK11                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,27)))
#define TSB_FC_PSR0_BLK12                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,28)))
#define TSB_FC_PSR0_BLK13                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,29)))
#define TSB_FC_PSR0_BLK14                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,30)))
#define TSB_FC_PSR0_BLK15                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR0,31)))
#define TSB_FC_PSR1_BLK16                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,16)))
#define TSB_FC_PSR1_BLK17                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,17)))
#define TSB_FC_PSR1_BLK18                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,18)))
#define TSB_FC_PSR1_BLK19                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,19)))
#define TSB_FC_PSR1_BLK20                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,20)))
#define TSB_FC_PSR1_BLK21                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,21)))
#define TSB_FC_PSR1_BLK22                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,22)))
#define TSB_FC_PSR1_BLK23                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,23)))
#define TSB_FC_PSR1_BLK24                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,24)))
#define TSB_FC_PSR1_BLK25                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,25)))
#define TSB_FC_PSR1_BLK26                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,26)))
#define TSB_FC_PSR1_BLK27                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,27)))
#define TSB_FC_PSR1_BLK28                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,28)))
#define TSB_FC_PSR1_BLK29                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,29)))
#define TSB_FC_PSR1_BLK30                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,30)))
#define TSB_FC_PSR1_BLK31                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->PSR1,31)))
#define TSB_FC_SR_WEABORT                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->SR,24)))

/** @} */ /* End of group Device_Peripheral_registers */

#ifdef __cplusplus
}
#endif

#endif  /* __TMPM343_H__ */

/** @} */ /* End of group TMPM343 */
/** @} */ /* End of group TOSHIBA_TX03_MICROCONTROLLER */
