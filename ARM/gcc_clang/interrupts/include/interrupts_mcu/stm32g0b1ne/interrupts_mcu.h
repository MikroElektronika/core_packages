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
* @brief STM32G0B1NE MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NONMASKABLEINT = 2;
static const int INTERRUPTS_HARDFAULT = 3;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_WWDG = 16;
static const int INTERRUPTS_PVD_VDDIO2 = 17;
static const int INTERRUPTS_RTC_TAMP = 18;
static const int INTERRUPTS_FLASH = 19;
static const int INTERRUPTS_RCC_CRS = 20;
static const int INTERRUPTS_EXTI0_1 = 21;
static const int INTERRUPTS_EXTI2_3 = 22;
static const int INTERRUPTS_EXTI4_15 = 23;
static const int INTERRUPTS_USB_UCPD1_2 = 24;
static const int INTERRUPTS_DMA1_CHANNEL1 = 25;
static const int INTERRUPTS_DMA1_CHANNEL2_3 = 26;
static const int INTERRUPTS_DMA1_CH4_7_DMA2_CH1_5_DMAMUX1_OVR = 27;
static const int INTERRUPTS_ADC1_COMP = 28;
static const int INTERRUPTS_TIM1_BRK_UP_TRG_COM = 29;
static const int INTERRUPTS_TIM1_CC = 30;
static const int INTERRUPTS_TIM2 = 31;
static const int INTERRUPTS_TIM3_TIM4 = 32;
static const int INTERRUPTS_TIM6_DAC_LPTIM1 = 33;
static const int INTERRUPTS_TIM7_LPTIM2 = 34;
static const int INTERRUPTS_TIM14 = 35;
static const int INTERRUPTS_TIM15 = 36;
static const int INTERRUPTS_TIM16_FDCAN_IT0 = 37;
static const int INTERRUPTS_TIM17_FDCAN_IT1 = 38;
static const int INTERRUPTS_I2C1 = 39;
static const int INTERRUPTS_I2C2_3 = 40;
static const int INTERRUPTS_SPI1 = 41;
static const int INTERRUPTS_SPI2_3 = 42;
static const int INTERRUPTS_USART1 = 43;
static const int INTERRUPTS_USART2_LPUART2 = 44;
static const int INTERRUPTS_USART3_4_5_6_LPUART1 = 45;
static const int INTERRUPTS_CEC = 46;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for STM32G0B1NE.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for STM32G0B1NE.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
