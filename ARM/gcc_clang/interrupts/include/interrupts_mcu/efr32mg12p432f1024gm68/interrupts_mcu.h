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
* @brief EFR32MG12P432F1024GM68 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_EMU = 16;
static const int INTERRUPTS_FRC_PRI = 17;
static const int INTERRUPTS_WDOG0 = 18;
static const int INTERRUPTS_WDOG1 = 19;
static const int INTERRUPTS_FRC = 20;
static const int INTERRUPTS_MODEM = 21;
static const int INTERRUPTS_RAC_SEQ = 22;
static const int INTERRUPTS_RAC_RSM = 23;
static const int INTERRUPTS_BUFC = 24;
static const int INTERRUPTS_LDMA = 25;
static const int INTERRUPTS_GPIO_EVEN = 26;
static const int INTERRUPTS_TIMER0 = 27;
static const int INTERRUPTS_USART0_RX = 28;
static const int INTERRUPTS_USART0_TX = 29;
static const int INTERRUPTS_ACMP0 = 30;
static const int INTERRUPTS_ADC0 = 31;
static const int INTERRUPTS_IDAC0 = 32;
static const int INTERRUPTS_I2C0 = 33;
static const int INTERRUPTS_GPIO_ODD = 34;
static const int INTERRUPTS_TIMER1 = 35;
static const int INTERRUPTS_USART1_RX = 36;
static const int INTERRUPTS_USART1_TX = 37;
static const int INTERRUPTS_LEUART0 = 38;
static const int INTERRUPTS_PCNT0 = 39;
static const int INTERRUPTS_CMU = 40;
static const int INTERRUPTS_MSC = 41;
static const int INTERRUPTS_CRYPTO0 = 42;
static const int INTERRUPTS_LETIMER0 = 43;
static const int INTERRUPTS_AGC = 44;
static const int INTERRUPTS_PROTIMER = 45;
static const int INTERRUPTS_RTCC = 46;
static const int INTERRUPTS_SYNTH = 47;
static const int INTERRUPTS_CRYOTIMER = 48;
static const int INTERRUPTS_RFSENSE = 49;
static const int INTERRUPTS_FPUEH = 50;
static const int INTERRUPTS_SMU = 51;
static const int INTERRUPTS_WTIMER0 = 52;
static const int INTERRUPTS_WTIMER1 = 53;
static const int INTERRUPTS_PCNT1 = 54;
static const int INTERRUPTS_PCNT2 = 55;
static const int INTERRUPTS_USART2_RX = 56;
static const int INTERRUPTS_USART2_TX = 57;
static const int INTERRUPTS_I2C1 = 58;
static const int INTERRUPTS_USART3_RX = 59;
static const int INTERRUPTS_USART3_TX = 60;
static const int INTERRUPTS_VDAC0 = 61;
static const int INTERRUPTS_CSEN = 62;
static const int INTERRUPTS_LESENSE = 63;
static const int INTERRUPTS_CRYPTO1 = 64;
static const int INTERRUPTS_TRNG0 = 65;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for EFR32MG12P432F1024GM68.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for EFR32MG12P432F1024GM68.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
