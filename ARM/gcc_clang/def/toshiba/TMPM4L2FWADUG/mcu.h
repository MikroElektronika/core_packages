/**
 *******************************************************************************
 * @file    TMPM4L2.h
 * @brief   CMSIS Cortex-M4 Core Peripheral Access Layer Header File for the
 *          TOSHIBA 'TMPM4L2' Device Series
 * @version V1.0.2.0
 * $Date:: 2018-12-04 #$
 *
 * DO NOT USE THIS SOFTWARE WITHOUT THE SOFTWARE LICENSE AGREEMENT.
 *
 * (C)Copyright TOSHIBA MICROELECTRONICS CORPORATION 2018 All rights reserved
 *******************************************************************************
 */

/** @addtogroup TOSHIBA_TXZ_MICROCONTROLLER
  * @{
  */

/** @addtogroup TMPM4L2
  * @{
  */

#ifndef __TMPM4L2_H__
#define __TMPM4L2_H__

#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup Configuration_of_CMSIS
  * @{
  */

/** Interrupt Number Definition */
typedef enum IRQn
{
/******  Cortex-M4 Processor Exceptions Numbers ***************************************************************/
  NonMaskableInt_IRQn           = -14,       /*!< 2 Non Maskable Interrupt                                    */
  HardFault_IRQn                = -13,       /*!< 3 Cortex-M4 Hard Fault Interrupt                            */
  MemoryManagement_IRQn         = -12,       /*!< 4 Cortex-M4 Memory Management Interrupt                     */
  BusFault_IRQn                 = -11,       /*!< 5 Cortex-M4 Bus Fault Interrupt                             */
  UsageFault_IRQn               = -10,       /*!< 6 Cortex-M4 Usage Fault Interrupt                           */
  SVCall_IRQn                   = -5,        /*!< 11 Cortex-M4 SV Call Interrupt                              */
  DebugMonitor_IRQn             = -4,        /*!< 12 Cortex-M4 Debug Monitor Interrupt                        */
  PendSV_IRQn                   = -2,        /*!< 14 Cortex-M4 Pend SV Interrupt                              */
  SysTick_IRQn                  = -1,        /*!< 15 Cortex-M4 System Tick Interrupt                          */

/******  TMPM4L2 Specific Interrupt Numbers *******************************************************************/
  INT00_IRQn                    = 0,         /*!< Interrupt pin 00                                            */
  INT01_IRQn                    = 1,         /*!< Interrupt pin 01                                            */
  INT02_IRQn                    = 2,         /*!< Interrupt pin 02                                            */
  INT03_IRQn                    = 3,         /*!< Interrupt pin 03                                            */
  INT04_IRQn                    = 4,         /*!< Interrupt pin 04                                            */
  INT05_IRQn                    = 5,         /*!< Interrupt pin 05                                            */
  INT06_IRQn                    = 6,         /*!< Interrupt pin 06                                            */
  INT07_IRQn                    = 7,         /*!< Interrupt pin 07                                            */
  INTT32A00_AT_CT_IRQn          = 8,         /*!< T32A00 Timer Interrupt A/Timer Interrupt C                  */
  INTT32A00_A01_C0_IRQn         = 9,         /*!< T32A00 Capture A0,A1,C0 Interrupt                           */
  INTT32A00_BT_C1_IRQn          = 10,        /*!< T32A00 Timer Interrupt B/Capture C1 Interrupt               */
  INTT32A00_B01_IRQn            = 11,        /*!< T32A00 Capture B0,B1 Interrupt                              */
  INTT32A01_AT_CT_IRQn          = 12,        /*!< T32A01 Timer Interrupt A/Timer Interrupt C                  */
  INTT32A01_A01_C0_IRQn         = 13,        /*!< T32A01 Capture A0,A1,C0 Interrupt                           */
  INTT32A01_BT_C1_IRQn          = 14,        /*!< T32A01 Timer Interrupt B/Capture C1 Interrupt               */
  INTT32A01_B01_IRQn            = 15,        /*!< T32A01 Capture B0,B1 Interrupt                              */
  INTT32A02_AT_CT_IRQn          = 16,        /*!< T32A02 Timer Interrupt A/Timer Interrupt C                  */
  INTT32A02_A01_C0_IRQn         = 17,        /*!< T32A02 Capture A0,A1,C0 Interrupt                           */
  INTT32A02_BT_C1_IRQn          = 18,        /*!< T32A02 Timer Interrupt B/Capture C1 Interrupt               */
  INTT32A02_B01_IRQn            = 19,        /*!< T32A02 Capture B0,B1 Interrupt                              */
  INTT32A03_AT_CT_IRQn          = 20,        /*!< T32A03 Timer Interrupt A/Timer Interrupt C                  */
  INTT32A03_A01_C0_IRQn         = 21,        /*!< T32A03 Capture A0,A1,C0 Interrupt                           */
  INTT32A03_BT_C1_IRQn          = 22,        /*!< T32A03 Timer Interrupt B/Capture C1 Interrupt               */
  INTT32A03_B01_IRQn            = 23,        /*!< T32A03 Capture B0,B1 Interrupt                              */
  INTVCN0_IRQn                  = 24,        /*!< A-VE ch0 interrupt                                          */
  INTVCT0_IRQn                  = 25,        /*!< A-VE ch0 task termination interrupt                         */
  INTEMG0_IRQn                  = 26,        /*!< PMD+ ch0 EMG interrupt                                      */
  INTOVV0_IRQn                  = 27,        /*!< PMD+ ch0 OVV interrupt                                      */
  INTPWM0_IRQn                  = 28,        /*!< PMD+ ch0 PWM interrupt                                      */
  INTENC00_IRQn                 = 29,        /*!< A-ENC32 ch0 Encoder interupt 0                              */
  INTENC01_IRQn                 = 30,        /*!< A-ENC32 ch0 Encoder interupt 1                              */
  INTADAPDA_IRQn                = 32,        /*!< ADC unit A PMD trigger program interrupt A                  */
  INTADAPDB_IRQn                = 33,        /*!< ADC unit A PMD trigger program interrupt B                  */
  INTADACP0_IRQn                = 34,        /*!< ADC conversion monitoring function interrupt 0              */
  INTADACP1_IRQn                = 35,        /*!< ADC conversion monitoring function interrupt 1              */
  INTADATRG_IRQn                = 36,        /*!< ADC conversion triggered by General purpose is finished     */
  INTADASGL_IRQn                = 37,        /*!< ADC conversion triggered by Single program is finished      */
  INTADACNT_IRQn                = 38,        /*!< ADC conversion triggered by Continuity program is finished  */
  INTT0RX_IRQn                  = 39,        /*!< TSPI/SIO reception (channel 0)                              */
  INTT0TX_IRQn                  = 40,        /*!< TSPI/SIO transmit (channel 0)                               */
  INTT0ERR_IRQn                 = 41,        /*!< TSPI/SIO error (channel 0)                                  */
  INTT1RX_IRQn                  = 42,        /*!< TSPI/SIO reception (channel 1)                              */
  INTT1TX_IRQn                  = 43,        /*!< TSPI/SIO transmit (channel 1)                               */
  INTT1ERR_IRQn                 = 44,        /*!< TSPI/SIO error (channel 1)                                  */
  INTT2RX_IRQn                  = 45,        /*!< TSPI/SIO reception (channel 2)                              */
  INTT2TX_IRQn                  = 46,        /*!< TSPI/SIO transmit (channel 2)                               */
  INTT2ERR_IRQn                 = 47,        /*!< TSPI/SIO error (channel 2)                                  */
  INTUART0RX_IRQn               = 48,        /*!< UART reception (channel 0)                                  */
  INTUART0TX_IRQn               = 49,        /*!< UART transmit (channel 0)                                   */
  INTUART0ERR_IRQn              = 50,        /*!< UART error (channel 0)                                      */
  INTUART1RX_IRQn               = 51,        /*!< UART reception (channel 1)                                  */
  INTUART1TX_IRQn               = 52,        /*!< UART transmit (channel 1)                                   */
  INTUART1ERR_IRQn              = 53,        /*!< UART error (channel 1)                                      */
  INTUART2RX_IRQn               = 54,        /*!< UART reception (channel 2)                                  */
  INTUART2TX_IRQn               = 55,        /*!< UART transmit (channel 2)                                   */
  INTUART2ERR_IRQn              = 56,        /*!< UART error (channel 2)                                      */
  INTPARI0_IRQn                 = 57,        /*!< RAM parity ch0 Parity error interrupt                       */
  INTFLCRDY_IRQn                = 58         /*!< Code FLASH Ready interrupt                                  */
} IRQn_Type;

/** Processor and Core Peripheral Section */

/* Configuration of the Cortex-M4 Processor and Core Peripherals */
#define __CM4_REV              0x0001       /*!< Cortex-M4 Core Revision                           */
#define __NVIC_PRIO_BITS          4         /*!< Number of Bits used for Priority Levels           */
#define __MPU_PRESENT             1         /*!< MPU present or not                                */
#define __FPU_PRESENT             1         /*!< FPU present or not                                */
#define __Vendor_SysTickConfig    0         /*!< Set to 1 if different SysTick Config is used      */

/** @} */ /* End of group Configuration_of_CMSIS */

#include "core_cm4.h"                       /* Cortex-M4 processor and core peripherals            */
// Note: Changed for MikroE implementation.
// #include "system_TMPM4Lx.h"                 /* TMPM4Lx System                                      */

/** @addtogroup Device_Peripheral_registers
  * @{
  */

/** Device Specific Peripheral registers structures */

/**
  * @brief Interrupt control A Register
  */
typedef struct
{
  __IO uint8_t  NIC00;             /*!< Non Maskable interrupt Mode Control Register A 00*/
} TSB_IA_TypeDef;

/**
  * @brief Reset Low power Management Register
  */
typedef struct
{
       uint8_t  RESERVED0[2];
  __IO uint8_t  RSTFLG0;           /*!< Reset flag register 0                        */
  __IO uint8_t  RSTFLG1;           /*!< Reset flag register 1                        */
} TSB_RLM_TypeDef;

/**
  * @brief LVD0
  */
typedef struct
{
  __IO uint8_t  CR;                /*!< LVD Control register1                        */
} TSB_LVD_TypeDef;

/**
  * @brief RAM Parity (RAMP)
  */
typedef struct
{
  __IO uint32_t CTL;               /*!< RAMM Parity control register                 */
  __I  uint32_t ST;                /*!< RAMM Parity status register                  */
  __O  uint32_t CLR;               /*!< RAMM Parity status clear register            */
  __I  uint32_t EAD0;              /*!< RAMM Parity Error address register 0         */
} TSB_RPAR_TypeDef;

/**
  * @brief CRC Calculation Circuit (CRC)
  */
typedef struct
{
  __IO uint32_t DIN;               /*!< CRC input data register                      */
       uint32_t RESERVED0[4];
  __IO uint32_t TYP;               /*!< CRC data type register                       */
       uint32_t RESERVED1[5];
  __IO uint32_t CLC;               /*!< CRC calculation result register              */
} TSB_CRC_TypeDef;

/**
  * @brief TRGSEL
  */
typedef struct
{
  __IO uint32_t CR0;               /*!< TRGSEL Control register 0                    */
  __IO uint32_t CR1;               /*!< TRGSEL Control register 1                    */
  __IO uint32_t CR2;               /*!< TSEL Control register 2                      */
  __IO uint32_t CR3;               /*!< TRGSEL Control register 3                    */
} TSB_TSEL_TypeDef;

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
  * @brief Clock Generator (CG)
  */
typedef struct
{
  __IO uint32_t PROTECT;           /*!< Protect Register                             */
  __IO uint32_t OSCCR;             /*!< Oscillation Control Register                 */
  __IO uint32_t SYSCR;             /*!< System Clock Control Register                */
  __IO uint32_t STBYCR;            /*!< Standby Control Register                     */
       uint32_t RESERVED0[4];
  __IO uint32_t PLL0SEL;           /*!< PLL Selection Register 0                     */
       uint32_t RESERVED1[3];
  __IO uint32_t WUPHCR;            /*!< High OSC Warming-up Register                 */
       uint32_t RESERVED2[7];
  __IO uint32_t FSYSENA;           /*!< High fsys Supply Stop Register A             */
       uint32_t RESERVED3;
  __IO uint32_t FCEN;              /*!< FC Supply Stop Register                      */
  __IO uint32_t SPCLKEN;           /*!< ADC TRACE Clock Supply Stop Register         */
} TSB_CG_TypeDef;

/**
  * @brief Interrupt Control B Register
  */
typedef struct
{
       uint8_t  RESERVED0[16];
  __IO uint8_t  NIC00;             /*!< Non maskable interrupt Control Register 00   */
       uint8_t  RESERVED1[79];
  __IO uint8_t  IMC000;            /*!< interrupt Mode Control Register 000          */
  __IO uint8_t  IMC001;            /*!< interrupt Mode Control Register 001          */
  __IO uint8_t  IMC002;            /*!< interrupt Mode Control Register 002          */
  __IO uint8_t  IMC003;            /*!< interrupt Mode Control Register 003          */
  __IO uint8_t  IMC004;            /*!< interrupt Mode Control Register 004          */
  __IO uint8_t  IMC005;            /*!< interrupt Mode Control Register 005          */
  __IO uint8_t  IMC006;            /*!< interrupt Mode Control Register 006          */
  __IO uint8_t  IMC007;            /*!< interrupt Mode Control Register 007          */
  __IO uint8_t  IMC008;            /*!< interrupt Mode Control Register 008          */
  __IO uint8_t  IMC009;            /*!< interrupt Mode Control Register 009          */
  __IO uint8_t  IMC010;            /*!< interrupt Mode Control Register 010          */
  __IO uint8_t  IMC011;            /*!< interrupt Mode Control Register 011          */
  __IO uint8_t  IMC012;            /*!< interrupt Mode Control Register 012          */
  __IO uint8_t  IMC013;            /*!< interrupt Mode Control Register 013          */
  __IO uint8_t  IMC014;            /*!< interrupt Mode Control Register 014          */
  __IO uint8_t  IMC015;            /*!< interrupt Mode Control Register 015          */
  __IO uint8_t  IMC016;            /*!< interrupt Mode Control Register 016          */
  __IO uint8_t  IMC017;            /*!< interrupt Mode Control Register 017          */
  __IO uint8_t  IMC018;            /*!< interrupt Mode Control Register 018          */
  __IO uint8_t  IMC019;            /*!< interrupt Mode Control Register 019          */
  __IO uint8_t  IMC020;            /*!< interrupt Mode Control Register 020          */
  __IO uint8_t  IMC021;            /*!< interrupt Mode Control Register 021          */
  __IO uint8_t  IMC022;            /*!< interrupt Mode Control Register 022          */
  __IO uint8_t  IMC023;            /*!< interrupt Mode Control Register 023          */
  __IO uint8_t  IMC024;            /*!< interrupt Mode Control Register 024          */
  __IO uint8_t  IMC025;            /*!< interrupt Mode Control Register 025          */
  __IO uint8_t  IMC026;            /*!< interrupt Mode Control Register 026          */
  __IO uint8_t  IMC027;            /*!< interrupt Mode Control Register 027          */
  __IO uint8_t  IMC028;            /*!< interrupt Mode Control Register 028          */
  __IO uint8_t  IMC029;            /*!< interrupt Mode Control Register 029          */
  __IO uint8_t  IMC030;            /*!< interrupt Mode Control Register 030          */
  __IO uint8_t  IMC031;            /*!< interrupt Mode Control Register 031          */
  __IO uint8_t  IMC032;            /*!< interrupt Mode Control Register 032          */
  __IO uint8_t  IMC033;            /*!< interrupt Mode Control Register 033          */
  __IO uint8_t  IMC034;            /*!< interrupt Mode Control Register 034          */
  __IO uint8_t  IMC035;            /*!< interrupt Mode Control Register 035          */
  __IO uint8_t  IMC036;            /*!< interrupt Mode Control Register 036          */
  __IO uint8_t  IMC037;            /*!< interrupt Mode Control Register 037          */
  __IO uint8_t  IMC038;            /*!< interrupt Mode Control Register 038          */
  __IO uint8_t  IMC039;            /*!< interrupt Mode Control Register 039          */
  __IO uint8_t  IMC040;            /*!< interrupt Mode Control Register 040          */
  __IO uint8_t  IMC041;            /*!< interrupt Mode Control Register 041          */
  __IO uint8_t  IMC042;            /*!< interrupt Mode Control Register 042          */
  __IO uint8_t  IMC043;            /*!< interrupt Mode Control Register 043          */
} TSB_IB_TypeDef;

/**
  * @brief Interrupt Monitor Register
  */
typedef struct
{
  __I  uint32_t FLGNMI;            /*!< NMI Interrupt Monitor Flag 0                 */
       uint32_t RESERVED0[2];
  __I  uint32_t FLG3;              /*!< Interrupt Monitor Flag 3 (096 - 127)         */
  __I  uint32_t FLG4;              /*!< Interrupt Monitor Flag 4 (128 - 159)         */
} TSB_IMN_TypeDef;

/**
  * @brief DNF
  */
typedef struct
{
  __IO uint32_t CKCR;              /*!< DNF clock Control register                   */
  __IO uint32_t ENCR;              /*!< DNF Enable register                          */
} TSB_DNF_TypeDef;

/**
  * @brief Watchdog Timer (WD)
  */
typedef struct
{
  __IO uint32_t PRO;               /*!< SIWD Protect Register                        */
  __IO uint32_t EN;                /*!< SIWD Enable Register                         */
  __O  uint32_t CR;                /*!< SIWD Control Register                        */
  __IO uint32_t MOD;               /*!< SIWD Mode Register                           */
  __I  uint32_t MONI;              /*!< SIWD Monitor Register                        */
  __IO uint32_t OSCCR;             /*!< SIWD Oscillation control register            */
} TSB_SIWD_TypeDef;

/**
  * @brief ADC
  */
typedef struct
{
  __IO uint32_t CR0;               /*!< AD Control Register 0                        */
  __IO uint32_t CR1;               /*!< AD Control Register 1                        */
  __I  uint32_t ST;                /*!< AD Status Register                           */
  __IO uint32_t CLK;               /*!< AD Conversion Clock Setting Register         */
  __IO uint32_t MOD0;              /*!< AD Mode Control Register 0                   */
  __IO uint32_t MOD1;              /*!< AD Mode Control Register 1                   */
  __IO uint32_t MOD2;              /*!< AD Mode Control Register 2                   */
       uint32_t RESERVED0;
  __IO uint32_t CMPEN;             /*!< AD Monitor function interrupt permission register*/
  __IO uint32_t CMPCR0;            /*!< AD Monitor function Setting Register 0       */
  __IO uint32_t CMPCR1;            /*!< AD Monitor function Setting Register 1       */
  __IO uint32_t CMP0;              /*!< AD Conversion Result Comparison Register 0   */
  __IO uint32_t CMP1;              /*!< AD Conversion Result Comparison Register 1   */
       uint32_t RESERVED1[3];
  __IO uint32_t PSEL0;             /*!< AD PMD Trigger Program Number Select Register 0*/
  __IO uint32_t PSEL1;             /*!< AD PMD Trigger Program Number Select Register 1*/
  __IO uint32_t PSEL2;             /*!< AD PMD Trigger Program Number Select Register 2*/
  __IO uint32_t PSEL3;             /*!< AD PMD Trigger Program Number Select Register 3*/
  __IO uint32_t PSEL4;             /*!< AD PMD Trigger Program Number Select Register 4*/
  __IO uint32_t PSEL5;             /*!< AD PMD Trigger Program Number Select Register 5*/
  __IO uint32_t PSEL6;             /*!< AD PMD Trigger Program Number Select Register 6*/
  __IO uint32_t PSEL7;             /*!< AD PMD Trigger Program Number Select Register 7*/
  __IO uint32_t PSEL8;             /*!< AD PMD Trigger Program Number Select Register 8*/
  __IO uint32_t PSEL9;             /*!< AD PMD Trigger Program Number Select Register 9*/
  __IO uint32_t PSEL10;            /*!< AD PMD Trigger Program Number Select Register 10*/
  __IO uint32_t PSEL11;            /*!< AD PMD Trigger Program Number Select Register 11*/
  __IO uint32_t PINTS0;            /*!< AD PMD Trigger Interrupt Select Register 0   */
  __IO uint32_t PINTS1;            /*!< AD PMD Trigger Interrupt Select Register 1   */
  __IO uint32_t PINTS2;            /*!< AD PMD Trigger Interrupt Select Register 2   */
  __IO uint32_t PINTS3;            /*!< AD PMD Trigger Interrupt Select Register 3   */
  __IO uint32_t PINTS4;            /*!< AD PMD Trigger Interrupt Select Register 4   */
  __IO uint32_t PINTS5;            /*!< AD PMD Trigger Interrupt Select Register 5   */
  __IO uint32_t PINTS6;            /*!< AD PMD Trigger Interrupt Select Register 6   */
  __IO uint32_t PINTS7;            /*!< AD PMD Trigger Interrupt Select Register 7   */
  __IO uint32_t PREGS;             /*!< AD PMD Trigger Conversion Result Storage Select Register 1*/
       uint32_t RESERVED2[3];
  __IO uint32_t PSET0;             /*!< AD PMD Trigger Program Register 0            */
  __IO uint32_t PSET1;             /*!< AD PMD Trigger Program Register 1            */
  __IO uint32_t PSET2;             /*!< AD PMD Trigger Program Register 2            */
  __IO uint32_t PSET3;             /*!< AD PMD Trigger Program Register 3            */
  __IO uint32_t PSET4;             /*!< AD PMD Trigger Program Register 4            */
  __IO uint32_t PSET5;             /*!< AD PMD Trigger Program Register 5            */
  __IO uint32_t PSET6;             /*!< AD PMD Trigger Program Register 6            */
  __IO uint32_t PSET7;             /*!< AD PMD Trigger Program Register 7            */
  __IO uint32_t TSET0;             /*!< AD General purpose Trigger Program Register 0*/
  __IO uint32_t TSET1;             /*!< AD General purpose Trigger Program Register 1*/
  __IO uint32_t TSET2;             /*!< AD General purpose Trigger Program Register 2*/
  __IO uint32_t TSET3;             /*!< AD General purpose Trigger Program Register 3*/
  __IO uint32_t TSET4;             /*!< AD General purpose Trigger Program Register 4*/
  __IO uint32_t TSET5;             /*!< AD General purpose Trigger Program Register 5*/
  __IO uint32_t TSET6;             /*!< AD General purpose Trigger Program Register 6*/
  __IO uint32_t TSET7;             /*!< AD General purpose Trigger Program Register 7*/
  __IO uint32_t TSET8;             /*!< AD General purpose Trigger Program Register 8*/
  __IO uint32_t TSET9;             /*!< AD General purpose Trigger Program Register 9*/
  __IO uint32_t TSET10;            /*!< AD General purpose Trigger Program Register 10*/
  __IO uint32_t TSET11;            /*!< AD General purpose Trigger Program Register 11*/
  __IO uint32_t TSET12;            /*!< AD General purpose Trigger Program Register 12*/
  __IO uint32_t TSET13;            /*!< AD General purpose Trigger Program Register 13*/
  __IO uint32_t TSET14;            /*!< AD General purpose Trigger Program Register 14*/
  __IO uint32_t TSET15;            /*!< AD General purpose Trigger Program Register 15*/
       uint32_t RESERVED3[16];
  __I  uint32_t REG0;              /*!< AD Conversion Result Register 0              */
  __I  uint32_t REG1;              /*!< AD Conversion Result Register 1              */
  __I  uint32_t REG2;              /*!< AD Conversion Result Register 2              */
  __I  uint32_t REG3;              /*!< AD Conversion Result Register 3              */
  __I  uint32_t REG4;              /*!< AD Conversion Result Register 4              */
  __I  uint32_t REG5;              /*!< AD Conversion Result Register 5              */
  __I  uint32_t REG6;              /*!< AD Conversion Result Register 6              */
  __I  uint32_t REG7;              /*!< AD Conversion Result Register 7              */
  __I  uint32_t REG8;              /*!< AD Conversion Result Register 8              */
  __I  uint32_t REG9;              /*!< AD Conversion Result Register 9              */
  __I  uint32_t REG10;             /*!< AD Conversion Result Register 10             */
  __I  uint32_t REG11;             /*!< AD Conversion Result Register 11             */
  __I  uint32_t REG12;             /*!< AD Conversion Result Register 12             */
  __I  uint32_t REG13;             /*!< AD Conversion Result Register 13             */
  __I  uint32_t REG14;             /*!< AD Conversion Result Register 14             */
  __I  uint32_t REG15;             /*!< AD Conversion Result Register 15             */
} TSB_AD_TypeDef;

/**
  * @brief 16-bit Timer/Event Counter (TB)
  */
typedef struct
{
  __IO uint32_t MOD;               /*!< T32A Mode Register                           */
       uint32_t RESERVED0[15];
  __IO uint32_t RUNA;              /*!< T32A Run Register A                          */
  __IO uint32_t CRA;               /*!< T32A Counter Control Register A              */
  __IO uint32_t CAPCRA;            /*!< T32A Capture Control Register A              */
  __O  uint32_t OUTCRA0;           /*!< T32A Output Control Register A0              */
  __IO uint32_t OUTCRA1;           /*!< T32A Output Control Register A1              */
  __IO uint32_t STA;               /*!< T32A Status Register A                       */
  __IO uint32_t IMA;               /*!< T32A Interrupt Mask Register A               */
  __I  uint32_t TMRA;              /*!< T32A Counter Capture Register A              */
  __IO uint32_t RELDA;             /*!< T32A Counter Reload Register A               */
  __IO uint32_t RGA0;              /*!< T32A Timer Register A0                       */
  __IO uint32_t RGA1;              /*!< T32A Timer Register A1                       */
  __I  uint32_t CAPA0;             /*!< T32A Timer Capture A0 Register               */
  __I  uint32_t CAPA1;             /*!< T32A Timer Cupture A1 Register               */
  __IO uint32_t DMAA;              /*!< T32A DMA Request Enable Register A           */
       uint32_t RESERVED1[2];
  __IO uint32_t RUNB;              /*!< T32A Run Register B                          */
  __IO uint32_t CRB;               /*!< T32A Counter Control Register B              */
  __IO uint32_t CAPCRB;            /*!< T32A Capture Control Register B              */
  __O  uint32_t OUTCRB0;           /*!< T32A Output Control Register B0              */
  __IO uint32_t OUTCRB1;           /*!< T32A Output Control Register B1              */
  __IO uint32_t STB;               /*!< T32A Status Register B                       */
  __IO uint32_t IMB;               /*!< T32A Interrupt Mask Register B               */
  __I  uint32_t TMRB;              /*!< T32A Counter Capture Register B              */
  __IO uint32_t RELDB;             /*!< T32A Counter Reload Register B               */
  __IO uint32_t RGB0;              /*!< T32A Timer Register B0                       */
  __IO uint32_t RGB1;              /*!< T32A Timer Register B1                       */
  __I  uint32_t CAPB0;             /*!< T32A Timer Capture B0 Register               */
  __I  uint32_t CAPB1;             /*!< T32A Timer Capture B1 Register               */
  __IO uint32_t DMAB;              /*!< T32A DMA Request Enable Register B           */
       uint32_t RESERVED2[2];
  __IO uint32_t RUNC;              /*!< T32A Run Register C                          */
  __IO uint32_t CRC;               /*!< T32A Counter Control Register C              */
  __IO uint32_t CAPCRC;            /*!< T32A Capture Control Register C              */
  __O  uint32_t OUTCRC0;           /*!< T32A Output Control Register C0              */
  __IO uint32_t OUTCRC1;           /*!< T32A Output Control Register C1              */
  __IO uint32_t STC;               /*!< T32A Status Register C                       */
  __IO uint32_t IMC;               /*!< T32A Interrupt Mask Register C               */
  __I  uint32_t TMRC;              /*!< T32A Counter Capture Register C              */
  __IO uint32_t RELDC;             /*!< T32A Counter Reload Register C               */
  __IO uint32_t RGC0;              /*!< T32A Timer Register C0                       */
  __IO uint32_t RGC1;              /*!< T32A Timer Register C1                       */
  __I  uint32_t CAPC0;             /*!< T32A Timer Capture C0 Register               */
  __I  uint32_t CAPC1;             /*!< T32A Capture Register C1                     */
  __IO uint32_t DMAC;              /*!< T32A DMA Request Enable Register C           */
  __IO uint32_t PLSCR;             /*!< T32A Pulse Count Control Register            */
} TSB_T32A_TypeDef;

/**
  * @brief General Purpose Register
  */
typedef struct
{
  __IO uint8_t  REG0;              /*!< General Purpose Register 0                   */
} TSB_GP_TypeDef;

/**
  * @brief UART
  */
typedef struct
{
  __IO uint32_t SWRST;             /*!< UART Software Reset Register                 */
  __IO uint32_t CR0;               /*!< UART Control Register 0                      */
  __IO uint32_t CR1;               /*!< UART Control Register 1                      */
  __IO uint32_t CLK;               /*!< UART Clock Control Register                  */
  __IO uint32_t BRD;               /*!< UART Baud Rate Register                      */
  __IO uint32_t TRANS;             /*!< UART Transfer Enable Register                */
  __IO uint32_t DR;                /*!< UART Data Register                           */
  __IO uint32_t SR;                /*!< UART Status Register                         */
  __O  uint32_t FIFOCLR;           /*!< UART FIFO Clear Register                     */
  __IO uint32_t ERR;               /*!< UART Error Register                          */
} TSB_UART_TypeDef;

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
  __IO uint32_t FR4;               /*!< Port A Function Register 3                   */
  __IO uint32_t FR5;               /*!< Port A Function Register 5                   */
  __IO uint32_t FR6;               /*!< Port A Function Register 6                   */
       uint32_t RESERVED0[2];
  __IO uint32_t OD;                /*!< Port A Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port A Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port A Pull-down Control Register            */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< Port A Input Control Register                */
} TSB_PA_TypeDef;

/**
  * @brief Port B
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port B Data Register                         */
  __IO uint32_t CR;                /*!< Port B Output Control Register               */
  __IO uint32_t FR1;               /*!< Port A Function Register 1                   */
       uint32_t RESERVED0[7];
  __IO uint32_t OD;                /*!< Port B Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port B Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port B Pull-down Control Register            */
       uint32_t RESERVED1;
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
  __IO uint32_t FR2;               /*!< Port C Function Register 1                   */
  __IO uint32_t FR3;               /*!< Port C Function Register 3                   */
  __IO uint32_t FR4;               /*!< Port C Function Register 3                   */
       uint32_t RESERVED0[4];
  __IO uint32_t OD;                /*!< Port C Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port C Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port C Pull-down Control Register            */
       uint32_t RESERVED1;
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
       uint32_t RESERVED0[4];
  __IO uint32_t OD;                /*!< Port D Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port D Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port D Pull-down Control Register            */
       uint32_t RESERVED1;
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
       uint32_t RESERVED0[7];
  __IO uint32_t OD;                /*!< Port E Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port E Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port E Pull-down Control Register            */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< Port E Input Control Register                */
} TSB_PE_TypeDef;

/**
  * @brief Port F
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port F Data Register                         */
  __IO uint32_t CR;                /*!< Port F Output Control Register               */
       uint32_t RESERVED0[8];
  __IO uint32_t OD;                /*!< Port F Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port F Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port F Pull-down Control Register            */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< Port F Input Control Register                */
} TSB_PF_TypeDef;

/**
  * @brief Port G
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port G Data Register                         */
  __IO uint32_t CR;                /*!< Port G Output Control Register               */
       uint32_t RESERVED0[8];
  __IO uint32_t OD;                /*!< Port G Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port G Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port G Pull-down Control Register            */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< Port G Input Control Register                */
} TSB_PG_TypeDef;

/**
  * @brief Port H
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port H Data Register                         */
  __IO uint32_t CR;                /*!< Port H Output Control Register               */
       uint32_t RESERVED0[8];
  __IO uint32_t OD;                /*!< Port H Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port H Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port H Pull-down Control Register            */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< Port H Input Control Register                */
} TSB_PH_TypeDef;

/**
  * @brief Port J
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port J Data Register                         */
       uint32_t RESERVED0[11];
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
       uint32_t RESERVED0[8];
  __IO uint32_t OD;                /*!< Port K Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port K Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port K Pull-up Control Register              */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< Port K Input Control Register                */
} TSB_PK_TypeDef;

/**
  * @brief Internal High-speed Oscillation Adjustment
  */
typedef struct
{
  __IO uint32_t OSCPRO;            /*!< TRM Protection Register                      */
  __IO uint32_t OSCEN;             /*!< TRM Enable Register                          */
  __I  uint32_t OSCINIT;           /*!< TRM Initial Trimming Level Monitor Register  */
  __IO uint32_t OSCSET;            /*!< TRM Trimming Level Setting Register          */
} TSB_TRM_TypeDef;

/**
  * @brief Oscillation Frequency Detector (OFD)
  */
typedef struct
{
  __IO uint32_t CR1;               /*!< OFD Control Register 1                       */
  __IO uint32_t CR2;               /*!< OFD Control Register 2                       */
  __IO uint32_t MN0;               /*!< OFD Lower Detection Frequency Setting Register0*/
  __IO uint32_t MN1;               /*!< OFD Lower Detection Frequency Setting Register1*/
  __IO uint32_t MX0;               /*!< OFD Higher Detection Frequency Setting Register0*/
  __IO uint32_t MX1;               /*!< OFD Higher Detection Frequency Setting Register1*/
  __IO uint32_t RST;               /*!< OFD Reset Enable Control Register            */
  __I  uint32_t STAT;              /*!< OFD Status Register                          */
  __IO uint32_t MON;               /*!< OFD External high frequency oscillaion clock monitor register */
} TSB_OFD_TypeDef;

/**
  * @brief
  */
typedef struct
{
  __IO uint32_t MDEN;              /*!< PMD Enable Register                          */
  __IO uint32_t PORTMD;            /*!< PMD Port Output Mode Register                */
  __IO uint32_t MDCR;              /*!< PMD Control Register                         */
  __I  uint32_t CNTSTA;            /*!< PMD PWM Counter Status Register              */
  __I  uint32_t MDCNT;             /*!< PMD PWM Counter Register                     */
  __IO uint32_t MDPRD;             /*!< PMD PWM Period Register                      */
  __IO uint32_t CMPU;              /*!< PMD PWM Compare U Register                   */
  __IO uint32_t CMPV;              /*!< PMD PWM Compare V Register                   */
  __IO uint32_t CMPW;              /*!< PMD PWM Compare W Register                   */
  __IO uint32_t MODESEL;           /*!< PMD Mode Selection Register                  */
  __IO uint32_t MDOUT;             /*!< PMD Conduction Control Register              */
  __IO uint32_t MDPOT;             /*!< PMD Output Setting Register                  */
  __O  uint32_t EMGREL;            /*!< PMD EMG Release Register                     */
  __IO uint32_t EMGCR;             /*!< PMD EMG Control Register                     */
  __I  uint32_t EMGSTA;            /*!< PMD EMG Status Register                      */
  __IO uint32_t OVVCR;             /*!< PMD OVV Control Register                     */
  __I  uint32_t OVVSTA;            /*!< PMD OVV Status Register                      */
  __IO uint32_t DTR;               /*!< PMD Dead Time Register                       */
  __IO uint32_t TRGCMP0;           /*!< PMD Trigger Compare Register 0               */
  __IO uint32_t TRGCMP1;           /*!< PMD Trigger Compare Register 1               */
  __IO uint32_t TRGCMP2;           /*!< PMD Trigger Compare Register 2               */
  __IO uint32_t TRGCMP3;           /*!< PMD Trigger Compare Register 3               */
  __IO uint32_t TRGCR;             /*!< PMD Trigger Control Register                 */
  __IO uint32_t TRGMD;             /*!< PMD Trigger Output Mode Setting Register     */
  __IO uint32_t TRGSEL;            /*!< PMD Trigger Output Select Register           */
  __IO uint32_t TRGSYNCR;          /*!< PMD Trigger Update Timing Setting Register   */
} TSB_PMD_TypeDef;

/**
  * @brief Advanced Encoder Input (A-ENC32)
  */
typedef struct
{
  __IO uint32_t TNCR;              /*!< ENC Control Register                         */
  __IO uint32_t RELOAD;            /*!< ENC Reload Compare Register                  */
  __IO uint32_t INT;               /*!< ENC INT Compare Register                     */
  __I  uint32_t CNT;               /*!< ENC Counter/Capture Register                 */
  __IO uint32_t MCMP;              /*!< ENC MCMP Compare Register                    */
  __IO uint32_t RATE;              /*!< ENC Phase Count Rate Register                */
  __I  uint32_t STS;               /*!< ENC Status Register                          */
  __IO uint32_t INPCR;             /*!< ENC Input Process Cntrol Register            */
  __IO uint32_t SMPDLY;            /*!< ENC Sample Delay Register                    */
  __I  uint32_t INPMON;            /*!< ENC Input Moniter Register                   */
  __IO uint32_t CLKCR;             /*!< ENC Sample Clock Control Register            */
  __IO uint32_t INTCR;             /*!< ENC Interrupt Reqyest Control Register       */
  __I  uint32_t INTF;              /*!< ENC Interrupt Event Flag Register            */
} TSB_EN_TypeDef;

/**
  * @brief Advanced Vector Engine Plus (A-VE+)
  */
typedef struct
{
  __IO uint32_t EN;                /*!< VE enable/disable                            */
  __O  uint32_t CPURUNTRG;         /*!< CPU start trigger selection                  */
  __IO uint32_t TASKAPP;           /*!< Task selection                               */
  __IO uint32_t ACTSCH;            /*!< Operation schedule selection                 */
  __IO uint32_t REPTIME;           /*!< Schedule repeat count                        */
  __IO uint32_t TRGMODE;           /*!< Start trigger mode                           */
  __IO uint32_t ERRINTEN;          /*!< Error interrupt enable/disable               */
  __O  uint32_t COMPEND;           /*!< VE forced termination                        */
  __I  uint32_t ERRDET;            /*!< Error detection                              */
  __I  uint32_t SCHTASKRUN;        /*!< Schedule executing flag/executing task       */
       uint32_t RESERVED0;
  __IO uint32_t TMPREG0;           /*!< Temporary register                           */
  __IO uint32_t TMPREG1;           /*!< Temporary register                           */
  __IO uint32_t TMPREG2;           /*!< Temporary register                           */
  __IO uint32_t TMPREG3;           /*!< Temporary register                           */
  __IO uint32_t TMPREG4;           /*!< Temporary register                           */
  __IO uint32_t TMPREG5;           /*!< Temporary register                           */
  __IO uint32_t MCTLF;             /*!< Status flags                                 */
  __IO uint32_t MODE;              /*!< Task control mode                            */
  __IO uint32_t FMODE;             /*!< Flow control                                 */
  __IO uint32_t TPWM;              /*!< PWM period rate (PWM period [s] * maximum speed * 2^16) setting*/
  __IO uint32_t OMEGA;             /*!< Rotation speed (speed [Hz] / maximum speed * 2^15) setting*/
  __IO uint32_t THETA;             /*!< Motor phase (motor phase [deg] / 360 * 2^16) setting*/
  __IO uint32_t IDREF;             /*!< d-axis reference value (current [A] / maximum current * 2^15)*/
  __IO uint32_t IQREF;             /*!< q-axis reference value (current [A] / maximum current * 2^15)*/
  __IO uint32_t VD;                /*!< d-axis voltage (voltage [V] / maximum voltage * 2^31)*/
  __IO uint32_t VQ;                /*!< q-axis voltage (voltage [V] / maximum voltage * 2^31)*/
  __IO uint32_t CIDKI;             /*!< Integral coefficient for PI control of d-axis*/
  __IO uint32_t CIDKP;             /*!< Proportional coefficient for PI control of d-axis*/
  __IO uint32_t CIQKI;             /*!< Integral coefficient for PI control of q-axis*/
  __IO uint32_t CIQKP;             /*!< Proportional coefficient for PI control of q-axis*/
  __IO uint32_t VDIH;              /*!< Upper 32 bits of integral term (VDI ) of d-axis voltage*/
  __IO uint32_t VDILH;             /*!< Lower 32 bits of integral term (VDI) of d-axis voltage*/
  __IO uint32_t VQIH;              /*!< Upper 32 bits of integral term (VQI) of q-axis voltage*/
  __IO uint32_t VQILH;             /*!< Lower 32 bits of integral term (VQI) of q-axis voltage*/
  __IO uint32_t FPWMCHG;           /*!< Switching speed (for 2-phase modulation and shift PWM)*/
  __IO uint32_t MDPRD;             /*!< PWM period setting register                  */
  __IO uint32_t MINPLS;            /*!< Minimum pulse width                          */
  __IO uint32_t TRGCRC;            /*!< Synchronizing trigger correction value       */
  __IO uint32_t VDCL;              /*!< Cosine value at THETA for output conversion (Q15 data)*/
  __IO uint32_t COS;               /*!< Cosine value at THETA for output conversion (Q15 data)*/
  __IO uint32_t SIN;               /*!< Sine value at THETA for output conversion (Q15 data)*/
  __IO uint32_t COSM;              /*!< Previous cosine value for input processing (Q15 data)*/
  __IO uint32_t SINM;              /*!< Previous sine value for input processing (Q15 data)*/
  __IO uint32_t SECTOR;            /*!< Sector information (0-11)                    */
  __IO uint32_t SECTORM;           /*!< Previous sector information for input processing (0-11)*/
  __IO uint32_t IAO;               /*!< AD conversion result of a-phase zero-current */
  __IO uint32_t IBO;               /*!< AD conversion result of b-phase zero-current */
  __IO uint32_t ICO;               /*!< AD conversion result of c-phase zero-current */
  __IO uint32_t IAADC;             /*!< AD conversion result of a-phase current      */
  __IO uint32_t IBADC;             /*!< AD conversion result of b-phase current      */
  __IO uint32_t ICADC;             /*!< AD conversion result of c-phase current      */
  __IO uint32_t VDC;               /*!< DC supply voltage (voltage [V] / maximum voltage * 2^15)*/
  __IO uint32_t ID;                /*!< d-axis current (current [A] / maximum current * 2^31)*/
  __IO uint32_t IQ;                /*!< q-axis current (current [A] / maximum current * 2^31)*/
       uint32_t RESERVED1[39];
  __IO uint32_t TADC;              /*!< ADC start wait setting                       */
  __IO uint32_t CMPU;              /*!< PMD control: CMPU setting                    */
  __IO uint32_t CMPV;              /*!< PMD control: CMPV setting                    */
  __IO uint32_t CMPW;              /*!< PMD control: CMPW setting                    */
  __IO uint32_t OUTCR;             /*!< PMD control: Output control (MDOUT)          */
  __IO uint32_t TRGCMP0;           /*!< PMD control: TRGCMP0 setting                 */
  __IO uint32_t TRGCMP1;           /*!< PMD control: TRGCMP1 setting                 */
  __IO uint32_t TRGSEL;            /*!< PMD control: Synchronous Trigger Selection setting Register*/
  __O  uint32_t EMGRS;             /*!< PMD control: EMG return (EMGCR[EMGRS])       */
       uint32_t RESERVED2[8];
  __IO uint32_t PIOLIM;            /*!< PI controled output limit value setting      */
  __IO uint32_t CIDKG;             /*!< PI controled d-axis coefficient range setting*/
  __IO uint32_t CIQKG;             /*!< PI controled q-axis coefficient range setting*/
  __IO uint32_t VSLIM;             /*!< Voltage scalar limits                        */
  __IO uint32_t VDQ;               /*!< Voltage scalar                               */
  __IO uint32_t DELTA;             /*!< Declination angle                            */
  __IO uint32_t CPHI;              /*!< Motor interlinkage magnetic flux             */
  __IO uint32_t CLD;               /*!< Motor q-axis inductance                      */
  __IO uint32_t CLQ;               /*!< Motor d-axis inductance                      */
  __IO uint32_t CR;                /*!< Motor resistance value                       */
  __IO uint32_t CPHIG;             /*!< Motor magnetic flux range setting            */
  __IO uint32_t CLG;               /*!< Motor inductance range setting               */
  __IO uint32_t CRG;               /*!< Motor resistance range setting               */
  __IO uint32_t VDE;               /*!< Non-interference controled d-axis voltage    */
  __IO uint32_t VQE;               /*!< Non-interference controled q-axis voltage    */
  __IO uint32_t DTC;               /*!< Dead time compensation                       */
  __IO uint32_t HYS;               /*!< Hysteresis Width Register for Current Polarity Determination*/
  __IO uint32_t DTCS;              /*!< Dead time compensation control / status      */
  __IO uint32_t PWMMAX;            /*!< PWM upper limit setting                      */
  __IO uint32_t PWMMIN;            /*!< PWM lower limit setting                      */
  __IO uint32_t THTCLP;            /*!< Clipped phase value setting                  */
} TSB_VE_TypeDef;

/**
  * @brief
  */
typedef struct
{
       uint32_t RESERVED0[4];
  __IO uint32_t SBMR;              /*!< Flash Security Bit Mask Register             */
  __I  uint32_t SSR;               /*!< Flash Security Status Register               */
  __O  uint32_t KCR;               /*!< Flash Key Code Register                      */
       uint32_t RESERVED1;
  __I  uint32_t SR0;               /*!< Flash Status Register 0                      */
       uint32_t RESERVED2[3];
  __I  uint32_t PSR0;              /*!< Flash Protect Status Register 0              */
  __I  uint32_t PSR1;              /*!< Flash Protect Status Register 1              */
       uint32_t RESERVED3[6];
  __IO uint32_t PMR0;              /*!< Flash Protect Mask Register 0                */
  __IO uint32_t PMR1;              /*!< Flash Protect Mask Register 1                */
       uint32_t RESERVED4[42];
  __I  uint32_t SR1;               /*!< Flash Status Register 1                      */
  __I  uint32_t SWPSR;             /*!< Flash Memory SWP Status Register             */
       uint32_t RESERVED5[14];
  __IO uint32_t AREASEL;           /*!< Flash Area Selection Register                */
       uint32_t RESERVED6;
  __IO uint32_t CR;                /*!< Flash Control Register                       */
  __IO uint32_t STSCLR;            /*!< Flash Status Clear Register                  */
  __IO uint32_t BNKCR;             /*!< Flash Bank Change Register                   */
       uint32_t RESERVED7;
  __IO uint32_t BUFDISCLR;         /*!< Flash Buffer Disable and Clear Register      */
} TSB_FC_TypeDef;


/* Memory map */
#define FLASH_BASE            (0x00000000UL)
#define RAM_BASE              (0x20000000UL)
#define PERI_BASE             (0x40000000UL)


#define TSB_IA_BASE                (PERI_BASE  + 0x003E000UL)
#define TSB_RLM_BASE               (PERI_BASE  + 0x003E400UL)
#define TSB_LVD_BASE               (PERI_BASE  + 0x003EC00UL)
#define TSB_RPAR0_BASE             (PERI_BASE  + 0x0043000UL)
#define TSB_CRC_BASE               (PERI_BASE  + 0x0043100UL)
#define TSB_TSEL0_BASE             (PERI_BASE  + 0x0040400UL)
#define TSB_TSPI0_BASE             (PERI_BASE  + 0x006A000UL)
#define TSB_TSPI1_BASE             (PERI_BASE  + 0x006A400UL)
#define TSB_TSPI2_BASE             (PERI_BASE  + 0x006A800UL)
#define TSB_CG_BASE                (PERI_BASE  + 0x0083000UL)
#define TSB_IB_BASE                (PERI_BASE  + 0x0083200UL)
#define TSB_IMN_BASE               (PERI_BASE  + 0x0083300UL)
#define TSB_DNFA_BASE              (PERI_BASE  + 0x0040200UL)
#define TSB_SIWD0_BASE             (PERI_BASE  + 0x0040600UL)
#define TSB_ADA_BASE               (PERI_BASE  + 0x005A000UL)
#define TSB_T32A0_BASE             (PERI_BASE  + 0x0061000UL)
#define TSB_T32A1_BASE             (PERI_BASE  + 0x0061400UL)
#define TSB_T32A2_BASE             (PERI_BASE  + 0x0061800UL)
#define TSB_T32A3_BASE             (PERI_BASE  + 0x0061C00UL)
#define TSB_GP_BASE                (PERI_BASE  + 0x003FF00UL)
#define TSB_UART0_BASE             (PERI_BASE  + 0x006E000UL)
#define TSB_UART1_BASE             (PERI_BASE  + 0x006E400UL)
#define TSB_UART2_BASE             (PERI_BASE  + 0x006E800UL)
#define TSB_PA_BASE                (PERI_BASE  + 0x0080000UL)
#define TSB_PB_BASE                (PERI_BASE  + 0x0080100UL)
#define TSB_PC_BASE                (PERI_BASE  + 0x0080200UL)
#define TSB_PD_BASE                (PERI_BASE  + 0x0080300UL)
#define TSB_PE_BASE                (PERI_BASE  + 0x0080400UL)
#define TSB_PF_BASE                (PERI_BASE  + 0x0080500UL)
#define TSB_PG_BASE                (PERI_BASE  + 0x0080600UL)
#define TSB_PH_BASE                (PERI_BASE  + 0x0080700UL)
#define TSB_PJ_BASE                (PERI_BASE  + 0x0080800UL)
#define TSB_PK_BASE                (PERI_BASE  + 0x0080900UL)
#define TSB_TRM_BASE               (PERI_BASE  + 0x0083100UL)
#define TSB_OFD_BASE               (PERI_BASE  + 0x0084000UL)
#define TSB_PMD0_BASE              (PERI_BASE  + 0x0089000UL)
#define TSB_EN0_BASE               (PERI_BASE  + 0x008A000UL)
#define TSB_VE0_BASE               (PERI_BASE  + 0x008B000UL)
#define TSB_FC_BASE                (PERI_BASE  + 0x1DFF0000UL)


/* Peripheral declaration */
#define TSB_IA                     ((     TSB_IA_TypeDef *)    TSB_IA_BASE)
#define TSB_RLM                    ((    TSB_RLM_TypeDef *)   TSB_RLM_BASE)
#define TSB_LVD                    ((    TSB_LVD_TypeDef *)   TSB_LVD_BASE)
#define TSB_RPAR0                  ((   TSB_RPAR_TypeDef *) TSB_RPAR0_BASE)
#define TSB_CRC                    ((    TSB_CRC_TypeDef *)   TSB_CRC_BASE)
#define TSB_TSEL0                  ((   TSB_TSEL_TypeDef *) TSB_TSEL0_BASE)
#define TSB_TSPI0                  ((   TSB_TSPI_TypeDef *) TSB_TSPI0_BASE)
#define TSB_TSPI1                  ((   TSB_TSPI_TypeDef *) TSB_TSPI1_BASE)
#define TSB_TSPI2                  ((   TSB_TSPI_TypeDef *) TSB_TSPI2_BASE)
#define TSB_CG                     ((     TSB_CG_TypeDef *)    TSB_CG_BASE)
#define TSB_IB                     ((     TSB_IB_TypeDef *)    TSB_IB_BASE)
#define TSB_IMN                    ((    TSB_IMN_TypeDef *)   TSB_IMN_BASE)
#define TSB_DNFA                   ((    TSB_DNF_TypeDef *)  TSB_DNFA_BASE)
#define TSB_SIWD0                  ((   TSB_SIWD_TypeDef *) TSB_SIWD0_BASE)
#define TSB_ADA                    ((     TSB_AD_TypeDef *)   TSB_ADA_BASE)
#define TSB_T32A0                  ((   TSB_T32A_TypeDef *) TSB_T32A0_BASE)
#define TSB_T32A1                  ((   TSB_T32A_TypeDef *) TSB_T32A1_BASE)
#define TSB_T32A2                  ((   TSB_T32A_TypeDef *) TSB_T32A2_BASE)
#define TSB_T32A3                  ((   TSB_T32A_TypeDef *) TSB_T32A3_BASE)
#define TSB_GP                     ((     TSB_GP_TypeDef *)    TSB_GP_BASE)
#define TSB_UART0                  ((   TSB_UART_TypeDef *) TSB_UART0_BASE)
#define TSB_UART1                  ((   TSB_UART_TypeDef *) TSB_UART1_BASE)
#define TSB_UART2                  ((   TSB_UART_TypeDef *) TSB_UART2_BASE)
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
#define TSB_TRM                    ((    TSB_TRM_TypeDef *)   TSB_TRM_BASE)
#define TSB_OFD                    ((    TSB_OFD_TypeDef *)   TSB_OFD_BASE)
#define TSB_PMD0                   ((    TSB_PMD_TypeDef *)  TSB_PMD0_BASE)
#define TSB_EN0                    ((     TSB_EN_TypeDef *)   TSB_EN0_BASE)
#define TSB_VE0                    ((     TSB_VE_TypeDef *)   TSB_VE0_BASE)
#define TSB_FC                     ((     TSB_FC_TypeDef *)    TSB_FC_BASE)


/* Bit-Band for Device Specific Peripheral Registers */
#define BITBAND_OFFSET (0x02000000UL)
#define BITBAND_PERI_BASE (PERI_BASE + BITBAND_OFFSET)
#define BITBAND_PERI(addr, bitnum) (BITBAND_PERI_BASE + (((uint32_t)(addr) - PERI_BASE) << 5) + ((uint32_t)(bitnum) << 2))






/* RAM Parity (RAMP) */
#define TSB_RPAR0_CTL_RPAREN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RPAR0->CTL,0)))
#define TSB_RPAR0_CTL_RPARF                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_RPAR0->CTL,1)))
#define TSB_RPAR0_ST_RPARFG0                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_RPAR0->ST,0)))
#define TSB_RPAR0_ST_RPARFG1                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_RPAR0->ST,1)))
#define TSB_RPAR0_CLR_RPARCLR0                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_RPAR0->CLR,0)))
#define TSB_RPAR0_CLR_RPARCLR1                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_RPAR0->CLR,1)))



/* TRGSEL */
#define TSB_TSEL0_CR0_EN0                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,0)))
#define TSB_TSEL0_CR0_EN1                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,8)))
#define TSB_TSEL0_CR0_EN2                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,16)))
#define TSB_TSEL0_CR0_EN3                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,24)))
#define TSB_TSEL0_CR1_EN4                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,0)))
#define TSB_TSEL0_CR1_EN5                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,8)))
#define TSB_TSEL0_CR1_EN6                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,16)))
#define TSB_TSEL0_CR1_EN7                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,24)))
#define TSB_TSEL0_CR2_EN8                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,0)))
#define TSB_TSEL0_CR2_EN9                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,8)))
#define TSB_TSEL0_CR2_EN10                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,16)))
#define TSB_TSEL0_CR2_EN11                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,24)))
#define TSB_TSEL0_CR3_EN12                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,0)))
#define TSB_TSEL0_CR3_EN13                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,8)))
#define TSB_TSEL0_CR3_EN14                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,16)))
#define TSB_TSEL0_CR3_EN15                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,24)))


/* Serial Interface (TSPI) */
#define TSB_TSPI0_CR0_TSPIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR0,0)))
#define TSB_TSPI0_CR1_MSTR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR1,12)))
#define TSB_TSPI0_CR1_TSPIMS                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR1,13)))
#define TSB_TSPI0_CR1_TRXE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR1,14)))
#define TSB_TSPI0_CR1_TRGEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR1,15)))
#define TSB_TSPI0_CR2_DMARE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,0)))
#define TSB_TSPI0_CR2_DMATE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,1)))
#define TSB_TSPI0_CR2_INTERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,2)))
#define TSB_TSPI0_CR2_INTRXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,4)))
#define TSB_TSPI0_CR2_INTRXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,5)))
#define TSB_TSPI0_CR2_INTTXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,6)))
#define TSB_TSPI0_CR2_INTTXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,7)))
#define TSB_TSPI0_CR2_RXDLY                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,16)))
#define TSB_TSPI0_CR2_TXDEMP                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR2,21)))
#define TSB_TSPI0_CR3_RFFLLCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR3,0)))
#define TSB_TSPI0_CR3_TFEMPCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI0->CR3,1)))
#define TSB_TSPI0_FMTR0_CKPOL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->FMTR0,14)))
#define TSB_TSPI0_FMTR0_CKPHA                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->FMTR0,15)))
#define TSB_TSPI0_FMTR0_CS0POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->FMTR0,16)))
#define TSB_TSPI0_FMTR0_CS1POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->FMTR0,17)))
#define TSB_TSPI0_FMTR0_CS2POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->FMTR0,18)))
#define TSB_TSPI0_FMTR0_CS3POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->FMTR0,19)))
#define TSB_TSPI0_FMTR0_DIR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->FMTR0,31)))
#define TSB_TSPI0_FMTR1_VPM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->FMTR1,0)))
#define TSB_TSPI0_FMTR1_VPE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->FMTR1,1)))
#define TSB_TSPI0_SR_RFFLL                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,4)))
#define TSB_TSPI0_SR_INTRXFF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,5)))
#define TSB_TSPI0_SR_RXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,6)))
#define TSB_TSPI0_SR_RXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,7)))
#define TSB_TSPI0_SR_TFEMP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,20)))
#define TSB_TSPI0_SR_INTTXWF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,21)))
#define TSB_TSPI0_SR_TXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,22)))
#define TSB_TSPI0_SR_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,23)))
#define TSB_TSPI0_SR_TSPISUE                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI0->SR,31)))
#define TSB_TSPI0_ERR_PERR                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI0->ERR,0)))
#define TSB_TSPI0_ERR_OVRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->ERR,1)))
#define TSB_TSPI0_ERR_UDRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->ERR,2)))
#define TSB_TSPI0_ERR_TRGERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->ERR,3)))

#define TSB_TSPI1_CR0_TSPIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR0,0)))
#define TSB_TSPI1_CR1_MSTR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR1,12)))
#define TSB_TSPI1_CR1_TSPIMS                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR1,13)))
#define TSB_TSPI1_CR1_TRXE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR1,14)))
#define TSB_TSPI1_CR1_TRGEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR1,15)))
#define TSB_TSPI1_CR2_DMARE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,0)))
#define TSB_TSPI1_CR2_DMATE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,1)))
#define TSB_TSPI1_CR2_INTERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,2)))
#define TSB_TSPI1_CR2_INTRXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,4)))
#define TSB_TSPI1_CR2_INTRXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,5)))
#define TSB_TSPI1_CR2_INTTXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,6)))
#define TSB_TSPI1_CR2_INTTXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,7)))
#define TSB_TSPI1_CR2_RXDLY                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,16)))
#define TSB_TSPI1_CR2_TXDEMP                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR2,21)))
#define TSB_TSPI1_CR3_RFFLLCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR3,0)))
#define TSB_TSPI1_CR3_TFEMPCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI1->CR3,1)))
#define TSB_TSPI1_FMTR0_CKPOL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->FMTR0,14)))
#define TSB_TSPI1_FMTR0_CKPHA                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->FMTR0,15)))
#define TSB_TSPI1_FMTR0_CS0POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->FMTR0,16)))
#define TSB_TSPI1_FMTR0_CS1POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->FMTR0,17)))
#define TSB_TSPI1_FMTR0_CS2POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->FMTR0,18)))
#define TSB_TSPI1_FMTR0_CS3POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->FMTR0,19)))
#define TSB_TSPI1_FMTR0_DIR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->FMTR0,31)))
#define TSB_TSPI1_FMTR1_VPM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->FMTR1,0)))
#define TSB_TSPI1_FMTR1_VPE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->FMTR1,1)))
#define TSB_TSPI1_SR_RFFLL                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,4)))
#define TSB_TSPI1_SR_INTRXFF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,5)))
#define TSB_TSPI1_SR_RXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,6)))
#define TSB_TSPI1_SR_RXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,7)))
#define TSB_TSPI1_SR_TFEMP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,20)))
#define TSB_TSPI1_SR_INTTXWF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,21)))
#define TSB_TSPI1_SR_TXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,22)))
#define TSB_TSPI1_SR_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,23)))
#define TSB_TSPI1_SR_TSPISUE                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI1->SR,31)))
#define TSB_TSPI1_ERR_PERR                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI1->ERR,0)))
#define TSB_TSPI1_ERR_OVRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->ERR,1)))
#define TSB_TSPI1_ERR_UDRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->ERR,2)))
#define TSB_TSPI1_ERR_TRGERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->ERR,3)))

#define TSB_TSPI2_CR0_TSPIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR0,0)))
#define TSB_TSPI2_CR1_MSTR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR1,12)))
#define TSB_TSPI2_CR1_TSPIMS                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR1,13)))
#define TSB_TSPI2_CR1_TRXE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR1,14)))
#define TSB_TSPI2_CR1_TRGEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR1,15)))
#define TSB_TSPI2_CR2_DMARE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,0)))
#define TSB_TSPI2_CR2_DMATE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,1)))
#define TSB_TSPI2_CR2_INTERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,2)))
#define TSB_TSPI2_CR2_INTRXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,4)))
#define TSB_TSPI2_CR2_INTRXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,5)))
#define TSB_TSPI2_CR2_INTTXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,6)))
#define TSB_TSPI2_CR2_INTTXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,7)))
#define TSB_TSPI2_CR2_RXDLY                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,16)))
#define TSB_TSPI2_CR2_TXDEMP                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR2,21)))
#define TSB_TSPI2_CR3_RFFLLCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR3,0)))
#define TSB_TSPI2_CR3_TFEMPCLR                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_TSPI2->CR3,1)))
#define TSB_TSPI2_FMTR0_CKPOL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->FMTR0,14)))
#define TSB_TSPI2_FMTR0_CKPHA                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->FMTR0,15)))
#define TSB_TSPI2_FMTR0_CS0POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->FMTR0,16)))
#define TSB_TSPI2_FMTR0_CS1POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->FMTR0,17)))
#define TSB_TSPI2_FMTR0_CS2POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->FMTR0,18)))
#define TSB_TSPI2_FMTR0_CS3POL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->FMTR0,19)))
#define TSB_TSPI2_FMTR0_DIR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->FMTR0,31)))
#define TSB_TSPI2_FMTR1_VPM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->FMTR1,0)))
#define TSB_TSPI2_FMTR1_VPE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->FMTR1,1)))
#define TSB_TSPI2_SR_RFFLL                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,4)))
#define TSB_TSPI2_SR_INTRXFF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,5)))
#define TSB_TSPI2_SR_RXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,6)))
#define TSB_TSPI2_SR_RXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,7)))
#define TSB_TSPI2_SR_TFEMP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,20)))
#define TSB_TSPI2_SR_INTTXWF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,21)))
#define TSB_TSPI2_SR_TXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,22)))
#define TSB_TSPI2_SR_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,23)))
#define TSB_TSPI2_SR_TSPISUE                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI2->SR,31)))
#define TSB_TSPI2_ERR_PERR                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_TSPI2->ERR,0)))
#define TSB_TSPI2_ERR_OVRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->ERR,1)))
#define TSB_TSPI2_ERR_UDRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->ERR,2)))
#define TSB_TSPI2_ERR_TRGERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI2->ERR,3)))


/* Clock Generator (CG) */
#define TSB_CG_OSCCR_IHOSC1EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,0)))
#define TSB_CG_OSCCR_IHOSC2EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,3)))
#define TSB_CG_OSCCR_OSCSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,8)))
#define TSB_CG_OSCCR_OSCF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,9)))
#define TSB_CG_OSCCR_IHOSC1F                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,16)))
#define TSB_CG_PLL0SEL_PLL0ON                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->PLL0SEL,0)))
#define TSB_CG_PLL0SEL_PLL0SEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->PLL0SEL,1)))
#define TSB_CG_PLL0SEL_PLL0ST                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_CG->PLL0SEL,2)))
#define TSB_CG_WUPHCR_WUON                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_CG->WUPHCR,0)))
#define TSB_CG_WUPHCR_WUEF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_CG->WUPHCR,1)))
#define TSB_CG_WUPHCR_WUCLK                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->WUPHCR,8)))
#define TSB_CG_FSYSENA_IPENA00                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,0)))
#define TSB_CG_FSYSENA_IPENA01                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,1)))
#define TSB_CG_FSYSENA_IPENA02                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,2)))
#define TSB_CG_FSYSENA_IPENA03                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,3)))
#define TSB_CG_FSYSENA_IPENA04                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,4)))
#define TSB_CG_FSYSENA_IPENA05                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,5)))
#define TSB_CG_FSYSENA_IPENA06                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,6)))
#define TSB_CG_FSYSENA_IPENA07                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,7)))
#define TSB_CG_FSYSENA_IPENA08                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,8)))
#define TSB_CG_FSYSENA_IPENA09                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,9)))
#define TSB_CG_FSYSENA_IPENA10                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,10)))
#define TSB_CG_FSYSENA_IPENA11                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,11)))
#define TSB_CG_FSYSENA_IPENA12                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,12)))
#define TSB_CG_FSYSENA_IPENA13                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,13)))
#define TSB_CG_FSYSENA_IPENA14                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,14)))
#define TSB_CG_FSYSENA_IPENA15                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,15)))
#define TSB_CG_FSYSENA_IPENA16                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,16)))
#define TSB_CG_FSYSENA_IPENA17                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,17)))
#define TSB_CG_FSYSENA_IPENA18                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,18)))
#define TSB_CG_FSYSENA_IPENA19                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,19)))
#define TSB_CG_FSYSENA_IPENA20                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,20)))
#define TSB_CG_FSYSENA_IPENA21                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,21)))
#define TSB_CG_FSYSENA_IPENA22                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,22)))
#define TSB_CG_FSYSENA_IPENA23                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,23)))
#define TSB_CG_FSYSENA_IPENA24                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,24)))
#define TSB_CG_FSYSENA_IPENA25                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,25)))
#define TSB_CG_FSYSENA_IPENA26                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,26)))
#define TSB_CG_FSYSENA_IPENA27                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,27)))
#define TSB_CG_FSYSENA_IPENA28                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,28)))
#define TSB_CG_FSYSENA_IPENA29                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,29)))
#define TSB_CG_FSYSENA_IPENA30                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,30)))
#define TSB_CG_FSYSENA_IPENA31                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,31)))
#define TSB_CG_FCEN_FCIPEN00                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCEN,0)))
#define TSB_CG_FCEN_FCIPEN01                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCEN,1)))
#define TSB_CG_SPCLKEN_ADCKEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SPCLKEN,16)))


/* Interrupt Control B Register */
#define TSB_IB_IMC000_INTNFLG                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_IB->IMC000,5)))
#define TSB_IB_IMC000_INTNCLR                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_IB->IMC000,7)))
#define TSB_IB_IMC001_INTNFLG                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_IB->IMC001,5)))
#define TSB_IB_IMC001_INTNCLR                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_IB->IMC001,7)))
#define TSB_IB_IMC002_INTNFLG                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_IB->IMC002,5)))
#define TSB_IB_IMC002_INTNCLR                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_IB->IMC002,7)))
#define TSB_IB_IMC003_INTNFLG                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_IB->IMC003,5)))
#define TSB_IB_IMC003_INTNCLR                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_IB->IMC003,7)))
#define TSB_IB_IMC004_INTNFLG                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_IB->IMC004,5)))
#define TSB_IB_IMC004_INTNCLR                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_IB->IMC004,7)))
#define TSB_IB_IMC005_INTNFLG                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_IB->IMC005,5)))
#define TSB_IB_IMC005_INTNCLR                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_IB->IMC005,7)))
#define TSB_IB_IMC006_INTNFLG                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_IB->IMC006,5)))
#define TSB_IB_IMC006_INTNCLR                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_IB->IMC006,7)))
#define TSB_IB_IMC007_INTNFLG                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_IB->IMC007,5)))
#define TSB_IB_IMC007_INTNCLR                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_IB->IMC007,7)))


/* Interrupt Monitor Register */
#define TSB_IMN_FLGNMI_INT000FLG                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLGNMI,0)))
#define TSB_IMN_FLGNMI_INT016FLG                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLGNMI,16)))
#define TSB_IMN_FLG3_INT096FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,0)))
#define TSB_IMN_FLG3_INT097FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,1)))
#define TSB_IMN_FLG3_INT098FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,2)))
#define TSB_IMN_FLG3_INT099FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,3)))
#define TSB_IMN_FLG3_INT100FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,4)))
#define TSB_IMN_FLG3_INT101FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,5)))
#define TSB_IMN_FLG3_INT102FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,6)))
#define TSB_IMN_FLG3_INT103FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,7)))
#define TSB_IMN_FLG3_INT104FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,8)))
#define TSB_IMN_FLG3_INT105FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,9)))
#define TSB_IMN_FLG3_INT106FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,10)))
#define TSB_IMN_FLG3_INT107FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,11)))
#define TSB_IMN_FLG3_INT108FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,12)))
#define TSB_IMN_FLG3_INT109FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,13)))
#define TSB_IMN_FLG3_INT110FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,14)))
#define TSB_IMN_FLG3_INT111FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,15)))
#define TSB_IMN_FLG3_INT112FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,16)))
#define TSB_IMN_FLG3_INT113FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,17)))
#define TSB_IMN_FLG3_INT114FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,18)))
#define TSB_IMN_FLG3_INT115FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,19)))
#define TSB_IMN_FLG3_INT116FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,20)))
#define TSB_IMN_FLG3_INT117FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,21)))
#define TSB_IMN_FLG3_INT118FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,22)))
#define TSB_IMN_FLG3_INT119FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,23)))
#define TSB_IMN_FLG3_INT120FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,24)))
#define TSB_IMN_FLG3_INT121FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,25)))
#define TSB_IMN_FLG3_INT122FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,26)))
#define TSB_IMN_FLG3_INT123FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,27)))
#define TSB_IMN_FLG3_INT124FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,28)))
#define TSB_IMN_FLG3_INT125FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,29)))
#define TSB_IMN_FLG3_INT126FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,30)))
#define TSB_IMN_FLG3_INT127FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG3,31)))
#define TSB_IMN_FLG4_INT128FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,0)))
#define TSB_IMN_FLG4_INT129FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,1)))
#define TSB_IMN_FLG4_INT130FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,2)))
#define TSB_IMN_FLG4_INT131FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,3)))
#define TSB_IMN_FLG4_INT132FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,4)))
#define TSB_IMN_FLG4_INT133FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,5)))
#define TSB_IMN_FLG4_INT134FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,6)))
#define TSB_IMN_FLG4_INT135FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,7)))
#define TSB_IMN_FLG4_INT136FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,8)))
#define TSB_IMN_FLG4_INT137FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,9)))
#define TSB_IMN_FLG4_INT138FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,10)))
#define TSB_IMN_FLG4_INT139FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,11)))


/* DNF */
#define TSB_DNFA_ENCR_NFEN0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,0)))
#define TSB_DNFA_ENCR_NFEN1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,1)))
#define TSB_DNFA_ENCR_NFEN2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,2)))
#define TSB_DNFA_ENCR_NFEN3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,3)))
#define TSB_DNFA_ENCR_NFEN4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,4)))
#define TSB_DNFA_ENCR_NFEN5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,5)))
#define TSB_DNFA_ENCR_NFEN6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,6)))
#define TSB_DNFA_ENCR_NFEN7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,7)))
#define TSB_DNFA_ENCR_NFEN8                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,8)))
#define TSB_DNFA_ENCR_NFEN9                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,9)))
#define TSB_DNFA_ENCR_NFEN10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,10)))
#define TSB_DNFA_ENCR_NFEN11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,11)))
#define TSB_DNFA_ENCR_NFEN12                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,12)))
#define TSB_DNFA_ENCR_NFEN13                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,13)))
#define TSB_DNFA_ENCR_NFEN14                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,14)))
#define TSB_DNFA_ENCR_NFEN15                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFA->ENCR,15)))


/* Watchdog Timer (WD) */
#define TSB_SIWD0_EN_WDTE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SIWD0->EN,0)))
#define TSB_SIWD0_EN_WDTF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_SIWD0->EN,1)))
#define TSB_SIWD0_MOD_RESCR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SIWD0->MOD,0)))
#define TSB_SIWD0_MOD_INTF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SIWD0->MOD,1)))
#define TSB_SIWD0_OSCCR_OSCPRO                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_SIWD0->OSCCR,0)))


/* ADC */
#define TSB_ADA_CR0_CNT                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CR0,0)))
#define TSB_ADA_CR0_SGL                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_ADA->CR0,1)))
#define TSB_ADA_CR0_ADEN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CR0,7)))
#define TSB_ADA_CR1_TRGEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CR1,0)))
#define TSB_ADA_CR1_TRGDMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CR1,4)))
#define TSB_ADA_CR1_SGLDMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CR1,5)))
#define TSB_ADA_CR1_CNTDMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CR1,6)))
#define TSB_ADA_ST_PMDF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->ST,0)))
#define TSB_ADA_ST_TRGF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->ST,1)))
#define TSB_ADA_ST_SNGF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->ST,2)))
#define TSB_ADA_ST_CNTF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->ST,3)))
#define TSB_ADA_ST_ADBF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->ST,7)))
#define TSB_ADA_MOD0_DACON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD0,0)))
#define TSB_ADA_MOD0_RCUT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD0,1)))
#define TSB_ADA_CMPEN_CMP0EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPEN,0)))
#define TSB_ADA_CMPEN_CMP1EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPEN,1)))
#define TSB_ADA_CMPCR0_ADBIG0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR0,5)))
#define TSB_ADA_CMPCR0_CMPCND0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR0,6)))
#define TSB_ADA_CMPCR1_ADBIG1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR1,5)))
#define TSB_ADA_CMPCR1_CMPCND1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR1,6)))
#define TSB_ADA_PSEL0_PENS0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSEL0,7)))
#define TSB_ADA_PSEL1_PENS1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSEL1,7)))
#define TSB_ADA_PSEL2_PENS2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSEL2,7)))
#define TSB_ADA_PSEL3_PENS3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSEL3,7)))
#define TSB_ADA_PSEL4_PENS4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSEL4,7)))
#define TSB_ADA_PSEL5_PENS5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSEL5,7)))
#define TSB_ADA_PSEL6_PENS6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSEL6,7)))
#define TSB_ADA_PSEL7_PENS7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSEL7,7)))
#define TSB_ADA_PSEL8_PENS8                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSEL8,7)))
#define TSB_ADA_PSEL9_PENS9                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSEL9,7)))
#define TSB_ADA_PSEL10_PENS10                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSEL10,7)))
#define TSB_ADA_PSEL11_PENS11                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSEL11,7)))
#define TSB_ADA_PSET0_ENSP00                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET0,7)))
#define TSB_ADA_PSET0_ENSP01                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET0,15)))
#define TSB_ADA_PSET0_ENSP02                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET0,23)))
#define TSB_ADA_PSET0_ENSP03                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET0,31)))
#define TSB_ADA_PSET1_ENSP10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET1,7)))
#define TSB_ADA_PSET1_ENSP11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET1,15)))
#define TSB_ADA_PSET1_ENSP12                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET1,23)))
#define TSB_ADA_PSET1_ENSP13                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET1,31)))
#define TSB_ADA_PSET2_ENSP20                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET2,7)))
#define TSB_ADA_PSET2_ENSP21                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET2,15)))
#define TSB_ADA_PSET2_ENSP22                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET2,23)))
#define TSB_ADA_PSET2_ENSP23                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET2,31)))
#define TSB_ADA_PSET3_ENSP30                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET3,7)))
#define TSB_ADA_PSET3_ENSP31                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET3,15)))
#define TSB_ADA_PSET3_ENSP32                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET3,23)))
#define TSB_ADA_PSET3_ENSP33                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET3,31)))
#define TSB_ADA_PSET4_ENSP40                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET4,7)))
#define TSB_ADA_PSET4_ENSP41                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET4,15)))
#define TSB_ADA_PSET4_ENSP42                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET4,23)))
#define TSB_ADA_PSET4_ENSP43                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET4,31)))
#define TSB_ADA_PSET5_ENSP50                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET5,7)))
#define TSB_ADA_PSET5_ENSP51                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET5,15)))
#define TSB_ADA_PSET5_ENSP52                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET5,23)))
#define TSB_ADA_PSET5_ENSP53                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET5,31)))
#define TSB_ADA_PSET6_ENSP60                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET6,7)))
#define TSB_ADA_PSET6_ENSP61                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET6,15)))
#define TSB_ADA_PSET6_ENSP62                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET6,23)))
#define TSB_ADA_PSET6_ENSP63                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET6,31)))
#define TSB_ADA_PSET7_ENSP70                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET7,7)))
#define TSB_ADA_PSET7_ENSP71                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET7,15)))
#define TSB_ADA_PSET7_ENSP72                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET7,23)))
#define TSB_ADA_PSET7_ENSP73                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->PSET7,31)))
#define TSB_ADA_TSET0_ENINT0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET0,7)))
#define TSB_ADA_TSET1_ENINT1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET1,7)))
#define TSB_ADA_TSET2_ENINT2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET2,7)))
#define TSB_ADA_TSET3_ENINT3                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET3,7)))
#define TSB_ADA_TSET4_ENINT4                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET4,7)))
#define TSB_ADA_TSET5_ENINT5                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET5,7)))
#define TSB_ADA_TSET6_ENINT6                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET6,7)))
#define TSB_ADA_TSET7_ENINT7                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET7,7)))
#define TSB_ADA_TSET8_ENINT8                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET8,7)))
#define TSB_ADA_TSET9_ENINT9                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET9,7)))
#define TSB_ADA_TSET10_ENINT10                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET10,7)))
#define TSB_ADA_TSET11_ENINT11                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET11,7)))
#define TSB_ADA_TSET12_ENINT12                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET12,7)))
#define TSB_ADA_TSET13_ENINT13                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET13,7)))
#define TSB_ADA_TSET14_ENINT14                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET14,7)))
#define TSB_ADA_TSET15_ENINT15                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET15,7)))
#define TSB_ADA_REG0_ADRF0                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG0,0)))
#define TSB_ADA_REG0_ADOVRF0                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG0,1)))
#define TSB_ADA_REG0_ADRF_M0                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG0,28)))
#define TSB_ADA_REG0_ADOVRF_M0                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG0,29)))
#define TSB_ADA_REG1_ADRF1                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG1,0)))
#define TSB_ADA_REG1_ADOVRF1                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG1,1)))
#define TSB_ADA_REG1_ADRF_M1                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG1,28)))
#define TSB_ADA_REG1_ADOVRF_M1                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG1,29)))
#define TSB_ADA_REG2_ADRF2                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG2,0)))
#define TSB_ADA_REG2_ADOVRF2                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG2,1)))
#define TSB_ADA_REG2_ADRF_M2                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG2,28)))
#define TSB_ADA_REG2_ADOVRF_M2                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG2,29)))
#define TSB_ADA_REG3_ADRF3                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG3,0)))
#define TSB_ADA_REG3_ADOVRF3                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG3,1)))
#define TSB_ADA_REG3_ADRF_M3                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG3,28)))
#define TSB_ADA_REG3_ADOVRF_M3                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG3,29)))
#define TSB_ADA_REG4_ADRF4                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG4,0)))
#define TSB_ADA_REG4_ADOVRF4                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG4,1)))
#define TSB_ADA_REG4_ADRF_M4                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG4,28)))
#define TSB_ADA_REG4_ADOVRF_M4                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG4,29)))
#define TSB_ADA_REG5_ADRF5                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG5,0)))
#define TSB_ADA_REG5_ADOVRF5                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG5,1)))
#define TSB_ADA_REG5_ADRF_M5                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG5,28)))
#define TSB_ADA_REG5_ADOVRF_M5                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG5,29)))
#define TSB_ADA_REG6_ADRF6                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG6,0)))
#define TSB_ADA_REG6_ADOVRF6                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG6,1)))
#define TSB_ADA_REG6_ADRF_M6                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG6,28)))
#define TSB_ADA_REG6_ADOVRF_M6                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG6,29)))
#define TSB_ADA_REG7_ADRF7                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG7,0)))
#define TSB_ADA_REG7_ADOVRF7                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG7,1)))
#define TSB_ADA_REG7_ADRF_M7                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG7,28)))
#define TSB_ADA_REG7_ADOVRF_M7                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG7,29)))
#define TSB_ADA_REG8_ADRF8                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG8,0)))
#define TSB_ADA_REG8_ADOVRF8                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG8,1)))
#define TSB_ADA_REG8_ADRF_M8                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG8,28)))
#define TSB_ADA_REG8_ADOVRF_M8                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG8,29)))
#define TSB_ADA_REG9_ADRF9                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG9,0)))
#define TSB_ADA_REG9_ADOVRF9                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG9,1)))
#define TSB_ADA_REG9_ADRF_M9                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG9,28)))
#define TSB_ADA_REG9_ADOVRF_M9                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG9,29)))
#define TSB_ADA_REG10_ADRF10                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG10,0)))
#define TSB_ADA_REG10_ADOVRF10                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG10,1)))
#define TSB_ADA_REG10_ADRF_M10                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG10,28)))
#define TSB_ADA_REG10_ADOVRF_M10                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG10,29)))
#define TSB_ADA_REG11_ADRF11                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG11,0)))
#define TSB_ADA_REG11_ADOVRF11                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG11,1)))
#define TSB_ADA_REG11_ADRF_M11                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG11,28)))
#define TSB_ADA_REG11_ADOVRF_M11                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG11,29)))
#define TSB_ADA_REG12_ADRF12                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG12,0)))
#define TSB_ADA_REG12_ADOVRF12                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG12,1)))
#define TSB_ADA_REG12_ADRF_M12                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG12,28)))
#define TSB_ADA_REG12_ADOVRF_M12                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG12,29)))
#define TSB_ADA_REG13_ADRF13                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG13,0)))
#define TSB_ADA_REG13_ADOVRF13                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG13,1)))
#define TSB_ADA_REG13_ADRF_M13                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG13,28)))
#define TSB_ADA_REG13_ADOVRF_M13                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG13,29)))
#define TSB_ADA_REG14_ADRF14                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG14,0)))
#define TSB_ADA_REG14_ADOVRF14                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG14,1)))
#define TSB_ADA_REG14_ADRF_M14                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG14,28)))
#define TSB_ADA_REG14_ADOVRF_M14                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG14,29)))
#define TSB_ADA_REG15_ADRF15                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG15,0)))
#define TSB_ADA_REG15_ADOVRF15                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG15,1)))
#define TSB_ADA_REG15_ADRF_M15                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG15,28)))
#define TSB_ADA_REG15_ADOVRF_M15                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG15,29)))


/* 16-bit Timer/Event Counter (TB) */
#define TSB_T32A0_MOD_MODE32                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->MOD,0)))
#define TSB_T32A0_MOD_HALT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->MOD,1)))
#define TSB_T32A0_RUNA_RUNA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->RUNA,0)))
#define TSB_T32A0_RUNA_SFTSTAA                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A0->RUNA,1)))
#define TSB_T32A0_RUNA_SFTSTPA                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A0->RUNA,2)))
#define TSB_T32A0_RUNA_RUNFLGA                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A0->RUNA,4)))
#define TSB_T32A0_CRA_WBFA                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->CRA,20)))
#define TSB_T32A0_STA_INTA0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->STA,0)))
#define TSB_T32A0_STA_INTA1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->STA,1)))
#define TSB_T32A0_STA_INTOFA                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->STA,2)))
#define TSB_T32A0_STA_INTUFA                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->STA,3)))
#define TSB_T32A0_IMA_IMA0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->IMA,0)))
#define TSB_T32A0_IMA_IMA1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->IMA,1)))
#define TSB_T32A0_IMA_IMOFA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->IMA,2)))
#define TSB_T32A0_IMA_IMUFA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->IMA,3)))
#define TSB_T32A0_DMAA_DMAENA0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->DMAA,0)))
#define TSB_T32A0_DMAA_DMAENA1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->DMAA,1)))
#define TSB_T32A0_DMAA_DMAENA2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->DMAA,2)))
#define TSB_T32A0_RUNB_RUNB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->RUNB,0)))
#define TSB_T32A0_RUNB_SFTSTAB                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A0->RUNB,1)))
#define TSB_T32A0_RUNB_SFTSTPB                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A0->RUNB,2)))
#define TSB_T32A0_RUNB_RUNFLGB                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A0->RUNB,4)))
#define TSB_T32A0_CRB_WBFB                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->CRB,20)))
#define TSB_T32A0_STB_INTB0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->STB,0)))
#define TSB_T32A0_STB_INTB1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->STB,1)))
#define TSB_T32A0_STB_INTOFB                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->STB,2)))
#define TSB_T32A0_STB_INTUFB                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->STB,3)))
#define TSB_T32A0_IMB_IMB0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->IMB,0)))
#define TSB_T32A0_IMB_IMB1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->IMB,1)))
#define TSB_T32A0_IMB_IMOFB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->IMB,2)))
#define TSB_T32A0_IMB_IMUFB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->IMB,3)))
#define TSB_T32A0_DMAB_DMAENB0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->DMAB,0)))
#define TSB_T32A0_DMAB_DMAENB1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->DMAB,1)))
#define TSB_T32A0_DMAB_DMAENB2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->DMAB,2)))
#define TSB_T32A0_RUNC_RUNC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->RUNC,0)))
#define TSB_T32A0_RUNC_SFTSTAC                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A0->RUNC,1)))
#define TSB_T32A0_RUNC_SFTSTPC                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A0->RUNC,2)))
#define TSB_T32A0_RUNC_RUNFLGC                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A0->RUNC,4)))
#define TSB_T32A0_CRC_WBFC                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->CRC,20)))
#define TSB_T32A0_STC_INTC0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->STC,0)))
#define TSB_T32A0_STC_INTC1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->STC,1)))
#define TSB_T32A0_STC_INTOFC                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->STC,2)))
#define TSB_T32A0_STC_INTUFC                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->STC,3)))
#define TSB_T32A0_STC_INTSTERR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->STC,4)))
#define TSB_T32A0_IMC_IMC0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->IMC,0)))
#define TSB_T32A0_IMC_IMC1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->IMC,1)))
#define TSB_T32A0_IMC_IMOFC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->IMC,2)))
#define TSB_T32A0_IMC_IMUFC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->IMC,3)))
#define TSB_T32A0_IMC_IMSTERR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->IMC,4)))
#define TSB_T32A0_DMAC_DMAENC0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->DMAC,0)))
#define TSB_T32A0_DMAC_DMAENC1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->DMAC,1)))
#define TSB_T32A0_DMAC_DMAENC2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->DMAC,2)))
#define TSB_T32A0_PLSCR_PMODE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->PLSCR,0)))
#define TSB_T32A0_PLSCR_PDIR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A0->PLSCR,1)))

#define TSB_T32A1_MOD_MODE32                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->MOD,0)))
#define TSB_T32A1_MOD_HALT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->MOD,1)))
#define TSB_T32A1_RUNA_RUNA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->RUNA,0)))
#define TSB_T32A1_RUNA_SFTSTAA                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A1->RUNA,1)))
#define TSB_T32A1_RUNA_SFTSTPA                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A1->RUNA,2)))
#define TSB_T32A1_RUNA_RUNFLGA                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A1->RUNA,4)))
#define TSB_T32A1_CRA_WBFA                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->CRA,20)))
#define TSB_T32A1_STA_INTA0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->STA,0)))
#define TSB_T32A1_STA_INTA1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->STA,1)))
#define TSB_T32A1_STA_INTOFA                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->STA,2)))
#define TSB_T32A1_STA_INTUFA                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->STA,3)))
#define TSB_T32A1_IMA_IMA0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->IMA,0)))
#define TSB_T32A1_IMA_IMA1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->IMA,1)))
#define TSB_T32A1_IMA_IMOFA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->IMA,2)))
#define TSB_T32A1_IMA_IMUFA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->IMA,3)))
#define TSB_T32A1_DMAA_DMAENA0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->DMAA,0)))
#define TSB_T32A1_DMAA_DMAENA1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->DMAA,1)))
#define TSB_T32A1_DMAA_DMAENA2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->DMAA,2)))
#define TSB_T32A1_RUNB_RUNB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->RUNB,0)))
#define TSB_T32A1_RUNB_SFTSTAB                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A1->RUNB,1)))
#define TSB_T32A1_RUNB_SFTSTPB                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A1->RUNB,2)))
#define TSB_T32A1_RUNB_RUNFLGB                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A1->RUNB,4)))
#define TSB_T32A1_CRB_WBFB                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->CRB,20)))
#define TSB_T32A1_STB_INTB0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->STB,0)))
#define TSB_T32A1_STB_INTB1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->STB,1)))
#define TSB_T32A1_STB_INTOFB                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->STB,2)))
#define TSB_T32A1_STB_INTUFB                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->STB,3)))
#define TSB_T32A1_IMB_IMB0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->IMB,0)))
#define TSB_T32A1_IMB_IMB1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->IMB,1)))
#define TSB_T32A1_IMB_IMOFB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->IMB,2)))
#define TSB_T32A1_IMB_IMUFB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->IMB,3)))
#define TSB_T32A1_DMAB_DMAENB0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->DMAB,0)))
#define TSB_T32A1_DMAB_DMAENB1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->DMAB,1)))
#define TSB_T32A1_DMAB_DMAENB2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->DMAB,2)))
#define TSB_T32A1_RUNC_RUNC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->RUNC,0)))
#define TSB_T32A1_RUNC_SFTSTAC                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A1->RUNC,1)))
#define TSB_T32A1_RUNC_SFTSTPC                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A1->RUNC,2)))
#define TSB_T32A1_RUNC_RUNFLGC                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A1->RUNC,4)))
#define TSB_T32A1_CRC_WBFC                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->CRC,20)))
#define TSB_T32A1_STC_INTC0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->STC,0)))
#define TSB_T32A1_STC_INTC1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->STC,1)))
#define TSB_T32A1_STC_INTOFC                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->STC,2)))
#define TSB_T32A1_STC_INTUFC                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->STC,3)))
#define TSB_T32A1_STC_INTSTERR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->STC,4)))
#define TSB_T32A1_IMC_IMC0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->IMC,0)))
#define TSB_T32A1_IMC_IMC1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->IMC,1)))
#define TSB_T32A1_IMC_IMOFC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->IMC,2)))
#define TSB_T32A1_IMC_IMUFC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->IMC,3)))
#define TSB_T32A1_IMC_IMSTERR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->IMC,4)))
#define TSB_T32A1_DMAC_DMAENC0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->DMAC,0)))
#define TSB_T32A1_DMAC_DMAENC1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->DMAC,1)))
#define TSB_T32A1_DMAC_DMAENC2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->DMAC,2)))
#define TSB_T32A1_PLSCR_PMODE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->PLSCR,0)))
#define TSB_T32A1_PLSCR_PDIR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A1->PLSCR,1)))

#define TSB_T32A2_MOD_MODE32                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->MOD,0)))
#define TSB_T32A2_MOD_HALT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->MOD,1)))
#define TSB_T32A2_RUNA_RUNA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->RUNA,0)))
#define TSB_T32A2_RUNA_SFTSTAA                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A2->RUNA,1)))
#define TSB_T32A2_RUNA_SFTSTPA                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A2->RUNA,2)))
#define TSB_T32A2_RUNA_RUNFLGA                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A2->RUNA,4)))
#define TSB_T32A2_CRA_WBFA                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->CRA,20)))
#define TSB_T32A2_STA_INTA0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->STA,0)))
#define TSB_T32A2_STA_INTA1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->STA,1)))
#define TSB_T32A2_STA_INTOFA                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->STA,2)))
#define TSB_T32A2_STA_INTUFA                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->STA,3)))
#define TSB_T32A2_IMA_IMA0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->IMA,0)))
#define TSB_T32A2_IMA_IMA1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->IMA,1)))
#define TSB_T32A2_IMA_IMOFA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->IMA,2)))
#define TSB_T32A2_IMA_IMUFA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->IMA,3)))
#define TSB_T32A2_DMAA_DMAENA0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->DMAA,0)))
#define TSB_T32A2_DMAA_DMAENA1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->DMAA,1)))
#define TSB_T32A2_DMAA_DMAENA2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->DMAA,2)))
#define TSB_T32A2_RUNB_RUNB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->RUNB,0)))
#define TSB_T32A2_RUNB_SFTSTAB                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A2->RUNB,1)))
#define TSB_T32A2_RUNB_SFTSTPB                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A2->RUNB,2)))
#define TSB_T32A2_RUNB_RUNFLGB                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A2->RUNB,4)))
#define TSB_T32A2_CRB_WBFB                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->CRB,20)))
#define TSB_T32A2_STB_INTB0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->STB,0)))
#define TSB_T32A2_STB_INTB1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->STB,1)))
#define TSB_T32A2_STB_INTOFB                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->STB,2)))
#define TSB_T32A2_STB_INTUFB                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->STB,3)))
#define TSB_T32A2_IMB_IMB0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->IMB,0)))
#define TSB_T32A2_IMB_IMB1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->IMB,1)))
#define TSB_T32A2_IMB_IMOFB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->IMB,2)))
#define TSB_T32A2_IMB_IMUFB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->IMB,3)))
#define TSB_T32A2_DMAB_DMAENB0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->DMAB,0)))
#define TSB_T32A2_DMAB_DMAENB1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->DMAB,1)))
#define TSB_T32A2_DMAB_DMAENB2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->DMAB,2)))
#define TSB_T32A2_RUNC_RUNC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->RUNC,0)))
#define TSB_T32A2_RUNC_SFTSTAC                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A2->RUNC,1)))
#define TSB_T32A2_RUNC_SFTSTPC                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A2->RUNC,2)))
#define TSB_T32A2_RUNC_RUNFLGC                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A2->RUNC,4)))
#define TSB_T32A2_CRC_WBFC                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->CRC,20)))
#define TSB_T32A2_STC_INTC0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->STC,0)))
#define TSB_T32A2_STC_INTC1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->STC,1)))
#define TSB_T32A2_STC_INTOFC                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->STC,2)))
#define TSB_T32A2_STC_INTUFC                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->STC,3)))
#define TSB_T32A2_STC_INTSTERR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->STC,4)))
#define TSB_T32A2_IMC_IMC0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->IMC,0)))
#define TSB_T32A2_IMC_IMC1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->IMC,1)))
#define TSB_T32A2_IMC_IMOFC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->IMC,2)))
#define TSB_T32A2_IMC_IMUFC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->IMC,3)))
#define TSB_T32A2_IMC_IMSTERR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->IMC,4)))
#define TSB_T32A2_DMAC_DMAENC0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->DMAC,0)))
#define TSB_T32A2_DMAC_DMAENC1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->DMAC,1)))
#define TSB_T32A2_DMAC_DMAENC2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->DMAC,2)))
#define TSB_T32A2_PLSCR_PMODE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->PLSCR,0)))
#define TSB_T32A2_PLSCR_PDIR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A2->PLSCR,1)))

#define TSB_T32A3_MOD_MODE32                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->MOD,0)))
#define TSB_T32A3_MOD_HALT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->MOD,1)))
#define TSB_T32A3_RUNA_RUNA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->RUNA,0)))
#define TSB_T32A3_RUNA_SFTSTAA                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A3->RUNA,1)))
#define TSB_T32A3_RUNA_SFTSTPA                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A3->RUNA,2)))
#define TSB_T32A3_RUNA_RUNFLGA                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A3->RUNA,4)))
#define TSB_T32A3_CRA_WBFA                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->CRA,20)))
#define TSB_T32A3_STA_INTA0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->STA,0)))
#define TSB_T32A3_STA_INTA1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->STA,1)))
#define TSB_T32A3_STA_INTOFA                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->STA,2)))
#define TSB_T32A3_STA_INTUFA                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->STA,3)))
#define TSB_T32A3_IMA_IMA0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->IMA,0)))
#define TSB_T32A3_IMA_IMA1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->IMA,1)))
#define TSB_T32A3_IMA_IMOFA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->IMA,2)))
#define TSB_T32A3_IMA_IMUFA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->IMA,3)))
#define TSB_T32A3_DMAA_DMAENA0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->DMAA,0)))
#define TSB_T32A3_DMAA_DMAENA1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->DMAA,1)))
#define TSB_T32A3_DMAA_DMAENA2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->DMAA,2)))
#define TSB_T32A3_RUNB_RUNB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->RUNB,0)))
#define TSB_T32A3_RUNB_SFTSTAB                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A3->RUNB,1)))
#define TSB_T32A3_RUNB_SFTSTPB                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A3->RUNB,2)))
#define TSB_T32A3_RUNB_RUNFLGB                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A3->RUNB,4)))
#define TSB_T32A3_CRB_WBFB                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->CRB,20)))
#define TSB_T32A3_STB_INTB0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->STB,0)))
#define TSB_T32A3_STB_INTB1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->STB,1)))
#define TSB_T32A3_STB_INTOFB                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->STB,2)))
#define TSB_T32A3_STB_INTUFB                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->STB,3)))
#define TSB_T32A3_IMB_IMB0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->IMB,0)))
#define TSB_T32A3_IMB_IMB1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->IMB,1)))
#define TSB_T32A3_IMB_IMOFB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->IMB,2)))
#define TSB_T32A3_IMB_IMUFB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->IMB,3)))
#define TSB_T32A3_DMAB_DMAENB0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->DMAB,0)))
#define TSB_T32A3_DMAB_DMAENB1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->DMAB,1)))
#define TSB_T32A3_DMAB_DMAENB2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->DMAB,2)))
#define TSB_T32A3_RUNC_RUNC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->RUNC,0)))
#define TSB_T32A3_RUNC_SFTSTAC                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A3->RUNC,1)))
#define TSB_T32A3_RUNC_SFTSTPC                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A3->RUNC,2)))
#define TSB_T32A3_RUNC_RUNFLGC                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A3->RUNC,4)))
#define TSB_T32A3_CRC_WBFC                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->CRC,20)))
#define TSB_T32A3_STC_INTC0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->STC,0)))
#define TSB_T32A3_STC_INTC1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->STC,1)))
#define TSB_T32A3_STC_INTOFC                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->STC,2)))
#define TSB_T32A3_STC_INTUFC                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->STC,3)))
#define TSB_T32A3_STC_INTSTERR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->STC,4)))
#define TSB_T32A3_IMC_IMC0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->IMC,0)))
#define TSB_T32A3_IMC_IMC1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->IMC,1)))
#define TSB_T32A3_IMC_IMOFC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->IMC,2)))
#define TSB_T32A3_IMC_IMUFC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->IMC,3)))
#define TSB_T32A3_IMC_IMSTERR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->IMC,4)))
#define TSB_T32A3_DMAC_DMAENC0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->DMAC,0)))
#define TSB_T32A3_DMAC_DMAENC1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->DMAC,1)))
#define TSB_T32A3_DMAC_DMAENC2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->DMAC,2)))
#define TSB_T32A3_PLSCR_PMODE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->PLSCR,0)))
#define TSB_T32A3_PLSCR_PDIR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A3->PLSCR,1)))



/* UART */
#define TSB_UART0_SWRST_SWRSTF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART0->SWRST,7)))
#define TSB_UART0_CR0_PE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR0,2)))
#define TSB_UART0_CR0_EVEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR0,3)))
#define TSB_UART0_CR0_SBLEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR0,4)))
#define TSB_UART0_CR0_DIR                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR0,5)))
#define TSB_UART0_CR0_IV                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR0,6)))
#define TSB_UART0_CR0_WU                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR0,8)))
#define TSB_UART0_CR0_RTSE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR0,9)))
#define TSB_UART0_CR0_CTSE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR0,10)))
#define TSB_UART0_CR0_LPB                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR0,15)))
#define TSB_UART0_CR1_DMARE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR1,0)))
#define TSB_UART0_CR1_DMATE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR1,1)))
#define TSB_UART0_CR1_INTERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR1,2)))
#define TSB_UART0_CR1_INTRXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR1,4)))
#define TSB_UART0_CR1_INTRXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR1,5)))
#define TSB_UART0_CR1_INTTXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR1,6)))
#define TSB_UART0_CR1_INTTXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR1,7)))
#define TSB_UART0_BRD_KEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->BRD,23)))
#define TSB_UART0_TRANS_RXE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->TRANS,0)))
#define TSB_UART0_TRANS_TXE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->TRANS,1)))
#define TSB_UART0_TRANS_TXTRG                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->TRANS,2)))
#define TSB_UART0_TRANS_BK                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->TRANS,3)))
#define TSB_UART0_DR_BERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART0->DR,16)))
#define TSB_UART0_DR_FERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART0->DR,17)))
#define TSB_UART0_DR_PERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART0->DR,18)))
#define TSB_UART0_SR_RXFF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->SR,5)))
#define TSB_UART0_SR_RXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->SR,6)))
#define TSB_UART0_SR_RXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART0->SR,7)))
#define TSB_UART0_SR_TXFF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->SR,13)))
#define TSB_UART0_SR_TXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->SR,14)))
#define TSB_UART0_SR_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART0->SR,15)))
#define TSB_UART0_SR_SUE                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART0->SR,31)))
#define TSB_UART0_FIFOCLR_RFCLR                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART0->FIFOCLR,0)))
#define TSB_UART0_FIFOCLR_TFCLR                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART0->FIFOCLR,1)))
#define TSB_UART0_ERR_BERR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->ERR,0)))
#define TSB_UART0_ERR_FERR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->ERR,1)))
#define TSB_UART0_ERR_PERR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->ERR,2)))
#define TSB_UART0_ERR_OVRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->ERR,3)))
#define TSB_UART0_ERR_TRGERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->ERR,4)))

#define TSB_UART1_SWRST_SWRSTF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART1->SWRST,7)))
#define TSB_UART1_CR0_PE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR0,2)))
#define TSB_UART1_CR0_EVEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR0,3)))
#define TSB_UART1_CR0_SBLEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR0,4)))
#define TSB_UART1_CR0_DIR                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR0,5)))
#define TSB_UART1_CR0_IV                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR0,6)))
#define TSB_UART1_CR0_WU                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR0,8)))
#define TSB_UART1_CR0_RTSE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR0,9)))
#define TSB_UART1_CR0_CTSE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR0,10)))
#define TSB_UART1_CR0_LPB                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR0,15)))
#define TSB_UART1_CR1_DMARE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR1,0)))
#define TSB_UART1_CR1_DMATE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR1,1)))
#define TSB_UART1_CR1_INTERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR1,2)))
#define TSB_UART1_CR1_INTRXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR1,4)))
#define TSB_UART1_CR1_INTRXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR1,5)))
#define TSB_UART1_CR1_INTTXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR1,6)))
#define TSB_UART1_CR1_INTTXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR1,7)))
#define TSB_UART1_BRD_KEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->BRD,23)))
#define TSB_UART1_TRANS_RXE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->TRANS,0)))
#define TSB_UART1_TRANS_TXE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->TRANS,1)))
#define TSB_UART1_TRANS_TXTRG                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->TRANS,2)))
#define TSB_UART1_TRANS_BK                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->TRANS,3)))
#define TSB_UART1_DR_BERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART1->DR,16)))
#define TSB_UART1_DR_FERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART1->DR,17)))
#define TSB_UART1_DR_PERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART1->DR,18)))
#define TSB_UART1_SR_RXFF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->SR,5)))
#define TSB_UART1_SR_RXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->SR,6)))
#define TSB_UART1_SR_RXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART1->SR,7)))
#define TSB_UART1_SR_TXFF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->SR,13)))
#define TSB_UART1_SR_TXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->SR,14)))
#define TSB_UART1_SR_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART1->SR,15)))
#define TSB_UART1_SR_SUE                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART1->SR,31)))
#define TSB_UART1_FIFOCLR_RFCLR                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART1->FIFOCLR,0)))
#define TSB_UART1_FIFOCLR_TFCLR                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART1->FIFOCLR,1)))
#define TSB_UART1_ERR_BERR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->ERR,0)))
#define TSB_UART1_ERR_FERR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->ERR,1)))
#define TSB_UART1_ERR_PERR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->ERR,2)))
#define TSB_UART1_ERR_OVRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->ERR,3)))
#define TSB_UART1_ERR_TRGERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->ERR,4)))

#define TSB_UART2_SWRST_SWRSTF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART2->SWRST,7)))
#define TSB_UART2_CR0_PE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR0,2)))
#define TSB_UART2_CR0_EVEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR0,3)))
#define TSB_UART2_CR0_SBLEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR0,4)))
#define TSB_UART2_CR0_DIR                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR0,5)))
#define TSB_UART2_CR0_IV                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR0,6)))
#define TSB_UART2_CR0_WU                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR0,8)))
#define TSB_UART2_CR0_RTSE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR0,9)))
#define TSB_UART2_CR0_CTSE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR0,10)))
#define TSB_UART2_CR0_LPB                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR0,15)))
#define TSB_UART2_CR1_DMARE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR1,0)))
#define TSB_UART2_CR1_DMATE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR1,1)))
#define TSB_UART2_CR1_INTERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR1,2)))
#define TSB_UART2_CR1_INTRXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR1,4)))
#define TSB_UART2_CR1_INTRXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR1,5)))
#define TSB_UART2_CR1_INTTXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR1,6)))
#define TSB_UART2_CR1_INTTXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR1,7)))
#define TSB_UART2_BRD_KEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->BRD,23)))
#define TSB_UART2_TRANS_RXE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->TRANS,0)))
#define TSB_UART2_TRANS_TXE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->TRANS,1)))
#define TSB_UART2_TRANS_TXTRG                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->TRANS,2)))
#define TSB_UART2_TRANS_BK                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->TRANS,3)))
#define TSB_UART2_DR_BERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART2->DR,16)))
#define TSB_UART2_DR_FERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART2->DR,17)))
#define TSB_UART2_DR_PERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART2->DR,18)))
#define TSB_UART2_SR_RXFF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->SR,5)))
#define TSB_UART2_SR_RXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->SR,6)))
#define TSB_UART2_SR_RXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART2->SR,7)))
#define TSB_UART2_SR_TXFF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->SR,13)))
#define TSB_UART2_SR_TXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->SR,14)))
#define TSB_UART2_SR_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART2->SR,15)))
#define TSB_UART2_SR_SUE                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART2->SR,31)))
#define TSB_UART2_FIFOCLR_RFCLR                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART2->FIFOCLR,0)))
#define TSB_UART2_FIFOCLR_TFCLR                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART2->FIFOCLR,1)))
#define TSB_UART2_ERR_BERR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->ERR,0)))
#define TSB_UART2_ERR_FERR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->ERR,1)))
#define TSB_UART2_ERR_PERR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->ERR,2)))
#define TSB_UART2_ERR_OVRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->ERR,3)))
#define TSB_UART2_ERR_TRGERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->ERR,4)))


/* Port A */
#define TSB_PA_DATA_PA0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,0)))
#define TSB_PA_DATA_PA1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,1)))
#define TSB_PA_DATA_PA2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,2)))
#define TSB_PA_DATA_PA3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,3)))
#define TSB_PA_CR_PA0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,0)))
#define TSB_PA_CR_PA1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,1)))
#define TSB_PA_CR_PA2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,2)))
#define TSB_PA_CR_PA3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,3)))
#define TSB_PA_FR1_PA0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,0)))
#define TSB_PA_FR1_PA1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,1)))
#define TSB_PA_FR1_PA2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,2)))
#define TSB_PA_FR1_PA3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,3)))
#define TSB_PA_FR2_PA0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR2,0)))
#define TSB_PA_FR2_PA1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR2,1)))
#define TSB_PA_FR2_PA2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR2,2)))
#define TSB_PA_FR2_PA3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR2,3)))
#define TSB_PA_FR3_PA1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR3,1)))
#define TSB_PA_FR3_PA2F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR3,2)))
#define TSB_PA_FR4_PA1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR4,1)))
#define TSB_PA_FR4_PA2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR4,2)))
#define TSB_PA_FR5_PA1F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR5,1)))
#define TSB_PA_FR5_PA2F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR5,2)))
#define TSB_PA_FR6_PA1F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR6,1)))
#define TSB_PA_FR6_PA2F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR6,2)))
#define TSB_PA_OD_PA0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,0)))
#define TSB_PA_OD_PA1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,1)))
#define TSB_PA_OD_PA2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,2)))
#define TSB_PA_OD_PA3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,3)))
#define TSB_PA_PUP_PA0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,0)))
#define TSB_PA_PUP_PA1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,1)))
#define TSB_PA_PUP_PA2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,2)))
#define TSB_PA_PUP_PA3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,3)))
#define TSB_PA_PDN_PA0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,0)))
#define TSB_PA_PDN_PA1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,1)))
#define TSB_PA_PDN_PA2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,2)))
#define TSB_PA_PDN_PA3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,3)))
#define TSB_PA_IE_PA0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,0)))
#define TSB_PA_IE_PA1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,1)))
#define TSB_PA_IE_PA2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,2)))
#define TSB_PA_IE_PA3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,3)))


/* Port B */
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
#define TSB_PB_OD_PB0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,0)))
#define TSB_PB_OD_PB1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,1)))
#define TSB_PB_OD_PB2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,2)))
#define TSB_PB_OD_PB3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,3)))
#define TSB_PB_PUP_PB0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,0)))
#define TSB_PB_PUP_PB1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,1)))
#define TSB_PB_PUP_PB2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,2)))
#define TSB_PB_PUP_PB3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,3)))
#define TSB_PB_PDN_PB0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,0)))
#define TSB_PB_PDN_PB1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,1)))
#define TSB_PB_PDN_PB2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,2)))
#define TSB_PB_PDN_PB3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,3)))
#define TSB_PB_IE_PB0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,0)))
#define TSB_PB_IE_PB1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,1)))
#define TSB_PB_IE_PB2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,2)))
#define TSB_PB_IE_PB3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->IE,3)))


/* Port C */
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
#define TSB_PC_FR1_PC1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,1)))
#define TSB_PC_FR1_PC2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,2)))
#define TSB_PC_FR1_PC3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,3)))
#define TSB_PC_FR1_PC4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,4)))
#define TSB_PC_FR1_PC5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,5)))
#define TSB_PC_FR2_PC0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,0)))
#define TSB_PC_FR2_PC1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,1)))
#define TSB_PC_FR2_PC2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,2)))
#define TSB_PC_FR2_PC3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,3)))
#define TSB_PC_FR2_PC4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,4)))
#define TSB_PC_FR2_PC5F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,5)))
#define TSB_PC_FR3_PC0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,0)))
#define TSB_PC_FR3_PC1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,1)))
#define TSB_PC_FR3_PC3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,3)))
#define TSB_PC_FR3_PC4F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,4)))
#define TSB_PC_FR3_PC5F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,5)))
#define TSB_PC_FR4_PC3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR4,3)))
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


/* Port D */
#define TSB_PD_DATA_PD0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->DATA,0)))
#define TSB_PD_DATA_PD1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->DATA,1)))
#define TSB_PD_DATA_PD2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->DATA,2)))
#define TSB_PD_DATA_PD3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->DATA,3)))
#define TSB_PD_DATA_PD4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->DATA,4)))
#define TSB_PD_CR_PD0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,0)))
#define TSB_PD_CR_PD1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,1)))
#define TSB_PD_CR_PD2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,2)))
#define TSB_PD_CR_PD3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,3)))
#define TSB_PD_CR_PD4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,4)))
#define TSB_PD_FR1_PD0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,0)))
#define TSB_PD_FR1_PD1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,1)))
#define TSB_PD_FR1_PD2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,2)))
#define TSB_PD_FR1_PD3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,3)))
#define TSB_PD_FR1_PD4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,4)))
#define TSB_PD_FR2_PD0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,0)))
#define TSB_PD_FR2_PD1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,1)))
#define TSB_PD_FR2_PD2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,2)))
#define TSB_PD_FR2_PD3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,3)))
#define TSB_PD_FR2_PD4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,4)))
#define TSB_PD_FR3_PD0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR3,0)))
#define TSB_PD_FR3_PD1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR3,1)))
#define TSB_PD_FR3_PD2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR3,2)))
#define TSB_PD_FR3_PD3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR3,3)))
#define TSB_PD_FR4_PD0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR4,0)))
#define TSB_PD_FR4_PD2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR4,2)))
#define TSB_PD_FR4_PD3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR4,3)))
#define TSB_PD_OD_PD0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,0)))
#define TSB_PD_OD_PD1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,1)))
#define TSB_PD_OD_PD2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,2)))
#define TSB_PD_OD_PD3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,3)))
#define TSB_PD_OD_PD4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,4)))
#define TSB_PD_PUP_PD0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,0)))
#define TSB_PD_PUP_PD1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,1)))
#define TSB_PD_PUP_PD2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,2)))
#define TSB_PD_PUP_PD3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,3)))
#define TSB_PD_PUP_PD4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,4)))
#define TSB_PD_PDN_PD0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PDN,0)))
#define TSB_PD_PDN_PD1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PDN,1)))
#define TSB_PD_PDN_PD2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PDN,2)))
#define TSB_PD_PDN_PD3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PDN,3)))
#define TSB_PD_PDN_PD4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PDN,4)))
#define TSB_PD_IE_PD0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,0)))
#define TSB_PD_IE_PD1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,1)))
#define TSB_PD_IE_PD2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,2)))
#define TSB_PD_IE_PD3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,3)))
#define TSB_PD_IE_PD4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,4)))


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


/* Port F */
#define TSB_PF_DATA_PF0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->DATA,0)))
#define TSB_PF_CR_PF0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->CR,0)))
#define TSB_PF_OD_PF0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->OD,0)))
#define TSB_PF_PUP_PF0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PUP,0)))
#define TSB_PF_PDN_PF0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->PDN,0)))
#define TSB_PF_IE_PF0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->IE,0)))


/* Port G */
#define TSB_PG_DATA_PG0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,0)))
#define TSB_PG_DATA_PG1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,1)))
#define TSB_PG_DATA_PG2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,2)))
#define TSB_PG_DATA_PG3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,3)))
#define TSB_PG_CR_PG0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,0)))
#define TSB_PG_CR_PG1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,1)))
#define TSB_PG_CR_PG2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,2)))
#define TSB_PG_CR_PG3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,3)))
#define TSB_PG_OD_PG0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,0)))
#define TSB_PG_OD_PG1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,1)))
#define TSB_PG_OD_PG2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,2)))
#define TSB_PG_OD_PG3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,3)))
#define TSB_PG_PUP_PG0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,0)))
#define TSB_PG_PUP_PG1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,1)))
#define TSB_PG_PUP_PG2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,2)))
#define TSB_PG_PUP_PG3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,3)))
#define TSB_PG_PDN_PG0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,0)))
#define TSB_PG_PDN_PG1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,1)))
#define TSB_PG_PDN_PG2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,2)))
#define TSB_PG_PDN_PG3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,3)))
#define TSB_PG_IE_PG0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,0)))
#define TSB_PG_IE_PG1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,1)))
#define TSB_PG_IE_PG2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,2)))
#define TSB_PG_IE_PG3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,3)))


/* Port H */
#define TSB_PH_DATA_PH0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,0)))
#define TSB_PH_DATA_PH1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,1)))
#define TSB_PH_CR_PH0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,0)))
#define TSB_PH_CR_PH1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,1)))
#define TSB_PH_OD_PH0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->OD,0)))
#define TSB_PH_OD_PH1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->OD,1)))
#define TSB_PH_PUP_PH0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,0)))
#define TSB_PH_PUP_PH1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PUP,1)))
#define TSB_PH_PDN_PH0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PDN,0)))
#define TSB_PH_PDN_PH1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PDN,1)))
#define TSB_PH_IE_PH0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,0)))
#define TSB_PH_IE_PH1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,1)))


/* Port J */
#define TSB_PJ_DATA_PJ0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,0)))
#define TSB_PJ_DATA_PJ1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,1)))
#define TSB_PJ_PDN_PJ0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PDN,0)))
#define TSB_PJ_PDN_PJ1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->PDN,1)))
#define TSB_PJ_IE_PJ0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,0)))
#define TSB_PJ_IE_PJ1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->IE,1)))


/* Port K */
#define TSB_PK_DATA_PK0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,0)))
#define TSB_PK_CR_PK0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->CR,0)))
#define TSB_PK_OD_PK0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,0)))
#define TSB_PK_PUP_PK0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,0)))
#define TSB_PK_PDN_PK0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,0)))
#define TSB_PK_IE_PK0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,0)))


/* Internal High-speed Oscillation Adjustment */
#define TSB_TRM_OSCEN_TRIMEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TRM->OSCEN,0)))


/* Oscillation Frequency Detector (OFD) */
#define TSB_OFD_RST_OFDRSTEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_OFD->RST,0)))
#define TSB_OFD_STAT_FRQERR                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_OFD->STAT,0)))
#define TSB_OFD_STAT_OFDBUSY                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_OFD->STAT,1)))
#define TSB_OFD_MON_OFDMON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_OFD->MON,0)))


/*  */
#define TSB_PMD0_MDEN_PWMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDEN,0)))
#define TSB_PMD0_MDCR_PWMMD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDCR,0)))
#define TSB_PMD0_MDCR_PINT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDCR,3)))
#define TSB_PMD0_MDCR_DTYMD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDCR,4)))
#define TSB_PMD0_MDCR_SYNTMD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDCR,5)))
#define TSB_PMD0_MDCR_PWMCK                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDCR,6)))
#define TSB_PMD0_MDCR_DTCREN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDCR,7)))
#define TSB_PMD0_CNTSTA_UPDWN                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD0->CNTSTA,0)))
#define TSB_PMD0_MODESEL_MDSEL0                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MODESEL,0)))
#define TSB_PMD0_MODESEL_MDSEL1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MODESEL,1)))
#define TSB_PMD0_MODESEL_MDSEL2                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MODESEL,2)))
#define TSB_PMD0_MODESEL_MDSEL3                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MODESEL,3)))
#define TSB_PMD0_MODESEL_DCMPEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MODESEL,7)))
#define TSB_PMD0_MDOUT_UPWM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDOUT,8)))
#define TSB_PMD0_MDOUT_VPWM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDOUT,9)))
#define TSB_PMD0_MDOUT_WPWM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDOUT,10)))
#define TSB_PMD0_MDPOT_POLL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDPOT,2)))
#define TSB_PMD0_MDPOT_POLH                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDPOT,3)))
#define TSB_PMD0_EMGCR_EMGEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->EMGCR,0)))
#define TSB_PMD0_EMGCR_EMGRS                      (*((__O  uint32_t *)BITBAND_PERI(&TSB_PMD0->EMGCR,1)))
#define TSB_PMD0_EMGCR_INHEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->EMGCR,5)))
#define TSB_PMD0_EMGSTA_EMGST                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD0->EMGSTA,0)))
#define TSB_PMD0_EMGSTA_EMGI                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD0->EMGSTA,1)))
#define TSB_PMD0_OVVCR_OVVEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVCR,0)))
#define TSB_PMD0_OVVCR_OVVRS                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVCR,1)))
#define TSB_PMD0_OVVCR_OVVISEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVCR,2)))
#define TSB_PMD0_OVVCR_ADIN0EN                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVCR,5)))
#define TSB_PMD0_OVVCR_ADIN1EN                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVCR,6)))
#define TSB_PMD0_OVVSTA_OVVST                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVSTA,0)))
#define TSB_PMD0_OVVSTA_OVVI                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVSTA,1)))
#define TSB_PMD0_TRGCR_TRG0BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->TRGCR,3)))
#define TSB_PMD0_TRGCR_TRG1BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->TRGCR,7)))
#define TSB_PMD0_TRGCR_TRG2BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->TRGCR,11)))
#define TSB_PMD0_TRGCR_TRG3BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->TRGCR,15)))
#define TSB_PMD0_TRGMD_EMGTGE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->TRGMD,0)))
#define TSB_PMD0_TRGMD_TRGOUT                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->TRGMD,1)))


/* Advanced Encoder Input (A-ENC32) */
#define TSB_EN0_TNCR_ZEACT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,5)))
#define TSB_EN0_TNCR_ENRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,6)))
#define TSB_EN0_TNCR_ZEN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,7)))
#define TSB_EN0_TNCR_ENCLR                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,10)))
#define TSB_EN0_TNCR_SFTCAP                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,11)))
#define TSB_EN0_TNCR_TRGCAPMD                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,12)))
#define TSB_EN0_TNCR_P3EN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,16)))
#define TSB_EN0_TNCR_SDTEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,21)))
#define TSB_EN0_TNCR_MCMPMD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,24)))
#define TSB_EN0_TNCR_TOVMD                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,25)))
#define TSB_EN0_TNCR_CMPSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->TNCR,28)))
#define TSB_EN0_STS_INERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->STS,0)))
#define TSB_EN0_STS_PDERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->STS,1)))
#define TSB_EN0_STS_SKPDT                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->STS,2)))
#define TSB_EN0_STS_ZDET                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->STS,12)))
#define TSB_EN0_STS_UD                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->STS,13)))
#define TSB_EN0_STS_REVERR                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->STS,14)))
#define TSB_EN0_INPCR_SYNCSPLEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->INPCR,0)))
#define TSB_EN0_INPCR_SYNCSPLMD                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->INPCR,1)))
#define TSB_EN0_INPCR_SYNCNCZEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->INPCR,2)))
#define TSB_EN0_INPCR_PDSTT                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_EN0->INPCR,6)))
#define TSB_EN0_INPCR_PDSTP                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_EN0->INPCR,7)))
#define TSB_EN0_INPMON_SPLMONA                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->INPMON,0)))
#define TSB_EN0_INPMON_SPLMONB                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->INPMON,1)))
#define TSB_EN0_INPMON_SPLMONZ                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->INPMON,2)))
#define TSB_EN0_INPMON_DETMONA                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->INPMON,4)))
#define TSB_EN0_INPMON_DETMONB                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->INPMON,5)))
#define TSB_EN0_INPMON_DETMONZ                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->INPMON,6)))
#define TSB_EN0_INTCR_TPLSIE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->INTCR,0)))
#define TSB_EN0_INTCR_CAPIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->INTCR,1)))
#define TSB_EN0_INTCR_ERRIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->INTCR,2)))
#define TSB_EN0_INTCR_CMPIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->INTCR,3)))
#define TSB_EN0_INTCR_RLDIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->INTCR,4)))
#define TSB_EN0_INTCR_MCMPIE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN0->INTCR,5)))
#define TSB_EN0_INTF_TPLSF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->INTF,0)))
#define TSB_EN0_INTF_CAPF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->INTF,1)))
#define TSB_EN0_INTF_ERRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->INTF,2)))
#define TSB_EN0_INTF_INTCPF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->INTF,3)))
#define TSB_EN0_INTF_RLDCPF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->INTF,4)))
#define TSB_EN0_INTF_MCMPF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN0->INTF,5)))


/* Advanced Vector Engine Plus (A-VE+) */
#define TSB_VE0_EN_VEEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->EN,0)))
#define TSB_VE0_ERRINTEN_VERREN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->ERRINTEN,0)))
#define TSB_VE0_ERRINTEN_INTTEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->ERRINTEN,2)))
#define TSB_VE0_SCHTASKRUN_VRSCH                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_VE0->SCHTASKRUN,0)))
#define TSB_VE0_MCTLF_LAVF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MCTLF,0)))
#define TSB_VE0_MCTLF_LAVFM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MCTLF,1)))
#define TSB_VE0_MCTLF_LVTF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MCTLF,2)))
#define TSB_VE0_MCTLF_PLSLF                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MCTLF,4)))
#define TSB_VE0_MCTLF_PLSLFM                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MCTLF,5)))
#define TSB_VE0_MCTLF_PIDOVF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MCTLF,8)))
#define TSB_VE0_MCTLF_PIQOVF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MCTLF,9)))
#define TSB_VE0_MCTLF_VSOVF                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MCTLF,10)))
#define TSB_VE0_MCTLF_PWMOVF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MCTLF,11)))
#define TSB_VE0_MODE_PVIEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MODE,0)))
#define TSB_VE0_MODE_ZIEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MODE,1)))
#define TSB_VE0_MODE_VDCSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MODE,4)))
#define TSB_VE0_MODE_CLPEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MODE,7)))
#define TSB_VE0_MODE_T5ECEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MODE,10)))
#define TSB_VE0_MODE_NICEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MODE,11)))
#define TSB_VE0_MODE_PWMBLEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MODE,12)))
#define TSB_VE0_MODE_PWMFLEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MODE,13)))
#define TSB_VE0_MODE_PMDDTCEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MODE,14)))
#define TSB_VE0_MODE_IPDEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MODE,15)))
#define TSB_VE0_FMODE_C2PEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,0)))
#define TSB_VE0_FMODE_SPWMEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,1)))
#define TSB_VE0_FMODE_IAPLMD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,5)))
#define TSB_VE0_FMODE_IBPLMD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,6)))
#define TSB_VE0_FMODE_ICPLMD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,7)))
#define TSB_VE0_FMODE_CRCEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,8)))
#define TSB_VE0_FMODE_MREGDIS                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,9)))
#define TSB_VE0_FMODE_PHCVDIS                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,12)))
#define TSB_VE0_OUTCR_UPWM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->OUTCR,6)))
#define TSB_VE0_OUTCR_VPWM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->OUTCR,7)))
#define TSB_VE0_OUTCR_WPWM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->OUTCR,8)))

/** @} */ /* End of group Device_Peripheral_registers */

#ifdef __cplusplus
}
#endif

#endif  /* __TMPM4L2_H__ */

/** @} */ /* End of group TMPM4L2 */
/** @} */ /* End of group TOSHIBA_TXZ_MICROCONTROLLER */
