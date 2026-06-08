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
* @brief A33M116SN MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_LVI = 16;
static const int INTERRUPTS_SYSCLKFAIL = 17;
static const int INTERRUPTS_XOSCFAIL = 18;
static const int INTERRUPTS_WDT = 22;
static const int INTERRUPTS_FRT = 24;
static const int INTERRUPTS_CFMC = 27;
static const int INTERRUPTS_DFMC = 28;
static const int INTERRUPTS_TIMER0 = 31;
static const int INTERRUPTS_TIMER1 = 32;
static const int INTERRUPTS_TIMER2 = 33;
static const int INTERRUPTS_TIMER3 = 34;
static const int INTERRUPTS_TIMER4 = 35;
static const int INTERRUPTS_TIMER5 = 36;
static const int INTERRUPTS_TIMER6 = 37;
static const int INTERRUPTS_TIMER7 = 38;
static const int INTERRUPTS_QEI0 = 47;
static const int INTERRUPTS_QEI1 = 48;
static const int INTERRUPTS_GPIOA = 52;
static const int INTERRUPTS_GPIOB = 53;
static const int INTERRUPTS_GPIOC = 54;
static const int INTERRUPTS_GPIOD = 55;
static const int INTERRUPTS_GPIOF = 57;
static const int INTERRUPTS_GPIOG = 58;
static const int INTERRUPTS_MPWM0PROT = 61;
static const int INTERRUPTS_MPWM0OVV = 62;
static const int INTERRUPTS_MPWM0U = 63;
static const int INTERRUPTS_MPWM0V = 64;
static const int INTERRUPTS_MPWM0W = 65;
static const int INTERRUPTS_MPWM1PROT = 66;
static const int INTERRUPTS_MPWM1OVV = 67;
static const int INTERRUPTS_MPWM1U = 68;
static const int INTERRUPTS_MPWM1V = 69;
static const int INTERRUPTS_MPWM1W = 70;
static const int INTERRUPTS_SPI0 = 71;
static const int INTERRUPTS_SPI1 = 72;
static const int INTERRUPTS_I2C0 = 76;
static const int INTERRUPTS_I2C1 = 77;
static const int INTERRUPTS_UART0 = 79;
static const int INTERRUPTS_UART1 = 80;
static const int INTERRUPTS_UART2 = 81;
static const int INTERRUPTS_UART3 = 82;
static const int INTERRUPTS_ADC0 = 90;
static const int INTERRUPTS_ADC1 = 91;
static const int INTERRUPTS_AFE0 = 95;
static const int INTERRUPTS_AFE1 = 96;
static const int INTERRUPTS_AFE2 = 97;
static const int INTERRUPTS_AFE3 = 98;
static const int INTERRUPTS_CRC = 101;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for A33M116SN.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for A33M116SN.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
