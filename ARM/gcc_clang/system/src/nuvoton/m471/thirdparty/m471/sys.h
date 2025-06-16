/**************************************************************************//**
 * @file     sys.h
 * @version  V3.0
 * @brief    M471 Series SYS Driver Header File
 *
 * SPDX-License-Identifier: Apache-2.0
 * Copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/
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
#define PDMA_RST            ((0UL<<24) | SYS_IPRST0_PDMARST_Pos)        /*!< Reset PDMA \hideinitializer*/
#define CRC_RST             ((0UL<<24) | SYS_IPRST0_CRCRST_Pos)         /*!< Reset CRC \hideinitializer */

#define GPIO_RST            ((4UL<<24) | SYS_IPRST1_GPIORST_Pos)        /*!< Reset GPIO \hideinitializer */
#define TMR0_RST            ((4UL<<24) | SYS_IPRST1_TMR0RST_Pos)        /*!< Reset TMR0 \hideinitializer */
#define TMR1_RST            ((4UL<<24) | SYS_IPRST1_TMR1RST_Pos)        /*!< Reset TMR1 \hideinitializer */
#define TMR2_RST            ((4UL<<24) | SYS_IPRST1_TMR2RST_Pos)        /*!< Reset TMR2 \hideinitializer */
#define TMR3_RST            ((4UL<<24) | SYS_IPRST1_TMR3RST_Pos)        /*!< Reset TMR3 \hideinitializer */
#define ACMP01_RST          ((4UL<<24) | SYS_IPRST1_ACMP01RST_Pos)      /*!< Reset ACMP01 \hideinitializer */
#define I2C0_RST            ((4UL<<24) | SYS_IPRST1_I2C0RST_Pos)        /*!< Reset I2C0 \hideinitializer */
#define I2C1_RST            ((4UL<<24) | SYS_IPRST1_I2C1RST_Pos)        /*!< Reset I2C1 \hideinitializer */
#define SPI0_RST            ((4UL<<24) | SYS_IPRST1_SPI0RST_Pos)        /*!< Reset SPI0 \hideinitializer */
#define SPI1_RST            ((4UL<<24) | SYS_IPRST1_SPI1RST_Pos)        /*!< Reset SPI1 \hideinitializer */
#define UART0_RST           ((4UL<<24) | SYS_IPRST1_UART0RST_Pos)       /*!< Reset UART0 \hideinitializer */
#define UART1_RST           ((4UL<<24) | SYS_IPRST1_UART1RST_Pos)       /*!< Reset UART1 \hideinitializer */
#define UART2_RST           ((4UL<<24) | SYS_IPRST1_UART2RST_Pos)       /*!< Reset UART2 \hideinitializer */
#define UART3_RST           ((4UL<<24) | SYS_IPRST1_UART3RST_Pos)       /*!< Reset UART3 \hideinitializer */
#define UART4_RST           ((4UL<<24) | SYS_IPRST1_UART4RST_Pos)       /*!< Reset UART4 \hideinitializer */
#define UART5_RST           ((4UL<<24) | SYS_IPRST1_UART5RST_Pos)       /*!< Reset UART5 \hideinitializer */
#define EADC_RST            ((4UL<<24) | SYS_IPRST1_EADCRST_Pos)        /*!< Reset EADC \hideinitializer */

#define DAC_RST             ((8UL<<24) | SYS_IPRST2_DACRST_Pos)         /*!< Reset DAC \hideinitializer */
#define CIR0_RST            ((8UL<<24) | SYS_IPRST2_CIR0RST_Pos)        /*!< Reset CIR0 \hideinitializer */
#define EPWM0_RST           ((8UL<<24) | SYS_IPRST2_EPWM0RST_Pos)       /*!< Reset EPWM0 \hideinitializer */
#define EPWM1_RST           ((8UL<<24) | SYS_IPRST2_EPWM1RST_Pos)       /*!< Reset EPWM1 \hideinitializer */
#define BPWM0_RST           ((8UL<<24) | SYS_IPRST2_BPWM0RST_Pos)       /*!< Reset BPWM0 \hideinitializer */
#define BPWM1_RST           ((8UL<<24) | SYS_IPRST2_BPWM1RST_Pos)       /*!< Reset BPWM1 \hideinitializer */
#define PRNG_RST            ((8UL<<24) | SYS_IPRST2_PRNGRST_Pos)        /*!< Reset PRNG \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  Brown Out Detector Threshold Voltage Selection constant definitions.                                   */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_BODCTL_BOD_RST_EN           (1UL << SYS_BODCTL_BODRSTEN_Pos)    /*!< Brown-out Reset Enable \hideinitializer */
#define SYS_BODCTL_BOD_INTERRUPT_EN     (0UL << SYS_BODCTL_BODRSTEN_Pos)    /*!< Brown-out Interrupt Enable \hideinitializer */

#define SYS_BODCTL_BODVL_4_4V           (3UL << SYS_BODCTL_BODVL_Pos)       /*!< Setting Brown Out Detector Threshold Voltage as 4.4V \hideinitializer */
#define SYS_BODCTL_BODVL_3_7V           (2UL << SYS_BODCTL_BODVL_Pos)       /*!< Setting Brown Out Detector Threshold Voltage as 3.7V \hideinitializer */
#define SYS_BODCTL_BODVL_2_7V           (1UL << SYS_BODCTL_BODVL_Pos)       /*!< Setting Brown Out Detector Threshold Voltage as 2.7V \hideinitializer */
#define SYS_BODCTL_BODVL_2_4V           (0UL << SYS_BODCTL_BODVL_Pos)       /*!< Setting Brown Out Detector Threshold Voltage as 2.4V \hideinitializer */

#define SYS_BODCTL_LVRDGSEL_0HCLK       (0x0UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time Without de-glitch function.  \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_4HCLK       (0x1UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 4HCLK            \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_8HCLK       (0x2UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 8HCLK            \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_16HCLK      (0x3UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 16HCLK           \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_32HCLK      (0x4UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 32HCLK           \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_64HCLK      (0x5UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 64HCLK           \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_128HCLK     (0x6UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 128HCLK          \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_256HCLK     (0x7UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 256HCLK          \hideinitializer */

#define SYS_BODCTL_BODDGSEL_0HCLK       (0x0UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is sampled by RC10K clock.   \hideinitializer */
#define SYS_BODCTL_BODDGSEL_4HCLK       (0x1UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 4HCLK            \hideinitializer */
#define SYS_BODCTL_BODDGSEL_8HCLK       (0x2UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 8HCLK            \hideinitializer */
#define SYS_BODCTL_BODDGSEL_16HCLK      (0x3UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 16HCLK           \hideinitializer */
#define SYS_BODCTL_BODDGSEL_32HCLK      (0x4UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 32HCLK           \hideinitializer */
#define SYS_BODCTL_BODDGSEL_64HCLK      (0x5UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 64HCLK           \hideinitializer */
#define SYS_BODCTL_BODDGSEL_128HCLK     (0x6UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 128HCLK          \hideinitializer */
#define SYS_BODCTL_BODDGSEL_256HCLK     (0x7UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 256HCLK          \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  VREFCTL constant definitions. (Write-Protection Register)                                              */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_VREFCTL_VREF_PIN        (0x0UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = Vref pin \hideinitializer */
#define SYS_VREFCTL_VREF_2_0V       (0x2UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 2.048V \hideinitializer */
#define SYS_VREFCTL_VREF_2_5V       (0x6UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 2.56V \hideinitializer */
#define SYS_VREFCTL_VREF_3_0V       (0xAUL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 3.072V \hideinitializer */
#define SYS_VREFCTL_VREF_4_0V       (0xEUL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 4.096V \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  PLCTL constant definitions. (Write-Protection Register)                                                */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_PLCTL_PLSEL_PL0     (0x0UL<<SYS_PLCTL_PLSEL_Pos)   /*!< Set power level to power level 0 */
#define SYS_PLCTL_PLSEL_PL1     (0x1UL<<SYS_PLCTL_PLSEL_Pos)   /*!< Set power level to power level 1 */


/*---------------------------------------------------------------------------------------------------------*/
/*  Multi-Function constant definitions.                                                                   */
/*---------------------------------------------------------------------------------------------------------*/
/* How to use below #define?
Example 1: If user want to set PA.0 as SC0_CLK in initial function,
           user can issue following command to achieve it.

           SYS->GPA_MFPL  = (SYS->GPA_MFPL & (~SYS_GPA_MFPL_PA0MFP_Msk) ) | SYS_GPA_MFPL_PA0_MFP_SC0_CLK  ;

*/
/********************* Bit definition of GPA_MFPL register **********************/
#define SYS_GPA_MFPL_PA0MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPL_PA0MFP_SPI0_MOSI         (0x04UL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< 1st SPI0 MOSI (Master Out, Slave In) pin. \hideinitializer */
#define SYS_GPA_MFPL_PA0MFP_UART0_RXD         (0x07UL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< Data receiver input pin for UART0. \hideinitializer */
#define SYS_GPA_MFPL_PA0MFP_UART1_nRTS        (0x08UL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< Request to Send output pin for UART1. \hideinitializer */
#define SYS_GPA_MFPL_PA0MFP_BPWM0_CH0         (0x0CUL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< BPWM0 channel0 output/capture input. \hideinitializer */
#define SYS_GPA_MFPL_PA0MFP_EPWM0_CH5         (0x0DUL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< EPWM0 channel5 output/capture input. \hideinitializer */
#define SYS_GPA_MFPL_PA0MFP_DAC0_ST           (0x0FUL<<SYS_GPA_MFPL_PA0MFP_Pos)  /*!< DAC0 external trigger input. \hideinitializer */

#define SYS_GPA_MFPL_PA1MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPL_PA1MFP_SPI0_MISO         (0x04UL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< 1st SPI0 MISO (Master In, Slave Out) pin. \hideinitializer */
#define SYS_GPA_MFPL_PA1MFP_UART0_TXD         (0x07UL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< Data transmitter output pin for UART0. \hideinitializer */
#define SYS_GPA_MFPL_PA1MFP_UART1_nCTS        (0x08UL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< Clear to Send input pin for UART1. \hideinitializer */
#define SYS_GPA_MFPL_PA1MFP_BPWM0_CH1         (0x0CUL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< BPWM0 channel1 output/capture input. \hideinitializer */
#define SYS_GPA_MFPL_PA1MFP_EPWM0_CH4         (0x0DUL<<SYS_GPA_MFPL_PA1MFP_Pos)  /*!< EPWM0 channel4 output/capture input. \hideinitializer */

#define SYS_GPA_MFPL_PA2MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPL_PA2MFP_SPI0_CLK          (0x04UL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< SPI0 serial clock pin. \hideinitializer */
#define SYS_GPA_MFPL_PA2MFP_UART4_RXD         (0x07UL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< Data receiver input pin for UART4. \hideinitializer */
#define SYS_GPA_MFPL_PA2MFP_UART1_RXD         (0x08UL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< Data receiver input pin for UART1. \hideinitializer */
#define SYS_GPA_MFPL_PA2MFP_I2C1_SDA          (0x09UL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< I2C1 data input/output pin. \hideinitializer */
#define SYS_GPA_MFPL_PA2MFP_I2C0_SMBSUS       (0x0AUL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< I2C0 SMBus SMBSUS# pin (PMBus CONTROL pin) \hideinitializer */
#define SYS_GPA_MFPL_PA2MFP_BPWM0_CH2         (0x0CUL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< BPWM0 channel2 output/capture input. \hideinitializer */
#define SYS_GPA_MFPL_PA2MFP_EPWM0_CH3         (0x0DUL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< EPWM0 channel3 output/capture input. \hideinitializer */
#define SYS_GPA_MFPL_PA2MFP_CIR0_RXD          (0x0FUL<<SYS_GPA_MFPL_PA2MFP_Pos)  /*!< Data receiver input pin for CIR0. \hideinitializer */

#define SYS_GPA_MFPL_PA3MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_SPI0_SS           (0x04UL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< 1st SPI0 slave select pin. \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_UART4_TXD         (0x07UL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< Data transmitter output pin for UART4. \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_UART1_TXD         (0x08UL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< Data transmitter output pin for UART1. \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_I2C1_SCL          (0x09UL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< I2C1 clock pin. \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_I2C0_SMBAL        (0x0AUL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< I2C0 SMBus SMBALTER# pin. \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_CLKO              (0x0BUL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< Clock Output pin. \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_BPWM0_CH3         (0x0CUL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< BPWM0 channel3 output/capture input. \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_EPWM0_CH2         (0x0DUL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< EPWM0 channel2 output/capture input. \hideinitializer */
#define SYS_GPA_MFPL_PA3MFP_EPWM1_BRAKE1      (0x0FUL<<SYS_GPA_MFPL_PA3MFP_Pos)  /*!< Brake input pin 1 of EPWM1. \hideinitializer */

#define SYS_GPA_MFPL_PA4MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPL_PA4MFP_SPI0_I2SMCLK      (0x04UL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< SPI0 I2S master clock output pin. \hideinitializer */
#define SYS_GPA_MFPL_PA4MFP_UART0_nRTS        (0x07UL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< Request to Send output pin for UART0. \hideinitializer */
#define SYS_GPA_MFPL_PA4MFP_UART5_RXD         (0x08UL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< Data receiver input pin for UART5. \hideinitializer */
#define SYS_GPA_MFPL_PA4MFP_I2C0_SDA          (0x09UL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< I2C0 data input/output pin. \hideinitializer */
#define SYS_GPA_MFPL_PA4MFP_UART0_RXD         (0x0BUL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< Data receiver input pin for UART0. \hideinitializer */
#define SYS_GPA_MFPL_PA4MFP_BPWM0_CH4         (0x0CUL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< BPWM0 channel4 output/capture input. \hideinitializer */
#define SYS_GPA_MFPL_PA4MFP_EPWM0_CH1         (0x0DUL<<SYS_GPA_MFPL_PA4MFP_Pos)  /*!< EPWM0 channel1 output/capture input. \hideinitializer */

#define SYS_GPA_MFPL_PA5MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPL_PA5MFP_SPI1_I2SMCLK      (0x04UL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< SPI1 I2S master clock output pin. \hideinitializer */
#define SYS_GPA_MFPL_PA5MFP_UART0_nCTS        (0x07UL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< Clear to Send input pin for UART0. \hideinitializer */
#define SYS_GPA_MFPL_PA5MFP_UART5_TXD         (0x08UL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< Data transmitter output pin for UART5. \hideinitializer */
#define SYS_GPA_MFPL_PA5MFP_I2C0_SCL          (0x09UL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< I2C0 clock pin. \hideinitializer */
#define SYS_GPA_MFPL_PA5MFP_UART0_TXD         (0x0BUL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< Data transmitter output pin for UART0. \hideinitializer */
#define SYS_GPA_MFPL_PA5MFP_BPWM0_CH5         (0x0CUL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< BPWM0 channel5 output/capture input. \hideinitializer */
#define SYS_GPA_MFPL_PA5MFP_EPWM0_CH0         (0x0DUL<<SYS_GPA_MFPL_PA5MFP_Pos)  /*!< EPWM0 channel0 output/capture input. \hideinitializer */

#define SYS_GPA_MFPL_PA6MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPL_PA6MFP_SPI1_SS           (0x04UL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< 1st SPI1 slave select pin. \hideinitializer */
#define SYS_GPA_MFPL_PA6MFP_UART0_RXD         (0x07UL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< Data receiver input pin for UART0. \hideinitializer */
#define SYS_GPA_MFPL_PA6MFP_I2C1_SDA          (0x08UL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< I2C1 data input/output pin. \hideinitializer */
#define SYS_GPA_MFPL_PA6MFP_EPWM1_CH5         (0x0BUL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< EPWM1 channel5 output/capture input. \hideinitializer */
#define SYS_GPA_MFPL_PA6MFP_BPWM1_CH3         (0x0CUL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< BPWM1 channel3 output/capture input. \hideinitializer */
#define SYS_GPA_MFPL_PA6MFP_ACMP1_WLAT        (0x0DUL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< Analog comparator1 window latch input pin. \hideinitializer */
#define SYS_GPA_MFPL_PA6MFP_TM3               (0x0EUL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< Timer3 event counter input / toggle output  \hideinitializer */
#define SYS_GPA_MFPL_PA6MFP_INT0              (0x0FUL<<SYS_GPA_MFPL_PA6MFP_Pos)  /*!< External interrupt0 input pin. \hideinitializer */

#define SYS_GPA_MFPL_PA7MFP_GPIO              (0x00UL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPL_PA7MFP_SPI1_CLK          (0x04UL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< SPI1 serial clock pin. \hideinitializer */
#define SYS_GPA_MFPL_PA7MFP_UART0_TXD         (0x07UL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< Data transmitter output pin for UART0. \hideinitializer */
#define SYS_GPA_MFPL_PA7MFP_I2C1_SCL          (0x08UL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< I2C1 clock pin. \hideinitializer */
#define SYS_GPA_MFPL_PA7MFP_EPWM1_CH4         (0x0BUL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< EPWM1 channel4 output/capture input. \hideinitializer */
#define SYS_GPA_MFPL_PA7MFP_BPWM1_CH2         (0x0CUL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< BPWM1 channel2 output/capture input. \hideinitializer */
#define SYS_GPA_MFPL_PA7MFP_ACMP0_WLAT        (0x0DUL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< Analog comparator0 window latch input pin. \hideinitializer */
#define SYS_GPA_MFPL_PA7MFP_TM2               (0x0EUL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< Timer2 event counter input / toggle output  \hideinitializer */
#define SYS_GPA_MFPL_PA7MFP_INT1              (0x0FUL<<SYS_GPA_MFPL_PA7MFP_Pos)  /*!< External interrupt1 input pin. \hideinitializer */

/********************* Bit definition of GPA_MFPH register **********************/
#define SYS_GPA_MFPH_PA8MFP_GPIO              (0x00UL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPH_PA8MFP_EADC0_CH20        (0x01UL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< EADC0 channel 20 analog input. \hideinitializer */
#define SYS_GPA_MFPH_PA8MFP_UART1_RXD         (0x07UL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< Data receiver input pin for UART1. \hideinitializer */
#define SYS_GPA_MFPH_PA8MFP_BPWM0_CH3         (0x09UL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< BPWM0 channel3 output/capture input. \hideinitializer */
#define SYS_GPA_MFPH_PA8MFP_TM3_EXT           (0x0DUL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< Timer3 event counter input / toggle output  \hideinitializer */
#define SYS_GPA_MFPH_PA8MFP_INT4              (0x0FUL<<SYS_GPA_MFPH_PA8MFP_Pos)  /*!< External interrupt4 input pin. \hideinitializer */

#define SYS_GPA_MFPH_PA9MFP_GPIO              (0x00UL<<SYS_GPA_MFPH_PA9MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPH_PA9MFP_EADC0_CH21        (0x01UL<<SYS_GPA_MFPH_PA9MFP_Pos)  /*!< EADC0 channel 21 analog input. \hideinitializer */
#define SYS_GPA_MFPH_PA9MFP_UART1_TXD         (0x07UL<<SYS_GPA_MFPH_PA9MFP_Pos)  /*!< Data transmitter output pin for UART1. \hideinitializer */
#define SYS_GPA_MFPH_PA9MFP_BPWM0_CH2         (0x09UL<<SYS_GPA_MFPH_PA9MFP_Pos)  /*!< BPWM0 channel2 output/capture input. \hideinitializer */
#define SYS_GPA_MFPH_PA9MFP_TM2_EXT           (0x0DUL<<SYS_GPA_MFPH_PA9MFP_Pos)  /*!< Timer2 event counter input / toggle output  \hideinitializer */

#define SYS_GPA_MFPH_PA10MFP_GPIO             (0x00UL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPH_PA10MFP_ACMP1_P0         (0x01UL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!< Analog comparator1 positive input pin. \hideinitializer */
#define SYS_GPA_MFPH_PA10MFP_EADC0_CH22       (0x01UL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!< EADC0 channel 22 analog input. \hideinitializer */
#define SYS_GPA_MFPH_PA10MFP_BPWM0_CH1        (0x09UL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!< BPWM0 channel1 output/capture input. \hideinitializer */
#define SYS_GPA_MFPH_PA10MFP_TM1_EXT          (0x0DUL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!< Timer1 event counter input / toggle output  \hideinitializer */
#define SYS_GPA_MFPH_PA10MFP_DAC0_ST          (0x0EUL<<SYS_GPA_MFPH_PA10MFP_Pos) /*!< DAC0 external trigger input. \hideinitializer */

#define SYS_GPA_MFPH_PA11MFP_GPIO             (0x00UL<<SYS_GPA_MFPH_PA11MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPH_PA11MFP_ACMP0_P0         (0x01UL<<SYS_GPA_MFPH_PA11MFP_Pos) /*!< Analog comparator0 positive input pin. \hideinitializer */
#define SYS_GPA_MFPH_PA11MFP_EADC0_CH23       (0x01UL<<SYS_GPA_MFPH_PA11MFP_Pos) /*!< EADC0 channel 23 analog input. \hideinitializer */
#define SYS_GPA_MFPH_PA11MFP_BPWM0_CH0        (0x09UL<<SYS_GPA_MFPH_PA11MFP_Pos) /*!< BPWM0 channel0 output/capture input. \hideinitializer */
#define SYS_GPA_MFPH_PA11MFP_EPWM0_SYNC_OUT   (0x0AUL<<SYS_GPA_MFPH_PA11MFP_Pos) /*!< EPWM0 counter synchronous trigger output pin. \hideinitializer */
#define SYS_GPA_MFPH_PA11MFP_TM0_EXT          (0x0DUL<<SYS_GPA_MFPH_PA11MFP_Pos) /*!< Timer0 event counter input / toggle output \hideinitializer */

#define SYS_GPA_MFPH_PA12MFP_GPIO             (0x00UL<<SYS_GPA_MFPH_PA12MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPH_PA12MFP_UART4_TXD        (0x03UL<<SYS_GPA_MFPH_PA12MFP_Pos) /*!< Data transmitter output pin for UART4. \hideinitializer */
#define SYS_GPA_MFPH_PA12MFP_I2C1_SCL         (0x04UL<<SYS_GPA_MFPH_PA12MFP_Pos) /*!< I2C1 clock pin. \hideinitializer */
#define SYS_GPA_MFPH_PA12MFP_BPWM1_CH2        (0x0BUL<<SYS_GPA_MFPH_PA12MFP_Pos) /*!< BPWM1 channel2 output/capture input. \hideinitializer */

#define SYS_GPA_MFPH_PA13MFP_GPIO             (0x00UL<<SYS_GPA_MFPH_PA13MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPH_PA13MFP_UART4_RXD        (0x03UL<<SYS_GPA_MFPH_PA13MFP_Pos) /*!< Data receiver input pin for UART4. \hideinitializer */
#define SYS_GPA_MFPH_PA13MFP_I2C1_SDA         (0x04UL<<SYS_GPA_MFPH_PA13MFP_Pos) /*!< I2C1 data input/output pin. \hideinitializer */
#define SYS_GPA_MFPH_PA13MFP_BPWM1_CH3        (0x0BUL<<SYS_GPA_MFPH_PA13MFP_Pos) /*!< BPWM1 channel3 output/capture input. \hideinitializer */

#define SYS_GPA_MFPH_PA14MFP_GPIO             (0x00UL<<SYS_GPA_MFPH_PA14MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPH_PA14MFP_UART0_TXD        (0x03UL<<SYS_GPA_MFPH_PA14MFP_Pos) /*!< Data transmitter output pin for UART0. \hideinitializer */
#define SYS_GPA_MFPH_PA14MFP_BPWM1_CH4        (0x0BUL<<SYS_GPA_MFPH_PA14MFP_Pos) /*!< BPWM1 channel4 output/capture input. \hideinitializer */

#define SYS_GPA_MFPH_PA15MFP_GPIO             (0x00UL<<SYS_GPA_MFPH_PA15MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPA_MFPH_PA15MFP_UART0_RXD        (0x03UL<<SYS_GPA_MFPH_PA15MFP_Pos) /*!< Data receiver input pin for UART0. \hideinitializer */
#define SYS_GPA_MFPH_PA15MFP_BPWM1_CH5        (0x0BUL<<SYS_GPA_MFPH_PA15MFP_Pos) /*!< BPWM1 channel5 output/capture input. \hideinitializer */
#define SYS_GPA_MFPH_PA15MFP_EPWM0_SYNC_IN    (0x0CUL<<SYS_GPA_MFPH_PA15MFP_Pos) /*!< EPWM0 counter synchronous trigger input pin. \hideinitializer */

/********************* Bit definition of GPB_MFPL register **********************/
#define SYS_GPB_MFPL_PB0MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPL_PB0MFP_EADC0_CH0         (0x01UL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< EADC0 channel0 analog input. \hideinitializer */
#define SYS_GPB_MFPL_PB0MFP_UART2_RXD         (0x07UL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< Data receiver input pin for UART2. \hideinitializer */
#define SYS_GPB_MFPL_PB0MFP_SPI0_I2SMCLK      (0x08UL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< SPI0 I2S master clock output pin. \hideinitializer */
#define SYS_GPB_MFPL_PB0MFP_I2C1_SDA          (0x09UL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< I2C1 data input/output pin. \hideinitializer */
#define SYS_GPB_MFPL_PB0MFP_EPWM0_CH5         (0x0BUL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< EPWM0 channel5 output/capture input. \hideinitializer */
#define SYS_GPB_MFPL_PB0MFP_EPWM1_CH5         (0x0CUL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< EPWM1 channel5 output/capture input. \hideinitializer */
#define SYS_GPB_MFPL_PB0MFP_EPWM0_BRAKE1      (0x0DUL<<SYS_GPB_MFPL_PB0MFP_Pos)  /*!< Brake input pin 1 of EPWM0. \hideinitializer */

#define SYS_GPB_MFPL_PB1MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB1MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPL_PB1MFP_EADC0_CH1         (0x01UL<<SYS_GPB_MFPL_PB1MFP_Pos)  /*!< EADC0 channel1 analog input. \hideinitializer */
#define SYS_GPB_MFPL_PB1MFP_SPI1_I2SMCLK      (0x05UL<<SYS_GPB_MFPL_PB1MFP_Pos)  /*!< SPI1 I2S master clock output pin. \hideinitializer */
#define SYS_GPB_MFPL_PB1MFP_UART2_TXD         (0x07UL<<SYS_GPB_MFPL_PB1MFP_Pos)  /*!< Data transmitter output pin for UART2. \hideinitializer */
#define SYS_GPB_MFPL_PB1MFP_I2C1_SCL          (0x09UL<<SYS_GPB_MFPL_PB1MFP_Pos)  /*!< I2C1 clock pin. \hideinitializer */
#define SYS_GPB_MFPL_PB1MFP_EPWM0_CH4         (0x0BUL<<SYS_GPB_MFPL_PB1MFP_Pos)  /*!< EPWM0 channel4 output/capture input. \hideinitializer */
#define SYS_GPB_MFPL_PB1MFP_EPWM1_CH4         (0x0CUL<<SYS_GPB_MFPL_PB1MFP_Pos)  /*!< EPWM1 channel4 output/capture input. \hideinitializer */
#define SYS_GPB_MFPL_PB1MFP_EPWM0_BRAKE0      (0x0DUL<<SYS_GPB_MFPL_PB1MFP_Pos)  /*!< Brake input pin 0 of EPWM0. \hideinitializer */

#define SYS_GPB_MFPL_PB2MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_ACMP0_P1          (0x01UL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< Analog comparator0 positive input pin. \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_EADC0_CH2         (0x01UL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< EADC0 channel2 analog input. \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_SPI1_SS           (0x05UL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< 1st SPI1 slave select pin. \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_UART1_RXD         (0x06UL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< Data receiver input pin for UART1. \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_UART5_nCTS        (0x07UL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< Clear to Send input pin for UART5. \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_EPWM0_CH3         (0x0BUL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< EPWM0 channel3 output/capture input. \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_I2C1_SDA          (0x0CUL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< I2C1 data input/output pin. */
#define SYS_GPB_MFPL_PB2MFP_TM3               (0x0EUL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< Timer3 event counter input / toggle output  \hideinitializer */
#define SYS_GPB_MFPL_PB2MFP_INT3              (0x0FUL<<SYS_GPB_MFPL_PB2MFP_Pos)  /*!< External interrupt3 input pin. \hideinitializer */

#define SYS_GPB_MFPL_PB3MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_ACMP0_N           (0x01UL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< Analog comparator0 negative input pin. \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_EADC0_CH3         (0x01UL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< EADC0 channel3 analog input. \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_SPI1_CLK          (0x05UL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< SPI1 serial clock pin. \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_UART1_TXD         (0x06UL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< Data transmitter output pin for UART1. \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_UART5_nRTS        (0x07UL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< Request to Send output pin for UART5. \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_EPWM0_CH2         (0x0BUL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< EPWM0 channel2 output/capture input. \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_I2C1_SCL          (0x0CUL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< I2C1 clock pin. */
#define SYS_GPB_MFPL_PB3MFP_EPWM0_BRAKE0      (0x0DUL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< Brake input pin 0 of EPWM0. \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_TM2               (0x0EUL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< Timer2 event counter input / toggle output  \hideinitializer */
#define SYS_GPB_MFPL_PB3MFP_INT2              (0x0FUL<<SYS_GPB_MFPL_PB3MFP_Pos)  /*!< External interrupt2 input pin. \hideinitializer */

#define SYS_GPB_MFPL_PB4MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPL_PB4MFP_ACMP1_P1          (0x01UL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< Analog comparator1 positive input pin. \hideinitializer */
#define SYS_GPB_MFPL_PB4MFP_EADC0_CH4         (0x01UL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< EADC0 channel4 analog input. \hideinitializer */
#define SYS_GPB_MFPL_PB4MFP_SPI1_MOSI         (0x05UL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. \hideinitializer */
#define SYS_GPB_MFPL_PB4MFP_I2C0_SDA          (0x06UL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< I2C0 data input/output pin. \hideinitializer */
#define SYS_GPB_MFPL_PB4MFP_UART5_RXD         (0x07UL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< Data receiver input pin for UART5. \hideinitializer */
#define SYS_GPB_MFPL_PB4MFP_EPWM0_CH1         (0x0BUL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< EPWM0 channel1 output/capture input. \hideinitializer */
#define SYS_GPB_MFPL_PB4MFP_UART2_RXD         (0x0CUL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< Data receiver input pin for UART2. \hideinitializer */
#define SYS_GPB_MFPL_PB4MFP_TM1               (0x0EUL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< Timer1 event counter input / toggle output  \hideinitializer */
#define SYS_GPB_MFPL_PB4MFP_INT1              (0x0FUL<<SYS_GPB_MFPL_PB4MFP_Pos)  /*!< External interrupt1 input pin. \hideinitializer */

#define SYS_GPB_MFPL_PB5MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPL_PB5MFP_ACMP1_N           (0x01UL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< Analog comparator1 negative input pin. \hideinitializer */
#define SYS_GPB_MFPL_PB5MFP_EADC0_CH5         (0x01UL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< EADC0 channel5 analog input. \hideinitializer */
#define SYS_GPB_MFPL_PB5MFP_SPI1_MISO         (0x05UL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< 1st SPI1 MISO (Master In, Slave Out) pin. \hideinitializer */
#define SYS_GPB_MFPL_PB5MFP_I2C0_SCL          (0x06UL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< I2C0 clock pin. \hideinitializer */
#define SYS_GPB_MFPL_PB5MFP_UART5_TXD         (0x07UL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< Data transmitter output pin for UART5. \hideinitializer */
#define SYS_GPB_MFPL_PB5MFP_EPWM0_CH0         (0x0BUL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< EPWM0 channel0 output/capture input. \hideinitializer */
#define SYS_GPB_MFPL_PB5MFP_UART2_TXD         (0x0CUL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< Data transmitter output pin for UART2. \hideinitializer */
#define SYS_GPB_MFPL_PB5MFP_TM0               (0x0EUL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< Timer0 event counter input / toggle output  \hideinitializer */
#define SYS_GPB_MFPL_PB5MFP_INT0              (0x0FUL<<SYS_GPB_MFPL_PB5MFP_Pos)  /*!< External interrupt0 input pin. \hideinitializer */

#define SYS_GPB_MFPL_PB6MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPL_PB6MFP_EADC0_CH6         (0x01UL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< EADC0 channel6 analog input. \hideinitializer */
#define SYS_GPB_MFPL_PB6MFP_UART1_RXD         (0x06UL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< Data receiver input pin for UART1. \hideinitializer */
#define SYS_GPB_MFPL_PB6MFP_BPWM1_CH5         (0x0AUL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< BPWM1 channel5 output/capture input. \hideinitializer */
#define SYS_GPB_MFPL_PB6MFP_EPWM1_BRAKE1      (0x0BUL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< Brake input pin 1 of EPWM1. \hideinitializer */
#define SYS_GPB_MFPL_PB6MFP_EPWM1_CH5         (0x0CUL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< EPWM1 channel5 output/capture input. \hideinitializer */
#define SYS_GPB_MFPL_PB6MFP_INT4              (0x0DUL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< External interrupt4 input pin. \hideinitializer */
#define SYS_GPB_MFPL_PB6MFP_ACMP1_O           (0x0FUL<<SYS_GPB_MFPL_PB6MFP_Pos)  /*!< Analog comparator1 output. \hideinitializer */

#define SYS_GPB_MFPL_PB7MFP_GPIO              (0x00UL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPL_PB7MFP_EADC0_CH7         (0x01UL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< EADC0 channel7 analog input. \hideinitializer */
#define SYS_GPB_MFPL_PB7MFP_UART1_TXD         (0x06UL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< Data transmitter output pin for UART1. \hideinitializer */
#define SYS_GPB_MFPL_PB7MFP_BPWM1_CH4         (0x0AUL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< BPWM1 channel4 output/capture input. \hideinitializer */
#define SYS_GPB_MFPL_PB7MFP_EPWM1_BRAKE0      (0x0BUL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< Brake input pin 0 of EPWM1. \hideinitializer */
#define SYS_GPB_MFPL_PB7MFP_EPWM1_CH4         (0x0CUL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< EPWM1 channel4 output/capture input. \hideinitializer */
#define SYS_GPB_MFPL_PB7MFP_INT5              (0x0DUL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< External interrupt5 input pin. \hideinitializer */
#define SYS_GPB_MFPL_PB7MFP_ACMP0_O           (0x0FUL<<SYS_GPB_MFPL_PB7MFP_Pos)  /*!< Analog comparator0 output. \hideinitializer */

/********************* Bit definition of GPB_MFPH register **********************/
#define SYS_GPB_MFPH_PB8MFP_GPIO              (0x00UL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPH_PB8MFP_EADC0_CH8         (0x01UL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< EADC0 channel8 analog input. \hideinitializer */
#define SYS_GPB_MFPH_PB8MFP_UART0_RXD         (0x05UL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< Data receiver input pin for UART0. \hideinitializer */
#define SYS_GPB_MFPH_PB8MFP_UART1_nRTS        (0x06UL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< Request to Send output pin for UART1. \hideinitializer */
#define SYS_GPB_MFPH_PB8MFP_I2C1_SMBSUS       (0x07UL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< I2C1 SMBus SMBSUS# pin (PMBus CONTROL pin) \hideinitializer */
#define SYS_GPB_MFPH_PB8MFP_I2C0_SDA          (0x09UL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< I2C0 data input/output pin.  \hideinitializer */
#define SYS_GPB_MFPH_PB8MFP_BPWM1_CH3         (0x0AUL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< BPWM1 channel3 output/capture input. \hideinitializer */
#define SYS_GPB_MFPH_PB8MFP_INT6              (0x0DUL<<SYS_GPB_MFPH_PB8MFP_Pos)  /*!< External interrupt6 input pin. \hideinitializer */

#define SYS_GPB_MFPH_PB9MFP_GPIO              (0x00UL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPH_PB9MFP_EADC0_CH9         (0x01UL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< EADC0 channel9 analog input. \hideinitializer */
#define SYS_GPB_MFPH_PB9MFP_UART0_TXD         (0x05UL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< Data transmitter output pin for UART0. \hideinitializer */
#define SYS_GPB_MFPH_PB9MFP_UART1_nCTS        (0x06UL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< Clear to Send input pin for UART1. \hideinitializer */
#define SYS_GPB_MFPH_PB9MFP_I2C1_SMBAL        (0x07UL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< I2C1 SMBus SMBALTER# pin  \hideinitializer */
#define SYS_GPB_MFPH_PB9MFP_I2C0_SCL          (0x09UL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< I2C0 clock pin. \hideinitializer */
#define SYS_GPB_MFPH_PB9MFP_BPWM1_CH2         (0x0AUL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< BPWM1 channel2 output/capture input. \hideinitializer */
#define SYS_GPB_MFPH_PB9MFP_INT7              (0x0DUL<<SYS_GPB_MFPH_PB9MFP_Pos)  /*!< External interrupt7 input pin. \hideinitializer */

#define SYS_GPB_MFPH_PB10MFP_GPIO             (0x00UL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPH_PB10MFP_EADC0_CH10       (0x01UL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!< EADC0 channel1 analog input. \hideinitializer */
#define SYS_GPB_MFPH_PB10MFP_UART0_nRTS       (0x05UL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!< Request to Send output pin for UART0. \hideinitializer */
#define SYS_GPB_MFPH_PB10MFP_UART4_RXD        (0x06UL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!< Data receiver input pin for UART4. \hideinitializer */
#define SYS_GPB_MFPH_PB10MFP_I2C1_SDA         (0x07UL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!< I2C1 data input/output pin. \hideinitializer */
#define SYS_GPB_MFPH_PB10MFP_BPWM1_CH1        (0x0AUL<<SYS_GPB_MFPH_PB10MFP_Pos) /*!< BPWM1 channel1 output/capture input. \hideinitializer */

#define SYS_GPB_MFPH_PB11MFP_GPIO             (0x00UL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPH_PB11MFP_EADC0_CH11       (0x01UL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< EADC0 channel1 analog input. \hideinitializer */
#define SYS_GPB_MFPH_PB11MFP_UART0_nCTS       (0x05UL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< Clear to Send input pin for UART0. \hideinitializer */
#define SYS_GPB_MFPH_PB11MFP_UART4_TXD        (0x06UL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< Data transmitter output pin for UART4. \hideinitializer */
#define SYS_GPB_MFPH_PB11MFP_I2C1_SCL         (0x07UL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< I2C1 clock pin. \hideinitializer */
#define SYS_GPB_MFPH_PB11MFP_SPI0_I2SMCLK     (0x09UL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< SPI0 I2S master clock output pin. \hideinitializer */
#define SYS_GPB_MFPH_PB11MFP_BPWM1_CH0        (0x0AUL<<SYS_GPB_MFPH_PB11MFP_Pos) /*!< BPWM1 channel0 output/capture input. \hideinitializer */

#define SYS_GPB_MFPH_PB12MFP_GPIO             (0x00UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_ACMP0_P2         (0x01UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< Analog comparator0 positive input pin. \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_ACMP1_P2         (0x01UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< Analog comparator1 positive input pin. \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_DAC0_OUT         (0x01UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< DAC0 channel analog output. \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_EADC0_CH12       (0x01UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< EADC0 channel1 analog input. \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_SPI0_MOSI        (0x04UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< 1st SPI0 MOSI (Master Out, Slave In) pin. \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_UART0_RXD        (0x06UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< Data receiver input pin for UART0. \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_UART3_nCTS       (0x07UL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< Clear to Send input pin for UART3. \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_EPWM1_CH3        (0x0BUL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< EPWM1 channel3 output/capture input. \hideinitializer */
#define SYS_GPB_MFPH_PB12MFP_TM3_EXT          (0x0DUL<<SYS_GPB_MFPH_PB12MFP_Pos) /*!< Timer3 event counter input / toggle output  \hideinitializer */

#define SYS_GPB_MFPH_PB13MFP_GPIO             (0x00UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPH_PB13MFP_ACMP0_P3         (0x01UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< Analog comparator0 positive input pin. \hideinitializer */
#define SYS_GPB_MFPH_PB13MFP_ACMP1_P3         (0x01UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< Analog comparator1 positive input pin. \hideinitializer */
#define SYS_GPB_MFPH_PB13MFP_EADC0_CH13       (0x01UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< EADC0 channel1 analog input. \hideinitializer */
#define SYS_GPB_MFPH_PB13MFP_SPI0_MISO        (0x04UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< 1st SPI0 MISO (Master In, Slave Out) pin. \hideinitializer */
#define SYS_GPB_MFPH_PB13MFP_UART0_TXD        (0x06UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< Data transmitter output pin for UART0. \hideinitializer */
#define SYS_GPB_MFPH_PB13MFP_UART3_nRTS       (0x07UL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< Request to Send output pin for UART3. \hideinitializer */
#define SYS_GPB_MFPH_PB13MFP_EPWM1_CH2        (0x0BUL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< EPWM1 channel2 output/capture input. \hideinitializer */
#define SYS_GPB_MFPH_PB13MFP_TM2_EXT          (0x0DUL<<SYS_GPB_MFPH_PB13MFP_Pos) /*!< Timer2 event counter input / toggle output  \hideinitializer */

#define SYS_GPB_MFPH_PB14MFP_GPIO             (0x00UL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPH_PB14MFP_EADC0_CH14       (0x01UL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< EADC0 channel1 analog input. \hideinitializer */
#define SYS_GPB_MFPH_PB14MFP_SPI0_CLK         (0x04UL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< SPI0 serial clock pin. \hideinitializer */
#define SYS_GPB_MFPH_PB14MFP_UART0_nRTS       (0x06UL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< Request to Send output pin for UART0. \hideinitializer */
#define SYS_GPB_MFPH_PB14MFP_UART3_RXD        (0x07UL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< Data receiver input pin for UART3. \hideinitializer */
#define SYS_GPB_MFPH_PB14MFP_EPWM1_CH1        (0x0BUL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< EPWM1 channel1 output/capture input. \hideinitializer */
#define SYS_GPB_MFPH_PB14MFP_TM1_EXT          (0x0DUL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< Timer1 event counter input / toggle output  \hideinitializer */
#define SYS_GPB_MFPH_PB14MFP_CLKO             (0x0EUL<<SYS_GPB_MFPH_PB14MFP_Pos) /*!< Clock Output pin. \hideinitializer */

#define SYS_GPB_MFPH_PB15MFP_GPIO             (0x00UL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPB_MFPH_PB15MFP_EADC0_CH15       (0x01UL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< EADC0 channel1 analog input. \hideinitializer */
#define SYS_GPB_MFPH_PB15MFP_SPI0_SS          (0x04UL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< 1st SPI0 slave select pin. \hideinitializer */
#define SYS_GPB_MFPH_PB15MFP_UART0_nCTS       (0x06UL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< Clear to Send input pin for UART0. \hideinitializer */
#define SYS_GPB_MFPH_PB15MFP_UART3_TXD        (0x07UL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< Data transmitter output pin for UART3. \hideinitializer */
#define SYS_GPB_MFPH_PB15MFP_EPWM0_BRAKE1     (0x0AUL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< Brake input pin 1 of EPWM0. \hideinitializer */
#define SYS_GPB_MFPH_PB15MFP_EPWM1_CH0        (0x0BUL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< EPWM1 channel0 output/capture input. \hideinitializer */
#define SYS_GPB_MFPH_PB15MFP_TM0_EXT          (0x0DUL<<SYS_GPB_MFPH_PB15MFP_Pos) /*!< Timer0 event counter input / toggle output  \hideinitializer */

/********************* Bit definition of GPC_MFPL register **********************/
#define SYS_GPC_MFPL_PC0MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPC_MFPL_PC0MFP_SPI1_SS           (0x07UL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< 1st SPI1 slave select pin. \hideinitializer */
#define SYS_GPC_MFPL_PC0MFP_UART2_RXD         (0x08UL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< Data receiver input pin for UART2. \hideinitializer */
#define SYS_GPC_MFPL_PC0MFP_I2C0_SDA          (0x09UL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< I2C0 data input/output pin. \hideinitializer */
#define SYS_GPC_MFPL_PC0MFP_EPWM1_CH5         (0x0CUL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< EPWM1 channel5 output/capture input. \hideinitializer */
#define SYS_GPC_MFPL_PC0MFP_ACMP1_O           (0x0EUL<<SYS_GPC_MFPL_PC0MFP_Pos)  /*!< Analog comparator1 output. \hideinitializer */

#define SYS_GPC_MFPL_PC1MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPC_MFPL_PC1MFP_SPI1_CLK          (0x07UL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< SPI1 serial clock pin. \hideinitializer */
#define SYS_GPC_MFPL_PC1MFP_UART2_TXD         (0x08UL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< Data transmitter output pin for UART2. \hideinitializer */
#define SYS_GPC_MFPL_PC1MFP_I2C0_SCL          (0x09UL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< I2C0 clock pin. \hideinitializer */
#define SYS_GPC_MFPL_PC1MFP_EPWM1_CH4         (0x0CUL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< EPWM1 channel4 output/capture input. \hideinitializer */
#define SYS_GPC_MFPL_PC1MFP_ACMP0_O           (0x0EUL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< Analog comparator0 output. \hideinitializer */
#define SYS_GPC_MFPL_PC1MFP_EADC0_ST          (0x0FUL<<SYS_GPC_MFPL_PC1MFP_Pos)  /*!< EADC external trigger input. \hideinitializer */

#define SYS_GPC_MFPL_PC2MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPC_MFPL_PC2MFP_SPI1_MOSI         (0x07UL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. \hideinitializer */
#define SYS_GPC_MFPL_PC2MFP_UART2_nCTS        (0x08UL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!< Clear to Send input pin for UART2. \hideinitializer */
#define SYS_GPC_MFPL_PC2MFP_I2C0_SMBSUS       (0x09UL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!< I2C0 SMBus SMBSUS# pin (PMBus CONTROL pin)  \hideinitializer */
#define SYS_GPC_MFPL_PC2MFP_UART3_RXD         (0x0BUL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!< Data receiver input pin for UART3. \hideinitializer */
#define SYS_GPC_MFPL_PC2MFP_EPWM1_CH3         (0x0CUL<<SYS_GPC_MFPL_PC2MFP_Pos)  /*!< EPWM1 channel3 output/capture input. \hideinitializer */

#define SYS_GPC_MFPL_PC3MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPC_MFPL_PC3MFP_SPI1_MISO         (0x07UL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!< 1st SPI1 MISO (Master In, Slave Out) pin. \hideinitializer */
#define SYS_GPC_MFPL_PC3MFP_UART2_nRTS        (0x08UL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!< Request to Send output pin for UART2. \hideinitializer */
#define SYS_GPC_MFPL_PC3MFP_I2C0_SMBAL        (0x09UL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!< I2C0 SMBus SMBALTER# pin  \hideinitializer  */
#define SYS_GPC_MFPL_PC3MFP_UART3_TXD         (0x0BUL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!< Data transmitter output pin for UART3. \hideinitializer */
#define SYS_GPC_MFPL_PC3MFP_EPWM1_CH2         (0x0CUL<<SYS_GPC_MFPL_PC3MFP_Pos)  /*!< EPWM1 channel2 output/capture input. \hideinitializer */

#define SYS_GPC_MFPL_PC4MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPC_MFPL_PC4MFP_SPI1_I2SMCLK      (0x07UL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< SPI1 I2S master clock output pin. \hideinitializer */
#define SYS_GPC_MFPL_PC4MFP_UART2_RXD         (0x08UL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< Data receiver input pin for UART2. \hideinitializer */
#define SYS_GPC_MFPL_PC4MFP_I2C1_SDA          (0x09UL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< I2C1 data input/output pin. \hideinitializer */
#define SYS_GPC_MFPL_PC4MFP_UART4_RXD         (0x0BUL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< Data receiver input pin for UART4. \hideinitializer */
#define SYS_GPC_MFPL_PC4MFP_EPWM1_CH1         (0x0CUL<<SYS_GPC_MFPL_PC4MFP_Pos)  /*!< EPWM1 channel1 output/capture input. \hideinitializer */

#define SYS_GPC_MFPL_PC5MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC5MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPC_MFPL_PC5MFP_UART2_TXD         (0x08UL<<SYS_GPC_MFPL_PC5MFP_Pos)  /*!< Data transmitter output pin for UART2. \hideinitializer */
#define SYS_GPC_MFPL_PC5MFP_I2C1_SCL          (0x09UL<<SYS_GPC_MFPL_PC5MFP_Pos)  /*!< I2C1 clock pin. \hideinitializer */
#define SYS_GPC_MFPL_PC5MFP_UART4_TXD         (0x0BUL<<SYS_GPC_MFPL_PC5MFP_Pos)  /*!< Data transmitter output pin for UART4. \hideinitializer */
#define SYS_GPC_MFPL_PC5MFP_EPWM1_CH0         (0x0CUL<<SYS_GPC_MFPL_PC5MFP_Pos)  /*!< EPWM1 channel0 output/capture input. \hideinitializer */

#define SYS_GPC_MFPL_PC6MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPC_MFPL_PC6MFP_SPI1_MOSI         (0x04UL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. \hideinitializer */
#define SYS_GPC_MFPL_PC6MFP_UART4_RXD         (0x05UL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< Data receiver input pin for UART4. \hideinitializer */
#define SYS_GPC_MFPL_PC6MFP_UART0_nRTS        (0x07UL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< Request to Send output pin for UART0. \hideinitializer */
#define SYS_GPC_MFPL_PC6MFP_I2C1_SMBSUS       (0x08UL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< I2C1 SMBus SMBSUS# pin (PMBus CONTROL pin)  \hideinitializer */
#define SYS_GPC_MFPL_PC6MFP_EPWM1_CH3         (0x0BUL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< EPWM1 channel3 output/capture input. \hideinitializer */
#define SYS_GPC_MFPL_PC6MFP_BPWM1_CH1         (0x0CUL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< BPWM1 channel1 output/capture input. \hideinitializer */
#define SYS_GPC_MFPL_PC6MFP_TRACE_DATA2       (0x0DUL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< ETM Rx input bus bit2. \hideinitializer */
#define SYS_GPC_MFPL_PC6MFP_TM1               (0x0EUL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< Timer1 event counter input / toggle output  \hideinitializer */
#define SYS_GPC_MFPL_PC6MFP_INT2              (0x0FUL<<SYS_GPC_MFPL_PC6MFP_Pos)  /*!< External interrupt2 input pin. \hideinitializer */

#define SYS_GPC_MFPL_PC7MFP_GPIO              (0x00UL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPC_MFPL_PC7MFP_SPI1_MISO         (0x04UL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< 1st SPI1 MISO (Master In, Slave Out) pin. \hideinitializer */
#define SYS_GPC_MFPL_PC7MFP_UART4_TXD         (0x05UL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< Data transmitter output pin for UART4. \hideinitializer */
#define SYS_GPC_MFPL_PC7MFP_UART0_nCTS        (0x07UL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< Clear to Send input pin for UART0. \hideinitializer */
#define SYS_GPC_MFPL_PC7MFP_I2C1_SMBAL        (0x08UL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< I2C1 SMBus SMBALTER# pin  \hideinitializer */
#define SYS_GPC_MFPL_PC7MFP_EPWM1_CH2         (0x0BUL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< EPWM1 channel2 output/capture input. \hideinitializer */
#define SYS_GPC_MFPL_PC7MFP_BPWM1_CH0         (0x0CUL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< BPWM1 channel0 output/capture input. \hideinitializer */
#define SYS_GPC_MFPL_PC7MFP_TRACE_DATA3       (0x0DUL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< ETM Rx input bus bit3. \hideinitializer */
#define SYS_GPC_MFPL_PC7MFP_TM0               (0x0EUL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< Timer0 event counter input / toggle output  \hideinitializer */
#define SYS_GPC_MFPL_PC7MFP_INT3              (0x0FUL<<SYS_GPC_MFPL_PC7MFP_Pos)  /*!< External interrupt3 input pin. \hideinitializer */

/********************* Bit definition of GPC_MFPH register **********************/
#define SYS_GPC_MFPH_PC8MFP_GPIO              (0x00UL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPC_MFPH_PC8MFP_I2C0_SDA          (0x04UL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< I2C0 data input/output pin. \hideinitializer */
#define SYS_GPC_MFPH_PC8MFP_UART4_nCTS        (0x05UL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< Clear to Send input pin for UART4. \hideinitializer */
#define SYS_GPC_MFPH_PC8MFP_UART1_RXD         (0x08UL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< Data receiver input pin for UART1. \hideinitializer */
#define SYS_GPC_MFPH_PC8MFP_EPWM1_CH1         (0x0BUL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< EPWM1 channel1 output/capture input. \hideinitializer */
#define SYS_GPC_MFPH_PC8MFP_BPWM1_CH4         (0x0CUL<<SYS_GPC_MFPH_PC8MFP_Pos)  /*!< BPWM1 channel4 output/capture input. \hideinitializer */

#define SYS_GPC_MFPH_PC9MFP_GPIO              (0x00UL<<SYS_GPC_MFPH_PC9MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPC_MFPH_PC9MFP_UART3_RXD         (0x07UL<<SYS_GPC_MFPH_PC9MFP_Pos)  /*!< Data receiver input pin for UART3. \hideinitializer */
#define SYS_GPC_MFPH_PC9MFP_EPWM1_CH3         (0x0CUL<<SYS_GPC_MFPH_PC9MFP_Pos)  /*!< EPWM1 channel3 output/capture input. \hideinitializer */

#define SYS_GPC_MFPH_PC10MFP_GPIO             (0x00UL<<SYS_GPC_MFPH_PC10MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPC_MFPH_PC10MFP_UART3_TXD        (0x07UL<<SYS_GPC_MFPH_PC10MFP_Pos) /*!< Data transmitter output pin for UART3. \hideinitializer */
#define SYS_GPC_MFPH_PC10MFP_EPWM1_CH2        (0x0CUL<<SYS_GPC_MFPH_PC10MFP_Pos) /*!< EPWM1 channel2 output/capture input. \hideinitializer */

#define SYS_GPC_MFPH_PC11MFP_GPIO             (0x00UL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPC_MFPH_PC11MFP_UART0_RXD        (0x03UL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!< Data receiver input pin for UART0. \hideinitializer */
#define SYS_GPC_MFPH_PC11MFP_I2C0_SDA         (0x04UL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!< I2C0 data input/output pin. \hideinitializer */
#define SYS_GPC_MFPH_PC11MFP_EPWM1_CH1        (0x0CUL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!< EPWM1 channel1 output/capture input. \hideinitializer */
#define SYS_GPC_MFPH_PC11MFP_ACMP1_O          (0x0EUL<<SYS_GPC_MFPH_PC11MFP_Pos) /*!< Analog comparator1 output. \hideinitializer */

#define SYS_GPC_MFPH_PC12MFP_GPIO             (0x00UL<<SYS_GPC_MFPH_PC12MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPC_MFPH_PC12MFP_UART0_TXD        (0x03UL<<SYS_GPC_MFPH_PC12MFP_Pos) /*!< Data transmitter output pin for UART0. \hideinitializer */
#define SYS_GPC_MFPH_PC12MFP_I2C0_SCL         (0x04UL<<SYS_GPC_MFPH_PC12MFP_Pos) /*!< I2C0 clock pin. \hideinitializer */
#define SYS_GPC_MFPH_PC12MFP_EPWM1_CH0        (0x0CUL<<SYS_GPC_MFPH_PC12MFP_Pos) /*!< EPWM1 channel0 output/capture input. \hideinitializer */
#define SYS_GPC_MFPH_PC12MFP_ACMP0_O          (0x0EUL<<SYS_GPC_MFPH_PC12MFP_Pos) /*!< Analog comparator0 output. \hideinitializer */

#define SYS_GPC_MFPH_PC13MFP_GPIO             (0x00UL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPC_MFPH_PC13MFP_EADC0_CH19       (0x01UL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< EADC0 channel 19 analog input. \hideinitializer */
#define SYS_GPC_MFPH_PC13MFP_UART2_TXD        (0x07UL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< Data transmitter output pin for UART2. \hideinitializer */
#define SYS_GPC_MFPH_PC13MFP_BPWM0_CH4        (0x09UL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< BPWM0 channel4 output/capture input. \hideinitializer */
#define SYS_GPC_MFPH_PC13MFP_CLKO             (0x0DUL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< Clock Output pin. \hideinitializer */
#define SYS_GPC_MFPH_PC13MFP_EADC0_ST         (0x0EUL<<SYS_GPC_MFPH_PC13MFP_Pos) /*!< EADC external trigger input. \hideinitializer */

#define SYS_GPC_MFPH_PC14MFP_GPIO             (0x00UL<<SYS_GPC_MFPH_PC14MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPC_MFPH_PC14MFP_SPI0_I2SMCLK     (0x04UL<<SYS_GPC_MFPH_PC14MFP_Pos) /*!< SPI0 I2S master clock output pin. \hideinitializer */
#define SYS_GPC_MFPH_PC14MFP_CIR0_RXD         (0x0AUL<<SYS_GPC_MFPH_PC14MFP_Pos) /*!< Data receiver input pin for CIR0. \hideinitializer */
#define SYS_GPC_MFPH_PC14MFP_EPWM0_SYNC_IN    (0x0BUL<<SYS_GPC_MFPH_PC14MFP_Pos) /*!< EPWM0 counter synchronous trigger input pin. \hideinitializer */
#define SYS_GPC_MFPH_PC14MFP_TM1              (0x0DUL<<SYS_GPC_MFPH_PC14MFP_Pos) /*!< Timer1 event counter input / toggle output  \hideinitializer */

/********************* Bit definition of GPD_MFPL register **********************/
#define SYS_GPD_MFPL_PD0MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD0MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPL_PD0MFP_SPI0_MOSI         (0x04UL<<SYS_GPD_MFPL_PD0MFP_Pos)  /*!< 1st SPI0 MOSI (Master Out, Slave In) pin. \hideinitializer */
#define SYS_GPD_MFPL_PD0MFP_UART3_RXD         (0x05UL<<SYS_GPD_MFPL_PD0MFP_Pos)  /*!< Data receiver input pin for UART3. \hideinitializer */
#define SYS_GPD_MFPL_PD0MFP_TM2               (0x0EUL<<SYS_GPD_MFPL_PD0MFP_Pos)  /*!< Timer2 event counter input / toggle output  \hideinitializer */

#define SYS_GPD_MFPL_PD1MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD1MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPL_PD1MFP_SPI0_MISO         (0x04UL<<SYS_GPD_MFPL_PD1MFP_Pos)  /*!< 1st SPI0 MISO (Master In, Slave Out) pin. \hideinitializer */
#define SYS_GPD_MFPL_PD1MFP_UART3_TXD         (0x05UL<<SYS_GPD_MFPL_PD1MFP_Pos)  /*!< Data transmitter output pin for UART3. \hideinitializer */

#define SYS_GPD_MFPL_PD2MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD2MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPL_PD2MFP_SPI0_CLK          (0x04UL<<SYS_GPD_MFPL_PD2MFP_Pos)  /*!< SPI0 serial clock pin. \hideinitializer */
#define SYS_GPD_MFPL_PD2MFP_UART3_nCTS        (0x05UL<<SYS_GPD_MFPL_PD2MFP_Pos)  /*!< Clear to Send input pin for UART3. \hideinitializer */
#define SYS_GPD_MFPL_PD2MFP_UART0_RXD         (0x09UL<<SYS_GPD_MFPL_PD2MFP_Pos)  /*!< Data receiver input pin for UART0. \hideinitializer */

#define SYS_GPD_MFPL_PD3MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD3MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPL_PD3MFP_SPI0_SS           (0x04UL<<SYS_GPD_MFPL_PD3MFP_Pos)  /*!< 1st SPI0 slave select pin. \hideinitializer */
#define SYS_GPD_MFPL_PD3MFP_UART3_nRTS        (0x05UL<<SYS_GPD_MFPL_PD3MFP_Pos)  /*!< Request to Send output pin for UART3. \hideinitializer */
#define SYS_GPD_MFPL_PD3MFP_UART0_TXD         (0x09UL<<SYS_GPD_MFPL_PD3MFP_Pos)  /*!< Data transmitter output pin for UART0. \hideinitializer */

#define SYS_GPD_MFPL_PD4MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD4MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPL_PD4MFP_I2C1_SDA          (0x04UL<<SYS_GPD_MFPL_PD4MFP_Pos)  /*!< I2C1 data input/output pin. \hideinitializer */
#define SYS_GPD_MFPL_PD4MFP_SPI1_SS           (0x05UL<<SYS_GPD_MFPL_PD4MFP_Pos)  /*!< 1st SPI1 slave select pin. \hideinitializer */

#define SYS_GPD_MFPL_PD5MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD5MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPL_PD5MFP_I2C1_SCL          (0x04UL<<SYS_GPD_MFPL_PD5MFP_Pos)  /*!< I2C1 clock pin. \hideinitializer */
#define SYS_GPD_MFPL_PD5MFP_SPI1_CLK          (0x05UL<<SYS_GPD_MFPL_PD5MFP_Pos)  /*!< SPI1 serial clock pin. \hideinitializer */

#define SYS_GPD_MFPL_PD6MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD6MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPL_PD6MFP_UART1_RXD         (0x03UL<<SYS_GPD_MFPL_PD6MFP_Pos)  /*!< Data receiver input pin for UART1. \hideinitializer */
#define SYS_GPD_MFPL_PD6MFP_I2C0_SDA          (0x04UL<<SYS_GPD_MFPL_PD6MFP_Pos)  /*!< I2C0 data input/output pin. \hideinitializer */
#define SYS_GPD_MFPL_PD6MFP_SPI1_MOSI         (0x05UL<<SYS_GPD_MFPL_PD6MFP_Pos)  /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. \hideinitializer */

#define SYS_GPD_MFPL_PD7MFP_GPIO              (0x00UL<<SYS_GPD_MFPL_PD7MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPL_PD7MFP_UART1_TXD         (0x03UL<<SYS_GPD_MFPL_PD7MFP_Pos)  /*!< Data transmitter output pin for UART1. \hideinitializer */
#define SYS_GPD_MFPL_PD7MFP_I2C0_SCL          (0x04UL<<SYS_GPD_MFPL_PD7MFP_Pos)  /*!< I2C0 clock pin. \hideinitializer */
#define SYS_GPD_MFPL_PD7MFP_SPI1_MISO         (0x05UL<<SYS_GPD_MFPL_PD7MFP_Pos)  /*!< 1st SPI1 MISO (Master In, Slave Out) pin. \hideinitializer */

/********************* Bit definition of GPD_MFPH register **********************/
#define SYS_GPD_MFPH_PD8MFP_GPIO              (0x00UL<<SYS_GPD_MFPH_PD8MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPH_PD8MFP_UART2_nRTS        (0x04UL<<SYS_GPD_MFPH_PD8MFP_Pos)  /*!< Request to Send output pin for UART2. \hideinitializer */

#define SYS_GPD_MFPH_PD9MFP_GPIO              (0x00UL<<SYS_GPD_MFPH_PD9MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPH_PD9MFP_UART2_nCTS        (0x04UL<<SYS_GPD_MFPH_PD9MFP_Pos)  /*!< Clear to Send input pin for UART2. \hideinitializer */

#define SYS_GPD_MFPH_PD10MFP_GPIO             (0x00UL<<SYS_GPD_MFPH_PD10MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPH_PD10MFP_EADC0_CH16       (0x01UL<<SYS_GPD_MFPH_PD10MFP_Pos) /*!< EADC0 channel 16 analog input. \hideinitializer */
#define SYS_GPD_MFPH_PD10MFP_UART1_RXD        (0x03UL<<SYS_GPD_MFPH_PD10MFP_Pos) /*!< Data receiver input pin for UART1. \hideinitializer */
#define SYS_GPD_MFPH_PD10MFP_INT7             (0x0FUL<<SYS_GPD_MFPH_PD10MFP_Pos) /*!< External interrupt7 input pin. \hideinitializer */

#define SYS_GPD_MFPH_PD11MFP_GPIO             (0x00UL<<SYS_GPD_MFPH_PD11MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPH_PD11MFP_EADC0_CH17       (0x01UL<<SYS_GPD_MFPH_PD11MFP_Pos) /*!< EADC0 channel 17 analog input. \hideinitializer */
#define SYS_GPD_MFPH_PD11MFP_UART1_TXD        (0x03UL<<SYS_GPD_MFPH_PD11MFP_Pos) /*!< Data transmitter output pin for UART1. \hideinitializer */
#define SYS_GPD_MFPH_PD11MFP_INT6             (0x0FUL<<SYS_GPD_MFPH_PD11MFP_Pos) /*!< External interrupt6 input pin. \hideinitializer */

#define SYS_GPD_MFPH_PD12MFP_GPIO             (0x00UL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPH_PD12MFP_EADC0_CH18       (0x01UL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< EADC0 channel 18 analog input. \hideinitializer */
#define SYS_GPD_MFPH_PD12MFP_UART2_RXD        (0x07UL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< Data receiver input pin for UART2. \hideinitializer */
#define SYS_GPD_MFPH_PD12MFP_BPWM0_CH5        (0x09UL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< BPWM0 channel5 output/capture input. \hideinitializer */
#define SYS_GPD_MFPH_PD12MFP_CLKO             (0x0DUL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< Clock Output pin. \hideinitializer */
#define SYS_GPD_MFPH_PD12MFP_EADC0_ST         (0x0EUL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< EADC external trigger input. \hideinitializer */
#define SYS_GPD_MFPH_PD12MFP_INT5             (0x0FUL<<SYS_GPD_MFPH_PD12MFP_Pos) /*!< External interrupt5 input pin. \hideinitializer */

#define SYS_GPD_MFPH_PD13MFP_GPIO             (0x00UL<<SYS_GPD_MFPH_PD13MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPH_PD13MFP_SPI0_I2SMCLK     (0x04UL<<SYS_GPD_MFPH_PD13MFP_Pos) /*!< SPI0 I2S master clock output pin. \hideinitializer */
#define SYS_GPD_MFPH_PD13MFP_SPI1_I2SMCLK     (0x05UL<<SYS_GPD_MFPH_PD13MFP_Pos) /*!< SPI1 I2S master clock output pin. \hideinitializer */

#define SYS_GPD_MFPH_PD14MFP_GPIO             (0x00UL<<SYS_GPD_MFPH_PD14MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPH_PD14MFP_SPI0_I2SMCLK     (0x05UL<<SYS_GPD_MFPH_PD14MFP_Pos) /*!< SPI0 I2S master clock output pin. \hideinitializer */
#define SYS_GPD_MFPH_PD14MFP_EPWM0_CH4        (0x0BUL<<SYS_GPD_MFPH_PD14MFP_Pos) /*!< EPWM0 channel4 output/capture input. \hideinitializer */

#define SYS_GPD_MFPH_PD15MFP_GPIO             (0x00UL<<SYS_GPD_MFPH_PD15MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPD_MFPH_PD15MFP_EPWM0_CH5        (0x0CUL<<SYS_GPD_MFPH_PD15MFP_Pos) /*!< EPWM0 channel5 output/capture input. \hideinitializer */
#define SYS_GPD_MFPH_PD15MFP_TRACE_CLK        (0x0DUL<<SYS_GPD_MFPH_PD15MFP_Pos) /*!< ETM Rx clock input pin. \hideinitializer */
#define SYS_GPD_MFPH_PD15MFP_TM3              (0x0EUL<<SYS_GPD_MFPH_PD15MFP_Pos) /*!< Timer3 event counter input / toggle output  \hideinitializer */
#define SYS_GPD_MFPH_PD15MFP_INT1             (0x0FUL<<SYS_GPD_MFPH_PD15MFP_Pos) /*!< External interrupt1 input pin. \hideinitializer */

/********************* Bit definition of GPE_MFPL register **********************/
#define SYS_GPE_MFPL_PE0MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE0MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPL_PE0MFP_SPI1_MOSI         (0x06UL<<SYS_GPE_MFPL_PE0MFP_Pos)  /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. \hideinitializer */
#define SYS_GPE_MFPL_PE0MFP_UART3_RXD         (0x07UL<<SYS_GPE_MFPL_PE0MFP_Pos)  /*!< Data receiver input pin for UART3. \hideinitializer */
#define SYS_GPE_MFPL_PE0MFP_I2C1_SDA          (0x08UL<<SYS_GPE_MFPL_PE0MFP_Pos)  /*!< I2C1 data input/output pin. \hideinitializer */
#define SYS_GPE_MFPL_PE0MFP_UART4_nRTS        (0x09UL<<SYS_GPE_MFPL_PE0MFP_Pos)  /*!< Request to Send output pin for UART4. \hideinitializer */

#define SYS_GPE_MFPL_PE1MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE1MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPL_PE1MFP_SPI1_MISO         (0x06UL<<SYS_GPE_MFPL_PE1MFP_Pos)  /*!< 1st SPI1 MISO (Master In, Slave Out) pin. \hideinitializer */
#define SYS_GPE_MFPL_PE1MFP_UART3_TXD         (0x07UL<<SYS_GPE_MFPL_PE1MFP_Pos)  /*!< Data transmitter output pin for UART3. \hideinitializer */
#define SYS_GPE_MFPL_PE1MFP_I2C1_SCL          (0x08UL<<SYS_GPE_MFPL_PE1MFP_Pos)  /*!< I2C1 clock pin. \hideinitializer */
#define SYS_GPE_MFPL_PE1MFP_UART4_nCTS        (0x09UL<<SYS_GPE_MFPL_PE1MFP_Pos)  /*!< Clear to Send input pin for UART4. \hideinitializer */

#define SYS_GPE_MFPL_PE2MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE2MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPL_PE2MFP_EPWM0_CH5         (0x0CUL<<SYS_GPE_MFPL_PE2MFP_Pos)  /*!< EPWM0 channel5 output/capture input. \hideinitializer */
#define SYS_GPE_MFPL_PE2MFP_BPWM0_CH0         (0x0DUL<<SYS_GPE_MFPL_PE2MFP_Pos)  /*!< BPWM0 channel0 output/capture input. \hideinitializer */

#define SYS_GPE_MFPL_PE3MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE3MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPL_PE3MFP_EPWM0_CH4         (0x0CUL<<SYS_GPE_MFPL_PE3MFP_Pos)  /*!< EPWM0 channel4 output/capture input. \hideinitializer */
#define SYS_GPE_MFPL_PE3MFP_BPWM0_CH1         (0x0DUL<<SYS_GPE_MFPL_PE3MFP_Pos)  /*!< BPWM0 channel1 output/capture input. \hideinitializer */

#define SYS_GPE_MFPL_PE4MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE4MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPL_PE4MFP_EPWM0_CH3         (0x0CUL<<SYS_GPE_MFPL_PE4MFP_Pos)  /*!< EPWM0 channel3 output/capture input. \hideinitializer */
#define SYS_GPE_MFPL_PE4MFP_BPWM0_CH2         (0x0DUL<<SYS_GPE_MFPL_PE4MFP_Pos)  /*!< BPWM0 channel2 output/capture input. \hideinitializer */

#define SYS_GPE_MFPL_PE5MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE5MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPL_PE5MFP_EPWM0_CH2         (0x0CUL<<SYS_GPE_MFPL_PE5MFP_Pos)  /*!< EPWM0 channel2 output/capture input. \hideinitializer */
#define SYS_GPE_MFPL_PE5MFP_BPWM0_CH3         (0x0DUL<<SYS_GPE_MFPL_PE5MFP_Pos)  /*!< BPWM0 channel3 output/capture input. \hideinitializer */

#define SYS_GPE_MFPL_PE6MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE6MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPL_PE6MFP_UART5_RXD         (0x08UL<<SYS_GPE_MFPL_PE6MFP_Pos)  /*!< Data receiver input pin for UART5. \hideinitializer */
#define SYS_GPE_MFPL_PE6MFP_EPWM0_CH1         (0x0CUL<<SYS_GPE_MFPL_PE6MFP_Pos)  /*!< EPWM0 channel1 output/capture input. \hideinitializer */
#define SYS_GPE_MFPL_PE6MFP_BPWM0_CH4         (0x0DUL<<SYS_GPE_MFPL_PE6MFP_Pos)  /*!< BPWM0 channel4 output/capture input. \hideinitializer */

#define SYS_GPE_MFPL_PE7MFP_GPIO              (0x00UL<<SYS_GPE_MFPL_PE7MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPL_PE7MFP_UART5_TXD         (0x08UL<<SYS_GPE_MFPL_PE7MFP_Pos)  /*!< Data transmitter output pin for UART5. \hideinitializer */
#define SYS_GPE_MFPL_PE7MFP_EPWM0_CH0         (0x0CUL<<SYS_GPE_MFPL_PE7MFP_Pos)  /*!< EPWM0 channel0 output/capture input. \hideinitializer */
#define SYS_GPE_MFPL_PE7MFP_BPWM0_CH5         (0x0DUL<<SYS_GPE_MFPL_PE7MFP_Pos)  /*!< BPWM0 channel5 output/capture input. \hideinitializer */

/********************* Bit definition of GPE_MFPH register **********************/
#define SYS_GPE_MFPH_PE8MFP_GPIO              (0x00UL<<SYS_GPE_MFPH_PE8MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPH_PE8MFP_UART2_TXD         (0x07UL<<SYS_GPE_MFPH_PE8MFP_Pos)  /*!< Data transmitter output pin for UART2. \hideinitializer */
#define SYS_GPE_MFPH_PE8MFP_EPWM0_CH0         (0x0AUL<<SYS_GPE_MFPH_PE8MFP_Pos)  /*!< EPWM0 channel0 output/capture input. \hideinitializer */
#define SYS_GPE_MFPH_PE8MFP_EPWM0_BRAKE0      (0x0BUL<<SYS_GPE_MFPH_PE8MFP_Pos)  /*!< Brake input pin 0 of EPWM0. \hideinitializer */
#define SYS_GPE_MFPH_PE8MFP_TRACE_DATA3       (0x0EUL<<SYS_GPE_MFPH_PE8MFP_Pos)  /*!< ETM Rx input bus bit3. \hideinitializer */

#define SYS_GPE_MFPH_PE9MFP_GPIO              (0x00UL<<SYS_GPE_MFPH_PE9MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPH_PE9MFP_UART2_RXD         (0x07UL<<SYS_GPE_MFPH_PE9MFP_Pos)  /*!< Data receiver input pin for UART2. \hideinitializer */
#define SYS_GPE_MFPH_PE9MFP_EPWM0_CH1         (0x0AUL<<SYS_GPE_MFPH_PE9MFP_Pos)  /*!< EPWM0 channel1 output/capture input. \hideinitializer */
#define SYS_GPE_MFPH_PE9MFP_EPWM0_BRAKE1      (0x0BUL<<SYS_GPE_MFPH_PE9MFP_Pos)  /*!< Brake input pin 1 of EPWM0. \hideinitializer */
#define SYS_GPE_MFPH_PE9MFP_TRACE_DATA2       (0x0EUL<<SYS_GPE_MFPH_PE9MFP_Pos)  /*!< ETM Rx input bus bit2. \hideinitializer */

#define SYS_GPE_MFPH_PE10MFP_GPIO             (0x00UL<<SYS_GPE_MFPH_PE10MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPH_PE10MFP_UART3_TXD        (0x07UL<<SYS_GPE_MFPH_PE10MFP_Pos) /*!< Data transmitter output pin for UART3. \hideinitializer */
#define SYS_GPE_MFPH_PE10MFP_EPWM0_CH2        (0x0AUL<<SYS_GPE_MFPH_PE10MFP_Pos) /*!< EPWM0 channel2 output/capture input. \hideinitializer */
#define SYS_GPE_MFPH_PE10MFP_EPWM1_BRAKE0     (0x0BUL<<SYS_GPE_MFPH_PE10MFP_Pos) /*!< Brake input pin 0 of EPWM1. \hideinitializer */
#define SYS_GPE_MFPH_PE10MFP_TRACE_DATA1      (0x0EUL<<SYS_GPE_MFPH_PE10MFP_Pos) /*!< ETM Rx input bus bit1. \hideinitializer */

#define SYS_GPE_MFPH_PE11MFP_GPIO             (0x00UL<<SYS_GPE_MFPH_PE11MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPH_PE11MFP_UART3_RXD        (0x07UL<<SYS_GPE_MFPH_PE11MFP_Pos) /*!< Data receiver input pin for UART3. \hideinitializer */
#define SYS_GPE_MFPH_PE11MFP_UART1_nCTS       (0x08UL<<SYS_GPE_MFPH_PE11MFP_Pos) /*!< Clear to Send input pin for UART1. \hideinitializer */
#define SYS_GPE_MFPH_PE11MFP_EPWM0_CH3        (0x0AUL<<SYS_GPE_MFPH_PE11MFP_Pos) /*!< EPWM0 channel3 output/capture input. \hideinitializer */
#define SYS_GPE_MFPH_PE11MFP_EPWM1_BRAKE1     (0x0BUL<<SYS_GPE_MFPH_PE11MFP_Pos) /*!< Brake input pin 1 of EPWM1. \hideinitializer */
#define SYS_GPE_MFPH_PE11MFP_TRACE_DATA0      (0x0EUL<<SYS_GPE_MFPH_PE11MFP_Pos) /*!< ETM Rx input bus bit0. \hideinitializer */

#define SYS_GPE_MFPH_PE12MFP_GPIO             (0x00UL<<SYS_GPE_MFPH_PE12MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPH_PE12MFP_UART1_nRTS       (0x08UL<<SYS_GPE_MFPH_PE12MFP_Pos) /*!< Request to Send output pin for UART1. \hideinitializer */
#define SYS_GPE_MFPH_PE12MFP_EPWM0_CH4        (0x0AUL<<SYS_GPE_MFPH_PE12MFP_Pos) /*!< EPWM0 channel4 output/capture input. \hideinitializer */
#define SYS_GPE_MFPH_PE12MFP_TRACE_CLK        (0x0EUL<<SYS_GPE_MFPH_PE12MFP_Pos) /*!< ETM Rx clock input pin. \hideinitializer */

#define SYS_GPE_MFPH_PE13MFP_GPIO             (0x00UL<<SYS_GPE_MFPH_PE13MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPH_PE13MFP_I2C0_SCL         (0x04UL<<SYS_GPE_MFPH_PE13MFP_Pos) /*!< I2C0 clock pin. \hideinitializer */
#define SYS_GPE_MFPH_PE13MFP_UART4_nRTS       (0x05UL<<SYS_GPE_MFPH_PE13MFP_Pos) /*!< Request to Send output pin for UART4. \hideinitializer */
#define SYS_GPE_MFPH_PE13MFP_UART1_TXD        (0x08UL<<SYS_GPE_MFPH_PE13MFP_Pos) /*!< Data transmitter output pin for UART1. \hideinitializer */
#define SYS_GPE_MFPH_PE13MFP_EPWM0_CH5        (0x0AUL<<SYS_GPE_MFPH_PE13MFP_Pos) /*!< EPWM0 channel5 output/capture input. \hideinitializer */
#define SYS_GPE_MFPH_PE13MFP_EPWM1_CH0        (0x0BUL<<SYS_GPE_MFPH_PE13MFP_Pos) /*!< EPWM1 channel0 output/capture input. \hideinitializer */
#define SYS_GPE_MFPH_PE13MFP_BPWM1_CH5        (0x0CUL<<SYS_GPE_MFPH_PE13MFP_Pos) /*!< BPWM1 channel5 output/capture input. \hideinitializer */

#define SYS_GPE_MFPH_PE14MFP_GPIO             (0x00UL<<SYS_GPE_MFPH_PE14MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPH_PE14MFP_UART2_TXD        (0x03UL<<SYS_GPE_MFPH_PE14MFP_Pos) /*!< Data transmitter output pin for UART2. \hideinitializer */

#define SYS_GPE_MFPH_PE15MFP_GPIO             (0x00UL<<SYS_GPE_MFPH_PE15MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPE_MFPH_PE15MFP_UART2_RXD        (0x03UL<<SYS_GPE_MFPH_PE15MFP_Pos) /*!< Data receiver input pin for UART2. \hideinitializer */

/********************* Bit definition of GPF_MFPL register **********************/
#define SYS_GPF_MFPL_PF0MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPF_MFPL_PF0MFP_UART1_TXD         (0x02UL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< Data transmitter output pin for UART1. \hideinitializer */
#define SYS_GPF_MFPL_PF0MFP_I2C1_SCL          (0x03UL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< I2C1 clock pin. \hideinitializer */
#define SYS_GPF_MFPL_PF0MFP_UART0_TXD         (0x04UL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< Data transmitter output pin for UART0. \hideinitializer */
#define SYS_GPF_MFPL_PF0MFP_BPWM1_CH0         (0x0CUL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< BPWM1 channel0 output/capture input. \hideinitializer */
#define SYS_GPF_MFPL_PF0MFP_ICE_DAT           (0x0EUL<<SYS_GPF_MFPL_PF0MFP_Pos)  /*!< Serial wired debugger data pin. \hideinitializer */

#define SYS_GPF_MFPL_PF1MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPF_MFPL_PF1MFP_UART1_RXD         (0x02UL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< Data receiver input pin for UART1. \hideinitializer */
#define SYS_GPF_MFPL_PF1MFP_I2C1_SDA          (0x03UL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< I2C1 data input/output pin. \hideinitializer */
#define SYS_GPF_MFPL_PF1MFP_UART0_RXD         (0x04UL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< Data receiver input pin for UART0. \hideinitializer */
#define SYS_GPF_MFPL_PF1MFP_BPWM1_CH1         (0x0CUL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< BPWM1 channel1 output/capture input. \hideinitializer */
#define SYS_GPF_MFPL_PF1MFP_ICE_CLK           (0x0EUL<<SYS_GPF_MFPL_PF1MFP_Pos)  /*!< Serial wired debugger clock pin. \hideinitializer */

#define SYS_GPF_MFPL_PF2MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPF_MFPL_PF2MFP_UART0_RXD         (0x03UL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< Data receiver input pin for UART0. \hideinitializer */
#define SYS_GPF_MFPL_PF2MFP_I2C0_SDA          (0x04UL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< I2C0 data input/output pin. \hideinitializer */
#define SYS_GPF_MFPL_PF2MFP_XT1_OUT           (0x0AUL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< External 4~24 MHz (high speed) crystal output pin. \hideinitializer */
#define SYS_GPF_MFPL_PF2MFP_BPWM1_CH1         (0x0BUL<<SYS_GPF_MFPL_PF2MFP_Pos)  /*!< BPWM1 channel1 output/capture input. \hideinitializer */

#define SYS_GPF_MFPL_PF3MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPF_MFPL_PF3MFP_UART0_TXD         (0x03UL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< Data transmitter output pin for UART0. \hideinitializer */
#define SYS_GPF_MFPL_PF3MFP_I2C0_SCL          (0x04UL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< I2C0 clock pin. \hideinitializer */
#define SYS_GPF_MFPL_PF3MFP_XT1_IN            (0x0AUL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< External 4~24 MHz (high speed) crystal input pin. \hideinitializer */
#define SYS_GPF_MFPL_PF3MFP_BPWM1_CH0         (0x0BUL<<SYS_GPF_MFPL_PF3MFP_Pos)  /*!< BPWM1 channel0 output/capture input. \hideinitializer */

#define SYS_GPF_MFPL_PF4MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< General purpose digital I/O pin.  \hideinitializer */
#define SYS_GPF_MFPL_PF4MFP_UART2_TXD         (0x02UL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< Data transmitter output pin for UART2. \hideinitializer */
#define SYS_GPF_MFPL_PF4MFP_UART2_nRTS        (0x04UL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< Request to Send output pin for UART2. \hideinitializer */
#define SYS_GPF_MFPL_PF4MFP_EPWM0_CH1         (0x07UL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< EPWM0 channel1 output/capture input. \hideinitializer */
#define SYS_GPF_MFPL_PF4MFP_BPWM0_CH5         (0x08UL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< BPWM0 channel5 output/capture input. \hideinitializer */
#define SYS_GPF_MFPL_PF4MFP_X32_OUT           (0x0AUL<<SYS_GPF_MFPL_PF4MFP_Pos)  /*!< External 32.768 kHz (low speed) crystal output pin. \hideinitializer */

#define SYS_GPF_MFPL_PF5MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPF_MFPL_PF5MFP_UART2_RXD         (0x02UL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< Data receiver input pin for UART2. \hideinitializer */
#define SYS_GPF_MFPL_PF5MFP_UART2_nCTS        (0x04UL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< Clear to Send input pin for UART2. \hideinitializer */
#define SYS_GPF_MFPL_PF5MFP_EPWM0_CH0         (0x07UL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< EPWM0 channel0 output/capture input. \hideinitializer */
#define SYS_GPF_MFPL_PF5MFP_BPWM0_CH4         (0x08UL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< BPWM0 channel4 output/capture input. \hideinitializer */
#define SYS_GPF_MFPL_PF5MFP_EPWM0_SYNC_OUT    (0x09UL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< EPWM0 counter synchronous trigger output pin. \hideinitializer */
#define SYS_GPF_MFPL_PF5MFP_X32_IN            (0x0AUL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< External 32.768 kHz (low speed) crystal input pin. \hideinitializer */
#define SYS_GPF_MFPL_PF5MFP_EADC0_ST          (0x0BUL<<SYS_GPF_MFPL_PF5MFP_Pos)  /*!< EADC external trigger input. \hideinitializer */

#define SYS_GPF_MFPL_PF6MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF6MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPF_MFPL_PF6MFP_SPI0_MOSI         (0x05UL<<SYS_GPF_MFPL_PF6MFP_Pos)  /*!< 1st SPI0 MOSI (Master Out, Slave In) pin. \hideinitializer */
#define SYS_GPF_MFPL_PF6MFP_UART4_RXD         (0x06UL<<SYS_GPF_MFPL_PF6MFP_Pos)  /*!< Data receiver input pin for UART4. \hideinitializer */

#define SYS_GPF_MFPL_PF7MFP_GPIO              (0x00UL<<SYS_GPF_MFPL_PF7MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPF_MFPL_PF7MFP_SPI0_MISO         (0x05UL<<SYS_GPF_MFPL_PF7MFP_Pos)  /*!< 1st SPI0 MISO (Master In, Slave Out) pin. \hideinitializer */
#define SYS_GPF_MFPL_PF7MFP_UART4_TXD         (0x06UL<<SYS_GPF_MFPL_PF7MFP_Pos)  /*!< Data transmitter output pin for UART4. \hideinitializer */

/********************* Bit definition of GPF_MFPH register **********************/
#define SYS_GPF_MFPH_PF8MFP_GPIO              (0x00UL<<SYS_GPF_MFPH_PF8MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPF_MFPH_PF8MFP_SPI0_CLK          (0x05UL<<SYS_GPF_MFPH_PF8MFP_Pos)  /*!< SPI0 serial clock pin. \hideinitializer */
#define SYS_GPF_MFPH_PF8MFP_UART5_nCTS        (0x06UL<<SYS_GPF_MFPH_PF8MFP_Pos)  /*!< Clear to Send input pin for UART5. \hideinitializer */

#define SYS_GPF_MFPH_PF9MFP_GPIO              (0x00UL<<SYS_GPF_MFPH_PF9MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPF_MFPH_PF9MFP_SPI0_SS           (0x05UL<<SYS_GPF_MFPH_PF9MFP_Pos)  /*!< 1st SPI0 slave select pin. \hideinitializer */
#define SYS_GPF_MFPH_PF9MFP_UART5_nRTS        (0x06UL<<SYS_GPF_MFPH_PF9MFP_Pos)  /*!< Request to Send output pin for UART5. \hideinitializer */

#define SYS_GPF_MFPH_PF10MFP_GPIO             (0x00UL<<SYS_GPF_MFPH_PF10MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPF_MFPH_PF10MFP_SPI0_I2SMCLK     (0x05UL<<SYS_GPF_MFPH_PF10MFP_Pos) /*!< SPI0 I2S master clock output pin. \hideinitializer */
#define SYS_GPF_MFPH_PF10MFP_UART5_RXD        (0x06UL<<SYS_GPF_MFPH_PF10MFP_Pos) /*!< Data receiver input pin for UART5. \hideinitializer */

#define SYS_GPF_MFPH_PF11MFP_GPIO             (0x00UL<<SYS_GPF_MFPH_PF11MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPF_MFPH_PF11MFP_UART5_TXD        (0x06UL<<SYS_GPF_MFPH_PF11MFP_Pos) /*!< Data transmitter output pin for UART5. \hideinitializer */
#define SYS_GPF_MFPH_PF11MFP_TM3              (0x0DUL<<SYS_GPF_MFPH_PF11MFP_Pos) /*!< Timer3 event counter input / toggle output  \hideinitializer */

#define SYS_GPF_MFPH_PF12MFP_GPIO             (0x00UL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPF_MFPH_PF12MFP_I2C0_SCL         (0x04UL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< I2C0 clock pin. \hideinitializer */
#define SYS_GPF_MFPH_PF12MFP_UART5_TXD        (0x06UL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< Data transmitter output pin for UART5. \hideinitializer */
#define SYS_GPF_MFPH_PF12MFP_UART3_TXD        (0x07UL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< Data transmitter output pin for UART3. \hideinitializer */
#define SYS_GPF_MFPH_PF12MFP_UART1_TXD        (0x08UL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< Data transmitter output pin for UART1. \hideinitializer */
#define SYS_GPF_MFPH_PF12MFP_I2C1_SCL         (0x09UL<<SYS_GPF_MFPH_PF12MFP_Pos)  /*!< I2C1 clock pin. \hideinitializer */
#define SYS_GPF_MFPH_PF12MFP_EPWM0_CH2        (0x0AUL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< EPWM0 channel2 output/capture input. \hideinitializer */
#define SYS_GPF_MFPH_PF12MFP_BPWM0_CH0        (0x0BUL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< BPWM0 channel0 output/capture input. \hideinitializer */
#define SYS_GPF_MFPH_PF12MFP_TRACE_DATA1      (0x0DUL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< ETM Rx input bus bit1. \hideinitializer */
#define SYS_GPF_MFPH_PF12MFP_CIR0_RXD         (0x0FUL<<SYS_GPF_MFPH_PF12MFP_Pos) /*!< Data receiver input pin for CIR0. \hideinitializer */

#define SYS_GPF_MFPH_PF13MFP_GPIO             (0x00UL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPF_MFPH_PF13MFP_I2C0_SDA         (0x04UL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< I2C0 data input/output pin. \hideinitializer */
#define SYS_GPF_MFPH_PF13MFP_UART5_RXD        (0x06UL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< Data receiver input pin for UART5. \hideinitializer */
#define SYS_GPF_MFPH_PF13MFP_UART3_RXD        (0x07UL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< Data receiver input pin for UART3. \hideinitializer */
#define SYS_GPF_MFPH_PF13MFP_UART1_RXD        (0x08UL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< Data receiver input pin for UART1. \hideinitializer */
#define SYS_GPF_MFPH_PF13MFP_I2C1_SDA         (0x09UL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< I2C1 data input/output pin. \hideinitializer */
#define SYS_GPF_MFPH_PF13MFP_EPWM0_CH3        (0x0AUL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< EPWM0 channel3 output/capture input. \hideinitializer */
#define SYS_GPF_MFPH_PF13MFP_BPWM0_CH1        (0x0BUL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< BPWM0 channel1 output/capture input. \hideinitializer */
#define SYS_GPF_MFPH_PF13MFP_TRACE_DATA0      (0x0DUL<<SYS_GPF_MFPH_PF13MFP_Pos) /*!< ETM Rx input bus bit0. \hideinitializer */

#define SYS_GPF_MFPH_PF14MFP_GPIO             (0x00UL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPF_MFPH_PF14MFP_EPWM1_BRAKE0     (0x09UL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< Brake input pin 0 of EPWM1. \hideinitializer */
#define SYS_GPF_MFPH_PF14MFP_EPWM0_BRAKE0     (0x0AUL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< Brake input pin 0 of EPWM0. \hideinitializer */
#define SYS_GPF_MFPH_PF14MFP_EPWM0_CH4        (0x0CUL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< EPWM0 channel4 output/capture input. \hideinitializer */
#define SYS_GPF_MFPH_PF14MFP_CLKO             (0x0DUL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< Clock Output pin. \hideinitializer */
#define SYS_GPF_MFPH_PF14MFP_TM3              (0x0EUL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< Timer3 event counter input / toggle output  \hideinitializer */
#define SYS_GPF_MFPH_PF14MFP_INT5             (0x0FUL<<SYS_GPF_MFPH_PF14MFP_Pos) /*!< External interrupt5 input pin. \hideinitializer */

#define SYS_GPF_MFPH_PF15MFP_GPIO             (0x00UL<<SYS_GPF_MFPH_PF15MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPF_MFPH_PF15MFP_EPWM0_BRAKE0     (0x0BUL<<SYS_GPF_MFPH_PF15MFP_Pos) /*!< Brake input pin 0 of EPWM0. \hideinitializer */
#define SYS_GPF_MFPH_PF15MFP_EPWM0_CH1        (0x0CUL<<SYS_GPF_MFPH_PF15MFP_Pos) /*!< EPWM0 channel1 output/capture input. \hideinitializer */
#define SYS_GPF_MFPH_PF15MFP_TM2              (0x0DUL<<SYS_GPF_MFPH_PF15MFP_Pos) /*!< Timer2 event counter input / toggle output  \hideinitializer */
#define SYS_GPF_MFPH_PF15MFP_CLKO             (0x0EUL<<SYS_GPF_MFPH_PF15MFP_Pos) /*!< Clock Output pin. \hideinitializer */
#define SYS_GPF_MFPH_PF15MFP_INT4             (0x0FUL<<SYS_GPF_MFPH_PF15MFP_Pos) /*!< External interrupt4 input pin. \hideinitializer */

/********************* Bit definition of GPG_MFPL register **********************/
#define SYS_GPG_MFPL_PG2MFP_GPIO              (0x00UL<<SYS_GPG_MFPL_PG2MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPG_MFPL_PG2MFP_I2C0_SMBAL        (0x04UL<<SYS_GPG_MFPL_PG2MFP_Pos)  /*!< I2C0 SMBus SMBALTER# pin  \hideinitializer  */
#define SYS_GPG_MFPL_PG2MFP_I2C1_SCL          (0x05UL<<SYS_GPG_MFPL_PG2MFP_Pos)  /*!< I2C1 clock pin. \hideinitializer */
#define SYS_GPG_MFPL_PG2MFP_TM0               (0x0DUL<<SYS_GPG_MFPL_PG2MFP_Pos)  /*!< Timer0 event counter input / toggle output  \hideinitializer */

#define SYS_GPG_MFPL_PG3MFP_GPIO              (0x00UL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPG_MFPL_PG3MFP_I2C0_SMBSUS       (0x04UL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< I2C0 SMBus SMBSUS# pin (PMBus CONTROL pin)  \hideinitializer */
#define SYS_GPG_MFPL_PG3MFP_I2C1_SDA          (0x05UL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< I2C1 data input/output pin. \hideinitializer */
#define SYS_GPG_MFPL_PG3MFP_TM1               (0x0DUL<<SYS_GPG_MFPL_PG3MFP_Pos)  /*!< Timer1 event counter input / toggle output  \hideinitializer */

#define SYS_GPG_MFPL_PG4MFP_GPIO              (0x00UL<<SYS_GPG_MFPL_PG4MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPG_MFPL_PG4MFP_TM2               (0x0DUL<<SYS_GPG_MFPL_PG4MFP_Pos)  /*!< Timer2 event counter input / toggle output \hideinitializer  */

/********************* Bit definition of GPG_MFPH register **********************/
#define SYS_GPG_MFPH_PG9MFP_GPIO              (0x00UL<<SYS_GPG_MFPH_PG9MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPG_MFPH_PG9MFP_BPWM0_CH5         (0x0CUL<<SYS_GPG_MFPH_PG9MFP_Pos)  /*!< BPWM0 channel5 output/capture input. \hideinitializer */

#define SYS_GPG_MFPH_PG10MFP_GPIO             (0x00UL<<SYS_GPG_MFPH_PG10MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPG_MFPH_PG10MFP_BPWM0_CH4        (0x0CUL<<SYS_GPG_MFPH_PG10MFP_Pos) /*!< BPWM0 channel4 output/capture input. \hideinitializer */

#define SYS_GPG_MFPH_PG11MFP_GPIO             (0x00UL<<SYS_GPG_MFPH_PG11MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPG_MFPH_PG11MFP_BPWM0_CH3        (0x0CUL<<SYS_GPG_MFPH_PG11MFP_Pos) /*!< BPWM0 channel3 output/capture input. \hideinitializer */

#define SYS_GPG_MFPH_PG12MFP_GPIO             (0x00UL<<SYS_GPG_MFPH_PG12MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPG_MFPH_PG12MFP_BPWM0_CH2        (0x0CUL<<SYS_GPG_MFPH_PG12MFP_Pos) /*!< BPWM0 channel2 output/capture input. \hideinitializer */

#define SYS_GPG_MFPH_PG13MFP_GPIO             (0x00UL<<SYS_GPG_MFPH_PG13MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPG_MFPH_PG13MFP_BPWM0_CH1        (0x0CUL<<SYS_GPG_MFPH_PG13MFP_Pos) /*!< BPWM0 channel1 output/capture input. \hideinitializer */

#define SYS_GPG_MFPH_PG14MFP_GPIO             (0x00UL<<SYS_GPG_MFPH_PG14MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPG_MFPH_PG14MFP_BPWM0_CH0        (0x0CUL<<SYS_GPG_MFPH_PG14MFP_Pos) /*!< BPWM0 channel0 output/capture input. \hideinitializer */

#define SYS_GPG_MFPH_PG15MFP_GPIO             (0x00UL<<SYS_GPG_MFPH_PG15MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPG_MFPH_PG15MFP_CLKO             (0x0EUL<<SYS_GPG_MFPH_PG15MFP_Pos) /*!< Clock Output pin. \hideinitializer */
#define SYS_GPG_MFPH_PG15MFP_EADC0_ST         (0x0FUL<<SYS_GPG_MFPH_PG15MFP_Pos) /*!< EADC external trigger input. \hideinitializer */

/********************* Bit definition of GPH_MFPL register **********************/
#define SYS_GPH_MFPL_PH4MFP_GPIO              (0x00UL<<SYS_GPH_MFPL_PH4MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPH_MFPL_PH4MFP_SPI1_MISO         (0x03UL<<SYS_GPH_MFPL_PH4MFP_Pos)  /*!< 1st SPI1 MISO (Master In, Slave Out) pin. \hideinitializer */

#define SYS_GPH_MFPL_PH5MFP_GPIO              (0x00UL<<SYS_GPH_MFPL_PH5MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPH_MFPL_PH5MFP_SPI1_MOSI         (0x03UL<<SYS_GPH_MFPL_PH5MFP_Pos)  /*!< 1st SPI1 MOSI (Master Out, Slave In) pin. \hideinitializer */

#define SYS_GPH_MFPL_PH6MFP_GPIO              (0x00UL<<SYS_GPH_MFPL_PH6MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPH_MFPL_PH6MFP_SPI1_CLK          (0x03UL<<SYS_GPH_MFPL_PH6MFP_Pos)  /*!< SPI1 serial clock pin. \hideinitializer */

#define SYS_GPH_MFPL_PH7MFP_GPIO              (0x00UL<<SYS_GPH_MFPL_PH7MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPH_MFPL_PH7MFP_SPI1_SS           (0x03UL<<SYS_GPH_MFPL_PH7MFP_Pos)  /*!< 1st SPI1 slave select pin. \hideinitializer */

/********************* Bit definition of GPH_MFPH register **********************/
#define SYS_GPH_MFPH_PH8MFP_GPIO              (0x00UL<<SYS_GPH_MFPH_PH8MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPH_MFPH_PH8MFP_SPI1_CLK          (0x06UL<<SYS_GPH_MFPH_PH8MFP_Pos)  /*!< SPI1 serial clock pin. \hideinitializer */
#define SYS_GPH_MFPH_PH8MFP_UART3_nRTS        (0x07UL<<SYS_GPH_MFPH_PH8MFP_Pos)  /*!< Request to Send output pin for UART3. \hideinitializer */
#define SYS_GPH_MFPH_PH8MFP_I2C1_SMBAL        (0x08UL<<SYS_GPH_MFPH_PH8MFP_Pos)  /*!< I2C1 SMBus SMBALTER# pin  \hideinitializer  */
#define SYS_GPH_MFPH_PH8MFP_UART1_TXD         (0x0AUL<<SYS_GPH_MFPH_PH8MFP_Pos)  /*!< Data transmitter output pin for UART1. \hideinitializer */

#define SYS_GPH_MFPH_PH9MFP_GPIO              (0x00UL<<SYS_GPH_MFPH_PH9MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPH_MFPH_PH9MFP_SPI1_SS           (0x06UL<<SYS_GPH_MFPH_PH9MFP_Pos)  /*!< 1st SPI1 slave select pin. \hideinitializer */
#define SYS_GPH_MFPH_PH9MFP_UART3_nCTS        (0x07UL<<SYS_GPH_MFPH_PH9MFP_Pos)  /*!< Clear to Send input pin for UART3. \hideinitializer */
#define SYS_GPH_MFPH_PH9MFP_I2C1_SMBSUS       (0x08UL<<SYS_GPH_MFPH_PH9MFP_Pos)  /*!< I2C1 SMBus SMBSUS# pin (PMBus CONTROL pin)  \hideinitializer */
#define SYS_GPH_MFPH_PH9MFP_UART1_RXD         (0x0AUL<<SYS_GPH_MFPH_PH9MFP_Pos)  /*!< Data receiver input pin for UART1. \hideinitializer */

#define SYS_GPH_MFPH_PH10MFP_GPIO             (0x00UL<<SYS_GPH_MFPH_PH10MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPH_MFPH_PH10MFP_SPI1_I2SMCLK     (0x06UL<<SYS_GPH_MFPH_PH10MFP_Pos) /*!< SPI1 I2S master clock output pin. \hideinitializer */
#define SYS_GPH_MFPH_PH10MFP_UART4_TXD        (0x07UL<<SYS_GPH_MFPH_PH10MFP_Pos) /*!< Data transmitter output pin for UART4. \hideinitializer */
#define SYS_GPH_MFPH_PH10MFP_UART0_TXD        (0x08UL<<SYS_GPH_MFPH_PH10MFP_Pos) /*!< Data transmitter output pin for UART0. \hideinitializer */

#define SYS_GPH_MFPH_PH11MFP_GPIO             (0x00UL<<SYS_GPH_MFPH_PH11MFP_Pos) /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPH_MFPH_PH11MFP_UART4_RXD        (0x07UL<<SYS_GPH_MFPH_PH11MFP_Pos) /*!< Data receiver input pin for UART4. \hideinitializer */
#define SYS_GPH_MFPH_PH11MFP_UART0_RXD        (0x08UL<<SYS_GPH_MFPH_PH11MFP_Pos) /*!< Data receiver input pin for UART0. \hideinitializer */
#define SYS_GPH_MFPH_PH11MFP_EPWM0_CH5        (0x0BUL<<SYS_GPH_MFPH_PH11MFP_Pos) /*!< EPWM0 channel5 output/capture input. \hideinitializer */

/********************* Bit definition of GPI_MFPL register **********************/
#define SYS_GPI_MFPL_PI0MFP_GPIO              (0x00UL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPI_MFPL_PI0MFP_UART0_TXD         (0x03UL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< Data transmitter output pin for UART0. \hideinitializer */
#define SYS_GPI_MFPL_PI0MFP_I2C0_SCL          (0x04UL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< I2C0 clock pin. \hideinitializer */
#define SYS_GPI_MFPL_PI0MFP_UART5_TXD         (0x06UL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< Data transmitter output pin for UART5. \hideinitializer */
#define SYS_GPI_MFPL_PI0MFP_UART2_TXD         (0x07UL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< Data transmitter output pin for UART2. \hideinitializer */
#define SYS_GPI_MFPL_PI0MFP_I2C1_SCL          (0x09UL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< I2C1 clock pin. \hideinitializer */
#define SYS_GPI_MFPL_PI0MFP_EPWM0_CH4         (0x0BUL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< EPWM0 channel4 output/capture input. \hideinitializer */
#define SYS_GPI_MFPL_PI0MFP_EPWM1_CH0         (0x0CUL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< EPWM1 channel0 output/capture input. \hideinitializer */
#define SYS_GPI_MFPL_PI0MFP_ACMP0_O           (0x0EUL<<SYS_GPI_MFPL_PI0MFP_Pos)  /*!< Analog comparator0 output. \hideinitializer */

#define SYS_GPI_MFPL_PI1MFP_GPIO              (0x00UL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPI_MFPL_PI1MFP_UART0_RXD         (0x03UL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< Data receiver input pin for UART0. \hideinitializer */
#define SYS_GPI_MFPL_PI1MFP_I2C0_SDA          (0x04UL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< I2C0 data input/output pin. \hideinitializer */
#define SYS_GPI_MFPL_PI1MFP_UART5_RXD         (0x06UL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< Data receiver input pin for UART5. \hideinitializer */
#define SYS_GPI_MFPL_PI1MFP_UART2_RXD         (0x07UL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< Data receiver input pin for UART2. \hideinitializer */
#define SYS_GPI_MFPL_PI1MFP_I2C1_SDA          (0x09UL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< I2C1 data input/output pin. \hideinitializer */
#define SYS_GPI_MFPL_PI1MFP_EPWM0_CH5         (0x0BUL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< EPWM0 channel5 output/capture input. \hideinitializer */
#define SYS_GPI_MFPL_PI1MFP_EPWM1_CH1         (0x0CUL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< EPWM1 channel1 output/capture input. \hideinitializer */
#define SYS_GPI_MFPL_PI1MFP_ACMP1_O           (0x0EUL<<SYS_GPI_MFPL_PI1MFP_Pos)  /*!< Analog comparator1 output. \hideinitializer */

#define SYS_GPI_MFPL_PI2MFP_GPIO              (0x00UL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPI_MFPL_PI2MFP_UART1_TXD         (0x03UL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!< Data transmitter output pin for UART1. \hideinitializer */
#define SYS_GPI_MFPL_PI2MFP_I2C0_SCL          (0x04UL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!< I2C0 clock pin. \hideinitializer */
#define SYS_GPI_MFPL_PI2MFP_UART5_TXD         (0x06UL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!< Data transmitter output pin for UART5. \hideinitializer */
#define SYS_GPI_MFPL_PI2MFP_I2C1_SCL          (0x09UL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!< I2C1 clock pin. \hideinitializer */
#define SYS_GPI_MFPL_PI2MFP_UART4_TXD         (0x0BUL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!< Data transmitter output pin for UART4. \hideinitializer */
#define SYS_GPI_MFPL_PI2MFP_BPWM0_CH5         (0x0CUL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!< BPWM0 channel5 output/capture input. \hideinitializer */
#define SYS_GPI_MFPL_PI2MFP_EADC0_ST          (0x0FUL<<SYS_GPI_MFPL_PI2MFP_Pos)  /*!< EADC external trigger input. \hideinitializer */

#define SYS_GPI_MFPL_PI3MFP_GPIO              (0x00UL<<SYS_GPI_MFPL_PI3MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPI_MFPL_PI3MFP_UART1_RXD         (0x03UL<<SYS_GPI_MFPL_PI3MFP_Pos)  /*!< Data receiver input pin for UART1. \hideinitializer */
#define SYS_GPI_MFPL_PI3MFP_I2C0_SDA          (0x04UL<<SYS_GPI_MFPL_PI3MFP_Pos)  /*!< I2C0 data input/output pin. \hideinitializer */
#define SYS_GPI_MFPL_PI3MFP_UART5_RXD         (0x06UL<<SYS_GPI_MFPL_PI3MFP_Pos)  /*!< Data receiver input pin for UART5. \hideinitializer */
#define SYS_GPI_MFPL_PI3MFP_I2C1_SDA          (0x09UL<<SYS_GPI_MFPL_PI3MFP_Pos)  /*!< I2C1 data input/output pin. \hideinitializer */
#define SYS_GPI_MFPL_PI3MFP_UART4_RXD         (0x0BUL<<SYS_GPI_MFPL_PI3MFP_Pos)  /*!< Data receiver input pin for UART4. \hideinitializer */
#define SYS_GPI_MFPL_PI3MFP_BPWM0_CH4         (0x0CUL<<SYS_GPI_MFPL_PI3MFP_Pos)  /*!< BPWM0 channel4 output/capture input. \hideinitializer */

#define SYS_GPI_MFPL_PI4MFP_GPIO              (0x00UL<<SYS_GPI_MFPL_PI4MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPI_MFPL_PI4MFP_UART4_TXD         (0x07UL<<SYS_GPI_MFPL_PI4MFP_Pos)  /*!< Data transmitter output pin for UART4. \hideinitializer */
#define SYS_GPI_MFPL_PI4MFP_UART0_TXD         (0x08UL<<SYS_GPI_MFPL_PI4MFP_Pos)  /*!< Data transmitter output pin for UART0. \hideinitializer */
#define SYS_GPI_MFPL_PI4MFP_UART1_TXD         (0x0AUL<<SYS_GPI_MFPL_PI4MFP_Pos)  /*!< Data transmitter output pin for UART1. \hideinitializer */
#define SYS_GPI_MFPL_PI4MFP_EPWM0_CH5         (0x0BUL<<SYS_GPI_MFPL_PI4MFP_Pos)  /*!< EPWM0 channel5 output/capture input. \hideinitializer */
#define SYS_GPI_MFPL_PI4MFP_CIR0_RXD          (0x0EUL<<SYS_GPI_MFPL_PI4MFP_Pos)  /*!< Data receiver input pin for CIR0. \hideinitializer */
#define SYS_GPI_MFPL_PI4MFP_ACMP0_O           (0x0FUL<<SYS_GPI_MFPL_PI4MFP_Pos)  /*!< Analog comparator0 output. \hideinitializer */

#define SYS_GPI_MFPL_PI5MFP_GPIO              (0x00UL<<SYS_GPI_MFPL_PI5MFP_Pos)  /*!< General purpose digital I/O pin. \hideinitializer */
#define SYS_GPI_MFPL_PI5MFP_UART4_RXD         (0x07UL<<SYS_GPI_MFPL_PI5MFP_Pos)  /*!< Data receiver input pin for UART4. \hideinitializer */
#define SYS_GPI_MFPL_PI5MFP_UART0_RXD         (0x08UL<<SYS_GPI_MFPL_PI5MFP_Pos)  /*!< Data receiver input pin for UART0. \hideinitializer */
#define SYS_GPI_MFPL_PI5MFP_UART1_RXD         (0x0AUL<<SYS_GPI_MFPL_PI5MFP_Pos)  /*!< Data receiver input pin for UART1. \hideinitializer */
#define SYS_GPI_MFPL_PI5MFP_EPWM0_CH4         (0x0BUL<<SYS_GPI_MFPL_PI5MFP_Pos)  /*!< EPWM0 channel4 output/capture input. \hideinitializer */
#define SYS_GPI_MFPL_PI5MFP_ACMP1_O           (0x0FUL<<SYS_GPI_MFPL_PI5MFP_Pos)  /*!< Analog comparator1 output. \hideinitializer */


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
  * @brief      Enable Brown-out detector interrupt function
  * @param      None
  * @return     None
  * @details    This macro enable Brown-out detector interrupt function.
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
  *             - \ref SYS_BODCTL_BODVL_4_4V
  *             - \ref SYS_BODCTL_BODVL_3_7V
  *             - \ref SYS_BODCTL_BODVL_2_7V
  *             - \ref SYS_BODCTL_BODVL_2_4V
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
  * @brief      Get reset source is from window watch dog reset
  * @param      None
  * @retval     0   Previous reset source is not from window watch dog reset
  * @retval     >=1 Previous reset source is from window watch dog reset
  * @details    This macro get previous reset source is from window watch dog reset.
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
#define SYS_DISABLE_POR()               (SYS->PORDISAN = 0x5AA5)

/**
  * @brief      Enable Power-on Reset function
  * @param      None
  * @return     None
  * @details    This macro enable Power-on Reset function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_ENABLE_POR()                (SYS->PORDISAN = 0)

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


/*---------------------------------------------------------------------------------------------------------*/
/* static inline functions                                                                                 */
/*---------------------------------------------------------------------------------------------------------*/
/* Declare these inline functions here to avoid MISRA C 2004 rule 8.1 error */
__STATIC_INLINE void SYS_UnlockReg(void);
__STATIC_INLINE void SYS_LockReg(void);

/**
  * @brief      Disable register write-protection function
  * @param      None
  * @return     None
  * @details    This function disable register write-protection function.
  *             To unlock the protected register to allow write access.
  */
__STATIC_INLINE void SYS_UnlockReg(void)
{
    do
    {
        SYS->REGLCTL = 0x59UL;
        SYS->REGLCTL = 0x16UL;
        SYS->REGLCTL = 0x88UL;
    }
    while(SYS->REGLCTL == 0UL);
}

/**
  * @brief      Enable register write-protection function
  * @param      None
  * @return     None
  * @details    This function is used to enable register write-protection function.
  *             To lock the protected register to forbid write access.
  */
__STATIC_INLINE void SYS_LockReg(void)
{
    SYS->REGLCTL = 0UL;
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
void SYS_SetPowerLevel(uint32_t u32PowerLevel);
void SYS_SetVRef(uint32_t u32VRefCTL);

/*@}*/ /* end of group SYS_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group SYS_Driver */

/*@}*/ /* end of group Standard_Driver */


#ifdef __cplusplus
}
#endif

#endif  /* __SYS_H__ */

/*** (C) COPYRIGHT 2020 Nuvoton Technology Corp. ***/
