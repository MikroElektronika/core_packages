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
* @brief EZR32HG220F32R60 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_DMA = 16;
static const int INTERRUPTS_GPIO_EVEN = 17;
static const int INTERRUPTS_TIMER0 = 18;
static const int INTERRUPTS_ADC0 = 20;
static const int INTERRUPTS_I2C0 = 21;
static const int INTERRUPTS_GPIO_ODD = 22;
static const int INTERRUPTS_TIMER1 = 23;
static const int INTERRUPTS_USARTRF1_RX = 24;
static const int INTERRUPTS_USARTRF1_TX = 25;
static const int INTERRUPTS_LEUART0 = 26;
static const int INTERRUPTS_PCNT0 = 27;
static const int INTERRUPTS_RTC = 28;
static const int INTERRUPTS_CMU = 29;
static const int INTERRUPTS_VCMP = 30;
static const int INTERRUPTS_MSC = 31;
static const int INTERRUPTS_AES = 32;
static const int INTERRUPTS_USART0_RX = 33;
static const int INTERRUPTS_USART0_TX = 34;
static const int INTERRUPTS_TIMER2 = 36;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for EZR32HG220F32R60.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for EZR32HG220F32R60.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
