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
* @brief LPC1788FET180 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_WDT = 16;
static const int INTERRUPTS_TIMER0 = 17;
static const int INTERRUPTS_TIMER1 = 18;
static const int INTERRUPTS_TIMER2 = 19;
static const int INTERRUPTS_TIMER3 = 20;
static const int INTERRUPTS_UART0 = 21;
static const int INTERRUPTS_UART1 = 22;
static const int INTERRUPTS_UART2 = 23;
static const int INTERRUPTS_UART3 = 24;
static const int INTERRUPTS_PWM1 = 25;
static const int INTERRUPTS_I2C0 = 26;
static const int INTERRUPTS_I2C1 = 27;
static const int INTERRUPTS_I2C2 = 28;
static const int INTERRUPTS_Reserved0 = 29;
static const int INTERRUPTS_SSP0 = 30;
static const int INTERRUPTS_SSP1 = 31;
static const int INTERRUPTS_PLL0 = 32;
static const int INTERRUPTS_RTC = 33;
static const int INTERRUPTS_EINT0 = 34;
static const int INTERRUPTS_EINT1 = 35;
static const int INTERRUPTS_EINT2 = 36;
static const int INTERRUPTS_EINT3 = 37;
static const int INTERRUPTS_ADC = 38;
static const int INTERRUPTS_BOD = 39;
static const int INTERRUPTS_USB = 40;
static const int INTERRUPTS_CAN = 41;
static const int INTERRUPTS_DMA = 42;
static const int INTERRUPTS_I2S = 43;
static const int INTERRUPTS_ENET = 44;
static const int INTERRUPTS_MCI = 45;
static const int INTERRUPTS_MCPWM = 46;
static const int INTERRUPTS_QEI = 47;
static const int INTERRUPTS_PLL1 = 48;
static const int INTERRUPTS_USBActivity = 49;
static const int INTERRUPTS_CANActivity = 50;
static const int INTERRUPTS_UART4 = 51;
static const int INTERRUPTS_SSP2 = 52;
static const int INTERRUPTS_LCD = 53;
static const int INTERRUPTS_GPIO = 54;
static const int INTERRUPTS_PWM0 = 55;
static const int INTERRUPTS_EEPROM = 56;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for LPC1788FET180.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for LPC1788FET180.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
