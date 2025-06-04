/**************************************************************************//**
 * @file     sys.h
 * @version  V0.10
 * $Revision: 4 $
 * $Date: 20/06/09 8:08p $
 * @brief    M030G Series SYS Driver Header File
 *
 * @note
 * SPDX-License-Identifier: Apache-2.0
 * Copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __SYS_H__
#define __SYS_H__

#ifdef __cplusplus
extern "C"
{
#endif

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup SYS_Driver SYS Driver
  @{
*/

/** @addtogroup SYS_EXPORTED_CONSTANTS SYS Exported Constants
  @{
*/

/*---------------------------------------------------------------------------------------------------------*/
/*  Module Reset Control Resister constant definitions.                                                    */
/*---------------------------------------------------------------------------------------------------------*/
#define PDMA_RST    ((0x0<<24)|SYS_IPRST0_PDMARST_Pos)      /*!< PDMA  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define CRC_RST     ((0x0<<24)|SYS_IPRST0_CRCRST_Pos)       /*!< CRC   reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */

#define GPIO_RST    ((0x4<<24)|SYS_IPRST1_GPIORST_Pos)      /*!< GPIO  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define TMR0_RST    ((0x4<<24)|SYS_IPRST1_TMR0RST_Pos)      /*!< TMR0  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define TMR1_RST    ((0x4<<24)|SYS_IPRST1_TMR1RST_Pos)      /*!< TMR1  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define TMR2_RST    ((0x4<<24)|SYS_IPRST1_TMR2RST_Pos)      /*!< TMR2  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define TMR3_RST    ((0x4<<24)|SYS_IPRST1_TMR3RST_Pos)      /*!< TMR3  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define I2C0_RST    ((0x4<<24)|SYS_IPRST1_I2C0RST_Pos)      /*!< I2C0  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define I2C1_RST    ((0x4<<24)|SYS_IPRST1_I2C1RST_Pos)      /*!< I2C1  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define SPI0_RST    ((0x4<<24)|SYS_IPRST1_SPI0RST_Pos)      /*!< SPI0  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define UART0_RST   ((0x4<<24)|SYS_IPRST1_UART0RST_Pos)     /*!< UART0 reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define ADC_RST     ((0x4<<24)|SYS_IPRST1_ADCRST_Pos)       /*!< ADC   reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */

#define DAC01_RST   ((0x8<<24)|SYS_IPRST2_DAC01RST_Pos)     /*!< DAC01 reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define DAC23_RST   ((0x8<<24)|SYS_IPRST2_DAC23RST_Pos)     /*!< DAC23 reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define BPWM_RST    ((0x8<<24)|SYS_IPRST2_BPWMRST_Pos)      /*!< BPWM  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define MANCH_RST   ((0x8<<24)|SYS_IPRST2_MANCHRST_Pos)     /*!< MANCH reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define TMR4_RST    ((0x8<<24)|SYS_IPRST2_TMR4RST_Pos)      /*!< TMR4  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define TMR5_RST    ((0x8<<24)|SYS_IPRST2_TMR5RST_Pos)      /*!< TMR5  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define TS_RST      ((0x8<<24)|SYS_IPRST2_TSRST_Pos)        /*!< TS    reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  Brown Out Detector Threshold Voltage Selection constant definitions.                                   */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_BODCTL_BOD_INTERRUPT_EN     (0UL<<SYS_BODCTL_BODRSTEN_Pos)      /*!< Brown-out Interrupt Enable                             \hideinitializer */
#define SYS_BODCTL_BOD_RST_EN           (1UL<<SYS_BODCTL_BODRSTEN_Pos)      /*!< Brown-out Reset Enable                                 \hideinitializer */

#define SYS_BODCTL_BODVL_2_5V           (0x0UL<<SYS_BODCTL_BODVL_Pos)       /*!< Setting Brown Out Detector Threshold Voltage as 2.5V   \hideinitializer */
#define SYS_BODCTL_BODVL_2_7V           (0x1UL<<SYS_BODCTL_BODVL_Pos)       /*!< Setting Brown Out Detector Threshold Voltage as 2.7V   \hideinitializer */

#define SYS_BODCTL_LVRDGSEL_0HCLK       (0x0UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time Without de-glitch function.  \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_64HCLK      (0x1UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 64HCLK           \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_128HCLK     (0x2UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 128HCLK          \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_256HCLK     (0x3UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 256HCLK          \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_512HCLK     (0x4UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 512HCLK          \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_1024HCLK    (0x5UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 1024HCLK         \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_2048HCLK    (0x6UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 2048HCLK         \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_4096HCLK    (0x7UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 4096HCLK         \hideinitializer */

#define SYS_BODCTL_BODDGSEL_0HCLK       (0x0UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is sampled by RC10K clock.   \hideinitializer */
#define SYS_BODCTL_BODDGSEL_64HCLK      (0x1UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 64HCLK           \hideinitializer */
#define SYS_BODCTL_BODDGSEL_128HCLK     (0x2UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 128HCLK          \hideinitializer */
#define SYS_BODCTL_BODDGSEL_256HCLK     (0x3UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 256HCLK          \hideinitializer */
#define SYS_BODCTL_BODDGSEL_512HCLK     (0x4UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 512HCLK          \hideinitializer */
#define SYS_BODCTL_BODDGSEL_1024HCLK    (0x5UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 1024HCLK         \hideinitializer */
#define SYS_BODCTL_BODDGSEL_2048HCLK    (0x6UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 2048HCLK         \hideinitializer */
#define SYS_BODCTL_BODDGSEL_4096HCLK    (0x7UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 4096HCLK         \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  VREFCTL constant definitions. (Write-Protection Register)                                              */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_VREFCTL_VREF_2_0V           (0x0UL << SYS_VREFCTL_VREFSEL_Pos)  /*!< Vref = 2.048V  \hideinitializer */
#define SYS_VREFCTL_VREF_2_5V           (0x1UL << SYS_VREFCTL_VREFSEL_Pos)  /*!< Vref = 2.5V    \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  Multi-Function constant definitions.                                                                   */
/*---------------------------------------------------------------------------------------------------------*/

/* How to use below #define?

Example: If user want to set PD.3 as UART0_TXD and PD.2 as UART0_RXD in initial function,
         user can issue following command to achieve it.

         SYS->GPD_MFPL = (SYS->GPD_MFPL & ~SYS_GPD_MFPL_PD2MFP_Msk) | SYS_GPD_MFPL_PD2MFP_UART0_RXD;
         SYS->GPD_MFPL = (SYS->GPD_MFPL & ~SYS_GPD_MFPL_PD3MFP_Msk) | SYS_GPD_MFPL_PD3MFP_UART0_TXD;
*/
/* PA.0 MFP */
#define SYS_GPA_MFPL_PA0MFP_GPIO        (0x00UL<<SYS_GPA_MFPL_PA0MFP_Pos)   /*!< GPA_MFPL PA0 setting for GPIO          \hideinitializer */
#define SYS_GPA_MFPL_PA0MFP_DAC0_OUT    (0x01UL<<SYS_GPA_MFPL_PA0MFP_Pos)   /*!< GPA_MFPL PA0 setting for DAC0_OUT      \hideinitializer */
#define SYS_GPA_MFPL_PA0MFP_SPI0_MOSI   (0x04UL<<SYS_GPA_MFPL_PA0MFP_Pos)   /*!< GPA_MFPL PA0 setting for SPI0_MOSI     \hideinitializer */
#define SYS_GPA_MFPL_PA0MFP_UART0_RXD   (0x07UL<<SYS_GPA_MFPL_PA0MFP_Pos)   /*!< GPA_MFPL PA0 setting for UART0_RXD     \hideinitializer */
#define SYS_GPA_MFPL_PA0MFP_BPWM1_CH0   (0x0CUL<<SYS_GPA_MFPL_PA0MFP_Pos)   /*!< GPA_MFPL PA0 setting for BPWM1_CH0     \hideinitializer */
#define SYS_GPA_MFPL_PA0MFP_BPWM1_CH4   (0x0FUL<<SYS_GPA_MFPL_PA0MFP_Pos)   /*!< GPA_MFPL PA0 setting for BPWM1_CH4     \hideinitializer */

/* PA.1 MFP */
#define SYS_GPA_MFPL_PA1MFP_GPIO        (0x00UL<<SYS_GPA_MFPL_PA1MFP_Pos)   /*!< GPA_MFPL PA1 setting for GPIO          \hideinitializer */
#define SYS_GPA_MFPL_PA1MFP_DAC1_OUT    (0x01UL<<SYS_GPA_MFPL_PA1MFP_Pos)   /*!< GPA_MFPL PA1 setting for DAC1_OUT      \hideinitializer */
#define SYS_GPA_MFPL_PA1MFP_SPI0_MISO   (0x04UL<<SYS_GPA_MFPL_PA1MFP_Pos)   /*!< GPA_MFPL PA1 setting for SPI0_MISO     \hideinitializer */
#define SYS_GPA_MFPL_PA1MFP_UART0_TXD   (0x07UL<<SYS_GPA_MFPL_PA1MFP_Pos)   /*!< GPA_MFPL PA1 setting for UART0_TXD     \hideinitializer */
#define SYS_GPA_MFPL_PA1MFP_BPWM1_CH1   (0x0CUL<<SYS_GPA_MFPL_PA1MFP_Pos)   /*!< GPA_MFPL PA1 setting for BPWM1_CH1     \hideinitializer */
#define SYS_GPA_MFPL_PA1MFP_MANCH_RXD   (0x0FUL<<SYS_GPA_MFPL_PA1MFP_Pos)   /*!< GPA_MFPL PA1 setting for MANCH_RXD     \hideinitializer */

/* PA.2 MFP */
#define SYS_GPA_MFPL_PA2MFP_GPIO        (0x00UL<<SYS_GPA_MFPL_PA2MFP_Pos)   /*!< GPA_MFPL PA2 setting for GPIO          \hideinitializer */
#define SYS_GPA_MFPL_PA2MFP_DAC2_OUT    (0x01UL<<SYS_GPA_MFPL_PA2MFP_Pos)   /*!< GPA_MFPL PA2 setting for DAC2_OUT      \hideinitializer */
#define SYS_GPA_MFPL_PA2MFP_SPI0_CLK    (0x04UL<<SYS_GPA_MFPL_PA2MFP_Pos)   /*!< GPA_MFPL PA2 setting for SPI0_CLK      \hideinitializer */
#define SYS_GPA_MFPL_PA2MFP_I2C0_SMBSUS (0x07UL<<SYS_GPA_MFPL_PA2MFP_Pos)   /*!< GPA_MFPL PA2 setting for I2C0_SMBSUS   \hideinitializer */
#define SYS_GPA_MFPL_PA2MFP_I2C1_SDA    (0x09UL<<SYS_GPA_MFPL_PA2MFP_Pos)   /*!< GPA_MFPL PA2 setting for I2C1_SDA      \hideinitializer */
#define SYS_GPA_MFPL_PA2MFP_BPWM1_CH2   (0x0CUL<<SYS_GPA_MFPL_PA2MFP_Pos)   /*!< GPA_MFPL PA2 setting for BPWM1_CH2     \hideinitializer */
#define SYS_GPA_MFPL_PA2MFP_MANCH_TXD   (0x0FUL<<SYS_GPA_MFPL_PA2MFP_Pos)   /*!< GPA_MFPL PA2 setting for MANCH_TXD     \hideinitializer */

/* PA.3 MFP */
#define SYS_GPA_MFPL_PA3MFP_GPIO        (0x00UL<<SYS_GPA_MFPL_PA3MFP_Pos)   /*!< GPA_MFPL PA3 setting for GPIO          \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_DAC3_OUT    (0x01UL<<SYS_GPA_MFPL_PA3MFP_Pos)   /*!< GPA_MFPL PA3 setting for DAC3_OUT      \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_SPI0_SS     (0x04UL<<SYS_GPA_MFPL_PA3MFP_Pos)   /*!< GPA_MFPL PA3 setting for SPI0_SS       \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_I2C0_SMBAL  (0x07UL<<SYS_GPA_MFPL_PA3MFP_Pos)   /*!< GPA_MFPL PA3 setting for I2C0_SMBAL    \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_I2C1_SCL    (0x09UL<<SYS_GPA_MFPL_PA3MFP_Pos)   /*!< GPA_MFPL PA3 setting for I2C1_SCL      \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_BPWM1_CH3   (0x0CUL<<SYS_GPA_MFPL_PA3MFP_Pos)   /*!< GPA_MFPL PA3 setting for BPWM1_CH3     \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_CLKO        (0x0EUL<<SYS_GPA_MFPL_PA3MFP_Pos)   /*!< GPB_MFPL PA3 setting for CLKO          \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_BPWM1_CH5   (0x0FUL<<SYS_GPA_MFPL_PA3MFP_Pos)   /*!< GPA_MFPL PA3 setting for BPWM1_CH5     \hideinitializer */

/* PA.12 MFP */
#define SYS_GPA_MFPH_PA12MFP_GPIO       (0x00UL<<SYS_GPA_MFPH_PA12MFP_Pos)  /*!< GPA_MFPH PA12 setting for GPIO         \hideinitializer */
#define SYS_GPA_MFPH_PA12MFP_I2C1_SCL   (0x04UL<<SYS_GPA_MFPH_PA12MFP_Pos)  /*!< GPA_MFPH PA12 setting for I2C1_SCL     \hideinitializer */
#define SYS_GPA_MFPH_PA12MFP_BPWM1_CH2  (0x0BUL<<SYS_GPA_MFPH_PA12MFP_Pos)  /*!< GPA_MFPH PA12 setting for BPWM1_CH2    \hideinitializer */
#define SYS_GPA_MFPH_PA12MFP_TM4        (0x0EUL<<SYS_GPA_MFPH_PA12MFP_Pos)  /*!< GPA_MFPH PA12 setting for TM4          \hideinitializer */

/* PA.13 MFP */
#define SYS_GPA_MFPH_PA13MFP_GPIO       (0x00UL<<SYS_GPA_MFPH_PA13MFP_Pos)  /*!< GPA_MFPH PA13 setting for GPIO         \hideinitializer */
#define SYS_GPA_MFPH_PA13MFP_I2C1_SDA   (0x04UL<<SYS_GPA_MFPH_PA13MFP_Pos)  /*!< GPA_MFPH PA13 setting for I2C1_SDA     \hideinitializer */
#define SYS_GPA_MFPH_PA13MFP_BPWM1_CH3  (0x0BUL<<SYS_GPA_MFPH_PA13MFP_Pos)  /*!< GPA_MFPH PA13 setting for BPWM1_CH3    \hideinitializer */
#define SYS_GPA_MFPH_PA13MFP_TM5        (0x0EUL<<SYS_GPA_MFPH_PA13MFP_Pos)  /*!< GPA_MFPH PA13 setting for TM5          \hideinitializer */

/* PA.14 MFP */
#define SYS_GPA_MFPH_PA14MFP_GPIO       (0x00UL<<SYS_GPA_MFPH_PA14MFP_Pos)  /*!< GPA_MFPH PA14 setting for GPIO         \hideinitializer */
#define SYS_GPA_MFPH_PA14MFP_UART0_TXD  (0x03UL<<SYS_GPA_MFPH_PA14MFP_Pos)  /*!< GPA_MFPH PA14 setting for UART0_TXD    \hideinitializer */
#define SYS_GPA_MFPH_PA14MFP_I2C1_SCL   (0x04UL<<SYS_GPA_MFPH_PA14MFP_Pos)  /*!< GPA_MFPH PA14 setting for I2C1_SCL     \hideinitializer */
#define SYS_GPA_MFPH_PA14MFP_BPWM1_CH4  (0x0BUL<<SYS_GPA_MFPH_PA14MFP_Pos)  /*!< GPA_MFPH PA14 setting for BPWM1_CH4    \hideinitializer */
#define SYS_GPA_MFPH_PA14MFP_TM4_EXT    (0x0EUL<<SYS_GPA_MFPH_PA14MFP_Pos)  /*!< GPA_MFPH PA14 setting for TM4_EXT      \hideinitializer */

/* PA.15 MFP */
#define SYS_GPA_MFPH_PA15MFP_GPIO       (0x00UL<<SYS_GPA_MFPH_PA15MFP_Pos)  /*!< GPA_MFPH PA15 setting for GPIO         \hideinitializer */
#define SYS_GPA_MFPH_PA15MFP_UART0_RXD  (0x03UL<<SYS_GPA_MFPH_PA15MFP_Pos)  /*!< GPA_MFPH PA15 setting for UART0_RXD    \hideinitializer */
#define SYS_GPA_MFPH_PA15MFP_BPWM1_CH5  (0x0BUL<<SYS_GPA_MFPH_PA15MFP_Pos)  /*!< GPA_MFPH PA15 setting for BPWM1_CH5    \hideinitializer */
#define SYS_GPA_MFPH_PA15MFP_TM5_EXT    (0x0EUL<<SYS_GPA_MFPH_PA15MFP_Pos)  /*!< GPA_MFPH PA15 setting for TM5_EXT      \hideinitializer */

/* PB.0 MFP */
#define SYS_GPB_MFPL_PB0MFP_GPIO        (0x00UL<<SYS_GPB_MFPL_PB0MFP_Pos)   /*!< GPB_MFPL PB0 setting for GPIO          \hideinitializer */
#define SYS_GPB_MFPL_PB0MFP_ADC0_CH0    (0x01UL<<SYS_GPB_MFPL_PB0MFP_Pos)   /*!< GPB_MFPL PB0 setting for ADC0_CH0      \hideinitializer */
#define SYS_GPB_MFPL_PB0MFP_I2C1_SDA    (0x09UL<<SYS_GPB_MFPL_PB0MFP_Pos)   /*!< GPB_MFPL PB0 setting for I2C1_SDA      \hideinitializer */

/* PB.1 MFP */
#define SYS_GPB_MFPL_PB1MFP_GPIO        (0x00UL<<SYS_GPB_MFPL_PB1MFP_Pos)   /*!< GPB_MFPL PB1 setting for GPIO          \hideinitializer */
#define SYS_GPB_MFPL_PB1MFP_ADC0_CH1    (0x01UL<<SYS_GPB_MFPL_PB1MFP_Pos)   /*!< GPB_MFPL PB1 setting for ADC0_CH1      \hideinitializer */
#define SYS_GPB_MFPL_PB1MFP_UART0_RXD   (0x03UL<<SYS_GPB_MFPL_PB1MFP_Pos)   /*!< GPB_MFPL PB1 setting for UART0_RXD     \hideinitializer */
#define SYS_GPB_MFPL_PB1MFP_I2C1_SDA    (0x04UL<<SYS_GPB_MFPL_PB1MFP_Pos)   /*!< GPB_MFPL PB1 setting for I2C1_SDA      \hideinitializer */
#define SYS_GPB_MFPL_PB1MFP_I2C1_SCL    (0x09UL<<SYS_GPB_MFPL_PB1MFP_Pos)   /*!< GPB_MFPL PB1 setting for I2C1_SCL      \hideinitializer */
#define SYS_GPB_MFPL_PB1MFP_BPWM1_CH4   (0x0EUL<<SYS_GPB_MFPL_PB1MFP_Pos)   /*!< GPB_MFPL PB1 setting for BPWM1_CH4     \hideinitializer */

/* PB.2 MFP */
#define SYS_GPB_MFPL_PB2MFP_GPIO        (0x00UL<<SYS_GPB_MFPL_PB2MFP_Pos)   /*!< GPB_MFPL PB2 setting for GPIO          \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_ADC0_CH2    (0x01UL<<SYS_GPB_MFPL_PB2MFP_Pos)   /*!< GPB_MFPL PB2 setting for ADC0_CH2      \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_I2C1_SDA    (0x04UL<<SYS_GPB_MFPL_PB2MFP_Pos)   /*!< GPB_MFPL PB2 setting for I2C1_SDA      \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_TM5         (0x05UL<<SYS_GPB_MFPL_PB2MFP_Pos)   /*!< GPB_MFPL PB2 setting for TM5           \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_I2C1_SCL    (0x09UL<<SYS_GPB_MFPL_PB2MFP_Pos)   /*!< GPB_MFPL PB2 setting for I2C1_SCL      \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_BPWM1_CH3   (0x0AUL<<SYS_GPB_MFPL_PB2MFP_Pos)   /*!< GPB_MFPL PB2 setting for BPWM1_CH3     \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_TM1         (0x0CUL<<SYS_GPB_MFPL_PB2MFP_Pos)   /*!< GPB_MFPL PB2 setting for TM1           \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_MANCH_RXD   (0x0DUL<<SYS_GPB_MFPL_PB2MFP_Pos)   /*!< GPB_MFPL PB2 setting for MANCH_RXD     \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_TM3         (0x0EUL<<SYS_GPB_MFPL_PB2MFP_Pos)   /*!< GPB_MFPL PB2 setting for TM3           \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_INT3        (0x0FUL<<SYS_GPB_MFPL_PB2MFP_Pos)   /*!< GPB_MFPL PB2 setting for INT3          \hideinitializer */

/* PB.3 MFP */
#define SYS_GPB_MFPL_PB3MFP_GPIO        (0x00UL<<SYS_GPB_MFPL_PB3MFP_Pos)   /*!< GPB_MFPL PB3 setting for GPIO          \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_ADC0_CH3    (0x01UL<<SYS_GPB_MFPL_PB3MFP_Pos)   /*!< GPB_MFPL PB3 setting for ADC0_CH3      \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_I2C1_SCL    (0x04UL<<SYS_GPB_MFPL_PB3MFP_Pos)   /*!< GPB_MFPL PB3 setting for I2C1_SCL      \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_BPWM1_CH2   (0x0AUL<<SYS_GPB_MFPL_PB3MFP_Pos)   /*!< GPB_MFPL PB3 setting for BPWM1_CH2     \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_TM0         (0x0CUL<<SYS_GPB_MFPL_PB3MFP_Pos)   /*!< GPB_MFPL PB3 setting for TM0           \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_MANCH_TXD   (0x0DUL<<SYS_GPB_MFPL_PB3MFP_Pos)   /*!< GPB_MFPL PB3 setting for MANCH_TXD     \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_TM2         (0x0EUL<<SYS_GPB_MFPL_PB3MFP_Pos)   /*!< GPB_MFPL PB3 setting for TM2           \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_INT2        (0x0FUL<<SYS_GPB_MFPL_PB3MFP_Pos)   /*!< GPB_MFPL PB3 setting for INT2          \hideinitializer */

/* PB.4 MFP */
#define SYS_GPB_MFPL_PB4MFP_GPIO        (0x00UL<<SYS_GPB_MFPL_PB4MFP_Pos)   /*!< GPB_MFPL PB4 setting for GPIO          \hideinitializer */
#define SYS_GPB_MFPL_PB4MFP_ADC0_CH4    (0x01UL<<SYS_GPB_MFPL_PB4MFP_Pos)   /*!< GPB_MFPL PB4 setting for ADC0_CH4      \hideinitializer */
#define SYS_GPB_MFPL_PB4MFP_I2C0_SDA    (0x06UL<<SYS_GPB_MFPL_PB4MFP_Pos)   /*!< GPB_MFPL PB4 setting for I2C0_SDA      \hideinitializer */
#define SYS_GPB_MFPL_PB4MFP_TM1         (0x0EUL<<SYS_GPB_MFPL_PB4MFP_Pos)   /*!< GPB_MFPL PB4 setting for TM1           \hideinitializer */
#define SYS_GPB_MFPL_PB4MFP_INT1        (0x0FUL<<SYS_GPB_MFPL_PB4MFP_Pos)   /*!< GPB_MFPL PB4 setting for INT1          \hideinitializer */

/* PB.5 MFP */
#define SYS_GPB_MFPL_PB5MFP_GPIO        (0x00UL<<SYS_GPB_MFPL_PB5MFP_Pos)   /*!< GPB_MFPL PB5 setting for GPIO          \hideinitializer */
#define SYS_GPB_MFPL_PB5MFP_ADC0_CH5    (0x01UL<<SYS_GPB_MFPL_PB5MFP_Pos)   /*!< GPB_MFPL PB5 setting for ADC0_CH5      \hideinitializer */
#define SYS_GPB_MFPL_PB5MFP_I2C0_SCL    (0x06UL<<SYS_GPB_MFPL_PB5MFP_Pos)   /*!< GPB_MFPL PB5 setting for I2C0_SCL      \hideinitializer */
#define SYS_GPB_MFPL_PB5MFP_TM0         (0x0EUL<<SYS_GPB_MFPL_PB5MFP_Pos)   /*!< GPB_MFPL PB5 setting for TM0           \hideinitializer */
#define SYS_GPB_MFPL_PB5MFP_INT0        (0x0FUL<<SYS_GPB_MFPL_PB5MFP_Pos)   /*!< GPB_MFPL PB5 setting for INT0          \hideinitializer */

/* PB.6 MFP */
#define SYS_GPB_MFPL_PB6MFP_GPIO        (0x00UL<<SYS_GPB_MFPL_PB6MFP_Pos)   /*!< GPB_MFPL PB6 setting for GPIO          \hideinitializer */
#define SYS_GPB_MFPL_PB6MFP_ADC0_CH6    (0x01UL<<SYS_GPB_MFPL_PB6MFP_Pos)   /*!< GPB_MFPL PB6 setting for ADC0_CH6      \hideinitializer */
#define SYS_GPB_MFPL_PB6MFP_MANCH_RXD   (0x09UL<<SYS_GPB_MFPL_PB6MFP_Pos)   /*!< GPB_MFPL PB6 setting for MANCH_RXD     \hideinitializer */
#define SYS_GPB_MFPL_PB6MFP_BPWM1_CH5   (0x0AUL<<SYS_GPB_MFPL_PB6MFP_Pos)   /*!< GPB_MFPL PB6 setting for BPWM1_CH5     \hideinitializer */
#define SYS_GPB_MFPL_PB6MFP_INT4        (0x0DUL<<SYS_GPB_MFPL_PB6MFP_Pos)   /*!< GPB_MFPL PB6 setting for INT4          \hideinitializer */

/* PB.7 MFP */
#define SYS_GPB_MFPL_PB7MFP_GPIO        (0x00UL<<SYS_GPB_MFPL_PB7MFP_Pos)   /*!< GPB_MFPL PB7 setting for GPIO          \hideinitializer */
#define SYS_GPB_MFPL_PB7MFP_ADC0_CH7    (0x01UL<<SYS_GPB_MFPL_PB7MFP_Pos)   /*!< GPB_MFPL PB7 setting for ADC0_CH7      \hideinitializer */
#define SYS_GPB_MFPL_PB7MFP_MANCH_TXD   (0x09UL<<SYS_GPB_MFPL_PB7MFP_Pos)   /*!< GPB_MFPL PB7 setting for MANCH_TXD     \hideinitializer */
#define SYS_GPB_MFPL_PB7MFP_BPWM1_CH4   (0x0AUL<<SYS_GPB_MFPL_PB7MFP_Pos)   /*!< GPB_MFPL PB7 setting for BPWM1_CH4     \hideinitializer */
#define SYS_GPB_MFPL_PB7MFP_INT5        (0x0DUL<<SYS_GPB_MFPL_PB7MFP_Pos)   /*!< GPB_MFPL PB7 setting for INT5          \hideinitializer */

/* PB.8 MFP */
#define SYS_GPB_MFPH_PB8MFP_GPIO        (0x00UL<<SYS_GPB_MFPH_PB8MFP_Pos)   /*!< GPB_MFPH PB8 setting for GPIO          \hideinitializer */
#define SYS_GPB_MFPH_PB8MFP_ADC0_CH8    (0x01UL<<SYS_GPB_MFPH_PB8MFP_Pos)   /*!< GPB_MFPH PB8 setting for ADC0_CH8      \hideinitializer */
#define SYS_GPB_MFPH_PB8MFP_UART0_RXD   (0x05UL<<SYS_GPB_MFPH_PB8MFP_Pos)   /*!< GPB_MFPH PB8 setting for UART0_RXD     \hideinitializer */
#define SYS_GPB_MFPH_PB8MFP_BPWM1_CH3   (0x0AUL<<SYS_GPB_MFPH_PB8MFP_Pos)   /*!< GPB_MFPH PB8 setting for BPWM1_CH3     \hideinitializer */

/* PB.9 MFP */
#define SYS_GPB_MFPH_PB9MFP_GPIO        (0x00UL<<SYS_GPB_MFPH_PB9MFP_Pos)   /*!< GPB_MFPH PB9 setting for GPIO          \hideinitializer */
#define SYS_GPB_MFPH_PB9MFP_ADC0_CH9    (0x01UL<<SYS_GPB_MFPH_PB9MFP_Pos)   /*!< GPB_MFPH PB9 setting for ADC0_CH9      \hideinitializer */
#define SYS_GPB_MFPH_PB9MFP_UART0_TXD   (0x05UL<<SYS_GPB_MFPH_PB9MFP_Pos)   /*!< GPB_MFPH PB9 setting for UART0_TXD     \hideinitializer */
#define SYS_GPB_MFPH_PB9MFP_BPWM1_CH2   (0x0AUL<<SYS_GPB_MFPH_PB9MFP_Pos)   /*!< GPB_MFPH PB9 setting for BPWM1_CH2     \hideinitializer */

/* PB.10 MFP */
#define SYS_GPB_MFPH_PB10MFP_GPIO       (0x00UL<<SYS_GPB_MFPH_PB10MFP_Pos)  /*!< GPB_MFPH PB10 setting for GPIO         \hideinitializer */
#define SYS_GPB_MFPH_PB10MFP_ADC0_CH10  (0x01UL<<SYS_GPB_MFPH_PB10MFP_Pos)  /*!< GPB_MFPH PB10 setting for ADC0_CH10    \hideinitializer */
#define SYS_GPB_MFPH_PB10MFP_UART0_nRTS (0x05UL<<SYS_GPB_MFPH_PB10MFP_Pos)  /*!< GPB_MFPH PB10 setting for UART0_nRTS   \hideinitializer */
#define SYS_GPB_MFPH_PB10MFP_I2C1_SDA   (0x07UL<<SYS_GPB_MFPH_PB10MFP_Pos)  /*!< GPB_MFPH PB10 setting for I2C1_SDA     \hideinitializer */
#define SYS_GPB_MFPH_PB10MFP_BPWM1_CH1  (0x0AUL<<SYS_GPB_MFPH_PB10MFP_Pos)  /*!< GPB_MFPH PB10 setting for BPWM1_CH1    \hideinitializer */

/* PB.11 MFP */
#define SYS_GPB_MFPH_PB11MFP_GPIO       (0x00UL<<SYS_GPB_MFPH_PB11MFP_Pos)  /*!< GPB_MFPH PB11 setting for GPIO         \hideinitializer */
#define SYS_GPB_MFPH_PB11MFP_ADC0_CH11  (0x01UL<<SYS_GPB_MFPH_PB11MFP_Pos)  /*!< GPB_MFPH PB11 setting for ADC0_CH11    \hideinitializer */
#define SYS_GPB_MFPH_PB11MFP_UART0_nCTS (0x05UL<<SYS_GPB_MFPH_PB11MFP_Pos)  /*!< GPB_MFPH PB11 setting for UART0_nCTS   \hideinitializer */
#define SYS_GPB_MFPH_PB11MFP_UART0_TXD  (0x06UL<<SYS_GPB_MFPH_PB11MFP_Pos)  /*!< GPB_MFPH PB11 setting for UART0_TXD    \hideinitializer */
#define SYS_GPB_MFPH_PB11MFP_I2C1_SCL   (0x07UL<<SYS_GPB_MFPH_PB11MFP_Pos)  /*!< GPB_MFPH PB11 setting for I2C1_SCL     \hideinitializer */
#define SYS_GPB_MFPH_PB11MFP_BPWM1_CH0  (0x0AUL<<SYS_GPB_MFPH_PB11MFP_Pos)  /*!< GPB_MFPH PB11 setting for BPWM1_CH0    \hideinitializer */
#define SYS_GPB_MFPH_PB11MFP_EXTCLK_IN  (0x0EUL<<SYS_GPB_MFPH_PB11MFP_Pos)  /*!< GPB_MFPH PB11 setting for EXTCLK_IN    \hideinitializer */
#define SYS_GPB_MFPH_PB11MFP_MANCH_RXD  (0x0FUL<<SYS_GPB_MFPH_PB11MFP_Pos)  /*!< GPB_MFPH PB11 setting for MANCH_RXD    \hideinitializer */

/* PB.12 MFP */
#define SYS_GPB_MFPH_PB12MFP_GPIO       (0x00UL<<SYS_GPB_MFPH_PB12MFP_Pos)  /*!< GPB_MFPH PB12 setting for GPIO         \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_ADC0_CH12  (0x01UL<<SYS_GPB_MFPH_PB12MFP_Pos)  /*!< GPB_MFPH PB12 setting for ADC0_CH12    \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_SPI0_MOSI  (0x04UL<<SYS_GPB_MFPH_PB12MFP_Pos)  /*!< GPB_MFPH PB12 setting for SPI0_MOSI    \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_UART0_RXD  (0x06UL<<SYS_GPB_MFPH_PB12MFP_Pos)  /*!< GPB_MFPH PB12 setting for UART0_RXD    \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_EXTCLK_IN  (0x09UL<<SYS_GPB_MFPH_PB12MFP_Pos)  /*!< GPB_MFPH PB12 setting for EXTCLK_IN    \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_TM5_EXT    (0x0AUL<<SYS_GPB_MFPH_PB12MFP_Pos)  /*!< GPB_MFPH PB12 setting for TM5_EXT      \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_BPWM1_CH2  (0x0CUL<<SYS_GPB_MFPH_PB12MFP_Pos)  /*!< GPB_MFPH PB12 setting for BPWM1_CH2    \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_TM3_EXT    (0x0DUL<<SYS_GPB_MFPH_PB12MFP_Pos)  /*!< GPB_MFPH PB12 setting for TM3_EXT      \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_TM1_EXT    (0x0EUL<<SYS_GPB_MFPH_PB12MFP_Pos)  /*!< GPB_MFPH PB12 setting for TM1_EXT      \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_MANCH_TXD  (0x0FUL<<SYS_GPB_MFPH_PB12MFP_Pos)  /*!< GPB_MFPH PB12 setting for MANCH_TXD    \hideinitializer */

/* PB.13 MFP */
#define SYS_GPB_MFPH_PB13MFP_GPIO       (0x00UL<<SYS_GPB_MFPH_PB13MFP_Pos)  /*!< GPB_MFPH PB13 setting for GPIO         \hideinitializer */
#define SYS_GPB_MFPH_PB13MFP_ADC0_CH13  (0x01UL<<SYS_GPB_MFPH_PB13MFP_Pos)  /*!< GPB_MFPH PB13 setting for ADC0_CH13    \hideinitializer */
#define SYS_GPB_MFPH_PB13MFP_SPI0_MISO  (0x04UL<<SYS_GPB_MFPH_PB13MFP_Pos)  /*!< GPB_MFPH PB13 setting for SPI0_MISO    \hideinitializer */
#define SYS_GPB_MFPH_PB13MFP_UART0_TXD  (0x06UL<<SYS_GPB_MFPH_PB13MFP_Pos)  /*!< GPB_MFPH PB13 setting for UART0_TXD    \hideinitializer */
#define SYS_GPB_MFPH_PB13MFP_TM4_EXT    (0x0AUL<<SYS_GPB_MFPH_PB13MFP_Pos)  /*!< GPB_MFPH PB13 setting for TM4_EXT      \hideinitializer */
#define SYS_GPB_MFPH_PB13MFP_TM2_EXT    (0x0DUL<<SYS_GPB_MFPH_PB13MFP_Pos)  /*!< GPB_MFPH PB13 setting for TM2_EXT      \hideinitializer */
#define SYS_GPB_MFPH_PB13MFP_TM0_EXT    (0x0EUL<<SYS_GPB_MFPH_PB13MFP_Pos)  /*!< GPB_MFPH PB13 setting for TM0_EXT      \hideinitializer */

/* PB.14 MFP */
#define SYS_GPB_MFPH_PB14MFP_GPIO       (0x00UL<<SYS_GPB_MFPH_PB14MFP_Pos)  /*!< GPB_MFPH PB14 setting for GPIO         \hideinitializer */
#define SYS_GPB_MFPH_PB14MFP_ADC0_CH14  (0x01UL<<SYS_GPB_MFPH_PB14MFP_Pos)  /*!< GPB_MFPH PB14 setting for ADC0_CH14    \hideinitializer */
#define SYS_GPB_MFPH_PB14MFP_SPI0_CLK   (0x04UL<<SYS_GPB_MFPH_PB14MFP_Pos)  /*!< GPB_MFPH PB14 setting for SPI0_CLK     \hideinitializer */
#define SYS_GPB_MFPH_PB14MFP_UART0_nRTS (0x06UL<<SYS_GPB_MFPH_PB14MFP_Pos)  /*!< GPB_MFPH PB14 setting for UART0_nRTS   \hideinitializer */
#define SYS_GPB_MFPH_PB14MFP_TM1_EXT    (0x0DUL<<SYS_GPB_MFPH_PB14MFP_Pos)  /*!< GPB_MFPH PB14 setting for TM1_EXT      \hideinitializer */
#define SYS_GPB_MFPH_PB14MFP_CLKO       (0x0EUL<<SYS_GPB_MFPH_PB14MFP_Pos)  /*!< GPB_MFPH PB14 setting for CLKO         \hideinitializer */

/* PB.15 MFP */
#define SYS_GPB_MFPH_PB15MFP_GPIO       (0x00UL<<SYS_GPB_MFPH_PB15MFP_Pos)  /*!< GPB_MFPH PB15 setting for GPIO         \hideinitializer */
#define SYS_GPB_MFPH_PB15MFP_ADC0_CH15  (0x01UL<<SYS_GPB_MFPH_PB15MFP_Pos)  /*!< GPB_MFPH PB15 setting for ADC0_CH15    \hideinitializer */
#define SYS_GPB_MFPH_PB15MFP_SPI0_SS    (0x04UL<<SYS_GPB_MFPH_PB15MFP_Pos)  /*!< GPB_MFPH PB15 setting for SPI0_SS      \hideinitializer */
#define SYS_GPB_MFPH_PB15MFP_UART0_nCTS (0x06UL<<SYS_GPB_MFPH_PB15MFP_Pos)  /*!< GPB_MFPH PB15 setting for UART0_nCTS   \hideinitializer */
#define SYS_GPB_MFPH_PB15MFP_TM0_EXT    (0x0DUL<<SYS_GPB_MFPH_PB15MFP_Pos)  /*!< GPB_MFPH PB15 setting for TM0_EXT      \hideinitializer */

/* PC.1 MFP */
#define SYS_GPC_MFPL_PC1MFP_GPIO        (0x00UL<<SYS_GPC_MFPL_PC1MFP_Pos)   /*!< GPC_MFPL PC1 setting for GPIO          \hideinitializer */
#define SYS_GPC_MFPL_PC1MFP_I2C1_SCL    (0x04UL<<SYS_GPC_MFPL_PC1MFP_Pos)   /*!< GPC_MFPL PC1 setting for I2C1_SCL      \hideinitializer */
#define SYS_GPC_MFPL_PC1MFP_I2C0_SCL    (0x09UL<<SYS_GPC_MFPL_PC1MFP_Pos)   /*!< GPC_MFPL PC1 setting for I2C0_SCL      \hideinitializer */
#define SYS_GPC_MFPL_PC1MFP_ADC0_ST     (0x0FUL<<SYS_GPC_MFPL_PC1MFP_Pos)   /*!< GPC_MFPL PC1 setting for ADC0_ST       \hideinitializer */

/* PF.0 MFP */
#define SYS_GPF_MFPL_PF0MFP_GPIO        (0x00UL<<SYS_GPF_MFPL_PF0MFP_Pos)   /*!< GPF_MFPL PF0 setting for GPIO          \hideinitializer */
#define SYS_GPF_MFPL_PF0MFP_ICE_DAT     (0x0EUL<<SYS_GPF_MFPL_PF0MFP_Pos)   /*!< GPF_MFPL PF0 setting for ICE_DAT       \hideinitializer */

/* PF.2 MFP */
#define SYS_GPF_MFPL_PF2MFP_GPIO        (0x00UL<<SYS_GPF_MFPL_PF2MFP_Pos)   /*!< GPF_MFPL PF2 setting for GPIO          \hideinitializer */
#define SYS_GPF_MFPL_PF2MFP_UART0_RXD   (0x03UL<<SYS_GPF_MFPL_PF2MFP_Pos)   /*!< GPF_MFPL PF2 setting for UART0_RXD     \hideinitializer */
#define SYS_GPF_MFPL_PF2MFP_I2C0_SDA    (0x04UL<<SYS_GPF_MFPL_PF2MFP_Pos)   /*!< GPF_MFPL PF2 setting for I2C0_SDA      \hideinitializer */
#define SYS_GPF_MFPL_PF2MFP_BPWM1_CH1   (0x0BUL<<SYS_GPF_MFPL_PF2MFP_Pos)   /*!< GPF_MFPL PF2 setting for BPWM1_CH1     \hideinitializer */

/* PF.3 MFP */
#define SYS_GPF_MFPL_PF3MFP_GPIO        (0x00UL<<SYS_GPF_MFPL_PF3MFP_Pos)   /*!< GPF_MFPL PF3 setting for GPIO          \hideinitializer */
#define SYS_GPF_MFPL_PF3MFP_UART0_TXD   (0x03UL<<SYS_GPF_MFPL_PF3MFP_Pos)   /*!< GPF_MFPL PF3 setting for UART0_TXD     \hideinitializer */
#define SYS_GPF_MFPL_PF3MFP_I2C0_SCL    (0x04UL<<SYS_GPF_MFPL_PF3MFP_Pos)   /*!< GPF_MFPL PF3 setting for I2C0_SCL      \hideinitializer */
#define SYS_GPF_MFPL_PF3MFP_EXTCLK_IN   (0x09UL<<SYS_GPF_MFPL_PF3MFP_Pos)   /*!< GPF_MFPL PF3 setting for EXTCLK_IN     \hideinitializer */
#define SYS_GPF_MFPL_PF3MFP_BPWM1_CH0   (0x0BUL<<SYS_GPF_MFPL_PF3MFP_Pos)   /*!< GPF_MFPL PF3 setting for BPWM1_CH0     \hideinitializer */

/*@}*/ /* end of group SYS_EXPORTED_CONSTANTS */

/** @addtogroup SYS_EXPORTED_FUNCTIONS SYS Exported Functions
  @{
*/


/**
  * @brief      Clear Brown-out detector interrupt flag
  * @param      None
  * @return     None
  * @details    This macro clear Brown-out detector interrupt flag.
  * \hideinitializer
  */
#define SYS_CLEAR_BOD_INT_FLAG()        (SYS->BODCTL |= SYS_BODCTL_BODIF_Msk)

/**
  * @brief      Set Brown-out detector function to normal mode
  * @param      None
  * @return     None
  * @details    This macro set Brown-out detector to normal mode.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_CLEAR_BOD_LPM()             (SYS->BODCTL &= ~SYS_BODCTL_BODLPM_Msk)

/**
  * @brief      Disable Brown-out detector function
  * @param      None
  * @return     None
  * @details    This macro disable Brown-out detector function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_DISABLE_BOD()               (SYS->BODCTL &= ~SYS_BODCTL_BODEN_Msk)

/**
  * @brief      Enable Brown-out detector function
  * @param      None
  * @return     None
  * @details    This macro enable Brown-out detector function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_ENABLE_BOD()                (SYS->BODCTL |= SYS_BODCTL_BODEN_Msk)

/**
  * @brief      Get Brown-out detector interrupt flag
  * @param      None
  * @retval     0   Brown-out detect interrupt flag is not set.
  * @retval     >=1 Brown-out detect interrupt flag is set.
  * @details    This macro get Brown-out detector interrupt flag.
  * \hideinitializer
  */
#define SYS_GET_BOD_INT_FLAG()          (SYS->BODCTL & SYS_BODCTL_BODIF_Msk)

/**
  * @brief      Get Brown-out detector status
  * @param      None
  * @retval     0   System voltage is higher than BOD threshold voltage setting or BOD function is disabled.
  * @retval     >=1 System voltage is lower than BOD threshold voltage setting.
  * @details    This macro get Brown-out detector output status.
  *             If the BOD function is disabled, this function always return 0.
  * \hideinitializer
  */
#define SYS_GET_BOD_OUTPUT()            (SYS->BODCTL & SYS_BODCTL_BODOUT_Msk)

/**
  * @brief      Disable Brown-out detector reset function
  * @param      None
  * @return     None
  * @details    This macro disable Brown-out detector reset function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_DISABLE_BOD_RST()           (SYS->BODCTL &= ~SYS_BODCTL_BODRSTEN_Msk)

/**
  * @brief      Enable Brown-out detector reset function
  * @param      None
  * @return     None
  * @details    This macro enable Brown-out detect reset function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_ENABLE_BOD_RST()            (SYS->BODCTL |= SYS_BODCTL_BODRSTEN_Msk)

/**
  * @brief      Set Brown-out detector function low power mode
  * @param      None
  * @return     None
  * @details    This macro set Brown-out detector to low power mode.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_SET_BOD_LPM()               (SYS->BODCTL |= SYS_BODCTL_BODLPM_Msk)

/**
  * @brief      Set Brown-out detector voltage level
  * @param[in]  u32Level is Brown-out voltage level. Including :
  *             - \ref SYS_BODCTL_BODVL_2_5V
  *             - \ref SYS_BODCTL_BODVL_2_7V
  * @return     None
  * @details    This macro set Brown-out detector voltage level.
  *             The write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_SET_BOD_LEVEL(u32Level)     (SYS->BODCTL = (SYS->BODCTL & ~SYS_BODCTL_BODVL_Msk) | (u32Level))

/**
  * @brief      Get reset source is from Brown-out detector reset
  * @param      None
  * @retval     0   Previous reset source is not from Brown-out detector reset
  * @retval     >=1 Previous reset source is from Brown-out detector reset
  * @details    This macro get previous reset source is from Brown-out detect reset or not.
  * \hideinitializer
  */
#define SYS_IS_BOD_RST()                (SYS->RSTSTS & SYS_RSTSTS_BODRF_Msk)

/**
  * @brief      Get reset source is from CPU reset
  * @param      None
  * @retval     0   Previous reset source is not from CPU reset
  * @retval     >=1 Previous reset source is from CPU reset
  * @details    This macro get previous reset source is from CPU reset.
  * \hideinitializer
  */
#define SYS_IS_CPU_RST()                (SYS->RSTSTS & SYS_RSTSTS_CPURF_Msk)

/**
  * @brief      Get reset source is from LVR Reset
  * @param      None
  * @retval     0   Previous reset source is not from Low-Voltage-Reset
  * @retval     >=1 Previous reset source is from Low-Voltage-Reset
  * @details    This macro get previous reset source is from Low-Voltage-Reset.
  * \hideinitializer
  */
#define SYS_IS_LVR_RST()                (SYS->RSTSTS & SYS_RSTSTS_LVRF_Msk)

/**
  * @brief      Get reset source is from Power-on Reset
  * @param      None
  * @retval     0   Previous reset source is not from Power-on Reset
  * @retval     >=1 Previous reset source is from Power-on Reset
  * @details    This macro get previous reset source is from Power-on Reset.
  * \hideinitializer
  */
#define SYS_IS_POR_RST()                (SYS->RSTSTS & SYS_RSTSTS_PORF_Msk)

/**
  * @brief      Get reset source is from reset pin reset
  * @param      None
  * @retval     0   Previous reset source is not from reset pin reset
  * @retval     >=1 Previous reset source is from reset pin reset
  * @details    This macro get previous reset source is from reset pin reset.
  * \hideinitializer
  */
#define SYS_IS_RSTPIN_RST()             (SYS->RSTSTS & SYS_RSTSTS_PINRF_Msk)

/**
  * @brief      Get reset source is from system reset
  * @param      None
  * @retval     0   Previous reset source is not from system reset
  * @retval     >=1 Previous reset source is from system reset
  * @details    This macro get previous reset source is from system reset.
  * \hideinitializer
  */
#define SYS_IS_SYSTEM_RST()             (SYS->RSTSTS & SYS_RSTSTS_SYSRF_Msk)

/**
  * @brief      Get reset source is from watchdog timer or window watchdog timer reset
  * @param      None
  * @retval     0   Previous reset source is not from watchdog timer or window watchdog timer reset
  * @retval     >=1 Previous reset source is from watchdog timer or window watchdog timer reset
  * @details    This macro get previous reset source is from watchdog timer or window watchdog timer reset.
  * \hideinitializer
  */
#define SYS_IS_WDT_RST()                (SYS->RSTSTS & SYS_RSTSTS_WDTRF_Msk)

/**
  * @brief      Disable Low-Voltage-Reset function
  * @param      None
  * @return     None
  * @details    This macro disable Low-Voltage-Reset function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_DISABLE_LVR()               (SYS->BODCTL &= ~SYS_BODCTL_LVREN_Msk)

/**
  * @brief      Enable Low-Voltage-Reset function
  * @param      None
  * @return     None
  * @details    This macro enable Low-Voltage-Reset function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_ENABLE_LVR()                (SYS->BODCTL |= SYS_BODCTL_LVREN_Msk)

/**
  * @brief      Disable Power-on Reset function
  * @param      None
  * @return     None
  * @details    This macro disable Power-on Reset function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_DISABLE_POR()               (SYS->PORCTL = 0x5AA5)

/**
  * @brief      Enable Power-on Reset function
  * @param      None
  * @return     None
  * @details    This macro enable Power-on Reset function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_ENABLE_POR()                (SYS->PORCTL = 0)

/**
  * @brief      Clear reset source flag
  * @param[in]  u32RstSrc is reset source. Including :
  *             - \ref SYS_RSTSTS_PORF_Msk
  *             - \ref SYS_RSTSTS_PINRF_Msk
  *             - \ref SYS_RSTSTS_WDTRF_Msk
  *             - \ref SYS_RSTSTS_LVRF_Msk
  *             - \ref SYS_RSTSTS_BODRF_Msk
  *             - \ref SYS_RSTSTS_SYSRF_Msk
  *             - \ref SYS_RSTSTS_CPURF_Msk
  *             - \ref SYS_RSTSTS_CPULKRF_Msk
  * @return     None
  * @details    This macro clear reset source flag.
  * \hideinitializer
  */
#define SYS_CLEAR_RST_SOURCE(u32RstSrc) ((SYS->RSTSTS) = (u32RstSrc) )


/**
  * @brief      Disable register write-protection function
  * @param      None
  * @return     None
  * @details    This function disable register write-protection function.
  *             To unlock the protected register to allow write access.
  * \hideinitializer
  */
__STATIC_INLINE void SYS_UnlockReg(void)
{
    do {
        SYS->REGLCTL = 0x59;
        SYS->REGLCTL = 0x16;
        SYS->REGLCTL = 0x88;
    } while (SYS->REGLCTL == 0);
}

/**
  * @brief      Enable register write-protection function
  * @param      None
  * @return     None
  * @details    This function is used to enable register write-protection function.
  *             To lock the protected register to forbid write access.
  * \hideinitializer
  */
__STATIC_INLINE void SYS_LockReg(void)
{
    SYS->REGLCTL = 0;
}


void SYS_ClearResetSrc(uint32_t u32Src);
uint32_t SYS_GetBODStatus(void);
uint32_t SYS_GetResetSrc(void);
uint32_t SYS_IsRegLocked(void);
uint32_t SYS_ReadPDID(void);
void SYS_ResetChip(void);
void SYS_ResetCPU(void);
void SYS_ResetModule(uint32_t u32ModuleIndex);
void SYS_EnableBOD(int32_t i32Mode, uint32_t u32BODLevel);
void SYS_DisableBOD(void);
void SYS_SetVRef(uint32_t u32VRefCTL);

/*@}*/ /* end of group SYS_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group SYS_Driver */

/*@}*/ /* end of group Standard_Driver */


#ifdef __cplusplus
}
#endif

#endif /* __SYS_H__ */

/*** (C) COPYRIGHT 2020 Nuvoton Technology Corp. ***/
