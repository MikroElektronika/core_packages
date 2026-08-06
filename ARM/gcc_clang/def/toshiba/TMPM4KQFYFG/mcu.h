/**
 *******************************************************************************
 * @file    TMPM4KQ.h
 * @brief   CMSIS Cortex-M4 Core Peripheral Access Layer Header File for the
 *          TOSHIBA 'TMPM4KQ' Device Series
 * @version V1.0.1.0
 * $Date::            #$
 * 
 * DO NOT USE THIS SOFTWARE WITHOUT THE SOFTWARE LICENSE AGREEMENT.
 * 
 * (C)Copyright TOSHIBA MICROELECTRONICS CORPORATION 2019 All rights reserved
 *******************************************************************************
 */

/** @addtogroup TOSHIBA_TXZ_MICROCONTROLLER
  * @{
  */
  
/** @addtogroup TMPM4KQ
  * @{
  */

#ifndef __TMPM4KQ_H__
#define __TMPM4KQ_H__

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

/******  TMPM4KQ Specific Interrupt Numbers *******************************************************************/
  INT00_IRQn                    = 0,         /*!< Interrupt pin 00                                            */
  INT01_IRQn                    = 1,         /*!< Interrupt pin 01a/00b                                       */
  INT02_IRQn                    = 2,         /*!< Interrupt pin 02a/00b                                       */
  INT03_IRQn                    = 3,         /*!< Interrupt pin 03a/03b                                       */
  INT04_IRQn                    = 4,         /*!< Interrupt pin 04a/04b                                       */
  INT05_IRQn                    = 5,         /*!< Interrupt pin 05a/05b                                       */
  INT06_IRQn                    = 6,         /*!< Interrupt pin 06a/06b                                       */
  INT07_IRQn                    = 7,         /*!< Interrupt pin 07a/07b                                       */
  INT08_IRQn                    = 8,         /*!< Interrupt pin 08a/08b                                       */
  INT09_IRQn                    = 9,         /*!< Interrupt pin 09                                            */
  INT10_IRQn                    = 10,        /*!< Interrupt pin 10                                            */
  INT11_IRQn                    = 11,        /*!< Interrupt pin 11a/11b                                       */
  INT12_IRQn                    = 12,        /*!< Interrupt pin 12                                            */
  INT13_IRQn                    = 13,        /*!< Interrupt pin 13                                            */
  INT14_IRQn                    = 14,        /*!< Interrupt pin 14a/14b                                       */
  INT15_IRQn                    = 15,        /*!< Interrupt pin 15                                            */
  INT16_IRQn                    = 16,        /*!< Interrupt pin 16a/16b                                       */
  INT17_IRQn                    = 17,        /*!< Interrupt pin 17a/17b                                       */
  INT18_IRQn                    = 18,        /*!< Interrupt pin 18a/18b                                       */
  INT19_IRQn                    = 19,        /*!< Interrupt pin 19a/19b                                       */
  INT20_IRQn                    = 20,        /*!< Interrupt pin 20a/20b                                       */
  INT21_IRQn                    = 21,        /*!< Interrupt pin 21                                            */
  INTVCN0_IRQn                  = 22,        /*!< A-VE+ ch0 interrupt                                         */
  INTVCT0_IRQn                  = 23,        /*!< A-VE+ ch0 task termination interrupt                        */
  INTEMG0_IRQn                  = 24,        /*!< A-PMD ch0 EMG interrupt                                     */
  INTEMG1_IRQn                  = 25,        /*!< A-PMD ch1 EMG interrupt                                     */
  INTEMG2_IRQn                  = 26,        /*!< A-PMD ch2 EMG interrupt                                     */
  INTOVV0_IRQn                  = 27,        /*!< A-PMD ch0 OVV interrupt                                     */
  INTOVV1_IRQn                  = 28,        /*!< A-PMD ch1 OVV interrupt                                     */
  INTOVV2_IRQn                  = 29,        /*!< A-PMD ch2 OVV interrupt                                     */
  INTPWM0_IRQn                  = 30,        /*!< A-PMD ch0 PWM interrupt                                     */
  INTPWM1_IRQn                  = 31,        /*!< A-PMD ch1 PWM interrupt                                     */
  INTPWM2_IRQn                  = 32,        /*!< A-PMD ch2 PWM interrupt                                     */
  INTENC00_IRQn                 = 33,        /*!< A-ENC32 ch0 Encoder interupt 0                              */
  INTENC01_IRQn                 = 34,        /*!< A-ENC32 ch0 Encoder interupt 1                              */
  INTENC10_IRQn                 = 35,        /*!< A-ENC32 ch1 Encoder interupt 0                              */
  INTENC11_IRQn                 = 36,        /*!< A-ENC32 ch1 Encoder interupt 1                              */
  INTENC20_IRQn                 = 37,        /*!< A-ENC32 ch2 Encoder interupt 0                              */
  INTENC21_IRQn                 = 38,        /*!< A-ENC32 ch2 Encoder interupt 1                              */
  INTADAPDA_IRQn                = 39,        /*!< ADC unit A PMD trigger program interrupt A                  */
  INTADAPDB_IRQn                = 40,        /*!< ADC unit A PMD trigger program interrupt B                  */
  INTADACP0_IRQn                = 41,        /*!< ADC unit A Monitor function 0 interrupt                     */
  INTADACP1_IRQn                = 42,        /*!< ADC unit A Monitor function 1 interrupt                     */
  INTADATRG_IRQn                = 43,        /*!< ADC unit A General purpose trigger program interrupt        */
  INTADASGL_IRQn                = 44,        /*!< ADC unit A Single program interrupt                         */
  INTADACNT_IRQn                = 45,        /*!< ADC unit A Continuity program interrupt                     */
  INTADBPDA_IRQn                = 46,        /*!< ADC unit B PMD trigger program interrupt A                  */
  INTADBPDB_IRQn                = 47,        /*!< ADC unit B PMD trigger program interrupt B                  */
  INTADBCP0_IRQn                = 48,        /*!< ADC unit B Monitor function 0 interrupt                     */
  INTADBCP1_IRQn                = 49,        /*!< ADC unit B Monitor function 1 interrupt                     */
  INTADBTRG_IRQn                = 50,        /*!< ADC unit B General purpose trigger program interrupt        */
  INTADBSGL_IRQn                = 51,        /*!< ADC unit B Single program interrupt                         */
  INTADBCNT_IRQn                = 52,        /*!< ADC unit B Continuity program interrupt                     */
  INTADCPDA_IRQn                = 53,        /*!< ADC unit C PMD trigger program interrupt A                  */
  INTADCPDB_IRQn                = 54,        /*!< ADC unit C PMD trigger program interrupt B                  */
  INTADCCP0_IRQn                = 55,        /*!< ADC unit C Monitor function 0 interrupt                     */
  INTADCCP1_IRQn                = 56,        /*!< ADC unit C Monitor function 1 interrupt                     */
  INTADCTRG_IRQn                = 57,        /*!< ADC unit C General purpose trigger program interrupt        */
  INTADCSGL_IRQn                = 58,        /*!< ADC unit C Single program interrupt                         */
  INTADCCNT_IRQn                = 59,        /*!< ADC unit C Continuity program interrupt                     */
  INTSC0RX_IRQn                 = 60,        /*!< TSPI/UART ch0 Reception interrupt                           */
  INTSC0TX_IRQn                 = 61,        /*!< TSPI/UART ch0 Transmit interrupt                            */
  INTSC0ERR_IRQn                = 62,        /*!< TSPI/UART ch0 Error interrupt                               */
  INTSC1RX_IRQn                 = 63,        /*!< TSPI/UART ch1 Reception interrupt                           */
  INTSC1TX_IRQn                 = 64,        /*!< TSPI/UART ch1 Transmit interrupt                            */
  INTSC1ERR_IRQn                = 65,        /*!< TSPI/UART ch1 Error interrupt                               */
  INTSC2RX_IRQn                 = 66,        /*!< UART ch2 Reception interrupt                                */
  INTSC2TX_IRQn                 = 67,        /*!< UART ch2 Transmit interrupt                                 */
  INTSC2ERR_IRQn                = 68,        /*!< UART ch2 Error interrupt                                    */
  INTSC3RX_IRQn                 = 69,        /*!< UART ch3 Reception interrupt                                */
  INTSC3TX_IRQn                 = 70,        /*!< UART ch3 Transmit interrupt                                 */
  INTSC3ERR_IRQn                = 71,        /*!< UART ch3 Error interrupt                                    */
  INTI2C0_IRQn                  = 72,        /*!< I2C ch0 Interrupt                                           */
  INTI2C0AL_IRQn                = 73,        /*!< I2C ch0 Arbitration lost detection interrupt                */
  INTI2C0BF_IRQn                = 74,        /*!< I2C ch0 Bus free detection interrupt                        */
  INTI2C0NA_IRQn                = 75,        /*!< I2C ch0 NACK detection interrupt                            */
  INTI2C1_IRQn                  = 76,        /*!< I2C ch1 Interrupt                                           */
  INTI2C1AL_IRQn                = 77,        /*!< I2C ch1 Arbitration lost detection interrupt                */
  INTI2C1BF_IRQn                = 78,        /*!< I2C ch1 Bus free detection interrupt                        */
  INTI2C1NA_IRQn                = 79,        /*!< I2C ch1 NACK detection interrupt                            */
  INTCANGLB_IRQn                = 80,        /*!< CAN Global interrupt                                        */
  INTCANRXD_IRQn                = 81,        /*!< CAN Receive completion interrupt                            */
  INTCANTXD_IRQn                = 82,        /*!< CAN Transmit completion interrupt                           */
  INTT32A00AC_IRQn              = 83,        /*!< T32A ch0 TimmerA/C compare match detection / Over flow / under flow*/
  INTT32A00ACCAP0_IRQn          = 84,        /*!< T32A ch0 TimmerA/C input capture 0                          */
  INTT32A00ACCAP1_IRQn          = 85,        /*!< T32A ch0 TimmerA/C input capture 1                          */
  INTT32A00B_IRQn               = 86,        /*!< T32A ch0 TimmerB compare match detection / Over flow / under flow*/
  INTT32A00BCAP0_IRQn           = 87,        /*!< T32A ch0 TimmerB input capture 0                            */
  INTT32A00BCAP1_IRQn           = 88,        /*!< T32A ch0 TimmerB input capture 1                            */
  INTT32A01AC_IRQn              = 89,        /*!< T32A ch1 TimmerA/C compare match detection / Over flow / under flow*/
  INTT32A01ACCAP0_IRQn          = 90,        /*!< T32A ch1 TimmerA/C input capture 0                          */
  INTT32A01ACCAP1_IRQn          = 91,        /*!< T32A ch1 TimmerA/C input capture 1                          */
  INTT32A01B_IRQn               = 92,        /*!< T32A ch1 TimmerB compare match detection / Over flow / under flow*/
  INTT32A01BCAP0_IRQn           = 93,        /*!< T32A ch1 TimmerB input capture 0                            */
  INTT32A01BCAP1_IRQn           = 94,        /*!< T32A ch1 TimmerB input capture 1                            */
  INTT32A02AC_IRQn              = 95,        /*!< T32A ch2 TimmerA/C compare match detection / Over flow / under flow*/
  INTT32A02ACCAP0_IRQn          = 96,        /*!< T32A ch2 TimmerA/C input capture 0                          */
  INTT32A02ACCAP1_IRQn          = 97,        /*!< T32A ch2 TimmerA/C input capture 1                          */
  INTT32A02B_IRQn               = 98,        /*!< T32A ch2 TimmerB compare match detection / Over flow / under flow*/
  INTT32A02BCAP0_IRQn           = 99,        /*!< T32A ch2 TimmerB input capture 0                            */
  INTT32A02BCAP1_IRQn           = 100,       /*!< T32A ch2 TimmerB input capture 1                            */
  INTT32A03AC_IRQn              = 101,       /*!< T32A ch3 TimmerA/C compare match detection / Over flow / under flow*/
  INTT32A03ACCAP0_IRQn          = 102,       /*!< T32A ch3 TimmerA/C input capture 0                          */
  INTT32A03ACCAP1_IRQn          = 103,       /*!< T32A ch3 TimmerA/C input capture 1                          */
  INTT32A03B_IRQn               = 104,       /*!< T32A ch3 TimmerB compare match detection / Over flow / under flow*/
  INTT32A03BCAP0_IRQn           = 105,       /*!< T32A ch3 TimmerB input capture 0                            */
  INTT32A03BCAP1_IRQn           = 106,       /*!< T32A ch3 TimmerB input capture 1                            */
  INTT32A04AC_IRQn              = 107,       /*!< T32A ch4 TimmerA/C compare match detection / Over flow / under flow*/
  INTT32A04ACCAP0_IRQn          = 108,       /*!< T32A ch4 TimmerA/C input capture 0                          */
  INTT32A04ACCAP1_IRQn          = 109,       /*!< T32A ch4 TimmerA/C input capture 1                          */
  INTT32A04B_IRQn               = 110,       /*!< T32A ch4 TimmerB compare match detection / Over flow / under flow*/
  INTT32A04BCAP0_IRQn           = 111,       /*!< T32A ch4 TimmerB input capture 0                            */
  INTT32A04BCAP1_IRQn           = 112,       /*!< T32A ch4 TimmerB input capture 1                            */
  INTT32A05AC_IRQn              = 113,       /*!< T32A ch5 TimmerA/C compare match detection / Over flow / under flow*/
  INTT32A05ACCAP0_IRQn          = 114,       /*!< T32A ch5 TimmerA/C input capture 0                          */
  INTT32A05ACCAP1_IRQn          = 115,       /*!< T32A ch5 TimmerA/C input capture 1                          */
  INTT32A05B_IRQn               = 116,       /*!< T32A ch5 TimmerB compare match detection / Over flow / under flow*/
  INTT32A05BCAP0_IRQn           = 117,       /*!< T32A ch5 TimmerB input capture 0                            */
  INTT32A05BCAP1_IRQn           = 118,       /*!< T32A ch5 TimmerB input capture 1                            */
  INTPARI0_IRQn                 = 119,       /*!< RAM parity ch0 Parity error interrupt                       */
  INTPARI1_IRQn                 = 120,       /*!< RAM parity ch1 Parity error interrupt                       */
  INTDMAATC_IRQn                = 121,       /*!< DMA unit A End of transfer (ch0 - 31)                       */
  INTDMAAERR_IRQn               = 122,       /*!< DMA unit A Transfer error                                   */
  INTFLCRDY_IRQn                = 123,       /*!< Code FLASH Ready interrupt                                  */
  INTFLDRDY_IRQn                = 124        /*!< Data FLASH Ready interrupt                                  */
} IRQn_Type;

/** Processor and Core Peripheral Section */

/* Configuration of the Cortex-M4 Processor and Core Peripherals */
#define __CM4_REV              0x0001       /*!< Cortex-M4 Core Revision                           */
#define __MPU_PRESENT             1         /*!< MPU present or not                                */
#define __FPU_PRESENT             1         /*!< FPU present or not                                */
#define __NVIC_PRIO_BITS          4         /*!< Number of Bits used for Priority Levels           */
#define __Vendor_SysTickConfig    0         /*!< Set to 1 if different SysTick Config is used      */

/** @} */ /* End of group Configuration_of_CMSIS */

#include "core_cm4.h"                       /* Cortex-M4 processor and core peripherals            */
// Note: Changed for MikroE implementation.
// #include "system_TMPM4Ky.h"                 /* TMPM4Ky System                                      */

/** @addtogroup Device_Peripheral_registers
  * @{
  */

/** Device Specific Peripheral registers structures */

/**
  * @brief CAN Controller Mailbox RAM (CANMB)
  */
typedef struct
{
  __IO uint32_t ID;                /*!< CAN Mailbox ID                               */
       uint32_t RESERVED0;
  __IO uint32_t TSVMCF;            /*!< CAN Mailbox Time Stamp Value and Message Control Field*/
       uint32_t RESERVED1;
  __IO uint32_t DL;                /*!< CAN Mailbox Lower Data Field (D3-D0)         */
       uint32_t RESERVED2;
  __IO uint32_t DH;                /*!< CAN Mailbox Upper Data Field (D7-D4)         */
} TSB_CANMB_TypeDef;

/**
  * @brief CAN Controller (CAN)
  */
typedef struct
{
  __IO uint32_t MC;                /*!< CAN Mailbox Configuration Register           */
       uint32_t RESERVED0;
  __IO uint32_t MD;                /*!< CAN Mailbox Direction Register               */
       uint32_t RESERVED1;
  __IO uint32_t TRS;               /*!< CAN Transmit Request Set Register            */
       uint32_t RESERVED2;
  __IO uint32_t TRR;               /*!< CAN Transmit Request Reset Register          */
       uint32_t RESERVED3;
  __IO uint32_t TA;                /*!< CAN Transmission Acknowledge Register        */
       uint32_t RESERVED4;
  __IO uint32_t AA;                /*!< CAN Abort Acknowledge Register               */
       uint32_t RESERVED5;
  __IO uint32_t RMP;               /*!< CAN Receive Message Pending Register         */
       uint32_t RESERVED6;
  __IO uint32_t RML;               /*!< CAN Receive Message Lost Register            */
       uint32_t RESERVED7;
  __IO uint32_t LAM;               /*!< CAN Local Acceptance Mask Register           */
       uint32_t RESERVED8;
  __IO uint32_t GAM;               /*!< CAN Global Acceptance Mask Register          */
       uint32_t RESERVED9;
  __IO uint32_t MCR;               /*!< CAN Master Control Register                  */
       uint32_t RESERVED10;
  __I  uint32_t GSR;               /*!< CAN Global Status Register                   */
       uint32_t RESERVED11;
  __IO uint32_t BCR1;              /*!< CAN Bit Configuration Register 1             */
       uint32_t RESERVED12;
  __IO uint32_t BCR2;              /*!< CAN Bit Configuration Register 2             */
       uint32_t RESERVED13;
  __IO uint32_t GIF;               /*!< CAN Global Interrupt Flag Register           */
       uint32_t RESERVED14;
  __IO uint32_t GIM;               /*!< CAN Global Interrupt Mask Register           */
       uint32_t RESERVED15;
  __IO uint32_t MBTIF;             /*!< CAN Mailbox Transmit Interrupt Flag Register */
       uint32_t RESERVED16;
  __IO uint32_t MBRIF;             /*!< CAN Mailbox Receive Interrupt Flag Register  */
       uint32_t RESERVED17;
  __IO uint32_t MBIM;              /*!< CAN Mailbox Interrupt Mask Register          */
       uint32_t RESERVED18;
  __IO uint32_t CDR;               /*!< CAN Change Data Request                      */
       uint32_t RESERVED19;
  __IO uint32_t RFP;               /*!< CAN Remote Frame Pending Register            */
       uint32_t RESERVED20;
  __IO uint32_t CEC;               /*!< CAN Error Counter Register                   */
       uint32_t RESERVED21;
  __IO uint32_t TSP;               /*!< CAN Time Stamp Counter Prescaler Register    */
       uint32_t RESERVED22;
  __I  uint32_t TSC;               /*!< CAN Time Stamp Counter Register              */
} TSB_CAN_TypeDef;

/**
  * @brief Interrupt control A Register (IA)
  */
typedef struct
{
  __IO uint8_t  NIC00;             /*!< Non Maskable Interrupt Control Register(A) 00*/
} TSB_IA_TypeDef;

/**
  * @brief Reset Low power Managiment Register (RLM)
  */
typedef struct
{
       uint8_t  RESERVED0[2];
  __IO uint8_t  RSTFLG0;           /*!< Reset flag register 0                        */
  __IO uint8_t  RSTFLG1;           /*!< Reset flag register 1                        */
} TSB_RLM_TypeDef;

/**
  * @brief Voltage detection circuit (LVD)
  */
typedef struct
{
  __IO uint8_t  CR;                /*!< LVD Control register                         */
} TSB_LVD_TypeDef;

/**
  * @brief RAM Parity (RAMP)
  */
typedef struct
{
  __IO uint32_t CTL;               /*!< RAM Parity control register                  */
  __I  uint32_t ST;                /*!< RAM Parity status register                   */
  __O  uint32_t CLR;               /*!< RAM Parity status clear register             */
  __I  uint32_t EAD0;              /*!< RAM Parity Error address register 0          */
  __I  uint32_t EAD1;              /*!< RAM Parity Error address register 1          */
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
  * @brief Clock Control and Operation Mode (CG)
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
  __IO uint32_t WUPHCR;            /*!< High speed OSC Warming-up Register           */
       uint32_t RESERVED2[5];
  __IO uint32_t FSYSMENA;          /*!< Middle fsys Supply Stop Register A           */
  __IO uint32_t FSYSMENB;          /*!< Middle fsys Supply Stop Register B           */
  __IO uint32_t FSYSENA;           /*!< High fsys Supply Stop Register A             */
       uint32_t RESERVED3;
  __IO uint32_t FCEN;              /*!< FC Supply Stop Register                      */
  __IO uint32_t SPCLKEN;           /*!< ADC/TRACE Clock Supply Stop Register         */
} TSB_CG_TypeDef;

/**
  * @brief Interrupt Control B Register (IB)
  */
typedef struct
{
       uint8_t  RESERVED0[16];
  __IO uint8_t  NIC00;             /*!< Non maskable Interrupt Control Register(B) 00*/
       uint8_t  RESERVED1[79];
  __IO uint8_t  IMC000;            /*!< Interrupt Mode Control Register(B) 000       */
  __IO uint8_t  IMC001;            /*!< Interrupt Mode Control Register(B) 001       */
  __IO uint8_t  IMC002;            /*!< Interrupt Mode Control Register(B) 002       */
  __IO uint8_t  IMC003;            /*!< Interrupt Mode Control Register(B) 003       */
  __IO uint8_t  IMC004;            /*!< Interrupt Mode Control Register(B) 004       */
  __IO uint8_t  IMC005;            /*!< Interrupt Mode Control Register(B) 005       */
  __IO uint8_t  IMC006;            /*!< Interrupt Mode Control Register(B) 006       */
  __IO uint8_t  IMC007;            /*!< Interrupt Mode Control Register(B) 007       */
  __IO uint8_t  IMC008;            /*!< Interrupt Mode Control Register(B) 008       */
  __IO uint8_t  IMC009;            /*!< Interrupt Mode Control Register(B) 009       */
  __IO uint8_t  IMC010;            /*!< Interrupt Mode Control Register(B) 010       */
  __IO uint8_t  IMC011;            /*!< Interrupt Mode Control Register(B) 011       */
  __IO uint8_t  IMC012;            /*!< Interrupt Mode Control Register(B) 012       */
  __IO uint8_t  IMC013;            /*!< Interrupt Mode Control Register(B) 013       */
  __IO uint8_t  IMC014;            /*!< Interrupt Mode Control Register(B) 014       */
  __IO uint8_t  IMC015;            /*!< Interrupt Mode Control Register(B) 015       */
  __IO uint8_t  IMC016;            /*!< Interrupt Mode Control Register(B) 016       */
  __IO uint8_t  IMC017;            /*!< Interrupt Mode Control Register(B) 017       */
  __IO uint8_t  IMC018;            /*!< Interrupt Mode Control Register(B) 018       */
  __IO uint8_t  IMC019;            /*!< Interrupt Mode Control Register(B) 019       */
  __IO uint8_t  IMC020;            /*!< Interrupt Mode Control Register(B) 020       */
  __IO uint8_t  IMC021;            /*!< Interrupt Mode Control Register(B) 021       */
  __IO uint8_t  IMC022;            /*!< Interrupt Mode Control Register(B) 022       */
  __IO uint8_t  IMC023;            /*!< Interrupt Mode Control Register(B) 023       */
  __IO uint8_t  IMC024;            /*!< Interrupt Mode Control Register(B) 024       */
  __IO uint8_t  IMC025;            /*!< Interrupt Mode Control Register(B) 025       */
  __IO uint8_t  IMC026;            /*!< Interrupt Mode Control Register(B) 026       */
  __IO uint8_t  IMC027;            /*!< Interrupt Mode Control Register(B) 027       */
  __IO uint8_t  IMC028;            /*!< Interrupt Mode Control Register(B) 028       */
  __IO uint8_t  IMC029;            /*!< Interrupt Mode Control Register(B) 029       */
  __IO uint8_t  IMC030;            /*!< Interrupt Mode Control Register(B) 030       */
  __IO uint8_t  IMC031;            /*!< Interrupt Mode Control Register(B) 031       */
  __IO uint8_t  IMC032;            /*!< Interrupt Mode Control Register(B) 032       */
  __IO uint8_t  IMC033;            /*!< Interrupt Mode Control Register(B) 033       */
  __IO uint8_t  IMC034;            /*!< Interrupt Mode Control Register(B) 034       */
  __IO uint8_t  IMC035;            /*!< Interrupt Mode Control Register(B) 035       */
  __IO uint8_t  IMC036;            /*!< Interrupt Mode Control Register(B) 036       */
  __IO uint8_t  IMC037;            /*!< Interrupt Mode Control Register(B) 037       */
  __IO uint8_t  IMC038;            /*!< Interrupt Mode Control Register(B) 038       */
  __IO uint8_t  IMC039;            /*!< Interrupt Mode Control Register(B) 039       */
  __IO uint8_t  IMC040;            /*!< Interrupt Mode Control Register(B) 040       */
  __IO uint8_t  IMC041;            /*!< Interrupt Mode Control Register(B) 041       */
  __IO uint8_t  IMC042;            /*!< Interrupt Mode Control Register(B) 042       */
  __IO uint8_t  IMC043;            /*!< Interrupt Mode Control Register(B) 043       */
  __IO uint8_t  IMC044;            /*!< Interrupt Mode Control Register(B) 044       */
  __IO uint8_t  IMC045;            /*!< Interrupt Mode Control Register(B) 045       */
  __IO uint8_t  IMC046;            /*!< Interrupt Mode Control Register(B) 046       */
  __IO uint8_t  IMC047;            /*!< Interrupt Mode Control Register(B) 047       */
  __IO uint8_t  IMC048;            /*!< Interrupt Mode Control Register(B) 048       */
  __IO uint8_t  IMC049;            /*!< Interrupt Mode Control Register(B) 049       */
  __IO uint8_t  IMC050;            /*!< Interrupt Mode Control Register(B) 050       */
  __IO uint8_t  IMC051;            /*!< Interrupt Mode Control Register(B) 051       */
  __IO uint8_t  IMC052;            /*!< Interrupt Mode Control Register(B) 052       */
  __IO uint8_t  IMC053;            /*!< Interrupt Mode Control Register(B) 053       */
  __IO uint8_t  IMC054;            /*!< Interrupt Mode Control Register(B) 054       */
  __IO uint8_t  IMC055;            /*!< Interrupt Mode Control Register(B) 055       */
  __IO uint8_t  IMC056;            /*!< Interrupt Mode Control Register(B) 056       */
  __IO uint8_t  IMC057;            /*!< Interrupt Mode Control Register(B) 057       */
  __IO uint8_t  IMC058;            /*!< Interrupt Mode Control Register(B) 058       */
  __IO uint8_t  IMC059;            /*!< Interrupt Mode Control Register(B) 059       */
  __IO uint8_t  IMC060;            /*!< Interrupt Mode Control Register(B) 060       */
  __IO uint8_t  IMC061;            /*!< Interrupt Mode Control Register(B) 061       */
  __IO uint8_t  IMC062;            /*!< Interrupt Mode Control Register(B) 062       */
  __IO uint8_t  IMC063;            /*!< Interrupt Mode Control Register(B) 063       */
  __IO uint8_t  IMC064;            /*!< Interrupt Mode Control Register(B) 064       */
  __IO uint8_t  IMC065;            /*!< Interrupt Mode Control Register(B) 065       */
  __IO uint8_t  IMC066;            /*!< Interrupt Mode Control Register(B) 066       */
  __IO uint8_t  IMC067;            /*!< Interrupt Mode Control Register(B) 067       */
  __IO uint8_t  IMC068;            /*!< Interrupt Mode Control Register(B) 068       */
  __IO uint8_t  IMC069;            /*!< Interrupt Mode Control Register(B) 069       */
} TSB_IB_TypeDef;

/**
  * @brief Interrupt Monitor Register (IMN)
  */
typedef struct
{
  __I  uint32_t FLGNMI;            /*!< NMI Interrupt Monitor Flag                   */
       uint32_t RESERVED0[2];
  __I  uint32_t FLG3;              /*!< Interrupt Monitor Flag 3 (096 - 127)         */
  __I  uint32_t FLG4;              /*!< Interrupt Monitor Flag 4 (128 - 159)         */
  __I  uint32_t FLG5;              /*!< Interrupt Monitor Flag 5 (160 - 191)         */
} TSB_IMN_TypeDef;

/**
  * @brief Digital Noise Filter (DNF)
  */
typedef struct
{
  __IO uint32_t CKCR;              /*!< DNF clock Control register                   */
  __IO uint32_t ENCR;              /*!< DNF Enable register                          */
} TSB_DNF_TypeDef;

/**
  * @brief Trigger Selection circuit (TSEL)
  */
typedef struct
{
  __IO uint32_t CR0;               /*!< TRGSEL Control register 0                    */
  __IO uint32_t CR1;               /*!< TRGSEL Control register 1                    */
  __IO uint32_t CR2;               /*!< TRGSEL Control register 2                    */
  __IO uint32_t CR3;               /*!< TRGSEL Control register 3                    */
  __IO uint32_t CR4;               /*!< TRGSEL Control register 4                    */
  __IO uint32_t CR5;               /*!< TRGSEL Control register 5                    */
  __IO uint32_t CR6;               /*!< TRGSEL Control register 6                    */
  __IO uint32_t CR7;               /*!< TRGSEL Control register 7                    */
  __IO uint32_t CR8;               /*!< TRGSEL Control register 8                    */
  __IO uint32_t CR9;               /*!< TRGSEL Control register 9                    */
  __IO uint32_t CR10;              /*!< TRGSEL Control register 10                   */
} TSB_TSEL_TypeDef;

/**
  * @brief Watchdog Timer (SIWD)
  */
typedef struct
{
  __IO uint32_t PRO;               /*!< SIWD Protect Register                        */
  __IO uint32_t EN;                /*!< SIWD Enable Register                         */
  __O  uint32_t CR;                /*!< SIWD Control Register                        */
  __IO uint32_t MOD;               /*!< SIWD Mode Register                           */
  __I  uint32_t MONI;              /*!< SIWD Count Monitor Register                  */
  __IO uint32_t OSCCR;             /*!< SIWD Oscillator Control Register             */
} TSB_SIWD_TypeDef;

/**
  * @brief Non-Break Debug Interface (NBD)
  */
typedef struct
{
  __IO uint32_t CR0;               /*!< NBD control register 0                       */
  __IO uint32_t CR1;               /*!< NBD control register 1                       */
} TSB_NBD_TypeDef;

/**
  * @brief Direct Memory Accsess Controller (DMAC)
  */
typedef struct
{
  __I  uint32_t STATUS;            /*!< DMA Status Register                          */
  __O  uint32_t CFG;               /*!< DMA Configuration Register                   */
  __IO uint32_t CTRLBASEPTR;       /*!< DMA Control Data Base Pointer Register       */
  __I  uint32_t ALTCTRLBASEPTR;    /*!< DMA Channel Alternate Control Data Base 
Pointer Register*/
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
  * @brief 12-bit Analog to Digital Converter(ADC)
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
  __IO uint32_t TSET16;            /*!< AD General purpose Trigger Program Register 16*/
  __IO uint32_t TSET17;            /*!< AD General purpose Trigger Program Register 17*/
  __IO uint32_t TSET18;            /*!< AD General purpose Trigger Program Register 18*/
  __IO uint32_t TSET19;            /*!< AD General purpose Trigger Program Register 19*/
  __IO uint32_t TSET20;            /*!< AD General purpose Trigger Program Register 20*/
  __IO uint32_t TSET21;            /*!< AD General purpose Trigger Program Register 21*/
  __IO uint32_t TSET22;            /*!< AD General purpose Trigger Program Register 22*/
  __IO uint32_t TSET23;            /*!< AD General purpose Trigger Program Register 23*/
       uint32_t RESERVED3[8];
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
  __I  uint32_t REG16;             /*!< AD Conversion Result Register 16             */
  __I  uint32_t REG17;             /*!< AD Conversion Result Register 17             */
  __I  uint32_t REG18;             /*!< AD Conversion Result Register 18             */
  __I  uint32_t REG19;             /*!< AD Conversion Result Register 19             */
  __I  uint32_t REG20;             /*!< AD Conversion Result Register 20             */
  __I  uint32_t REG21;             /*!< AD Conversion Result Register 21             */
  __I  uint32_t REG22;             /*!< AD Conversion Result Register 22             */
  __I  uint32_t REG23;             /*!< AD Conversion Result Register 23             */
} TSB_AD_TypeDef;

/**
  * @brief Gain Op-AMP (AMP)
  */
typedef struct
{
  __IO uint32_t CTLA;              /*!< AMP control register A                       */
  __IO uint32_t CTLB;              /*!< AMP control register B                       */
  __IO uint32_t CTLC;              /*!< AMP control register C                       */
} TSB_AMP_TypeDef;

/**
  * @brief 32-bit Timer Event Counter (T32A)
  */
typedef struct
{
  __IO uint32_t MOD;               /*!< T32A Mode Register                           */
       uint32_t RESERVED0[15];
  __IO uint32_t RUNA;              /*!< T32A Run Register A                          */
  __IO uint32_t CRA;               /*!< T32A Control Register A                      */
  __IO uint32_t CAPCRA;            /*!< T32A Capture Control Register A              */
  __O  uint32_t OUTCRA0;           /*!< T32A Output Control Register A0              */
  __IO uint32_t OUTCRA1;           /*!< T32A Output Control Register A1              */
  __IO uint32_t STA;               /*!< T32A Status Register A                       */
  __IO uint32_t IMA;               /*!< T32A Interrupt Mask Register A               */
  __I  uint32_t TMRA;              /*!< T32A Counter Capture Register A              */
  __IO uint32_t RELDA;             /*!< T32A Reload Register A                       */
  __IO uint32_t RGA0;              /*!< T32A Timer Register A0                       */
  __IO uint32_t RGA1;              /*!< T32A Timer Register A1                       */
  __I  uint32_t CAPA0;             /*!< T32A Capture Register A0                     */
  __I  uint32_t CAPA1;             /*!< T32A Capture Register A1                     */
  __IO uint32_t DMAA;              /*!< T32A DMA Request Enable Register A           */
       uint32_t RESERVED1[2];
  __IO uint32_t RUNB;              /*!< T32A Run Register B                          */
  __IO uint32_t CRB;               /*!< T32A Control Register B                      */
  __IO uint32_t CAPCRB;            /*!< T32A Capture Control Register B              */
  __O  uint32_t OUTCRB0;           /*!< T32A Output Control Register B0              */
  __IO uint32_t OUTCRB1;           /*!< T32A Output Control Register B1              */
  __IO uint32_t STB;               /*!< T32A Status Register B                       */
  __IO uint32_t IMB;               /*!< T32A Interrupt Mask Register B               */
  __I  uint32_t TMRB;              /*!< T32A Counter Capture Register B              */
  __IO uint32_t RELDB;             /*!< T32A Reload Register B                       */
  __IO uint32_t RGB0;              /*!< T32A Timer Register B0                       */
  __IO uint32_t RGB1;              /*!< T32A Timer Register B1                       */
  __I  uint32_t CAPB0;             /*!< T32A Capture Register B0                     */
  __I  uint32_t CAPB1;             /*!< T32A Capture Register B1                     */
  __IO uint32_t DMAB;              /*!< T32A DMA Request Enable Register B           */
       uint32_t RESERVED2[2];
  __IO uint32_t RUNC;              /*!< T32A Run Register C                          */
  __IO uint32_t CRC;               /*!< T32A Control Register C                      */
  __IO uint32_t CAPCRC;            /*!< T32A Capture Control Register C              */
  __O  uint32_t OUTCRC0;           /*!< T32A Output Control Register C0              */
  __IO uint32_t OUTCRC1;           /*!< T32A Output Control Register C1              */
  __IO uint32_t STC;               /*!< T32A Status Register C                       */
  __IO uint32_t IMC;               /*!< T32A Interrupt Mask Register C               */
  __I  uint32_t TMRC;              /*!< T32A Counter Capture Register C              */
  __IO uint32_t RELDC;             /*!< T32A Reload Register C                       */
  __IO uint32_t RGC0;              /*!< T32A Timer Register C0                       */
  __IO uint32_t RGC1;              /*!< T32A Timer Register C1                       */
  __I  uint32_t CAPC0;             /*!< T32A Capture Register C0                     */
  __I  uint32_t CAPC1;             /*!< T32A Capture Register C1                     */
  __IO uint32_t DMAC;              /*!< T32A DMA Request Enable Register C           */
  __IO uint32_t PLSCR;             /*!< T32A Pulse Count Control Register            */
} TSB_T32A_TypeDef;

/**
  * @brief Serial Peripheral Interface (TSPI)
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
  * @brief Asynchronous Serial Communication Circuit (UART)
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

#if defined ( __CC_ARM   )           /* RealView Compiler */
#pragma anon_unions
#elif (defined (__ICCARM__))         /*  ICC Compiler     */
#pragma language=extended
#endif

/**
  * @brief I2C Interface (I2C)
  */
typedef struct
{
  __IO uint32_t CR1;               /*!< I2C Control Register 1                       */
  __IO uint32_t DBR;               /*!< Data Buffer Register                         */
  __IO uint32_t AR;                /*!< Bus address Register                         */
union {
  __O  uint32_t CR2;               /*!< Control Register 2                           */
  __I  uint32_t SR;                /*!< Status Register                              */
  };
  __IO uint32_t PRS;               /*!< Prescaler clcok setting Register             */
  __IO uint32_t IE;                /*!< Interrupt Enable Register                    */
  __IO uint32_t ST;                /*!< Interrupt Register                           */
  __IO uint32_t OP;                /*!< Optiononal Function register                 */
  __I  uint32_t PM;                /*!< Bus Monitor register                         */
  __IO uint32_t AR2;               /*!< Second Slave address register                */
} TSB_I2C_TypeDef;

/**
  * @brief Port A
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port A Data Register                         */
  __IO uint32_t CR;                /*!< Port A Output Control Register               */
  __IO uint32_t FR1;               /*!< Port A Function Register 1                   */
       uint32_t RESERVED0[2];
  __IO uint32_t FR4;               /*!< Port A Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port A Function Register 5                   */
  __IO uint32_t FR6;               /*!< Port A Function Register 6                   */
  __IO uint32_t FR7;               /*!< Port A Function Register 7                   */
       uint32_t RESERVED1;
  __IO uint32_t OD;                /*!< Port A Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port A Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port A Pull-down Control Register            */
       uint32_t RESERVED2;
  __IO uint32_t IE;                /*!< Port A Input Control Register                */
} TSB_PA_TypeDef;

/**
  * @brief Port B
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port B Data Register                         */
  __IO uint32_t CR;                /*!< Port B Output Control Register               */
       uint32_t RESERVED0[3];
  __IO uint32_t FR4;               /*!< Port B Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port B Function Register 5                   */
       uint32_t RESERVED1[3];
  __IO uint32_t OD;                /*!< Port B Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port B Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port B Pull-down Control Register            */
       uint32_t RESERVED2;
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
  __IO uint32_t FR4;               /*!< Port C Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port C Function Register 5                   */
  __IO uint32_t FR6;               /*!< Port C Function Register 6                   */
  __IO uint32_t FR7;               /*!< Port C Function Register 7                   */
       uint32_t RESERVED0;
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
       uint32_t RESERVED0;
  __IO uint32_t FR4;               /*!< Port D Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port D Function Register 5                   */
  __IO uint32_t FR6;               /*!< Port D Function Register 6                   */
       uint32_t RESERVED1[2];
  __IO uint32_t OD;                /*!< Port D Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port D Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port D Pull-down Control Register            */
       uint32_t RESERVED2;
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
       uint32_t RESERVED0[2];
  __IO uint32_t FR4;               /*!< Port E Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port E Function Register 5                   */
  __IO uint32_t FR6;               /*!< Port E Function Register 6                   */
  __IO uint32_t FR7;               /*!< Port E Function Register 7                   */
       uint32_t RESERVED1;
  __IO uint32_t OD;                /*!< Port E Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port E Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port E Pull-down Control Register            */
       uint32_t RESERVED2;
  __IO uint32_t IE;                /*!< Port E Input Control Register                */
} TSB_PE_TypeDef;

/**
  * @brief Port F
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port F Data Register                         */
  __IO uint32_t CR;                /*!< Port F Output Control Register               */
  __IO uint32_t FR1;               /*!< Port F Function Register 1                   */
  __IO uint32_t FR2;               /*!< Port F Function Register 2                   */
  __IO uint32_t FR3;               /*!< Port F Function Register 3                   */
  __IO uint32_t FR4;               /*!< Port F Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port F Function Register 5                   */
  __IO uint32_t FR6;               /*!< Port F Function Register 6                   */
  __IO uint32_t FR7;               /*!< Port F Function Register 7                   */
       uint32_t RESERVED0;
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
  __IO uint32_t FR1;               /*!< Port G Function Register 1                   */
       uint32_t RESERVED0[2];
  __IO uint32_t FR4;               /*!< Port G Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port G Function Register 5                   */
       uint32_t RESERVED1[3];
  __IO uint32_t OD;                /*!< Port G Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port G Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port G Pull-down Control Register            */
       uint32_t RESERVED2;
  __IO uint32_t IE;                /*!< Port G Input Control Register                */
} TSB_PG_TypeDef;

/**
  * @brief Port H
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port H Data Register                         */
       uint32_t RESERVED0[11];
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
  __IO uint32_t CR;                /*!< Port J Output Control Register               */
       uint32_t RESERVED0[8];
  __IO uint32_t OD;                /*!< Port J Open Drain Control Register           */
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
       uint32_t RESERVED0[8];
  __IO uint32_t OD;                /*!< Port K Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port K Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port K Pull-down Control Register            */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< Port K Input Control Register                */
} TSB_PK_TypeDef;

/**
  * @brief Port L
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port L Data Register                         */
  __IO uint32_t CR;                /*!< Port L Output Control Register               */
       uint32_t RESERVED0[8];
  __IO uint32_t OD;                /*!< Port L Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port L Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port L Pull-down Control Register            */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< Port L Input Control Register                */
} TSB_PL_TypeDef;

/**
  * @brief Port M
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port M Data Register                         */
  __IO uint32_t CR;                /*!< Port M Output Control Register               */
       uint32_t RESERVED0[8];
  __IO uint32_t OD;                /*!< Port M Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port M Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port M Pull-down Control Register            */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< Port M Input Control Register                */
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
  __IO uint32_t FR3;               /*!< Port N Function Register 3                   */
  __IO uint32_t FR4;               /*!< Port N Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port N Function Register 5                   */
  __IO uint32_t FR6;               /*!< Port N Function Register 6                   */
  __IO uint32_t FR7;               /*!< Port N Function Register 7                   */
       uint32_t RESERVED0;
  __IO uint32_t OD;                /*!< Port N Opend Drain Control Register          */
  __IO uint32_t PUP;               /*!< Port N Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port N Pull-down Control Register            */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< Port N Input Control Register                */
} TSB_PN_TypeDef;

/**
  * @brief Port P
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port P Data Register                         */
  __IO uint32_t CR;                /*!< Port P Output Control Register               */
  __IO uint32_t FR1;               /*!< Port P Function Register 1                   */
  __IO uint32_t FR2;               /*!< Port P Function Register 2                   */
       uint32_t RESERVED0;
  __IO uint32_t FR4;               /*!< Port P Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port P Function Register 5                   */
  __IO uint32_t FR6;               /*!< Port P Function Register 6                   */
       uint32_t RESERVED1[2];
  __IO uint32_t OD;                /*!< Port P Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port P Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port P Pull-down Control Register            */
       uint32_t RESERVED2;
  __IO uint32_t IE;                /*!< Port P Input Control Register                */
} TSB_PP_TypeDef;

/**
  * @brief Port R
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port R Data Register                         */
  __IO uint32_t CR;                /*!< Port R Output Control Register               */
  __IO uint32_t FR1;               /*!< Port R Function Register 1                   */
       uint32_t RESERVED0[2];
  __IO uint32_t FR4;               /*!< Port R Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port R Function Register 5                   */
       uint32_t RESERVED1[3];
  __IO uint32_t OD;                /*!< Port R Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port R Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port R Pull-down Control Register            */
       uint32_t RESERVED2;
  __IO uint32_t IE;                /*!< Port R Input Control Register                */
} TSB_PR_TypeDef;

/**
  * @brief Port T
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port T Data Register                         */
  __IO uint32_t CR;                /*!< Port T Output Control Register               */
  __IO uint32_t FR1;               /*!< Port T Function Register 1                   */
  __IO uint32_t FR2;               /*!< Port T Function Register 2                   */
       uint32_t RESERVED0;
  __IO uint32_t FR4;               /*!< Port T Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port T Function Register 5                   */
       uint32_t RESERVED1[3];
  __IO uint32_t OD;                /*!< Port T Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port T Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port T Pull-down Control Register            */
       uint32_t RESERVED2;
  __IO uint32_t IE;                /*!< Port T Input Control Register                */
} TSB_PT_TypeDef;

/**
  * @brief Port U
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port U Data Register                         */
  __IO uint32_t CR;                /*!< Port U Output Control Register               */
  __IO uint32_t FR1;               /*!< Port U Function Register 1                   */
  __IO uint32_t FR2;               /*!< Port U Function Register 2                   */
  __IO uint32_t FR3;               /*!< Port U Function Register 3                   */
  __IO uint32_t FR4;               /*!< Port U Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port U Function Register 5                   */
  __IO uint32_t FR6;               /*!< Port U Function Register 6                   */
  __IO uint32_t FR7;               /*!< Port U Function Register 7                   */
       uint32_t RESERVED0;
  __IO uint32_t OD;                /*!< Port U Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port U Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port U Pull-down Control Register            */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< Port U Input Control Register                */
} TSB_PU_TypeDef;

/**
  * @brief Port V
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port V Data Register                         */
  __IO uint32_t CR;                /*!< Port V OutPut Control Register               */
  __IO uint32_t FR1;               /*!< Port V Function Register 1                   */
  __IO uint32_t FR2;               /*!< Port V Function Register 2                   */
       uint32_t RESERVED0;
  __IO uint32_t FR4;               /*!< Port V Function Register 4                   */
       uint32_t RESERVED1[4];
  __IO uint32_t OD;                /*!< Port V Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port V Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port V Pull-down Control Register            */
       uint32_t RESERVED2;
  __IO uint32_t IE;                /*!< Port V InPut Control Register                */
} TSB_PV_TypeDef;

/**
  * @brief Port W
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port W Data Register                         */
  __IO uint32_t CR;                /*!< Port W OutPut Control Register               */
  __IO uint32_t FR1;               /*!< Port W Function Register 1                   */
       uint32_t RESERVED0[2];
  __IO uint32_t FR4;               /*!< Port W Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port W Function Register 5                   */
       uint32_t RESERVED1[3];
  __IO uint32_t OD;                /*!< Port W Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port W Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port W Pull-down Control Register            */
       uint32_t RESERVED2;
  __IO uint32_t IE;                /*!< Port W InPut Control Register                */
} TSB_PW_TypeDef;

/**
  * @brief Trimming Circuit (TRM)
  */
typedef struct
{
  __IO uint32_t OSCPRO;            /*!< Protection Register                          */
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
  * @brief Advanced Progammable Motor Control Circuit (A-PMD)
  */
typedef struct
{
  __IO uint32_t MDEN;              /*!< PMD Enable Register                          */
  __IO uint32_t PORTMD;            /*!< PMD Port Output Mode Register                */
  __IO uint32_t MDCR;              /*!< PMD Control Register                         */
  __I  uint32_t CARSTA;            /*!< PWM Carrier Status Register                  */
  __I  uint32_t BCARI;             /*!< PWM Basic Carrier Register                   */
  __IO uint32_t RATE;              /*!< PWM Frequency Register                       */
  __IO uint32_t CMPU;              /*!< PMD PWM Compare U Register                   */
  __IO uint32_t CMPV;              /*!< PMD PWM Compare V Register                   */
  __IO uint32_t CMPW;              /*!< PMD PWM Compare W Register                   */
  __IO uint32_t MODESEL;           /*!< PMD Mode Select Register                     */
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
  __IO uint32_t VPWMPH;            /*!< PMD Phase difference setting of the V-phase PWM*/
  __IO uint32_t WPWMPH;            /*!< PMD Phase difference setting of the W-phase PWM*/
  __IO uint32_t MBUFCR;            /*!< PMD Update timing of the triple buffer       */
  __IO uint32_t SYNCCR;            /*!< PMD Synchronization control between the PMD channel*/
  __IO uint32_t DBGOUTCR;          /*!< PMD Debug output control                     */
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
  __IO uint32_t INTCR;             /*!< ENC Interrupt Control Register               */
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
  __IO uint32_t PWMOFS;            /*!< SHIFT2 PWM Offset register                   */
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
  __IO uint32_t TRGSEL;            /*!< PMD control: Trigger selection               */
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
  __IO uint32_t HYS;               /*!< Hysteresis width for current discrimination  */
  __IO uint32_t DTCS;              /*!< Dead time compensation control / status      */
  __IO uint32_t PWMMAX;            /*!< PWM upper limit setting                      */
  __IO uint32_t PWMMIN;            /*!< PWM lower limit setting                      */
  __IO uint32_t THTCLP;            /*!< Clipped phase value setting                  */
  __IO uint32_t HYS2;              /*!< The second threshold value for determining the current polarity*/
  __IO uint32_t VALPHA;            /*!< ALPHA-phase voltage                          */
  __IO uint32_t VBETA;             /*!< BETA-phase voltage                           */
  __IO uint32_t VDUTYA;            /*!< A-phase duty                                 */
  __IO uint32_t VDUTYB;            /*!< B-phase duty                                 */
  __IO uint32_t VDUTYC;            /*!< C-phase duty                                 */
  __IO uint32_t IALPHA;            /*!< ALPHA-phase current                          */
  __IO uint32_t IBETA;             /*!< BETA-phase current                           */
  __IO uint32_t IA;                /*!< A-phase current                              */
  __IO uint32_t IB;                /*!< B-phase current                              */
  __IO uint32_t IC;                /*!< C-phase current                              */
  __IO uint32_t VDELTA;            /*!< VDQ Declination angle                        */
  __IO uint32_t VDCRC;             /*!< d-axis voltage correction value              */
  __IO uint32_t VQCRC;             /*!< q-axis voltage correction value              */
} TSB_VE_TypeDef;

/**
  * @brief Flash Memory Interface (FC)
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
       uint32_t RESERVED3[4];
  __I  uint32_t PSR6;              /*!< Flash Protect Status Register 6              */
       uint32_t RESERVED4;
  __IO uint32_t PMR0;              /*!< Flash Protect Mask Register 0                */
  __IO uint32_t PMR1;              /*!< Flash Protect Mask Register 1                */
       uint32_t RESERVED5[4];
  __IO uint32_t PMR6;              /*!< Flash Protect Mask Register 6                */
       uint32_t RESERVED6[37];
  __I  uint32_t SR1;               /*!< Flash Status Register 1                      */
  __I  uint32_t SWPSR;             /*!< Flash Memory SWAP Status Register            */
       uint32_t RESERVED7[14];
  __IO uint32_t AREASEL;           /*!< Flash Area Selection Register                */
       uint32_t RESERVED8;
  __IO uint32_t CR;                /*!< Flash Control Register                       */
  __IO uint32_t STSCLR;            /*!< Flash Status Clear Register                  */
  __IO uint32_t BNKCR;             /*!< Flash Bank Change Register                   */
       uint32_t RESERVED9;
  __IO uint32_t BUFDISCLR;         /*!< Flash Buffer Disable and Clear Register      */
} TSB_FC_TypeDef;


/* Memory map */
#define FLASH_BASE            (0x00000000UL)
#define RAM_BASE              (0x20000000UL)
#define PERI_BASE             (0x40000000UL)


#define TSB_CANMB0_BASE            (PERI_BASE  + 0x0005000UL)
#define TSB_CANMB1_BASE            (PERI_BASE  + 0x0005020UL)
#define TSB_CANMB2_BASE            (PERI_BASE  + 0x0005040UL)
#define TSB_CANMB3_BASE            (PERI_BASE  + 0x0005060UL)
#define TSB_CANMB4_BASE            (PERI_BASE  + 0x0005080UL)
#define TSB_CANMB5_BASE            (PERI_BASE  + 0x00050A0UL)
#define TSB_CANMB6_BASE            (PERI_BASE  + 0x00050C0UL)
#define TSB_CANMB7_BASE            (PERI_BASE  + 0x00050E0UL)
#define TSB_CANMB8_BASE            (PERI_BASE  + 0x0005100UL)
#define TSB_CANMB9_BASE            (PERI_BASE  + 0x0005120UL)
#define TSB_CANMB10_BASE           (PERI_BASE  + 0x0005140UL)
#define TSB_CANMB11_BASE           (PERI_BASE  + 0x0005160UL)
#define TSB_CANMB12_BASE           (PERI_BASE  + 0x0005180UL)
#define TSB_CANMB13_BASE           (PERI_BASE  + 0x00051A0UL)
#define TSB_CANMB14_BASE           (PERI_BASE  + 0x00051C0UL)
#define TSB_CANMB15_BASE           (PERI_BASE  + 0x00051E0UL)
#define TSB_CANMB16_BASE           (PERI_BASE  + 0x0005200UL)
#define TSB_CANMB17_BASE           (PERI_BASE  + 0x0005220UL)
#define TSB_CANMB18_BASE           (PERI_BASE  + 0x0005240UL)
#define TSB_CANMB19_BASE           (PERI_BASE  + 0x0005260UL)
#define TSB_CANMB20_BASE           (PERI_BASE  + 0x0005280UL)
#define TSB_CANMB21_BASE           (PERI_BASE  + 0x00052A0UL)
#define TSB_CANMB22_BASE           (PERI_BASE  + 0x00052C0UL)
#define TSB_CANMB23_BASE           (PERI_BASE  + 0x00052E0UL)
#define TSB_CANMB24_BASE           (PERI_BASE  + 0x0005300UL)
#define TSB_CANMB25_BASE           (PERI_BASE  + 0x0005320UL)
#define TSB_CANMB26_BASE           (PERI_BASE  + 0x0005340UL)
#define TSB_CANMB27_BASE           (PERI_BASE  + 0x0005360UL)
#define TSB_CANMB28_BASE           (PERI_BASE  + 0x0005380UL)
#define TSB_CANMB29_BASE           (PERI_BASE  + 0x00053A0UL)
#define TSB_CANMB30_BASE           (PERI_BASE  + 0x00053C0UL)
#define TSB_CANMB31_BASE           (PERI_BASE  + 0x00053E0UL)
#define TSB_CAN_BASE               (PERI_BASE  + 0x0005400UL)
#define TSB_IA_BASE                (PERI_BASE  + 0x003E000UL)
#define TSB_RLM_BASE               (PERI_BASE  + 0x003E400UL)
#define TSB_LVD_BASE               (PERI_BASE  + 0x003EC00UL)
#define TSB_RPAR0_BASE             (PERI_BASE  + 0x0043000UL)
#define TSB_RPAR1_BASE             (PERI_BASE  + 0x00A3000UL)
#define TSB_CRC_BASE               (PERI_BASE  + 0x0043100UL)
#define TSB_CG_BASE                (PERI_BASE  + 0x0083000UL)
#define TSB_IB_BASE                (PERI_BASE  + 0x0083200UL)
#define TSB_IMN_BASE               (PERI_BASE  + 0x0083300UL)
#define TSB_DNFA_BASE              (PERI_BASE  + 0x00A0200UL)
#define TSB_DNFB_BASE              (PERI_BASE  + 0x00A0300UL)
#define TSB_DNFC_BASE              (PERI_BASE  + 0x00A0800UL)
#define TSB_TSEL0_BASE             (PERI_BASE  + 0x00A0400UL)
#define TSB_SIWD0_BASE             (PERI_BASE  + 0x00A0600UL)
#define TSB_NBD_BASE               (PERI_BASE  + 0x00A2000UL)
#define TSB_DMAA_BASE              (PERI_BASE  + 0x00A4000UL)
#define TSB_ADA_BASE               (PERI_BASE  + 0x00BA000UL)
#define TSB_ADB_BASE               (PERI_BASE  + 0x00BA400UL)
#define TSB_ADC_BASE               (PERI_BASE  + 0x00BA800UL)
#define TSB_AMP_BASE               (PERI_BASE  + 0x00BD000UL)
#define TSB_T32A0_BASE             (PERI_BASE  + 0x00C1000UL)
#define TSB_T32A1_BASE             (PERI_BASE  + 0x00C1400UL)
#define TSB_T32A2_BASE             (PERI_BASE  + 0x00C1800UL)
#define TSB_T32A3_BASE             (PERI_BASE  + 0x00C1C00UL)
#define TSB_T32A4_BASE             (PERI_BASE  + 0x00C2000UL)
#define TSB_T32A5_BASE             (PERI_BASE  + 0x00C2400UL)
#define TSB_TSPI0_BASE             (PERI_BASE  + 0x00CA000UL)
#define TSB_TSPI1_BASE             (PERI_BASE  + 0x00CA400UL)
#define TSB_UART0_BASE             (PERI_BASE  + 0x00CE000UL)
#define TSB_UART1_BASE             (PERI_BASE  + 0x00CE400UL)
#define TSB_UART2_BASE             (PERI_BASE  + 0x00CE800UL)
#define TSB_UART3_BASE             (PERI_BASE  + 0x00CEC00UL)
#define TSB_I2C0_BASE              (PERI_BASE  + 0x00D1000UL)
#define TSB_I2C1_BASE              (PERI_BASE  + 0x00D2000UL)
#define TSB_PA_BASE                (PERI_BASE  + 0x00E0000UL)
#define TSB_PB_BASE                (PERI_BASE  + 0x00E0100UL)
#define TSB_PC_BASE                (PERI_BASE  + 0x00E0200UL)
#define TSB_PD_BASE                (PERI_BASE  + 0x00E0300UL)
#define TSB_PE_BASE                (PERI_BASE  + 0x00E0400UL)
#define TSB_PF_BASE                (PERI_BASE  + 0x00E0500UL)
#define TSB_PG_BASE                (PERI_BASE  + 0x00E0600UL)
#define TSB_PH_BASE                (PERI_BASE  + 0x00E0700UL)
#define TSB_PJ_BASE                (PERI_BASE  + 0x00E0800UL)
#define TSB_PK_BASE                (PERI_BASE  + 0x00E0900UL)
#define TSB_PL_BASE                (PERI_BASE  + 0x00E0A00UL)
#define TSB_PM_BASE                (PERI_BASE  + 0x00E0B00UL)
#define TSB_PN_BASE                (PERI_BASE  + 0x00E0C00UL)
#define TSB_PP_BASE                (PERI_BASE  + 0x00E0D00UL)
#define TSB_PR_BASE                (PERI_BASE  + 0x00E0E00UL)
#define TSB_PT_BASE                (PERI_BASE  + 0x00E0F00UL)
#define TSB_PU_BASE                (PERI_BASE  + 0x00E1000UL)
#define TSB_PV_BASE                (PERI_BASE  + 0x00E1100UL)
#define TSB_PW_BASE                (PERI_BASE  + 0x00E1200UL)
#define TSB_TRM_BASE               (PERI_BASE  + 0x00E3100UL)
#define TSB_OFD_BASE               (PERI_BASE  + 0x00E4000UL)
#define TSB_PMD0_BASE              (PERI_BASE  + 0x00E9000UL)
#define TSB_PMD1_BASE              (PERI_BASE  + 0x00E9400UL)
#define TSB_PMD2_BASE              (PERI_BASE  + 0x00E9800UL)
#define TSB_EN0_BASE               (PERI_BASE  + 0x00EA000UL)
#define TSB_EN1_BASE               (PERI_BASE  + 0x00EA400UL)
#define TSB_EN2_BASE               (PERI_BASE  + 0x00EA800UL)
#define TSB_VE0_BASE               (PERI_BASE  + 0x00EB000UL)
#define TSB_FC_BASE                (PERI_BASE  + 0x1DFF0000UL)


/* Peripheral declaration */
#define TSB_CANMB0                 ((  TSB_CANMB_TypeDef *)TSB_CANMB0_BASE)
#define TSB_CANMB1                 ((  TSB_CANMB_TypeDef *)TSB_CANMB1_BASE)
#define TSB_CANMB2                 ((  TSB_CANMB_TypeDef *)TSB_CANMB2_BASE)
#define TSB_CANMB3                 ((  TSB_CANMB_TypeDef *)TSB_CANMB3_BASE)
#define TSB_CANMB4                 ((  TSB_CANMB_TypeDef *)TSB_CANMB4_BASE)
#define TSB_CANMB5                 ((  TSB_CANMB_TypeDef *)TSB_CANMB5_BASE)
#define TSB_CANMB6                 ((  TSB_CANMB_TypeDef *)TSB_CANMB6_BASE)
#define TSB_CANMB7                 ((  TSB_CANMB_TypeDef *)TSB_CANMB7_BASE)
#define TSB_CANMB8                 ((  TSB_CANMB_TypeDef *)TSB_CANMB8_BASE)
#define TSB_CANMB9                 ((  TSB_CANMB_TypeDef *)TSB_CANMB9_BASE)
#define TSB_CANMB10                ((  TSB_CANMB_TypeDef *)TSB_CANMB10_BASE)
#define TSB_CANMB11                ((  TSB_CANMB_TypeDef *)TSB_CANMB11_BASE)
#define TSB_CANMB12                ((  TSB_CANMB_TypeDef *)TSB_CANMB12_BASE)
#define TSB_CANMB13                ((  TSB_CANMB_TypeDef *)TSB_CANMB13_BASE)
#define TSB_CANMB14                ((  TSB_CANMB_TypeDef *)TSB_CANMB14_BASE)
#define TSB_CANMB15                ((  TSB_CANMB_TypeDef *)TSB_CANMB15_BASE)
#define TSB_CANMB16                ((  TSB_CANMB_TypeDef *)TSB_CANMB16_BASE)
#define TSB_CANMB17                ((  TSB_CANMB_TypeDef *)TSB_CANMB17_BASE)
#define TSB_CANMB18                ((  TSB_CANMB_TypeDef *)TSB_CANMB18_BASE)
#define TSB_CANMB19                ((  TSB_CANMB_TypeDef *)TSB_CANMB19_BASE)
#define TSB_CANMB20                ((  TSB_CANMB_TypeDef *)TSB_CANMB20_BASE)
#define TSB_CANMB21                ((  TSB_CANMB_TypeDef *)TSB_CANMB21_BASE)
#define TSB_CANMB22                ((  TSB_CANMB_TypeDef *)TSB_CANMB22_BASE)
#define TSB_CANMB23                ((  TSB_CANMB_TypeDef *)TSB_CANMB23_BASE)
#define TSB_CANMB24                ((  TSB_CANMB_TypeDef *)TSB_CANMB24_BASE)
#define TSB_CANMB25                ((  TSB_CANMB_TypeDef *)TSB_CANMB25_BASE)
#define TSB_CANMB26                ((  TSB_CANMB_TypeDef *)TSB_CANMB26_BASE)
#define TSB_CANMB27                ((  TSB_CANMB_TypeDef *)TSB_CANMB27_BASE)
#define TSB_CANMB28                ((  TSB_CANMB_TypeDef *)TSB_CANMB28_BASE)
#define TSB_CANMB29                ((  TSB_CANMB_TypeDef *)TSB_CANMB29_BASE)
#define TSB_CANMB30                ((  TSB_CANMB_TypeDef *)TSB_CANMB30_BASE)
#define TSB_CANMB31                ((  TSB_CANMB_TypeDef *)TSB_CANMB31_BASE)
#define TSB_CAN                    ((    TSB_CAN_TypeDef *)   TSB_CAN_BASE)
#define TSB_IA                     ((     TSB_IA_TypeDef *)    TSB_IA_BASE)
#define TSB_RLM                    ((    TSB_RLM_TypeDef *)   TSB_RLM_BASE)
#define TSB_LVD                    ((    TSB_LVD_TypeDef *)   TSB_LVD_BASE)
#define TSB_RPAR0                  ((   TSB_RPAR_TypeDef *) TSB_RPAR0_BASE)
#define TSB_RPAR1                  ((   TSB_RPAR_TypeDef *) TSB_RPAR1_BASE)
#define TSB_CRC                    ((    TSB_CRC_TypeDef *)   TSB_CRC_BASE)
#define TSB_CG                     ((     TSB_CG_TypeDef *)    TSB_CG_BASE)
#define TSB_IB                     ((     TSB_IB_TypeDef *)    TSB_IB_BASE)
#define TSB_IMN                    ((    TSB_IMN_TypeDef *)   TSB_IMN_BASE)
#define TSB_DNFA                   ((    TSB_DNF_TypeDef *)  TSB_DNFA_BASE)
#define TSB_DNFB                   ((    TSB_DNF_TypeDef *)  TSB_DNFB_BASE)
#define TSB_DNFC                   ((    TSB_DNF_TypeDef *)  TSB_DNFC_BASE)
#define TSB_TSEL0                  ((   TSB_TSEL_TypeDef *) TSB_TSEL0_BASE)
#define TSB_SIWD0                  ((   TSB_SIWD_TypeDef *) TSB_SIWD0_BASE)
#define TSB_NBD                    ((    TSB_NBD_TypeDef *)   TSB_NBD_BASE)
#define TSB_DMAA                   ((    TSB_DMA_TypeDef *)  TSB_DMAA_BASE)
#define TSB_ADA                    ((     TSB_AD_TypeDef *)   TSB_ADA_BASE)
#define TSB_ADB                    ((     TSB_AD_TypeDef *)   TSB_ADB_BASE)
#define TSB_ADC                    ((     TSB_AD_TypeDef *)   TSB_ADC_BASE)
#define TSB_AMP                    ((    TSB_AMP_TypeDef *)   TSB_AMP_BASE)
#define TSB_T32A0                  ((   TSB_T32A_TypeDef *) TSB_T32A0_BASE)
#define TSB_T32A1                  ((   TSB_T32A_TypeDef *) TSB_T32A1_BASE)
#define TSB_T32A2                  ((   TSB_T32A_TypeDef *) TSB_T32A2_BASE)
#define TSB_T32A3                  ((   TSB_T32A_TypeDef *) TSB_T32A3_BASE)
#define TSB_T32A4                  ((   TSB_T32A_TypeDef *) TSB_T32A4_BASE)
#define TSB_T32A5                  ((   TSB_T32A_TypeDef *) TSB_T32A5_BASE)
#define TSB_TSPI0                  ((   TSB_TSPI_TypeDef *) TSB_TSPI0_BASE)
#define TSB_TSPI1                  ((   TSB_TSPI_TypeDef *) TSB_TSPI1_BASE)
#define TSB_UART0                  ((   TSB_UART_TypeDef *) TSB_UART0_BASE)
#define TSB_UART1                  ((   TSB_UART_TypeDef *) TSB_UART1_BASE)
#define TSB_UART2                  ((   TSB_UART_TypeDef *) TSB_UART2_BASE)
#define TSB_UART3                  ((   TSB_UART_TypeDef *) TSB_UART3_BASE)
#define TSB_I2C0                   ((    TSB_I2C_TypeDef *)  TSB_I2C0_BASE)
#define TSB_I2C1                   ((    TSB_I2C_TypeDef *)  TSB_I2C1_BASE)
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
#define TSB_PP                     ((     TSB_PP_TypeDef *)    TSB_PP_BASE)
#define TSB_PR                     ((     TSB_PR_TypeDef *)    TSB_PR_BASE)
#define TSB_PT                     ((     TSB_PT_TypeDef *)    TSB_PT_BASE)
#define TSB_PU                     ((     TSB_PU_TypeDef *)    TSB_PU_BASE)
#define TSB_PV                     ((     TSB_PV_TypeDef *)    TSB_PV_BASE)
#define TSB_PW                     ((     TSB_PW_TypeDef *)    TSB_PW_BASE)
#define TSB_TRM                    ((    TSB_TRM_TypeDef *)   TSB_TRM_BASE)
#define TSB_OFD                    ((    TSB_OFD_TypeDef *)   TSB_OFD_BASE)
#define TSB_PMD0                   ((    TSB_PMD_TypeDef *)  TSB_PMD0_BASE)
#define TSB_PMD1                   ((    TSB_PMD_TypeDef *)  TSB_PMD1_BASE)
#define TSB_PMD2                   ((    TSB_PMD_TypeDef *)  TSB_PMD2_BASE)
#define TSB_EN0                    ((     TSB_EN_TypeDef *)   TSB_EN0_BASE)
#define TSB_EN1                    ((     TSB_EN_TypeDef *)   TSB_EN1_BASE)
#define TSB_EN2                    ((     TSB_EN_TypeDef *)   TSB_EN2_BASE)
#define TSB_VE0                    ((     TSB_VE_TypeDef *)   TSB_VE0_BASE)
#define TSB_FC                     ((     TSB_FC_TypeDef *)    TSB_FC_BASE)


/* Bit-Band for Device Specific Peripheral Registers */
#define BITBAND_OFFSET (0x02000000UL)
#define BITBAND_PERI_BASE (PERI_BASE + BITBAND_OFFSET)
#define BITBAND_PERI(addr, bitnum) (BITBAND_PERI_BASE + (((uint32_t)(addr) - PERI_BASE) << 5) + ((uint32_t)(bitnum) << 2))



/* CAN Controller Mailbox RAM (CANMB) */
#define TSB_CANMB0_ID_RFH                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB0->ID,29)))
#define TSB_CANMB0_ID_GAME_LAME                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB0->ID,30)))
#define TSB_CANMB0_ID_IDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB0->ID,31)))
#define TSB_CANMB0_TSVMCF_RTR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB0->TSVMCF,4)))

#define TSB_CANMB1_ID_RFH                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB1->ID,29)))
#define TSB_CANMB1_ID_GAME_LAME                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB1->ID,30)))
#define TSB_CANMB1_ID_IDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB1->ID,31)))
#define TSB_CANMB1_TSVMCF_RTR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB1->TSVMCF,4)))

#define TSB_CANMB2_ID_RFH                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB2->ID,29)))
#define TSB_CANMB2_ID_GAME_LAME                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB2->ID,30)))
#define TSB_CANMB2_ID_IDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB2->ID,31)))
#define TSB_CANMB2_TSVMCF_RTR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB2->TSVMCF,4)))

#define TSB_CANMB3_ID_RFH                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB3->ID,29)))
#define TSB_CANMB3_ID_GAME_LAME                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB3->ID,30)))
#define TSB_CANMB3_ID_IDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB3->ID,31)))
#define TSB_CANMB3_TSVMCF_RTR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB3->TSVMCF,4)))

#define TSB_CANMB4_ID_RFH                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB4->ID,29)))
#define TSB_CANMB4_ID_GAME_LAME                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB4->ID,30)))
#define TSB_CANMB4_ID_IDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB4->ID,31)))
#define TSB_CANMB4_TSVMCF_RTR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB4->TSVMCF,4)))

#define TSB_CANMB5_ID_RFH                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB5->ID,29)))
#define TSB_CANMB5_ID_GAME_LAME                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB5->ID,30)))
#define TSB_CANMB5_ID_IDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB5->ID,31)))
#define TSB_CANMB5_TSVMCF_RTR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB5->TSVMCF,4)))

#define TSB_CANMB6_ID_RFH                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB6->ID,29)))
#define TSB_CANMB6_ID_GAME_LAME                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB6->ID,30)))
#define TSB_CANMB6_ID_IDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB6->ID,31)))
#define TSB_CANMB6_TSVMCF_RTR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB6->TSVMCF,4)))

#define TSB_CANMB7_ID_RFH                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB7->ID,29)))
#define TSB_CANMB7_ID_GAME_LAME                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB7->ID,30)))
#define TSB_CANMB7_ID_IDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB7->ID,31)))
#define TSB_CANMB7_TSVMCF_RTR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB7->TSVMCF,4)))

#define TSB_CANMB8_ID_RFH                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB8->ID,29)))
#define TSB_CANMB8_ID_GAME_LAME                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB8->ID,30)))
#define TSB_CANMB8_ID_IDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB8->ID,31)))
#define TSB_CANMB8_TSVMCF_RTR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB8->TSVMCF,4)))

#define TSB_CANMB9_ID_RFH                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB9->ID,29)))
#define TSB_CANMB9_ID_GAME_LAME                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB9->ID,30)))
#define TSB_CANMB9_ID_IDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB9->ID,31)))
#define TSB_CANMB9_TSVMCF_RTR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB9->TSVMCF,4)))

#define TSB_CANMB10_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB10->ID,29)))
#define TSB_CANMB10_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB10->ID,30)))
#define TSB_CANMB10_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB10->ID,31)))
#define TSB_CANMB10_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB10->TSVMCF,4)))

#define TSB_CANMB11_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB11->ID,29)))
#define TSB_CANMB11_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB11->ID,30)))
#define TSB_CANMB11_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB11->ID,31)))
#define TSB_CANMB11_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB11->TSVMCF,4)))

#define TSB_CANMB12_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB12->ID,29)))
#define TSB_CANMB12_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB12->ID,30)))
#define TSB_CANMB12_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB12->ID,31)))
#define TSB_CANMB12_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB12->TSVMCF,4)))

#define TSB_CANMB13_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB13->ID,29)))
#define TSB_CANMB13_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB13->ID,30)))
#define TSB_CANMB13_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB13->ID,31)))
#define TSB_CANMB13_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB13->TSVMCF,4)))

#define TSB_CANMB14_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB14->ID,29)))
#define TSB_CANMB14_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB14->ID,30)))
#define TSB_CANMB14_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB14->ID,31)))
#define TSB_CANMB14_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB14->TSVMCF,4)))

#define TSB_CANMB15_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB15->ID,29)))
#define TSB_CANMB15_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB15->ID,30)))
#define TSB_CANMB15_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB15->ID,31)))
#define TSB_CANMB15_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB15->TSVMCF,4)))

#define TSB_CANMB16_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB16->ID,29)))
#define TSB_CANMB16_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB16->ID,30)))
#define TSB_CANMB16_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB16->ID,31)))
#define TSB_CANMB16_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB16->TSVMCF,4)))

#define TSB_CANMB17_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB17->ID,29)))
#define TSB_CANMB17_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB17->ID,30)))
#define TSB_CANMB17_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB17->ID,31)))
#define TSB_CANMB17_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB17->TSVMCF,4)))

#define TSB_CANMB18_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB18->ID,29)))
#define TSB_CANMB18_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB18->ID,30)))
#define TSB_CANMB18_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB18->ID,31)))
#define TSB_CANMB18_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB18->TSVMCF,4)))

#define TSB_CANMB19_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB19->ID,29)))
#define TSB_CANMB19_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB19->ID,30)))
#define TSB_CANMB19_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB19->ID,31)))
#define TSB_CANMB19_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB19->TSVMCF,4)))

#define TSB_CANMB20_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB20->ID,29)))
#define TSB_CANMB20_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB20->ID,30)))
#define TSB_CANMB20_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB20->ID,31)))
#define TSB_CANMB20_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB20->TSVMCF,4)))

#define TSB_CANMB21_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB21->ID,29)))
#define TSB_CANMB21_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB21->ID,30)))
#define TSB_CANMB21_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB21->ID,31)))
#define TSB_CANMB21_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB21->TSVMCF,4)))

#define TSB_CANMB22_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB22->ID,29)))
#define TSB_CANMB22_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB22->ID,30)))
#define TSB_CANMB22_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB22->ID,31)))
#define TSB_CANMB22_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB22->TSVMCF,4)))

#define TSB_CANMB23_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB23->ID,29)))
#define TSB_CANMB23_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB23->ID,30)))
#define TSB_CANMB23_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB23->ID,31)))
#define TSB_CANMB23_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB23->TSVMCF,4)))

#define TSB_CANMB24_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB24->ID,29)))
#define TSB_CANMB24_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB24->ID,30)))
#define TSB_CANMB24_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB24->ID,31)))
#define TSB_CANMB24_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB24->TSVMCF,4)))

#define TSB_CANMB25_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB25->ID,29)))
#define TSB_CANMB25_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB25->ID,30)))
#define TSB_CANMB25_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB25->ID,31)))
#define TSB_CANMB25_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB25->TSVMCF,4)))

#define TSB_CANMB26_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB26->ID,29)))
#define TSB_CANMB26_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB26->ID,30)))
#define TSB_CANMB26_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB26->ID,31)))
#define TSB_CANMB26_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB26->TSVMCF,4)))

#define TSB_CANMB27_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB27->ID,29)))
#define TSB_CANMB27_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB27->ID,30)))
#define TSB_CANMB27_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB27->ID,31)))
#define TSB_CANMB27_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB27->TSVMCF,4)))

#define TSB_CANMB28_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB28->ID,29)))
#define TSB_CANMB28_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB28->ID,30)))
#define TSB_CANMB28_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB28->ID,31)))
#define TSB_CANMB28_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB28->TSVMCF,4)))

#define TSB_CANMB29_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB29->ID,29)))
#define TSB_CANMB29_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB29->ID,30)))
#define TSB_CANMB29_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB29->ID,31)))
#define TSB_CANMB29_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB29->TSVMCF,4)))

#define TSB_CANMB30_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB30->ID,29)))
#define TSB_CANMB30_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB30->ID,30)))
#define TSB_CANMB30_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB30->ID,31)))
#define TSB_CANMB30_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB30->TSVMCF,4)))

#define TSB_CANMB31_ID_RFH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB31->ID,29)))
#define TSB_CANMB31_ID_GAME_LAME                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB31->ID,30)))
#define TSB_CANMB31_ID_IDE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB31->ID,31)))
#define TSB_CANMB31_TSVMCF_RTR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CANMB31->TSVMCF,4)))


/* CAN Controller (CAN) */
#define TSB_CAN_MC_MC0                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,0)))
#define TSB_CAN_MC_MC1                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,1)))
#define TSB_CAN_MC_MC2                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,2)))
#define TSB_CAN_MC_MC3                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,3)))
#define TSB_CAN_MC_MC4                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,4)))
#define TSB_CAN_MC_MC5                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,5)))
#define TSB_CAN_MC_MC6                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,6)))
#define TSB_CAN_MC_MC7                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,7)))
#define TSB_CAN_MC_MC8                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,8)))
#define TSB_CAN_MC_MC9                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,9)))
#define TSB_CAN_MC_MC10                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,10)))
#define TSB_CAN_MC_MC11                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,11)))
#define TSB_CAN_MC_MC12                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,12)))
#define TSB_CAN_MC_MC13                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,13)))
#define TSB_CAN_MC_MC14                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,14)))
#define TSB_CAN_MC_MC15                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,15)))
#define TSB_CAN_MC_MC16                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,16)))
#define TSB_CAN_MC_MC17                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,17)))
#define TSB_CAN_MC_MC18                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,18)))
#define TSB_CAN_MC_MC19                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,19)))
#define TSB_CAN_MC_MC20                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,20)))
#define TSB_CAN_MC_MC21                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,21)))
#define TSB_CAN_MC_MC22                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,22)))
#define TSB_CAN_MC_MC23                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,23)))
#define TSB_CAN_MC_MC24                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,24)))
#define TSB_CAN_MC_MC25                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,25)))
#define TSB_CAN_MC_MC26                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,26)))
#define TSB_CAN_MC_MC27                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,27)))
#define TSB_CAN_MC_MC28                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,28)))
#define TSB_CAN_MC_MC29                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,29)))
#define TSB_CAN_MC_MC30                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,30)))
#define TSB_CAN_MC_MC31                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MC,31)))
#define TSB_CAN_MD_MD0                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,0)))
#define TSB_CAN_MD_MD1                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,1)))
#define TSB_CAN_MD_MD2                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,2)))
#define TSB_CAN_MD_MD3                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,3)))
#define TSB_CAN_MD_MD4                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,4)))
#define TSB_CAN_MD_MD5                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,5)))
#define TSB_CAN_MD_MD6                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,6)))
#define TSB_CAN_MD_MD7                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,7)))
#define TSB_CAN_MD_MD8                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,8)))
#define TSB_CAN_MD_MD9                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,9)))
#define TSB_CAN_MD_MD10                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,10)))
#define TSB_CAN_MD_MD11                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,11)))
#define TSB_CAN_MD_MD12                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,12)))
#define TSB_CAN_MD_MD13                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,13)))
#define TSB_CAN_MD_MD14                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,14)))
#define TSB_CAN_MD_MD15                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,15)))
#define TSB_CAN_MD_MD16                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,16)))
#define TSB_CAN_MD_MD17                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,17)))
#define TSB_CAN_MD_MD18                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,18)))
#define TSB_CAN_MD_MD19                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,19)))
#define TSB_CAN_MD_MD20                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,20)))
#define TSB_CAN_MD_MD21                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,21)))
#define TSB_CAN_MD_MD22                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,22)))
#define TSB_CAN_MD_MD23                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,23)))
#define TSB_CAN_MD_MD24                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,24)))
#define TSB_CAN_MD_MD25                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,25)))
#define TSB_CAN_MD_MD26                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,26)))
#define TSB_CAN_MD_MD27                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,27)))
#define TSB_CAN_MD_MD28                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,28)))
#define TSB_CAN_MD_MD29                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,29)))
#define TSB_CAN_MD_MD30                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MD,30)))
#define TSB_CAN_MD_MD31                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_CAN->MD,31)))
#define TSB_CAN_TRS_TRS0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,0)))
#define TSB_CAN_TRS_TRS1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,1)))
#define TSB_CAN_TRS_TRS2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,2)))
#define TSB_CAN_TRS_TRS3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,3)))
#define TSB_CAN_TRS_TRS4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,4)))
#define TSB_CAN_TRS_TRS5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,5)))
#define TSB_CAN_TRS_TRS6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,6)))
#define TSB_CAN_TRS_TRS7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,7)))
#define TSB_CAN_TRS_TRS8                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,8)))
#define TSB_CAN_TRS_TRS9                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,9)))
#define TSB_CAN_TRS_TRS10                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,10)))
#define TSB_CAN_TRS_TRS11                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,11)))
#define TSB_CAN_TRS_TRS12                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,12)))
#define TSB_CAN_TRS_TRS13                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,13)))
#define TSB_CAN_TRS_TRS14                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,14)))
#define TSB_CAN_TRS_TRS15                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,15)))
#define TSB_CAN_TRS_TRS16                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,16)))
#define TSB_CAN_TRS_TRS17                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,17)))
#define TSB_CAN_TRS_TRS18                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,18)))
#define TSB_CAN_TRS_TRS19                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,19)))
#define TSB_CAN_TRS_TRS20                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,20)))
#define TSB_CAN_TRS_TRS21                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,21)))
#define TSB_CAN_TRS_TRS22                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,22)))
#define TSB_CAN_TRS_TRS23                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,23)))
#define TSB_CAN_TRS_TRS24                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,24)))
#define TSB_CAN_TRS_TRS25                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,25)))
#define TSB_CAN_TRS_TRS26                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,26)))
#define TSB_CAN_TRS_TRS27                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,27)))
#define TSB_CAN_TRS_TRS28                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,28)))
#define TSB_CAN_TRS_TRS29                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,29)))
#define TSB_CAN_TRS_TRS30                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRS,30)))
#define TSB_CAN_TRR_TRR0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,0)))
#define TSB_CAN_TRR_TRR1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,1)))
#define TSB_CAN_TRR_TRR2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,2)))
#define TSB_CAN_TRR_TRR3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,3)))
#define TSB_CAN_TRR_TRR4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,4)))
#define TSB_CAN_TRR_TRR5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,5)))
#define TSB_CAN_TRR_TRR6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,6)))
#define TSB_CAN_TRR_TRR7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,7)))
#define TSB_CAN_TRR_TRR8                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,8)))
#define TSB_CAN_TRR_TRR9                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,9)))
#define TSB_CAN_TRR_TRR10                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,10)))
#define TSB_CAN_TRR_TRR11                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,11)))
#define TSB_CAN_TRR_TRR12                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,12)))
#define TSB_CAN_TRR_TRR13                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,13)))
#define TSB_CAN_TRR_TRR14                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,14)))
#define TSB_CAN_TRR_TRR15                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,15)))
#define TSB_CAN_TRR_TRR16                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,16)))
#define TSB_CAN_TRR_TRR17                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,17)))
#define TSB_CAN_TRR_TRR18                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,18)))
#define TSB_CAN_TRR_TRR19                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,19)))
#define TSB_CAN_TRR_TRR20                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,20)))
#define TSB_CAN_TRR_TRR21                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,21)))
#define TSB_CAN_TRR_TRR22                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,22)))
#define TSB_CAN_TRR_TRR23                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,23)))
#define TSB_CAN_TRR_TRR24                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,24)))
#define TSB_CAN_TRR_TRR25                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,25)))
#define TSB_CAN_TRR_TRR26                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,26)))
#define TSB_CAN_TRR_TRR27                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,27)))
#define TSB_CAN_TRR_TRR28                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,28)))
#define TSB_CAN_TRR_TRR29                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,29)))
#define TSB_CAN_TRR_TRR30                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TRR,30)))
#define TSB_CAN_TA_TA0                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,0)))
#define TSB_CAN_TA_TA1                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,1)))
#define TSB_CAN_TA_TA2                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,2)))
#define TSB_CAN_TA_TA3                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,3)))
#define TSB_CAN_TA_TA4                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,4)))
#define TSB_CAN_TA_TA5                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,5)))
#define TSB_CAN_TA_TA6                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,6)))
#define TSB_CAN_TA_TA7                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,7)))
#define TSB_CAN_TA_TA8                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,8)))
#define TSB_CAN_TA_TA9                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,9)))
#define TSB_CAN_TA_TA10                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,10)))
#define TSB_CAN_TA_TA11                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,11)))
#define TSB_CAN_TA_TA12                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,12)))
#define TSB_CAN_TA_TA13                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,13)))
#define TSB_CAN_TA_TA14                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,14)))
#define TSB_CAN_TA_TA15                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,15)))
#define TSB_CAN_TA_TA16                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,16)))
#define TSB_CAN_TA_TA17                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,17)))
#define TSB_CAN_TA_TA18                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,18)))
#define TSB_CAN_TA_TA19                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,19)))
#define TSB_CAN_TA_TA20                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,20)))
#define TSB_CAN_TA_TA21                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,21)))
#define TSB_CAN_TA_TA22                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,22)))
#define TSB_CAN_TA_TA23                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,23)))
#define TSB_CAN_TA_TA24                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,24)))
#define TSB_CAN_TA_TA25                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,25)))
#define TSB_CAN_TA_TA26                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,26)))
#define TSB_CAN_TA_TA27                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,27)))
#define TSB_CAN_TA_TA28                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,28)))
#define TSB_CAN_TA_TA29                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,29)))
#define TSB_CAN_TA_TA30                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->TA,30)))
#define TSB_CAN_AA_AA0                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,0)))
#define TSB_CAN_AA_AA1                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,1)))
#define TSB_CAN_AA_AA2                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,2)))
#define TSB_CAN_AA_AA3                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,3)))
#define TSB_CAN_AA_AA4                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,4)))
#define TSB_CAN_AA_AA5                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,5)))
#define TSB_CAN_AA_AA6                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,6)))
#define TSB_CAN_AA_AA7                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,7)))
#define TSB_CAN_AA_AA8                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,8)))
#define TSB_CAN_AA_AA9                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,9)))
#define TSB_CAN_AA_AA10                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,10)))
#define TSB_CAN_AA_AA11                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,11)))
#define TSB_CAN_AA_AA12                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,12)))
#define TSB_CAN_AA_AA13                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,13)))
#define TSB_CAN_AA_AA14                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,14)))
#define TSB_CAN_AA_AA15                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,15)))
#define TSB_CAN_AA_AA16                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,16)))
#define TSB_CAN_AA_AA17                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,17)))
#define TSB_CAN_AA_AA18                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,18)))
#define TSB_CAN_AA_AA19                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,19)))
#define TSB_CAN_AA_AA20                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,20)))
#define TSB_CAN_AA_AA21                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,21)))
#define TSB_CAN_AA_AA22                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,22)))
#define TSB_CAN_AA_AA23                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,23)))
#define TSB_CAN_AA_AA24                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,24)))
#define TSB_CAN_AA_AA25                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,25)))
#define TSB_CAN_AA_AA26                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,26)))
#define TSB_CAN_AA_AA27                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,27)))
#define TSB_CAN_AA_AA28                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,28)))
#define TSB_CAN_AA_AA29                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,29)))
#define TSB_CAN_AA_AA30                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->AA,30)))
#define TSB_CAN_RMP_RMP0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,0)))
#define TSB_CAN_RMP_RMP1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,1)))
#define TSB_CAN_RMP_RMP2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,2)))
#define TSB_CAN_RMP_RMP3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,3)))
#define TSB_CAN_RMP_RMP4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,4)))
#define TSB_CAN_RMP_RMP5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,5)))
#define TSB_CAN_RMP_RMP6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,6)))
#define TSB_CAN_RMP_RMP7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,7)))
#define TSB_CAN_RMP_RMP8                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,8)))
#define TSB_CAN_RMP_RMP9                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,9)))
#define TSB_CAN_RMP_RMP10                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,10)))
#define TSB_CAN_RMP_RMP11                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,11)))
#define TSB_CAN_RMP_RMP12                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,12)))
#define TSB_CAN_RMP_RMP13                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,13)))
#define TSB_CAN_RMP_RMP14                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,14)))
#define TSB_CAN_RMP_RMP15                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,15)))
#define TSB_CAN_RMP_RMP16                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,16)))
#define TSB_CAN_RMP_RMP17                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,17)))
#define TSB_CAN_RMP_RMP18                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,18)))
#define TSB_CAN_RMP_RMP19                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,19)))
#define TSB_CAN_RMP_RMP20                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,20)))
#define TSB_CAN_RMP_RMP21                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,21)))
#define TSB_CAN_RMP_RMP22                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,22)))
#define TSB_CAN_RMP_RMP23                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,23)))
#define TSB_CAN_RMP_RMP24                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,24)))
#define TSB_CAN_RMP_RMP25                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,25)))
#define TSB_CAN_RMP_RMP26                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,26)))
#define TSB_CAN_RMP_RMP27                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,27)))
#define TSB_CAN_RMP_RMP28                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,28)))
#define TSB_CAN_RMP_RMP29                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,29)))
#define TSB_CAN_RMP_RMP30                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,30)))
#define TSB_CAN_RMP_RMP31                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RMP,31)))
#define TSB_CAN_RML_RML0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,0)))
#define TSB_CAN_RML_RML1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,1)))
#define TSB_CAN_RML_RML2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,2)))
#define TSB_CAN_RML_RML3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,3)))
#define TSB_CAN_RML_RML4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,4)))
#define TSB_CAN_RML_RML5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,5)))
#define TSB_CAN_RML_RML6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,6)))
#define TSB_CAN_RML_RML7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,7)))
#define TSB_CAN_RML_RML8                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,8)))
#define TSB_CAN_RML_RML9                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,9)))
#define TSB_CAN_RML_RML10                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,10)))
#define TSB_CAN_RML_RML11                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,11)))
#define TSB_CAN_RML_RML12                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,12)))
#define TSB_CAN_RML_RML13                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,13)))
#define TSB_CAN_RML_RML14                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,14)))
#define TSB_CAN_RML_RML15                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,15)))
#define TSB_CAN_RML_RML16                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,16)))
#define TSB_CAN_RML_RML17                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,17)))
#define TSB_CAN_RML_RML18                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,18)))
#define TSB_CAN_RML_RML19                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,19)))
#define TSB_CAN_RML_RML20                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,20)))
#define TSB_CAN_RML_RML21                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,21)))
#define TSB_CAN_RML_RML22                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,22)))
#define TSB_CAN_RML_RML23                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,23)))
#define TSB_CAN_RML_RML24                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,24)))
#define TSB_CAN_RML_RML25                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,25)))
#define TSB_CAN_RML_RML26                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,26)))
#define TSB_CAN_RML_RML27                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,27)))
#define TSB_CAN_RML_RML28                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,28)))
#define TSB_CAN_RML_RML29                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,29)))
#define TSB_CAN_RML_RML30                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,30)))
#define TSB_CAN_RML_RML31                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RML,31)))
#define TSB_CAN_LAM_LAMI                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->LAM,31)))
#define TSB_CAN_GAM_GAMI                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GAM,31)))
#define TSB_CAN_MCR_SRES                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MCR,0)))
#define TSB_CAN_MCR_TSCC                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MCR,1)))
#define TSB_CAN_MCR_MTOS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MCR,3)))
#define TSB_CAN_MCR_WUBA                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MCR,4)))
#define TSB_CAN_MCR_SMR                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MCR,6)))
#define TSB_CAN_MCR_CCR                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MCR,7)))
#define TSB_CAN_MCR_TSTERR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MCR,8)))
#define TSB_CAN_MCR_TSTLB                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MCR,9)))
#define TSB_CAN_MCR_SUR                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MCR,11)))
#define TSB_CAN_GSR_EW                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_CAN->GSR,0)))
#define TSB_CAN_GSR_EP                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_CAN->GSR,1)))
#define TSB_CAN_GSR_BO                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_CAN->GSR,2)))
#define TSB_CAN_GSR_TSO                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_CAN->GSR,3)))
#define TSB_CAN_GSR_SMA                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_CAN->GSR,6)))
#define TSB_CAN_GSR_CCE                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_CAN->GSR,7)))
#define TSB_CAN_GSR_SUA                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_CAN->GSR,8)))
#define TSB_CAN_GSR_TM                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_CAN->GSR,10)))
#define TSB_CAN_GSR_RM                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_CAN->GSR,11)))
#define TSB_CAN_BCR2_SAM                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->BCR2,7)))
#define TSB_CAN_GIF_WLIF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIF,0)))
#define TSB_CAN_GIF_EPIF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIF,1)))
#define TSB_CAN_GIF_BOIF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIF,2)))
#define TSB_CAN_GIF_TSOIF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIF,3)))
#define TSB_CAN_GIF_TRMABF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIF,4)))
#define TSB_CAN_GIF_RMLIF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIF,5)))
#define TSB_CAN_GIF_WUIF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIF,6)))
#define TSB_CAN_GIF_RFPF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIF,7)))
#define TSB_CAN_GIM_WLIM                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIM,0)))
#define TSB_CAN_GIM_EPIM                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIM,1)))
#define TSB_CAN_GIM_BOIM                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIM,2)))
#define TSB_CAN_GIM_TSOIM                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIM,3)))
#define TSB_CAN_GIM_TRMABF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIM,4)))
#define TSB_CAN_GIM_RMLIM                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIM,5)))
#define TSB_CAN_GIM_WUIM                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIM,6)))
#define TSB_CAN_GIM_RFPM                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->GIM,7)))
#define TSB_CAN_MBTIF_MBTIF0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,0)))
#define TSB_CAN_MBTIF_MBTIF1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,1)))
#define TSB_CAN_MBTIF_MBTIF2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,2)))
#define TSB_CAN_MBTIF_MBTIF3                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,3)))
#define TSB_CAN_MBTIF_MBTIF4                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,4)))
#define TSB_CAN_MBTIF_MBTIF5                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,5)))
#define TSB_CAN_MBTIF_MBTIF6                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,6)))
#define TSB_CAN_MBTIF_MBTIF7                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,7)))
#define TSB_CAN_MBTIF_MBTIF8                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,8)))
#define TSB_CAN_MBTIF_MBTIF9                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,9)))
#define TSB_CAN_MBTIF_MBTIF10                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,10)))
#define TSB_CAN_MBTIF_MBTIF11                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,11)))
#define TSB_CAN_MBTIF_MBTIF12                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,12)))
#define TSB_CAN_MBTIF_MBTIF13                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,13)))
#define TSB_CAN_MBTIF_MBTIF14                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,14)))
#define TSB_CAN_MBTIF_MBTIF15                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,15)))
#define TSB_CAN_MBTIF_MBTIF16                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,16)))
#define TSB_CAN_MBTIF_MBTIF17                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,17)))
#define TSB_CAN_MBTIF_MBTIF18                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,18)))
#define TSB_CAN_MBTIF_MBTIF19                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,19)))
#define TSB_CAN_MBTIF_MBTIF20                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,20)))
#define TSB_CAN_MBTIF_MBTIF21                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,21)))
#define TSB_CAN_MBTIF_MBTIF22                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,22)))
#define TSB_CAN_MBTIF_MBTIF23                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,23)))
#define TSB_CAN_MBTIF_MBTIF24                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,24)))
#define TSB_CAN_MBTIF_MBTIF25                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,25)))
#define TSB_CAN_MBTIF_MBTIF26                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,26)))
#define TSB_CAN_MBTIF_MBTIF27                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,27)))
#define TSB_CAN_MBTIF_MBTIF28                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,28)))
#define TSB_CAN_MBTIF_MBTIF29                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,29)))
#define TSB_CAN_MBTIF_MBTIF30                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBTIF,30)))
#define TSB_CAN_MBRIF_MBRIF0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,0)))
#define TSB_CAN_MBRIF_MBRIF1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,1)))
#define TSB_CAN_MBRIF_MBRIF2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,2)))
#define TSB_CAN_MBRIF_MBRIF3                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,3)))
#define TSB_CAN_MBRIF_MBRIF4                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,4)))
#define TSB_CAN_MBRIF_MBRIF5                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,5)))
#define TSB_CAN_MBRIF_MBRIF6                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,6)))
#define TSB_CAN_MBRIF_MBRIF7                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,7)))
#define TSB_CAN_MBRIF_MBRIF8                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,8)))
#define TSB_CAN_MBRIF_MBRIF9                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,9)))
#define TSB_CAN_MBRIF_MBRIF10                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,10)))
#define TSB_CAN_MBRIF_MBRIF11                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,11)))
#define TSB_CAN_MBRIF_MBRIF12                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,12)))
#define TSB_CAN_MBRIF_MBRIF13                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,13)))
#define TSB_CAN_MBRIF_MBRIF14                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,14)))
#define TSB_CAN_MBRIF_MBRIF15                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,15)))
#define TSB_CAN_MBRIF_MBRIF16                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,16)))
#define TSB_CAN_MBRIF_MBRIF17                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,17)))
#define TSB_CAN_MBRIF_MBRIF18                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,18)))
#define TSB_CAN_MBRIF_MBRIF19                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,19)))
#define TSB_CAN_MBRIF_MBRIF20                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,20)))
#define TSB_CAN_MBRIF_MBRIF21                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,21)))
#define TSB_CAN_MBRIF_MBRIF22                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,22)))
#define TSB_CAN_MBRIF_MBRIF23                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,23)))
#define TSB_CAN_MBRIF_MBRIF24                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,24)))
#define TSB_CAN_MBRIF_MBRIF25                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,25)))
#define TSB_CAN_MBRIF_MBRIF26                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,26)))
#define TSB_CAN_MBRIF_MBRIF27                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,27)))
#define TSB_CAN_MBRIF_MBRIF28                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,28)))
#define TSB_CAN_MBRIF_MBRIF29                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,29)))
#define TSB_CAN_MBRIF_MBRIF30                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,30)))
#define TSB_CAN_MBRIF_MBRIF31                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBRIF,31)))
#define TSB_CAN_MBIM_MBIM0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,0)))
#define TSB_CAN_MBIM_MBIM1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,1)))
#define TSB_CAN_MBIM_MBIM2                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,2)))
#define TSB_CAN_MBIM_MBIM3                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,3)))
#define TSB_CAN_MBIM_MBIM4                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,4)))
#define TSB_CAN_MBIM_MBIM5                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,5)))
#define TSB_CAN_MBIM_MBIM6                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,6)))
#define TSB_CAN_MBIM_MBIM7                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,7)))
#define TSB_CAN_MBIM_MBIM8                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,8)))
#define TSB_CAN_MBIM_MBIM9                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,9)))
#define TSB_CAN_MBIM_MBIM10                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,10)))
#define TSB_CAN_MBIM_MBIM11                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,11)))
#define TSB_CAN_MBIM_MBIM12                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,12)))
#define TSB_CAN_MBIM_MBIM13                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,13)))
#define TSB_CAN_MBIM_MBIM14                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,14)))
#define TSB_CAN_MBIM_MBIM15                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,15)))
#define TSB_CAN_MBIM_MBIM16                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,16)))
#define TSB_CAN_MBIM_MBIM17                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,17)))
#define TSB_CAN_MBIM_MBIM18                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,18)))
#define TSB_CAN_MBIM_MBIM19                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,19)))
#define TSB_CAN_MBIM_MBIM20                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,20)))
#define TSB_CAN_MBIM_MBIM21                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,21)))
#define TSB_CAN_MBIM_MBIM22                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,22)))
#define TSB_CAN_MBIM_MBIM23                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,23)))
#define TSB_CAN_MBIM_MBIM24                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,24)))
#define TSB_CAN_MBIM_MBIM25                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,25)))
#define TSB_CAN_MBIM_MBIM26                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,26)))
#define TSB_CAN_MBIM_MBIM27                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,27)))
#define TSB_CAN_MBIM_MBIM28                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,28)))
#define TSB_CAN_MBIM_MBIM29                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,29)))
#define TSB_CAN_MBIM_MBIM30                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,30)))
#define TSB_CAN_MBIM_MBIM31                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->MBIM,31)))
#define TSB_CAN_CDR_CDR0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,0)))
#define TSB_CAN_CDR_CDR1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,1)))
#define TSB_CAN_CDR_CDR2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,2)))
#define TSB_CAN_CDR_CDR3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,3)))
#define TSB_CAN_CDR_CDR4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,4)))
#define TSB_CAN_CDR_CDR5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,5)))
#define TSB_CAN_CDR_CDR6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,6)))
#define TSB_CAN_CDR_CDR7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,7)))
#define TSB_CAN_CDR_CDR8                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,8)))
#define TSB_CAN_CDR_CDR9                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,9)))
#define TSB_CAN_CDR_CDR10                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,10)))
#define TSB_CAN_CDR_CDR11                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,11)))
#define TSB_CAN_CDR_CDR12                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,12)))
#define TSB_CAN_CDR_CDR13                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,13)))
#define TSB_CAN_CDR_CDR14                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,14)))
#define TSB_CAN_CDR_CDR15                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,15)))
#define TSB_CAN_CDR_CDR16                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,16)))
#define TSB_CAN_CDR_CDR17                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,17)))
#define TSB_CAN_CDR_CDR18                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,18)))
#define TSB_CAN_CDR_CDR19                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,19)))
#define TSB_CAN_CDR_CDR20                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,20)))
#define TSB_CAN_CDR_CDR21                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,21)))
#define TSB_CAN_CDR_CDR22                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,22)))
#define TSB_CAN_CDR_CDR23                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,23)))
#define TSB_CAN_CDR_CDR24                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,24)))
#define TSB_CAN_CDR_CDR25                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,25)))
#define TSB_CAN_CDR_CDR26                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,26)))
#define TSB_CAN_CDR_CDR27                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,27)))
#define TSB_CAN_CDR_CDR28                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,28)))
#define TSB_CAN_CDR_CDR29                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,29)))
#define TSB_CAN_CDR_CDR30                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->CDR,30)))
#define TSB_CAN_RFP_RFP0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,0)))
#define TSB_CAN_RFP_RFP1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,1)))
#define TSB_CAN_RFP_RFP2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,2)))
#define TSB_CAN_RFP_RFP3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,3)))
#define TSB_CAN_RFP_RFP4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,4)))
#define TSB_CAN_RFP_RFP5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,5)))
#define TSB_CAN_RFP_RFP6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,6)))
#define TSB_CAN_RFP_RFP7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,7)))
#define TSB_CAN_RFP_RFP8                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,8)))
#define TSB_CAN_RFP_RFP9                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,9)))
#define TSB_CAN_RFP_RFP10                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,10)))
#define TSB_CAN_RFP_RFP11                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,11)))
#define TSB_CAN_RFP_RFP12                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,12)))
#define TSB_CAN_RFP_RFP13                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,13)))
#define TSB_CAN_RFP_RFP14                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,14)))
#define TSB_CAN_RFP_RFP15                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,15)))
#define TSB_CAN_RFP_RFP16                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,16)))
#define TSB_CAN_RFP_RFP17                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,17)))
#define TSB_CAN_RFP_RFP18                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,18)))
#define TSB_CAN_RFP_RFP19                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,19)))
#define TSB_CAN_RFP_RFP20                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,20)))
#define TSB_CAN_RFP_RFP21                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,21)))
#define TSB_CAN_RFP_RFP22                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,22)))
#define TSB_CAN_RFP_RFP23                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,23)))
#define TSB_CAN_RFP_RFP24                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,24)))
#define TSB_CAN_RFP_RFP25                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,25)))
#define TSB_CAN_RFP_RFP26                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,26)))
#define TSB_CAN_RFP_RFP27                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,27)))
#define TSB_CAN_RFP_RFP28                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,28)))
#define TSB_CAN_RFP_RFP29                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,29)))
#define TSB_CAN_RFP_RFP30                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,30)))
#define TSB_CAN_RFP_RFP31                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CAN->RFP,31)))





/* RAM Parity (RAMP) */
#define TSB_RPAR0_CTL_RPAREN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RPAR0->CTL,0)))
#define TSB_RPAR0_CTL_RPARF                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_RPAR0->CTL,1)))
#define TSB_RPAR0_ST_RPARFG0                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_RPAR0->ST,0)))
#define TSB_RPAR0_ST_RPARFG1                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_RPAR0->ST,1)))
#define TSB_RPAR0_CLR_RPARCLR0                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_RPAR0->CLR,0)))
#define TSB_RPAR0_CLR_RPARCLR1                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_RPAR0->CLR,1)))

#define TSB_RPAR1_CTL_RPAREN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_RPAR1->CTL,0)))
#define TSB_RPAR1_CTL_RPARF                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_RPAR1->CTL,1)))
#define TSB_RPAR1_ST_RPARFG0                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_RPAR1->ST,0)))
#define TSB_RPAR1_ST_RPARFG1                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_RPAR1->ST,1)))
#define TSB_RPAR1_CLR_RPARCLR0                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_RPAR1->CLR,0)))
#define TSB_RPAR1_CLR_RPARCLR1                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_RPAR1->CLR,1)))



/* Clock Control and Operation Mode (CG) */
#define TSB_CG_OSCCR_IHOSC1EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,0)))
#define TSB_CG_OSCCR_OSCSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,8)))
#define TSB_CG_OSCCR_OSCF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,9)))
#define TSB_CG_OSCCR_IHOSC1F                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,16)))
#define TSB_CG_OSCCR_IHOSC2F                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,19)))
#define TSB_CG_PLL0SEL_PLL0ON                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->PLL0SEL,0)))
#define TSB_CG_PLL0SEL_PLL0SEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->PLL0SEL,1)))
#define TSB_CG_PLL0SEL_PLL0ST                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_CG->PLL0SEL,2)))
#define TSB_CG_WUPHCR_WUON                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_CG->WUPHCR,0)))
#define TSB_CG_WUPHCR_WUEF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_CG->WUPHCR,1)))
#define TSB_CG_WUPHCR_WUCLK                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->WUPHCR,8)))
#define TSB_CG_FSYSMENA_IPMENA00                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,0)))
#define TSB_CG_FSYSMENA_IPMENA01                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,1)))
#define TSB_CG_FSYSMENA_IPMENA02                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,2)))
#define TSB_CG_FSYSMENA_IPMENA03                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,3)))
#define TSB_CG_FSYSMENA_IPMENA04                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,4)))
#define TSB_CG_FSYSMENA_IPMENA05                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,5)))
#define TSB_CG_FSYSMENA_IPMENA06                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,6)))
#define TSB_CG_FSYSMENA_IPMENA07                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,7)))
#define TSB_CG_FSYSMENA_IPMENA08                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,8)))
#define TSB_CG_FSYSMENA_IPMENA09                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,9)))
#define TSB_CG_FSYSMENA_IPMENA10                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,10)))
#define TSB_CG_FSYSMENA_IPMENA11                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,11)))
#define TSB_CG_FSYSMENA_IPMENA12                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,12)))
#define TSB_CG_FSYSMENA_IPMENA13                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,13)))
#define TSB_CG_FSYSMENA_IPMENA14                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,14)))
#define TSB_CG_FSYSMENA_IPMENA15                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,15)))
#define TSB_CG_FSYSMENA_IPMENA16                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,16)))
#define TSB_CG_FSYSMENA_IPMENA17                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,17)))
#define TSB_CG_FSYSMENA_IPMENA18                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,18)))
#define TSB_CG_FSYSMENA_IPMENA19                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,19)))
#define TSB_CG_FSYSMENA_IPMENA20                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,20)))
#define TSB_CG_FSYSMENA_IPMENA21                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,21)))
#define TSB_CG_FSYSMENA_IPMENA22                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,22)))
#define TSB_CG_FSYSMENA_IPMENA23                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,23)))
#define TSB_CG_FSYSMENA_IPMENA24                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,24)))
#define TSB_CG_FSYSMENA_IPMENA25                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,25)))
#define TSB_CG_FSYSMENA_IPMENA26                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,26)))
#define TSB_CG_FSYSMENA_IPMENA27                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,27)))
#define TSB_CG_FSYSMENA_IPMENA28                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,28)))
#define TSB_CG_FSYSMENA_IPMENA29                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,29)))
#define TSB_CG_FSYSMENA_IPMENA30                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,30)))
#define TSB_CG_FSYSMENA_IPMENA31                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENA,31)))
#define TSB_CG_FSYSMENB_IPMENB00                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,0)))
#define TSB_CG_FSYSMENB_IPMENB01                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,1)))
#define TSB_CG_FSYSMENB_IPMENB02                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,2)))
#define TSB_CG_FSYSMENB_IPMENB03                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,3)))
#define TSB_CG_FSYSMENB_IPMENB04                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,4)))
#define TSB_CG_FSYSMENB_IPMENB05                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,5)))
#define TSB_CG_FSYSMENB_IPMENB06                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,6)))
#define TSB_CG_FSYSMENB_IPMENB07                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,7)))
#define TSB_CG_FSYSMENB_IPMENB08                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,8)))
#define TSB_CG_FSYSMENB_IPMENB09                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,9)))
#define TSB_CG_FSYSMENB_IPMENB10                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,10)))
#define TSB_CG_FSYSMENB_IPMENB11                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,11)))
#define TSB_CG_FSYSMENB_IPMENB12                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,12)))
#define TSB_CG_FSYSMENB_IPMENB13                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,13)))
#define TSB_CG_FSYSMENB_IPMENB14                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,14)))
#define TSB_CG_FSYSMENB_IPMENB15                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,15)))
#define TSB_CG_FSYSMENB_IPMENB16                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,16)))
#define TSB_CG_FSYSMENB_IPMENB17                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,17)))
#define TSB_CG_FSYSMENB_IPMENB29                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,29)))
#define TSB_CG_FSYSMENB_IPMENB30                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,30)))
#define TSB_CG_FSYSMENB_IPMENB31                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSMENB,31)))
#define TSB_CG_FSYSENA_IPENA00                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,0)))
#define TSB_CG_FSYSENA_IPENA01                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FSYSENA,1)))
#define TSB_CG_FCEN_FCIPEN23                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCEN,23)))
#define TSB_CG_FCEN_FCIPEN26                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCEN,26)))
#define TSB_CG_FCEN_FCIPEN27                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCEN,27)))
#define TSB_CG_FCEN_FCIPEN28                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->FCEN,28)))
#define TSB_CG_SPCLKEN_TRCKEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SPCLKEN,0)))
#define TSB_CG_SPCLKEN_ADCKEN0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SPCLKEN,16)))
#define TSB_CG_SPCLKEN_ADCKEN1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SPCLKEN,17)))
#define TSB_CG_SPCLKEN_ADCKEN2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SPCLKEN,18)))
#define TSB_CG_SPCLKEN_ADCKEN3                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->SPCLKEN,19)))



/* Interrupt Monitor Register (IMN) */
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
#define TSB_IMN_FLG4_INT140FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,12)))
#define TSB_IMN_FLG4_INT141FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,13)))
#define TSB_IMN_FLG4_INT142FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,14)))
#define TSB_IMN_FLG4_INT143FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,15)))
#define TSB_IMN_FLG4_INT144FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,16)))
#define TSB_IMN_FLG4_INT145FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,17)))
#define TSB_IMN_FLG4_INT146FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,18)))
#define TSB_IMN_FLG4_INT147FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,19)))
#define TSB_IMN_FLG4_INT148FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,20)))
#define TSB_IMN_FLG4_INT149FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,21)))
#define TSB_IMN_FLG4_INT150FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,22)))
#define TSB_IMN_FLG4_INT151FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,23)))
#define TSB_IMN_FLG4_INT152FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,24)))
#define TSB_IMN_FLG4_INT153FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,25)))
#define TSB_IMN_FLG4_INT154FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,26)))
#define TSB_IMN_FLG4_INT155FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,27)))
#define TSB_IMN_FLG4_INT156FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,28)))
#define TSB_IMN_FLG4_INT157FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,29)))
#define TSB_IMN_FLG4_INT158FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,30)))
#define TSB_IMN_FLG4_INT159FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG4,31)))
#define TSB_IMN_FLG5_INT160FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG5,0)))
#define TSB_IMN_FLG5_INT161FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG5,1)))
#define TSB_IMN_FLG5_INT162FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG5,2)))
#define TSB_IMN_FLG5_INT163FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG5,3)))
#define TSB_IMN_FLG5_INT164FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG5,4)))
#define TSB_IMN_FLG5_INT165FLG                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_IMN->FLG5,5)))


/* Digital Noise Filter (DNF) */
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

#define TSB_DNFB_ENCR_NFEN0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,0)))
#define TSB_DNFB_ENCR_NFEN1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,1)))
#define TSB_DNFB_ENCR_NFEN2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,2)))
#define TSB_DNFB_ENCR_NFEN3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,3)))
#define TSB_DNFB_ENCR_NFEN4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,4)))
#define TSB_DNFB_ENCR_NFEN5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,5)))
#define TSB_DNFB_ENCR_NFEN6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,6)))
#define TSB_DNFB_ENCR_NFEN7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,7)))
#define TSB_DNFB_ENCR_NFEN8                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,8)))
#define TSB_DNFB_ENCR_NFEN9                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,9)))
#define TSB_DNFB_ENCR_NFEN10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,10)))
#define TSB_DNFB_ENCR_NFEN11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,11)))
#define TSB_DNFB_ENCR_NFEN12                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,12)))
#define TSB_DNFB_ENCR_NFEN13                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,13)))
#define TSB_DNFB_ENCR_NFEN14                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,14)))
#define TSB_DNFB_ENCR_NFEN15                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFB->ENCR,15)))

#define TSB_DNFC_ENCR_NFEN0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,0)))
#define TSB_DNFC_ENCR_NFEN1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,1)))
#define TSB_DNFC_ENCR_NFEN2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,2)))
#define TSB_DNFC_ENCR_NFEN3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,3)))
#define TSB_DNFC_ENCR_NFEN4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,4)))
#define TSB_DNFC_ENCR_NFEN5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,5)))
#define TSB_DNFC_ENCR_NFEN6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,6)))
#define TSB_DNFC_ENCR_NFEN7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,7)))
#define TSB_DNFC_ENCR_NFEN8                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,8)))
#define TSB_DNFC_ENCR_NFEN9                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,9)))
#define TSB_DNFC_ENCR_NFEN10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,10)))
#define TSB_DNFC_ENCR_NFEN11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,11)))
#define TSB_DNFC_ENCR_NFEN12                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,12)))
#define TSB_DNFC_ENCR_NFEN13                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,13)))
#define TSB_DNFC_ENCR_NFEN14                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,14)))
#define TSB_DNFC_ENCR_NFEN15                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DNFC->ENCR,15)))


/* Trigger Selection circuit (TSEL) */
#define TSB_TSEL0_CR0_EN0                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,0)))
#define TSB_TSEL0_CR0_OUTSEL0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,1)))
#define TSB_TSEL0_CR0_UPDN0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,2)))
#define TSB_TSEL0_CR0_EN1                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,8)))
#define TSB_TSEL0_CR0_OUTSEL1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,9)))
#define TSB_TSEL0_CR0_UPDN1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,10)))
#define TSB_TSEL0_CR0_EN2                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,16)))
#define TSB_TSEL0_CR0_OUTSEL2                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,17)))
#define TSB_TSEL0_CR0_UPDN2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,18)))
#define TSB_TSEL0_CR0_EN3                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,24)))
#define TSB_TSEL0_CR0_OUTSEL3                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,25)))
#define TSB_TSEL0_CR0_UPDN3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR0,26)))
#define TSB_TSEL0_CR1_EN4                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,0)))
#define TSB_TSEL0_CR1_OUTSEL4                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,1)))
#define TSB_TSEL0_CR1_UPDN4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,2)))
#define TSB_TSEL0_CR1_EN5                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,8)))
#define TSB_TSEL0_CR1_OUTSEL5                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,9)))
#define TSB_TSEL0_CR1_UPDN5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,10)))
#define TSB_TSEL0_CR1_EN6                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,16)))
#define TSB_TSEL0_CR1_OUTSEL6                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,17)))
#define TSB_TSEL0_CR1_UPDN6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,18)))
#define TSB_TSEL0_CR1_EN7                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,24)))
#define TSB_TSEL0_CR1_OUTSEL7                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,25)))
#define TSB_TSEL0_CR1_UPDN7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR1,26)))
#define TSB_TSEL0_CR2_EN8                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,0)))
#define TSB_TSEL0_CR2_OUTSEL8                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,1)))
#define TSB_TSEL0_CR2_UPDN8                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,2)))
#define TSB_TSEL0_CR2_EN9                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,8)))
#define TSB_TSEL0_CR2_OUTSEL9                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,9)))
#define TSB_TSEL0_CR2_UPDN9                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,10)))
#define TSB_TSEL0_CR2_EN10                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,16)))
#define TSB_TSEL0_CR2_OUTSEL10                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,17)))
#define TSB_TSEL0_CR2_UPDN10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,18)))
#define TSB_TSEL0_CR2_EN11                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,24)))
#define TSB_TSEL0_CR2_OUTSEL11                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,25)))
#define TSB_TSEL0_CR2_UPDN11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR2,26)))
#define TSB_TSEL0_CR3_EN12                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,0)))
#define TSB_TSEL0_CR3_OUTSEL12                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,1)))
#define TSB_TSEL0_CR3_UPDN12                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,2)))
#define TSB_TSEL0_CR3_EN13                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,8)))
#define TSB_TSEL0_CR3_OUTSEL13                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,9)))
#define TSB_TSEL0_CR3_UPDN13                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,10)))
#define TSB_TSEL0_CR3_EN14                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,16)))
#define TSB_TSEL0_CR3_OUTSEL14                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,17)))
#define TSB_TSEL0_CR3_UPDN14                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,18)))
#define TSB_TSEL0_CR3_EN15                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,24)))
#define TSB_TSEL0_CR3_OUTSEL15                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,25)))
#define TSB_TSEL0_CR3_UPDN15                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR3,26)))
#define TSB_TSEL0_CR4_EN16                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR4,0)))
#define TSB_TSEL0_CR4_OUTSEL16                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR4,1)))
#define TSB_TSEL0_CR4_UPDN16                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR4,2)))
#define TSB_TSEL0_CR4_EN17                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR4,8)))
#define TSB_TSEL0_CR4_OUTSEL17                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR4,9)))
#define TSB_TSEL0_CR4_UPDN17                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR4,10)))
#define TSB_TSEL0_CR4_EN18                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR4,16)))
#define TSB_TSEL0_CR4_OUTSEL18                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR4,17)))
#define TSB_TSEL0_CR4_UPDN18                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR4,18)))
#define TSB_TSEL0_CR4_EN19                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR4,24)))
#define TSB_TSEL0_CR4_OUTSEL19                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR4,25)))
#define TSB_TSEL0_CR4_UPDN19                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR4,26)))
#define TSB_TSEL0_CR5_EN20                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR5,0)))
#define TSB_TSEL0_CR5_OUTSEL20                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR5,1)))
#define TSB_TSEL0_CR5_UPDN20                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR5,2)))
#define TSB_TSEL0_CR5_EN21                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR5,8)))
#define TSB_TSEL0_CR5_OUTSEL21                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR5,9)))
#define TSB_TSEL0_CR5_UPDN21                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR5,10)))
#define TSB_TSEL0_CR5_EN22                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR5,16)))
#define TSB_TSEL0_CR5_OUTSEL22                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR5,17)))
#define TSB_TSEL0_CR5_UPDN22                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR5,18)))
#define TSB_TSEL0_CR5_EN23                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR5,24)))
#define TSB_TSEL0_CR5_OUTSEL23                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR5,25)))
#define TSB_TSEL0_CR5_UPDN23                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR5,26)))
#define TSB_TSEL0_CR6_EN24                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR6,0)))
#define TSB_TSEL0_CR6_OUTSEL24                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR6,1)))
#define TSB_TSEL0_CR6_UPDN24                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR6,2)))
#define TSB_TSEL0_CR6_EN25                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR6,8)))
#define TSB_TSEL0_CR6_OUTSEL25                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR6,9)))
#define TSB_TSEL0_CR6_UPDN25                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR6,10)))
#define TSB_TSEL0_CR6_EN26                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR6,16)))
#define TSB_TSEL0_CR6_OUTSEL26                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR6,17)))
#define TSB_TSEL0_CR6_UPDN26                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR6,18)))
#define TSB_TSEL0_CR6_EN27                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR6,24)))
#define TSB_TSEL0_CR6_OUTSEL27                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR6,25)))
#define TSB_TSEL0_CR6_UPDN27                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR6,26)))
#define TSB_TSEL0_CR7_EN28                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR7,0)))
#define TSB_TSEL0_CR7_OUTSEL28                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR7,1)))
#define TSB_TSEL0_CR7_UPDN28                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR7,2)))
#define TSB_TSEL0_CR7_EN29                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR7,8)))
#define TSB_TSEL0_CR7_OUTSEL29                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR7,9)))
#define TSB_TSEL0_CR7_UPDN29                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR7,10)))
#define TSB_TSEL0_CR7_EN30                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR7,16)))
#define TSB_TSEL0_CR7_OUTSEL30                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR7,17)))
#define TSB_TSEL0_CR7_UPDN30                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR7,18)))
#define TSB_TSEL0_CR7_EN31                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR7,24)))
#define TSB_TSEL0_CR7_OUTSEL31                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR7,25)))
#define TSB_TSEL0_CR7_UPDN31                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR7,26)))
#define TSB_TSEL0_CR8_EN32                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR8,0)))
#define TSB_TSEL0_CR8_OUTSEL32                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR8,1)))
#define TSB_TSEL0_CR8_UPDN32                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR8,2)))
#define TSB_TSEL0_CR8_EN33                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR8,8)))
#define TSB_TSEL0_CR8_OUTSEL33                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR8,9)))
#define TSB_TSEL0_CR8_UPDN33                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR8,10)))
#define TSB_TSEL0_CR8_EN34                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR8,16)))
#define TSB_TSEL0_CR8_OUTSEL34                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR8,17)))
#define TSB_TSEL0_CR8_UPDN34                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR8,18)))
#define TSB_TSEL0_CR8_EN35                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR8,24)))
#define TSB_TSEL0_CR8_OUTSEL35                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR8,25)))
#define TSB_TSEL0_CR8_UPDN35                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR8,26)))
#define TSB_TSEL0_CR9_EN36                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR9,0)))
#define TSB_TSEL0_CR9_OUTSEL36                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR9,1)))
#define TSB_TSEL0_CR9_UPDN36                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR9,2)))
#define TSB_TSEL0_CR9_EN37                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR9,8)))
#define TSB_TSEL0_CR9_OUTSEL37                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR9,9)))
#define TSB_TSEL0_CR9_UPDN37                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR9,10)))
#define TSB_TSEL0_CR9_EN38                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR9,16)))
#define TSB_TSEL0_CR9_OUTSEL38                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR9,17)))
#define TSB_TSEL0_CR9_UPDN38                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR9,18)))
#define TSB_TSEL0_CR9_EN39                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR9,24)))
#define TSB_TSEL0_CR9_OUTSEL39                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR9,25)))
#define TSB_TSEL0_CR9_UPDN39                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR9,26)))
#define TSB_TSEL0_CR10_EN40                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR10,0)))
#define TSB_TSEL0_CR10_OUTSEL40                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR10,1)))
#define TSB_TSEL0_CR10_UPDN40                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR10,2)))
#define TSB_TSEL0_CR10_EN41                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR10,8)))
#define TSB_TSEL0_CR10_OUTSEL41                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR10,9)))
#define TSB_TSEL0_CR10_UPDN41                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR10,10)))
#define TSB_TSEL0_CR10_EN42                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR10,16)))
#define TSB_TSEL0_CR10_OUTSEL42                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR10,17)))
#define TSB_TSEL0_CR10_UPDN42                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSEL0->CR10,18)))


/* Watchdog Timer (SIWD) */
#define TSB_SIWD0_EN_WDTE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SIWD0->EN,0)))
#define TSB_SIWD0_EN_WDTF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_SIWD0->EN,1)))
#define TSB_SIWD0_MOD_RESCR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SIWD0->MOD,0)))
#define TSB_SIWD0_MOD_INTF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SIWD0->MOD,1)))
#define TSB_SIWD0_OSCCR_OSCPRO                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_SIWD0->OSCCR,0)))


/* Non-Break Debug Interface (NBD) */
#define TSB_NBD_CR0_NBDEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_NBD->CR0,0)))


/* Direct Memory Accsess Controller (DMAC) */
#define TSB_DMAA_STATUS_MASTER_ENABLE             (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMAA->STATUS,0)))
#define TSB_DMAA_CFG_MASTER_ENABLE                (*((__O  uint32_t *)BITBAND_PERI(&TSB_DMAA->CFG,0)))
#define TSB_DMAA_ERRCLR_ERR_CLR                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMAA->ERRCLR,0)))


/* 12-bit Analog to Digital Converter(ADC) */
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
#define TSB_ADA_TSET16_ENINT16                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET16,7)))
#define TSB_ADA_TSET17_ENINT17                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET17,7)))
#define TSB_ADA_TSET18_ENINT18                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET18,7)))
#define TSB_ADA_TSET19_ENINT19                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET19,7)))
#define TSB_ADA_TSET20_ENINT20                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET20,7)))
#define TSB_ADA_TSET21_ENINT21                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET21,7)))
#define TSB_ADA_TSET22_ENINT22                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET22,7)))
#define TSB_ADA_TSET23_ENINT23                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->TSET23,7)))
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
#define TSB_ADA_REG16_ADRF16                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG16,0)))
#define TSB_ADA_REG16_ADOVRF16                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG16,1)))
#define TSB_ADA_REG16_ADRF_M16                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG16,28)))
#define TSB_ADA_REG16_ADOVRF_M16                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG16,29)))
#define TSB_ADA_REG17_ADRF17                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG17,0)))
#define TSB_ADA_REG17_ADOVRF17                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG17,1)))
#define TSB_ADA_REG17_ADRF_M17                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG17,28)))
#define TSB_ADA_REG17_ADOVRF_M17                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG17,29)))
#define TSB_ADA_REG18_ADRF18                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG18,0)))
#define TSB_ADA_REG18_ADOVRF18                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG18,1)))
#define TSB_ADA_REG18_ADRF_M18                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG18,28)))
#define TSB_ADA_REG18_ADOVRF_M18                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG18,29)))
#define TSB_ADA_REG19_ADRF19                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG19,0)))
#define TSB_ADA_REG19_ADOVRF19                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG19,1)))
#define TSB_ADA_REG19_ADRF_M19                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG19,28)))
#define TSB_ADA_REG19_ADOVRF_M19                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG19,29)))
#define TSB_ADA_REG20_ADRF20                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG20,0)))
#define TSB_ADA_REG20_ADOVRF20                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG20,1)))
#define TSB_ADA_REG20_ADRF_M20                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG20,28)))
#define TSB_ADA_REG20_ADOVRF_M20                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG20,29)))
#define TSB_ADA_REG21_ADRF21                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG21,0)))
#define TSB_ADA_REG21_ADOVRF21                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG21,1)))
#define TSB_ADA_REG21_ADRF_M21                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG21,28)))
#define TSB_ADA_REG21_ADOVRF_M21                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG21,29)))
#define TSB_ADA_REG22_ADRF22                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG22,0)))
#define TSB_ADA_REG22_ADOVRF22                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG22,1)))
#define TSB_ADA_REG22_ADRF_M22                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG22,28)))
#define TSB_ADA_REG22_ADOVRF_M22                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG22,29)))
#define TSB_ADA_REG23_ADRF23                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG23,0)))
#define TSB_ADA_REG23_ADOVRF23                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG23,1)))
#define TSB_ADA_REG23_ADRF_M23                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG23,28)))
#define TSB_ADA_REG23_ADOVRF_M23                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG23,29)))

#define TSB_ADB_CR0_CNT                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CR0,0)))
#define TSB_ADB_CR0_SGL                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_ADB->CR0,1)))
#define TSB_ADB_CR0_ADEN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CR0,7)))
#define TSB_ADB_CR1_TRGEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CR1,0)))
#define TSB_ADB_CR1_TRGDMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CR1,4)))
#define TSB_ADB_CR1_SGLDMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CR1,5)))
#define TSB_ADB_CR1_CNTDMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CR1,6)))
#define TSB_ADB_ST_PMDF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->ST,0)))
#define TSB_ADB_ST_TRGF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->ST,1)))
#define TSB_ADB_ST_SNGF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->ST,2)))
#define TSB_ADB_ST_CNTF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->ST,3)))
#define TSB_ADB_ST_ADBF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->ST,7)))
#define TSB_ADB_MOD0_DACON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD0,0)))
#define TSB_ADB_MOD0_RCUT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD0,1)))
#define TSB_ADB_CMPEN_CMP0EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPEN,0)))
#define TSB_ADB_CMPEN_CMP1EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPEN,1)))
#define TSB_ADB_CMPCR0_ADBIG0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR0,5)))
#define TSB_ADB_CMPCR0_CMPCND0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR0,6)))
#define TSB_ADB_CMPCR1_ADBIG1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR1,5)))
#define TSB_ADB_CMPCR1_CMPCND1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR1,6)))
#define TSB_ADB_PSEL0_PENS0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSEL0,7)))
#define TSB_ADB_PSEL1_PENS1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSEL1,7)))
#define TSB_ADB_PSEL2_PENS2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSEL2,7)))
#define TSB_ADB_PSEL3_PENS3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSEL3,7)))
#define TSB_ADB_PSEL4_PENS4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSEL4,7)))
#define TSB_ADB_PSEL5_PENS5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSEL5,7)))
#define TSB_ADB_PSEL6_PENS6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSEL6,7)))
#define TSB_ADB_PSEL7_PENS7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSEL7,7)))
#define TSB_ADB_PSEL8_PENS8                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSEL8,7)))
#define TSB_ADB_PSEL9_PENS9                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSEL9,7)))
#define TSB_ADB_PSEL10_PENS10                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSEL10,7)))
#define TSB_ADB_PSEL11_PENS11                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSEL11,7)))
#define TSB_ADB_PSET0_ENSP00                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET0,7)))
#define TSB_ADB_PSET0_ENSP01                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET0,15)))
#define TSB_ADB_PSET0_ENSP02                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET0,23)))
#define TSB_ADB_PSET0_ENSP03                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET0,31)))
#define TSB_ADB_PSET1_ENSP10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET1,7)))
#define TSB_ADB_PSET1_ENSP11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET1,15)))
#define TSB_ADB_PSET1_ENSP12                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET1,23)))
#define TSB_ADB_PSET1_ENSP13                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET1,31)))
#define TSB_ADB_PSET2_ENSP20                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET2,7)))
#define TSB_ADB_PSET2_ENSP21                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET2,15)))
#define TSB_ADB_PSET2_ENSP22                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET2,23)))
#define TSB_ADB_PSET2_ENSP23                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET2,31)))
#define TSB_ADB_PSET3_ENSP30                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET3,7)))
#define TSB_ADB_PSET3_ENSP31                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET3,15)))
#define TSB_ADB_PSET3_ENSP32                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET3,23)))
#define TSB_ADB_PSET3_ENSP33                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET3,31)))
#define TSB_ADB_PSET4_ENSP40                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET4,7)))
#define TSB_ADB_PSET4_ENSP41                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET4,15)))
#define TSB_ADB_PSET4_ENSP42                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET4,23)))
#define TSB_ADB_PSET4_ENSP43                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET4,31)))
#define TSB_ADB_PSET5_ENSP50                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET5,7)))
#define TSB_ADB_PSET5_ENSP51                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET5,15)))
#define TSB_ADB_PSET5_ENSP52                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET5,23)))
#define TSB_ADB_PSET5_ENSP53                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET5,31)))
#define TSB_ADB_PSET6_ENSP60                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET6,7)))
#define TSB_ADB_PSET6_ENSP61                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET6,15)))
#define TSB_ADB_PSET6_ENSP62                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET6,23)))
#define TSB_ADB_PSET6_ENSP63                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET6,31)))
#define TSB_ADB_PSET7_ENSP70                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET7,7)))
#define TSB_ADB_PSET7_ENSP71                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET7,15)))
#define TSB_ADB_PSET7_ENSP72                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET7,23)))
#define TSB_ADB_PSET7_ENSP73                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->PSET7,31)))
#define TSB_ADB_TSET0_ENINT0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET0,7)))
#define TSB_ADB_TSET1_ENINT1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET1,7)))
#define TSB_ADB_TSET2_ENINT2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET2,7)))
#define TSB_ADB_TSET3_ENINT3                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET3,7)))
#define TSB_ADB_TSET4_ENINT4                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET4,7)))
#define TSB_ADB_TSET5_ENINT5                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET5,7)))
#define TSB_ADB_TSET6_ENINT6                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET6,7)))
#define TSB_ADB_TSET7_ENINT7                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET7,7)))
#define TSB_ADB_TSET8_ENINT8                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET8,7)))
#define TSB_ADB_TSET9_ENINT9                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET9,7)))
#define TSB_ADB_TSET10_ENINT10                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET10,7)))
#define TSB_ADB_TSET11_ENINT11                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET11,7)))
#define TSB_ADB_TSET12_ENINT12                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET12,7)))
#define TSB_ADB_TSET13_ENINT13                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET13,7)))
#define TSB_ADB_TSET14_ENINT14                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET14,7)))
#define TSB_ADB_TSET15_ENINT15                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET15,7)))
#define TSB_ADB_TSET16_ENINT16                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET16,7)))
#define TSB_ADB_TSET17_ENINT17                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET17,7)))
#define TSB_ADB_TSET18_ENINT18                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET18,7)))
#define TSB_ADB_TSET19_ENINT19                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET19,7)))
#define TSB_ADB_TSET20_ENINT20                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET20,7)))
#define TSB_ADB_TSET21_ENINT21                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET21,7)))
#define TSB_ADB_TSET22_ENINT22                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET22,7)))
#define TSB_ADB_TSET23_ENINT23                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->TSET23,7)))
#define TSB_ADB_REG0_ADRF0                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG0,0)))
#define TSB_ADB_REG0_ADOVRF0                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG0,1)))
#define TSB_ADB_REG0_ADRF_M0                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG0,28)))
#define TSB_ADB_REG0_ADOVRF_M0                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG0,29)))
#define TSB_ADB_REG1_ADRF1                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG1,0)))
#define TSB_ADB_REG1_ADOVRF1                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG1,1)))
#define TSB_ADB_REG1_ADRF_M1                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG1,28)))
#define TSB_ADB_REG1_ADOVRF_M1                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG1,29)))
#define TSB_ADB_REG2_ADRF2                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG2,0)))
#define TSB_ADB_REG2_ADOVRF2                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG2,1)))
#define TSB_ADB_REG2_ADRF_M2                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG2,28)))
#define TSB_ADB_REG2_ADOVRF_M2                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG2,29)))
#define TSB_ADB_REG3_ADRF3                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG3,0)))
#define TSB_ADB_REG3_ADOVRF3                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG3,1)))
#define TSB_ADB_REG3_ADRF_M3                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG3,28)))
#define TSB_ADB_REG3_ADOVRF_M3                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG3,29)))
#define TSB_ADB_REG4_ADRF4                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG4,0)))
#define TSB_ADB_REG4_ADOVRF4                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG4,1)))
#define TSB_ADB_REG4_ADRF_M4                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG4,28)))
#define TSB_ADB_REG4_ADOVRF_M4                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG4,29)))
#define TSB_ADB_REG5_ADRF5                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG5,0)))
#define TSB_ADB_REG5_ADOVRF5                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG5,1)))
#define TSB_ADB_REG5_ADRF_M5                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG5,28)))
#define TSB_ADB_REG5_ADOVRF_M5                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG5,29)))
#define TSB_ADB_REG6_ADRF6                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG6,0)))
#define TSB_ADB_REG6_ADOVRF6                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG6,1)))
#define TSB_ADB_REG6_ADRF_M6                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG6,28)))
#define TSB_ADB_REG6_ADOVRF_M6                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG6,29)))
#define TSB_ADB_REG7_ADRF7                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG7,0)))
#define TSB_ADB_REG7_ADOVRF7                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG7,1)))
#define TSB_ADB_REG7_ADRF_M7                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG7,28)))
#define TSB_ADB_REG7_ADOVRF_M7                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG7,29)))
#define TSB_ADB_REG8_ADRF8                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG8,0)))
#define TSB_ADB_REG8_ADOVRF8                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG8,1)))
#define TSB_ADB_REG8_ADRF_M8                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG8,28)))
#define TSB_ADB_REG8_ADOVRF_M8                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG8,29)))
#define TSB_ADB_REG9_ADRF9                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG9,0)))
#define TSB_ADB_REG9_ADOVRF9                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG9,1)))
#define TSB_ADB_REG9_ADRF_M9                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG9,28)))
#define TSB_ADB_REG9_ADOVRF_M9                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG9,29)))
#define TSB_ADB_REG10_ADRF10                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG10,0)))
#define TSB_ADB_REG10_ADOVRF10                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG10,1)))
#define TSB_ADB_REG10_ADRF_M10                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG10,28)))
#define TSB_ADB_REG10_ADOVRF_M10                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG10,29)))
#define TSB_ADB_REG11_ADRF11                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG11,0)))
#define TSB_ADB_REG11_ADOVRF11                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG11,1)))
#define TSB_ADB_REG11_ADRF_M11                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG11,28)))
#define TSB_ADB_REG11_ADOVRF_M11                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG11,29)))
#define TSB_ADB_REG12_ADRF12                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG12,0)))
#define TSB_ADB_REG12_ADOVRF12                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG12,1)))
#define TSB_ADB_REG12_ADRF_M12                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG12,28)))
#define TSB_ADB_REG12_ADOVRF_M12                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG12,29)))
#define TSB_ADB_REG13_ADRF13                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG13,0)))
#define TSB_ADB_REG13_ADOVRF13                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG13,1)))
#define TSB_ADB_REG13_ADRF_M13                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG13,28)))
#define TSB_ADB_REG13_ADOVRF_M13                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG13,29)))
#define TSB_ADB_REG14_ADRF14                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG14,0)))
#define TSB_ADB_REG14_ADOVRF14                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG14,1)))
#define TSB_ADB_REG14_ADRF_M14                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG14,28)))
#define TSB_ADB_REG14_ADOVRF_M14                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG14,29)))
#define TSB_ADB_REG15_ADRF15                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG15,0)))
#define TSB_ADB_REG15_ADOVRF15                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG15,1)))
#define TSB_ADB_REG15_ADRF_M15                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG15,28)))
#define TSB_ADB_REG15_ADOVRF_M15                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG15,29)))
#define TSB_ADB_REG16_ADRF16                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG16,0)))
#define TSB_ADB_REG16_ADOVRF16                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG16,1)))
#define TSB_ADB_REG16_ADRF_M16                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG16,28)))
#define TSB_ADB_REG16_ADOVRF_M16                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG16,29)))
#define TSB_ADB_REG17_ADRF17                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG17,0)))
#define TSB_ADB_REG17_ADOVRF17                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG17,1)))
#define TSB_ADB_REG17_ADRF_M17                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG17,28)))
#define TSB_ADB_REG17_ADOVRF_M17                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG17,29)))
#define TSB_ADB_REG18_ADRF18                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG18,0)))
#define TSB_ADB_REG18_ADOVRF18                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG18,1)))
#define TSB_ADB_REG18_ADRF_M18                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG18,28)))
#define TSB_ADB_REG18_ADOVRF_M18                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG18,29)))
#define TSB_ADB_REG19_ADRF19                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG19,0)))
#define TSB_ADB_REG19_ADOVRF19                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG19,1)))
#define TSB_ADB_REG19_ADRF_M19                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG19,28)))
#define TSB_ADB_REG19_ADOVRF_M19                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG19,29)))
#define TSB_ADB_REG20_ADRF20                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG20,0)))
#define TSB_ADB_REG20_ADOVRF20                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG20,1)))
#define TSB_ADB_REG20_ADRF_M20                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG20,28)))
#define TSB_ADB_REG20_ADOVRF_M20                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG20,29)))
#define TSB_ADB_REG21_ADRF21                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG21,0)))
#define TSB_ADB_REG21_ADOVRF21                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG21,1)))
#define TSB_ADB_REG21_ADRF_M21                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG21,28)))
#define TSB_ADB_REG21_ADOVRF_M21                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG21,29)))
#define TSB_ADB_REG22_ADRF22                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG22,0)))
#define TSB_ADB_REG22_ADOVRF22                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG22,1)))
#define TSB_ADB_REG22_ADRF_M22                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG22,28)))
#define TSB_ADB_REG22_ADOVRF_M22                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG22,29)))
#define TSB_ADB_REG23_ADRF23                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG23,0)))
#define TSB_ADB_REG23_ADOVRF23                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG23,1)))
#define TSB_ADB_REG23_ADRF_M23                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG23,28)))
#define TSB_ADB_REG23_ADOVRF_M23                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG23,29)))

#define TSB_ADC_CR0_CNT                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CR0,0)))
#define TSB_ADC_CR0_SGL                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_ADC->CR0,1)))
#define TSB_ADC_CR0_ADEN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CR0,7)))
#define TSB_ADC_CR1_TRGEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CR1,0)))
#define TSB_ADC_CR1_TRGDMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CR1,4)))
#define TSB_ADC_CR1_SGLDMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CR1,5)))
#define TSB_ADC_CR1_CNTDMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CR1,6)))
#define TSB_ADC_ST_PMDF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->ST,0)))
#define TSB_ADC_ST_TRGF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->ST,1)))
#define TSB_ADC_ST_SNGF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->ST,2)))
#define TSB_ADC_ST_CNTF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->ST,3)))
#define TSB_ADC_ST_ADBF                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->ST,7)))
#define TSB_ADC_MOD0_DACON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->MOD0,0)))
#define TSB_ADC_MOD0_RCUT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->MOD0,1)))
#define TSB_ADC_CMPEN_CMP0EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CMPEN,0)))
#define TSB_ADC_CMPEN_CMP1EN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CMPEN,1)))
#define TSB_ADC_CMPCR0_ADBIG0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CMPCR0,5)))
#define TSB_ADC_CMPCR0_CMPCND0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CMPCR0,6)))
#define TSB_ADC_CMPCR1_ADBIG1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CMPCR1,5)))
#define TSB_ADC_CMPCR1_CMPCND1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->CMPCR1,6)))
#define TSB_ADC_PSEL0_PENS0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSEL0,7)))
#define TSB_ADC_PSEL1_PENS1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSEL1,7)))
#define TSB_ADC_PSEL2_PENS2                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSEL2,7)))
#define TSB_ADC_PSEL3_PENS3                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSEL3,7)))
#define TSB_ADC_PSEL4_PENS4                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSEL4,7)))
#define TSB_ADC_PSEL5_PENS5                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSEL5,7)))
#define TSB_ADC_PSEL6_PENS6                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSEL6,7)))
#define TSB_ADC_PSEL7_PENS7                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSEL7,7)))
#define TSB_ADC_PSEL8_PENS8                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSEL8,7)))
#define TSB_ADC_PSEL9_PENS9                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSEL9,7)))
#define TSB_ADC_PSEL10_PENS10                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSEL10,7)))
#define TSB_ADC_PSEL11_PENS11                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSEL11,7)))
#define TSB_ADC_PSET0_ENSP00                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET0,7)))
#define TSB_ADC_PSET0_ENSP01                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET0,15)))
#define TSB_ADC_PSET0_ENSP02                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET0,23)))
#define TSB_ADC_PSET0_ENSP03                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET0,31)))
#define TSB_ADC_PSET1_ENSP10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET1,7)))
#define TSB_ADC_PSET1_ENSP11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET1,15)))
#define TSB_ADC_PSET1_ENSP12                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET1,23)))
#define TSB_ADC_PSET1_ENSP13                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET1,31)))
#define TSB_ADC_PSET2_ENSP20                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET2,7)))
#define TSB_ADC_PSET2_ENSP21                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET2,15)))
#define TSB_ADC_PSET2_ENSP22                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET2,23)))
#define TSB_ADC_PSET2_ENSP23                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET2,31)))
#define TSB_ADC_PSET3_ENSP30                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET3,7)))
#define TSB_ADC_PSET3_ENSP31                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET3,15)))
#define TSB_ADC_PSET3_ENSP32                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET3,23)))
#define TSB_ADC_PSET3_ENSP33                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET3,31)))
#define TSB_ADC_PSET4_ENSP40                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET4,7)))
#define TSB_ADC_PSET4_ENSP41                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET4,15)))
#define TSB_ADC_PSET4_ENSP42                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET4,23)))
#define TSB_ADC_PSET4_ENSP43                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET4,31)))
#define TSB_ADC_PSET5_ENSP50                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET5,7)))
#define TSB_ADC_PSET5_ENSP51                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET5,15)))
#define TSB_ADC_PSET5_ENSP52                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET5,23)))
#define TSB_ADC_PSET5_ENSP53                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET5,31)))
#define TSB_ADC_PSET6_ENSP60                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET6,7)))
#define TSB_ADC_PSET6_ENSP61                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET6,15)))
#define TSB_ADC_PSET6_ENSP62                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET6,23)))
#define TSB_ADC_PSET6_ENSP63                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET6,31)))
#define TSB_ADC_PSET7_ENSP70                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET7,7)))
#define TSB_ADC_PSET7_ENSP71                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET7,15)))
#define TSB_ADC_PSET7_ENSP72                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET7,23)))
#define TSB_ADC_PSET7_ENSP73                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->PSET7,31)))
#define TSB_ADC_TSET0_ENINT0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET0,7)))
#define TSB_ADC_TSET1_ENINT1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET1,7)))
#define TSB_ADC_TSET2_ENINT2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET2,7)))
#define TSB_ADC_TSET3_ENINT3                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET3,7)))
#define TSB_ADC_TSET4_ENINT4                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET4,7)))
#define TSB_ADC_TSET5_ENINT5                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET5,7)))
#define TSB_ADC_TSET6_ENINT6                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET6,7)))
#define TSB_ADC_TSET7_ENINT7                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET7,7)))
#define TSB_ADC_TSET8_ENINT8                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET8,7)))
#define TSB_ADC_TSET9_ENINT9                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET9,7)))
#define TSB_ADC_TSET10_ENINT10                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET10,7)))
#define TSB_ADC_TSET11_ENINT11                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET11,7)))
#define TSB_ADC_TSET12_ENINT12                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET12,7)))
#define TSB_ADC_TSET13_ENINT13                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET13,7)))
#define TSB_ADC_TSET14_ENINT14                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET14,7)))
#define TSB_ADC_TSET15_ENINT15                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET15,7)))
#define TSB_ADC_TSET16_ENINT16                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET16,7)))
#define TSB_ADC_TSET17_ENINT17                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET17,7)))
#define TSB_ADC_TSET18_ENINT18                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET18,7)))
#define TSB_ADC_TSET19_ENINT19                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET19,7)))
#define TSB_ADC_TSET20_ENINT20                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET20,7)))
#define TSB_ADC_TSET21_ENINT21                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET21,7)))
#define TSB_ADC_TSET22_ENINT22                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET22,7)))
#define TSB_ADC_TSET23_ENINT23                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADC->TSET23,7)))
#define TSB_ADC_REG0_ADRF0                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG0,0)))
#define TSB_ADC_REG0_ADOVRF0                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG0,1)))
#define TSB_ADC_REG0_ADRF_M0                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG0,28)))
#define TSB_ADC_REG0_ADOVRF_M0                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG0,29)))
#define TSB_ADC_REG1_ADRF1                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG1,0)))
#define TSB_ADC_REG1_ADOVRF1                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG1,1)))
#define TSB_ADC_REG1_ADRF_M1                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG1,28)))
#define TSB_ADC_REG1_ADOVRF_M1                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG1,29)))
#define TSB_ADC_REG2_ADRF2                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG2,0)))
#define TSB_ADC_REG2_ADOVRF2                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG2,1)))
#define TSB_ADC_REG2_ADRF_M2                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG2,28)))
#define TSB_ADC_REG2_ADOVRF_M2                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG2,29)))
#define TSB_ADC_REG3_ADRF3                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG3,0)))
#define TSB_ADC_REG3_ADOVRF3                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG3,1)))
#define TSB_ADC_REG3_ADRF_M3                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG3,28)))
#define TSB_ADC_REG3_ADOVRF_M3                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG3,29)))
#define TSB_ADC_REG4_ADRF4                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG4,0)))
#define TSB_ADC_REG4_ADOVRF4                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG4,1)))
#define TSB_ADC_REG4_ADRF_M4                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG4,28)))
#define TSB_ADC_REG4_ADOVRF_M4                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG4,29)))
#define TSB_ADC_REG5_ADRF5                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG5,0)))
#define TSB_ADC_REG5_ADOVRF5                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG5,1)))
#define TSB_ADC_REG5_ADRF_M5                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG5,28)))
#define TSB_ADC_REG5_ADOVRF_M5                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG5,29)))
#define TSB_ADC_REG6_ADRF6                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG6,0)))
#define TSB_ADC_REG6_ADOVRF6                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG6,1)))
#define TSB_ADC_REG6_ADRF_M6                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG6,28)))
#define TSB_ADC_REG6_ADOVRF_M6                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG6,29)))
#define TSB_ADC_REG7_ADRF7                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG7,0)))
#define TSB_ADC_REG7_ADOVRF7                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG7,1)))
#define TSB_ADC_REG7_ADRF_M7                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG7,28)))
#define TSB_ADC_REG7_ADOVRF_M7                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG7,29)))
#define TSB_ADC_REG8_ADRF8                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG8,0)))
#define TSB_ADC_REG8_ADOVRF8                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG8,1)))
#define TSB_ADC_REG8_ADRF_M8                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG8,28)))
#define TSB_ADC_REG8_ADOVRF_M8                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG8,29)))
#define TSB_ADC_REG9_ADRF9                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG9,0)))
#define TSB_ADC_REG9_ADOVRF9                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG9,1)))
#define TSB_ADC_REG9_ADRF_M9                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG9,28)))
#define TSB_ADC_REG9_ADOVRF_M9                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG9,29)))
#define TSB_ADC_REG10_ADRF10                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG10,0)))
#define TSB_ADC_REG10_ADOVRF10                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG10,1)))
#define TSB_ADC_REG10_ADRF_M10                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG10,28)))
#define TSB_ADC_REG10_ADOVRF_M10                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG10,29)))
#define TSB_ADC_REG11_ADRF11                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG11,0)))
#define TSB_ADC_REG11_ADOVRF11                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG11,1)))
#define TSB_ADC_REG11_ADRF_M11                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG11,28)))
#define TSB_ADC_REG11_ADOVRF_M11                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG11,29)))
#define TSB_ADC_REG12_ADRF12                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG12,0)))
#define TSB_ADC_REG12_ADOVRF12                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG12,1)))
#define TSB_ADC_REG12_ADRF_M12                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG12,28)))
#define TSB_ADC_REG12_ADOVRF_M12                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG12,29)))
#define TSB_ADC_REG13_ADRF13                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG13,0)))
#define TSB_ADC_REG13_ADOVRF13                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG13,1)))
#define TSB_ADC_REG13_ADRF_M13                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG13,28)))
#define TSB_ADC_REG13_ADOVRF_M13                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG13,29)))
#define TSB_ADC_REG14_ADRF14                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG14,0)))
#define TSB_ADC_REG14_ADOVRF14                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG14,1)))
#define TSB_ADC_REG14_ADRF_M14                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG14,28)))
#define TSB_ADC_REG14_ADOVRF_M14                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG14,29)))
#define TSB_ADC_REG15_ADRF15                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG15,0)))
#define TSB_ADC_REG15_ADOVRF15                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG15,1)))
#define TSB_ADC_REG15_ADRF_M15                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG15,28)))
#define TSB_ADC_REG15_ADOVRF_M15                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG15,29)))
#define TSB_ADC_REG16_ADRF16                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG16,0)))
#define TSB_ADC_REG16_ADOVRF16                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG16,1)))
#define TSB_ADC_REG16_ADRF_M16                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG16,28)))
#define TSB_ADC_REG16_ADOVRF_M16                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG16,29)))
#define TSB_ADC_REG17_ADRF17                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG17,0)))
#define TSB_ADC_REG17_ADOVRF17                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG17,1)))
#define TSB_ADC_REG17_ADRF_M17                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG17,28)))
#define TSB_ADC_REG17_ADOVRF_M17                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG17,29)))
#define TSB_ADC_REG18_ADRF18                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG18,0)))
#define TSB_ADC_REG18_ADOVRF18                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG18,1)))
#define TSB_ADC_REG18_ADRF_M18                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG18,28)))
#define TSB_ADC_REG18_ADOVRF_M18                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG18,29)))
#define TSB_ADC_REG19_ADRF19                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG19,0)))
#define TSB_ADC_REG19_ADOVRF19                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG19,1)))
#define TSB_ADC_REG19_ADRF_M19                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG19,28)))
#define TSB_ADC_REG19_ADOVRF_M19                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG19,29)))
#define TSB_ADC_REG20_ADRF20                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG20,0)))
#define TSB_ADC_REG20_ADOVRF20                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG20,1)))
#define TSB_ADC_REG20_ADRF_M20                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG20,28)))
#define TSB_ADC_REG20_ADOVRF_M20                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG20,29)))
#define TSB_ADC_REG21_ADRF21                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG21,0)))
#define TSB_ADC_REG21_ADOVRF21                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG21,1)))
#define TSB_ADC_REG21_ADRF_M21                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG21,28)))
#define TSB_ADC_REG21_ADOVRF_M21                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG21,29)))
#define TSB_ADC_REG22_ADRF22                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG22,0)))
#define TSB_ADC_REG22_ADOVRF22                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG22,1)))
#define TSB_ADC_REG22_ADRF_M22                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG22,28)))
#define TSB_ADC_REG22_ADOVRF_M22                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG22,29)))
#define TSB_ADC_REG23_ADRF23                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG23,0)))
#define TSB_ADC_REG23_ADOVRF23                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG23,1)))
#define TSB_ADC_REG23_ADRF_M23                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG23,28)))
#define TSB_ADC_REG23_ADOVRF_M23                  (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADC->REG23,29)))


/* Gain Op-AMP (AMP) */
#define TSB_AMP_CTLA_AMPEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AMP->CTLA,0)))
#define TSB_AMP_CTLB_AMPEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AMP->CTLB,0)))
#define TSB_AMP_CTLC_AMPEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_AMP->CTLC,0)))


/* 32-bit Timer Event Counter (T32A) */
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

#define TSB_T32A4_MOD_MODE32                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->MOD,0)))
#define TSB_T32A4_MOD_HALT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->MOD,1)))
#define TSB_T32A4_RUNA_RUNA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->RUNA,0)))
#define TSB_T32A4_RUNA_SFTSTAA                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A4->RUNA,1)))
#define TSB_T32A4_RUNA_SFTSTPA                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A4->RUNA,2)))
#define TSB_T32A4_RUNA_RUNFLGA                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A4->RUNA,4)))
#define TSB_T32A4_CRA_WBFA                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->CRA,20)))
#define TSB_T32A4_STA_INTA0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->STA,0)))
#define TSB_T32A4_STA_INTA1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->STA,1)))
#define TSB_T32A4_STA_INTOFA                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->STA,2)))
#define TSB_T32A4_STA_INTUFA                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->STA,3)))
#define TSB_T32A4_IMA_IMA0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->IMA,0)))
#define TSB_T32A4_IMA_IMA1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->IMA,1)))
#define TSB_T32A4_IMA_IMOFA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->IMA,2)))
#define TSB_T32A4_IMA_IMUFA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->IMA,3)))
#define TSB_T32A4_DMAA_DMAENA0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->DMAA,0)))
#define TSB_T32A4_DMAA_DMAENA1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->DMAA,1)))
#define TSB_T32A4_DMAA_DMAENA2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->DMAA,2)))
#define TSB_T32A4_RUNB_RUNB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->RUNB,0)))
#define TSB_T32A4_RUNB_SFTSTAB                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A4->RUNB,1)))
#define TSB_T32A4_RUNB_SFTSTPB                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A4->RUNB,2)))
#define TSB_T32A4_RUNB_RUNFLGB                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A4->RUNB,4)))
#define TSB_T32A4_CRB_WBFB                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->CRB,20)))
#define TSB_T32A4_STB_INTB0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->STB,0)))
#define TSB_T32A4_STB_INTB1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->STB,1)))
#define TSB_T32A4_STB_INTOFB                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->STB,2)))
#define TSB_T32A4_STB_INTUFB                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->STB,3)))
#define TSB_T32A4_IMB_IMB0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->IMB,0)))
#define TSB_T32A4_IMB_IMB1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->IMB,1)))
#define TSB_T32A4_IMB_IMOFB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->IMB,2)))
#define TSB_T32A4_IMB_IMUFB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->IMB,3)))
#define TSB_T32A4_DMAB_DMAENB0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->DMAB,0)))
#define TSB_T32A4_DMAB_DMAENB1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->DMAB,1)))
#define TSB_T32A4_DMAB_DMAENB2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->DMAB,2)))
#define TSB_T32A4_RUNC_RUNC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->RUNC,0)))
#define TSB_T32A4_RUNC_SFTSTAC                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A4->RUNC,1)))
#define TSB_T32A4_RUNC_SFTSTPC                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A4->RUNC,2)))
#define TSB_T32A4_RUNC_RUNFLGC                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A4->RUNC,4)))
#define TSB_T32A4_CRC_WBFC                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->CRC,20)))
#define TSB_T32A4_STC_INTC0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->STC,0)))
#define TSB_T32A4_STC_INTC1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->STC,1)))
#define TSB_T32A4_STC_INTOFC                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->STC,2)))
#define TSB_T32A4_STC_INTUFC                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->STC,3)))
#define TSB_T32A4_STC_INTSTERR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->STC,4)))
#define TSB_T32A4_IMC_IMC0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->IMC,0)))
#define TSB_T32A4_IMC_IMC1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->IMC,1)))
#define TSB_T32A4_IMC_IMOFC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->IMC,2)))
#define TSB_T32A4_IMC_IMUFC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->IMC,3)))
#define TSB_T32A4_IMC_IMSTERR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->IMC,4)))
#define TSB_T32A4_DMAC_DMAENC0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->DMAC,0)))
#define TSB_T32A4_DMAC_DMAENC1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->DMAC,1)))
#define TSB_T32A4_DMAC_DMAENC2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->DMAC,2)))
#define TSB_T32A4_PLSCR_PMODE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->PLSCR,0)))
#define TSB_T32A4_PLSCR_PDIR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A4->PLSCR,1)))

#define TSB_T32A5_MOD_MODE32                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->MOD,0)))
#define TSB_T32A5_MOD_HALT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->MOD,1)))
#define TSB_T32A5_RUNA_RUNA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->RUNA,0)))
#define TSB_T32A5_RUNA_SFTSTAA                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A5->RUNA,1)))
#define TSB_T32A5_RUNA_SFTSTPA                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A5->RUNA,2)))
#define TSB_T32A5_RUNA_RUNFLGA                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A5->RUNA,4)))
#define TSB_T32A5_CRA_WBFA                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->CRA,20)))
#define TSB_T32A5_STA_INTA0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->STA,0)))
#define TSB_T32A5_STA_INTA1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->STA,1)))
#define TSB_T32A5_STA_INTOFA                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->STA,2)))
#define TSB_T32A5_STA_INTUFA                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->STA,3)))
#define TSB_T32A5_IMA_IMA0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->IMA,0)))
#define TSB_T32A5_IMA_IMA1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->IMA,1)))
#define TSB_T32A5_IMA_IMOFA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->IMA,2)))
#define TSB_T32A5_IMA_IMUFA                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->IMA,3)))
#define TSB_T32A5_DMAA_DMAENA0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->DMAA,0)))
#define TSB_T32A5_DMAA_DMAENA1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->DMAA,1)))
#define TSB_T32A5_DMAA_DMAENA2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->DMAA,2)))
#define TSB_T32A5_RUNB_RUNB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->RUNB,0)))
#define TSB_T32A5_RUNB_SFTSTAB                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A5->RUNB,1)))
#define TSB_T32A5_RUNB_SFTSTPB                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A5->RUNB,2)))
#define TSB_T32A5_RUNB_RUNFLGB                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A5->RUNB,4)))
#define TSB_T32A5_CRB_WBFB                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->CRB,20)))
#define TSB_T32A5_STB_INTB0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->STB,0)))
#define TSB_T32A5_STB_INTB1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->STB,1)))
#define TSB_T32A5_STB_INTOFB                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->STB,2)))
#define TSB_T32A5_STB_INTUFB                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->STB,3)))
#define TSB_T32A5_IMB_IMB0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->IMB,0)))
#define TSB_T32A5_IMB_IMB1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->IMB,1)))
#define TSB_T32A5_IMB_IMOFB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->IMB,2)))
#define TSB_T32A5_IMB_IMUFB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->IMB,3)))
#define TSB_T32A5_DMAB_DMAENB0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->DMAB,0)))
#define TSB_T32A5_DMAB_DMAENB1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->DMAB,1)))
#define TSB_T32A5_DMAB_DMAENB2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->DMAB,2)))
#define TSB_T32A5_RUNC_RUNC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->RUNC,0)))
#define TSB_T32A5_RUNC_SFTSTAC                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A5->RUNC,1)))
#define TSB_T32A5_RUNC_SFTSTPC                    (*((__O  uint32_t *)BITBAND_PERI(&TSB_T32A5->RUNC,2)))
#define TSB_T32A5_RUNC_RUNFLGC                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_T32A5->RUNC,4)))
#define TSB_T32A5_CRC_WBFC                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->CRC,20)))
#define TSB_T32A5_STC_INTC0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->STC,0)))
#define TSB_T32A5_STC_INTC1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->STC,1)))
#define TSB_T32A5_STC_INTOFC                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->STC,2)))
#define TSB_T32A5_STC_INTUFC                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->STC,3)))
#define TSB_T32A5_STC_INTSTERR                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->STC,4)))
#define TSB_T32A5_IMC_IMC0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->IMC,0)))
#define TSB_T32A5_IMC_IMC1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->IMC,1)))
#define TSB_T32A5_IMC_IMOFC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->IMC,2)))
#define TSB_T32A5_IMC_IMUFC                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->IMC,3)))
#define TSB_T32A5_IMC_IMSTERR                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->IMC,4)))
#define TSB_T32A5_DMAC_DMAENC0                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->DMAC,0)))
#define TSB_T32A5_DMAC_DMAENC1                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->DMAC,1)))
#define TSB_T32A5_DMAC_DMAENC2                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->DMAC,2)))
#define TSB_T32A5_PLSCR_PMODE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->PLSCR,0)))
#define TSB_T32A5_PLSCR_PDIR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_T32A5->PLSCR,1)))


/* Serial Peripheral Interface (TSPI) */
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
#define TSB_TSPI0_ERR_PERR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI0->ERR,0)))
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
#define TSB_TSPI1_ERR_PERR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->ERR,0)))
#define TSB_TSPI1_ERR_OVRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->ERR,1)))
#define TSB_TSPI1_ERR_UDRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->ERR,2)))
#define TSB_TSPI1_ERR_TRGERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TSPI1->ERR,3)))


/* Asynchronous Serial Communication Circuit (UART) */
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
#define TSB_UART0_CR0_HBSEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR0,16)))
#define TSB_UART0_CR0_HBSMD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR0,17)))
#define TSB_UART0_CR0_HBSST                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART0->CR0,18)))
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
#define TSB_UART1_CR0_HBSEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR0,16)))
#define TSB_UART1_CR0_HBSMD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR0,17)))
#define TSB_UART1_CR0_HBSST                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART1->CR0,18)))
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
#define TSB_UART2_CR0_HBSEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR0,16)))
#define TSB_UART2_CR0_HBSMD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR0,17)))
#define TSB_UART2_CR0_HBSST                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART2->CR0,18)))
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

#define TSB_UART3_SWRST_SWRSTF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART3->SWRST,7)))
#define TSB_UART3_CR0_PE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR0,2)))
#define TSB_UART3_CR0_EVEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR0,3)))
#define TSB_UART3_CR0_SBLEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR0,4)))
#define TSB_UART3_CR0_DIR                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR0,5)))
#define TSB_UART3_CR0_IV                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR0,6)))
#define TSB_UART3_CR0_WU                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR0,8)))
#define TSB_UART3_CR0_RTSE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR0,9)))
#define TSB_UART3_CR0_CTSE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR0,10)))
#define TSB_UART3_CR0_LPB                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR0,15)))
#define TSB_UART3_CR0_HBSEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR0,16)))
#define TSB_UART3_CR0_HBSMD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR0,17)))
#define TSB_UART3_CR0_HBSST                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR0,18)))
#define TSB_UART3_CR1_DMARE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR1,0)))
#define TSB_UART3_CR1_DMATE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR1,1)))
#define TSB_UART3_CR1_INTERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR1,2)))
#define TSB_UART3_CR1_INTRXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR1,4)))
#define TSB_UART3_CR1_INTRXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR1,5)))
#define TSB_UART3_CR1_INTTXWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR1,6)))
#define TSB_UART3_CR1_INTTXFE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->CR1,7)))
#define TSB_UART3_BRD_KEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->BRD,23)))
#define TSB_UART3_TRANS_RXE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->TRANS,0)))
#define TSB_UART3_TRANS_TXE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->TRANS,1)))
#define TSB_UART3_TRANS_TXTRG                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->TRANS,2)))
#define TSB_UART3_TRANS_BK                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->TRANS,3)))
#define TSB_UART3_DR_BERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART3->DR,16)))
#define TSB_UART3_DR_FERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART3->DR,17)))
#define TSB_UART3_DR_PERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART3->DR,18)))
#define TSB_UART3_SR_RXFF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->SR,5)))
#define TSB_UART3_SR_RXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->SR,6)))
#define TSB_UART3_SR_RXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART3->SR,7)))
#define TSB_UART3_SR_TXFF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->SR,13)))
#define TSB_UART3_SR_TXEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->SR,14)))
#define TSB_UART3_SR_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART3->SR,15)))
#define TSB_UART3_SR_SUE                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART3->SR,31)))
#define TSB_UART3_FIFOCLR_RFCLR                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART3->FIFOCLR,0)))
#define TSB_UART3_FIFOCLR_TFCLR                   (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART3->FIFOCLR,1)))
#define TSB_UART3_ERR_BERR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->ERR,0)))
#define TSB_UART3_ERR_FERR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->ERR,1)))
#define TSB_UART3_ERR_PERR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->ERR,2)))
#define TSB_UART3_ERR_OVRERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->ERR,3)))
#define TSB_UART3_ERR_TRGERR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART3->ERR,4)))


/* I2C Interface (I2C) */
#define TSB_I2C0_CR1_NOACK                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->CR1,3)))
#define TSB_I2C0_CR1_ACK                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->CR1,4)))
#define TSB_I2C0_AR_ALS                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->AR,0)))
#define TSB_I2C0_CR2_I2CM                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_I2C0->CR2,3)))
#define TSB_I2C0_CR2_PIN                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_I2C0->CR2,4)))
#define TSB_I2C0_CR2_BB                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_I2C0->CR2,5)))
#define TSB_I2C0_CR2_TRX                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_I2C0->CR2,6)))
#define TSB_I2C0_CR2_MST                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_I2C0->CR2,7)))
#define TSB_I2C0_SR_LRB                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C0->SR,0)))
#define TSB_I2C0_SR_AD0                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C0->SR,1)))
#define TSB_I2C0_SR_AAS                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C0->SR,2)))
#define TSB_I2C0_SR_AL                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C0->SR,3)))
#define TSB_I2C0_SR_PIN                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C0->SR,4)))
#define TSB_I2C0_SR_BB                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C0->SR,5)))
#define TSB_I2C0_SR_TRX                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C0->SR,6)))
#define TSB_I2C0_SR_MST                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C0->SR,7)))
#define TSB_I2C0_IE_INTI2C                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->IE,0)))
#define TSB_I2C0_IE_INTI2CAL                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->IE,1)))
#define TSB_I2C0_IE_INTI2CBF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->IE,2)))
#define TSB_I2C0_IE_INTNACK                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->IE,3)))
#define TSB_I2C0_IE_DMARI2CRX                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->IE,4)))
#define TSB_I2C0_IE_DMARI2CTX                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->IE,5)))
#define TSB_I2C0_IE_SELPINCD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->IE,6)))
#define TSB_I2C0_ST_I2C                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->ST,0)))
#define TSB_I2C0_ST_I2CAL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->ST,1)))
#define TSB_I2C0_ST_I2CBF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->ST,2)))
#define TSB_I2C0_ST_NACK                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->ST,3)))
#define TSB_I2C0_OP_MFACK                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->OP,0)))
#define TSB_I2C0_OP_SREN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->OP,1)))
#define TSB_I2C0_OP_GCDI                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->OP,2)))
#define TSB_I2C0_OP_RSTA                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->OP,3)))
#define TSB_I2C0_OP_NFSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->OP,4)))
#define TSB_I2C0_OP_SAST                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C0->OP,5)))
#define TSB_I2C0_OP_SA2ST                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C0->OP,6)))
#define TSB_I2C0_OP_DISAL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->OP,7)))
#define TSB_I2C0_PM_SCL                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C0->PM,0)))
#define TSB_I2C0_PM_SDA                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C0->PM,1)))
#define TSB_I2C0_AR2_SA2EN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C0->AR2,0)))

#define TSB_I2C1_CR1_NOACK                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->CR1,3)))
#define TSB_I2C1_CR1_ACK                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->CR1,4)))
#define TSB_I2C1_AR_ALS                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->AR,0)))
#define TSB_I2C1_CR2_I2CM                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_I2C1->CR2,3)))
#define TSB_I2C1_CR2_PIN                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_I2C1->CR2,4)))
#define TSB_I2C1_CR2_BB                           (*((__O  uint32_t *)BITBAND_PERI(&TSB_I2C1->CR2,5)))
#define TSB_I2C1_CR2_TRX                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_I2C1->CR2,6)))
#define TSB_I2C1_CR2_MST                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_I2C1->CR2,7)))
#define TSB_I2C1_SR_LRB                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C1->SR,0)))
#define TSB_I2C1_SR_AD0                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C1->SR,1)))
#define TSB_I2C1_SR_AAS                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C1->SR,2)))
#define TSB_I2C1_SR_AL                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C1->SR,3)))
#define TSB_I2C1_SR_PIN                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C1->SR,4)))
#define TSB_I2C1_SR_BB                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C1->SR,5)))
#define TSB_I2C1_SR_TRX                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C1->SR,6)))
#define TSB_I2C1_SR_MST                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C1->SR,7)))
#define TSB_I2C1_IE_INTI2C                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->IE,0)))
#define TSB_I2C1_IE_INTI2CAL                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->IE,1)))
#define TSB_I2C1_IE_INTI2CBF                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->IE,2)))
#define TSB_I2C1_IE_INTNACK                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->IE,3)))
#define TSB_I2C1_IE_DMARI2CRX                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->IE,4)))
#define TSB_I2C1_IE_DMARI2CTX                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->IE,5)))
#define TSB_I2C1_IE_SELPINCD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->IE,6)))
#define TSB_I2C1_ST_I2C                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->ST,0)))
#define TSB_I2C1_ST_I2CAL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->ST,1)))
#define TSB_I2C1_ST_I2CBF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->ST,2)))
#define TSB_I2C1_ST_NACK                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->ST,3)))
#define TSB_I2C1_OP_MFACK                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->OP,0)))
#define TSB_I2C1_OP_SREN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->OP,1)))
#define TSB_I2C1_OP_GCDI                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->OP,2)))
#define TSB_I2C1_OP_RSTA                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->OP,3)))
#define TSB_I2C1_OP_NFSEL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->OP,4)))
#define TSB_I2C1_OP_SAST                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C1->OP,5)))
#define TSB_I2C1_OP_SA2ST                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C1->OP,6)))
#define TSB_I2C1_OP_DISAL                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->OP,7)))
#define TSB_I2C1_PM_SCL                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C1->PM,0)))
#define TSB_I2C1_PM_SDA                           (*((__I  uint32_t *)BITBAND_PERI(&TSB_I2C1->PM,1)))
#define TSB_I2C1_AR2_SA2EN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_I2C1->AR2,0)))


/* Port A */
#define TSB_PA_DATA_PA0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,0)))
#define TSB_PA_DATA_PA1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,1)))
#define TSB_PA_DATA_PA2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,2)))
#define TSB_PA_DATA_PA3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,3)))
#define TSB_PA_DATA_PA4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->DATA,4)))
#define TSB_PA_CR_PA0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,0)))
#define TSB_PA_CR_PA1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,1)))
#define TSB_PA_CR_PA2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,2)))
#define TSB_PA_CR_PA3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,3)))
#define TSB_PA_CR_PA4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->CR,4)))
#define TSB_PA_FR1_PA0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,0)))
#define TSB_PA_FR1_PA1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,1)))
#define TSB_PA_FR1_PA2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,2)))
#define TSB_PA_FR1_PA3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,3)))
#define TSB_PA_FR1_PA4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR1,4)))
#define TSB_PA_FR4_PA0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR4,0)))
#define TSB_PA_FR4_PA1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR4,1)))
#define TSB_PA_FR4_PA2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR4,2)))
#define TSB_PA_FR4_PA3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR4,3)))
#define TSB_PA_FR4_PA4F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR4,4)))
#define TSB_PA_FR5_PA2F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR5,2)))
#define TSB_PA_FR5_PA3F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR5,3)))
#define TSB_PA_FR6_PA2F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR6,2)))
#define TSB_PA_FR7_PA2F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR7,2)))
#define TSB_PA_FR7_PA3F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR7,3)))
#define TSB_PA_FR7_PA4F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->FR7,4)))
#define TSB_PA_OD_PA0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,0)))
#define TSB_PA_OD_PA1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,1)))
#define TSB_PA_OD_PA2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,2)))
#define TSB_PA_OD_PA3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,3)))
#define TSB_PA_OD_PA4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->OD,4)))
#define TSB_PA_PUP_PA0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,0)))
#define TSB_PA_PUP_PA1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,1)))
#define TSB_PA_PUP_PA2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,2)))
#define TSB_PA_PUP_PA3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,3)))
#define TSB_PA_PUP_PA4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PUP,4)))
#define TSB_PA_PDN_PA0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,0)))
#define TSB_PA_PDN_PA1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,1)))
#define TSB_PA_PDN_PA2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,2)))
#define TSB_PA_PDN_PA3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,3)))
#define TSB_PA_PDN_PA4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->PDN,4)))
#define TSB_PA_IE_PA0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,0)))
#define TSB_PA_IE_PA1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,1)))
#define TSB_PA_IE_PA2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,2)))
#define TSB_PA_IE_PA3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,3)))
#define TSB_PA_IE_PA4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PA->IE,4)))


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
#define TSB_PB_FR4_PB0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,0)))
#define TSB_PB_FR4_PB1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,1)))
#define TSB_PB_FR4_PB2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,2)))
#define TSB_PB_FR4_PB3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,3)))
#define TSB_PB_FR4_PB4F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,4)))
#define TSB_PB_FR4_PB5F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,5)))
#define TSB_PB_FR4_PB6F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,6)))
#define TSB_PB_FR4_PB7F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR4,7)))
#define TSB_PB_FR5_PB7F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR5,7)))
#define TSB_PB_OD_PB0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,0)))
#define TSB_PB_OD_PB1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,1)))
#define TSB_PB_OD_PB2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,2)))
#define TSB_PB_OD_PB3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,3)))
#define TSB_PB_OD_PB4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,4)))
#define TSB_PB_OD_PB5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,5)))
#define TSB_PB_OD_PB6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,6)))
#define TSB_PB_OD_PB7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->OD,7)))
#define TSB_PB_PUP_PB0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,0)))
#define TSB_PB_PUP_PB1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,1)))
#define TSB_PB_PUP_PB2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,2)))
#define TSB_PB_PUP_PB3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,3)))
#define TSB_PB_PUP_PB4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,4)))
#define TSB_PB_PUP_PB5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,5)))
#define TSB_PB_PUP_PB6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,6)))
#define TSB_PB_PUP_PB7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PUP,7)))
#define TSB_PB_PDN_PB0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,0)))
#define TSB_PB_PDN_PB1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,1)))
#define TSB_PB_PDN_PB2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,2)))
#define TSB_PB_PDN_PB3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,3)))
#define TSB_PB_PDN_PB4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,4)))
#define TSB_PB_PDN_PB5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,5)))
#define TSB_PB_PDN_PB6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,6)))
#define TSB_PB_PDN_PB7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->PDN,7)))
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
#define TSB_PC_FR1_PC4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,4)))
#define TSB_PC_FR1_PC5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,5)))
#define TSB_PC_FR2_PC0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,0)))
#define TSB_PC_FR2_PC1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,1)))
#define TSB_PC_FR2_PC4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,4)))
#define TSB_PC_FR2_PC5F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,5)))
#define TSB_PC_FR3_PC2F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,2)))
#define TSB_PC_FR3_PC3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,3)))
#define TSB_PC_FR3_PC4F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,4)))
#define TSB_PC_FR3_PC5F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,5)))
#define TSB_PC_FR3_PC6F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,6)))
#define TSB_PC_FR3_PC7F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR3,7)))
#define TSB_PC_FR4_PC0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR4,0)))
#define TSB_PC_FR4_PC1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR4,1)))
#define TSB_PC_FR5_PC0F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR5,0)))
#define TSB_PC_FR5_PC1F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR5,1)))
#define TSB_PC_FR5_PC2F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR5,2)))
#define TSB_PC_FR5_PC3F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR5,3)))
#define TSB_PC_FR5_PC6F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR5,6)))
#define TSB_PC_FR5_PC7F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR5,7)))
#define TSB_PC_FR6_PC0F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR6,0)))
#define TSB_PC_FR6_PC1F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR6,1)))
#define TSB_PC_FR6_PC2F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR6,2)))
#define TSB_PC_FR6_PC6F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR6,6)))
#define TSB_PC_FR7_PC2F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR7,2)))
#define TSB_PC_FR7_PC3F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR7,3)))
#define TSB_PC_OD_PC0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,0)))
#define TSB_PC_OD_PC1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,1)))
#define TSB_PC_OD_PC2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,2)))
#define TSB_PC_OD_PC3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,3)))
#define TSB_PC_OD_PC4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,4)))
#define TSB_PC_OD_PC5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,5)))
#define TSB_PC_OD_PC6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,6)))
#define TSB_PC_OD_PC7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->OD,7)))
#define TSB_PC_PUP_PC0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,0)))
#define TSB_PC_PUP_PC1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,1)))
#define TSB_PC_PUP_PC2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,2)))
#define TSB_PC_PUP_PC3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,3)))
#define TSB_PC_PUP_PC4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,4)))
#define TSB_PC_PUP_PC5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,5)))
#define TSB_PC_PUP_PC6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,6)))
#define TSB_PC_PUP_PC7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PUP,7)))
#define TSB_PC_PDN_PC0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PDN,0)))
#define TSB_PC_PDN_PC1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PDN,1)))
#define TSB_PC_PDN_PC2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PDN,2)))
#define TSB_PC_PDN_PC3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PDN,3)))
#define TSB_PC_PDN_PC4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PDN,4)))
#define TSB_PC_PDN_PC5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PDN,5)))
#define TSB_PC_PDN_PC6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PDN,6)))
#define TSB_PC_PDN_PC7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->PDN,7)))
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
#define TSB_PD_CR_PD0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,0)))
#define TSB_PD_CR_PD1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,1)))
#define TSB_PD_CR_PD2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,2)))
#define TSB_PD_CR_PD3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,3)))
#define TSB_PD_CR_PD4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,4)))
#define TSB_PD_CR_PD5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->CR,5)))
#define TSB_PD_FR1_PD2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,2)))
#define TSB_PD_FR1_PD3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,3)))
#define TSB_PD_FR2_PD3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,3)))
#define TSB_PD_FR2_PD4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,4)))
#define TSB_PD_FR4_PD0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR4,0)))
#define TSB_PD_FR4_PD1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR4,1)))
#define TSB_PD_FR4_PD2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR4,2)))
#define TSB_PD_FR4_PD3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR4,3)))
#define TSB_PD_FR4_PD4F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR4,4)))
#define TSB_PD_FR4_PD5F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR4,5)))
#define TSB_PD_FR5_PD2F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR5,2)))
#define TSB_PD_FR5_PD3F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR5,3)))
#define TSB_PD_FR6_PD3F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR6,3)))
#define TSB_PD_FR6_PD4F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR6,4)))
#define TSB_PD_FR6_PD5F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR6,5)))
#define TSB_PD_OD_PD0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,0)))
#define TSB_PD_OD_PD1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,1)))
#define TSB_PD_OD_PD2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,2)))
#define TSB_PD_OD_PD3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,3)))
#define TSB_PD_OD_PD4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,4)))
#define TSB_PD_OD_PD5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,5)))
#define TSB_PD_PUP_PD0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,0)))
#define TSB_PD_PUP_PD1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,1)))
#define TSB_PD_PUP_PD2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,2)))
#define TSB_PD_PUP_PD3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,3)))
#define TSB_PD_PUP_PD4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,4)))
#define TSB_PD_PUP_PD5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PUP,5)))
#define TSB_PD_PDN_PD0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PDN,0)))
#define TSB_PD_PDN_PD1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PDN,1)))
#define TSB_PD_PDN_PD2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PDN,2)))
#define TSB_PD_PDN_PD3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PDN,3)))
#define TSB_PD_PDN_PD4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PDN,4)))
#define TSB_PD_PDN_PD5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->PDN,5)))
#define TSB_PD_IE_PD0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,0)))
#define TSB_PD_IE_PD1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,1)))
#define TSB_PD_IE_PD2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,2)))
#define TSB_PD_IE_PD3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,3)))
#define TSB_PD_IE_PD4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,4)))
#define TSB_PD_IE_PD5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,5)))


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
#define TSB_PE_FR4_PE1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,1)))
#define TSB_PE_FR4_PE2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,2)))
#define TSB_PE_FR4_PE3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,3)))
#define TSB_PE_FR4_PE4F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,4)))
#define TSB_PE_FR4_PE5F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,5)))
#define TSB_PE_FR4_PE6F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR4,6)))
#define TSB_PE_FR5_PE1F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR5,1)))
#define TSB_PE_FR5_PE2F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR5,2)))
#define TSB_PE_FR5_PE3F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR5,3)))
#define TSB_PE_FR6_PE0F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR6,0)))
#define TSB_PE_FR6_PE1F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR6,1)))
#define TSB_PE_FR6_PE2F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR6,2)))
#define TSB_PE_FR6_PE3F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR6,3)))
#define TSB_PE_FR6_PE4F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR6,4)))
#define TSB_PE_FR6_PE5F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR6,5)))
#define TSB_PE_FR6_PE6F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR6,6)))
#define TSB_PE_FR6_PE7F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR6,7)))
#define TSB_PE_FR7_PE7F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR7,7)))
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
#define TSB_PF_FR1_PF3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR1,3)))
#define TSB_PF_FR1_PF4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR1,4)))
#define TSB_PF_FR1_PF6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR1,6)))
#define TSB_PF_FR1_PF7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR1,7)))
#define TSB_PF_FR2_PF0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR2,0)))
#define TSB_PF_FR2_PF1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR2,1)))
#define TSB_PF_FR2_PF3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR2,3)))
#define TSB_PF_FR2_PF4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR2,4)))
#define TSB_PF_FR2_PF6F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR2,6)))
#define TSB_PF_FR2_PF7F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR2,7)))
#define TSB_PF_FR3_PF4F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR3,4)))
#define TSB_PF_FR3_PF5F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR3,5)))
#define TSB_PF_FR3_PF6F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR3,6)))
#define TSB_PF_FR3_PF7F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR3,7)))
#define TSB_PF_FR4_PF0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR4,0)))
#define TSB_PF_FR4_PF1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR4,1)))
#define TSB_PF_FR4_PF2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR4,2)))
#define TSB_PF_FR4_PF3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR4,3)))
#define TSB_PF_FR4_PF4F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR4,4)))
#define TSB_PF_FR4_PF5F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR4,5)))
#define TSB_PF_FR4_PF6F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR4,6)))
#define TSB_PF_FR4_PF7F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR4,7)))
#define TSB_PF_FR5_PF0F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR5,0)))
#define TSB_PF_FR5_PF1F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR5,1)))
#define TSB_PF_FR5_PF2F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR5,2)))
#define TSB_PF_FR5_PF3F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR5,3)))
#define TSB_PF_FR5_PF4F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR5,4)))
#define TSB_PF_FR5_PF5F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR5,5)))
#define TSB_PF_FR6_PF3F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR6,3)))
#define TSB_PF_FR6_PF4F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR6,4)))
#define TSB_PF_FR6_PF5F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR6,5)))
#define TSB_PF_FR7_PF0F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR7,0)))
#define TSB_PF_FR7_PF1F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR7,1)))
#define TSB_PF_FR7_PF2F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR7,2)))
#define TSB_PF_FR7_PF3F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR7,3)))
#define TSB_PF_FR7_PF4F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR7,4)))
#define TSB_PF_FR7_PF5F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR7,5)))
#define TSB_PF_FR7_PF6F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR7,6)))
#define TSB_PF_FR7_PF7F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PF->FR7,7)))
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


/* Port G */
#define TSB_PG_DATA_PG0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,0)))
#define TSB_PG_DATA_PG1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,1)))
#define TSB_PG_DATA_PG2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,2)))
#define TSB_PG_DATA_PG3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,3)))
#define TSB_PG_DATA_PG4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,4)))
#define TSB_PG_DATA_PG5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,5)))
#define TSB_PG_DATA_PG6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->DATA,6)))
#define TSB_PG_CR_PG0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,0)))
#define TSB_PG_CR_PG1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,1)))
#define TSB_PG_CR_PG2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,2)))
#define TSB_PG_CR_PG3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,3)))
#define TSB_PG_CR_PG4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,4)))
#define TSB_PG_CR_PG5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,5)))
#define TSB_PG_CR_PG6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->CR,6)))
#define TSB_PG_FR1_PG1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,1)))
#define TSB_PG_FR1_PG2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,2)))
#define TSB_PG_FR1_PG3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,3)))
#define TSB_PG_FR1_PG4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,4)))
#define TSB_PG_FR1_PG5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,5)))
#define TSB_PG_FR1_PG6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR1,6)))
#define TSB_PG_FR4_PG0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR4,0)))
#define TSB_PG_FR4_PG1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR4,1)))
#define TSB_PG_FR4_PG2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR4,2)))
#define TSB_PG_FR4_PG3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR4,3)))
#define TSB_PG_FR4_PG4F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR4,4)))
#define TSB_PG_FR4_PG5F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR4,5)))
#define TSB_PG_FR5_PG0F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR5,0)))
#define TSB_PG_FR5_PG1F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR5,1)))
#define TSB_PG_FR5_PG2F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->FR5,2)))
#define TSB_PG_OD_PG0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,0)))
#define TSB_PG_OD_PG1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,1)))
#define TSB_PG_OD_PG2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,2)))
#define TSB_PG_OD_PG3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,3)))
#define TSB_PG_OD_PG4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,4)))
#define TSB_PG_OD_PG5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,5)))
#define TSB_PG_OD_PG6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->OD,6)))
#define TSB_PG_PUP_PG0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,0)))
#define TSB_PG_PUP_PG1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,1)))
#define TSB_PG_PUP_PG2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,2)))
#define TSB_PG_PUP_PG3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,3)))
#define TSB_PG_PUP_PG4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,4)))
#define TSB_PG_PUP_PG5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,5)))
#define TSB_PG_PUP_PG6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,6)))
#define TSB_PG_PDN_PG0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,0)))
#define TSB_PG_PDN_PG1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,1)))
#define TSB_PG_PDN_PG2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,2)))
#define TSB_PG_PDN_PG3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,3)))
#define TSB_PG_PDN_PG4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,4)))
#define TSB_PG_PDN_PG5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,5)))
#define TSB_PG_PDN_PG6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PDN,6)))
#define TSB_PG_IE_PG0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,0)))
#define TSB_PG_IE_PG1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,1)))
#define TSB_PG_IE_PG2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,2)))
#define TSB_PG_IE_PG3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,3)))
#define TSB_PG_IE_PG4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,4)))
#define TSB_PG_IE_PG5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,5)))
#define TSB_PG_IE_PG6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,6)))


/* Port H */
#define TSB_PH_DATA_PH0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,0)))
#define TSB_PH_DATA_PH1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,1)))
#define TSB_PH_PDN_PH0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PDN,0)))
#define TSB_PH_PDN_PH1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PDN,1)))
#define TSB_PH_IE_PH0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,0)))
#define TSB_PH_IE_PH1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,1)))


/* Port J */
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
#define TSB_PK_OD_PK0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,0)))
#define TSB_PK_OD_PK1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,1)))
#define TSB_PK_OD_PK2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,2)))
#define TSB_PK_OD_PK3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,3)))
#define TSB_PK_OD_PK4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,4)))
#define TSB_PK_OD_PK5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,5)))
#define TSB_PK_OD_PK6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,6)))
#define TSB_PK_OD_PK7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->OD,7)))
#define TSB_PK_PUP_PK0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,0)))
#define TSB_PK_PUP_PK1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,1)))
#define TSB_PK_PUP_PK2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,2)))
#define TSB_PK_PUP_PK3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,3)))
#define TSB_PK_PUP_PK4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,4)))
#define TSB_PK_PUP_PK5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,5)))
#define TSB_PK_PUP_PK6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,6)))
#define TSB_PK_PUP_PK7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,7)))
#define TSB_PK_PDN_PK0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,0)))
#define TSB_PK_PDN_PK1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,1)))
#define TSB_PK_PDN_PK2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,2)))
#define TSB_PK_PDN_PK3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,3)))
#define TSB_PK_PDN_PK4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,4)))
#define TSB_PK_PDN_PK5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,5)))
#define TSB_PK_PDN_PK6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,6)))
#define TSB_PK_PDN_PK7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PDN,7)))
#define TSB_PK_IE_PK0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,0)))
#define TSB_PK_IE_PK1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,1)))
#define TSB_PK_IE_PK2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,2)))
#define TSB_PK_IE_PK3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,3)))
#define TSB_PK_IE_PK4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,4)))
#define TSB_PK_IE_PK5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,5)))
#define TSB_PK_IE_PK6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,6)))
#define TSB_PK_IE_PK7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->IE,7)))


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
#define TSB_PL_OD_PL0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,0)))
#define TSB_PL_OD_PL1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,1)))
#define TSB_PL_OD_PL2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,2)))
#define TSB_PL_OD_PL3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,3)))
#define TSB_PL_OD_PL4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,4)))
#define TSB_PL_OD_PL5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,5)))
#define TSB_PL_OD_PL6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,6)))
#define TSB_PL_OD_PL7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->OD,7)))
#define TSB_PL_PUP_PL0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,0)))
#define TSB_PL_PUP_PL1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,1)))
#define TSB_PL_PUP_PL2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,2)))
#define TSB_PL_PUP_PL3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,3)))
#define TSB_PL_PUP_PL4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,4)))
#define TSB_PL_PUP_PL5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,5)))
#define TSB_PL_PUP_PL6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,6)))
#define TSB_PL_PUP_PL7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PUP,7)))
#define TSB_PL_PDN_PL0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PDN,0)))
#define TSB_PL_PDN_PL1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PDN,1)))
#define TSB_PL_PDN_PL2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PDN,2)))
#define TSB_PL_PDN_PL3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PDN,3)))
#define TSB_PL_PDN_PL4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PDN,4)))
#define TSB_PL_PDN_PL5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PDN,5)))
#define TSB_PL_PDN_PL6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PDN,6)))
#define TSB_PL_PDN_PL7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->PDN,7)))
#define TSB_PL_IE_PL0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,0)))
#define TSB_PL_IE_PL1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,1)))
#define TSB_PL_IE_PL2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,2)))
#define TSB_PL_IE_PL3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,3)))
#define TSB_PL_IE_PL4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,4)))
#define TSB_PL_IE_PL5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,5)))
#define TSB_PL_IE_PL6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,6)))
#define TSB_PL_IE_PL7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->IE,7)))


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
#define TSB_PM_OD_PM0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->OD,0)))
#define TSB_PM_OD_PM1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->OD,1)))
#define TSB_PM_OD_PM2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->OD,2)))
#define TSB_PM_OD_PM3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->OD,3)))
#define TSB_PM_OD_PM4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->OD,4)))
#define TSB_PM_OD_PM5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->OD,5)))
#define TSB_PM_OD_PM6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->OD,6)))
#define TSB_PM_OD_PM7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->OD,7)))
#define TSB_PM_PUP_PM0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,0)))
#define TSB_PM_PUP_PM1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,1)))
#define TSB_PM_PUP_PM2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,2)))
#define TSB_PM_PUP_PM3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,3)))
#define TSB_PM_PUP_PM4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,4)))
#define TSB_PM_PUP_PM5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,5)))
#define TSB_PM_PUP_PM6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,6)))
#define TSB_PM_PUP_PM7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,7)))
#define TSB_PM_PDN_PM0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PDN,0)))
#define TSB_PM_PDN_PM1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PDN,1)))
#define TSB_PM_PDN_PM2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PDN,2)))
#define TSB_PM_PDN_PM3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PDN,3)))
#define TSB_PM_PDN_PM4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PDN,4)))
#define TSB_PM_PDN_PM5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PDN,5)))
#define TSB_PM_PDN_PM6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PDN,6)))
#define TSB_PM_PDN_PM7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PDN,7)))
#define TSB_PM_IE_PM0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->IE,0)))
#define TSB_PM_IE_PM1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->IE,1)))
#define TSB_PM_IE_PM2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->IE,2)))
#define TSB_PM_IE_PM3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->IE,3)))
#define TSB_PM_IE_PM4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->IE,4)))
#define TSB_PM_IE_PM5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->IE,5)))
#define TSB_PM_IE_PM6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->IE,6)))
#define TSB_PM_IE_PM7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->IE,7)))


/* Port N */
#define TSB_PN_DATA_PN0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->DATA,0)))
#define TSB_PN_DATA_PN1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->DATA,1)))
#define TSB_PN_DATA_PN2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->DATA,2)))
#define TSB_PN_CR_PN0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->CR,0)))
#define TSB_PN_CR_PN1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->CR,1)))
#define TSB_PN_CR_PN2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->CR,2)))
#define TSB_PN_FR1_PN0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR1,0)))
#define TSB_PN_FR1_PN1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR1,1)))
#define TSB_PN_FR1_PN2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR1,2)))
#define TSB_PN_FR2_PN0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR2,0)))
#define TSB_PN_FR2_PN1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR2,1)))
#define TSB_PN_FR3_PN0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR3,0)))
#define TSB_PN_FR3_PN1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR3,1)))
#define TSB_PN_FR4_PN0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR4,0)))
#define TSB_PN_FR4_PN1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR4,1)))
#define TSB_PN_FR4_PN2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR4,2)))
#define TSB_PN_FR5_PN0F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR5,0)))
#define TSB_PN_FR5_PN1F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR5,1)))
#define TSB_PN_FR5_PN2F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR5,2)))
#define TSB_PN_FR6_PN0F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR6,0)))
#define TSB_PN_FR6_PN1F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR6,1)))
#define TSB_PN_FR6_PN2F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR6,2)))
#define TSB_PN_FR7_PN0F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR7,0)))
#define TSB_PN_FR7_PN1F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->FR7,1)))
#define TSB_PN_OD_PN0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->OD,0)))
#define TSB_PN_OD_PN1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->OD,1)))
#define TSB_PN_OD_PN2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->OD,2)))
#define TSB_PN_PUP_PN0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->PUP,0)))
#define TSB_PN_PUP_PN1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->PUP,1)))
#define TSB_PN_PUP_PN2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->PUP,2)))
#define TSB_PN_PDN_PN0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->PDN,0)))
#define TSB_PN_PDN_PN1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->PDN,1)))
#define TSB_PN_PDN_PN2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->PDN,2)))
#define TSB_PN_IE_PN0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->IE,0)))
#define TSB_PN_IE_PN1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->IE,1)))
#define TSB_PN_IE_PN2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PN->IE,2)))


/* Port P */
#define TSB_PP_DATA_PP0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->DATA,0)))
#define TSB_PP_DATA_PP1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->DATA,1)))
#define TSB_PP_DATA_PP2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->DATA,2)))
#define TSB_PP_DATA_PP3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->DATA,3)))
#define TSB_PP_DATA_PP4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->DATA,4)))
#define TSB_PP_DATA_PP5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->DATA,5)))
#define TSB_PP_DATA_PP6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->DATA,6)))
#define TSB_PP_DATA_PP7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->DATA,7)))
#define TSB_PP_CR_PP0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->CR,0)))
#define TSB_PP_CR_PP1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->CR,1)))
#define TSB_PP_CR_PP2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->CR,2)))
#define TSB_PP_CR_PP3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->CR,3)))
#define TSB_PP_CR_PP4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->CR,4)))
#define TSB_PP_CR_PP5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->CR,5)))
#define TSB_PP_CR_PP6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->CR,6)))
#define TSB_PP_CR_PP7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->CR,7)))
#define TSB_PP_FR1_PP6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR1,6)))
#define TSB_PP_FR1_PP7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR1,7)))
#define TSB_PP_FR2_PP6F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR2,6)))
#define TSB_PP_FR2_PP7F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR2,7)))
#define TSB_PP_FR4_PP0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR4,0)))
#define TSB_PP_FR4_PP1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR4,1)))
#define TSB_PP_FR4_PP2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR4,2)))
#define TSB_PP_FR4_PP3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR4,3)))
#define TSB_PP_FR4_PP4F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR4,4)))
#define TSB_PP_FR4_PP5F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR4,5)))
#define TSB_PP_FR5_PP3F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR5,3)))
#define TSB_PP_FR5_PP4F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR5,4)))
#define TSB_PP_FR5_PP5F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR5,5)))
#define TSB_PP_FR6_PP3F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR6,3)))
#define TSB_PP_FR6_PP4F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR6,4)))
#define TSB_PP_FR6_PP5F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->FR6,5)))
#define TSB_PP_OD_PP0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->OD,0)))
#define TSB_PP_OD_PP1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->OD,1)))
#define TSB_PP_OD_PP2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->OD,2)))
#define TSB_PP_OD_PP3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->OD,3)))
#define TSB_PP_OD_PP4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->OD,4)))
#define TSB_PP_OD_PP5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->OD,5)))
#define TSB_PP_OD_PP6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->OD,6)))
#define TSB_PP_OD_PP7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->OD,7)))
#define TSB_PP_PUP_PP0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PUP,0)))
#define TSB_PP_PUP_PP1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PUP,1)))
#define TSB_PP_PUP_PP2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PUP,2)))
#define TSB_PP_PUP_PP3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PUP,3)))
#define TSB_PP_PUP_PP4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PUP,4)))
#define TSB_PP_PUP_PP5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PUP,5)))
#define TSB_PP_PUP_PP6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PUP,6)))
#define TSB_PP_PUP_PP7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PUP,7)))
#define TSB_PP_PDN_PP0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PDN,0)))
#define TSB_PP_PDN_PP1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PDN,1)))
#define TSB_PP_PDN_PP2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PDN,2)))
#define TSB_PP_PDN_PP3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PDN,3)))
#define TSB_PP_PDN_PP4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PDN,4)))
#define TSB_PP_PDN_PP5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PDN,5)))
#define TSB_PP_PDN_PP6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PDN,6)))
#define TSB_PP_PDN_PP7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->PDN,7)))
#define TSB_PP_IE_PP0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->IE,0)))
#define TSB_PP_IE_PP1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->IE,1)))
#define TSB_PP_IE_PP2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->IE,2)))
#define TSB_PP_IE_PP3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->IE,3)))
#define TSB_PP_IE_PP4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->IE,4)))
#define TSB_PP_IE_PP5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->IE,5)))
#define TSB_PP_IE_PP6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->IE,6)))
#define TSB_PP_IE_PP7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PP->IE,7)))


/* Port R */
#define TSB_PR_DATA_PR0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->DATA,0)))
#define TSB_PR_DATA_PR1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->DATA,1)))
#define TSB_PR_DATA_PR2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->DATA,2)))
#define TSB_PR_DATA_PR3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->DATA,3)))
#define TSB_PR_DATA_PR4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->DATA,4)))
#define TSB_PR_DATA_PR5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->DATA,5)))
#define TSB_PR_DATA_PR6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->DATA,6)))
#define TSB_PR_DATA_PR7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->DATA,7)))
#define TSB_PR_CR_PR0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->CR,0)))
#define TSB_PR_CR_PR1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->CR,1)))
#define TSB_PR_CR_PR2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->CR,2)))
#define TSB_PR_CR_PR3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->CR,3)))
#define TSB_PR_CR_PR4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->CR,4)))
#define TSB_PR_CR_PR5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->CR,5)))
#define TSB_PR_CR_PR6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->CR,6)))
#define TSB_PR_CR_PR7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->CR,7)))
#define TSB_PR_FR1_PR3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->FR1,3)))
#define TSB_PR_FR1_PR4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->FR1,4)))
#define TSB_PR_FR4_PR0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->FR4,0)))
#define TSB_PR_FR4_PR1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->FR4,1)))
#define TSB_PR_FR4_PR2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->FR4,2)))
#define TSB_PR_FR4_PR5F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->FR4,5)))
#define TSB_PR_FR4_PR6F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->FR4,6)))
#define TSB_PR_FR4_PR7F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->FR4,7)))
#define TSB_PR_FR5_PR3F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->FR5,3)))
#define TSB_PR_FR5_PR4F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->FR5,4)))
#define TSB_PR_FR5_PR5F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->FR5,5)))
#define TSB_PR_OD_PR0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->OD,0)))
#define TSB_PR_OD_PR1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->OD,1)))
#define TSB_PR_OD_PR2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->OD,2)))
#define TSB_PR_OD_PR3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->OD,3)))
#define TSB_PR_OD_PR4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->OD,4)))
#define TSB_PR_OD_PR5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->OD,5)))
#define TSB_PR_OD_PR6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->OD,6)))
#define TSB_PR_OD_PR7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->OD,7)))
#define TSB_PR_PUP_PR0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PUP,0)))
#define TSB_PR_PUP_PR1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PUP,1)))
#define TSB_PR_PUP_PR2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PUP,2)))
#define TSB_PR_PUP_PR3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PUP,3)))
#define TSB_PR_PUP_PR4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PUP,4)))
#define TSB_PR_PUP_PR5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PUP,5)))
#define TSB_PR_PUP_PR6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PUP,6)))
#define TSB_PR_PUP_PR7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PUP,7)))
#define TSB_PR_PDN_PR0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PDN,0)))
#define TSB_PR_PDN_PR1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PDN,1)))
#define TSB_PR_PDN_PR2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PDN,2)))
#define TSB_PR_PDN_PR3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PDN,3)))
#define TSB_PR_PDN_PR4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PDN,4)))
#define TSB_PR_PDN_PR5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PDN,5)))
#define TSB_PR_PDN_PR6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PDN,6)))
#define TSB_PR_PDN_PR7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->PDN,7)))
#define TSB_PR_IE_PR0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->IE,0)))
#define TSB_PR_IE_PR1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->IE,1)))
#define TSB_PR_IE_PR2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->IE,2)))
#define TSB_PR_IE_PR3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->IE,3)))
#define TSB_PR_IE_PR4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->IE,4)))
#define TSB_PR_IE_PR5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->IE,5)))
#define TSB_PR_IE_PR6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->IE,6)))
#define TSB_PR_IE_PR7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PR->IE,7)))


/* Port T */
#define TSB_PT_DATA_PT0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->DATA,0)))
#define TSB_PT_DATA_PT1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->DATA,1)))
#define TSB_PT_DATA_PT2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->DATA,2)))
#define TSB_PT_DATA_PT3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->DATA,3)))
#define TSB_PT_DATA_PT4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->DATA,4)))
#define TSB_PT_DATA_PT5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->DATA,5)))
#define TSB_PT_DATA_PT6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->DATA,6)))
#define TSB_PT_DATA_PT7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->DATA,7)))
#define TSB_PT_CR_PT0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->CR,0)))
#define TSB_PT_CR_PT1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->CR,1)))
#define TSB_PT_CR_PT2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->CR,2)))
#define TSB_PT_CR_PT3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->CR,3)))
#define TSB_PT_CR_PT4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->CR,4)))
#define TSB_PT_CR_PT5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->CR,5)))
#define TSB_PT_CR_PT6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->CR,6)))
#define TSB_PT_CR_PT7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->CR,7)))
#define TSB_PT_FR1_PT6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->FR1,6)))
#define TSB_PT_FR1_PT7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->FR1,7)))
#define TSB_PT_FR2_PT0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->FR2,0)))
#define TSB_PT_FR2_PT1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->FR2,1)))
#define TSB_PT_FR4_PT0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->FR4,0)))
#define TSB_PT_FR4_PT1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->FR4,1)))
#define TSB_PT_FR4_PT2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->FR4,2)))
#define TSB_PT_FR4_PT3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->FR4,3)))
#define TSB_PT_FR4_PT4F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->FR4,4)))
#define TSB_PT_FR4_PT5F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->FR4,5)))
#define TSB_PT_FR5_PT0F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->FR5,0)))
#define TSB_PT_FR5_PT1F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->FR5,1)))
#define TSB_PT_FR5_PT2F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->FR5,2)))
#define TSB_PT_OD_PT0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->OD,0)))
#define TSB_PT_OD_PT1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->OD,1)))
#define TSB_PT_OD_PT2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->OD,2)))
#define TSB_PT_OD_PT3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->OD,3)))
#define TSB_PT_OD_PT4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->OD,4)))
#define TSB_PT_OD_PT5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->OD,5)))
#define TSB_PT_OD_PT6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->OD,6)))
#define TSB_PT_OD_PT7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->OD,7)))
#define TSB_PT_PUP_PT0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PUP,0)))
#define TSB_PT_PUP_PT1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PUP,1)))
#define TSB_PT_PUP_PT2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PUP,2)))
#define TSB_PT_PUP_PT3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PUP,3)))
#define TSB_PT_PUP_PT4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PUP,4)))
#define TSB_PT_PUP_PT5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PUP,5)))
#define TSB_PT_PUP_PT6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PUP,6)))
#define TSB_PT_PUP_PT7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PUP,7)))
#define TSB_PT_PDN_PT0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PDN,0)))
#define TSB_PT_PDN_PT1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PDN,1)))
#define TSB_PT_PDN_PT2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PDN,2)))
#define TSB_PT_PDN_PT3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PDN,3)))
#define TSB_PT_PDN_PT4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PDN,4)))
#define TSB_PT_PDN_PT5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PDN,5)))
#define TSB_PT_PDN_PT6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PDN,6)))
#define TSB_PT_PDN_PT7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->PDN,7)))
#define TSB_PT_IE_PT0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->IE,0)))
#define TSB_PT_IE_PT1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->IE,1)))
#define TSB_PT_IE_PT2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->IE,2)))
#define TSB_PT_IE_PT3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->IE,3)))
#define TSB_PT_IE_PT4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->IE,4)))
#define TSB_PT_IE_PT5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->IE,5)))
#define TSB_PT_IE_PT6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->IE,6)))
#define TSB_PT_IE_PT7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PT->IE,7)))


/* Port U */
#define TSB_PU_DATA_PU0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->DATA,0)))
#define TSB_PU_DATA_PU1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->DATA,1)))
#define TSB_PU_DATA_PU2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->DATA,2)))
#define TSB_PU_DATA_PU3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->DATA,3)))
#define TSB_PU_DATA_PU4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->DATA,4)))
#define TSB_PU_DATA_PU5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->DATA,5)))
#define TSB_PU_DATA_PU6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->DATA,6)))
#define TSB_PU_DATA_PU7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->DATA,7)))
#define TSB_PU_CR_PU0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->CR,0)))
#define TSB_PU_CR_PU1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->CR,1)))
#define TSB_PU_CR_PU2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->CR,2)))
#define TSB_PU_CR_PU3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->CR,3)))
#define TSB_PU_CR_PU4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->CR,4)))
#define TSB_PU_CR_PU5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->CR,5)))
#define TSB_PU_CR_PU6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->CR,6)))
#define TSB_PU_CR_PU7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->CR,7)))
#define TSB_PU_FR1_PU0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR1,0)))
#define TSB_PU_FR1_PU1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR1,1)))
#define TSB_PU_FR1_PU3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR1,3)))
#define TSB_PU_FR1_PU4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR1,4)))
#define TSB_PU_FR1_PU5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR1,5)))
#define TSB_PU_FR1_PU6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR1,6)))
#define TSB_PU_FR2_PU0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR2,0)))
#define TSB_PU_FR2_PU1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR2,1)))
#define TSB_PU_FR2_PU5F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR2,5)))
#define TSB_PU_FR2_PU6F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR2,6)))
#define TSB_PU_FR3_PU0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR3,0)))
#define TSB_PU_FR3_PU1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR3,1)))
#define TSB_PU_FR4_PU0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR4,0)))
#define TSB_PU_FR4_PU1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR4,1)))
#define TSB_PU_FR4_PU2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR4,2)))
#define TSB_PU_FR4_PU3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR4,3)))
#define TSB_PU_FR4_PU4F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR4,4)))
#define TSB_PU_FR4_PU5F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR4,5)))
#define TSB_PU_FR5_PU1F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR5,1)))
#define TSB_PU_FR5_PU2F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR5,2)))
#define TSB_PU_FR5_PU3F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR5,3)))
#define TSB_PU_FR5_PU4F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR5,4)))
#define TSB_PU_FR5_PU5F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR5,5)))
#define TSB_PU_FR5_PU6F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR5,6)))
#define TSB_PU_FR6_PU0F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR6,0)))
#define TSB_PU_FR6_PU1F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR6,1)))
#define TSB_PU_FR6_PU2F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR6,2)))
#define TSB_PU_FR6_PU3F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR6,3)))
#define TSB_PU_FR6_PU4F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR6,4)))
#define TSB_PU_FR6_PU5F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR6,5)))
#define TSB_PU_FR6_PU6F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR6,6)))
#define TSB_PU_FR6_PU7F6                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR6,7)))
#define TSB_PU_FR7_PU7F7                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->FR7,7)))
#define TSB_PU_OD_PU0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->OD,0)))
#define TSB_PU_OD_PU1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->OD,1)))
#define TSB_PU_OD_PU2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->OD,2)))
#define TSB_PU_OD_PU3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->OD,3)))
#define TSB_PU_OD_PU4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->OD,4)))
#define TSB_PU_OD_PU5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->OD,5)))
#define TSB_PU_OD_PU6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->OD,6)))
#define TSB_PU_OD_PU7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->OD,7)))
#define TSB_PU_PUP_PU0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PUP,0)))
#define TSB_PU_PUP_PU1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PUP,1)))
#define TSB_PU_PUP_PU2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PUP,2)))
#define TSB_PU_PUP_PU3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PUP,3)))
#define TSB_PU_PUP_PU4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PUP,4)))
#define TSB_PU_PUP_PU5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PUP,5)))
#define TSB_PU_PUP_PU6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PUP,6)))
#define TSB_PU_PUP_PU7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PUP,7)))
#define TSB_PU_PDN_PU0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PDN,0)))
#define TSB_PU_PDN_PU1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PDN,1)))
#define TSB_PU_PDN_PU2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PDN,2)))
#define TSB_PU_PDN_PU3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PDN,3)))
#define TSB_PU_PDN_PU4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PDN,4)))
#define TSB_PU_PDN_PU5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PDN,5)))
#define TSB_PU_PDN_PU6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PDN,6)))
#define TSB_PU_PDN_PU7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->PDN,7)))
#define TSB_PU_IE_PU0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->IE,0)))
#define TSB_PU_IE_PU1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->IE,1)))
#define TSB_PU_IE_PU2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->IE,2)))
#define TSB_PU_IE_PU3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->IE,3)))
#define TSB_PU_IE_PU4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->IE,4)))
#define TSB_PU_IE_PU5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->IE,5)))
#define TSB_PU_IE_PU6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->IE,6)))
#define TSB_PU_IE_PU7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PU->IE,7)))


/* Port V */
#define TSB_PV_DATA_PV0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->DATA,0)))
#define TSB_PV_DATA_PV1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->DATA,1)))
#define TSB_PV_DATA_PV2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->DATA,2)))
#define TSB_PV_DATA_PV3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->DATA,3)))
#define TSB_PV_CR_PV0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->CR,0)))
#define TSB_PV_CR_PV1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->CR,1)))
#define TSB_PV_CR_PV2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->CR,2)))
#define TSB_PV_CR_PV3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->CR,3)))
#define TSB_PV_FR1_PV1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->FR1,1)))
#define TSB_PV_FR1_PV2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->FR1,2)))
#define TSB_PV_FR1_PV3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->FR1,3)))
#define TSB_PV_FR2_PV0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->FR2,0)))
#define TSB_PV_FR2_PV1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->FR2,1)))
#define TSB_PV_FR2_PV2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->FR2,2)))
#define TSB_PV_FR2_PV3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->FR2,3)))
#define TSB_PV_FR4_PV0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->FR4,0)))
#define TSB_PV_OD_PV0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->OD,0)))
#define TSB_PV_OD_PV1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->OD,1)))
#define TSB_PV_OD_PV2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->OD,2)))
#define TSB_PV_OD_PV3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->OD,3)))
#define TSB_PV_PUP_PV0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->PUP,0)))
#define TSB_PV_PUP_PV1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->PUP,1)))
#define TSB_PV_PUP_PV2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->PUP,2)))
#define TSB_PV_PUP_PV3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->PUP,3)))
#define TSB_PV_PDN_PV0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->PDN,0)))
#define TSB_PV_PDN_PV1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->PDN,1)))
#define TSB_PV_PDN_PV2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->PDN,2)))
#define TSB_PV_PDN_PV3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->PDN,3)))
#define TSB_PV_IE_PV0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->IE,0)))
#define TSB_PV_IE_PV1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->IE,1)))
#define TSB_PV_IE_PV2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->IE,2)))
#define TSB_PV_IE_PV3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PV->IE,3)))


/* Port W */
#define TSB_PW_DATA_PW0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->DATA,0)))
#define TSB_PW_DATA_PW1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->DATA,1)))
#define TSB_PW_DATA_PW2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->DATA,2)))
#define TSB_PW_DATA_PW3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->DATA,3)))
#define TSB_PW_DATA_PW4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->DATA,4)))
#define TSB_PW_DATA_PW5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->DATA,5)))
#define TSB_PW_DATA_PW6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->DATA,6)))
#define TSB_PW_DATA_PW7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->DATA,7)))
#define TSB_PW_CR_PW0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->CR,0)))
#define TSB_PW_CR_PW1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->CR,1)))
#define TSB_PW_CR_PW2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->CR,2)))
#define TSB_PW_CR_PW3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->CR,3)))
#define TSB_PW_CR_PW4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->CR,4)))
#define TSB_PW_CR_PW5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->CR,5)))
#define TSB_PW_CR_PW6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->CR,6)))
#define TSB_PW_CR_PW7C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->CR,7)))
#define TSB_PW_FR1_PW6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->FR1,6)))
#define TSB_PW_FR1_PW7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->FR1,7)))
#define TSB_PW_FR4_PW0F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->FR4,0)))
#define TSB_PW_FR4_PW1F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->FR4,1)))
#define TSB_PW_FR4_PW2F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->FR4,2)))
#define TSB_PW_FR4_PW3F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->FR4,3)))
#define TSB_PW_FR4_PW4F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->FR4,4)))
#define TSB_PW_FR4_PW5F4                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->FR4,5)))
#define TSB_PW_FR5_PW0F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->FR5,0)))
#define TSB_PW_FR5_PW1F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->FR5,1)))
#define TSB_PW_FR5_PW2F5                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->FR5,2)))
#define TSB_PW_OD_PW0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->OD,0)))
#define TSB_PW_OD_PW1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->OD,1)))
#define TSB_PW_OD_PW2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->OD,2)))
#define TSB_PW_OD_PW3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->OD,3)))
#define TSB_PW_OD_PW4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->OD,4)))
#define TSB_PW_OD_PW5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->OD,5)))
#define TSB_PW_OD_PW6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->OD,6)))
#define TSB_PW_OD_PW7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->OD,7)))
#define TSB_PW_PUP_PW0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PUP,0)))
#define TSB_PW_PUP_PW1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PUP,1)))
#define TSB_PW_PUP_PW2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PUP,2)))
#define TSB_PW_PUP_PW3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PUP,3)))
#define TSB_PW_PUP_PW4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PUP,4)))
#define TSB_PW_PUP_PW5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PUP,5)))
#define TSB_PW_PUP_PW6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PUP,6)))
#define TSB_PW_PUP_PW7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PUP,7)))
#define TSB_PW_PDN_PW0DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PDN,0)))
#define TSB_PW_PDN_PW1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PDN,1)))
#define TSB_PW_PDN_PW2DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PDN,2)))
#define TSB_PW_PDN_PW3DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PDN,3)))
#define TSB_PW_PDN_PW4DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PDN,4)))
#define TSB_PW_PDN_PW5DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PDN,5)))
#define TSB_PW_PDN_PW6DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PDN,6)))
#define TSB_PW_PDN_PW7DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->PDN,7)))
#define TSB_PW_IE_PW0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->IE,0)))
#define TSB_PW_IE_PW1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->IE,1)))
#define TSB_PW_IE_PW2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->IE,2)))
#define TSB_PW_IE_PW3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->IE,3)))
#define TSB_PW_IE_PW4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->IE,4)))
#define TSB_PW_IE_PW5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->IE,5)))
#define TSB_PW_IE_PW6IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->IE,6)))
#define TSB_PW_IE_PW7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PW->IE,7)))


/* Trimming Circuit (TRM) */
#define TSB_TRM_OSCEN_TRIMEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TRM->OSCEN,0)))


/* Oscillation Frequency Detector (OFD) */
#define TSB_OFD_RST_OFDRSTEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_OFD->RST,0)))
#define TSB_OFD_STAT_FRQERR                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_OFD->STAT,0)))
#define TSB_OFD_STAT_OFDBUSY                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_OFD->STAT,1)))
#define TSB_OFD_MON_OFDMON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_OFD->MON,0)))


/* Advanced Progammable Motor Control Circuit (A-PMD) */
#define TSB_PMD0_MDEN_PWMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDEN,0)))
#define TSB_PMD0_MDCR_PINT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDCR,3)))
#define TSB_PMD0_MDCR_DTYMD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDCR,4)))
#define TSB_PMD0_MDCR_SYNTMD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDCR,5)))
#define TSB_PMD0_MDCR_DCMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDCR,6)))
#define TSB_PMD0_MDCR_DTCREN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->MDCR,7)))
#define TSB_PMD0_CARSTA_PWMUST                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD0->CARSTA,0)))
#define TSB_PMD0_CARSTA_PWMVST                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD0->CARSTA,1)))
#define TSB_PMD0_CARSTA_PWMWST                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD0->CARSTA,2)))
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
#define TSB_PMD0_EMGCR_EMGISEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->EMGCR,2)))
#define TSB_PMD0_EMGCR_INHEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->EMGCR,5)))
#define TSB_PMD0_EMGCR_EMGIPOL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->EMGCR,7)))
#define TSB_PMD0_EMGCR_CPAIEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->EMGCR,13)))
#define TSB_PMD0_EMGCR_CPBIEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->EMGCR,14)))
#define TSB_PMD0_EMGCR_CPCIEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->EMGCR,15)))
#define TSB_PMD0_EMGSTA_EMGST                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD0->EMGSTA,0)))
#define TSB_PMD0_EMGSTA_EMGI                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD0->EMGSTA,1)))
#define TSB_PMD0_OVVCR_OVVEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVCR,0)))
#define TSB_PMD0_OVVCR_OVVRS                      (*((__O  uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVCR,1)))
#define TSB_PMD0_OVVCR_OVVISEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVCR,2)))
#define TSB_PMD0_OVVCR_ADIN0EN                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVCR,5)))
#define TSB_PMD0_OVVCR_ADIN1EN                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVCR,6)))
#define TSB_PMD0_OVVCR_OVVIPOL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVCR,7)))
#define TSB_PMD0_OVVCR_OVVRSMD                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVCR,15)))
#define TSB_PMD0_OVVSTA_OVVST                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVSTA,0)))
#define TSB_PMD0_OVVSTA_OVVI                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD0->OVVSTA,1)))
#define TSB_PMD0_TRGCR_TRG0BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->TRGCR,3)))
#define TSB_PMD0_TRGCR_TRG1BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->TRGCR,7)))
#define TSB_PMD0_TRGCR_TRG2BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->TRGCR,11)))
#define TSB_PMD0_TRGCR_TRG3BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->TRGCR,15)))
#define TSB_PMD0_TRGCR_CARSEL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->TRGCR,16)))
#define TSB_PMD0_TRGMD_EMGTGE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->TRGMD,0)))
#define TSB_PMD0_TRGMD_TRGOUT                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->TRGMD,1)))
#define TSB_PMD0_SYNCCR_PWMSMD                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->SYNCCR,0)))
#define TSB_PMD0_DBGOUTCR_DBGEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,0)))
#define TSB_PMD0_DBGOUTCR_IADAEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,3)))
#define TSB_PMD0_DBGOUTCR_IADBEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,4)))
#define TSB_PMD0_DBGOUTCR_IADCEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,5)))
#define TSB_PMD0_DBGOUTCR_IADDEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,6)))
#define TSB_PMD0_DBGOUTCR_IADEEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,7)))
#define TSB_PMD0_DBGOUTCR_IPMDEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,8)))
#define TSB_PMD0_DBGOUTCR_IEMGEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,9)))
#define TSB_PMD0_DBGOUTCR_IOVVEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,10)))
#define TSB_PMD0_DBGOUTCR_IVEEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,11)))
#define TSB_PMD0_DBGOUTCR_IENCEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,12)))
#define TSB_PMD0_DBGOUTCR_TRG0EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,16)))
#define TSB_PMD0_DBGOUTCR_TRG1EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,17)))
#define TSB_PMD0_DBGOUTCR_TRG2EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,18)))
#define TSB_PMD0_DBGOUTCR_TRG3EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,19)))
#define TSB_PMD0_DBGOUTCR_TRG4EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,20)))
#define TSB_PMD0_DBGOUTCR_TRG5EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,21)))
#define TSB_PMD0_DBGOUTCR_INIFF                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD0->DBGOUTCR,31)))

#define TSB_PMD1_MDEN_PWMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MDEN,0)))
#define TSB_PMD1_MDCR_PINT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MDCR,3)))
#define TSB_PMD1_MDCR_DTYMD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MDCR,4)))
#define TSB_PMD1_MDCR_SYNTMD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MDCR,5)))
#define TSB_PMD1_MDCR_DCMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MDCR,6)))
#define TSB_PMD1_MDCR_DTCREN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MDCR,7)))
#define TSB_PMD1_CARSTA_PWMUST                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD1->CARSTA,0)))
#define TSB_PMD1_CARSTA_PWMVST                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD1->CARSTA,1)))
#define TSB_PMD1_CARSTA_PWMWST                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD1->CARSTA,2)))
#define TSB_PMD1_MODESEL_MDSEL0                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MODESEL,0)))
#define TSB_PMD1_MODESEL_MDSEL1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MODESEL,1)))
#define TSB_PMD1_MODESEL_MDSEL2                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MODESEL,2)))
#define TSB_PMD1_MODESEL_MDSEL3                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MODESEL,3)))
#define TSB_PMD1_MODESEL_DCMPEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MODESEL,7)))
#define TSB_PMD1_MDOUT_UPWM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MDOUT,8)))
#define TSB_PMD1_MDOUT_VPWM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MDOUT,9)))
#define TSB_PMD1_MDOUT_WPWM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MDOUT,10)))
#define TSB_PMD1_MDPOT_POLL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MDPOT,2)))
#define TSB_PMD1_MDPOT_POLH                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->MDPOT,3)))
#define TSB_PMD1_EMGCR_EMGEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->EMGCR,0)))
#define TSB_PMD1_EMGCR_EMGRS                      (*((__O  uint32_t *)BITBAND_PERI(&TSB_PMD1->EMGCR,1)))
#define TSB_PMD1_EMGCR_EMGISEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->EMGCR,2)))
#define TSB_PMD1_EMGCR_INHEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->EMGCR,5)))
#define TSB_PMD1_EMGCR_EMGIPOL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->EMGCR,7)))
#define TSB_PMD1_EMGCR_CPAIEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->EMGCR,13)))
#define TSB_PMD1_EMGCR_CPBIEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->EMGCR,14)))
#define TSB_PMD1_EMGCR_CPCIEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->EMGCR,15)))
#define TSB_PMD1_EMGSTA_EMGST                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD1->EMGSTA,0)))
#define TSB_PMD1_EMGSTA_EMGI                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD1->EMGSTA,1)))
#define TSB_PMD1_OVVCR_OVVEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->OVVCR,0)))
#define TSB_PMD1_OVVCR_OVVRS                      (*((__O  uint32_t *)BITBAND_PERI(&TSB_PMD1->OVVCR,1)))
#define TSB_PMD1_OVVCR_OVVISEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->OVVCR,2)))
#define TSB_PMD1_OVVCR_ADIN0EN                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->OVVCR,5)))
#define TSB_PMD1_OVVCR_ADIN1EN                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->OVVCR,6)))
#define TSB_PMD1_OVVCR_OVVIPOL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->OVVCR,7)))
#define TSB_PMD1_OVVCR_OVVRSMD                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->OVVCR,15)))
#define TSB_PMD1_OVVSTA_OVVST                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD1->OVVSTA,0)))
#define TSB_PMD1_OVVSTA_OVVI                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD1->OVVSTA,1)))
#define TSB_PMD1_TRGCR_TRG0BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->TRGCR,3)))
#define TSB_PMD1_TRGCR_TRG1BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->TRGCR,7)))
#define TSB_PMD1_TRGCR_TRG2BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->TRGCR,11)))
#define TSB_PMD1_TRGCR_TRG3BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->TRGCR,15)))
#define TSB_PMD1_TRGCR_CARSEL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->TRGCR,16)))
#define TSB_PMD1_TRGMD_EMGTGE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->TRGMD,0)))
#define TSB_PMD1_TRGMD_TRGOUT                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->TRGMD,1)))
#define TSB_PMD1_SYNCCR_PWMSMD                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->SYNCCR,0)))
#define TSB_PMD1_DBGOUTCR_DBGEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,0)))
#define TSB_PMD1_DBGOUTCR_IADAEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,3)))
#define TSB_PMD1_DBGOUTCR_IADBEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,4)))
#define TSB_PMD1_DBGOUTCR_IADCEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,5)))
#define TSB_PMD1_DBGOUTCR_IADDEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,6)))
#define TSB_PMD1_DBGOUTCR_IADEEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,7)))
#define TSB_PMD1_DBGOUTCR_IPMDEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,8)))
#define TSB_PMD1_DBGOUTCR_IEMGEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,9)))
#define TSB_PMD1_DBGOUTCR_IOVVEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,10)))
#define TSB_PMD1_DBGOUTCR_IVEEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,11)))
#define TSB_PMD1_DBGOUTCR_IENCEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,12)))
#define TSB_PMD1_DBGOUTCR_TRG0EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,16)))
#define TSB_PMD1_DBGOUTCR_TRG1EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,17)))
#define TSB_PMD1_DBGOUTCR_TRG2EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,18)))
#define TSB_PMD1_DBGOUTCR_TRG3EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,19)))
#define TSB_PMD1_DBGOUTCR_TRG4EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,20)))
#define TSB_PMD1_DBGOUTCR_TRG5EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,21)))
#define TSB_PMD1_DBGOUTCR_INIFF                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD1->DBGOUTCR,31)))

#define TSB_PMD2_MDEN_PWMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MDEN,0)))
#define TSB_PMD2_MDCR_PINT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MDCR,3)))
#define TSB_PMD2_MDCR_DTYMD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MDCR,4)))
#define TSB_PMD2_MDCR_SYNTMD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MDCR,5)))
#define TSB_PMD2_MDCR_DCMEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MDCR,6)))
#define TSB_PMD2_MDCR_DTCREN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MDCR,7)))
#define TSB_PMD2_CARSTA_PWMUST                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD2->CARSTA,0)))
#define TSB_PMD2_CARSTA_PWMVST                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD2->CARSTA,1)))
#define TSB_PMD2_CARSTA_PWMWST                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD2->CARSTA,2)))
#define TSB_PMD2_MODESEL_MDSEL0                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MODESEL,0)))
#define TSB_PMD2_MODESEL_MDSEL1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MODESEL,1)))
#define TSB_PMD2_MODESEL_MDSEL2                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MODESEL,2)))
#define TSB_PMD2_MODESEL_MDSEL3                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MODESEL,3)))
#define TSB_PMD2_MODESEL_DCMPEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MODESEL,7)))
#define TSB_PMD2_MDOUT_UPWM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MDOUT,8)))
#define TSB_PMD2_MDOUT_VPWM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MDOUT,9)))
#define TSB_PMD2_MDOUT_WPWM                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MDOUT,10)))
#define TSB_PMD2_MDPOT_POLL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MDPOT,2)))
#define TSB_PMD2_MDPOT_POLH                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->MDPOT,3)))
#define TSB_PMD2_EMGCR_EMGEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->EMGCR,0)))
#define TSB_PMD2_EMGCR_EMGRS                      (*((__O  uint32_t *)BITBAND_PERI(&TSB_PMD2->EMGCR,1)))
#define TSB_PMD2_EMGCR_EMGISEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->EMGCR,2)))
#define TSB_PMD2_EMGCR_INHEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->EMGCR,5)))
#define TSB_PMD2_EMGCR_EMGIPOL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->EMGCR,7)))
#define TSB_PMD2_EMGCR_CPAIEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->EMGCR,13)))
#define TSB_PMD2_EMGCR_CPBIEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->EMGCR,14)))
#define TSB_PMD2_EMGCR_CPCIEN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->EMGCR,15)))
#define TSB_PMD2_EMGSTA_EMGST                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD2->EMGSTA,0)))
#define TSB_PMD2_EMGSTA_EMGI                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD2->EMGSTA,1)))
#define TSB_PMD2_OVVCR_OVVEN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->OVVCR,0)))
#define TSB_PMD2_OVVCR_OVVRS                      (*((__O  uint32_t *)BITBAND_PERI(&TSB_PMD2->OVVCR,1)))
#define TSB_PMD2_OVVCR_OVVISEL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->OVVCR,2)))
#define TSB_PMD2_OVVCR_ADIN0EN                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->OVVCR,5)))
#define TSB_PMD2_OVVCR_ADIN1EN                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->OVVCR,6)))
#define TSB_PMD2_OVVCR_OVVIPOL                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->OVVCR,7)))
#define TSB_PMD2_OVVCR_OVVRSMD                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->OVVCR,15)))
#define TSB_PMD2_OVVSTA_OVVST                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD2->OVVSTA,0)))
#define TSB_PMD2_OVVSTA_OVVI                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_PMD2->OVVSTA,1)))
#define TSB_PMD2_TRGCR_TRG0BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->TRGCR,3)))
#define TSB_PMD2_TRGCR_TRG1BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->TRGCR,7)))
#define TSB_PMD2_TRGCR_TRG2BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->TRGCR,11)))
#define TSB_PMD2_TRGCR_TRG3BE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->TRGCR,15)))
#define TSB_PMD2_TRGCR_CARSEL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->TRGCR,16)))
#define TSB_PMD2_TRGMD_EMGTGE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->TRGMD,0)))
#define TSB_PMD2_TRGMD_TRGOUT                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->TRGMD,1)))
#define TSB_PMD2_SYNCCR_PWMSMD                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->SYNCCR,0)))
#define TSB_PMD2_DBGOUTCR_DBGEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,0)))
#define TSB_PMD2_DBGOUTCR_IADAEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,3)))
#define TSB_PMD2_DBGOUTCR_IADBEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,4)))
#define TSB_PMD2_DBGOUTCR_IADCEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,5)))
#define TSB_PMD2_DBGOUTCR_IADDEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,6)))
#define TSB_PMD2_DBGOUTCR_IADEEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,7)))
#define TSB_PMD2_DBGOUTCR_IPMDEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,8)))
#define TSB_PMD2_DBGOUTCR_IEMGEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,9)))
#define TSB_PMD2_DBGOUTCR_IOVVEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,10)))
#define TSB_PMD2_DBGOUTCR_IVEEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,11)))
#define TSB_PMD2_DBGOUTCR_IENCEN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,12)))
#define TSB_PMD2_DBGOUTCR_TRG0EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,16)))
#define TSB_PMD2_DBGOUTCR_TRG1EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,17)))
#define TSB_PMD2_DBGOUTCR_TRG2EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,18)))
#define TSB_PMD2_DBGOUTCR_TRG3EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,19)))
#define TSB_PMD2_DBGOUTCR_TRG4EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,20)))
#define TSB_PMD2_DBGOUTCR_TRG5EN                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,21)))
#define TSB_PMD2_DBGOUTCR_INIFF                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_PMD2->DBGOUTCR,31)))


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

#define TSB_EN1_TNCR_ZEACT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->TNCR,5)))
#define TSB_EN1_TNCR_ENRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->TNCR,6)))
#define TSB_EN1_TNCR_ZEN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->TNCR,7)))
#define TSB_EN1_TNCR_ENCLR                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_EN1->TNCR,10)))
#define TSB_EN1_TNCR_SFTCAP                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_EN1->TNCR,11)))
#define TSB_EN1_TNCR_TRGCAPMD                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->TNCR,12)))
#define TSB_EN1_TNCR_P3EN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->TNCR,16)))
#define TSB_EN1_TNCR_SDTEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->TNCR,21)))
#define TSB_EN1_TNCR_MCMPMD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->TNCR,24)))
#define TSB_EN1_TNCR_TOVMD                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->TNCR,25)))
#define TSB_EN1_TNCR_CMPSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->TNCR,28)))
#define TSB_EN1_STS_INERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->STS,0)))
#define TSB_EN1_STS_PDERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->STS,1)))
#define TSB_EN1_STS_SKPDT                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->STS,2)))
#define TSB_EN1_STS_ZDET                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->STS,12)))
#define TSB_EN1_STS_UD                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->STS,13)))
#define TSB_EN1_STS_REVERR                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->STS,14)))
#define TSB_EN1_INPCR_SYNCSPLEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->INPCR,0)))
#define TSB_EN1_INPCR_SYNCSPLMD                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->INPCR,1)))
#define TSB_EN1_INPCR_SYNCNCZEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->INPCR,2)))
#define TSB_EN1_INPCR_PDSTT                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_EN1->INPCR,6)))
#define TSB_EN1_INPCR_PDSTP                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_EN1->INPCR,7)))
#define TSB_EN1_INPMON_SPLMONA                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->INPMON,0)))
#define TSB_EN1_INPMON_SPLMONB                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->INPMON,1)))
#define TSB_EN1_INPMON_SPLMONZ                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->INPMON,2)))
#define TSB_EN1_INPMON_DETMONA                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->INPMON,4)))
#define TSB_EN1_INPMON_DETMONB                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->INPMON,5)))
#define TSB_EN1_INPMON_DETMONZ                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->INPMON,6)))
#define TSB_EN1_INTCR_TPLSIE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->INTCR,0)))
#define TSB_EN1_INTCR_CAPIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->INTCR,1)))
#define TSB_EN1_INTCR_ERRIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->INTCR,2)))
#define TSB_EN1_INTCR_CMPIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->INTCR,3)))
#define TSB_EN1_INTCR_RLDIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->INTCR,4)))
#define TSB_EN1_INTCR_MCMPIE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN1->INTCR,5)))
#define TSB_EN1_INTF_TPLSF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->INTF,0)))
#define TSB_EN1_INTF_CAPF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->INTF,1)))
#define TSB_EN1_INTF_ERRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->INTF,2)))
#define TSB_EN1_INTF_INTCPF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->INTF,3)))
#define TSB_EN1_INTF_RLDCPF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->INTF,4)))
#define TSB_EN1_INTF_MCMPF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN1->INTF,5)))

#define TSB_EN2_TNCR_ZEACT                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->TNCR,5)))
#define TSB_EN2_TNCR_ENRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->TNCR,6)))
#define TSB_EN2_TNCR_ZEN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->TNCR,7)))
#define TSB_EN2_TNCR_ENCLR                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_EN2->TNCR,10)))
#define TSB_EN2_TNCR_SFTCAP                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_EN2->TNCR,11)))
#define TSB_EN2_TNCR_TRGCAPMD                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->TNCR,12)))
#define TSB_EN2_TNCR_P3EN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->TNCR,16)))
#define TSB_EN2_TNCR_SDTEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->TNCR,21)))
#define TSB_EN2_TNCR_MCMPMD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->TNCR,24)))
#define TSB_EN2_TNCR_TOVMD                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->TNCR,25)))
#define TSB_EN2_TNCR_CMPSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->TNCR,28)))
#define TSB_EN2_STS_INERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->STS,0)))
#define TSB_EN2_STS_PDERR                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->STS,1)))
#define TSB_EN2_STS_SKPDT                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->STS,2)))
#define TSB_EN2_STS_ZDET                          (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->STS,12)))
#define TSB_EN2_STS_UD                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->STS,13)))
#define TSB_EN2_STS_REVERR                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->STS,14)))
#define TSB_EN2_INPCR_SYNCSPLEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->INPCR,0)))
#define TSB_EN2_INPCR_SYNCSPLMD                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->INPCR,1)))
#define TSB_EN2_INPCR_SYNCNCZEN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->INPCR,2)))
#define TSB_EN2_INPCR_PDSTT                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_EN2->INPCR,6)))
#define TSB_EN2_INPCR_PDSTP                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_EN2->INPCR,7)))
#define TSB_EN2_INPMON_SPLMONA                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->INPMON,0)))
#define TSB_EN2_INPMON_SPLMONB                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->INPMON,1)))
#define TSB_EN2_INPMON_SPLMONZ                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->INPMON,2)))
#define TSB_EN2_INPMON_DETMONA                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->INPMON,4)))
#define TSB_EN2_INPMON_DETMONB                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->INPMON,5)))
#define TSB_EN2_INPMON_DETMONZ                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->INPMON,6)))
#define TSB_EN2_INTCR_TPLSIE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->INTCR,0)))
#define TSB_EN2_INTCR_CAPIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->INTCR,1)))
#define TSB_EN2_INTCR_ERRIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->INTCR,2)))
#define TSB_EN2_INTCR_CMPIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->INTCR,3)))
#define TSB_EN2_INTCR_RLDIE                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->INTCR,4)))
#define TSB_EN2_INTCR_MCMPIE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_EN2->INTCR,5)))
#define TSB_EN2_INTF_TPLSF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->INTF,0)))
#define TSB_EN2_INTF_CAPF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->INTF,1)))
#define TSB_EN2_INTF_ERRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->INTF,2)))
#define TSB_EN2_INTF_INTCPF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->INTF,3)))
#define TSB_EN2_INTF_RLDCPF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->INTF,4)))
#define TSB_EN2_INTF_MCMPF                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_EN2->INTF,5)))


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
#define TSB_VE0_MCTLF_SFT2ST                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MCTLF,14)))
#define TSB_VE0_MCTLF_SFT2STM                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->MCTLF,15)))
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
#define TSB_VE0_FMODE_IDQSEL                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,4)))
#define TSB_VE0_FMODE_IAPLMD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,5)))
#define TSB_VE0_FMODE_IBPLMD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,6)))
#define TSB_VE0_FMODE_ICPLMD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,7)))
#define TSB_VE0_FMODE_CRCEN                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,8)))
#define TSB_VE0_FMODE_MREGDIS                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,9)))
#define TSB_VE0_FMODE_PHCVDIS                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,12)))
#define TSB_VE0_FMODE_CCVMD                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->FMODE,13)))
#define TSB_VE0_OUTCR_UPWM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->OUTCR,6)))
#define TSB_VE0_OUTCR_VPWM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->OUTCR,7)))
#define TSB_VE0_OUTCR_WPWM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VE0->OUTCR,8)))

/** @} */ /* End of group Device_Peripheral_registers */

#ifdef __cplusplus
}
#endif

#endif  /* __TMPM4KQ_H__ */

/** @} */ /* End of group TMPM4KQ */
/** @} */ /* End of group TOSHIBA_TXZ_MICROCONTROLLER */
