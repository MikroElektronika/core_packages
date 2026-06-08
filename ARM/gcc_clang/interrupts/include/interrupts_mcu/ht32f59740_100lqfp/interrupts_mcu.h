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
* @brief HT32F59740-100LQFP MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_LVD_BOD = 16;
static const int INTERRUPTS_RTC = 17;
static const int INTERRUPTS_FLASH = 18;
static const int INTERRUPTS_EVWUP = 19;
static const int INTERRUPTS_EXTI0_7 = 20;
static const int INTERRUPTS_EXTI8_15 = 21;
static const int INTERRUPTS_EXTI0_1 = 20;
static const int INTERRUPTS_EXTI2_3 = 21;
static const int INTERRUPTS_EXTI4_9 = 22;
static const int INTERRUPTS_EXTI4_7 = 22;
static const int INTERRUPTS_CORDIC = 22;
static const int INTERRUPTS_EXTI4_15 = 22;
static const int INTERRUPTS_EXTI10_15 = 23;
static const int INTERRUPTS_CAN0 = 23;
static const int INTERRUPTS_ADC0 = 24;
static const int INTERRUPTS_ADC1 = 25;
static const int INTERRUPTS_MCTM0_1_BRK = 26;
static const int INTERRUPTS_MCTM0_1_UP = 27;
static const int INTERRUPTS_MCTM0_1_TR_UP2 = 28;
static const int INTERRUPTS_MCTM0_1_CC = 29;
static const int INTERRUPTS_MCTM0_BRK = 26;
static const int INTERRUPTS_MCTM0_UP = 27;
static const int INTERRUPTS_MCTM0_TR_UP2 = 28;
static const int INTERRUPTS_MCTM0_CC = 29;
static const int INTERRUPTS_GPTM0_G = 30;
static const int INTERRUPTS_GPTM0_1_VCLK = 31;
static const int INTERRUPTS_GPTM0_VCLK = 31;
static const int INTERRUPTS_BFTM0 = 32;
static const int INTERRUPTS_BFTM1_2 = 33;
static const int INTERRUPTS_BFTM1 = 33;
static const int INTERRUPTS_CMP0_1 = 34;
static const int INTERRUPTS_CMP2_3 = 35;
static const int INTERRUPTS_CMP0 = 34;
static const int INTERRUPTS_CMP1 = 35;
static const int INTERRUPTS_CMP2 = 36;
static const int INTERRUPTS_PID0 = 36;
static const int INTERRUPTS_I2C0_1 = 37;
static const int INTERRUPTS_SPI0_1 = 38;
static const int INTERRUPTS_I2C0 = 37;
static const int INTERRUPTS_SPI0 = 38;
static const int INTERRUPTS_USART0 = 39;
static const int INTERRUPTS_UART0_1 = 40;
static const int INTERRUPTS_UART0 = 40;
static const int INTERRUPTS_GPTM1_G = 41;
static const int INTERRUPTS_PDMACH0_2 = 42;
static const int INTERRUPTS_PDMACH3_5 = 43;
static const int INTERRUPTS_PDMACH0_1 = 41;
static const int INTERRUPTS_PDMACH2_3 = 42;
static const int INTERRUPTS_PDMACH4_5 = 43;
static const int INTERRUPTS_SCTM0 = 44;
static const int INTERRUPTS_SCTM1 = 45;
static const int INTERRUPTS_SCTM2 = 46;
static const int INTERRUPTS_SCTM3 = 47;
static const int INTERRUPTS_COMP = 23;
static const int INTERRUPTS_COMP_DAC = 23;
static const int INTERRUPTS_DAC0_1 = 23;
static const int INTERRUPTS_I2C2 = 25;
static const int INTERRUPTS_AES = 25;
static const int INTERRUPTS_MCTM0 = 26;
static const int INTERRUPTS_PWM2 = 26;
static const int INTERRUPTS_GPTM1 = 27;
static const int INTERRUPTS_QSPI = 27;
static const int INTERRUPTS_LCD = 27;
static const int INTERRUPTS_TKEY = 27;
static const int INTERRUPTS_RF = 27;
static const int INTERRUPTS_GPTM0 = 28;
static const int INTERRUPTS_PWM0 = 31;
static const int INTERRUPTS_PWM1 = 32;
static const int INTERRUPTS_I2C1 = 36;
static const int INTERRUPTS_SPI1 = 38;
static const int INTERRUPTS_USART1 = 40;
static const int INTERRUPTS_UART1 = 42;
static const int INTERRUPTS_UART0_UART2 = 41;
static const int INTERRUPTS_UART1_UART3 = 42;
static const int INTERRUPTS_SCI = 43;
static const int INTERRUPTS_MIDI = 43;
static const int INTERRUPTS_I2S = 44;
static const int INTERRUPTS_UART2 = 43;
static const int INTERRUPTS_UART3 = 44;
static const int INTERRUPTS_SLED0 = 43;
static const int INTERRUPTS_SLED1 = 44;
static const int INTERRUPTS_USB = 45;
static const int INTERRUPTS_LEDC = 45;
static const int INTERRUPTS_PDMACH2_5 = 47;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for HT32F59740-100LQFP.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for HT32F59740-100LQFP.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
