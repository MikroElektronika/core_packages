/**
 *******************************************************************************
 * @file    TMPM342.h
 * @brief   CMSIS Cortex-M3 Core Peripheral Access Layer Header File for the
 *          TOSHIBA 'TMPM342' Device Series
 * @version V2.0.2.1 (Tentative)
 * @date    2011/04/12
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

/** @addtogroup TMPM342
  * @{
  */

#ifndef __TMPM342_H__
#define __TMPM342_H__

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

/******  TMPM342 Specific Interrupt Numbers *******************************************************************/
  INT0_IRQn                     = 0,         /*!< Interrupt pin 0                                             */
  INT1_IRQn                     = 1,         /*!< Interrupt pin 1                                             */
  INT2_IRQn                     = 2,         /*!< Interrupt pin 2                                             */
  INT3_IRQn                     = 3,         /*!< Interrupt pin 3                                             */
  INT4_IRQn                     = 4,         /*!< Interrupt pin 4                                             */
  INT5_IRQn                     = 5,         /*!< Interrupt pin 5                                             */
  INT6_IRQn                     = 6,         /*!< Interrupt pin 6                                             */
  INT7_IRQn                     = 7,         /*!< Interrupt pin 7                                             */
  INTPSCSTOP_IRQn               = 8,         /*!< PSC end interrupt                                           */
  INTPSCBRK_IRQn                = 9,         /*!< PSC break interrupt                                         */
  INTPSCSTEP_IRQn               = 10,        /*!< PSC step interrupt                                          */
  INTPSCII_IRQn                 = 11,        /*!< PSC unjustified instruction interrupt                       */
  INTPSCIA_IRQn                 = 12,        /*!< PSC unjustified address interrupt                           */
  INTTB0_IRQn                   = 13,        /*!< 16-bit TMRB match detection 0                               */
  INTTB1_IRQn                   = 14,        /*!< 16-bit TMRB match detection 1                               */
  INTTB2_IRQn                   = 15,        /*!< 16-bit TMRB match detection 2                               */
  INTTX0_IRQn                   = 16,        /*!< Serial transmission (channel.0)                             */
  INTRX0_IRQn                   = 17,        /*!< Serial reception (channel.0)                                */
  INTTX1_IRQn                   = 18,        /*!< Serial transmission (channel.1)                             */
  INTRX1_IRQn                   = 19,        /*!< Serial reception (channel.1)                                */
  INTTX2_IRQn                   = 20,        /*!< Serial transmission (channel.2)                             */
  INTRX2_IRQn                   = 21,        /*!< Serial reception (channel.2)                                */
  INTTX3_IRQn                   = 22,        /*!< Serial transmission (channel.3)                             */
  INTS_IRQn                     = 23,        /*!< UART sending and receiving interrupt                        */
  INTAD0HP_IRQn                 = 24,        /*!< Top priority ADC0 conversion end interrupt                  */
  INTAD0_IRQn                   = 25,        /*!< ADC0 conversion end interrupt usually                       */
  INTAD1HP_IRQn                 = 26,        /*!< Top priority ADC1 conversion end interrupt                  */
  INTAD1_IRQn                   = 27,        /*!< ADC1 conversion end interrupt usually                       */
  INTDSADHP_IRQn                = 28,        /*!< Top priority ADC conversion end interrupt               */
  INTDSAD_IRQn                  = 29,        /*!< ADC conversion end interrupt usually                    */
  INTI2C_IRQn                   = 30,        /*!< I2C interrupt                                               */
  INTTB3_IRQn                   = 31,        /*!< 16-bit TMRB match detection 3                               */
  INTTB4_IRQn                   = 32,        /*!< 16-bit TMRB match detection 4                               */
  INTTB5_IRQn                   = 33,        /*!< 16-bit TMRB match detection 5                               */
  INTTB6_IRQn                   = 34,        /*!< 16-bit TMRB match detection 6                               */
  INTTB7_IRQn                   = 35,        /*!< 16-bit TMRB match detection 7                               */
  INTTB8_IRQn                   = 36,        /*!< 16-bit TMRB match detection 8                               */
  INTTB9_IRQn                   = 37,        /*!< 16-bit TMRB match detection 9                               */
  INTTD0CMP0_IRQn               = 38,        /*!< 16-bit TMRD0 compare interrupt 0                            */
  INTTD0CMP1_IRQn               = 39,        /*!< 16-bit TMRD0 compare interrupt 1                            */
  INTTD0CMP2_IRQn               = 40,        /*!< 16-bit TMRD0 compare interrupt 2                            */
  INTTD0CMP3_IRQn               = 41,        /*!< 16-bit TMRD0 compare interrupt 3                            */
  INTTD0CMP4_IRQn               = 42,        /*!< 16-bit TMRD0 compare interrupt 4                            */
  INTTD1CMP0_IRQn               = 43,        /*!< 16-bit TMRD1 compare interrupt 0                            */
  INTTD1CMP1_IRQn               = 44,        /*!< 16-bit TMRD1 compare interrupt 1                            */
  INTTD1CMP2_IRQn               = 45,        /*!< 16-bit TMRD1 compare interrupt 2                            */
  INTTD1CMP3_IRQn               = 46,        /*!< 16-bit TMRD1 compare interrupt 3                            */
  INTTD1CMP4_IRQn               = 47,        /*!< 16-bit TMRD1 compare interrupt 4                            */
  INTTD2CMP0_IRQn               = 48,        /*!< 16-bit TMRD2 compare interrupt 0                            */
  INTTD2CMP1_IRQn               = 49,        /*!< 16-bit TMRD2 compare interrupt 1                            */
  INTTD2CMP2_IRQn               = 50,        /*!< 16-bit TMRD2 compare interrupt 2                            */
  INTTD2CMP3_IRQn               = 51,        /*!< 16-bit TMRD2 compare interrupt 3                            */
  INTTD2CMP4_IRQn               = 52,        /*!< 16-bit TMRD2 compare interrupt 4                            */
  INTTD3CMP0_IRQn               = 53,        /*!< 16-bit TMRD3 compare interrupt 0                            */
  INTTD3CMP1_IRQn               = 54,        /*!< 16-bit TMRD3 compare interrupt 1                            */
  INTTD3CMP2_IRQn               = 55,        /*!< 16-bit TMRD3 compare interrupt 2                            */
  INTTD3CMP3_IRQn               = 56,        /*!< 16-bit TMRD3 compare interrupt 3                            */
  INTTD3CMP4_IRQn               = 57,        /*!< 16-bit TMRD3 compare interrupt 4                            */
  INTEC0_IRQn                   = 58,        /*!< PHC0 comparison interrupt                                   */
  INTEC0OVF_IRQn                = 59,        /*!< PHC0 overflow interrupt                                     */
  INTEC0DIR_IRQn                = 60,        /*!< PHC0 phase error interrupt                                  */
  INTEC0DT0_IRQn                = 61,        /*!< PHC0 cycle0 interrupt                                       */
  INTEC0DT1_IRQn                = 62,        /*!< PHC0 cycle1 interrupt                                       */
  INTEC0DT2_IRQn                = 63,        /*!< PHC0 cycle2 interrupt                                       */
  INTEC0DT3_IRQn                = 64,        /*!< PHC0 cycle3 interrupt                                       */
  INTEC1_IRQn                   = 65,        /*!< PHC1 comparison interrupt                                   */
  INTEC1OVF_IRQn                = 66,        /*!< PHC1 overflow interrupt                                     */
  INTEC1DIR_IRQn                = 67,        /*!< PHC1 phase error interrupt                                  */
  INTEC1DT0_IRQn                = 68,        /*!< PHC1 cycle0 interrupt                                       */
  INTEC1DT1_IRQn                = 69,        /*!< PHC1 cycle1 interrupt                                       */
  INTEC1DT2_IRQn                = 70,        /*!< PHC1 cycle2 interrupt                                       */
  INTEC1DT3_IRQn                = 71,        /*!< PHC1 cycle3 interrupt                                       */
  INTAD0M0_IRQn                 = 72,        /*!< AD0 conversion monitoring function interrupt 0              */
  INTAD0M1_IRQn                 = 73,        /*!< AD0 conversion monitoring function interrupt 1              */
  INTAD1M0_IRQn                 = 74,        /*!< AD1 conversion monitoring function interrupt 0              */
  INTAD1M1_IRQn                 = 75,        /*!< AD1 conversion monitoring function interrupt 1              */
  INTDMAC0TC_IRQn               = 76,        /*!< DMA terminal count status interrupt 0                       */
  INTDMAC0ERR_IRQn              = 77,        /*!< DMA error status interrupt 0                                */
  INTDMAC1TC_IRQn               = 78,        /*!< DMA terminal count status interrupt 1                       */
  INTDMAC1ERR_IRQn              = 79,        /*!< DMA error status interrupt 1                                */
  INTSSP_IRQn                   = 80,        /*!< SSP serial interface                                        */
  INTVTX_IRQn                   = 81,        /*!< VSIO transmission                                           */
  INTVRX_IRQn                   = 82,        /*!< VSIO reception                                              */
  INT8_IRQn                     = 84,        /*!< Interrupt pin 8                                             */
  INT9_IRQn                     = 85,        /*!< Interrupt pin 9                                             */
  INTA_IRQn                     = 86,        /*!< Interrupt pin A                                             */
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
// #include "system_TMPM342.h"                 /* TMPM342 System                                      */

/** @addtogroup Device_Peripheral_registers
  * @{
  */

/** Device Specific Peripheral registers structures */

/**
  * @brief DMA Controller
  */
typedef struct
{
  __I  uint32_t INTSTATUS;
  __I  uint32_t INTTCSTATUS;
  __O  uint32_t INTTCCLEAR;
  __I  uint32_t INTERRORSTATUS;
  __O  uint32_t INTERRCLR;
  __I  uint32_t RAWINTTCSTATUS;
  __I  uint32_t RAWINTERRORSTATUS;
  __I  uint32_t ENBLDCHNS;
  __IO uint32_t SOFTBREQ;
  __IO uint32_t SOFTSREQ;
       uint32_t RESERVED0[2];
  __IO uint32_t CONFIGURATION;
       uint32_t RESERVED1[51];
  __IO uint32_t C0SRCADDR;
  __IO uint32_t C0DESTADDR;
  __IO uint32_t C0LLI;
  __IO uint32_t C0CNTROL;
  __IO uint32_t C0CONFIGURATION;
       uint32_t RESERVED2[3];
  __IO uint32_t C1SRCADDR;
  __IO uint32_t C1DESTADDR;
  __IO uint32_t C1LLI;
  __IO uint32_t C1CONTROL;
  __IO uint32_t C1CONFIGURATION;
} TSB_DMAC_TypeDef;

/**
  * @brief Programmable Servo Cont
  */
typedef struct
{
  __IO uint32_t UA0;
  __IO uint32_t UM0;
  __IO uint32_t UM1;
  __IO uint32_t UL0;
  __IO uint32_t UL1;
  __IO uint32_t UR0;
  __IO uint32_t UR1;
  __IO uint32_t SGN;
  __IO uint32_t AP0;
  __IO uint32_t AP1;
  __IO uint32_t AP2;
  __IO uint32_t BR0;
  __IO uint32_t PG0;
  __IO uint32_t VG0;
       uint32_t RESERVED0[50];
  __IO uint32_t PSCCNT;
  __IO uint32_t PSCFLG;
} TSB_PSC_TypeDef;

/**
  * @brief Syncronous Serial Port
  */
typedef struct
{
  __IO uint32_t CR0;
  __IO uint32_t CR1;
  __IO uint32_t DR;
  __I  uint32_t SR;
  __IO uint32_t CPSR;
  __IO uint32_t IMSC;
  __I  uint32_t RIS;
  __I  uint32_t MIS;
  __O  uint32_t ICR;
  __IO uint32_t DMACR;
} TSB_SSP_TypeDef;

#if defined ( __CC_ARM   )           /* RealView Compiler */
#pragma anon_unions
#elif (defined (__ICCARM__))         /*  ICC Compiler     */
#pragma language=extended
#endif

/**
  * @brief UART(PL011)
  */
typedef struct
{
  __IO uint32_t DR;
union {
  __I  uint32_t SR;
  __O  uint32_t ECR;
  };
       uint32_t RESERVED0[4];
  __I  uint32_t FR;
       uint32_t RESERVED1[2];
  __IO uint32_t IBRD;
  __IO uint32_t FBRD;
  __IO uint32_t LCR_H;
  __IO uint32_t CR;
  __IO uint32_t IFLS;
  __IO uint32_t IMSC;
  __I  uint32_t RIS;
  __I  uint32_t MIS;
  __O  uint32_t ICR;
  __IO uint32_t DMACR;
} TSB_UART_TypeDef;

/**
  * @brief 12-bit AD converter
  */
typedef struct
{
  __IO uint32_t CLK;
  __IO uint32_t MOD0;
  __IO uint32_t MOD1;
  __IO uint32_t MOD2;
  __IO uint32_t MOD3;
  __IO uint32_t MOD4;
  __I  uint32_t MOD5;
  __IO uint32_t MOD6;
  __IO uint32_t MOD7;
  __IO uint32_t CMPCR0;
  __IO uint32_t CMPCR1;
  __IO uint32_t CMP0;
  __IO uint32_t CMP1;
  __I  uint32_t REG0;
  __I  uint32_t REG1;
  __I  uint32_t REG2;
  __I  uint32_t REG3;
  __I  uint32_t REG4;
  __I  uint32_t REG5;
  __I  uint32_t REG6;
  __I  uint32_t REG7;
       uint32_t RESERVED0[8];
  __I  uint32_t REGSP;
} TSB_AD_TypeDef;

/**
  * @brief 10-bit DA converter
  */
typedef struct
{
  __IO uint32_t CTL;
  __IO uint32_t REG;
} TSB_DA_TypeDef;

/**
  * @brief Timer D-common
  */
typedef struct
{
       uint32_t RESERVED0[16];
  __IO uint32_t BCR;
       uint32_t RESERVED1[3];
  __IO uint32_t EN;
  __IO uint32_t CONF;
} TSB_TD_TypeDef;

/**
  * @brief Timer D-unit0
  */
typedef struct
{
  __IO uint32_t RUN;
  __IO uint32_t CR;
  __IO uint32_t MOD;
  __IO uint32_t DMA;
       uint32_t RESERVED0;
  __IO uint32_t RG0;
  __IO uint32_t RG1;
  __IO uint32_t RG2;
  __IO uint32_t RG3;
  __IO uint32_t RG4;
  __IO uint32_t RG5;
       uint32_t RESERVED1[58];
  __I  uint32_t CP0;
  __I  uint32_t CP1;
  __I  uint32_t CP2;
  __I  uint32_t CP3;
  __I  uint32_t CP4;
  __I  uint32_t CP5;
} TSB_TD0_TypeDef;

/**
  * @brief Timer D-unit1
  */
typedef struct
{
       uint32_t RESERVED0[11];
  __IO uint32_t RG0;
  __IO uint32_t RG1;
  __IO uint32_t RG2;
  __IO uint32_t RG3;
  __IO uint32_t RG4;
       uint32_t RESERVED1[48];
  __IO uint32_t RUN;
  __IO uint32_t CR;
  __IO uint32_t MOD;
  __IO uint32_t DMA;
       uint32_t RESERVED2[7];
  __I  uint32_t CP0;
  __I  uint32_t CP1;
  __I  uint32_t CP2;
  __I  uint32_t CP3;
  __I  uint32_t CP4;
} TSB_TD1_TypeDef;

/**
  * @brief Two aspect pulse input counter
  */
typedef struct
{
  __IO uint32_t EN;
  __IO uint32_t CNT;
  __IO uint32_t IE;
  __IO uint32_t FLG;
  __IO uint32_t ARUN;
  __IO uint32_t ACP0;
  __IO uint32_t ACP1;
  __IO uint32_t ADAT;
  __IO uint32_t BRUN;
  __IO uint32_t BDMA;
  __I  uint32_t BUC;
       uint32_t RESERVED0;
  __I  uint32_t BCAP00;
  __I  uint32_t BCAP10;
  __I  uint32_t BCAP20;
  __I  uint32_t BCAP30;
  __I  uint32_t B0DAT;
  __I  uint32_t B1DAT;
  __I  uint32_t B2DAT;
  __I  uint32_t B3DAT;
  __I  uint32_t BCDAT;
       uint32_t RESERVED1[3];
  __I  uint32_t B0PDT;
  __I  uint32_t B1PDT;
  __I  uint32_t B2PDT;
  __I  uint32_t B3PDT;
} TSB_ENC_TypeDef;

/**
  * @brief Changeable data length cereal(SIO)
  */
typedef struct
{
  __IO uint32_t EN;
  __IO uint32_t BUF;
  __IO uint32_t CR0;
  __IO uint32_t CR1;
  __IO uint32_t CR2;
  __IO uint32_t CR3;
  __IO uint32_t BRCR;
  __IO uint32_t RFC;
  __IO uint32_t TFC;
  __I  uint32_t RST;
  __I  uint32_t TST;
} TSB_VSIO_TypeDef;

/**
  * @brief 16-bit Deita sigma AD converter
  */
typedef struct
{
  __IO uint32_t DSCLK;
  __IO uint32_t DSMOD0;
  __IO uint32_t DSMOD1;
  __IO uint32_t DSMOD2;
  __IO uint32_t DSMOD3;
  __IO uint32_t DSMOD4;
  __I  uint32_t DSMOD5;
  __O  uint32_t DSMOD6;
  __IO uint32_t DSMOD7;
  __IO uint32_t DSMOD8;
       uint32_t RESERVED0[54];
  __I  uint32_t DSREG0;
  __I  uint32_t DSREG1;
  __I  uint32_t DSREG2;
  __I  uint32_t DSREG3;
  __I  uint32_t DSREG4;
  __I  uint32_t DSREG5;
       uint32_t RESERVED1[58];
  __I  uint32_t DSREGSP;
       uint32_t RESERVED2[831];
  __IO uint32_t DSTEST0;
} TSB_DSAD_TypeDef;

/**
  * @brief 12-bit AD converter Mirror
  */
typedef struct
{
       uint32_t RESERVED0[13];
  __I  uint32_t REG0;
  __I  uint32_t REG1;
  __I  uint32_t REG2;
  __I  uint32_t REG3;
  __I  uint32_t REG4;
  __I  uint32_t REG5;
  __I  uint32_t REG6;
  __I  uint32_t REG7;
       uint32_t RESERVED1[8];
  __I  uint32_t REGSP;
} TSB_AD_MIR_TypeDef;

/**
  * @brief Two aspect pulse input counter Mirror
  */
typedef struct
{
       uint32_t RESERVED0[7];
  __I  uint32_t ADAT;
       uint32_t RESERVED1[2];
  __I  uint32_t BUC;
       uint32_t RESERVED2;
  __I  uint32_t BCAP00;
  __I  uint32_t BCAP10;
  __I  uint32_t BCAP20;
  __I  uint32_t BCAP30;
  __I  uint32_t B0DAT;
  __I  uint32_t B1DAT;
  __I  uint32_t B2DAT;
  __I  uint32_t B3DAT;
  __I  uint32_t BCDAT;
       uint32_t RESERVED3[3];
  __I  uint32_t B0PDT;
  __I  uint32_t B1PDT;
  __I  uint32_t B2PDT;
  __I  uint32_t B3PDT;
} TSB_ENC_MIR_TypeDef;

/**
  * @brief Port A
  */
typedef struct
{
  __IO uint32_t DATA;
  __IO uint32_t CR;
  __IO uint32_t FR1;
  __IO uint32_t FR2;
       uint32_t RESERVED0[6];
  __IO uint32_t OD;
  __IO uint32_t PUP;
       uint32_t RESERVED1[2];
  __IO uint32_t IE;
} TSB_PA_TypeDef;

/**
  * @brief Port B
  */
typedef struct
{
  __IO uint32_t DATA;
  __IO uint32_t CR;
  __IO uint32_t FR1;
  __IO uint32_t FR2;
       uint32_t RESERVED0[6];
  __IO uint32_t OD;
  __IO uint32_t PUP;
       uint32_t RESERVED1[2];
  __IO uint32_t IE;
} TSB_PB_TypeDef;

/**
  * @brief Port C
  */
typedef struct
{
  __IO uint32_t DATA;
  __IO uint32_t CR;
  __IO uint32_t FR1;
  __IO uint32_t FR2;
       uint32_t RESERVED0[6];
  __IO uint32_t OD;
  __IO uint32_t PUP;
       uint32_t RESERVED1[2];
  __IO uint32_t IE;
} TSB_PC_TypeDef;

/**
  * @brief Port D
  */
typedef struct
{
  __IO uint32_t DATA;
  __IO uint32_t CR;
  __IO uint32_t FR1;
  __IO uint32_t FR2;
       uint32_t RESERVED0[6];
  __IO uint32_t OD;
  __IO uint32_t PUP;
       uint32_t RESERVED1[2];
  __IO uint32_t IE;
} TSB_PD_TypeDef;

/**
  * @brief Port E
  */
typedef struct
{
  __IO uint32_t DATA;
  __IO uint32_t CR;
  __IO uint32_t FR1;
  __IO uint32_t FR2;
       uint32_t RESERVED0[6];
  __IO uint32_t OD;
  __IO uint32_t PUP;
       uint32_t RESERVED1[2];
  __IO uint32_t IE;
} TSB_PE_TypeDef;

/**
  * @brief Port F
  */
typedef struct
{
  __IO uint32_t DATA;
       uint32_t RESERVED0[10];
  __IO uint32_t PUP;
       uint32_t RESERVED1[2];
  __IO uint32_t IE;
} TSB_PF_TypeDef;

/**
  * @brief Port G
  */
typedef struct
{
  __IO uint32_t DATA;
       uint32_t RESERVED0[10];
  __IO uint32_t PUP;
       uint32_t RESERVED1[2];
  __IO uint32_t IE;
} TSB_PG_TypeDef;

/**
  * @brief Port H
  */
typedef struct
{
  __IO uint32_t DATA;
  __IO uint32_t CR;
  __IO uint32_t FR1;
       uint32_t RESERVED0[8];
  __IO uint32_t FPUP;
  __IO uint32_t PDN;
       uint32_t RESERVED1;
  __IO uint32_t IE;
} TSB_PH_TypeDef;

/**
  * @brief Port J
  */
typedef struct
{
  __IO uint32_t DATA;        
       uint32_t RESERVED0[10];
  __IO uint32_t PUP;
       uint32_t RESERVED1[2];
  __IO uint32_t IE;
} TSB_PJ_TypeDef;

/**
  * @brief Port K
  */
typedef struct
{
  __IO uint32_t DATA;
  __IO uint32_t CR;
  __IO uint32_t FR1;
  __IO uint32_t FR2;
  __IO uint32_t FR3;
       uint32_t RESERVED0[6];
  __IO uint32_t PUP;
       uint32_t RESERVED1[2];
  __IO uint32_t IE;
} TSB_PK_TypeDef;

/**
  * @brief Port L
  */
typedef struct
{
  __IO uint32_t DATA;
  __IO uint32_t CR;
  __IO uint32_t FR1;
} TSB_PL_TypeDef;

/**
  * @brief Port M
  */
typedef struct
{
  __IO uint32_t DATA;
       uint32_t RESERVED0;
  __I  uint32_t FR1;
       uint32_t RESERVED1[8];
  __IO uint32_t PUP;
       uint32_t RESERVED2[2];
  __IO uint32_t IE;
} TSB_PM_TypeDef;

/**
  * @brief Timer B
  */
typedef struct
{
  __IO uint32_t EN;
  __IO uint32_t RUN;
  __IO uint32_t CR;
  __IO uint32_t MOD;
  __IO uint32_t FFCR;
  __I  uint32_t ST;
  __IO uint32_t IM;
  __I  uint32_t UC;
  __IO uint32_t RG0;
  __IO uint32_t RG1;
  __I  uint32_t CP0;
  __I  uint32_t CP1;
  __IO uint32_t DMA;
} TSB_TB_TypeDef;

/**
  * @brief Serial Bus Interfac
  */
typedef struct
{
  __IO uint32_t CR0;
  __IO uint32_t CR1;
  __IO uint32_t DBR;
  __IO uint32_t I2CAR;
union {
  __O  uint32_t CR2;
  __I  uint32_t SR;
  };
  __IO uint32_t BR0;
} TSB_SBI_TypeDef;

/**
  * @brief Serial Channel(SIO/UART)
  */
typedef struct
{
  __IO uint32_t EN;
  __IO uint32_t BUF;
  __IO uint32_t CR;
  __IO uint32_t MOD0;
  __IO uint32_t BRCR;
  __IO uint32_t BRADD;
  __IO uint32_t MOD1;
  __IO uint32_t MOD2;
  __IO uint32_t RFC;
  __IO uint32_t TFC;
  __I  uint32_t RST;
  __I  uint32_t TST;
  __IO uint32_t FCNF;
  __IO uint32_t DMA;
} TSB_SC_TypeDef;

/**
  * @brief Cereal reception response
  */
typedef struct
{
  __IO uint32_t EN;
  __IO uint32_t CR0;
  __IO uint32_t CR1;
} TSB_SIOR_TypeDef;

/**
  * @brief Watchdog Timer
  */
typedef struct
{
  __IO uint32_t MOD;
  __IO uint32_t CR;
} TSB_WD_TypeDef;

/**
  * @brief Clock/Mode control
  */
typedef struct
{
  __IO uint32_t CYSCR;
  __IO uint32_t OSCCR;
  __IO uint32_t STBYCR;
  __IO uint32_t PLLSEL;
  __IO uint32_t CKSEL;
  __IO uint32_t PWMGEAR;
       uint32_t RESERVED0[9];
  __IO uint32_t PROTECT;
  __IO uint32_t IMCGA;
  __IO uint32_t IMCGB;
  __IO uint32_t IMCGC;
       uint32_t RESERVED1[5];
  __IO uint32_t ICRCG;
  __IO uint32_t RSTFLG;
} TSB_CG_TypeDef;

/**
  * @brief Flash control
  */
typedef struct
{
       uint32_t RESERVED0[4];
  __IO uint32_t SECBIT;
       uint32_t RESERVED1[3];
  __I  uint32_t FLCS;
} TSB_FC_TypeDef;


/* Memory map */
#define FLASH_BASE            (0x00000000UL)
#define RAM_BASE              (0x20000000UL)
#define PERI_BASE             (0x40000000UL)


#define TSB_DMACA_BASE             (PERI_BASE  + 0x0000000UL)
#define TSB_DMACB_BASE             (PERI_BASE  + 0x0001000UL)
#define TSB_PSC_BASE               (PERI_BASE  + 0x000C000UL)
#define TSB_SSP_BASE               (PERI_BASE  + 0x0040000UL)
#define TSB_UART_BASE              (PERI_BASE  + 0x0048000UL)
#define TSB_ADA_BASE               (PERI_BASE  + 0x0050000UL)
#define TSB_ADB_BASE               (PERI_BASE  + 0x0051000UL)
#define TSB_DA0_BASE               (PERI_BASE  + 0x0054000UL)
#define TSB_DA1_BASE               (PERI_BASE  + 0x0055000UL)
#define TSB_TDA_BASE               (PERI_BASE  + 0x0058000UL)
#define TSB_TDB_BASE               (PERI_BASE  + 0x0059000UL)
#define TSB_TD0A_BASE              (PERI_BASE  + 0x0058000UL)
#define TSB_TD0B_BASE              (PERI_BASE  + 0x0059000UL)
#define TSB_TD1A_BASE              (PERI_BASE  + 0x0058000UL)
#define TSB_TD1B_BASE              (PERI_BASE  + 0x0059000UL)
#define TSB_ENC0_BASE              (PERI_BASE  + 0x0060000UL)
#define TSB_ENC1_BASE              (PERI_BASE  + 0x0061000UL)
#define TSB_VSIO_BASE              (PERI_BASE  + 0x0062000UL)
#define TSB_DSAD_BASE              (PERI_BASE  + 0x0067000UL)
#define TSB_AD_MIRA_BASE           (PERI_BASE  + 0x0074000UL)
#define TSB_AD_MIRB_BASE           (PERI_BASE  + 0x0079000UL)
#define TSB_ENC_MIR0_BASE          (PERI_BASE  + 0x0075000UL)
#define TSB_ENC_MIR1_BASE          (PERI_BASE  + 0x0076000UL)
#define TSB_PA_BASE                (PERI_BASE  + 0x00C0000UL)
#define TSB_PB_BASE                (PERI_BASE  + 0x00C0100UL)
#define TSB_PC_BASE                (PERI_BASE  + 0x00C0200UL)
#define TSB_PD_BASE                (PERI_BASE  + 0x00C0300UL)
#define TSB_PE_BASE                (PERI_BASE  + 0x00C0400UL)
#define TSB_PF_BASE                (PERI_BASE  + 0x00C0500UL)
#define TSB_PG_BASE                (PERI_BASE  + 0x00C0600UL)
#define TSB_PH_BASE                (PERI_BASE  + 0x00C0700UL)
#define TSB_PJ_BASE                (PERI_BASE  + 0x00C0900UL)
#define TSB_PK_BASE                (PERI_BASE  + 0x00C0A00UL)
#define TSB_PL_BASE                (PERI_BASE  + 0x00C0B00UL)
#define TSB_PM_BASE                (PERI_BASE  + 0x00C0C00UL)
#define TSB_TB0_BASE               (PERI_BASE  + 0x00C4000UL)
#define TSB_TB1_BASE               (PERI_BASE  + 0x00C4100UL)
#define TSB_TB2_BASE               (PERI_BASE  + 0x00C4200UL)
#define TSB_TB3_BASE               (PERI_BASE  + 0x00C4300UL)
#define TSB_TB4_BASE               (PERI_BASE  + 0x00C4400UL)
#define TSB_TB5_BASE               (PERI_BASE  + 0x00C4500UL)
#define TSB_TB6_BASE               (PERI_BASE  + 0x00C4600UL)
#define TSB_TB7_BASE               (PERI_BASE  + 0x00C4700UL)
#define TSB_TB8_BASE               (PERI_BASE  + 0x00C4800UL)
#define TSB_TB9_BASE               (PERI_BASE  + 0x00C4900UL)
#define TSB_SBI_BASE               (PERI_BASE  + 0x00E0000UL)
#define TSB_SC0_BASE               (PERI_BASE  + 0x00E1000UL)
#define TSB_SC2_BASE               (PERI_BASE  + 0x00E1200UL)
#define TSB_SC1_BASE               (PERI_BASE  + 0x00E1100UL)
#define TSB_SC3_BASE               (PERI_BASE  + 0x00E1300UL)
#define TSB_SIOR_BASE              (PERI_BASE  + 0x00F1000UL)
#define TSB_WD_BASE                (PERI_BASE  + 0x00F2000UL)
#define TSB_CG_BASE                (PERI_BASE  + 0x00F3000UL)
#define TSB_FC_BASE                (PERI_BASE  + 0x1FFF000UL)


/* Peripheral declaration */
#define TSB_DMACA                  ((   TSB_DMAC_TypeDef *) TSB_DMACA_BASE)
#define TSB_DMACB                  ((   TSB_DMAC_TypeDef *) TSB_DMACB_BASE)
#define TSB_PSC                    ((    TSB_PSC_TypeDef *)   TSB_PSC_BASE)
#define TSB_SSP                    ((    TSB_SSP_TypeDef *)   TSB_SSP_BASE)
#define TSB_UART                   ((   TSB_UART_TypeDef *)  TSB_UART_BASE)
#define TSB_ADA                    ((     TSB_AD_TypeDef *)   TSB_ADA_BASE)
#define TSB_ADB                    ((     TSB_AD_TypeDef *)   TSB_ADB_BASE)
#define TSB_DA0                    ((     TSB_DA_TypeDef *)   TSB_DA0_BASE)
#define TSB_DA1                    ((     TSB_DA_TypeDef *)   TSB_DA1_BASE)
#define TSB_TDA                    ((     TSB_TD_TypeDef *)   TSB_TDA_BASE)
#define TSB_TDB                    ((     TSB_TD_TypeDef *)   TSB_TDB_BASE)
#define TSB_TD0A                   ((    TSB_TD0_TypeDef *)  TSB_TD0A_BASE)
#define TSB_TD0B                   ((    TSB_TD0_TypeDef *)  TSB_TD0B_BASE)
#define TSB_TD1A                   ((    TSB_TD1_TypeDef *)  TSB_TD1A_BASE)
#define TSB_TD1B                   ((    TSB_TD1_TypeDef *)  TSB_TD1B_BASE)
#define TSB_ENC0                   ((    TSB_ENC_TypeDef *)  TSB_ENC0_BASE)
#define TSB_ENC1                   ((    TSB_ENC_TypeDef *)  TSB_ENC1_BASE)
#define TSB_VSIO                   ((   TSB_VSIO_TypeDef *)  TSB_VSIO_BASE)
#define TSB_DSAD                   ((   TSB_DSAD_TypeDef *)  TSB_DSAD_BASE)
#define TSB_AD_MIRA                (( TSB_AD_MIR_TypeDef *)TSB_AD_MIRA_BASE)
#define TSB_AD_MIRB                (( TSB_AD_MIR_TypeDef *)TSB_AD_MIRB_BASE)
#define TSB_ENC_MIR0               ((TSB_ENC_MIR_TypeDef *)TSB_ENC_MIR0_BASE)
#define TSB_ENC_MIR1               ((TSB_ENC_MIR_TypeDef *)TSB_ENC_MIR1_BASE)
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
#define TSB_SBI                    ((    TSB_SBI_TypeDef *)   TSB_SBI_BASE)
#define TSB_SC0                    ((     TSB_SC_TypeDef *)   TSB_SC0_BASE)
#define TSB_SC2                    ((     TSB_SC_TypeDef *)   TSB_SC2_BASE)
#define TSB_SC1                    ((     TSB_SC_TypeDef *)   TSB_SC1_BASE)
#define TSB_SC3                    ((     TSB_SC_TypeDef *)   TSB_SC3_BASE)
#define TSB_SIOR                   ((   TSB_SIOR_TypeDef *)  TSB_SIOR_BASE)
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
#define TSB_DMACA_INTTCCLEAR_INTTCCLEAR0          (*((__O  uint32_t *)BITBAND_PERI(&TSB_DMACA->INTTCCLEAR,0)))
#define TSB_DMACA_INTTCCLEAR_INTTCCLEAR1          (*((__O  uint32_t *)BITBAND_PERI(&TSB_DMACA->INTTCCLEAR,1)))
#define TSB_DMACA_INTERRORSTATUS_INTERRSTATUS0    (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->INTERRORSTATUS,0)))
#define TSB_DMACA_INTERRORSTATUS_INTERRSTATUS1    (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->INTERRORSTATUS,1)))
#define TSB_DMACA_INTERRCLR_INTERRCLR0            (*((__O  uint32_t *)BITBAND_PERI(&TSB_DMACA->INTERRCLR,0)))
#define TSB_DMACA_INTERRCLR_INTERRCLR1            (*((__O  uint32_t *)BITBAND_PERI(&TSB_DMACA->INTERRCLR,1)))
#define TSB_DMACA_RAWINTTCSTATUS_RAWINTTCS0       (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->RAWINTTCSTATUS,0)))
#define TSB_DMACA_RAWINTTCSTATUS_RAWINTTCS1       (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->RAWINTTCSTATUS,1)))
#define TSB_DMACA_RAWINTERRORSTATUS_RAWINTERRS0   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->RAWINTERRORSTATUS,0)))
#define TSB_DMACA_RAWINTERRORSTATUS_RAWINTERRS1   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->RAWINTERRORSTATUS,1)))
#define TSB_DMACA_ENBLDCHNS_ENABLEDCH0            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->ENBLDCHNS,0)))
#define TSB_DMACA_ENBLDCHNS_ENABLEDCH1            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACA->ENBLDCHNS,1)))
#define TSB_DMACA_SOFTSREQ_SOFTSREQ0              (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->SOFTSREQ,0)))
#define TSB_DMACA_SOFTSREQ_SOFTSREQ1              (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->SOFTSREQ,1)))
#define TSB_DMACA_SOFTSREQ_SOFTSREQ14             (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->SOFTSREQ,14)))
#define TSB_DMACA_SOFTSREQ_SOFTSREQ15             (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->SOFTSREQ,15)))
#define TSB_DMACA_CONFIGURATION_E                 (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->CONFIGURATION,0)))
#define TSB_DMACA_CONFIGURATION_M                 (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->CONFIGURATION,1)))
#define TSB_DMACA_C0CNTROL_SI                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C0CNTROL,26)))
#define TSB_DMACA_C0CNTROL_DI                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C0CNTROL,27)))
#define TSB_DMACA_C0CNTROL_I                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C0CNTROL,31)))
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
#define TSB_DMACA_C1CONFIGURATION_ACTIVE          (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C1CONFIGURATION,17)))
#define TSB_DMACA_C1CONFIGURATION_HALT            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACA->C1CONFIGURATION,18)))

#define TSB_DMACB_INTSTATUS_INTSTATUS0            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTSTATUS,0)))
#define TSB_DMACB_INTSTATUS_INTSTATUS1            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTSTATUS,1)))
#define TSB_DMACB_INTTCSTATUS_INTTCSTATUS0        (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTTCSTATUS,0)))
#define TSB_DMACB_INTTCSTATUS_INTTCSTATUS1        (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTTCSTATUS,1)))
#define TSB_DMACB_INTTCCLEAR_INTTCCLEAR0          (*((__O  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTTCCLEAR,0)))
#define TSB_DMACB_INTTCCLEAR_INTTCCLEAR1          (*((__O  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTTCCLEAR,1)))
#define TSB_DMACB_INTERRORSTATUS_INTERRSTATUS0    (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTERRORSTATUS,0)))
#define TSB_DMACB_INTERRORSTATUS_INTERRSTATUS1    (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTERRORSTATUS,1)))
#define TSB_DMACB_INTERRCLR_INTERRCLR0            (*((__O  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTERRCLR,0)))
#define TSB_DMACB_INTERRCLR_INTERRCLR1            (*((__O  uint32_t *)BITBAND_PERI(&TSB_DMACB->INTERRCLR,1)))
#define TSB_DMACB_RAWINTTCSTATUS_RAWINTTCS0       (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->RAWINTTCSTATUS,0)))
#define TSB_DMACB_RAWINTTCSTATUS_RAWINTTCS1       (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->RAWINTTCSTATUS,1)))
#define TSB_DMACB_RAWINTERRORSTATUS_RAWINTERRS0   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->RAWINTERRORSTATUS,0)))
#define TSB_DMACB_RAWINTERRORSTATUS_RAWINTERRS1   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->RAWINTERRORSTATUS,1)))
#define TSB_DMACB_ENBLDCHNS_ENABLEDCH0            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->ENBLDCHNS,0)))
#define TSB_DMACB_ENBLDCHNS_ENABLEDCH1            (*((__I  uint32_t *)BITBAND_PERI(&TSB_DMACB->ENBLDCHNS,1)))
#define TSB_DMACB_SOFTSREQ_SOFTSREQ0              (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->SOFTSREQ,0)))
#define TSB_DMACB_SOFTSREQ_SOFTSREQ1              (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->SOFTSREQ,1)))
#define TSB_DMACB_SOFTSREQ_SOFTSREQ14             (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->SOFTSREQ,14)))
#define TSB_DMACB_SOFTSREQ_SOFTSREQ15             (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->SOFTSREQ,15)))
#define TSB_DMACB_CONFIGURATION_E                 (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->CONFIGURATION,0)))
#define TSB_DMACB_CONFIGURATION_M                 (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->CONFIGURATION,1)))
#define TSB_DMACB_C0CNTROL_SI                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C0CNTROL,26)))
#define TSB_DMACB_C0CNTROL_DI                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C0CNTROL,27)))
#define TSB_DMACB_C0CNTROL_I                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C0CNTROL,31)))
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
#define TSB_DMACB_C1CONFIGURATION_ACTIVE          (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C1CONFIGURATION,17)))
#define TSB_DMACB_C1CONFIGURATION_HALT            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DMACB->C1CONFIGURATION,18)))


/* Programmable Servo Controller  */
#define TSB_PSC_SGN_SA0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSC->SGN,16)))
#define TSB_PSC_SGN_SM0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSC->SGN,17)))
#define TSB_PSC_SGN_SM1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSC->SGN,18)))
#define TSB_PSC_SGN_SL0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSC->SGN,19)))
#define TSB_PSC_SGN_SL1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSC->SGN,20)))
#define TSB_PSC_SGN_SR0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSC->SGN,21)))
#define TSB_PSC_SGN_SR1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSC->SGN,22)))
#define TSB_PSC_PSCCNT_START                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSC->PSCCNT,16)))
#define TSB_PSC_PSCCNT_TENB                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSC->PSCCNT,17)))
#define TSB_PSC_PSCCNT_STEP                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSC->PSCCNT,24)))
#define TSB_PSC_PSCCNT_BRK                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSC->PSCCNT,25)))
#define TSB_PSC_PSCFLG_OVER                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSC->PSCFLG,16)))
#define TSB_PSC_PSCFLG_UNDER                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSC->PSCFLG,17)))
#define TSB_PSC_PSCFLG_ZERO                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_PSC->PSCFLG,24)))


/* Syncronous Serial Port */
#define TSB_SSP_CR0_SPO                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP->CR0,6)))
#define TSB_SSP_CR0_SPH                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP->CR0,7)))
#define TSB_SSP_CR1_SSE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP->CR1,1)))
#define TSB_SSP_CR1_MS                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP->CR1,2)))
#define TSB_SSP_CR1_SOD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP->CR1,3)))
#define TSB_SSP_SR_TFE                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP->SR,0)))
#define TSB_SSP_SR_TNF                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP->SR,1)))
#define TSB_SSP_SR_RNE                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP->SR,2)))
#define TSB_SSP_SR_RFF                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP->SR,3)))
#define TSB_SSP_SR_BSY                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP->SR,4)))
#define TSB_SSP_IMSC_RORIM                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP->IMSC,0)))
#define TSB_SSP_IMSC_RTIM                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP->IMSC,1)))
#define TSB_SSP_IMSC_RXIM                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP->IMSC,2)))
#define TSB_SSP_IMSC_TXIM                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP->IMSC,3)))
#define TSB_SSP_RIS_RORRIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP->RIS,0)))
#define TSB_SSP_RIS_RTRIS                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP->RIS,1)))
#define TSB_SSP_RIS_RXRIS                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP->RIS,2)))
#define TSB_SSP_RIS_TXRIS                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP->RIS,3)))
#define TSB_SSP_MIS_RORMIS                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP->MIS,0)))
#define TSB_SSP_MIS_RTMIS                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP->MIS,1)))
#define TSB_SSP_MIS_RXMIS                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP->MIS,2)))
#define TSB_SSP_MIS_TXMIS                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_SSP->MIS,3)))
#define TSB_SSP_ICR_RORIC                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_SSP->ICR,0)))
#define TSB_SSP_ICR_RTIC                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_SSP->ICR,1)))
#define TSB_SSP_DMACR_RXDMAE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP->DMACR,0)))
#define TSB_SSP_DMACR_TXDMAE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_SSP->DMACR,1)))


/* UART(PL011) */
#define TSB_UART_DR_FE                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->DR,8)))
#define TSB_UART_DR_PE                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->DR,9)))
#define TSB_UART_DR_BE                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->DR,10)))
#define TSB_UART_DR_OE                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->DR,11)))
#define TSB_UART_SR_FE                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->SR,0)))
#define TSB_UART_SR_PE                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->SR,1)))
#define TSB_UART_SR_BE                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->SR,2)))
#define TSB_UART_SR_OE                            (*((__I  uint32_t *)BITBAND_PERI(&TSB_UART->SR,3)))
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
#define TSB_UART_ICR_REIC                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART->ICR,8)))
#define TSB_UART_ICR_BEIC                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART->ICR,9)))
#define TSB_UART_ICR_OEIC                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_UART->ICR,10)))
#define TSB_UART_DMACR_RXDMAE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->DMACR,0)))
#define TSB_UART_DMACR_TXDMAE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->DMACR,1)))
#define TSB_UART_DMACR_DMAONERR                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_UART->DMACR,2)))


/* 12-bit AD converter */
#define TSB_ADA_MOD0_ADS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_ADA->MOD0,0)))
#define TSB_ADA_MOD0_HPADS                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_ADA->MOD0,1)))
#define TSB_ADA_MOD1_ADHWE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD1,0)))
#define TSB_ADA_MOD1_ADHWS                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD1,1)))
#define TSB_ADA_MOD1_HPADHWE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD1,2)))
#define TSB_ADA_MOD1_HPADHWS                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD1,3)))
#define TSB_ADA_MOD1_RCUT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD1,5)))
#define TSB_ADA_MOD1_I2AD                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD1,6)))
#define TSB_ADA_MOD1_VREFON                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD1,7)))
#define TSB_ADA_MOD3_SCAN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD3,0)))
#define TSB_ADA_MOD3_REPEAT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD3,1)))
#define TSB_ADA_MOD5_ADBF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->MOD5,0)))
#define TSB_ADA_MOD5_EOCF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->MOD5,1)))
#define TSB_ADA_MOD5_HPADBF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->MOD5,2)))
#define TSB_ADA_MOD5_HPEOCF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->MOD5,3)))
#define TSB_ADA_MOD7_INTADDMA                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD7,0)))
#define TSB_ADA_MOD7_INTADHPDMA                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->MOD7,1)))
#define TSB_ADA_CMPCR0_ADBIG0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR0,4)))
#define TSB_ADA_CMPCR0_CMPCOND0                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR0,5)))
#define TSB_ADA_CMPCR0_CMP0EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR0,7)))
#define TSB_ADA_CMPCR1_ADBIG1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR1,4)))
#define TSB_ADA_CMPCR1_CMPCOND1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR1,5)))
#define TSB_ADA_CMPCR1_CMP1EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADA->CMPCR1,7)))
#define TSB_ADA_REG0_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG0,12)))
#define TSB_ADA_REG0_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG0,13)))
#define TSB_ADA_REG0_ADPOSWF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG0,14)))
#define TSB_ADA_REG1_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG1,12)))
#define TSB_ADA_REG1_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG1,13)))
#define TSB_ADA_REG1_ADPOSWF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG1,14)))
#define TSB_ADA_REG2_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG2,12)))
#define TSB_ADA_REG2_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG2,13)))
#define TSB_ADA_REG2_ADPOSWF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG2,14)))
#define TSB_ADA_REG3_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG3,12)))
#define TSB_ADA_REG3_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG3,13)))
#define TSB_ADA_REG3_ADPOSWF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG3,14)))
#define TSB_ADA_REG4_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG4,12)))
#define TSB_ADA_REG4_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG4,13)))
#define TSB_ADA_REG4_ADPOSWF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG4,14)))
#define TSB_ADA_REG5_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG5,12)))
#define TSB_ADA_REG5_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG5,13)))
#define TSB_ADA_REG5_ADPOSWF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG5,14)))
#define TSB_ADA_REG6_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG6,12)))
#define TSB_ADA_REG6_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG6,13)))
#define TSB_ADA_REG6_ADPOSWF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG6,14)))
#define TSB_ADA_REG7_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG7,12)))
#define TSB_ADA_REG7_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG7,13)))
#define TSB_ADA_REG7_ADPOSWF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REG7,14)))
#define TSB_ADA_REGSP_ADRFSP                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REGSP,12)))
#define TSB_ADA_REGSP_ADOVFSP                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADA->REGSP,13)))

#define TSB_ADB_MOD0_ADS                          (*((__O  uint32_t *)BITBAND_PERI(&TSB_ADB->MOD0,0)))
#define TSB_ADB_MOD0_HPADS                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_ADB->MOD0,1)))
#define TSB_ADB_MOD1_ADHWE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD1,0)))
#define TSB_ADB_MOD1_ADHWS                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD1,1)))
#define TSB_ADB_MOD1_HPADHWE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD1,2)))
#define TSB_ADB_MOD1_HPADHWS                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD1,3)))
#define TSB_ADB_MOD1_RCUT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD1,5)))
#define TSB_ADB_MOD1_I2AD                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD1,6)))
#define TSB_ADB_MOD1_VREFON                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD1,7)))
#define TSB_ADB_MOD3_SCAN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD3,0)))
#define TSB_ADB_MOD3_REPEAT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD3,1)))
#define TSB_ADB_MOD5_ADBF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->MOD5,0)))
#define TSB_ADB_MOD5_EOCF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->MOD5,1)))
#define TSB_ADB_MOD5_HPADBF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->MOD5,2)))
#define TSB_ADB_MOD5_HPEOCF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->MOD5,3)))
#define TSB_ADB_MOD7_INTADDMA                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD7,0)))
#define TSB_ADB_MOD7_INTADHPDMA                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->MOD7,1)))
#define TSB_ADB_CMPCR0_ADBIG0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR0,4)))
#define TSB_ADB_CMPCR0_CMPCOND0                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR0,5)))
#define TSB_ADB_CMPCR0_CMP0EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR0,7)))
#define TSB_ADB_CMPCR1_ADBIG1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR1,4)))
#define TSB_ADB_CMPCR1_CMPCOND1                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR1,5)))
#define TSB_ADB_CMPCR1_CMP1EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ADB->CMPCR1,7)))
#define TSB_ADB_REG0_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG0,12)))
#define TSB_ADB_REG0_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG0,13)))
#define TSB_ADB_REG0_ADPOSWF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG0,14)))
#define TSB_ADB_REG1_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG1,12)))
#define TSB_ADB_REG1_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG1,13)))
#define TSB_ADB_REG1_ADPOSWF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG1,14)))
#define TSB_ADB_REG2_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG2,12)))
#define TSB_ADB_REG2_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG2,13)))
#define TSB_ADB_REG2_ADPOSWF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG2,14)))
#define TSB_ADB_REG3_ADRF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG3,12)))
#define TSB_ADB_REG3_ADOVRF                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG3,13)))
#define TSB_ADB_REG3_ADPOSWF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REG3,14)))
#define TSB_ADB_REGSP_ADRFSP                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REGSP,12)))
#define TSB_ADB_REGSP_ADOVFSP                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ADB->REGSP,13)))


/* 10-bit DA converter */
#define TSB_DA0_CTL_OP                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DA0->CTL,0)))
#define TSB_DA0_CTL_VREFON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_DA0->CTL,1)))

#define TSB_DA1_CTL_OP                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_DA1->CTL,0)))
#define TSB_DA1_CTL_VREFON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_DA1->CTL,1)))


/* Timer D-common */
#define TSB_TDA_BCR_TDSFT00                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_TDA->BCR,0)))
#define TSB_TDA_BCR_TDSFT01                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_TDA->BCR,1)))
#define TSB_TDA_BCR_TDSFT10                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_TDA->BCR,2)))
#define TSB_TDA_BCR_TDSFT11                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_TDA->BCR,3)))
#define TSB_TDA_BCR_PHSCHG                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->BCR,4)))
#define TSB_TDA_EN_TDHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->EN,5)))
#define TSB_TDA_EN_TDEN0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->EN,6)))
#define TSB_TDA_EN_TDEN1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->EN,7)))
#define TSB_TDA_CONF_TDI2TD0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->CONF,6)))
#define TSB_TDA_CONF_TDI2TD1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDA->CONF,7)))

#define TSB_TDB_BCR_TDSFT00                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_TDB->BCR,0)))
#define TSB_TDB_BCR_TDSFT01                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_TDB->BCR,1)))
#define TSB_TDB_BCR_TDSFT10                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_TDB->BCR,2)))
#define TSB_TDB_BCR_TDSFT11                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_TDB->BCR,3)))
#define TSB_TDB_BCR_PHSCHG                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->BCR,4)))
#define TSB_TDB_EN_TDHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->EN,5)))
#define TSB_TDB_EN_TDEN0                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->EN,6)))
#define TSB_TDB_EN_TDEN1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->EN,7)))
#define TSB_TDB_CONF_TDI2TD0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->CONF,6)))
#define TSB_TDB_CONF_TDI2TD1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TDB->CONF,7)))


/* Timer D-unit0 */
#define TSB_TD0A_RUN_TDRUN                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_TD0A->RUN,0)))
#define TSB_TD0A_CR_TDRDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD0A->CR,2)))
#define TSB_TD0A_CR_TDMDPT00                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD0A->CR,4)))
#define TSB_TD0A_CR_TDMDPT01                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD0A->CR,8)))
#define TSB_TD0A_MOD_TDCLE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD0A->MOD,4)))
#define TSB_TD0A_MOD_TDIV0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD0A->MOD,6)))
#define TSB_TD0A_MOD_TDIV1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD0A->MOD,7)))
#define TSB_TD0A_DMA_DMAEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD0A->DMA,0)))

#define TSB_TD0B_RUN_TDRUN                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_TD0B->RUN,0)))
#define TSB_TD0B_CR_TDRDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD0B->CR,2)))
#define TSB_TD0B_CR_TDMDPT00                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD0B->CR,4)))
#define TSB_TD0B_CR_TDMDPT01                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD0B->CR,8)))
#define TSB_TD0B_MOD_TDCLE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD0B->MOD,4)))
#define TSB_TD0B_MOD_TDIV0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD0B->MOD,6)))
#define TSB_TD0B_MOD_TDIV1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD0B->MOD,7)))
#define TSB_TD0B_DMA_DMAEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD0B->DMA,0)))


/* Timer D-unit1 */
#define TSB_TD1A_RUN_TDRUN                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_TD1A->RUN,0)))
#define TSB_TD1A_CR_TDRDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD1A->CR,2)))
#define TSB_TD1A_CR_TDMDPT10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD1A->CR,4)))
#define TSB_TD1A_CR_TDMDPT11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD1A->CR,8)))
#define TSB_TD1A_MOD_TDCLE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD1A->MOD,4)))
#define TSB_TD1A_MOD_TDIV0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD1A->MOD,6)))
#define TSB_TD1A_MOD_TDIV1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD1A->MOD,7)))
#define TSB_TD1A_DMA_DMAEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD1A->DMA,0)))

#define TSB_TD1B_RUN_TDRUN                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_TD1B->RUN,0)))
#define TSB_TD1B_CR_TDRDE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD1B->CR,2)))
#define TSB_TD1B_CR_TDMDPT10                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD1B->CR,4)))
#define TSB_TD1B_CR_TDMDPT11                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD1B->CR,8)))
#define TSB_TD1B_MOD_TDCLE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD1B->MOD,4)))
#define TSB_TD1B_MOD_TDIV0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD1B->MOD,6)))
#define TSB_TD1B_MOD_TDIV1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD1B->MOD,7)))
#define TSB_TD1B_DMA_DMAEN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TD1B->DMA,0)))


/* Two aspect pulse input counter */
#define TSB_ENC0_EN_ENCEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->EN,0)))
#define TSB_ENC0_CNT_PBDIR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->CNT,11)))
#define TSB_ENC0_CNT_MA12                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->CNT,12)))
#define TSB_ENC0_CNT_MA2DIR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->CNT,13)))
#define TSB_ENC0_IE_INTENCCP0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->IE,0)))
#define TSB_ENC0_IE_INTENCCP1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->IE,1)))
#define TSB_ENC0_IE_INTENCOVF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->IE,2)))
#define TSB_ENC0_IE_INTENCUDF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->IE,3)))
#define TSB_ENC0_IE_INTB0DT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->IE,4)))
#define TSB_ENC0_IE_INTB1DT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->IE,5)))
#define TSB_ENC0_IE_INTB2DT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->IE,6)))
#define TSB_ENC0_IE_INTB3DT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->IE,7)))
#define TSB_ENC0_IE_INTDIR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->IE,8)))
#define TSB_ENC0_IE_INTOVF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->IE,9)))
#define TSB_ENC0_FLG_CMP0F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->FLG,0)))
#define TSB_ENC0_FLG_CMP1F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->FLG,1)))
#define TSB_ENC0_FLG_OVF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->FLG,2)))
#define TSB_ENC0_FLG_UDF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->FLG,3)))
#define TSB_ENC0_FLG_SB0F                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->FLG,4)))
#define TSB_ENC0_FLG_SB1F                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->FLG,5)))
#define TSB_ENC0_FLG_SB2F                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->FLG,6)))
#define TSB_ENC0_FLG_SB3F                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->FLG,7)))
#define TSB_ENC0_FLG_DIRF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->FLG,8)))
#define TSB_ENC0_ARUN_ENCRUN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->ARUN,0)))
#define TSB_ENC0_ARUN_ENCCLR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->ARUN,1)))
#define TSB_ENC0_BRUN_T24RUN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC0->BRUN,0)))
#define TSB_ENC0_BCAP00_OVF00                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC0->BCAP00,24)))
#define TSB_ENC0_BCAP10_OVF10                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC0->BCAP10,24)))
#define TSB_ENC0_BCAP20_OVF20                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC0->BCAP20,24)))
#define TSB_ENC0_BCAP30_OVF30                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC0->BCAP30,24)))

#define TSB_ENC1_EN_ENCEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->EN,0)))
#define TSB_ENC1_CNT_PBDIR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->CNT,11)))
#define TSB_ENC1_CNT_MA12                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->CNT,12)))
#define TSB_ENC1_CNT_MA2DIR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->CNT,13)))
#define TSB_ENC1_IE_INTENCCP0                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->IE,0)))
#define TSB_ENC1_IE_INTENCCP1                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->IE,1)))
#define TSB_ENC1_IE_INTENCOVF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->IE,2)))
#define TSB_ENC1_IE_INTENCUDF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->IE,3)))
#define TSB_ENC1_IE_INTB0DT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->IE,4)))
#define TSB_ENC1_IE_INTB1DT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->IE,5)))
#define TSB_ENC1_IE_INTB2DT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->IE,6)))
#define TSB_ENC1_IE_INTB3DT                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->IE,7)))
#define TSB_ENC1_IE_INTDIR                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->IE,8)))
#define TSB_ENC1_IE_INTOVF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->IE,9)))
#define TSB_ENC1_FLG_CMP0F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->FLG,0)))
#define TSB_ENC1_FLG_CMP1F                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->FLG,1)))
#define TSB_ENC1_FLG_OVF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->FLG,2)))
#define TSB_ENC1_FLG_UDF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->FLG,3)))
#define TSB_ENC1_FLG_SB0F                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->FLG,4)))
#define TSB_ENC1_FLG_SB1F                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->FLG,5)))
#define TSB_ENC1_FLG_SB2F                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->FLG,6)))
#define TSB_ENC1_FLG_SB3F                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->FLG,7)))
#define TSB_ENC1_FLG_DIRF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->FLG,8)))
#define TSB_ENC1_ARUN_ENCRUN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->ARUN,0)))
#define TSB_ENC1_ARUN_ENCCLR                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->ARUN,1)))
#define TSB_ENC1_BRUN_T24RUN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_ENC1->BRUN,0)))
#define TSB_ENC1_BCAP00_OVF00                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC1->BCAP00,24)))
#define TSB_ENC1_BCAP10_OVF10                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC1->BCAP10,24)))
#define TSB_ENC1_BCAP20_OVF20                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC1->BCAP20,24)))
#define TSB_ENC1_BCAP30_OVF30                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC1->BCAP30,24)))


/* Changeable data length cereal(SIO) */
#define TSB_VSIO_EN_SIOE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->EN,0)))
#define TSB_VSIO_CR0_DL1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR0,1)))
#define TSB_VSIO_CR0_DRCHG                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR0,6)))
#define TSB_VSIO_CR0_CKPH                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR0,7)))
#define TSB_VSIO_CR0_CS0PH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR0,8)))
#define TSB_VSIO_CR0_CS1PH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR0,9)))
#define TSB_VSIO_CR1_CSS                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR1,4)))
#define TSB_VSIO_CR1_TRXE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR1,7)))
#define TSB_VSIO_CR3_INTTXWE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR3,0)))
#define TSB_VSIO_CR3_INTTXFE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR3,1)))
#define TSB_VSIO_CR3_INTRXWE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR3,2)))
#define TSB_VSIO_CR3_INTRXFE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR3,3)))
#define TSB_VSIO_CR3_INTRXEE                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR3,4)))
#define TSB_VSIO_CR3_DMATE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR3,6)))
#define TSB_VSIO_CR3_DMARE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR3,7)))
#define TSB_VSIO_CR3_TWEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR3,8)))
#define TSB_VSIO_CR3_RWEND                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR3,9)))
#define TSB_VSIO_CR3_RXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_VSIO->CR3,11)))
#define TSB_VSIO_CR3_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_VSIO->CR3,12)))
#define TSB_VSIO_CR3_ORER                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_VSIO->CR3,13)))
#define TSB_VSIO_CR3_RBFLL                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_VSIO->CR3,14)))
#define TSB_VSIO_CR3_TBEMP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_VSIO->CR3,15)))
#define TSB_VSIO_RFC_RFCS                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_VSIO->RFC,7)))
#define TSB_VSIO_TFC_TFCS                         (*((__O  uint32_t *)BITBAND_PERI(&TSB_VSIO->TFC,7)))


/* 16-bit Deita sigma AD converter */
#define TSB_DSAD_DSMOD0_ADS                       (*((__O  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD0,0)))
#define TSB_DSAD_DSMOD0_HPADS                     (*((__O  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD0,1)))
#define TSB_DSAD_DSMOD1_ADHWE                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD1,0)))
#define TSB_DSAD_DSMOD1_ADHWS                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD1,1)))
#define TSB_DSAD_DSMOD1_HPADHWE                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD1,2)))
#define TSB_DSAD_DSMOD1_HPADHWS                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD1,3)))
#define TSB_DSAD_DSMOD1_LP_EN                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD1,4)))
#define TSB_DSAD_DSMOD1_MOD_EN                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD1,5)))
#define TSB_DSAD_DSMOD1_I2AD                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD1,6)))
#define TSB_DSAD_DSMOD1_BIAS_EN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD1,7)))
#define TSB_DSAD_DSMOD3_SCAN                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD3,0)))
#define TSB_DSAD_DSMOD3_REPEAT                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD3,1)))
#define TSB_DSAD_DSMOD5_ADBF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD5,0)))
#define TSB_DSAD_DSMOD5_EOCF                      (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD5,1)))
#define TSB_DSAD_DSMOD5_HPADBF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD5,2)))
#define TSB_DSAD_DSMOD5_HPEOCF                    (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD5,3)))
#define TSB_DSAD_DSMOD7_INTADDMA                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD7,0)))
#define TSB_DSAD_DSMOD7_INTDAHPDMA                (*((__IO uint32_t *)BITBAND_PERI(&TSB_DSAD->DSMOD7,1)))
#define TSB_DSAD_DSREG0_ADR0F                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSREG0,16)))
#define TSB_DSAD_DSREG0_AD0VR0F                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSREG0,17)))
#define TSB_DSAD_DSREG1_ADR1F                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSREG1,16)))
#define TSB_DSAD_DSREG1_AD0VR1F                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSREG1,17)))
#define TSB_DSAD_DSREG2_ADR2F                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSREG2,16)))
#define TSB_DSAD_DSREG2_AD0VR2F                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSREG2,17)))
#define TSB_DSAD_DSREG3_ADR3F                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSREG3,16)))
#define TSB_DSAD_DSREG3_AD0VR3F                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSREG3,17)))
#define TSB_DSAD_DSREG4_ADR4F                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSREG4,16)))
#define TSB_DSAD_DSREG4_AD0VR4F                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSREG4,17)))
#define TSB_DSAD_DSREG5_ADR5F                     (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSREG5,16)))
#define TSB_DSAD_DSREG5_AD0VR5F                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSREG5,17)))
#define TSB_DSAD_DSREGSP_ADRFSP                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSREGSP,16)))
#define TSB_DSAD_DSREGSP_AD0VRF                   (*((__I  uint32_t *)BITBAND_PERI(&TSB_DSAD->DSREGSP,17)))
#define TSB_DSAD_DSTEST0_WR_EN                    (*((__IO uint32_t *)BITBAND_PERI(&TSB_DSAD->DSTEST0,0)))
#define TSB_DSAD_DSTEST0_MON_EN                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_DSAD->DSTEST0,1)))




/* Two aspect pulse input counter Mirror */
#define TSB_ENC_MIR0_BCAP00_OVF_MIR00             (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC_MIR0->BCAP00,24)))
#define TSB_ENC_MIR0_BCAP10_OVF_MIR10             (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC_MIR0->BCAP10,24)))
#define TSB_ENC_MIR0_BCAP20_OVF_MIR20             (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC_MIR0->BCAP20,24)))
#define TSB_ENC_MIR0_BCAP30_OVF_MIR30             (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC_MIR0->BCAP30,24)))

#define TSB_ENC_MIR1_BCAP00_OVF_MIR00             (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC_MIR1->BCAP00,24)))
#define TSB_ENC_MIR1_BCAP10_OVF_MIR10             (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC_MIR1->BCAP10,24)))
#define TSB_ENC_MIR1_BCAP20_OVF_MIR20             (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC_MIR1->BCAP20,24)))
#define TSB_ENC_MIR1_BCAP30_OVF_MIR30             (*((__I  uint32_t *)BITBAND_PERI(&TSB_ENC_MIR1->BCAP30,24)))


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
#define TSB_PB_FR2_PB1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,1)))
#define TSB_PB_FR2_PB2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PB->FR2,2)))
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
#define TSB_PC_FR1_PC5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,5)))
#define TSB_PC_FR1_PC6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,6)))
#define TSB_PC_FR1_PC7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR1,7)))
#define TSB_PC_FR2_PC0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,0)))
#define TSB_PC_FR2_PC1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,1)))
#define TSB_PC_FR2_PC2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,2)))
#define TSB_PC_FR2_PC3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PC->FR2,3)))
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
#define TSB_PD_FR1_PD5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,5)))
#define TSB_PD_FR1_PD6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,6)))
#define TSB_PD_FR1_PD7F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR1,7)))
#define TSB_PD_FR2_PD0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,0)))
#define TSB_PD_FR2_PD1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,1)))
#define TSB_PD_FR2_PD2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,2)))
#define TSB_PD_FR2_PD3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,3)))
#define TSB_PD_FR2_PD4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,4)))
#define TSB_PD_FR2_PD5F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,5)))
#define TSB_PD_FR2_PD6F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,6)))
#define TSB_PD_FR2_PD7F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->FR2,7)))
#define TSB_PD_OD_PD0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,0)))
#define TSB_PD_OD_PD1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,1)))
#define TSB_PD_OD_PD2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,2)))
#define TSB_PD_OD_PD3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,3)))
#define TSB_PD_OD_PD4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,4)))
#define TSB_PD_OD_PD5OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,5)))
#define TSB_PD_OD_PD6OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,6)))
#define TSB_PD_OD_PD7OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->OD,7)))
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
#define TSB_PD_IE_PD7IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PD->IE,7)))


/* Port E */
#define TSB_PE_DATA_PE0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,0)))
#define TSB_PE_DATA_PE1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,1)))
#define TSB_PE_DATA_PE2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,2)))
#define TSB_PE_DATA_PE3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,3)))
#define TSB_PE_DATA_PE4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->DATA,4)))
#define TSB_PE_CR_PE0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,0)))
#define TSB_PE_CR_PE1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,1)))
#define TSB_PE_CR_PE2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,2)))
#define TSB_PE_CR_PE3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,3)))
#define TSB_PE_CR_PE4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->CR,4)))
#define TSB_PE_FR1_PE0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,0)))
#define TSB_PE_FR1_PE1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,1)))
#define TSB_PE_FR1_PE2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR1,2)))
#define TSB_PE_FR2_PE2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR2,2)))
#define TSB_PE_FR2_PE3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR2,3)))
#define TSB_PE_FR2_PE4F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->FR2,4)))
#define TSB_PE_OD_PE0OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,0)))
#define TSB_PE_OD_PE1OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,1)))
#define TSB_PE_OD_PE2OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,2)))
#define TSB_PE_OD_PE3OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,3)))
#define TSB_PE_OD_PE4OD                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->OD,4)))
#define TSB_PE_PUP_PE0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,0)))
#define TSB_PE_PUP_PE1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,1)))
#define TSB_PE_PUP_PE2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,2)))
#define TSB_PE_PUP_PE3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,3)))
#define TSB_PE_PUP_PE4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->PUP,4)))
#define TSB_PE_IE_PE0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,0)))
#define TSB_PE_IE_PE1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,1)))
#define TSB_PE_IE_PE2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,2)))
#define TSB_PE_IE_PE3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,3)))
#define TSB_PE_IE_PE4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PE->IE,4)))


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
#define TSB_PG_PUP_PG0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,0)))
#define TSB_PG_PUP_PG1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,1)))
#define TSB_PG_PUP_PG2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,2)))
#define TSB_PG_PUP_PG3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->PUP,3)))
#define TSB_PG_IE_PG0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,0)))
#define TSB_PG_IE_PG1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,1)))
#define TSB_PG_IE_PG2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,2)))
#define TSB_PG_IE_PG3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PG->IE,3)))


/* Port H */
#define TSB_PH_DATA_PH0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,0)))
#define TSB_PH_DATA_PH1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,1)))
#define TSB_PH_DATA_PH2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,2)))
#define TSB_PH_DATA_PH3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,3)))
#define TSB_PH_DATA_PH4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,4)))
#define TSB_PH_DATA_PH5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->DATA,5)))
#define TSB_PH_CR_PH0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,0)))
#define TSB_PH_CR_PH1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,1)))
#define TSB_PH_CR_PH2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,2)))
#define TSB_PH_CR_PH3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,3)))
#define TSB_PH_CR_PH4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,4)))
#define TSB_PH_CR_PH5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->CR,5)))
#define TSB_PH_FR1_PH0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,0)))
#define TSB_PH_FR1_PH1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,1)))
#define TSB_PH_FR1_PH2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,2)))
#define TSB_PH_FR1_PH3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,3)))
#define TSB_PH_FR1_PH4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,4)))
#define TSB_PH_FR1_PH5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FR1,5)))
#define TSB_PH_FPUP_PH0UP                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FPUP,0)))
#define TSB_PH_FPUP_PH2UP                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FPUP,2)))
#define TSB_PH_FPUP_PH3UP                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FPUP,3)))
#define TSB_PH_FPUP_PH4UP                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FPUP,4)))
#define TSB_PH_FPUP_PH5UP                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->FPUP,5)))
#define TSB_PH_PDN_PH1DN                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->PDN,1)))
#define TSB_PH_IE_PH0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,0)))
#define TSB_PH_IE_PH1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,1)))
#define TSB_PH_IE_PH2IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,2)))
#define TSB_PH_IE_PH3IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,3)))
#define TSB_PH_IE_PH4IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,4)))
#define TSB_PH_IE_PH5IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PH->IE,5)))


/* Port J */
#define TSB_PJ_DATA_PJ0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,0)))
#define TSB_PJ_DATA_PJ1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,1)))
#define TSB_PJ_DATA_PJ2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,2)))
#define TSB_PJ_DATA_PJ3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,3)))
#define TSB_PJ_DATA_PJ4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,4)))
#define TSB_PJ_DATA_PJ5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,5)))
#define TSB_PJ_DATA_PJ6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,6)))
#define TSB_PJ_DATA_PJ7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PJ->DATA,7)))
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


/* Port K */
#define TSB_PK_DATA_PK0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,0)))
#define TSB_PK_DATA_PK1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,1)))
#define TSB_PK_DATA_PK2                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,2)))
#define TSB_PK_DATA_PK3                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,3)))
#define TSB_PK_DATA_PK4                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,4)))
#define TSB_PK_DATA_PK5                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,5)))
#define TSB_PK_DATA_PK6                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,6)))
#define TSB_PK_DATA_PK7                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->DATA,0)))
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
#define TSB_PK_FR2_PK0F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR2,0)))
#define TSB_PK_FR2_PK1F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR2,1)))
#define TSB_PK_FR2_PK2F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR2,2)))
#define TSB_PK_FR2_PK3F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR2,3)))
#define TSB_PK_FR2_PK7F2                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR2,7)))
#define TSB_PK_FR3_PK0F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR3,0)))
#define TSB_PK_FR3_PK1F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR3,1)))
#define TSB_PK_FR3_PK2F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR3,2)))
#define TSB_PK_FR3_PK3F3                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->FR3,3)))
#define TSB_PK_PUP_PK0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,0)))
#define TSB_PK_PUP_PK1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,1)))
#define TSB_PK_PUP_PK2UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,2)))
#define TSB_PK_PUP_PK3UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,3)))
#define TSB_PK_PUP_PK4UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,4)))
#define TSB_PK_PUP_PK5UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,5)))
#define TSB_PK_PUP_PK6UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,6)))
#define TSB_PK_PUP_PK7UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PK->PUP,7)))
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
#define TSB_PL_CR_PL0C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,0)))
#define TSB_PL_CR_PL1C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,1)))
#define TSB_PL_CR_PL2C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,2)))
#define TSB_PL_CR_PL3C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,3)))
#define TSB_PL_CR_PL4C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,4)))
#define TSB_PL_CR_PL5C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,5)))
#define TSB_PL_CR_PL6C                            (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->CR,6)))
#define TSB_PL_FR1_PL0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,0)))
#define TSB_PL_FR1_PL1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,1)))
#define TSB_PL_FR1_PL2F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,2)))
#define TSB_PL_FR1_PL3F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,3)))
#define TSB_PL_FR1_PL4F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,4)))
#define TSB_PL_FR1_PL5F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,5)))
#define TSB_PL_FR1_PL6F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PL->FR1,6)))


/* Port M */
#define TSB_PM_DATA_PM0                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->DATA,0)))
#define TSB_PM_DATA_PM1                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->DATA,1)))
#define TSB_PM_FR1_PM0F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->FR1,0)))
#define TSB_PM_FR1_PM1F1                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->FR1,1)))
#define TSB_PM_PUP_PM0UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,0)))
#define TSB_PM_PUP_PM1UP                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->PUP,1)))
#define TSB_PM_IE_PM0IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->IE,0)))
#define TSB_PM_IE_PM1IE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_PM->IE,1)))


/* Timer B */
#define TSB_TB0_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->EN,6)))
#define TSB_TB0_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->EN,7)))
#define TSB_TB0_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->RUN,0)))
#define TSB_TB0_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->RUN,2)))
#define TSB_TB0_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,3)))
#define TSB_TB0_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->CR,7)))
#define TSB_TB0_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->MOD,3)))
#define TSB_TB0_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,2)))
#define TSB_TB0_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,3)))
#define TSB_TB0_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,4)))
#define TSB_TB0_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->FFCR,5)))
#define TSB_TB0_ST_INTRG0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB0->ST,0)))
#define TSB_TB0_ST_INTRG1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB0->ST,1)))
#define TSB_TB0_ST_INTOVF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB0->ST,2)))
#define TSB_TB0_IM_TBIMCMP0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->IM,0)))
#define TSB_TB0_IM_TBIMCMP1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->IM,1)))
#define TSB_TB0_IM_TBIMOVF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->IM,2)))
#define TSB_TB0_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->DMA,0)))
#define TSB_TB0_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->DMA,1)))
#define TSB_TB0_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB0->DMA,2)))

#define TSB_TB1_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->EN,6)))
#define TSB_TB1_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->EN,7)))
#define TSB_TB1_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->RUN,0)))
#define TSB_TB1_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->RUN,2)))
#define TSB_TB1_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,3)))
#define TSB_TB1_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->CR,7)))
#define TSB_TB1_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->MOD,3)))
#define TSB_TB1_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,2)))
#define TSB_TB1_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,3)))
#define TSB_TB1_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,4)))
#define TSB_TB1_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->FFCR,5)))
#define TSB_TB1_ST_INTRG0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB1->ST,0)))
#define TSB_TB1_ST_INTRG1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB1->ST,1)))
#define TSB_TB1_ST_INTOVF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB1->ST,2)))
#define TSB_TB1_IM_TBIMCMP0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->IM,0)))
#define TSB_TB1_IM_TBIMCMP1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->IM,1)))
#define TSB_TB1_IM_TBIMOVF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->IM,2)))
#define TSB_TB1_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->DMA,0)))
#define TSB_TB1_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->DMA,1)))
#define TSB_TB1_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB1->DMA,2)))

#define TSB_TB2_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->EN,6)))
#define TSB_TB2_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->EN,7)))
#define TSB_TB2_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->RUN,0)))
#define TSB_TB2_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->RUN,2)))
#define TSB_TB2_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,3)))
#define TSB_TB2_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->CR,7)))
#define TSB_TB2_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->MOD,3)))
#define TSB_TB2_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,2)))
#define TSB_TB2_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,3)))
#define TSB_TB2_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,4)))
#define TSB_TB2_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->FFCR,5)))
#define TSB_TB2_ST_INTRG0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB2->ST,0)))
#define TSB_TB2_ST_INTRG1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB2->ST,1)))
#define TSB_TB2_ST_INTOVF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB2->ST,2)))
#define TSB_TB2_IM_TBIMCMP0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->IM,0)))
#define TSB_TB2_IM_TBIMCMP1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->IM,1)))
#define TSB_TB2_IM_TBIMOVF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->IM,2)))
#define TSB_TB2_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->DMA,0)))
#define TSB_TB2_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->DMA,1)))
#define TSB_TB2_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB2->DMA,2)))

#define TSB_TB3_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->EN,6)))
#define TSB_TB3_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->EN,7)))
#define TSB_TB3_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->RUN,0)))
#define TSB_TB3_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->RUN,2)))
#define TSB_TB3_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,3)))
#define TSB_TB3_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->CR,7)))
#define TSB_TB3_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->MOD,3)))
#define TSB_TB3_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,2)))
#define TSB_TB3_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,3)))
#define TSB_TB3_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,4)))
#define TSB_TB3_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->FFCR,5)))
#define TSB_TB3_ST_INTRG0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB3->ST,0)))
#define TSB_TB3_ST_INTRG1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB3->ST,1)))
#define TSB_TB3_ST_INTOVF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB3->ST,2)))
#define TSB_TB3_IM_TBIMCMP0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->IM,0)))
#define TSB_TB3_IM_TBIMCMP1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->IM,1)))
#define TSB_TB3_IM_TBIMOVF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->IM,2)))
#define TSB_TB3_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->DMA,0)))
#define TSB_TB3_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->DMA,1)))
#define TSB_TB3_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB3->DMA,2)))

#define TSB_TB4_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->EN,6)))
#define TSB_TB4_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->EN,7)))
#define TSB_TB4_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->RUN,0)))
#define TSB_TB4_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->RUN,2)))
#define TSB_TB4_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,3)))
#define TSB_TB4_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->CR,7)))
#define TSB_TB4_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->MOD,3)))
#define TSB_TB4_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,2)))
#define TSB_TB4_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,3)))
#define TSB_TB4_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,4)))
#define TSB_TB4_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->FFCR,5)))
#define TSB_TB4_ST_INTRG0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB4->ST,0)))
#define TSB_TB4_ST_INTRG1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB4->ST,1)))
#define TSB_TB4_ST_INTOVF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB4->ST,2)))
#define TSB_TB4_IM_TBIMCMP0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->IM,0)))
#define TSB_TB4_IM_TBIMCMP1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->IM,1)))
#define TSB_TB4_IM_TBIMOVF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->IM,2)))
#define TSB_TB4_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->DMA,0)))
#define TSB_TB4_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->DMA,1)))
#define TSB_TB4_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB4->DMA,2)))

#define TSB_TB5_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->EN,6)))
#define TSB_TB5_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->EN,7)))
#define TSB_TB5_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->RUN,0)))
#define TSB_TB5_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->RUN,2)))
#define TSB_TB5_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,3)))
#define TSB_TB5_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->CR,7)))
#define TSB_TB5_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->MOD,3)))
#define TSB_TB5_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,2)))
#define TSB_TB5_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,3)))
#define TSB_TB5_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,4)))
#define TSB_TB5_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->FFCR,5)))
#define TSB_TB5_ST_INTRG0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB5->ST,0)))
#define TSB_TB5_ST_INTRG1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB5->ST,1)))
#define TSB_TB5_ST_INTOVF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB5->ST,2)))
#define TSB_TB5_IM_TBIMCMP0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->IM,0)))
#define TSB_TB5_IM_TBIMCMP1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->IM,1)))
#define TSB_TB5_IM_TBIMOVF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->IM,2)))
#define TSB_TB5_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->DMA,0)))
#define TSB_TB5_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->DMA,1)))
#define TSB_TB5_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB5->DMA,2)))

#define TSB_TB6_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->EN,6)))
#define TSB_TB6_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->EN,7)))
#define TSB_TB6_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->RUN,0)))
#define TSB_TB6_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->RUN,2)))
#define TSB_TB6_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,3)))
#define TSB_TB6_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->CR,7)))
#define TSB_TB6_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->MOD,3)))
#define TSB_TB6_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,2)))
#define TSB_TB6_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,3)))
#define TSB_TB6_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,4)))
#define TSB_TB6_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->FFCR,5)))
#define TSB_TB6_ST_INTRG0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB6->ST,0)))
#define TSB_TB6_ST_INTRG1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB6->ST,1)))
#define TSB_TB6_ST_INTOVF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB6->ST,2)))
#define TSB_TB6_IM_TBIMCMP0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->IM,0)))
#define TSB_TB6_IM_TBIMCMP1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->IM,1)))
#define TSB_TB6_IM_TBIMOVF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->IM,2)))
#define TSB_TB6_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->DMA,0)))
#define TSB_TB6_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->DMA,1)))
#define TSB_TB6_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB6->DMA,2)))

#define TSB_TB7_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->EN,6)))
#define TSB_TB7_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->EN,7)))
#define TSB_TB7_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->RUN,0)))
#define TSB_TB7_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->RUN,2)))
#define TSB_TB7_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,3)))
#define TSB_TB7_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->CR,7)))
#define TSB_TB7_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->MOD,3)))
#define TSB_TB7_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,2)))
#define TSB_TB7_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,3)))
#define TSB_TB7_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,4)))
#define TSB_TB7_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->FFCR,5)))
#define TSB_TB7_ST_INTRG0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB7->ST,0)))
#define TSB_TB7_ST_INTRG1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB7->ST,1)))
#define TSB_TB7_ST_INTOVF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB7->ST,2)))
#define TSB_TB7_IM_TBIMCMP0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->IM,0)))
#define TSB_TB7_IM_TBIMCMP1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->IM,1)))
#define TSB_TB7_IM_TBIMOVF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->IM,2)))
#define TSB_TB7_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->DMA,0)))
#define TSB_TB7_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->DMA,1)))
#define TSB_TB7_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB7->DMA,2)))

#define TSB_TB8_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->EN,6)))
#define TSB_TB8_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->EN,7)))
#define TSB_TB8_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->RUN,0)))
#define TSB_TB8_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->RUN,2)))
#define TSB_TB8_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->CR,3)))
#define TSB_TB8_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->CR,7)))
#define TSB_TB8_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->MOD,3)))
#define TSB_TB8_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->FFCR,2)))
#define TSB_TB8_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->FFCR,3)))
#define TSB_TB8_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->FFCR,4)))
#define TSB_TB8_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->FFCR,5)))
#define TSB_TB8_ST_INTRG0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB8->ST,0)))
#define TSB_TB8_ST_INTRG1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB8->ST,1)))
#define TSB_TB8_ST_INTOVF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB8->ST,2)))
#define TSB_TB8_IM_TBIMCMP0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->IM,0)))
#define TSB_TB8_IM_TBIMCMP1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->IM,1)))
#define TSB_TB8_IM_TBIMOVF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->IM,2)))
#define TSB_TB8_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->DMA,0)))
#define TSB_TB8_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->DMA,1)))
#define TSB_TB8_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB8->DMA,2)))

#define TSB_TB9_EN_TBHALT                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->EN,6)))
#define TSB_TB9_EN_TBEN                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->EN,7)))
#define TSB_TB9_RUN_TBRUN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->RUN,0)))
#define TSB_TB9_RUN_TBPRUN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->RUN,2)))
#define TSB_TB9_CR_I2TB                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->CR,3)))
#define TSB_TB9_CR_TBWBF                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->CR,7)))
#define TSB_TB9_MOD_TBCLE                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->MOD,3)))
#define TSB_TB9_FFCR_TBE0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->FFCR,2)))
#define TSB_TB9_FFCR_TBE1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->FFCR,3)))
#define TSB_TB9_FFCR_TBC0T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->FFCR,4)))
#define TSB_TB9_FFCR_TBC1T1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->FFCR,5)))
#define TSB_TB9_ST_INTRG0                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB9->ST,0)))
#define TSB_TB9_ST_INTRG1                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB9->ST,1)))
#define TSB_TB9_ST_INTOVF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_TB9->ST,2)))
#define TSB_TB9_IM_TBIMCMP0                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->IM,0)))
#define TSB_TB9_IM_TBIMCMP1                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->IM,1)))
#define TSB_TB9_IM_TBIMOVF                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->IM,2)))
#define TSB_TB9_DMA_TBDMAEN0                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->DMA,0)))
#define TSB_TB9_DMA_TBDMAEN1                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->DMA,1)))
#define TSB_TB9_DMA_TBDMAEN2                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_TB9->DMA,2)))


/* Serial Bus Interface */
#define TSB_SBI_CR0_SBIEN                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI->CR0,7)))
#define TSB_SBI_CR1_SWRMON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI->CR1,0)))
#define TSB_SBI_CR1_ACK                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI->CR1,4)))
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
#define TSB_SBI_BR0_I2SBI                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SBI->BR0,6)))


/* Serial Channel(SIO/UART) */
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
#define TSB_SC0_DMA_DMAEN0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->DMA,0)))
#define TSB_SC0_DMA_DMAEN1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC0->DMA,1)))

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
#define TSB_SC2_DMA_DMAEN0                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->DMA,0)))
#define TSB_SC2_DMA_DMAEN1                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC2->DMA,1)))

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

#define TSB_SC3_EN_SIOE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->EN,0)))
#define TSB_SC3_MOD1_TXE                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->MOD1,4)))
#define TSB_SC3_MOD2_WBUF                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->MOD2,2)))
#define TSB_SC3_MOD2_DRCHG                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SC3->MOD2,3)))
#define TSB_SC3_MOD2_TXRUN                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC3->MOD2,5)))
#define TSB_SC3_MOD2_TBEMP                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_SC3->MOD2,7)))


/* Cereal reception response */
#define TSB_SIOR_EN_SIOREN                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SIOR->EN,0)))
#define TSB_SIOR_CR0_SIORCR                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SIOR->CR0,0)))
#define TSB_SIOR_CR1_SIOM                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_SIOR->CR1,0)))
#define TSB_SIOR_CR1_SIOPH                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_SIOR->CR1,2)))
#define TSB_SIOR_CR1_UARTPH                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_SIOR->CR1,3)))


/* Watchdog Timer */
#define TSB_WD_MOD_RESCR                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_WD->MOD,1)))
#define TSB_WD_MOD_I2WDT                          (*((__IO uint32_t *)BITBAND_PERI(&TSB_WD->MOD,2)))
#define TSB_WD_MOD_WDTE                           (*((__IO uint32_t *)BITBAND_PERI(&TSB_WD->MOD,7)))


/* Clock/Mode control */
#define TSB_CG_CYSCR_FPSEL                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->CYSCR,12)))
#define TSB_CG_CYSCR_FCSTOP                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->CYSCR,20)))
#define TSB_CG_CYSCR_PSCSTOP                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->CYSCR,21)))
#define TSB_CG_OSCCR_WUEON                        (*((__O  uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,0)))
#define TSB_CG_OSCCR_WUEF                         (*((__I  uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,1)))
#define TSB_CG_OSCCR_PLLON                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,2)))
#define TSB_CG_OSCCR_XEN1                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,8)))
#define TSB_CG_OSCCR_XEN2                         (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,16)))
#define TSB_CG_OSCCR_OSCSEL                       (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,17)))
#define TSB_CG_OSCCR_EHOSCSEL                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,18)))
#define TSB_CG_OSCCR_HWUPSEL                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->OSCCR,19)))
#define TSB_CG_STBYCR_DRVE                        (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->STBYCR,16)))
#define TSB_CG_STBYCR_PTKEEP                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->STBYCR,17)))
#define TSB_CG_PLLSEL_PLLSEL                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->PLLSEL,0)))
#define TSB_CG_PWMGEAR_TMRDACLKEN                 (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->PWMGEAR,0)))
#define TSB_CG_PWMGEAR_TMRDBCLKEN                 (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->PWMGEAR,1)))
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
#define TSB_CG_RSTFLG_PONRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,0)))
#define TSB_CG_RSTFLG_RSTPINRSTF                  (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,1)))
#define TSB_CG_RSTFLG_WDTRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,2)))
#define TSB_CG_RSTFLG_STOP2RSTF                   (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,3)))
#define TSB_CG_RSTFLG_DBGRSTF                     (*((__IO uint32_t *)BITBAND_PERI(&TSB_CG->RSTFLG,4)))


/* Flash control */
#define TSB_FC_SECBIT_SECBIT                      (*((__IO uint32_t *)BITBAND_PERI(&TSB_FC->SECBIT,0)))
#define TSB_FC_FLCS_RDY_BSY                       (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->FLCS,0)))
#define TSB_FC_FLCS_BLPRO0                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->FLCS,16)))
#define TSB_FC_FLCS_BLPRO1                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->FLCS,17)))
#define TSB_FC_FLCS_BLPRO2                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->FLCS,18)))
#define TSB_FC_FLCS_BLPRO3                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->FLCS,19)))
#define TSB_FC_FLCS_BLPRO4                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->FLCS,20)))
#define TSB_FC_FLCS_BLPRO5                        (*((__I  uint32_t *)BITBAND_PERI(&TSB_FC->FLCS,21)))

/** @} */ /* End of group Device_Peripheral_registers */

#ifdef __cplusplus
}
#endif

#endif  /* __TMPM342_H__ */

/** @} */ /* End of group TMPM342 */
/** @} */ /* End of group TOSHIBA_TX03_MICROCONTROLLER */
