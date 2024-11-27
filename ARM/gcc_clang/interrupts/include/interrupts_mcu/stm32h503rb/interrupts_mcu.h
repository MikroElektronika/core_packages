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
* @brief STM32H503RB MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_WWDG = 16;
static const int INTERRUPTS_PVD_AVD = 17;
static const int INTERRUPTS_RTC = 18;
static const int INTERRUPTS_TAMP = 20;
static const int INTERRUPTS_RAMCFG = 21;
static const int INTERRUPTS_FLASH = 22;
static const int INTERRUPTS_RCC = 25;
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
static const int INTERRUPTS_LPUART1 = 79;
static const int INTERRUPTS_LPTIM1 = 80;
static const int INTERRUPTS_LPTIM2 = 86;
static const int INTERRUPTS_USB_DRD_FS = 90;
static const int INTERRUPTS_CRS = 91;
static const int INTERRUPTS_GPDMA2_CHANNEL0 = 106;
static const int INTERRUPTS_GPDMA2_CHANNEL1 = 107;
static const int INTERRUPTS_GPDMA2_CHANNEL2 = 108;
static const int INTERRUPTS_GPDMA2_CHANNEL3 = 109;
static const int INTERRUPTS_GPDMA2_CHANNEL4 = 110;
static const int INTERRUPTS_GPDMA2_CHANNEL5 = 111;
static const int INTERRUPTS_GPDMA2_CHANNEL6 = 112;
static const int INTERRUPTS_GPDMA2_CHANNEL7 = 113;
static const int INTERRUPTS_FPU = 119;
static const int INTERRUPTS_ICACHE = 120;
static const int INTERRUPTS_DTS = 129;
static const int INTERRUPTS_RNG = 130;
static const int INTERRUPTS_HASH = 133;
static const int INTERRUPTS_I3C1_EV = 139;
static const int INTERRUPTS_I3C1_ER = 140;
static const int INTERRUPTS_I3C2_EV = 147;
static const int INTERRUPTS_I3C2_ER = 148;
static const int INTERRUPTS_COMP1 = 149;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for STM32H503RB.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for STM32H503RB.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
