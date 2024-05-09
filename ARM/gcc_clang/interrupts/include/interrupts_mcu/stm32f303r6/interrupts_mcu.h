/****************************************************************************
**
** Copyright (C) 2023 MikroElektronika d.o.o.
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
* @brief stm32f303r6 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NMI = 2;
static const int INTERRUPTS_HARDFAULT = 3;
static const int INTERRUPTS_MEMMANAGE = 4;
static const int INTERRUPTS_BUSFAULT = 5;
static const int INTERRUPTS_USAGEFAULT = 6;
static const int INTERRUPTS_RESERVED1 = 7;
static const int INTERRUPTS_RESERVED2 = 8;
static const int INTERRUPTS_RESERVED3 = 9;
static const int INTERRUPTS_RESERVED4 = 10;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_RESERVED5 = 12;
static const int INTERRUPTS_RESERVED6 = 13;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_WWDG = 16;
static const int INTERRUPTS_PVD = 17;
static const int INTERRUPTS_TAMPER_STAMP = 18;
static const int INTERRUPTS_RTC_WKUP = 19;
static const int INTERRUPTS_FLASH = 20;
static const int INTERRUPTS_RCC = 21;
static const int INTERRUPTS_EXTI0 = 22;
static const int INTERRUPTS_EXTI1 = 23;
static const int INTERRUPTS_EXTI2_TS = 24;
static const int INTERRUPTS_EXTI3 = 25;
static const int INTERRUPTS_EXTI4 = 26;
static const int INTERRUPTS_DMA1_CH1 = 27;
static const int INTERRUPTS_DMA1_CH2 = 28;
static const int INTERRUPTS_DMA1_CH3 = 29;
static const int INTERRUPTS_DMA1_CH4 = 30;
static const int INTERRUPTS_DMA1_CH5 = 31;
static const int INTERRUPTS_DMA1_CH6 = 32;
static const int INTERRUPTS_DMA1_CH7 = 33;
static const int INTERRUPTS_ADC1_2 = 34;
static const int INTERRUPTS_USB_HP_CAN_TX = 35;
static const int INTERRUPTS_USB_LP_CAN_RX0 = 36;
static const int INTERRUPTS_CAN_RX1 = 37;
static const int INTERRUPTS_CAN_SCE = 38;
static const int INTERRUPTS_EXTI9_5 = 39;
static const int INTERRUPTS_TIM1_BRK_TIM15 = 40;
static const int INTERRUPTS_TIM1_UP_TIM16 = 41;
static const int INTERRUPTS_TIM1_TRG_COM_TIM17 = 42;
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
static const int INTERRUPTS_USBWAKEUP = 58;
static const int INTERRUPTS_TIM8_BRK = 59;
static const int INTERRUPTS_TIM8_UP = 60;
static const int INTERRUPTS_TIM8_TRG_COM = 61;
static const int INTERRUPTS_TIM8_CC = 62;
static const int INTERRUPTS_ADC3 = 63;
static const int INTERRUPTS_RESERVED12 = 64;
static const int INTERRUPTS_RESERVED13 = 65;
static const int INTERRUPTS_RESERVED14 = 66;
static const int INTERRUPTS_SPI3 = 67;
static const int INTERRUPTS_UART4 = 68;
static const int INTERRUPTS_UART5 = 69;
static const int INTERRUPTS_TIM6_DAC1 = 70;
static const int INTERRUPTS_TIM7 = 71;
static const int INTERRUPTS_DMA2_CH1 = 72;
static const int INTERRUPTS_DMA2_CH2 = 73;
static const int INTERRUPTS_DMA2_CH3 = 74;
static const int INTERRUPTS_DMA2_CH4 = 75;
static const int INTERRUPTS_DMA2_CH5 = 76;
static const int INTERRUPTS_ADC4 = 77;
static const int INTERRUPTS_RESERVED17 = 78;
static const int INTERRUPTS_RESERVED18 = 79;
static const int INTERRUPTS_COMP1_2_3 = 80;
static const int INTERRUPTS_COMP4_5_6 = 81;
static const int INTERRUPTS_COMP7 = 82;
static const int INTERRUPTS_RESERVED20 = 83;
static const int INTERRUPTS_RESERVED21 = 84;
static const int INTERRUPTS_RESERVED22 = 85;
static const int INTERRUPTS_RESERVED23 = 86;
static const int INTERRUPTS_RESERVED24 = 87;
static const int INTERRUPTS_RESERVED25 = 88;
static const int INTERRUPTS_RESERVED26 = 89;
static const int INTERRUPTS_USB_HP = 90;
static const int INTERRUPTS_USB_LP = 91;
static const int INTERRUPTS_USB_WAKEUP_RMP = 92;
static const int INTERRUPTS_RESERVED27 = 93;
static const int INTERRUPTS_RESERVED28 = 94;
static const int INTERRUPTS_RESERVED29 = 95;
static const int INTERRUPTS_RESERVED30 = 96;
static const int INTERRUPTS_FPU = 97;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for stm32f303r6.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for stm32f303r6.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
