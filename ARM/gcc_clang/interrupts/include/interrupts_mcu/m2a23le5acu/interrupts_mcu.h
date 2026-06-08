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
* @brief M2A23LE5ACU MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_BOD = 16;
static const int INTERRUPTS_IRC = 17;
static const int INTERRUPTS_PWRWU = 18;
static const int INTERRUPTS_RAMPE = 19;
static const int INTERRUPTS_CKFAIL = 20;
static const int INTERRUPTS_ISP = 21;
static const int INTERRUPTS_WDT = 24;
static const int INTERRUPTS_WWDT = 25;
static const int INTERRUPTS_EINT0 = 26;
static const int INTERRUPTS_EINT1 = 27;
static const int INTERRUPTS_EINT2 = 28;
static const int INTERRUPTS_EINT3 = 29;
static const int INTERRUPTS_EINT4 = 30;
static const int INTERRUPTS_EINT5 = 31;
static const int INTERRUPTS_GPA = 32;
static const int INTERRUPTS_GPB = 33;
static const int INTERRUPTS_GPC = 34;
static const int INTERRUPTS_GPD = 35;
static const int INTERRUPTS_GPF = 37;
static const int INTERRUPTS_SPI0 = 39;
static const int INTERRUPTS_BRAKE0 = 40;
static const int INTERRUPTS_PWM0P0 = 41;
static const int INTERRUPTS_PWM0P1 = 42;
static const int INTERRUPTS_PWM0P2 = 43;
static const int INTERRUPTS_TMR0 = 48;
static const int INTERRUPTS_TMR1 = 49;
static const int INTERRUPTS_TMR2 = 50;
static const int INTERRUPTS_TMR3 = 51;
static const int INTERRUPTS_UART0 = 52;
static const int INTERRUPTS_UART1 = 53;
static const int INTERRUPTS_I2C0 = 54;
static const int INTERRUPTS_PDMA0 = 56;
static const int INTERRUPTS_ADC0 = 58;
static const int INTERRUPTS_ACMP01 = 60;
static const int INTERRUPTS_BPWM0 = 61;
static const int INTERRUPTS_LLSI0 = 62;
static const int INTERRUPTS_LLSI1 = 63;
static const int INTERRUPTS_CANFD00 = 64;
static const int INTERRUPTS_CANFD01 = 65;
static const int INTERRUPTS_CANFD10 = 66;
static const int INTERRUPTS_CANFD11 = 67;
static const int INTERRUPTS_CANFD20 = 68;
static const int INTERRUPTS_CANFD21 = 69;
static const int INTERRUPTS_USCI0 = 72;
static const int INTERRUPTS_USCI1 = 73;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for M2A23LE5ACU.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for M2A23LE5ACU.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
