/**
 *******************************************************************************
 * @file    TMPM471F10.h
 * @brief   CMSIS Cortex-M4 Core Peripheral Access Layer Header File for the
 *          TOSHIBA 'TMPM471F10' Device Series
 * @version V1.0.0.0
 * 
 * DO NOT USE THIS SOFTWARE WITHOUT THE SOFTWARE LICENSE AGREEMENT.
 * 
  * Copyright(C) Toshiba Electronic Device Solutions Corporation 2024
 *******************************************************************************
 */

/** @addtogroup TOSHIBA_TXZ_MICROCONTROLLER
  * @{
  */
  
/** @addtogroup TMPM471F10
  * @{
  */

#ifndef __TMPM471F10_H__
#define __TMPM471F10_H__

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

/******  TMPM471F10 Specific Interrupt Numbers *******************************************************************/
  INT0_IRQn                     = 0,         /*!< External interrupt 0                                        */
  INT1_IRQn                     = 1,         /*!< External interrupt 1                                        */
  INT2_IRQn                     = 2,         /*!< External interrupt 2                                        */
  INT3_IRQn                     = 3,         /*!< External interrupt 3                                        */
  INT4_IRQn                     = 4,         /*!< External interrupt 4                                        */
  INT5_IRQn                     = 5,         /*!< External interrupt 5                                        */
  INT6_IRQn                     = 6,         /*!< External interrupt 6                                        */
  INT7_IRQn                     = 7,         /*!< External interrupt 7                                        */
  INT8_IRQn                     = 8,         /*!< External interrupt 8                                        */
  INT9_IRQn                     = 9,         /*!< External interrupt 9                                        */
  INTA_IRQn                     = 10,        /*!< External interrupt A                                        */
  INTB_IRQn                     = 11,        /*!< External interrupt B                                        */
  INTC_IRQn                     = 12,        /*!< External interrupt C                                        */
  INTD_IRQn                     = 13,        /*!< External interrupt D                                        */
  INTE_IRQn                     = 14,        /*!< External interrupt E                                        */
  INTF_IRQn                     = 15,        /*!< External interrupt F                                        */
  INTEMG0_IRQn                  = 16,        /*!< A-PMD ch0 EMG Interrupt                                     */
  INTEMG1_IRQn                  = 17,        /*!< A-PMD ch1 EMG Interrupt                                     */
  INTOVV0_IRQn                  = 18,        /*!< A-PMD ch0 OVV Interrupt                                     */
  INTOVV1_IRQn                  = 19,        /*!< A-PMD ch1 OVV Interrupt                                     */
  INTPWM0_IRQn                  = 20,        /*!< A-PMD ch0 PWM Interrupt                                     */
  INTPWM1_IRQn                  = 21,        /*!< A-PMD ch1 PWM Interrupt                                     */
  INTENC00_IRQn                 = 22,        /*!< A-ENC32 ch0 Encoder input interrupt 0                       */
  INTENC01_IRQn                 = 23,        /*!< A-ENC32 ch0 Encoder input interrupt 1                       */
  INTENC10_IRQn                 = 24,        /*!< A-ENC32 ch1 Encoder input interrupt 0                       */
  INTENC11_IRQn                 = 25,        /*!< A-ENC32 ch1 Encoder input interrupt 1                       */
  INTADAPDA_IRQn                = 26,        /*!< ADC unit A PMD trigger program conversion complete A        */
  INTADAPDB_IRQn                = 27,        /*!< ADC unit A PMD trigger program conversion complete B        */
  INTADACP0_IRQn                = 28,        /*!< ADC unit A Monitor function 0 interrupt                     */
  INTADACP1_IRQn                = 29,        /*!< ADC unit A Monitor function 1 interrupt                     */
  INTADATRG_IRQn                = 30,        /*!< ADC unit A general trigger program conversion complete      */
  INTADASGL_IRQn                = 31,        /*!< ADC unit A single program conversion completion             */
  INTADACNT_IRQn                = 32,        /*!< ADC unit A continuous program conversion complete           */
  INTADBPDA_IRQn                = 33,        /*!< ADC unit B PMD trigger program conversion complete A        */
  INTADBPDB_IRQn                = 34,        /*!< ADC unit B PMD trigger program conversion complete B        */
  INTADBCP0_IRQn                = 35,        /*!< ADC unit B Monitor function 0 interrupt                     */
  INTADBCP1_IRQn                = 36,        /*!< ADC unit B Monitor function 1 interrupt                     */
  INTADBTRG_IRQn                = 37,        /*!< ADC unit B general trigger program conversion complete      */
  INTADBSGL_IRQn                = 38,        /*!< ADC unit B single program conversion completion             */
  INTADBCNT_IRQn                = 39,        /*!< ADC unit B continuous program conversion complete           */
  INTSC0RX_IRQn                 = 40,        /*!< TSPI ch0 reception interrupt /UART ch0 reception interrupt  */
  INTSC0TX_IRQn                 = 41,        /*!< TSPI ch0 transmit interrupt /UART ch0 transmit interrupt    */
  INTSC0ERR_IRQn                = 42,        /*!< TSPI ch0 error interrupt /UART ch0 error interrupt          */
  INTSC1RX_IRQn                 = 43,        /*!< TSPI ch1 reception interrupt /UART ch1 reception interrupt  */
  INTSC1TX_IRQn                 = 44,        /*!< TSPI ch1 transmit interrupt /UART ch1 transmit interrupt    */
  INTSC1ERR_IRQn                = 45,        /*!< TSPI ch1 error interrupt /UART ch1 error interrupt          */
  INTSC2RX_IRQn                 = 46,        /*!< TSPI ch2 reception interrupt /UART ch2 reception interrupt  */
  INTSC2TX_IRQn                 = 47,        /*!< TSPI ch2 transmit interrupt /UART ch2 transmit interrupt    */
  INTSC2ERR_IRQn                = 48,        /*!< TSPI ch2 error interrupt /UART ch2 error interrupt          */
  INTSC3RX_IRQn                 = 49,        /*!< TSPI ch3 reception interrupt /UART ch3 reception interrupt  */
  INTSC3TX_IRQn                 = 50,        /*!< TSPI ch3 transmit interrupt /UART ch3 transmit interrupt    */
  INTSC3ERR_IRQn                = 51,        /*!< TSPI ch3 error interrupt /UART ch3 error interrupt          */
  INTUART4RX_IRQn               = 52,        /*!< UART ch4 reception interrupt                                */
  INTUART4TX_IRQn               = 53,        /*!< UART ch4 transmit interrupt                                 */
  INTUART4ERR_IRQn              = 54,        /*!< UART ch4 error interrupt                                    */
  INTI2C0ST_IRQn                = 55,        /*!< EI2C ch0 status interrupt                                   */
  INTI2C0TBE_IRQn               = 56,        /*!< EI2C ch0 transmit buffer empty interrupt                    */
  INTI2C0RBF_IRQn               = 57,        /*!< EI2C ch0 receive buffer full interrupt                      */
  INTI2C1ST_IRQn                = 58,        /*!< EI2C ch1 status interrupt                                   */
  INTI2C1TBE_IRQn               = 59,        /*!< EI2C ch1 transmit buffer empty interrupt                    */
  INTI2C1RBF_IRQn               = 60,        /*!< EI2C ch1 receive buffer full interrupt                      */
  INTT32A00AC_IRQn              = 61,        /*!< T32A ch0 timer A/C match, overflow, and underflow           */
  INTT32A00ACCAP0_IRQn          = 62,        /*!< T32A ch0 timer A/C capture 0                                */
  INTT32A00ACCAP1_IRQn          = 63,        /*!< T32A ch0 timer A/C capture 1                                */
  INTT32A00B_IRQn               = 64,        /*!< T32A ch0 timer B match, overflow, and underflow             */
  INTT32A00BCAP0_IRQn           = 65,        /*!< T32A ch0 timer B capture 0                                  */
  INTT32A00BCAP1_IRQn           = 66,        /*!< T32A ch0 timer B capture 1                                  */
  INTT32A01AC_IRQn              = 67,        /*!< T32A ch1 timer A/C match, Overflow, and underflow           */
  INTT32A01ACCAP0_IRQn          = 68,        /*!< T32A ch1 timer A/C capture 0                                */
  INTT32A01ACCAP1_IRQn          = 69,        /*!< T32A ch1 timer A/C capture 1                                */
  INTT32A01B_IRQn               = 70,        /*!< T32A ch1 timer B match, overflow, and underflow             */
  INTT32A01BCAP0_IRQn           = 71,        /*!< T32A ch1 timer B capture 0                                  */
  INTT32A01BCAP1_IRQn           = 72,        /*!< T32A ch1 timer B capture 1                                  */
  INTT32A02AC_IRQn              = 73,        /*!< T32A ch2 timer A/C match, overflow, and underflow           */
  INTT32A02ACCAP0_IRQn          = 74,        /*!< T32A ch2 timer A/C capture 0                                */
  INTT32A02ACCAP1_IRQn          = 75,        /*!< T32A ch2 timer A/C capture 1                                */
  INTT32A02B_IRQn               = 76,        /*!< T32A ch2 timer B match, overflow, and underflow             */
  INTT32A02BCAP0_IRQn           = 77,        /*!< T32A ch2 timer B capture 0                                  */
  INTT32A02BCAP1_IRQn           = 78,        /*!< T32A ch2 timer B capture 1                                  */
  INTT32A03AC_IRQn              = 79,        /*!< T32A ch3 timer A/C match, overflow, and underflow           */
  INTT32A03ACCAP0_IRQn          = 80,        /*!< T32A ch3 timer A/C capture 0                                */
  INTT32A03ACCAP1_IRQn          = 81,        /*!< T32A ch3 timer A/C capture 1                                */
  INTT32A03B_IRQn               = 82,        /*!< T32A ch3 timer B match, overflow, and underflow             */
  INTT32A03BCAP0_IRQn           = 83,        /*!< T32A ch3 timer B capture 0                                  */
  INTT32A03BCAP1_IRQn           = 84,        /*!< T32A ch3 timer B capture 1                                  */
  INTT32A04AC_IRQn              = 85,        /*!< T32A ch4 timer A/C match, overflow, and underflow           */
  INTT32A04ACCAP0_IRQn          = 86,        /*!< T32A ch4 timer A/C capture 0                                */
  INTT32A04ACCAP1_IRQn          = 87,        /*!< T32A ch4 timer A/C capture 1                                */
  INTT32A04B_IRQn               = 88,        /*!< T32A ch4 timer B match, overflow, and underflow             */
  INTT32A04BCAP0_IRQn           = 89,        /*!< T32A ch4 timer B capture 0                                  */
  INTT32A04BCAP1_IRQn           = 90,        /*!< T32A ch4 timer B capture 1                                  */
  INTPARI0_IRQn                 = 91,        /*!< RAM Parity interrupt 0                                      */
  INTPARI1_IRQn                 = 92,        /*!< RAM Parity interrupt 1                                      */
  INTDMAATC_IRQn                = 93,        /*!< DMAC transfer completion interrupt (ch0 to 31)              */
  INTDMAAERR_IRQn               = 94,        /*!< DMAC transfer error interrupt                               */
  INTFLCRDY_IRQn                = 95         /*!< Code FLASH Ready interrupt                                  */
} IRQn_Type;

/** Processor and Core Peripheral Section */

/* Configuration of the Cortex-M4 Processor and Core Peripherals */
#define __CM4_REV 0x0001 /*!< Cortex-M4 Core Revision */
#define __MPU_PRESENT 1 /*!< MPU present or not */
#define __FPU_PRESENT 1 /*!< FPU present or not */
#define __NVIC_PRIO_BITS 4 /*!< Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig 0 /*!< Set to 1 if different SysTick Config is used */
/** @} */ /* End of group Configuration_of_CMSIS */

#include "core_cm4.h"                       /* Cortex-M4 processor and core peripherals            */
// Note: Changed for MikroE implementation.
// #include "system_TMPM471F10.h"                 /* TMPM471F10 System                                      */

/** @addtogroup Device_Peripheral_registers
  * @{
  */

/** Device Specific Peripheral registers structures */

/**
  * @brief Interrupt control A Register (IA)
  */
typedef struct
{
  __IO uint8_t  NIC00;             /*!< Non Maskable Interrupt Control Register(A) 00*/
} TSB_IA_TypeDef;

/**
  * @brief Reset Low power Management Register (RLM)
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
  __IO uint32_t TRM;               /*!<                                              */
       uint32_t RESERVED2;
  __IO uint32_t EXAZSEL;           /*!< AD Sampling Time Select Register             */
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
} TSB_IMN_TypeDef;

/**
  * @brief Advanced Programmable Motor Control Circuit (A-PMD)
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
  __IO uint32_t INPCR;             /*!< ENC Input Process Control Register           */
  __IO uint32_t SMPDLY;            /*!< ENC Sample Delay Register                    */
  __I  uint32_t INPMON;            /*!< ENC Input Monitor Register                   */
  __IO uint32_t CLKCR;             /*!< ENC Sample Clock Control Register            */
  __IO uint32_t INTCR;             /*!< ENC Interrupt Control Register               */
  __I  uint32_t INTF;              /*!< ENC Interrupt Event Flag Register            */
} TSB_EN_TypeDef;

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
  * @brief Direct Memory Access Controller (DMAC)
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
  __I  uint32_t CPA0;              /*!< T32A Compare Register A0                     */
  __I  uint32_t CPA1;              /*!< T32A Compare Register A1                     */
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
  __I  uint32_t CPB0;              /*!< T32A Compare Register B0                     */
  __I  uint32_t CPB1;              /*!< T32A Compare Register B1                     */
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
  __I  uint32_t CPC0;              /*!< T32A Compare Register C0                     */
  __I  uint32_t CPC1;              /*!< T32A Compare Register C1                     */
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
  __IO uint32_t SECTCR0;           /*!< TSPI Sector Mode Control Register 0          */
  __IO uint32_t SECTCR1;           /*!< TSPI Sector Mode Control Register 1          */
       uint32_t RESERVED0[55];
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

/**
  * @brief I2C Interface Version A (EI2C)
  */
typedef struct
{
  __IO uint32_t ARST;              /*!< EI2C Reset Register                          */
  __IO uint32_t AEN;               /*!< EI2C Enable Register                         */
  __IO uint32_t ACR0;              /*!< EI2C Control Register 0                      */
  __IO uint32_t ACR1;              /*!< EI2C Control Register 1                      */
  __IO uint32_t ADBRT;             /*!< EI2C Transmit Data Buffer Register           */
  __I  uint32_t ADBRR;             /*!< EI2C Receive Data Buffer Register            */
  __I  uint32_t ASR0;              /*!< EI2C Status Register 0                       */
  __IO uint32_t ASR1;              /*!< EI2C Status Register 1                       */
  __IO uint32_t APRS;              /*!< EI2C Prescaler Clock Setting Register        */
  __IO uint32_t ASCL;              /*!< EI2C SCL Width Setting Register              */
  __IO uint32_t AAR1;              /*!< EI2C First Slave Address Register            */
  __IO uint32_t AAR2;              /*!< EI2C Second Slave Address Register           */
  __IO uint32_t AIE;               /*!< EI2C Interrupt/DMA Setting Register          */
  __I  uint32_t APM;               /*!< EI2C Bus Terminal Monitor Register           */
} TSB_EI2C_TypeDef;

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
  __IO uint32_t FR4;               /*!< Port A Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port A Function Register 5                   */
       uint32_t RESERVED0[3];
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
       uint32_t RESERVED0[2];
  __IO uint32_t FR3;               /*!< Port B Function Register 3                   */
       uint32_t RESERVED1[3];
  __IO uint32_t FR7;               /*!< Port B Function Register 7                   */
       uint32_t RESERVED2;
  __IO uint32_t OD;                /*!< Port B Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port B Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port B Pull-down Control Register            */
       uint32_t RESERVED3;
  __IO uint32_t IE;                /*!< Port B Input Control Register                */
} TSB_PB_TypeDef;

/**
  * @brief Port C
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port C Data Register                         */
  __IO uint32_t CR;                /*!< Port C Output Control Register               */
       uint32_t RESERVED0[5];
  __IO uint32_t FR6;               /*!< Port C Function Register 6                   */
       uint32_t RESERVED1[2];
  __IO uint32_t OD;                /*!< Port C Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port C Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port C Pull-down Control Register            */
       uint32_t RESERVED2;
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
       uint32_t RESERVED0[2];
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
  __IO uint32_t FR2;               /*!< Port E Function Register 2                   */
  __IO uint32_t FR3;               /*!< Port E Function Register 3                   */
  __IO uint32_t FR4;               /*!< Port E Function Register 4                   */
  __IO uint32_t FR5;               /*!< Port E Function Register 5                   */
       uint32_t RESERVED0[3];
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
  __IO uint32_t FR1;               /*!< Port F Function Register 1                   */
  __IO uint32_t FR2;               /*!< Port F Function Register 2                   */
  __IO uint32_t FR3;               /*!< Port F Function Register 3                   */
  __IO uint32_t FR4;               /*!< Port F Function Register 4                   */
       uint32_t RESERVED0;
  __IO uint32_t FR6;               /*!< Port F Function Register 6                   */
       uint32_t RESERVED1[2];
  __IO uint32_t OD;                /*!< Port F Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port F Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port F Pull-down Control Register            */
       uint32_t RESERVED2;
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
  __IO uint32_t FR2;               /*!< Port G Function Register 4                   */
       uint32_t RESERVED0[3];
  __IO uint32_t FR6;               /*!< Port G Function Register 6                   */
       uint32_t RESERVED1[2];
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
  __IO uint32_t CR;                /*!< Port G Output Control Register               */
       uint32_t RESERVED0[8];
  __IO uint32_t OD;                /*!< Port G Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port G Pull-up Control Register              */
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
       uint32_t RESERVED0[2];
  __IO uint32_t FR3;               /*!< Port E Function Register 3                   */
       uint32_t RESERVED1[3];
  __IO uint32_t FR7;               /*!< Port E Function Register 7                   */
       uint32_t RESERVED2;
  __IO uint32_t OD;                /*!< Port K Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port K Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port K Pull-down Control Register            */
       uint32_t RESERVED3;
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
  * @brief Port N
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port N Data Register                         */
  __IO uint32_t CR;                /*!< Port N Output Control Register               */
       uint32_t RESERVED0[2];
  __IO uint32_t FR3;               /*!< Port N Function Register 3                   */
  __IO uint32_t FR4;               /*!< Port N Function Register 4                   */
       uint32_t RESERVED1[4];
  __IO uint32_t OD;                /*!< Port N Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port N Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port N Pull-down Control Register            */
       uint32_t RESERVED2;
  __IO uint32_t IE;                /*!< Port N Input Control Register                */
} TSB_PN_TypeDef;

/**
  * @brief Port P
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port P Data Register                         */
  __IO uint32_t CR;                /*!< Port P Output Control Register               */
       uint32_t RESERVED0[8];
  __IO uint32_t OD;                /*!< Port P Open Drain Control Register           */
  __IO uint32_t PUP;               /*!< Port P Pull-up Control Register              */
  __IO uint32_t PDN;               /*!< Port P Pull-down Control Register            */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< Port P Input Control Register                */
} TSB_PP_TypeDef;

/**
  * @brief Port R
  */
typedef struct
{
  __IO uint32_t DATA;              /*!< Port R Data Register                         */
       uint32_t RESERVED0[11];
  __IO uint32_t PDN;               /*!< Port R Pull-down Control Register            */
       uint32_t RESERVED1;
  __IO uint32_t IE;                /*!< Port R Input Control Register                */
} TSB_PR_TypeDef;

/**
  * @brief Trimming Circuit (TRM)
  */
typedef struct
{
  __IO uint32_t OSCPRO;            /*!< Protection Register                          */
  __IO uint32_t OSCEN;             /*!< TRM Enable Register                          */
       uint32_t RESERVED0[2];
  __I  uint32_t OSCINIT0;          /*!< TRM Initial Trimming Value Monitor Register0 */
  __I  uint32_t OSCINIT1;          /*!< TRM Initial Trimming Value Monitor Register1 */
  __I  uint32_t OSCINIT2;          /*!< TRM Initial Trimming Value Monitor Register2 */
       uint32_t RESERVED1;
  __IO uint32_t OSCSET0;           /*!< TRM User Trimming Value Setting Register0    */
  __IO uint32_t OSCSET1;           /*!< TRM User Trimming Value Setting Register1    */
  __IO uint32_t OSCSET2;           /*!< TRM User Trimming Value Setting Register2    */
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
  __IO uint32_t MON;               /*!< OFD External high frequency oscillation clock monitor register */
} TSB_OFD_TypeDef;

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
  __IO uint32_t FCACCR;            /*!< Flash Access Control Register                */
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
#define TSB_RPAR1_BASE             (PERI_BASE  + 0x00A3000UL)
#define TSB_CRC_BASE               (PERI_BASE  + 0x0043100UL)
#define TSB_ADA_BASE               (PERI_BASE  + 0x005A000UL)
#define TSB_ADB_BASE               (PERI_BASE  + 0x005A400UL)
#define TSB_CG_BASE                (PERI_BASE  + 0x0083000UL)
#define TSB_IB_BASE                (PERI_BASE  + 0x0083200UL)
#define TSB_IMN_BASE               (PERI_BASE  + 0x0083300UL)
#define TSB_PMD0_BASE              (PERI_BASE  + 0x0089000UL)
#define TSB_PMD1_BASE              (PERI_BASE  + 0x0089400UL)
#define TSB_EN0_BASE               (PERI_BASE  + 0x008A000UL)
#define TSB_EN1_BASE               (PERI_BASE  + 0x008A400UL)
#define TSB_DNFA_BASE              (PERI_BASE  + 0x00A0200UL)
#define TSB_TSEL0_BASE             (PERI_BASE  + 0x00A0400UL)
#define TSB_SIWD0_BASE             (PERI_BASE  + 0x00A0600UL)
#define TSB_DMAA_BASE              (PERI_BASE  + 0x00A4000UL)
#define TSB_T32A0_BASE             (PERI_BASE  + 0x00C1000UL)
#define TSB_T32A1_BASE             (PERI_BASE  + 0x00C1400UL)
#define TSB_T32A2_BASE             (PERI_BASE  + 0x00C1800UL)
#define TSB_T32A3_BASE             (PERI_BASE  + 0x00C1C00UL)
#define TSB_T32A4_BASE             (PERI_BASE  + 0x00C2000UL)
#define TSB_TSPI0_BASE             (PERI_BASE  + 0x00CA000UL)
#define TSB_TSPI1_BASE             (PERI_BASE  + 0x00CA400UL)
#define TSB_TSPI2_BASE             (PERI_BASE  + 0x00CA800UL)
#define TSB_TSPI3_BASE             (PERI_BASE  + 0x00CAC00UL)
#define TSB_UART0_BASE             (PERI_BASE  + 0x00CE000UL)
#define TSB_UART1_BASE             (PERI_BASE  + 0x00CE400UL)
#define TSB_UART2_BASE             (PERI_BASE  + 0x00CE800UL)
#define TSB_UART3_BASE             (PERI_BASE  + 0x00CEC00UL)
#define TSB_UART4_BASE             (PERI_BASE  + 0x00CF000UL)
#define TSB_EI2C0_BASE             (PERI_BASE  + 0x00D1000UL)
#define TSB_EI2C1_BASE             (PERI_BASE  + 0x00D2000UL)
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
#define TSB_PN_BASE                (PERI_BASE  + 0x00E0B00UL)
#define TSB_PP_BASE                (PERI_BASE  + 0x00E0C00UL)
#define TSB_PR_BASE                (PERI_BASE  + 0x00E0D00UL)
#define TSB_TRM_BASE               (PERI_BASE  + 0x00E3100UL)
#define TSB_OFD_BASE               (PERI_BASE  + 0x00E4000UL)
#define TSB_FC_BASE                (PERI_BASE  + 0x1DFF0000UL)


/* Peripheral declaration */
#define TSB_IA                     ((     TSB_IA_TypeDef *)    TSB_IA_BASE)
#define TSB_RLM                    ((    TSB_RLM_TypeDef *)   TSB_RLM_BASE)
#define TSB_LVD                    ((    TSB_LVD_TypeDef *)   TSB_LVD_BASE)
#define TSB_RPAR0                  ((   TSB_RPAR_TypeDef *) TSB_RPAR0_BASE)
#define TSB_RPAR1                  ((   TSB_RPAR_TypeDef *) TSB_RPAR1_BASE)
#define TSB_CRC                    ((    TSB_CRC_TypeDef *)   TSB_CRC_BASE)
#define TSB_ADA                    ((     TSB_AD_TypeDef *)   TSB_ADA_BASE)
#define TSB_ADB                    ((     TSB_AD_TypeDef *)   TSB_ADB_BASE)
#define TSB_CG                     ((     TSB_CG_TypeDef *)    TSB_CG_BASE)
#define TSB_IB                     ((     TSB_IB_TypeDef *)    TSB_IB_BASE)
#define TSB_IMN                    ((    TSB_IMN_TypeDef *)   TSB_IMN_BASE)
#define TSB_PMD0                   ((    TSB_PMD_TypeDef *)  TSB_PMD0_BASE)
#define TSB_PMD1                   ((    TSB_PMD_TypeDef *)  TSB_PMD1_BASE)
#define TSB_EN0                    ((     TSB_EN_TypeDef *)   TSB_EN0_BASE)
#define TSB_EN1                    ((     TSB_EN_TypeDef *)   TSB_EN1_BASE)
#define TSB_DNFA                   ((    TSB_DNF_TypeDef *)  TSB_DNFA_BASE)
#define TSB_TSEL0                  ((   TSB_TSEL_TypeDef *) TSB_TSEL0_BASE)
#define TSB_SIWD0                  ((   TSB_SIWD_TypeDef *) TSB_SIWD0_BASE)
#define TSB_DMAA                   ((    TSB_DMA_TypeDef *)  TSB_DMAA_BASE)
#define TSB_T32A0                  ((   TSB_T32A_TypeDef *) TSB_T32A0_BASE)
#define TSB_T32A1                  ((   TSB_T32A_TypeDef *) TSB_T32A1_BASE)
#define TSB_T32A2                  ((   TSB_T32A_TypeDef *) TSB_T32A2_BASE)
#define TSB_T32A3                  ((   TSB_T32A_TypeDef *) TSB_T32A3_BASE)
#define TSB_T32A4                  ((   TSB_T32A_TypeDef *) TSB_T32A4_BASE)
#define TSB_TSPI0                  ((   TSB_TSPI_TypeDef *) TSB_TSPI0_BASE)
#define TSB_TSPI1                  ((   TSB_TSPI_TypeDef *) TSB_TSPI1_BASE)
#define TSB_TSPI2                  ((   TSB_TSPI_TypeDef *) TSB_TSPI2_BASE)
#define TSB_TSPI3                  ((   TSB_TSPI_TypeDef *) TSB_TSPI3_BASE)
#define TSB_UART0                  ((   TSB_UART_TypeDef *) TSB_UART0_BASE)
#define TSB_UART1                  ((   TSB_UART_TypeDef *) TSB_UART1_BASE)
#define TSB_UART2                  ((   TSB_UART_TypeDef *) TSB_UART2_BASE)
#define TSB_UART3                  ((   TSB_UART_TypeDef *) TSB_UART3_BASE)
#define TSB_UART4                  ((   TSB_UART_TypeDef *) TSB_UART4_BASE)
#define TSB_EI2C0                  ((   TSB_EI2C_TypeDef *) TSB_EI2C0_BASE)
#define TSB_EI2C1                  ((   TSB_EI2C_TypeDef *) TSB_EI2C1_BASE)
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
#define TSB_PN                     ((     TSB_PN_TypeDef *)    TSB_PN_BASE)
#define TSB_PP                     ((     TSB_PP_TypeDef *)    TSB_PP_BASE)
#define TSB_PR                     ((     TSB_PR_TypeDef *)    TSB_PR_BASE)
#define TSB_TRM                    ((    TSB_TRM_TypeDef *)   TSB_TRM_BASE)
#define TSB_OFD                    ((    TSB_OFD_TypeDef *)   TSB_OFD_BASE)
#define TSB_FC                     ((     TSB_FC_TypeDef *)    TSB_FC_BASE)


/* Bit-Band for Device Specific Peripheral Registers */
#define BITBAND_OFFSET (0x02000000UL)
#define BITBAND_PERI_BASE (PERI_BASE + BITBAND_OFFSET)
#define BITBAND_PERI(addr, bitnum) (BITBAND_PERI_BASE + (((uint32_t)(addr) - PERI_BASE) << 5) + ((uint32_t)(bitnum) << 2))


/** @} */ /* End of group Device_Peripheral_registers */

#ifdef __cplusplus
}
#endif

#endif  /* __TMPM471F10_H__ */

/** @} */ /* End of group TMPM471F10 */
/** @} */ /* End of group TOSHIBA_TXZ_MICROCONTROLLER */
