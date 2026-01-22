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
* @brief EFR32FG1V232F256GM32 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_EMU = 16;
static const int INTERRUPTS_FRC_PRI = 17;
static const int INTERRUPTS_WDOG0 = 18;
static const int INTERRUPTS_FRC = 19;
static const int INTERRUPTS_MODEM = 20;
static const int INTERRUPTS_RAC_SEQ = 21;
static const int INTERRUPTS_RAC_RSM = 22;
static const int INTERRUPTS_BUFC = 23;
static const int INTERRUPTS_LDMA = 24;
static const int INTERRUPTS_GPIO_EVEN = 25;
static const int INTERRUPTS_TIMER0 = 26;
static const int INTERRUPTS_USART0_RX = 27;
static const int INTERRUPTS_USART0_TX = 28;
static const int INTERRUPTS_ADC0 = 30;
static const int INTERRUPTS_I2C0 = 32;
static const int INTERRUPTS_GPIO_ODD = 33;
static const int INTERRUPTS_TIMER1 = 34;
static const int INTERRUPTS_USART1_RX = 35;
static const int INTERRUPTS_USART1_TX = 36;
static const int INTERRUPTS_LEUART0 = 37;
static const int INTERRUPTS_CMU = 39;
static const int INTERRUPTS_MSC = 40;
static const int INTERRUPTS_CRYPTO = 41;
static const int INTERRUPTS_LETIMER0 = 42;
static const int INTERRUPTS_AGC = 43;
static const int INTERRUPTS_PROTIMER = 44;
static const int INTERRUPTS_RTCC = 45;
static const int INTERRUPTS_SYNTH = 46;
static const int INTERRUPTS_CRYOTIMER = 47;
static const int INTERRUPTS_RFSENSE = 48;
static const int INTERRUPTS_FPUEH = 49;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for EFR32FG1V232F256GM32.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for EFR32FG1V232F256GM32.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
