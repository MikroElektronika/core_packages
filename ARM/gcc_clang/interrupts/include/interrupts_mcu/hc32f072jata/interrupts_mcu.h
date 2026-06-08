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
* @brief HC32F072JATA MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_PORTA = 16;
static const int INTERRUPTS_PORTB = 17;
static const int INTERRUPTS_PORTC_E = 18;
static const int INTERRUPTS_PORTD_F = 19;
static const int INTERRUPTS_DMAC = 20;
static const int INTERRUPTS_TIM3 = 21;
static const int INTERRUPTS_UART0_2 = 22;
static const int INTERRUPTS_UART1_3 = 23;
static const int INTERRUPTS_LPUART0 = 24;
static const int INTERRUPTS_LPUART1 = 25;
static const int INTERRUPTS_SPI0_I2S0 = 26;
static const int INTERRUPTS_SPI1_I2S1 = 27;
static const int INTERRUPTS_I2C0 = 28;
static const int INTERRUPTS_I2C1 = 29;
static const int INTERRUPTS_TIM0 = 30;
static const int INTERRUPTS_TIM1 = 31;
static const int INTERRUPTS_TIM2 = 32;
static const int INTERRUPTS_ADTIM4 = 34;
static const int INTERRUPTS_ADTIM5 = 35;
static const int INTERRUPTS_ADTIM6 = 36;
static const int INTERRUPTS_PCA = 37;
static const int INTERRUPTS_WDT = 38;
static const int INTERRUPTS_ADC_DAC = 40;
static const int INTERRUPTS_VC0_1_2_LVD = 42;
static const int INTERRUPTS_USBFS = 43;
static const int INTERRUPTS_CAN = 44;
static const int INTERRUPTS_FLASH_RAM = 46;
static const int INTERRUPTS_CLKTRIM_CTS = 47;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for HC32F072JATA.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for HC32F072JATA.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
