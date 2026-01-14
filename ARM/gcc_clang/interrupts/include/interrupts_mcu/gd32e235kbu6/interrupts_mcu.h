/****************************************************************************
**
** Copyright (C) 2025 MikroElektronika d.o.o.
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
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
** OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
* @file  interrupts_mcu.h
* @brief GD32E235KBU6 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_WWDGT = 16;
static const int INTERRUPTS_LVD = 17;
static const int INTERRUPTS_RTC = 18;
static const int INTERRUPTS_FMC = 19;
static const int INTERRUPTS_RCU = 20;
static const int INTERRUPTS_EXTI0_1 = 21;
static const int INTERRUPTS_EXTI2_3 = 22;
static const int INTERRUPTS_EXTI4_15 = 23;
static const int INTERRUPTS_DMA_Channel0 = 25;
static const int INTERRUPTS_DMA_Channel1_2 = 26;
static const int INTERRUPTS_DMA_Channel3_4 = 27;
static const int INTERRUPTS_ADC_CMP = 28;
static const int INTERRUPTS_TIMER0_BRK_UP_TRG_COM = 29;
static const int INTERRUPTS_TIMER0_Channel = 30;
static const int INTERRUPTS_TIMER2 = 32;
static const int INTERRUPTS_TIMER5 = 33;
static const int INTERRUPTS_TIMER13 = 35;
static const int INTERRUPTS_TIMER14 = 36;
static const int INTERRUPTS_TIMER15 = 37;
static const int INTERRUPTS_TIMER16 = 38;
static const int INTERRUPTS_I2C0_EV = 39;
static const int INTERRUPTS_I2C1_EV = 40;
static const int INTERRUPTS_SPI0 = 41;
static const int INTERRUPTS_SPI1 = 42;
static const int INTERRUPTS_USART0 = 43;
static const int INTERRUPTS_USART1 = 44;
static const int INTERRUPTS_I2C0_ER = 48;
static const int INTERRUPTS_I2C1_ER = 50;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for GD32E235KBU6.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for GD32E235KBU6.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
