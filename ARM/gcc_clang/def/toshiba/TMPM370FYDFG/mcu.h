/**************************************************************************//**
 * @file     TMPM370.h
 * @brief    CMSIS Cortex-M3 Core Peripheral Access Layer Header File for the 
 *           Toshiba 'TMPM370' Device Series 
 * @version  V1.03
 * @date     14. June 2010
 *
 * @note
 * Copyright (C) 2010 ARM Limited. All rights reserved.
 *
 * @par
 * ARM Limited (ARM) is supplying this software for use with Cortex-M 
 * processor based microcontrollers.  This file can be freely distributed 
 * within development tools that are supporting such ARM based processors. 
 *
 * @par
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * ARM SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
 * CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 ******************************************************************************/

#ifndef __TMPM370_H__
#define __TMPM370_H__

#ifdef __cplusplus
 extern "C" {
#endif 

/** @addtogroup TMPM370_Definitions TMPM370 Definitions
  This file defines all structures and symbols for TMPM370:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
  @{
*/


/******************************************************************************/
/*                Processor and Core Peripherals                              */
/******************************************************************************/
/** @addtogroup TMPM370_CMSIS TMPM370 CMSIS Definitions
  Configuration of the Cortex-M3 Processor and Core Peripherals
  @{
*/

/*
 * ==========================================================================
 * ---------- Interrupt Number Definition -----------------------------------
 * ==========================================================================
 */

typedef enum IRQn
{
/******  Cortex-M3 Processor Exceptions Numbers ***************************************************/
  NonMaskableInt_IRQn           = -14,             /*!< 2 Non Maskable Interrupt                  */
  MemoryManagement_IRQn         = -12,             /*!< 4 Cortex-M3 Memory Management Interrupt   */
  BusFault_IRQn                 = -11,             /*!< 5 Cortex-M3 Bus Fault Interrupt           */
  UsageFault_IRQn               = -10,             /*!< 6 Cortex-M3 Usage Fault Interrupt         */
  SVCall_IRQn                   =  -5,             /*!< 11 Cortex-M3 SV Call Interrupt            */
  DebugMonitor_IRQn             =  -4,             /*!< 12 Cortex-M3 Debug Monitor Interrupt      */
  PendSV_IRQn                   =  -2,             /*!< 14 Cortex-M3 Pend SV Interrupt            */
  SysTick_IRQn                  =  -1,             /*!< 15 Cortex-M3 System Tick Interrupt        */
                                            
/******  TMPM370 Specific Interrupt Numbers *******************************************************/
  INT0_IRQn                     =   0,             /*!< Interrupt Pin (PH0/AINA0/96pin)           */
  INT1_IRQn                     =   1,             /*!< Interrupt Pin (PH1/AINA1/95pin)           */
  INT2_IRQn                     =   2,             /*!< Interrupt Pin (PH2/AINA2/94pin)           */
  INT3_IRQn                     =   3,             /*!< Interrupt Pin (PA0/TB0IN/2pin)            */
  INT4_IRQn                     =   4,             /*!< Interrupt Pin (PA2/TB1IN/4pin)            */
  INT5_IRQn                     =   5,             /*!< Interrupt Pin (PE4/TB2IN/15pin)           */
  INTRX0_IRQn                   =   6,             /*!< Serial reception (channel.0)              */
  INTTX0_IRQn                   =   7,             /*!< Serial transmit (channel.0)               */
  INTRX1_IRQn                   =   8,             /*!< Serial reception (channel.1)              */
  INTTX1_IRQn                   =   9,             /*!< Serial transmit (channel.1)               */
  INTVCNA_IRQn                  =  10,             /*!< Vector Engine interrupt A                 */
  INTVCNB_IRQn                  =  11,             /*!< Vector Engine interrupt B                 */
  INTEMG0_IRQn                  =  12,             /*!< PMD0 EMG interrupt                        */
  INTEMG1_IRQn                  =  13,             /*!< PMD1 EMG interrupt                        */
  INTOVV0_IRQn                  =  14,             /*!< PMD0 OVV interrupt                        */
  INTOVV1_IRQn                  =  15,             /*!< PMD1 OVV interrupt                        */
  INTADAPDA_IRQn                =  16,             /*!< ADCA conv. triggered by PMD0 is finished  */
  INTADBPDA_IRQn                =  17,             /*!< ADCB conv. triggered by PMD0 is finished  */
  INTADAPDB_IRQn                =  18,             /*!< ADCA conv. triggered by PMD1 is finished  */
  INTADBPDB_IRQn                =  19,             /*!< ADCB conv. triggered by PMD1 is finished  */
  INTTB00_IRQn                  =  20,             /*!< 16bit TMRB0 compare match detection 0     */
  INTTB01_IRQn                  =  21,             /*!< 16bit TMRB0 compare match detection 1     */
  INTTB10_IRQn                  =  22,             /*!< 16bit TMRB1 compare match detection 0     */
  INTTB11_IRQn                  =  23,             /*!< 16bit TMRB1 compare match detection 1     */
  INTTB40_IRQn                  =  24,             /*!< 16bit TMRB4 compare match detection 0     */
  INTTB41_IRQn                  =  25,             /*!< 16bit TMRB4 compare match detection 1     */
  INTTB50_IRQn                  =  26,             /*!< 16bit TMRB5 compare match detection 0     */
  INTTB51_IRQn                  =  27,             /*!< 16bit TMRB5 compare match detection 1     */
  INTPMD0_IRQn                  =  28,             /*!< PMD0 PWM interrupt                        */
  INTPMD1_IRQn                  =  29,             /*!< PMD1 PWM interrupt                        */
  INTCAP00_IRQn                 =  30,             /*!< 16bit TMRB0 input capture 0               */
  INTCAP01_IRQn                 =  31,             /*!< 16bit TMRB0 input capture 1               */
  INTCAP10_IRQn                 =  32,             /*!< 16bit TMRB1 input capture 0               */
  INTCAP11_IRQn                 =  33,             /*!< 16bit TMRB1 input capture 1               */
  INTCAP40_IRQn                 =  34,             /*!< 16bit TMRB4 input capture 0               */
  INTCAP41_IRQn                 =  35,             /*!< 16bit TMRB4 input capture 1               */
  INTCAP50_IRQn                 =  36,             /*!< 16bit TMRB5 input capture 0               */
  INTCAP51_IRQn                 =  37,             /*!< 16bit TMRB5 input capture 1               */
  INT6_IRQn                     =  38,             /*!< Interrupt Pin (PE6/TB3IN/17pin)           */
  INT7_IRQn                     =  39,             /*!< Interrupt Pin (PE7/TB3OUT/18pin)          */
  INTRX2_IRQn                   =  40,             /*!< Serial reception (channel.2)              */
  INTTX2_IRQn                   =  41,             /*!< Serial transmit (channel.2)               */
  INTADACPA_IRQn                =  42,             /*!< ADA conv. monitoring function interrupt A */
  INTADBCPA_IRQn                =  43,             /*!< ADB conv. monitoring function interrupt A */
  INTADACPB_IRQn                =  44,             /*!< ADA conv. monitoring function interrupt B */
  INTADBCPB_IRQn                =  45,             /*!< ADB conv. monitoring function interrupt B */
  INTTB20_IRQn                  =  46,             /*!< 16bit TMRB2 compare match detection 0     */
  INTTB21_IRQn                  =  47,             /*!< 16bit TMRB2 compare match detection 1     */
  INTTB30_IRQn                  =  48,             /*!< 16bit TMRB3 compare match detection 0     */
  INTTB31_IRQn                  =  49,             /*!< 16bit TMRB3 compare match detection 1     */
  INTCAP20_IRQn                 =  50,             /*!< 16bit TMRB2 input capture 0               */
  INTCAP21_IRQn                 =  51,             /*!< 16bit TMRB2 input capture 1               */
  INTCAP30_IRQn                 =  52,             /*!< 16bit TMRB3 input capture 0               */
  INTCAP31_IRQn                 =  53,             /*!< 16bit TMRB3 input capture 1               */
  INTADASFT_IRQn                =  54,             /*!< ADCA conv. started by software finished   */
  INTADBSFT_IRQn                =  55,             /*!< ADCB conv. started by software finished   */
  INTADATMR_IRQn                =  56,             /*!< ADCA conv. triggered by timer finished    */
  INTADBTMR_IRQn                =  57,             /*!< ADCB conv. triggered by timer finished    */
  INT8_IRQn                     =  58,             /*!< Interrupt Pin (PA7/TB4IN/9pin)            */
  INT9_IRQn                     =  59,             /*!< Interrupt Pin (PD3/33pin)                 */
  INTA_IRQn                     =  60,             /*!< Interrupt Pin (FTEST2/PL1/21pin)          */
  INTB_IRQn                     =  61,             /*!< Interrupt Pin (FTEST3/PL0/20pin)          */
  INTENC0_IRQn                  =  62,             /*!< Ender input0 interrupt                    */
  INTENC1_IRQn                  =  63,             /*!< Ender input1 interrupt                    */
  INTRX3_IRQn                   =  64,             /*!< Serial reception (channel.3)              */
  INTTX3_IRQn                   =  65,             /*!< Serial transmit (channel.3)               */
  INTTB60_IRQn                  =  66,             /*!< 16bit TMRB6 compare match detection 0     */
  INTTB61_IRQn                  =  67,             /*!< 16bit TMRB6 compare match detection 1     */
  INTTB70_IRQn                  =  68,             /*!< 16bit TMRB7 compare match detection 0     */
  INTTB71_IRQn                  =  69,             /*!< 16bit TMRB7 compare match detection 1     */
  INTCAP60_IRQn                 =  70,             /*!< 16bit TMRB6 input capture 0               */
  INTCAP61_IRQn                 =  71,             /*!< 16bit TMRB6 input capture 1               */
  INTCAP70_IRQn                 =  72,             /*!< 16bit TMRB7 input capture 0               */
  INTCAP71_IRQn                 =  73,             /*!< 16bit TMRB7 input capture 1               */
  INTC_IRQn                     =  74,             /*!< Interrupt Pin (PJ6/AINB9/74pin)           */
  INTD_IRQn                     =  75,             /*!< Interrupt Pin (PJ7/AINB10/73pin)          */
  INTE_IRQn                     =  76,             /*!< Interrupt Pin (PK0/AINB11/72pin)          */
  INTF_IRQn                     =  77,             /*!< Interrupt Pin (PK1/AINB12/71pin)          */
} IRQn_Type;                                   
                                               
/*                                      
 * ==========================================================================
 * ----------- Processor and Core Peripheral Section ------------------------
 * ==========================================================================
 */

/* Configuration of the Cortex-M3 Processor and Core Peripherals */
#define __MPU_PRESENT             0         /*!< MPU present or not                           */
#define __NVIC_PRIO_BITS          8         /*!< Number of Bits used for Priority Levels      */
#define __Vendor_SysTickConfig    0         /*!< Set to 1 if different SysTick Config is used */

/*@}*/ /* end of group TMPM370_CMSIS */

#include "core_cm3.h"                       /* Cortex-M3 processor and core peripherals            */
// Note: Changed for MikroE implementation.
// #include "system_TMPM370.h"                 /* TMPM360 System                                      */



/******************************************************************************/
/*                Device Specific Peripheral registers structures             */
/******************************************************************************/
/** @addtogroup TMPM370_Peripherals TMPM370 Peripherals
  TMPM370 Device Specific Peripheral registers structures
  @{
*/

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

/*------------- General Purpose Input/Output Port (PORT) ---------------------*/
/** @addtogroup TMPM370_PORT TMPM370 General Purpose Input/Output Port (PORT)
  @{
*/
typedef struct
{
  __IO uint32_t DATA;               /*!< Offset: 0x0000   Port Data Register */
  __IO uint32_t CR;                 /*!< Offset: 0x0004   Port Control Register */
  __IO uint32_t FR1;                /*!< Offset: 0x0008   Port Function Register 1 */
  __IO uint32_t FR2;                /*!< Offset: 0x000C   Port Function Register 2 */
  __IO uint32_t FR3;                /*!< Offset: 0x0010   Port Function Register 3 */
       uint32_t RESERVED0[5];
  __IO uint32_t OD;                 /*!< Offset: 0x0028   Port Open drain control Register */
  __IO uint32_t PUP;                /*!< Offset: 0x002C   Port Pull up control Register */
  __IO uint32_t PDN;                /*!< Offset: 0x003C   Port Pull down control register */
       uint32_t RESERVED1;
  __IO uint32_t IE;                 /*!< Offset: 0x0038   Port Input control enable Register */
} TSB_PORT_TypeDef;
/*@}*/ /* end of group TMPM370_PORT */

/*------------- 16-bit Timer/Event Counter (TMRB) ----------------------------*/
/** @addtogroup TMPM370_TMRB TMPM370 16-bit Timer/Event Counter (TMRB)
  @{
*/
typedef struct
{
  __IO uint32_t EN;                 /*!< Offset: 0x0000   Timer Enable Register */               
  __IO uint32_t RUN;                /*!< Offset: 0x0004   Timer RUN Register */
  __IO uint32_t CR;                 /*!< Offset: 0x0008   Timer Control Register */
  __IO uint32_t MOD;                /*!< Offset: 0x000C   Timer Mode Register */
  __IO uint32_t FFCR;               /*!< Offset: 0x0010   Timer Flip-Flop Control Register */
  __IO uint32_t ST;                 /*!< Offset: 0x0014   Timer Status Register */
  __IO uint32_t IM;                 /*!< Offset: 0x0018   Interrupt Mask Register */
  __IO uint32_t UC;                 /*!< Offset: 0x001C   Timer Up Counter Register */
  __IO uint32_t RG0;                /*!< Offset: 0x0020   Timer Register 0 */
  __IO uint32_t RG1;                /*!< Offset: 0x0024   Timer Register 1 */
  __IO uint32_t CP0;                /*!< Offset: 0x0028   Capture register 0 */
  __IO uint32_t CP1;                /*!< Offset: 0x002C   Capture register 1 */
} TSB_TMRB_TypeDef;
/*@}*/ /* end of group TMPM370_TMRB */

/*------------- Encoder input (ENC) ------------------------------------------*/
/** @addtogroup TMPM370_ENC TMPM370 Encoder input (ENC)
  @{
*/
typedef struct
{
  __IO uint32_t TNCR;               /*!< Offset: 0x0000   Encoder Input Control Register */               
  __IO uint32_t RELOAD;             /*!< Offset: 0x0004   Encoder Counter Reload Register */
  __IO uint32_t INT;                /*!< Offset: 0x0008   Encoder Compare Register  */
  __IO uint32_t CNT;                /*!< Offset: 0x000C   Encoder Counter */
} TSB_ENC_TypeDef;
/*@}*/ /* end of group TMPM370_ENC */

/*------------- General-purpose Serial Interface (SIO/UART) ------------------*/
/** @addtogroup TMPM370_SIO_UART TMPM370 General-purpose Serial Interface (SIO/UART)
  @{
*/
typedef struct
{
  __IO uint32_t EN;                 /*!< Offset: 0x0000   SIO Enable Register */
  __IO uint32_t BUF;                /*!< Offset: 0x0004   SIO Transmit/ Receive Buffer Register */
  __IO uint32_t CR;                 /*!< Offset: 0x0008   SIO Control Register */
  __IO uint32_t MOD0;               /*!< Offset: 0x000C   SIO Mode Control Register 0 */
  __IO uint32_t BRCR;               /*!< Offset: 0x0010   SIO Baud Rate Generator Control */
  __IO uint32_t BRADD;              /*!< Offset: 0x0014   SIO Baud rate Generator Control 2 */
  __IO uint32_t MOD1;               /*!< Offset: 0x0018   SIO Mode Control Register 1 */
  __IO uint32_t MOD2;               /*!< Offset: 0x001C   SIO Mode Control Register 2 */
  __IO uint32_t RFC;                /*!< Offset: 0x0020   SIO Receive FIFO Configuration Register */
  __IO uint32_t TFC;                /*!< Offset: 0x0024   SIO Transmit FIFO Configuration Register */
  __I  uint32_t RST;                /*!< Offset: 0x0028   SIO Receive FIFO Status Register */
  __I  uint32_t TST;                /*!< Offset: 0x002C   SIO Transmit FIFO Status Register */
  __IO uint8_t  FCNF;               /*!< Offset: 0x0030   SIO FIFO Configuration Register */
} TSB_SIO_TypeDef;
/*@}*/ /* end of group TMPM370_SIO_UART */

/*------------- 12-bit A/D Converter (A/DC) ----------------------------------*/
/** @addtogroup TMPM370_ADC TMPM370 12-bit A/D Converter (A/DC)
  @{
*/
typedef struct
{
  __IO uint32_t CLK;                /*!< Offset: 0x0000   ADC Clock Setting Register */
  __IO uint32_t MOD0;               /*!< Offset: 0x0004   ADC Mode Setting Register 0 */
  __IO uint32_t MOD1;               /*!< Offset: 0x0008   ADC Mode Setting Register 1 */
  __IO uint32_t MOD2;               /*!< Offset: 0x000C   ADC Mode Setting Register 2 */
  __IO uint32_t CMPCR0;             /*!< Offset: 0x0010   ADC Monitoring Setting Register 0 */
  __IO uint32_t CMPCR1;             /*!< Offset: 0x0014   ADC Monitoring Setting Register 1 */
  __IO uint32_t CMP0;               /*!< Offset: 0x0018   AD Conversion Result Compare Register 0 */
  __IO uint32_t CMP1;               /*!< Offset: 0x001C   AD Conversion Result Compare Register 1 */
  __IO uint32_t REG[12];            /*!< Offset: 0x0020   AD Conversion Result Register 0.11 */
  __IO uint32_t PSEL[12];           /*!< Offset: 0x0050   PMD Trigger Program Number Select Register 0..11 */
  __IO uint32_t PINTS[6];           /*!< Offset  0x0080   PMD Trigger Interrupt Select Register 0..5 */
  __IO uint32_t PSET[6];            /*!< Offset  0x0098   PMD Trigger Program Register 0..5 */
  __IO uint8_t  TSET[12];           /*!< Offset  0x00B0   Timer Trigger Program Registers 0..11 */
  __IO uint8_t  SSET[12];           /*!< Offset  0x00BC   Software Program Registers 0..1 */
  __IO uint8_t  ASET[12];           /*!< Offset  0x00C8   Constant Conversion Program Registers 0..12 */
  __IO uint32_t HWCR;               /*!< Offset  0x00D4   Hard Macro Control Register */
} TSB_ADC_TypeDef;
/*@}*/ /* end of group TMPM370_ADC */

/*------------- Op-Amps/Analog Converter (AMP/CMP) ---------------------------*/
/** @addtogroup TMPM370_AMP_CMP TMPM370 Op-Amps/Analog Converter (AMP/CMP)
  @{
*/
typedef struct
{
  __IO uint32_t AMPCTLA;            /*!< Offset: 0x0000   Amp A Control Register */ 
       uint32_t RESERVED0;
  __IO uint32_t AMPCTLB;            /*!< Offset: 0x0008   Amp B Control Register */ 
       uint32_t RESERVED1;
  __IO uint32_t AMPCTLC;            /*!< Offset: 0x0010   Amp C Control Register */ 
       uint32_t RESERVED2;
  __IO uint32_t AMPCTLD;            /*!< Offset: 0x0018   Amp D Control Register */ 
       uint32_t RESERVED3;
  __IO uint32_t CMPCTLA;            /*!< Offset: 0x0020   Comparator A Control Register */ 
       uint32_t RESERVED4;
  __IO uint32_t CMPCTLB;            /*!< Offset: 0x0028   Comparator B Control Register */ 
       uint32_t RESERVED5;
  __IO uint32_t CMPCTLC;            /*!< Offset: 0x0030   Comparator C Control Register */ 
       uint32_t RESERVED6;
  __IO uint32_t CMPCTLD;            /*!< Offset: 0x0038   Comparator D Control Register */ 
} TSB_AMPCMP_TypeDef;
/*@}*/ /* end of group TMPM370_AMP_CMP */

/*------------- Watchdog Timer (WDT) -----------------------------------------*/
/** @addtogroup TMPM370_WDT TMPM370 Watchdog Timer (WDT)
  @{
*/
typedef struct
{
  __IO uint32_t MOD;                /*!< Offset: 0x0000   WDT Mode Register */
  __IO uint32_t CR;                 /*!< Offset: 0x0004   WDT Control Register */
} TSB_WDT_TypeDef;
/*@}*/ /* end of group TMPM370_WDT */

/*------------- Clock Generator (CG) -----------------------------------------*/
/** @addtogroup TMPM370_CG TMPM370 Clock Generator (CG)
  @{
*/
typedef struct
{
  __IO uint32_t SYSCR;              /*!< Offset: 0x0000   System Control Register */
  __IO uint32_t OSCCR;              /*!< Offset: 0x0004   Oscillation Control Register */
  __IO uint32_t STBYCR;             /*!< Offset: 0x0008   Standby Control Register */
  __IO uint32_t PLLSEL;             /*!< Offset: 0x000C   PLL Selection Register */
  __IO uint32_t CKSEL;              /*!< Offset: 0x0010   System Clock Selection Register */
  __IO uint32_t ICRCG;              /*!< Offset: 0x0014   CG Interrupt Request Clear Register (wr) */
  __IO uint32_t NMIFLG;             /*!< Offset: 0x0018   NMI Flag Register (rd) */
  __IO uint32_t RSTFLG;             /*!< Offset: 0x001C   Reset Flag Register */
  __IO uint32_t IMCGA;              /*!< Offset: 0x0020   CG Interrupt Mode Control Register A */
  __IO uint32_t IMCGB;              /*!< Offset: 0x0024   CG Interrupt Mode Control Register B */
  __IO uint32_t IMCGC;              /*!< Offset: 0x0028   CG Interrupt Mode Control Register C */
  __IO uint32_t IMCGD;              /*!< Offset: 0x002C   CG Interrupt Mode Control Register D */
  __IO uint32_t IMCGE;              /*!< Offset: 0x0030   CG Interrupt Mode Control Register E */
  __IO uint32_t IMCGF;              /*!< Offset: 0x0034   CG Interrupt Mode Control Register F */
  __IO uint32_t IMCGG;              /*!< Offset: 0x0038   CG Interrupt Mode Control Register G */
  __IO uint32_t IMCGH;              /*!< Offset: 0x003C   CG Interrupt Mode Control Register H */
} TSB_CG_TypeDef;
/*@}*/ /* end of group TMPM370_CG */

/*------------- Oscillation frequency detector (OFD) -------------------------*/
/** @addtogroup TMPM370_OFD TMPM370 Oscillation frequency detector (OFD)
  @{
*/
typedef struct
{
  __IO uint32_t CLKSCR1;            /*!< Offset: 0x0000   Oscillation frequency detection control register 1 */
  __IO uint32_t CLKSCR2;            /*!< Offset: 0x0004   Oscillation frequency detection control register 2 */
  __IO uint32_t CLKSMINPLLOFF;      /*!< Offset: 0x0008   Lower detection frequency setting register (In case of PLL OFF) */
  __IO uint32_t CLKSMINPLLON;       /*!< Offset: 0x000C   Lower detection frequency setting register (In case of PLL ON) */
  __IO uint32_t CLKSMXPLLOFF;       /*!< Offset: 0x0010   Higher detection frequency setting register (In case of PLL OFF) */
  __IO uint32_t CLKSMXPLLON;        /*!< Offset: 0x0014   Higher detection frequency setting register (In case of PLL ON) */
} TSB_OFD_TypeDef;
/*@}*/ /* end of group TMPM370_OFD */

/*------------- Power on reset / Voltage detecting circuit (POR/VLTD) --------*/
/** @addtogroup TMPM370_POR_VLTD TMPM370 Power on reset / Voltage detecting circuit (POR/VLTD)
  @{
*/
typedef struct
{
  __I  uint32_t CR;                 /*!< Offset: 0x0000   Voltage detection control register */
  __I  uint32_t SR;                 /*!< Offset: 0x0004   Voltage detection status register */
} TSB_VD_TypeDef;
/*@}*/ /* end of group TMPM370_POR_VLTD */

/*------------- Vector Engine (VE) -------------------------------------------*/
/** @addtogroup TMPM370_VE TMPM370 Vector Engine (VE)
  @{
*/
typedef struct
{
  __IO uint32_t MCTLF;              /*!< Low-speed flag */
  __IO uint32_t MODE;               /*!< Task control mode */
  __IO uint32_t FMODE;              /*!< Flow control */
  __IO uint32_t TPWM;               /*!< PWM period rate (PWM period [s]  maximum speed  2^16) */
  __IO uint32_t OMEGA;              /*!< Rotation speed (speed [Hz] maximum speed  2^15) */
  __IO uint32_t THETA;              /*!< Motor phase (motor phase [deg]/360  2^16) */
  __IO uint32_t ID_REF;             /*!< d-axis reference value (current [A]  maximum current  2^15) */
  __IO uint32_t IQ_REF;             /*!< q-axis reference value (current [A]  maximum current  2^15) */
  __IO uint32_t VD;                 /*!< d-axis voltage (voltage [V]  maximum voltage  2^31) */
  __IO uint32_t VQ;                 /*!< q-axis voltage (voltage [V]  maximum voltage  2^31) */
  __IO uint32_t CID_KI;             /*!< Integral coefficient for PI control of d-axis */
  __IO uint32_t CID_KP;             /*!< Proportional coefficient for PI control of d-axis */
  __IO uint32_t CIQ_KI;             /*!< Integral coefficient for PI control of q-axis */
  __IO uint32_t CIQ_KP;             /*!< Proportional coefficient for PI control of q-axis */
  __IO uint32_t VD_IH;              /*!< Upper 32 bits of integral term (VD_I ) of d-axis voltage */
  __IO uint32_t VD_ILH;             /*!< Lower 32 bits of integral term (VD_I) of d-axis voltage */
  __IO uint32_t VQ_IH;              /*!< Upper 32 bits of integral term (VQ_I) of q-axis voltage */
  __IO uint32_t VQ_ILH;             /*!< Lower 32 bits of integral term (VQ_I) of q-axis voltage */
  __IO uint32_t F_PWMCHG;           /*!< Switching speed (for 2-phase modulation and shift PWM) */
  __IO uint32_t MDPRD;              /*!< PWM period (to be set identically with PMDs PWM period) */
  __IO uint32_t MINPLS;             /*!< Minimum pulse width */
  __IO uint32_t TRGCRC;             /*!< Synchronizing trigger correction value */
  __IO uint32_t VDC_L;              /*!< DC supply voltage effective value (minimum input) */
  __IO uint32_t COS;                /*!< Cosine value at THETA for output conversion (Q15 data) */
  __IO uint32_t SIN;                /*!< Sine value at THETA for output conversion (Q15 data) */
  __IO uint32_t COSM;               /*!< Previous cosine value for input processing (Q15 data) */
  __IO uint32_t SINM;               /*!< Previous sine value for input processing (Q15 data) */
  __IO uint32_t SECTOR;             /*!< Sector information (0-11)  */
  __IO uint32_t SECTORM;            /*!< Previous sector information for input processing (0-11) */
  __IO uint32_t IAO;                /*!< AD conversion result of a-phase zero-current */
  __IO uint32_t IBO;                /*!< AD conversion result of b-phase zero-current */
  __IO uint32_t ICO;                /*!< AD conversion result of c-phase zero-current */
  __IO uint32_t IA_ADC;             /*!< AD conversion result of a-phase current */
  __IO uint32_t IB_ADC;             /*!< AD conversion result of b-phase current */
  __IO uint32_t IC_ADC;             /*!< AD conversion result of c-phase current */
  __IO uint32_t VDC;                /*!< DC supply voltage (voltage [V]  maximum voltage  2^15) */
  __IO uint32_t ID;                 /*!< d-axis current (current [A]  maximum current  2^31) */
  __IO uint32_t IQ;                 /*!< q-axis current (current [A]  maximum current  2^31) */
} TSB_VE_Channel_TypeDef;

typedef struct
{
  __IO uint32_t CMPU;               /*!< PMD control: CMPU setting */
  __IO uint32_t CMPV;               /*!< PMD control: CMPV setting */
  __IO uint32_t CMPW;               /*!< PMD control: CMPW setting */
  __IO uint32_t OUTCR;              /*!< PMD control: Output control (MDOUT) */
  __IO uint32_t TRGCMP0;            /*!< PMD control: TRGCMP0 setting */
  __IO uint32_t TRGCMP1;            /*!< PMD control: TRGCMP1 setting */
  __IO uint32_t TRGSEL;             /*!< PMD control: Trigger selection */
  __IO uint32_t EMGRS;              /*!< PMD control: EMG return (EMGCR[EMGRS]) */
} TSB_VE_ChannelControl_TypeDef;

typedef struct
{
  __IO uint32_t VEEN;               /*!< Offset: 0x0000   VE enable/disable */
  __O  uint32_t CPURUNTRG;          /*!< Offset: 0x0004   CPU start trigger selection */
  __IO uint32_t TASKAPP;            /*!< Offset: 0x0008   Task selection */
  __IO uint32_t ACTSCH;             /*!< Offset: 0x000C   Operation schedule selection */
  __IO uint32_t REPTIME;            /*!< Offset: 0x0010   Schedule repeat count */
  __IO uint32_t TRGMODE;            /*!< Offset: 0x0014   Start trigger mode */
  __IO uint32_t ERRINTEN;           /*!< Offset: 0x0018   Error interrupt enable/disable */
  __O  uint32_t COMPEND;            /*!< Offset: 0x001C   VE forced termination */
  __I  uint32_t ERRDET;             /*!< Offset: 0x0020   Error detection */
  __I  uint32_t SCHTASKRUN;         /*!< Offset: 0x0024   Schedule executing flag/executing task */
       uint32_t RESERVED0;
  __IO uint32_t TMPREG[6];          /*!< Offset: 0x002C   Temporary register 0..5 */
  TSB_VE_Channel_TypeDef CHN[2];   /*!< Offset: 0x0044   Channel  Register */
  __IO uint32_t MMODE;              /*!< Offset: 0x0174   Monitor control Register */
  __IO uint32_t TADC;               /*!< Offset: 0x0178   ADC conversion time (based on PWM clock)  Register */
  TSB_VE_ChannelControl_TypeDef CHN_CTRL[2]; /*!< Offset: 0x017C   Channel Control Register */
} TSB_VE_TypeDef;
/*@}*/ /* end of group TMPM370_VE */

/*------------- Programmable motor driver (PMD) -------------------------------*/
/** @addtogroup TMPM370_PMD TMPM370 Programmable motor driver (PMD)
  @{
*/
typedef struct
{
  __IO uint32_t MDEN;               /*!< Offset: 0x0000   PMD Enable Register (MDEN) */
  __IO uint32_t PORTMD;             /*!< Offset: 0x0004   Port Output Mode Register (PORTMD) */
  __IO uint32_t MDCR;               /*!< Offset: 0x0008   PMD Control Register (MDCR) */
  __IO uint32_t CNTSTA;             /*!< Offset: 0x000C   PWM Counter Status Register (CNTSTA) */
  __IO uint32_t MDCNT;              /*!< Offset: 0x0010   PWM Counter Register (MDCNT) */
  __IO uint32_t MDPRD;              /*!< Offset: 0x0014   PWM Period Register (MDPRD) */
  __IO uint32_t CMPU;               /*!< Offset: 0x0018   PWM Compare Registers (CMPU) */
  __IO uint32_t CMPV;               /*!< Offset: 0x001C   PWM Compare Registers (CMPV) */
  __IO uint32_t CMPW;               /*!< Offset: 0x0020   PWM Compare Registers (CMPW) */
  __IO uint32_t MODESEL;            /*!< Offset: 0x0024   Mode Select Register (MODESEL) */
  __IO uint32_t MDOUT;              /*!< Offset: 0x0028   PMD Output Control Register (MDOUT) */
  __IO uint32_t MDPOT;              /*!< Offset: 0x002C   PMD Output Setting Register (MDPOT) */
  __IO uint32_t EMGREL;             /*!< Offset: 0x0030   EMG Release Register (EMGREL) */
  __IO uint32_t EMGCR;              /*!< Offset: 0x0034   EMG Control Register (EMGCR) */
  __IO uint32_t EMGSTA;             /*!< Offset: 0x0038   EMG Status Register (EMGSTA) */
  __IO uint32_t OVVCR;              /*!< Offset: 0x003C   OVV Control Register (OVVCR) */
  __IO uint32_t OVVSTA;             /*!< Offset: 0x0040   OVV Status Register (OVVSTA) */
  __IO uint32_t DTR;                /*!< Offset: 0x0044   Dead Time Register (DTR) */
  __IO uint32_t TRGCMP[4];          /*!< Offset: 0x0048   Trigger Compare Registers (TRGCMP0..3) */
  __IO uint32_t TRGCR;              /*!< Offset: 0x0058   Trigger Control Register (TRGCR) */
  __IO uint32_t TRGCMD;             /*!< Offset: 0x005C   Trigger Output Mode Setting Register (TRGMD) */
  __IO uint32_t TRGSEL;             /*!< Offset: 0x0060   Trigger Output Select Register (TRGSEL) */
} TSB_PMD_TypeDef;
/*@}*/ /* end of group TMPM370_PMD */

/*------------- Flash Control (FC) -------------------------------------------*/
/** @addtogroup TMPM370_FC TMPM370 Flash Control (FC)
  @{
*/
typedef struct
{
       uint32_t RESERVED0[4];
  __IO uint32_t SECBIT;             /*!< Offset: 0x0010   Security Bit Register */
       uint32_t RESERVED1[3];
  __I  uint32_t FLCS;               /*!< Offset: 0x0020   Flash Control Register */
} TSB_FC_TypeDef;
/*@}*/ /* end of group TMPM370_FC */

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

/*@}*/ /* end of group TMPM370_Peripherals */


/******************************************************************************/
/*                              Memory Mapping                                */
/******************************************************************************/
/** @addtogroup TMPM370_MemoryMap TMPM370 Memory Mapping
  @{
*/

#define TSB_FLASH_BASE       (0x00000000UL)                  /*!< (FLASH     ) Base Address */
#define TSB_RAM_BASE         (0x20000000UL)                  /*!< (RAM       ) Base Address */
#define TSB_PERI_BASE        (0x40000000UL)                  /*!< (Peripheral) Base Address */

#define TSB_PA_BASE          (TSB_PERI_BASE  + 0x00000000)  /*!< (PA        ) Base Address */
#define TSB_PB_BASE          (TSB_PERI_BASE  + 0x00000040)  /*!< (PB        ) Base Address */
#define TSB_PC_BASE          (TSB_PERI_BASE  + 0x00000080)  /*!< (PC        ) Base Address */
#define TSB_PD_BASE          (TSB_PERI_BASE  + 0x000000C0)  /*!< (PD        ) Base Address */
#define TSB_PE_BASE          (TSB_PERI_BASE  + 0x00000100)  /*!< (PE        ) Base Address */
#define TSB_PF_BASE          (TSB_PERI_BASE  + 0x00000140)  /*!< (PF        ) Base Address */
#define TSB_PG_BASE          (TSB_PERI_BASE  + 0x00000180)  /*!< (PG        ) Base Address */
#define TSB_PH_BASE          (TSB_PERI_BASE  + 0x000001C0)  /*!< (PH        ) Base Address */
#define TSB_PI_BASE          (TSB_PERI_BASE  + 0x00000200)  /*!< (PI        ) Base Address */
#define TSB_PJ_BASE          (TSB_PERI_BASE  + 0x00000240)  /*!< (PJ        ) Base Address */
#define TSB_PK_BASE          (TSB_PERI_BASE  + 0x00000280)  /*!< (PK        ) Base Address */
#define TSB_PL_BASE          (TSB_PERI_BASE  + 0x000002C0)  /*!< (PL        ) Base Address */
#define TSB_PM_BASE          (TSB_PERI_BASE  + 0x00000300)  /*!< (PM        ) Base Address */
#define TSB_TB0_BASE         (TSB_PERI_BASE  + 0x00010000)  /*!< (TB0       ) Base Address */
#define TSB_TB1_BASE         (TSB_PERI_BASE  + 0x00010040)  /*!< (TB1       ) Base Address */
#define TSB_TB2_BASE         (TSB_PERI_BASE  + 0x00010080)  /*!< (TB2       ) Base Address */
#define TSB_TB3_BASE         (TSB_PERI_BASE  + 0x000100C0)  /*!< (TB3       ) Base Address */
#define TSB_TB4_BASE         (TSB_PERI_BASE  + 0x00010100)  /*!< (TB4       ) Base Address */
#define TSB_TB5_BASE         (TSB_PERI_BASE  + 0x00010140)  /*!< (TB5       ) Base Address */
#define TSB_TB6_BASE         (TSB_PERI_BASE  + 0x00010180)  /*!< (TB6       ) Base Address */
#define TSB_TB7_BASE         (TSB_PERI_BASE  + 0x000101C0)  /*!< (TB7       ) Base Address */
#define TSB_ENC0_BASE        (TSB_PERI_BASE  + 0x00010400)  /*!< (ENC0      ) Base Address */
#define TSB_ENC1_BASE        (TSB_PERI_BASE  + 0x00010500)  /*!< (ENC1      ) Base Address */
#define TSB_SIO0_BASE        (TSB_PERI_BASE  + 0x00020080)  /*!< (SIO0      ) Base Address */
#define TSB_SIO1_BASE        (TSB_PERI_BASE  + 0x000200C0)  /*!< (SIO1      ) Base Address */
#define TSB_SIO2_BASE        (TSB_PERI_BASE  + 0x00020100)  /*!< (SIO2      ) Base Address */
#define TSB_SIO3_BASE        (TSB_PERI_BASE  + 0x00020140)  /*!< (SIO3      ) Base Address */
#define TSB_ADCA_BASE        (TSB_PERI_BASE  + 0x00030000)  /*!< (ADCA      ) Base Address */
#define TSB_ADCB_BASE        (TSB_PERI_BASE  + 0x00030200)  /*!< (ADCB      ) Base Address */
#define TSB_AMPCMP_BASE      (TSB_PERI_BASE  + 0x00030400)  /*!< (AMPCMP    ) Base Address */
#define TSB_WDT_BASE         (TSB_PERI_BASE  + 0x00040000)  /*!< (WDT       ) Base Address */
#define TSB_CG_BASE          (TSB_PERI_BASE  + 0x00040200)  /*!< (CG        ) Base Address */
#define TSB_OFD_BASE         (TSB_PERI_BASE  + 0x00040800)  /*!< (OFD       ) Base Address */
#define TSB_VD_BASE          (TSB_PERI_BASE  + 0x00040900)  /*!< (VD        ) Base Address */
#define TSB_VE_BASE          (TSB_PERI_BASE  + 0x00050000)  /*!< (VE        ) Base Address */
#define TSB_PMD0_BASE        (TSB_PERI_BASE  + 0x00050400)  /*!< (PMD0      ) Base Address */
#define TSB_PMD1_BASE        (TSB_PERI_BASE  + 0x00050480)  /*!< (PMD1      ) Base Address */
#define TSB_FC_BASE          (TSB_PERI_BASE  + 0x01FFF000)  /*!< (FC        ) Base Address */
/*@}*/ /* end of group TMPM370_MemoryMap */


/******************************************************************************/
/*                            Peripheral Declaration                          */
/******************************************************************************/
/** @addtogroup TMPM370_PeripheralDecl TMPM370 Peripheral Declaration
  @{
*/

#define TSB_PA              ((    TSB_PORT_TypeDef *)       TSB_PA_BASE)
#define TSB_PB              ((    TSB_PORT_TypeDef *)       TSB_PB_BASE)
#define TSB_PC              ((    TSB_PORT_TypeDef *)       TSB_PC_BASE)
#define TSB_PD              ((    TSB_PORT_TypeDef *)       TSB_PD_BASE)
#define TSB_PE              ((    TSB_PORT_TypeDef *)       TSB_PE_BASE)
#define TSB_PF              ((    TSB_PORT_TypeDef *)       TSB_PF_BASE)
#define TSB_PG              ((    TSB_PORT_TypeDef *)       TSB_PG_BASE)
#define TSB_PH              ((    TSB_PORT_TypeDef *)       TSB_PH_BASE)
#define TSB_PI              ((    TSB_PORT_TypeDef *)       TSB_PI_BASE)
#define TSB_PJ              ((    TSB_PORT_TypeDef *)       TSB_PJ_BASE)
#define TSB_PK              ((    TSB_PORT_TypeDef *)       TSB_PK_BASE)
#define TSB_PL              ((    TSB_PORT_TypeDef *)       TSB_PL_BASE)
#define TSB_PM              ((    TSB_PORT_TypeDef *)       TSB_PM_BASE)
#define TSB_TB0             ((    TSB_TMRB_TypeDef *)      TSB_TB0_BASE)
#define TSB_TB1             ((    TSB_TMRB_TypeDef *)      TSB_TB1_BASE)
#define TSB_TB2             ((    TSB_TMRB_TypeDef *)      TSB_TB2_BASE)
#define TSB_TB3             ((    TSB_TMRB_TypeDef *)      TSB_TB3_BASE)
#define TSB_TB4             ((    TSB_TMRB_TypeDef *)      TSB_TB4_BASE)
#define TSB_TB5             ((    TSB_TMRB_TypeDef *)      TSB_TB5_BASE)
#define TSB_TB6             ((    TSB_TMRB_TypeDef *)      TSB_TB6_BASE)
#define TSB_TB7             ((    TSB_TMRB_TypeDef *)      TSB_TB7_BASE)
#define TSB_ENC0            ((     TSB_ENC_TypeDef *)     TSB_ENC0_BASE)
#define TSB_ENC1            ((     TSB_ENC_TypeDef *)     TSB_ENC1_BASE)
#define TSB_SIO0            ((     TSB_SIO_TypeDef *)     TSB_SIO0_BASE)
#define TSB_SIO1            ((     TSB_SIO_TypeDef *)     TSB_SIO1_BASE)
#define TSB_SIO2            ((     TSB_SIO_TypeDef *)     TSB_SIO2_BASE)
#define TSB_SIO3            ((     TSB_SIO_TypeDef *)     TSB_SIO3_BASE)
#define TSB_ADCA            ((     TSB_ADC_TypeDef *)     TSB_ADCA_BASE)
#define TSB_ADCB            ((     TSB_ADC_TypeDef *)     TSB_ADCB_BASE)
#define TSB_AMPCMP          ((  TSB_AMPCMP_TypeDef *)   TSB_AMPCMP_BASE)
#define TSB_WDT             ((     TSB_WDT_TypeDef *)      TSB_WDT_BASE)
#define TSB_CG              ((      TSB_CG_TypeDef *)       TSB_CG_BASE)
#define TSB_OFD             ((     TSB_OFD_TypeDef *)      TSB_OFD_BASE)
#define TSB_VD              ((      TSB_VD_TypeDef *)       TSB_VD_BASE)
#define TSB_VE              ((      TSB_VE_TypeDef *)       TSB_VE_BASE)
#define TSB_PMD0            ((     TSB_PMD_TypeDef *)     TSB_PMD0_BASE)
#define TSB_PMD0            ((     TSB_PMD_TypeDef *)     TSB_PMD0_BASE)
#define TSB_FC              ((      TSB_FC_TypeDef *)       TSB_FC_BASE)
/*@}*/ /* end of group TMPM370_PeripheralDecl */

/*@}*/ /* end of group TMPM370_Definitions */

#ifdef __cplusplus
}
#endif

#endif  /* __TMPM370_H__ */
