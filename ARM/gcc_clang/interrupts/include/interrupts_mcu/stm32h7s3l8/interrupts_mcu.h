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
* @brief STM32H7S3L8 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_RESET = 1;
static const int INTERRUPTS_NONMASKABLEINT = 2;
static const int INTERRUPTS_HARDFAULT = 3;
static const int INTERRUPTS_MEMORYMANAGEMENT = 4;
static const int INTERRUPTS_BUSFAULT = 5;
static const int INTERRUPTS_USAGEFAULT = 6;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUGMONITOR = 12;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_PVD_PVM = 16;
static const int INTERRUPTS_DTS = 18;
static const int INTERRUPTS_IWDG = 19;
static const int INTERRUPTS_WWDG = 20;
static const int INTERRUPTS_RCC = 21;
static const int INTERRUPTS_FLASH = 24;
static const int INTERRUPTS_RAMECC = 25;
static const int INTERRUPTS_FPU = 26;
static const int INTERRUPTS_TAMP = 29;
static const int INTERRUPTS_EXTI0 = 32;
static const int INTERRUPTS_EXTI1 = 33;
static const int INTERRUPTS_EXTI2 = 34;
static const int INTERRUPTS_EXTI3 = 35;
static const int INTERRUPTS_EXTI4 = 36;
static const int INTERRUPTS_EXTI5 = 37;
static const int INTERRUPTS_EXTI6 = 38;
static const int INTERRUPTS_EXTI7 = 39;
static const int INTERRUPTS_EXTI8 = 40;
static const int INTERRUPTS_EXTI9 = 41;
static const int INTERRUPTS_EXTI10 = 42;
static const int INTERRUPTS_EXTI11 = 43;
static const int INTERRUPTS_EXTI12 = 44;
static const int INTERRUPTS_EXTI13 = 45;
static const int INTERRUPTS_EXTI14 = 46;
static const int INTERRUPTS_EXTI15 = 47;
static const int INTERRUPTS_RTC = 48;
static const int INTERRUPTS_SAES = 49;
static const int INTERRUPTS_CRYP = 50;
static const int INTERRUPTS_PKA = 51;
static const int INTERRUPTS_HASH = 52;
static const int INTERRUPTS_RNG = 53;
static const int INTERRUPTS_ADC1_2 = 54;
static const int INTERRUPTS_GPDMA1_CHANNEL0 = 55;
static const int INTERRUPTS_GPDMA1_CHANNEL1 = 56;
static const int INTERRUPTS_GPDMA1_CHANNEL2 = 57;
static const int INTERRUPTS_GPDMA1_CHANNEL3 = 58;
static const int INTERRUPTS_GPDMA1_CHANNEL4 = 59;
static const int INTERRUPTS_GPDMA1_CHANNEL5 = 60;
static const int INTERRUPTS_GPDMA1_CHANNEL6 = 61;
static const int INTERRUPTS_GPDMA1_CHANNEL7 = 62;
static const int INTERRUPTS_TIM1_BRK = 63;
static const int INTERRUPTS_TIM1_UP = 64;
static const int INTERRUPTS_TIM1_TRG_COM = 65;
static const int INTERRUPTS_TIM1_CC = 66;
static const int INTERRUPTS_TIM2 = 67;
static const int INTERRUPTS_TIM3 = 68;
static const int INTERRUPTS_TIM4 = 69;
static const int INTERRUPTS_TIM5 = 70;
static const int INTERRUPTS_TIM6 = 71;
static const int INTERRUPTS_TIM7 = 72;
static const int INTERRUPTS_TIM9 = 73;
static const int INTERRUPTS_SPI1 = 74;
static const int INTERRUPTS_SPI2 = 75;
static const int INTERRUPTS_SPI3 = 76;
static const int INTERRUPTS_SPI4 = 77;
static const int INTERRUPTS_SPI5 = 78;
static const int INTERRUPTS_SPI6 = 79;
static const int INTERRUPTS_HPDMA1_CHANNEL0 = 80;
static const int INTERRUPTS_HPDMA1_CHANNEL1 = 81;
static const int INTERRUPTS_HPDMA1_CHANNEL2 = 82;
static const int INTERRUPTS_HPDMA1_CHANNEL3 = 83;
static const int INTERRUPTS_HPDMA1_CHANNEL4 = 84;
static const int INTERRUPTS_HPDMA1_CHANNEL5 = 85;
static const int INTERRUPTS_HPDMA1_CHANNEL6 = 86;
static const int INTERRUPTS_HPDMA1_CHANNEL7 = 87;
static const int INTERRUPTS_SAI1_A = 88;
static const int INTERRUPTS_SAI1_B = 89;
static const int INTERRUPTS_SAI2_A = 90;
static const int INTERRUPTS_SAI2_B = 91;
static const int INTERRUPTS_I2C1_EV = 92;
static const int INTERRUPTS_I2C1_ER = 93;
static const int INTERRUPTS_I2C2_EV = 94;
static const int INTERRUPTS_I2C2_ER = 95;
static const int INTERRUPTS_I2C3_EV = 96;
static const int INTERRUPTS_I2C3_ER = 97;
static const int INTERRUPTS_USART1 = 98;
static const int INTERRUPTS_USART2 = 99;
static const int INTERRUPTS_USART3 = 100;
static const int INTERRUPTS_UART4 = 101;
static const int INTERRUPTS_UART5 = 102;
static const int INTERRUPTS_UART7 = 103;
static const int INTERRUPTS_UART8 = 104;
static const int INTERRUPTS_I3C1_EV = 105;
static const int INTERRUPTS_I3C1_ER = 106;
static const int INTERRUPTS_OTG_HS = 107;
static const int INTERRUPTS_ETH = 108;
static const int INTERRUPTS_CORDIC = 109;
static const int INTERRUPTS_GFXTIM = 110;
static const int INTERRUPTS_DCMIPP = 111;
static const int INTERRUPTS_DMA2D = 114;
static const int INTERRUPTS_JPEG = 115;
static const int INTERRUPTS_GFXMMU = 116;
static const int INTERRUPTS_I3C1_WKUP = 117;
static const int INTERRUPTS_MCE1 = 118;
static const int INTERRUPTS_MCE2 = 119;
static const int INTERRUPTS_MCE3 = 120;
static const int INTERRUPTS_XSPI1 = 121;
static const int INTERRUPTS_XSPI2 = 122;
static const int INTERRUPTS_FMC = 123;
static const int INTERRUPTS_SDMMC1 = 124;
static const int INTERRUPTS_SDMMC2 = 125;
static const int INTERRUPTS_OTG_FS = 128;
static const int INTERRUPTS_TIM12 = 129;
static const int INTERRUPTS_TIM13 = 130;
static const int INTERRUPTS_TIM14 = 131;
static const int INTERRUPTS_TIM15 = 132;
static const int INTERRUPTS_TIM16 = 133;
static const int INTERRUPTS_TIM17 = 134;
static const int INTERRUPTS_LPTIM1 = 135;
static const int INTERRUPTS_LPTIM2 = 136;
static const int INTERRUPTS_LPTIM3 = 137;
static const int INTERRUPTS_LPTIM4 = 138;
static const int INTERRUPTS_LPTIM5 = 139;
static const int INTERRUPTS_SPDIF_RX = 140;
static const int INTERRUPTS_MDIOS = 141;
static const int INTERRUPTS_ADF1_FLT0 = 142;
static const int INTERRUPTS_CRS = 143;
static const int INTERRUPTS_UCPD1 = 144;
static const int INTERRUPTS_CEC = 145;
static const int INTERRUPTS_PSSI = 146;
static const int INTERRUPTS_LPUART1 = 147;
static const int INTERRUPTS_WAKEUP_PIN = 148;
static const int INTERRUPTS_GPDMA1_CHANNEL8 = 149;
static const int INTERRUPTS_GPDMA1_CHANNEL9 = 150;
static const int INTERRUPTS_GPDMA1_CHANNEL10 = 151;
static const int INTERRUPTS_GPDMA1_CHANNEL11 = 152;
static const int INTERRUPTS_GPDMA1_CHANNEL12 = 153;
static const int INTERRUPTS_GPDMA1_CHANNEL13 = 154;
static const int INTERRUPTS_GPDMA1_CHANNEL14 = 155;
static const int INTERRUPTS_GPDMA1_CHANNEL15 = 156;
static const int INTERRUPTS_HPDMA1_CHANNEL8 = 157;
static const int INTERRUPTS_HPDMA1_CHANNEL9 = 158;
static const int INTERRUPTS_HPDMA1_CHANNEL10 = 159;
static const int INTERRUPTS_HPDMA1_CHANNEL11 = 160;
static const int INTERRUPTS_HPDMA1_CHANNEL12 = 161;
static const int INTERRUPTS_HPDMA1_CHANNEL13 = 162;
static const int INTERRUPTS_HPDMA1_CHANNEL14 = 163;
static const int INTERRUPTS_HPDMA1_CHANNEL15 = 164;
static const int INTERRUPTS_FDCAN1_IT0 = 168;
static const int INTERRUPTS_FDCAN1_IT1 = 169;
static const int INTERRUPTS_FDCAN2_IT0 = 170;
static const int INTERRUPTS_FDCAN2_IT1 = 171;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for STM32H7S3L8.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for STM32H7S3L8.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
