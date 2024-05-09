/****************************************************************************
**
** Copyright (C) 2024 MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
** This file is part of the mikroSDK package
**
** Commercial License Usage
**
** Licensees holding valid commercial NECTO compilers AI licenses may use this
** file in accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The MikroElektronika Company.
** For licensing terms and conditions see
** https://www.mikroe.com/legal/software-license-agreement.
** For further information use the contact form at
** https://www.mikroe.com/contact.
**
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used for
** non-commercial projects under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
* @file  interrupts_mcu.h
* @brief STM32H743AG MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NONMASKABLEINT = 2;
static const int INTERRUPTS_HARDFAULT = 3;
static const int INTERRUPTS_MEMORYMANAGEMENT = 4;
static const int INTERRUPTS_BUSFAULT = 5;
static const int INTERRUPTS_USAGEFAULT = 6;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUGMONITOR = 12;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_WWDG = 16;
static const int INTERRUPTS_PVD_AVD = 17;
static const int INTERRUPTS_TAMP_STAMP = 18;
static const int INTERRUPTS_RTC_WKUP = 19;
static const int INTERRUPTS_FLASH = 20;
static const int INTERRUPTS_RCC = 21;
static const int INTERRUPTS_EXTI0 = 22;
static const int INTERRUPTS_EXTI1 = 23;
static const int INTERRUPTS_EXTI2 = 24;
static const int INTERRUPTS_EXTI3 = 25;
static const int INTERRUPTS_EXTI4 = 26;
static const int INTERRUPTS_DMA1_STREAM0 = 27;
static const int INTERRUPTS_DMA1_STREAM1 = 28;
static const int INTERRUPTS_DMA1_STREAM2 = 29;
static const int INTERRUPTS_DMA1_STREAM3 = 30;
static const int INTERRUPTS_DMA1_STREAM4 = 31;
static const int INTERRUPTS_DMA1_STREAM5 = 32;
static const int INTERRUPTS_DMA1_STREAM6 = 33;
static const int INTERRUPTS_ADC = 34;
static const int INTERRUPTS_FDCAN1_IT0 = 35;
static const int INTERRUPTS_FDCAN2_IT0 = 36;
static const int INTERRUPTS_FDCAN1_IT1 = 37;
static const int INTERRUPTS_FDCAN2_IT1 = 38;
static const int INTERRUPTS_EXTI9_5 = 39;
static const int INTERRUPTS_TIM1_BRK = 40;
static const int INTERRUPTS_TIM1_UP = 41;
static const int INTERRUPTS_TIM1_TRG_COM = 42;
static const int INTERRUPTS_TIM1_CC = 43;
static const int INTERRUPTS_TIM2 = 44;
static const int INTERRUPTS_TIM3 = 45;
static const int INTERRUPTS_TIM4 = 46;
static const int INTERRUPTS_I2C1_EV = 47;
static const int INTERRUPTS_I2C1_ER = 48;
static const int INTERRUPTS_I2C2_EV = 49;
static const int INTERRUPTS_I2C2_ER = 50;
static const int INTERRUPTS_SPI1 = 51;
static const int INTERRUPTS_SPI2 = 52;
static const int INTERRUPTS_USART1 = 53;
static const int INTERRUPTS_USART2 = 54;
static const int INTERRUPTS_USART3 = 55;
static const int INTERRUPTS_EXTI15_10 = 56;
static const int INTERRUPTS_RTC_ALARM = 57;
static const int INTERRUPTS_TIM8_BRK_TIM12 = 59;
static const int INTERRUPTS_TIM8_UP_TIM13 = 60;
static const int INTERRUPTS_TIM8_TRG_COM_TIM14 = 61;
static const int INTERRUPTS_TIM8_CC = 62;
static const int INTERRUPTS_DMA1_STREAM7 = 63;
static const int INTERRUPTS_FMC = 64;
static const int INTERRUPTS_SDMMC1 = 65;
static const int INTERRUPTS_TIM5 = 66;
static const int INTERRUPTS_SPI3 = 67;
static const int INTERRUPTS_UART4 = 68;
static const int INTERRUPTS_UART5 = 69;
static const int INTERRUPTS_TIM6_DAC = 70;
static const int INTERRUPTS_TIM7 = 71;
static const int INTERRUPTS_DMA2_STREAM0 = 72;
static const int INTERRUPTS_DMA2_STREAM1 = 73;
static const int INTERRUPTS_DMA2_STREAM2 = 74;
static const int INTERRUPTS_DMA2_STREAM3 = 75;
static const int INTERRUPTS_DMA2_STREAM4 = 76;
static const int INTERRUPTS_ETH = 77;
static const int INTERRUPTS_ETH_WKUP = 78;
static const int INTERRUPTS_FDCAN_CAL = 79;
static const int INTERRUPTS_DMA2_STREAM5 = 84;
static const int INTERRUPTS_DMA2_STREAM6 = 85;
static const int INTERRUPTS_DMA2_STREAM7 = 86;
static const int INTERRUPTS_USART6 = 87;
static const int INTERRUPTS_I2C3_EV = 88;
static const int INTERRUPTS_I2C3_ER = 89;
static const int INTERRUPTS_OTG_HS_EP1_OUT = 90;
static const int INTERRUPTS_OTG_HS_EP1_IN = 91;
static const int INTERRUPTS_OTG_HS_WKUP = 92;
static const int INTERRUPTS_OTG_HS = 93;
static const int INTERRUPTS_DCMI = 94;
static const int INTERRUPTS_RNG = 96;
static const int INTERRUPTS_FPU = 97;
static const int INTERRUPTS_UART7 = 98;
static const int INTERRUPTS_UART8 = 99;
static const int INTERRUPTS_SPI4 = 100;
static const int INTERRUPTS_SPI5 = 101;
static const int INTERRUPTS_SPI6 = 102;
static const int INTERRUPTS_SAI1 = 103;
static const int INTERRUPTS_LTDC = 104;
static const int INTERRUPTS_LTDC_ER = 105;
static const int INTERRUPTS_DMA2D = 106;
static const int INTERRUPTS_SAI2 = 107;
static const int INTERRUPTS_QUADSPI = 108;
static const int INTERRUPTS_LPTIM1 = 109;
static const int INTERRUPTS_CEC = 110;
static const int INTERRUPTS_I2C4_EV = 111;
static const int INTERRUPTS_I2C4_ER = 112;
static const int INTERRUPTS_SPDIF_RX = 113;
static const int INTERRUPTS_OTG_FS_EP1_OUT = 114;
static const int INTERRUPTS_OTG_FS_EP1_IN = 115;
static const int INTERRUPTS_OTG_FS_WKUP = 116;
static const int INTERRUPTS_OTG_FS = 117;
static const int INTERRUPTS_DMAMUX1_OVR = 118;
static const int INTERRUPTS_HRTIM1_MASTER = 119;
static const int INTERRUPTS_HRTIM1_TIMA = 120;
static const int INTERRUPTS_HRTIM1_TIMB = 121;
static const int INTERRUPTS_HRTIM1_TIMC = 122;
static const int INTERRUPTS_HRTIM1_TIMD = 123;
static const int INTERRUPTS_HRTIM1_TIME = 124;
static const int INTERRUPTS_HRTIM1_FLT = 125;
static const int INTERRUPTS_DFSDM1_FLT0 = 126;
static const int INTERRUPTS_DFSDM1_FLT1 = 127;
static const int INTERRUPTS_DFSDM1_FLT2 = 128;
static const int INTERRUPTS_DFSDM1_FLT3 = 129;
static const int INTERRUPTS_SAI3 = 130;
static const int INTERRUPTS_SWPMI1 = 131;
static const int INTERRUPTS_TIM15 = 132;
static const int INTERRUPTS_TIM16 = 133;
static const int INTERRUPTS_TIM17 = 134;
static const int INTERRUPTS_MDIOS_WKUP = 135;
static const int INTERRUPTS_MDIOS = 136;
static const int INTERRUPTS_JPEG = 137;
static const int INTERRUPTS_MDMA = 138;
static const int INTERRUPTS_SDMMC2 = 140;
static const int INTERRUPTS_HSEM1 = 141;
static const int INTERRUPTS_ADC3 = 143;
static const int INTERRUPTS_DMAMUX2_OVR = 144;
static const int INTERRUPTS_BDMA_CHANNEL0 = 145;
static const int INTERRUPTS_BDMA_CHANNEL1 = 146;
static const int INTERRUPTS_BDMA_CHANNEL2 = 147;
static const int INTERRUPTS_BDMA_CHANNEL3 = 148;
static const int INTERRUPTS_BDMA_CHANNEL4 = 149;
static const int INTERRUPTS_BDMA_CHANNEL5 = 150;
static const int INTERRUPTS_BDMA_CHANNEL6 = 151;
static const int INTERRUPTS_BDMA_CHANNEL7 = 152;
static const int INTERRUPTS_COMP = 153;
static const int INTERRUPTS_LPTIM2 = 154;
static const int INTERRUPTS_LPTIM3 = 155;
static const int INTERRUPTS_LPTIM4 = 156;
static const int INTERRUPTS_LPTIM5 = 157;
static const int INTERRUPTS_LPUART1 = 158;
static const int INTERRUPTS_CRS = 160;
static const int INTERRUPTS_ECC = 161;
static const int INTERRUPTS_SAI4 = 162;
static const int INTERRUPTS_WAKEUP_PIN = 165;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for STM32H743AG.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for STM32H743AG.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
