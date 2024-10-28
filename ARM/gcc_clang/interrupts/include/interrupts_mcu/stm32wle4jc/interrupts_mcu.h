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
* @brief STM32WLE4JC MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_PVD_PVM = 17;
static const int INTERRUPTS_TAMP_STAMP_LSECSS_SSRU = 18;
static const int INTERRUPTS_RTC_WKUP = 19;
static const int INTERRUPTS_FLASH = 20;
static const int INTERRUPTS_RCC = 21;
static const int INTERRUPTS_EXTI0 = 22;
static const int INTERRUPTS_EXTI1 = 23;
static const int INTERRUPTS_EXTI2 = 24;
static const int INTERRUPTS_EXTI3 = 25;
static const int INTERRUPTS_EXTI4 = 26;
static const int INTERRUPTS_DMA1_CHANNEL1 = 27;
static const int INTERRUPTS_DMA1_CHANNEL2 = 28;
static const int INTERRUPTS_DMA1_CHANNEL3 = 29;
static const int INTERRUPTS_DMA1_CHANNEL4 = 30;
static const int INTERRUPTS_DMA1_CHANNEL5 = 31;
static const int INTERRUPTS_DMA1_CHANNEL6 = 32;
static const int INTERRUPTS_DMA1_CHANNEL7 = 33;
static const int INTERRUPTS_ADC = 34;
static const int INTERRUPTS_DAC = 35;
static const int INTERRUPTS_COMP = 37;
static const int INTERRUPTS_EXTI9_5 = 38;
static const int INTERRUPTS_TIM1_BRK = 39;
static const int INTERRUPTS_TIM1_UP = 40;
static const int INTERRUPTS_TIM1_TRG_COM = 41;
static const int INTERRUPTS_TIM1_CC = 42;
static const int INTERRUPTS_TIM2 = 43;
static const int INTERRUPTS_TIM16 = 44;
static const int INTERRUPTS_TIM17 = 45;
static const int INTERRUPTS_I2C1_EV = 46;
static const int INTERRUPTS_I2C1_ER = 47;
static const int INTERRUPTS_I2C2_EV = 48;
static const int INTERRUPTS_I2C2_ER = 49;
static const int INTERRUPTS_SPI1 = 50;
static const int INTERRUPTS_SPI2 = 51;
static const int INTERRUPTS_USART1 = 52;
static const int INTERRUPTS_USART2 = 53;
static const int INTERRUPTS_LPUART1 = 54;
static const int INTERRUPTS_LPTIM1 = 55;
static const int INTERRUPTS_LPTIM2 = 56;
static const int INTERRUPTS_EXTI15_10 = 57;
static const int INTERRUPTS_RTC_ALARM = 58;
static const int INTERRUPTS_LPTIM3 = 59;
static const int INTERRUPTS_SUBGHZSPI = 60;
static const int INTERRUPTS_HSEM = 63;
static const int INTERRUPTS_I2C3_EV = 64;
static const int INTERRUPTS_I2C3_ER = 65;
static const int INTERRUPTS_SUBGHZ_RADIO = 66;
static const int INTERRUPTS_AES = 67;
static const int INTERRUPTS_RNG = 68;
static const int INTERRUPTS_PKA = 69;
static const int INTERRUPTS_DMA2_CHANNEL1 = 70;
static const int INTERRUPTS_DMA2_CHANNEL2 = 71;
static const int INTERRUPTS_DMA2_CHANNEL3 = 72;
static const int INTERRUPTS_DMA2_CHANNEL4 = 73;
static const int INTERRUPTS_DMA2_CHANNEL5 = 74;
static const int INTERRUPTS_DMA2_CHANNEL6 = 75;
static const int INTERRUPTS_DMA2_CHANNEL7 = 76;
static const int INTERRUPTS_DMAMUX1_OVR = 77;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for STM32WLE4JC.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for STM32WLE4JC.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
