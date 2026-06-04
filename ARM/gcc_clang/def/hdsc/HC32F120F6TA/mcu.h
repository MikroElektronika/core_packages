/**
 *******************************************************************************
 * @file  HC32F120F6TA.h
 * @brief Headerfile for HC32F120F6TA series MCU
 @verbatim
   Change Logs:
   Date             Author          Notes
   2022-03-31       CDT             First version
   2023-01-15       CDT             Modify headfile based on reference manual Rev1.11
   2023-09-30       CDT             Modify headfile based on reference manual Rev1.21
 @endverbatim
 *******************************************************************************
 * Copyright (C) 2022-2023, Xiaohua Semiconductor Co., Ltd. All rights reserved.
 *
 * This software component is licensed by XHSC under BSD 3-Clause license
 * (the "License"); You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                    opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 **/

#ifndef __HC32F120F6TA_H__
#define __HC32F120F6TA_H__

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
 * Configuration of the Cortex-M0+ Processor and Core Peripherals
 ******************************************************************************/
#define __MPU_PRESENT             0       /*!< HC32F120F6TA does not provide MPU                        */
#define __VTOR_PRESENT            1       /*!< HC32F120F6TA supported vector table registers            */
#define __NVIC_PRIO_BITS          2       /*!< HC32F120F6TA uses 2 Bits for the Priority Levels         */
#define __Vendor_SysTickConfig    0       /*!< Set to 1 if different SysTick Config is used         */

/*******************************************************************************
 * Interrupt Number Definition
 ******************************************************************************/
typedef enum {
    NMI_IRQn            = -14, /*  2 Non Maskable                            */
    HardFault_IRQn      = -13, /*  3 Hard Fault                              */
    SVC_IRQn            = -5,  /* 11 SV Call                                 */
    PendSV_IRQn         = -2,  /* 14 Pend SV                                 */
    SysTick_IRQn        = -1,  /* 15 System Tick                             */
    EXTINT00_IRQn       = 0,
    EXTINT01_IRQn       = 1,
    EXTINT02_IRQn       = 2,
    EXTINT03_IRQn       = 3,
    EXTINT04_IRQn       = 4,
    EXTINT05_IRQn       = 5,
    EXTINT06_IRQn       = 6,
    EXTINT07_IRQn       = 7,
    INT008_IRQn         = 8,
    INT009_IRQn         = 9,
    INT010_IRQn         = 10,
    INT011_IRQn         = 11,
    INT012_IRQn         = 12,
    INT013_IRQn         = 13,
    INT014_IRQn         = 14,
    INT015_IRQn         = 15,
    INT016_IRQn         = 16,
    INT017_IRQn         = 17,
    INT018_IRQn         = 18,
    INT019_IRQn         = 19,
    INT020_IRQn         = 20,
    INT021_IRQn         = 21,
    INT022_IRQn         = 22,
    INT023_IRQn         = 23,
    INT024_IRQn         = 24,
    INT025_IRQn         = 25,
    INT026_IRQn         = 26,
    INT027_IRQn         = 27,
    INT028_IRQn         = 28,
    INT029_IRQn         = 29,
    INT030_IRQn         = 30,
    INT031_IRQn         = 31,
} IRQn_Type;

#include <core_cm0plus.h>
#include <stdint.h>

/**
 *******************************************************************************
 ** \brief Event number enumeration
 ******************************************************************************/
typedef enum {
    EVT_SRC_PORT_EIRQ0          = 0U,   /* PORT_EIRQ0   */
    EVT_SRC_PORT_EIRQ8          = 1U,   /* PORT_EIRQ8   */
    EVT_SRC_TMRB_7_OVF          = 8U,   /* TMRB_7_OVF   */
    EVT_SRC_TMRB_7_UDF          = 9U,   /* TMRB_7_UDF   */
    EVT_SRC_TMRB_8_CMP          = 10U,  /* TMRB_8_CMP   */
    EVT_SRC_PORT_EIRQ1          = 16U,  /* PORT_EIRQ1   */
    EVT_SRC_PORT_EIRQ9          = 17U,  /* PORT_EIRQ9   */
    EVT_SRC_TMRB_8_OVF          = 24U,  /* TMRB_8_OVF   */
    EVT_SRC_TMRB_8_UDF          = 25U,  /* TMRB_8_UDF   */
    EVT_SRC_TMRB_7_CMP          = 26U,  /* TMRB_7_CMP   */
    EVT_SRC_PORT_EIRQ2          = 32U,  /* PORT_EIRQ2   */
    EVT_SRC_TMRB_5_OVF          = 40U,  /* TMRB_5_OVF   */
    EVT_SRC_TMRB_5_UDF          = 41U,  /* TMRB_5_UDF   */
    EVT_SRC_TMRB_6_CMP          = 42U,  /* TMRB_6_CMP   */
    EVT_SRC_PORT_EIRQ3          = 48U,  /* PORT_EIRQ3   */
    EVT_SRC_TMR0_CMP_A          = 50U,  /* TMR0_GCMP    */
    EVT_SRC_TMRB_6_OVF          = 56U,  /* TMRB_6_OVF   */
    EVT_SRC_TMRB_6_UDF          = 57U,  /* TMRB_6_UDF   */
    EVT_SRC_TMRB_5_CMP          = 58U,  /* TMRB_5_CMP   */
    EVT_SRC_AOS_STRG            = 59U,  /* EVENT_STRG   */
    EVT_SRC_PORT_EIRQ4          = 64U,  /* PORT_EIRQ4   */
    EVT_SRC_TMRB_3_OVF          = 72U,  /* TMRB_3_OVF   */
    EVT_SRC_TMRB_3_UDF          = 73U,  /* TMRB_3_UDF   */
    EVT_SRC_TMRB_4_CMP          = 74U,  /* TMRB_4_CMP   */
    EVT_SRC_ADC_EOCA            = 75U,  /* ADC_EOCA     */
    EVT_SRC_PORT_EIRQ5          = 80U,  /* PORT_EIRQ5   */
    EVT_SRC_TMRB_4_OVF          = 88U,  /* TMRB_4_OVF   */
    EVT_SRC_TMRB_4_UDF          = 89U,  /* TMRB_4_UDF   */
    EVT_SRC_TMRB_3_CMP          = 90U,  /* TMRB_3_CMP   */
    EVT_SRC_ADC_EOCB            = 91U,  /* ADC_EOCB     */
    EVT_SRC_PORT_EIRQ6          = 96U,  /* PORT_EIRQ6   */
    EVT_SRC_TMRB_1_OVF          = 104U, /* TMRB_1_OVF   */
    EVT_SRC_TMRB_1_UDF          = 105U, /* TMRB_1_UDF   */
    EVT_SRC_TMRB_2_CMP          = 106U, /* TMRB_2_CMP   */
    EVT_SRC_ADC_CMP0            = 107U, /* ADC_CMP0     */
    EVT_SRC_PORT_EIRQ7          = 112U, /* PORT_EIRQ7   */
    EVT_SRC_EFM_OPTEND          = 116U, /* EFM_OPTEND   */
    EVT_SRC_TMRB_2_OVF          = 120U, /* TMRB_2_OVF   */
    EVT_SRC_TMRB_2_UDF          = 121U, /* TMRB_2_UDF   */
    EVT_SRC_TMRB_1_CMP          = 122U, /* TMRB_1_CMP   */
    EVT_SRC_ADC_CMP1            = 123U, /* ADC_CMP1     */
    EVT_SRC_MAX                 = 127U,
} en_event_src_t;

/**
 *******************************************************************************
 ** \brief Interrupt number enumeration
 ******************************************************************************/
typedef enum {
    INT_SRC_PORT_EIRQ0          = 0U,   /* PORT_EIRQ0   */
    INT_SRC_PORT_EIRQ8          = 1U,   /* PORT_EIRQ8   */
    INT_SRC_EFM_PEERR           = 4U,   /* EFM_PEERR    */
    INT_SRC_EFM_RDCOL           = 5U,   /* EFM_RDCOL    */
    INT_SRC_XTAL_STOP           = 6U,   /* XTAL_STOP    */
    INT_SRC_SWDT_NMIUNDF        = 7U,   /* SWDT_NMIUNDF */
    INT_SRC_TMRB_7_OVF          = 8U,   /* TMRB_7_OVF   */
    INT_SRC_TMRB_7_UDF          = 9U,   /* TMRB_7_UDF   */
    INT_SRC_TMRB_8_CMP          = 10U,  /* TMRB_8_CMP   */
    INT_SRC_USART1_EI           = 12U,  /* USART_1_EI   */
    INT_SRC_I2C_EEI             = 13U,  /* IIC_EE1      */
    INT_SRC_SPI_SPEI            = 14U,  /* SPI_SPEI     */
    INT_SRC_USART4_EI           = 15U,  /* USART_4_EI   */
    INT_SRC_PORT_EIRQ1          = 16U,  /* PORT_EIRQ1   */
    INT_SRC_PORT_EIRQ9          = 17U,  /* PORT_EIRQ9   */
    INT_SRC_CTC_ERR             = 20U,  /* CTC_ERR      */
    INT_SRC_TMRB_8_OVF          = 24U,  /* TMRB_8_OVF   */
    INT_SRC_TMRB_8_UDF          = 25U,  /* TMRB_8_UDF   */
    INT_SRC_TMRB_7_CMP          = 26U,  /* TMRB_7_CMP   */
    INT_SRC_USART1_RI           = 28U,  /* USART_1_RI   */
    INT_SRC_USART4_RI           = 31U,  /* USART_4_RI   */
    INT_SRC_PORT_EIRQ2          = 32U,  /* PORT_EIRQ2   */
    INT_SRC_TMRB_5_OVF          = 40U,  /* TMRB_5_OVF   */
    INT_SRC_TMRB_5_UDF          = 41U,  /* TMRB_5_UDF   */
    INT_SRC_TMRB_6_CMP          = 42U,  /* TMRB_6_CMP   */
    INT_SRC_USART1_TI           = 44U,  /* USART_1_TI   */
    INT_SRC_USART3_EI           = 45U,  /* USART_3_EI   */
    INT_SRC_PORT_EIRQ3          = 48U,  /* PORT_EIRQ3   */
    INT_SRC_PORT_EKEY           = 49U,  /* PORT_EKEY    */
    INT_SRC_TMR0_CMP_A          = 50U,  /* TMR0_GCMP    */
    INT_SRC_TMRB_6_OVF          = 56U,  /* TMRB_6_OVF   */
    INT_SRC_TMRB_6_UDF          = 57U,  /* TMRB_6_UDF   */
    INT_SRC_TMRB_5_CMP          = 58U,  /* TMRB_5_CMP   */
    INT_SRC_USART1_TCI          = 60U,  /* USART_1_TCI  */
    INT_SRC_USART3_RI           = 61U,  /* USART_3_RI   */
    INT_SRC_SPI_SPRI            = 62U,  /* SPI_SPRI     */
    INT_SRC_PORT_EIRQ4          = 64U,  /* PORT_EIRQ4   */
    INT_SRC_TMRB_3_OVF          = 72U,  /* TMRB_3_OVF   */
    INT_SRC_TMRB_3_UDF          = 73U,  /* TMRB_3_UDF   */
    INT_SRC_TMRB_4_CMP          = 74U,  /* TMRB_4_CMP   */
    INT_SRC_ADC_EOCA            = 75U,  /* ADC_EOCA     */
    INT_SRC_USART2_EI           = 76U,  /* USART_2_EI   */
    INT_SRC_USART3_TI           = 77U,  /* USART_3_TI   */
    INT_SRC_I2C_TEI             = 78U,  /* IIC_TEI      */
    INT_SRC_SPI_SPII            = 79U,  /* SPI_SPII     */
    INT_SRC_PORT_EIRQ5          = 80U,  /* PORT_EIRQ5   */
    INT_SRC_TMRB_4_OVF          = 88U,  /* TMRB_4_OVF   */
    INT_SRC_TMRB_4_UDF          = 89U,  /* TMRB_4_UDF   */
    INT_SRC_TMRB_3_CMP          = 90U,  /* TMRB_3_CMP   */
    INT_SRC_ADC_EOCB            = 91U,  /* ADC_EOCB     */
    INT_SRC_USART2_RI           = 92U,  /* USART_2_RI   */
    INT_SRC_USART3_TCI          = 93U,  /* USART_3_TCI  */
    INT_SRC_I2C_RXI             = 94U,  /* IIC_RXI      */
    INT_SRC_PORT_EIRQ6          = 96U,  /* PORT_EIRQ6   */
    INT_SRC_TMRB_1_OVF          = 104U, /* TMRB_1_OVF   */
    INT_SRC_TMRB_1_UDF          = 105U, /* TMRB_1_UDF   */
    INT_SRC_TMRB_2_CMP          = 106U, /* TMRB_2_CMP   */
    INT_SRC_ADC_CMP0            = 107U, /* ADC_CMP0     */
    INT_SRC_USART2_TI           = 108U, /* USART_2_TI   */
    INT_SRC_I2C_TXI             = 109U, /* IIC_TXI      */
    INT_SRC_USART4_TI           = 111U, /* USART_4_TI   */
    INT_SRC_PORT_EIRQ7          = 112U, /* PORT_EIRQ7   */
    INT_SRC_LVD                 = 114U, /* LVD_DET      */
    INT_SRC_EFM_OPTEND          = 116U, /* EFM_OPTEND   */
    INT_SRC_TMRB_2_OVF          = 120U, /* TMRB_2_OVF   */
    INT_SRC_TMRB_2_UDF          = 121U, /* TMRB_2_UDF   */
    INT_SRC_TMRB_1_CMP          = 122U, /* TMRB_1_CMP   */
    INT_SRC_ADC_CMP1            = 123U, /* ADC_CMP1     */
    INT_SRC_USART2_TCI          = 124U, /* USART_2_TCI  */
    INT_SRC_SPI_SPTI            = 125U, /* SPI_SPTI     */
    INT_SRC_USART4_TCI          = 127U, /* USART_4_TCI  */
    INT_SRC_MAX                 = 127U,
} en_int_src_t;

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

/******************************************************************************/
/*                Device Specific Peripheral Registers structures             */
/******************************************************************************/

/**
 * @brief ADC
 */
typedef struct {
    __IO uint8_t  STR;
    uint8_t RESERVED0[1];
    __IO uint16_t CR0;
    __IO uint16_t CR1;
    uint8_t RESERVED1[4];
    __IO uint16_t TRGSR;
    __IO uint32_t CHSELRA;
    __IO uint32_t CHSELRB;
    uint8_t RESERVED2[4];
    __IO uint8_t  EXCHSELR;
    uint8_t RESERVED3[7];
    __IO uint8_t  SSTR;
    uint8_t RESERVED4[35];
    __I  uint8_t  ISR;
    __IO uint8_t  ICR;
    __O  uint8_t  ISCLRR;
    uint8_t RESERVED5[9];
    __I  uint16_t DR0;
    __I  uint16_t DR1;
    __I  uint16_t DR2;
    __I  uint16_t DR3;
    __I  uint16_t DR4;
    __I  uint16_t DR5;
    __I  uint16_t DR6;
    __I  uint16_t DR7;
    __I  uint16_t DR8;
    __I  uint16_t DR9;
    __I  uint16_t DR10;
    __I  uint16_t DR11;
    uint8_t RESERVED6[56];
    __IO uint16_t AWDCR;
    __I  uint8_t  AWDSR;
    __O  uint8_t  AWDSCLRR;
    __IO uint16_t AWD0DR0;
    __IO uint16_t AWD0DR1;
    __IO uint8_t  AWD0CHSR;
    uint8_t RESERVED7[3];
    __IO uint16_t AWD1DR0;
    __IO uint16_t AWD1DR1;
    __IO uint8_t  AWD1CHSR;
} CM_ADC_TypeDef;

/**
 * @brief AOS
 */
typedef struct {
    __O  uint32_t INTC_STRGCR;
    uint8_t RESERVED0[28];
    __IO uint32_t TMR0_HTSSR;
    uint8_t RESERVED1[44];
    __IO uint32_t TMRB_HTSSR;
    uint8_t RESERVED2[12];
    __IO uint32_t ADC_ITRGSELR0;
    __IO uint32_t ADC_ITRGSELR1;
} CM_AOS_TypeDef;

/**
 * @brief CMU
 */
typedef struct {
    __IO uint8_t  PERICKSEL;
    uint8_t RESERVED0[3];
    __IO uint8_t  XTALSTDSR;
    uint8_t RESERVED1[3];
    __IO uint8_t  SCKDIVR;
    uint8_t RESERVED2[3];
    __IO uint8_t  CKSWR;
    uint8_t RESERVED3[3];
    __IO uint8_t  XTALCR;
    uint8_t RESERVED4[3];
    __IO uint8_t  XTALCFGR;
    __IO uint8_t  XTALSTBCR;
    uint8_t RESERVED5[2];
    __IO uint8_t  HRCCR;
    uint8_t RESERVED6[7];
    __I  uint8_t  OSCSTBSR;
    uint8_t RESERVED7[3];
    __IO uint8_t  MCO1CFGR;
    uint8_t RESERVED8[3];
    __IO uint8_t  XTALSTDCR;
    uint8_t RESERVED9[7];
    __IO uint32_t FCG;
    uint8_t RESERVED10[8];
    __IO uint8_t  LRCCR;
} CM_CMU_TypeDef;

/**
 * @brief CRC
 */
typedef struct {
    __IO uint32_t CR;
    __IO uint32_t RESLT;
    uint8_t RESERVED0[120];
    __IO uint32_t DAT0;
    __IO uint32_t DAT1;
    __IO uint32_t DAT2;
    __IO uint32_t DAT3;
    __IO uint32_t DAT4;
    __IO uint32_t DAT5;
    __IO uint32_t DAT6;
    __IO uint32_t DAT7;
    __IO uint32_t DAT8;
    __IO uint32_t DAT9;
    __IO uint32_t DAT10;
    __IO uint32_t DAT11;
    __IO uint32_t DAT12;
    __IO uint32_t DAT13;
    __IO uint32_t DAT14;
    __IO uint32_t DAT15;
    __IO uint32_t DAT16;
    __IO uint32_t DAT17;
    __IO uint32_t DAT18;
    __IO uint32_t DAT19;
    __IO uint32_t DAT20;
    __IO uint32_t DAT21;
    __IO uint32_t DAT22;
    __IO uint32_t DAT23;
    __IO uint32_t DAT24;
    __IO uint32_t DAT25;
    __IO uint32_t DAT26;
    __IO uint32_t DAT27;
    __IO uint32_t DAT28;
    __IO uint32_t DAT29;
    __IO uint32_t DAT30;
    __IO uint32_t DAT31;
} CM_CRC_TypeDef;

/**
 * @brief CTC
 */
typedef struct {
    __IO uint32_t CR1;
    __IO uint32_t CR2;
    __I  uint32_t STR;
} CM_CTC_TypeDef;

/**
 * @brief DBGC
 */
typedef struct {
    __IO uint32_t MCUDBGSTAT;
    __IO uint32_t MCUSTPCTL;
} CM_DBGC_TypeDef;

/**
 * @brief EFM
 */
typedef struct {
    __IO uint32_t FAPRT;
    __IO uint32_t FSTP;
    __IO uint32_t FRMC;
    __IO uint32_t FWMC;
    __I  uint32_t FSR;
    __IO uint32_t FSCLR;
    __IO uint32_t FITE;
    uint8_t RESERVED0[4];
    __IO uint32_t FPMTSW;
    __IO uint32_t FPMTEW;
    uint8_t RESERVED1[40];
    __I  uint32_t UQID0;
    __I  uint32_t UQID1;
    __I  uint32_t UQID2;
    uint8_t RESERVED2[550];
    __IO uint8_t  HRCCFGR;
    uint8_t RESERVED3[1];
    __IO uint16_t LVDICGCR;
} CM_EFM_TypeDef;

/**
 * @brief GPIO
 */
typedef struct {
    __I  uint8_t  PIDR0;
    __I  uint8_t  PIDR1;
    __I  uint8_t  PIDR2;
    __I  uint8_t  PIDR3;
    __I  uint8_t  PIDR4;
    __I  uint8_t  PIDR5;
    __I  uint8_t  PIDR6;
    __I  uint8_t  PIDR7;
    uint8_t RESERVED0[4];
    __I  uint8_t  PIDR12;
    __I  uint8_t  PIDR13;
    __I  uint8_t  PIDR14;
    uint8_t RESERVED1[1];
    __IO uint8_t  PODR0;
    __IO uint8_t  PODR1;
    __IO uint8_t  PODR2;
    __IO uint8_t  PODR3;
    __IO uint8_t  PODR4;
    __IO uint8_t  PODR5;
    __IO uint8_t  PODR6;
    __IO uint8_t  PODR7;
    uint8_t RESERVED2[4];
    __IO uint8_t  PODR12;
    __IO uint8_t  PODR13;
    __IO uint8_t  PODR14;
    uint8_t RESERVED3[1];
    __IO uint8_t  POER0;
    __IO uint8_t  POER1;
    __IO uint8_t  POER2;
    __IO uint8_t  POER3;
    __IO uint8_t  POER4;
    __IO uint8_t  POER5;
    __IO uint8_t  POER6;
    __IO uint8_t  POER7;
    uint8_t RESERVED4[4];
    __IO uint8_t  POER12;
    __IO uint8_t  POER13;
    __IO uint8_t  POER14;
    uint8_t RESERVED5[1];
    __O  uint8_t  POSR0;
    __O  uint8_t  POSR1;
    __O  uint8_t  POSR2;
    __O  uint8_t  POSR3;
    __O  uint8_t  POSR4;
    __O  uint8_t  POSR5;
    __O  uint8_t  POSR6;
    __O  uint8_t  POSR7;
    uint8_t RESERVED6[4];
    __O  uint8_t  POSR12;
    __O  uint8_t  POSR13;
    __O  uint8_t  POSR14;
    uint8_t RESERVED7[1];
    __O  uint8_t  PORR0;
    __O  uint8_t  PORR1;
    __O  uint8_t  PORR2;
    __O  uint8_t  PORR3;
    __O  uint8_t  PORR4;
    __O  uint8_t  PORR5;
    __O  uint8_t  PORR6;
    __O  uint8_t  PORR7;
    uint8_t RESERVED8[4];
    __O  uint8_t  PORR12;
    __O  uint8_t  PORR13;
    __O  uint8_t  PORR14;
    uint8_t RESERVED9[1];
    __O  uint8_t  POTR0;
    __O  uint8_t  POTR1;
    __O  uint8_t  POTR2;
    __O  uint8_t  POTR3;
    __O  uint8_t  POTR4;
    __O  uint8_t  POTR5;
    __O  uint8_t  POTR6;
    __O  uint8_t  POTR7;
    uint8_t RESERVED10[4];
    __O  uint8_t  POTR12;
    __O  uint8_t  POTR13;
    __O  uint8_t  POTR14;
    uint8_t RESERVED11[929];
    __IO uint16_t PCR00;
    __IO uint16_t PCR01;
    uint8_t RESERVED12[12];
    __IO uint16_t PCR10;
    __IO uint16_t PCR11;
    __IO uint16_t PCR12;
    __IO uint16_t PCR13;
    __IO uint16_t PCR14;
    __IO uint16_t PCR15;
    __IO uint16_t PCR16;
    __IO uint16_t PCR17;
    __IO uint16_t PCR20;
    __IO uint16_t PCR21;
    __IO uint16_t PCR22;
    __IO uint16_t PCR23;
    uint8_t RESERVED13[8];
    __IO uint16_t PCR30;
    __IO uint16_t PCR31;
    uint8_t RESERVED14[12];
    __IO uint16_t PCR40;
    uint8_t RESERVED15[14];
    __IO uint16_t PCR50;
    __IO uint16_t PCR51;
    uint8_t RESERVED16[12];
    __IO uint16_t PCR60;
    __IO uint16_t PCR61;
    __IO uint16_t PCR62;
    uint8_t RESERVED17[10];
    __IO uint16_t PCR70;
    uint8_t RESERVED18[78];
    __IO uint16_t PCR120;
    __IO uint16_t PCR121;
    __IO uint16_t PCR122;
    uint8_t RESERVED19[24];
    __IO uint16_t PCR137;
    uint8_t RESERVED20[14];
    __IO uint16_t PCR147;
    uint8_t RESERVED21[16];
    __IO uint16_t PSPCR;
    uint8_t RESERVED22[2];
    __IO uint16_t PCCR;
    __IO uint16_t PINAER;
    __IO uint16_t PWPR;
} CM_GPIO_TypeDef;

/**
 * @brief I2C
 */
typedef struct {
    __IO uint32_t CR1;
    __IO uint32_t CR2;
    uint8_t RESERVED0[4];
    __IO uint32_t CR4;
    __IO uint32_t SLR0;
    __IO uint32_t SLR1;
    uint8_t RESERVED1[4];
    __IO uint32_t SR;
    __O  uint32_t CLR;
    __IO uint8_t  DTR;
    uint8_t RESERVED2[3];
    __IO uint8_t  DRR;
    uint8_t RESERVED3[3];
    __IO uint32_t CCR;
    __IO uint32_t FLTR;
} CM_I2C_TypeDef;

/**
 * @brief ICG
 */
typedef struct {
    __I  uint32_t ICG0;
    __I  uint32_t ICG1;
    __I  uint32_t ICG2;
    __I  uint32_t ICG3;
    __I  uint32_t ICG4;
    __I  uint32_t ICG5;
    __I  uint32_t ICG6;
} CM_ICG_TypeDef;

/**
 * @brief INTC
 */
typedef struct {
    __IO uint32_t NMICR;
    __IO uint32_t NMIENR;
    __I  uint32_t NMIFR;
    __IO uint32_t NMICLR;
    uint8_t RESERVED0[16];
    __IO uint32_t EVTER;
    __IO uint32_t EKEYCR;
    uint8_t RESERVED1[20];
    __IO uint32_t FPRCR;
    __IO uint32_t EIRQCR0;
    __IO uint32_t EIRQCR1;
    __IO uint32_t EIRQCR2;
    __IO uint32_t EIRQCR3;
    __IO uint32_t EIRQCR4;
    __IO uint32_t EIRQCR5;
    __IO uint32_t EIRQCR6;
    __IO uint32_t EIRQCR7;
    __IO uint32_t EIRQCR8;
    __IO uint32_t EIRQCR9;
    uint8_t RESERVED2[8];
    __IO uint32_t WUPEN;
    __IO uint32_t EIRQFR;
    __IO uint32_t EIRQCLR;
    uint8_t RESERVED3[36];
    __IO uint32_t ISELAR8;
    __IO uint32_t ISELAR9;
    __IO uint32_t ISELAR10;
    __IO uint32_t ISELAR11;
    __IO uint32_t ISELAR12;
    __IO uint32_t ISELAR13;
    __IO uint32_t ISELAR14;
    __IO uint32_t ISELAR15;
    __IO uint32_t ISELAR16;
    __IO uint32_t ISELAR17;
    __IO uint32_t ISELAR18;
    __IO uint32_t ISELAR19;
    __IO uint32_t ISELAR20;
    __IO uint32_t ISELAR21;
    __IO uint32_t ISELAR22;
    __IO uint32_t ISELAR23;
    __IO uint32_t ISELBR24;
    __IO uint32_t ISELBR25;
    __IO uint32_t ISELBR26;
    __IO uint32_t ISELBR27;
    __IO uint32_t ISELBR28;
    __IO uint32_t ISELBR29;
    __IO uint32_t ISELBR30;
    __IO uint32_t ISELBR31;
} CM_INTC_TypeDef;

/**
 * @brief PWC
 */
typedef struct {
    __IO uint8_t  STPMCR;
    uint8_t RESERVED0[3];
    __IO uint8_t  PWRC;
    uint8_t RESERVED1[7];
    __IO uint8_t  RAMCR;
    uint8_t RESERVED2[3];
    __IO uint8_t  LVDCSR;
    uint8_t RESERVED3[15];
    __IO uint16_t FPRC;
    uint8_t RESERVED4[30];
    __IO uint8_t  DBGC;
} CM_PWC_TypeDef;

/**
 * @brief RMU
 */
typedef struct {
    __IO uint16_t RSTF0;
} CM_RMU_TypeDef;

/**
 * @brief SPI
 */
typedef struct {
    __IO uint32_t DR;
    __IO uint32_t CR1;
    uint8_t RESERVED0[4];
    __IO uint32_t CFG1;
    uint8_t RESERVED1[4];
    __IO uint32_t SR;
    __IO uint32_t CFG2;
} CM_SPI_TypeDef;

/**
 * @brief SWDT
 */
typedef struct {
    __IO uint32_t CR;
    __IO uint32_t SR;
    __IO uint32_t RR;
} CM_SWDT_TypeDef;

/**
 * @brief TMR0
 */
typedef struct {
    __IO uint32_t CNTAR;
    uint8_t RESERVED0[4];
    __IO uint32_t CMPAR;
    uint8_t RESERVED1[4];
    __IO uint32_t BCONR;
    __IO uint32_t STFLR;
} CM_TMR0_TypeDef;

/**
 * @brief TMRB
 */
typedef struct {
    __IO uint16_t CNTER;
    uint8_t RESERVED0[2];
    __IO uint16_t PERAR;
    uint8_t RESERVED1[58];
    __IO uint16_t CMPAR;
    uint8_t RESERVED2[62];
    __IO uint8_t  BCSTRL;
    __IO uint8_t  BCSTRH;
    uint8_t RESERVED3[2];
    __IO uint16_t HCONR;
    uint8_t RESERVED4[2];
    __IO uint16_t HCUPR;
    uint8_t RESERVED5[2];
    __IO uint16_t HCDOR;
    uint8_t RESERVED6[2];
    __IO uint16_t ICONR;
    uint8_t RESERVED7[2];
    __IO uint16_t ECONR;
    uint8_t RESERVED8[6];
    __IO uint16_t STFLR;
    uint8_t RESERVED9[98];
    __IO uint16_t CCONR;
    uint8_t RESERVED10[62];
    __IO uint16_t PCONR;
} CM_TMRB_TypeDef;

/**
 * @brief USART
 */
typedef struct {
    __I  uint32_t SR;
    __IO uint16_t TDR;
    __I  uint16_t RDR;
    __IO uint32_t BRR;
    __IO uint32_t CR1;
    __IO uint32_t CR2;
    __IO uint32_t CR3;
    __IO uint32_t PR;
} CM_USART_TypeDef;

/******************************************************************************/
/*                     Memory Base Address                                    */
/******************************************************************************/
#define EFM_BASE                             (0x00000000UL)   /*!< EFM base address in the alias region */
#define SRAM_BASE                            (0x20000000UL)   /*!< SRAM base address in the alias region */

/******************************************************************************/
/*           Device Specific Peripheral Base Address                          */
/******************************************************************************/
#define CM_ADC_BASE                          (0x4000B800UL)
#define CM_AOS_BASE                          (0x40000C00UL)
#define CM_CMU_BASE                          (0x40014400UL)
#define CM_CRC_BASE                          (0x40015400UL)
#define CM_CTC_BASE                          (0x40000000UL)
#define CM_DBGC_BASE                         (0x40015000UL)
#define CM_EFM_BASE                          (0x40000800UL)
#define CM_GPIO_BASE                         (0x40013800UL)
#define CM_I2C_BASE                          (0x40004800UL)
#define CM_ICG_BASE                          (0x000000C0UL)
#define CM_INTC_BASE                         (0x40011000UL)
#define CM_PWC_BASE                          (0x40014000UL)
#define CM_RMU_BASE                          (0x40014100UL)
#define CM_SPI_BASE                          (0x40003800UL)
#define CM_SWDT_BASE                         (0x4000CC00UL)
#define CM_TMR0_BASE                         (0x40005800UL)
#define CM_TMRB_1_BASE                       (0x40007800UL)
#define CM_TMRB_2_BASE                       (0x40007C00UL)
#define CM_TMRB_3_BASE                       (0x40008000UL)
#define CM_TMRB_4_BASE                       (0x40008400UL)
#define CM_TMRB_5_BASE                       (0x40008800UL)
#define CM_TMRB_6_BASE                       (0x40008C00UL)
#define CM_TMRB_7_BASE                       (0x40009000UL)
#define CM_TMRB_8_BASE                       (0x40009400UL)
#define CM_USART1_BASE                       (0x40001800UL)
#define CM_USART2_BASE                       (0x40001C00UL)
#define CM_USART3_BASE                       (0x40002000UL)
#define CM_USART4_BASE                       (0x40002400UL)

/******************************************************************************/
/*           Device Specific Peripheral declaration & memory map              */
/******************************************************************************/
#define CM_ADC                               ((CM_ADC_TypeDef *)CM_ADC_BASE)
#define CM_AOS                               ((CM_AOS_TypeDef *)CM_AOS_BASE)
#define CM_CMU                               ((CM_CMU_TypeDef *)CM_CMU_BASE)
#define CM_CRC                               ((CM_CRC_TypeDef *)CM_CRC_BASE)
#define CM_CTC                               ((CM_CTC_TypeDef *)CM_CTC_BASE)
#define CM_DBGC                              ((CM_DBGC_TypeDef *)CM_DBGC_BASE)
#define CM_EFM                               ((CM_EFM_TypeDef *)CM_EFM_BASE)
#define CM_GPIO                              ((CM_GPIO_TypeDef *)CM_GPIO_BASE)
#define CM_I2C                               ((CM_I2C_TypeDef *)CM_I2C_BASE)
#define CM_ICG                               ((CM_ICG_TypeDef *)CM_ICG_BASE)
#define CM_INTC                              ((CM_INTC_TypeDef *)CM_INTC_BASE)
#define CM_PWC                               ((CM_PWC_TypeDef *)CM_PWC_BASE)
#define CM_RMU                               ((CM_RMU_TypeDef *)CM_RMU_BASE)
#define CM_SPI                               ((CM_SPI_TypeDef *)CM_SPI_BASE)
#define CM_SWDT                              ((CM_SWDT_TypeDef *)CM_SWDT_BASE)
#define CM_TMR0                              ((CM_TMR0_TypeDef *)CM_TMR0_BASE)
#define CM_TMRB_1                            ((CM_TMRB_TypeDef *)CM_TMRB_1_BASE)
#define CM_TMRB_2                            ((CM_TMRB_TypeDef *)CM_TMRB_2_BASE)
#define CM_TMRB_3                            ((CM_TMRB_TypeDef *)CM_TMRB_3_BASE)
#define CM_TMRB_4                            ((CM_TMRB_TypeDef *)CM_TMRB_4_BASE)
#define CM_TMRB_5                            ((CM_TMRB_TypeDef *)CM_TMRB_5_BASE)
#define CM_TMRB_6                            ((CM_TMRB_TypeDef *)CM_TMRB_6_BASE)
#define CM_TMRB_7                            ((CM_TMRB_TypeDef *)CM_TMRB_7_BASE)
#define CM_TMRB_8                            ((CM_TMRB_TypeDef *)CM_TMRB_8_BASE)
#define CM_USART1                            ((CM_USART_TypeDef *)CM_USART1_BASE)
#define CM_USART2                            ((CM_USART_TypeDef *)CM_USART2_BASE)
#define CM_USART3                            ((CM_USART_TypeDef *)CM_USART3_BASE)
#define CM_USART4                            ((CM_USART_TypeDef *)CM_USART4_BASE)

/******************************************************************************/
/*                   Peripheral Registers Bits Definition                     */
/******************************************************************************/

/*******************************************************************************
                Bit definition for Peripheral ADC
*******************************************************************************/
/*  Bit definition for ADC_STR register  */
#define ADC_STR_STRT                                   (0x01U)

/*  Bit definition for ADC_CR0 register  */
#define ADC_CR0_MS_POS                                 (0U)
#define ADC_CR0_MS                                     (0x0003U)
#define ADC_CR0_MS_0                                   (0x0001U)
#define ADC_CR0_MS_1                                   (0x0002U)
#define ADC_CR0_ACCSEL_POS                             (4U)
#define ADC_CR0_ACCSEL                                 (0x0030U)
#define ADC_CR0_ACCSEL_0                               (0x0010U)
#define ADC_CR0_ACCSEL_1                               (0x0020U)
#define ADC_CR0_CLREN_POS                              (6U)
#define ADC_CR0_CLREN                                  (0x0040U)
#define ADC_CR0_DFMT_POS                               (7U)
#define ADC_CR0_DFMT                                   (0x0080U)

/*  Bit definition for ADC_CR1 register  */
#define ADC_CR1_RSCHSEL_POS                            (2U)
#define ADC_CR1_RSCHSEL                                (0x0004U)

/*  Bit definition for ADC_TRGSR register  */
#define ADC_TRGSR_TRGSELA_POS                          (0U)
#define ADC_TRGSR_TRGSELA                              (0x0003U)
#define ADC_TRGSR_TRGSELA_0                            (0x0001U)
#define ADC_TRGSR_TRGSELA_1                            (0x0002U)
#define ADC_TRGSR_TRGENA_POS                           (7U)
#define ADC_TRGSR_TRGENA                               (0x0080U)
#define ADC_TRGSR_TRGSELB_POS                          (8U)
#define ADC_TRGSR_TRGSELB                              (0x0300U)
#define ADC_TRGSR_TRGSELB_0                            (0x0100U)
#define ADC_TRGSR_TRGSELB_1                            (0x0200U)
#define ADC_TRGSR_TRGENB_POS                           (15U)
#define ADC_TRGSR_TRGENB                               (0x8000U)

/*  Bit definition for ADC_CHSELRA register  */
#define ADC_CHSELRA_CHSELA                             (0x00000FFFUL)
#define ADC_CHSELRA_CHSELA_0                           (0x00000001UL)
#define ADC_CHSELRA_CHSELA_1                           (0x00000002UL)
#define ADC_CHSELRA_CHSELA_2                           (0x00000004UL)
#define ADC_CHSELRA_CHSELA_3                           (0x00000008UL)
#define ADC_CHSELRA_CHSELA_4                           (0x00000010UL)
#define ADC_CHSELRA_CHSELA_5                           (0x00000020UL)
#define ADC_CHSELRA_CHSELA_6                           (0x00000040UL)
#define ADC_CHSELRA_CHSELA_7                           (0x00000080UL)
#define ADC_CHSELRA_CHSELA_8                           (0x00000100UL)
#define ADC_CHSELRA_CHSELA_9                           (0x00000200UL)
#define ADC_CHSELRA_CHSELA_10                          (0x00000400UL)
#define ADC_CHSELRA_CHSELA_11                          (0x00000800UL)

/*  Bit definition for ADC_CHSELRB register  */
#define ADC_CHSELRB_CHSELB                             (0x00000FFFUL)
#define ADC_CHSELRB_CHSELB_0                           (0x00000001UL)
#define ADC_CHSELRB_CHSELB_1                           (0x00000002UL)
#define ADC_CHSELRB_CHSELB_2                           (0x00000004UL)
#define ADC_CHSELRB_CHSELB_3                           (0x00000008UL)
#define ADC_CHSELRB_CHSELB_4                           (0x00000010UL)
#define ADC_CHSELRB_CHSELB_5                           (0x00000020UL)
#define ADC_CHSELRB_CHSELB_6                           (0x00000040UL)
#define ADC_CHSELRB_CHSELB_7                           (0x00000080UL)
#define ADC_CHSELRB_CHSELB_8                           (0x00000100UL)
#define ADC_CHSELRB_CHSELB_9                           (0x00000200UL)
#define ADC_CHSELRB_CHSELB_10                          (0x00000400UL)
#define ADC_CHSELRB_CHSELB_11                          (0x00000800UL)

/*  Bit definition for ADC_EXCHSELR register  */
#define ADC_EXCHSELR_EXCHSEL                           (0x01U)

/*  Bit definition for ADC_SSTR register  */
#define ADC_SSTR                                       (0xFFU)

/*  Bit definition for ADC_ISR register  */
#define ADC_ISR_EOCAF_POS                              (0U)
#define ADC_ISR_EOCAF                                  (0x01U)
#define ADC_ISR_EOCBF_POS                              (1U)
#define ADC_ISR_EOCBF                                  (0x02U)

/*  Bit definition for ADC_ICR register  */
#define ADC_ICR_EOCAIEN_POS                            (0U)
#define ADC_ICR_EOCAIEN                                (0x01U)
#define ADC_ICR_EOCBIEN_POS                            (1U)
#define ADC_ICR_EOCBIEN                                (0x02U)

/*  Bit definition for ADC_ISCLRR register  */
#define ADC_ISCLRR_CLREOCAF_POS                        (0U)
#define ADC_ISCLRR_CLREOCAF                            (0x01U)
#define ADC_ISCLRR_CLREOCBF_POS                        (1U)
#define ADC_ISCLRR_CLREOCBF                            (0x02U)

/*  Bit definition for ADC_DR0 register  */
#define ADC_DR0                                        (0xFFFFU)

/*  Bit definition for ADC_DR1 register  */
#define ADC_DR1                                        (0xFFFFU)

/*  Bit definition for ADC_DR2 register  */
#define ADC_DR2                                        (0xFFFFU)

/*  Bit definition for ADC_DR3 register  */
#define ADC_DR3                                        (0xFFFFU)

/*  Bit definition for ADC_DR4 register  */
#define ADC_DR4                                        (0xFFFFU)

/*  Bit definition for ADC_DR5 register  */
#define ADC_DR5                                        (0xFFFFU)

/*  Bit definition for ADC_DR6 register  */
#define ADC_DR6                                        (0xFFFFU)

/*  Bit definition for ADC_DR7 register  */
#define ADC_DR7                                        (0xFFFFU)

/*  Bit definition for ADC_DR8 register  */
#define ADC_DR8                                        (0xFFFFU)

/*  Bit definition for ADC_DR9 register  */
#define ADC_DR9                                        (0xFFFFU)

/*  Bit definition for ADC_DR10 register  */
#define ADC_DR10                                       (0xFFFFU)

/*  Bit definition for ADC_DR11 register  */
#define ADC_DR11                                       (0xFFFFU)

/*  Bit definition for ADC_AWDCR register  */
#define ADC_AWDCR_AWD0EN_POS                           (0U)
#define ADC_AWDCR_AWD0EN                               (0x0001U)
#define ADC_AWDCR_AWD0IEN_POS                          (1U)
#define ADC_AWDCR_AWD0IEN                              (0x0002U)
#define ADC_AWDCR_AWD0MD_POS                           (2U)
#define ADC_AWDCR_AWD0MD                               (0x0004U)
#define ADC_AWDCR_AWD1EN_POS                           (4U)
#define ADC_AWDCR_AWD1EN                               (0x0010U)
#define ADC_AWDCR_AWD1IEN_POS                          (5U)
#define ADC_AWDCR_AWD1IEN                              (0x0020U)
#define ADC_AWDCR_AWD1MD_POS                           (6U)
#define ADC_AWDCR_AWD1MD                               (0x0040U)
#define ADC_AWDCR_AWDCM_POS                            (8U)
#define ADC_AWDCR_AWDCM                                (0x0300U)
#define ADC_AWDCR_AWDCM_0                              (0x0100U)
#define ADC_AWDCR_AWDCM_1                              (0x0200U)

/*  Bit definition for ADC_AWDSR register  */
#define ADC_AWDSR_AWD0F_POS                            (0U)
#define ADC_AWDSR_AWD0F                                (0x01U)
#define ADC_AWDSR_AWD1F_POS                            (1U)
#define ADC_AWDSR_AWD1F                                (0x02U)
#define ADC_AWDSR_AWDCMF_POS                           (4U)
#define ADC_AWDSR_AWDCMF                               (0x10U)

/*  Bit definition for ADC_AWDSCLRR register  */
#define ADC_AWDSCLRR_CLRAWD0F_POS                      (0U)
#define ADC_AWDSCLRR_CLRAWD0F                          (0x01U)
#define ADC_AWDSCLRR_CLRAWD1F_POS                      (1U)
#define ADC_AWDSCLRR_CLRAWD1F                          (0x02U)
#define ADC_AWDSCLRR_CLRAWDCMF_POS                     (4U)
#define ADC_AWDSCLRR_CLRAWDCMF                         (0x10U)

/*  Bit definition for ADC_AWD0DR0 register  */
#define ADC_AWD0DR0                                    (0xFFFFU)

/*  Bit definition for ADC_AWD0DR1 register  */
#define ADC_AWD0DR1                                    (0xFFFFU)

/*  Bit definition for ADC_AWD0CHSR register  */
#define ADC_AWD0CHSR_AWDCH                             (0x1FU)
#define ADC_AWD0CHSR_AWDCH_0                           (0x01U)
#define ADC_AWD0CHSR_AWDCH_1                           (0x02U)
#define ADC_AWD0CHSR_AWDCH_2                           (0x04U)
#define ADC_AWD0CHSR_AWDCH_3                           (0x08U)
#define ADC_AWD0CHSR_AWDCH_4                           (0x10U)

/*  Bit definition for ADC_AWD1DR0 register  */
#define ADC_AWD1DR0                                    (0xFFFFU)

/*  Bit definition for ADC_AWD1DR1 register  */
#define ADC_AWD1DR1                                    (0xFFFFU)

/*  Bit definition for ADC_AWD1CHSR register  */
#define ADC_AWD1CHSR_AWDCH                             (0x1FU)
#define ADC_AWD1CHSR_AWDCH_0                           (0x01U)
#define ADC_AWD1CHSR_AWDCH_1                           (0x02U)
#define ADC_AWD1CHSR_AWDCH_2                           (0x04U)
#define ADC_AWD1CHSR_AWDCH_3                           (0x08U)
#define ADC_AWD1CHSR_AWDCH_4                           (0x10U)

/*******************************************************************************
                Bit definition for Peripheral AOS
*******************************************************************************/
/*  Bit definition for AOS_INTC_STRGCR register  */
#define AOS_INTC_STRGCR_STRG                           (0x00000001UL)

/*  Bit definition for AOS_TMR0_HTSSR register  */
#define AOS_TMR0_HTSSR_TRGSEL                          (0x0000007FUL)

/*  Bit definition for AOS_TMRB_HTSSR register  */
#define AOS_TMRB_HTSSR_TRGSEL                          (0x0000007FUL)

/*  Bit definition for AOS_ADC_ITRGSELR0 register  */
#define AOS_ADC_ITRGSELR0_TRGSEL                       (0x0000007FUL)

/*  Bit definition for AOS_ADC_ITRGSELR1 register  */
#define AOS_ADC_ITRGSELR1_TRGSEL                       (0x0000007FUL)

/*******************************************************************************
                Bit definition for Peripheral CMU
*******************************************************************************/
/*  Bit definition for CMU_PERICKSEL register  */
#define CMU_PERICKSEL_PERICKSEL                        (0x07U)

/*  Bit definition for CMU_XTALSTDSR register  */
#define CMU_XTALSTDSR_XTALSTDF                         (0x01U)

/*  Bit definition for CMU_SCKDIVR register  */
#define CMU_SCKDIVR_SCKDIV                             (0x07U)

/*  Bit definition for CMU_CKSWR register  */
#define CMU_CKSWR_CKSW                                 (0x03U)
#define CMU_CKSWR_CKSW_0                               (0x01U)
#define CMU_CKSWR_CKSW_1                               (0x02U)

/*  Bit definition for CMU_XTALCR register  */
#define CMU_XTALCR_XTALSTP                             (0x01U)

/*  Bit definition for CMU_XTALCFGR register  */
#define CMU_XTALCFGR_XTALDRV_POS                       (4U)
#define CMU_XTALCFGR_XTALDRV                           (0x30U)
#define CMU_XTALCFGR_XTALDRV_0                         (0x10U)
#define CMU_XTALCFGR_XTALDRV_1                         (0x20U)
#define CMU_XTALCFGR_XTALMS_POS                        (6U)
#define CMU_XTALCFGR_XTALMS                            (0x40U)
#define CMU_XTALCFGR_SUPDRV_POS                        (7U)
#define CMU_XTALCFGR_SUPDRV                            (0x80U)

/*  Bit definition for CMU_XTALSTBCR register  */
#define CMU_XTALSTBCR_XTALSTB                          (0x07U)
#define CMU_XTALSTBCR_XTALSTB_0                        (0x01U)
#define CMU_XTALSTBCR_XTALSTB_1                        (0x02U)
#define CMU_XTALSTBCR_XTALSTB_2                        (0x04U)

/*  Bit definition for CMU_HRCCR register  */
#define CMU_HRCCR_HRCSTP                               (0x01U)

/*  Bit definition for CMU_OSCSTBSR register  */
#define CMU_OSCSTBSR_HRCSTBF_POS                       (0U)
#define CMU_OSCSTBSR_HRCSTBF                           (0x01U)
#define CMU_OSCSTBSR_XTALSTBF_POS                      (3U)
#define CMU_OSCSTBSR_XTALSTBF                          (0x08U)

/*  Bit definition for CMU_MCOCFGR register  */
#define CMU_MCOCFGR_MCOSEL_POS                         (0U)
#define CMU_MCOCFGR_MCOSEL                             (0x0FU)
#define CMU_MCOCFGR_MCODIV_POS                         (4U)
#define CMU_MCOCFGR_MCODIV                             (0x70U)
#define CMU_MCOCFGR_MCOEN_POS                          (7U)
#define CMU_MCOCFGR_MCOEN                              (0x80U)

/*  Bit definition for CMU_XTALSTDCR register  */
#define CMU_XTALSTDCR_XTALSTDIE_POS                    (0U)
#define CMU_XTALSTDCR_XTALSTDIE                        (0x01U)
#define CMU_XTALSTDCR_XTALSTDRE_POS                    (1U)
#define CMU_XTALSTDCR_XTALSTDRE                        (0x02U)
#define CMU_XTALSTDCR_XTALSTDRIS_POS                   (2U)
#define CMU_XTALSTDCR_XTALSTDRIS                       (0x04U)
#define CMU_XTALSTDCR_XTALSTDE_POS                     (7U)
#define CMU_XTALSTDCR_XTALSTDE                         (0x80U)

/*  Bit definition for CMU_FCG register  */
#define CMU_FCG_ADC_POS                                (0U)
#define CMU_FCG_ADC                                    (0x00000001UL)
#define CMU_FCG_CTC_POS                                (1U)
#define CMU_FCG_CTC                                    (0x00000002UL)
#define CMU_FCG_AOS_POS                                (4U)
#define CMU_FCG_AOS                                    (0x00000010UL)
#define CMU_FCG_CRC_POS                                (7U)
#define CMU_FCG_CRC                                    (0x00000080UL)
#define CMU_FCG_TMRB1_POS                              (8U)
#define CMU_FCG_TMRB1                                  (0x00000100UL)
#define CMU_FCG_TMRB2_POS                              (9U)
#define CMU_FCG_TMRB2                                  (0x00000200UL)
#define CMU_FCG_TMRB3_POS                              (10U)
#define CMU_FCG_TMRB3                                  (0x00000400UL)
#define CMU_FCG_TMRB4_POS                              (11U)
#define CMU_FCG_TMRB4                                  (0x00000800UL)
#define CMU_FCG_TMRB5_POS                              (12U)
#define CMU_FCG_TMRB5                                  (0x00001000UL)
#define CMU_FCG_TMRB6_POS                              (13U)
#define CMU_FCG_TMRB6                                  (0x00002000UL)
#define CMU_FCG_TMRB7_POS                              (14U)
#define CMU_FCG_TMRB7                                  (0x00004000UL)
#define CMU_FCG_TMRB8_POS                              (15U)
#define CMU_FCG_TMRB8                                  (0x00008000UL)
#define CMU_FCG_TMR0_POS                               (16U)
#define CMU_FCG_TMR0                                   (0x00010000UL)
#define CMU_FCG_UART1_POS                              (24U)
#define CMU_FCG_UART1                                  (0x01000000UL)
#define CMU_FCG_UART2_POS                              (25U)
#define CMU_FCG_UART2                                  (0x02000000UL)
#define CMU_FCG_UART3_POS                              (26U)
#define CMU_FCG_UART3                                  (0x04000000UL)
#define CMU_FCG_UART4_POS                              (27U)
#define CMU_FCG_UART4                                  (0x08000000UL)
#define CMU_FCG_I2C_POS                                (28U)
#define CMU_FCG_I2C                                    (0x10000000UL)
#define CMU_FCG_SPI_POS                                (29U)
#define CMU_FCG_SPI                                    (0x20000000UL)

/*  Bit definition for CMU_LRCCR register  */
#define CMU_LRCCR_LRCSTP                               (0x01U)

/*******************************************************************************
                Bit definition for Peripheral CRC
*******************************************************************************/
/*  Bit definition for CRC_CR register  */
#define CRC_CR_CR_POS                                  (0U)
#define CRC_CR_CR                                      (0x00000001UL)
#define CRC_CR_FLAG_POS                                (1U)
#define CRC_CR_FLAG                                    (0x00000002UL)

/*  Bit definition for CRC_RESLT register  */
#define CRC_RESLT                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT0 register  */
#define CRC_DAT0                                       (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT1 register  */
#define CRC_DAT1                                       (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT2 register  */
#define CRC_DAT2                                       (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT3 register  */
#define CRC_DAT3                                       (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT4 register  */
#define CRC_DAT4                                       (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT5 register  */
#define CRC_DAT5                                       (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT6 register  */
#define CRC_DAT6                                       (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT7 register  */
#define CRC_DAT7                                       (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT8 register  */
#define CRC_DAT8                                       (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT9 register  */
#define CRC_DAT9                                       (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT10 register  */
#define CRC_DAT10                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT11 register  */
#define CRC_DAT11                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT12 register  */
#define CRC_DAT12                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT13 register  */
#define CRC_DAT13                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT14 register  */
#define CRC_DAT14                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT15 register  */
#define CRC_DAT15                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT16 register  */
#define CRC_DAT16                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT17 register  */
#define CRC_DAT17                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT18 register  */
#define CRC_DAT18                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT19 register  */
#define CRC_DAT19                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT20 register  */
#define CRC_DAT20                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT21 register  */
#define CRC_DAT21                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT22 register  */
#define CRC_DAT22                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT23 register  */
#define CRC_DAT23                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT24 register  */
#define CRC_DAT24                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT25 register  */
#define CRC_DAT25                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT26 register  */
#define CRC_DAT26                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT27 register  */
#define CRC_DAT27                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT28 register  */
#define CRC_DAT28                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT29 register  */
#define CRC_DAT29                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT30 register  */
#define CRC_DAT30                                      (0xFFFFFFFFUL)

/*  Bit definition for CRC_DAT31 register  */
#define CRC_DAT31                                      (0xFFFFFFFFUL)

/*******************************************************************************
                Bit definition for Peripheral CTC
*******************************************************************************/
/*  Bit definition for CTC_CR1 register  */
#define CTC_CR1_REFPSC_POS                             (0U)
#define CTC_CR1_REFPSC                                 (0x00000007UL)
#define CTC_CR1_REFPSC_0                               (0x00000001UL)
#define CTC_CR1_REFPSC_1                               (0x00000002UL)
#define CTC_CR1_REFPSC_2                               (0x00000004UL)
#define CTC_CR1_REFCKS_POS                             (4U)
#define CTC_CR1_REFCKS                                 (0x00000030UL)
#define CTC_CR1_REFCKS_0                               (0x00000010UL)
#define CTC_CR1_REFCKS_1                               (0x00000020UL)
#define CTC_CR1_ERRIE_POS                              (6U)
#define CTC_CR1_ERRIE                                  (0x00000040UL)
#define CTC_CR1_CTCEN_POS                              (7U)
#define CTC_CR1_CTCEN                                  (0x00000080UL)
#define CTC_CR1_TRMVAL_POS                             (16U)
#define CTC_CR1_TRMVAL                                 (0x003F0000UL)

/*  Bit definition for CTC_CR2 register  */
#define CTC_CR2_OFSVAL_POS                             (0U)
#define CTC_CR2_OFSVAL                                 (0x000000FFUL)
#define CTC_CR2_RLDVAL_POS                             (16U)
#define CTC_CR2_RLDVAL                                 (0xFFFF0000UL)

/*  Bit definition for CTC_STR register  */
#define CTC_STR_TRIMOK_POS                             (0U)
#define CTC_STR_TRIMOK                                 (0x00000001UL)
#define CTC_STR_TRMOVF_POS                             (1U)
#define CTC_STR_TRMOVF                                 (0x00000002UL)
#define CTC_STR_TRMUDF_POS                             (2U)
#define CTC_STR_TRMUDF                                 (0x00000004UL)
#define CTC_STR_CTCBSY_POS                             (3U)
#define CTC_STR_CTCBSY                                 (0x00000008UL)

/*******************************************************************************
                Bit definition for Peripheral DBGC
*******************************************************************************/
/*  Bit definition for DBGC_MCUDBGSTAT register  */
#define DBGC_MCUDBGSTAT_CDBGPWRUPREQ_POS               (0U)
#define DBGC_MCUDBGSTAT_CDBGPWRUPREQ                   (0x00000001UL)
#define DBGC_MCUDBGSTAT_CDBGPWRUPACK_POS               (1U)
#define DBGC_MCUDBGSTAT_CDBGPWRUPACK                   (0x00000002UL)

/*  Bit definition for DBGC_MCUSTPCTL register  */
#define DBGC_MCUSTPCTL_SWDTSTP_POS                     (0U)
#define DBGC_MCUSTPCTL_SWDTSTP                         (0x00000001UL)
#define DBGC_MCUSTPCTL_TMR01STP_POS                    (14U)
#define DBGC_MCUSTPCTL_TMR01STP                        (0x00004000UL)
#define DBGC_MCUSTPCTL_TMR21STP_POS                    (17U)
#define DBGC_MCUSTPCTL_TMR21STP                        (0x00020000UL)
#define DBGC_MCUSTPCTL_TMR41STP_POS                    (20U)
#define DBGC_MCUSTPCTL_TMR41STP                        (0x00100000UL)
#define DBGC_MCUSTPCTL_TMRA1STP_POS                    (23U)
#define DBGC_MCUSTPCTL_TMRA1STP                        (0x00800000UL)
#define DBGC_MCUSTPCTL_TMRB1STP_POS                    (24U)
#define DBGC_MCUSTPCTL_TMRB1STP                        (0x01000000UL)
#define DBGC_MCUSTPCTL_TMRB2STP_POS                    (25U)
#define DBGC_MCUSTPCTL_TMRB2STP                        (0x02000000UL)
#define DBGC_MCUSTPCTL_TMRB3STP_POS                    (26U)
#define DBGC_MCUSTPCTL_TMRB3STP                        (0x04000000UL)
#define DBGC_MCUSTPCTL_TMRB4STP_POS                    (27U)
#define DBGC_MCUSTPCTL_TMRB4STP                        (0x08000000UL)
#define DBGC_MCUSTPCTL_TMRB5STP_POS                    (28U)
#define DBGC_MCUSTPCTL_TMRB5STP                        (0x10000000UL)
#define DBGC_MCUSTPCTL_TMRB6STP_POS                    (29U)
#define DBGC_MCUSTPCTL_TMRB6STP                        (0x20000000UL)
#define DBGC_MCUSTPCTL_TMRB7STP_POS                    (30U)
#define DBGC_MCUSTPCTL_TMRB7STP                        (0x40000000UL)
#define DBGC_MCUSTPCTL_TMRB8STP_POS                    (31U)
#define DBGC_MCUSTPCTL_TMRB8STP                        (0x80000000UL)

/*******************************************************************************
                Bit definition for Peripheral EFM
*******************************************************************************/
/*  Bit definition for EFM_FAPRT register  */
#define EFM_FAPRT_FAPRT                                (0x0000FFFFUL)

/*  Bit definition for EFM_FSTP register  */
#define EFM_FSTP_FSTP                                  (0x00000001UL)

/*  Bit definition for EFM_FRMC register  */
#define EFM_FRMC_FLWT_POS                              (0U)
#define EFM_FRMC_FLWT                                  (0x00000001UL)
#define EFM_FRMC_PREFETE_POS                           (17U)
#define EFM_FRMC_PREFETE                               (0x00020000UL)

/*  Bit definition for EFM_FWMC register  */
#define EFM_FWMC_PEMODE_POS                            (0U)
#define EFM_FWMC_PEMODE                                (0x00000001UL)
#define EFM_FWMC_PEMOD_POS                             (4U)
#define EFM_FWMC_PEMOD                                 (0x00000070UL)
#define EFM_FWMC_PEMOD_0                               (0x00000010UL)
#define EFM_FWMC_PEMOD_1                               (0x00000020UL)
#define EFM_FWMC_PEMOD_2                               (0x00000040UL)
#define EFM_FWMC_BUSHLDCTL_POS                         (8U)
#define EFM_FWMC_BUSHLDCTL                             (0x00000100UL)

/*  Bit definition for EFM_FSR register  */
#define EFM_FSR_PEWERR_POS                             (0U)
#define EFM_FSR_PEWERR                                 (0x00000001UL)
#define EFM_FSR_PEPRTERR_POS                           (1U)
#define EFM_FSR_PEPRTERR                               (0x00000002UL)
#define EFM_FSR_PGMISMTCH_POS                          (3U)
#define EFM_FSR_PGMISMTCH                              (0x00000008UL)
#define EFM_FSR_OPTEND_POS                             (4U)
#define EFM_FSR_OPTEND                                 (0x00000010UL)
#define EFM_FSR_COLERR_POS                             (5U)
#define EFM_FSR_COLERR                                 (0x00000020UL)
#define EFM_FSR_RDY_POS                                (8U)
#define EFM_FSR_RDY                                    (0x00000100UL)

/*  Bit definition for EFM_FSCLR register  */
#define EFM_FSCLR_PEWERRCLR_POS                        (0U)
#define EFM_FSCLR_PEWERRCLR                            (0x00000001UL)
#define EFM_FSCLR_PEPRTERRCLR_POS                      (1U)
#define EFM_FSCLR_PEPRTERRCLR                          (0x00000002UL)
#define EFM_FSCLR_PGMISMTCHCLR_POS                     (3U)
#define EFM_FSCLR_PGMISMTCHCLR                         (0x00000008UL)
#define EFM_FSCLR_OPTENDCLR_POS                        (4U)
#define EFM_FSCLR_OPTENDCLR                            (0x00000010UL)
#define EFM_FSCLR_COLERRCLR_POS                        (5U)
#define EFM_FSCLR_COLERRCLR                            (0x00000020UL)

/*  Bit definition for EFM_FITE register  */
#define EFM_FITE_PEERRITE_POS                          (0U)
#define EFM_FITE_PEERRITE                              (0x00000001UL)
#define EFM_FITE_OPTENDITE_POS                         (1U)
#define EFM_FITE_OPTENDITE                             (0x00000002UL)
#define EFM_FITE_COLERRITE_POS                         (2U)
#define EFM_FITE_COLERRITE                             (0x00000004UL)

/*  Bit definition for EFM_FPMTSW register  */
#define EFM_FPMTSW_FPMTSW                              (0x0000FFFFUL)

/*  Bit definition for EFM_FPMTEW register  */
#define EFM_FPMTEW_FPMTEW                              (0x0000FFFFUL)

/*  Bit definition for EFM_UQID0 register  */
#define EFM_UQID0                                      (0xFFFFFFFFUL)

/*  Bit definition for EFM_UQID1 register  */
#define EFM_UQID1                                      (0xFFFFFFFFUL)

/*  Bit definition for EFM_UQID2 register  */
#define EFM_UQID2                                      (0xFFFFFFFFUL)

/*  Bit definition for EFM_HRCCFGR register  */
#define EFM_HRCCFGR_HRCFREQS                           (0x0FU)
#define EFM_HRCCFGR_HRCFREQS_0                         (0x01U)
#define EFM_HRCCFGR_HRCFREQS_1                         (0x02U)
#define EFM_HRCCFGR_HRCFREQS_2                         (0x04U)
#define EFM_HRCCFGR_HRCFREQS_3                         (0x08U)

/*  Bit definition for EFM_LVDICGCR register  */
#define EFM_LVDICGCR_DFS_POS                           (0U)
#define EFM_LVDICGCR_DFS                               (0x0003U)
#define EFM_LVDICGCR_DFS_0                             (0x0001U)
#define EFM_LVDICGCR_DFS_1                             (0x0002U)
#define EFM_LVDICGCR_DFDIS_POS                         (2U)
#define EFM_LVDICGCR_DFDIS                             (0x0004U)
#define EFM_LVDICGCR_LVDLVL_POS                        (8U)
#define EFM_LVDICGCR_LVDLVL                            (0x0F00U)
#define EFM_LVDICGCR_LVDLVL_0                          (0x0100U)
#define EFM_LVDICGCR_LVDLVL_1                          (0x0200U)
#define EFM_LVDICGCR_LVDLVL_2                          (0x0400U)
#define EFM_LVDICGCR_LVDLVL_3                          (0x0800U)
#define EFM_LVDICGCR_NMIS_POS                          (12U)
#define EFM_LVDICGCR_NMIS                              (0x1000U)
#define EFM_LVDICGCR_IRS_POS                           (13U)
#define EFM_LVDICGCR_IRS                               (0x2000U)
#define EFM_LVDICGCR_IRDIS_POS                         (14U)
#define EFM_LVDICGCR_IRDIS                             (0x4000U)
#define EFM_LVDICGCR_LVDDIS_POS                        (15U)
#define EFM_LVDICGCR_LVDDIS                            (0x8000U)

/*******************************************************************************
                Bit definition for Peripheral GPIO
*******************************************************************************/
/*  Bit definition for GPIO_PIDR0 register  */
#define GPIO_PIDR0_PIN0_POS                            (0U)
#define GPIO_PIDR0_PIN0                                (0x01U)
#define GPIO_PIDR0_PIN1_POS                            (1U)
#define GPIO_PIDR0_PIN1                                (0x02U)

/*  Bit definition for GPIO_PIDR1 register  */
#define GPIO_PIDR1_PIN0_POS                            (0U)
#define GPIO_PIDR1_PIN0                                (0x01U)
#define GPIO_PIDR1_PIN1_POS                            (1U)
#define GPIO_PIDR1_PIN1                                (0x02U)
#define GPIO_PIDR1_PIN2_POS                            (2U)
#define GPIO_PIDR1_PIN2                                (0x04U)
#define GPIO_PIDR1_PIN3_POS                            (3U)
#define GPIO_PIDR1_PIN3                                (0x08U)
#define GPIO_PIDR1_PIN4_POS                            (4U)
#define GPIO_PIDR1_PIN4                                (0x10U)
#define GPIO_PIDR1_PIN5_POS                            (5U)
#define GPIO_PIDR1_PIN5                                (0x20U)
#define GPIO_PIDR1_PIN6_POS                            (6U)
#define GPIO_PIDR1_PIN6                                (0x40U)
#define GPIO_PIDR1_PIN7_POS                            (7U)
#define GPIO_PIDR1_PIN7                                (0x80U)

/*  Bit definition for GPIO_PIDR2 register  */
#define GPIO_PIDR2_PIN0_POS                            (0U)
#define GPIO_PIDR2_PIN0                                (0x01U)
#define GPIO_PIDR2_PIN1_POS                            (1U)
#define GPIO_PIDR2_PIN1                                (0x02U)
#define GPIO_PIDR2_PIN2_POS                            (2U)
#define GPIO_PIDR2_PIN2                                (0x04U)
#define GPIO_PIDR2_PIN3_POS                            (3U)
#define GPIO_PIDR2_PIN3                                (0x08U)

/*  Bit definition for GPIO_PIDR3 register  */
#define GPIO_PIDR3_PIN0_POS                            (0U)
#define GPIO_PIDR3_PIN0                                (0x01U)
#define GPIO_PIDR3_PIN1_POS                            (1U)
#define GPIO_PIDR3_PIN1                                (0x02U)

/*  Bit definition for GPIO_PIDR4 register  */
#define GPIO_PIDR4_PIN0                                (0x03U)

/*  Bit definition for GPIO_PIDR5 register  */
#define GPIO_PIDR5_PIN0_POS                            (0U)
#define GPIO_PIDR5_PIN0                                (0x01U)
#define GPIO_PIDR5_PIN1_POS                            (1U)
#define GPIO_PIDR5_PIN1                                (0x02U)

/*  Bit definition for GPIO_PIDR6 register  */
#define GPIO_PIDR6_PIN0_POS                            (0U)
#define GPIO_PIDR6_PIN0                                (0x01U)
#define GPIO_PIDR6_PIN1_POS                            (1U)
#define GPIO_PIDR6_PIN1                                (0x02U)
#define GPIO_PIDR6_PIN2_POS                            (2U)
#define GPIO_PIDR6_PIN2                                (0x04U)

/*  Bit definition for GPIO_PIDR7 register  */
#define GPIO_PIDR7_PIN0                                (0x0FU)

/*  Bit definition for GPIO_PIDR12 register  */
#define GPIO_PIDR12_PIN0_POS                           (0U)
#define GPIO_PIDR12_PIN0                               (0x01U)
#define GPIO_PIDR12_PIN1_POS                           (1U)
#define GPIO_PIDR12_PIN1                               (0x02U)
#define GPIO_PIDR12_PIN2_POS                           (2U)
#define GPIO_PIDR12_PIN2                               (0x04U)

/*  Bit definition for GPIO_PIDR13 register  */
#define GPIO_PIDR13_PIN7_POS                           (7U)
#define GPIO_PIDR13_PIN7                               (0x80U)

/*  Bit definition for GPIO_PIDR14 register  */
#define GPIO_PIDR14_PIN7_POS                           (7U)
#define GPIO_PIDR14_PIN7                               (0xC0U)

/*  Bit definition for GPIO_PODR0 register  */
#define GPIO_PODR0_POUT0_POS                           (0U)
#define GPIO_PODR0_POUT0                               (0x01U)
#define GPIO_PODR0_POUT1_POS                           (1U)
#define GPIO_PODR0_POUT1                               (0x02U)

/*  Bit definition for GPIO_PODR1 register  */
#define GPIO_PODR1_POUT0_POS                           (0U)
#define GPIO_PODR1_POUT0                               (0x01U)
#define GPIO_PODR1_POUT1_POS                           (1U)
#define GPIO_PODR1_POUT1                               (0x02U)
#define GPIO_PODR1_POUT2_POS                           (2U)
#define GPIO_PODR1_POUT2                               (0x04U)
#define GPIO_PODR1_POUT3_POS                           (3U)
#define GPIO_PODR1_POUT3                               (0x08U)
#define GPIO_PODR1_POUT4_POS                           (4U)
#define GPIO_PODR1_POUT4                               (0x10U)
#define GPIO_PODR1_POUT5_POS                           (5U)
#define GPIO_PODR1_POUT5                               (0x20U)
#define GPIO_PODR1_POUT6_POS                           (6U)
#define GPIO_PODR1_POUT6                               (0x40U)
#define GPIO_PODR1_POUT7_POS                           (7U)
#define GPIO_PODR1_POUT7                               (0x80U)

/*  Bit definition for GPIO_PODR2 register  */
#define GPIO_PODR2_POUT0_POS                           (0U)
#define GPIO_PODR2_POUT0                               (0x01U)
#define GPIO_PODR2_POUT1_POS                           (1U)
#define GPIO_PODR2_POUT1                               (0x02U)
#define GPIO_PODR2_POUT2_POS                           (2U)
#define GPIO_PODR2_POUT2                               (0x04U)
#define GPIO_PODR2_POUT3_POS                           (3U)
#define GPIO_PODR2_POUT3                               (0x08U)

/*  Bit definition for GPIO_PODR3 register  */
#define GPIO_PODR3_POUT0_POS                           (0U)
#define GPIO_PODR3_POUT0                               (0x01U)
#define GPIO_PODR3_POUT1_POS                           (1U)
#define GPIO_PODR3_POUT1                               (0x02U)

/*  Bit definition for GPIO_PODR4 register  */
#define GPIO_PODR4_POUT0                               (0x03U)

/*  Bit definition for GPIO_PODR5 register  */
#define GPIO_PODR5_POUT0_POS                           (0U)
#define GPIO_PODR5_POUT0                               (0x01U)
#define GPIO_PODR5_POUT1_POS                           (1U)
#define GPIO_PODR5_POUT1                               (0x02U)

/*  Bit definition for GPIO_PODR6 register  */
#define GPIO_PODR6_POUT0_POS                           (0U)
#define GPIO_PODR6_POUT0                               (0x01U)
#define GPIO_PODR6_POUT1_POS                           (1U)
#define GPIO_PODR6_POUT1                               (0x02U)
#define GPIO_PODR6_POUT2_POS                           (2U)
#define GPIO_PODR6_POUT2                               (0x04U)

/*  Bit definition for GPIO_PODR7 register  */
#define GPIO_PODR7_POUT0                               (0x0FU)

/*  Bit definition for GPIO_PODR12 register  */
#define GPIO_PODR12_POUT0_POS                          (0U)
#define GPIO_PODR12_POUT0                              (0x01U)
#define GPIO_PODR12_POUT1_POS                          (1U)
#define GPIO_PODR12_POUT1                              (0x02U)
#define GPIO_PODR12_POUT2_POS                          (2U)
#define GPIO_PODR12_POUT2                              (0x04U)

/*  Bit definition for GPIO_PODR13 register  */
#define GPIO_PODR13_POUT7_POS                          (7U)
#define GPIO_PODR13_POUT7                              (0x80U)

/*  Bit definition for GPIO_PODR14 register  */
#define GPIO_PODR14_POUT7_POS                          (7U)
#define GPIO_PODR14_POUT7                              (0xC0U)

/*  Bit definition for GPIO_POER0 register  */
#define GPIO_POER0_POUTE0_POS                          (0U)
#define GPIO_POER0_POUTE0                              (0x01U)
#define GPIO_POER0_POUTE1_POS                          (1U)
#define GPIO_POER0_POUTE1                              (0x02U)

/*  Bit definition for GPIO_POER1 register  */
#define GPIO_POER1_POUTE0_POS                          (0U)
#define GPIO_POER1_POUTE0                              (0x01U)
#define GPIO_POER1_POUTE1_POS                          (1U)
#define GPIO_POER1_POUTE1                              (0x02U)
#define GPIO_POER1_POUTE2_POS                          (2U)
#define GPIO_POER1_POUTE2                              (0x04U)
#define GPIO_POER1_POUTE3_POS                          (3U)
#define GPIO_POER1_POUTE3                              (0x08U)
#define GPIO_POER1_POUTE4_POS                          (4U)
#define GPIO_POER1_POUTE4                              (0x10U)
#define GPIO_POER1_POUTE5_POS                          (5U)
#define GPIO_POER1_POUTE5                              (0x20U)
#define GPIO_POER1_POUTE6_POS                          (6U)
#define GPIO_POER1_POUTE6                              (0x40U)
#define GPIO_POER1_POUTE7_POS                          (7U)
#define GPIO_POER1_POUTE7                              (0x80U)

/*  Bit definition for GPIO_POER2 register  */
#define GPIO_POER2_POUTE0_POS                          (0U)
#define GPIO_POER2_POUTE0                              (0x01U)
#define GPIO_POER2_POUTE1_POS                          (1U)
#define GPIO_POER2_POUTE1                              (0x02U)
#define GPIO_POER2_POUTE2_POS                          (2U)
#define GPIO_POER2_POUTE2                              (0x04U)
#define GPIO_POER2_POUTE3_POS                          (3U)
#define GPIO_POER2_POUTE3                              (0x08U)

/*  Bit definition for GPIO_POER3 register  */
#define GPIO_POER3_POUTE0_POS                          (0U)
#define GPIO_POER3_POUTE0                              (0x01U)
#define GPIO_POER3_POUTE1_POS                          (1U)
#define GPIO_POER3_POUTE1                              (0x02U)

/*  Bit definition for GPIO_POER4 register  */
#define GPIO_POER4_POUTE0                              (0x03U)

/*  Bit definition for GPIO_POER5 register  */
#define GPIO_POER5_POUTE0_POS                          (0U)
#define GPIO_POER5_POUTE0                              (0x01U)
#define GPIO_POER5_POUTE1_POS                          (1U)
#define GPIO_POER5_POUTE1                              (0x02U)

/*  Bit definition for GPIO_POER6 register  */
#define GPIO_POER6_POUTE0_POS                          (0U)
#define GPIO_POER6_POUTE0                              (0x01U)
#define GPIO_POER6_POUTE1_POS                          (1U)
#define GPIO_POER6_POUTE1                              (0x02U)
#define GPIO_POER6_POUTE2_POS                          (2U)
#define GPIO_POER6_POUTE2                              (0x04U)

/*  Bit definition for GPIO_POER7 register  */
#define GPIO_POER7_POUTE0                              (0x0FU)

/*  Bit definition for GPIO_POER12 register  */
#define GPIO_POER12_POUTE0_POS                         (0U)
#define GPIO_POER12_POUTE0                             (0x01U)
#define GPIO_POER12_POUTE1_POS                         (1U)
#define GPIO_POER12_POUTE1                             (0x02U)
#define GPIO_POER12_POUTE2_POS                         (2U)
#define GPIO_POER12_POUTE2                             (0x04U)

/*  Bit definition for GPIO_POER13 register  */
#define GPIO_POER13_POUTE7_POS                         (7U)
#define GPIO_POER13_POUTE7                             (0x80U)

/*  Bit definition for GPIO_POER14 register  */
#define GPIO_POER14_POUTE7_POS                         (7U)
#define GPIO_POER14_POUTE7                             (0xC0U)

/*  Bit definition for GPIO_POSR0 register  */
#define GPIO_POSR0_POS0_POS                            (0U)
#define GPIO_POSR0_POS0                                (0x01U)
#define GPIO_POSR0_POS1_POS                            (1U)
#define GPIO_POSR0_POS1                                (0x02U)

/*  Bit definition for GPIO_POSR1 register  */
#define GPIO_POSR1_POS0_POS                            (0U)
#define GPIO_POSR1_POS0                                (0x01U)
#define GPIO_POSR1_POS1_POS                            (1U)
#define GPIO_POSR1_POS1                                (0x02U)
#define GPIO_POSR1_POS2_POS                            (2U)
#define GPIO_POSR1_POS2                                (0x04U)
#define GPIO_POSR1_POS3_POS                            (3U)
#define GPIO_POSR1_POS3                                (0x08U)
#define GPIO_POSR1_POS4_POS                            (4U)
#define GPIO_POSR1_POS4                                (0x10U)
#define GPIO_POSR1_POS5_POS                            (5U)
#define GPIO_POSR1_POS5                                (0x20U)
#define GPIO_POSR1_POS6_POS                            (6U)
#define GPIO_POSR1_POS6                                (0x40U)
#define GPIO_POSR1_POS7_POS                            (7U)
#define GPIO_POSR1_POS7                                (0x80U)

/*  Bit definition for GPIO_POSR2 register  */
#define GPIO_POSR2_POS0_POS                            (0U)
#define GPIO_POSR2_POS0                                (0x01U)
#define GPIO_POSR2_POS1_POS                            (1U)
#define GPIO_POSR2_POS1                                (0x02U)
#define GPIO_POSR2_POS2_POS                            (2U)
#define GPIO_POSR2_POS2                                (0x04U)
#define GPIO_POSR2_POS3_POS                            (3U)
#define GPIO_POSR2_POS3                                (0x08U)

/*  Bit definition for GPIO_POSR3 register  */
#define GPIO_POSR3_POS0_POS                            (0U)
#define GPIO_POSR3_POS0                                (0x01U)
#define GPIO_POSR3_POS1_POS                            (1U)
#define GPIO_POSR3_POS1                                (0x02U)

/*  Bit definition for GPIO_POSR4 register  */
#define GPIO_POSR4_POS0                                (0x03U)

/*  Bit definition for GPIO_POSR5 register  */
#define GPIO_POSR5_POS0_POS                            (0U)
#define GPIO_POSR5_POS0                                (0x01U)
#define GPIO_POSR5_POS1_POS                            (1U)
#define GPIO_POSR5_POS1                                (0x02U)

/*  Bit definition for GPIO_POSR6 register  */
#define GPIO_POSR6_POS0_POS                            (0U)
#define GPIO_POSR6_POS0                                (0x01U)
#define GPIO_POSR6_POS1_POS                            (1U)
#define GPIO_POSR6_POS1                                (0x02U)
#define GPIO_POSR6_POS2_POS                            (2U)
#define GPIO_POSR6_POS2                                (0x04U)

/*  Bit definition for GPIO_POSR7 register  */
#define GPIO_POSR7_POS0                                (0x0FU)

/*  Bit definition for GPIO_POSR12 register  */
#define GPIO_POSR12_POS0_POS                           (0U)
#define GPIO_POSR12_POS0                               (0x01U)
#define GPIO_POSR12_POS1_POS                           (1U)
#define GPIO_POSR12_POS1                               (0x02U)
#define GPIO_POSR12_POS2_POS                           (2U)
#define GPIO_POSR12_POS2                               (0x04U)

/*  Bit definition for GPIO_POSR13 register  */
#define GPIO_POSR13_POS7_POS                           (7U)
#define GPIO_POSR13_POS7                               (0x80U)

/*  Bit definition for GPIO_POSR14 register  */
#define GPIO_POSR14_POS7_POS                           (7U)
#define GPIO_POSR14_POS7                               (0xC0U)

/*  Bit definition for GPIO_PORR0 register  */
#define GPIO_PORR0_POR0_POS                            (0U)
#define GPIO_PORR0_POR0                                (0x01U)
#define GPIO_PORR0_POR1_POS                            (1U)
#define GPIO_PORR0_POR1                                (0x02U)

/*  Bit definition for GPIO_PORR1 register  */
#define GPIO_PORR1_POR0_POS                            (0U)
#define GPIO_PORR1_POR0                                (0x01U)
#define GPIO_PORR1_POR1_POS                            (1U)
#define GPIO_PORR1_POR1                                (0x02U)
#define GPIO_PORR1_POR2_POS                            (2U)
#define GPIO_PORR1_POR2                                (0x04U)
#define GPIO_PORR1_POR3_POS                            (3U)
#define GPIO_PORR1_POR3                                (0x08U)
#define GPIO_PORR1_POR4_POS                            (4U)
#define GPIO_PORR1_POR4                                (0x10U)
#define GPIO_PORR1_POR5_POS                            (5U)
#define GPIO_PORR1_POR5                                (0x20U)
#define GPIO_PORR1_POR6_POS                            (6U)
#define GPIO_PORR1_POR6                                (0x40U)
#define GPIO_PORR1_POR7_POS                            (7U)
#define GPIO_PORR1_POR7                                (0x80U)

/*  Bit definition for GPIO_PORR2 register  */
#define GPIO_PORR2_POR0_POS                            (0U)
#define GPIO_PORR2_POR0                                (0x01U)
#define GPIO_PORR2_POR1_POS                            (1U)
#define GPIO_PORR2_POR1                                (0x02U)
#define GPIO_PORR2_POR2_POS                            (2U)
#define GPIO_PORR2_POR2                                (0x04U)
#define GPIO_PORR2_POR3_POS                            (3U)
#define GPIO_PORR2_POR3                                (0x08U)

/*  Bit definition for GPIO_PORR3 register  */
#define GPIO_PORR3_POR0_POS                            (0U)
#define GPIO_PORR3_POR0                                (0x01U)
#define GPIO_PORR3_POR1_POS                            (1U)
#define GPIO_PORR3_POR1                                (0x02U)

/*  Bit definition for GPIO_PORR4 register  */
#define GPIO_PORR4_POR0                                (0x03U)

/*  Bit definition for GPIO_PORR5 register  */
#define GPIO_PORR5_POR0_POS                            (0U)
#define GPIO_PORR5_POR0                                (0x01U)
#define GPIO_PORR5_POR1_POS                            (1U)
#define GPIO_PORR5_POR1                                (0x02U)

/*  Bit definition for GPIO_PORR6 register  */
#define GPIO_PORR6_POR0_POS                            (0U)
#define GPIO_PORR6_POR0                                (0x01U)
#define GPIO_PORR6_POR1_POS                            (1U)
#define GPIO_PORR6_POR1                                (0x02U)
#define GPIO_PORR6_POR2_POS                            (2U)
#define GPIO_PORR6_POR2                                (0x04U)

/*  Bit definition for GPIO_PORR7 register  */
#define GPIO_PORR7_POR0                                (0x0FU)

/*  Bit definition for GPIO_PORR12 register  */
#define GPIO_PORR12_POR0_POS                           (0U)
#define GPIO_PORR12_POR0                               (0x01U)
#define GPIO_PORR12_POR1_POS                           (1U)
#define GPIO_PORR12_POR1                               (0x02U)
#define GPIO_PORR12_POR2_POS                           (2U)
#define GPIO_PORR12_POR2                               (0x04U)

/*  Bit definition for GPIO_PORR13 register  */
#define GPIO_PORR13_POR7_POS                           (7U)
#define GPIO_PORR13_POR7                               (0x80U)

/*  Bit definition for GPIO_PORR14 register  */
#define GPIO_PORR14_POR7_POS                           (7U)
#define GPIO_PORR14_POR7                               (0xC0U)

/*  Bit definition for GPIO_POTR0 register  */
#define GPIO_POTR0_POT0_POS                            (0U)
#define GPIO_POTR0_POT0                                (0x01U)
#define GPIO_POTR0_POT1_POS                            (1U)
#define GPIO_POTR0_POT1                                (0x02U)

/*  Bit definition for GPIO_POTR1 register  */
#define GPIO_POTR1_POT0_POS                            (0U)
#define GPIO_POTR1_POT0                                (0x01U)
#define GPIO_POTR1_POT1_POS                            (1U)
#define GPIO_POTR1_POT1                                (0x02U)
#define GPIO_POTR1_POT2_POS                            (2U)
#define GPIO_POTR1_POT2                                (0x04U)
#define GPIO_POTR1_POT3_POS                            (3U)
#define GPIO_POTR1_POT3                                (0x08U)
#define GPIO_POTR1_POT4_POS                            (4U)
#define GPIO_POTR1_POT4                                (0x10U)
#define GPIO_POTR1_POT5_POS                            (5U)
#define GPIO_POTR1_POT5                                (0x20U)
#define GPIO_POTR1_POT6_POS                            (6U)
#define GPIO_POTR1_POT6                                (0x40U)
#define GPIO_POTR1_POT7_POS                            (7U)
#define GPIO_POTR1_POT7                                (0x80U)

/*  Bit definition for GPIO_POTR2 register  */
#define GPIO_POTR2_POT0_POS                            (0U)
#define GPIO_POTR2_POT0                                (0x01U)
#define GPIO_POTR2_POT1_POS                            (1U)
#define GPIO_POTR2_POT1                                (0x02U)
#define GPIO_POTR2_POT2_POS                            (2U)
#define GPIO_POTR2_POT2                                (0x04U)
#define GPIO_POTR2_POT3_POS                            (3U)
#define GPIO_POTR2_POT3                                (0x08U)

/*  Bit definition for GPIO_POTR3 register  */
#define GPIO_POTR3_POT0_POS                            (0U)
#define GPIO_POTR3_POT0                                (0x01U)
#define GPIO_POTR3_POT1_POS                            (1U)
#define GPIO_POTR3_POT1                                (0x02U)

/*  Bit definition for GPIO_POTR4 register  */
#define GPIO_POTR4_POT0                                (0x03U)

/*  Bit definition for GPIO_POTR5 register  */
#define GPIO_POTR5_POT0_POS                            (0U)
#define GPIO_POTR5_POT0                                (0x01U)
#define GPIO_POTR5_POT1_POS                            (1U)
#define GPIO_POTR5_POT1                                (0x02U)

/*  Bit definition for GPIO_POTR6 register  */
#define GPIO_POTR6_POT0_POS                            (0U)
#define GPIO_POTR6_POT0                                (0x01U)
#define GPIO_POTR6_POT1_POS                            (1U)
#define GPIO_POTR6_POT1                                (0x02U)
#define GPIO_POTR6_POT2_POS                            (2U)
#define GPIO_POTR6_POT2                                (0x04U)

/*  Bit definition for GPIO_POTR7 register  */
#define GPIO_POTR7_POT0                                (0x0FU)

/*  Bit definition for GPIO_POTR12 register  */
#define GPIO_POTR12_POT0_POS                           (0U)
#define GPIO_POTR12_POT0                               (0x01U)
#define GPIO_POTR12_POT1_POS                           (1U)
#define GPIO_POTR12_POT1                               (0x02U)
#define GPIO_POTR12_POT2_POS                           (2U)
#define GPIO_POTR12_POT2                               (0x04U)

/*  Bit definition for GPIO_POTR13 register  */
#define GPIO_POTR13_POT7_POS                           (7U)
#define GPIO_POTR13_POT7                               (0x80U)

/*  Bit definition for GPIO_POTR14 register  */
#define GPIO_POTR14_POT7_POS                           (7U)
#define GPIO_POTR14_POT7                               (0xC0U)

/*  Bit definition for GPIO_PCR register  */
#define GPIO_PCR_POUT_POS                              (0U)
#define GPIO_PCR_POUT                                  (0x0001U)
#define GPIO_PCR_POUTE_POS                             (1U)
#define GPIO_PCR_POUTE                                 (0x0002U)
#define GPIO_PCR_NOD_POS                               (2U)
#define GPIO_PCR_NOD                                   (0x0004U)
#define GPIO_PCR_DRV_POS                               (4U)
#define GPIO_PCR_DRV                                   (0x0010U)
#define GPIO_PCR_LTE_POS                               (5U)
#define GPIO_PCR_LTE                                   (0x0020U)
#define GPIO_PCR_PUU_POS                               (6U)
#define GPIO_PCR_PUU                                   (0x0040U)
#define GPIO_PCR_PIN_POS                               (8U)
#define GPIO_PCR_PIN                                   (0x0100U)
#define GPIO_PCR_INVE_POS                              (9U)
#define GPIO_PCR_INVE                                  (0x0200U)
#define GPIO_PCR_CINSEL_POS                            (10U)
#define GPIO_PCR_CINSEL                                (0x0400U)
#define GPIO_PCR_INTE_POS                              (11U)
#define GPIO_PCR_INTE                                  (0x0800U)
#define GPIO_PCR_FSEL_POS                              (12U)
#define GPIO_PCR_FSEL                                  (0x7000U)
#define GPIO_PCR_FSEL_0                                (0x1000U)
#define GPIO_PCR_FSEL_1                                (0x2000U)
#define GPIO_PCR_FSEL_2                                (0x4000U)

/*  Bit definition for GPIO_PSPCR register  */
#define GPIO_PSPCR_SPFE                                (0x0003U)
#define GPIO_PSPCR_SPFE_0                              (0x0001U)
#define GPIO_PSPCR_SPFE_1                              (0x0002U)

/*  Bit definition for GPIO_PCCR register  */
#define GPIO_PCCR_RDWT_POS                             (14U)
#define GPIO_PCCR_RDWT                                 (0xC000U)
#define GPIO_PCCR_RDWT_0                               (0x4000U)
#define GPIO_PCCR_RDWT_1                               (0x8000U)

/*  Bit definition for GPIO_PINAER register  */
#define GPIO_PINAER_PINAE0_POS                         (0U)
#define GPIO_PINAER_PINAE0                             (0x0001U)
#define GPIO_PINAER_PINAE1_POS                         (1U)
#define GPIO_PINAER_PINAE1                             (0x0002U)
#define GPIO_PINAER_PINAE2_POS                         (2U)
#define GPIO_PINAER_PINAE2                             (0x0004U)
#define GPIO_PINAER_PINAE3_POS                         (3U)
#define GPIO_PINAER_PINAE3                             (0x0008U)
#define GPIO_PINAER_PINAE4_POS                         (4U)
#define GPIO_PINAER_PINAE4                             (0x0010U)
#define GPIO_PINAER_PINAE5_POS                         (5U)
#define GPIO_PINAER_PINAE5                             (0x0020U)
#define GPIO_PINAER_PINAE6_POS                         (6U)
#define GPIO_PINAER_PINAE6                             (0x0040U)
#define GPIO_PINAER_PINAE7_POS                         (7U)
#define GPIO_PINAER_PINAE7                             (0x0080U)
#define GPIO_PINAER_PINAE12_POS                        (12U)
#define GPIO_PINAER_PINAE12                            (0x1000U)
#define GPIO_PINAER_PINAE13_POS                        (13U)
#define GPIO_PINAER_PINAE13                            (0x2000U)
#define GPIO_PINAER_PINAE14_POS                        (14U)
#define GPIO_PINAER_PINAE14                            (0x4000U)

/*  Bit definition for GPIO_PWPR register  */
#define GPIO_PWPR_WE_POS                               (0U)
#define GPIO_PWPR_WE                                   (0x0001U)
#define GPIO_PWPR_WP_POS                               (8U)
#define GPIO_PWPR_WP                                   (0xFF00U)
#define GPIO_PWPR_WP_0                                 (0x0100U)
#define GPIO_PWPR_WP_1                                 (0x0200U)
#define GPIO_PWPR_WP_2                                 (0x0400U)
#define GPIO_PWPR_WP_3                                 (0x0800U)
#define GPIO_PWPR_WP_4                                 (0x1000U)
#define GPIO_PWPR_WP_5                                 (0x2000U)
#define GPIO_PWPR_WP_6                                 (0x4000U)
#define GPIO_PWPR_WP_7                                 (0x8000U)

/*******************************************************************************
                Bit definition for Peripheral I2C
*******************************************************************************/
/*  Bit definition for I2C_CR1 register  */
#define I2C_CR1_PE_POS                                 (0U)
#define I2C_CR1_PE                                     (0x00000001UL)
#define I2C_CR1_SMBUS_POS                              (1U)
#define I2C_CR1_SMBUS                                  (0x00000002UL)
#define I2C_CR1_SMBALRTEN_POS                          (2U)
#define I2C_CR1_SMBALRTEN                              (0x00000004UL)
#define I2C_CR1_SMBDEFAULTEN_POS                       (3U)
#define I2C_CR1_SMBDEFAULTEN                           (0x00000008UL)
#define I2C_CR1_SMBHOSTEN_POS                          (4U)
#define I2C_CR1_SMBHOSTEN                              (0x00000010UL)
#define I2C_CR1_FACKEN_POS                             (5U)
#define I2C_CR1_FACKEN                                 (0x00000020UL)
#define I2C_CR1_GCEN_POS                               (6U)
#define I2C_CR1_GCEN                                   (0x00000040UL)
#define I2C_CR1_RESTART_POS                            (7U)
#define I2C_CR1_RESTART                                (0x00000080UL)
#define I2C_CR1_START_POS                              (8U)
#define I2C_CR1_START                                  (0x00000100UL)
#define I2C_CR1_STOP_POS                               (9U)
#define I2C_CR1_STOP                                   (0x00000200UL)
#define I2C_CR1_ACK_POS                                (10U)
#define I2C_CR1_ACK                                    (0x00000400UL)
#define I2C_CR1_SWRST_POS                              (15U)
#define I2C_CR1_SWRST                                  (0x00008000UL)

/*  Bit definition for I2C_CR2 register  */
#define I2C_CR2_STARTIE_POS                            (0U)
#define I2C_CR2_STARTIE                                (0x00000001UL)
#define I2C_CR2_SLADDR0IE_POS                          (1U)
#define I2C_CR2_SLADDR0IE                              (0x00000002UL)
#define I2C_CR2_SLADDR1IE_POS                          (2U)
#define I2C_CR2_SLADDR1IE                              (0x00000004UL)
#define I2C_CR2_TENDIE_POS                             (3U)
#define I2C_CR2_TENDIE                                 (0x00000008UL)
#define I2C_CR2_STOPIE_POS                             (4U)
#define I2C_CR2_STOPIE                                 (0x00000010UL)
#define I2C_CR2_RFULLIE_POS                            (6U)
#define I2C_CR2_RFULLIE                                (0x00000040UL)
#define I2C_CR2_TEMPTYIE_POS                           (7U)
#define I2C_CR2_TEMPTYIE                               (0x00000080UL)
#define I2C_CR2_ARLOIE_POS                             (9U)
#define I2C_CR2_ARLOIE                                 (0x00000200UL)
#define I2C_CR2_NACKIE_POS                             (12U)
#define I2C_CR2_NACKIE                                 (0x00001000UL)
#define I2C_CR2_GENCALLIE_POS                          (20U)
#define I2C_CR2_GENCALLIE                              (0x00100000UL)
#define I2C_CR2_SMBDEFAULTIE_POS                       (21U)
#define I2C_CR2_SMBDEFAULTIE                           (0x00200000UL)
#define I2C_CR2_SMBHOSTIE_POS                          (22U)
#define I2C_CR2_SMBHOSTIE                              (0x00400000UL)
#define I2C_CR2_SMBALRTIE_POS                          (23U)
#define I2C_CR2_SMBALRTIE                              (0x00800000UL)

/*  Bit definition for I2C_CR4 register  */
#define I2C_CR4_BUSWAIT_POS                            (10U)
#define I2C_CR4_BUSWAIT                                (0x00000400UL)

/*  Bit definition for I2C_SLR0 register  */
#define I2C_SLR0_SLADDR0_POS                           (0U)
#define I2C_SLR0_SLADDR0                               (0x000003FFUL)
#define I2C_SLR0_SLADDR0_0                             (0x00000001UL)
#define I2C_SLR0_SLADDR0_1                             (0x00000002UL)
#define I2C_SLR0_SLADDR0_2                             (0x00000004UL)
#define I2C_SLR0_SLADDR0_3                             (0x00000008UL)
#define I2C_SLR0_SLADDR0_4                             (0x00000010UL)
#define I2C_SLR0_SLADDR0_5                             (0x00000020UL)
#define I2C_SLR0_SLADDR0_6                             (0x00000040UL)
#define I2C_SLR0_SLADDR0_7                             (0x00000080UL)
#define I2C_SLR0_SLADDR0_8                             (0x00000100UL)
#define I2C_SLR0_SLADDR0_9                             (0x00000200UL)
#define I2C_SLR0_SLADDR0EN_POS                         (12U)
#define I2C_SLR0_SLADDR0EN                             (0x00001000UL)
#define I2C_SLR0_ADDRMOD0_POS                          (15U)
#define I2C_SLR0_ADDRMOD0                              (0x00008000UL)

/*  Bit definition for I2C_SLR1 register  */
#define I2C_SLR1_SLADDR1_POS                           (0U)
#define I2C_SLR1_SLADDR1                               (0x000003FFUL)
#define I2C_SLR1_SLADDR1_0                             (0x00000001UL)
#define I2C_SLR1_SLADDR1_1                             (0x00000002UL)
#define I2C_SLR1_SLADDR1_2                             (0x00000004UL)
#define I2C_SLR1_SLADDR1_3                             (0x00000008UL)
#define I2C_SLR1_SLADDR1_4                             (0x00000010UL)
#define I2C_SLR1_SLADDR1_5                             (0x00000020UL)
#define I2C_SLR1_SLADDR1_6                             (0x00000040UL)
#define I2C_SLR1_SLADDR1_7                             (0x00000080UL)
#define I2C_SLR1_SLADDR1_8                             (0x00000100UL)
#define I2C_SLR1_SLADDR1_9                             (0x00000200UL)
#define I2C_SLR1_SLADDR1EN_POS                         (12U)
#define I2C_SLR1_SLADDR1EN                             (0x00001000UL)
#define I2C_SLR1_ADDRMOD1_POS                          (15U)
#define I2C_SLR1_ADDRMOD1                              (0x00008000UL)

/*  Bit definition for I2C_SR register  */
#define I2C_SR_STARTF_POS                              (0U)
#define I2C_SR_STARTF                                  (0x00000001UL)
#define I2C_SR_SLADDR0F_POS                            (1U)
#define I2C_SR_SLADDR0F                                (0x00000002UL)
#define I2C_SR_SLADDR1F_POS                            (2U)
#define I2C_SR_SLADDR1F                                (0x00000004UL)
#define I2C_SR_TENDF_POS                               (3U)
#define I2C_SR_TENDF                                   (0x00000008UL)
#define I2C_SR_STOPF_POS                               (4U)
#define I2C_SR_STOPF                                   (0x00000010UL)
#define I2C_SR_RFULLF_POS                              (6U)
#define I2C_SR_RFULLF                                  (0x00000040UL)
#define I2C_SR_TEMPTYF_POS                             (7U)
#define I2C_SR_TEMPTYF                                 (0x00000080UL)
#define I2C_SR_ARLOF_POS                               (9U)
#define I2C_SR_ARLOF                                   (0x00000200UL)
#define I2C_SR_ACKRF_POS                               (10U)
#define I2C_SR_ACKRF                                   (0x00000400UL)
#define I2C_SR_NACKF_POS                               (12U)
#define I2C_SR_NACKF                                   (0x00001000UL)
#define I2C_SR_MSL_POS                                 (16U)
#define I2C_SR_MSL                                     (0x00010000UL)
#define I2C_SR_BUSY_POS                                (17U)
#define I2C_SR_BUSY                                    (0x00020000UL)
#define I2C_SR_TRA_POS                                 (18U)
#define I2C_SR_TRA                                     (0x00040000UL)
#define I2C_SR_GENCALLF_POS                            (20U)
#define I2C_SR_GENCALLF                                (0x00100000UL)
#define I2C_SR_SMBDEFAULTF_POS                         (21U)
#define I2C_SR_SMBDEFAULTF                             (0x00200000UL)
#define I2C_SR_SMBHOSTF_POS                            (22U)
#define I2C_SR_SMBHOSTF                                (0x00400000UL)
#define I2C_SR_SMBALRTF_POS                            (23U)
#define I2C_SR_SMBALRTF                                (0x00800000UL)

/*  Bit definition for I2C_CLR register  */
#define I2C_CLR_STARTFCLR_POS                          (0U)
#define I2C_CLR_STARTFCLR                              (0x00000001UL)
#define I2C_CLR_SLADDR0FCLR_POS                        (1U)
#define I2C_CLR_SLADDR0FCLR                            (0x00000002UL)
#define I2C_CLR_SLADDR1FCLR_POS                        (2U)
#define I2C_CLR_SLADDR1FCLR                            (0x00000004UL)
#define I2C_CLR_TENDFCLR_POS                           (3U)
#define I2C_CLR_TENDFCLR                               (0x00000008UL)
#define I2C_CLR_STOPFCLR_POS                           (4U)
#define I2C_CLR_STOPFCLR                               (0x00000010UL)
#define I2C_CLR_RFULLFCLR_POS                          (6U)
#define I2C_CLR_RFULLFCLR                              (0x00000040UL)
#define I2C_CLR_TEMPTYFCLR_POS                         (7U)
#define I2C_CLR_TEMPTYFCLR                             (0x00000080UL)
#define I2C_CLR_ARLOFCLR_POS                           (9U)
#define I2C_CLR_ARLOFCLR                               (0x00000200UL)
#define I2C_CLR_NACKFCLR_POS                           (12U)
#define I2C_CLR_NACKFCLR                               (0x00001000UL)
#define I2C_CLR_GENCALLFCLR_POS                        (20U)
#define I2C_CLR_GENCALLFCLR                            (0x00100000UL)
#define I2C_CLR_SMBDEFAULTFCLR_POS                     (21U)
#define I2C_CLR_SMBDEFAULTFCLR                         (0x00200000UL)
#define I2C_CLR_SMBHOSTFCLR_POS                        (22U)
#define I2C_CLR_SMBHOSTFCLR                            (0x00400000UL)
#define I2C_CLR_SMBALRTFCLR_POS                        (23U)
#define I2C_CLR_SMBALRTFCLR                            (0x00800000UL)

/*  Bit definition for I2C_DTR register  */
#define I2C_DTR_DT                                     (0xFFU)
#define I2C_DTR_DT_0                                   (0x01U)
#define I2C_DTR_DT_1                                   (0x02U)
#define I2C_DTR_DT_2                                   (0x04U)
#define I2C_DTR_DT_3                                   (0x08U)
#define I2C_DTR_DT_4                                   (0x10U)
#define I2C_DTR_DT_5                                   (0x20U)
#define I2C_DTR_DT_6                                   (0x40U)
#define I2C_DTR_DT_7                                   (0x80U)

/*  Bit definition for I2C_DRR register  */
#define I2C_DRR_DR                                     (0xFFU)
#define I2C_DRR_DR_0                                   (0x01U)
#define I2C_DRR_DR_1                                   (0x02U)
#define I2C_DRR_DR_2                                   (0x04U)
#define I2C_DRR_DR_3                                   (0x08U)
#define I2C_DRR_DR_4                                   (0x10U)
#define I2C_DRR_DR_5                                   (0x20U)
#define I2C_DRR_DR_6                                   (0x40U)
#define I2C_DRR_DR_7                                   (0x80U)

/*  Bit definition for I2C_CCR register  */
#define I2C_CCR_SLOWW_POS                              (0U)
#define I2C_CCR_SLOWW                                  (0x0000001FUL)
#define I2C_CCR_SLOWW_0                                (0x00000001UL)
#define I2C_CCR_SLOWW_1                                (0x00000002UL)
#define I2C_CCR_SLOWW_2                                (0x00000004UL)
#define I2C_CCR_SLOWW_3                                (0x00000008UL)
#define I2C_CCR_SLOWW_4                                (0x00000010UL)
#define I2C_CCR_SHIGHW_POS                             (8U)
#define I2C_CCR_SHIGHW                                 (0x00001F00UL)
#define I2C_CCR_SHIGHW_0                               (0x00000100UL)
#define I2C_CCR_SHIGHW_1                               (0x00000200UL)
#define I2C_CCR_SHIGHW_2                               (0x00000400UL)
#define I2C_CCR_SHIGHW_3                               (0x00000800UL)
#define I2C_CCR_SHIGHW_4                               (0x00001000UL)
#define I2C_CCR_CKDIV_POS                              (16U)
#define I2C_CCR_CKDIV                                  (0x00070000UL)
#define I2C_CCR_CKDIV_0                                (0x00010000UL)
#define I2C_CCR_CKDIV_1                                (0x00020000UL)
#define I2C_CCR_CKDIV_2                                (0x00040000UL)

/*  Bit definition for I2C_FLTR register  */
#define I2C_FLTR_DNF_POS                               (0U)
#define I2C_FLTR_DNF                                   (0x00000003UL)
#define I2C_FLTR_DNF_0                                 (0x00000001UL)
#define I2C_FLTR_DNF_1                                 (0x00000002UL)
#define I2C_FLTR_DNFEN_POS                             (4U)
#define I2C_FLTR_DNFEN                                 (0x00000010UL)
#define I2C_FLTR_ANFEN_POS                             (5U)
#define I2C_FLTR_ANFEN                                 (0x00000020UL)

/*******************************************************************************
                Bit definition for Peripheral ICG
*******************************************************************************/
/*  Bit definition for ICG_ICG0 register  */
#define ICG_ICG0_SWDTAUTS_POS                          (0U)
#define ICG_ICG0_SWDTAUTS                              (0x00000001UL)
#define ICG_ICG0_SWDTITS_POS                           (1U)
#define ICG_ICG0_SWDTITS                               (0x00000002UL)
#define ICG_ICG0_SWDTPERI_POS                          (2U)
#define ICG_ICG0_SWDTPERI                              (0x0000000CUL)
#define ICG_ICG0_SWDTPERI_0                            (0x00000004UL)
#define ICG_ICG0_SWDTPERI_1                            (0x00000008UL)
#define ICG_ICG0_SWDTCKS_POS                           (4U)
#define ICG_ICG0_SWDTCKS                               (0x000000F0UL)
#define ICG_ICG0_SWDTCKS_0                             (0x00000010UL)
#define ICG_ICG0_SWDTCKS_1                             (0x00000020UL)
#define ICG_ICG0_SWDTCKS_2                             (0x00000040UL)
#define ICG_ICG0_SWDTCKS_3                             (0x00000080UL)
#define ICG_ICG0_SWDTWDPT_POS                          (8U)
#define ICG_ICG0_SWDTWDPT                              (0x00000F00UL)
#define ICG_ICG0_SWDTWDPT_0                            (0x00000100UL)
#define ICG_ICG0_SWDTWDPT_1                            (0x00000200UL)
#define ICG_ICG0_SWDTWDPT_2                            (0x00000400UL)
#define ICG_ICG0_SWDTWDPT_3                            (0x00000800UL)
#define ICG_ICG0_SWDTSLPOFF_POS                        (12U)
#define ICG_ICG0_SWDTSLPOFF                            (0x00001000UL)
#define ICG_ICG0_HRCREQS_POS                           (16U)
#define ICG_ICG0_HRCREQS                               (0x000F0000UL)
#define ICG_ICG0_HRCREQS_0                             (0x00010000UL)
#define ICG_ICG0_HRCREQS_1                             (0x00020000UL)
#define ICG_ICG0_HRCREQS_2                             (0x00040000UL)
#define ICG_ICG0_HRCREQS_3                             (0x00080000UL)
#define ICG_ICG0_NMIFCLK_POS                           (26U)
#define ICG_ICG0_NMIFCLK                               (0x0C000000UL)
#define ICG_ICG0_NMIFCLK_0                             (0x04000000UL)
#define ICG_ICG0_NMIFCLK_1                             (0x08000000UL)
#define ICG_ICG0_NMIFEN_POS                            (28U)
#define ICG_ICG0_NMIFEN                                (0x10000000UL)
#define ICG_ICG0_NMITRG_POS                            (29U)
#define ICG_ICG0_NMITRG                                (0x20000000UL)
#define ICG_ICG0_NMIEN_POS                             (30U)
#define ICG_ICG0_NMIEN                                 (0x40000000UL)
#define ICG_ICG0_NMIICGEN_POS                          (31U)
#define ICG_ICG0_NMIICGEN                              (0x80000000UL)

/*  Bit definition for ICG_ICG1 register  */
#define ICG_ICG1_DFS_POS                               (0U)
#define ICG_ICG1_DFS                                   (0x00000003UL)
#define ICG_ICG1_DFS_0                                 (0x00000001UL)
#define ICG_ICG1_DFS_1                                 (0x00000002UL)
#define ICG_ICG1_DFDIS_POS                             (2U)
#define ICG_ICG1_DFDIS                                 (0x00000004UL)
#define ICG_ICG1_LVDLVL_POS                            (8U)
#define ICG_ICG1_LVDLVL                                (0x00000F00UL)
#define ICG_ICG1_LVDLVL_0                              (0x00000100UL)
#define ICG_ICG1_LVDLVL_1                              (0x00000200UL)
#define ICG_ICG1_LVDLVL_2                              (0x00000400UL)
#define ICG_ICG1_LVDLVL_3                              (0x00000800UL)
#define ICG_ICG1_NMIS_POS                              (12U)
#define ICG_ICG1_NMIS                                  (0x00001000UL)
#define ICG_ICG1_IRS_POS                               (13U)
#define ICG_ICG1_IRS                                   (0x00002000UL)
#define ICG_ICG1_IRDIS_POS                             (14U)
#define ICG_ICG1_IRDIS                                 (0x00004000UL)
#define ICG_ICG1_LVDDIS_POS                            (15U)
#define ICG_ICG1_LVDDIS                                (0x00008000UL)

/*  Bit definition for ICG_ICG2 register  */
#define ICG_ICG2                                       (0xFFFFFFFFUL)

/*  Bit definition for ICG_ICG3 register  */
#define ICG_ICG3                                       (0xFFFFFFFFUL)

/*  Bit definition for ICG_ICG4 register  */
#define ICG_ICG4                                       (0xFFFFFFFFUL)

/*  Bit definition for ICG_ICG5 register  */
#define ICG_ICG5                                       (0xFFFFFFFFUL)

/*  Bit definition for ICG_ICG6 register  */
#define ICG_ICG6                                       (0xFFFFFFFFUL)

/*******************************************************************************
                Bit definition for Peripheral INTC
*******************************************************************************/
/*  Bit definition for INTC_NMICR register  */
#define INTC_NMICR_NMITRG_POS                          (0U)
#define INTC_NMICR_NMITRG                              (0x00000001UL)
#define INTC_NMICR_NMIFCLK_POS                         (4U)
#define INTC_NMICR_NMIFCLK                             (0x00000030UL)
#define INTC_NMICR_NMIFCLK_0                           (0x00000010UL)
#define INTC_NMICR_NMIFCLK_1                           (0x00000020UL)
#define INTC_NMICR_NMIFEN_POS                          (7U)
#define INTC_NMICR_NMIFEN                              (0x00000080UL)

/*  Bit definition for INTC_NMIENR register  */
#define INTC_NMIENR_NMIEN_POS                          (0U)
#define INTC_NMIENR_NMIEN                              (0x00000001UL)
#define INTC_NMIENR_XTALSTPEN_POS                      (1U)
#define INTC_NMIENR_XTALSTPEN                          (0x00000002UL)
#define INTC_NMIENR_SWDTEN_POS                         (2U)
#define INTC_NMIENR_SWDTEN                             (0x00000004UL)
#define INTC_NMIENR_PVDEN_POS                          (3U)
#define INTC_NMIENR_PVDEN                              (0x00000008UL)

/*  Bit definition for INTC_NMIFR register  */
#define INTC_NMIFR_NMIF_POS                            (0U)
#define INTC_NMIFR_NMIF                                (0x00000001UL)
#define INTC_NMIFR_XTALSTPF_POS                        (1U)
#define INTC_NMIFR_XTALSTPF                            (0x00000002UL)
#define INTC_NMIFR_SWDTF_POS                           (2U)
#define INTC_NMIFR_SWDTF                               (0x00000004UL)
#define INTC_NMIFR_PVDF_POS                            (3U)
#define INTC_NMIFR_PVDF                                (0x00000008UL)

/*  Bit definition for INTC_NMICLR register  */
#define INTC_NMICLR_NMICL_POS                          (0U)
#define INTC_NMICLR_NMICL                              (0x00000001UL)
#define INTC_NMICLR_XTALSTPCL_POS                      (1U)
#define INTC_NMICLR_XTALSTPCL                          (0x00000002UL)
#define INTC_NMICLR_SWDTCL_POS                         (2U)
#define INTC_NMICLR_SWDTCL                             (0x00000004UL)
#define INTC_NMICLR_PVDCL_POS                          (3U)
#define INTC_NMICLR_PVDCL                              (0x00000008UL)

/*  Bit definition for INTC_EVTER register  */
#define INTC_EVTER_EVTEN0_POS                          (0U)
#define INTC_EVTER_EVTEN0                              (0x00000001UL)
#define INTC_EVTER_EVTEN1_POS                          (1U)
#define INTC_EVTER_EVTEN1                              (0x00000002UL)
#define INTC_EVTER_EVTEN2_POS                          (2U)
#define INTC_EVTER_EVTEN2                              (0x00000004UL)
#define INTC_EVTER_EVTEN3_POS                          (3U)
#define INTC_EVTER_EVTEN3                              (0x00000008UL)
#define INTC_EVTER_EVTEN4_POS                          (4U)
#define INTC_EVTER_EVTEN4                              (0x00000010UL)
#define INTC_EVTER_EVTEN5_POS                          (5U)
#define INTC_EVTER_EVTEN5                              (0x00000020UL)
#define INTC_EVTER_EVTEN6_POS                          (6U)
#define INTC_EVTER_EVTEN6                              (0x00000040UL)
#define INTC_EVTER_EVTEN7_POS                          (7U)
#define INTC_EVTER_EVTEN7                              (0x00000080UL)

/*  Bit definition for INTC_EKEYCR register  */
#define INTC_EKEYCR_EKEY0EN_POS                        (0U)
#define INTC_EKEYCR_EKEY0EN                            (0x00000001UL)
#define INTC_EKEYCR_EKEY1EN_POS                        (1U)
#define INTC_EKEYCR_EKEY1EN                            (0x00000002UL)
#define INTC_EKEYCR_EKEY2EN_POS                        (2U)
#define INTC_EKEYCR_EKEY2EN                            (0x00000004UL)
#define INTC_EKEYCR_EKEY3EN_POS                        (3U)
#define INTC_EKEYCR_EKEY3EN                            (0x00000008UL)
#define INTC_EKEYCR_EKEY4EN_POS                        (4U)
#define INTC_EKEYCR_EKEY4EN                            (0x00000010UL)
#define INTC_EKEYCR_EKEY5EN_POS                        (5U)
#define INTC_EKEYCR_EKEY5EN                            (0x00000020UL)

/*  Bit definition for INTC_FPRCR register  */
#define INTC_FPRCR_FPRC                                (0x000000FFUL)
#define INTC_FPRCR_FPRC_0                              (0x00000001UL)
#define INTC_FPRCR_FPRC_1                              (0x00000002UL)
#define INTC_FPRCR_FPRC_2                              (0x00000004UL)
#define INTC_FPRCR_FPRC_3                              (0x00000008UL)
#define INTC_FPRCR_FPRC_4                              (0x00000010UL)
#define INTC_FPRCR_FPRC_5                              (0x00000020UL)
#define INTC_FPRCR_FPRC_6                              (0x00000040UL)
#define INTC_FPRCR_FPRC_7                              (0x00000080UL)

/*  Bit definition for INTC_EIRQCR register  */
#define INTC_EIRQCR_EIRQTRG_POS                        (0U)
#define INTC_EIRQCR_EIRQTRG                            (0x00000003UL)
#define INTC_EIRQCR_EIRQTRG_0                          (0x00000001UL)
#define INTC_EIRQCR_EIRQTRG_1                          (0x00000002UL)
#define INTC_EIRQCR_EIRQFCLK_POS                       (4U)
#define INTC_EIRQCR_EIRQFCLK                           (0x00000030UL)
#define INTC_EIRQCR_EIRQFCLK_0                         (0x00000010UL)
#define INTC_EIRQCR_EIRQFCLK_1                         (0x00000020UL)
#define INTC_EIRQCR_EIRQFEN_POS                        (7U)
#define INTC_EIRQCR_EIRQFEN                            (0x00000080UL)

/*  Bit definition for INTC_WUPEN register  */
#define INTC_WUPEN_EIRQWUEN_POS                        (0U)
#define INTC_WUPEN_EIRQWUEN                            (0x000003FFUL)
#define INTC_WUPEN_EIRQWUEN_0                          (0x00000001UL)
#define INTC_WUPEN_EIRQWUEN_1                          (0x00000002UL)
#define INTC_WUPEN_EIRQWUEN_2                          (0x00000004UL)
#define INTC_WUPEN_EIRQWUEN_3                          (0x00000008UL)
#define INTC_WUPEN_EIRQWUEN_4                          (0x00000010UL)
#define INTC_WUPEN_EIRQWUEN_5                          (0x00000020UL)
#define INTC_WUPEN_EIRQWUEN_6                          (0x00000040UL)
#define INTC_WUPEN_EIRQWUEN_7                          (0x00000080UL)
#define INTC_WUPEN_EIRQWUEN_8                          (0x00000100UL)
#define INTC_WUPEN_EIRQWUEN_9                          (0x00000200UL)
#define INTC_WUPEN_SWDTWUEN_POS                        (16U)
#define INTC_WUPEN_SWDTWUEN                            (0x00010000UL)
#define INTC_WUPEN_EKEYWUEN_POS                        (17U)
#define INTC_WUPEN_EKEYWUEN                            (0x00020000UL)
#define INTC_WUPEN_TMR0CMPWUEN_POS                     (18U)
#define INTC_WUPEN_TMR0CMPWUEN                         (0x00040000UL)
#define INTC_WUPEN_PVDWUEN_POS                         (22U)
#define INTC_WUPEN_PVDWUEN                             (0x00400000UL)

/*  Bit definition for INTC_EIRQFR register  */
#define INTC_EIRQFR_EIRQF                              (0x000003FFUL)
#define INTC_EIRQFR_EIRQF_0                            (0x00000001UL)
#define INTC_EIRQFR_EIRQF_1                            (0x00000002UL)
#define INTC_EIRQFR_EIRQF_2                            (0x00000004UL)
#define INTC_EIRQFR_EIRQF_3                            (0x00000008UL)
#define INTC_EIRQFR_EIRQF_4                            (0x00000010UL)
#define INTC_EIRQFR_EIRQF_5                            (0x00000020UL)
#define INTC_EIRQFR_EIRQF_6                            (0x00000040UL)
#define INTC_EIRQFR_EIRQF_7                            (0x00000080UL)
#define INTC_EIRQFR_EIRQF_8                            (0x00000100UL)
#define INTC_EIRQFR_EIRQF_9                            (0x00000200UL)

/*  Bit definition for INTC_EIRQCLR register  */
#define INTC_EIRQCLR_EIRQCL                            (0x000003FFUL)
#define INTC_EIRQCLR_EIRQCL_0                          (0x00000001UL)
#define INTC_EIRQCLR_EIRQCL_1                          (0x00000002UL)
#define INTC_EIRQCLR_EIRQCL_2                          (0x00000004UL)
#define INTC_EIRQCLR_EIRQCL_3                          (0x00000008UL)
#define INTC_EIRQCLR_EIRQCL_4                          (0x00000010UL)
#define INTC_EIRQCLR_EIRQCL_5                          (0x00000020UL)
#define INTC_EIRQCLR_EIRQCL_6                          (0x00000040UL)
#define INTC_EIRQCLR_EIRQCL_7                          (0x00000080UL)
#define INTC_EIRQCLR_EIRQCL_8                          (0x00000100UL)
#define INTC_EIRQCLR_EIRQCL_9                          (0x00000200UL)

/*  Bit definition for INTC_ISELAR register  */
#define INTC_ISELAR_ISEL                               (0x0000000FUL)
#define INTC_ISELAR_ISEL_0                             (0x00000001UL)
#define INTC_ISELAR_ISEL_1                             (0x00000002UL)
#define INTC_ISELAR_ISEL_2                             (0x00000004UL)
#define INTC_ISELAR_ISEL_3                             (0x00000008UL)

/*  Bit definition for INTC_ISELBR register  */
#define INTC_ISELBR_ISEL1_POS                          (1U)
#define INTC_ISELBR_ISEL1                              (0x00000002UL)
#define INTC_ISELBR_ISEL2_POS                          (2U)
#define INTC_ISELBR_ISEL2                              (0x00000004UL)
#define INTC_ISELBR_ISEL3_POS                          (3U)
#define INTC_ISELBR_ISEL3                              (0x00000008UL)
#define INTC_ISELBR_ISEL4_POS                          (4U)
#define INTC_ISELBR_ISEL4                              (0x00000010UL)
#define INTC_ISELBR_ISEL5_POS                          (5U)
#define INTC_ISELBR_ISEL5                              (0x00000020UL)
#define INTC_ISELBR_ISEL6_POS                          (6U)
#define INTC_ISELBR_ISEL6                              (0x00000040UL)
#define INTC_ISELBR_ISEL7_POS                          (7U)
#define INTC_ISELBR_ISEL7                              (0x00000080UL)
#define INTC_ISELBR_ISEL8_POS                          (8U)
#define INTC_ISELBR_ISEL8                              (0x00000100UL)
#define INTC_ISELBR_ISEL9_POS                          (9U)
#define INTC_ISELBR_ISEL9                              (0x00000200UL)
#define INTC_ISELBR_ISEL10_POS                         (10U)
#define INTC_ISELBR_ISEL10                             (0x00000400UL)
#define INTC_ISELBR_ISEL11_POS                         (11U)
#define INTC_ISELBR_ISEL11                             (0x00000800UL)
#define INTC_ISELBR_ISEL12_POS                         (12U)
#define INTC_ISELBR_ISEL12                             (0x00001000UL)
#define INTC_ISELBR_ISEL13_POS                         (13U)
#define INTC_ISELBR_ISEL13                             (0x00002000UL)
#define INTC_ISELBR_ISEL14_POS                         (14U)
#define INTC_ISELBR_ISEL14                             (0x00004000UL)
#define INTC_ISELBR_ISEL15_POS                         (15U)
#define INTC_ISELBR_ISEL15                             (0x00008000UL)

/*******************************************************************************
                Bit definition for Peripheral PWC
*******************************************************************************/
/*  Bit definition for PWC_STPMCR register  */
#define PWC_STPMCR_CKSHRC_POS                          (1U)
#define PWC_STPMCR_CKSHRC                              (0x02U)
#define PWC_STPMCR_HAPORDIS_POS                        (3U)
#define PWC_STPMCR_HAPORDIS                            (0x08U)
#define PWC_STPMCR_STOP_POS                            (7U)
#define PWC_STPMCR_STOP                                (0x80U)

/*  Bit definition for PWC_PWRC register  */
#define PWC_PWRC_PWDRV_POS                             (0U)
#define PWC_PWRC_PWDRV                                 (0x07U)
#define PWC_PWRC_PWDRV_0                               (0x01U)
#define PWC_PWRC_PWDRV_1                               (0x02U)
#define PWC_PWRC_PWDRV_2                               (0x04U)
#define PWC_PWRC_PWMONSEL_POS                          (4U)
#define PWC_PWRC_PWMONSEL                              (0x10U)
#define PWC_PWRC_PWMONE_POS                            (5U)
#define PWC_PWRC_PWMONE                                (0x20U)

/*  Bit definition for PWC_RAMCR register  */
#define PWC_RAMCR_RPRTA_POS                            (0U)
#define PWC_RAMCR_RPRTA                                (0x03U)
#define PWC_RAMCR_RPRTA_0                              (0x01U)
#define PWC_RAMCR_RPRTA_1                              (0x02U)
#define PWC_RAMCR_RPERDIS_POS                          (4U)
#define PWC_RAMCR_RPERDIS                              (0x10U)
#define PWC_RAMCR_RPEF_POS                             (5U)
#define PWC_RAMCR_RPEF                                 (0x20U)

/*  Bit definition for PWC_LVDCSR register  */
#define PWC_LVDCSR_EXVCCINEN_POS                       (0U)
#define PWC_LVDCSR_EXVCCINEN                           (0x01U)
#define PWC_LVDCSR_LVIF_POS                            (3U)
#define PWC_LVDCSR_LVIF                                (0x08U)
#define PWC_LVDCSR_DETF_POS                            (4U)
#define PWC_LVDCSR_DETF                                (0x10U)
#define PWC_LVDCSR_CMPOE_POS                           (7U)
#define PWC_LVDCSR_CMPOE                               (0x80U)

/*  Bit definition for PWC_FPRC register  */
#define PWC_FPRC_CKRWE_POS                             (0U)
#define PWC_FPRC_CKRWE                                 (0x0001U)
#define PWC_FPRC_PWRWE_POS                             (1U)
#define PWC_FPRC_PWRWE                                 (0x0002U)
#define PWC_FPRC_FPRCB2_POS                            (2U)
#define PWC_FPRC_FPRCB2                                (0x0004U)
#define PWC_FPRC_LVRWE_POS                             (3U)
#define PWC_FPRC_LVRWE                                 (0x0008U)
#define PWC_FPRC_FPRCB4_POS                            (4U)
#define PWC_FPRC_FPRCB4                                (0x0010U)
#define PWC_FPRC_FPRCB5_POS                            (5U)
#define PWC_FPRC_FPRCB5                                (0x0020U)
#define PWC_FPRC_FPRCB6_POS                            (6U)
#define PWC_FPRC_FPRCB6                                (0x0040U)
#define PWC_FPRC_FPRCB7_POS                            (7U)
#define PWC_FPRC_FPRCB7                                (0x0080U)
#define PWC_FPRC_FPRCWE_POS                            (8U)
#define PWC_FPRC_FPRCWE                                (0xFF00U)

/*  Bit definition for PWC_DBGC register  */
#define PWC_DBGC_DBGEN                                 (0x01U)

/*******************************************************************************
                Bit definition for Peripheral RMU
*******************************************************************************/
/*  Bit definition for RMU_RSTF0 register  */
#define RMU_RSTF0_PORF_POS                             (0U)
#define RMU_RSTF0_PORF                                 (0x0001U)
#define RMU_RSTF0_PINRF_POS                            (1U)
#define RMU_RSTF0_PINRF                                (0x0002U)
#define RMU_RSTF0_LVRF_POS                             (2U)
#define RMU_RSTF0_LVRF                                 (0x0004U)
#define RMU_RSTF0_WDRF_POS                             (5U)
#define RMU_RSTF0_WDRF                                 (0x0020U)
#define RMU_RSTF0_SWRF_POS                             (8U)
#define RMU_RSTF0_SWRF                                 (0x0100U)
#define RMU_RSTF0_RAMPERF_POS                          (10U)
#define RMU_RSTF0_RAMPERF                              (0x0400U)
#define RMU_RSTF0_CPULKUPRF_POS                        (12U)
#define RMU_RSTF0_CPULKUPRF                            (0x1000U)
#define RMU_RSTF0_XTALERF_POS                          (13U)
#define RMU_RSTF0_XTALERF                              (0x2000U)
#define RMU_RSTF0_MULTIRF_POS                          (14U)
#define RMU_RSTF0_MULTIRF                              (0x4000U)
#define RMU_RSTF0_CLRF_POS                             (15U)
#define RMU_RSTF0_CLRF                                 (0x8000U)

/*******************************************************************************
                Bit definition for Peripheral SPI
*******************************************************************************/
/*  Bit definition for SPI_DR register  */
#define SPI_DR_SPD                                     (0x0000FFFFUL)

/*  Bit definition for SPI_CR1 register  */
#define SPI_CR1_SPIMDS_POS                             (0U)
#define SPI_CR1_SPIMDS                                 (0x00000001UL)
#define SPI_CR1_TXMDS_POS                              (1U)
#define SPI_CR1_TXMDS                                  (0x00000002UL)
#define SPI_CR1_MSTR_POS                               (3U)
#define SPI_CR1_MSTR                                   (0x00000008UL)
#define SPI_CR1_SPLPBK_POS                             (4U)
#define SPI_CR1_SPLPBK                                 (0x00000010UL)
#define SPI_CR1_SPLPBK2_POS                            (5U)
#define SPI_CR1_SPLPBK2                                (0x00000020UL)
#define SPI_CR1_SPE_POS                                (6U)
#define SPI_CR1_SPE                                    (0x00000040UL)
#define SPI_CR1_EIE_POS                                (8U)
#define SPI_CR1_EIE                                    (0x00000100UL)
#define SPI_CR1_TXIE_POS                               (9U)
#define SPI_CR1_TXIE                                   (0x00000200UL)
#define SPI_CR1_RXIE_POS                               (10U)
#define SPI_CR1_RXIE                                   (0x00000400UL)
#define SPI_CR1_IDIE_POS                               (11U)
#define SPI_CR1_IDIE                                   (0x00000800UL)
#define SPI_CR1_MODFE_POS                              (12U)
#define SPI_CR1_MODFE                                  (0x00001000UL)
#define SPI_CR1_PATE_POS                               (13U)
#define SPI_CR1_PATE                                   (0x00002000UL)
#define SPI_CR1_PAOE_POS                               (14U)
#define SPI_CR1_PAOE                                   (0x00004000UL)
#define SPI_CR1_PAE_POS                                (15U)
#define SPI_CR1_PAE                                    (0x00008000UL)

/*  Bit definition for SPI_CFG1 register  */
#define SPI_CFG1_SS0PV_POS                             (8U)
#define SPI_CFG1_SS0PV                                 (0x00000100UL)

/*  Bit definition for SPI_SR register  */
#define SPI_SR_OVRERF_POS                              (0U)
#define SPI_SR_OVRERF                                  (0x00000001UL)
#define SPI_SR_IDLNF_POS                               (1U)
#define SPI_SR_IDLNF                                   (0x00000002UL)
#define SPI_SR_MODFERF_POS                             (2U)
#define SPI_SR_MODFERF                                 (0x00000004UL)
#define SPI_SR_PERF_POS                                (3U)
#define SPI_SR_PERF                                    (0x00000008UL)
#define SPI_SR_UDRERF_POS                              (4U)
#define SPI_SR_UDRERF                                  (0x00000010UL)
#define SPI_SR_TDEF_POS                                (5U)
#define SPI_SR_TDEF                                    (0x00000020UL)
#define SPI_SR_RDFF_POS                                (7U)
#define SPI_SR_RDFF                                    (0x00000080UL)

/*  Bit definition for SPI_CFG2 register  */
#define SPI_CFG2_CPHA_POS                              (0U)
#define SPI_CFG2_CPHA                                  (0x00000001UL)
#define SPI_CFG2_CPOL_POS                              (1U)
#define SPI_CFG2_CPOL                                  (0x00000002UL)
#define SPI_CFG2_MBR_POS                               (2U)
#define SPI_CFG2_MBR                                   (0x0000001CUL)
#define SPI_CFG2_MBR_0                                 (0x00000004UL)
#define SPI_CFG2_MBR_1                                 (0x00000008UL)
#define SPI_CFG2_MBR_2                                 (0x00000010UL)
#define SPI_CFG2_DSIZE_POS                             (8U)
#define SPI_CFG2_DSIZE                                 (0x00000100UL)
#define SPI_CFG2_LSBF_POS                              (12U)
#define SPI_CFG2_LSBF                                  (0x00001000UL)

/*******************************************************************************
                Bit definition for Peripheral SWDT
*******************************************************************************/
/*  Bit definition for SWDT_CR register  */
#define SWDT_CR_PERI_POS                               (0U)
#define SWDT_CR_PERI                                   (0x00000003UL)
#define SWDT_CR_PERI_0                                 (0x00000001UL)
#define SWDT_CR_PERI_1                                 (0x00000002UL)
#define SWDT_CR_CKS_POS                                (4U)
#define SWDT_CR_CKS                                    (0x000000F0UL)
#define SWDT_CR_CKS_0                                  (0x00000010UL)
#define SWDT_CR_CKS_1                                  (0x00000020UL)
#define SWDT_CR_CKS_2                                  (0x00000040UL)
#define SWDT_CR_CKS_3                                  (0x00000080UL)
#define SWDT_CR_WDPT_POS                               (8U)
#define SWDT_CR_WDPT                                   (0x00000F00UL)
#define SWDT_CR_WDPT_0                                 (0x00000100UL)
#define SWDT_CR_WDPT_1                                 (0x00000200UL)
#define SWDT_CR_WDPT_2                                 (0x00000400UL)
#define SWDT_CR_WDPT_3                                 (0x00000800UL)
#define SWDT_CR_SLPOFF_POS                             (16U)
#define SWDT_CR_SLPOFF                                 (0x00010000UL)
#define SWDT_CR_ITS_POS                                (31U)
#define SWDT_CR_ITS                                    (0x80000000UL)

/*  Bit definition for SWDT_SR register  */
#define SWDT_SR_CNT_POS                                (0U)
#define SWDT_SR_CNT                                    (0x0000FFFFUL)
#define SWDT_SR_UDF_POS                                (16U)
#define SWDT_SR_UDF                                    (0x00010000UL)
#define SWDT_SR_REF_POS                                (17U)
#define SWDT_SR_REF                                    (0x00020000UL)

/*  Bit definition for SWDT_RR register  */
#define SWDT_RR_RF                                     (0x0000FFFFUL)

/*******************************************************************************
                Bit definition for Peripheral TMR0
*******************************************************************************/
/*  Bit definition for TMR0_CNTAR register  */
#define TMR0_CNTAR_CNTA                                (0x0000FFFFUL)

/*  Bit definition for TMR0_CMPAR register  */
#define TMR0_CMPAR_CMPA                                (0x0000FFFFUL)

/*  Bit definition for TMR0_BCONR register  */
#define TMR0_BCONR_CSTA_POS                            (0U)
#define TMR0_BCONR_CSTA                                (0x00000001UL)
#define TMR0_BCONR_CAPMDA_POS                          (1U)
#define TMR0_BCONR_CAPMDA                              (0x00000002UL)
#define TMR0_BCONR_INTENA_POS                          (2U)
#define TMR0_BCONR_INTENA                              (0x00000004UL)
#define TMR0_BCONR_CKDIVA_POS                          (4U)
#define TMR0_BCONR_CKDIVA                              (0x000000F0UL)
#define TMR0_BCONR_CKDIVA_0                            (0x00000010UL)
#define TMR0_BCONR_CKDIVA_1                            (0x00000020UL)
#define TMR0_BCONR_CKDIVA_2                            (0x00000040UL)
#define TMR0_BCONR_CKDIVA_3                            (0x00000080UL)
#define TMR0_BCONR_SYNSA_POS                           (8U)
#define TMR0_BCONR_SYNSA                               (0x00000100UL)
#define TMR0_BCONR_SYNCLKA_POS                         (9U)
#define TMR0_BCONR_SYNCLKA                             (0x00000200UL)
#define TMR0_BCONR_HSTAA_POS                           (12U)
#define TMR0_BCONR_HSTAA                               (0x00001000UL)
#define TMR0_BCONR_HSTPA_POS                           (13U)
#define TMR0_BCONR_HSTPA                               (0x00002000UL)
#define TMR0_BCONR_HCLEA_POS                           (14U)
#define TMR0_BCONR_HCLEA                               (0x00004000UL)
#define TMR0_BCONR_HICPA_POS                           (15U)
#define TMR0_BCONR_HICPA                               (0x00008000UL)

/*  Bit definition for TMR0_STFLR register  */
#define TMR0_STFLR_CMFA                                (0x00000001UL)

/*******************************************************************************
                Bit definition for Peripheral TMRB
*******************************************************************************/
/*  Bit definition for TMRB_CNTER register  */
#define TMRB_CNTER_CNT                                 (0xFFFFU)

/*  Bit definition for TMRB_PERAR register  */
#define TMRB_PERAR_PER                                 (0xFFFFU)

/*  Bit definition for TMRB_CMPAR register  */
#define TMRB_CMPAR_CMP                                 (0xFFFFU)

/*  Bit definition for TMRB_BCSTRL register  */
#define TMRB_BCSTRL_START_POS                          (0U)
#define TMRB_BCSTRL_START                              (0x01U)
#define TMRB_BCSTRL_DIR_POS                            (1U)
#define TMRB_BCSTRL_DIR                                (0x02U)
#define TMRB_BCSTRL_MODE_POS                           (2U)
#define TMRB_BCSTRL_MODE                               (0x04U)
#define TMRB_BCSTRL_SYNST_POS                          (3U)
#define TMRB_BCSTRL_SYNST                              (0x08U)
#define TMRB_BCSTRL_CKDIV_POS                          (4U)
#define TMRB_BCSTRL_CKDIV                              (0xF0U)

/*  Bit definition for TMRB_BCSTRH register  */
#define TMRB_BCSTRH_OVSTP_POS                          (0U)
#define TMRB_BCSTRH_OVSTP                              (0x01U)
#define TMRB_BCSTRH_ITENOVF_POS                        (4U)
#define TMRB_BCSTRH_ITENOVF                            (0x10U)
#define TMRB_BCSTRH_ITENUDF_POS                        (5U)
#define TMRB_BCSTRH_ITENUDF                            (0x20U)
#define TMRB_BCSTRH_OVFF_POS                           (6U)
#define TMRB_BCSTRH_OVFF                               (0x40U)
#define TMRB_BCSTRH_UDFF_POS                           (7U)
#define TMRB_BCSTRH_UDFF                               (0x80U)

/*  Bit definition for TMRB_HCONR register  */
#define TMRB_HCONR_HSTA0_POS                           (0U)
#define TMRB_HCONR_HSTA0                               (0x0001U)
#define TMRB_HCONR_HSTA1_POS                           (1U)
#define TMRB_HCONR_HSTA1                               (0x0002U)
#define TMRB_HCONR_HSTA2_POS                           (2U)
#define TMRB_HCONR_HSTA2                               (0x0004U)
#define TMRB_HCONR_HSTP0_POS                           (4U)
#define TMRB_HCONR_HSTP0                               (0x0010U)
#define TMRB_HCONR_HSTP1_POS                           (5U)
#define TMRB_HCONR_HSTP1                               (0x0020U)
#define TMRB_HCONR_HSTP2_POS                           (6U)
#define TMRB_HCONR_HSTP2                               (0x0040U)
#define TMRB_HCONR_HCLE0_POS                           (8U)
#define TMRB_HCONR_HCLE0                               (0x0100U)
#define TMRB_HCONR_HCLE1_POS                           (9U)
#define TMRB_HCONR_HCLE1                               (0x0200U)
#define TMRB_HCONR_HCLE2_POS                           (10U)
#define TMRB_HCONR_HCLE2                               (0x0400U)
#define TMRB_HCONR_HCLE3_POS                           (12U)
#define TMRB_HCONR_HCLE3                               (0x1000U)
#define TMRB_HCONR_HCLE4_POS                           (13U)
#define TMRB_HCONR_HCLE4                               (0x2000U)

/*  Bit definition for TMRB_HCUPR register  */
#define TMRB_HCUPR_HCUP8_POS                           (8U)
#define TMRB_HCUPR_HCUP8                               (0x0100U)
#define TMRB_HCUPR_HCUP9_POS                           (9U)
#define TMRB_HCUPR_HCUP9                               (0x0200U)
#define TMRB_HCUPR_HCUP10_POS                          (10U)
#define TMRB_HCUPR_HCUP10                              (0x0400U)
#define TMRB_HCUPR_HCUP11_POS                          (11U)
#define TMRB_HCUPR_HCUP11                              (0x0800U)
#define TMRB_HCUPR_HCUP12_POS                          (12U)
#define TMRB_HCUPR_HCUP12                              (0x1000U)

/*  Bit definition for TMRB_HCDOR register  */
#define TMRB_HCDOR_HCDO8_POS                           (8U)
#define TMRB_HCDOR_HCDO8                               (0x0100U)
#define TMRB_HCDOR_HCDO9_POS                           (9U)
#define TMRB_HCDOR_HCDO9                               (0x0200U)
#define TMRB_HCDOR_HCDO10_POS                          (10U)
#define TMRB_HCDOR_HCDO10                              (0x0400U)
#define TMRB_HCDOR_HCDO11_POS                          (11U)
#define TMRB_HCDOR_HCDO11                              (0x0800U)
#define TMRB_HCDOR_HCDO12_POS                          (12U)
#define TMRB_HCDOR_HCDO12                              (0x1000U)

/*  Bit definition for TMRB_ICONR register  */
#define TMRB_ICONR_ITEN1                               (0x0001U)

/*  Bit definition for TMRB_ECONR register  */
#define TMRB_ECONR_ETEN1                               (0x0001U)

/*  Bit definition for TMRB_STFLR register  */
#define TMRB_STFLR_CMPF1                               (0x0001U)

/*  Bit definition for TMRB_CCONR register  */
#define TMRB_CCONR_CAPMD_POS                           (0U)
#define TMRB_CCONR_CAPMD                               (0x0001U)
#define TMRB_CCONR_HICP0_POS                           (4U)
#define TMRB_CCONR_HICP0                               (0x0010U)
#define TMRB_CCONR_HICP1_POS                           (5U)
#define TMRB_CCONR_HICP1                               (0x0020U)
#define TMRB_CCONR_HICP2_POS                           (6U)
#define TMRB_CCONR_HICP2                               (0x0040U)
#define TMRB_CCONR_NOFIENCP_POS                        (12U)
#define TMRB_CCONR_NOFIENCP                            (0x1000U)
#define TMRB_CCONR_NOFICKCP_POS                        (13U)
#define TMRB_CCONR_NOFICKCP                            (0x6000U)
#define TMRB_CCONR_NOFICKCP_0                          (0x2000U)
#define TMRB_CCONR_NOFICKCP_1                          (0x4000U)

/*  Bit definition for TMRB_PCONR register  */
#define TMRB_PCONR_STAC_POS                            (0U)
#define TMRB_PCONR_STAC                                (0x0003U)
#define TMRB_PCONR_STAC_0                              (0x0001U)
#define TMRB_PCONR_STAC_1                              (0x0002U)
#define TMRB_PCONR_STPC_POS                            (2U)
#define TMRB_PCONR_STPC                                (0x000CU)
#define TMRB_PCONR_STPC_0                              (0x0004U)
#define TMRB_PCONR_STPC_1                              (0x0008U)
#define TMRB_PCONR_CMPC_POS                            (4U)
#define TMRB_PCONR_CMPC                                (0x0030U)
#define TMRB_PCONR_CMPC_0                              (0x0010U)
#define TMRB_PCONR_CMPC_1                              (0x0020U)
#define TMRB_PCONR_PERC_POS                            (6U)
#define TMRB_PCONR_PERC                                (0x00C0U)
#define TMRB_PCONR_PERC_0                              (0x0040U)
#define TMRB_PCONR_PERC_1                              (0x0080U)
#define TMRB_PCONR_FORC_POS                            (8U)
#define TMRB_PCONR_FORC                                (0x0300U)
#define TMRB_PCONR_FORC_0                              (0x0100U)
#define TMRB_PCONR_FORC_1                              (0x0200U)
#define TMRB_PCONR_OUTEN_POS                           (12U)
#define TMRB_PCONR_OUTEN                               (0x1000U)

/*******************************************************************************
                Bit definition for Peripheral USART
*******************************************************************************/
/*  Bit definition for USART_SR register  */
#define USART_SR_PE_POS                                (0U)
#define USART_SR_PE                                    (0x00000001UL)
#define USART_SR_FE_POS                                (1U)
#define USART_SR_FE                                    (0x00000002UL)
#define USART_SR_ORE_POS                               (3U)
#define USART_SR_ORE                                   (0x00000008UL)
#define USART_SR_RXNE_POS                              (5U)
#define USART_SR_RXNE                                  (0x00000020UL)
#define USART_SR_TC_POS                                (6U)
#define USART_SR_TC                                    (0x00000040UL)
#define USART_SR_TXE_POS                               (7U)
#define USART_SR_TXE                                   (0x00000080UL)
#define USART_SR_MPB_POS                               (16U)
#define USART_SR_MPB                                   (0x00010000UL)

/*  Bit definition for USART_TDR register  */
#define USART_TDR_TDR_POS                              (0U)
#define USART_TDR_TDR                                  (0x01FFU)
#define USART_TDR_MPID_POS                             (9U)
#define USART_TDR_MPID                                 (0x0200U)

/*  Bit definition for USART_RDR register  */
#define USART_RDR_RDR                                  (0x01FFU)

/*  Bit definition for USART_BRR register  */
#define USART_BRR_DIV_INTEGER_POS                      (8U)
#define USART_BRR_DIV_INTEGER                          (0x0000FF00UL)

/*  Bit definition for USART_CR1 register  */
#define USART_CR1_RE_POS                               (2U)
#define USART_CR1_RE                                   (0x00000004UL)
#define USART_CR1_TE_POS                               (3U)
#define USART_CR1_TE                                   (0x00000008UL)
#define USART_CR1_SLME_POS                             (4U)
#define USART_CR1_SLME                                 (0x00000010UL)
#define USART_CR1_RIE_POS                              (5U)
#define USART_CR1_RIE                                  (0x00000020UL)
#define USART_CR1_TCIE_POS                             (6U)
#define USART_CR1_TCIE                                 (0x00000040UL)
#define USART_CR1_TXEIE_POS                            (7U)
#define USART_CR1_TXEIE                                (0x00000080UL)
#define USART_CR1_PS_POS                               (9U)
#define USART_CR1_PS                                   (0x00000200UL)
#define USART_CR1_PCE_POS                              (10U)
#define USART_CR1_PCE                                  (0x00000400UL)
#define USART_CR1_M_POS                                (12U)
#define USART_CR1_M                                    (0x00001000UL)
#define USART_CR1_OVER8_POS                            (15U)
#define USART_CR1_OVER8                                (0x00008000UL)
#define USART_CR1_CPE_POS                              (16U)
#define USART_CR1_CPE                                  (0x00010000UL)
#define USART_CR1_CFE_POS                              (17U)
#define USART_CR1_CFE                                  (0x00020000UL)
#define USART_CR1_CORE_POS                             (19U)
#define USART_CR1_CORE                                 (0x00080000UL)
#define USART_CR1_MS_POS                               (24U)
#define USART_CR1_MS                                   (0x01000000UL)
#define USART_CR1_ML_POS                               (28U)
#define USART_CR1_ML                                   (0x10000000UL)
#define USART_CR1_NFE_POS                              (30U)
#define USART_CR1_NFE                                  (0x40000000UL)
#define USART_CR1_SBS_POS                              (31U)
#define USART_CR1_SBS                                  (0x80000000UL)

/*  Bit definition for USART_CR2 register  */
#define USART_CR2_MPE_POS                              (0U)
#define USART_CR2_MPE                                  (0x00000001UL)
#define USART_CR2_CLKC_POS                             (11U)
#define USART_CR2_CLKC                                 (0x00001800UL)
#define USART_CR2_CLKC_0                               (0x00000800UL)
#define USART_CR2_CLKC_1                               (0x00001000UL)
#define USART_CR2_STOP_POS                             (13U)
#define USART_CR2_STOP                                 (0x00002000UL)
#define USART_CR2_LINEN_POS                            (14U)
#define USART_CR2_LINEN                                (0x00004000UL)

/*  Bit definition for USART_CR3 register  */
#define USART_CR3_HDSEL_POS                            (3U)
#define USART_CR3_HDSEL                                (0x00000008UL)
#define USART_CR3_CTSE_POS                             (9U)
#define USART_CR3_CTSE                                 (0x00000200UL)

/*  Bit definition for USART_PR register  */
#define USART_PR_PSC                                   (0x00000003UL)
#define USART_PR_PSC_0                                 (0x00000001UL)
#define USART_PR_PSC_1                                 (0x00000002UL)

/******************************************************************************/
/*             Device Specific Registers bit_band structure                   */
/******************************************************************************/

typedef struct {
    __IO uint32_t STRT;
    uint32_t RESERVED0[7];
} stc_adc_str_bit_t;

typedef struct {
    uint32_t RESERVED0[6];
    __IO uint32_t CLREN;
    __IO uint32_t DFMT;
    uint32_t RESERVED1[8];
} stc_adc_cr0_bit_t;

typedef struct {
    uint32_t RESERVED0[2];
    __IO uint32_t RSCHSEL;
    uint32_t RESERVED1[13];
} stc_adc_cr1_bit_t;

typedef struct {
    uint32_t RESERVED0[7];
    __IO uint32_t TRGENA;
    uint32_t RESERVED1[7];
    __IO uint32_t TRGENB;
} stc_adc_trgsr_bit_t;

typedef struct {
    __IO uint32_t EXCHSEL;
    uint32_t RESERVED0[7];
} stc_adc_exchselr_bit_t;

typedef struct {
    __I  uint32_t EOCAF;
    __I  uint32_t EOCBF;
    uint32_t RESERVED0[6];
} stc_adc_isr_bit_t;

typedef struct {
    __IO uint32_t EOCAIEN;
    __IO uint32_t EOCBIEN;
    uint32_t RESERVED0[6];
} stc_adc_icr_bit_t;

typedef struct {
    __O  uint32_t CLREOCAF;
    __O  uint32_t CLREOCBF;
    uint32_t RESERVED0[6];
} stc_adc_isclrr_bit_t;

typedef struct {
    __IO uint32_t AWD0EN;
    __IO uint32_t AWD0IEN;
    __IO uint32_t AWD0MD;
    uint32_t RESERVED0[1];
    __IO uint32_t AWD1EN;
    __IO uint32_t AWD1IEN;
    __IO uint32_t AWD1MD;
    uint32_t RESERVED1[9];
} stc_adc_awdcr_bit_t;

typedef struct {
    __I  uint32_t AWD0F;
    __I  uint32_t AWD1F;
    uint32_t RESERVED0[2];
    __I  uint32_t AWDCMF;
    uint32_t RESERVED1[3];
} stc_adc_awdsr_bit_t;

typedef struct {
    __O  uint32_t CLRAWD0F;
    __O  uint32_t CLRAWD1F;
    uint32_t RESERVED0[2];
    __O  uint32_t CLRAWDCMF;
    uint32_t RESERVED1[3];
} stc_adc_awdsclrr_bit_t;

typedef struct {
    __O  uint32_t STRG;
    uint32_t RESERVED0[31];
} stc_aos_intc_strgcr_bit_t;

typedef struct {
    __IO uint32_t XTALSTDF;
    uint32_t RESERVED0[7];
} stc_cmu_xtalstdsr_bit_t;

typedef struct {
    __IO uint32_t XTALSTP;
    uint32_t RESERVED0[7];
} stc_cmu_xtalcr_bit_t;

typedef struct {
    uint32_t RESERVED0[6];
    __IO uint32_t XTALMS;
    __IO uint32_t SUPDRV;
} stc_cmu_xtalcfgr_bit_t;

typedef struct {
    __IO uint32_t HRCSTP;
    uint32_t RESERVED0[7];
} stc_cmu_hrccr_bit_t;

typedef struct {
    __I  uint32_t HRCSTBF;
    uint32_t RESERVED0[2];
    __I  uint32_t XTALSTBF;
    uint32_t RESERVED1[4];
} stc_cmu_oscstbsr_bit_t;

typedef struct {
    uint32_t RESERVED0[7];
    __IO uint32_t MCOEN;
} stc_cmu_mcocfgr_bit_t;

typedef struct {
    __IO uint32_t XTALSTDIE;
    __IO uint32_t XTALSTDRE;
    __IO uint32_t XTALSTDRIS;
    uint32_t RESERVED0[4];
    __IO uint32_t XTALSTDE;
} stc_cmu_xtalstdcr_bit_t;

typedef struct {
    __IO uint32_t ADC;
    __IO uint32_t CTC;
    uint32_t RESERVED0[2];
    __IO uint32_t AOS;
    uint32_t RESERVED1[2];
    __IO uint32_t CRC;
    __IO uint32_t TMRB1;
    __IO uint32_t TMRB2;
    __IO uint32_t TMRB3;
    __IO uint32_t TMRB4;
    __IO uint32_t TMRB5;
    __IO uint32_t TMRB6;
    __IO uint32_t TMRB7;
    __IO uint32_t TMRB8;
    __IO uint32_t TMR0;
    uint32_t RESERVED2[7];
    __IO uint32_t UART1;
    __IO uint32_t UART2;
    __IO uint32_t UART3;
    __IO uint32_t UART4;
    __IO uint32_t I2C;
    __IO uint32_t SPI;
    uint32_t RESERVED3[2];
} stc_cmu_fcg_bit_t;

typedef struct {
    __IO uint32_t LRCSTP;
    uint32_t RESERVED0[7];
} stc_cmu_lrccr_bit_t;

typedef struct {
    __IO uint32_t CR;
    __IO uint32_t FLAG;
    uint32_t RESERVED0[30];
} stc_crc_cr_bit_t;

typedef struct {
    uint32_t RESERVED0[6];
    __IO uint32_t ERRIE;
    __IO uint32_t CTCEN;
    uint32_t RESERVED1[24];
} stc_ctc_cr1_bit_t;

typedef struct {
    __I  uint32_t TRIMOK;
    __I  uint32_t TRMOVF;
    __I  uint32_t TRMUDF;
    __I  uint32_t CTCBSY;
    uint32_t RESERVED0[28];
} stc_ctc_str_bit_t;

typedef struct {
    __IO uint32_t CDBGPWRUPREQ;
    __IO uint32_t CDBGPWRUPACK;
    uint32_t RESERVED0[30];
} stc_dbgc_mcudbgstat_bit_t;

typedef struct {
    __IO uint32_t SWDTSTP;
    uint32_t RESERVED0[13];
    __IO uint32_t TMR01STP;
    uint32_t RESERVED1[2];
    __IO uint32_t TMR21STP;
    uint32_t RESERVED2[2];
    __IO uint32_t TMR41STP;
    uint32_t RESERVED3[2];
    __IO uint32_t TMRA1STP;
    __IO uint32_t TMRB1STP;
    __IO uint32_t TMRB2STP;
    __IO uint32_t TMRB3STP;
    __IO uint32_t TMRB4STP;
    __IO uint32_t TMRB5STP;
    __IO uint32_t TMRB6STP;
    __IO uint32_t TMRB7STP;
    __IO uint32_t TMRB8STP;
} stc_dbgc_mcustpctl_bit_t;

typedef struct {
    __IO uint32_t FSTP;
    uint32_t RESERVED0[31];
} stc_efm_fstp_bit_t;

typedef struct {
    __IO uint32_t FLWT;
    uint32_t RESERVED0[16];
    __IO uint32_t PREFETE;
    uint32_t RESERVED1[14];
} stc_efm_frmc_bit_t;

typedef struct {
    __IO uint32_t PEMODE;
    uint32_t RESERVED0[7];
    __IO uint32_t BUSHLDCTL;
    uint32_t RESERVED1[23];
} stc_efm_fwmc_bit_t;

typedef struct {
    __I  uint32_t PEWERR;
    __I  uint32_t PEPRTERR;
    uint32_t RESERVED0[1];
    __I  uint32_t PGMISMTCH;
    __I  uint32_t OPTEND;
    __I  uint32_t COLERR;
    uint32_t RESERVED1[2];
    __I  uint32_t RDY;
    uint32_t RESERVED2[23];
} stc_efm_fsr_bit_t;

typedef struct {
    __IO uint32_t PEWERRCLR;
    __IO uint32_t PEPRTERRCLR;
    uint32_t RESERVED0[1];
    __IO uint32_t PGMISMTCHCLR;
    __IO uint32_t OPTENDCLR;
    __IO uint32_t COLERRCLR;
    uint32_t RESERVED1[26];
} stc_efm_fsclr_bit_t;

typedef struct {
    __IO uint32_t PEERRITE;
    __IO uint32_t OPTENDITE;
    __IO uint32_t COLERRITE;
    uint32_t RESERVED0[29];
} stc_efm_fite_bit_t;

typedef struct {
    uint32_t RESERVED0[2];
    __IO uint32_t DFDIS;
    uint32_t RESERVED1[9];
    __IO uint32_t NMIS;
    __IO uint32_t IRS;
    __IO uint32_t IRDIS;
    __IO uint32_t LVDDIS;
} stc_efm_lvdicgcr_bit_t;

typedef struct {
    __I  uint32_t PIN0;
    __I  uint32_t PIN1;
    uint32_t RESERVED0[6];
} stc_gpio_pidr0_bit_t;

typedef struct {
    __I  uint32_t PIN0;
    __I  uint32_t PIN1;
    __I  uint32_t PIN2;
    __I  uint32_t PIN3;
    __I  uint32_t PIN4;
    __I  uint32_t PIN5;
    __I  uint32_t PIN6;
    __I  uint32_t PIN7;
} stc_gpio_pidr1_bit_t;

typedef struct {
    __I  uint32_t PIN0;
    __I  uint32_t PIN1;
    __I  uint32_t PIN2;
    __I  uint32_t PIN3;
    uint32_t RESERVED0[4];
} stc_gpio_pidr2_bit_t;

typedef struct {
    __I  uint32_t PIN0;
    __I  uint32_t PIN1;
    uint32_t RESERVED0[6];
} stc_gpio_pidr3_bit_t;

typedef struct {
    __I  uint32_t PIN0;
    uint32_t RESERVED0[7];
} stc_gpio_pidr4_bit_t;

typedef struct {
    __I  uint32_t PIN0;
    __I  uint32_t PIN1;
    uint32_t RESERVED0[6];
} stc_gpio_pidr5_bit_t;

typedef struct {
    __I  uint32_t PIN0;
    __I  uint32_t PIN1;
    __I  uint32_t PIN2;
    uint32_t RESERVED0[5];
} stc_gpio_pidr6_bit_t;

typedef struct {
    __I  uint32_t PIN0;
    uint32_t RESERVED0[7];
} stc_gpio_pidr7_bit_t;

typedef struct {
    __I  uint32_t PIN0;
    __I  uint32_t PIN1;
    __I  uint32_t PIN2;
    uint32_t RESERVED0[5];
} stc_gpio_pidr12_bit_t;

typedef struct {
    uint32_t RESERVED0[7];
    __I  uint32_t PIN7;
} stc_gpio_pidr13_bit_t;

typedef struct {
    uint32_t RESERVED0[7];
    __I  uint32_t PIN7;
} stc_gpio_pidr14_bit_t;

typedef struct {
    __IO uint32_t POUT0;
    __IO uint32_t POUT1;
    uint32_t RESERVED0[6];
} stc_gpio_podr0_bit_t;

typedef struct {
    __IO uint32_t POUT0;
    __IO uint32_t POUT1;
    __IO uint32_t POUT2;
    __IO uint32_t POUT3;
    __IO uint32_t POUT4;
    __IO uint32_t POUT5;
    __IO uint32_t POUT6;
    __IO uint32_t POUT7;
} stc_gpio_podr1_bit_t;

typedef struct {
    __IO uint32_t POUT0;
    __IO uint32_t POUT1;
    __IO uint32_t POUT2;
    __IO uint32_t POUT3;
    uint32_t RESERVED0[4];
} stc_gpio_podr2_bit_t;

typedef struct {
    __IO uint32_t POUT0;
    __IO uint32_t POUT1;
    uint32_t RESERVED0[6];
} stc_gpio_podr3_bit_t;

typedef struct {
    __IO uint32_t POUT0;
    uint32_t RESERVED0[7];
} stc_gpio_podr4_bit_t;

typedef struct {
    __IO uint32_t POUT0;
    __IO uint32_t POUT1;
    uint32_t RESERVED0[6];
} stc_gpio_podr5_bit_t;

typedef struct {
    __IO uint32_t POUT0;
    __IO uint32_t POUT1;
    __IO uint32_t POUT2;
    uint32_t RESERVED0[5];
} stc_gpio_podr6_bit_t;

typedef struct {
    __IO uint32_t POUT0;
    uint32_t RESERVED0[7];
} stc_gpio_podr7_bit_t;

typedef struct {
    __IO uint32_t POUT0;
    __IO uint32_t POUT1;
    __IO uint32_t POUT2;
    uint32_t RESERVED0[5];
} stc_gpio_podr12_bit_t;

typedef struct {
    uint32_t RESERVED0[7];
    __IO uint32_t POUT7;
} stc_gpio_podr13_bit_t;

typedef struct {
    uint32_t RESERVED0[7];
    __IO uint32_t POUT7;
} stc_gpio_podr14_bit_t;

typedef struct {
    __IO uint32_t POUTE0;
    __IO uint32_t POUTE1;
    uint32_t RESERVED0[6];
} stc_gpio_poer0_bit_t;

typedef struct {
    __IO uint32_t POUTE0;
    __IO uint32_t POUTE1;
    __IO uint32_t POUTE2;
    __IO uint32_t POUTE3;
    __IO uint32_t POUTE4;
    __IO uint32_t POUTE5;
    __IO uint32_t POUTE6;
    __IO uint32_t POUTE7;
} stc_gpio_poer1_bit_t;

typedef struct {
    __IO uint32_t POUTE0;
    __IO uint32_t POUTE1;
    __IO uint32_t POUTE2;
    __IO uint32_t POUTE3;
    uint32_t RESERVED0[4];
} stc_gpio_poer2_bit_t;

typedef struct {
    __IO uint32_t POUTE0;
    __IO uint32_t POUTE1;
    uint32_t RESERVED0[6];
} stc_gpio_poer3_bit_t;

typedef struct {
    __IO uint32_t POUTE0;
    uint32_t RESERVED0[7];
} stc_gpio_poer4_bit_t;

typedef struct {
    __IO uint32_t POUTE0;
    __IO uint32_t POUTE1;
    uint32_t RESERVED0[6];
} stc_gpio_poer5_bit_t;

typedef struct {
    __IO uint32_t POUTE0;
    __IO uint32_t POUTE1;
    __IO uint32_t POUTE2;
    uint32_t RESERVED0[5];
} stc_gpio_poer6_bit_t;

typedef struct {
    __IO uint32_t POUTE0;
    uint32_t RESERVED0[7];
} stc_gpio_poer7_bit_t;

typedef struct {
    __IO uint32_t POUTE0;
    __IO uint32_t POUTE1;
    __IO uint32_t POUTE2;
    uint32_t RESERVED0[5];
} stc_gpio_poer12_bit_t;

typedef struct {
    uint32_t RESERVED0[7];
    __IO uint32_t POUTE7;
} stc_gpio_poer13_bit_t;

typedef struct {
    uint32_t RESERVED0[7];
    __IO uint32_t POUTE7;
} stc_gpio_poer14_bit_t;

typedef struct {
    __O  uint32_t POS0;
    __O  uint32_t POS1;
    uint32_t RESERVED0[6];
} stc_gpio_posr0_bit_t;

typedef struct {
    __O  uint32_t POS0;
    __O  uint32_t POS1;
    __O  uint32_t POS2;
    __O  uint32_t POS3;
    __O  uint32_t POS4;
    __O  uint32_t POS5;
    __O  uint32_t POS6;
    __O  uint32_t POS7;
} stc_gpio_posr1_bit_t;

typedef struct {
    __O  uint32_t POS0;
    __O  uint32_t POS1;
    __O  uint32_t POS2;
    __O  uint32_t POS3;
    uint32_t RESERVED0[4];
} stc_gpio_posr2_bit_t;

typedef struct {
    __O  uint32_t POS0;
    __O  uint32_t POS1;
    uint32_t RESERVED0[6];
} stc_gpio_posr3_bit_t;

typedef struct {
    __O  uint32_t POS0;
    uint32_t RESERVED0[7];
} stc_gpio_posr4_bit_t;

typedef struct {
    __O  uint32_t POS0;
    __O  uint32_t POS1;
    uint32_t RESERVED0[6];
} stc_gpio_posr5_bit_t;

typedef struct {
    __O  uint32_t POS0;
    __O  uint32_t POS1;
    __O  uint32_t POS2;
    uint32_t RESERVED0[5];
} stc_gpio_posr6_bit_t;

typedef struct {
    __O  uint32_t POS0;
    uint32_t RESERVED0[7];
} stc_gpio_posr7_bit_t;

typedef struct {
    __O  uint32_t POS0;
    __O  uint32_t POS1;
    __O  uint32_t POS2;
    uint32_t RESERVED0[5];
} stc_gpio_posr12_bit_t;

typedef struct {
    uint32_t RESERVED0[7];
    __O  uint32_t POS7;
} stc_gpio_posr13_bit_t;

typedef struct {
    uint32_t RESERVED0[7];
    __O  uint32_t POS7;
} stc_gpio_posr14_bit_t;

typedef struct {
    __O  uint32_t POR0;
    __O  uint32_t POR1;
    uint32_t RESERVED0[6];
} stc_gpio_porr0_bit_t;

typedef struct {
    __O  uint32_t POR0;
    __O  uint32_t POR1;
    __O  uint32_t POR2;
    __O  uint32_t POR3;
    __O  uint32_t POR4;
    __O  uint32_t POR5;
    __O  uint32_t POR6;
    __O  uint32_t POR7;
} stc_gpio_porr1_bit_t;

typedef struct {
    __O  uint32_t POR0;
    __O  uint32_t POR1;
    __O  uint32_t POR2;
    __O  uint32_t POR3;
    uint32_t RESERVED0[4];
} stc_gpio_porr2_bit_t;

typedef struct {
    __O  uint32_t POR0;
    __O  uint32_t POR1;
    uint32_t RESERVED0[6];
} stc_gpio_porr3_bit_t;

typedef struct {
    __O  uint32_t POR0;
    uint32_t RESERVED0[7];
} stc_gpio_porr4_bit_t;

typedef struct {
    __O  uint32_t POR0;
    __O  uint32_t POR1;
    uint32_t RESERVED0[6];
} stc_gpio_porr5_bit_t;

typedef struct {
    __O  uint32_t POR0;
    __O  uint32_t POR1;
    __O  uint32_t POR2;
    uint32_t RESERVED0[5];
} stc_gpio_porr6_bit_t;

typedef struct {
    __O  uint32_t POR0;
    uint32_t RESERVED0[7];
} stc_gpio_porr7_bit_t;

typedef struct {
    __O  uint32_t POR0;
    __O  uint32_t POR1;
    __O  uint32_t POR2;
    uint32_t RESERVED0[5];
} stc_gpio_porr12_bit_t;

typedef struct {
    uint32_t RESERVED0[7];
    __O  uint32_t POR7;
} stc_gpio_porr13_bit_t;

typedef struct {
    uint32_t RESERVED0[7];
    __O  uint32_t POR7;
} stc_gpio_porr14_bit_t;

typedef struct {
    __O  uint32_t POT0;
    __O  uint32_t POT1;
    uint32_t RESERVED0[6];
} stc_gpio_potr0_bit_t;

typedef struct {
    __O  uint32_t POT0;
    __O  uint32_t POT1;
    __O  uint32_t POT2;
    __O  uint32_t POT3;
    __O  uint32_t POT4;
    __O  uint32_t POT5;
    __O  uint32_t POT6;
    __O  uint32_t POT7;
} stc_gpio_potr1_bit_t;

typedef struct {
    __O  uint32_t POT0;
    __O  uint32_t POT1;
    __O  uint32_t POT2;
    __O  uint32_t POT3;
    uint32_t RESERVED0[4];
} stc_gpio_potr2_bit_t;

typedef struct {
    __O  uint32_t POT0;
    __O  uint32_t POT1;
    uint32_t RESERVED0[6];
} stc_gpio_potr3_bit_t;

typedef struct {
    __O  uint32_t POT0;
    uint32_t RESERVED0[7];
} stc_gpio_potr4_bit_t;

typedef struct {
    __O  uint32_t POT0;
    __O  uint32_t POT1;
    uint32_t RESERVED0[6];
} stc_gpio_potr5_bit_t;

typedef struct {
    __O  uint32_t POT0;
    __O  uint32_t POT1;
    __O  uint32_t POT2;
    uint32_t RESERVED0[5];
} stc_gpio_potr6_bit_t;

typedef struct {
    __O  uint32_t POT0;
    uint32_t RESERVED0[7];
} stc_gpio_potr7_bit_t;

typedef struct {
    __O  uint32_t POT0;
    __O  uint32_t POT1;
    __O  uint32_t POT2;
    uint32_t RESERVED0[5];
} stc_gpio_potr12_bit_t;

typedef struct {
    uint32_t RESERVED0[7];
    __O  uint32_t POT7;
} stc_gpio_potr13_bit_t;

typedef struct {
    uint32_t RESERVED0[7];
    __O  uint32_t POT7;
} stc_gpio_potr14_bit_t;

typedef struct {
    __IO uint32_t POUT;
    __IO uint32_t POUTE;
    __IO uint32_t NOD;
    uint32_t RESERVED0[1];
    __IO uint32_t DRV;
    __IO uint32_t LTE;
    __IO uint32_t PUU;
    uint32_t RESERVED1[1];
    __I  uint32_t PIN;
    __IO uint32_t INVE;
    __IO uint32_t CINSEL;
    __IO uint32_t INTE;
    uint32_t RESERVED2[4];
} stc_gpio_pcr_bit_t;

typedef struct {
    __IO uint32_t PINAE0;
    __IO uint32_t PINAE1;
    __IO uint32_t PINAE2;
    __IO uint32_t PINAE3;
    __IO uint32_t PINAE4;
    __IO uint32_t PINAE5;
    __IO uint32_t PINAE6;
    __IO uint32_t PINAE7;
    uint32_t RESERVED0[4];
    __IO uint32_t PINAE12;
    __IO uint32_t PINAE13;
    __IO uint32_t PINAE14;
    uint32_t RESERVED1[1];
} stc_gpio_pinaer_bit_t;

typedef struct {
    __IO uint32_t WE;
    uint32_t RESERVED0[15];
} stc_gpio_pwpr_bit_t;

typedef struct {
    __IO uint32_t PE;
    __IO uint32_t SMBUS;
    __IO uint32_t SMBALRTEN;
    __IO uint32_t SMBDEFAULTEN;
    __IO uint32_t SMBHOSTEN;
    __IO uint32_t FACKEN;
    __IO uint32_t GCEN;
    __IO uint32_t RESTART;
    __IO uint32_t START;
    __IO uint32_t STOP;
    __IO uint32_t ACK;
    uint32_t RESERVED0[4];
    __IO uint32_t SWRST;
    uint32_t RESERVED1[16];
} stc_i2c_cr1_bit_t;

typedef struct {
    __IO uint32_t STARTIE;
    __IO uint32_t SLADDR0IE;
    __IO uint32_t SLADDR1IE;
    __IO uint32_t TENDIE;
    __IO uint32_t STOPIE;
    uint32_t RESERVED0[1];
    __IO uint32_t RFULLIE;
    __IO uint32_t TEMPTYIE;
    uint32_t RESERVED1[1];
    __IO uint32_t ARLOIE;
    uint32_t RESERVED2[2];
    __IO uint32_t NACKIE;
    uint32_t RESERVED3[7];
    __IO uint32_t GENCALLIE;
    __IO uint32_t SMBDEFAULTIE;
    __IO uint32_t SMBHOSTIE;
    __IO uint32_t SMBALRTIE;
    uint32_t RESERVED4[8];
} stc_i2c_cr2_bit_t;

typedef struct {
    uint32_t RESERVED0[10];
    __IO uint32_t BUSWAIT;
    uint32_t RESERVED1[21];
} stc_i2c_cr4_bit_t;

typedef struct {
    uint32_t RESERVED0[12];
    __IO uint32_t SLADDR0EN;
    uint32_t RESERVED1[2];
    __IO uint32_t ADDRMOD0;
    uint32_t RESERVED2[16];
} stc_i2c_slr0_bit_t;

typedef struct {
    uint32_t RESERVED0[12];
    __IO uint32_t SLADDR1EN;
    uint32_t RESERVED1[2];
    __IO uint32_t ADDRMOD1;
    uint32_t RESERVED2[16];
} stc_i2c_slr1_bit_t;

typedef struct {
    __I  uint32_t STARTF;
    __I  uint32_t SLADDR0F;
    __I  uint32_t SLADDR1F;
    __I  uint32_t TENDF;
    __I  uint32_t STOPF;
    uint32_t RESERVED0[1];
    __I  uint32_t RFULLF;
    __I  uint32_t TEMPTYF;
    uint32_t RESERVED1[1];
    __I  uint32_t ARLOF;
    __I  uint32_t ACKRF;
    uint32_t RESERVED2[1];
    __I  uint32_t NACKF;
    uint32_t RESERVED3[3];
    __IO uint32_t MSL;
    __I  uint32_t BUSY;
    __IO uint32_t TRA;
    uint32_t RESERVED4[1];
    __I  uint32_t GENCALLF;
    __I  uint32_t SMBDEFAULTF;
    __I  uint32_t SMBHOSTF;
    __I  uint32_t SMBALRTF;
    uint32_t RESERVED5[8];
} stc_i2c_sr_bit_t;

typedef struct {
    __O  uint32_t STARTFCLR;
    __O  uint32_t SLADDR0FCLR;
    __O  uint32_t SLADDR1FCLR;
    __O  uint32_t TENDFCLR;
    __O  uint32_t STOPFCLR;
    uint32_t RESERVED0[1];
    __O  uint32_t RFULLFCLR;
    __O  uint32_t TEMPTYFCLR;
    uint32_t RESERVED1[1];
    __O  uint32_t ARLOFCLR;
    uint32_t RESERVED2[2];
    __O  uint32_t NACKFCLR;
    uint32_t RESERVED3[7];
    __O  uint32_t GENCALLFCLR;
    __O  uint32_t SMBDEFAULTFCLR;
    __O  uint32_t SMBHOSTFCLR;
    __O  uint32_t SMBALRTFCLR;
    uint32_t RESERVED4[8];
} stc_i2c_clr_bit_t;

typedef struct {
    uint32_t RESERVED0[4];
    __IO uint32_t DNFEN;
    __IO uint32_t ANFEN;
    uint32_t RESERVED1[26];
} stc_i2c_fltr_bit_t;

typedef struct {
    __I  uint32_t SWDTAUTS;
    __I  uint32_t SWDTITS;
    uint32_t RESERVED0[10];
    __I  uint32_t SWDTSLPOFF;
    uint32_t RESERVED1[15];
    __I  uint32_t NMIFEN;
    __I  uint32_t NMITRG;
    __I  uint32_t NMIEN;
    __I  uint32_t NMIICGEN;
} stc_icg_icg0_bit_t;

typedef struct {
    uint32_t RESERVED0[2];
    __I  uint32_t DFDIS;
    uint32_t RESERVED1[9];
    __I  uint32_t NMIS;
    __I  uint32_t IRS;
    __I  uint32_t IRDIS;
    __I  uint32_t LVDDIS;
    uint32_t RESERVED2[16];
} stc_icg_icg1_bit_t;

typedef struct {
    __IO uint32_t NMITRG;
    uint32_t RESERVED0[6];
    __IO uint32_t NMIFEN;
    uint32_t RESERVED1[24];
} stc_intc_nmicr_bit_t;

typedef struct {
    __IO uint32_t NMIEN;
    __IO uint32_t XTALSTPEN;
    __IO uint32_t SWDTEN;
    __IO uint32_t PVDEN;
    uint32_t RESERVED0[28];
} stc_intc_nmienr_bit_t;

typedef struct {
    __I  uint32_t NMIF;
    __I  uint32_t XTALSTPF;
    __I  uint32_t SWDTF;
    __I  uint32_t PVDF;
    uint32_t RESERVED0[28];
} stc_intc_nmifr_bit_t;

typedef struct {
    __IO uint32_t NMICL;
    __IO uint32_t XTALSTPCL;
    __IO uint32_t SWDTCL;
    __IO uint32_t PVDCL;
    uint32_t RESERVED0[28];
} stc_intc_nmiclr_bit_t;

typedef struct {
    __IO uint32_t EVTEN0;
    __IO uint32_t EVTEN1;
    __IO uint32_t EVTEN2;
    __IO uint32_t EVTEN3;
    __IO uint32_t EVTEN4;
    __IO uint32_t EVTEN5;
    __IO uint32_t EVTEN6;
    __IO uint32_t EVTEN7;
    uint32_t RESERVED0[24];
} stc_intc_evter_bit_t;

typedef struct {
    __IO uint32_t EKEY0EN;
    __IO uint32_t EKEY1EN;
    __IO uint32_t EKEY2EN;
    __IO uint32_t EKEY3EN;
    __IO uint32_t EKEY4EN;
    __IO uint32_t EKEY5EN;
    uint32_t RESERVED0[26];
} stc_intc_ekeycr_bit_t;

typedef struct {
    uint32_t RESERVED0[7];
    __IO uint32_t EIRQFEN;
    uint32_t RESERVED1[24];
} stc_intc_eirqcr_bit_t;

typedef struct {
    __IO uint32_t EIRQWUEN0;
    __IO uint32_t EIRQWUEN1;
    __IO uint32_t EIRQWUEN2;
    __IO uint32_t EIRQWUEN3;
    __IO uint32_t EIRQWUEN4;
    __IO uint32_t EIRQWUEN5;
    __IO uint32_t EIRQWUEN6;
    __IO uint32_t EIRQWUEN7;
    __IO uint32_t EIRQWUEN8;
    __IO uint32_t EIRQWUEN9;
    uint32_t RESERVED0[6];
    __IO uint32_t SWDTWUEN;
    __IO uint32_t EKEYWUEN;
    __IO uint32_t TMR0CMPWUEN;
    uint32_t RESERVED1[3];
    __IO uint32_t PVDWUEN;
    uint32_t RESERVED2[9];
} stc_intc_wupen_bit_t;

typedef struct {
    __IO uint32_t EIRQF0;
    __IO uint32_t EIRQF1;
    __IO uint32_t EIRQF2;
    __IO uint32_t EIRQF3;
    __IO uint32_t EIRQF4;
    __IO uint32_t EIRQF5;
    __IO uint32_t EIRQF6;
    __IO uint32_t EIRQF7;
    __IO uint32_t EIRQF8;
    __IO uint32_t EIRQF9;
    uint32_t RESERVED0[22];
} stc_intc_eirqfr_bit_t;

typedef struct {
    uint32_t RESERVED0[1];
    __IO uint32_t ISEL1;
    __IO uint32_t ISEL2;
    __IO uint32_t ISEL3;
    __IO uint32_t ISEL4;
    __IO uint32_t ISEL5;
    __IO uint32_t ISEL6;
    __IO uint32_t ISEL7;
    __IO uint32_t ISEL8;
    __IO uint32_t ISEL9;
    __IO uint32_t ISEL10;
    __IO uint32_t ISEL11;
    __IO uint32_t ISEL12;
    __IO uint32_t ISEL13;
    __IO uint32_t ISEL14;
    __IO uint32_t ISEL15;
    uint32_t RESERVED1[16];
} stc_intc_iselbr_bit_t;

typedef struct {
    uint32_t RESERVED0[1];
    __IO uint32_t CKSHRC;
    uint32_t RESERVED1[1];
    __IO uint32_t HAPORDIS;
    uint32_t RESERVED2[3];
    __IO uint32_t STOP;
} stc_pwc_stpmcr_bit_t;

typedef struct {
    uint32_t RESERVED0[4];
    __IO uint32_t PWMONSEL;
    __IO uint32_t PWMONE;
    uint32_t RESERVED1[2];
} stc_pwc_pwrc_bit_t;

typedef struct {
    uint32_t RESERVED0[4];
    __IO uint32_t RPERDIS;
    __IO uint32_t RPEF;
    uint32_t RESERVED1[2];
} stc_pwc_ramcr_bit_t;

typedef struct {
    __IO uint32_t EXVCCINEN;
    uint32_t RESERVED0[2];
    __I  uint32_t LVIF;
    __IO uint32_t DETF;
    uint32_t RESERVED1[2];
    __IO uint32_t CMPOE;
} stc_pwc_lvdcsr_bit_t;

typedef struct {
    __IO uint32_t CKRWE;
    __IO uint32_t PWRWE;
    __IO uint32_t FPRCB2;
    __IO uint32_t LVRWE;
    __IO uint32_t FPRCB4;
    __IO uint32_t FPRCB5;
    __IO uint32_t FPRCB6;
    __IO uint32_t FPRCB7;
    uint32_t RESERVED0[8];
} stc_pwc_fprc_bit_t;

typedef struct {
    __IO uint32_t DBGEN;
    uint32_t RESERVED0[7];
} stc_pwc_dbgc_bit_t;

typedef struct {
    __IO uint32_t PORF;
    __IO uint32_t PINRF;
    __IO uint32_t LVRF;
    uint32_t RESERVED0[2];
    __IO uint32_t WDRF;
    uint32_t RESERVED1[2];
    __IO uint32_t SWRF;
    uint32_t RESERVED2[1];
    __IO uint32_t RAMPERF;
    uint32_t RESERVED3[1];
    __IO uint32_t CPULKUPRF;
    __IO uint32_t XTALERF;
    __IO uint32_t MULTIRF;
    __IO uint32_t CLRF;
} stc_rmu_rstf0_bit_t;

typedef struct {
    __IO uint32_t SPIMDS;
    __IO uint32_t TXMDS;
    uint32_t RESERVED0[1];
    __IO uint32_t MSTR;
    __IO uint32_t SPLPBK;
    __IO uint32_t SPLPBK2;
    __IO uint32_t SPE;
    uint32_t RESERVED1[1];
    __IO uint32_t EIE;
    __IO uint32_t TXIE;
    __IO uint32_t RXIE;
    __IO uint32_t IDIE;
    __IO uint32_t MODFE;
    __IO uint32_t PATE;
    __IO uint32_t PAOE;
    __IO uint32_t PAE;
    uint32_t RESERVED2[16];
} stc_spi_cr1_bit_t;

typedef struct {
    uint32_t RESERVED0[8];
    __IO uint32_t SS0PV;
    uint32_t RESERVED1[23];
} stc_spi_cfg1_bit_t;

typedef struct {
    __IO uint32_t OVRERF;
    __I  uint32_t IDLNF;
    __IO uint32_t MODFERF;
    __IO uint32_t PERF;
    __IO uint32_t UDRERF;
    __IO uint32_t TDEF;
    uint32_t RESERVED0[1];
    __IO uint32_t RDFF;
    uint32_t RESERVED1[24];
} stc_spi_sr_bit_t;

typedef struct {
    __IO uint32_t CPHA;
    __IO uint32_t CPOL;
    uint32_t RESERVED0[6];
    __IO uint32_t DSIZE;
    uint32_t RESERVED1[3];
    __IO uint32_t LSBF;
    uint32_t RESERVED2[19];
} stc_spi_cfg2_bit_t;

typedef struct {
    uint32_t RESERVED0[16];
    __IO uint32_t SLPOFF;
    uint32_t RESERVED1[14];
    __IO uint32_t ITS;
} stc_swdt_cr_bit_t;

typedef struct {
    uint32_t RESERVED0[16];
    __IO uint32_t UDF;
    __IO uint32_t REF;
    uint32_t RESERVED1[14];
} stc_swdt_sr_bit_t;

typedef struct {
    __IO uint32_t CSTA;
    __IO uint32_t CAPMDA;
    __IO uint32_t INTENA;
    uint32_t RESERVED0[5];
    __IO uint32_t SYNSA;
    __IO uint32_t SYNCLKA;
    uint32_t RESERVED1[2];
    __IO uint32_t HSTAA;
    __IO uint32_t HSTPA;
    __IO uint32_t HCLEA;
    __IO uint32_t HICPA;
    uint32_t RESERVED2[16];
} stc_tmr0_bconr_bit_t;

typedef struct {
    __IO uint32_t CMFA;
    uint32_t RESERVED0[31];
} stc_tmr0_stflr_bit_t;

typedef struct {
    __IO uint32_t START;
    __IO uint32_t DIR;
    __IO uint32_t MODE;
    __IO uint32_t SYNST;
    uint32_t RESERVED0[4];
} stc_tmrb_bcstrl_bit_t;

typedef struct {
    __IO uint32_t OVSTP;
    uint32_t RESERVED0[3];
    __IO uint32_t ITENOVF;
    __IO uint32_t ITENUDF;
    __IO uint32_t OVFF;
    __IO uint32_t UDFF;
} stc_tmrb_bcstrh_bit_t;

typedef struct {
    __IO uint32_t HSTA0;
    __IO uint32_t HSTA1;
    __IO uint32_t HSTA2;
    uint32_t RESERVED0[1];
    __IO uint32_t HSTP0;
    __IO uint32_t HSTP1;
    __IO uint32_t HSTP2;
    uint32_t RESERVED1[1];
    __IO uint32_t HCLE0;
    __IO uint32_t HCLE1;
    __IO uint32_t HCLE2;
    uint32_t RESERVED2[1];
    __IO uint32_t HCLE3;
    __IO uint32_t HCLE4;
    uint32_t RESERVED3[2];
} stc_tmrb_hconr_bit_t;

typedef struct {
    uint32_t RESERVED0[8];
    __IO uint32_t HCUP8;
    __IO uint32_t HCUP9;
    __IO uint32_t HCUP10;
    __IO uint32_t HCUP11;
    __IO uint32_t HCUP12;
    uint32_t RESERVED1[3];
} stc_tmrb_hcupr_bit_t;

typedef struct {
    uint32_t RESERVED0[8];
    __IO uint32_t HCDO8;
    __IO uint32_t HCDO9;
    __IO uint32_t HCDO10;
    __IO uint32_t HCDO11;
    __IO uint32_t HCDO12;
    uint32_t RESERVED1[3];
} stc_tmrb_hcdor_bit_t;

typedef struct {
    __IO uint32_t ITEN1;
    uint32_t RESERVED0[15];
} stc_tmrb_iconr_bit_t;

typedef struct {
    __IO uint32_t ETEN1;
    uint32_t RESERVED0[15];
} stc_tmrb_econr_bit_t;

typedef struct {
    __IO uint32_t CMPF1;
    uint32_t RESERVED0[15];
} stc_tmrb_stflr_bit_t;

typedef struct {
    __IO uint32_t CAPMD;
    uint32_t RESERVED0[3];
    __IO uint32_t HICP0;
    __IO uint32_t HICP1;
    __IO uint32_t HICP2;
    uint32_t RESERVED1[5];
    __IO uint32_t NOFIENCP;
    uint32_t RESERVED2[3];
} stc_tmrb_cconr_bit_t;

typedef struct {
    uint32_t RESERVED0[12];
    __IO uint32_t OUTEN;
    uint32_t RESERVED1[3];
} stc_tmrb_pconr_bit_t;

typedef struct {
    __I  uint32_t PE;
    __I  uint32_t FE;
    uint32_t RESERVED0[1];
    __I  uint32_t ORE;
    uint32_t RESERVED1[1];
    __I  uint32_t RXNE;
    __I  uint32_t TC;
    __I  uint32_t TXE;
    uint32_t RESERVED2[8];
    __I  uint32_t MPB;
    uint32_t RESERVED3[15];
} stc_usart_sr_bit_t;

typedef struct {
    uint32_t RESERVED0[9];
    __IO uint32_t MPID;
    uint32_t RESERVED1[6];
} stc_usart_tdr_bit_t;

typedef struct {
    uint32_t RESERVED0[2];
    __IO uint32_t RE;
    __IO uint32_t TE;
    __IO uint32_t SLME;
    __IO uint32_t RIE;
    __IO uint32_t TCIE;
    __IO uint32_t TXEIE;
    uint32_t RESERVED1[1];
    __IO uint32_t PS;
    __IO uint32_t PCE;
    uint32_t RESERVED2[1];
    __IO uint32_t M;
    uint32_t RESERVED3[2];
    __IO uint32_t OVER8;
    __O  uint32_t CPE;
    __O  uint32_t CFE;
    uint32_t RESERVED4[1];
    __O  uint32_t CORE;
    uint32_t RESERVED5[4];
    __IO uint32_t MS;
    uint32_t RESERVED6[3];
    __IO uint32_t ML;
    uint32_t RESERVED7[1];
    __IO uint32_t NFE;
    __IO uint32_t SBS;
} stc_usart_cr1_bit_t;

typedef struct {
    __IO uint32_t MPE;
    uint32_t RESERVED0[12];
    __IO uint32_t STOP;
    __IO uint32_t LINEN;
    uint32_t RESERVED1[17];
} stc_usart_cr2_bit_t;

typedef struct {
    uint32_t RESERVED0[3];
    __IO uint32_t HDSEL;
    uint32_t RESERVED1[5];
    __IO uint32_t CTSE;
    uint32_t RESERVED2[22];
} stc_usart_cr3_bit_t;


typedef struct {
    stc_adc_str_bit_t                        STR_b;
    uint32_t                                 RESERVED0[8];
    stc_adc_cr0_bit_t                        CR0_b;
    stc_adc_cr1_bit_t                        CR1_b;
    uint32_t                                 RESERVED1[32];
    stc_adc_trgsr_bit_t                      TRGSR_b;
    uint32_t                                 RESERVED2[96];
    stc_adc_exchselr_bit_t                   EXCHSELR_b;
    uint32_t                                 RESERVED3[344];
    stc_adc_isr_bit_t                        ISR_b;
    stc_adc_icr_bit_t                        ICR_b;
    stc_adc_isclrr_bit_t                     ISCLRR_b;
    uint32_t                                 RESERVED4[712];
    stc_adc_awdcr_bit_t                      AWDCR_b;
    stc_adc_awdsr_bit_t                      AWDSR_b;
    stc_adc_awdsclrr_bit_t                   AWDSCLRR_b;
} bCM_ADC_TypeDef;

typedef struct {
    stc_aos_intc_strgcr_bit_t                INTC_STRGCR_b;
} bCM_AOS_TypeDef;

typedef struct {
    uint32_t                                 RESERVED0[32];
    stc_cmu_xtalstdsr_bit_t                  XTALSTDSR_b;
    uint32_t                                 RESERVED1[88];
    stc_cmu_xtalcr_bit_t                     XTALCR_b;
    uint32_t                                 RESERVED2[24];
    stc_cmu_xtalcfgr_bit_t                   XTALCFGR_b;
    uint32_t                                 RESERVED3[24];
    stc_cmu_hrccr_bit_t                      HRCCR_b;
    uint32_t                                 RESERVED4[56];
    stc_cmu_oscstbsr_bit_t                   OSCSTBSR_b;
    uint32_t                                 RESERVED5[24];
    stc_cmu_mcocfgr_bit_t                    MCO1CFGR_b;
    uint32_t                                 RESERVED6[24];
    stc_cmu_xtalstdcr_bit_t                  XTALSTDCR_b;
    uint32_t                                 RESERVED7[56];
    stc_cmu_fcg_bit_t                        FCG_b;
    uint32_t                                 RESERVED8[64];
    stc_cmu_lrccr_bit_t                      LRCCR_b;
} bCM_CMU_TypeDef;

typedef struct {
    stc_crc_cr_bit_t                         CR_b;
} bCM_CRC_TypeDef;

typedef struct {
    stc_ctc_cr1_bit_t                        CR1_b;
    uint32_t                                 RESERVED0[32];
    stc_ctc_str_bit_t                        STR_b;
} bCM_CTC_TypeDef;

typedef struct {
    stc_dbgc_mcudbgstat_bit_t                MCUDBGSTAT_b;
    stc_dbgc_mcustpctl_bit_t                 MCUSTPCTL_b;
} bCM_DBGC_TypeDef;

typedef struct {
    uint32_t                                 RESERVED0[32];
    stc_efm_fstp_bit_t                       FSTP_b;
    stc_efm_frmc_bit_t                       FRMC_b;
    stc_efm_fwmc_bit_t                       FWMC_b;
    stc_efm_fsr_bit_t                        FSR_b;
    stc_efm_fsclr_bit_t                      FSCLR_b;
    stc_efm_fite_bit_t                       FITE_b;
    uint32_t                                 RESERVED1[4928];
    stc_efm_lvdicgcr_bit_t                   LVDICGCR_b;
} bCM_EFM_TypeDef;

typedef struct {
    stc_gpio_pidr0_bit_t                     PIDR0_b;
    stc_gpio_pidr1_bit_t                     PIDR1_b;
    stc_gpio_pidr2_bit_t                     PIDR2_b;
    stc_gpio_pidr3_bit_t                     PIDR3_b;
    stc_gpio_pidr4_bit_t                     PIDR4_b;
    stc_gpio_pidr5_bit_t                     PIDR5_b;
    stc_gpio_pidr6_bit_t                     PIDR6_b;
    stc_gpio_pidr7_bit_t                     PIDR7_b;
    uint32_t                                 RESERVED0[32];
    stc_gpio_pidr12_bit_t                    PIDR12_b;
    stc_gpio_pidr13_bit_t                    PIDR13_b;
    stc_gpio_pidr14_bit_t                    PIDR14_b;
    uint32_t                                 RESERVED1[8];
    stc_gpio_podr0_bit_t                     PODR0_b;
    stc_gpio_podr1_bit_t                     PODR1_b;
    stc_gpio_podr2_bit_t                     PODR2_b;
    stc_gpio_podr3_bit_t                     PODR3_b;
    stc_gpio_podr4_bit_t                     PODR4_b;
    stc_gpio_podr5_bit_t                     PODR5_b;
    stc_gpio_podr6_bit_t                     PODR6_b;
    stc_gpio_podr7_bit_t                     PODR7_b;
    uint32_t                                 RESERVED2[32];
    stc_gpio_podr12_bit_t                    PODR12_b;
    stc_gpio_podr13_bit_t                    PODR13_b;
    stc_gpio_podr14_bit_t                    PODR14_b;
    uint32_t                                 RESERVED3[8];
    stc_gpio_poer0_bit_t                     POER0_b;
    stc_gpio_poer1_bit_t                     POER1_b;
    stc_gpio_poer2_bit_t                     POER2_b;
    stc_gpio_poer3_bit_t                     POER3_b;
    stc_gpio_poer4_bit_t                     POER4_b;
    stc_gpio_poer5_bit_t                     POER5_b;
    stc_gpio_poer6_bit_t                     POER6_b;
    stc_gpio_poer7_bit_t                     POER7_b;
    uint32_t                                 RESERVED4[32];
    stc_gpio_poer12_bit_t                    POER12_b;
    stc_gpio_poer13_bit_t                    POER13_b;
    stc_gpio_poer14_bit_t                    POER14_b;
    uint32_t                                 RESERVED5[8];
    stc_gpio_posr0_bit_t                     POSR0_b;
    stc_gpio_posr1_bit_t                     POSR1_b;
    stc_gpio_posr2_bit_t                     POSR2_b;
    stc_gpio_posr3_bit_t                     POSR3_b;
    stc_gpio_posr4_bit_t                     POSR4_b;
    stc_gpio_posr5_bit_t                     POSR5_b;
    stc_gpio_posr6_bit_t                     POSR6_b;
    stc_gpio_posr7_bit_t                     POSR7_b;
    uint32_t                                 RESERVED6[32];
    stc_gpio_posr12_bit_t                    POSR12_b;
    stc_gpio_posr13_bit_t                    POSR13_b;
    stc_gpio_posr14_bit_t                    POSR14_b;
    uint32_t                                 RESERVED7[8];
    stc_gpio_porr0_bit_t                     PORR0_b;
    stc_gpio_porr1_bit_t                     PORR1_b;
    stc_gpio_porr2_bit_t                     PORR2_b;
    stc_gpio_porr3_bit_t                     PORR3_b;
    stc_gpio_porr4_bit_t                     PORR4_b;
    stc_gpio_porr5_bit_t                     PORR5_b;
    stc_gpio_porr6_bit_t                     PORR6_b;
    stc_gpio_porr7_bit_t                     PORR7_b;
    uint32_t                                 RESERVED8[32];
    stc_gpio_porr12_bit_t                    PORR12_b;
    stc_gpio_porr13_bit_t                    PORR13_b;
    stc_gpio_porr14_bit_t                    PORR14_b;
    uint32_t                                 RESERVED9[8];
    stc_gpio_potr0_bit_t                     POTR0_b;
    stc_gpio_potr1_bit_t                     POTR1_b;
    stc_gpio_potr2_bit_t                     POTR2_b;
    stc_gpio_potr3_bit_t                     POTR3_b;
    stc_gpio_potr4_bit_t                     POTR4_b;
    stc_gpio_potr5_bit_t                     POTR5_b;
    stc_gpio_potr6_bit_t                     POTR6_b;
    stc_gpio_potr7_bit_t                     POTR7_b;
    uint32_t                                 RESERVED10[32];
    stc_gpio_potr12_bit_t                    POTR12_b;
    stc_gpio_potr13_bit_t                    POTR13_b;
    stc_gpio_potr14_bit_t                    POTR14_b;
    uint32_t                                 RESERVED11[7432];
    stc_gpio_pcr_bit_t                       PCR00_b;
    stc_gpio_pcr_bit_t                       PCR01_b;
    uint32_t                                 RESERVED12[96];
    stc_gpio_pcr_bit_t                       PCR10_b;
    stc_gpio_pcr_bit_t                       PCR11_b;
    stc_gpio_pcr_bit_t                       PCR12_b;
    stc_gpio_pcr_bit_t                       PCR13_b;
    stc_gpio_pcr_bit_t                       PCR14_b;
    stc_gpio_pcr_bit_t                       PCR15_b;
    stc_gpio_pcr_bit_t                       PCR16_b;
    stc_gpio_pcr_bit_t                       PCR17_b;
    stc_gpio_pcr_bit_t                       PCR20_b;
    stc_gpio_pcr_bit_t                       PCR21_b;
    stc_gpio_pcr_bit_t                       PCR22_b;
    stc_gpio_pcr_bit_t                       PCR23_b;
    uint32_t                                 RESERVED13[64];
    stc_gpio_pcr_bit_t                       PCR30_b;
    stc_gpio_pcr_bit_t                       PCR31_b;
    uint32_t                                 RESERVED14[96];
    stc_gpio_pcr_bit_t                       PCR40_b;
    uint32_t                                 RESERVED15[112];
    stc_gpio_pcr_bit_t                       PCR50_b;
    stc_gpio_pcr_bit_t                       PCR51_b;
    uint32_t                                 RESERVED16[96];
    stc_gpio_pcr_bit_t                       PCR60_b;
    stc_gpio_pcr_bit_t                       PCR61_b;
    stc_gpio_pcr_bit_t                       PCR62_b;
    uint32_t                                 RESERVED17[80];
    stc_gpio_pcr_bit_t                       PCR70_b;
    uint32_t                                 RESERVED18[624];
    stc_gpio_pcr_bit_t                       PCR120_b;
    stc_gpio_pcr_bit_t                       PCR121_b;
    stc_gpio_pcr_bit_t                       PCR122_b;
    uint32_t                                 RESERVED19[192];
    stc_gpio_pcr_bit_t                       PCR137_b;
    uint32_t                                 RESERVED20[112];
    stc_gpio_pcr_bit_t                       PCR147_b;
    uint32_t                                 RESERVED21[176];
    stc_gpio_pinaer_bit_t                    PINAER_b;
    stc_gpio_pwpr_bit_t                      PWPR_b;
} bCM_GPIO_TypeDef;

typedef struct {
    stc_i2c_cr1_bit_t                        CR1_b;
    stc_i2c_cr2_bit_t                        CR2_b;
    uint32_t                                 RESERVED0[32];
    stc_i2c_cr4_bit_t                        CR4_b;
    stc_i2c_slr0_bit_t                       SLR0_b;
    stc_i2c_slr1_bit_t                       SLR1_b;
    uint32_t                                 RESERVED1[32];
    stc_i2c_sr_bit_t                         SR_b;
    stc_i2c_clr_bit_t                        CLR_b;
    uint32_t                                 RESERVED2[96];
    stc_i2c_fltr_bit_t                       FLTR_b;
} bCM_I2C_TypeDef;

typedef struct {
    stc_icg_icg0_bit_t                       ICG0_b;
    stc_icg_icg1_bit_t                       ICG1_b;
} bCM_ICG_TypeDef;

typedef struct {
    stc_intc_nmicr_bit_t                     NMICR_b;
    stc_intc_nmienr_bit_t                    NMIENR_b;
    stc_intc_nmifr_bit_t                     NMIFR_b;
    stc_intc_nmiclr_bit_t                    NMICLR_b;
    uint32_t                                 RESERVED0[128];
    stc_intc_evter_bit_t                     EVTER_b;
    stc_intc_ekeycr_bit_t                    EKEYCR_b;
    uint32_t                                 RESERVED1[192];
    stc_intc_eirqcr_bit_t                    EIRQCR0_b;
    stc_intc_eirqcr_bit_t                    EIRQCR1_b;
    stc_intc_eirqcr_bit_t                    EIRQCR2_b;
    stc_intc_eirqcr_bit_t                    EIRQCR3_b;
    stc_intc_eirqcr_bit_t                    EIRQCR4_b;
    stc_intc_eirqcr_bit_t                    EIRQCR5_b;
    stc_intc_eirqcr_bit_t                    EIRQCR6_b;
    stc_intc_eirqcr_bit_t                    EIRQCR7_b;
    stc_intc_eirqcr_bit_t                    EIRQCR8_b;
    stc_intc_eirqcr_bit_t                    EIRQCR9_b;
    uint32_t                                 RESERVED2[64];
    stc_intc_wupen_bit_t                     WUPEN_b;
    stc_intc_eirqfr_bit_t                    EIRQFR_b;
    uint32_t                                 RESERVED3[832];
    stc_intc_iselbr_bit_t                    ISELBR24_b;
    stc_intc_iselbr_bit_t                    ISELBR25_b;
    stc_intc_iselbr_bit_t                    ISELBR26_b;
    stc_intc_iselbr_bit_t                    ISELBR27_b;
    stc_intc_iselbr_bit_t                    ISELBR28_b;
    stc_intc_iselbr_bit_t                    ISELBR29_b;
    stc_intc_iselbr_bit_t                    ISELBR30_b;
    stc_intc_iselbr_bit_t                    ISELBR31_b;
} bCM_INTC_TypeDef;

typedef struct {
    stc_pwc_stpmcr_bit_t                     STPMCR_b;
    uint32_t                                 RESERVED0[24];
    stc_pwc_pwrc_bit_t                       PWRC_b;
    uint32_t                                 RESERVED1[56];
    stc_pwc_ramcr_bit_t                      RAMCR_b;
    uint32_t                                 RESERVED2[24];
    stc_pwc_lvdcsr_bit_t                     LVDCSR_b;
    uint32_t                                 RESERVED3[120];
    stc_pwc_fprc_bit_t                       FPRC_b;
    uint32_t                                 RESERVED4[240];
    stc_pwc_dbgc_bit_t                       DBGC_b;
} bCM_PWC_TypeDef;

typedef struct {
    stc_rmu_rstf0_bit_t                      RSTF0_b;
} bCM_RMU_TypeDef;

typedef struct {
    uint32_t                                 RESERVED0[32];
    stc_spi_cr1_bit_t                        CR1_b;
    uint32_t                                 RESERVED1[32];
    stc_spi_cfg1_bit_t                       CFG1_b;
    uint32_t                                 RESERVED2[32];
    stc_spi_sr_bit_t                         SR_b;
    stc_spi_cfg2_bit_t                       CFG2_b;
} bCM_SPI_TypeDef;

typedef struct {
    stc_swdt_cr_bit_t                        CR_b;
    stc_swdt_sr_bit_t                        SR_b;
} bCM_SWDT_TypeDef;

typedef struct {
    uint32_t                                 RESERVED0[128];
    stc_tmr0_bconr_bit_t                     BCONR_b;
    stc_tmr0_stflr_bit_t                     STFLR_b;
} bCM_TMR0_TypeDef;

typedef struct {
    uint32_t                                 RESERVED0[1024];
    stc_tmrb_bcstrl_bit_t                    BCSTRL_b;
    stc_tmrb_bcstrh_bit_t                    BCSTRH_b;
    uint32_t                                 RESERVED1[16];
    stc_tmrb_hconr_bit_t                     HCONR_b;
    uint32_t                                 RESERVED2[16];
    stc_tmrb_hcupr_bit_t                     HCUPR_b;
    uint32_t                                 RESERVED3[16];
    stc_tmrb_hcdor_bit_t                     HCDOR_b;
    uint32_t                                 RESERVED4[16];
    stc_tmrb_iconr_bit_t                     ICONR_b;
    uint32_t                                 RESERVED5[16];
    stc_tmrb_econr_bit_t                     ECONR_b;
    uint32_t                                 RESERVED6[48];
    stc_tmrb_stflr_bit_t                     STFLR_b;
    uint32_t                                 RESERVED7[784];
    stc_tmrb_cconr_bit_t                     CCONR_b;
    uint32_t                                 RESERVED8[496];
    stc_tmrb_pconr_bit_t                     PCONR_b;
} bCM_TMRB_TypeDef;

typedef struct {
    stc_usart_sr_bit_t                       SR_b;
    stc_usart_tdr_bit_t                      TDR_b;
    uint32_t                                 RESERVED0[48];
    stc_usart_cr1_bit_t                      CR1_b;
    stc_usart_cr2_bit_t                      CR2_b;
    stc_usart_cr3_bit_t                      CR3_b;
} bCM_USART_TypeDef;


/******************************************************************************/
/*      Device Specific Peripheral bit_band declaration & memory map          */
/******************************************************************************/
#define bCM_ADC                              ((bCM_ADC_TypeDef *)0x42170000UL)
#define bCM_AOS                              ((bCM_AOS_TypeDef *)0x42018000UL)
#define bCM_CMU                              ((bCM_CMU_TypeDef *)0x42288000UL)
#define bCM_CRC                              ((bCM_CRC_TypeDef *)0x422A8000UL)
#define bCM_CTC                              ((bCM_CTC_TypeDef *)0x42000000UL)
#define bCM_DBGC                             ((bCM_DBGC_TypeDef *)0x422A0000UL)
#define bCM_EFM                              ((bCM_EFM_TypeDef *)0x42010000UL)
#define bCM_GPIO                             ((bCM_GPIO_TypeDef *)0x42270000UL)
#define bCM_I2C                              ((bCM_I2C_TypeDef *)0x42090000UL)
#define bCM_INTC                             ((bCM_INTC_TypeDef *)0x42220000UL)
#define bCM_PWC                              ((bCM_PWC_TypeDef *)0x42280000UL)
#define bCM_RMU                              ((bCM_RMU_TypeDef *)0x42282000UL)
#define bCM_SPI                              ((bCM_SPI_TypeDef *)0x42070000UL)
#define bCM_SWDT                             ((bCM_SWDT_TypeDef *)0x42198000UL)
#define bCM_TMR0                             ((bCM_TMR0_TypeDef *)0x420B0000UL)
#define bCM_TMRB_1                           ((bCM_TMRB_TypeDef *)0x420F0000UL)
#define bCM_TMRB_2                           ((bCM_TMRB_TypeDef *)0x420F8000UL)
#define bCM_TMRB_3                           ((bCM_TMRB_TypeDef *)0x42100000UL)
#define bCM_TMRB_4                           ((bCM_TMRB_TypeDef *)0x42108000UL)
#define bCM_TMRB_5                           ((bCM_TMRB_TypeDef *)0x42110000UL)
#define bCM_TMRB_6                           ((bCM_TMRB_TypeDef *)0x42118000UL)
#define bCM_TMRB_7                           ((bCM_TMRB_TypeDef *)0x42120000UL)
#define bCM_TMRB_8                           ((bCM_TMRB_TypeDef *)0x42128000UL)
#define bCM_USART1                           ((bCM_USART_TypeDef *)0x42030000UL)
#define bCM_USART2                           ((bCM_USART_TypeDef *)0x42038000UL)
#define bCM_USART3                           ((bCM_USART_TypeDef *)0x42040000UL)
#define bCM_USART4                           ((bCM_USART_TypeDef *)0x42048000UL)


#ifdef __cplusplus
}
#endif

#endif /* __HC32F120F6TA_H__ */
