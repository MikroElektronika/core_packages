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
* @brief EFM32GG12B830F512IL112 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_EMU = 16;
static const int INTERRUPTS_WDOG0 = 17;
static const int INTERRUPTS_LDMA = 18;
static const int INTERRUPTS_GPIO_EVEN = 19;
static const int INTERRUPTS_SMU = 20;
static const int INTERRUPTS_TIMER0 = 21;
static const int INTERRUPTS_USART0_RX = 22;
static const int INTERRUPTS_USART0_TX = 23;
static const int INTERRUPTS_ACMP0 = 24;
static const int INTERRUPTS_ADC0 = 25;
static const int INTERRUPTS_IDAC0 = 26;
static const int INTERRUPTS_I2C0 = 27;
static const int INTERRUPTS_I2C1 = 28;
static const int INTERRUPTS_GPIO_ODD = 29;
static const int INTERRUPTS_TIMER1 = 30;
static const int INTERRUPTS_TIMER2 = 31;
static const int INTERRUPTS_TIMER3 = 32;
static const int INTERRUPTS_USART1_RX = 33;
static const int INTERRUPTS_USART1_TX = 34;
static const int INTERRUPTS_USART2_RX = 35;
static const int INTERRUPTS_USART2_TX = 36;
static const int INTERRUPTS_UART0_RX = 37;
static const int INTERRUPTS_UART0_TX = 38;
static const int INTERRUPTS_UART1_RX = 39;
static const int INTERRUPTS_UART1_TX = 40;
static const int INTERRUPTS_LEUART0 = 41;
static const int INTERRUPTS_LEUART1 = 42;
static const int INTERRUPTS_LETIMER0 = 43;
static const int INTERRUPTS_PCNT0 = 44;
static const int INTERRUPTS_PCNT1 = 45;
static const int INTERRUPTS_PCNT2 = 46;
static const int INTERRUPTS_RTCC = 47;
static const int INTERRUPTS_CMU = 48;
static const int INTERRUPTS_MSC = 49;
static const int INTERRUPTS_CRYPTO0 = 50;
static const int INTERRUPTS_CRYOTIMER = 51;
static const int INTERRUPTS_FPUEH = 52;
static const int INTERRUPTS_USART3_RX = 53;
static const int INTERRUPTS_USART3_TX = 54;
static const int INTERRUPTS_USART4_RX = 55;
static const int INTERRUPTS_USART4_TX = 56;
static const int INTERRUPTS_WTIMER0 = 57;
static const int INTERRUPTS_WTIMER1 = 58;
static const int INTERRUPTS_VDAC0 = 59;
static const int INTERRUPTS_CSEN = 60;
static const int INTERRUPTS_LESENSE = 61;
static const int INTERRUPTS_EBI = 62;
static const int INTERRUPTS_ACMP2 = 63;
static const int INTERRUPTS_ADC1 = 64;
static const int INTERRUPTS_LCD = 65;
static const int INTERRUPTS_SDIO = 66;
static const int INTERRUPTS_CAN0 = 67;
static const int INTERRUPTS_CAN1 = 68;
static const int INTERRUPTS_USB = 69;
static const int INTERRUPTS_RTC = 70;
static const int INTERRUPTS_WDOG1 = 71;
static const int INTERRUPTS_LETIMER1 = 72;
static const int INTERRUPTS_TRNG0 = 73;
static const int INTERRUPTS_QSPI0 = 74;
static const int INTERRUPTS_PDM = 75;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for EFM32GG12B830F512IL112.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for EFM32GG12B830F512IL112.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
