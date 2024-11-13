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
* @brief STM32H562RI MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_SECUREFAULT = 7;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUGMONITOR = 12;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_WWDG = 16;
static const int INTERRUPTS_PVD_AVD = 17;
static const int INTERRUPTS_RTC = 18;
static const int INTERRUPTS_RTC_S = 19;
static const int INTERRUPTS_TAMP = 20;
static const int INTERRUPTS_RAMCFG = 21;
static const int INTERRUPTS_FLASH = 22;
static const int INTERRUPTS_FLASH_S = 23;
static const int INTERRUPTS_GTZC = 24;
static const int INTERRUPTS_RCC = 25;
static const int INTERRUPTS_RCC_S = 26;
static const int INTERRUPTS_EXTI0 = 27;
static const int INTERRUPTS_EXTI1 = 28;
static const int INTERRUPTS_EXTI2 = 29;
static const int INTERRUPTS_EXTI3 = 30;
static const int INTERRUPTS_EXTI4 = 31;
static const int INTERRUPTS_EXTI5 = 32;
static const int INTERRUPTS_EXTI6 = 33;
static const int INTERRUPTS_EXTI7 = 34;
static const int INTERRUPTS_EXTI8 = 35;
static const int INTERRUPTS_EXTI9 = 36;
static const int INTERRUPTS_EXTI10 = 37;
static const int INTERRUPTS_EXTI11 = 38;
static const int INTERRUPTS_EXTI12 = 39;
static const int INTERRUPTS_EXTI13 = 40;
static const int INTERRUPTS_EXTI14 = 41;
static const int INTERRUPTS_EXTI15 = 42;
static const int INTERRUPTS_GPDMA1_CHANNEL0 = 43;
static const int INTERRUPTS_GPDMA1_CHANNEL1 = 44;
static const int INTERRUPTS_GPDMA1_CHANNEL2 = 45;
static const int INTERRUPTS_GPDMA1_CHANNEL3 = 46;
static const int INTERRUPTS_GPDMA1_CHANNEL4 = 47;
static const int INTERRUPTS_GPDMA1_CHANNEL5 = 48;
static const int INTERRUPTS_GPDMA1_CHANNEL6 = 49;
static const int INTERRUPTS_GPDMA1_CHANNEL7 = 50;
static const int INTERRUPTS_IWDG = 51;
static const int INTERRUPTS_ADC1 = 53;
static const int INTERRUPTS_DAC1 = 54;
static const int INTERRUPTS_FDCAN1_IT0 = 55;
static const int INTERRUPTS_FDCAN1_IT1 = 56;
static const int INTERRUPTS_TIM1_BRK = 57;
static const int INTERRUPTS_TIM1_UP = 58;
static const int INTERRUPTS_TIM1_TRG_COM = 59;
static const int INTERRUPTS_TIM1_CC = 60;
static const int INTERRUPTS_TIM2 = 61;
static const int INTERRUPTS_TIM3 = 62;
static const int INTERRUPTS_TIM4 = 63;
static const int INTERRUPTS_TIM5 = 64;
static const int INTERRUPTS_TIM6 = 65;
static const int INTERRUPTS_TIM7 = 66;
static const int INTERRUPTS_I2C1_EV = 67;
static const int INTERRUPTS_I2C1_ER = 68;
static const int INTERRUPTS_I2C2_EV = 69;
static const int INTERRUPTS_I2C2_ER = 70;
static const int INTERRUPTS_SPI1 = 71;
static const int INTERRUPTS_SPI2 = 72;
static const int INTERRUPTS_SPI3 = 73;
static const int INTERRUPTS_USART1 = 74;
static const int INTERRUPTS_USART2 = 75;
static const int INTERRUPTS_USART3 = 76;
static const int INTERRUPTS_UART4 = 77;
static const int INTERRUPTS_UART5 = 78;
static const int INTERRUPTS_LPUART1 = 79;
static const int INTERRUPTS_LPTIM1 = 80;
static const int INTERRUPTS_TIM8_BRK = 81;
static const int INTERRUPTS_TIM8_UP = 82;
static const int INTERRUPTS_TIM8_TRG_COM = 83;
static const int INTERRUPTS_TIM8_CC = 84;
static const int INTERRUPTS_ADC2 = 85;
static const int INTERRUPTS_LPTIM2 = 86;
static const int INTERRUPTS_TIM15 = 87;
static const int INTERRUPTS_TIM16 = 88;
static const int INTERRUPTS_TIM17 = 89;
static const int INTERRUPTS_USB_DRD_FS = 90;
static const int INTERRUPTS_CRS = 91;
static const int INTERRUPTS_UCPD1 = 92;
static const int INTERRUPTS_FMC = 93;
static const int INTERRUPTS_OCTOSPI1 = 94;
static const int INTERRUPTS_SDMMC1 = 95;
static const int INTERRUPTS_I2C3_EV = 96;
static const int INTERRUPTS_I2C3_ER = 97;
static const int INTERRUPTS_SPI4 = 98;
static const int INTERRUPTS_SPI5 = 99;
static const int INTERRUPTS_SPI6 = 100;
static const int INTERRUPTS_USART6 = 101;
static const int INTERRUPTS_USART10 = 102;
static const int INTERRUPTS_USART11 = 103;
static const int INTERRUPTS_SAI1 = 104;
static const int INTERRUPTS_SAI2 = 105;
static const int INTERRUPTS_GPDMA2_CHANNEL0 = 106;
static const int INTERRUPTS_GPDMA2_CHANNEL1 = 107;
static const int INTERRUPTS_GPDMA2_CHANNEL2 = 108;
static const int INTERRUPTS_GPDMA2_CHANNEL3 = 109;
static const int INTERRUPTS_GPDMA2_CHANNEL4 = 110;
static const int INTERRUPTS_GPDMA2_CHANNEL5 = 111;
static const int INTERRUPTS_GPDMA2_CHANNEL6 = 112;
static const int INTERRUPTS_GPDMA2_CHANNEL7 = 113;
static const int INTERRUPTS_UART7 = 114;
static const int INTERRUPTS_UART8 = 115;
static const int INTERRUPTS_UART9 = 116;
static const int INTERRUPTS_UART12 = 117;
static const int INTERRUPTS_FPU = 119;
static const int INTERRUPTS_ICACHE = 120;
static const int INTERRUPTS_DCACHE1 = 121;
static const int INTERRUPTS_DCMI_PSSI = 124;
static const int INTERRUPTS_CORDIC = 127;
static const int INTERRUPTS_FMAC = 128;
static const int INTERRUPTS_DTS = 129;
static const int INTERRUPTS_RNG = 130;
static const int INTERRUPTS_HASH = 133;
static const int INTERRUPTS_PKA = 134;
static const int INTERRUPTS_CEC = 135;
static const int INTERRUPTS_TIM12 = 136;
static const int INTERRUPTS_TIM13 = 137;
static const int INTERRUPTS_TIM14 = 138;
static const int INTERRUPTS_I3C1_EV = 139;
static const int INTERRUPTS_I3C1_ER = 140;
static const int INTERRUPTS_I2C4_EV = 141;
static const int INTERRUPTS_I2C4_ER = 142;
static const int INTERRUPTS_LPTIM3 = 143;
static const int INTERRUPTS_LPTIM4 = 144;
static const int INTERRUPTS_LPTIM5 = 145;
static const int INTERRUPTS_LPTIM6 = 146;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for STM32H562RI.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for STM32H562RI.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
