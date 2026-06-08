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
* @brief LPC4313JET100 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_DAC = 16;
static const int INTERRUPTS_M0APP = 17;
static const int INTERRUPTS_DMA = 18;
static const int INTERRUPTS_FLASHEEPROM = 20;
static const int INTERRUPTS_ETHERNET = 21;
static const int INTERRUPTS_SDIO = 22;
static const int INTERRUPTS_LCD = 23;
static const int INTERRUPTS_USB0 = 24;
static const int INTERRUPTS_USB1 = 25;
static const int INTERRUPTS_SCT = 26;
static const int INTERRUPTS_RITIMER = 27;
static const int INTERRUPTS_TIMER0 = 28;
static const int INTERRUPTS_TIMER1 = 29;
static const int INTERRUPTS_TIMER2 = 30;
static const int INTERRUPTS_TIMER3 = 31;
static const int INTERRUPTS_MCPWM = 32;
static const int INTERRUPTS_ADC0 = 33;
static const int INTERRUPTS_I2C0 = 34;
static const int INTERRUPTS_I2C1 = 35;
static const int INTERRUPTS_SPI = 36;
static const int INTERRUPTS_ADC1 = 37;
static const int INTERRUPTS_SSP0 = 38;
static const int INTERRUPTS_SSP1 = 39;
static const int INTERRUPTS_USART0 = 40;
static const int INTERRUPTS_UART1 = 41;
static const int INTERRUPTS_USART2 = 42;
static const int INTERRUPTS_USART3 = 43;
static const int INTERRUPTS_I2S0 = 44;
static const int INTERRUPTS_I2S1 = 45;
static const int INTERRUPTS_SPIFI = 46;
static const int INTERRUPTS_SGPIO = 47;
static const int INTERRUPTS_PIN_INT0 = 48;
static const int INTERRUPTS_PIN_INT1 = 49;
static const int INTERRUPTS_PIN_INT2 = 50;
static const int INTERRUPTS_PIN_INT3 = 51;
static const int INTERRUPTS_PIN_INT4 = 52;
static const int INTERRUPTS_PIN_INT5 = 53;
static const int INTERRUPTS_PIN_INT6 = 54;
static const int INTERRUPTS_PIN_INT7 = 55;
static const int INTERRUPTS_GINT0 = 56;
static const int INTERRUPTS_GINT1 = 57;
static const int INTERRUPTS_EVENTROUTER = 58;
static const int INTERRUPTS_C_CAN1 = 59;
static const int INTERRUPTS_ADCHS = 61;
static const int INTERRUPTS_ATIMER = 62;
static const int INTERRUPTS_RTC = 63;
static const int INTERRUPTS_WWDT = 65;
static const int INTERRUPTS_M0SUB = 66;
static const int INTERRUPTS_C_CAN0 = 67;
static const int INTERRUPTS_QEI = 68;
static const int INTERRUPTS_M0_RTC = 16;
static const int INTERRUPTS_M0_M4CORE = 17;
static const int INTERRUPTS_M0_DMA = 18;
static const int INTERRUPTS_M0_FLASHEEPROMAT = 20;
static const int INTERRUPTS_M0_ETHERNET = 21;
static const int INTERRUPTS_M0_SDIO = 22;
static const int INTERRUPTS_M0_LCD = 23;
static const int INTERRUPTS_M0_USB0 = 24;
static const int INTERRUPTS_M0_USB1 = 25;
static const int INTERRUPTS_M0_SCT = 26;
static const int INTERRUPTS_M0_RITIMER_OR_WWDT = 27;
static const int INTERRUPTS_M0_TIMER0 = 28;
static const int INTERRUPTS_M0_GINT1 = 29;
static const int INTERRUPTS_M0_PIN_INT4 = 30;
static const int INTERRUPTS_M0_TIMER3 = 31;
static const int INTERRUPTS_M0_MCPWM = 32;
static const int INTERRUPTS_M0_ADC0 = 33;
static const int INTERRUPTS_M0_I2C0_OR_I2C1 = 34;
static const int INTERRUPTS_M0_SGPIO = 35;
static const int INTERRUPTS_M0_SPI_OR_DAC = 36;
static const int INTERRUPTS_M0_ADC1 = 37;
static const int INTERRUPTS_M0_SSP0_OR_SSP1 = 38;
static const int INTERRUPTS_M0_EVENTROUTER = 39;
static const int INTERRUPTS_M0_USART0 = 40;
static const int INTERRUPTS_M0_UART1 = 41;
static const int INTERRUPTS_M0_USART2_OR_C_CAN1 = 42;
static const int INTERRUPTS_M0_USART3 = 43;
static const int INTERRUPTS_M0_I2S0_OR_I2S1_QEI = 44;
static const int INTERRUPTS_M0_C_CAN0 = 45;
static const int INTERRUPTS_M0_SPIFI_OR_ADCHS = 46;
static const int INTERRUPTS_M0_M0SUB = 47;
static const int INTERRUPTS_M0S_RTC = 16;
static const int INTERRUPTS_M0S_M4CORE = 17;
static const int INTERRUPTS_M0S_DMA = 18;
static const int INTERRUPTS_M0S_SGPIO_INPUT = 20;
static const int INTERRUPTS_M0S_SGPIO_MATCH = 21;
static const int INTERRUPTS_M0S_SGPIO_SHIFT = 22;
static const int INTERRUPTS_M0S_SGPIO_POS = 23;
static const int INTERRUPTS_M0S_USB0 = 24;
static const int INTERRUPTS_M0S_USB1 = 25;
static const int INTERRUPTS_M0S_SCT = 26;
static const int INTERRUPTS_M0S_RITIMER = 27;
static const int INTERRUPTS_M0S_GINT1 = 28;
static const int INTERRUPTS_M0S_TIMER1 = 29;
static const int INTERRUPTS_M0S_TIMER2 = 30;
static const int INTERRUPTS_M0S_PIN_INT5 = 31;
static const int INTERRUPTS_M0S_MCPWM = 32;
static const int INTERRUPTS_M0S_ADC0 = 33;
static const int INTERRUPTS_M0S_I2C0 = 34;
static const int INTERRUPTS_M0S_I2C1 = 35;
static const int INTERRUPTS_M0S_SPI = 36;
static const int INTERRUPTS_M0S_ADC1 = 37;
static const int INTERRUPTS_M0S_SSP0_OR_SSP1 = 38;
static const int INTERRUPTS_M0S_EVENTROUTER = 39;
static const int INTERRUPTS_M0S_USART0 = 40;
static const int INTERRUPTS_M0S_UART1 = 41;
static const int INTERRUPTS_M0S_USART2_OR_C_CAN1 = 42;
static const int INTERRUPTS_M0S_USART3 = 43;
static const int INTERRUPTS_M0S_I2S0_OR_I2S1_OR_QEI = 44;
static const int INTERRUPTS_M0S_C_CAN0 = 45;
static const int INTERRUPTS_M0S_SPIFI_OR_ADCHS = 46;
static const int INTERRUPTS_M0S_M0APP = 47;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for LPC4313JET100.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for LPC4313JET100.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
