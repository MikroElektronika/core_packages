/**************************************************************************//**
 * @file     sys.h
 * @version  V0.10
 * $Revision: 7 $
 * $Date: 20/06/24 11:59a $
 * @brief    M0A21 Series SYS Driver Header File
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
#define HDIV_RST    ((0x0<<24)|SYS_IPRST0_HDIV_RST_Pos)     /*!< HDIV  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define CRC_RST     ((0x0<<24)|SYS_IPRST0_CRCRST_Pos)       /*!< CRC   reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */

#define GPIO_RST    ((0x4<<24)|SYS_IPRST1_GPIORST_Pos)      /*!< GPIO  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define TMR0_RST    ((0x4<<24)|SYS_IPRST1_TMR0RST_Pos)      /*!< TMR0  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define TMR1_RST    ((0x4<<24)|SYS_IPRST1_TMR1RST_Pos)      /*!< TMR1  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define TMR2_RST    ((0x4<<24)|SYS_IPRST1_TMR2RST_Pos)      /*!< TMR2  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define TMR3_RST    ((0x4<<24)|SYS_IPRST1_TMR3RST_Pos)      /*!< TMR3  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define ACMP01_RST  ((0x4<<24)|SYS_IPRST1_ACMP01RST_Pos)    /*!< ACMP  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define UART0_RST   ((0x4<<24)|SYS_IPRST1_UART0RST_Pos)     /*!< UART0 reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define UART1_RST   ((0x4<<24)|SYS_IPRST1_UART1RST_Pos)     /*!< UART1 reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define CAN0_RST    ((0x4<<24)|SYS_IPRST1_CAN0RST_Pos)      /*!< CAN0  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define ADC_RST     ((0x4<<24)|SYS_IPRST1_ADCRST_Pos)       /*!< ADC   reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */

#define USCI0_RST   ((0x8<<24)|SYS_IPRST2_USCI0RST_Pos)     /*!< USCI0 reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define USCI1_RST   ((0x8<<24)|SYS_IPRST2_USCI1RST_Pos)     /*!< USCI1 reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define DAC0_RST    ((0x8<<24)|SYS_IPRST2_DAC0RST_Pos)      /*!< DAC0  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */
#define PWM0_RST    ((0x8<<24)|SYS_IPRST2_PWM0RST_Pos)      /*!< PWM0  reset is one of the \ref SYS_ResetModule parameter   \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  Brown Out Detector Threshold Voltage Selection constant definitions.                                   */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_BODCTL_BOD_INTERRUPT_EN     (0UL<<SYS_BODCTL_BODRSTEN_Pos)          /*!< Brown-out Interrupt Enable \hideinitializer */
#define SYS_BODCTL_BOD_RST_EN           (1UL<<SYS_BODCTL_BODRSTEN_Pos)          /*!< Brown-out Reset Enable     \hideinitializer */

#define SYS_BODCTL_BODVL_2_3V           (0x0UL<<SYS_BODCTL_BODVL_Pos)           /*!< Setting Brown Out Detector Threshold Voltage as 2.3V   \hideinitializer */
#define SYS_BODCTL_BODVL_2_7V           (0x1UL<<SYS_BODCTL_BODVL_Pos)           /*!< Setting Brown Out Detector Threshold Voltage as 2.7V   \hideinitializer */
#define SYS_BODCTL_BODVL_3_7V           (0x2UL<<SYS_BODCTL_BODVL_Pos)           /*!< Setting Brown Out Detector Threshold Voltage as 3.7V   \hideinitializer */
#define SYS_BODCTL_BODVL_4_4V           (0x3UL<<SYS_BODCTL_BODVL_Pos)           /*!< Setting Brown Out Detector Threshold Voltage as 4.4V   \hideinitializer */

#define SYS_BODCTL_LVRDGSEL_0HCLK       (0x0UL<<SYS_BODCTL_LVRDGSEL_Pos)        /*!< LVR Output De-glitch Time Without de-glitch function.  \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_64HCLK      (0x1UL<<SYS_BODCTL_LVRDGSEL_Pos)        /*!< LVR Output De-glitch Time is selected 64HCLK           \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_128HCLK     (0x2UL<<SYS_BODCTL_LVRDGSEL_Pos)        /*!< LVR Output De-glitch Time is selected 128HCLK          \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_256HCLK     (0x3UL<<SYS_BODCTL_LVRDGSEL_Pos)        /*!< LVR Output De-glitch Time is selected 256HCLK          \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_512HCLK     (0x4UL<<SYS_BODCTL_LVRDGSEL_Pos)        /*!< LVR Output De-glitch Time is selected 512HCLK          \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_1024HCLK    (0x5UL<<SYS_BODCTL_LVRDGSEL_Pos)        /*!< LVR Output De-glitch Time is selected 1024HCLK         \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_2048HCLK    (0x6UL<<SYS_BODCTL_LVRDGSEL_Pos)        /*!< LVR Output De-glitch Time is selected 2048HCLK         \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_4096HCLK    (0x7UL<<SYS_BODCTL_LVRDGSEL_Pos)        /*!< LVR Output De-glitch Time is selected 4096HCLK         \hideinitializer */

#define SYS_BODCTL_BODDGSEL_0HCLK       (0x0UL<<SYS_BODCTL_BODDGSEL_Pos)        /*!< BOD Output De-glitch Time is sampled by RC10K clock.   \hideinitializer */
#define SYS_BODCTL_BODDGSEL_64HCLK      (0x1UL<<SYS_BODCTL_BODDGSEL_Pos)        /*!< BOD Output De-glitch Time is selected 64HCLK           \hideinitializer */
#define SYS_BODCTL_BODDGSEL_128HCLK     (0x2UL<<SYS_BODCTL_BODDGSEL_Pos)        /*!< BOD Output De-glitch Time is selected 128HCLK          \hideinitializer */
#define SYS_BODCTL_BODDGSEL_256HCLK     (0x3UL<<SYS_BODCTL_BODDGSEL_Pos)        /*!< BOD Output De-glitch Time is selected 256HCLK          \hideinitializer */
#define SYS_BODCTL_BODDGSEL_512HCLK     (0x4UL<<SYS_BODCTL_BODDGSEL_Pos)        /*!< BOD Output De-glitch Time is selected 512HCLK          \hideinitializer */
#define SYS_BODCTL_BODDGSEL_1024HCLK    (0x5UL<<SYS_BODCTL_BODDGSEL_Pos)        /*!< BOD Output De-glitch Time is selected 1024HCLK         \hideinitializer */
#define SYS_BODCTL_BODDGSEL_2048HCLK    (0x6UL<<SYS_BODCTL_BODDGSEL_Pos)        /*!< BOD Output De-glitch Time is selected 2048HCLK         \hideinitializer */
#define SYS_BODCTL_BODDGSEL_4096HCLK    (0x7UL<<SYS_BODCTL_BODDGSEL_Pos)        /*!< BOD Output De-glitch Time is selected 4096HCLK         \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  VREFCTL constant definitions. (Write-Protection Register)                                              */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_VREFCTL_VREF_PIN        (0x0UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = Vref pin \hideinitializer */
#define SYS_VREFCTL_VREF_1_6V       (0x1UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 1.6V \hideinitializer */
#define SYS_VREFCTL_VREF_2_0V       (0x3UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 2.0V \hideinitializer */
#define SYS_VREFCTL_VREF_2_5V       (0x5UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 2.5V \hideinitializer */
#define SYS_VREFCTL_VREF_3_0V       (0x7UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 3.0V \hideinitializer */
#define SYS_VREFCTL_VREF_4_0V       (0x9UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 3.0V \hideinitializer */

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
#define SYS_GPA_MFP0_PA0MFP_GPIO        (0x00UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for GPIO          \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_ADC0_CH0    (0x01UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for ADC0_CH0      \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_DAC0_OUT    (0x01UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for DAC0_OUT      \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_ACMP0_P0    (0x01UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for ACMP0_P0      \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_ICE_DAT     (0x02UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for ICE_DAT       \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_UART0_nCTS  (0x03UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_CLKO        (0x04UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for CLKO          \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_PWM0_CH1    (0x05UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for PWM0_CH1      \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_PWM0_CH3    (0x06UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for PWM0_CH3      \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_PWM0_CH5    (0x07UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for PWM0_CH5      \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_UART0_TXD   (0x08UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for UART0_TXD     \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_UART0_RXD   (0x09UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for UART0_RXD     \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_USCI0_CLK   (0x0AUL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_USCI0_DAT0  (0x0BUL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_USCI0_DAT1  (0x0CUL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_USCI0_CTL0  (0x0DUL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_USCI0_CTL1  (0x0EUL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for USCI0_CTL1    \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_USCI1_CLK   (0x0FUL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_USCI1_DAT0  (0x10UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_USCI1_DAT1  (0x11UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_USCI1_CTL0  (0x12UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_CAN0_TXD    (0x13UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_CAN0_RXD    (0x14UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_ACMP0_O     (0x15UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for ACMP0_O       \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_ACMP1_O     (0x16UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for ACMP1_O       \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_ADC0_ST     (0x17UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for ADC0_ST       \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_TM1         (0x18UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for TM1           \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_TM3         (0x19UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for TM3           \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_TM1_EXT     (0x1AUL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for TM1_EXT       \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_TM3_EXT     (0x1BUL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for TM3_EXT       \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_UART1_TXD   (0x1CUL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for UART1_TXD     \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_UART1_RXD   (0x1DUL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for UART1_RXD     \hideinitializer */
#define SYS_GPA_MFP0_PA0MFP_PWM0_BRAKE1 (0x1EUL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for PWM0_BRAKE1   \hideinitializer */

/* PA.1 MFP */
#define SYS_GPA_MFP0_PA1MFP_GPIO        (0x00UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for GPIO          \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_ADC0_CH1    (0x01UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for ADC0_CH1      \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_ACMP0_N0    (0x01UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for ACMP0_N0      \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_ACMP1_N0    (0x01UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for ACMP1_N0      \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_VREF        (0x01UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for VREF          \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_ICE_CLK     (0x02UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for ICE_CLK       \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_UART0_nCTS  (0x03UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_CLKO        (0x04UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for CLKO          \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_PWM0_CH0    (0x05UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for PWM0_CH0      \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_PWM0_CH2    (0x06UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for PWM0_CH2      \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_PWM0_CH4    (0x07UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for PWM0_CH4      \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_UART0_TXD   (0x08UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for UART0_TXD     \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_UART0_RXD   (0x09UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for UART0_RXD     \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_USCI0_CLK   (0x0AUL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_USCI0_DAT0  (0x0BUL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_USCI0_DAT1  (0x0CUL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_USCI0_CTL0  (0x0DUL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_USCI1_CTL1  (0x0EUL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for USCI1_CTL1    \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_USCI1_CLK   (0x0FUL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_USCI1_DAT0  (0x10UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_USCI1_DAT1  (0x11UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_USCI1_CTL0  (0x12UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_CAN0_TXD    (0x13UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_CAN0_RXD    (0x14UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_ACMP0_O     (0x15UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for ACMP0_O       \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_ACMP1_O     (0x16UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for ACMP1_O       \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_ADC0_ST     (0x17UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for ADC0_ST       \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_TM0         (0x18UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for TM0           \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_TM2         (0x19UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for TM2           \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_TM0_EXT     (0x1AUL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for TM0_EXT       \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_TM2_EXT     (0x1BUL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for TM2_EXT       \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_UART1_TXD   (0x1CUL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for UART1_TXD     \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_UART1_RXD   (0x1DUL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for UART1_RXD     \hideinitializer */
#define SYS_GPA_MFP0_PA1MFP_PWM0_BRAKE0 (0x1EUL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for PWM0_BRAKE0   \hideinitializer */

/* PA.2 MFP */
#define SYS_GPA_MFP0_PA2MFP_GPIO        (0x00UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for GPIO          \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_ADC0_CH2    (0x01UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for ADC0_CH2      \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_UART0_nRTS  (0x02UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for UART0_nRTS    \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_UART0_nCTS  (0x03UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_CLKO        (0x04UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for CLKO          \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_PWM0_CH1    (0x05UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for PWM0_CH1      \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_PWM0_CH3    (0x06UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for PWM0_CH3      \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_PWM0_CH5    (0x07UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for PWM0_CH5      \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_UART0_TXD   (0x08UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for UART0_TXD     \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_UART0_RXD   (0x09UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for UART0_RXD     \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_USCI0_CLK   (0x0AUL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_USCI0_DAT0  (0x0BUL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_USCI0_DAT1  (0x0CUL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_USCI0_CTL0  (0x0DUL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_USCI0_CTL1  (0x0EUL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for USCI0_CTL1    \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_USCI1_CLK   (0x0FUL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_USCI1_DAT0  (0x10UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_USCI1_DAT1  (0x11UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_USCI1_CTL0  (0x12UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_CAN0_TXD    (0x13UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_CAN0_RXD    (0x14UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_ACMP0_O     (0x15UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for ACMP0_O       \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_ACMP1_O     (0x16UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for ACMP1_O       \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_ADC0_ST     (0x17UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for ADC0_ST       \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_TM1         (0x18UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for TM1           \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_TM3         (0x19UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for TM3           \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_TM1_EXT     (0x1AUL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for TM1_EXT       \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_TM3_EXT     (0x1BUL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for TM3_EXT       \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_UART1_TXD   (0x1CUL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for UART1_TXD     \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_UART1_RXD   (0x1DUL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for UART1_RXD     \hideinitializer */
#define SYS_GPA_MFP0_PA2MFP_PWM0_BRAKE1 (0x1EUL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for PWM0_BRAKE1   \hideinitializer */

/* PA.3 MFP */
#define SYS_GPA_MFP0_PA3MFP_GPIO        (0x00UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for GPIO          \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_nRESET      (0x02UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for nRESET        \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_UART0_nCTS  (0x03UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_PWM0_CH0    (0x05UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for PWM0_CH0      \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_PWM0_CH2    (0x06UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for PWM0_CH2      \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_PWM0_CH4    (0x07UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for PWM0_CH4      \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_UART0_RXD   (0x09UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for UART0_RXD     \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_USCI0_CLK   (0x0AUL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_USCI0_DAT0  (0x0BUL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_USCI0_DAT1  (0x0CUL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_USCI0_CTL0  (0x0DUL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_USCI0_CTL1  (0x0EUL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for USCI0_CTL1    \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_USCI1_CLK   (0x0FUL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_USCI1_DAT0  (0x10UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_USCI1_DAT1  (0x11UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_USCI1_CTL0  (0x12UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_CAN0_RXD    (0x14UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_ADC0_ST     (0x17UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for ADC0_ST       \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_TM0         (0x18UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for TM0           \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_TM2         (0x19UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for TM2           \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_TM0_EXT     (0x1AUL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for TM0_EXT       \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_TM2_EXT     (0x1BUL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for TM2_EXT       \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_UART1_RXD   (0x1DUL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for UART1_RXD     \hideinitializer */
#define SYS_GPA_MFP0_PA3MFP_INT0        (0x1EUL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for INT0          \hideinitializer */

/* PA.4 MFP */
#define SYS_GPA_MFP1_PA4MFP_GPIO        (0x00UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for GPIO          \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_ADC0_CH15   (0x01UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for ADC0_CH15     \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_UART0_nRTS  (0x02UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for UART0_nRTS    \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_XT1_OUT     (0x03UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for XT1_OUT       \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_CLKO        (0x04UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for CLKO          \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_PWM0_CH1    (0x05UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for PWM0_CH1      \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_PWM0_CH3    (0x06UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for PWM0_CH3      \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_PWM0_CH5    (0x07UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for PWM0_CH5      \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_UART0_TXD   (0x08UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for UART0_TXD     \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_UART0_RXD   (0x09UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for UART0_RXD     \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_USCI0_CLK   (0x0AUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_USCI0_DAT0  (0x0BUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_USCI0_DAT1  (0x0CUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_USCI0_CTL0  (0x0DUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_USCI1_CTL1  (0x0EUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for USCI1_CTL1    \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_USCI1_CLK   (0x0FUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_USCI1_DAT0  (0x10UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_USCI1_DAT1  (0x11UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_USCI1_CTL0  (0x12UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_CAN0_TXD    (0x13UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_CAN0_RXD    (0x14UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_ACMP0_O     (0x15UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for ACMP0_O       \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_ACMP1_O     (0x16UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for ACMP1_O       \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_ADC0_ST     (0x17UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for ADC0_ST       \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_TM1         (0x18UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for TM1           \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_TM3         (0x19UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for TM3           \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_TM1_EXT     (0x1AUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for TM1_EXT       \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_TM3_EXT     (0x1BUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for TM3_EXT       \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_UART1_TXD   (0x1CUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for UART1_TXD     \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_UART1_RXD   (0x1DUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for UART1_RXD     \hideinitializer */
#define SYS_GPA_MFP1_PA4MFP_ACMP1_WLAT  (0x1EUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for ACMP1_WLAT    \hideinitializer */

/* PA.5 MFP */
#define SYS_GPA_MFP1_PA5MFP_GPIO        (0x00UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for GPIO          \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_ADC0_CH16   (0x01UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for ADC0_CH16     \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_UART0_nRTS  (0x02UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for UART0_nRTS    \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_XT1_IN      (0x03UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for XT1_IN        \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_CLKO        (0x04UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for CLKO          \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_PWM0_CH0    (0x05UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for PWM0_CH0      \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_PWM0_CH2    (0x06UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for PWM0_CH2      \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_PWM0_CH4    (0x07UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for PWM0_CH4      \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_UART0_TXD   (0x08UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for UART0_TXD     \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_UART0_RXD   (0x09UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for UART0_RXD     \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_USCI0_CLK   (0x0AUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_USCI0_DAT0  (0x0BUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_USCI0_DAT1  (0x0CUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_USCI0_CTL0  (0x0DUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_USCI0_CTL1  (0x0EUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for USCI0_CTL1    \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_USCI1_CLK   (0x0FUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_USCI1_DAT0  (0x10UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_USCI1_DAT1  (0x11UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_USCI1_CTL0  (0x12UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_CAN0_TXD    (0x13UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_CAN0_RXD    (0x14UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_ACMP0_O     (0x15UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for ACMP0_O       \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_ACMP1_O     (0x16UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for ACMP1_O       \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_ADC0_ST     (0x17UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for ADC0_ST       \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_TM0         (0x18UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for TM0           \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_TM2         (0x19UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for TM2           \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_TM0_EXT     (0x1AUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for TM0_EXT       \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_TM2_EXT     (0x1BUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for TM2_EXT       \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_UART1_TXD   (0x1CUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for UART1_TXD     \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_UART1_RXD   (0x1DUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for UART1_RXD     \hideinitializer */
#define SYS_GPA_MFP1_PA5MFP_ACMP0_WLAT  (0x1EUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for ACMP0_WLAT    \hideinitializer */

/* PB.4 MFP */
#define SYS_GPB_MFP1_PB4MFP_GPIO        (0x00UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for GPIO          \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_ADC0_CH6    (0x01UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for ADC0_CH6      \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_UART0_nRTS  (0x02UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for UART0_nRTS    \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_UART0_nCTS  (0x03UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_CLKO        (0x04UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for CLKO          \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_PWM0_CH1    (0x05UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for PWM0_CH1      \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_PWM0_CH3    (0x06UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for PWM0_CH3      \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_PWM0_CH5    (0x07UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for PWM0_CH5      \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_UART0_TXD   (0x08UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for UART0_TXD     \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_UART0_RXD   (0x09UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for UART0_RXD     \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_USCI0_CLK   (0x0AUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_USCI0_DAT0  (0x0BUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_USCI0_DAT1  (0x0CUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_USCI0_CTL0  (0x0DUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_USCI0_CTL1  (0x0EUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for USCI0_CTL1    \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_USCI1_CLK   (0x0FUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_USCI1_DAT0  (0x10UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_USCI1_DAT1  (0x11UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_USCI1_CTL0  (0x12UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_CAN0_TXD    (0x13UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_CAN0_RXD    (0x14UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_ACMP0_O     (0x15UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for ACMP0_O       \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_ACMP1_O     (0x16UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for ACMP1_O       \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_ADC0_ST     (0x17UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for ADC0_ST       \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_TM1         (0x18UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for TM1           \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_TM3         (0x19UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for TM3           \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_TM1_EXT     (0x1AUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for TM1_EXT       \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_TM3_EXT     (0x1BUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for TM3_EXT       \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_UART1_TXD   (0x1CUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for UART1_TXD     \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_UART1_RXD   (0x1DUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for UART1_RXD     \hideinitializer */
#define SYS_GPB_MFP1_PB4MFP_UART1_nCTS  (0x1EUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for UART1_nCTS    \hideinitializer */

/* PB.5 MFP */
#define SYS_GPB_MFP1_PB5MFP_GPIO        (0x00UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for GPIO          \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_ADC0_CH7    (0x01UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for ADC0_CH7      \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_UART0_nRTS  (0x02UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for UART0_nRTS    \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_UART0_nCTS  (0x03UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_CLKO        (0x04UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for CLKO          \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_PWM0_CH0    (0x05UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for PWM0_CH0      \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_PWM0_CH2    (0x06UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for PWM0_CH2      \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_PWM0_CH4    (0x07UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for PWM0_CH4      \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_UART0_TXD   (0x08UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for UART0_TXD     \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_UART0_RXD   (0x09UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for UART0_RXD     \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_USCI0_CLK   (0x0AUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_USCI0_DAT0  (0x0BUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_USCI0_DAT1  (0x0CUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_USCI0_CTL0  (0x0DUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_USCI1_CTL1  (0x0EUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for USCI1_CTL1    \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_USCI1_CLK   (0x0FUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_USCI1_DAT0  (0x10UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_USCI1_DAT1  (0x11UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_USCI1_CTL0  (0x12UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_CAN0_TXD    (0x13UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_CAN0_RXD    (0x14UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_ACMP0_O     (0x15UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for ACMP0_O       \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_ACMP1_O     (0x16UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for ACMP1_O       \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_ADC0_ST     (0x17UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for ADC0_ST       \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_TM0         (0x18UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for TM0           \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_TM2         (0x19UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for TM2           \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_TM0_EXT     (0x1AUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for TM0_EXT       \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_TM2_EXT     (0x1BUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for TM2_EXT       \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_UART1_TXD   (0x1CUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for UART1_TXD     \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_UART1_RXD   (0x1DUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for UART1_RXD     \hideinitializer */
#define SYS_GPB_MFP1_PB5MFP_INT0        (0x1EUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for INT0          \hideinitializer */

/* PB.6 MFP */
#define SYS_GPB_MFP1_PB6MFP_GPIO        (0x00UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for GPIO          \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_ADC0_CH8    (0x01UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for ADC0_CH8      \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_UART0_nRTS  (0x02UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for UART0_nRTS    \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_UART0_nCTS  (0x03UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_CLKO        (0x04UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for CLKO          \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_PWM0_CH1    (0x05UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for PWM0_CH1      \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_PWM0_CH3    (0x06UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for PWM0_CH3      \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_PWM0_CH5    (0x07UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for PWM0_CH5      \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_UART0_TXD   (0x08UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for UART0_TXD     \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_UART0_RXD   (0x09UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for UART0_RXD     \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_USCI0_CLK   (0x0AUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_USCI0_DAT0  (0x0BUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_USCI0_DAT1  (0x0CUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_USCI0_CTL0  (0x0DUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_USCI0_CTL1  (0x0EUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for USCI0_CTL1    \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_USCI1_CLK   (0x0FUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_USCI1_DAT0  (0x10UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_USCI1_DAT1  (0x11UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_USCI1_CTL0  (0x12UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_CAN0_TXD    (0x13UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_CAN0_RXD    (0x14UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_ACMP0_O     (0x15UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for ACMP0_O       \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_ACMP1_O     (0x16UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for ACMP1_O       \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_ADC0_ST     (0x17UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for ADC0_ST       \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_TM1         (0x18UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for TM1           \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_TM3         (0x19UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for TM3           \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_TM1_EXT     (0x1AUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for TM1_EXT       \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_TM3_EXT     (0x1BUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for TM3_EXT       \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_UART1_TXD   (0x1CUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for UART1_TXD     \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_UART1_RXD   (0x1DUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for UART1_RXD     \hideinitializer */
#define SYS_GPB_MFP1_PB6MFP_ACMP1_WLAT  (0x1EUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6 setting for ACMP1_WLAT    \hideinitializer */

/* PB.7 MFP */
#define SYS_GPB_MFP1_PB7MFP_GPIO        (0x00UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for GPIO          \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_ADC0_CH9    (0x01UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for ADC0_CH9      \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_UART0_nRTS  (0x02UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for UART0_nRTS    \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_UART0_nCTS  (0x03UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_CLKO        (0x04UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for CLKO          \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_PWM0_CH0    (0x05UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for PWM0_CH0      \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_PWM0_CH2    (0x06UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for PWM0_CH2      \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_PWM0_CH4    (0x07UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for PWM0_CH4      \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_UART0_TXD   (0x08UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for UART0_TXD     \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_UART0_RXD   (0x09UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for UART0_RXD     \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_USCI0_CLK   (0x0AUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_USCI0_DAT0  (0x0BUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_USCI0_DAT1  (0x0CUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_USCI0_CTL0  (0x0DUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_USCI1_CTL1  (0x0EUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for USCI1_CTL1    \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_USCI1_CLK   (0x0FUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_USCI1_DAT0  (0x10UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_USCI1_DAT1  (0x11UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_USCI1_CTL0  (0x12UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_CAN0_TXD    (0x13UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_CAN0_RXD    (0x14UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_ACMP0_O     (0x15UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for ACMP0_O       \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_ACMP1_O     (0x16UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for ACMP1_O       \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_ADC0_ST     (0x17UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for ADC0_ST       \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_TM0         (0x18UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for TM0           \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_TM2         (0x19UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for TM2           \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_TM0_EXT     (0x1AUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for TM0_EXT       \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_TM2_EXT     (0x1BUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for TM2_EXT       \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_UART1_TXD   (0x1CUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for UART1_TXD     \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_UART1_RXD   (0x1DUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for UART1_RXD     \hideinitializer */
#define SYS_GPB_MFP1_PB7MFP_ACMP0_WLAT  (0x1EUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7 setting for ACMP0_WLAT    \hideinitializer */

/* PC.0 MFP */
#define SYS_GPC_MFP0_PC0MFP_GPIO        (0x00UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for GPIO          \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_ADC0_CH3    (0x01UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for ADC0_CH3      \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_ACMP1_P0    (0x01UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for ACMP1_P0      \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_UART0_nRTS  (0x02UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for UART0_nRTS    \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_UART0_nCTS  (0x03UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_CLKO        (0x04UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for CLKO          \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_PWM0_CH0    (0x05UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for PWM0_CH0      \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_PWM0_CH2    (0x06UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for PWM0_CH2      \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_PWM0_CH4    (0x07UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for PWM0_CH4      \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_UART0_TXD   (0x08UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for UART0_TXD     \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_UART0_RXD   (0x09UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for UART0_RXD     \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_USCI0_CLK   (0x0AUL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_USCI0_DAT0  (0x0BUL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_USCI0_DAT1  (0x0CUL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_USCI0_CTL0  (0x0DUL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_USCI1_CTL1  (0x0EUL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for USCI1_CTL1    \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_USCI1_CLK   (0x0FUL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_USCI1_DAT0  (0x10UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_USCI1_DAT1  (0x11UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_USCI1_CTL0  (0x12UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_CAN0_TXD    (0x13UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_CAN0_RXD    (0x14UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_ACMP0_O     (0x15UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for ACMP0_O       \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_ACMP1_O     (0x16UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for ACMP1_O       \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_ADC0_ST     (0x17UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for ADC0_ST       \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_TM0         (0x18UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for TM0           \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_TM2         (0x19UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for TM2           \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_TM0_EXT     (0x1AUL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for TM0_EXT       \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_TM2_EXT     (0x1BUL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for TM2_EXT       \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_UART1_TXD   (0x1CUL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for UART1_TXD     \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_UART1_RXD   (0x1DUL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for UART1_RXD     \hideinitializer */
#define SYS_GPC_MFP0_PC0MFP_PWM0_BRAKE0 (0x1EUL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for PWM0_BRAKE0   \hideinitializer */

/* PC.1 MFP */
#define SYS_GPC_MFP0_PC1MFP_GPIO        (0x00UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for GPIO          \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_ADC0_CH4    (0x01UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for ADC0_CH4      \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_ACMP0_N1    (0x01UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for ACMP0_N1      \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_ACMP1_N1    (0x01UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for ACMP1_N1      \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_UART0_nRTS  (0x02UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for UART0_nRTS    \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_UART0_nCTS  (0x03UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_CLKO        (0x04UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for CLKO          \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_PWM0_CH1    (0x05UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for PWM0_CH1      \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_PWM0_CH3    (0x06UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for PWM0_CH3      \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_PWM0_CH5    (0x07UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for PWM0_CH5      \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_UART0_TXD   (0x08UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for UART0_TXD     \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_UART0_RXD   (0x09UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for UART0_RXD     \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_USCI0_CLK   (0x0AUL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_USCI0_DAT0  (0x0BUL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_USCI0_DAT1  (0x0CUL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_USCI0_CTL0  (0x0DUL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_USCI0_CTL1  (0x0EUL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for USCI0_CTL1    \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_USCI1_CLK   (0x0FUL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_USCI1_DAT0  (0x10UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_USCI1_DAT1  (0x11UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_USCI1_CTL0  (0x12UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_CAN0_TXD    (0x13UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_CAN0_RXD    (0x14UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_ACMP0_O     (0x15UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for ACMP0_O       \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_ACMP1_O     (0x16UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for ACMP1_O       \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_ADC0_ST     (0x17UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for ADC0_ST       \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_TM1         (0x18UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for TM1           \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_TM3         (0x19UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for TM3           \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_TM1_EXT     (0x1AUL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for TM1_EXT       \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_TM3_EXT     (0x1BUL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for TM3_EXT       \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_UART1_TXD   (0x1CUL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for UART1_TXD     \hideinitializer */
#define SYS_GPC_MFP0_PC1MFP_UART1_RXD   (0x1DUL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for UART1_RXD     \hideinitializer */

/* PC.2 MFP */
#define SYS_GPC_MFP0_PC2MFP_GPIO        (0x00UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for GPIO          \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_ADC0_CH5    (0x01UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for ADC0_CH5      \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_ACMP0_N2    (0x01UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for ACMP0_N2      \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_ACMP1_N2    (0x01UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for ACMP1_N2      \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_UART0_nRTS  (0x02UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for UART0_nRTS    \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_UART0_nCTS  (0x03UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_CLKO        (0x04UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for CLKO          \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_PWM0_CH0    (0x05UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for PWM0_CH0      \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_PWM0_CH2    (0x06UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for PWM0_CH2      \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_PWM0_CH4    (0x07UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for PWM0_CH4      \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_UART0_TXD   (0x08UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for UART0_TXD     \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_UART0_RXD   (0x09UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for UART0_RXD     \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_USCI0_CLK   (0x0AUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_USCI0_DAT0  (0x0BUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_USCI0_DAT1  (0x0CUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_USCI0_CTL0  (0x0DUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_USCI1_CTL1  (0x0EUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for USCI1_CTL1    \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_USCI1_CLK   (0x0FUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_USCI1_DAT0  (0x10UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_USCI1_DAT1  (0x11UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_USCI1_CTL0  (0x12UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_CAN0_TXD    (0x13UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_CAN0_RXD    (0x14UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_ACMP0_O     (0x15UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for ACMP0_O       \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_ACMP1_O     (0x16UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for ACMP1_O       \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_ADC0_ST     (0x17UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for ADC0_ST       \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_TM0         (0x18UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for TM0           \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_TM2         (0x19UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for TM2           \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_TM0_EXT     (0x1AUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for TM0_EXT       \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_TM2_EXT     (0x1BUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for TM2_EXT       \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_UART1_TXD   (0x1CUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for UART1_TXD     \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_UART1_RXD   (0x1DUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for UART1_RXD     \hideinitializer */
#define SYS_GPC_MFP0_PC2MFP_UART1_nRTS  (0x1EUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for UART1_nRTS    \hideinitializer */

/* PC.3 MFP */
#define SYS_GPC_MFP0_PC3MFP_GPIO        (0x00UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for GPIO          \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_ADC0_CH12   (0x01UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for ADC0_CH12     \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_ACMP0_N3    (0x01UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for ACMP0_N3      \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_ACMP1_N3    (0x01UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for ACMP1_N3      \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_UART0_nRTS  (0x02UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for UART0_nRTS    \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_UART0_nCTS  (0x03UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_CLKO        (0x04UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for CLKO          \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_PWM0_CH1    (0x05UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for PWM0_CH1      \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_PWM0_CH3    (0x06UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for PWM0_CH3      \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_PWM0_CH5    (0x07UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for PWM0_CH5      \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_UART0_TXD   (0x08UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for UART0_TXD     \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_UART0_RXD   (0x09UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for UART0_RXD     \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_USCI0_CLK   (0x0AUL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_USCI0_DAT0  (0x0BUL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_USCI0_DAT1  (0x0CUL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_USCI0_CTL0  (0x0DUL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_USCI0_CTL1  (0x0EUL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for USCI0_CTL1    \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_USCI1_CLK   (0x0FUL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_USCI1_DAT0  (0x10UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_USCI1_DAT1  (0x11UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_USCI1_CTL0  (0x12UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_CAN0_TXD    (0x13UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_CAN0_RXD    (0x14UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_ACMP0_O     (0x15UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for ACMP0_O       \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_ACMP1_O     (0x16UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for ACMP1_O       \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_ADC0_ST     (0x17UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for ADC0_ST       \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_TM1         (0x18UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for TM1           \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_TM3         (0x19UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for TM3           \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_TM1_EXT     (0x1AUL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for TM1_EXT       \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_TM3_EXT     (0x1BUL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for TM3_EXT       \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_UART1_TXD   (0x1CUL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for UART1_TXD     \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_UART1_RXD   (0x1DUL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for UART1_RXD     \hideinitializer */
#define SYS_GPC_MFP0_PC3MFP_INT3        (0x1EUL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for INT3          \hideinitializer */

/* PC.4 MFP */
#define SYS_GPC_MFP1_PC4MFP_GPIO        (0x00UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for GPIO          \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_ADC0_CH13   (0x01UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for ADC0_CH13     \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_X32_OUT     (0x02UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PA4 setting for X32_OUT       \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_UART0_nCTS  (0x03UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_CLKO        (0x04UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for CLKO          \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_PWM0_CH0    (0x05UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for PWM0_CH0      \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_PWM0_CH2    (0x06UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for PWM0_CH2      \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_PWM0_CH4    (0x07UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for PWM0_CH4      \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_UART0_TXD   (0x08UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for UART0_TXD     \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_UART0_RXD   (0x09UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for UART0_RXD     \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_USCI0_CLK   (0x0AUL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_USCI0_DAT0  (0x0BUL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_USCI0_DAT1  (0x0CUL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_USCI0_CTL0  (0x0DUL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_USCI1_CTL1  (0x0EUL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for USCI1_CTL1    \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_USCI1_CLK   (0x0FUL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_USCI1_DAT0  (0x10UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_USCI1_DAT1  (0x11UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_USCI1_CTL0  (0x12UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_CAN0_TXD    (0x13UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_CAN0_RXD    (0x14UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_ACMP0_O     (0x15UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for ACMP0_O       \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_ACMP1_O     (0x16UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for ACMP1_O       \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_ADC0_ST     (0x17UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for ADC0_ST       \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_TM0         (0x18UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for TM0           \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_TM2         (0x19UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for TM2           \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_TM0_EXT     (0x1AUL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for TM0_EXT       \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_TM2_EXT     (0x1BUL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for TM2_EXT       \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_UART1_TXD   (0x1CUL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for UART1_TXD     \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_UART1_RXD   (0x1DUL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for UART1_RXD     \hideinitializer */
#define SYS_GPC_MFP1_PC4MFP_INT2        (0x1EUL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for INT2          \hideinitializer */

/* PC.5 MFP */
#define SYS_GPC_MFP1_PC5MFP_GPIO        (0x00UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for GPIO          \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_ADC0_CH14   (0x01UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for ADC0_CH14     \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_X32_IN      (0x02UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for X32_IN        \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_UART0_nCTS  (0x03UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_CLKO        (0x04UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for CLKO          \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_PWM0_CH1    (0x05UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for PWM0_CH1      \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_PWM0_CH3    (0x06UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for PWM0_CH3      \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_PWM0_CH5    (0x07UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for PWM0_CH5      \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_UART0_TXD   (0x08UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for UART0_TXD     \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_UART0_RXD   (0x09UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for UART0_RXD     \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_USCI0_CLK   (0x0AUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_USCI0_DAT0  (0x0BUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_USCI0_DAT1  (0x0CUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_USCI0_CTL0  (0x0DUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_USCI0_CTL1  (0x0EUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for USCI0_CTL1    \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_USCI1_CLK   (0x0FUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_USCI1_DAT0  (0x10UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_USCI1_DAT1  (0x11UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_USCI1_CTL0  (0x12UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_CAN0_TXD    (0x13UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_CAN0_RXD    (0x14UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_ACMP0_O     (0x15UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for ACMP0_O       \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_ACMP1_O     (0x16UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for ACMP1_O       \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_ADC0_ST     (0x17UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for ADC0_ST       \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_TM1         (0x18UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for TM1           \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_TM3         (0x19UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for TM3           \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_TM1_EXT     (0x1AUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for TM1_EXT       \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_TM3_EXT     (0x1BUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for TM3_EXT       \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_UART1_TXD   (0x1CUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for UART1_TXD     \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_UART1_RXD   (0x1DUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for UART1_RXD     \hideinitializer */
#define SYS_GPC_MFP1_PC5MFP_INT1        (0x1EUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for INT1          \hideinitializer */

/* PC.6 MFP */
#define SYS_GPC_MFP1_PC6MFP_GPIO        (0x00UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for GPIO          \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_ADC0_CH11   (0x01UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for ADC0_CH11     \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_UART0_nRTS  (0x02UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for UART0_nRTS    \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_UART0_nCTS  (0x03UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_CLKO        (0x04UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for CLKO          \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_PWM0_CH0    (0x05UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for PWM0_CH0      \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_PWM0_CH2    (0x06UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for PWM0_CH2      \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_PWM0_CH4    (0x07UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for PWM0_CH4      \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_UART0_TXD   (0x08UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for UART0_TXD     \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_UART0_RXD   (0x09UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for UART0_RXD     \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_USCI0_CLK   (0x0AUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_USCI0_DAT0  (0x0BUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_USCI0_DAT1  (0x0CUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_USCI0_CTL0  (0x0DUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_USCI1_CTL1  (0x0EUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for USCI1_CTL1    \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_USCI1_CLK   (0x0FUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_USCI1_DAT0  (0x10UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_USCI1_DAT1  (0x11UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_USCI1_CTL0  (0x12UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_CAN0_TXD    (0x13UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_CAN0_RXD    (0x14UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_ACMP0_O     (0x15UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for ACMP0_O       \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_ACMP1_O     (0x16UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for ACMP1_O       \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_ADC0_ST     (0x17UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for ADC0_ST       \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_TM0         (0x18UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for TM0           \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_TM2         (0x19UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for TM2           \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_TM0_EXT     (0x1AUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for TM0_EXT       \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_TM2_EXT     (0x1BUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for TM2_EXT       \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_UART1_TXD   (0x1CUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for UART1_TXD     \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_UART1_RXD   (0x1DUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for UART1_RXD     \hideinitializer */
#define SYS_GPC_MFP1_PC6MFP_INT4        (0x1EUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for INT4          \hideinitializer */

/* PC.7 MFP */
#define SYS_GPC_MFP1_PC7MFP_GPIO        (0x00UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for GPIO          \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_ADC0_CH10   (0x01UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for ADC0_CH10     \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_UART0_nRTS  (0x02UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for UART0_nRTS    \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_UART0_nCTS  (0x03UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for UART0_nCTS    \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_CLKO        (0x04UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for CLKO          \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_PWM0_CH1    (0x05UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for PWM0_CH1      \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_PWM0_CH3    (0x06UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for PWM0_CH3      \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_PWM0_CH5    (0x07UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for PWM0_CH5      \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_UART0_TXD   (0x08UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for UART0_TXD     \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_UART0_RXD   (0x09UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for UART0_RXD     \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_USCI0_CLK   (0x0AUL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_USCI0_DAT0  (0x0BUL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_USCI0_DAT1  (0x0CUL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_USCI0_CTL0  (0x0DUL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_USCI0_CTL1  (0x0EUL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for USCI0_CTL1    \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_USCI1_CLK   (0x0FUL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_USCI1_DAT0  (0x10UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_USCI1_DAT1  (0x11UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_USCI1_CTL0  (0x12UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_CAN0_TXD    (0x13UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_CAN0_RXD    (0x14UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_ACMP0_O     (0x15UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for ACMP0_O       \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_ACMP1_O     (0x16UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for ACMP1_O       \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_ADC0_ST     (0x17UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for ADC0_ST       \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_TM1         (0x18UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for TM1           \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_TM3         (0x19UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for TM3           \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_TM1_EXT     (0x1AUL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for TM1_EXT       \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_TM3_EXT     (0x1BUL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for TM3_EXT       \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_UART1_TXD   (0x1CUL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for UART1_TXD     \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_UART1_RXD   (0x1DUL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for UART1_RXD     \hideinitializer */
#define SYS_GPC_MFP1_PC7MFP_INT5        (0x1EUL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for INT5          \hideinitializer */

/* PD.0 MFP */
#define SYS_GPD_MFP0_PD0MFP_GPIO        (0x00UL<<SYS_GPD_MFP0_PD0MFP_Pos)   /*!< GPD_MFP0 PD0 setting for GPIO          \hideinitializer */
#define SYS_GPD_MFP0_PD0MFP_PWM0_CH4    (0x02UL<<SYS_GPD_MFP0_PD0MFP_Pos)   /*!< GPD_MFP0 PD0 setting for PWM0_CH4      \hideinitializer */
#define SYS_GPD_MFP0_PD0MFP_UART0_TXD   (0x03UL<<SYS_GPD_MFP0_PD0MFP_Pos)   /*!< GPD_MFP0 PD0 setting for UART0_TXD     \hideinitializer */
#define SYS_GPD_MFP0_PD0MFP_USCI1_CLK   (0x04UL<<SYS_GPD_MFP0_PD0MFP_Pos)   /*!< GPD_MFP0 PD0 setting for USCI1_CLK     \hideinitializer */
#define SYS_GPD_MFP0_PD0MFP_TM0         (0x05UL<<SYS_GPD_MFP0_PD0MFP_Pos)   /*!< GPD_MFP0 PD0 setting for TM0           \hideinitializer */

/* PD.1 MFP */
#define SYS_GPD_MFP0_PD1MFP_GPIO        (0x00UL<<SYS_GPD_MFP0_PD1MFP_Pos)   /*!< GPD_MFP0 PD1 setting for GPIO          \hideinitializer */
#define SYS_GPD_MFP0_PD1MFP_PWM0_CH5    (0x02UL<<SYS_GPD_MFP0_PD1MFP_Pos)   /*!< GPD_MFP0 PD1 setting for PWM0_CH5      \hideinitializer */
#define SYS_GPD_MFP0_PD1MFP_UART0_RXD   (0x03UL<<SYS_GPD_MFP0_PD1MFP_Pos)   /*!< GPD_MFP0 PD1 setting for UART0_RXD     \hideinitializer */
#define SYS_GPD_MFP0_PD1MFP_USCI1_DAT0  (0x04UL<<SYS_GPD_MFP0_PD1MFP_Pos)   /*!< GPD_MFP0 PD1 setting for USCI1_DAT0    \hideinitializer */
#define SYS_GPD_MFP0_PD1MFP_TM1         (0x05UL<<SYS_GPD_MFP0_PD1MFP_Pos)   /*!< GPD_MFP0 PD1 setting for TM1           \hideinitializer */

/* PD.2 MFP */
#define SYS_GPD_MFP0_PD2MFP_GPIO        (0x00UL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPD_MFP0 PD2 setting for GPIO          \hideinitializer */
#define SYS_GPD_MFP0_PD2MFP_PWM0_CH0    (0x02UL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPD_MFP0 PD2 setting for PWM0_CH0      \hideinitializer */
#define SYS_GPD_MFP0_PD2MFP_CAN0_TXD    (0x03UL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPD_MFP0 PD2 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPD_MFP0_PD2MFP_USCI1_DAT1  (0x04UL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPD_MFP0 PD2 setting for USCI1_DAT1    \hideinitializer */
#define SYS_GPD_MFP0_PD2MFP_TM2         (0x05UL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPD_MFP0 PD2 setting for TM2           \hideinitializer */
#define SYS_GPD_MFP0_PD2MFP_UART1_nCTS  (0x06UL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPD_MFP0 PD2 setting for UART1_nCTS    \hideinitializer */

/* PD.3 MFP */
#define SYS_GPD_MFP0_PD3MFP_GPIO        (0x00UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPD_MFP0 PD3 setting for GPIO          \hideinitializer */
#define SYS_GPD_MFP0_PD3MFP_PWM0_CH1    (0x02UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPD_MFP0 PD3 setting for PWM0_CH1      \hideinitializer */
#define SYS_GPD_MFP0_PD3MFP_CAN0_RXD    (0x03UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPD_MFP0 PD3 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPD_MFP0_PD3MFP_USCI1_CTL0  (0x04UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPD_MFP0 PD3 setting for USCI1_CTL0    \hideinitializer */
#define SYS_GPD_MFP0_PD3MFP_TM3         (0x05UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPD_MFP0 PD3 setting for TM3           \hideinitializer */
#define SYS_GPD_MFP0_PD3MFP_UART1_nRTS  (0x06UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPD_MFP0 PD3 setting for UART1_nRTS    \hideinitializer */

/* PD.4 MFP */
#define SYS_GPD_MFP1_PD4MFP_GPIO        (0x00UL<<SYS_GPD_MFP1_PD4MFP_Pos)   /*!< GPD_MFP1 PD4 setting for GPIO          \hideinitializer */
#define SYS_GPD_MFP1_PD4MFP_PWM0_CH0    (0x02UL<<SYS_GPD_MFP1_PD4MFP_Pos)   /*!< GPD_MFP1 PD4 setting for PWM0_CH0      \hideinitializer */
#define SYS_GPD_MFP1_PD4MFP_UART0_TXD   (0x03UL<<SYS_GPD_MFP1_PD4MFP_Pos)   /*!< GPD_MFP1 PD4 setting for UART0_TXD     \hideinitializer */
#define SYS_GPD_MFP1_PD4MFP_USCI0_CLK   (0x04UL<<SYS_GPD_MFP1_PD4MFP_Pos)   /*!< GPD_MFP1 PD4 setting for USCI0_CLK     \hideinitializer */
#define SYS_GPD_MFP1_PD4MFP_TM0         (0x05UL<<SYS_GPD_MFP1_PD4MFP_Pos)   /*!< GPD_MFP1 PD4 setting for TM0           \hideinitializer */

/* PD.5 MFP */
#define SYS_GPD_MFP1_PD5MFP_GPIO        (0x00UL<<SYS_GPD_MFP1_PD5MFP_Pos)   /*!< GPD_MFP1 PD5 setting for GPIO          \hideinitializer */
#define SYS_GPD_MFP1_PD5MFP_PWM0_CH1    (0x02UL<<SYS_GPD_MFP1_PD5MFP_Pos)   /*!< GPD_MFP1 PD5 setting for PWM0_CH1      \hideinitializer */
#define SYS_GPD_MFP1_PD5MFP_UART0_RXD   (0x03UL<<SYS_GPD_MFP1_PD5MFP_Pos)   /*!< GPD_MFP1 PD5 setting for UART0_RXD     \hideinitializer */
#define SYS_GPD_MFP1_PD5MFP_USCI0_DAT0  (0x04UL<<SYS_GPD_MFP1_PD5MFP_Pos)   /*!< GPD_MFP1 PD5 setting for USCI0_DAT0    \hideinitializer */
#define SYS_GPD_MFP1_PD5MFP_TM1         (0x05UL<<SYS_GPD_MFP1_PD5MFP_Pos)   /*!< GPD_MFP1 PD5 setting for TM1           \hideinitializer */

/* PD.6 MFP */
#define SYS_GPD_MFP1_PD6MFP_GPIO        (0x00UL<<SYS_GPD_MFP1_PD6MFP_Pos)   /*!< GPD_MFP1 PD6 setting for GPIO          \hideinitializer */
#define SYS_GPD_MFP1_PD6MFP_PWM0_CH2    (0x02UL<<SYS_GPD_MFP1_PD6MFP_Pos)   /*!< GPD_MFP1 PD6 setting for PWM0_CH2      \hideinitializer */
#define SYS_GPD_MFP1_PD6MFP_CAN0_TXD    (0x03UL<<SYS_GPD_MFP1_PD6MFP_Pos)   /*!< GPD_MFP1 PD6 setting for CAN0_TXD      \hideinitializer */
#define SYS_GPD_MFP1_PD6MFP_USCI0_DAT1  (0x04UL<<SYS_GPD_MFP1_PD6MFP_Pos)   /*!< GPD_MFP1 PD6 setting for USCI0_DAT1    \hideinitializer */
#define SYS_GPD_MFP1_PD6MFP_TM2         (0x05UL<<SYS_GPD_MFP1_PD6MFP_Pos)   /*!< GPD_MFP1 PD6 setting for TM2           \hideinitializer */
#define SYS_GPD_MFP1_PD6MFP_UART1_nCTS  (0x06UL<<SYS_GPD_MFP1_PD6MFP_Pos)   /*!< GPD_MFP1 PD6 setting for UART1_nCTS    \hideinitializer */

/* PD.7 MFP */
#define SYS_GPD_MFP1_PD7MFP_GPIO        (0x00UL<<SYS_GPD_MFP1_PD7MFP_Pos)   /*!< GPD_MFP1 PD7 setting for GPIO          \hideinitializer */
#define SYS_GPD_MFP1_PD7MFP_PWM0_CH3    (0x02UL<<SYS_GPD_MFP1_PD7MFP_Pos)   /*!< GPD_MFP1 PD7 setting for PWM0_CH3      \hideinitializer */
#define SYS_GPD_MFP1_PD7MFP_CAN0_RXD    (0x03UL<<SYS_GPD_MFP1_PD7MFP_Pos)   /*!< GPD_MFP1 PD7 setting for CAN0_RXD      \hideinitializer */
#define SYS_GPD_MFP1_PD7MFP_USCI0_CTL0  (0x04UL<<SYS_GPD_MFP1_PD7MFP_Pos)   /*!< GPD_MFP1 PD7 setting for USCI0_CTL0    \hideinitializer */
#define SYS_GPD_MFP1_PD7MFP_TM3         (0x05UL<<SYS_GPD_MFP1_PD7MFP_Pos)   /*!< GPD_MFP1 PD7 setting for TM3           \hideinitializer */
#define SYS_GPD_MFP1_PD7MFP_UART1_nRTS  (0x06UL<<SYS_GPD_MFP1_PD7MFP_Pos)   /*!< GPD_MFP1 PD7 setting for UART1_nRTS    \hideinitializer */


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
  *             - \ref SYS_BODCTL_BODVL_2_3V
  *             - \ref SYS_BODCTL_BODVL_2_7V
  *             - \ref SYS_BODCTL_BODVL_3_7V
  *             - \ref SYS_BODCTL_BODVL_4_4V
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
