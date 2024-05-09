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
* @brief stm32l011k4 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_DEBUGMON = 12;
static const int INTERRUPTS_RESERVED5 = 13;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_WWDG = 16;
static const int INTERRUPTS_PVD = 17;
static const int INTERRUPTS_RTC = 18;
static const int INTERRUPTS_FLASH = 19;
static const int INTERRUPTS_RCC_CRS = 20;
static const int INTERRUPTS_EXTI0_1 = 21;
static const int INTERRUPTS_EXTI2_3 = 22;
static const int INTERRUPTS_EXTI4_15 = 23;
static const int INTERRUPTS_RESERVD6 = 24;
static const int INTERRUPTS_DMA_CH1 = 25;
static const int INTERRUPTS_DMA_CH2_CH3 = 26;
static const int INTERRUPTS_DMA_CH4_CH7 = 27;
static const int INTERRUPTS_ADC_COMP = 28;
static const int INTERRUPTS_LPTIM1 = 29;
static const int INTERRUPTS_RESERVED7 = 30;
static const int INTERRUPTS_TIM2 = 31;
static const int INTERRUPTS_RESERVED8 = 32;
static const int INTERRUPTS_TIM6_DAC = 33;
static const int INTERRUPTS_RESERVED9 = 34;
static const int INTERRUPTS_RESERVED10 = 35;
static const int INTERRUPTS_TIM21 = 36;
static const int INTERRUPTS_RESERVED11 = 37;
static const int INTERRUPTS_TIM22 = 38;
static const int INTERRUPTS_I2C1 = 39;
static const int INTERRUPTS_I2C2 = 40;
static const int INTERRUPTS_SPI1 = 41;
static const int INTERRUPTS_SPI2 = 42;
static const int INTERRUPTS_USART1 = 43;
static const int INTERRUPTS_USART2 = 44;
static const int INTERRUPTS_LPUART1 = 45;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for stm32l011k4.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for stm32l011k4.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
